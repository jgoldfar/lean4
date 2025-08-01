/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich
-/
module

prelude
public import Lean.Structure
public import Lean.Elab.Attributes
public import Lean.DocString.Add
public import Lean.Parser.Command
meta import Lean.Parser.Command

public section

namespace Lean.Elab

/--
Ensure the environment does not contain a declaration with name `declName`.
Recall that a private declaration cannot shadow a non-private one and vice-versa, although
they internally have different names.
-/
def checkNotAlreadyDeclared {m} [Monad m] [MonadEnv m] [MonadError m] [MonadInfoTree m] (declName : Name) : m Unit := do
  let env ← getEnv
  let addInfo declName := do
    pushInfoLeaf <| .ofTermInfo {
      elaborator := .anonymous, lctx := {}, expectedType? := none
      stx := (← getRef)
      expr := (← mkConstWithLevelParams declName)
    }
  if env.contains declName then
    addInfo declName
    match privateToUserName? declName with
    | none          => throwError "'{.ofConstName declName true}' has already been declared"
    | some declName => throwError "private declaration '{.ofConstName declName true}' has already been declared"
  if isReservedName env (privateToUserName declName) || isReservedName env (mkPrivateName (← getEnv) declName) then
    throwError "'{declName}' is a reserved name"
  if env.contains (mkPrivateName env declName) then
    addInfo (mkPrivateName env declName)
    throwError "a private declaration '{.ofConstName declName true}' has already been declared"
  match privateToUserName? declName with
  | none => pure ()
  | some declName =>
    if env.contains declName then
      addInfo declName
      throwError "a non-private declaration '{.ofConstName declName true}' has already been declared"

/-- Declaration visibility modifier. That is, whether a declaration is regular, protected or private. -/
inductive Visibility where
  | regular | «protected» | «private» | «public»
  deriving Inhabited

instance : ToString Visibility where
  toString
    | .regular   => "regular"
    | .private   => "private"
    | .protected => "protected"
    | .public    => "public"

def Visibility.isPrivate : Visibility → Bool
  | .private   => true
  | _          => false

def Visibility.isProtected : Visibility → Bool
  | .protected => true
  | _          => false

def Visibility.isPublic : Visibility → Bool
  | .public    => true
  | _          => false

def Visibility.isInferredPublic (env : Environment) (v : Visibility) : Bool :=
  if env.isExporting || !env.header.isModule then !v.isPrivate else v.isPublic

/-- Whether a declaration is default, partial or nonrec. -/
inductive RecKind where
  | «partial» | «nonrec» | default
  deriving Inhabited

/-- Codegen-relevant modifiers. -/
inductive ComputeKind where
  | regular | «meta» | «noncomputable»
  deriving Inhabited

/-- Flags and data added to declarations (eg docstrings, attributes, `private`, `unsafe`, `partial`, ...). -/
structure Modifiers where
  /-- Input syntax, used for adjusting declaration range (unless missing) -/
  stx             : TSyntax ``Parser.Command.declModifiers := ⟨.missing⟩
  docString?      : Option (TSyntax ``Parser.Command.docComment) := none
  visibility      : Visibility := Visibility.regular
  computeKind     : ComputeKind := .regular
  recKind         : RecKind := RecKind.default
  isUnsafe        : Bool := false
  attrs           : Array Attribute := #[]
  deriving Inhabited

def Modifiers.isPrivate (m : Modifiers) : Bool := m.visibility.isPrivate
def Modifiers.isProtected (m : Modifiers) : Bool := m.visibility.isProtected
def Modifiers.isPublic (m : Modifiers) : Bool := m.visibility.isPublic
def Modifiers.isInferredPublic (env : Environment) (m : Modifiers) : Bool :=
  m.visibility.isInferredPublic env

def Modifiers.isPartial : Modifiers → Bool
  | { recKind := .partial, .. }  => true
  | _                            => false

/--
Whether the declaration is explicitly `partial` or should be considered as such via `meta`. In the
latter case, elaborators should not produce an error if partiality is unnecessary.
-/
def Modifiers.isInferredPartial : Modifiers → Bool
  | { recKind := .partial, .. }  => true
  | { computeKind := .meta, .. } => true
  | _                            => false

def Modifiers.isNonrec : Modifiers → Bool
  | { recKind := .nonrec, .. } => true
  | _                          => false

