/-
Copyright (c) 2024 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Init.Grind.Tactics
public import Init.Data.Queue
public import Std.Data.TreeSet.Basic
public import Lean.HeadIndex
public import Lean.Meta.Basic
public import Lean.Meta.CongrTheorems
public import Lean.Meta.AbstractNestedProofs
public import Lean.Meta.Tactic.Simp.Types
public import Lean.Meta.Tactic.Util
public import Lean.Meta.Tactic.Ext
public import Lean.Meta.Tactic.Grind.ExprPtr
public import Lean.Meta.Tactic.Grind.AlphaShareCommon
public import Lean.Meta.Tactic.Grind.Attr
public import Lean.Meta.Tactic.Grind.ExtAttr
public import Lean.Meta.Tactic.Grind.Cases
public import Lean.Meta.Tactic.Grind.Arith.Types
public import Lean.Meta.Tactic.Grind.EMatchTheorem
meta import Lean.Parser.Do

public section

namespace Lean.Meta.Grind

/-- We use this auxiliary constant to mark delayed congruence proofs. -/
def congrPlaceholderProof := mkConst (Name.mkSimple "[congruence]")

/--
Returns `true` if `e` is `True`, `False`, or a literal value.
See `Lean.Meta.LitValues` for supported literals.
-/
def isInterpreted (e : Expr) : MetaM Bool := do
  if e.isTrue || e.isFalse then return true
  isLitValue e

register_builtin_option grind.debug : Bool := {
  defValue := false
  group    := "debug"
  descr    := "check invariants after updates"
}

register_builtin_option grind.debug.proofs : Bool := {
  defValue := false
  group    := "debug"
  descr    := "check proofs between the elements of all equivalence classes"
}

register_builtin_option grind.warning : Bool := {
  defValue := false
  group    := "debug"
  descr    := "generate a warning whenever `grind` is used"
}

/--
Case-split source. That is, where it came from.
We store the current source in the `grind` context.
-/
inductive SplitSource where
  | /-- Generated while instantiating a theorem using E-matching. -/
    ematch (origin : Origin)
  | /-- Generated while instantiating an extensionality theorem with name `declName` -/
    ext (declName : Name)
  | /-- Model-based theory combination equality coming from the i-th argument of applications `a` and `b` -/
    mbtc (a b : Expr) (i : Nat)
  | /-- Beta-reduction. -/
    beta (e : Expr)
  | /-- Forall-propagator. -/
    forallProp (e : Expr)
  | /-- Exists-propagator. -/
    existsProp (e : Expr)
  | /-- Input goal -/
    input
  deriving Inhabited

def SplitSource.toMessageData : SplitSource → MetaM MessageData
  | .ematch origin => return m!"E-matching {← origin.pp}"
  | .ext declName => return m!"Extensionality {declName}"
  | .mbtc a b i => return m!"Model-based theory combination at argument #{i} of{indentExpr a}\nand{indentExpr b}"
  | .beta e => return m!"Beta-reduction of{indentExpr e}"
  | .forallProp e => return m!"Forall propagation at{indentExpr e}"
  | .existsProp e => return m!"Exists propagation at{indentExpr e}"
  | .input => return m!"Initial goal"

/-- Context for `GrindM` monad. -/
structure Context where
  simp         : Simp.Context
  simpMethods  : Simp.Methods
  config       : Grind.Config
  /--
  If `cheapCases` is `true`, `grind` only applies `cases` to types that contain
  at most one minor premise.
  Recall that `grind` applies `cases` when introducing types tagged with `[grind cases eager]`,
  and at `Split.lean`
  Remark: We add this option to implement the `lookahead` feature, we don't want to create several subgoals
  when performing lookahead.
  -/
  cheapCases : Bool := false
  /-
  If `reportMVarIssue` is `true`, `grind` reports an issue when internalizing metavariables.
  The default value is `true`. We set it to `false` when invoking `proveEq` from the `instantiateTheorem`
  at in the E-matching module. There, the terms may contain metavariables, and we don't want to bother
  user with "false-alarms". If the instantiation fails, we produce a more informative issue anyways.
  -/
  reportMVarIssue : Bool := true
  /-- Current source of case-splits. -/
  splitSource  : SplitSource := .input
  /-- Symbol priorities for inferring E-matching patterns -/
  symPrios     : SymbolPriorities
  trueExpr     : Expr
  falseExpr    : Expr
  natZExpr     : Expr
  btrueExpr    : Expr
  bfalseExpr   : Expr
  ordEqExpr    : Expr -- `Ordering.eq`
  intExpr      : Expr -- `Int`

/-- Key for the congruence theorem cache. -/
structure CongrTheoremCacheKey where
  f       : Expr
  numArgs : Nat

-- We manually define `BEq` because we want to use pointer equality.
instance : BEq CongrTheoremCacheKey where
  beq a b := isSameExpr a.f b.f && a.numArgs == b.numArgs

-- We manually define `Hashable` because we want to use pointer equality.
instance : Hashable CongrTheoremCacheKey where
  hash a := mixHash (hashPtrExpr a.f) (hash a.numArgs)

structure EMatchTheoremTrace where
  origin : Origin
  kind   : EMatchTheoremKind
  deriving BEq, Hashable

/--
E-match theorems and case-splits performed by `grind`.
Note that it may contain elements that are not needed by the final proof.
For example, `grind` instantiated the theorem, but theorem instance was not actually used
in the proof.
-/
structure Trace where
  thms       : PHashSet EMatchTheoremTrace := {}
  eagerCases : PHashSet Name := {}
  cases      : PHashSet Name := {}
  deriving Inhabited

structure Counters where
  /-- Number of times E-match theorem has been instantiated. -/
  thm  : PHashMap Origin Nat := {}
  /-- Number of times a `cases` has been performed on an inductive type/predicate -/
  case : PHashMap Name Nat := {}
  /-- Number of applications per function symbol. This information is only collected if `set_option diagnostics true` -/
  apps : PHashMap Name Nat := {}
  deriving Inhabited

private def emptySC : ShareCommon.State.{0} ShareCommon.objectFactory := ShareCommon.State.mk _

/-- Case-split diagnostic information -/
structure SplitDiagInfo where
  lctx        : LocalContext
  c           : Expr
  gen         : Nat
  numCases    : Nat
  splitSource : SplitSource

/-- State for the `GrindM` monad. -/
structure State where
  /-- `ShareCommon` (aka `Hashconsing`) state. -/
  scState    : AlphaShareCommon.State := {}
  /--
  Congruence theorems generated so far. Recall that for constant symbols
  we rely on the reserved name feature (i.e., `mkHCongrWithArityForConst?`).
  Remark: we currently do not reuse congruence theorems
  -/
  congrThms  : PHashMap CongrTheoremCacheKey CongrTheorem := {}
  simp       : Simp.State := {}
  /--
  Used to generate trace messages of the for `[grind] working on <tag>`,
  and implement the macro `trace_goal`.
  -/
  lastTag    : Name := .anonymous
  /--
  Issues found during the proof search. These issues are reported to
  users when `grind` fails.
  -/
  issues     : List MessageData := []
  /-- `trace` for `grind?` -/
  trace      : Trace := {}
  /-- Performance counters -/
  counters   : Counters := {}
  /-- Split diagnostic information. This information is only collected when `set_option diagnostics true` -/
  splitDiags : PArray SplitDiagInfo := {}
  /--
  Mapping from binary functions `f` to a theorem `thm : ∀ a b, f a b = .eq → a = b`
  if it implements the `LawfulEqCmp` type class.
  -/
  lawfulEqCmpMap : PHashMap ExprPtr (Option Expr) := {}
  /--
  Mapping from binary functions `f` to a theorem `thm : ∀ a, f a a = .eq`
  if it implements the `ReflCmp` type class.
  -/
  reflCmpMap : PHashMap ExprPtr (Option Expr) := {}

private opaque MethodsRefPointed : NonemptyType.{0}
def MethodsRef : Type := MethodsRefPointed.type
instance : Nonempty MethodsRef := by exact MethodsRefPointed.property

