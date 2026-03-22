/-
Copyright (c) 2025 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
public import Lean.Meta.Sym.Pattern
public import Lean.Meta.DiscrTree
import Lean.Meta.Sym.Simp.DiscrTree
import Lean.Meta.AppBuilder
import Lean.ExtraModUses
public section
namespace Lean.Meta.Sym.Simp

/--
A simplification theorem for the structural simplifier.

Contains both the theorem expression and a precomputed pattern for efficient unification
during rewriting.
-/
structure Theorem where
  /-- The theorem expression, typically `Expr.const declName` for a named theorem. -/
  expr    : Expr
  /-- Precomputed pattern extracted from the theorem's type for efficient matching. -/
  pattern : Pattern
  /-- Right-hand side of the equation. -/
  rhs     : Expr
  deriving Inhabited

instance : BEq Theorem where
  beq thm₁ thm₂ := thm₁.expr == thm₂.expr

/-- Collection of simplification theorems available to the simplifier. -/
structure Theorems where
  thms : DiscrTree Theorem := {}
  deriving Inhabited

def Theorems.insert (thms : Theorems) (thm : Theorem) : Theorems :=
  { thms with thms := insertPattern thms.thms thm.pattern thm }

def Theorems.getMatch (thms : Theorems) (e : Expr) : Array Theorem :=
  Sym.getMatch thms.thms e

def Theorems.getMatchWithExtra (thms : Theorems) (e : Expr) : Array (Theorem × Nat) :=
  Sym.getMatchWithExtra thms.thms e

/-- Describes how a theorem's conclusion was adapted to an equality for use in `Sym.simp`. -/
private inductive EqAdaptation where
  /-- Already an equality `lhs = rhs`. Proof is used as-is. -/
  | eq
  /-- Was `¬ p`. Proof `h` adapted to `eq_false h : p = False`. -/
  | eqFalse
  /-- Was `p ↔ q`. Proof `h` adapted to `propext h : p = q`. -/
  | iff
  /-- Was a proposition `p`. Proof `h` adapted to `eq_true h : p = True`. -/
  | eqTrue

/--
Analyze the conclusion of a theorem type and extract `(lhs, rhs)` for use as a
rewrite rule in `Sym.simp`. Handles:
- `lhs = rhs` — used as-is
- `¬ p` — adapted to `p = False`
- `p ↔ q` — adapted to `p = q`
- `p` (proposition) — adapted to `p = True`
-/
private def selectEqKey (type : Expr) : MetaM (Expr × Expr × EqAdaptation) := do
  match_expr type with
  | Eq _ lhs rhs => return (lhs, rhs, .eq)
  | Not p => return (p, mkConst ``False, .eqFalse)
  | Iff lhs rhs => return (lhs, rhs, .iff)
  | _ =>
    unless (← isProp type) do
      throwError "cannot use as a simp theorem, conclusion is not a proposition{indentExpr type}"
    return (type, mkConst ``True, .eqTrue)

/--
Wrap a proof expression according to the adaptation applied to its type.
Given a proof `h : <original type>`, returns a proof of the adapted equality.
This wrapping must be applied AFTER the proof has been applied to its quantified arguments.
-/
private def wrapProof (numVars : Nat) (expr : Expr) (adaptation : EqAdaptation) : MetaM Expr :=
  match adaptation with
  | .eq => return expr
  | .eqFalse =>
    wrapInner numVars expr fun h => mkAppM ``eq_false #[h]
  | .iff =>
    wrapInner numVars expr fun h => mkAppM ``propext #[h]
  | .eqTrue =>
    wrapInner numVars expr fun h => mkAppM ``eq_true #[h]
where
  /-- Wraps the innermost application of `expr` (after `numVars` arguments) with `wrap`. -/
  wrapInner (numVars : Nat) (expr : Expr) (wrap : Expr → MetaM Expr) : MetaM Expr := do
    let type ← inferType expr
    forallBoundedTelescope type numVars fun xs _ => do
      let h := mkAppN expr xs
      mkLambdaFVars xs (← wrap h)

def mkTheoremFromDecl (declName : Name) : MetaM Theorem := do
  let (pattern, (rhs, adaptation)) ← mkPatternFromDeclWithKey declName selectEqKey
  let expr ← wrapProof pattern.varTypes.size (mkConst declName) adaptation
  return { expr, pattern, rhs }

/-- Create a `Theorem` from a proof expression. Handles equalities, `¬`, `↔`, and propositions. -/
def mkTheoremFromExpr (e : Expr) : MetaM Theorem := do
  let (pattern, (rhs, adaptation)) ← mkPatternFromExprWithKey e [] selectEqKey
  let expr ← wrapProof pattern.varTypes.size e adaptation
  return { expr, pattern, rhs }

/--
Environment extension storing a set of `Sym.Simp` theorems.
Each named set gets its own extension, created by `registerSymSimpAttr`.
-/
abbrev SymSimpExtension := SimpleScopedEnvExtension Theorem Theorems

def SymSimpExtension.getTheorems (ext : SymSimpExtension) : CoreM Theorems :=
  return ext.getState (← getEnv)

def mkSymSimpExt (name : Name := by exact decl_name%) : IO SymSimpExtension :=
  registerSimpleScopedEnvExtension {
    name     := name
    initial  := {}
    addEntry := fun thms thm => thms.insert thm
    exportEntry? := fun lvl thm => do
      let .const declName _ := thm.expr | return thm
      guard (lvl == .private || !isPrivateName declName)
      return thm
  }

abbrev SymSimpExtensionMap := Std.HashMap Name SymSimpExtension

builtin_initialize symSimpExtensionMapRef : IO.Ref SymSimpExtensionMap ← IO.mkRef {}

def getSymSimpExtension? (attrName : Name) : CoreM (Option SymSimpExtension) := do
  let ext? := (← symSimpExtensionMapRef.get)[attrName]?
  if let some ext := ext? then
    recordExtraModUseFromDecl (isMeta := true) ext.ext.name
  return ext?

end Lean.Meta.Sym.Simp
