/-
Copyright (c) 2022 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
prelude
import Lake.Build.Data
import Lake.Build.Job.Basic
import Lake.Config.Dynlib

/-!
# Simple Builtin Facet Declarations

This module contains the definitions of most of the builtin facets.
The others are defined `Build.Info`. The facets there require configuration
definitions (e.g., `Module`), and some of the facets here are used in said
definitions.
-/

open System
open Lean hiding SearchPath

namespace Lake

structure ModuleDeps where
  dynlibs : Array FilePath := #[]
  plugins : Array FilePath := #[]
  deriving Inhabited, Repr

/-! ## Module Facets -/

/-- A module facet name along with proof of its data type. -/
structure ModuleFacet (α) where
  /-- The name of the module facet. -/
  name : Name
  /-- Proof that module's facet build result is of type α. -/
  data_eq : ModuleData name = α
  deriving Repr

instance (facet : ModuleFacet α) : FamilyDef ModuleData facet.name α :=
  ⟨facet.data_eq⟩

instance [FamilyOut ModuleData facet α] : CoeDep Name facet (ModuleFacet α) :=
  ⟨facet, FamilyOut.family_key_eq_type⟩

/--
The facet which builds all of a module's dependencies
(i.e., transitive local imports and `--load-dynlib` shared libraries).
Returns the list of shared libraries to load along with their search path.
-/
abbrev Module.depsFacet := `deps
module_data deps : ModuleDeps

/--
The core build facet of a Lean file.
Elaborates the Lean file via `lean` and produces all the Lean artifacts
of the module (i.e., `olean`, `ilean`, `c`).
Its trace just includes its dependencies.
-/
abbrev Module.leanArtsFacet := `leanArts
module_data leanArts : Unit

/-- The `olean` file produced by `lean`. -/
abbrev Module.oleanFacet := `olean
module_data olean : FilePath

/-- The `ilean` file produced by `lean`. -/
abbrev Module.ileanFacet := `ilean
module_data ilean : FilePath

/-- The C file built from the Lean file via `lean`. -/
abbrev Module.cFacet := `c
module_data c : FilePath

/-- The LLVM BC file built from the Lean file via `lean`. -/
abbrev Module.bcFacet := `bc
module_data bc : FilePath

/--
The object file `.c.o` built from `c`.
On Windows, this is `c.o.noexport`, on other systems it is `c.o.export`).
-/
abbrev Module.coFacet := `c.o
module_data c.o : FilePath

/-- The object file `.c.o.export` built from `c` (with `-DLEAN_EXPORTING`). -/
abbrev Module.coExportFacet := `c.o.export
module_data c.o.export : FilePath

/-- The object file `.c.o.noexport` built from `c` (without `-DLEAN_EXPORTING`). -/
abbrev Module.coNoExportFacet := `c.o.noexport
module_data c.o.noexport : FilePath

/-- The object file `.bc.o` built from `bc`. -/
abbrev Module.bcoFacet := `bc.o
module_data bc.o : FilePath

/--
The object file built from `c`/`bc`.
On Windows with the C backend, no Lean symbols are exported.
On every other configuration, symbols are exported.
-/
abbrev Module.oFacet := `o
module_data o : FilePath

/-- The object file built from `c`/`bc` (with Lean symbols exported). -/
abbrev Module.oExportFacet := `o.export
module_data o.export : FilePath

/-- The object file built from `c`/`bc` (without Lean symbols exported). -/
abbrev Module.oNoExportFacet := `o.noexport
module_data o.noexport : FilePath


/-! ## Package Facets -/

/--
A package's *optional* cached build archive (e.g., from Reservoir or GitHub).
Will NOT cause the whole build to fail if the archive cannot be fetched.
-/
abbrev Package.optBuildCacheFacet := `optCache
package_data optCache : Bool

/--
A package's cached build archive (e.g., from Reservoir or GitHub).
Will cause the whole build to fail if the archive cannot be fetched.
-/
abbrev Package.buildCacheFacet := `cache
package_data cache : Unit

/--
A package's *optional* build archive from Reservoir.
Will NOT cause the whole build to fail if the barrel cannot be fetched.
-/
abbrev Package.optReservoirBarrelFacet := `optBarrel
package_data optBarrel : Bool

/--
A package's Reservoir build archive from Reservoir.
Will cause the whole build to fail if the barrel cannot be fetched.
-/
abbrev Package.reservoirBarrelFacet := `barrel
package_data barrel : Unit

/--
A package's *optional* build archive from a GitHub release.
Will NOT cause the whole build to fail if the release cannot be fetched.
-/
abbrev Package.optGitHubReleaseFacet := `optRelease
package_data optRelease : Bool

@[deprecated optGitHubReleaseFacet (since := "2024-09-27")]
abbrev Package.optReleaseFacet := optGitHubReleaseFacet

/--
A package's build archive from a GitHub release.
Will cause the whole build to fail if the release cannot be fetched.
-/
abbrev Package.gitHubReleaseFacet := `release
package_data release : Unit

@[deprecated gitHubReleaseFacet (since := "2024-09-27")]
abbrev Package.releaseFacet := gitHubReleaseFacet

/-- A package's `extraDepTargets` mixed with its transitive dependencies'. -/
abbrev Package.extraDepFacet := `extraDep
package_data extraDep : Unit

/-! ## Target Facets -/

/-- A Lean library's Lean artifacts (i.e., `olean`, `ilean`, `c`). -/
abbrev LeanLib.leanArtsFacet := `leanArts
library_data leanArts : Unit

/-- A Lean library's static artifact. -/
abbrev LeanLib.staticFacet := `static
library_data static : FilePath

/--
A Lean library's static artifact (with exported symbols).

Static libraries with explicit exports are built as thin libraries.
Such libraries are usually used as part of the local build process of some
shared artifact and not publicly distributed. Standard static libraries are
much better for distribution.
-/
abbrev LeanLib.staticExportFacet := `static.export
library_data static.export : FilePath

/-- A Lean library's shared artifact. -/
abbrev LeanLib.sharedFacet := `shared
library_data shared : FilePath

/-- A Lean library's `extraDepTargets` mixed with its package's. -/
abbrev LeanLib.extraDepFacet := `extraDep
library_data extraDep : Unit

/-- A Lean binary executable. -/
abbrev LeanExe.exeFacet := `leanExe
target_data leanExe : FilePath

/-- A external library's static binary. -/
abbrev ExternLib.staticFacet := `externLib.static
target_data externLib.static : FilePath

/-- A external library's shared binary. -/
abbrev ExternLib.sharedFacet := `externLib.shared
target_data externLib.shared : FilePath

/-- A external library's dynlib. -/
abbrev ExternLib.dynlibFacet := `externLib.dynlib
target_data externLib.dynlib : Dynlib