abbrev GrindM := ReaderT MethodsRef $ ReaderT Context $ StateRefT State MetaM

@[inline] def mapGrindM [MonadControlT GrindM m] [Monad m] (f : {α : Type} → GrindM α → GrindM α) {α} (x : m α) : m α :=
  controlAt GrindM fun runInBase => f <| runInBase x

/--
`withoutReportingMVarIssues x` executes `x` without reporting metavariables found during internalization.
See comment at `Grind.Context.reportMVarIssue` for additional details.
-/
def withoutReportingMVarIssues [MonadControlT GrindM m] [Monad m] : m α → m α :=
  mapGrindM <| withTheReader Grind.Context fun ctx => { ctx with reportMVarIssue := false }

/--
`withSplitSource s x` executes `x` and uses `s` as the split source for any case-split
registered.
-/
def withSplitSource [MonadControlT GrindM m] [Monad m] (splitSource : SplitSource) : m α → m α :=
  mapGrindM <| withTheReader Grind.Context fun ctx => { ctx with splitSource }

/-- Returns the user-defined configuration options -/
def getConfig : GrindM Grind.Config :=
  return (← readThe Context).config

/-- Returns the internalized `True` constant.  -/
def getTrueExpr : GrindM Expr := do
  return (← readThe Context).trueExpr

/-- Returns the internalized `False` constant.  -/
def getFalseExpr : GrindM Expr := do
  return (← readThe Context).falseExpr

/-- Returns the internalized `Bool.true`.  -/
def getBoolTrueExpr : GrindM Expr := do
  return (← readThe Context).btrueExpr

/-- Returns the internalized `Bool.false`.  -/
def getBoolFalseExpr : GrindM Expr := do
  return (← readThe Context).bfalseExpr

/-- Returns the internalized `0 : Nat` numeral.  -/
def getNatZeroExpr : GrindM Expr := do
  return (← readThe Context).natZExpr

/-- Returns the internalized `Ordering.eq`.  -/
def getOrderingEqExpr : GrindM Expr := do
  return (← readThe Context).ordEqExpr

/-- Returns the internalized `Int`.  -/
def getIntExpr : GrindM Expr := do
  return (← readThe Context).intExpr

def cheapCasesOnly : GrindM Bool :=
  return (← readThe Context).cheapCases

def reportMVarInternalization : GrindM Bool :=
  return (← readThe Context).reportMVarIssue

/-- Returns symbol priorities for inferring E-matching patterns. -/
def getSymbolPriorities : GrindM SymbolPriorities := do
  return (← readThe Context).symPrios

/--
Returns `true` if `declName` is the name of a `match` equation or a `match` congruence equation.
-/
def isMatchEqLikeDeclName (declName : Name) : CoreM Bool := do
  return (← isMatchCongrEqDeclName declName) || Match.isMatchEqnTheorem (← getEnv) declName

private def incCounter [Hashable α] [BEq α] (s : PHashMap α Nat) (k : α) : PHashMap α Nat :=
  if let some n := s.find? k then
      s.insert k (n+1)
    else
      s.insert k 1

private def saveEMatchTheorem (thm : EMatchTheorem) : GrindM Unit := do
  if (← getConfig).trace then
    unless (← isMatchEqLikeDeclName thm.origin.key) do
      modify fun s => { s with trace.thms := s.trace.thms.insert { origin := thm.origin, kind := thm.kind } }
  modify fun s => { s with counters.thm := incCounter s.counters.thm thm.origin }

def saveCases (declName : Name) (eager : Bool) : GrindM Unit := do
  if (← getConfig).trace then
    if eager then
      modify fun s => { s with trace.eagerCases := s.trace.eagerCases.insert declName }
    else
      modify fun s => { s with trace.cases := s.trace.cases.insert declName }
  modify fun s => { s with counters.case := incCounter s.counters.case declName }

def saveAppOf (h : HeadIndex) : GrindM Unit := do
  if (← isDiagnosticsEnabled) then
    let .const declName := h | return ()
    modify fun s => { s with counters.apps := incCounter s.counters.apps declName }

def saveSplitDiagInfo (c : Expr) (gen : Nat) (numCases : Nat) (splitSource : SplitSource) : GrindM Unit := do
  if (← isDiagnosticsEnabled) then
    let lctx ← getLCtx
    modify fun s => { s with splitDiags := s.splitDiags.push { c, gen, lctx, numCases, splitSource } }

@[inline] def getMethodsRef : GrindM MethodsRef :=
  read

/-- Returns maximum term generation that is considered during ematching. -/
def getMaxGeneration : GrindM Nat := do
  return (← getConfig).gen

/--
Abstracts nested proofs in `e`. This is a preprocessing step performed before internalization.
-/
def abstractNestedProofs (e : Expr) : GrindM Expr :=
  Meta.abstractNestedProofs e

/--
Applies hash-consing to `e`. Recall that all expressions in a `grind` goal have
been hash-consed. We perform this step before we internalize expressions.
-/
def shareCommon (e : Expr) : GrindM Expr := do
  let scState ← modifyGet fun s => (s.scState, { s with scState := {} })
  let (e, scState) := shareCommonAlpha e scState
  modify fun s => { s with scState }
  return e

/--
Returns `true` if `e` has already been hash-consed.
Recall that we use `shareCommon` as the last step of the preprocessing
function `preprocess`.
Later, we create terms using new terms that have already been preprocessed,
and we skip preprocessing steps by checking whether `inShareCommon` returns `true`
-/
def inShareCommon (e : Expr) : GrindM Bool := do
  return (← get).scState.map.contains { expr := e }

/-- Returns `true` if `e` is the internalized `True` expression.  -/
def isTrueExpr (e : Expr) : GrindM Bool :=
  return isSameExpr e (← getTrueExpr)

/-- Returns `true` if `e` is the internalized `False` expression.  -/
def isFalseExpr (e : Expr) : GrindM Bool :=
  return isSameExpr e (← getFalseExpr)

/--
Creates a congruence theorem for a `f`-applications with `numArgs` arguments.
-/
def mkHCongrWithArity (f : Expr) (numArgs : Nat) : GrindM CongrTheorem := do
  let key := { f, numArgs }
  if let some result := (← get).congrThms.find? key then
    return result
  if let .const declName us := f then
    if let some result ← withDefault <| Meta.mkHCongrWithArityForConst? declName us numArgs then
      modify fun s => { s with congrThms := s.congrThms.insert key result }
      return result
  let result ← withDefault <| Meta.mkHCongrWithArity f numArgs
  modify fun s => { s with congrThms := s.congrThms.insert key result }
  return result

