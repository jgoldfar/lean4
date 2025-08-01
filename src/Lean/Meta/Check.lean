/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Meta.InferType
public import Lean.Meta.Sorry

public section

/-!
This is not the Kernel type checker, but an auxiliary method for checking
whether terms produced by tactics and `isDefEq` are type correct.
-/

namespace Lean.Meta

private def ensureType (e : Expr) : MetaM Unit := do
  discard <| getLevel e

private def checkConstant (constName : Name) (us : List Level) : MetaM Unit := do
  let cinfo ← getConstVal constName
  unless us.length == cinfo.levelParams.length do
    throwIncorrectNumberOfLevels constName us

private def getFunctionDomain (f : Expr) : MetaM (Expr × BinderInfo) := do
  let fType ← inferType f
  let fType ← whnfD fType
  match fType with
  | Expr.forallE _ d _ c => return (d, c)
  | _                    => throwFunctionExpected f

/--
Given two expressions `a` and `b`, this method tries to annotate terms with `pp.explicit := true`
and other `pp` options to expose "implicit" differences.
For example, suppose `a` and `b` are of the form
```lean
@HashMap Nat Nat eqInst hasInst1
@HashMap Nat Nat eqInst hasInst2
```
By default, the pretty printer formats both of them as `HashMap Nat Nat`.
So, counterintuitive error messages such as
```lean
error: application type mismatch
  HashMap.insert m
argument
  m
has type
  HashMap Nat Nat
but is expected to have type
  HashMap Nat Nat
```
would be produced.
By adding `pp.explicit := true`, we can generate the more informative error
```lean
error: application type mismatch
  HashMap.insert m
argument
  m
has type
  @HashMap Nat Nat eqInst hasInst1
but is expected to have type
  @HashMap Nat Nat eqInst hasInst2
```

Remark: this method implements simple heuristics; we should extend it as we find other counterintuitive
error messages.
-/
partial def addPPExplicitToExposeDiff (a b : Expr) : MetaM (Expr × Expr) := do
  if (← getOptions).getBool `pp.all false || (← getOptions).getBool `pp.explicit false then
    return (a, b)
  else
    -- We want to be able to assign metavariables to work out what why `isDefEq` failed,
    -- but we don't want these assignments to leak out of the function.
    -- Note: we shouldn't instantiate mvars in `visit` to prevent leakage.
    withoutModifyingState do
      visit (← instantiateMVars a) (← instantiateMVars b)
