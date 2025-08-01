/-
Copyright (c) 2022 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
prelude
import Lean.Compiler.NameMangling
import Lake.Util.Casing
import Lake.Build.Facets
import Lake.Config.InstallPath
import Lake.Config.LeanConfig
import Lake.Config.Glob

namespace Lake
open Lean System

/-- A Lean library's declarative configuration. -/
configuration LeanLibConfig (name : Name) extends LeanConfig where
  /--
  The subdirectory of the package's source directory containing the library's
  Lean source files. Defaults simply to said `srcDir`.

  (This will be passed to `lean` as the `-R` option.)
  -/
  srcDir : FilePath := "."

  /--
  The root module(s) of the library.
  Submodules of these roots (e.g., `Lib.Foo` of `Lib`) are considered
  part of the library.
  Defaults to a single root of the target's name.
  -/
  roots : Array Name := #[name]

  /--
  An `Array` of module `Glob`s to build for the library.
  Defaults to a `Glob.one` of each of the library's  `roots`.

  Submodule globs build every source file within their directory.
  Local imports of glob'ed files (i.e., fellow modules of the workspace) are
  also recursively built.
  -/
  globs : Array Glob := roots.map Glob.one

  /--
  The name of the library artifact.
  Used as a base for the file names of its static and dynamic binaries.
  Defaults to the mangled name of the target.
  -/
  libName : String := name.mangle ""

  /--
  Whether static and shared binaries of this library should be prefixed with `lib` on Windows.

  Unlike Unix, Windows does not require native libraries to start with `lib` and,
  by convention, they usually do not. However, for consistent naming across all platforms,
  users may wish to enable this.

  Defaults to `false`.
  -/
  libPrefixOnWindows : Bool := false

  /-- An `Array` of targets to build before the executable's modules. -/
  needs : Array PartialBuildKey := #[]

  /--
   **Deprecated. Use `needs` instead.**
  An `Array` of target names to build before the library's modules.
  -/
  extraDepTargets : Array Name := #[]

  /--
  Whether to compile each of the library's modules into a native shared library
  that is loaded whenever the module is imported. This speeds up evaluation of
  metaprograms and enables the interpreter to run functions marked `@[extern]`.

  Defaults to `false`.
  -/
  precompileModules : Bool := false

  /--
  An `Array` of library facets to build on a bare `lake build` of the library.
  For example, `#[LeanLib.sharedLib]` will build the shared library facet.
  -/
  defaultFacets : Array Name := #[LeanLib.leanArtsFacet]

  /--
  The module facets to build and combine into the library's static
  and shared libraries. If `shouldExport` is true, the module facets should
  export any symbols a user may expect to lookup in the library. For example,
  the Lean interpreter will use exported symbols in linked libraries.

  Defaults to a singleton of `Module.oExportFacet` (if `shouldExport`) or
  `Module.oFacet`. That is, the  object files compiled from the Lean sources,
  potentially with exported Lean symbols.
  -/
  nativeFacets (shouldExport : Bool) : Array (ModuleFacet FilePath) :=
    #[if shouldExport then Module.oExportFacet else Module.oFacet]

deriving Inhabited

instance : EmptyCollection (LeanLibConfig n) := ⟨{}⟩

namespace LeanLibConfig

/-- The library's name. -/
abbrev name (_ : LeanLibConfig n) := n

/-- Whether the given module is considered local to the library. -/
def isLocalModule (mod : Name) (self : LeanLibConfig n) : Bool :=
  self.roots.any (fun root => root.isPrefixOf mod) ||
  self.globs.any (fun glob => glob.matches mod)

/-- Whether the given module is a buildable part of the library. -/
def isBuildableModule (mod : Name) (self : LeanLibConfig n) : Bool :=
  self.globs.any (fun glob => glob.matches mod) ||
  self.roots.any (fun root => root.isPrefixOf mod && self.globs.any (·.matches root))
