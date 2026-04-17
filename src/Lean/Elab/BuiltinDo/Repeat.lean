/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Lean.Elab.BuiltinDo.Basic
meta import Lean.Parser.Do
import Lean.Elab.BuiltinDo.For

public section

namespace Lean.Elab.Do

open Lean.Parser.Term

/--
Builtin do-element elaborator for `repeat` (syntax kind `Lean.Parser.Term.doRepeat`).

Expands to `for _ in Loop.mk do ...`. A follow-up change will extend this
elaborator to choose between `Loop.mk` and a well-founded `Repeat.mk` based on a
configuration option.
-/
@[builtin_doElem_elab Lean.Parser.Term.doRepeat] def elabDoRepeat : DoElab := fun stx dec => do
  let `(doElem| repeat%$tk $seq) := stx | throwUnsupportedSyntax
  let expanded ← `(doElem| for%$tk _ in Loop.mk do $seq)
  Term.withMacroExpansion stx expanded <|
    withRef expanded <| elabDoElem ⟨expanded⟩ dec

@[builtin_macro Lean.Parser.Term.doWhileH] def expandDoWhileH : Macro
  | `(doElem| while%$tk $h : $cond do $seq) => `(doElem| repeat%$tk if $h:ident : $cond then $seq else break)
  | _ => Macro.throwUnsupported

@[builtin_macro Lean.Parser.Term.doWhile] def expandDoWhile : Macro
  | `(doElem| while%$tk $cond do $seq) => `(doElem| repeat%$tk if $cond then $seq else break)
  | _ => Macro.throwUnsupported

@[builtin_macro Lean.Parser.Term.doRepeatUntil] def expandDoRepeatUntil : Macro
  | `(doElem| repeat%$tk $seq until $cond) => `(doElem| repeat%$tk do $seq:doSeq; if $cond then break)
  | _ => Macro.throwUnsupported

end Lean.Elab.Do