where
  visit (a b : Expr) : MetaM (Expr × Expr) := do
    try
      match a, b with
      | .mdata _ a', _ =>
        let (a', b) ← visit a' b
        return (a.updateMData! a', b)
      | _, .mdata _ b' =>
        let (a, b') ← visit a b'
        return (a, b.updateMData! b')
      | .const nm _, .const nm' _ =>
        if nm != nm' then
          return (a, b)
        else
          return (a.setPPUniverses true, b.setPPUniverses true)
      | .proj _ i a', .proj _ j b' =>
        if i != j then
          return (a, b)
        else
          let (a', b') ← visit a' b'
          return (a.updateProj! a', b.updateProj! b')
      | .app .., .app .. =>
        if a.getAppNumArgs != b.getAppNumArgs then
          return (a, b)
        else if a.getAppFn'.isMVar || b.getAppFn'.isMVar then
          -- This is a failed higher-order unification. Do not proceed to `isDefEq`.
          return (a, b)
        else if !(← isDefEq a.getAppFn b.getAppFn) then
          let (fa, fb) ← visit a.getAppFn b.getAppFn
          return (mkAppN fa a.getAppArgs, mkAppN fb b.getAppArgs)
        else
          -- The function might be "overapplied", so we can't use `forallBoundedTelescope`.
          -- That is to say, the arity might depend on the values of the arguments.
          -- We look for the first explicit argument that is different.
          -- Otherwise we look for the first implicit argument.
          -- We try `isDefEq` on all arguments to get discretionary mvar assignments.
          let mut as := a.getAppArgs
          let mut bs := b.getAppArgs
          let mut aFnType ← inferType a.getAppFn
          let mut bFnType ← inferType b.getAppFn
          let mut firstExplicitDiff? := none
          let mut firstImplicitDiff? := none
          for i in *...as.size do
            unless aFnType.isForall do aFnType ← withTransparency .all <| whnf aFnType
            unless bFnType.isForall do bFnType ← withTransparency .all <| whnf bFnType
            -- These pattern matches are expected to succeed:
            let .forallE _ _ abody abi := aFnType | return (a, b)
            let .forallE _ _ bbody bbi := bFnType | return (a, b)
            aFnType := abody.instantiate1 as[i]!
            bFnType := bbody.instantiate1 bs[i]!
            unless (← isDefEq as[i]! bs[i]!) do
              if abi.isExplicit && bbi.isExplicit then
                firstExplicitDiff? := firstExplicitDiff? <|> some i
              else
                firstImplicitDiff? := firstImplicitDiff? <|> some i
          -- Some special cases
          let fn? : Option Name :=
            match a.getAppFn, b.getAppFn with
            | .const ca .., .const cb .. => if ca == cb then ca else none
            | _, _ => none
          if fn? == ``OfNat.ofNat && as.size ≥ 3 && firstImplicitDiff? == some 0 then
            -- Even if there is an explicit diff, it is better to see that the type is different.
            return (a.setPPNumericTypes true, b.setPPNumericTypes true)
          if fn? == ``sorryAx then
            -- If these are `sorry`s with differing source positions, make sure the delaborator shows the positions.
            if let some { module? := moda? } := isLabeledSorry? a then
              if let some { module? := modb? } := isLabeledSorry? b then
                if moda? != modb? then
                  return (a.setOption `pp.sorrySource true, b.setOption `pp.sorrySource true)
          -- General case
          if let some i := firstExplicitDiff? <|> firstImplicitDiff? then
            let (ai, bi) ← visit as[i]! bs[i]!
            as := as.set! i ai
            bs := bs.set! i bi
          let a := mkAppN a.getAppFn as
          let b := mkAppN b.getAppFn bs
          if firstExplicitDiff?.isSome then
            return (a, b)
          else
            return (a.setPPExplicit true, b.setPPExplicit true)
      | .forallE na ta ba bia, .forallE nb tb bb bib =>
        if !(← isDefEq ta tb) then
          let (ta, tb) ← visit ta tb
          let a := Expr.forallE na ta ba bia
          let b := Expr.forallE nb tb bb bib
          return (a.setPPPiBinderTypes true, b.setPPPiBinderTypes true)
        else
          -- Then bodies must not be defeq.
          withLocalDeclD na ta fun arg => do
            let (ba', bb') ← visit (ba.instantiate1 arg) (bb.instantiate1 arg)
            return (Expr.forallE na ta (ba'.abstract #[arg]) bia, Expr.forallE nb tb (bb'.abstract #[arg]) bib)
      | .lam na ta ba bia, .lam nb tb bb bib =>
        if !(← isDefEq ta tb) then
          let (ta, tb) ← visit ta tb
          let a := Expr.lam na ta ba bia
          let b := Expr.lam nb tb bb bib
          return (a.setPPFunBinderTypes true, b.setPPFunBinderTypes true)
        else
          -- Then bodies must not be defeq.
          withLocalDeclD na ta fun arg => do
            let (ba', bb') ← visit (ba.instantiate1 arg) (bb.instantiate1 arg)
            return (Expr.lam na ta (ba'.abstract #[arg]) bia, Expr.lam nb tb (bb'.abstract #[arg]) bib)
      | _, _ => return (a, b)
    catch _ =>
      return (a, b)

def throwLetTypeMismatchMessage {α} (fvarId : FVarId) : MetaM α := do
  let lctx ← getLCtx
  match lctx.find? fvarId with
  | some (LocalDecl.ldecl _ _ _ t v nondep _) => do
    let vType ← inferType v
    let (vType, t) ← addPPExplicitToExposeDiff vType t
    let declKind := if nondep then "have" else "let"
    throwError "invalid {declKind} declaration, term{indentExpr v}\nhas type{indentExpr vType}\nbut is expected to have type{indentExpr t}"
  | _ => unreachable!

/--
Return error message "has type{givenType}\nbut is expected to have type{expectedType}"
Adds the type’s types unless they are defeq.

If `trailing?` is non-`none`, it is appended to the end of the message. This requires modifying the
produced message, so prefer specifying `trailing?` over appending a message to the result of this
function. Any expressions appearing in the trailing message should be included in `trailingExprs`.
-/
def mkHasTypeButIsExpectedMsg (givenType expectedType : Expr)
    (trailing? : Option MessageData := none) (trailingExprs : Array Expr := #[])
    : MetaM MessageData := do
  return MessageData.ofLazyM (es := #[givenType, expectedType] ++ trailingExprs) do
    try
      let givenTypeType ← inferType givenType
      let expectedTypeType ← inferType expectedType
      if (← isDefEqGuarded givenTypeType expectedTypeType) then
        let (givenType, expectedType) ← addPPExplicitToExposeDiff givenType expectedType
        let trailing := trailing?.map (m!"\n" ++ ·) |>.getD .nil
        return m!"has type{indentExpr givenType}\n\
          but is expected to have type{indentExpr expectedType}{trailing}"
      else
        let (givenType, expectedType) ← addPPExplicitToExposeDiff givenType expectedType
        let (givenTypeType, expectedTypeType) ← addPPExplicitToExposeDiff givenTypeType expectedTypeType
        let trailing := match trailing? with
          | none => inlineExprTrailing expectedTypeType
          | some trailing => inlineExpr expectedTypeType ++ trailing
        return m!"has type{indentExpr givenType}\nof sort{inlineExpr givenTypeType}\
          but is expected to have type{indentExpr expectedType}\nof sort{trailing}"
    catch _ =>
      let (givenType, expectedType) ← addPPExplicitToExposeDiff givenType expectedType
      let trailing := trailing?.map (m!"\n" ++ ·) |>.getD .nil
      return m!"has type{indentExpr givenType}\nbut is expected to have type{indentExpr expectedType}{trailing}"

def throwAppTypeMismatch (f a : Expr) : MetaM α := do
  -- Clarify that `a` is "last" only if it may be confused with some preceding argument; otherwise,
  -- avoid this wording because it may be misleading if more arguments follow `a`, e.g., if `f a` is
  -- a subexpression of `f a b`
  let argDescStr := if f.getAppArgs.any (· == a) then
    m!"last{indentExpr a}\nargument "
  else
    m!"argument{indentExpr a}\n"
  let mut e := mkApp f a
  let msg ← try
    let (expectedType, binfo) ← getFunctionDomain f
    unless binfo.isExplicit do
      e := e.setAppPPExplicit
    let aType ← inferType a
    let hasTypeButIsExpected ← mkHasTypeButIsExpectedMsg aType expectedType
      (trailing? := m!"in the application{indentExpr e}") (trailingExprs := #[e])
    pure m!"Application type mismatch: The {argDescStr}{hasTypeButIsExpected}"
  catch _ =>
    e := e.setAppPPExplicit
    pure m!"Application type mismatch: The {argDescStr}is not of the expected type in the application{indentExpr e}"
  throwError msg

def checkApp (f a : Expr) : MetaM Unit := do
  let fType ← inferType f
  let fType ← whnf fType
  match fType with
  | Expr.forallE _ d _ _ =>
    let aType ← inferType a
    unless (← isDefEq d aType) do
      throwAppTypeMismatch f a
  | _ => throwFunctionExpected (mkApp f a)

def checkProj (structName : Name) (idx : Nat) (e : Expr) : MetaM Unit := do
  let structType ← whnf (← inferType e)
  let projType ← inferType (mkProj structName idx e)
  if (← isProp structType) && !(← isProp projType) then
    throwError "invalid projection{indentExpr (mkProj structName idx e)}\nfrom type{indentExpr structType}"

private partial def checkAux (e : Expr) : MetaM Unit := do
  check e |>.run
where
  check (e : Expr) : MonadCacheT ExprStructEq Unit MetaM Unit :=
    checkCache { val := e : ExprStructEq } fun _ => do
      match e with
      | .forallE ..      => checkForall e
      | .lam ..          => checkLambdaLet e
      | .letE ..         => checkLambdaLet e
      | .const c lvls    => checkConstant c lvls
      | .app f a         => check f; check a; checkApp f a
      | .mdata _ e       => check e
      | .proj s i e      => check e; checkProj s i e
      | _                => return ()

  checkLambdaLet (e : Expr) : MonadCacheT ExprStructEq Unit MetaM Unit :=
    lambdaLetTelescope e fun xs b => do
      xs.forM fun x => do
        let xDecl ← getFVarLocalDecl x;
        match xDecl with
        | .cdecl (type := t) .. =>
          ensureType t
          check t
        | .ldecl (type := t) (value := v) .. =>
          ensureType t
          check t
          let vType ← inferType v
          unless (← isDefEq t vType) do throwLetTypeMismatchMessage x.fvarId!
          check v
      check b

  checkForall (e : Expr) : MonadCacheT ExprStructEq Unit MetaM Unit :=
    forallTelescope e fun xs b => do
      xs.forM fun x => do
        let xDecl ← getFVarLocalDecl x
        ensureType xDecl.type
        check xDecl.type
      ensureType b
      check b

/--
Throw an exception if `e` is not type correct.
-/
def check (e : Expr) : MetaM Unit :=
  withTraceNode `Meta.check (fun res =>
      return m!"{if res.isOk then checkEmoji else crossEmoji} {e}") do
    try
      withTransparency TransparencyMode.all $ checkAux e
    catch ex =>
      trace[Meta.check] ex.toMessageData
      throw ex

/--
Return true if `e` is type correct.
-/
def isTypeCorrect (e : Expr) : MetaM Bool := do
  try
    check e
    pure true
  catch _ =>
    pure false

builtin_initialize
  registerTraceClass `Meta.check

end Lean.Meta
