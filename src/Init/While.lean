/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Init.Core

public section

namespace Lean

/-!
# `while` and `repeat` loop support

The parsers for `repeat`, `while`, and `repeat ... until` are
`@[builtin_doElem_parser]` definitions in `Lean.Parser.Do`.
-/

inductive Loop where
  | mk

@[inline]
partial def Loop.forIn {β : Type u} {m : Type u → Type v} [Monad m] (_ : Loop) (init : β) (f : Unit → β → m (ForInStep β)) : m β :=
  let rec @[specialize] loop (b : β) : m β := do
    match ← f () b with
      | ForInStep.done b  => pure b
      | ForInStep.yield b => loop b
  loop init

instance [Monad m] : ForIn m Loop Unit where
  forIn := Loop.forIn

-- The canonical parsers for `repeat`/`while`/`repeat ... until` live in `Lean.Parser.Do`
-- as `@[builtin_doElem_parser]` definitions. We register the expansion macros here so
-- they are available to `prelude` files in `Init`, which do not import `Lean.Elab`.

macro_rules
  | `(doElem| repeat%$tk $seq) => `(doElem| for%$tk _ in Loop.mk do $seq)

macro_rules
  | `(doElem| while%$tk $h : $cond do $seq) =>
    `(doElem| repeat%$tk if $h:ident : $cond then $seq else break)

macro_rules
  | `(doElem| while%$tk $cond do $seq) =>
    `(doElem| repeat%$tk if $cond then $seq else break)

macro_rules
  | `(doElem| repeat%$tk $seq until $cond) =>
    `(doElem| repeat%$tk do $seq:doSeq; if $cond then break)

end Lean