def reportIssue (msg : MessageData) : GrindM Unit := do
  let msg ← addMessageContext msg
  modify fun s => { s with issues := .trace { cls := `issue } msg #[] :: s.issues }
  /-
  We also add a trace message because we may want to know when
  an issue happened relative to other trace messages.
  -/
  trace[grind.issues] msg

private def expandReportIssueMacro (s : Syntax) : MacroM (TSyntax `doElem) := do
  let msg ← if s.getKind == interpolatedStrKind then `(m! $(⟨s⟩)) else `(($(⟨s⟩) : MessageData))
  `(doElem| do
    if (← getConfig).verbose then
      reportIssue $msg)

macro "reportIssue!" s:(interpolatedStr(term) <|> term) : doElem => do
  expandReportIssueMacro s.raw

/--
Stores information for a node in the egraph.
Each internalized expression `e` has an `ENode` associated with it.
-/
structure ENode where
  /-- Node represented by this ENode. -/
  self : Expr
  /-- Next element in the equivalence class. -/
  next : Expr
  /-- Root (aka canonical representative) of the equivalence class -/
  root : Expr
  /--
  `congr` is the term `self` is congruent to.
  We say `self` is the congruence class root if `isSameExpr congr self`.
  This field is initialized to `self` even if `e` is not an application.
  -/
  congr : Expr
  /--
  When `e` was added to this equivalence class because of an equality `h : e = target`,
  then we store `target` here, and `h` at `proof?`.
  -/
  target? : Option Expr := none
  proof? : Option Expr := none
  /-- Proof has been flipped. -/
  flipped : Bool := false
  /-- Number of elements in the equivalence class, this field is meaningless if node is not the root. -/
  size : Nat := 1
  /-- `interpreted := true` if node should be viewed as an abstract value. -/
  interpreted : Bool := false
  /-- `ctor := true` if the head symbol is a constructor application. -/
  ctor : Bool := false
  /-- `hasLambdas := true` if the equivalence class contains lambda expressions. -/
  hasLambdas : Bool := false
  /--
  If `heqProofs := true`, then some proofs in the equivalence class are based
  on heterogeneous equality.
  -/
  heqProofs : Bool := false
  /-- Unique index used for pretty printing and debugging purposes. -/
  idx : Nat := 0
  /-- The generation in which this enode was created. -/
  generation : Nat := 0
  /-- Modification time -/
  mt : Nat := 0
  /--
  The `offset?` field is used to propagate equalities from the `grind` congruence closure module
  to the offset constraints module. When `grind` merges two equivalence classes, and both have
  an associated `offset?` set to `some e`, the equality is propagated. This field is
  assigned during the internalization of offset terms.
  -/
  offset? : Option Expr := none
  /--
  The `cutsat?` field is used to propagate equalities from the `grind` congruence closure module
  to the cutsat module. Its implementation is similar to the `offset?` field.
  -/
  cutsat? : Option Expr := none
  /--
  The `ring?` field is used to propagate equalities from the `grind` congruence closure module
  to the comm ring module. Its implementation is similar to the `offset?` field.
  -/
  ring? : Option Expr := none
  /--
  The `linarith?` field is used to propagate equalities from the `grind` congruence closure module
  to the linarith module. Its implementation is similar to the `offset?` field.
  -/
  linarith? : Option Expr := none
  -- Remark: we expect to have builtin support for offset constraints, cutsat, comm ring, and linarith.
  -- If the number of satellite solvers increases, we may add support for an arbitrary solvers like done in Z3.
  deriving Inhabited, Repr

def ENode.isRoot (n : ENode) :=
  isSameExpr n.self n.root

def ENode.isCongrRoot (n : ENode) :=
  isSameExpr n.self n.congr

/-- New equalities and facts to be processed. -/
inductive NewFact where
  | eq (lhs rhs proof : Expr) (isHEq : Bool)
  | fact (prop proof : Expr) (generation : Nat)

-- This type should be considered opaque outside this module.
def ENodeMap := PHashMap ExprPtr ENode
instance : Inhabited ENodeMap where
  default := private (id {})  -- TODO(sullrich): `id` works around `private` not respecting the expected type

/--
Key for the congruence table.
We need access to the `enodes` to be able to retrieve the equivalence class roots.
-/
structure CongrKey (enodes : ENodeMap) where
  e : Expr

private def hashRoot (enodes : ENodeMap) (e : Expr) : UInt64 :=
  if let some node := enodes.find? { expr := e } then
    hashPtrExpr node.root
  else
    hashPtrExpr e

private def hasSameRoot (enodes : ENodeMap) (a b : Expr) : Bool := Id.run do
  if isSameExpr a b then
    return true
  else
    let some n1 := enodes.find? { expr := a } | return false
    let some n2 := enodes.find? { expr := b } | return false
    isSameExpr n1.root n2.root

private def congrHash (enodes : ENodeMap) (e : Expr) : UInt64 :=
  if let .forallE _ d b _ := e then
    mixHash (hashRoot enodes d) (hashRoot enodes b)
  else match_expr e with
  | Grind.nestedProof p _ => hashRoot enodes p
  | Grind.nestedDecidable p _ => mixHash 13 (hashRoot enodes p)
  | Eq _ lhs rhs => goEq lhs rhs
  | _ => go e 17
where
  goEq (lhs rhs : Expr) : UInt64 :=
    let h₁ := hashRoot enodes lhs
    let h₂ := hashRoot enodes rhs
    if h₁ > h₂ then mixHash h₂ h₁ else mixHash h₁ h₂
  go (e : Expr) (r : UInt64) : UInt64 :=
    match e with
    | .app f a => go f (mixHash r (hashRoot enodes a))
    | _ => mixHash r (hashRoot enodes e)

/-- Returns `true` if `a` and `b` are congruent modulo the equivalence classes in `enodes`. -/
private partial def isCongruent (enodes : ENodeMap) (a b : Expr) : Bool :=
  if let .forallE _ d₁ b₁ _ := a then
    if let .forallE _ d₂ b₂ _ := b then
      hasSameRoot enodes d₁ d₂ && hasSameRoot enodes b₁ b₂
    else
      false
  else match_expr a with
  | Grind.nestedProof p₁ _ =>
    let_expr Grind.nestedProof p₂ _ := b | false
    hasSameRoot enodes p₁ p₂
  | Grind.nestedDecidable p₁ _ =>
    let_expr Grind.nestedDecidable p₂ _ := b | false
    hasSameRoot enodes p₁ p₂
  | Eq _ lhs₁ rhs₁ =>
    let_expr Eq _ lhs₂ rhs₂ := b | false
    goEq lhs₁ rhs₁ lhs₂ rhs₂
  | _ =>
    if a.isApp && b.isApp then
      go a b
    else
      false
where
  goEq (lhs₁ rhs₁ lhs₂ rhs₂ : Expr) : Bool :=
    (hasSameRoot enodes lhs₁ lhs₂ && hasSameRoot enodes rhs₁ rhs₂)
    ||
    (hasSameRoot enodes lhs₁ rhs₂ && hasSameRoot enodes rhs₁ lhs₂)
  go (a b : Expr) : Bool :=
    if a.isApp && b.isApp then
      hasSameRoot enodes a.appArg! b.appArg! && go a.appFn! b.appFn!
    else
      -- Remark: we do not check whether the types of the functions are equal here
      -- because we are not in the `MetaM` monad.
      hasSameRoot enodes a b

instance : Hashable (CongrKey enodeMap) where
  hash k := private congrHash enodeMap k.e

instance : BEq (CongrKey enodeMap) where
  beq k1 k2 := private isCongruent enodeMap k1.e k2.e

abbrev CongrTable (enodeMap : ENodeMap) := PHashSet (CongrKey enodeMap)

-- Remark: we cannot use pointer addresses here because we have to traverse the tree.
abbrev ParentSet := Std.TreeSet Expr Expr.quickComp
abbrev ParentMap := PHashMap ExprPtr ParentSet

/--
The E-matching module instantiates theorems using the `EMatchTheorem proof` and a (partial) assignment.
We want to avoid instantiating the same theorem with the same assignment more than once.
Therefore, we store the (pre-)instance information in set.
Recall that the proofs of activated theorems have been hash-consed.
The assignment contains internalized expressions, which have also been hash-consed.
-/
structure PreInstance where
  proof      : Expr
  assignment : Array Expr

instance : Hashable PreInstance where
  hash i := Id.run do
    let mut r := hashPtrExpr i.proof
    for v in i.assignment do
      r := mixHash r (hashPtrExpr v)
    return r

instance : BEq PreInstance where
  beq i₁ i₂ := Id.run do
    unless isSameExpr i₁.proof i₂.proof do return false
    unless i₁.assignment.size == i₂.assignment.size do return false
    for v₁ in i₁.assignment, v₂ in i₂.assignment do
      unless isSameExpr v₁ v₂ do return false
    return true

abbrev PreInstanceSet := PHashSet PreInstance

/-- New raw fact to be preprocessed, and then asserted. -/
structure NewRawFact where
  proof        : Expr
  prop         : Expr
  generation   : Nat
  /-- `splitSource` to use when internalizing this fact. -/
  splitSource  : SplitSource
  deriving Inhabited

/-- Canonicalizer state. See `Canon.lean` for additional details. -/
structure Canon.State where
  argMap     : PHashMap (Expr × Nat) (List (Expr × Expr)) := {}
  canon      : PHashMap Expr Expr := {}
  proofCanon : PHashMap Expr Expr := {}
  deriving Inhabited

/-- Trace information for a case split. -/
structure CaseTrace where
  expr   : Expr
  i      : Nat
  num    : Nat
  source : SplitSource
  deriving Inhabited

/-- E-matching related fields for the `grind` goal. -/
structure EMatch.State where
  /--
  Inactive global theorems. As we internalize terms, we activate theorems as we find their symbols.
  Local theorem provided by users are added directly into `newThms`.
  -/
  thmMap       : EMatchTheorems
  /-- Goal modification time. -/
  gmt          : Nat := 0
  /-- Active theorems that we have performed ematching at least once. -/
  thms         : PArray EMatchTheorem := {}
  /-- Active theorems that we have not performed any round of ematching yet. -/
  newThms      : PArray EMatchTheorem := {}
  /-- Number of theorem instances generated so far -/
  numInstances : Nat := 0
  /-- Number of E-matching rounds performed in this goal since the last case-split. -/
  num          : Nat := 0
  /-- (pre-)instances found so far. It includes instances that failed to be instantiated. -/
  preInstances : PreInstanceSet := {}
  /-- Next local E-match theorem idx. -/
  nextThmIdx   : Nat := 0
  /-- `match` auxiliary functions whose equations have already been created and activated. -/
  matchEqNames : PHashSet Name := {}
  deriving Inhabited

/-- Case-split information. -/
inductive SplitInfo where
  | /--
    Term `e` may be an inductive predicate, `match`-expression, `if`-expression, implication, etc.
    -/
    default (e : Expr) (source : SplitSource)
  /-- `e` is an implication and we want to split on its antecedent. -/
  | imp (e : Expr) (h : e.isForall) (source : SplitSource)
  | /--
    Given applications `a` and `b`, case-split on whether the corresponding
    `i`-th arguments are equal or not. The split is only performed if all other
    arguments are already known to be equal or are also tagged as split candidates.
    -/
    arg (a b : Expr) (i : Nat) (eq : Expr) (source :SplitSource)
  deriving Inhabited

protected def SplitInfo.hash : SplitInfo → UInt64
 | .default e _ => hash e
 | .imp e _ _   => hash e
 | .arg _ _ _ e _ => hash e

instance : Hashable SplitInfo where
  hash := SplitInfo.hash

def SplitInfo.beq : SplitInfo → SplitInfo → Bool
 | .default e₁ _, .default e₂ _ => e₁ == e₂
 | .imp e₁ _ _, .imp e₂ _ _=> e₁ == e₂
 | .arg a₁ b₁ i₁ eq₁ _, arg a₂ b₂ i₂ eq₂ _ => a₁ == a₂ && b₁ == b₂ && i₁ == i₂ && eq₁ == eq₂
 | _, _ => false

instance : BEq SplitInfo where
  beq := SplitInfo.beq

def SplitInfo.getExpr : SplitInfo → Expr
  | .default e _ => e
  | .imp e h _ => e.forallDomain h
  | .arg _ _ _ eq _ => eq

def SplitInfo.source : SplitInfo → SplitSource
  | .default _ s   => s
  | .imp _ _ s     => s
  | .arg _ _ _ _ s => s

def SplitInfo.lt : SplitInfo → SplitInfo → Bool
  | .default e₁ _, .default e₂ _     => e₁.lt e₂
  | .imp e₁ _ _, .imp e₂ _ _         => e₁.lt e₂
  | .arg _ _ _ e₁ _, .arg _ _ _ e₂ _ => e₁.lt e₂
  | .default .., _                   => true
  | .imp .., _                       => true
  | _, _                             => false

/-- Argument `arg : type` of an application `app` in `SplitInfo`. -/
structure SplitArg where
  arg  : Expr
  type : Expr
  app  : Expr

/-- Case splitting related fields for the `grind` goal. -/
structure Split.State where
  /-- Number of splits performed to get to this goal. -/
  num          : Nat := 0
  /-- Inductive datatypes marked for case-splitting -/
  casesTypes   : CasesTypes := {}
  /-- Case-split candidates. -/
  candidates   : List SplitInfo := []
  /-- Case-splits that have been inserted at `candidates` at some point. -/
  added        : Std.HashSet SplitInfo := {}
  /-- Case-splits that have already been performed, or that do not have to be performed anymore. -/
  resolved     : PHashSet ExprPtr := {}
  /--
  Sequence of cases steps that generated this goal. We only use this information for diagnostics.
  Remark: `casesTrace.length ≥ numSplits` because we don't increase the counter for `cases`
  applications that generated only 1 subgoal.
  -/
  trace        : List CaseTrace := []
  /-- Lookahead "case-splits". -/
  lookaheads   : List SplitInfo := []
  /--
  A mapping `(a, b) ↦ is` s.t. for each `SplitInfo.arg a b i eq`
  in `candidates` or `lookaheads` we have `i ∈ is`.
  We use this information to decide whether the split/lookahead is "ready"
  to be tried or not.
  -/
  argPosMap    : Std.HashMap (Expr × Expr) (List Nat) := {}
  /--
  Mapping from pairs `(f, i)` to a list of arguments.
  Each argument occurs as the `i`-th of an `f`-application.
  We use this information to add splits/lookaheads for
  triggering extensionality theorems and model-based theory combination.
  See `addSplitCandidatesForExt`.
  -/
  argsAt       : PHashMap (Expr × Nat) (List SplitArg) := {}
  deriving Inhabited

/-- Clean name generator. -/
structure Clean.State where
  used : PHashSet Name := {}
  next : PHashMap Name Nat := {}
  deriving Inhabited

/-- The `grind` goal. -/
structure Goal where
  mvarId       : MVarId
  canon        : Canon.State := {}
  enodeMap     : ENodeMap := default
  exprs        : PArray Expr := {}
  parents      : ParentMap := {}
  congrTable   : CongrTable enodeMap := {}
  /--
  A mapping from each function application index (`HeadIndex`) to a list of applications with that index.
  Recall that the `HeadIndex` for a constant is its constant name, and for a free variable,
  it is its unique id.
  -/
  appMap       : PHashMap HeadIndex (List Expr) := {}
  /-- Equations and propositions to be processed. -/
  newFacts     : Array NewFact := #[]
  /-- `inconsistent := true` if `ENode`s for `True` and `False` are in the same equivalence class. -/
  inconsistent : Bool := false
  /-- Next unique index for creating ENodes -/
  nextIdx      : Nat := 0
  /-- new facts to be preprocessed and then asserted. -/
  newRawFacts  : Std.Queue NewRawFact := ∅
  /-- Asserted facts -/
  facts        : PArray Expr := {}
  /-- Cached extensionality theorems for types. -/
  extThms      : PHashMap ExprPtr (Array Ext.ExtTheorem) := {}
  /-- State of the E-matching module. -/
  ematch       : EMatch.State
  /-- State of the case-splitting module. -/
  split        : Split.State := {}
  /-- State of arithmetic procedures. -/
  arith        : Arith.State := {}
  /-- State of the clean name generator. -/
  clean        : Clean.State := {}
  deriving Inhabited

def Goal.hasSameRoot (g : Goal) (a b : Expr) : Bool :=
  Grind.hasSameRoot g.enodeMap a b

def Goal.isCongruent (g : Goal) (a b : Expr) : Bool :=
  Grind.isCongruent g.enodeMap a b

def Goal.admit (goal : Goal) : MetaM Unit :=
  goal.mvarId.admit

abbrev GoalM := StateRefT Goal GrindM

@[inline] def GoalM.runCore (goal : Goal) (x : GoalM α) : GrindM (α × Goal) :=
  StateRefT'.run x goal

@[inline] def GoalM.run (goal : Goal) (x : GoalM α) : GrindM (α × Goal) :=
  goal.mvarId.withContext do x.runCore goal

@[inline] def GoalM.run' (goal : Goal) (x : GoalM Unit) : GrindM Goal :=
  goal.mvarId.withContext do StateRefT'.run' (x *> get) goal

def updateLastTag : GoalM Unit := do
  if (← isTracingEnabledFor `grind) then
    let currTag ← (← get).mvarId.getTag
    if currTag != (← getThe Grind.State).lastTag then
      trace[grind] "working on goal `{currTag}`"
      modifyThe Grind.State fun s => { s with lastTag := currTag }

