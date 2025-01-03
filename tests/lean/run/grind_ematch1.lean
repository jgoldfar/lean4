set_option trace.grind.ematch.pattern true
grind_pattern Array.get_set_eq  => a.set i v h
grind_pattern Array.get_set_ne => (a.set i v hi)[j]

-- Trace instances of the theorems above found using ematching

set_option trace.grind.ematch.instance true

set_option grind.debug.proofs true

/--
info: [grind.ematch.instance] Array.get_set_eq: (bs.set j w ⋯)[j] = w
[grind.ematch.instance] Array.get_set_eq: (as.set i v ⋯)[i] = v
[grind.ematch.instance] Array.get_set_ne: ∀ (hj : i < bs.size), j ≠ i → (bs.set j w ⋯)[i] = bs[i]
-/
#guard_msgs (info) in
example (as : Array α)
        (i : Nat)
        (h₁ : i < as.size)
        (h₂ : bs = as.set i v)
        (_  : ds = bs)
        (h₂ : j < bs.size)
        (h₃ : cs = bs.set j w)
        (h₄ : i ≠ j)
        (h₅ : i < cs.size)
        : p ↔ (cs[i] = as[i]) := by
  fail_if_success grind
  sorry

opaque R : Nat → Nat → Prop
theorem Rtrans (a b c : Nat) : R a b → R b c → R a c := sorry

grind_pattern Rtrans => R a b, R b c

/--
info: [grind.ematch.instance] Rtrans: R b c → R c d → R b d
[grind.ematch.instance] Rtrans: R a b → R b c → R a c
-/
#guard_msgs (info) in
example : R a b → R b c → R c d → False := by
  fail_if_success grind
  sorry

-- In the following test we are performing one round of ematching only
/--
info: [grind.ematch.instance] Rtrans: R c d → R d e → R c e
[grind.ematch.instance] Rtrans: R c d → R d n → R c n
[grind.ematch.instance] Rtrans: R b c → R c d → R b d
[grind.ematch.instance] Rtrans: R a b → R b c → R a c
-/
#guard_msgs (info) in
example : R a b → R b c → R c d → R d e → R d n → False := by
  fail_if_success grind
  sorry

/--
info: [grind.ematch.instance] Rtrans: R c d → R d e → R c e
[grind.ematch.instance] Rtrans: R c d → R d n → R c n
-/
#guard_msgs (info) in
example : R a b → R b c → R c d → R d e → R d n → False := by
  fail_if_success grind (instances := 2)
  sorry
