example : (λ x => x)
           =
           (λ x : Nat =>
             have foo := λ y => id (id y)
             foo (0 + x)) := by
  simp -zeta only [id]
  guard_target =ₛ
           (λ x => x)
           =
           (λ x : Nat =>
             have foo := λ y => y
             foo (0 + x))
  simp

example (a : Nat) (h : a = b) : (have x := 1*a; 0 + x) = 0 + b := by
   simp -zeta only [Nat.zero_add]
   guard_target =ₛ
       (have x := 1 * a; x) = b
   simp -zeta only [Nat.one_mul]
   guard_target =ₛ
       (have x := a; x) = b
   simp [h]

example (a : Nat) (h : a = b) : (have x := 1*a; 0 + x) = 0 + b := by
   simp -zeta only [Nat.zero_add, Nat.one_mul]
   guard_target =ₛ
       (have x := a; x) = b
   simp [h]

example (a : Nat) (h : a = b) : (have _y := 0; have x := 1*a; 0 + x) = 0 + b := by
   simp -zeta only [Nat.zero_add, Nat.one_mul]
   guard_target =ₛ
       (have x := a; x) = b
   simp [h]

example (a : Nat) (h : a = b) : (have y := 0; have x := y*0 + 1*a; 0 + x) = 0 + b := by
   simp -zeta only [Nat.zero_add, Nat.one_mul, Nat.mul_zero]
   guard_target =ₛ
       (have x := a; x) = b
   simp [h]

example (a : Nat) (h : a = b) : (have y := 0; have x := y*0 + 1*a; 0 + x) = 0 + b := by
   simp -zeta only [Nat.zero_add, Nat.one_mul]
   guard_target =ₛ
       (have y := 0; have x := y*0 + a; x) = b
   fail_if_success simp -zeta only [Nat.zero_add, Nat.one_mul] -- Should not make progress
   simp -zeta only [Nat.mul_zero]
   guard_target =ₛ
       (have x := 0 + a; x) = b
   simp -zeta only [Nat.zero_add]
   guard_target =ₛ
       (have x := a; x) = b
   simp [h]

def f (n : Nat) (e : Nat) :=
  match n with
  | 0 => e
  | n+1 => have _y := true; have x := 1*e; f n x

example (a b : Nat) (h : a = b) : f 2 (0 + a) = b := by
   simp -zeta only [f]
   guard_target =ₛ
     (have x := 1 * (0 + a); have x := 1 * x; x) = b
   fail_if_success simp -zeta only [f]
   simp -zeta only [Nat.one_mul]
   guard_target =ₛ
     (have x := 0 + a; have x := x; x) = b
   simp [h]

example (a b : Nat) (h : a = b) : f 20 (0 + a) = b := by
   simp -zeta only [f]
   fail_if_success simp -zeta only [f]
   simp -zeta only [Nat.one_mul]
   simp [h]

example (a b : Nat) (h : a = b) : f 50 (0 + a) = b := by
   simp -zeta only [f]
   fail_if_success simp -zeta only [f]
   simp -zeta only [Nat.one_mul]
   simp [h]

def g (n : Nat) (b : Bool) (e : Nat) :=
  match n with
  | 0 => if b then e else 0
  | n+1 => have b' := !b; have x := 1*e; g n b' x

example (a b : Nat) (h : a = b) : g 2 true (0 + a) = b := by
  simp -zeta only [g]
  guard_target =ₛ
    (have b' := !true; have x := 1 * (0 + a); have b' := !b';
     have x := 1 * x; if b' = true then x else 0) = b
  simp -zeta only [Bool.not_true, Nat.one_mul]
  guard_target =ₛ
    (have b' := false; have x := 0 + a; have b' := !b';
     have x := x; if b' = true then x else 0) = b
  simp [h]

example (a : Nat) : g 33 true (0 + a) = 0 := by
  simp -zeta only [g]
  fail_if_success simp -zeta only [g]
  simp -zeta only [Bool.not_true, Nat.one_mul]
  fail_if_success simp -zeta only [Bool.not_true, Nat.one_mul]
  simp -zeta only [Nat.zero_add]
  fail_if_success simp -zeta only [Nat.zero_add]
  simp
