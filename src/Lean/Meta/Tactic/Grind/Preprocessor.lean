/-
Copyright (c) 2024 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Grind.Lemmas
import Lean.Meta.Canonicalizer
import Lean.Meta.Tactic.Util
import Lean.Meta.Tactic.Intro
import Lean.Meta.Tactic.Simp.Main
import Lean.Meta.Tactic.Grind.Attr
import Lean.Meta.Tactic.Grind.RevertAll
import Lean.Meta.Tactic.Grind.Types
import Lean.Meta.Tactic.Grind.Util
import Lean.Meta.Tactic.Grind.Cases
import Lean.Meta.Tactic.Grind.Injection
import Lean.Meta.Tactic.Grind.Core
import Lean.Meta.Tactic.Grind.Simp
import Lean.Meta.Tactic.Grind.Run
import Lean.Meta.Tactic.Grind.EMatch

namespace Lean.Meta.Grind
namespace Preprocessor

structure State where
  goals     : PArray Goal := {}
  deriving Inhabited

abbrev PreM := StateRefT State GrindCoreM

def PreM.run (x : PreM α) : GrindCoreM α := do
 x.run' {}

inductive IntroResult where
  | done
  | newHyp (fvarId : FVarId) (goal : Goal)
  | newDepHyp (goal : Goal)
  | newLocal (fvarId : FVarId) (goal : Goal)

def introNext (goal : Goal) : PreM IntroResult := do
  let target ← goal.mvarId.getType
  if target.isArrow then
    goal.mvarId.withContext do
      let p := target.bindingDomain!
      if !(← isProp p) then
        let (fvarId, mvarId) ← goal.mvarId.intro1P
        return .newLocal fvarId { goal with mvarId }
      else
        let tag ← goal.mvarId.getTag
        let q := target.bindingBody!
        -- TODO: keep applying simp/eraseIrrelevantMData/canon/shareCommon until no progress
        let r ← pre p
        let fvarId ← mkFreshFVarId
        let lctx := (← getLCtx).mkLocalDecl fvarId target.bindingName! r.expr target.bindingInfo!
        let mvarNew ← mkFreshExprMVarAt lctx (← getLocalInstances) q .syntheticOpaque tag
        let mvarIdNew := mvarNew.mvarId!
        mvarIdNew.withContext do
          let h ← mkLambdaFVars #[mkFVar fvarId] mvarNew
          match r.proof? with
          | some he =>
            let hNew := mkAppN (mkConst ``Lean.Grind.intro_with_eq) #[p, r.expr, q, he, h]
            goal.mvarId.assign hNew
            return .newHyp fvarId { goal with mvarId := mvarIdNew }
          | none =>
            -- `p` and `p'` are definitionally equal
            goal.mvarId.assign h
            return .newHyp fvarId { goal with mvarId := mvarIdNew }
  else if target.isLet || target.isForall then
    let (fvarId, mvarId) ← goal.mvarId.intro1P
    mvarId.withContext do
      let localDecl ← fvarId.getDecl
      if (← isProp localDecl.type) then
        -- Add a non-dependent copy
        let mvarId ← mvarId.assert (← mkFreshUserName localDecl.userName) localDecl.type (mkFVar fvarId)
        return .newDepHyp { goal with mvarId }
      else
        return .newLocal fvarId { goal with mvarId }
  else
    return .done

def pushResult (goal : Goal) : PreM Unit :=
  modify fun s => { s with goals := s.goals.push goal }

def isCasesCandidate (fvarId : FVarId) : MetaM Bool := do
  let .const declName _ := (← fvarId.getType).getAppFn | return false
  isGrindCasesTarget declName

def applyCases? (goal : Goal) (fvarId : FVarId) : MetaM (Option (List Goal)) := goal.mvarId.withContext do
  if (← isCasesCandidate fvarId) then
    let mvarIds ← cases goal.mvarId fvarId
    return mvarIds.map fun mvarId => { goal with mvarId }
  else
    return none

def applyInjection? (goal : Goal) (fvarId : FVarId) : MetaM (Option Goal) := do
  if let some mvarId ← injection? goal.mvarId fvarId then
    return some { goal with mvarId }
  else
    return none

partial def loop (goal : Goal) : PreM Unit := do
  if goal.inconsistent then
    return ()
  match (← introNext goal) with
  | .done =>
    if let some mvarId ← goal.mvarId.byContra? then
      loop { goal with mvarId }
    else
      pushResult goal
  | .newHyp fvarId goal =>
    if let some goals ← applyCases? goal fvarId then
      goals.forM loop
    else if let some goal ← applyInjection? goal fvarId then
      loop goal
    else
      loop (← GoalM.run' goal <| addHyp fvarId)
  | .newDepHyp goal =>
    loop goal
  | .newLocal fvarId goal =>
    if let some goals ← applyCases? goal fvarId then
      goals.forM loop
    else
      loop goal

def ppGoals (goals : PArray Goal) : PreM Format := do
  let mut r := f!""
  for goal in goals do
    let (f, _) ← GoalM.run goal ppState
    r := r ++ Format.line ++ f
  return r

-- TODO: refactor this code
def preprocess (mvarId : MVarId) : PreM State := do
  mvarId.ensureProp
  -- TODO: abstract metavars
  mvarId.ensureNoMVar
  let mvarId ← mvarId.clearAuxDecls
  let mvarId ← mvarId.revertAll
  mvarId.ensureNoMVar
  let mvarId ← mvarId.abstractNestedProofs (← getMainDeclName)
  let mvarId ← mvarId.unfoldReducible
  let mvarId ← mvarId.betaReduce
  loop (← mkGoal mvarId)
  let goals := (← get).goals
  -- Testing `ematch` module here. We will rewrite this part later.
  let goals ← goals.mapM fun goal => GoalM.run' goal (discard <| ematch)
  if (← isTracingEnabledFor `grind.pre) then
    trace[grind.debug.pre] (← ppGoals goals)
  for goal in goals do
    discard <| GoalM.run' goal <| checkInvariants (expensive := true)
  get

def preprocessAndProbe (mvarId : MVarId) (p : GoalM Unit) : PreM Unit := do
  let s ← preprocess mvarId
  s.goals.forM fun goal =>
    discard <| GoalM.run' goal p

end Preprocessor

open Preprocessor

def preprocessAndProbe (mvarId : MVarId) (mainDeclName : Name) (p : GoalM Unit) : MetaM Unit :=
  withoutModifyingMCtx do
    Preprocessor.preprocessAndProbe mvarId p |>.run |>.run mainDeclName {}

def preprocess (mvarId : MVarId) (mainDeclName : Name) (config : Grind.Config) : MetaM Preprocessor.State :=
  Preprocessor.preprocess mvarId |>.run |>.run mainDeclName config

def main (mvarId : MVarId) (config : Grind.Config) (mainDeclName : Name) : MetaM (List MVarId) := do
  let go : GrindCoreM (List MVarId) := do
    let s ← Preprocessor.preprocess mvarId |>.run
    let goals := s.goals.toList.filter fun goal => !goal.inconsistent
    return goals.map (·.mvarId)
  go.run mainDeclName config

end Lean.Meta.Grind
