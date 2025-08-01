/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Joachim Breitner
-/
module

prelude
public import Lean.Meta.Transform
public import Lean.Meta.Match.MatcherApp.Basic
public import Lean.Elab.Tactic.Simp

public section

/-!
This module implements the preprocessing of function definitions involved in well-founded recursion.
The goal is to change higher order functions to add more information to the context, e.g. change
`List.map (fun x => …) xs` to `List.map (fun ⟨x, h⟩ => …) xs.attach`.  This extra information can
then be used by the termination proof tactic to determine that a recursive call is indeed
decreasing.

The process proceeds in these steps, to guide the transformation:

1. The parameters of the function are annotated with the `wfParam` gadget.

   We could be more selective here and only annotate those that have a `SizeOf` instance.
   We cannot (easily) only consider the parameters that appear in the termination measure, as that
   is not known yet.


2. The `wfParam` gadget is pushed around:

   - `f (wfParam x) ==> wfParam (f x)` if `f` is a projection

   - `match (wfParam x) with con y => alt[y] ==> match x with con y => alt[wfParam y]`

     In a match with multiple targets it suffices for any of the targets to be annotated with
     `wfParam`, and all parameters of the match arms are annotated with `wfParam`. This is an
     overapproximation.

3. The `wf_preprocess` simpset is applied to do the actual transformation. It typically contains two
   rules for each higher-order function of interest

   - `(wfParam xs).map f = xs.attach.unattach.map f`
   - `xs.unattach.map f = xs.map (fun ⟨x, h⟩ => binderNameHint x f (f (wfParam x)))`

   The first rule “activates” the call, the second rule actually performs it. They are separated like
   this so that for chains of the form `(xs.reverse.filter p).map f` the `.attach` is attached
   to `xs` and we get the basic `x ∈ xs` in the context of `f`.

   The `binderNameHint` preserves the user-chosen name in `f` if that is a lambda.

   The `wfParam` on the right hand side ensurses that doubly-nested recursion works.

4. All left-over `wfParam` gadgets are removed.

The simplifier is used to perform steps 2 (using simprocs) and 3 (using rewrite rules) together.

-/

open Lean Meta

register_builtin_option wf.preprocess : Bool := {
  defValue := true
  descr := "pre-process definitions defined by well-founded recursion with the `wf_preprocess` simp set"
}

namespace Lean.Elab.WF

builtin_initialize wfPreprocessSimpExtension : SimpExtension ←
  registerSimpAttr `wf_preprocess
    "simp lemma used in the preprocessing of well-founded recursive function definitions, in \
    particular to add additional hypotheses to the context. Also see `wfParam`."

private def getSimpContext : MetaM Simp.Context := do
  let simpTheorems ← wfPreprocessSimpExtension.getTheorems
  Simp.mkContext
    (simpTheorems  := #[simpTheorems])
    (congrTheorems := {})
    -- Remark: we use `congrConsts` because this module uses `withoutModifyingEnv`
    -- which would erase any congruence lemmas realized in the `withoutModifyingEnv` block.
    (config        := { Simp.neutralConfig with dsimp := true, congrConsts := false })

def isWfParam? (e : Expr) : Option Expr :=
  if e.isAppOfArity ``wfParam 2 then
    e.appArg!
  else
    none

def mkWfParam (e : Expr) : MetaM Expr :=
  mkAppM ``wfParam #[e]

/-- `f (wfParam x) ==> wfParam (f x)` if `f` is a projection -/
builtin_dsimproc paramProj (_) := fun e => do
  if h : e.isApp then
    let some a' := isWfParam? (e.appArg h) | return .continue
    let f := e.getAppFn
    unless f.isConst do return .continue
    unless (← isProjectionFn f.constName!) do return .continue
    let e' ← mkWfParam (.app (e.appFn h) a')
    return .done e'
  else
    return .continue

/-- `match (wfParam x) with con y => alt[y] ==> match x with con y => alt[wfParam y] -/
builtin_dsimproc paramMatcher (_) := fun e => do
  let some matcherApp ← matchMatcherApp? e (alsoCasesOn := true)  | return .continue
  unless matcherApp.discrs.any (isWfParam? · |>.isSome) do return .continue
  let discrs' := matcherApp.discrs.map (fun e => isWfParam? e |>.getD e)
  let alts' ← matcherApp.alts.mapM fun alt =>
    lambdaTelescope alt fun xs body => do
      -- Annotate all xs with `wfParam`
      let xs' ← xs.mapM (mkWfParam ·)
      let body' := body.replaceFVars xs xs'
      mkLambdaFVars xs body'
  let matcherApp' := { matcherApp with discrs := discrs', alts := alts' }
  return .continue <| matcherApp'.toExpr