def Modifiers.isMeta (m : Modifiers) : Bool :=
  m.computeKind matches .meta

def Modifiers.isNoncomputable (m : Modifiers) : Bool :=
  m.computeKind matches .noncomputable

/-- Adds attribute `attr` in `modifiers` -/
def Modifiers.addAttr (modifiers : Modifiers) (attr : Attribute) : Modifiers :=
  { modifiers with attrs := modifiers.attrs.push attr }

/-- Adds attribute `attr` in `modifiers`, at the beginning -/
def Modifiers.addFirstAttr (modifiers : Modifiers) (attr : Attribute) : Modifiers :=
  { modifiers with attrs := #[attr] ++ modifiers.attrs }

/-- Filters attributes using `p` -/
def Modifiers.filterAttrs (modifiers : Modifiers) (p : Attribute → Bool) : Modifiers :=
  { modifiers with attrs := modifiers.attrs.filter p }

instance : ToFormat Modifiers := ⟨fun m =>
  let components : List Format :=
    (match m.docString? with
     | some str => [f!"/--{str}-/"]
     | none     => [])
    ++ (match m.visibility with
     | .regular   => []
     | .private   => [f!"private"]
     | .protected => [f!"protected"]
     | .public    => [f!"public"])
    ++ (match m.computeKind with | .regular => [] | .meta => [f!"meta"] | .noncomputable => [f!"noncomputable"])
    ++ (match m.recKind with | RecKind.partial => [f!"partial"] | RecKind.nonrec => [f!"nonrec"] | _ => [])
    ++ (if m.isUnsafe then [f!"unsafe"] else [])
    ++ m.attrs.toList.map (fun attr => format attr)
  Format.bracket "{" (Format.joinSep components ("," ++ Format.line)) "}"⟩

instance : ToString Modifiers := ⟨toString ∘ format⟩

/--
Retrieve doc string from `stx` of the form `(docComment)?`.
-/
def expandOptDocComment? [Monad m] [MonadError m] (optDocComment : Syntax) : m (Option String) :=
  match optDocComment.getOptional? with
  | none   => return none
  | some s => match s[1] with
    | .atom _ val => return some (val.extract 0 (val.endPos - ⟨2⟩))
    | _           => throwErrorAt s "unexpected doc string{indentD s[1]}"

section Methods

variable [Monad m] [MonadEnv m] [MonadResolveName m] [MonadError m] [MonadMacroAdapter m] [MonadRecDepth m] [MonadTrace m] [MonadOptions m] [AddMessageContext m] [MonadLog m] [MonadInfoTree m] [MonadLiftT IO m]

/-- Elaborate declaration modifiers (i.e., attributes, `partial`, `private`, `protected`, `unsafe`, `meta`, `noncomputable`, doc string)-/
def elabModifiers (stx : TSyntax ``Parser.Command.declModifiers) : m Modifiers := do
  let docCommentStx := stx.raw[0]
  let attrsStx      := stx.raw[1]
  let visibilityStx := stx.raw[2]
  let computeKind   :=
    if stx.raw[3].isNone then
      .regular
    else if stx.raw[3][0].getKind == ``Parser.Command.meta then
      .meta
    else
      .noncomputable
  let unsafeStx     := stx.raw[4]
  let recKind       :=
    if stx.raw[5].isNone then
      RecKind.default
    else if stx.raw[5][0].getKind == ``Parser.Command.partial then
      RecKind.partial
    else
      RecKind.nonrec
  let docString? := docCommentStx.getOptional?.map TSyntax.mk
  let visibility ← match visibilityStx.getOptional? with
    | none   => pure .regular
    | some v =>
      match v with
      | `(Parser.Command.visibility| private) => pure .private
      | `(Parser.Command.visibility| protected) => pure .protected
      | `(Parser.Command.visibility| public) => pure .public
      | _ => throwErrorAt v "unexpected visibility modifier"
  let attrs ← match attrsStx.getOptional? with
    | none       => pure #[]
    | some attrs => elabDeclAttrs attrs
  return {
    stx, docString?, visibility, computeKind, recKind, attrs,
    isUnsafe        := !unsafeStx.isNone
  }

/--
Ensure the function has not already been declared, and apply the given visibility setting to `declName`.
If `private`, return the updated name using our internal encoding for private names.
If `protected`, register `declName` as protected in the environment.
-/
def applyVisibility (visibility : Visibility) (declName : Name) : m Name := do
  let mut declName := declName
  if !visibility.isInferredPublic (← getEnv) then
    declName := mkPrivateName (← getEnv) declName
  checkNotAlreadyDeclared declName
  if visibility matches .protected then
    modifyEnv fun env => addProtected env declName
  pure declName

def checkIfShadowingStructureField (declName : Name) : m Unit := do
  match declName with
  | Name.str pre .. =>
    if isStructure (← getEnv) pre then
      let fieldNames := getStructureFieldsFlattened (← getEnv) pre
      for fieldName in fieldNames do
        if pre ++ fieldName == declName then
          throwError "invalid declaration name '{declName}', structure '{pre}' has field '{fieldName}'"
  | _ => pure ()

def mkDeclName (currNamespace : Name) (modifiers : Modifiers) (shortName : Name) : m (Name × Name) := do
  let mut shortName := shortName
  let mut currNamespace := currNamespace
  let view := extractMacroScopes shortName
  let name := view.name
  let isRootName := (`_root_).isPrefixOf name
  if name == `_root_ then
    throwError "invalid declaration name `_root_`, `_root_` is a prefix used to refer to the 'root' namespace"
  let declName := if isRootName then { view with name := name.replacePrefix `_root_ Name.anonymous }.review else currNamespace ++ shortName
  if isRootName then
    let .str p s := name | throwError "invalid declaration name '{name}'"
    shortName := Name.mkSimple s
    currNamespace := p.replacePrefix `_root_ Name.anonymous
  checkIfShadowingStructureField declName
  let declName ← applyVisibility modifiers.visibility declName
  match modifiers.visibility with
  | Visibility.protected =>
    match currNamespace with
    | .str _ s => return (declName, Name.mkSimple s ++ shortName)
    | _ =>
      if shortName.isAtomic then
        throwError "protected declarations must be in a namespace"
      return (declName, shortName)
  | _ => return (declName, shortName)

/--
  `declId` is of the form
  ```
  leading_parser ident >> optional (".{" >> sepBy1 ident ", " >> "}")
  ```
  but we also accept a single identifier to users to make macro writing more convenient .
-/
def expandDeclIdCore (declId : Syntax) : Name × Syntax :=
  if declId.isIdent then
    (declId.getId, mkNullNode)
  else
    let id             := declId[0].getId
    let optUnivDeclStx := declId[1]
    (id, optUnivDeclStx)

/-- `expandDeclId` resulting type. -/
structure ExpandDeclIdResult where
  /-- Short name for recursively referring to the declaration. -/
  shortName  : Name
  /-- Fully qualified name that will be used to name the declaration in the kernel. -/
  declName   : Name
  /-- Universe parameter names provided using the `universe` command and `.{...}` notation. -/
  levelNames : List Name

/--
Given a declaration identifier (e.g., `ident (".{" ident,+ "}")?`) that may contain explicit universe parameters
- Ensure the new universe parameters do not shadow universe parameters declared using `universe` command.
- Create the fully qualified named for the declaration using the current namespace, and given `modifiers`
- Create a short version for recursively referring to the declaration. Recall that the `protected` modifier affects the generation of the short name.

The result also contains the universe parameters provided using `universe` command, and the `.{...}` notation.

This commands also stores the doc string stored in `modifiers`.
-/
def expandDeclId (currNamespace : Name) (currLevelNames : List Name) (declId : Syntax) (modifiers : Modifiers) : m ExpandDeclIdResult := do
  -- ident >> optional (".{" >> sepBy1 ident ", " >> "}")
  let (shortName, optUnivDeclStx) := expandDeclIdCore declId
  let levelNames ← if optUnivDeclStx.isNone then
    pure currLevelNames
  else
    let extraLevels := optUnivDeclStx[1].getArgs.getEvenElems
    extraLevels.foldlM
      (fun levelNames idStx =>
        let id := idStx.getId
        if levelNames.elem id then
          withRef idStx <| throwAlreadyDeclaredUniverseLevel id
        else
          pure (id :: levelNames))
      currLevelNames
  let (declName, shortName) ← withRef declId <| mkDeclName currNamespace modifiers shortName
  addDocString' declName modifiers.docString?
  return { shortName := shortName, declName := declName, levelNames := levelNames }

end Methods

end Lean.Elab