/--
Macro similar to `trace[...]`, but it includes the trace message `trace[grind] "working on <current goal>"`
if the tag has changed since the last trace message.
-/
macro "trace_goal[" id:ident "]" s:(interpolatedStr(term) <|> term) : doElem => do
  let msg ← if s.raw.getKind == interpolatedStrKind then `(m! $(⟨s⟩)) else `(($(⟨s⟩) : MessageData))
  `(doElem| do
    let cls := $(quote id.getId.eraseMacroScopes)
    if (← Lean.isTracingEnabledFor cls) then
      updateLastTag
      Lean.addTrace cls $msg)

/--
A helper function used to mark a theorem instance found by the E-matching module.
It returns `true` if it is a new instance and `false` otherwise.
-/
def markTheoremInstance (proof : Expr) (assignment : Array Expr) : GoalM Bool := do
  let k := { proof, assignment }
  if (← get).ematch.preInstances.contains k then
    return false
  modify fun s => { s with ematch.preInstances := s.ematch.preInstances.insert k }
  return true

/-- Adds a new fact `prop` with proof `proof` to the queue for preprocessing and the assertion. -/
def addNewRawFact (proof : Expr) (prop : Expr) (generation : Nat) (splitSource : SplitSource) : GoalM Unit := do
  if grind.debug.get (← getOptions) then
    unless (← withReducible <| isDefEq (← inferType proof) prop) do
      throwError "`grind` internal error, trying to assert{indentExpr prop}\n\
        with proof{indentExpr proof}\nwhich has type{indentExpr (← inferType proof)}\n\
        which is not definitionally equal with `reducible` transparency setting}"
  modify fun s => { s with newRawFacts := s.newRawFacts.enqueue { proof, prop, generation, splitSource } }

/-- Adds a new theorem instance produced using E-matching. -/
def addTheoremInstance (thm : EMatchTheorem) (proof : Expr) (prop : Expr) (generation : Nat) : GoalM Unit := do
  saveEMatchTheorem thm
  addNewRawFact proof prop generation (.ematch thm.origin)
  modify fun s => { s with ematch.numInstances := s.ematch.numInstances + 1 }

/-- Returns `true` if the maximum number of instances has been reached. -/
def checkMaxInstancesExceeded : GoalM Bool := do
  return (← get).ematch.numInstances >= (← getConfig).instances

/-- Returns `true` if the maximum number of case-splits has been reached. -/
def checkMaxCaseSplit : GoalM Bool := do
  return (← get).split.num >= (← getConfig).splits

/-- Returns `true` if the maximum number of E-matching rounds has been reached. -/
def checkMaxEmatchExceeded : GoalM Bool := do
  return (← get).ematch.num >= (← getConfig).ematch

/--
Returns `some n` if `e` has already been "internalized" into the
Otherwise, returns `none`s.
-/
def Goal.getENode? (goal : Goal) (e : Expr) : Option ENode :=
  goal.enodeMap.find? { expr := e }

@[inline, inherit_doc Goal.getENode?]
def getENode? (e : Expr) : GoalM (Option ENode) :=
  return (← get).getENode? e

def throwNonInternalizedExpr (e : Expr) : CoreM α :=
  throwError "internal `grind` error, term has not been internalized{indentExpr e}"

/-- Returns node associated with `e`. It assumes `e` has already been internalized. -/
def Goal.getENode (goal : Goal) (e : Expr) : CoreM ENode := do
  let some n := goal.enodeMap.find? { expr := e }
    | throwNonInternalizedExpr e
  return n

@[inline, inherit_doc Goal.getENode]
def getENode (e : Expr) : GoalM ENode := do
  (← get).getENode e

/-- Returns the generation of the given term. Is assumes it has been internalized -/
def getGeneration (e : Expr) : GoalM Nat := do
  let some n ← getENode? e | return 0
  return n.generation

/-- Returns `true` if `e` is in the equivalence class of `True`. -/
def isEqTrue (e : Expr) : GoalM Bool := do
  return isSameExpr (← getENode e).root (← getTrueExpr)

/-- Returns `true` if `e` is in the equivalence class of `False`. -/
def isEqFalse (e : Expr) : GoalM Bool := do
  return isSameExpr (← getENode e).root (← getFalseExpr)

/-- Returns `true` if `e` is in the equivalence class of `Bool.true`. -/
def isEqBoolTrue (e : Expr) : GoalM Bool := do
  return isSameExpr (← getENode e).root (← getBoolTrueExpr)

/-- Returns `true` if `e` is in the equivalence class of `Bool.false`. -/
def isEqBoolFalse (e : Expr) : GoalM Bool := do
  return isSameExpr (← getENode e).root (← getBoolFalseExpr)

/-- Returns `true` if `a` and `b` are in the same equivalence class. -/
def isEqv (a b : Expr) : GoalM Bool := do
  if isSameExpr a b then
    return true
  else
    let some na ← getENode? a | return false
    let some nb ← getENode? b | return false
    return isSameExpr na.root nb.root

/-- Returns `true` if the root of its equivalence class. -/
def isRoot (e : Expr) : GoalM Bool := do
  let some n ← getENode? e | return false -- `e` has not been internalized. Panic instead?
  return isSameExpr n.root e

/-- Returns the root element in the equivalence class of `e` IF `e` has been internalized. -/
def Goal.getRoot? (goal : Goal) (e : Expr) : Option Expr := Id.run do
  let some n ← goal.getENode? e | return none
  return some n.root

@[inline, inherit_doc Goal.getRoot?]
def getRoot? (e : Expr) : GoalM (Option Expr) := do
  return (← get).getRoot? e

/-- Returns the root element in the equivalence class of `e`. -/
def Goal.getRoot (goal : Goal) (e : Expr) : CoreM Expr :=
  return (← goal.getENode e).root

@[inline, inherit_doc Goal.getRoot]
def getRoot (e : Expr) : GoalM Expr := do
  (← get).getRoot e

/-- Returns the root enode in the equivalence class of `e`. -/
def getRootENode (e : Expr) : GoalM ENode := do
  getENode (← getRoot e)

/-- Returns the root enode in the equivalence class of `e` if it is in an equivalence class. -/
def getRootENode? (e : Expr) : GoalM (Option ENode) := do
  let some n ← getENode? e | return none
  getENode? n.root

/--
Returns the next element in the equivalence class of `e`
if `e` has been internalized in the given goal.
-/
def Goal.getNext? (goal : Goal) (e : Expr) : Option Expr := Id.run do
  let some n ← goal.getENode? e | return none
  return some n.next

/-- Returns the next element in the equivalence class of `e`. -/
def Goal.getNext (goal : Goal) (e : Expr) : CoreM Expr :=
  return (← goal.getENode e).next

@[inline, inherit_doc Goal.getRoot]
def getNext (e : Expr) : GoalM Expr := do
  (← get).getNext e

/-- Returns `true` if `e` has already been internalized. -/
def alreadyInternalized (e : Expr) : GoalM Bool :=
  return (← get).enodeMap.contains { expr := e }

def Goal.getTarget? (goal : Goal) (e : Expr) : Option Expr := Id.run do
  let some n ← goal.getENode? e | return none
  return n.target?

@[inline] def getTarget? (e : Expr) : GoalM (Option Expr) := do
  return (← get).getTarget? e

/--
If `isHEq` is `false`, it pushes `lhs = rhs` with `proof` to `newEqs`.
Otherwise, it pushes `lhs ≍ rhs`.
-/
def pushEqCore (lhs rhs proof : Expr) (isHEq : Bool) : GoalM Unit := do
  if grind.debug.get (← getOptions) then
    unless (← alreadyInternalized lhs) do
      throwError "`grind` internal error, lhs of new equality has not been internalized{indentExpr lhs}"
    unless (← alreadyInternalized rhs) do
      throwError "`grind` internal error, rhs of new equality has not been internalized{indentExpr rhs}"
    unless proof == congrPlaceholderProof do
      let expectedType ← if isHEq then mkHEq lhs rhs else mkEq lhs rhs
      unless (← withReducible <| isDefEq (← inferType proof) expectedType) do
        throwError "`grind` internal error, trying to assert equality{indentExpr expectedType}\n\
            with proof{indentExpr proof}\nwhich has type{indentExpr (← inferType proof)}\n\
            which is not definitionally equal with `reducible` transparency setting}"
      trace[grind.debug] "pushEqCore: {expectedType}"
  modify fun s => { s with newFacts := s.newFacts.push <| .eq lhs rhs proof isHEq }

/-- Return `true` if `a` and `b` have the same type. -/
def hasSameType (a b : Expr) : MetaM Bool :=
  withDefault do isDefEq (← inferType a) (← inferType b)

@[inline] def pushEqHEq (lhs rhs proof : Expr) : GoalM Unit := do
  if (← hasSameType lhs rhs) then
    pushEqCore lhs rhs proof (isHEq := false)
  else
    pushEqCore lhs rhs proof (isHEq := true)

/-- Pushes `lhs = rhs` with `proof` to `newEqs`. -/
@[inline] def pushEq (lhs rhs proof : Expr) : GoalM Unit :=
  pushEqCore lhs rhs proof (isHEq := false)

/-- Pushes `lhs ≍ rhs` with `proof` to `newEqs`. -/
@[inline] def pushHEq (lhs rhs proof : Expr) : GoalM Unit :=
  pushEqCore lhs rhs proof (isHEq := true)

/-- Pushes `a = True` with `proof` to `newEqs`. -/
def pushEqTrue (a proof : Expr) : GoalM Unit := do
  pushEq a (← getTrueExpr) proof

/-- Pushes `a = False` with `proof` to `newEqs`. -/
def pushEqFalse (a proof : Expr) : GoalM Unit := do
  pushEq a (← getFalseExpr) proof

/-- Pushes `a = Bool.true` with `proof` to `newEqs`. -/
def pushEqBoolTrue (a proof : Expr) : GoalM Unit := do
  pushEq a (← getBoolTrueExpr) proof

/-- Pushes `a = Bool.false` with `proof` to `newEqs`. -/
def pushEqBoolFalse (a proof : Expr) : GoalM Unit := do
  pushEq a (← getBoolFalseExpr) proof

/--
Records that `parent` is a parent of `child`. This function actually stores the
information in the root (aka canonical representative) of `child`.
-/
def registerParent (parent : Expr) (child : Expr) : GoalM Unit := do
  let childRoot := (← getRoot? child).getD child
  let parents := if let some parents := (← get).parents.find? { expr := childRoot } then parents else {}
  modify fun s => { s with parents := s.parents.insert { expr := childRoot } (parents.insert parent) }

/--
Returns the set of expressions `e` is a child of, or an expression in
`e`s equivalence class is a child of.
The information is only up to date if `e` is the root (aka canonical representative) of the equivalence class.
-/
def getParents (e : Expr) : GoalM ParentSet := do
  let some parents := (← get).parents.find? { expr := e } | return {}
  return parents

/--
Removes the entry `e ↦ parents` from the parent map.
-/
def resetParentsOf (e : Expr) : GoalM Unit := do
  modify fun s => { s with parents := s.parents.erase { expr := e } }

/--
Copy `parents` to the parents of `root`.
`root` must be the root of its equivalence class.
-/
def copyParentsTo (parents : ParentSet) (root : Expr) : GoalM Unit := do
  let mut curr := if let some parents := (← get).parents.find? { expr := root } then parents else {}
  for parent in parents do
    curr := curr.insert parent
  modify fun s => { s with parents := s.parents.insert { expr := root } curr }

def mkENodeCore (e : Expr) (interpreted ctor : Bool) (generation : Nat) : GoalM Unit := do
  let n := {
    self := e, next := e, root := e, congr := e, size := 1
    flipped := false
    heqProofs := false
    hasLambdas := e.isLambda
    mt := (← get).ematch.gmt
    idx := (← get).nextIdx
    interpreted, ctor, generation
  }
  modify fun s => { s with
    enodeMap := s.enodeMap.insert { expr := e } n
    exprs := s.exprs.push e
    congrTable := unsafe unsafeCast s.congrTable
    nextIdx := s.nextIdx + 1
  }

/--
Creates an `ENode` for `e` if one does not already exist.
This method assumes `e` has been hashconsed.
-/
def mkENode (e : Expr) (generation : Nat) : GoalM Unit := do
  if (← alreadyInternalized e) then return ()
  let ctor := (← isConstructorAppCore? e).isSome
  let interpreted ← isInterpreted e
  mkENodeCore e interpreted ctor generation

def setENode (e : Expr) (n : ENode) : GoalM Unit :=
  modify fun s => { s with
    enodeMap := s.enodeMap.insert { expr := e } n
    congrTable := unsafe unsafeCast s.congrTable
  }

/--
Notifies the offset constraint module that `a = b` where
`a` and `b` are terms that have been internalized by this module.
-/
@[extern "lean_process_new_offset_eq"] -- forward definition
opaque Arith.Offset.processNewEq (a b : Expr) : GoalM Unit

/-- Returns `true` if `e` is a numeral and has type `Nat`. -/
def isNatNum (e : Expr) : Bool := Id.run do
  let_expr OfNat.ofNat _ _ inst := e | false
  let_expr instOfNatNat _ := inst | false
  true

/--
Marks `e` as a term of interest to the offset constraint module.
If the root of `e`s equivalence class has already a term of interest,
a new equality is propagated to the offset module.
-/
def markAsOffsetTerm (e : Expr) : GoalM Unit := do
  let root ← getRootENode e
  if let some e' := root.offset? then
    Arith.Offset.processNewEq e e'
  else
    setENode root.self { root with offset? := some e }

/--
Notifies the cutsat module that `a = b` where
`a` and `b` are terms that have been internalized by this module.
-/
@[extern "lean_process_cutsat_eq"] -- forward definition
opaque Arith.Cutsat.processNewEq (a b : Expr) : GoalM Unit

/--
Notifies the cutsat module that `a ≠ b` where
`a` and `b` are terms that have been internalized by this module.
-/
@[extern "lean_process_cutsat_diseq"] -- forward definition
opaque Arith.Cutsat.processNewDiseq (a b : Expr) : GoalM Unit

/-- Returns `true` if `e` is a nonnegative numeral and has type `Int`. -/
def isNonnegIntNum (e : Expr) : Bool := Id.run do
  let_expr OfNat.ofNat _ _ inst := e | false
  let_expr instOfNat _ := inst | false
  true

/-- Returns `true` if `e` is a numeral and has type `Int`. -/
def isIntNum (e : Expr) : Bool :=
  match_expr e with
  | Neg.neg _ inst e => Id.run do
    let_expr Int.instNegInt := inst | false
    isNonnegIntNum e
  | _ => isNonnegIntNum e

/-- Returns `true` if `e` is a numeral supported by cutsat. -/
def isNum (e : Expr) : Bool :=
  isNatNum e || isIntNum e

/--
Returns `true` if type of `t` is definitionally equal to `α`
-/
def hasType (t α : Expr) : MetaM Bool :=
  withDefault do isDefEq (← inferType t) α

/--
For each equality `b = c` in `parents`, executes `k b c` IF
- `b = c` is equal to `False`, and
-/
@[inline] def forEachDiseq (parents : ParentSet) (k : (lhs : Expr) → (rhs : Expr) → GoalM Unit) : GoalM Unit := do
  for parent in parents do
    let_expr Eq _ b c := parent | continue
    if (← isEqFalse parent) then
      k b c

/--
Given `lhs` and `rhs` that are known to be disequal, checks whether
`lhs` and `rhs` have cutsat terms `e₁` and `e₂` attached to them,
and invokes process `Arith.Cutsat.processNewDiseq e₁ e₂`
-/
def propagateCutsatDiseq (lhs rhs : Expr) : GoalM Unit := do
  let some lhs ← get? lhs | return ()
  let some rhs ← get? rhs | return ()
  -- Recall that core can take care of disequalities of the form `1≠2`.
  unless isNum lhs && isNum rhs do
    Arith.Cutsat.processNewDiseq lhs rhs
where
  get? (a : Expr) : GoalM (Option Expr) := do
    let root ← getRootENode a
    if isNum root.self then
      return some root.self
    return root.cutsat?

/--
Traverses disequalities in `parents`, and propagate the ones relevant to the
cutsat module.
-/
def propagateCutsatDiseqs (parents : ParentSet) : GoalM Unit := do
  forEachDiseq parents propagateCutsatDiseq

/--
Marks `e` as a term of interest to the cutsat module.
If the root of `e`s equivalence class has already a term of interest,
a new equality is propagated to the cutsat module.
-/
def markAsCutsatTerm (e : Expr) : GoalM Unit := do
  let root ← getRootENode e
  if let some e' := root.cutsat? then
    Arith.Cutsat.processNewEq e e'
  else
    setENode root.self { root with cutsat? := some e }
    propagateCutsatDiseqs (← getParents root.self)

/--
Notifies the comm ring module that `a = b` where
`a` and `b` are terms that have been internalized by this module.
-/
@[extern "lean_process_ring_eq"] -- forward definition
opaque Arith.CommRing.processNewEq (a b : Expr) : GoalM Unit

/--
Notifies the comm ring module that `a ≠ b` where
`a` and `b` are terms that have been internalized by this module.
-/
@[extern "lean_process_ring_diseq"] -- forward definition
opaque Arith.CommRing.processNewDiseq (a b : Expr) : GoalM Unit

/--
Given `lhs` and `rhs` that are known to be disequal, checks whether
`lhs` and `rhs` have ring terms `e₁` and `e₂` attached to them,
and invokes process `Arith.CommRing.processNewDiseq e₁ e₂`
-/
def propagateCommRingDiseq (lhs rhs : Expr) : GoalM Unit := do
  let some lhs ← get? lhs | return ()
  let some rhs ← get? rhs | return ()
  Arith.CommRing.processNewDiseq lhs rhs
where
  get? (a : Expr) : GoalM (Option Expr) := do
    return (← getRootENode a).ring?

/--
Traverses disequalities in `parents`, and propagate the ones relevant to the
comm ring module.
-/
def propagateCommRingDiseqs (parents : ParentSet) : GoalM Unit := do
  forEachDiseq parents propagateCommRingDiseq

/--
Marks `e` as a term of interest to the ring module.
If the root of `e`s equivalence class has already a term of interest,
a new equality is propagated to the ring module.
-/
def markAsCommRingTerm (e : Expr) : GoalM Unit := do
  let root ← getRootENode e
  if let some e' := root.ring? then
    Arith.CommRing.processNewEq e e'
  else
    setENode root.self { root with ring? := some e }
    propagateCommRingDiseqs (← getParents root.self)

/--
Notifies the linarith module that `a = b` where
`a` and `b` are terms that have been internalized by this module.
-/
@[extern "lean_process_linarith_eq"] -- forward definition
opaque Arith.Linear.processNewEq (a b : Expr) : GoalM Unit

/--
Notifies the linarith module that `a ≠ b` where
`a` and `b` are terms that have been internalized by this module.
-/
@[extern "lean_process_linarith_diseq"] -- forward definition
opaque Arith.Linear.processNewDiseq (a b : Expr) : GoalM Unit

/--
Given `lhs` and `rhs` that are known to be disequal, checks whether
`lhs` and `rhs` have linarith terms `e₁` and `e₂` attached to them,
and invokes process `Arith.Linear.processNewDiseq e₁ e₂`
-/
def propagateLinarithDiseq (lhs rhs : Expr) : GoalM Unit := do
  let some lhs ← get? lhs | return ()
  let some rhs ← get? rhs | return ()
  Arith.Linear.processNewDiseq lhs rhs
where
  get? (a : Expr) : GoalM (Option Expr) := do
    return (← getRootENode a).linarith?

/--
Traverses disequalities in `parents`, and propagate the ones relevant to the
linarith module.
-/
def propagateLinarithDiseqs (parents : ParentSet) : GoalM Unit := do
  forEachDiseq parents propagateLinarithDiseq

/--
Marks `e` as a term of interest to the linarith module.
If the root of `e`s equivalence class has already a term of interest,
a new equality is propagated to the linarith module.
-/
def markAsLinarithTerm (e : Expr) : GoalM Unit := do
  let root ← getRootENode e
  if let some e' := root.linarith? then
    Arith.Linear.processNewEq e e'
  else
    setENode root.self { root with linarith? := some e }
    propagateLinarithDiseqs (← getParents root.self)

/-- Returns `true` is `e` is the root of its congruence class. -/
def isCongrRoot (e : Expr) : GoalM Bool := do
  return (← getENode e).isCongrRoot

/-- Returns the root of the congruence class containing `e`. -/
partial def getCongrRoot (e : Expr) : GoalM Expr := do
  let n ← getENode e
  if isSameExpr n.congr e then return e
  getCongrRoot n.congr

/-- Return `true` if the goal is inconsistent. -/
def isInconsistent : GoalM Bool :=
  return (← get).inconsistent

/--
Returns a proof that `a = b`.
It assumes `a` and `b` are in the same equivalence class, and have the same type.
-/
-- Forward definition
@[extern "lean_grind_mk_eq_proof"]
opaque mkEqProof (a b : Expr) : GoalM Expr

/--
Returns a proof that `a ≍ b`.
It assumes `a` and `b` are in the same equivalence class.
-/
-- Forward definition
@[extern "lean_grind_mk_heq_proof"]
opaque mkHEqProof (a b : Expr) : GoalM Expr

-- Forward definition
@[extern "lean_grind_internalize"]
opaque internalize (e : Expr) (generation : Nat) (parent? : Option Expr := none) : GoalM Unit

-- Forward definition
@[extern "lean_grind_process_new_facts"]
opaque processNewFacts : GoalM Unit

/--
Returns a proof that `a = b` if they have the same type. Otherwise, returns a proof of `a ≍ b`.
It assumes `a` and `b` are in the same equivalence class.
-/
def mkEqHEqProof (a b : Expr) : GoalM Expr := do
  if (← hasSameType a b) then
    mkEqProof a b
  else
    mkHEqProof a b

/--
Returns a proof that `a = True`.
It assumes `a` and `True` are in the same equivalence class.
-/
def mkEqTrueProof (a : Expr) : GoalM Expr := do
  mkEqProof a (← getTrueExpr)

/--
Returns a proof that `a = False`.
It assumes `a` and `False` are in the same equivalence class.
-/
def mkEqFalseProof (a : Expr) : GoalM Expr := do
  mkEqProof a (← getFalseExpr)

/--
Returns a proof that `a = Bool.true`.
It assumes `a` and `Bool.true` are in the same equivalence class.
-/
def mkEqBoolTrueProof (a : Expr) : GoalM Expr := do
  mkEqProof a (← getBoolTrueExpr)

/--
Returns a proof that `a = Bool.false`.
It assumes `a` and `Bool.false` are in the same equivalence class.
-/
def mkEqBoolFalseProof (a : Expr) : GoalM Expr := do
  mkEqProof a (← getBoolFalseExpr)

/-- Marks current goal as inconsistent without assigning `mvarId`. -/
def markAsInconsistent : GoalM Unit := do
  unless (← get).inconsistent do
    trace[grind] "closed `{← (← get).mvarId.getTag}`"
    modify fun s => { s with inconsistent := true }

/--
Assign the `mvarId` using the given proof of `False`.
If type of `mvarId` is not `False`, then use `False.elim`.
-/
def _root_.Lean.MVarId.assignFalseProof (mvarId : MVarId) (falseProof : Expr) : MetaM Unit := mvarId.withContext do
  let target ← mvarId.getType
  if target.isFalse then
    mvarId.assign falseProof
  else
    mvarId.assign (← mkFalseElim target falseProof)

/--
Closes the current goal using the given proof of `False` and
marks it as inconsistent if it is not already marked so.
-/
def closeGoal (falseProof : Expr) : GoalM Unit := do
  markAsInconsistent
  let mvarId := (← get).mvarId
  unless (← mvarId.isAssigned) do
    mvarId.assignFalseProof falseProof

/-- Returns all enodes in the goal -/
def getExprs : GoalM (PArray Expr) := do
  return (← get).exprs

/-- Executes `f` to each term in the equivalence class containing `e` -/
@[inline] def traverseEqc (e : Expr) (f : ENode → GoalM Unit) : GoalM Unit := do
  let mut curr := e
  repeat
    let n ← getENode curr
    f n
    if isSameExpr n.next e then return ()
    curr := n.next

/-- Folds using `f` and `init` over the equivalence class containing `e` -/
@[inline] def foldEqc (e : Expr) (init : α) (f : ENode → α → GoalM α) : GoalM α := do
  let mut curr := e
  let mut r := init
  repeat
    let n ← getENode curr
    r ← f n r
    if isSameExpr n.next e then return r
    curr := n.next
  unreachable!
  return r

def forEachENode (f : ENode → GoalM Unit) : GoalM Unit := do
  for e in (← getExprs) do
    let n ← getENode e
    f n

def filterENodes (p : ENode → GoalM Bool) : GoalM (Array ENode) := do
  let ref ← IO.mkRef #[]
  forEachENode fun n => do
    if (← p n) then
      ref.modify (·.push n)
  ref.get

def forEachEqcRoot (f : ENode → GoalM Unit) : GoalM Unit := do
  for e in (← getExprs) do
    let n ← getENode e
    if n.isRoot then
      f n

abbrev Propagator := Expr → GoalM Unit
abbrev Fallback := GoalM Unit

structure Methods where
  propagateUp   : Propagator := fun _ => return ()
  propagateDown : Propagator := fun _ => return ()
  fallback      : Fallback := pure ()
  deriving Inhabited

def Methods.toMethodsRef (m : Methods) : MethodsRef :=
  unsafe unsafeCast m

private def MethodsRef.toMethods (m : MethodsRef) : Methods :=
  unsafe unsafeCast m

@[inline] def getMethods : GrindM Methods :=
  return (← getMethodsRef).toMethods

def propagateUp (e : Expr) : GoalM Unit := do
  (← getMethods).propagateUp e

def propagateDown (e : Expr) : GoalM Unit := do
  (← getMethods).propagateDown e

def applyFallback : GoalM Unit := do
  let fallback : GoalM Unit := (← getMethods).fallback
  fallback

def Goal.getGeneration (goal : Goal) (e : Expr) : Nat :=
  if let some n := goal.getENode? e then
    n.generation
  else
    0

/-- Returns expressions in the given expression equivalence class. -/
partial def Goal.getEqc (goal : Goal) (e : Expr) (sort := false) : List Expr :=
  let eqc := go e e #[]
  if sort then
    Array.toList <| eqc.qsort fun e₁ e₂ =>
      let g₁ := goal.getGeneration e₁
      let g₂ := goal.getGeneration e₂
      if g₁ != g₂ then g₁ < g₂ else e₁.lt e₂
  else
    eqc.toList
where
  go (first : Expr) (e : Expr) (acc : Array Expr) : Array Expr := Id.run do
    let some next := goal.getNext? e | acc
    let acc := acc.push e
    if isSameExpr first next then
      return acc
    else
      go first next acc

@[inline, inherit_doc Goal.getEqc]
partial def getEqc (e : Expr) (sort := false) : GoalM (List Expr) :=
  return (← get).getEqc e sort

/-- Returns all equivalence classes in the current goal. -/
partial def Goal.getEqcs (goal : Goal) (sort := false) : List (List Expr) := Id.run do
 let mut r : Array (Nat × Expr × List Expr) := #[]
 for e in goal.exprs do
    let some node := goal.getENode? e | pure ()
    if node.isRoot then
      let e :: es := goal.getEqc node.self sort | unreachable!
      r := r.push (goal.getGeneration e, e, es)
  if sort then
    r := r.qsort fun (g₁, e₁, _) (g₂, e₂, _) => if g₁ != g₂ then g₁ < g₂ else e₁.lt e₂
  return r.toList.map fun (_, e, es) => e::es

@[inline, inherit_doc Goal.getEqcs]
def getEqcs : GoalM (List (List Expr)) :=
  return (← get).getEqcs

/--
Returns `true` if `s` has been already added to the case-split list at one point.
Remark: this function returns `true` even if the split has already been resolved
and is not in the list anymore.
-/
def isKnownCaseSplit (s : SplitInfo) : GoalM Bool :=
  return (← get).split.added.contains s

/-- Returns `true` if `e` is a case-split that does not need to be performed anymore. -/
def isResolvedCaseSplit (e : Expr) : GoalM Bool :=
  return (← get).split.resolved.contains { expr := e }

/--
Marks `e` as a case-split that does not need to be performed anymore.
Remark: we currently use this feature to disable `match`-case-splits.
Remark: we also use this feature to record the case-splits that have already been performed.
-/
def markCaseSplitAsResolved (e : Expr) : GoalM Unit := do
  unless (← isResolvedCaseSplit e) do
    trace_goal[grind.split.resolved] "{e}"
    modify fun s => { s with split.resolved := s.split.resolved.insert { expr := e } }

private def updateSplitArgPosMap (sinfo : SplitInfo) : GoalM Unit := do
  let .arg a b i _ _ := sinfo | return ()
  let key := (a, b)
  let is := (← get).split.argPosMap[key]? |>.getD []
  modify fun s => { s with
    split.argPosMap := s.split.argPosMap.insert key (i :: is)
  }

/-- Inserts `e` into the list of case-split candidates if it was not inserted before. -/
def addSplitCandidate (sinfo : SplitInfo) : GoalM Unit := do
  unless (← isKnownCaseSplit sinfo) do
    trace_goal[grind.split.candidate] "{sinfo.getExpr}"
    modify fun s => { s with
      split.added := s.split.added.insert sinfo
      split.candidates := sinfo :: s.split.candidates
    }
    updateSplitArgPosMap sinfo

/--
Returns extensionality theorems for the given type if available.
If `Config.ext` is `false`, the result is `#[]`.
-/
def getExtTheorems (type : Expr) : GoalM (Array Ext.ExtTheorem) := do
  unless (← getConfig).ext || (← getConfig).extAll do return #[]
  if let some thms := (← get).extThms.find? { expr := type } then
    return thms
  else
    let thms ← Ext.getExtTheorems type
    let thms ← if (← getConfig).extAll then
      pure thms
    else
      thms.filterM fun thm => isExtTheorem thm.declName
    modify fun s => { s with extThms := s.extThms.insert { expr := type } thms }
    return thms

/-- Add a new lookahead candidate. -/
def addLookaheadCandidate (sinfo : SplitInfo) : GoalM Unit := do
  trace_goal[grind.lookahead.add] "{sinfo.getExpr}"
  modify fun s => { s with split.lookaheads := sinfo :: s.split.lookaheads }
  updateSplitArgPosMap sinfo

/--
Helper function for executing `x` with a fresh `newFacts` and without modifying
the goal state.
-/
def withoutModifyingState (x : GoalM α) : GoalM α := do
  let saved ← get
  modify fun goal => { goal with newFacts := {} }
  try
    x
  finally
    set saved

end Lean.Meta.Grind