private def anyLetValueIsWfParam (e : Expr) : Bool :=
  match e with
  | .letE _ _ v b _ => (isWfParam? v).isSome || anyLetValueIsWfParam b
  | _               => false

private def numLetsWithValueNotIsWfParam (e : Expr) (acc := 0) : Nat :=
  match e with
  | .letE _ _ v b _ => if (isWfParam? v).isSome then acc else numLetsWithValueNotIsWfParam b (acc + 1)
  | _               => acc

private partial def processParamLet (e : Expr) : MetaM Expr := do
  if let .letE _ t v b _ := e then
    if let some v' := isWfParam? v then
      if ← Meta.isProp t then
        processParamLet <| e.updateLetE! t v' b
      else
        let u ← getLevel t
        let b' := b.instantiate1 <| mkApp2 (.const ``wfParam [u]) t (.bvar 0)
        processParamLet <| e.updateLetE! t v' b'
    else
      let num := numLetsWithValueNotIsWfParam e
      assert! num > 0
      letBoundedTelescope e num fun xs b => do
        let b' ← processParamLet b
        mkLetFVars (usedLetOnly := false) (generalizeNondepLet := false) xs b'
  else
    return e

/--
`let x : T := (wfParam e); body[x] ==> let x : T := e; body[wfParam y]` if `T` is not a proposition,
otherwise `... ==> let x : T := e; body[x]`. (Applies to `have`s too.)

Note: simprocs are provided the head of a let telescope, but not intermediate lets.
-/
builtin_dsimproc paramLet (_) := fun e => do
  unless e.isLet || anyLetValueIsWfParam e do return .continue
  return .continue (← processParamLet e)

/--
Transforms non-Prop `have`s to `let`s, so that the values can be used in GuessLex and decreasing-by proofs.
These `have`s may have been introduced by `simp`, which converts `let`s to `have`s.
-/
private def nonPropHaveToLet (e : Expr) : MetaM Expr := do
  Meta.transform e (pre := fun e => do
    if (← Meta.isProof e) then
      return .done e
    else if e.isLet then
      -- Recall that `Meta.transform` processes entire let telescopes,
      -- so we need to handle the telescope all at once.
      let lctx ← getLCtx
      let e' ← letTelescope e fun xs b => do
        let lctx' ← xs.foldlM (init := lctx) fun lctx' x => do
          let decl ← x.fvarId!.getDecl
          -- Clear the flag if it's not a prop.
          let decl' := decl.setNondep <| ← pure decl.isNondep <&&> Meta.isProp decl.type
          pure <| lctx'.addDecl decl'
        withLCtx' lctx' do
          mkLetFVars (usedLetOnly := false) (generalizeNondepLet := false) xs b
      return .continue e'
    else
      return .continue
  )

def preprocess (e : Expr) : MetaM Simp.Result := do
  unless wf.preprocess.get (← getOptions) do
    return { expr := e }
  -- Transform `let`s to `have`s to enable `simp` entering let bodies.
  let e ← letToHave e
  lambdaTelescope e fun xs _ => do
    -- Annotate all xs with `wfParam`
    let xs' ← xs.mapM mkWfParam
    let e' := e.beta xs'

    -- Now run the simplifier
    let simprocs : Simprocs := {}
    let simprocs ← simprocs.add ``paramProj (post := true)
    let simprocs ← simprocs.add ``paramMatcher (post := false)
    let simprocs ← simprocs.add ``paramLet (post := true)
    let (result, _) ← Meta.simp e' (← getSimpContext) (simprocs := #[simprocs])

    -- Remove left-over markers
    let e'' ← Core.transform result.expr fun e =>
      e.withApp fun f as => do
        if f.isConstOf ``wfParam then
          if h : as.size ≥ 2 then
            return .continue (mkAppN as[1] as[2...*])
        return .continue

    -- Transform `have`s to `let`s for non-propositions.
    let e''' ← nonPropHaveToLet e''

    trace[Elab.definition.wf] "Attach-introduction:{indentExpr e'}\nto{indentExpr result.expr}\ncleand up to {indentExpr e'''}"

    let result := { result with expr := e''' }
    result.addLambdas xs

end Lean.Elab.WF
