/-
Copyright (c) 2026 Lean FRO, LLC. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
import Lean.Elab.Tactic.Grind.Basic
import Lean.Elab.Tactic.Grind.SimprocDSL
import Lean.Meta.Sym.Grind
import Lean.Meta.Sym.Simp.Variant
import Lean.Meta.Sym.Simp.Rewrite
import Lean.Meta.Sym.Simp.EvalGround
import Lean.Meta.Sym.Simp.Goal
import Lean.Meta.Sym.Simp.Attr
import Lean.Meta.Sym.Simp.ControlFlow
import Lean.Meta.Sym.Simp.Forall
import Lean.Meta.Tactic.Apply
import Lean.Elab.SyntheticMVars
namespace Lean.Elab.Tactic.Grind
open Meta Grind

private def ensureSym : GrindTacticM Unit := do
  unless (← read).sym do
    throwError "tactic is only available in `sym =>` mode"

/-- Lift a `SymM` computation into `GrindTacticM`. -/
private def liftSymM (k : Sym.SymM α) : GrindTacticM α := do
  -- GrindM := ... Sym.SymM, so SymM auto-lifts to GrindM
  liftGrindM k

private def evalIntroCore (internalize : Bool) (ids : TSyntaxArray `Lean.binderIdent) : GrindTacticM Unit := do
  ensureSym
  let goal ← getMainGoal
  let goal ←
    if ids.isEmpty then
      match (← liftSymM <| Grind.Goal.introN goal 1) with
      | .goal _ goal => pure goal
      | .failed => throwError "`intro` failed, no binders to introduce"
    else
      let names ← ids.mapM fun id => match id with
        | `(binderIdent| $name:ident) => pure name.getId
        | `(binderIdent| $_) => mkFreshBinderNameForTactic `h
      match (← liftSymM <| Grind.Goal.intros goal names) with
      | .goal _ goal => pure goal
      | .failed => throwError "`intro` failed"
  let goal ← if internalize then liftGrindM <| Grind.Goal.internalizeAll goal else pure goal
  replaceMainGoal [goal]

@[builtin_grind_tactic Parser.Tactic.Grind.symIntro] def evalSymIntro : GrindTactic := fun stx => do
  -- syntax: "intro" ("(" &"internalize" " := " (&"true" <|> &"false") ")")? binderIdent*
  match stx with
  | `(grind| intro $ids:binderIdent*) => evalIntroCore true ids
  | `(grind| intro (internalize := false) $ids:binderIdent*) => evalIntroCore false ids
  | `(grind| intro (internalize := true) $ids:binderIdent*) => evalIntroCore true ids
  | _ => throwUnsupportedSyntax

private def evalIntrosCore (internalize : Bool) : GrindTacticM Unit := do
  ensureSym
  let goal ← getMainGoal
  match (← liftSymM <| Grind.Goal.intros goal #[]) with
  | .goal _ goal =>
    let goal ← if internalize then liftGrindM <| Grind.Goal.internalizeAll goal else pure goal
    replaceMainGoal [goal]
  | .failed => throwError "`intros` failed"

@[builtin_grind_tactic Parser.Tactic.Grind.symIntros] def evalSymIntros : GrindTactic := fun stx => do
  match stx with
  | `(grind| intros) => evalIntrosCore true
  | `(grind| intros (internalize := false)) => evalIntrosCore false
  | `(grind| intros (internalize := true)) => evalIntrosCore true
  | _ => throwUnsupportedSyntax

/-- Get or create a `BackwardRule` for a declaration, using the name cache. -/
private def getOrCreateBackwardRule (declName : Name) : GrindTacticM Sym.BackwardRule := do
  if let some rule := (← get).cache.backwardRuleName.find? declName then
    return rule
  let rule ← Sym.mkBackwardRuleFromDecl declName
  modify fun s => { s with cache.backwardRuleName := s.cache.backwardRuleName.insert declName rule }
  return rule

/-- Get or create a `BackwardRule` for a term, using the syntax position cache. -/
private def getOrCreateBackwardRuleFromTerm (term : Syntax) : GrindTacticM Sym.BackwardRule := do
  let startPos := term.getPos?.map (·.byteIdx) |>.getD 0
  let endPos := term.getTailPos?.map (·.byteIdx) |>.getD 0
  let pos := (startPos, endPos)
  if let some rule := (← get).cache.backwardRuleSyntax.find? pos then
    return rule
  let e ← withMainContext do
    let e ← Term.elabTerm term none
    Term.synthesizeSyntheticMVars (postpone := .no)
    instantiateMVars e
  let rule ← Sym.mkBackwardRuleFromExpr e
  modify fun s => { s with cache.backwardRuleSyntax := s.cache.backwardRuleSyntax.insert pos rule }
  return rule

@[builtin_grind_tactic Parser.Tactic.Grind.symApply] def evalSymApply : GrindTactic := fun stx => do
  ensureSym
  let `(grind| apply $term:term) := stx | throwUnsupportedSyntax
  let goal ← getMainGoal
  goal.withContext do
  -- Try to interpret as a declaration name for efficient caching
  let rule ← match term with
  | `($id:ident) =>
    try
      let declName ← realizeGlobalConstNoOverload id
      getOrCreateBackwardRule declName
    catch _ =>
      getOrCreateBackwardRuleFromTerm term
  | _ =>
    getOrCreateBackwardRuleFromTerm term
  match (← liftSymM <| Grind.Goal.apply goal rule) with
  | .goals subgoals => replaceMainGoal subgoals
  | .failed => throwError "`apply` failed, rule is not applicable"

@[builtin_grind_tactic Parser.Tactic.Grind.symInternalize] def evalSymInternalize : GrindTactic := fun stx => do
  ensureSym
  let goal ← getMainGoal
  let num := if stx[1].isNone then 1 else stx[1][0].toNat
  let goal ← liftGrindM <| Grind.Goal.internalize goal num
  replaceMainGoal [goal]

@[builtin_grind_tactic Parser.Tactic.Grind.symInternalizeAll] def evalSymInternalizeAll : GrindTactic := fun _ => do
  ensureSym
  let goal ← getMainGoal
  let goal ← liftGrindM <| Grind.Goal.internalizeAll goal
  replaceMainGoal [goal]

@[builtin_grind_tactic Parser.Tactic.Grind.symByContra] def evalSymByContra : GrindTactic := fun _ => do
  ensureSym
  let goal ← getMainGoal
  let target ← goal.mvarId.getType
  if target.isFalse then
    throwError "`by_contra` failed, target is already `False`"
  -- If target is not a proposition, apply exfalso first
  let mvarId ← if (← isProp target) then pure goal.mvarId else goal.mvarId.exfalso
  let some mvarId ← mvarId.byContra?
    | throwError "`by_contra` failed"
  -- byContra? produces `⊢ ¬target → False`, introduce the negated hypothesis
  let (_, mvarId) ← mvarId.intro1
  let goal := { goal with mvarId }
  -- Internalize the negated hypothesis so the E-graph can detect contradictions
  let goal ← liftGrindM <| Grind.Goal.internalizeAll goal
  replaceMainGoal [goal]

section
open Sym.Simp

def trivialSimproc : Simproc := fun _ =>
  return .rfl

def elabOptSimproc (stx? : Option Syntax) : GrindTacticM Simproc := do
  let some stx := stx? | return trivialSimproc
  elabSymSimproc stx

def addExtraTheorems (post : Simproc) (extraNames : Array Name) : GrindTacticM Simproc := do
  if extraNames.isEmpty then return post
  let mut thms : Theorems := {}
  for name in extraNames do
    thms := thms.insert (← mkTheoremFromDecl name)
  return post >> thms.rewrite

def mkDefaultMethods (extraNames : Array Name) : GrindTacticM Sym.Simp.Methods := do
  let thms ← getSymSimpTheorems
  let pre := simpControl >> simpArrowTelescope
  let post ← addExtraTheorems (evalGround >> thms.rewrite) extraNames
  return { pre, post }

def elabVariant (variantName : Name) (extraNames : Array Name) : GrindTacticM (Sym.Simp.Methods × Sym.Simp.Config) := do
  if variantName.isAnonymous then
    return (← mkDefaultMethods extraNames, {})
  let some v := getSymSimpVariant? (← getEnv) variantName
    | throwError "unknown Sym.simp variant `{variantName}`"
  let pre ← elabOptSimproc v.pre?
  let post ← addExtraTheorems (← elabOptSimproc v.post?) extraNames
  return ({ pre, post}, v.config)

@[builtin_grind_tactic Parser.Tactic.Grind.symSimp] def evalSymSimp : GrindTactic := fun stx => do
  ensureSym
  let `(grind| simp $[$variantId?]? $[[ $[$extraIds],* ]]?) := stx | throwUnsupportedSyntax
  -- Resolve variant
  let variantName := variantId?.map (·.getId) |>.getD .anonymous
  -- Compose extra theorems into post
  let extraNames ← (extraIds.getD #[]).mapM fun id => realizeGlobalConstNoOverload id
  -- Cache lookup/creation
  let cacheKey : SimpCacheKey := { variant := variantName, extras := extraNames.toList }
  let simpState := (← get).cache.simpState[cacheKey]?.getD {}
  let (methods, config) ← elabVariant variantName extraNames
  let goal ← getMainGoal
  let (simpResult, simpState) ← liftGrindM <| goal.withContext do
    Sym.Simp.SimpM.run (Sym.Simp.simp (← goal.mvarId.getType)) methods config simpState
  -- Save updated cache
  modify fun s => { s with cache.simpState := s.cache.simpState.insert cacheKey simpState }
  -- Apply result to goal
  match (← liftGrindM <| Sym.Simp.Result.toSimpGoalResult simpResult goal.mvarId) with
  | .closed => replaceMainGoal []
  | .goal mvarId => replaceMainGoal [{ goal with mvarId }]
  | .noProgress => throwError "`Sym.simp` made no progress"

end

end Lean.Elab.Tactic.Grind
