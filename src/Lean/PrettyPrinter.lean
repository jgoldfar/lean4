/-
Copyright (c) 2020 Sebastian Ullrich. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich
-/
module

prelude
public import Lean.PrettyPrinter.Delaborator
public import Lean.PrettyPrinter.Parenthesizer
public import Lean.PrettyPrinter.Formatter
public import Lean.Parser.Module
public import Lean.ParserCompiler
public import Lean.Util.NumObjs
public import Lean.Util.ShareCommon

public section

namespace Lean.PrettyPrinter

def ppCategory (cat : Name) (stx : Syntax) : CoreM Format := do
  let opts ← getOptions
  let stx := (sanitizeSyntax stx).run' { options := opts }
  parenthesizeCategory cat stx >>= formatCategory cat

def ppTerm (stx : Term) : CoreM Format := ppCategory `term stx

def ppUsing (e : Expr) (delab : Expr → MetaM Term) : MetaM Format := do
  let lctx := (← getLCtx).sanitizeNames.run' { options := (← getOptions) }
  Meta.withLCtx' lctx do
    ppTerm (← delab e)

register_builtin_option pp.exprSizes : Bool := {
  defValue := false
  group    := "pp"
  descr    := "(pretty printer) prefix each embedded expression with its sizes in the format \
    (size disregarding sharing/size with sharing/size with max sharing)"
}

private def maybePrependExprSizes (e : Expr) (f : Format) : MetaM Format := do
  if pp.exprSizes.get (← getOptions) then
    return f!"[size {e.sizeWithoutSharing}/{← e.numObjs}/{← (ShareCommon.shareCommon' e).numObjs}] {f}"
  else
    return f

def ppExpr (e : Expr) : MetaM Format := do
  ppUsing e delab >>= maybePrependExprSizes e

/-- Return a `fmt` representing pretty-printed `e` together with a map from tags in `fmt`
to `Elab.Info` nodes produced by the delaborator at various subexpressions of `e`. -/
def ppExprWithInfos (e : Expr) (optsPerPos : Delaborator.OptionsPerPos := {}) (delab := Delaborator.delab)
    : MetaM FormatWithInfos := do
  let lctx := (← getLCtx).sanitizeNames.run' { options := (← getOptions) }
  Meta.withLCtx' lctx do
    let (stx, infos) ← delabCore e optsPerPos delab
    let fmt ← ppTerm stx >>= maybePrependExprSizes e
    return ⟨fmt, infos⟩

open Delaborator in
def ppConstNameWithInfos (constName : Name) : MetaM FormatWithInfos := do
  if let some info := (← getEnv).find? constName then
    let delab := withOptionAtCurrPos `pp.tagAppFns true <| delabConst
    PrettyPrinter.ppExprWithInfos (delab := delab) (.const constName <| info.levelParams.map mkLevelParam)
  else
    -- Still, let's sanitize the name.
    let stx := mkIdent constName
    let stx := (sanitizeSyntax stx).run' { options := (← getOptions) }
    formatCategory `term stx

@[export lean_pp_expr]
def ppExprLegacy (env : Environment) (mctx : MetavarContext) (lctx : LocalContext) (opts : Options) (e : Expr) : IO Format :=
  Prod.fst <$> ((withOptions (fun _ => opts) <| ppExpr e).run' { lctx := lctx } { mctx := mctx }).toIO
    { fileName := "<PrettyPrinter>", fileMap := default }
    { env := env }

def ppTactic (stx : TSyntax `tactic) : CoreM Format := ppCategory `tactic stx

def ppCommand (stx : Syntax.Command) : CoreM Format := ppCategory `command stx

def ppModule (stx : TSyntax ``Parser.Module.module) : CoreM Format := do
  parenthesize Lean.Parser.Module.module.parenthesizer stx >>= format Lean.Parser.Module.module.formatter

