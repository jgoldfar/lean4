/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Mario Carneiro
-/
prelude
import Init.Tactics

set_option linter.listVariables true -- Enforce naming conventions for `List`/`Array`/`Vector` variables.
set_option linter.indexVariables true -- Enforce naming conventions for index variables.


/--
Set an element in an array, using a proof that the index is in bounds.
(This proof can usually be omitted, and will be synthesized automatically.)

This will perform the update destructively provided that `a` has a reference
count of 1 when called.
-/
@[extern "lean_array_fset"]
def Array.set (xs : Array α) (i : @& Nat) (v : α) (h : i < xs.size := by get_elem_tactic) :
    Array α where
  toList := xs.toList.set i v

/--
Set an element in an array, or do nothing if the index is out of bounds.

This will perform the update destructively provided that `a` has a reference
count of 1 when called.
-/
@[inline] def Array.setIfInBounds (xs : Array α) (i : Nat) (v : α) : Array α :=
  dite (LT.lt i xs.size) (fun h => xs.set i v h) (fun _ => xs)

@[deprecated Array.setIfInBounds (since := "2024-11-24")] abbrev Array.setD := @Array.setIfInBounds

/--
Set an element in an array, or panic if the index is out of bounds.

This will perform the update destructively provided that `a` has a reference
count of 1 when called.
-/
@[extern "lean_array_set"]
def Array.set! (xs : Array α) (i : @& Nat) (v : α) : Array α :=
  Array.setIfInBounds xs i v
