module

public section

/--
trace: [Compiler.explicitRc] size: 17
    def testWithAnnotation @&n @&p @&q : obj :=
      jp _jp.1 fst.2 @&snd.3 : obj :=
        let snd := oproj[1] snd.3;
        inc snd;
        let _x.4 := ctor_0[Prod.mk] fst.2 snd;
        return _x.4;
      let zero := 0;
      let isZero := Nat.decEq n zero;
      cases isZero : obj
      | Bool.true =>
        let _x.5 := 123;
        goto _jp.1 _x.5 p
      | Bool.false =>
        let one := 1;
        let n.6 := Nat.sub n one;
        let _x.7 := Nat.add n.6 one;
        let _x.8 := Nat.mul n.6 _x.7;
        dec _x.7;
        dec n.6;
        goto _jp.1 _x.8 q
[Compiler.explicitRc] size: 4
    def testWithAnnotation._boxed n p q : obj :=
      let res := testWithAnnotation n p q;
      dec q;
      dec p;
      dec n;
      return res
-/
#guard_msgs in
set_option trace.Compiler.explicitRc true in
def testWithAnnotation (n : Nat) (p q : @&Prod Nat Nat) : Prod Nat Nat :=
  let (value, helper) :=
    match n with
    | 0 => (123, p)
    | n + 1 => (n * (n + 1), q)
  { helper with fst := value }


/--
trace: [Compiler.explicitRc] size: 20
    def testWithoutAnnotation @&n p q : obj :=
      jp _jp.1 fst.2 snd.3 : obj :=
        let snd := oproj[1] snd.3;
        inc snd;
        let _x.4 := reset[2] snd.3;
        let _x.5 := reuse _x.4 in ctor_0[Prod.mk] fst.2 snd;
        return _x.5;
      let zero := 0;
      let isZero := Nat.decEq n zero;
      cases isZero : obj
      | Bool.true =>
        dec q;
        let _x.6 := 123;
        goto _jp.1 _x.6 p
      | Bool.false =>
        dec p;
        let one := 1;
        let n.7 := Nat.sub n one;
        let _x.8 := Nat.add n.7 one;
        let _x.9 := Nat.mul n.7 _x.8;
        dec _x.8;
        dec n.7;
        goto _jp.1 _x.9 q
[Compiler.explicitRc] size: 2
    def testWithoutAnnotation._boxed n p q : obj :=
      let res := testWithoutAnnotation n p q;
      dec n;
      return res
-/
#guard_msgs in
set_option trace.Compiler.explicitRc true in
def testWithoutAnnotation (n : Nat) (p q : Prod Nat Nat) : Prod Nat Nat :=
  let (value, helper) :=
    match n with
    | 0 => (123, p)
    | n + 1 => (n * (n + 1), q)
  { helper with fst := value }
