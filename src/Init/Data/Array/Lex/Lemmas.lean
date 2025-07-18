/-
Copyright (c) 2024 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Kim Morrison
-/
module

prelude
import all Init.Data.Array.Lex.Basic
public import Init.Data.Array.Lex.Basic
public import Init.Data.Array.Lemmas
public import Init.Data.List.Lex
import Init.Data.Range.Polymorphic.Lemmas
import Init.Data.Range.Polymorphic.NatLemmas

public section

set_option linter.listVariables true -- Enforce naming conventions for `List`/`Array`/`Vector` variables.
set_option linter.indexVariables true -- Enforce naming conventions for index variables.

namespace Array

/-! ### Lexicographic ordering -/

@[simp] theorem _root_.List.lt_toArray [LT α] {l₁ l₂ : List α} : l₁.toArray < l₂.toArray ↔ l₁ < l₂ := Iff.rfl
@[simp] theorem _root_.List.le_toArray [LT α] {l₁ l₂ : List α} : l₁.toArray ≤ l₂.toArray ↔ l₁ ≤ l₂ := Iff.rfl

@[simp] theorem lt_toList [LT α] {xs ys : Array α} : xs.toList < ys.toList ↔ xs < ys := Iff.rfl
@[simp] theorem le_toList [LT α] {xs ys : Array α} : xs.toList ≤ ys.toList ↔ xs ≤ ys := Iff.rfl

grind_pattern _root_.List.lt_toArray =>  l₁.toArray < l₂.toArray
grind_pattern _root_.List.le_toArray =>  l₁.toArray ≤ l₂.toArray
grind_pattern lt_toList => xs.toList < ys.toList
grind_pattern le_toList => xs.toList ≤ ys.toList

protected theorem not_lt_iff_ge [LT α] {xs ys : Array α} : ¬ xs < ys ↔ ys ≤ xs := Iff.rfl
protected theorem not_le_iff_gt [LT α] {xs ys : Array α} :
    ¬ xs ≤ ys ↔ ys < xs :=
  Classical.not_not