open Delaborator in
/-- Pretty-prints a declaration `c` as `c.{<levels>} <params> : <type>`. -/
def ppSignature (c : Name) : MetaM FormatWithInfos := do
  let decl ← getConstInfo c
  let e := Expr.const c (decl.levelParams.map mkLevelParam)
  if pp.raw.get (← getOptions) then
    return s!"{e} : {decl.type}"
  else
    let (stx, infos) ← delabCore e (delab := delabConstWithSignature)
    return ⟨← ppTerm ⟨stx⟩, infos⟩  -- HACK: not a term

private partial def noContext : MessageData → MessageData
  | MessageData.withContext _   msg => noContext msg
  | MessageData.withNamingContext ctx msg => MessageData.withNamingContext ctx (noContext msg)
  | MessageData.nest n msg => MessageData.nest n (noContext msg)
  | MessageData.group msg  => MessageData.group (noContext msg)
  | MessageData.compose msg₁ msg₂ => MessageData.compose (noContext msg₁) (noContext msg₂)
  | MessageData.tagged tag msg => MessageData.tagged tag (noContext msg)
  | MessageData.trace data header children =>
    MessageData.trace data (noContext header) (children.map noContext)
  | msg => msg

-- strip context (including environments with registered pretty printers) to prevent infinite recursion when pretty printing pretty printer error
private def withoutContext {m} [MonadExcept Exception m] (x : m α) : m α :=
  tryCatch x fun
    | Exception.error ref msg => throw <| Exception.error ref (noContext msg)
    | ex                      => throw ex

builtin_initialize
  ppFnsRef.set {
    ppExprWithInfos := fun ctx e => ctx.runMetaM <| withoutContext <| ppExprWithInfos e
    ppConstNameWithInfos := fun ctx n => ctx.runMetaM <| withoutContext <| ppConstNameWithInfos n
    ppTerm := fun ctx stx => ctx.runCoreM <| withoutContext <| ppTerm stx
    ppLevel := fun ctx l => return l.format (mvars := getPPMVarsLevels ctx.opts)
    ppGoal := fun ctx mvarId => ctx.runMetaM <| withoutContext <| Meta.ppGoal mvarId
  }

builtin_initialize
  registerTraceClass `PrettyPrinter

@[builtin_init]
unsafe def registerParserCompilers : IO Unit := do
  ParserCompiler.registerParserCompiler ⟨`parenthesizer, parenthesizerAttribute, combinatorParenthesizerAttribute⟩
  ParserCompiler.registerParserCompiler ⟨`formatter, formatterAttribute, combinatorFormatterAttribute⟩

end PrettyPrinter

namespace MessageData

open Lean PrettyPrinter Delaborator

/--
Turns a `MetaM FormatWithInfos` into a `MessageData.lazy` which will run the monadic value.
-/
def ofFormatWithInfosM (fmt : MetaM FormatWithInfos) : MessageData :=
  .lazy fun ctx => do
    match (← ctx.runMetaM fmt |>.toBaseIO) with
    | .ok fmt => return .ofFormatWithInfos fmt
    | .error ex => return m!"[Error pretty printing: {ex}]"

/--
Pretty print a const expression using `delabConst` and generate terminfo.
This function avoids inserting `@` if the constant is for a function whose first
argument is implicit, which is what the default `toMessageData` for `Expr` does.
Panics if `e` is not a constant.
-/
def ofConst (e : Expr) : MessageData :=
  if e.isConst then
    let delab : Delab := withOptionAtCurrPos `pp.tagAppFns true delabConst
    .ofFormatWithInfosM (PrettyPrinter.ppExprWithInfos (delab := delab) e)
  else
    have : Inhabited MessageData :=
      ⟨m!"[Error pretty printing: expression not a constant]{Format.line}{e}"⟩
    panic! "not a constant"

/-- Generates `MessageData` for a declaration `c` as `c.{<levels>} <params> : <type>`, with terminfo. -/
def signature (c : Name) : MessageData :=
  .lazy fun ctx => do
    match (← ctx.runMetaM (PrettyPrinter.ppSignature c) |>.toBaseIO) with
    | .ok fmt => return .ofFormatWithInfos fmt
    | .error ex => return m!"[Error pretty printing signature: {ex}]{Format.line}{c}"

end MessageData

end Lean
