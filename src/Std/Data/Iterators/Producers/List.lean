/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Paul Reichert
-/
module

prelude
public import Std.Data.Iterators.Producers.Monadic.List

@[expose] public section

/-!
# List iterator

This module provides an iterator for lists that is accessible via `List.iter`.
-/

namespace Std.Iterators

@[always_inline, inline]
def _root_.List.iter {α : Type w} (l : List α) :
    Iter (α := ListIterator α) α :=
  ((l.iterM Id).toIter : Iter α)

end Std.Iterators