@[simp] theorem lex_empty [BEq α] {lt : α → α → Bool} {xs : Array α} : xs.lex #[] lt = false := by
  rw [lex, Std.PRange.forIn'_eq_match]
  simp [Std.PRange.SupportsUpperBound.IsSatisfied]

private theorem cons_lex_cons.forIn'_congr_aux [Monad m] {as bs : ρ} {_ : Membership α ρ}
    [ForIn' m ρ α inferInstance] (w : as = bs)
    {b b' : β} (hb : b = b')
    {f : (a' : α) → a' ∈ as → β → m (ForInStep β)}
    {g : (a' : α) → a' ∈ bs → β → m (ForInStep β)}
    (h : ∀ a m b, f a (by simpa [w] using m) b = g a m b) :
    forIn' as b f = forIn' bs b' g := by
  cases hb
  cases w
  have : f = g := by
    ext a ha acc
    apply h
  cases this
  rfl

private theorem cons_lex_cons [BEq α] {lt : α → α → Bool} {a b : α} {xs ys : Array α} :
     (#[a] ++ xs).lex (#[b] ++ ys) lt =
       (lt a b || a == b && xs.lex ys lt) := by
  simp only [lex, size_append, List.size_toArray, List.length_cons, List.length_nil, Nat.zero_add,
    Nat.add_min_add_left, Nat.add_lt_add_iff_left, Std.PRange.forIn'_eq_forIn'_toList]
  conv =>
    lhs; congr; congr
    rw [cons_lex_cons.forIn'_congr_aux Std.PRange.toList_eq_match rfl (fun _ _ _ => rfl)]
    simp only [Std.PRange.SupportsUpperBound.IsSatisfied, bind_pure_comp, map_pure]
    rw [cons_lex_cons.forIn'_congr_aux (if_pos (by omega)) rfl (fun _ _ _ => rfl)]
  simp only [Std.PRange.toList_open_eq_toList_closed_of_isSome_succ? (lo := 0) (h := rfl),
    Std.PRange.UpwardEnumerable.succ?, Nat.add_comm 1, Std.PRange.Nat.ClosedOpen.toList_succ_succ,
    Option.get_some, List.forIn'_cons, List.size_toArray, List.length_cons, List.length_nil,
    Nat.lt_add_one, getElem_append_left, List.getElem_toArray, List.getElem_cons_zero]
  cases lt a b
  · rw [bne]
    cases a == b <;> simp
  · simp

@[simp, grind =] theorem _root_.List.lex_toArray [BEq α] {lt : α → α → Bool} {l₁ l₂ : List α} :
    l₁.toArray.lex l₂.toArray lt = l₁.lex l₂ lt := by
  induction l₁ generalizing l₂ with
  | nil =>
    cases l₂
    · rw [lex, Std.PRange.forIn'_eq_match]
      simp [Std.PRange.SupportsUpperBound.IsSatisfied]
    · rw [lex, Std.PRange.forIn'_eq_match]
      simp [Std.PRange.SupportsUpperBound.IsSatisfied]
  | cons x l₁ ih =>
    cases l₂ with
    | nil =>
      rw [lex, Std.PRange.forIn'_eq_match]
      simp [Std.PRange.SupportsUpperBound.IsSatisfied]
    | cons y l₂ =>
      rw [List.toArray_cons, List.toArray_cons y, cons_lex_cons, List.lex, ih]

theorem singleton_lex_singleton [BEq α] {lt : α → α → Bool} : #[a].lex #[b] lt = lt a b := by
  simp

@[simp, grind =] theorem lex_toList [BEq α] {lt : α → α → Bool} {xs ys : Array α} :
    xs.toList.lex ys.toList lt = xs.lex ys lt := by
  cases xs <;> cases ys <;> simp

protected theorem lt_irrefl [LT α] [Std.Irrefl (· < · : α → α → Prop)] (xs : Array α) : ¬ xs < xs :=
  List.lt_irrefl xs.toList

instance ltIrrefl [LT α] [Std.Irrefl (· < · : α → α → Prop)] : Std.Irrefl (α := Array α) (· < ·) where
  irrefl := Array.lt_irrefl

@[simp] theorem not_lt_empty [LT α] (xs : Array α) : ¬ xs < #[] := List.not_lt_nil xs.toList
@[simp] theorem empty_le [LT α] (xs : Array α) : #[] ≤ xs := List.nil_le xs.toList

@[simp] theorem le_empty [LT α] {xs : Array α} : xs ≤ #[] ↔ xs = #[] := by
  cases xs
  simp

@[simp] theorem empty_lt_push [LT α] (xs : Array α) (a : α) : #[] < xs.push a := by
  rcases xs with (_ | ⟨x, xs⟩) <;> simp

protected theorem le_refl [LT α] [i₀ : Std.Irrefl (· < · : α → α → Prop)] (xs : Array α) : xs ≤ xs :=
  List.le_refl xs.toList

instance [LT α] [Std.Irrefl (· < · : α → α → Prop)] : Std.Refl (· ≤ · : Array α → Array α → Prop) where
  refl := Array.le_refl

protected theorem lt_trans [LT α]
    [i₁ : Trans (· < · : α → α → Prop) (· < ·) (· < ·)]
    {xs ys zs : Array α} (h₁ : xs < ys) (h₂ : ys < zs) : xs < zs :=
  List.lt_trans h₁ h₂

instance [LT α] [Trans (· < · : α → α → Prop) (· < ·) (· < ·)] :
    Trans (· < · : Array α → Array α → Prop) (· < ·) (· < ·) where
  trans h₁ h₂ := Array.lt_trans h₁ h₂

protected theorem lt_of_le_of_lt [LT α]
    [i₀ : Std.Irrefl (· < · : α → α → Prop)]
    [i₁ : Std.Asymm (· < · : α → α → Prop)]
    [i₂ : Std.Antisymm (¬ · < · : α → α → Prop)]
    [i₃ : Trans (¬ · < · : α → α → Prop) (¬ · < ·) (¬ · < ·)]
    {xs ys zs : Array α} (h₁ : xs ≤ ys) (h₂ : ys < zs) : xs < zs :=
  List.lt_of_le_of_lt h₁ h₂

protected theorem le_trans [LT α]
    [Std.Irrefl (· < · : α → α → Prop)]
    [Std.Asymm (· < · : α → α → Prop)]
    [Std.Antisymm (¬ · < · : α → α → Prop)]
    [Trans (¬ · < · : α → α → Prop) (¬ · < ·) (¬ · < ·)]
    {xs ys zs : Array α} (h₁ : xs ≤ ys) (h₂ : ys ≤ zs) : xs ≤ zs :=
  fun h₃ => h₁ (Array.lt_of_le_of_lt h₂ h₃)

instance [LT α]
    [Std.Irrefl (· < · : α → α → Prop)]
    [Std.Asymm (· < · : α → α → Prop)]
    [Std.Antisymm (¬ · < · : α → α → Prop)]
    [Trans (¬ · < · : α → α → Prop) (¬ · < ·) (¬ · < ·)] :
    Trans (· ≤ · : Array α → Array α → Prop) (· ≤ ·) (· ≤ ·) where
  trans h₁ h₂ := Array.le_trans h₁ h₂

protected theorem lt_asymm [LT α]
    [i : Std.Asymm (· < · : α → α → Prop)]
    {xs ys : Array α} (h : xs < ys) : ¬ ys < xs := List.lt_asymm h

instance [LT α]
    [Std.Asymm (· < · : α → α → Prop)] :
    Std.Asymm (· < · : Array α → Array α → Prop) where
  asymm _ _ := Array.lt_asymm

protected theorem le_total [LT α]
    [i : Std.Total (¬ · < · : α → α → Prop)] (xs ys : Array α) : xs ≤ ys ∨ ys ≤ xs :=
  List.le_total xs.toList ys.toList

@[simp] protected theorem not_lt [LT α]
    {xs ys : Array α} : ¬ xs < ys ↔ ys ≤ xs := Iff.rfl

@[simp] protected theorem not_le [LT α]
    {xs ys : Array α} : ¬ ys ≤ xs ↔ xs < ys := Classical.not_not

protected theorem le_of_lt [LT α]
    [i : Std.Total (¬ · < · : α → α → Prop)]
    {xs ys : Array α} (h : xs < ys) : xs ≤ ys :=
  List.le_of_lt h

protected theorem le_iff_lt_or_eq [LT α]
    [Std.Irrefl (· < · : α → α → Prop)]
    [Std.Antisymm (¬ · < · : α → α → Prop)]
    [Std.Total (¬ · < · : α → α → Prop)]
    {xs ys : Array α} : xs ≤ ys ↔ xs < ys ∨ xs = ys := by
  simpa using List.le_iff_lt_or_eq (l₁ := xs.toList) (l₂ := ys.toList)

instance [LT α]
    [Std.Total (¬ · < · : α → α → Prop)] :
    Std.Total (· ≤ · : Array α → Array α → Prop) where
  total := Array.le_total

@[simp] theorem lex_eq_true_iff_lt [BEq α] [LawfulBEq α] [LT α] [DecidableLT α]
    {xs ys : Array α} : lex xs ys = true ↔ xs < ys := by
  cases xs
  cases ys
  simp

@[simp] theorem lex_eq_false_iff_ge [BEq α] [LawfulBEq α] [LT α] [DecidableLT α]
    {xs ys : Array α} : lex xs ys = false ↔ ys ≤ xs := by
  cases xs
  cases ys
  simp

instance [DecidableEq α] [LT α] [DecidableLT α] : DecidableLT (Array α) :=
  fun xs ys => decidable_of_iff (lex xs ys = true) lex_eq_true_iff_lt

instance [DecidableEq α] [LT α] [DecidableLT α] : DecidableLE (Array α) :=
  fun xs ys => decidable_of_iff (lex ys xs = false) lex_eq_false_iff_ge

/--
`l₁` is lexicographically less than `l₂` if either
- `l₁` is pairwise equivalent under `· == ·` to `l₂.take l₁.size`,
  and `l₁` is shorter than `l₂` or
- there exists an index `i` such that
  - for all `j < i`, `l₁[j] == l₂[j]` and
  - `l₁[i] < l₂[i]`
-/
theorem lex_eq_true_iff_exists [BEq α] (lt : α → α → Bool) :
    lex l₁ l₂ lt = true ↔
      (l₁.isEqv (l₂.take l₁.size) (· == ·) ∧ l₁.size < l₂.size) ∨
        (∃ (i : Nat) (h₁ : i < l₁.size) (h₂ : i < l₂.size),
          (∀ j, (hj : j < i) →
            l₁[j]'(Nat.lt_trans hj h₁) == l₂[j]'(Nat.lt_trans hj h₂)) ∧ lt l₁[i] l₂[i]) := by
  cases l₁
  cases l₂
  simp [List.lex_eq_true_iff_exists]

/--
`l₁` is *not* lexicographically less than `l₂`
(which you might think of as "`l₂` is lexicographically greater than or equal to `l₁`"") if either
- `l₁` is pairwise equivalent under `· == ·` to `l₂.take l₁.length` or
- there exists an index `i` such that
  - for all `j < i`, `l₁[j] == l₂[j]` and
  - `l₂[i] < l₁[i]`

This formulation requires that `==` and `lt` are compatible in the following senses:
- `==` is symmetric
  (we unnecessarily further assume it is transitive, to make use of the existing typeclasses)
- `lt` is irreflexive with respect to `==` (i.e. if `x == y` then `lt x y = false`
- `lt` is asymmetric  (i.e. `lt x y = true → lt y x = false`)
- `lt` is antisymmetric with respect to `==` (i.e. `lt x y = false → lt y x = false → x == y`)
-/
theorem lex_eq_false_iff_exists [BEq α] [PartialEquivBEq α] (lt : α → α → Bool)
    (lt_irrefl : ∀ x y, x == y → lt x y = false)
    (lt_asymm : ∀ x y, lt x y = true → lt y x = false)
    (lt_antisymm : ∀ x y, lt x y = false → lt y x = false → x == y) :
    lex l₁ l₂ lt = false ↔
      (l₂.isEqv (l₁.take l₂.size) (· == ·)) ∨
        (∃ (i : Nat) (h₁ : i < l₁.size) (h₂ : i < l₂.size),
          (∀ j, (hj : j < i) →
            l₁[j]'(Nat.lt_trans hj h₁) == l₂[j]'(Nat.lt_trans hj h₂)) ∧ lt l₂[i] l₁[i]) := by
  cases l₁
  cases l₂
  simp_all [List.lex_eq_false_iff_exists]

protected theorem lt_iff_exists [LT α] {xs ys : Array α} :
    xs < ys ↔
      (xs = ys.take xs.size ∧ xs.size < ys.size) ∨
        (∃ (i : Nat) (h₁ : i < xs.size) (h₂ : i < ys.size),
          (∀ j, (hj : j < i) →
            xs[j]'(Nat.lt_trans hj h₁) = ys[j]'(Nat.lt_trans hj h₂)) ∧ xs[i] < ys[i]) := by
  cases xs
  cases ys
  simp [List.lt_iff_exists]

protected theorem le_iff_exists [LT α]
    [Std.Irrefl (· < · : α → α → Prop)]
    [Std.Asymm (· < · : α → α → Prop)]
    [Std.Antisymm (¬ · < · : α → α → Prop)] {xs ys : Array α} :
    xs ≤ ys ↔
      (xs = ys.take xs.size) ∨
        (∃ (i : Nat) (h₁ : i < xs.size) (h₂ : i < ys.size),
          (∀ j, (hj : j < i) →
            xs[j]'(Nat.lt_trans hj h₁) = ys[j]'(Nat.lt_trans hj h₂)) ∧ xs[i] < ys[i]) := by
  cases xs
  cases ys
  simp [List.le_iff_exists]

theorem append_left_lt [LT α] {xs ys zs : Array α} (h : ys < zs) :
    xs ++ ys < xs ++ zs := by
  cases xs
  cases ys
  cases zs
  simpa using List.append_left_lt h

theorem append_left_le [LT α]
    [Std.Irrefl (· < · : α → α → Prop)]
    [Std.Asymm (· < · : α → α → Prop)]
    [Std.Antisymm (¬ · < · : α → α → Prop)]
    {xs ys zs : Array α} (h : ys ≤ zs) :
    xs ++ ys ≤ xs ++ zs := by
  cases xs
  cases ys
  cases zs
  simpa using List.append_left_le h

theorem le_append_left [LT α] [Std.Irrefl (· < · : α → α → Prop)]
    {xs ys : Array α} : xs ≤ xs ++ ys := by
  cases xs
  cases ys
  simpa using List.le_append_left

protected theorem map_lt [LT α] [LT β]
    {xs ys : Array α} {f : α → β} (w : ∀ x y, x < y → f x < f y) (h : xs < ys) :
    map f xs < map f ys := by
  cases xs
  cases ys
  simpa using List.map_lt w h

protected theorem map_le [LT α] [LT β]
    [Std.Irrefl (· < · : α → α → Prop)]
    [Std.Asymm (· < · : α → α → Prop)]
    [Std.Antisymm (¬ · < · : α → α → Prop)]
    [Std.Irrefl (· < · : β → β → Prop)]
    [Std.Asymm (· < · : β → β → Prop)]
    [Std.Antisymm (¬ · < · : β → β → Prop)]
    {xs ys : Array α} {f : α → β} (w : ∀ x y, x < y → f x < f y) (h : xs ≤ ys) :
    map f xs ≤ map f ys := by
  cases xs
  cases ys
  simpa using List.map_le w h

end Array
