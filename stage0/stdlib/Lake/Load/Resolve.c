// Lean compiler output
// Module: Lake.Load.Resolve
// Imports: public import Lake.Config.Workspace public import Lake.Load.Manifest import Lake.Util.IO import Lake.Util.StoreInsts import Lake.Config.Monad import Lake.Build.Topological import Lake.Load.Materialize import Lake.Load.Lean.Eval import Lake.Load.Package import Init.Data.Range.Polymorphic.Iterators import Init.TacticsExtra
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lake_PackageEntry_materialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lake_resolveConfigFile(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_loadConfigFile___redArg(lean_object*, lean_object*);
lean_object* l_Lake_mkPackage(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lake_FacetConfigMap_insert(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_defaultManifestFile;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_Dependency_materialize(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_instToString___lam__0(lean_object*);
lean_object* l_Lake_formatCycle___redArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Manifest_load(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_defaultLakeDir;
lean_object* l_Lake_Manifest_tryLoadEntries(lean_object*);
lean_object* l_Lake_mkRelPathString(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadErrorOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadCallStackOfCallStackTOfMonad___redArg(lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadCycleOfMonadCycleOf___redArg(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lake_recFetchAcyclic___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* lean_io_rename(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Env_noToolchainVars(lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_io_exit(uint8_t);
extern lean_object* l_Lake_toolchainFileName;
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Lake_ToolchainVer_ofFile_x3f(lean_object*);
uint8_t l_Lake_instDecidableEqToolchainVer_decEq(lean_object*, lean_object*);
uint8_t l_Lake_MaterializedDep_fixedToolchain(lean_object*);
uint8_t l_Lake_ToolchainVer_blt(lean_object*, lean_object*);
uint8_t l_Lake_ToolchainVer_ble(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Manifest_save(lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_DepStackT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_DepStackT_run(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "dependency cycle detected:\n"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveT_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveT_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___lam__1(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___closed__0_value;
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lake.Load.Resolve"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "_private.Lake.Load.Resolve.0.Lake.Workspace.resolveDepsCore.go"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__1_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "workspace shrunk"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__2 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__2_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3;
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__4 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__4_value;
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__5 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__5_value;
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__6 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__6_value;
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__7 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__7_value;
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__8 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__8_value;
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__9 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__9_value;
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__10 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__10_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__4_value),((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__5_value)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__11 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__11_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__11_value),((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__6_value),((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__7_value),((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__8_value),((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__9_value)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__12 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__12_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__12_value),((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__10_value)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__13 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__8(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = ": package requires itself (or a package with the same name)"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "could not rename workspace packages directory: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "workspace packages directory changed; renaming '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "' to '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3_value;
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = ": no previous manifest, creating one from scratch"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = ": ignoring previous manifest because it failed to load: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__10 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = ": ignoring missing manifest:\n  "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = ": ignoring manifest because it failed to load: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l___private_Lake_Load_Resolve_0__Lake_restartCode;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\n    from "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\n  "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " (fixed toolchain)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "restarting Lake via Elan"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "run"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "--install"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "no Elan detected; you will need to manually restart Lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "cannot auto-restart; you will need to manually restart Lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "updating toolchain to '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "toolchain not updated; multiple toolchain candidates:\n  "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "toolchain not updated; already up-to-date"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "toolchain not updated; no toolchain information found"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "toolchain not updated; multiple toolchain candidates:"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19_value;
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__13(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19_spec__23___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "  "};
static const lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19_spec__23___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19_spec__23___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19_spec__23(lean_object*, lean_object*);
static const lean_string_object l_Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19___closed__0 = (const lean_object*)&l_Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__11___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg___closed__0 = (const lean_object*)&l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26_spec__27(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11_spec__18___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__12_spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": updating '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "' with "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11_spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = ": running post-update hooks"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "manifest out of date: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " of dependency '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "' changed; use `lake update "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "` to update it"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "git revision"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "source kind (git/path)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "git url"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dependency '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "' of '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 169, .m_capacity = 169, .m_length = 168, .m_data = "' not in manifest; this suggests that the manifest is corrupt; use `lake update` to generate a new, complete file (warning: this will update ALL workspace dependencies)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "' not in manifest; use `lake update "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` to add it"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11_spec__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "missing manifest; use `lake update` to generate one"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__0 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__0_value;
static const lean_ctor_object l_Lake_Workspace_materializeDeps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_materializeDeps___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__1 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__1_value;
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "package-overrides.json"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__2 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__2_value;
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 147, .m_capacity = 147, .m_length = 146, .m_data = "manifest out of date: packages directory changed; use `lake update` to rebuild the manifest (warning: this will update ALL workspace dependencies)"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__3 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__3_value;
static const lean_ctor_object l_Lake_Workspace_materializeDeps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_materializeDeps___closed__3_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__4 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(lean_object* v_ws_3_, lean_object* v_dep_4_, lean_object* v_lakeOpts_5_, lean_object* v_leanOpts_6_, uint8_t v_reconfigure_7_){
_start:
{
lean_object* v_lakeEnv_8_; lean_object* v_packages_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v_manifestEntry_12_; lean_object* v_dir_13_; lean_object* v_pkgDir_14_; lean_object* v_relPkgDir_15_; lean_object* v_remoteUrl_16_; lean_object* v_name_17_; lean_object* v_scope_18_; lean_object* v_configFile_19_; lean_object* v_manifestFile_x3f_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___y_25_; 
v_lakeEnv_8_ = lean_ctor_get(v_ws_3_, 0);
v_packages_9_ = lean_ctor_get(v_ws_3_, 4);
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_array_fget_borrowed(v_packages_9_, v___x_10_);
v_manifestEntry_12_ = lean_ctor_get(v_dep_4_, 4);
lean_inc_ref(v_manifestEntry_12_);
v_dir_13_ = lean_ctor_get(v___x_11_, 4);
v_pkgDir_14_ = lean_ctor_get(v_dep_4_, 0);
lean_inc_ref_n(v_pkgDir_14_, 2);
v_relPkgDir_15_ = lean_ctor_get(v_dep_4_, 1);
lean_inc_ref(v_relPkgDir_15_);
v_remoteUrl_16_ = lean_ctor_get(v_dep_4_, 2);
lean_inc_ref(v_remoteUrl_16_);
lean_dec_ref(v_dep_4_);
v_name_17_ = lean_ctor_get(v_manifestEntry_12_, 0);
lean_inc(v_name_17_);
v_scope_18_ = lean_ctor_get(v_manifestEntry_12_, 1);
lean_inc_ref(v_scope_18_);
v_configFile_19_ = lean_ctor_get(v_manifestEntry_12_, 2);
lean_inc_ref_n(v_configFile_19_, 2);
v_manifestFile_x3f_20_ = lean_ctor_get(v_manifestEntry_12_, 3);
lean_inc(v_manifestFile_x3f_20_);
lean_dec_ref(v_manifestEntry_12_);
v___x_21_ = lean_box(0);
v___x_22_ = lean_array_get_size(v_packages_9_);
v___x_23_ = l_Lake_joinRelative(v_pkgDir_14_, v_configFile_19_);
if (lean_obj_tag(v_manifestFile_x3f_20_) == 0)
{
lean_object* v___x_30_; 
v___x_30_ = l_Lake_defaultManifestFile;
v___y_25_ = v___x_30_;
goto v___jp_24_;
}
else
{
lean_object* v_val_31_; 
v_val_31_ = lean_ctor_get(v_manifestFile_x3f_20_, 0);
lean_inc(v_val_31_);
lean_dec_ref(v_manifestFile_x3f_20_);
v___y_25_ = v_val_31_;
goto v___jp_24_;
}
v___jp_24_:
{
lean_object* v___x_26_; uint8_t v___x_27_; uint8_t v___x_28_; lean_object* v___x_29_; 
v___x_26_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_27_ = 0;
v___x_28_ = 1;
lean_inc_ref(v_dir_13_);
lean_inc_ref(v_lakeEnv_8_);
v___x_29_ = lean_alloc_ctor(0, 16, 3);
lean_ctor_set(v___x_29_, 0, v_lakeEnv_8_);
lean_ctor_set(v___x_29_, 1, v___x_21_);
lean_ctor_set(v___x_29_, 2, v_dir_13_);
lean_ctor_set(v___x_29_, 3, v___x_22_);
lean_ctor_set(v___x_29_, 4, v_name_17_);
lean_ctor_set(v___x_29_, 5, v_relPkgDir_15_);
lean_ctor_set(v___x_29_, 6, v_pkgDir_14_);
lean_ctor_set(v___x_29_, 7, v_configFile_19_);
lean_ctor_set(v___x_29_, 8, v___x_23_);
lean_ctor_set(v___x_29_, 9, v___x_21_);
lean_ctor_set(v___x_29_, 10, v___y_25_);
lean_ctor_set(v___x_29_, 11, v___x_26_);
lean_ctor_set(v___x_29_, 12, v_lakeOpts_5_);
lean_ctor_set(v___x_29_, 13, v_leanOpts_6_);
lean_ctor_set(v___x_29_, 14, v_scope_18_);
lean_ctor_set(v___x_29_, 15, v_remoteUrl_16_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16, v_reconfigure_7_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16 + 1, v___x_27_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16 + 2, v___x_28_);
return v___x_29_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___boxed(lean_object* v_ws_32_, lean_object* v_dep_33_, lean_object* v_lakeOpts_34_, lean_object* v_leanOpts_35_, lean_object* v_reconfigure_36_){
_start:
{
uint8_t v_reconfigure_boxed_37_; lean_object* v_res_38_; 
v_reconfigure_boxed_37_ = lean_unbox(v_reconfigure_36_);
v_res_38_ = l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(v_ws_32_, v_dep_33_, v_lakeOpts_34_, v_leanOpts_35_, v_reconfigure_boxed_37_);
lean_dec_ref(v_ws_32_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(lean_object* v_as_39_, size_t v_i_40_, size_t v_stop_41_, lean_object* v_b_42_){
_start:
{
uint8_t v___x_43_; 
v___x_43_ = lean_usize_dec_eq(v_i_40_, v_stop_41_);
if (v___x_43_ == 0)
{
lean_object* v___x_44_; lean_object* v_name_45_; lean_object* v_config_46_; lean_object* v_lakeEnv_47_; lean_object* v_lakeConfig_48_; lean_object* v_lakeCache_49_; lean_object* v_lakeArgs_x3f_50_; lean_object* v_packages_51_; lean_object* v_packageMap_52_; lean_object* v_facetConfigs_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_64_; 
v___x_44_ = lean_array_uget_borrowed(v_as_39_, v_i_40_);
v_name_45_ = lean_ctor_get(v___x_44_, 0);
v_config_46_ = lean_ctor_get(v___x_44_, 1);
v_lakeEnv_47_ = lean_ctor_get(v_b_42_, 0);
v_lakeConfig_48_ = lean_ctor_get(v_b_42_, 1);
v_lakeCache_49_ = lean_ctor_get(v_b_42_, 2);
v_lakeArgs_x3f_50_ = lean_ctor_get(v_b_42_, 3);
v_packages_51_ = lean_ctor_get(v_b_42_, 4);
v_packageMap_52_ = lean_ctor_get(v_b_42_, 5);
v_facetConfigs_53_ = lean_ctor_get(v_b_42_, 6);
v_isSharedCheck_64_ = !lean_is_exclusive(v_b_42_);
if (v_isSharedCheck_64_ == 0)
{
v___x_55_ = v_b_42_;
v_isShared_56_ = v_isSharedCheck_64_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_facetConfigs_53_);
lean_inc(v_packageMap_52_);
lean_inc(v_packages_51_);
lean_inc(v_lakeArgs_x3f_50_);
lean_inc(v_lakeCache_49_);
lean_inc(v_lakeConfig_48_);
lean_inc(v_lakeEnv_47_);
lean_dec(v_b_42_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_64_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_59_; 
lean_inc(v_config_46_);
lean_inc(v_name_45_);
v___x_57_ = l_Lake_FacetConfigMap_insert(v_name_45_, v_config_46_, v_facetConfigs_53_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 6, v___x_57_);
v___x_59_ = v___x_55_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_lakeEnv_47_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_lakeConfig_48_);
lean_ctor_set(v_reuseFailAlloc_63_, 2, v_lakeCache_49_);
lean_ctor_set(v_reuseFailAlloc_63_, 3, v_lakeArgs_x3f_50_);
lean_ctor_set(v_reuseFailAlloc_63_, 4, v_packages_51_);
lean_ctor_set(v_reuseFailAlloc_63_, 5, v_packageMap_52_);
lean_ctor_set(v_reuseFailAlloc_63_, 6, v___x_57_);
v___x_59_ = v_reuseFailAlloc_63_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
size_t v___x_60_; size_t v___x_61_; 
v___x_60_ = ((size_t)1ULL);
v___x_61_ = lean_usize_add(v_i_40_, v___x_60_);
v_i_40_ = v___x_61_;
v_b_42_ = v___x_59_;
goto _start;
}
}
}
else
{
return v_b_42_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0___boxed(lean_object* v_as_65_, lean_object* v_i_66_, lean_object* v_stop_67_, lean_object* v_b_68_){
_start:
{
size_t v_i_boxed_69_; size_t v_stop_boxed_70_; lean_object* v_res_71_; 
v_i_boxed_69_ = lean_unbox_usize(v_i_66_);
lean_dec(v_i_66_);
v_stop_boxed_70_ = lean_unbox_usize(v_stop_67_);
lean_dec(v_stop_67_);
v_res_71_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(v_as_65_, v_i_boxed_69_, v_stop_boxed_70_, v_b_68_);
lean_dec_ref(v_as_65_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(lean_object* v_decls_72_, lean_object* v_self_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = lean_array_get_size(v_decls_72_);
v___x_76_ = lean_nat_dec_lt(v___x_74_, v___x_75_);
if (v___x_76_ == 0)
{
return v_self_73_;
}
else
{
uint8_t v___x_77_; 
v___x_77_ = lean_nat_dec_le(v___x_75_, v___x_75_);
if (v___x_77_ == 0)
{
if (v___x_76_ == 0)
{
return v_self_73_;
}
else
{
size_t v___x_78_; size_t v___x_79_; lean_object* v___x_80_; 
v___x_78_ = ((size_t)0ULL);
v___x_79_ = lean_usize_of_nat(v___x_75_);
v___x_80_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(v_decls_72_, v___x_78_, v___x_79_, v_self_73_);
return v___x_80_;
}
}
else
{
size_t v___x_81_; size_t v___x_82_; lean_object* v___x_83_; 
v___x_81_ = ((size_t)0ULL);
v___x_82_ = lean_usize_of_nat(v___x_75_);
v___x_83_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(v_decls_72_, v___x_81_, v___x_82_, v_self_73_);
return v___x_83_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls___boxed(lean_object* v_decls_84_, lean_object* v_self_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(v_decls_84_, v_self_85_);
lean_dec_ref(v_decls_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(lean_object* v_k_87_, lean_object* v_v_88_, lean_object* v_t_89_){
_start:
{
if (lean_obj_tag(v_t_89_) == 0)
{
lean_object* v_size_90_; lean_object* v_k_91_; lean_object* v_v_92_; lean_object* v_l_93_; lean_object* v_r_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_374_; 
v_size_90_ = lean_ctor_get(v_t_89_, 0);
v_k_91_ = lean_ctor_get(v_t_89_, 1);
v_v_92_ = lean_ctor_get(v_t_89_, 2);
v_l_93_ = lean_ctor_get(v_t_89_, 3);
v_r_94_ = lean_ctor_get(v_t_89_, 4);
v_isSharedCheck_374_ = !lean_is_exclusive(v_t_89_);
if (v_isSharedCheck_374_ == 0)
{
v___x_96_ = v_t_89_;
v_isShared_97_ = v_isSharedCheck_374_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_r_94_);
lean_inc(v_l_93_);
lean_inc(v_v_92_);
lean_inc(v_k_91_);
lean_inc(v_size_90_);
lean_dec(v_t_89_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_374_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
uint8_t v___x_98_; 
v___x_98_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_87_, v_k_91_);
switch(v___x_98_)
{
case 0:
{
lean_object* v_impl_99_; lean_object* v___x_100_; 
lean_dec(v_size_90_);
v_impl_99_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_87_, v_v_88_, v_l_93_);
v___x_100_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_94_) == 0)
{
lean_object* v_size_101_; lean_object* v_size_102_; lean_object* v_k_103_; lean_object* v_v_104_; lean_object* v_l_105_; lean_object* v_r_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v_size_101_ = lean_ctor_get(v_r_94_, 0);
v_size_102_ = lean_ctor_get(v_impl_99_, 0);
lean_inc(v_size_102_);
v_k_103_ = lean_ctor_get(v_impl_99_, 1);
lean_inc(v_k_103_);
v_v_104_ = lean_ctor_get(v_impl_99_, 2);
lean_inc(v_v_104_);
v_l_105_ = lean_ctor_get(v_impl_99_, 3);
lean_inc(v_l_105_);
v_r_106_ = lean_ctor_get(v_impl_99_, 4);
lean_inc(v_r_106_);
v___x_107_ = lean_unsigned_to_nat(3u);
v___x_108_ = lean_nat_mul(v___x_107_, v_size_101_);
v___x_109_ = lean_nat_dec_lt(v___x_108_, v_size_102_);
lean_dec(v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_113_; 
lean_dec(v_r_106_);
lean_dec(v_l_105_);
lean_dec(v_v_104_);
lean_dec(v_k_103_);
v___x_110_ = lean_nat_add(v___x_100_, v_size_102_);
lean_dec(v_size_102_);
v___x_111_ = lean_nat_add(v___x_110_, v_size_101_);
lean_dec(v___x_110_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 3, v_impl_99_);
lean_ctor_set(v___x_96_, 0, v___x_111_);
v___x_113_ = v___x_96_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_111_);
lean_ctor_set(v_reuseFailAlloc_114_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_114_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_114_, 3, v_impl_99_);
lean_ctor_set(v_reuseFailAlloc_114_, 4, v_r_94_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
else
{
lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_180_; 
v_isSharedCheck_180_ = !lean_is_exclusive(v_impl_99_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; lean_object* v_unused_182_; lean_object* v_unused_183_; lean_object* v_unused_184_; lean_object* v_unused_185_; 
v_unused_181_ = lean_ctor_get(v_impl_99_, 4);
lean_dec(v_unused_181_);
v_unused_182_ = lean_ctor_get(v_impl_99_, 3);
lean_dec(v_unused_182_);
v_unused_183_ = lean_ctor_get(v_impl_99_, 2);
lean_dec(v_unused_183_);
v_unused_184_ = lean_ctor_get(v_impl_99_, 1);
lean_dec(v_unused_184_);
v_unused_185_ = lean_ctor_get(v_impl_99_, 0);
lean_dec(v_unused_185_);
v___x_116_ = v_impl_99_;
v_isShared_117_ = v_isSharedCheck_180_;
goto v_resetjp_115_;
}
else
{
lean_dec(v_impl_99_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_180_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v_size_118_; lean_object* v_size_119_; lean_object* v_k_120_; lean_object* v_v_121_; lean_object* v_l_122_; lean_object* v_r_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v_size_118_ = lean_ctor_get(v_l_105_, 0);
v_size_119_ = lean_ctor_get(v_r_106_, 0);
v_k_120_ = lean_ctor_get(v_r_106_, 1);
v_v_121_ = lean_ctor_get(v_r_106_, 2);
v_l_122_ = lean_ctor_get(v_r_106_, 3);
v_r_123_ = lean_ctor_get(v_r_106_, 4);
v___x_124_ = lean_unsigned_to_nat(2u);
v___x_125_ = lean_nat_mul(v___x_124_, v_size_118_);
v___x_126_ = lean_nat_dec_lt(v_size_119_, v___x_125_);
lean_dec(v___x_125_);
if (v___x_126_ == 0)
{
lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_155_; 
lean_inc(v_r_123_);
lean_inc(v_l_122_);
lean_inc(v_v_121_);
lean_inc(v_k_120_);
v_isSharedCheck_155_ = !lean_is_exclusive(v_r_106_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; lean_object* v_unused_157_; lean_object* v_unused_158_; lean_object* v_unused_159_; lean_object* v_unused_160_; 
v_unused_156_ = lean_ctor_get(v_r_106_, 4);
lean_dec(v_unused_156_);
v_unused_157_ = lean_ctor_get(v_r_106_, 3);
lean_dec(v_unused_157_);
v_unused_158_ = lean_ctor_get(v_r_106_, 2);
lean_dec(v_unused_158_);
v_unused_159_ = lean_ctor_get(v_r_106_, 1);
lean_dec(v_unused_159_);
v_unused_160_ = lean_ctor_get(v_r_106_, 0);
lean_dec(v_unused_160_);
v___x_128_ = v_r_106_;
v_isShared_129_ = v_isSharedCheck_155_;
goto v_resetjp_127_;
}
else
{
lean_dec(v_r_106_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_155_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___y_133_; lean_object* v___y_134_; lean_object* v___y_135_; lean_object* v___x_143_; lean_object* v___y_145_; 
v___x_130_ = lean_nat_add(v___x_100_, v_size_102_);
lean_dec(v_size_102_);
v___x_131_ = lean_nat_add(v___x_130_, v_size_101_);
lean_dec(v___x_130_);
v___x_143_ = lean_nat_add(v___x_100_, v_size_118_);
if (lean_obj_tag(v_l_122_) == 0)
{
lean_object* v_size_153_; 
v_size_153_ = lean_ctor_get(v_l_122_, 0);
lean_inc(v_size_153_);
v___y_145_ = v_size_153_;
goto v___jp_144_;
}
else
{
lean_object* v___x_154_; 
v___x_154_ = lean_unsigned_to_nat(0u);
v___y_145_ = v___x_154_;
goto v___jp_144_;
}
v___jp_132_:
{
lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_136_ = lean_nat_add(v___y_133_, v___y_135_);
lean_dec(v___y_135_);
lean_dec(v___y_133_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 4, v_r_94_);
lean_ctor_set(v___x_128_, 3, v_r_123_);
lean_ctor_set(v___x_128_, 2, v_v_92_);
lean_ctor_set(v___x_128_, 1, v_k_91_);
lean_ctor_set(v___x_128_, 0, v___x_136_);
v___x_138_ = v___x_128_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_136_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_142_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_142_, 3, v_r_123_);
lean_ctor_set(v_reuseFailAlloc_142_, 4, v_r_94_);
v___x_138_ = v_reuseFailAlloc_142_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
lean_object* v___x_140_; 
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 4, v___x_138_);
lean_ctor_set(v___x_116_, 3, v___y_134_);
lean_ctor_set(v___x_116_, 2, v_v_121_);
lean_ctor_set(v___x_116_, 1, v_k_120_);
lean_ctor_set(v___x_116_, 0, v___x_131_);
v___x_140_ = v___x_116_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_131_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v_k_120_);
lean_ctor_set(v_reuseFailAlloc_141_, 2, v_v_121_);
lean_ctor_set(v_reuseFailAlloc_141_, 3, v___y_134_);
lean_ctor_set(v_reuseFailAlloc_141_, 4, v___x_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
v___jp_144_:
{
lean_object* v___x_146_; lean_object* v___x_148_; 
v___x_146_ = lean_nat_add(v___x_143_, v___y_145_);
lean_dec(v___y_145_);
lean_dec(v___x_143_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_l_122_);
lean_ctor_set(v___x_96_, 3, v_l_105_);
lean_ctor_set(v___x_96_, 2, v_v_104_);
lean_ctor_set(v___x_96_, 1, v_k_103_);
lean_ctor_set(v___x_96_, 0, v___x_146_);
v___x_148_ = v___x_96_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v___x_146_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v_k_103_);
lean_ctor_set(v_reuseFailAlloc_152_, 2, v_v_104_);
lean_ctor_set(v_reuseFailAlloc_152_, 3, v_l_105_);
lean_ctor_set(v_reuseFailAlloc_152_, 4, v_l_122_);
v___x_148_ = v_reuseFailAlloc_152_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_149_; 
v___x_149_ = lean_nat_add(v___x_100_, v_size_101_);
if (lean_obj_tag(v_r_123_) == 0)
{
lean_object* v_size_150_; 
v_size_150_ = lean_ctor_get(v_r_123_, 0);
lean_inc(v_size_150_);
v___y_133_ = v___x_149_;
v___y_134_ = v___x_148_;
v___y_135_ = v_size_150_;
goto v___jp_132_;
}
else
{
lean_object* v___x_151_; 
v___x_151_ = lean_unsigned_to_nat(0u);
v___y_133_ = v___x_149_;
v___y_134_ = v___x_148_;
v___y_135_ = v___x_151_;
goto v___jp_132_;
}
}
}
}
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_166_; 
lean_del_object(v___x_96_);
v___x_161_ = lean_nat_add(v___x_100_, v_size_102_);
lean_dec(v_size_102_);
v___x_162_ = lean_nat_add(v___x_161_, v_size_101_);
lean_dec(v___x_161_);
v___x_163_ = lean_nat_add(v___x_100_, v_size_101_);
v___x_164_ = lean_nat_add(v___x_163_, v_size_119_);
lean_dec(v___x_163_);
lean_inc_ref(v_r_94_);
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 4, v_r_94_);
lean_ctor_set(v___x_116_, 3, v_r_106_);
lean_ctor_set(v___x_116_, 2, v_v_92_);
lean_ctor_set(v___x_116_, 1, v_k_91_);
lean_ctor_set(v___x_116_, 0, v___x_164_);
v___x_166_ = v___x_116_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_179_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_179_, 3, v_r_106_);
lean_ctor_set(v_reuseFailAlloc_179_, 4, v_r_94_);
v___x_166_ = v_reuseFailAlloc_179_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_173_; 
v_isSharedCheck_173_ = !lean_is_exclusive(v_r_94_);
if (v_isSharedCheck_173_ == 0)
{
lean_object* v_unused_174_; lean_object* v_unused_175_; lean_object* v_unused_176_; lean_object* v_unused_177_; lean_object* v_unused_178_; 
v_unused_174_ = lean_ctor_get(v_r_94_, 4);
lean_dec(v_unused_174_);
v_unused_175_ = lean_ctor_get(v_r_94_, 3);
lean_dec(v_unused_175_);
v_unused_176_ = lean_ctor_get(v_r_94_, 2);
lean_dec(v_unused_176_);
v_unused_177_ = lean_ctor_get(v_r_94_, 1);
lean_dec(v_unused_177_);
v_unused_178_ = lean_ctor_get(v_r_94_, 0);
lean_dec(v_unused_178_);
v___x_168_ = v_r_94_;
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
else
{
lean_dec(v_r_94_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_171_; 
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 4, v___x_166_);
lean_ctor_set(v___x_168_, 3, v_l_105_);
lean_ctor_set(v___x_168_, 2, v_v_104_);
lean_ctor_set(v___x_168_, 1, v_k_103_);
lean_ctor_set(v___x_168_, 0, v___x_162_);
v___x_171_ = v___x_168_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v_k_103_);
lean_ctor_set(v_reuseFailAlloc_172_, 2, v_v_104_);
lean_ctor_set(v_reuseFailAlloc_172_, 3, v_l_105_);
lean_ctor_set(v_reuseFailAlloc_172_, 4, v___x_166_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_186_; 
v_l_186_ = lean_ctor_get(v_impl_99_, 3);
lean_inc(v_l_186_);
if (lean_obj_tag(v_l_186_) == 0)
{
lean_object* v_r_187_; lean_object* v_k_188_; lean_object* v_v_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_200_; 
v_r_187_ = lean_ctor_get(v_impl_99_, 4);
v_k_188_ = lean_ctor_get(v_impl_99_, 1);
v_v_189_ = lean_ctor_get(v_impl_99_, 2);
v_isSharedCheck_200_ = !lean_is_exclusive(v_impl_99_);
if (v_isSharedCheck_200_ == 0)
{
lean_object* v_unused_201_; lean_object* v_unused_202_; 
v_unused_201_ = lean_ctor_get(v_impl_99_, 3);
lean_dec(v_unused_201_);
v_unused_202_ = lean_ctor_get(v_impl_99_, 0);
lean_dec(v_unused_202_);
v___x_191_ = v_impl_99_;
v_isShared_192_ = v_isSharedCheck_200_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_r_187_);
lean_inc(v_v_189_);
lean_inc(v_k_188_);
lean_dec(v_impl_99_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_200_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; lean_object* v___x_195_; 
v___x_193_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_187_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 3, v_r_187_);
lean_ctor_set(v___x_191_, 2, v_v_92_);
lean_ctor_set(v___x_191_, 1, v_k_91_);
lean_ctor_set(v___x_191_, 0, v___x_100_);
v___x_195_ = v___x_191_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_199_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_199_, 3, v_r_187_);
lean_ctor_set(v_reuseFailAlloc_199_, 4, v_r_187_);
v___x_195_ = v_reuseFailAlloc_199_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_197_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v___x_195_);
lean_ctor_set(v___x_96_, 3, v_l_186_);
lean_ctor_set(v___x_96_, 2, v_v_189_);
lean_ctor_set(v___x_96_, 1, v_k_188_);
lean_ctor_set(v___x_96_, 0, v___x_193_);
v___x_197_ = v___x_96_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v_k_188_);
lean_ctor_set(v_reuseFailAlloc_198_, 2, v_v_189_);
lean_ctor_set(v_reuseFailAlloc_198_, 3, v_l_186_);
lean_ctor_set(v_reuseFailAlloc_198_, 4, v___x_195_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
else
{
lean_object* v_r_203_; 
v_r_203_ = lean_ctor_get(v_impl_99_, 4);
lean_inc(v_r_203_);
if (lean_obj_tag(v_r_203_) == 0)
{
lean_object* v_k_204_; lean_object* v_v_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_228_; 
v_k_204_ = lean_ctor_get(v_impl_99_, 1);
v_v_205_ = lean_ctor_get(v_impl_99_, 2);
v_isSharedCheck_228_ = !lean_is_exclusive(v_impl_99_);
if (v_isSharedCheck_228_ == 0)
{
lean_object* v_unused_229_; lean_object* v_unused_230_; lean_object* v_unused_231_; 
v_unused_229_ = lean_ctor_get(v_impl_99_, 4);
lean_dec(v_unused_229_);
v_unused_230_ = lean_ctor_get(v_impl_99_, 3);
lean_dec(v_unused_230_);
v_unused_231_ = lean_ctor_get(v_impl_99_, 0);
lean_dec(v_unused_231_);
v___x_207_ = v_impl_99_;
v_isShared_208_ = v_isSharedCheck_228_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_v_205_);
lean_inc(v_k_204_);
lean_dec(v_impl_99_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_228_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v_k_209_; lean_object* v_v_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_224_; 
v_k_209_ = lean_ctor_get(v_r_203_, 1);
v_v_210_ = lean_ctor_get(v_r_203_, 2);
v_isSharedCheck_224_ = !lean_is_exclusive(v_r_203_);
if (v_isSharedCheck_224_ == 0)
{
lean_object* v_unused_225_; lean_object* v_unused_226_; lean_object* v_unused_227_; 
v_unused_225_ = lean_ctor_get(v_r_203_, 4);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_r_203_, 3);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_r_203_, 0);
lean_dec(v_unused_227_);
v___x_212_ = v_r_203_;
v_isShared_213_ = v_isSharedCheck_224_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_v_210_);
lean_inc(v_k_209_);
lean_dec(v_r_203_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_224_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_214_; lean_object* v___x_216_; 
v___x_214_ = lean_unsigned_to_nat(3u);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 4, v_l_186_);
lean_ctor_set(v___x_212_, 3, v_l_186_);
lean_ctor_set(v___x_212_, 2, v_v_205_);
lean_ctor_set(v___x_212_, 1, v_k_204_);
lean_ctor_set(v___x_212_, 0, v___x_100_);
v___x_216_ = v___x_212_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v_k_204_);
lean_ctor_set(v_reuseFailAlloc_223_, 2, v_v_205_);
lean_ctor_set(v_reuseFailAlloc_223_, 3, v_l_186_);
lean_ctor_set(v_reuseFailAlloc_223_, 4, v_l_186_);
v___x_216_ = v_reuseFailAlloc_223_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
lean_object* v___x_218_; 
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 4, v_l_186_);
lean_ctor_set(v___x_207_, 2, v_v_92_);
lean_ctor_set(v___x_207_, 1, v_k_91_);
lean_ctor_set(v___x_207_, 0, v___x_100_);
v___x_218_ = v___x_207_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_222_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_222_, 3, v_l_186_);
lean_ctor_set(v_reuseFailAlloc_222_, 4, v_l_186_);
v___x_218_ = v_reuseFailAlloc_222_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
lean_object* v___x_220_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v___x_218_);
lean_ctor_set(v___x_96_, 3, v___x_216_);
lean_ctor_set(v___x_96_, 2, v_v_210_);
lean_ctor_set(v___x_96_, 1, v_k_209_);
lean_ctor_set(v___x_96_, 0, v___x_214_);
v___x_220_ = v___x_96_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_214_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v_k_209_);
lean_ctor_set(v_reuseFailAlloc_221_, 2, v_v_210_);
lean_ctor_set(v_reuseFailAlloc_221_, 3, v___x_216_);
lean_ctor_set(v_reuseFailAlloc_221_, 4, v___x_218_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
}
else
{
lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_232_ = lean_unsigned_to_nat(2u);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_r_203_);
lean_ctor_set(v___x_96_, 3, v_impl_99_);
lean_ctor_set(v___x_96_, 0, v___x_232_);
v___x_234_ = v___x_96_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_235_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_235_, 3, v_impl_99_);
lean_ctor_set(v_reuseFailAlloc_235_, 4, v_r_203_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
case 1:
{
lean_object* v___x_237_; 
lean_dec(v_v_92_);
lean_dec(v_k_91_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 2, v_v_88_);
lean_ctor_set(v___x_96_, 1, v_k_87_);
v___x_237_ = v___x_96_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_size_90_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_238_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_238_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_238_, 4, v_r_94_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
default: 
{
lean_object* v_impl_239_; lean_object* v___x_240_; 
lean_dec(v_size_90_);
v_impl_239_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_87_, v_v_88_, v_r_94_);
v___x_240_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_93_) == 0)
{
lean_object* v_size_241_; lean_object* v_size_242_; lean_object* v_k_243_; lean_object* v_v_244_; lean_object* v_l_245_; lean_object* v_r_246_; lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
v_size_241_ = lean_ctor_get(v_l_93_, 0);
v_size_242_ = lean_ctor_get(v_impl_239_, 0);
lean_inc(v_size_242_);
v_k_243_ = lean_ctor_get(v_impl_239_, 1);
lean_inc(v_k_243_);
v_v_244_ = lean_ctor_get(v_impl_239_, 2);
lean_inc(v_v_244_);
v_l_245_ = lean_ctor_get(v_impl_239_, 3);
lean_inc(v_l_245_);
v_r_246_ = lean_ctor_get(v_impl_239_, 4);
lean_inc(v_r_246_);
v___x_247_ = lean_unsigned_to_nat(3u);
v___x_248_ = lean_nat_mul(v___x_247_, v_size_241_);
v___x_249_ = lean_nat_dec_lt(v___x_248_, v_size_242_);
lean_dec(v___x_248_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_253_; 
lean_dec(v_r_246_);
lean_dec(v_l_245_);
lean_dec(v_v_244_);
lean_dec(v_k_243_);
v___x_250_ = lean_nat_add(v___x_240_, v_size_241_);
v___x_251_ = lean_nat_add(v___x_250_, v_size_242_);
lean_dec(v_size_242_);
lean_dec(v___x_250_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_impl_239_);
lean_ctor_set(v___x_96_, 0, v___x_251_);
v___x_253_ = v___x_96_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_251_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_254_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_254_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_254_, 4, v_impl_239_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
else
{
lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_318_; 
v_isSharedCheck_318_ = !lean_is_exclusive(v_impl_239_);
if (v_isSharedCheck_318_ == 0)
{
lean_object* v_unused_319_; lean_object* v_unused_320_; lean_object* v_unused_321_; lean_object* v_unused_322_; lean_object* v_unused_323_; 
v_unused_319_ = lean_ctor_get(v_impl_239_, 4);
lean_dec(v_unused_319_);
v_unused_320_ = lean_ctor_get(v_impl_239_, 3);
lean_dec(v_unused_320_);
v_unused_321_ = lean_ctor_get(v_impl_239_, 2);
lean_dec(v_unused_321_);
v_unused_322_ = lean_ctor_get(v_impl_239_, 1);
lean_dec(v_unused_322_);
v_unused_323_ = lean_ctor_get(v_impl_239_, 0);
lean_dec(v_unused_323_);
v___x_256_ = v_impl_239_;
v_isShared_257_ = v_isSharedCheck_318_;
goto v_resetjp_255_;
}
else
{
lean_dec(v_impl_239_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_318_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v_size_258_; lean_object* v_k_259_; lean_object* v_v_260_; lean_object* v_l_261_; lean_object* v_r_262_; lean_object* v_size_263_; lean_object* v___x_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
v_size_258_ = lean_ctor_get(v_l_245_, 0);
v_k_259_ = lean_ctor_get(v_l_245_, 1);
v_v_260_ = lean_ctor_get(v_l_245_, 2);
v_l_261_ = lean_ctor_get(v_l_245_, 3);
v_r_262_ = lean_ctor_get(v_l_245_, 4);
v_size_263_ = lean_ctor_get(v_r_246_, 0);
v___x_264_ = lean_unsigned_to_nat(2u);
v___x_265_ = lean_nat_mul(v___x_264_, v_size_263_);
v___x_266_ = lean_nat_dec_lt(v_size_258_, v___x_265_);
lean_dec(v___x_265_);
if (v___x_266_ == 0)
{
lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_294_; 
lean_inc(v_r_262_);
lean_inc(v_l_261_);
lean_inc(v_v_260_);
lean_inc(v_k_259_);
v_isSharedCheck_294_ = !lean_is_exclusive(v_l_245_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; lean_object* v_unused_296_; lean_object* v_unused_297_; lean_object* v_unused_298_; lean_object* v_unused_299_; 
v_unused_295_ = lean_ctor_get(v_l_245_, 4);
lean_dec(v_unused_295_);
v_unused_296_ = lean_ctor_get(v_l_245_, 3);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_l_245_, 2);
lean_dec(v_unused_297_);
v_unused_298_ = lean_ctor_get(v_l_245_, 1);
lean_dec(v_unused_298_);
v_unused_299_ = lean_ctor_get(v_l_245_, 0);
lean_dec(v_unused_299_);
v___x_268_ = v_l_245_;
v_isShared_269_ = v_isSharedCheck_294_;
goto v_resetjp_267_;
}
else
{
lean_dec(v_l_245_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_294_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___y_273_; lean_object* v___y_274_; lean_object* v___y_275_; lean_object* v___y_284_; 
v___x_270_ = lean_nat_add(v___x_240_, v_size_241_);
v___x_271_ = lean_nat_add(v___x_270_, v_size_242_);
lean_dec(v_size_242_);
if (lean_obj_tag(v_l_261_) == 0)
{
lean_object* v_size_292_; 
v_size_292_ = lean_ctor_get(v_l_261_, 0);
lean_inc(v_size_292_);
v___y_284_ = v_size_292_;
goto v___jp_283_;
}
else
{
lean_object* v___x_293_; 
v___x_293_ = lean_unsigned_to_nat(0u);
v___y_284_ = v___x_293_;
goto v___jp_283_;
}
v___jp_272_:
{
lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_276_ = lean_nat_add(v___y_274_, v___y_275_);
lean_dec(v___y_275_);
lean_dec(v___y_274_);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 4, v_r_246_);
lean_ctor_set(v___x_268_, 3, v_r_262_);
lean_ctor_set(v___x_268_, 2, v_v_244_);
lean_ctor_set(v___x_268_, 1, v_k_243_);
lean_ctor_set(v___x_268_, 0, v___x_276_);
v___x_278_ = v___x_268_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_k_243_);
lean_ctor_set(v_reuseFailAlloc_282_, 2, v_v_244_);
lean_ctor_set(v_reuseFailAlloc_282_, 3, v_r_262_);
lean_ctor_set(v_reuseFailAlloc_282_, 4, v_r_246_);
v___x_278_ = v_reuseFailAlloc_282_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
lean_object* v___x_280_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 4, v___x_278_);
lean_ctor_set(v___x_256_, 3, v___y_273_);
lean_ctor_set(v___x_256_, 2, v_v_260_);
lean_ctor_set(v___x_256_, 1, v_k_259_);
lean_ctor_set(v___x_256_, 0, v___x_271_);
v___x_280_ = v___x_256_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_271_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v_k_259_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v_v_260_);
lean_ctor_set(v_reuseFailAlloc_281_, 3, v___y_273_);
lean_ctor_set(v_reuseFailAlloc_281_, 4, v___x_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
v___jp_283_:
{
lean_object* v___x_285_; lean_object* v___x_287_; 
v___x_285_ = lean_nat_add(v___x_270_, v___y_284_);
lean_dec(v___y_284_);
lean_dec(v___x_270_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_l_261_);
lean_ctor_set(v___x_96_, 0, v___x_285_);
v___x_287_ = v___x_96_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_291_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_291_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_291_, 4, v_l_261_);
v___x_287_ = v_reuseFailAlloc_291_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_288_; 
v___x_288_ = lean_nat_add(v___x_240_, v_size_263_);
if (lean_obj_tag(v_r_262_) == 0)
{
lean_object* v_size_289_; 
v_size_289_ = lean_ctor_get(v_r_262_, 0);
lean_inc(v_size_289_);
v___y_273_ = v___x_287_;
v___y_274_ = v___x_288_;
v___y_275_ = v_size_289_;
goto v___jp_272_;
}
else
{
lean_object* v___x_290_; 
v___x_290_ = lean_unsigned_to_nat(0u);
v___y_273_ = v___x_287_;
v___y_274_ = v___x_288_;
v___y_275_ = v___x_290_;
goto v___jp_272_;
}
}
}
}
}
else
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_304_; 
lean_del_object(v___x_96_);
v___x_300_ = lean_nat_add(v___x_240_, v_size_241_);
v___x_301_ = lean_nat_add(v___x_300_, v_size_242_);
lean_dec(v_size_242_);
v___x_302_ = lean_nat_add(v___x_300_, v_size_258_);
lean_dec(v___x_300_);
lean_inc_ref(v_l_93_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 4, v_l_245_);
lean_ctor_set(v___x_256_, 3, v_l_93_);
lean_ctor_set(v___x_256_, 2, v_v_92_);
lean_ctor_set(v___x_256_, 1, v_k_91_);
lean_ctor_set(v___x_256_, 0, v___x_302_);
v___x_304_ = v___x_256_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_302_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_317_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_317_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_317_, 4, v_l_245_);
v___x_304_ = v_reuseFailAlloc_317_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
v_isSharedCheck_311_ = !lean_is_exclusive(v_l_93_);
if (v_isSharedCheck_311_ == 0)
{
lean_object* v_unused_312_; lean_object* v_unused_313_; lean_object* v_unused_314_; lean_object* v_unused_315_; lean_object* v_unused_316_; 
v_unused_312_ = lean_ctor_get(v_l_93_, 4);
lean_dec(v_unused_312_);
v_unused_313_ = lean_ctor_get(v_l_93_, 3);
lean_dec(v_unused_313_);
v_unused_314_ = lean_ctor_get(v_l_93_, 2);
lean_dec(v_unused_314_);
v_unused_315_ = lean_ctor_get(v_l_93_, 1);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_l_93_, 0);
lean_dec(v_unused_316_);
v___x_306_ = v_l_93_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_dec(v_l_93_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 4, v_r_246_);
lean_ctor_set(v___x_306_, 3, v___x_304_);
lean_ctor_set(v___x_306_, 2, v_v_244_);
lean_ctor_set(v___x_306_, 1, v_k_243_);
lean_ctor_set(v___x_306_, 0, v___x_301_);
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_301_);
lean_ctor_set(v_reuseFailAlloc_310_, 1, v_k_243_);
lean_ctor_set(v_reuseFailAlloc_310_, 2, v_v_244_);
lean_ctor_set(v_reuseFailAlloc_310_, 3, v___x_304_);
lean_ctor_set(v_reuseFailAlloc_310_, 4, v_r_246_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_324_; 
v_l_324_ = lean_ctor_get(v_impl_239_, 3);
lean_inc(v_l_324_);
if (lean_obj_tag(v_l_324_) == 0)
{
lean_object* v_r_325_; lean_object* v_k_326_; lean_object* v_v_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_350_; 
v_r_325_ = lean_ctor_get(v_impl_239_, 4);
v_k_326_ = lean_ctor_get(v_impl_239_, 1);
v_v_327_ = lean_ctor_get(v_impl_239_, 2);
v_isSharedCheck_350_ = !lean_is_exclusive(v_impl_239_);
if (v_isSharedCheck_350_ == 0)
{
lean_object* v_unused_351_; lean_object* v_unused_352_; 
v_unused_351_ = lean_ctor_get(v_impl_239_, 3);
lean_dec(v_unused_351_);
v_unused_352_ = lean_ctor_get(v_impl_239_, 0);
lean_dec(v_unused_352_);
v___x_329_ = v_impl_239_;
v_isShared_330_ = v_isSharedCheck_350_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_r_325_);
lean_inc(v_v_327_);
lean_inc(v_k_326_);
lean_dec(v_impl_239_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_350_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v_k_331_; lean_object* v_v_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_346_; 
v_k_331_ = lean_ctor_get(v_l_324_, 1);
v_v_332_ = lean_ctor_get(v_l_324_, 2);
v_isSharedCheck_346_ = !lean_is_exclusive(v_l_324_);
if (v_isSharedCheck_346_ == 0)
{
lean_object* v_unused_347_; lean_object* v_unused_348_; lean_object* v_unused_349_; 
v_unused_347_ = lean_ctor_get(v_l_324_, 4);
lean_dec(v_unused_347_);
v_unused_348_ = lean_ctor_get(v_l_324_, 3);
lean_dec(v_unused_348_);
v_unused_349_ = lean_ctor_get(v_l_324_, 0);
lean_dec(v_unused_349_);
v___x_334_ = v_l_324_;
v_isShared_335_ = v_isSharedCheck_346_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_v_332_);
lean_inc(v_k_331_);
lean_dec(v_l_324_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_346_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_338_; 
v___x_336_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_325_, 2);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 4, v_r_325_);
lean_ctor_set(v___x_334_, 3, v_r_325_);
lean_ctor_set(v___x_334_, 2, v_v_92_);
lean_ctor_set(v___x_334_, 1, v_k_91_);
lean_ctor_set(v___x_334_, 0, v___x_240_);
v___x_338_ = v___x_334_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_345_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_345_, 3, v_r_325_);
lean_ctor_set(v_reuseFailAlloc_345_, 4, v_r_325_);
v___x_338_ = v_reuseFailAlloc_345_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
lean_object* v___x_340_; 
lean_inc(v_r_325_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 3, v_r_325_);
lean_ctor_set(v___x_329_, 0, v___x_240_);
v___x_340_ = v___x_329_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_344_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_344_, 3, v_r_325_);
lean_ctor_set(v_reuseFailAlloc_344_, 4, v_r_325_);
v___x_340_ = v_reuseFailAlloc_344_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_342_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v___x_340_);
lean_ctor_set(v___x_96_, 3, v___x_338_);
lean_ctor_set(v___x_96_, 2, v_v_332_);
lean_ctor_set(v___x_96_, 1, v_k_331_);
lean_ctor_set(v___x_96_, 0, v___x_336_);
v___x_342_ = v___x_96_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_343_, 1, v_k_331_);
lean_ctor_set(v_reuseFailAlloc_343_, 2, v_v_332_);
lean_ctor_set(v_reuseFailAlloc_343_, 3, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_343_, 4, v___x_340_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
}
}
else
{
lean_object* v_r_353_; 
v_r_353_ = lean_ctor_get(v_impl_239_, 4);
lean_inc(v_r_353_);
if (lean_obj_tag(v_r_353_) == 0)
{
lean_object* v_k_354_; lean_object* v_v_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_366_; 
v_k_354_ = lean_ctor_get(v_impl_239_, 1);
v_v_355_ = lean_ctor_get(v_impl_239_, 2);
v_isSharedCheck_366_ = !lean_is_exclusive(v_impl_239_);
if (v_isSharedCheck_366_ == 0)
{
lean_object* v_unused_367_; lean_object* v_unused_368_; lean_object* v_unused_369_; 
v_unused_367_ = lean_ctor_get(v_impl_239_, 4);
lean_dec(v_unused_367_);
v_unused_368_ = lean_ctor_get(v_impl_239_, 3);
lean_dec(v_unused_368_);
v_unused_369_ = lean_ctor_get(v_impl_239_, 0);
lean_dec(v_unused_369_);
v___x_357_ = v_impl_239_;
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_v_355_);
lean_inc(v_k_354_);
lean_dec(v_impl_239_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; lean_object* v___x_361_; 
v___x_359_ = lean_unsigned_to_nat(3u);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 4, v_l_324_);
lean_ctor_set(v___x_357_, 2, v_v_92_);
lean_ctor_set(v___x_357_, 1, v_k_91_);
lean_ctor_set(v___x_357_, 0, v___x_240_);
v___x_361_ = v___x_357_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_365_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_365_, 3, v_l_324_);
lean_ctor_set(v_reuseFailAlloc_365_, 4, v_l_324_);
v___x_361_ = v_reuseFailAlloc_365_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_363_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_r_353_);
lean_ctor_set(v___x_96_, 3, v___x_361_);
lean_ctor_set(v___x_96_, 2, v_v_355_);
lean_ctor_set(v___x_96_, 1, v_k_354_);
lean_ctor_set(v___x_96_, 0, v___x_359_);
v___x_363_ = v___x_96_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_359_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v_k_354_);
lean_ctor_set(v_reuseFailAlloc_364_, 2, v_v_355_);
lean_ctor_set(v_reuseFailAlloc_364_, 3, v___x_361_);
lean_ctor_set(v_reuseFailAlloc_364_, 4, v_r_353_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
else
{
lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_370_ = lean_unsigned_to_nat(2u);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_impl_239_);
lean_ctor_set(v___x_96_, 3, v_r_353_);
lean_ctor_set(v___x_96_, 0, v___x_370_);
v___x_372_ = v___x_96_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_373_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_373_, 3, v_r_353_);
lean_ctor_set(v_reuseFailAlloc_373_, 4, v_impl_239_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
lean_ctor_set(v___x_376_, 1, v_k_87_);
lean_ctor_set(v___x_376_, 2, v_v_88_);
lean_ctor_set(v___x_376_, 3, v_t_89_);
lean_ctor_set(v___x_376_, 4, v_t_89_);
return v___x_376_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(lean_object* v_ws_377_, lean_object* v_dep_378_, lean_object* v_lakeOpts_379_, lean_object* v_leanOpts_380_, uint8_t v_reconfigure_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_lakeEnv_384_; lean_object* v_lakeConfig_385_; lean_object* v_lakeCache_386_; lean_object* v_lakeArgs_x3f_387_; lean_object* v_packages_388_; lean_object* v_packageMap_389_; lean_object* v_facetConfigs_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_457_; 
v_lakeEnv_384_ = lean_ctor_get(v_ws_377_, 0);
v_lakeConfig_385_ = lean_ctor_get(v_ws_377_, 1);
v_lakeCache_386_ = lean_ctor_get(v_ws_377_, 2);
v_lakeArgs_x3f_387_ = lean_ctor_get(v_ws_377_, 3);
v_packages_388_ = lean_ctor_get(v_ws_377_, 4);
v_packageMap_389_ = lean_ctor_get(v_ws_377_, 5);
v_facetConfigs_390_ = lean_ctor_get(v_ws_377_, 6);
v_isSharedCheck_457_ = !lean_is_exclusive(v_ws_377_);
if (v_isSharedCheck_457_ == 0)
{
v___x_392_ = v_ws_377_;
v_isShared_393_ = v_isSharedCheck_457_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_facetConfigs_390_);
lean_inc(v_packageMap_389_);
lean_inc(v_packages_388_);
lean_inc(v_lakeArgs_x3f_387_);
lean_inc(v_lakeCache_386_);
lean_inc(v_lakeConfig_385_);
lean_inc(v_lakeEnv_384_);
lean_dec(v_ws_377_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_457_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v_manifestEntry_396_; lean_object* v_dir_397_; lean_object* v_pkgDir_398_; lean_object* v_relPkgDir_399_; lean_object* v_remoteUrl_400_; lean_object* v_name_401_; lean_object* v_scope_402_; lean_object* v_configFile_403_; lean_object* v_manifestFile_x3f_404_; lean_object* v_wsIdx_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___y_409_; 
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_array_fget_borrowed(v_packages_388_, v___x_394_);
v_manifestEntry_396_ = lean_ctor_get(v_dep_378_, 4);
lean_inc_ref(v_manifestEntry_396_);
v_dir_397_ = lean_ctor_get(v___x_395_, 4);
v_pkgDir_398_ = lean_ctor_get(v_dep_378_, 0);
lean_inc_ref_n(v_pkgDir_398_, 2);
v_relPkgDir_399_ = lean_ctor_get(v_dep_378_, 1);
lean_inc_ref(v_relPkgDir_399_);
v_remoteUrl_400_ = lean_ctor_get(v_dep_378_, 2);
lean_inc_ref(v_remoteUrl_400_);
lean_dec_ref(v_dep_378_);
v_name_401_ = lean_ctor_get(v_manifestEntry_396_, 0);
lean_inc(v_name_401_);
v_scope_402_ = lean_ctor_get(v_manifestEntry_396_, 1);
lean_inc_ref(v_scope_402_);
v_configFile_403_ = lean_ctor_get(v_manifestEntry_396_, 2);
lean_inc_ref_n(v_configFile_403_, 2);
v_manifestFile_x3f_404_ = lean_ctor_get(v_manifestEntry_396_, 3);
lean_inc(v_manifestFile_x3f_404_);
lean_dec_ref(v_manifestEntry_396_);
v_wsIdx_405_ = lean_array_get_size(v_packages_388_);
v___x_406_ = lean_box(0);
v___x_407_ = l_Lake_joinRelative(v_pkgDir_398_, v_configFile_403_);
if (lean_obj_tag(v_manifestFile_x3f_404_) == 0)
{
lean_object* v___x_455_; 
v___x_455_ = l_Lake_defaultManifestFile;
v___y_409_ = v___x_455_;
goto v___jp_408_;
}
else
{
lean_object* v_val_456_; 
v_val_456_ = lean_ctor_get(v_manifestFile_x3f_404_, 0);
lean_inc(v_val_456_);
lean_dec_ref(v_manifestFile_x3f_404_);
v___y_409_ = v_val_456_;
goto v___jp_408_;
}
v___jp_408_:
{
lean_object* v___x_410_; uint8_t v___x_411_; uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_410_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_411_ = 0;
v___x_412_ = 1;
lean_inc(v_name_401_);
lean_inc_ref(v_dir_397_);
lean_inc_ref(v_lakeEnv_384_);
v___x_413_ = lean_alloc_ctor(0, 16, 3);
lean_ctor_set(v___x_413_, 0, v_lakeEnv_384_);
lean_ctor_set(v___x_413_, 1, v___x_406_);
lean_ctor_set(v___x_413_, 2, v_dir_397_);
lean_ctor_set(v___x_413_, 3, v_wsIdx_405_);
lean_ctor_set(v___x_413_, 4, v_name_401_);
lean_ctor_set(v___x_413_, 5, v_relPkgDir_399_);
lean_ctor_set(v___x_413_, 6, v_pkgDir_398_);
lean_ctor_set(v___x_413_, 7, v_configFile_403_);
lean_ctor_set(v___x_413_, 8, v___x_407_);
lean_ctor_set(v___x_413_, 9, v___x_406_);
lean_ctor_set(v___x_413_, 10, v___y_409_);
lean_ctor_set(v___x_413_, 11, v___x_410_);
lean_ctor_set(v___x_413_, 12, v_lakeOpts_379_);
lean_ctor_set(v___x_413_, 13, v_leanOpts_380_);
lean_ctor_set(v___x_413_, 14, v_scope_402_);
lean_ctor_set(v___x_413_, 15, v_remoteUrl_400_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*16, v_reconfigure_381_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*16 + 1, v___x_411_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*16 + 2, v___x_412_);
v___x_414_ = l_Lean_Name_toString(v_name_401_, v___x_411_);
v___x_415_ = l_Lake_resolveConfigFile(v___x_414_, v___x_413_, v_a_382_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v_a_417_; lean_object* v___x_418_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc_n(v_a_416_, 2);
v_a_417_ = lean_ctor_get(v___x_415_, 1);
lean_inc(v_a_417_);
lean_dec_ref(v___x_415_);
v___x_418_ = l_Lake_loadConfigFile___redArg(v_a_416_, v_a_417_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v_a_419_; lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_436_; 
v_a_419_ = lean_ctor_get(v___x_418_, 0);
v_a_420_ = lean_ctor_get(v___x_418_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_436_ == 0)
{
v___x_422_ = v___x_418_;
v_isShared_423_ = v_isSharedCheck_436_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_inc(v_a_419_);
lean_dec(v___x_418_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_436_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v_facetDecls_424_; lean_object* v___x_425_; lean_object* v_keyName_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_430_; 
v_facetDecls_424_ = lean_ctor_get(v_a_419_, 2);
lean_inc_ref(v_facetDecls_424_);
v___x_425_ = l_Lake_mkPackage(v_a_416_, v_a_419_, v_wsIdx_405_);
lean_dec(v_a_416_);
v_keyName_426_ = lean_ctor_get(v___x_425_, 2);
lean_inc(v_keyName_426_);
lean_inc_ref(v___x_425_);
v___x_427_ = lean_array_push(v_packages_388_, v___x_425_);
v___x_428_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_keyName_426_, v___x_425_, v_packageMap_389_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 5, v___x_428_);
lean_ctor_set(v___x_392_, 4, v___x_427_);
v___x_430_ = v___x_392_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_lakeEnv_384_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_lakeConfig_385_);
lean_ctor_set(v_reuseFailAlloc_435_, 2, v_lakeCache_386_);
lean_ctor_set(v_reuseFailAlloc_435_, 3, v_lakeArgs_x3f_387_);
lean_ctor_set(v_reuseFailAlloc_435_, 4, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_435_, 5, v___x_428_);
lean_ctor_set(v_reuseFailAlloc_435_, 6, v_facetConfigs_390_);
v___x_430_ = v_reuseFailAlloc_435_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_431_; lean_object* v___x_433_; 
v___x_431_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(v_facetDecls_424_, v___x_430_);
lean_dec_ref(v_facetDecls_424_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_431_);
v___x_433_ = v___x_422_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_431_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_a_420_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
else
{
lean_object* v_a_437_; lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec(v_a_416_);
lean_del_object(v___x_392_);
lean_dec(v_facetConfigs_390_);
lean_dec(v_packageMap_389_);
lean_dec_ref(v_packages_388_);
lean_dec(v_lakeArgs_x3f_387_);
lean_dec_ref(v_lakeCache_386_);
lean_dec_ref(v_lakeConfig_385_);
lean_dec_ref(v_lakeEnv_384_);
v_a_437_ = lean_ctor_get(v___x_418_, 0);
v_a_438_ = lean_ctor_get(v___x_418_, 1);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_418_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_inc(v_a_437_);
lean_dec(v___x_418_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_437_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
else
{
lean_object* v_a_446_; lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_del_object(v___x_392_);
lean_dec(v_facetConfigs_390_);
lean_dec(v_packageMap_389_);
lean_dec_ref(v_packages_388_);
lean_dec(v_lakeArgs_x3f_387_);
lean_dec_ref(v_lakeCache_386_);
lean_dec_ref(v_lakeConfig_385_);
lean_dec_ref(v_lakeEnv_384_);
v_a_446_ = lean_ctor_get(v___x_415_, 0);
v_a_447_ = lean_ctor_get(v___x_415_, 1);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_415_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_inc(v_a_446_);
lean_dec(v___x_415_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_446_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27___boxed(lean_object* v_ws_458_, lean_object* v_dep_459_, lean_object* v_lakeOpts_460_, lean_object* v_leanOpts_461_, lean_object* v_reconfigure_462_, lean_object* v_a_463_, lean_object* v_a_464_){
_start:
{
uint8_t v_reconfigure_boxed_465_; lean_object* v_res_466_; 
v_reconfigure_boxed_465_ = lean_unbox(v_reconfigure_462_);
v_res_466_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_458_, v_dep_459_, v_lakeOpts_460_, v_leanOpts_461_, v_reconfigure_boxed_465_, v_a_463_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0(lean_object* v_00_u03b2_467_, lean_object* v_k_468_, lean_object* v_v_469_, lean_object* v_t_470_, lean_object* v_hl_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_468_, v_v_469_, v_t_470_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_DepStackT_run___redArg(lean_object* v_x_473_, lean_object* v_stack_474_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = lean_apply_1(v_x_473_, v_stack_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_DepStackT_run(lean_object* v_m_476_, lean_object* v_00_u03b1_477_, lean_object* v_x_478_, lean_object* v_stack_479_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = lean_apply_1(v_x_478_, v_stack_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg(lean_object* v_inst_483_, lean_object* v_cycle_484_){
_start:
{
lean_object* v___f_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___f_485_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg___closed__0));
v___x_486_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg___closed__1));
v___x_487_ = l_Lake_formatCycle___redArg(v___f_485_, v_cycle_484_);
v___x_488_ = lean_string_append(v___x_486_, v___x_487_);
lean_dec_ref(v___x_487_);
v___x_489_ = lean_apply_2(v_inst_483_, lean_box(0), v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError(lean_object* v_m_490_, lean_object* v_00_u03b1_491_, lean_object* v_inst_492_, lean_object* v_cycle_493_){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg(v_inst_492_, v_cycle_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg___lam__0(lean_object* v___f_495_, lean_object* v_00_u03b1_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v___x_23__overap_499_; lean_object* v___x_500_; 
v___x_23__overap_499_ = l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg(v___f_495_, v___y_497_);
lean_inc(v___y_498_);
v___x_500_ = lean_apply_1(v___x_23__overap_499_, v___y_498_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg___lam__0___boxed(lean_object* v___f_501_, lean_object* v_00_u03b1_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg___lam__0(v___f_501_, v_00_u03b1_502_, v___y_503_, v___y_504_);
lean_dec(v___y_504_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg(lean_object* v_inst_507_, lean_object* v_inst_508_){
_start:
{
lean_object* v___x_509_; lean_object* v___f_510_; lean_object* v___f_511_; lean_object* v___f_512_; lean_object* v___x_513_; 
v___x_509_ = l_Lake_instMonadCallStackOfCallStackTOfMonad___redArg(v_inst_507_);
v___f_510_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg___closed__0));
v___f_511_ = lean_alloc_closure((void*)(l_Lake_instMonadErrorOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_511_, 0, v_inst_508_);
lean_closure_set(v___f_511_, 1, v___f_510_);
v___f_512_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_512_, 0, v___f_511_);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_509_);
lean_ctor_set(v___x_513_, 1, v___f_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError(lean_object* v_m_514_, lean_object* v_inst_515_, lean_object* v_inst_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg(v_inst_515_, v_inst_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveT_run___redArg(lean_object* v_ws_518_, lean_object* v_x_519_, lean_object* v_stack_520_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = lean_apply_2(v_x_519_, v_stack_520_, v_ws_518_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveT_run(lean_object* v_m_522_, lean_object* v_00_u03b1_523_, lean_object* v_ws_524_, lean_object* v_x_525_, lean_object* v_stack_526_){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = lean_apply_2(v_x_525_, v_stack_526_, v_ws_524_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___lam__0(lean_object* v_x_528_){
_start:
{
lean_object* v_baseName_529_; 
v_baseName_529_ = lean_ctor_get(v_x_528_, 1);
lean_inc(v_baseName_529_);
return v_baseName_529_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___lam__0___boxed(lean_object* v_x_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___lam__0(v_x_530_);
lean_dec_ref(v_x_530_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___lam__1(lean_object* v_toPure_532_, lean_object* v_____x_533_){
_start:
{
lean_object* v_snd_534_; lean_object* v___x_535_; 
v_snd_534_ = lean_ctor_get(v_____x_533_, 1);
lean_inc(v_snd_534_);
lean_dec_ref(v_____x_533_);
v___x_535_ = lean_apply_2(v_toPure_532_, lean_box(0), v_snd_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg(lean_object* v_inst_538_, lean_object* v_inst_539_, lean_object* v_ws_540_, lean_object* v_go_541_, lean_object* v_root_542_, lean_object* v_stack_543_){
_start:
{
lean_object* v_toApplicative_544_; lean_object* v_toBind_545_; lean_object* v___f_546_; lean_object* v___f_547_; lean_object* v___f_548_; lean_object* v___f_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___f_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v_toPure_561_; lean_object* v___f_562_; lean_object* v___x_563_; lean_object* v___f_564_; lean_object* v___x_32__overap_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_toApplicative_544_ = lean_ctor_get(v_inst_538_, 0);
lean_inc_ref(v_toApplicative_544_);
v_toBind_545_ = lean_ctor_get(v_inst_538_, 1);
lean_inc(v_toBind_545_);
lean_inc_ref_n(v_inst_538_, 7);
v___f_546_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_546_, 0, v_inst_538_);
v___f_547_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_547_, 0, v_inst_538_);
v___f_548_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_548_, 0, v_inst_538_);
v___f_549_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_549_, 0, v_inst_538_);
v___x_550_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_550_, 0, lean_box(0));
lean_closure_set(v___x_550_, 1, lean_box(0));
lean_closure_set(v___x_550_, 2, v_inst_538_);
v___x_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
lean_ctor_set(v___x_551_, 1, v___f_546_);
v___x_552_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_552_, 0, lean_box(0));
lean_closure_set(v___x_552_, 1, lean_box(0));
lean_closure_set(v___x_552_, 2, v_inst_538_);
v___x_553_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_553_, 0, v___x_551_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
lean_ctor_set(v___x_553_, 2, v___f_547_);
lean_ctor_set(v___x_553_, 3, v___f_548_);
lean_ctor_set(v___x_553_, 4, v___f_549_);
v___x_554_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_554_, 0, lean_box(0));
lean_closure_set(v___x_554_, 1, lean_box(0));
lean_closure_set(v___x_554_, 2, v_inst_538_);
v___x_555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_553_);
lean_ctor_set(v___x_555_, 1, v___x_554_);
lean_inc_ref(v___x_555_);
v___x_556_ = l_ReaderT_instMonad___redArg(v___x_555_);
v___x_557_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 3);
lean_closure_set(v___x_557_, 0, lean_box(0));
lean_closure_set(v___x_557_, 1, lean_box(0));
lean_closure_set(v___x_557_, 2, v_inst_538_);
v___f_558_ = lean_alloc_closure((void*)(l_Lake_instMonadErrorOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_558_, 0, v_inst_539_);
lean_closure_set(v___f_558_, 1, v___x_557_);
v___x_559_ = l___private_Lake_Load_Resolve_0__Lake_instMonadCycleOfNameDepStackTOfMonadOfMonadError___redArg(v___x_555_, v___f_558_);
v___x_560_ = l_Lake_instMonadCycleOfMonadCycleOf___redArg(v___x_559_);
v_toPure_561_ = lean_ctor_get(v_toApplicative_544_, 1);
lean_inc(v_toPure_561_);
lean_dec_ref(v_toApplicative_544_);
v___f_562_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___closed__0));
v___x_563_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___closed__1));
v___f_564_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg___lam__1), 2, 1);
lean_closure_set(v___f_564_, 0, v_toPure_561_);
v___x_32__overap_565_ = l_Lake_recFetchAcyclic___redArg(v___x_563_, v___x_556_, v___x_560_, v___f_562_, v_go_541_, v_root_542_);
v___x_566_ = lean_apply_2(v___x_32__overap_565_, v_stack_543_, v_ws_540_);
v___x_567_ = lean_apply_4(v_toBind_545_, lean_box(0), lean_box(0), v___x_566_, v___f_564_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT(lean_object* v_m_568_, lean_object* v_inst_569_, lean_object* v_inst_570_, lean_object* v_ws_571_, lean_object* v_go_572_, lean_object* v_root_573_, lean_object* v_stack_574_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg(v_inst_569_, v_inst_570_, v_ws_571_, v_go_572_, v_root_573_, v_stack_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(lean_object* v_self_576_, lean_object* v_wsIdx_577_, lean_object* v_depPkgs_578_){
_start:
{
lean_object* v_lakeEnv_579_; lean_object* v_lakeConfig_580_; lean_object* v_lakeCache_581_; lean_object* v_lakeArgs_x3f_582_; lean_object* v_packages_583_; lean_object* v_packageMap_584_; lean_object* v_facetConfigs_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v_lakeEnv_579_ = lean_ctor_get(v_self_576_, 0);
v_lakeConfig_580_ = lean_ctor_get(v_self_576_, 1);
v_lakeCache_581_ = lean_ctor_get(v_self_576_, 2);
v_lakeArgs_x3f_582_ = lean_ctor_get(v_self_576_, 3);
v_packages_583_ = lean_ctor_get(v_self_576_, 4);
v_packageMap_584_ = lean_ctor_get(v_self_576_, 5);
v_facetConfigs_585_ = lean_ctor_get(v_self_576_, 6);
v___x_586_ = lean_array_get_size(v_packages_583_);
v___x_587_ = lean_nat_dec_lt(v_wsIdx_577_, v___x_586_);
if (v___x_587_ == 0)
{
lean_dec_ref(v_depPkgs_578_);
return v_self_576_;
}
else
{
lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_628_; 
lean_inc(v_facetConfigs_585_);
lean_inc(v_packageMap_584_);
lean_inc_ref(v_packages_583_);
lean_inc(v_lakeArgs_x3f_582_);
lean_inc_ref(v_lakeCache_581_);
lean_inc_ref(v_lakeConfig_580_);
lean_inc_ref(v_lakeEnv_579_);
v_isSharedCheck_628_ = !lean_is_exclusive(v_self_576_);
if (v_isSharedCheck_628_ == 0)
{
lean_object* v_unused_629_; lean_object* v_unused_630_; lean_object* v_unused_631_; lean_object* v_unused_632_; lean_object* v_unused_633_; lean_object* v_unused_634_; lean_object* v_unused_635_; 
v_unused_629_ = lean_ctor_get(v_self_576_, 6);
lean_dec(v_unused_629_);
v_unused_630_ = lean_ctor_get(v_self_576_, 5);
lean_dec(v_unused_630_);
v_unused_631_ = lean_ctor_get(v_self_576_, 4);
lean_dec(v_unused_631_);
v_unused_632_ = lean_ctor_get(v_self_576_, 3);
lean_dec(v_unused_632_);
v_unused_633_ = lean_ctor_get(v_self_576_, 2);
lean_dec(v_unused_633_);
v_unused_634_ = lean_ctor_get(v_self_576_, 1);
lean_dec(v_unused_634_);
v_unused_635_ = lean_ctor_get(v_self_576_, 0);
lean_dec(v_unused_635_);
v___x_589_ = v_self_576_;
v_isShared_590_ = v_isSharedCheck_628_;
goto v_resetjp_588_;
}
else
{
lean_dec(v_self_576_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_628_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v_v_591_; lean_object* v_wsIdx_592_; lean_object* v_baseName_593_; lean_object* v_keyName_594_; lean_object* v_origName_595_; lean_object* v_dir_596_; lean_object* v_relDir_597_; lean_object* v_config_598_; lean_object* v_configFile_599_; lean_object* v_relConfigFile_600_; lean_object* v_relManifestFile_601_; lean_object* v_scope_602_; lean_object* v_remoteUrl_603_; lean_object* v_depConfigs_604_; lean_object* v_targetDecls_605_; lean_object* v_targetDeclMap_606_; lean_object* v_defaultTargets_607_; lean_object* v_scripts_608_; lean_object* v_defaultScripts_609_; lean_object* v_postUpdateHooks_610_; lean_object* v_buildArchive_611_; lean_object* v_testDriver_612_; lean_object* v_lintDriver_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_626_; 
v_v_591_ = lean_array_fget(v_packages_583_, v_wsIdx_577_);
v_wsIdx_592_ = lean_ctor_get(v_v_591_, 0);
v_baseName_593_ = lean_ctor_get(v_v_591_, 1);
v_keyName_594_ = lean_ctor_get(v_v_591_, 2);
v_origName_595_ = lean_ctor_get(v_v_591_, 3);
v_dir_596_ = lean_ctor_get(v_v_591_, 4);
v_relDir_597_ = lean_ctor_get(v_v_591_, 5);
v_config_598_ = lean_ctor_get(v_v_591_, 6);
v_configFile_599_ = lean_ctor_get(v_v_591_, 7);
v_relConfigFile_600_ = lean_ctor_get(v_v_591_, 8);
v_relManifestFile_601_ = lean_ctor_get(v_v_591_, 9);
v_scope_602_ = lean_ctor_get(v_v_591_, 10);
v_remoteUrl_603_ = lean_ctor_get(v_v_591_, 11);
v_depConfigs_604_ = lean_ctor_get(v_v_591_, 12);
v_targetDecls_605_ = lean_ctor_get(v_v_591_, 14);
v_targetDeclMap_606_ = lean_ctor_get(v_v_591_, 15);
v_defaultTargets_607_ = lean_ctor_get(v_v_591_, 16);
v_scripts_608_ = lean_ctor_get(v_v_591_, 17);
v_defaultScripts_609_ = lean_ctor_get(v_v_591_, 18);
v_postUpdateHooks_610_ = lean_ctor_get(v_v_591_, 19);
v_buildArchive_611_ = lean_ctor_get(v_v_591_, 20);
v_testDriver_612_ = lean_ctor_get(v_v_591_, 21);
v_lintDriver_613_ = lean_ctor_get(v_v_591_, 22);
v_isSharedCheck_626_ = !lean_is_exclusive(v_v_591_);
if (v_isSharedCheck_626_ == 0)
{
lean_object* v_unused_627_; 
v_unused_627_ = lean_ctor_get(v_v_591_, 13);
lean_dec(v_unused_627_);
v___x_615_ = v_v_591_;
v_isShared_616_ = v_isSharedCheck_626_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_lintDriver_613_);
lean_inc(v_testDriver_612_);
lean_inc(v_buildArchive_611_);
lean_inc(v_postUpdateHooks_610_);
lean_inc(v_defaultScripts_609_);
lean_inc(v_scripts_608_);
lean_inc(v_defaultTargets_607_);
lean_inc(v_targetDeclMap_606_);
lean_inc(v_targetDecls_605_);
lean_inc(v_depConfigs_604_);
lean_inc(v_remoteUrl_603_);
lean_inc(v_scope_602_);
lean_inc(v_relManifestFile_601_);
lean_inc(v_relConfigFile_600_);
lean_inc(v_configFile_599_);
lean_inc(v_config_598_);
lean_inc(v_relDir_597_);
lean_inc(v_dir_596_);
lean_inc(v_origName_595_);
lean_inc(v_keyName_594_);
lean_inc(v_baseName_593_);
lean_inc(v_wsIdx_592_);
lean_dec(v_v_591_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_626_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v_xs_x27_618_; lean_object* v___x_620_; 
v___x_617_ = lean_box(0);
v_xs_x27_618_ = lean_array_fset(v_packages_583_, v_wsIdx_577_, v___x_617_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 13, v_depPkgs_578_);
v___x_620_ = v___x_615_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 23, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_wsIdx_592_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_baseName_593_);
lean_ctor_set(v_reuseFailAlloc_625_, 2, v_keyName_594_);
lean_ctor_set(v_reuseFailAlloc_625_, 3, v_origName_595_);
lean_ctor_set(v_reuseFailAlloc_625_, 4, v_dir_596_);
lean_ctor_set(v_reuseFailAlloc_625_, 5, v_relDir_597_);
lean_ctor_set(v_reuseFailAlloc_625_, 6, v_config_598_);
lean_ctor_set(v_reuseFailAlloc_625_, 7, v_configFile_599_);
lean_ctor_set(v_reuseFailAlloc_625_, 8, v_relConfigFile_600_);
lean_ctor_set(v_reuseFailAlloc_625_, 9, v_relManifestFile_601_);
lean_ctor_set(v_reuseFailAlloc_625_, 10, v_scope_602_);
lean_ctor_set(v_reuseFailAlloc_625_, 11, v_remoteUrl_603_);
lean_ctor_set(v_reuseFailAlloc_625_, 12, v_depConfigs_604_);
lean_ctor_set(v_reuseFailAlloc_625_, 13, v_depPkgs_578_);
lean_ctor_set(v_reuseFailAlloc_625_, 14, v_targetDecls_605_);
lean_ctor_set(v_reuseFailAlloc_625_, 15, v_targetDeclMap_606_);
lean_ctor_set(v_reuseFailAlloc_625_, 16, v_defaultTargets_607_);
lean_ctor_set(v_reuseFailAlloc_625_, 17, v_scripts_608_);
lean_ctor_set(v_reuseFailAlloc_625_, 18, v_defaultScripts_609_);
lean_ctor_set(v_reuseFailAlloc_625_, 19, v_postUpdateHooks_610_);
lean_ctor_set(v_reuseFailAlloc_625_, 20, v_buildArchive_611_);
lean_ctor_set(v_reuseFailAlloc_625_, 21, v_testDriver_612_);
lean_ctor_set(v_reuseFailAlloc_625_, 22, v_lintDriver_613_);
v___x_620_ = v_reuseFailAlloc_625_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_621_ = lean_array_fset(v_xs_x27_618_, v_wsIdx_577_, v___x_620_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 4, v___x_621_);
v___x_623_ = v___x_589_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_lakeEnv_579_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_lakeConfig_580_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_lakeCache_581_);
lean_ctor_set(v_reuseFailAlloc_624_, 3, v_lakeArgs_x3f_582_);
lean_ctor_set(v_reuseFailAlloc_624_, 4, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_624_, 5, v_packageMap_584_);
lean_ctor_set(v_reuseFailAlloc_624_, 6, v_facetConfigs_585_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs___boxed(lean_object* v_self_636_, lean_object* v_wsIdx_637_, lean_object* v_depPkgs_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_self_636_, v_wsIdx_637_, v_depPkgs_638_);
lean_dec(v_wsIdx_637_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(lean_object* v_ws_640_, lean_object* v_size_641_){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = lean_mk_empty_array_with_capacity(v_size_641_);
v___x_643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_643_, 0, v_ws_640_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init___boxed(lean_object* v_ws_644_, lean_object* v_size_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(v_ws_644_, v_size_645_);
lean_dec(v_size_645_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep(lean_object* v_s_647_, lean_object* v_wsIdx_648_){
_start:
{
lean_object* v_ws_649_; lean_object* v_depIdxs_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_658_; 
v_ws_649_ = lean_ctor_get(v_s_647_, 0);
v_depIdxs_650_ = lean_ctor_get(v_s_647_, 1);
v_isSharedCheck_658_ = !lean_is_exclusive(v_s_647_);
if (v_isSharedCheck_658_ == 0)
{
v___x_652_ = v_s_647_;
v_isShared_653_ = v_isSharedCheck_658_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_depIdxs_650_);
lean_inc(v_ws_649_);
lean_dec(v_s_647_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_658_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_654_; lean_object* v___x_656_; 
v___x_654_ = lean_array_push(v_depIdxs_650_, v_wsIdx_648_);
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 1, v___x_654_);
v___x_656_ = v___x_652_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_ws_649_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v___x_654_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(lean_object* v_s_659_, lean_object* v_dep_660_, lean_object* v_lakeOpts_661_, lean_object* v_leanOpts_662_, uint8_t v_reconfigure_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_ws_666_; lean_object* v_depIdxs_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_696_; 
v_ws_666_ = lean_ctor_get(v_s_659_, 0);
v_depIdxs_667_ = lean_ctor_get(v_s_659_, 1);
v_isSharedCheck_696_ = !lean_is_exclusive(v_s_659_);
if (v_isSharedCheck_696_ == 0)
{
v___x_669_ = v_s_659_;
v_isShared_670_ = v_isSharedCheck_696_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_depIdxs_667_);
lean_inc(v_ws_666_);
lean_dec(v_s_659_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_696_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_671_; 
lean_inc_ref(v_ws_666_);
v___x_671_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_666_, v_dep_660_, v_lakeOpts_661_, v_leanOpts_662_, v_reconfigure_663_, v_a_664_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v_a_672_; lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_686_; 
v_a_672_ = lean_ctor_get(v___x_671_, 0);
v_a_673_ = lean_ctor_get(v___x_671_, 1);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_686_ == 0)
{
v___x_675_ = v___x_671_;
v_isShared_676_ = v_isSharedCheck_686_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_inc(v_a_672_);
lean_dec(v___x_671_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_686_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_packages_677_; lean_object* v_wsIdx_678_; lean_object* v___x_679_; lean_object* v___x_681_; 
v_packages_677_ = lean_ctor_get(v_ws_666_, 4);
lean_inc_ref(v_packages_677_);
lean_dec_ref(v_ws_666_);
v_wsIdx_678_ = lean_array_get_size(v_packages_677_);
lean_dec_ref(v_packages_677_);
v___x_679_ = lean_array_push(v_depIdxs_667_, v_wsIdx_678_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 1, v___x_679_);
lean_ctor_set(v___x_669_, 0, v_a_672_);
v___x_681_ = v___x_669_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_672_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v___x_679_);
v___x_681_ = v_reuseFailAlloc_685_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_683_; 
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_681_);
v___x_683_ = v___x_675_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_681_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v_a_673_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
else
{
lean_object* v_a_687_; lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
lean_del_object(v___x_669_);
lean_dec_ref(v_depIdxs_667_);
lean_dec_ref(v_ws_666_);
v_a_687_ = lean_ctor_get(v___x_671_, 0);
v_a_688_ = lean_ctor_get(v___x_671_, 1);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_671_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_inc(v_a_687_);
lean_dec(v___x_671_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_687_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed(lean_object* v_s_697_, lean_object* v_dep_698_, lean_object* v_lakeOpts_699_, lean_object* v_leanOpts_700_, lean_object* v_reconfigure_701_, lean_object* v_a_702_, lean_object* v_a_703_){
_start:
{
uint8_t v_reconfigure_boxed_704_; lean_object* v_res_705_; 
v_reconfigure_boxed_704_ = lean_unbox(v_reconfigure_701_);
v_res_705_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(v_s_697_, v_dep_698_, v_lakeOpts_699_, v_leanOpts_700_, v_reconfigure_boxed_704_, v_a_702_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(lean_object* v_x_706_){
_start:
{
lean_object* v_snd_707_; 
v_snd_707_ = lean_ctor_get(v_x_706_, 1);
lean_inc(v_snd_707_);
return v_snd_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed(lean_object* v_x_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(v_x_708_);
lean_dec_ref(v_x_708_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(lean_object* v_toFunctor_710_, lean_object* v_recurse_711_, lean_object* v_a_712_, lean_object* v___f_713_, lean_object* v_ws_714_, lean_object* v_pkg_715_){
_start:
{
lean_object* v_map_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v_map_716_ = lean_ctor_get(v_toFunctor_710_, 0);
lean_inc(v_map_716_);
lean_dec_ref(v_toFunctor_710_);
lean_inc(v_a_712_);
v___x_717_ = lean_apply_3(v_recurse_711_, v_pkg_715_, v_a_712_, v_ws_714_);
v___x_718_ = lean_apply_4(v_map_716_, lean_box(0), lean_box(0), v___f_713_, v___x_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed(lean_object* v_toFunctor_719_, lean_object* v_recurse_720_, lean_object* v_a_721_, lean_object* v___f_722_, lean_object* v_ws_723_, lean_object* v_pkg_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(v_toFunctor_719_, v_recurse_720_, v_a_721_, v___f_722_, v_ws_723_, v_pkg_724_);
lean_dec(v_a_721_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(lean_object* v_packages_726_, lean_object* v_x_727_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = lean_array_fget_borrowed(v_packages_726_, v_x_727_);
lean_inc(v___x_728_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed(lean_object* v_packages_729_, lean_object* v_x_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(v_packages_729_, v_x_730_);
lean_dec(v_x_730_);
lean_dec_ref(v_packages_729_);
return v_res_731_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_735_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__2));
v___x_736_ = lean_unsigned_to_nat(8u);
v___x_737_ = lean_unsigned_to_nat(200u);
v___x_738_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__1));
v___x_739_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__0));
v___x_740_ = l_mkPanicMessageWithDecl(v___x_739_, v___x_738_, v___x_737_, v___x_736_, v___x_735_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(lean_object* v_toPure_760_, lean_object* v_depsEnd_761_, lean_object* v_depIdxs_762_, lean_object* v_wsIdx_763_, lean_object* v_ws_764_){
_start:
{
lean_object* v___y_766_; lean_object* v_packages_770_; lean_object* v___x_771_; uint8_t v___x_772_; 
v_packages_770_ = lean_ctor_get(v_ws_764_, 4);
v___x_771_ = lean_array_get_size(v_packages_770_);
v___x_772_ = lean_nat_dec_le(v_depsEnd_761_, v___x_771_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; lean_object* v___x_774_; 
lean_dec_ref(v_depIdxs_762_);
v___x_773_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_774_ = l_panic___redArg(v_ws_764_, v___x_773_);
lean_dec_ref(v_ws_764_);
v___y_766_ = v___x_774_;
goto v___jp_765_;
}
else
{
lean_object* v___f_775_; lean_object* v___x_776_; size_t v_sz_777_; size_t v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
lean_inc_ref(v_packages_770_);
v___f_775_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_775_, 0, v_packages_770_);
v___x_776_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__13));
v_sz_777_ = lean_array_size(v_depIdxs_762_);
v___x_778_ = ((size_t)0ULL);
v___x_779_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_776_, v___f_775_, v_sz_777_, v___x_778_, v_depIdxs_762_);
v___x_780_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_764_, v_wsIdx_763_, v___x_779_);
v___y_766_ = v___x_780_;
goto v___jp_765_;
}
v___jp_765_:
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_767_ = lean_box(0);
v___x_768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_768_, 0, v___x_767_);
lean_ctor_set(v___x_768_, 1, v___y_766_);
v___x_769_ = lean_apply_2(v_toPure_760_, lean_box(0), v___x_768_);
return v___x_769_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed(lean_object* v_toPure_781_, lean_object* v_depsEnd_782_, lean_object* v_depIdxs_783_, lean_object* v_wsIdx_784_, lean_object* v_ws_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(v_toPure_781_, v_depsEnd_782_, v_depIdxs_783_, v_wsIdx_784_, v_ws_785_);
lean_dec(v_wsIdx_784_);
lean_dec(v_depsEnd_782_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(lean_object* v_toPure_787_, lean_object* v_wsIdx_788_, lean_object* v_start_789_, lean_object* v_toBind_790_, lean_object* v_inst_791_, lean_object* v___f_792_, lean_object* v_____x_793_){
_start:
{
lean_object* v_ws_794_; lean_object* v_depIdxs_795_; lean_object* v_packages_796_; lean_object* v_depsEnd_797_; lean_object* v___f_798_; uint8_t v___x_799_; 
v_ws_794_ = lean_ctor_get(v_____x_793_, 0);
lean_inc_ref(v_ws_794_);
v_depIdxs_795_ = lean_ctor_get(v_____x_793_, 1);
lean_inc_ref(v_depIdxs_795_);
lean_dec_ref(v_____x_793_);
v_packages_796_ = lean_ctor_get(v_ws_794_, 4);
v_depsEnd_797_ = lean_array_get_size(v_packages_796_);
lean_inc(v_toPure_787_);
v___f_798_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_798_, 0, v_toPure_787_);
lean_closure_set(v___f_798_, 1, v_depsEnd_797_);
lean_closure_set(v___f_798_, 2, v_depIdxs_795_);
lean_closure_set(v___f_798_, 3, v_wsIdx_788_);
v___x_799_ = lean_nat_dec_lt(v_start_789_, v_depsEnd_797_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; lean_object* v___x_801_; 
lean_dec(v___f_792_);
lean_dec_ref(v_inst_791_);
v___x_800_ = lean_apply_2(v_toPure_787_, lean_box(0), v_ws_794_);
v___x_801_ = lean_apply_4(v_toBind_790_, lean_box(0), lean_box(0), v___x_800_, v___f_798_);
return v___x_801_;
}
else
{
uint8_t v___x_802_; 
v___x_802_ = lean_nat_dec_le(v_depsEnd_797_, v_depsEnd_797_);
if (v___x_802_ == 0)
{
if (v___x_799_ == 0)
{
lean_object* v___x_803_; lean_object* v___x_804_; 
lean_dec(v___f_792_);
lean_dec_ref(v_inst_791_);
v___x_803_ = lean_apply_2(v_toPure_787_, lean_box(0), v_ws_794_);
v___x_804_ = lean_apply_4(v_toBind_790_, lean_box(0), lean_box(0), v___x_803_, v___f_798_);
return v___x_804_;
}
else
{
size_t v___x_805_; size_t v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
lean_inc_ref(v_packages_796_);
lean_dec(v_toPure_787_);
v___x_805_ = lean_usize_of_nat(v_start_789_);
v___x_806_ = lean_usize_of_nat(v_depsEnd_797_);
v___x_807_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_791_, v___f_792_, v_packages_796_, v___x_805_, v___x_806_, v_ws_794_);
v___x_808_ = lean_apply_4(v_toBind_790_, lean_box(0), lean_box(0), v___x_807_, v___f_798_);
return v___x_808_;
}
}
else
{
size_t v___x_809_; size_t v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
lean_inc_ref(v_packages_796_);
lean_dec(v_toPure_787_);
v___x_809_ = lean_usize_of_nat(v_start_789_);
v___x_810_ = lean_usize_of_nat(v_depsEnd_797_);
v___x_811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_791_, v___f_792_, v_packages_796_, v___x_809_, v___x_810_, v_ws_794_);
v___x_812_ = lean_apply_4(v_toBind_790_, lean_box(0), lean_box(0), v___x_811_, v___f_798_);
return v___x_812_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4___boxed(lean_object* v_toPure_813_, lean_object* v_wsIdx_814_, lean_object* v_start_815_, lean_object* v_toBind_816_, lean_object* v_inst_817_, lean_object* v___f_818_, lean_object* v_____x_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(v_toPure_813_, v_wsIdx_814_, v_start_815_, v_toBind_816_, v_inst_817_, v___f_818_, v_____x_819_);
lean_dec(v_start_815_);
return v_res_820_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5(lean_object* v_dep_821_, lean_object* v_x_822_){
_start:
{
lean_object* v_baseName_823_; lean_object* v_name_824_; uint8_t v___x_825_; 
v_baseName_823_ = lean_ctor_get(v_x_822_, 1);
v_name_824_ = lean_ctor_get(v_dep_821_, 0);
v___x_825_ = lean_name_eq(v_baseName_823_, v_name_824_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5___boxed(lean_object* v_dep_826_, lean_object* v_x_827_){
_start:
{
uint8_t v_res_828_; lean_object* v_r_829_; 
v_res_828_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5(v_dep_826_, v_x_827_);
lean_dec_ref(v_x_827_);
lean_dec_ref(v_dep_826_);
v_r_829_ = lean_box(v_res_828_);
return v_r_829_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(lean_object* v_s_830_, lean_object* v_opts_831_, lean_object* v_leanOpts_832_, uint8_t v_reconfigure_833_, lean_object* v_inst_834_, lean_object* v_matDep_835_){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_836_ = lean_box(v_reconfigure_833_);
v___x_837_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed), 7, 5);
lean_closure_set(v___x_837_, 0, v_s_830_);
lean_closure_set(v___x_837_, 1, v_matDep_835_);
lean_closure_set(v___x_837_, 2, v_opts_831_);
lean_closure_set(v___x_837_, 3, v_leanOpts_832_);
lean_closure_set(v___x_837_, 4, v___x_836_);
v___x_838_ = lean_apply_2(v_inst_834_, lean_box(0), v___x_837_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed(lean_object* v_s_839_, lean_object* v_opts_840_, lean_object* v_leanOpts_841_, lean_object* v_reconfigure_842_, lean_object* v_inst_843_, lean_object* v_matDep_844_){
_start:
{
uint8_t v_reconfigure_boxed_845_; lean_object* v_res_846_; 
v_reconfigure_boxed_845_ = lean_unbox(v_reconfigure_842_);
v_res_846_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(v_s_839_, v_opts_840_, v_leanOpts_841_, v_reconfigure_boxed_845_, v_inst_843_, v_matDep_844_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__7(lean_object* v_resolve_847_, lean_object* v_pkg_848_, lean_object* v_dep_849_, lean_object* v_ws_850_, lean_object* v_toBind_851_, lean_object* v___f_852_, lean_object* v_____r_853_){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lean_apply_3(v_resolve_847_, v_pkg_848_, v_dep_849_, v_ws_850_);
v___x_855_ = lean_apply_4(v_toBind_851_, lean_box(0), lean_box(0), v___x_854_, v___f_852_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__8(lean_object* v___f_856_, lean_object* v_____r_857_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = lean_apply_1(v___f_856_, v_____r_857_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9(lean_object* v_toPure_860_, lean_object* v_leanOpts_861_, uint8_t v_reconfigure_862_, lean_object* v_inst_863_, lean_object* v_resolve_864_, lean_object* v_pkg_865_, lean_object* v_toBind_866_, lean_object* v_baseName_867_, lean_object* v_inst_868_, lean_object* v_dep_869_, lean_object* v_s_870_){
_start:
{
lean_object* v_ws_871_; lean_object* v_depIdxs_872_; lean_object* v_packages_873_; lean_object* v___f_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v_ws_871_ = lean_ctor_get(v_s_870_, 0);
lean_inc_ref(v_ws_871_);
v_depIdxs_872_ = lean_ctor_get(v_s_870_, 1);
v_packages_873_ = lean_ctor_get(v_ws_871_, 4);
lean_inc_ref(v_dep_869_);
v___f_874_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5___boxed), 2, 1);
lean_closure_set(v___f_874_, 0, v_dep_869_);
v___x_875_ = lean_unsigned_to_nat(0u);
v___x_876_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_874_, v_packages_873_, v___x_875_);
if (lean_obj_tag(v___x_876_) == 1)
{
lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_886_; 
lean_inc_ref(v_depIdxs_872_);
lean_dec_ref(v_dep_869_);
lean_dec(v_inst_868_);
lean_dec(v_baseName_867_);
lean_dec(v_toBind_866_);
lean_dec_ref(v_pkg_865_);
lean_dec(v_resolve_864_);
lean_dec(v_inst_863_);
lean_dec_ref(v_leanOpts_861_);
v_isSharedCheck_886_ = !lean_is_exclusive(v_s_870_);
if (v_isSharedCheck_886_ == 0)
{
lean_object* v_unused_887_; lean_object* v_unused_888_; 
v_unused_887_ = lean_ctor_get(v_s_870_, 1);
lean_dec(v_unused_887_);
v_unused_888_ = lean_ctor_get(v_s_870_, 0);
lean_dec(v_unused_888_);
v___x_878_ = v_s_870_;
v_isShared_879_ = v_isSharedCheck_886_;
goto v_resetjp_877_;
}
else
{
lean_dec(v_s_870_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_886_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v_val_880_; lean_object* v___x_881_; lean_object* v___x_883_; 
v_val_880_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_val_880_);
lean_dec_ref(v___x_876_);
v___x_881_ = lean_array_push(v_depIdxs_872_, v_val_880_);
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 1, v___x_881_);
v___x_883_ = v___x_878_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_ws_871_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v___x_881_);
v___x_883_ = v_reuseFailAlloc_885_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
lean_object* v___x_884_; 
v___x_884_ = lean_apply_2(v_toPure_860_, lean_box(0), v___x_883_);
return v___x_884_;
}
}
}
else
{
lean_object* v_name_889_; lean_object* v_opts_890_; lean_object* v___x_891_; lean_object* v___f_892_; lean_object* v___f_893_; uint8_t v___x_894_; 
lean_dec(v___x_876_);
lean_dec(v_toPure_860_);
v_name_889_ = lean_ctor_get(v_dep_869_, 0);
v_opts_890_ = lean_ctor_get(v_dep_869_, 4);
v___x_891_ = lean_box(v_reconfigure_862_);
lean_inc(v_opts_890_);
v___f_892_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed), 6, 5);
lean_closure_set(v___f_892_, 0, v_s_870_);
lean_closure_set(v___f_892_, 1, v_opts_890_);
lean_closure_set(v___f_892_, 2, v_leanOpts_861_);
lean_closure_set(v___f_892_, 3, v___x_891_);
lean_closure_set(v___f_892_, 4, v_inst_863_);
lean_inc_ref(v___f_892_);
lean_inc(v_toBind_866_);
lean_inc_ref(v_ws_871_);
lean_inc_ref(v_dep_869_);
lean_inc_ref(v_pkg_865_);
lean_inc(v_resolve_864_);
v___f_893_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__7), 7, 6);
lean_closure_set(v___f_893_, 0, v_resolve_864_);
lean_closure_set(v___f_893_, 1, v_pkg_865_);
lean_closure_set(v___f_893_, 2, v_dep_869_);
lean_closure_set(v___f_893_, 3, v_ws_871_);
lean_closure_set(v___f_893_, 4, v_toBind_866_);
lean_closure_set(v___f_893_, 5, v___f_892_);
v___x_894_ = lean_name_eq(v_baseName_867_, v_name_889_);
if (v___x_894_ == 0)
{
lean_object* v___x_895_; lean_object* v___x_896_; 
lean_dec_ref(v___f_893_);
lean_dec(v_inst_868_);
lean_dec(v_baseName_867_);
v___x_895_ = lean_box(0);
v___x_896_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__7(v_resolve_864_, v_pkg_865_, v_dep_869_, v_ws_871_, v_toBind_866_, v___f_892_, v___x_895_);
return v___x_896_;
}
else
{
lean_object* v___f_897_; uint8_t v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
lean_dec_ref(v___f_892_);
lean_dec_ref(v_ws_871_);
lean_dec_ref(v_dep_869_);
lean_dec_ref(v_pkg_865_);
lean_dec(v_resolve_864_);
v___f_897_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__8), 2, 1);
lean_closure_set(v___f_897_, 0, v___f_893_);
v___x_898_ = 0;
v___x_899_ = l_Lean_Name_toString(v_baseName_867_, v___x_898_);
v___x_900_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9___closed__0));
v___x_901_ = lean_string_append(v___x_899_, v___x_900_);
v___x_902_ = lean_apply_2(v_inst_868_, lean_box(0), v___x_901_);
v___x_903_ = lean_apply_4(v_toBind_866_, lean_box(0), lean_box(0), v___x_902_, v___f_897_);
return v___x_903_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9___boxed(lean_object* v_toPure_904_, lean_object* v_leanOpts_905_, lean_object* v_reconfigure_906_, lean_object* v_inst_907_, lean_object* v_resolve_908_, lean_object* v_pkg_909_, lean_object* v_toBind_910_, lean_object* v_baseName_911_, lean_object* v_inst_912_, lean_object* v_dep_913_, lean_object* v_s_914_){
_start:
{
uint8_t v_reconfigure_boxed_915_; lean_object* v_res_916_; 
v_reconfigure_boxed_915_ = lean_unbox(v_reconfigure_906_);
v_res_916_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9(v_toPure_904_, v_leanOpts_905_, v_reconfigure_boxed_915_, v_inst_907_, v_resolve_908_, v_pkg_909_, v_toBind_910_, v_baseName_911_, v_inst_912_, v_dep_913_, v_s_914_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(lean_object* v_inst_918_, lean_object* v_inst_919_, lean_object* v_inst_920_, lean_object* v_resolve_921_, lean_object* v_leanOpts_922_, uint8_t v_reconfigure_923_, lean_object* v_pkg_924_, lean_object* v_recurse_925_, lean_object* v_a_926_, lean_object* v_a_927_){
_start:
{
lean_object* v_toApplicative_928_; lean_object* v_packages_929_; lean_object* v_wsIdx_930_; lean_object* v_baseName_931_; lean_object* v_depConfigs_932_; lean_object* v_toBind_933_; lean_object* v_toFunctor_934_; lean_object* v_toPure_935_; lean_object* v___f_936_; lean_object* v_start_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v_s_940_; lean_object* v___f_941_; lean_object* v___f_942_; lean_object* v___x_943_; uint8_t v___x_944_; 
v_toApplicative_928_ = lean_ctor_get(v_inst_918_, 0);
v_packages_929_ = lean_ctor_get(v_a_927_, 4);
v_wsIdx_930_ = lean_ctor_get(v_pkg_924_, 0);
v_baseName_931_ = lean_ctor_get(v_pkg_924_, 1);
lean_inc(v_baseName_931_);
v_depConfigs_932_ = lean_ctor_get(v_pkg_924_, 12);
lean_inc_ref(v_depConfigs_932_);
v_toBind_933_ = lean_ctor_get(v_inst_918_, 1);
lean_inc_n(v_toBind_933_, 2);
v_toFunctor_934_ = lean_ctor_get(v_toApplicative_928_, 0);
v_toPure_935_ = lean_ctor_get(v_toApplicative_928_, 1);
v___f_936_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___closed__0));
v_start_937_ = lean_array_get_size(v_packages_929_);
v___x_938_ = lean_array_get_size(v_depConfigs_932_);
v___x_939_ = lean_mk_empty_array_with_capacity(v___x_938_);
v_s_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_940_, 0, v_a_927_);
lean_ctor_set(v_s_940_, 1, v___x_939_);
lean_inc(v_a_926_);
lean_inc_ref(v_toFunctor_934_);
v___f_941_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed), 6, 4);
lean_closure_set(v___f_941_, 0, v_toFunctor_934_);
lean_closure_set(v___f_941_, 1, v_recurse_925_);
lean_closure_set(v___f_941_, 2, v_a_926_);
lean_closure_set(v___f_941_, 3, v___f_936_);
lean_inc_ref(v_inst_918_);
lean_inc(v_wsIdx_930_);
lean_inc(v_toPure_935_);
v___f_942_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4___boxed), 7, 6);
lean_closure_set(v___f_942_, 0, v_toPure_935_);
lean_closure_set(v___f_942_, 1, v_wsIdx_930_);
lean_closure_set(v___f_942_, 2, v_start_937_);
lean_closure_set(v___f_942_, 3, v_toBind_933_);
lean_closure_set(v___f_942_, 4, v_inst_918_);
lean_closure_set(v___f_942_, 5, v___f_941_);
v___x_943_ = lean_unsigned_to_nat(0u);
v___x_944_ = lean_nat_dec_lt(v___x_943_, v___x_938_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; lean_object* v___x_946_; 
lean_inc(v_toPure_935_);
lean_dec_ref(v_depConfigs_932_);
lean_dec(v_baseName_931_);
lean_dec_ref(v_pkg_924_);
lean_dec_ref(v_leanOpts_922_);
lean_dec(v_resolve_921_);
lean_dec(v_inst_920_);
lean_dec(v_inst_919_);
lean_dec_ref(v_inst_918_);
v___x_945_ = lean_apply_2(v_toPure_935_, lean_box(0), v_s_940_);
v___x_946_ = lean_apply_4(v_toBind_933_, lean_box(0), lean_box(0), v___x_945_, v___f_942_);
return v___x_946_;
}
else
{
lean_object* v___x_947_; lean_object* v___f_948_; size_t v___x_949_; size_t v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_947_ = lean_box(v_reconfigure_923_);
lean_inc(v_toBind_933_);
lean_inc(v_toPure_935_);
v___f_948_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9___boxed), 11, 9);
lean_closure_set(v___f_948_, 0, v_toPure_935_);
lean_closure_set(v___f_948_, 1, v_leanOpts_922_);
lean_closure_set(v___f_948_, 2, v___x_947_);
lean_closure_set(v___f_948_, 3, v_inst_920_);
lean_closure_set(v___f_948_, 4, v_resolve_921_);
lean_closure_set(v___f_948_, 5, v_pkg_924_);
lean_closure_set(v___f_948_, 6, v_toBind_933_);
lean_closure_set(v___f_948_, 7, v_baseName_931_);
lean_closure_set(v___f_948_, 8, v_inst_919_);
v___x_949_ = lean_usize_of_nat(v___x_938_);
v___x_950_ = ((size_t)0ULL);
v___x_951_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_918_, v___f_948_, v_depConfigs_932_, v___x_949_, v___x_950_, v_s_940_);
v___x_952_ = lean_apply_4(v_toBind_933_, lean_box(0), lean_box(0), v___x_951_, v___f_942_);
return v___x_952_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___boxed(lean_object* v_inst_953_, lean_object* v_inst_954_, lean_object* v_inst_955_, lean_object* v_resolve_956_, lean_object* v_leanOpts_957_, lean_object* v_reconfigure_958_, lean_object* v_pkg_959_, lean_object* v_recurse_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
uint8_t v_reconfigure_boxed_963_; lean_object* v_res_964_; 
v_reconfigure_boxed_963_ = lean_unbox(v_reconfigure_958_);
v_res_964_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_953_, v_inst_954_, v_inst_955_, v_resolve_956_, v_leanOpts_957_, v_reconfigure_boxed_963_, v_pkg_959_, v_recurse_960_, v_a_961_, v_a_962_);
lean_dec(v_a_961_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(lean_object* v_m_965_, lean_object* v_inst_966_, lean_object* v_inst_967_, lean_object* v_inst_968_, lean_object* v_resolve_969_, lean_object* v_leanOpts_970_, uint8_t v_reconfigure_971_, lean_object* v_pkg_972_, lean_object* v_recurse_973_, lean_object* v_a_974_, lean_object* v_a_975_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_966_, v_inst_967_, v_inst_968_, v_resolve_969_, v_leanOpts_970_, v_reconfigure_971_, v_pkg_972_, v_recurse_973_, v_a_974_, v_a_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___boxed(lean_object* v_m_977_, lean_object* v_inst_978_, lean_object* v_inst_979_, lean_object* v_inst_980_, lean_object* v_resolve_981_, lean_object* v_leanOpts_982_, lean_object* v_reconfigure_983_, lean_object* v_pkg_984_, lean_object* v_recurse_985_, lean_object* v_a_986_, lean_object* v_a_987_){
_start:
{
uint8_t v_reconfigure_boxed_988_; lean_object* v_res_989_; 
v_reconfigure_boxed_988_ = lean_unbox(v_reconfigure_983_);
v_res_989_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(v_m_977_, v_inst_978_, v_inst_979_, v_inst_980_, v_resolve_981_, v_leanOpts_982_, v_reconfigure_boxed_988_, v_pkg_984_, v_recurse_985_, v_a_986_, v_a_987_);
lean_dec(v_a_986_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(lean_object* v_inst_990_, lean_object* v_inst_991_, lean_object* v_inst_992_, lean_object* v_ws_993_, lean_object* v_resolve_994_, lean_object* v_root_995_, lean_object* v_stack_996_, lean_object* v_leanOpts_997_, uint8_t v_reconfigure_998_){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_999_ = lean_box(v_reconfigure_998_);
lean_inc(v_inst_991_);
lean_inc_ref(v_inst_990_);
v___x_1000_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___boxed), 11, 7);
lean_closure_set(v___x_1000_, 0, lean_box(0));
lean_closure_set(v___x_1000_, 1, v_inst_990_);
lean_closure_set(v___x_1000_, 2, v_inst_991_);
lean_closure_set(v___x_1000_, 3, v_inst_992_);
lean_closure_set(v___x_1000_, 4, v_resolve_994_);
lean_closure_set(v___x_1000_, 5, v_leanOpts_997_);
lean_closure_set(v___x_1000_, 6, v___x_999_);
v___x_1001_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg(v_inst_990_, v_inst_991_, v_ws_993_, v___x_1000_, v_root_995_, v_stack_996_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___boxed(lean_object* v_inst_1002_, lean_object* v_inst_1003_, lean_object* v_inst_1004_, lean_object* v_ws_1005_, lean_object* v_resolve_1006_, lean_object* v_root_1007_, lean_object* v_stack_1008_, lean_object* v_leanOpts_1009_, lean_object* v_reconfigure_1010_){
_start:
{
uint8_t v_reconfigure_boxed_1011_; lean_object* v_res_1012_; 
v_reconfigure_boxed_1011_ = lean_unbox(v_reconfigure_1010_);
v_res_1012_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(v_inst_1002_, v_inst_1003_, v_inst_1004_, v_ws_1005_, v_resolve_1006_, v_root_1007_, v_stack_1008_, v_leanOpts_1009_, v_reconfigure_boxed_1011_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(lean_object* v_m_1013_, lean_object* v_inst_1014_, lean_object* v_inst_1015_, lean_object* v_inst_1016_, lean_object* v_ws_1017_, lean_object* v_resolve_1018_, lean_object* v_root_1019_, lean_object* v_stack_1020_, lean_object* v_leanOpts_1021_, uint8_t v_reconfigure_1022_){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1023_ = lean_box(v_reconfigure_1022_);
lean_inc(v_inst_1015_);
lean_inc_ref(v_inst_1014_);
v___x_1024_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___boxed), 11, 7);
lean_closure_set(v___x_1024_, 0, lean_box(0));
lean_closure_set(v___x_1024_, 1, v_inst_1014_);
lean_closure_set(v___x_1024_, 2, v_inst_1015_);
lean_closure_set(v___x_1024_, 3, v_inst_1016_);
lean_closure_set(v___x_1024_, 4, v_resolve_1018_);
lean_closure_set(v___x_1024_, 5, v_leanOpts_1021_);
lean_closure_set(v___x_1024_, 6, v___x_1023_);
v___x_1025_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___redArg(v_inst_1014_, v_inst_1015_, v_ws_1017_, v___x_1024_, v_root_1019_, v_stack_1020_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___boxed(lean_object* v_m_1026_, lean_object* v_inst_1027_, lean_object* v_inst_1028_, lean_object* v_inst_1029_, lean_object* v_ws_1030_, lean_object* v_resolve_1031_, lean_object* v_root_1032_, lean_object* v_stack_1033_, lean_object* v_leanOpts_1034_, lean_object* v_reconfigure_1035_){
_start:
{
uint8_t v_reconfigure_boxed_1036_; lean_object* v_res_1037_; 
v_reconfigure_boxed_1036_ = lean_unbox(v_reconfigure_1035_);
v_res_1037_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(v_m_1026_, v_inst_1027_, v_inst_1028_, v_inst_1029_, v_ws_1030_, v_resolve_1031_, v_root_1032_, v_stack_1033_, v_leanOpts_1034_, v_reconfigure_boxed_1036_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run___redArg(lean_object* v_x_1038_, lean_object* v_init_1039_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = lean_apply_1(v_x_1038_, v_init_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run(lean_object* v_m_1041_, lean_object* v_00_u03b1_1042_, lean_object* v_x_1043_, lean_object* v_init_1044_){
_start:
{
lean_object* v___x_1045_; 
v___x_1045_ = lean_apply_1(v_x_1043_, v_init_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___redArg(lean_object* v_toUpdate_1046_, lean_object* v_as_1047_, size_t v_i_1048_, size_t v_stop_1049_, lean_object* v_b_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v_fst_1054_; lean_object* v_snd_1055_; uint8_t v___x_1061_; 
v___x_1061_ = lean_usize_dec_eq(v_i_1048_, v_stop_1049_);
if (v___x_1061_ == 0)
{
lean_object* v___x_1062_; uint8_t v_inherited_1063_; 
v___x_1062_ = lean_array_uget_borrowed(v_as_1047_, v_i_1048_);
v_inherited_1063_ = lean_ctor_get_uint8(v___x_1062_, sizeof(void*)*5);
if (v_inherited_1063_ == 0)
{
lean_object* v_name_1064_; uint8_t v___x_1065_; 
v_name_1064_ = lean_ctor_get(v___x_1062_, 0);
v___x_1065_ = l_Lean_NameSet_contains(v_toUpdate_1046_, v_name_1064_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = lean_box(0);
lean_inc(v___x_1062_);
lean_inc(v_name_1064_);
v___x_1067_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1064_, v___x_1062_, v___y_1051_);
v_fst_1054_ = v___x_1066_;
v_snd_1055_ = v___x_1067_;
goto v___jp_1053_;
}
else
{
goto v___jp_1059_;
}
}
else
{
goto v___jp_1059_;
}
}
else
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1068_, 0, v_b_1050_);
lean_ctor_set(v___x_1068_, 1, v___y_1051_);
v___x_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
return v___x_1069_;
}
v___jp_1053_:
{
size_t v___x_1056_; size_t v___x_1057_; 
v___x_1056_ = ((size_t)1ULL);
v___x_1057_ = lean_usize_add(v_i_1048_, v___x_1056_);
v_i_1048_ = v___x_1057_;
v_b_1050_ = v_fst_1054_;
v___y_1051_ = v_snd_1055_;
goto _start;
}
v___jp_1059_:
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_box(0);
v_fst_1054_ = v___x_1060_;
v_snd_1055_ = v___y_1051_;
goto v___jp_1053_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___redArg___boxed(lean_object* v_toUpdate_1070_, lean_object* v_as_1071_, lean_object* v_i_1072_, lean_object* v_stop_1073_, lean_object* v_b_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
size_t v_i_boxed_1077_; size_t v_stop_boxed_1078_; lean_object* v_res_1079_; 
v_i_boxed_1077_ = lean_unbox_usize(v_i_1072_);
lean_dec(v_i_1072_);
v_stop_boxed_1078_ = lean_unbox_usize(v_stop_1073_);
lean_dec(v_stop_1073_);
v_res_1079_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___redArg(v_toUpdate_1070_, v_as_1071_, v_i_boxed_1077_, v_stop_boxed_1078_, v_b_1074_, v___y_1075_);
lean_dec_ref(v_as_1071_);
lean_dec(v_toUpdate_1070_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(lean_object* v_as_1080_, size_t v_i_1081_, size_t v_stop_1082_, lean_object* v_b_1083_, lean_object* v___y_1084_){
_start:
{
uint8_t v___x_1086_; 
v___x_1086_ = lean_usize_dec_eq(v_i_1081_, v_stop_1082_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; lean_object* v___x_1088_; size_t v___x_1089_; size_t v___x_1090_; 
v___x_1087_ = lean_array_uget_borrowed(v_as_1080_, v_i_1081_);
lean_inc_ref(v___y_1084_);
lean_inc(v___x_1087_);
v___x_1088_ = lean_apply_2(v___y_1084_, v___x_1087_, lean_box(0));
v___x_1089_ = ((size_t)1ULL);
v___x_1090_ = lean_usize_add(v_i_1081_, v___x_1089_);
v_i_1081_ = v___x_1090_;
v_b_1083_ = v___x_1088_;
goto _start;
}
else
{
lean_object* v___x_1092_; 
v___x_1092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1092_, 0, v_b_1083_);
return v___x_1092_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___boxed(lean_object* v_as_1093_, lean_object* v_i_1094_, lean_object* v_stop_1095_, lean_object* v_b_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
size_t v_i_boxed_1099_; size_t v_stop_boxed_1100_; lean_object* v_res_1101_; 
v_i_boxed_1099_ = lean_unbox_usize(v_i_1094_);
lean_dec(v_i_1094_);
v_stop_boxed_1100_ = lean_unbox_usize(v_stop_1095_);
lean_dec(v_stop_1095_);
v_res_1101_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_as_1093_, v_i_boxed_1099_, v_stop_boxed_1100_, v_b_1096_, v___y_1097_);
lean_dec_ref(v___y_1097_);
lean_dec_ref(v_as_1093_);
return v_res_1101_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5(void){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1108_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1109_ = lean_array_get_size(v___x_1108_);
return v___x_1109_;
}
}
static uint8_t _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6(void){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; uint8_t v___x_1112_; 
v___x_1110_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5);
v___x_1111_ = lean_unsigned_to_nat(0u);
v___x_1112_ = lean_nat_dec_lt(v___x_1111_, v___x_1110_);
return v___x_1112_;
}
}
static uint8_t _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7(void){
_start:
{
lean_object* v___x_1113_; uint8_t v___x_1114_; 
v___x_1113_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5);
v___x_1114_ = lean_nat_dec_le(v___x_1113_, v___x_1113_);
return v___x_1114_;
}
}
static size_t _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8(void){
_start:
{
lean_object* v___x_1115_; size_t v___x_1116_; 
v___x_1115_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5);
v___x_1116_ = lean_usize_of_nat(v___x_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest(lean_object* v_ws_1119_, lean_object* v_toUpdate_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v___y_1125_; lean_object* v___y_1130_; lean_object* v_fst_1131_; lean_object* v_snd_1132_; lean_object* v_packages_1151_; lean_object* v___x_1152_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; lean_object* v_val_1157_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v___y_1188_; lean_object* v___x_1205_; lean_object* v_baseName_1206_; lean_object* v_dir_1207_; lean_object* v_config_1208_; lean_object* v_relManifestFile_1209_; lean_object* v___y_1211_; lean_object* v___y_1212_; lean_object* v___y_1213_; uint8_t v_fst_1214_; lean_object* v_snd_1215_; lean_object* v_packagesDir_x3f_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1274_; lean_object* v___y_1277_; lean_object* v___y_1278_; uint8_t v___x_1281_; lean_object* v_rootName_1282_; lean_object* v_fst_1284_; lean_object* v_snd_1285_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v_val_1336_; lean_object* v___x_1362_; 
v_packages_1151_ = lean_ctor_get(v_ws_1119_, 4);
v___x_1152_ = lean_unsigned_to_nat(0u);
v___x_1205_ = lean_array_fget_borrowed(v_packages_1151_, v___x_1152_);
v_baseName_1206_ = lean_ctor_get(v___x_1205_, 1);
v_dir_1207_ = lean_ctor_get(v___x_1205_, 4);
v_config_1208_ = lean_ctor_get(v___x_1205_, 6);
v_relManifestFile_1209_ = lean_ctor_get(v___x_1205_, 9);
v___x_1281_ = 0;
lean_inc(v_baseName_1206_);
v_rootName_1282_ = l_Lean_Name_toString(v_baseName_1206_, v___x_1281_);
lean_inc_ref(v_relManifestFile_1209_);
lean_inc_ref(v_dir_1207_);
v___x_1333_ = l_Lake_joinRelative(v_dir_1207_, v_relManifestFile_1209_);
v___x_1334_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1362_ = l_Lake_Manifest_load(v___x_1333_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1362_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1362_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
lean_ctor_set_tag(v___x_1365_, 1);
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
v_val_1336_ = v___x_1368_;
goto v___jp_1335_;
}
}
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1378_; 
v_a_1371_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1373_ = v___x_1362_;
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1362_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1374_ == 0)
{
lean_ctor_set_tag(v___x_1373_, 0);
v___x_1376_ = v___x_1373_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
v_val_1336_ = v___x_1376_;
goto v___jp_1335_;
}
}
}
v___jp_1124_:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1126_ = lean_box(0);
v___x_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
lean_ctor_set(v___x_1127_, 1, v___y_1125_);
v___x_1128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1127_);
return v___x_1128_;
}
v___jp_1129_:
{
if (lean_obj_tag(v_fst_1131_) == 0)
{
lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1147_; 
lean_dec(v_snd_1132_);
v_a_1133_ = lean_ctor_get(v_fst_1131_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v_fst_1131_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1135_ = v_fst_1131_;
v_isShared_1136_ = v_isSharedCheck_1147_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v_fst_1131_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1147_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; uint8_t v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1145_; 
v___x_1137_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0));
v___x_1138_ = lean_io_error_to_string(v_a_1133_);
v___x_1139_ = lean_string_append(v___x_1137_, v___x_1138_);
lean_dec_ref(v___x_1138_);
v___x_1140_ = 3;
v___x_1141_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1141_, 0, v___x_1139_);
lean_ctor_set_uint8(v___x_1141_, sizeof(void*)*1, v___x_1140_);
lean_inc_ref(v___y_1130_);
v___x_1142_ = lean_apply_2(v___y_1130_, v___x_1141_, lean_box(0));
v___x_1143_ = lean_box(0);
if (v_isShared_1136_ == 0)
{
lean_ctor_set_tag(v___x_1135_, 1);
lean_ctor_set(v___x_1135_, 0, v___x_1143_);
v___x_1145_ = v___x_1135_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v___x_1143_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
else
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
lean_dec_ref(v_fst_1131_);
v___x_1148_ = lean_box(0);
v___x_1149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
lean_ctor_set(v___x_1149_, 1, v_snd_1132_);
v___x_1150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
return v___x_1150_;
}
}
v___jp_1153_:
{
lean_object* v___x_1158_; uint8_t v___x_1159_; 
v___x_1158_ = lean_array_get_size(v___y_1156_);
v___x_1159_ = lean_nat_dec_lt(v___x_1152_, v___x_1158_);
if (v___x_1159_ == 0)
{
v___y_1130_ = v___y_1154_;
v_fst_1131_ = v_val_1157_;
v_snd_1132_ = v___y_1155_;
goto v___jp_1129_;
}
else
{
lean_object* v___x_1160_; uint8_t v___x_1161_; 
v___x_1160_ = lean_box(0);
v___x_1161_ = lean_nat_dec_le(v___x_1158_, v___x_1158_);
if (v___x_1161_ == 0)
{
if (v___x_1159_ == 0)
{
v___y_1130_ = v___y_1154_;
v_fst_1131_ = v_val_1157_;
v_snd_1132_ = v___y_1155_;
goto v___jp_1129_;
}
else
{
size_t v___x_1162_; size_t v___x_1163_; lean_object* v___x_1164_; 
v___x_1162_ = ((size_t)0ULL);
v___x_1163_ = lean_usize_of_nat(v___x_1158_);
v___x_1164_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___y_1156_, v___x_1162_, v___x_1163_, v___x_1160_, v___y_1154_);
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_dec_ref(v___x_1164_);
v___y_1130_ = v___y_1154_;
v_fst_1131_ = v_val_1157_;
v_snd_1132_ = v___y_1155_;
goto v___jp_1129_;
}
else
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
lean_dec_ref(v_val_1157_);
lean_dec(v___y_1155_);
v_a_1165_ = lean_ctor_get(v___x_1164_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1167_ = v___x_1164_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___x_1164_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1165_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
}
else
{
size_t v___x_1173_; size_t v___x_1174_; lean_object* v___x_1175_; 
v___x_1173_ = ((size_t)0ULL);
v___x_1174_ = lean_usize_of_nat(v___x_1158_);
v___x_1175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___y_1156_, v___x_1173_, v___x_1174_, v___x_1160_, v___y_1154_);
if (lean_obj_tag(v___x_1175_) == 0)
{
lean_dec_ref(v___x_1175_);
v___y_1130_ = v___y_1154_;
v_fst_1131_ = v_val_1157_;
v_snd_1132_ = v___y_1155_;
goto v___jp_1129_;
}
else
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
lean_dec_ref(v_val_1157_);
lean_dec(v___y_1155_);
v_a_1176_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v___x_1175_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1175_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
}
}
v___jp_1184_:
{
if (lean_obj_tag(v___y_1188_) == 0)
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
v_a_1189_ = lean_ctor_get(v___y_1188_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___y_1188_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1191_ = v___y_1188_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___y_1188_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set_tag(v___x_1191_, 1);
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1189_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
v___y_1154_ = v___y_1185_;
v___y_1155_ = v___y_1187_;
v___y_1156_ = v___y_1186_;
v_val_1157_ = v___x_1194_;
goto v___jp_1153_;
}
}
}
else
{
lean_object* v_a_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1204_; 
v_a_1197_ = lean_ctor_get(v___y_1188_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___y_1188_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1199_ = v___y_1188_;
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_a_1197_);
lean_dec(v___y_1188_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1202_; 
if (v_isShared_1200_ == 0)
{
lean_ctor_set_tag(v___x_1199_, 0);
v___x_1202_ = v___x_1199_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_a_1197_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
v___y_1154_ = v___y_1185_;
v___y_1155_ = v___y_1187_;
v___y_1156_ = v___y_1186_;
v_val_1157_ = v___x_1202_;
goto v___jp_1153_;
}
}
}
}
v___jp_1210_:
{
lean_object* v_toWorkspaceConfig_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; uint8_t v___x_1220_; 
v_toWorkspaceConfig_1216_ = lean_ctor_get(v_config_1208_, 0);
v___x_1217_ = l_System_FilePath_normalize(v___y_1211_);
lean_inc_ref(v_toWorkspaceConfig_1216_);
v___x_1218_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1216_);
lean_inc_ref(v___x_1218_);
v___x_1219_ = l_System_FilePath_normalize(v___x_1218_);
v___x_1220_ = lean_string_dec_eq(v___x_1217_, v___x_1219_);
lean_dec_ref(v___x_1219_);
lean_dec_ref(v___x_1217_);
if (v___x_1220_ == 0)
{
if (v_fst_1214_ == 0)
{
lean_dec_ref(v___x_1218_);
lean_dec_ref(v___y_1213_);
v___y_1125_ = v_snd_1215_;
goto v___jp_1124_;
}
else
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; uint8_t v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1221_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1));
v___x_1222_ = lean_string_append(v___x_1221_, v___y_1213_);
v___x_1223_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2));
v___x_1224_ = lean_string_append(v___x_1222_, v___x_1223_);
lean_inc_ref(v_dir_1207_);
v___x_1225_ = l_Lake_joinRelative(v_dir_1207_, v___x_1218_);
v___x_1226_ = lean_string_append(v___x_1224_, v___x_1225_);
v___x_1227_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_1228_ = lean_string_append(v___x_1226_, v___x_1227_);
v___x_1229_ = 1;
v___x_1230_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1230_, 0, v___x_1228_);
lean_ctor_set_uint8(v___x_1230_, sizeof(void*)*1, v___x_1229_);
lean_inc_ref(v___y_1212_);
v___x_1231_ = lean_apply_2(v___y_1212_, v___x_1230_, lean_box(0));
v___x_1232_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___x_1225_);
v___x_1233_ = l_Lake_createParentDirs(v___x_1225_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v___x_1234_; 
lean_dec_ref(v___x_1233_);
v___x_1234_ = lean_io_rename(v___y_1213_, v___x_1225_);
lean_dec_ref(v___x_1225_);
lean_dec_ref(v___y_1213_);
v___y_1185_ = v___y_1212_;
v___y_1186_ = v___x_1232_;
v___y_1187_ = v_snd_1215_;
v___y_1188_ = v___x_1234_;
goto v___jp_1184_;
}
else
{
lean_dec_ref(v___x_1225_);
lean_dec_ref(v___y_1213_);
v___y_1185_ = v___y_1212_;
v___y_1186_ = v___x_1232_;
v___y_1187_ = v_snd_1215_;
v___y_1188_ = v___x_1233_;
goto v___jp_1184_;
}
}
}
else
{
lean_dec_ref(v___x_1218_);
lean_dec_ref(v___y_1213_);
v___y_1125_ = v_snd_1215_;
goto v___jp_1124_;
}
}
v___jp_1235_:
{
if (lean_obj_tag(v_packagesDir_x3f_1236_) == 1)
{
lean_object* v_val_1239_; lean_object* v___x_1240_; uint8_t v___x_1241_; lean_object* v___x_1242_; uint8_t v___x_1243_; 
v_val_1239_ = lean_ctor_get(v_packagesDir_x3f_1236_, 0);
lean_inc_n(v_val_1239_, 2);
lean_dec_ref(v_packagesDir_x3f_1236_);
lean_inc_ref(v_dir_1207_);
v___x_1240_ = l_Lake_joinRelative(v_dir_1207_, v_val_1239_);
v___x_1241_ = l_System_FilePath_pathExists(v___x_1240_);
v___x_1242_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1243_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_1243_ == 0)
{
v___y_1211_ = v_val_1239_;
v___y_1212_ = v___y_1238_;
v___y_1213_ = v___x_1240_;
v_fst_1214_ = v___x_1241_;
v_snd_1215_ = v___y_1237_;
goto v___jp_1210_;
}
else
{
lean_object* v___x_1244_; uint8_t v___x_1245_; 
v___x_1244_ = lean_box(0);
v___x_1245_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
if (v___x_1245_ == 0)
{
if (v___x_1243_ == 0)
{
v___y_1211_ = v_val_1239_;
v___y_1212_ = v___y_1238_;
v___y_1213_ = v___x_1240_;
v_fst_1214_ = v___x_1241_;
v_snd_1215_ = v___y_1237_;
goto v___jp_1210_;
}
else
{
size_t v___x_1246_; size_t v___x_1247_; lean_object* v___x_1248_; 
v___x_1246_ = ((size_t)0ULL);
v___x_1247_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8);
v___x_1248_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___x_1242_, v___x_1246_, v___x_1247_, v___x_1244_, v___y_1238_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_dec_ref(v___x_1248_);
v___y_1211_ = v_val_1239_;
v___y_1212_ = v___y_1238_;
v___y_1213_ = v___x_1240_;
v_fst_1214_ = v___x_1241_;
v_snd_1215_ = v___y_1237_;
goto v___jp_1210_;
}
else
{
lean_object* v_a_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1256_; 
lean_dec_ref(v___x_1240_);
lean_dec(v_val_1239_);
lean_dec(v___y_1237_);
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1251_ = v___x_1248_;
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_a_1249_);
lean_dec(v___x_1248_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1254_; 
if (v_isShared_1252_ == 0)
{
v___x_1254_ = v___x_1251_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_a_1249_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
}
}
else
{
size_t v___x_1257_; size_t v___x_1258_; lean_object* v___x_1259_; 
v___x_1257_ = ((size_t)0ULL);
v___x_1258_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8);
v___x_1259_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___x_1242_, v___x_1257_, v___x_1258_, v___x_1244_, v___y_1238_);
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_dec_ref(v___x_1259_);
v___y_1211_ = v_val_1239_;
v___y_1212_ = v___y_1238_;
v___y_1213_ = v___x_1240_;
v_fst_1214_ = v___x_1241_;
v_snd_1215_ = v___y_1237_;
goto v___jp_1210_;
}
else
{
lean_object* v_a_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1267_; 
lean_dec_ref(v___x_1240_);
lean_dec(v_val_1239_);
lean_dec(v___y_1237_);
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1262_ = v___x_1259_;
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_a_1260_);
lean_dec(v___x_1259_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1265_; 
if (v_isShared_1263_ == 0)
{
v___x_1265_ = v___x_1262_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_a_1260_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
}
}
else
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
lean_dec(v_packagesDir_x3f_1236_);
v___x_1268_ = lean_box(0);
v___x_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
lean_ctor_set(v___x_1269_, 1, v___y_1237_);
v___x_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
return v___x_1270_;
}
}
v___jp_1271_:
{
lean_object* v_packagesDir_x3f_1275_; 
v_packagesDir_x3f_1275_ = lean_ctor_get(v___y_1272_, 2);
lean_inc(v_packagesDir_x3f_1275_);
lean_dec_ref(v___y_1272_);
v_packagesDir_x3f_1236_ = v_packagesDir_x3f_1275_;
v___y_1237_ = v___y_1273_;
v___y_1238_ = v___y_1274_;
goto v___jp_1235_;
}
v___jp_1276_:
{
if (lean_obj_tag(v___y_1278_) == 0)
{
lean_object* v_a_1279_; lean_object* v_snd_1280_; 
v_a_1279_ = lean_ctor_get(v___y_1278_, 0);
lean_inc(v_a_1279_);
lean_dec_ref(v___y_1278_);
v_snd_1280_ = lean_ctor_get(v_a_1279_, 1);
lean_inc(v_snd_1280_);
lean_dec(v_a_1279_);
v___y_1272_ = v___y_1277_;
v___y_1273_ = v_snd_1280_;
v___y_1274_ = v_a_1122_;
goto v___jp_1271_;
}
else
{
lean_dec_ref(v___y_1277_);
return v___y_1278_;
}
}
v___jp_1283_:
{
if (lean_obj_tag(v_fst_1284_) == 0)
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1318_; 
v_a_1286_ = lean_ctor_get(v_fst_1284_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v_fst_1284_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1288_ = v_fst_1284_;
v_isShared_1289_ = v_isSharedCheck_1318_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v_fst_1284_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1318_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
if (lean_obj_tag(v_a_1286_) == 11)
{
lean_object* v___x_1290_; lean_object* v___x_1291_; uint8_t v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1297_; 
lean_dec_ref(v_a_1286_);
v___x_1290_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9));
v___x_1291_ = lean_string_append(v_rootName_1282_, v___x_1290_);
v___x_1292_ = 1;
v___x_1293_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1293_, 0, v___x_1291_);
lean_ctor_set_uint8(v___x_1293_, sizeof(void*)*1, v___x_1292_);
lean_inc_ref(v_a_1122_);
v___x_1294_ = lean_apply_2(v_a_1122_, v___x_1293_, lean_box(0));
v___x_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
lean_ctor_set(v___x_1295_, 1, v_snd_1285_);
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1295_);
v___x_1297_ = v___x_1288_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
else
{
if (lean_obj_tag(v_toUpdate_1120_) == 0)
{
lean_object* v___x_1299_; uint8_t v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1305_; 
lean_dec(v_snd_1285_);
lean_dec_ref(v_rootName_1282_);
v___x_1299_ = lean_io_error_to_string(v_a_1286_);
v___x_1300_ = 3;
v___x_1301_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1301_, 0, v___x_1299_);
lean_ctor_set_uint8(v___x_1301_, sizeof(void*)*1, v___x_1300_);
lean_inc_ref(v_a_1122_);
v___x_1302_ = lean_apply_2(v_a_1122_, v___x_1301_, lean_box(0));
v___x_1303_ = lean_box(0);
if (v_isShared_1289_ == 0)
{
lean_ctor_set_tag(v___x_1288_, 1);
lean_ctor_set(v___x_1288_, 0, v___x_1303_);
v___x_1305_ = v___x_1288_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
else
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; uint8_t v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1316_; 
v___x_1307_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__10));
v___x_1308_ = lean_string_append(v_rootName_1282_, v___x_1307_);
v___x_1309_ = lean_io_error_to_string(v_a_1286_);
v___x_1310_ = lean_string_append(v___x_1308_, v___x_1309_);
lean_dec_ref(v___x_1309_);
v___x_1311_ = 2;
v___x_1312_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1312_, 0, v___x_1310_);
lean_ctor_set_uint8(v___x_1312_, sizeof(void*)*1, v___x_1311_);
lean_inc_ref(v_a_1122_);
v___x_1313_ = lean_apply_2(v_a_1122_, v___x_1312_, lean_box(0));
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
lean_ctor_set(v___x_1314_, 1, v_snd_1285_);
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1314_);
v___x_1316_ = v___x_1288_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
}
else
{
lean_dec_ref(v_rootName_1282_);
if (lean_obj_tag(v_toUpdate_1120_) == 0)
{
lean_object* v_a_1319_; lean_object* v_packagesDir_x3f_1320_; lean_object* v_packages_1321_; lean_object* v___x_1322_; uint8_t v___x_1323_; 
v_a_1319_ = lean_ctor_get(v_fst_1284_, 0);
lean_inc(v_a_1319_);
lean_dec_ref(v_fst_1284_);
v_packagesDir_x3f_1320_ = lean_ctor_get(v_a_1319_, 2);
v_packages_1321_ = lean_ctor_get(v_a_1319_, 3);
v___x_1322_ = lean_array_get_size(v_packages_1321_);
v___x_1323_ = lean_nat_dec_lt(v___x_1152_, v___x_1322_);
if (v___x_1323_ == 0)
{
lean_inc(v_packagesDir_x3f_1320_);
lean_dec(v_a_1319_);
v_packagesDir_x3f_1236_ = v_packagesDir_x3f_1320_;
v___y_1237_ = v_snd_1285_;
v___y_1238_ = v_a_1122_;
goto v___jp_1235_;
}
else
{
lean_object* v___x_1324_; uint8_t v___x_1325_; 
v___x_1324_ = lean_box(0);
v___x_1325_ = lean_nat_dec_le(v___x_1322_, v___x_1322_);
if (v___x_1325_ == 0)
{
if (v___x_1323_ == 0)
{
lean_inc(v_packagesDir_x3f_1320_);
lean_dec(v_a_1319_);
v_packagesDir_x3f_1236_ = v_packagesDir_x3f_1320_;
v___y_1237_ = v_snd_1285_;
v___y_1238_ = v_a_1122_;
goto v___jp_1235_;
}
else
{
size_t v___x_1326_; size_t v___x_1327_; lean_object* v___x_1328_; 
v___x_1326_ = ((size_t)0ULL);
v___x_1327_ = lean_usize_of_nat(v___x_1322_);
v___x_1328_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___redArg(v_toUpdate_1120_, v_packages_1321_, v___x_1326_, v___x_1327_, v___x_1324_, v_snd_1285_);
v___y_1277_ = v_a_1319_;
v___y_1278_ = v___x_1328_;
goto v___jp_1276_;
}
}
else
{
size_t v___x_1329_; size_t v___x_1330_; lean_object* v___x_1331_; 
v___x_1329_ = ((size_t)0ULL);
v___x_1330_ = lean_usize_of_nat(v___x_1322_);
v___x_1331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___redArg(v_toUpdate_1120_, v_packages_1321_, v___x_1329_, v___x_1330_, v___x_1324_, v_snd_1285_);
v___y_1277_ = v_a_1319_;
v___y_1278_ = v___x_1331_;
goto v___jp_1276_;
}
}
}
else
{
lean_object* v_a_1332_; 
v_a_1332_ = lean_ctor_get(v_fst_1284_, 0);
lean_inc(v_a_1332_);
lean_dec_ref(v_fst_1284_);
v___y_1272_ = v_a_1332_;
v___y_1273_ = v_snd_1285_;
v___y_1274_ = v_a_1122_;
goto v___jp_1271_;
}
}
}
v___jp_1335_:
{
uint8_t v___x_1337_; 
v___x_1337_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_1337_ == 0)
{
v_fst_1284_ = v_val_1336_;
v_snd_1285_ = v_a_1121_;
goto v___jp_1283_;
}
else
{
lean_object* v___x_1338_; uint8_t v___x_1339_; 
v___x_1338_ = lean_box(0);
v___x_1339_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
if (v___x_1339_ == 0)
{
if (v___x_1337_ == 0)
{
v_fst_1284_ = v_val_1336_;
v_snd_1285_ = v_a_1121_;
goto v___jp_1283_;
}
else
{
size_t v___x_1340_; size_t v___x_1341_; lean_object* v___x_1342_; 
v___x_1340_ = ((size_t)0ULL);
v___x_1341_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8);
v___x_1342_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___x_1334_, v___x_1340_, v___x_1341_, v___x_1338_, v_a_1122_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_dec_ref(v___x_1342_);
v_fst_1284_ = v_val_1336_;
v_snd_1285_ = v_a_1121_;
goto v___jp_1283_;
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
lean_dec_ref(v_val_1336_);
lean_dec_ref(v_rootName_1282_);
lean_dec(v_a_1121_);
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1342_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1342_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
}
}
else
{
size_t v___x_1351_; size_t v___x_1352_; lean_object* v___x_1353_; 
v___x_1351_ = ((size_t)0ULL);
v___x_1352_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8);
v___x_1353_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___x_1334_, v___x_1351_, v___x_1352_, v___x_1338_, v_a_1122_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_dec_ref(v___x_1353_);
v_fst_1284_ = v_val_1336_;
v_snd_1285_ = v_a_1121_;
goto v___jp_1283_;
}
else
{
lean_object* v_a_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1361_; 
lean_dec_ref(v_val_1336_);
lean_dec_ref(v_rootName_1282_);
lean_dec(v_a_1121_);
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1356_ = v___x_1353_;
v_isShared_1357_ = v_isSharedCheck_1361_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_a_1354_);
lean_dec(v___x_1353_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1361_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1359_; 
if (v_isShared_1357_ == 0)
{
v___x_1359_ = v___x_1356_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v_a_1354_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___boxed(lean_object* v_ws_1379_, lean_object* v_toUpdate_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest(v_ws_1379_, v_toUpdate_1380_, v_a_1381_, v_a_1382_);
lean_dec_ref(v_a_1382_);
lean_dec(v_toUpdate_1380_);
lean_dec_ref(v_ws_1379_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(lean_object* v_toUpdate_1385_, lean_object* v_as_1386_, size_t v_i_1387_, size_t v_stop_1388_, lean_object* v_b_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_){
_start:
{
lean_object* v___x_1393_; 
v___x_1393_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___redArg(v_toUpdate_1385_, v_as_1386_, v_i_1387_, v_stop_1388_, v_b_1389_, v___y_1390_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___boxed(lean_object* v_toUpdate_1394_, lean_object* v_as_1395_, lean_object* v_i_1396_, lean_object* v_stop_1397_, lean_object* v_b_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
size_t v_i_boxed_1402_; size_t v_stop_boxed_1403_; lean_object* v_res_1404_; 
v_i_boxed_1402_ = lean_unbox_usize(v_i_1396_);
lean_dec(v_i_1396_);
v_stop_boxed_1403_ = lean_unbox_usize(v_stop_1397_);
lean_dec(v_stop_1397_);
v_res_1404_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(v_toUpdate_1394_, v_as_1395_, v_i_boxed_1402_, v_stop_boxed_1403_, v_b_1398_, v___y_1399_, v___y_1400_);
lean_dec_ref(v___y_1400_);
lean_dec_ref(v_as_1395_);
lean_dec(v_toUpdate_1394_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(lean_object* v_dep_1405_, lean_object* v_as_1406_, size_t v_i_1407_, size_t v_stop_1408_, lean_object* v_b_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_fst_1413_; lean_object* v_snd_1414_; lean_object* v___y_1419_; lean_object* v_name_1420_; uint8_t v___x_1423_; 
v___x_1423_ = lean_usize_dec_eq(v_i_1407_, v_stop_1408_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; lean_object* v_name_1425_; lean_object* v_scope_1426_; lean_object* v_configFile_1427_; lean_object* v_manifestFile_x3f_1428_; lean_object* v_src_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1452_; 
v___x_1424_ = lean_array_uget(v_as_1406_, v_i_1407_);
v_name_1425_ = lean_ctor_get(v___x_1424_, 0);
v_scope_1426_ = lean_ctor_get(v___x_1424_, 1);
v_configFile_1427_ = lean_ctor_get(v___x_1424_, 2);
v_manifestFile_x3f_1428_ = lean_ctor_get(v___x_1424_, 3);
v_src_1429_ = lean_ctor_get(v___x_1424_, 4);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1431_ = v___x_1424_;
v_isShared_1432_ = v_isSharedCheck_1452_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_src_1429_);
lean_inc(v_manifestFile_x3f_1428_);
lean_inc(v_configFile_1427_);
lean_inc(v_scope_1426_);
lean_inc(v_name_1425_);
lean_dec(v___x_1424_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1452_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
uint8_t v___x_1433_; 
v___x_1433_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_name_1425_, v___y_1410_);
if (v___x_1433_ == 0)
{
uint8_t v___x_1434_; 
v___x_1434_ = 1;
if (lean_obj_tag(v_src_1429_) == 0)
{
lean_object* v_dir_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1447_; 
v_dir_1435_ = lean_ctor_get(v_src_1429_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v_src_1429_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1437_ = v_src_1429_;
v_isShared_1438_ = v_isSharedCheck_1447_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_dir_1435_);
lean_dec(v_src_1429_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1447_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v_relPkgDir_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
v_relPkgDir_1439_ = lean_ctor_get(v_dep_1405_, 1);
lean_inc_ref(v_relPkgDir_1439_);
v___x_1440_ = l_Lake_joinRelative(v_relPkgDir_1439_, v_dir_1435_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1440_);
v___x_1442_ = v___x_1437_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v___x_1440_);
v___x_1442_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
lean_object* v___x_1444_; 
lean_inc(v_name_1425_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 4, v___x_1442_);
v___x_1444_ = v___x_1431_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_name_1425_);
lean_ctor_set(v_reuseFailAlloc_1445_, 1, v_scope_1426_);
lean_ctor_set(v_reuseFailAlloc_1445_, 2, v_configFile_1427_);
lean_ctor_set(v_reuseFailAlloc_1445_, 3, v_manifestFile_x3f_1428_);
lean_ctor_set(v_reuseFailAlloc_1445_, 4, v___x_1442_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
lean_ctor_set_uint8(v___x_1444_, sizeof(void*)*5, v___x_1434_);
v___y_1419_ = v___x_1444_;
v_name_1420_ = v_name_1425_;
goto v___jp_1418_;
}
}
}
}
else
{
lean_object* v___x_1449_; 
lean_inc(v_name_1425_);
if (v_isShared_1432_ == 0)
{
v___x_1449_ = v___x_1431_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_name_1425_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v_scope_1426_);
lean_ctor_set(v_reuseFailAlloc_1450_, 2, v_configFile_1427_);
lean_ctor_set(v_reuseFailAlloc_1450_, 3, v_manifestFile_x3f_1428_);
lean_ctor_set(v_reuseFailAlloc_1450_, 4, v_src_1429_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
lean_ctor_set_uint8(v___x_1449_, sizeof(void*)*5, v___x_1434_);
v___y_1419_ = v___x_1449_;
v_name_1420_ = v_name_1425_;
goto v___jp_1418_;
}
}
}
else
{
lean_object* v___x_1451_; 
lean_del_object(v___x_1431_);
lean_dec_ref(v_src_1429_);
lean_dec(v_manifestFile_x3f_1428_);
lean_dec_ref(v_configFile_1427_);
lean_dec_ref(v_scope_1426_);
lean_dec(v_name_1425_);
v___x_1451_ = lean_box(0);
v_fst_1413_ = v___x_1451_;
v_snd_1414_ = v___y_1410_;
goto v___jp_1412_;
}
}
}
else
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
lean_dec_ref(v_dep_1405_);
v___x_1453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1453_, 0, v_b_1409_);
lean_ctor_set(v___x_1453_, 1, v___y_1410_);
v___x_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
return v___x_1454_;
}
v___jp_1412_:
{
size_t v___x_1415_; size_t v___x_1416_; 
v___x_1415_ = ((size_t)1ULL);
v___x_1416_ = lean_usize_add(v_i_1407_, v___x_1415_);
v_i_1407_ = v___x_1416_;
v_b_1409_ = v_fst_1413_;
v___y_1410_ = v_snd_1414_;
goto _start;
}
v___jp_1418_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1421_ = lean_box(0);
v___x_1422_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1420_, v___y_1419_, v___y_1410_);
v_fst_1413_ = v___x_1421_;
v_snd_1414_ = v___x_1422_;
goto v___jp_1412_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg___boxed(lean_object* v_dep_1455_, lean_object* v_as_1456_, lean_object* v_i_1457_, lean_object* v_stop_1458_, lean_object* v_b_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
size_t v_i_boxed_1462_; size_t v_stop_boxed_1463_; lean_object* v_res_1464_; 
v_i_boxed_1462_ = lean_unbox_usize(v_i_1457_);
lean_dec(v_i_1457_);
v_stop_boxed_1463_ = lean_unbox_usize(v_stop_1458_);
lean_dec(v_stop_1458_);
v_res_1464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1455_, v_as_1456_, v_i_boxed_1462_, v_stop_boxed_1463_, v_b_1459_, v___y_1460_);
lean_dec_ref(v_as_1456_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(lean_object* v_dep_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_manifestEntry_1471_; lean_object* v_pkgDir_1472_; lean_object* v_name_1473_; lean_object* v_manifestFile_x3f_1474_; lean_object* v___y_1476_; lean_object* v_fst_1477_; lean_object* v_snd_1478_; lean_object* v___y_1535_; lean_object* v___y_1536_; lean_object* v___y_1537_; lean_object* v_val_1538_; lean_object* v___y_1566_; 
v_manifestEntry_1471_ = lean_ctor_get(v_dep_1467_, 4);
v_pkgDir_1472_ = lean_ctor_get(v_dep_1467_, 0);
v_name_1473_ = lean_ctor_get(v_manifestEntry_1471_, 0);
v_manifestFile_x3f_1474_ = lean_ctor_get(v_manifestEntry_1471_, 3);
if (lean_obj_tag(v_manifestFile_x3f_1474_) == 0)
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = l_Lake_defaultManifestFile;
lean_inc_ref(v_pkgDir_1472_);
v___x_1587_ = l_Lake_joinRelative(v_pkgDir_1472_, v___x_1586_);
v___y_1566_ = v___x_1587_;
goto v___jp_1565_;
}
else
{
lean_object* v_val_1588_; lean_object* v___x_1589_; 
v_val_1588_ = lean_ctor_get(v_manifestFile_x3f_1474_, 0);
lean_inc(v_val_1588_);
lean_inc_ref(v_pkgDir_1472_);
v___x_1589_ = l_Lake_joinRelative(v_pkgDir_1472_, v_val_1588_);
v___y_1566_ = v___x_1589_;
goto v___jp_1565_;
}
v___jp_1475_:
{
if (lean_obj_tag(v_fst_1477_) == 0)
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1508_; 
lean_inc(v_name_1473_);
lean_dec_ref(v_dep_1467_);
v_a_1479_ = lean_ctor_get(v_fst_1477_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v_fst_1477_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1481_ = v_fst_1477_;
v_isShared_1482_ = v_isSharedCheck_1508_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v_fst_1477_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1508_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
if (lean_obj_tag(v_a_1479_) == 11)
{
uint8_t v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; uint8_t v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1493_; 
lean_dec_ref(v_a_1479_);
v___x_1483_ = 0;
v___x_1484_ = l_Lean_Name_toString(v_name_1473_, v___x_1483_);
v___x_1485_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0));
v___x_1486_ = lean_string_append(v___x_1484_, v___x_1485_);
v___x_1487_ = lean_string_append(v___x_1486_, v___y_1476_);
lean_dec_ref(v___y_1476_);
v___x_1488_ = 2;
v___x_1489_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1489_, 0, v___x_1487_);
lean_ctor_set_uint8(v___x_1489_, sizeof(void*)*1, v___x_1488_);
lean_inc_ref(v_a_1469_);
v___x_1490_ = lean_apply_2(v_a_1469_, v___x_1489_, lean_box(0));
v___x_1491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1490_);
lean_ctor_set(v___x_1491_, 1, v_snd_1478_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 0, v___x_1491_);
v___x_1493_ = v___x_1481_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v___x_1491_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
else
{
uint8_t v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; uint8_t v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1506_; 
lean_dec_ref(v___y_1476_);
v___x_1495_ = 0;
v___x_1496_ = l_Lean_Name_toString(v_name_1473_, v___x_1495_);
v___x_1497_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1));
v___x_1498_ = lean_string_append(v___x_1496_, v___x_1497_);
v___x_1499_ = lean_io_error_to_string(v_a_1479_);
v___x_1500_ = lean_string_append(v___x_1498_, v___x_1499_);
lean_dec_ref(v___x_1499_);
v___x_1501_ = 2;
v___x_1502_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1502_, 0, v___x_1500_);
lean_ctor_set_uint8(v___x_1502_, sizeof(void*)*1, v___x_1501_);
lean_inc_ref(v_a_1469_);
v___x_1503_ = lean_apply_2(v_a_1469_, v___x_1502_, lean_box(0));
v___x_1504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1503_);
lean_ctor_set(v___x_1504_, 1, v_snd_1478_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 0, v___x_1504_);
v___x_1506_ = v___x_1481_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v___x_1504_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
}
else
{
lean_object* v_a_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1533_; 
lean_dec_ref(v___y_1476_);
v_a_1509_ = lean_ctor_get(v_fst_1477_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v_fst_1477_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1511_ = v_fst_1477_;
v_isShared_1512_ = v_isSharedCheck_1533_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_a_1509_);
lean_dec(v_fst_1477_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1533_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v_packages_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; uint8_t v___x_1517_; 
v_packages_1513_ = lean_ctor_get(v_a_1509_, 3);
lean_inc_ref(v_packages_1513_);
lean_dec(v_a_1509_);
v___x_1514_ = lean_unsigned_to_nat(0u);
v___x_1515_ = lean_array_get_size(v_packages_1513_);
v___x_1516_ = lean_box(0);
v___x_1517_ = lean_nat_dec_lt(v___x_1514_, v___x_1515_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1518_; lean_object* v___x_1520_; 
lean_dec_ref(v_packages_1513_);
lean_dec_ref(v_dep_1467_);
v___x_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1516_);
lean_ctor_set(v___x_1518_, 1, v_snd_1478_);
if (v_isShared_1512_ == 0)
{
lean_ctor_set_tag(v___x_1511_, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1518_);
v___x_1520_ = v___x_1511_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1518_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
else
{
uint8_t v___x_1522_; 
v___x_1522_ = lean_nat_dec_le(v___x_1515_, v___x_1515_);
if (v___x_1522_ == 0)
{
if (v___x_1517_ == 0)
{
lean_object* v___x_1523_; lean_object* v___x_1525_; 
lean_dec_ref(v_packages_1513_);
lean_dec_ref(v_dep_1467_);
v___x_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1516_);
lean_ctor_set(v___x_1523_, 1, v_snd_1478_);
if (v_isShared_1512_ == 0)
{
lean_ctor_set_tag(v___x_1511_, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1523_);
v___x_1525_ = v___x_1511_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
else
{
size_t v___x_1527_; size_t v___x_1528_; lean_object* v___x_1529_; 
lean_del_object(v___x_1511_);
v___x_1527_ = ((size_t)0ULL);
v___x_1528_ = lean_usize_of_nat(v___x_1515_);
v___x_1529_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1467_, v_packages_1513_, v___x_1527_, v___x_1528_, v___x_1516_, v_snd_1478_);
lean_dec_ref(v_packages_1513_);
return v___x_1529_;
}
}
else
{
size_t v___x_1530_; size_t v___x_1531_; lean_object* v___x_1532_; 
lean_del_object(v___x_1511_);
v___x_1530_ = ((size_t)0ULL);
v___x_1531_ = lean_usize_of_nat(v___x_1515_);
v___x_1532_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1467_, v_packages_1513_, v___x_1530_, v___x_1531_, v___x_1516_, v_snd_1478_);
lean_dec_ref(v_packages_1513_);
return v___x_1532_;
}
}
}
}
}
v___jp_1534_:
{
lean_object* v___x_1539_; uint8_t v___x_1540_; 
v___x_1539_ = lean_array_get_size(v___y_1537_);
v___x_1540_ = lean_nat_dec_lt(v___y_1535_, v___x_1539_);
if (v___x_1540_ == 0)
{
v___y_1476_ = v___y_1536_;
v_fst_1477_ = v_val_1538_;
v_snd_1478_ = v_a_1468_;
goto v___jp_1475_;
}
else
{
lean_object* v___x_1541_; uint8_t v___x_1542_; 
v___x_1541_ = lean_box(0);
v___x_1542_ = lean_nat_dec_le(v___x_1539_, v___x_1539_);
if (v___x_1542_ == 0)
{
if (v___x_1540_ == 0)
{
v___y_1476_ = v___y_1536_;
v_fst_1477_ = v_val_1538_;
v_snd_1478_ = v_a_1468_;
goto v___jp_1475_;
}
else
{
size_t v___x_1543_; size_t v___x_1544_; lean_object* v___x_1545_; 
v___x_1543_ = ((size_t)0ULL);
v___x_1544_ = lean_usize_of_nat(v___x_1539_);
v___x_1545_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___y_1537_, v___x_1543_, v___x_1544_, v___x_1541_, v_a_1469_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_dec_ref(v___x_1545_);
v___y_1476_ = v___y_1536_;
v_fst_1477_ = v_val_1538_;
v_snd_1478_ = v_a_1468_;
goto v___jp_1475_;
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_dec_ref(v_val_1538_);
lean_dec_ref(v___y_1536_);
lean_dec(v_a_1468_);
lean_dec_ref(v_dep_1467_);
v_a_1546_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1545_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1545_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
}
else
{
size_t v___x_1554_; size_t v___x_1555_; lean_object* v___x_1556_; 
v___x_1554_ = ((size_t)0ULL);
v___x_1555_ = lean_usize_of_nat(v___x_1539_);
v___x_1556_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___y_1537_, v___x_1554_, v___x_1555_, v___x_1541_, v_a_1469_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_dec_ref(v___x_1556_);
v___y_1476_ = v___y_1536_;
v_fst_1477_ = v_val_1538_;
v_snd_1478_ = v_a_1468_;
goto v___jp_1475_;
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
lean_dec_ref(v_val_1538_);
lean_dec_ref(v___y_1536_);
lean_dec(v_a_1468_);
lean_dec_ref(v_dep_1467_);
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1556_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1559_ = v___x_1556_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1556_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1557_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
}
}
v___jp_1565_:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1567_ = lean_unsigned_to_nat(0u);
v___x_1568_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___y_1566_);
v___x_1569_ = l_Lake_Manifest_load(v___y_1566_);
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
v_a_1570_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1569_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1569_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
lean_ctor_set_tag(v___x_1572_, 1);
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
v___y_1535_ = v___x_1567_;
v___y_1536_ = v___y_1566_;
v___y_1537_ = v___x_1568_;
v_val_1538_ = v___x_1575_;
goto v___jp_1534_;
}
}
}
else
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1585_; 
v_a_1578_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___x_1569_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1569_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
lean_ctor_set_tag(v___x_1580_, 0);
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
v___y_1535_ = v___x_1567_;
v___y_1536_ = v___y_1566_;
v___y_1537_ = v___x_1568_;
v_val_1538_ = v___x_1583_;
goto v___jp_1534_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___boxed(lean_object* v_dep_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_dep_1590_, v_a_1591_, v_a_1592_);
lean_dec_ref(v_a_1592_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(lean_object* v_dep_1595_, lean_object* v_as_1596_, size_t v_i_1597_, size_t v_stop_1598_, lean_object* v_b_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1595_, v_as_1596_, v_i_1597_, v_stop_1598_, v_b_1599_, v___y_1600_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___boxed(lean_object* v_dep_1604_, lean_object* v_as_1605_, lean_object* v_i_1606_, lean_object* v_stop_1607_, lean_object* v_b_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
size_t v_i_boxed_1612_; size_t v_stop_boxed_1613_; lean_object* v_res_1614_; 
v_i_boxed_1612_ = lean_unbox_usize(v_i_1606_);
lean_dec(v_i_1606_);
v_stop_boxed_1613_ = lean_unbox_usize(v_stop_1607_);
lean_dec(v_stop_1607_);
v_res_1614_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(v_dep_1604_, v_as_1605_, v_i_boxed_1612_, v_stop_boxed_1613_, v_b_1608_, v___y_1609_, v___y_1610_);
lean_dec_ref(v___y_1610_);
lean_dec_ref(v_as_1605_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(lean_object* v_ws_1616_, lean_object* v_pkg_1617_, lean_object* v_dep_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_){
_start:
{
uint8_t v___y_1623_; lean_object* v___y_1624_; lean_object* v_name_1654_; lean_object* v___x_1655_; 
v_name_1654_ = lean_ctor_get(v_dep_1618_, 0);
v___x_1655_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_1619_, v_name_1654_);
if (lean_obj_tag(v___x_1655_) == 1)
{
lean_object* v_val_1656_; lean_object* v_lakeEnv_1657_; lean_object* v_packages_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v_config_1661_; lean_object* v_dir_1662_; lean_object* v_toWorkspaceConfig_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
lean_dec_ref(v_dep_1618_);
lean_dec_ref(v_pkg_1617_);
v_val_1656_ = lean_ctor_get(v___x_1655_, 0);
lean_inc(v_val_1656_);
lean_dec_ref(v___x_1655_);
v_lakeEnv_1657_ = lean_ctor_get(v_ws_1616_, 0);
lean_inc_ref(v_lakeEnv_1657_);
v_packages_1658_ = lean_ctor_get(v_ws_1616_, 4);
lean_inc_ref(v_packages_1658_);
lean_dec_ref(v_ws_1616_);
v___x_1659_ = lean_unsigned_to_nat(0u);
v___x_1660_ = lean_array_fget(v_packages_1658_, v___x_1659_);
lean_dec_ref(v_packages_1658_);
v_config_1661_ = lean_ctor_get(v___x_1660_, 6);
lean_inc_ref(v_config_1661_);
v_dir_1662_ = lean_ctor_get(v___x_1660_, 4);
lean_inc_ref(v_dir_1662_);
lean_dec(v___x_1660_);
v_toWorkspaceConfig_1663_ = lean_ctor_get(v_config_1661_, 0);
lean_inc_ref(v_toWorkspaceConfig_1663_);
lean_dec_ref(v_config_1661_);
v___x_1664_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1663_);
v___x_1665_ = l_Lake_PackageEntry_materialize(v_val_1656_, v_lakeEnv_1657_, v_dir_1662_, v___x_1664_, v_a_1620_);
lean_dec_ref(v_lakeEnv_1657_);
if (lean_obj_tag(v___x_1665_) == 0)
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1674_; 
v_a_1666_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1668_ = v___x_1665_;
v_isShared_1669_ = v_isSharedCheck_1674_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1665_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1674_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1670_; lean_object* v___x_1672_; 
v___x_1670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1670_, 0, v_a_1666_);
lean_ctor_set(v___x_1670_, 1, v_a_1619_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set(v___x_1668_, 0, v___x_1670_);
v___x_1672_ = v___x_1668_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v___x_1670_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_dec(v_a_1619_);
v_a_1675_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1665_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1665_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
else
{
lean_object* v_wsIdx_1683_; lean_object* v_relDir_1684_; uint8_t v___y_1686_; lean_object* v___x_1690_; uint8_t v___x_1691_; 
lean_dec(v___x_1655_);
v_wsIdx_1683_ = lean_ctor_get(v_pkg_1617_, 0);
lean_inc(v_wsIdx_1683_);
v_relDir_1684_ = lean_ctor_get(v_pkg_1617_, 5);
lean_inc_ref(v_relDir_1684_);
lean_dec_ref(v_pkg_1617_);
v___x_1690_ = lean_unsigned_to_nat(0u);
v___x_1691_ = lean_nat_dec_eq(v_wsIdx_1683_, v___x_1690_);
lean_dec(v_wsIdx_1683_);
if (v___x_1691_ == 0)
{
uint8_t v___x_1692_; 
v___x_1692_ = 1;
v___y_1686_ = v___x_1692_;
goto v___jp_1685_;
}
else
{
uint8_t v___x_1693_; 
v___x_1693_ = 0;
v___y_1686_ = v___x_1693_;
goto v___jp_1685_;
}
v___jp_1685_:
{
lean_object* v___x_1687_; uint8_t v___x_1688_; 
v___x_1687_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0));
v___x_1688_ = lean_string_dec_eq(v_relDir_1684_, v___x_1687_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; 
v___x_1689_ = l_Lake_joinRelative(v_relDir_1684_, v___x_1687_);
v___y_1623_ = v___y_1686_;
v___y_1624_ = v___x_1689_;
goto v___jp_1622_;
}
else
{
v___y_1623_ = v___y_1686_;
v___y_1624_ = v_relDir_1684_;
goto v___jp_1622_;
}
}
}
v___jp_1622_:
{
lean_object* v_lakeEnv_1625_; lean_object* v_packages_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v_config_1629_; lean_object* v_dir_1630_; lean_object* v_toWorkspaceConfig_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
v_lakeEnv_1625_ = lean_ctor_get(v_ws_1616_, 0);
lean_inc_ref(v_lakeEnv_1625_);
v_packages_1626_ = lean_ctor_get(v_ws_1616_, 4);
lean_inc_ref(v_packages_1626_);
lean_dec_ref(v_ws_1616_);
v___x_1627_ = lean_unsigned_to_nat(0u);
v___x_1628_ = lean_array_fget(v_packages_1626_, v___x_1627_);
lean_dec_ref(v_packages_1626_);
v_config_1629_ = lean_ctor_get(v___x_1628_, 6);
lean_inc_ref(v_config_1629_);
v_dir_1630_ = lean_ctor_get(v___x_1628_, 4);
lean_inc_ref(v_dir_1630_);
lean_dec(v___x_1628_);
v_toWorkspaceConfig_1631_ = lean_ctor_get(v_config_1629_, 0);
lean_inc_ref(v_toWorkspaceConfig_1631_);
lean_dec_ref(v_config_1629_);
v___x_1632_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1631_);
v___x_1633_ = l_Lake_Dependency_materialize(v_dep_1618_, v___y_1623_, v_lakeEnv_1625_, v_dir_1630_, v___x_1632_, v___y_1624_, v_a_1620_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1645_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1636_ = v___x_1633_;
v_isShared_1637_ = v_isSharedCheck_1645_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1633_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1645_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v_manifestEntry_1638_; lean_object* v_name_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1643_; 
v_manifestEntry_1638_ = lean_ctor_get(v_a_1634_, 4);
v_name_1639_ = lean_ctor_get(v_manifestEntry_1638_, 0);
lean_inc_ref(v_manifestEntry_1638_);
lean_inc(v_name_1639_);
v___x_1640_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1639_, v_manifestEntry_1638_, v_a_1619_);
v___x_1641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1641_, 0, v_a_1634_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
if (v_isShared_1637_ == 0)
{
lean_ctor_set(v___x_1636_, 0, v___x_1641_);
v___x_1643_ = v___x_1636_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
else
{
lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1653_; 
lean_dec(v_a_1619_);
v_a_1646_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1648_ = v___x_1633_;
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v___x_1633_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v_a_1646_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___boxed(lean_object* v_ws_1694_, lean_object* v_pkg_1695_, lean_object* v_dep_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_1694_, v_pkg_1695_, v_dep_1696_, v_a_1697_, v_a_1698_);
lean_dec_ref(v_a_1698_);
return v_res_1700_;
}
}
static uint32_t _init_l___private_Lake_Load_Resolve_0__Lake_restartCode(void){
_start:
{
uint32_t v___x_1701_; 
v___x_1701_ = 4;
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(lean_object* v_src_1702_, lean_object* v_tc_x3f_1703_, uint8_t v_fixed_1704_, lean_object* v_self_1705_){
_start:
{
lean_object* v_clashes_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
v_clashes_1706_ = lean_ctor_get(v_self_1705_, 2);
v_isSharedCheck_1713_ = !lean_is_exclusive(v_self_1705_);
if (v_isSharedCheck_1713_ == 0)
{
lean_object* v_unused_1714_; lean_object* v_unused_1715_; 
v_unused_1714_ = lean_ctor_get(v_self_1705_, 1);
lean_dec(v_unused_1714_);
v_unused_1715_ = lean_ctor_get(v_self_1705_, 0);
lean_dec(v_unused_1715_);
v___x_1708_ = v_self_1705_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_clashes_1706_);
lean_dec(v_self_1705_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 1, v_tc_x3f_1703_);
lean_ctor_set(v___x_1708_, 0, v_src_1702_);
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_src_1702_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v_tc_x3f_1703_);
lean_ctor_set(v_reuseFailAlloc_1712_, 2, v_clashes_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
lean_ctor_set_uint8(v___x_1711_, sizeof(void*)*3, v_fixed_1704_);
return v___x_1711_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace___boxed(lean_object* v_src_1716_, lean_object* v_tc_x3f_1717_, lean_object* v_fixed_1718_, lean_object* v_self_1719_){
_start:
{
uint8_t v_fixed_boxed_1720_; lean_object* v_res_1721_; 
v_fixed_boxed_1720_ = lean_unbox(v_fixed_1718_);
v_res_1721_ = l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(v_src_1716_, v_tc_x3f_1717_, v_fixed_boxed_1720_, v_self_1719_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(lean_object* v_src_1722_, lean_object* v_ver_1723_, uint8_t v_fixed_1724_, lean_object* v_self_1725_){
_start:
{
lean_object* v_src_1726_; lean_object* v_tc_x3f_1727_; lean_object* v_clashes_1728_; uint8_t v_fixed_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1738_; 
v_src_1726_ = lean_ctor_get(v_self_1725_, 0);
v_tc_x3f_1727_ = lean_ctor_get(v_self_1725_, 1);
v_clashes_1728_ = lean_ctor_get(v_self_1725_, 2);
v_fixed_1729_ = lean_ctor_get_uint8(v_self_1725_, sizeof(void*)*3);
v_isSharedCheck_1738_ = !lean_is_exclusive(v_self_1725_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1731_ = v_self_1725_;
v_isShared_1732_ = v_isSharedCheck_1738_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_clashes_1728_);
lean_inc(v_tc_x3f_1727_);
lean_inc(v_src_1726_);
lean_dec(v_self_1725_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1738_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1736_; 
v___x_1733_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1733_, 0, v_src_1722_);
lean_ctor_set(v___x_1733_, 1, v_ver_1723_);
lean_ctor_set_uint8(v___x_1733_, sizeof(void*)*2, v_fixed_1724_);
v___x_1734_ = lean_array_push(v_clashes_1728_, v___x_1733_);
if (v_isShared_1732_ == 0)
{
lean_ctor_set(v___x_1731_, 2, v___x_1734_);
v___x_1736_ = v___x_1731_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_src_1726_);
lean_ctor_set(v_reuseFailAlloc_1737_, 1, v_tc_x3f_1727_);
lean_ctor_set(v_reuseFailAlloc_1737_, 2, v___x_1734_);
lean_ctor_set_uint8(v_reuseFailAlloc_1737_, sizeof(void*)*3, v_fixed_1729_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash___boxed(lean_object* v_src_1739_, lean_object* v_ver_1740_, lean_object* v_fixed_1741_, lean_object* v_self_1742_){
_start:
{
uint8_t v_fixed_boxed_1743_; lean_object* v_res_1744_; 
v_fixed_boxed_1743_ = lean_unbox(v_fixed_1741_);
v_res_1744_ = l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(v_src_1739_, v_ver_1740_, v_fixed_boxed_1743_, v_self_1742_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(lean_object* v_as_1749_, size_t v_i_1750_, size_t v_stop_1751_, lean_object* v_b_1752_){
_start:
{
uint8_t v___x_1753_; 
v___x_1753_ = lean_usize_dec_eq(v_i_1750_, v_stop_1751_);
if (v___x_1753_ == 0)
{
lean_object* v___x_1754_; lean_object* v_src_1755_; lean_object* v_ver_1756_; uint8_t v_fixed_1757_; lean_object* v___y_1759_; lean_object* v___y_1760_; lean_object* v___y_1761_; lean_object* v___y_1773_; 
v___x_1754_ = lean_array_uget_borrowed(v_as_1749_, v_i_1750_);
v_src_1755_ = lean_ctor_get(v___x_1754_, 0);
v_ver_1756_ = lean_ctor_get(v___x_1754_, 1);
v_fixed_1757_ = lean_ctor_get_uint8(v___x_1754_, sizeof(void*)*2);
if (v_fixed_1757_ == 0)
{
lean_object* v___x_1777_; 
v___x_1777_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_1773_ = v___x_1777_;
goto v___jp_1772_;
}
else
{
lean_object* v___x_1778_; 
v___x_1778_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_1773_ = v___x_1778_;
goto v___jp_1772_;
}
v___jp_1758_:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; uint8_t v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; size_t v___x_1769_; size_t v___x_1770_; 
v___x_1762_ = lean_string_append(v___y_1759_, v___y_1761_);
lean_dec_ref(v___y_1761_);
v___x_1763_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_1764_ = lean_string_append(v___x_1762_, v___x_1763_);
v___x_1765_ = 1;
lean_inc(v_src_1755_);
v___x_1766_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_src_1755_, v___x_1765_);
v___x_1767_ = lean_string_append(v___x_1764_, v___x_1766_);
lean_dec_ref(v___x_1766_);
v___x_1768_ = lean_string_append(v___x_1767_, v___y_1760_);
v___x_1769_ = ((size_t)1ULL);
v___x_1770_ = lean_usize_add(v_i_1750_, v___x_1769_);
v_i_1750_ = v___x_1770_;
v_b_1752_ = v___x_1768_;
goto _start;
}
v___jp_1772_:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v_toString_1776_; 
v___x_1774_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1));
v___x_1775_ = lean_string_append(v_b_1752_, v___x_1774_);
v_toString_1776_ = lean_ctor_get(v_ver_1756_, 0);
lean_inc_ref(v_toString_1776_);
v___y_1759_ = v___x_1775_;
v___y_1760_ = v___y_1773_;
v___y_1761_ = v_toString_1776_;
goto v___jp_1758_;
}
}
else
{
return v_b_1752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___boxed(lean_object* v_as_1779_, lean_object* v_i_1780_, lean_object* v_stop_1781_, lean_object* v_b_1782_){
_start:
{
size_t v_i_boxed_1783_; size_t v_stop_boxed_1784_; lean_object* v_res_1785_; 
v_i_boxed_1783_ = lean_unbox_usize(v_i_1780_);
lean_dec(v_i_1780_);
v_stop_boxed_1784_ = lean_unbox_usize(v_stop_1781_);
lean_dec(v_stop_1781_);
v_res_1785_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(v_as_1779_, v_i_boxed_1783_, v_stop_boxed_1784_, v_b_1782_);
lean_dec_ref(v_as_1779_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(lean_object* v_as_1786_, size_t v_i_1787_, size_t v_stop_1788_, lean_object* v_b_1789_){
_start:
{
uint8_t v___x_1790_; 
v___x_1790_ = lean_usize_dec_eq(v_i_1787_, v_stop_1788_);
if (v___x_1790_ == 0)
{
lean_object* v___x_1791_; lean_object* v_src_1792_; lean_object* v_ver_1793_; uint8_t v_fixed_1794_; lean_object* v___y_1796_; lean_object* v___y_1797_; lean_object* v___y_1798_; lean_object* v___y_1810_; 
v___x_1791_ = lean_array_uget_borrowed(v_as_1786_, v_i_1787_);
v_src_1792_ = lean_ctor_get(v___x_1791_, 0);
v_ver_1793_ = lean_ctor_get(v___x_1791_, 1);
v_fixed_1794_ = lean_ctor_get_uint8(v___x_1791_, sizeof(void*)*2);
if (v_fixed_1794_ == 0)
{
lean_object* v___x_1814_; 
v___x_1814_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_1810_ = v___x_1814_;
goto v___jp_1809_;
}
else
{
lean_object* v___x_1815_; 
v___x_1815_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_1810_ = v___x_1815_;
goto v___jp_1809_;
}
v___jp_1795_:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; uint8_t v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; size_t v___x_1806_; size_t v___x_1807_; lean_object* v___x_1808_; 
v___x_1799_ = lean_string_append(v___y_1796_, v___y_1798_);
lean_dec_ref(v___y_1798_);
v___x_1800_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_1801_ = lean_string_append(v___x_1799_, v___x_1800_);
v___x_1802_ = 1;
lean_inc(v_src_1792_);
v___x_1803_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_src_1792_, v___x_1802_);
v___x_1804_ = lean_string_append(v___x_1801_, v___x_1803_);
lean_dec_ref(v___x_1803_);
v___x_1805_ = lean_string_append(v___x_1804_, v___y_1797_);
v___x_1806_ = ((size_t)1ULL);
v___x_1807_ = lean_usize_add(v_i_1787_, v___x_1806_);
v___x_1808_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(v_as_1786_, v___x_1807_, v_stop_1788_, v___x_1805_);
return v___x_1808_;
}
v___jp_1809_:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v_toString_1813_; 
v___x_1811_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1));
v___x_1812_ = lean_string_append(v_b_1789_, v___x_1811_);
v_toString_1813_ = lean_ctor_get(v_ver_1793_, 0);
lean_inc_ref(v_toString_1813_);
v___y_1796_ = v___x_1812_;
v___y_1797_ = v___y_1810_;
v___y_1798_ = v_toString_1813_;
goto v___jp_1795_;
}
}
else
{
return v_b_1789_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0___boxed(lean_object* v_as_1816_, lean_object* v_i_1817_, lean_object* v_stop_1818_, lean_object* v_b_1819_){
_start:
{
size_t v_i_boxed_1820_; size_t v_stop_boxed_1821_; lean_object* v_res_1822_; 
v_i_boxed_1820_ = lean_unbox_usize(v_i_1817_);
lean_dec(v_i_1817_);
v_stop_boxed_1821_ = lean_unbox_usize(v_stop_1818_);
lean_dec(v_stop_1818_);
v_res_1822_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v_as_1816_, v_i_boxed_1820_, v_stop_boxed_1821_, v_b_1819_);
lean_dec_ref(v_as_1816_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(lean_object* v___x_1823_, lean_object* v_as_1824_, size_t v_i_1825_, size_t v_stop_1826_, lean_object* v_b_1827_, lean_object* v___y_1828_){
_start:
{
uint8_t v___x_1830_; 
v___x_1830_ = lean_usize_dec_eq(v_i_1825_, v_stop_1826_);
if (v___x_1830_ == 0)
{
lean_object* v___x_1831_; lean_object* v_relPkgDir_1832_; lean_object* v_manifestEntry_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1831_ = lean_array_uget_borrowed(v_as_1824_, v_i_1825_);
v_relPkgDir_1832_ = lean_ctor_get(v___x_1831_, 1);
v_manifestEntry_1833_ = lean_ctor_get(v___x_1831_, 4);
lean_inc_ref(v_relPkgDir_1832_);
lean_inc_ref(v___x_1823_);
v___x_1834_ = l_Lake_joinRelative(v___x_1823_, v_relPkgDir_1832_);
v___x_1835_ = l_Lake_toolchainFileName;
v___x_1836_ = l_System_FilePath_join(v___x_1834_, v___x_1835_);
v___x_1837_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_1836_);
lean_dec_ref(v___x_1836_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v_a_1840_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref(v___x_1837_);
if (lean_obj_tag(v_a_1838_) == 1)
{
lean_object* v_tc_x3f_1844_; 
v_tc_x3f_1844_ = lean_ctor_get(v_b_1827_, 1);
if (lean_obj_tag(v_tc_x3f_1844_) == 1)
{
lean_object* v_val_1845_; lean_object* v_src_1846_; lean_object* v_clashes_1847_; uint8_t v_fixed_1848_; lean_object* v_val_1849_; uint8_t v___x_1850_; 
v_val_1845_ = lean_ctor_get(v_a_1838_, 0);
v_src_1846_ = lean_ctor_get(v_b_1827_, 0);
v_clashes_1847_ = lean_ctor_get(v_b_1827_, 2);
v_fixed_1848_ = lean_ctor_get_uint8(v_b_1827_, sizeof(void*)*3);
v_val_1849_ = lean_ctor_get(v_tc_x3f_1844_, 0);
v___x_1850_ = l_Lake_MaterializedDep_fixedToolchain(v___x_1831_);
if (v___x_1850_ == 0)
{
uint8_t v___x_1860_; 
v___x_1860_ = l_Lake_ToolchainVer_ble(v_val_1845_, v_val_1849_);
if (v___x_1860_ == 0)
{
lean_inc_ref(v_clashes_1847_);
lean_inc(v_src_1846_);
lean_inc_ref(v_tc_x3f_1844_);
lean_dec_ref(v_b_1827_);
if (v_fixed_1848_ == 0)
{
goto v___jp_1856_;
}
else
{
if (v___x_1850_ == 0)
{
lean_inc(v_val_1845_);
lean_dec_ref(v_a_1838_);
goto v___jp_1851_;
}
else
{
goto v___jp_1856_;
}
}
}
else
{
lean_dec_ref(v_a_1838_);
v_a_1840_ = v_b_1827_;
goto v___jp_1839_;
}
}
else
{
if (v_fixed_1848_ == 0)
{
lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1875_; 
lean_inc_ref(v_clashes_1847_);
lean_inc(v_src_1846_);
lean_inc_ref(v_tc_x3f_1844_);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_b_1827_);
if (v_isSharedCheck_1875_ == 0)
{
lean_object* v_unused_1876_; lean_object* v_unused_1877_; lean_object* v_unused_1878_; 
v_unused_1876_ = lean_ctor_get(v_b_1827_, 2);
lean_dec(v_unused_1876_);
v_unused_1877_ = lean_ctor_get(v_b_1827_, 1);
lean_dec(v_unused_1877_);
v_unused_1878_ = lean_ctor_get(v_b_1827_, 0);
lean_dec(v_unused_1878_);
v___x_1862_ = v_b_1827_;
v_isShared_1863_ = v_isSharedCheck_1875_;
goto v_resetjp_1861_;
}
else
{
lean_dec(v_b_1827_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1875_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
uint8_t v___x_1864_; 
v___x_1864_ = l_Lake_ToolchainVer_ble(v_val_1849_, v_val_1845_);
if (v___x_1864_ == 0)
{
lean_object* v_name_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1869_; 
lean_inc(v_val_1845_);
lean_dec_ref(v_a_1838_);
v_name_1865_ = lean_ctor_get(v_manifestEntry_1833_, 0);
lean_inc(v_name_1865_);
v___x_1866_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1866_, 0, v_name_1865_);
lean_ctor_set(v___x_1866_, 1, v_val_1845_);
lean_ctor_set_uint8(v___x_1866_, sizeof(void*)*2, v___x_1850_);
v___x_1867_ = lean_array_push(v_clashes_1847_, v___x_1866_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 2, v___x_1867_);
v___x_1869_ = v___x_1862_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_src_1846_);
lean_ctor_set(v_reuseFailAlloc_1870_, 1, v_tc_x3f_1844_);
lean_ctor_set(v_reuseFailAlloc_1870_, 2, v___x_1867_);
lean_ctor_set_uint8(v_reuseFailAlloc_1870_, sizeof(void*)*3, v_fixed_1848_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
v_a_1840_ = v___x_1869_;
goto v___jp_1839_;
}
}
else
{
lean_object* v_name_1871_; lean_object* v___x_1873_; 
lean_dec(v_src_1846_);
lean_dec_ref(v_tc_x3f_1844_);
v_name_1871_ = lean_ctor_get(v_manifestEntry_1833_, 0);
lean_inc(v_name_1871_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 1, v_a_1838_);
lean_ctor_set(v___x_1862_, 0, v_name_1871_);
v___x_1873_ = v___x_1862_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_name_1871_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v_a_1838_);
lean_ctor_set(v_reuseFailAlloc_1874_, 2, v_clashes_1847_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
lean_ctor_set_uint8(v___x_1873_, sizeof(void*)*3, v___x_1850_);
v_a_1840_ = v___x_1873_;
goto v___jp_1839_;
}
}
}
}
else
{
uint8_t v___x_1879_; 
lean_inc_n(v_val_1845_, 2);
lean_dec_ref(v_a_1838_);
lean_inc(v_val_1849_);
v___x_1879_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_1849_, v_val_1845_);
if (v___x_1879_ == 0)
{
lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1889_; 
lean_inc_ref(v_clashes_1847_);
lean_inc(v_src_1846_);
lean_inc_ref(v_tc_x3f_1844_);
v_isSharedCheck_1889_ = !lean_is_exclusive(v_b_1827_);
if (v_isSharedCheck_1889_ == 0)
{
lean_object* v_unused_1890_; lean_object* v_unused_1891_; lean_object* v_unused_1892_; 
v_unused_1890_ = lean_ctor_get(v_b_1827_, 2);
lean_dec(v_unused_1890_);
v_unused_1891_ = lean_ctor_get(v_b_1827_, 1);
lean_dec(v_unused_1891_);
v_unused_1892_ = lean_ctor_get(v_b_1827_, 0);
lean_dec(v_unused_1892_);
v___x_1881_ = v_b_1827_;
v_isShared_1882_ = v_isSharedCheck_1889_;
goto v_resetjp_1880_;
}
else
{
lean_dec(v_b_1827_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1889_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v_name_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1887_; 
v_name_1883_ = lean_ctor_get(v_manifestEntry_1833_, 0);
lean_inc(v_name_1883_);
v___x_1884_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1884_, 0, v_name_1883_);
lean_ctor_set(v___x_1884_, 1, v_val_1845_);
lean_ctor_set_uint8(v___x_1884_, sizeof(void*)*2, v___x_1850_);
v___x_1885_ = lean_array_push(v_clashes_1847_, v___x_1884_);
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 2, v___x_1885_);
v___x_1887_ = v___x_1881_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_src_1846_);
lean_ctor_set(v_reuseFailAlloc_1888_, 1, v_tc_x3f_1844_);
lean_ctor_set(v_reuseFailAlloc_1888_, 2, v___x_1885_);
lean_ctor_set_uint8(v_reuseFailAlloc_1888_, sizeof(void*)*3, v_fixed_1848_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
v_a_1840_ = v___x_1887_;
goto v___jp_1839_;
}
}
}
else
{
lean_dec(v_val_1845_);
v_a_1840_ = v_b_1827_;
goto v___jp_1839_;
}
}
}
v___jp_1851_:
{
lean_object* v_name_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v_name_1852_ = lean_ctor_get(v_manifestEntry_1833_, 0);
lean_inc(v_name_1852_);
v___x_1853_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1853_, 0, v_name_1852_);
lean_ctor_set(v___x_1853_, 1, v_val_1845_);
lean_ctor_set_uint8(v___x_1853_, sizeof(void*)*2, v___x_1850_);
v___x_1854_ = lean_array_push(v_clashes_1847_, v___x_1853_);
v___x_1855_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1855_, 0, v_src_1846_);
lean_ctor_set(v___x_1855_, 1, v_tc_x3f_1844_);
lean_ctor_set(v___x_1855_, 2, v___x_1854_);
lean_ctor_set_uint8(v___x_1855_, sizeof(void*)*3, v_fixed_1848_);
v_a_1840_ = v___x_1855_;
goto v___jp_1839_;
}
v___jp_1856_:
{
uint8_t v___x_1857_; 
v___x_1857_ = l_Lake_ToolchainVer_blt(v_val_1849_, v_val_1845_);
if (v___x_1857_ == 0)
{
lean_inc(v_val_1845_);
lean_dec_ref(v_a_1838_);
goto v___jp_1851_;
}
else
{
lean_object* v_name_1858_; lean_object* v___x_1859_; 
lean_dec(v_src_1846_);
lean_dec_ref(v_tc_x3f_1844_);
v_name_1858_ = lean_ctor_get(v_manifestEntry_1833_, 0);
lean_inc(v_name_1858_);
v___x_1859_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1859_, 0, v_name_1858_);
lean_ctor_set(v___x_1859_, 1, v_a_1838_);
lean_ctor_set(v___x_1859_, 2, v_clashes_1847_);
lean_ctor_set_uint8(v___x_1859_, sizeof(void*)*3, v___x_1850_);
v_a_1840_ = v___x_1859_;
goto v___jp_1839_;
}
}
}
else
{
lean_object* v_clashes_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1902_; 
v_clashes_1893_ = lean_ctor_get(v_b_1827_, 2);
v_isSharedCheck_1902_ = !lean_is_exclusive(v_b_1827_);
if (v_isSharedCheck_1902_ == 0)
{
lean_object* v_unused_1903_; lean_object* v_unused_1904_; 
v_unused_1903_ = lean_ctor_get(v_b_1827_, 1);
lean_dec(v_unused_1903_);
v_unused_1904_ = lean_ctor_get(v_b_1827_, 0);
lean_dec(v_unused_1904_);
v___x_1895_ = v_b_1827_;
v_isShared_1896_ = v_isSharedCheck_1902_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_clashes_1893_);
lean_dec(v_b_1827_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1902_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v_name_1897_; uint8_t v___x_1898_; lean_object* v___x_1900_; 
v_name_1897_ = lean_ctor_get(v_manifestEntry_1833_, 0);
v___x_1898_ = l_Lake_MaterializedDep_fixedToolchain(v___x_1831_);
lean_inc(v_name_1897_);
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 1, v_a_1838_);
lean_ctor_set(v___x_1895_, 0, v_name_1897_);
v___x_1900_ = v___x_1895_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_name_1897_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v_a_1838_);
lean_ctor_set(v_reuseFailAlloc_1901_, 2, v_clashes_1893_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_ctor_set_uint8(v___x_1900_, sizeof(void*)*3, v___x_1898_);
v_a_1840_ = v___x_1900_;
goto v___jp_1839_;
}
}
}
}
else
{
lean_dec(v_a_1838_);
v_a_1840_ = v_b_1827_;
goto v___jp_1839_;
}
v___jp_1839_:
{
size_t v___x_1841_; size_t v___x_1842_; 
v___x_1841_ = ((size_t)1ULL);
v___x_1842_ = lean_usize_add(v_i_1825_, v___x_1841_);
v_i_1825_ = v___x_1842_;
v_b_1827_ = v_a_1840_;
goto _start;
}
}
else
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1917_; 
lean_dec_ref(v_b_1827_);
lean_dec_ref(v___x_1823_);
v_a_1905_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1907_ = v___x_1837_;
v_isShared_1908_ = v_isSharedCheck_1917_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1837_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1917_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1909_; uint8_t v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1915_; 
v___x_1909_ = lean_io_error_to_string(v_a_1905_);
v___x_1910_ = 3;
v___x_1911_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1911_, 0, v___x_1909_);
lean_ctor_set_uint8(v___x_1911_, sizeof(void*)*1, v___x_1910_);
lean_inc_ref(v___y_1828_);
v___x_1912_ = lean_apply_2(v___y_1828_, v___x_1911_, lean_box(0));
v___x_1913_ = lean_box(0);
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 0, v___x_1913_);
v___x_1915_ = v___x_1907_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v___x_1913_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
else
{
lean_object* v___x_1918_; 
lean_dec_ref(v___x_1823_);
v___x_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1918_, 0, v_b_1827_);
return v___x_1918_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1___boxed(lean_object* v___x_1919_, lean_object* v_as_1920_, lean_object* v_i_1921_, lean_object* v_stop_1922_, lean_object* v_b_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_){
_start:
{
size_t v_i_boxed_1926_; size_t v_stop_boxed_1927_; lean_object* v_res_1928_; 
v_i_boxed_1926_ = lean_unbox_usize(v_i_1921_);
lean_dec(v_i_1921_);
v_stop_boxed_1927_ = lean_unbox_usize(v_stop_1922_);
lean_dec(v_stop_1922_);
v_res_1928_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v___x_1919_, v_as_1920_, v_i_boxed_1926_, v_stop_boxed_1927_, v_b_1923_, v___y_1924_);
lean_dec_ref(v___y_1924_);
lean_dec_ref(v_as_1920_);
return v_res_1928_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6(void){
_start:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1938_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3));
v___x_1939_ = lean_unsigned_to_nat(4u);
v___x_1940_ = lean_mk_empty_array_with_capacity(v___x_1939_);
v___x_1941_ = lean_array_push(v___x_1940_, v___x_1938_);
return v___x_1941_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7(void){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1942_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4));
v___x_1943_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6);
v___x_1944_ = lean_array_push(v___x_1943_, v___x_1942_);
return v___x_1944_;
}
}
static uint8_t _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10(void){
_start:
{
uint32_t v___x_1949_; uint8_t v___x_1950_; 
v___x_1949_ = 4;
v___x_1950_ = lean_uint32_to_uint8(v___x_1949_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(lean_object* v_ws_1968_, lean_object* v_rootDeps_1969_, lean_object* v_a_1970_){
_start:
{
lean_object* v___y_1973_; lean_object* v_lakeEnv_1978_; lean_object* v_lakeArgs_x3f_1979_; lean_object* v_packages_1980_; lean_object* v___y_1982_; uint8_t v___y_1983_; lean_object* v___y_1984_; lean_object* v___y_1985_; lean_object* v___y_2127_; lean_object* v___y_2128_; uint8_t v___y_2129_; lean_object* v___x_2132_; lean_object* v___y_2134_; lean_object* v___y_2135_; lean_object* v___y_2136_; lean_object* v___y_2146_; lean_object* v___y_2147_; uint8_t v___y_2148_; lean_object* v___y_2149_; lean_object* v___y_2150_; lean_object* v___y_2151_; lean_object* v___y_2152_; lean_object* v___y_2160_; lean_object* v___y_2161_; lean_object* v___y_2162_; uint8_t v___y_2163_; lean_object* v___y_2164_; lean_object* v___y_2165_; lean_object* v___x_2168_; lean_object* v_baseName_2169_; lean_object* v_dir_2170_; lean_object* v_config_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v_lakeEnv_1978_ = lean_ctor_get(v_ws_1968_, 0);
lean_inc_ref(v_lakeEnv_1978_);
v_lakeArgs_x3f_1979_ = lean_ctor_get(v_ws_1968_, 3);
lean_inc(v_lakeArgs_x3f_1979_);
v_packages_1980_ = lean_ctor_get(v_ws_1968_, 4);
lean_inc_ref(v_packages_1980_);
lean_dec_ref(v_ws_1968_);
v___x_2132_ = lean_unsigned_to_nat(0u);
v___x_2168_ = lean_array_fget(v_packages_1980_, v___x_2132_);
lean_dec_ref(v_packages_1980_);
v_baseName_2169_ = lean_ctor_get(v___x_2168_, 1);
lean_inc(v_baseName_2169_);
v_dir_2170_ = lean_ctor_get(v___x_2168_, 4);
lean_inc_ref_n(v_dir_2170_, 2);
v_config_2171_ = lean_ctor_get(v___x_2168_, 6);
lean_inc_ref(v_config_2171_);
lean_dec(v___x_2168_);
v___x_2172_ = l_Lake_toolchainFileName;
v___x_2173_ = l_System_FilePath_join(v_dir_2170_, v___x_2172_);
v___x_2174_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_2173_);
lean_dec_ref(v___x_2173_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2233_; 
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2177_ = v___x_2174_;
v_isShared_2178_ = v_isSharedCheck_2233_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2174_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2233_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v_src_2180_; lean_object* v_tc_x3f_2181_; lean_object* v_clashes_2182_; uint8_t v_fixed_2183_; lean_object* v___y_2207_; uint8_t v_fixedToolchain_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; uint8_t v___x_2224_; 
v_fixedToolchain_2221_ = lean_ctor_get_uint8(v_config_2171_, sizeof(void*)*26 + 6);
lean_dec_ref(v_config_2171_);
v___x_2222_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20));
v___x_2223_ = lean_array_get_size(v_rootDeps_1969_);
v___x_2224_ = lean_nat_dec_lt(v___x_2132_, v___x_2223_);
if (v___x_2224_ == 0)
{
lean_inc(v_a_2175_);
v_src_2180_ = v_baseName_2169_;
v_tc_x3f_2181_ = v_a_2175_;
v_clashes_2182_ = v___x_2222_;
v_fixed_2183_ = v_fixedToolchain_2221_;
goto v___jp_2179_;
}
else
{
lean_object* v___x_2225_; uint8_t v___x_2226_; 
lean_inc(v_a_2175_);
lean_inc(v_baseName_2169_);
v___x_2225_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2225_, 0, v_baseName_2169_);
lean_ctor_set(v___x_2225_, 1, v_a_2175_);
lean_ctor_set(v___x_2225_, 2, v___x_2222_);
lean_ctor_set_uint8(v___x_2225_, sizeof(void*)*3, v_fixedToolchain_2221_);
v___x_2226_ = lean_nat_dec_le(v___x_2223_, v___x_2223_);
if (v___x_2226_ == 0)
{
if (v___x_2224_ == 0)
{
lean_dec_ref(v___x_2225_);
lean_inc(v_a_2175_);
v_src_2180_ = v_baseName_2169_;
v_tc_x3f_2181_ = v_a_2175_;
v_clashes_2182_ = v___x_2222_;
v_fixed_2183_ = v_fixedToolchain_2221_;
goto v___jp_2179_;
}
else
{
size_t v___x_2227_; size_t v___x_2228_; lean_object* v___x_2229_; 
lean_dec(v_baseName_2169_);
v___x_2227_ = ((size_t)0ULL);
v___x_2228_ = lean_usize_of_nat(v___x_2223_);
lean_inc_ref(v_dir_2170_);
v___x_2229_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_2170_, v_rootDeps_1969_, v___x_2227_, v___x_2228_, v___x_2225_, v_a_1970_);
v___y_2207_ = v___x_2229_;
goto v___jp_2206_;
}
}
else
{
size_t v___x_2230_; size_t v___x_2231_; lean_object* v___x_2232_; 
lean_dec(v_baseName_2169_);
v___x_2230_ = ((size_t)0ULL);
v___x_2231_ = lean_usize_of_nat(v___x_2223_);
lean_inc_ref(v_dir_2170_);
v___x_2232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_2170_, v_rootDeps_1969_, v___x_2230_, v___x_2231_, v___x_2225_, v_a_1970_);
v___y_2207_ = v___x_2232_;
goto v___jp_2206_;
}
}
v___jp_2179_:
{
lean_object* v___x_2184_; uint8_t v___x_2185_; 
v___x_2184_ = lean_array_get_size(v_clashes_2182_);
v___x_2185_ = lean_nat_dec_lt(v___x_2132_, v___x_2184_);
if (v___x_2185_ == 0)
{
lean_dec_ref(v_clashes_2182_);
lean_dec(v_src_2180_);
if (lean_obj_tag(v_tc_x3f_2181_) == 1)
{
lean_object* v_val_2186_; lean_object* v_rootToolchainFile_2187_; 
v_val_2186_ = lean_ctor_get(v_tc_x3f_2181_, 0);
lean_inc(v_val_2186_);
lean_dec_ref(v_tc_x3f_2181_);
v_rootToolchainFile_2187_ = l_Lake_joinRelative(v_dir_2170_, v___x_2172_);
if (lean_obj_tag(v_a_2175_) == 0)
{
lean_del_object(v___x_2177_);
v___y_2127_ = v_rootToolchainFile_2187_;
v___y_2128_ = v_val_2186_;
v___y_2129_ = v___x_2185_;
goto v___jp_2126_;
}
else
{
lean_object* v_val_2188_; uint8_t v___x_2189_; 
v_val_2188_ = lean_ctor_get(v_a_2175_, 0);
lean_inc(v_val_2188_);
lean_dec_ref(v_a_2175_);
lean_inc(v_val_2186_);
v___x_2189_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_2188_, v_val_2186_);
if (v___x_2189_ == 0)
{
lean_del_object(v___x_2177_);
v___y_2127_ = v_rootToolchainFile_2187_;
v___y_2128_ = v_val_2186_;
v___y_2129_ = v___x_2189_;
goto v___jp_2126_;
}
else
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2194_; 
lean_dec_ref(v_rootToolchainFile_2187_);
lean_dec(v_val_2186_);
lean_dec(v_lakeArgs_x3f_1979_);
lean_dec_ref(v_lakeEnv_1978_);
v___x_2190_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16));
lean_inc_ref(v_a_1970_);
v___x_2191_ = lean_apply_2(v_a_1970_, v___x_2190_, lean_box(0));
v___x_2192_ = lean_box(0);
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 0, v___x_2192_);
v___x_2194_ = v___x_2177_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v___x_2192_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
}
}
else
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2199_; 
lean_dec(v_tc_x3f_2181_);
lean_dec(v_a_2175_);
lean_dec_ref(v_dir_2170_);
lean_dec(v_lakeArgs_x3f_1979_);
lean_dec_ref(v_lakeEnv_1978_);
v___x_2196_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18));
lean_inc_ref(v_a_1970_);
v___x_2197_ = lean_apply_2(v_a_1970_, v___x_2196_, lean_box(0));
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 0, v___x_2197_);
v___x_2199_ = v___x_2177_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v___x_2197_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
else
{
lean_del_object(v___x_2177_);
lean_dec(v_a_2175_);
lean_dec_ref(v_dir_2170_);
lean_dec(v_lakeArgs_x3f_1979_);
lean_dec_ref(v_lakeEnv_1978_);
if (lean_obj_tag(v_tc_x3f_2181_) == 1)
{
if (v_fixed_2183_ == 0)
{
lean_object* v_val_2201_; lean_object* v___x_2202_; 
v_val_2201_ = lean_ctor_get(v_tc_x3f_2181_, 0);
lean_inc(v_val_2201_);
lean_dec_ref(v_tc_x3f_2181_);
v___x_2202_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_2160_ = v_src_2180_;
v___y_2161_ = v___x_2184_;
v___y_2162_ = v_val_2201_;
v___y_2163_ = v___x_2185_;
v___y_2164_ = v_clashes_2182_;
v___y_2165_ = v___x_2202_;
goto v___jp_2159_;
}
else
{
lean_object* v_val_2203_; lean_object* v___x_2204_; 
v_val_2203_ = lean_ctor_get(v_tc_x3f_2181_, 0);
lean_inc(v_val_2203_);
lean_dec_ref(v_tc_x3f_2181_);
v___x_2204_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_2160_ = v_src_2180_;
v___y_2161_ = v___x_2184_;
v___y_2162_ = v_val_2203_;
v___y_2163_ = v___x_2185_;
v___y_2164_ = v_clashes_2182_;
v___y_2165_ = v___x_2204_;
goto v___jp_2159_;
}
}
else
{
lean_object* v___x_2205_; 
lean_dec(v_tc_x3f_2181_);
lean_dec(v_src_2180_);
v___x_2205_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19));
v___y_2134_ = v___x_2184_;
v___y_2135_ = v_clashes_2182_;
v___y_2136_ = v___x_2205_;
goto v___jp_2133_;
}
}
}
v___jp_2206_:
{
if (lean_obj_tag(v___y_2207_) == 0)
{
lean_object* v_a_2208_; lean_object* v_src_2209_; lean_object* v_tc_x3f_2210_; lean_object* v_clashes_2211_; uint8_t v_fixed_2212_; 
v_a_2208_ = lean_ctor_get(v___y_2207_, 0);
lean_inc(v_a_2208_);
lean_dec_ref(v___y_2207_);
v_src_2209_ = lean_ctor_get(v_a_2208_, 0);
lean_inc(v_src_2209_);
v_tc_x3f_2210_ = lean_ctor_get(v_a_2208_, 1);
lean_inc(v_tc_x3f_2210_);
v_clashes_2211_ = lean_ctor_get(v_a_2208_, 2);
lean_inc_ref(v_clashes_2211_);
v_fixed_2212_ = lean_ctor_get_uint8(v_a_2208_, sizeof(void*)*3);
lean_dec(v_a_2208_);
v_src_2180_ = v_src_2209_;
v_tc_x3f_2181_ = v_tc_x3f_2210_;
v_clashes_2182_ = v_clashes_2211_;
v_fixed_2183_ = v_fixed_2212_;
goto v___jp_2179_;
}
else
{
lean_object* v_a_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2220_; 
lean_del_object(v___x_2177_);
lean_dec(v_a_2175_);
lean_dec_ref(v_dir_2170_);
lean_dec(v_lakeArgs_x3f_1979_);
lean_dec_ref(v_lakeEnv_1978_);
v_a_2213_ = lean_ctor_get(v___y_2207_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___y_2207_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2215_ = v___y_2207_;
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_a_2213_);
lean_dec(v___y_2207_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2218_; 
if (v_isShared_2216_ == 0)
{
v___x_2218_ = v___x_2215_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_a_2213_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
}
}
}
else
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2246_; 
lean_dec_ref(v_config_2171_);
lean_dec_ref(v_dir_2170_);
lean_dec(v_baseName_2169_);
lean_dec(v_lakeArgs_x3f_1979_);
lean_dec_ref(v_lakeEnv_1978_);
v_a_2234_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2236_ = v___x_2174_;
v_isShared_2237_ = v_isSharedCheck_2246_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2174_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2246_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2238_; uint8_t v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2244_; 
v___x_2238_ = lean_io_error_to_string(v_a_2234_);
v___x_2239_ = 3;
v___x_2240_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2240_, 0, v___x_2238_);
lean_ctor_set_uint8(v___x_2240_, sizeof(void*)*1, v___x_2239_);
lean_inc_ref(v_a_1970_);
v___x_2241_ = lean_apply_2(v_a_1970_, v___x_2240_, lean_box(0));
v___x_2242_ = lean_box(0);
if (v_isShared_2237_ == 0)
{
lean_ctor_set(v___x_2236_, 0, v___x_2242_);
v___x_2244_ = v___x_2236_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v___x_2242_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
v___jp_1972_:
{
uint8_t v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1974_ = 2;
v___x_1975_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1975_, 0, v___y_1973_);
lean_ctor_set_uint8(v___x_1975_, sizeof(void*)*1, v___x_1974_);
lean_inc_ref(v_a_1970_);
v___x_1976_ = lean_apply_2(v_a_1970_, v___x_1975_, lean_box(0));
v___x_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
return v___x_1977_;
}
v___jp_1981_:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; uint8_t v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
lean_inc_ref(v___y_1984_);
v___x_1986_ = lean_string_append(v___y_1984_, v___y_1985_);
v___x_1987_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_1988_ = lean_string_append(v___x_1986_, v___x_1987_);
v___x_1989_ = 1;
v___x_1990_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1990_, 0, v___x_1988_);
lean_ctor_set_uint8(v___x_1990_, sizeof(void*)*1, v___x_1989_);
lean_inc_ref(v_a_1970_);
v___x_1991_ = lean_apply_2(v_a_1970_, v___x_1990_, lean_box(0));
v___x_1992_ = l_IO_FS_writeFile(v___y_1982_, v___y_1985_);
lean_dec_ref(v___y_1982_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_dec_ref(v___x_1992_);
if (lean_obj_tag(v_lakeArgs_x3f_1979_) == 1)
{
lean_object* v_elan_x3f_1993_; 
v_elan_x3f_1993_ = lean_ctor_get(v_lakeEnv_1978_, 2);
if (lean_obj_tag(v_elan_x3f_1993_) == 1)
{
lean_object* v_val_1994_; lean_object* v_val_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v_elan_1999_; uint8_t v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v_val_1994_ = lean_ctor_get(v_lakeArgs_x3f_1979_, 0);
lean_inc(v_val_1994_);
lean_dec_ref(v_lakeArgs_x3f_1979_);
v_val_1995_ = lean_ctor_get(v_elan_x3f_1993_, 0);
v___x_1996_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1));
lean_inc_ref(v_a_1970_);
v___x_1997_ = lean_apply_2(v_a_1970_, v___x_1996_, lean_box(0));
v___x_1998_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2));
v_elan_1999_ = lean_ctor_get(v_val_1995_, 1);
lean_inc_ref(v_elan_1999_);
v___x_2000_ = 1;
v___x_2001_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5));
v___x_2002_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7);
v___x_2003_ = lean_array_push(v___x_2002_, v___y_1985_);
v___x_2004_ = lean_array_push(v___x_2003_, v___x_2001_);
v___x_2005_ = l_Array_append___redArg(v___x_2004_, v_val_1994_);
lean_dec(v_val_1994_);
v___x_2006_ = lean_box(0);
v___x_2007_ = l_Lake_Env_noToolchainVars(v_lakeEnv_1978_);
v___x_2008_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_2008_, 0, v___x_1998_);
lean_ctor_set(v___x_2008_, 1, v_elan_1999_);
lean_ctor_set(v___x_2008_, 2, v___x_2005_);
lean_ctor_set(v___x_2008_, 3, v___x_2006_);
lean_ctor_set(v___x_2008_, 4, v___x_2007_);
lean_ctor_set_uint8(v___x_2008_, sizeof(void*)*5, v___x_2000_);
lean_ctor_set_uint8(v___x_2008_, sizeof(void*)*5 + 1, v___y_1983_);
v___x_2009_ = lean_io_process_spawn(v___x_2008_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; lean_object* v___x_2011_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_a_2010_);
lean_dec_ref(v___x_2009_);
v___x_2011_ = lean_io_process_child_wait(v___x_1998_, v_a_2010_);
lean_dec(v_a_2010_);
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v_a_2012_; uint32_t v___x_2013_; uint8_t v___x_2014_; lean_object* v___x_2015_; 
v_a_2012_ = lean_ctor_get(v___x_2011_, 0);
lean_inc(v_a_2012_);
lean_dec_ref(v___x_2011_);
v___x_2013_ = lean_unbox_uint32(v_a_2012_);
lean_dec(v_a_2012_);
v___x_2014_ = lean_uint32_to_uint8(v___x_2013_);
v___x_2015_ = lean_io_exit(v___x_2014_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2023_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2018_ = v___x_2015_;
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_2015_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2019_ == 0)
{
v___x_2021_ = v___x_2018_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2016_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2036_; 
v_a_2024_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2026_ = v___x_2015_;
v_isShared_2027_ = v_isSharedCheck_2036_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_2015_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2036_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2028_; uint8_t v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2034_; 
v___x_2028_ = lean_io_error_to_string(v_a_2024_);
v___x_2029_ = 3;
v___x_2030_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2030_, 0, v___x_2028_);
lean_ctor_set_uint8(v___x_2030_, sizeof(void*)*1, v___x_2029_);
lean_inc_ref(v_a_1970_);
v___x_2031_ = lean_apply_2(v_a_1970_, v___x_2030_, lean_box(0));
v___x_2032_ = lean_box(0);
if (v_isShared_2027_ == 0)
{
lean_ctor_set(v___x_2026_, 0, v___x_2032_);
v___x_2034_ = v___x_2026_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v___x_2032_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
}
else
{
lean_object* v_a_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2049_; 
v_a_2037_ = lean_ctor_get(v___x_2011_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2049_ == 0)
{
v___x_2039_ = v___x_2011_;
v_isShared_2040_ = v_isSharedCheck_2049_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_a_2037_);
lean_dec(v___x_2011_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2049_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2041_; uint8_t v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2047_; 
v___x_2041_ = lean_io_error_to_string(v_a_2037_);
v___x_2042_ = 3;
v___x_2043_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2043_, 0, v___x_2041_);
lean_ctor_set_uint8(v___x_2043_, sizeof(void*)*1, v___x_2042_);
lean_inc_ref(v_a_1970_);
v___x_2044_ = lean_apply_2(v_a_1970_, v___x_2043_, lean_box(0));
v___x_2045_ = lean_box(0);
if (v_isShared_2040_ == 0)
{
lean_ctor_set(v___x_2039_, 0, v___x_2045_);
v___x_2047_ = v___x_2039_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v___x_2045_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
}
}
else
{
lean_object* v_a_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2062_; 
v_a_2050_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2052_ = v___x_2009_;
v_isShared_2053_ = v_isSharedCheck_2062_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_a_2050_);
lean_dec(v___x_2009_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2062_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
lean_object* v___x_2054_; uint8_t v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2060_; 
v___x_2054_ = lean_io_error_to_string(v_a_2050_);
v___x_2055_ = 3;
v___x_2056_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2056_, 0, v___x_2054_);
lean_ctor_set_uint8(v___x_2056_, sizeof(void*)*1, v___x_2055_);
lean_inc_ref(v_a_1970_);
v___x_2057_ = lean_apply_2(v_a_1970_, v___x_2056_, lean_box(0));
v___x_2058_ = lean_box(0);
if (v_isShared_2053_ == 0)
{
lean_ctor_set(v___x_2052_, 0, v___x_2058_);
v___x_2060_ = v___x_2052_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___x_2058_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
else
{
lean_object* v___x_2063_; lean_object* v___x_2064_; uint8_t v___x_2065_; lean_object* v___x_2066_; 
lean_dec_ref(v_lakeArgs_x3f_1979_);
lean_dec_ref(v___y_1985_);
lean_dec_ref(v_lakeEnv_1978_);
v___x_2063_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9));
lean_inc_ref(v_a_1970_);
v___x_2064_ = lean_apply_2(v_a_1970_, v___x_2063_, lean_box(0));
v___x_2065_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10);
v___x_2066_ = lean_io_exit(v___x_2065_);
if (lean_obj_tag(v___x_2066_) == 0)
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2074_; 
v_a_2067_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2069_ = v___x_2066_;
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v___x_2066_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2072_; 
if (v_isShared_2070_ == 0)
{
v___x_2072_ = v___x_2069_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_a_2067_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
return v___x_2072_;
}
}
}
else
{
lean_object* v_a_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2087_; 
v_a_2075_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2077_ = v___x_2066_;
v_isShared_2078_ = v_isSharedCheck_2087_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_a_2075_);
lean_dec(v___x_2066_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2087_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2079_; uint8_t v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2085_; 
v___x_2079_ = lean_io_error_to_string(v_a_2075_);
v___x_2080_ = 3;
v___x_2081_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2081_, 0, v___x_2079_);
lean_ctor_set_uint8(v___x_2081_, sizeof(void*)*1, v___x_2080_);
lean_inc_ref(v_a_1970_);
v___x_2082_ = lean_apply_2(v_a_1970_, v___x_2081_, lean_box(0));
v___x_2083_ = lean_box(0);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 0, v___x_2083_);
v___x_2085_ = v___x_2077_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v___x_2083_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
else
{
lean_object* v___x_2088_; lean_object* v___x_2089_; uint8_t v___x_2090_; lean_object* v___x_2091_; 
lean_dec_ref(v___y_1985_);
lean_dec(v_lakeArgs_x3f_1979_);
lean_dec_ref(v_lakeEnv_1978_);
v___x_2088_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12));
lean_inc_ref(v_a_1970_);
v___x_2089_ = lean_apply_2(v_a_1970_, v___x_2088_, lean_box(0));
v___x_2090_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10);
v___x_2091_ = lean_io_exit(v___x_2090_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2099_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2097_; 
if (v_isShared_2095_ == 0)
{
v___x_2097_ = v___x_2094_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_a_2092_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
else
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2112_; 
v_a_2100_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2102_ = v___x_2091_;
v_isShared_2103_ = v_isSharedCheck_2112_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2091_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2112_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2104_; uint8_t v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2110_; 
v___x_2104_ = lean_io_error_to_string(v_a_2100_);
v___x_2105_ = 3;
v___x_2106_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2106_, 0, v___x_2104_);
lean_ctor_set_uint8(v___x_2106_, sizeof(void*)*1, v___x_2105_);
lean_inc_ref(v_a_1970_);
v___x_2107_ = lean_apply_2(v_a_1970_, v___x_2106_, lean_box(0));
v___x_2108_ = lean_box(0);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 0, v___x_2108_);
v___x_2110_ = v___x_2102_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v___x_2108_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
}
}
else
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2125_; 
lean_dec_ref(v___y_1985_);
lean_dec(v_lakeArgs_x3f_1979_);
lean_dec_ref(v_lakeEnv_1978_);
v_a_2113_ = lean_ctor_get(v___x_1992_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2115_ = v___x_1992_;
v_isShared_2116_ = v_isSharedCheck_2125_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_1992_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2125_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2117_; uint8_t v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2123_; 
v___x_2117_ = lean_io_error_to_string(v_a_2113_);
v___x_2118_ = 3;
v___x_2119_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2119_, 0, v___x_2117_);
lean_ctor_set_uint8(v___x_2119_, sizeof(void*)*1, v___x_2118_);
lean_inc_ref(v_a_1970_);
v___x_2120_ = lean_apply_2(v_a_1970_, v___x_2119_, lean_box(0));
v___x_2121_ = lean_box(0);
if (v_isShared_2116_ == 0)
{
lean_ctor_set(v___x_2115_, 0, v___x_2121_);
v___x_2123_ = v___x_2115_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v___x_2121_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
v___jp_2126_:
{
lean_object* v___x_2130_; lean_object* v_toString_2131_; 
v___x_2130_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13));
v_toString_2131_ = lean_ctor_get(v___y_2128_, 0);
lean_inc_ref(v_toString_2131_);
lean_dec_ref(v___y_2128_);
v___y_1982_ = v___y_2127_;
v___y_1983_ = v___y_2129_;
v___y_1984_ = v___x_2130_;
v___y_1985_ = v_toString_2131_;
goto v___jp_1981_;
}
v___jp_2133_:
{
uint8_t v___x_2137_; 
v___x_2137_ = lean_nat_dec_lt(v___x_2132_, v___y_2134_);
if (v___x_2137_ == 0)
{
lean_dec_ref(v___y_2135_);
lean_dec(v___y_2134_);
v___y_1973_ = v___y_2136_;
goto v___jp_1972_;
}
else
{
uint8_t v___x_2138_; 
v___x_2138_ = lean_nat_dec_le(v___y_2134_, v___y_2134_);
if (v___x_2138_ == 0)
{
if (v___x_2137_ == 0)
{
lean_dec_ref(v___y_2135_);
lean_dec(v___y_2134_);
v___y_1973_ = v___y_2136_;
goto v___jp_1972_;
}
else
{
size_t v___x_2139_; size_t v___x_2140_; lean_object* v___x_2141_; 
v___x_2139_ = ((size_t)0ULL);
v___x_2140_ = lean_usize_of_nat(v___y_2134_);
lean_dec(v___y_2134_);
v___x_2141_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___y_2135_, v___x_2139_, v___x_2140_, v___y_2136_);
lean_dec_ref(v___y_2135_);
v___y_1973_ = v___x_2141_;
goto v___jp_1972_;
}
}
else
{
size_t v___x_2142_; size_t v___x_2143_; lean_object* v___x_2144_; 
v___x_2142_ = ((size_t)0ULL);
v___x_2143_ = lean_usize_of_nat(v___y_2134_);
lean_dec(v___y_2134_);
v___x_2144_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___y_2135_, v___x_2142_, v___x_2143_, v___y_2136_);
lean_dec_ref(v___y_2135_);
v___y_1973_ = v___x_2144_;
goto v___jp_1972_;
}
}
}
v___jp_2145_:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
lean_inc_ref(v___y_2151_);
v___x_2153_ = lean_string_append(v___y_2151_, v___y_2152_);
lean_dec_ref(v___y_2152_);
v___x_2154_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2155_ = lean_string_append(v___x_2153_, v___x_2154_);
v___x_2156_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_2147_, v___y_2148_);
v___x_2157_ = lean_string_append(v___x_2155_, v___x_2156_);
lean_dec_ref(v___x_2156_);
v___x_2158_ = lean_string_append(v___x_2157_, v___y_2150_);
v___y_2134_ = v___y_2146_;
v___y_2135_ = v___y_2149_;
v___y_2136_ = v___x_2158_;
goto v___jp_2133_;
}
v___jp_2159_:
{
lean_object* v___x_2166_; lean_object* v_toString_2167_; 
v___x_2166_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14));
v_toString_2167_ = lean_ctor_get(v___y_2162_, 0);
lean_inc_ref(v_toString_2167_);
lean_dec_ref(v___y_2162_);
v___y_2146_ = v___y_2161_;
v___y_2147_ = v___y_2160_;
v___y_2148_ = v___y_2163_;
v___y_2149_ = v___y_2164_;
v___y_2150_ = v___y_2165_;
v___y_2151_ = v___x_2166_;
v___y_2152_ = v_toString_2167_;
goto v___jp_2145_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___boxed(lean_object* v_ws_2247_, lean_object* v_rootDeps_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_){
_start:
{
lean_object* v_res_2251_; 
v_res_2251_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(v_ws_2247_, v_rootDeps_2248_, v_a_2249_);
lean_dec_ref(v_a_2249_);
lean_dec_ref(v_rootDeps_2248_);
return v_res_2251_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(lean_object* v_pkg_2252_, lean_object* v_dep_2253_, lean_object* v_ws_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_){
_start:
{
lean_object* v___x_2258_; 
v___x_2258_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_2254_, v_pkg_2252_, v_dep_2253_, v_a_2255_, v_a_2256_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v_fst_2260_; lean_object* v_snd_2261_; lean_object* v___x_2262_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_a_2259_);
lean_dec_ref(v___x_2258_);
v_fst_2260_ = lean_ctor_get(v_a_2259_, 0);
lean_inc_n(v_fst_2260_, 2);
v_snd_2261_ = lean_ctor_get(v_a_2259_, 1);
lean_inc(v_snd_2261_);
lean_dec(v_a_2259_);
v___x_2262_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_fst_2260_, v_snd_2261_, v_a_2256_);
if (lean_obj_tag(v___x_2262_) == 0)
{
lean_object* v_a_2263_; lean_object* v___x_2265_; uint8_t v_isShared_2266_; uint8_t v_isSharedCheck_2279_; 
v_a_2263_ = lean_ctor_get(v___x_2262_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2262_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2265_ = v___x_2262_;
v_isShared_2266_ = v_isSharedCheck_2279_;
goto v_resetjp_2264_;
}
else
{
lean_inc(v_a_2263_);
lean_dec(v___x_2262_);
v___x_2265_ = lean_box(0);
v_isShared_2266_ = v_isSharedCheck_2279_;
goto v_resetjp_2264_;
}
v_resetjp_2264_:
{
lean_object* v_snd_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2277_; 
v_snd_2267_ = lean_ctor_get(v_a_2263_, 1);
v_isSharedCheck_2277_ = !lean_is_exclusive(v_a_2263_);
if (v_isSharedCheck_2277_ == 0)
{
lean_object* v_unused_2278_; 
v_unused_2278_ = lean_ctor_get(v_a_2263_, 0);
lean_dec(v_unused_2278_);
v___x_2269_ = v_a_2263_;
v_isShared_2270_ = v_isSharedCheck_2277_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_snd_2267_);
lean_dec(v_a_2263_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2277_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
lean_ctor_set(v___x_2269_, 0, v_fst_2260_);
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v_fst_2260_);
lean_ctor_set(v_reuseFailAlloc_2276_, 1, v_snd_2267_);
v___x_2272_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
lean_object* v___x_2274_; 
if (v_isShared_2266_ == 0)
{
lean_ctor_set(v___x_2265_, 0, v___x_2272_);
v___x_2274_ = v___x_2265_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v___x_2272_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
}
}
}
else
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2287_; 
lean_dec(v_fst_2260_);
v_a_2280_ = lean_ctor_get(v___x_2262_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2262_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2282_ = v___x_2262_;
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2262_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2285_; 
if (v_isShared_2283_ == 0)
{
v___x_2285_ = v___x_2282_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2280_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
}
}
else
{
return v___x_2258_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep___boxed(lean_object* v_pkg_2288_, lean_object* v_dep_2289_, lean_object* v_ws_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(v_pkg_2288_, v_dep_2289_, v_ws_2290_, v_a_2291_, v_a_2292_);
lean_dec_ref(v_a_2292_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(lean_object* v___y_2295_, lean_object* v_ws_2296_, lean_object* v_pkg_2297_, lean_object* v_dep_2298_, lean_object* v_a_2299_){
_start:
{
uint8_t v___y_2302_; lean_object* v___y_2303_; lean_object* v_name_2333_; lean_object* v___x_2334_; 
v_name_2333_ = lean_ctor_get(v_dep_2298_, 0);
v___x_2334_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_2299_, v_name_2333_);
if (lean_obj_tag(v___x_2334_) == 1)
{
lean_object* v_val_2335_; lean_object* v_lakeEnv_2336_; lean_object* v_packages_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v_config_2340_; lean_object* v_dir_2341_; lean_object* v_toWorkspaceConfig_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
lean_dec_ref(v_dep_2298_);
lean_dec_ref(v_pkg_2297_);
v_val_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc(v_val_2335_);
lean_dec_ref(v___x_2334_);
v_lakeEnv_2336_ = lean_ctor_get(v_ws_2296_, 0);
lean_inc_ref(v_lakeEnv_2336_);
v_packages_2337_ = lean_ctor_get(v_ws_2296_, 4);
lean_inc_ref(v_packages_2337_);
lean_dec_ref(v_ws_2296_);
v___x_2338_ = lean_unsigned_to_nat(0u);
v___x_2339_ = lean_array_fget(v_packages_2337_, v___x_2338_);
lean_dec_ref(v_packages_2337_);
v_config_2340_ = lean_ctor_get(v___x_2339_, 6);
lean_inc_ref(v_config_2340_);
v_dir_2341_ = lean_ctor_get(v___x_2339_, 4);
lean_inc_ref(v_dir_2341_);
lean_dec(v___x_2339_);
v_toWorkspaceConfig_2342_ = lean_ctor_get(v_config_2340_, 0);
lean_inc_ref(v_toWorkspaceConfig_2342_);
lean_dec_ref(v_config_2340_);
v___x_2343_ = l_System_FilePath_normalize(v_toWorkspaceConfig_2342_);
v___x_2344_ = l_Lake_PackageEntry_materialize(v_val_2335_, v_lakeEnv_2336_, v_dir_2341_, v___x_2343_, v___y_2295_);
lean_dec_ref(v_lakeEnv_2336_);
if (lean_obj_tag(v___x_2344_) == 0)
{
lean_object* v_a_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2353_; 
v_a_2345_ = lean_ctor_get(v___x_2344_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2347_ = v___x_2344_;
v_isShared_2348_ = v_isSharedCheck_2353_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_a_2345_);
lean_dec(v___x_2344_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2353_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v___x_2349_; lean_object* v___x_2351_; 
v___x_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2349_, 0, v_a_2345_);
lean_ctor_set(v___x_2349_, 1, v_a_2299_);
if (v_isShared_2348_ == 0)
{
lean_ctor_set(v___x_2347_, 0, v___x_2349_);
v___x_2351_ = v___x_2347_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2349_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
else
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2361_; 
lean_dec(v_a_2299_);
v_a_2354_ = lean_ctor_get(v___x_2344_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2356_ = v___x_2344_;
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2344_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2359_; 
if (v_isShared_2357_ == 0)
{
v___x_2359_ = v___x_2356_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v_a_2354_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
return v___x_2359_;
}
}
}
}
else
{
lean_object* v_wsIdx_2362_; lean_object* v_relDir_2363_; uint8_t v___y_2365_; lean_object* v___x_2369_; uint8_t v___x_2370_; 
lean_dec(v___x_2334_);
v_wsIdx_2362_ = lean_ctor_get(v_pkg_2297_, 0);
lean_inc(v_wsIdx_2362_);
v_relDir_2363_ = lean_ctor_get(v_pkg_2297_, 5);
lean_inc_ref(v_relDir_2363_);
lean_dec_ref(v_pkg_2297_);
v___x_2369_ = lean_unsigned_to_nat(0u);
v___x_2370_ = lean_nat_dec_eq(v_wsIdx_2362_, v___x_2369_);
lean_dec(v_wsIdx_2362_);
if (v___x_2370_ == 0)
{
uint8_t v___x_2371_; 
v___x_2371_ = 1;
v___y_2365_ = v___x_2371_;
goto v___jp_2364_;
}
else
{
uint8_t v___x_2372_; 
v___x_2372_ = 0;
v___y_2365_ = v___x_2372_;
goto v___jp_2364_;
}
v___jp_2364_:
{
lean_object* v___x_2366_; uint8_t v___x_2367_; 
v___x_2366_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0));
v___x_2367_ = lean_string_dec_eq(v_relDir_2363_, v___x_2366_);
if (v___x_2367_ == 0)
{
lean_object* v___x_2368_; 
v___x_2368_ = l_Lake_joinRelative(v_relDir_2363_, v___x_2366_);
v___y_2302_ = v___y_2365_;
v___y_2303_ = v___x_2368_;
goto v___jp_2301_;
}
else
{
v___y_2302_ = v___y_2365_;
v___y_2303_ = v_relDir_2363_;
goto v___jp_2301_;
}
}
}
v___jp_2301_:
{
lean_object* v_lakeEnv_2304_; lean_object* v_packages_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v_config_2308_; lean_object* v_dir_2309_; lean_object* v_toWorkspaceConfig_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v_lakeEnv_2304_ = lean_ctor_get(v_ws_2296_, 0);
lean_inc_ref(v_lakeEnv_2304_);
v_packages_2305_ = lean_ctor_get(v_ws_2296_, 4);
lean_inc_ref(v_packages_2305_);
lean_dec_ref(v_ws_2296_);
v___x_2306_ = lean_unsigned_to_nat(0u);
v___x_2307_ = lean_array_fget(v_packages_2305_, v___x_2306_);
lean_dec_ref(v_packages_2305_);
v_config_2308_ = lean_ctor_get(v___x_2307_, 6);
lean_inc_ref(v_config_2308_);
v_dir_2309_ = lean_ctor_get(v___x_2307_, 4);
lean_inc_ref(v_dir_2309_);
lean_dec(v___x_2307_);
v_toWorkspaceConfig_2310_ = lean_ctor_get(v_config_2308_, 0);
lean_inc_ref(v_toWorkspaceConfig_2310_);
lean_dec_ref(v_config_2308_);
v___x_2311_ = l_System_FilePath_normalize(v_toWorkspaceConfig_2310_);
v___x_2312_ = l_Lake_Dependency_materialize(v_dep_2298_, v___y_2302_, v_lakeEnv_2304_, v_dir_2309_, v___x_2311_, v___y_2303_, v___y_2295_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2324_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2315_ = v___x_2312_;
v_isShared_2316_ = v_isSharedCheck_2324_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2312_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2324_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v_manifestEntry_2317_; lean_object* v_name_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2322_; 
v_manifestEntry_2317_ = lean_ctor_get(v_a_2313_, 4);
v_name_2318_ = lean_ctor_get(v_manifestEntry_2317_, 0);
lean_inc_ref(v_manifestEntry_2317_);
lean_inc(v_name_2318_);
v___x_2319_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_2318_, v_manifestEntry_2317_, v_a_2299_);
v___x_2320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2320_, 0, v_a_2313_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set(v___x_2315_, 0, v___x_2320_);
v___x_2322_ = v___x_2315_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v___x_2320_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
return v___x_2322_;
}
}
}
else
{
lean_object* v_a_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2332_; 
lean_dec(v_a_2299_);
v_a_2325_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2327_ = v___x_2312_;
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_a_2325_);
lean_dec(v___x_2312_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2330_; 
if (v_isShared_2328_ == 0)
{
v___x_2330_ = v___x_2327_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v_a_2325_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0___boxed(lean_object* v___y_2373_, lean_object* v_ws_2374_, lean_object* v_pkg_2375_, lean_object* v_dep_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(v___y_2373_, v_ws_2374_, v_pkg_2375_, v_dep_2376_, v_a_2377_);
lean_dec_ref(v___y_2373_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(lean_object* v___y_2380_, lean_object* v_dep_2381_, lean_object* v_a_2382_){
_start:
{
lean_object* v_manifestEntry_2384_; lean_object* v_pkgDir_2385_; lean_object* v_name_2386_; lean_object* v_manifestFile_x3f_2387_; lean_object* v___y_2389_; lean_object* v_fst_2390_; lean_object* v_snd_2391_; lean_object* v___y_2448_; lean_object* v___y_2449_; lean_object* v___y_2450_; lean_object* v_val_2451_; lean_object* v___y_2479_; 
v_manifestEntry_2384_ = lean_ctor_get(v_dep_2381_, 4);
v_pkgDir_2385_ = lean_ctor_get(v_dep_2381_, 0);
v_name_2386_ = lean_ctor_get(v_manifestEntry_2384_, 0);
v_manifestFile_x3f_2387_ = lean_ctor_get(v_manifestEntry_2384_, 3);
if (lean_obj_tag(v_manifestFile_x3f_2387_) == 0)
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = l_Lake_defaultManifestFile;
lean_inc_ref(v_pkgDir_2385_);
v___x_2500_ = l_Lake_joinRelative(v_pkgDir_2385_, v___x_2499_);
v___y_2479_ = v___x_2500_;
goto v___jp_2478_;
}
else
{
lean_object* v_val_2501_; lean_object* v___x_2502_; 
v_val_2501_ = lean_ctor_get(v_manifestFile_x3f_2387_, 0);
lean_inc(v_val_2501_);
lean_inc_ref(v_pkgDir_2385_);
v___x_2502_ = l_Lake_joinRelative(v_pkgDir_2385_, v_val_2501_);
v___y_2479_ = v___x_2502_;
goto v___jp_2478_;
}
v___jp_2388_:
{
if (lean_obj_tag(v_fst_2390_) == 0)
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2421_; 
lean_inc(v_name_2386_);
lean_dec_ref(v_dep_2381_);
v_a_2392_ = lean_ctor_get(v_fst_2390_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v_fst_2390_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2394_ = v_fst_2390_;
v_isShared_2395_ = v_isSharedCheck_2421_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v_fst_2390_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2421_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
if (lean_obj_tag(v_a_2392_) == 11)
{
uint8_t v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; uint8_t v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2406_; 
lean_dec_ref(v_a_2392_);
v___x_2396_ = 0;
v___x_2397_ = l_Lean_Name_toString(v_name_2386_, v___x_2396_);
v___x_2398_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0));
v___x_2399_ = lean_string_append(v___x_2397_, v___x_2398_);
v___x_2400_ = lean_string_append(v___x_2399_, v___y_2389_);
lean_dec_ref(v___y_2389_);
v___x_2401_ = 2;
v___x_2402_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2402_, 0, v___x_2400_);
lean_ctor_set_uint8(v___x_2402_, sizeof(void*)*1, v___x_2401_);
v___x_2403_ = lean_apply_2(v___y_2380_, v___x_2402_, lean_box(0));
v___x_2404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2404_, 0, v___x_2403_);
lean_ctor_set(v___x_2404_, 1, v_snd_2391_);
if (v_isShared_2395_ == 0)
{
lean_ctor_set(v___x_2394_, 0, v___x_2404_);
v___x_2406_ = v___x_2394_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v___x_2404_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
else
{
uint8_t v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; uint8_t v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2419_; 
lean_dec_ref(v___y_2389_);
v___x_2408_ = 0;
v___x_2409_ = l_Lean_Name_toString(v_name_2386_, v___x_2408_);
v___x_2410_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1));
v___x_2411_ = lean_string_append(v___x_2409_, v___x_2410_);
v___x_2412_ = lean_io_error_to_string(v_a_2392_);
v___x_2413_ = lean_string_append(v___x_2411_, v___x_2412_);
lean_dec_ref(v___x_2412_);
v___x_2414_ = 2;
v___x_2415_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2415_, 0, v___x_2413_);
lean_ctor_set_uint8(v___x_2415_, sizeof(void*)*1, v___x_2414_);
v___x_2416_ = lean_apply_2(v___y_2380_, v___x_2415_, lean_box(0));
v___x_2417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2417_, 0, v___x_2416_);
lean_ctor_set(v___x_2417_, 1, v_snd_2391_);
if (v_isShared_2395_ == 0)
{
lean_ctor_set(v___x_2394_, 0, v___x_2417_);
v___x_2419_ = v___x_2394_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v___x_2417_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2446_; 
lean_dec_ref(v___y_2389_);
lean_dec_ref(v___y_2380_);
v_a_2422_ = lean_ctor_get(v_fst_2390_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v_fst_2390_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2424_ = v_fst_2390_;
v_isShared_2425_ = v_isSharedCheck_2446_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v_fst_2390_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2446_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v_packages_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; uint8_t v___x_2430_; 
v_packages_2426_ = lean_ctor_get(v_a_2422_, 3);
lean_inc_ref(v_packages_2426_);
lean_dec(v_a_2422_);
v___x_2427_ = lean_unsigned_to_nat(0u);
v___x_2428_ = lean_array_get_size(v_packages_2426_);
v___x_2429_ = lean_box(0);
v___x_2430_ = lean_nat_dec_lt(v___x_2427_, v___x_2428_);
if (v___x_2430_ == 0)
{
lean_object* v___x_2431_; lean_object* v___x_2433_; 
lean_dec_ref(v_packages_2426_);
lean_dec_ref(v_dep_2381_);
v___x_2431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2429_);
lean_ctor_set(v___x_2431_, 1, v_snd_2391_);
if (v_isShared_2425_ == 0)
{
lean_ctor_set_tag(v___x_2424_, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2431_);
v___x_2433_ = v___x_2424_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v___x_2431_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
return v___x_2433_;
}
}
else
{
uint8_t v___x_2435_; 
v___x_2435_ = lean_nat_dec_le(v___x_2428_, v___x_2428_);
if (v___x_2435_ == 0)
{
if (v___x_2430_ == 0)
{
lean_object* v___x_2436_; lean_object* v___x_2438_; 
lean_dec_ref(v_packages_2426_);
lean_dec_ref(v_dep_2381_);
v___x_2436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2429_);
lean_ctor_set(v___x_2436_, 1, v_snd_2391_);
if (v_isShared_2425_ == 0)
{
lean_ctor_set_tag(v___x_2424_, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2436_);
v___x_2438_ = v___x_2424_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v___x_2436_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
else
{
size_t v___x_2440_; size_t v___x_2441_; lean_object* v___x_2442_; 
lean_del_object(v___x_2424_);
v___x_2440_ = ((size_t)0ULL);
v___x_2441_ = lean_usize_of_nat(v___x_2428_);
v___x_2442_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_2381_, v_packages_2426_, v___x_2440_, v___x_2441_, v___x_2429_, v_snd_2391_);
lean_dec_ref(v_packages_2426_);
return v___x_2442_;
}
}
else
{
size_t v___x_2443_; size_t v___x_2444_; lean_object* v___x_2445_; 
lean_del_object(v___x_2424_);
v___x_2443_ = ((size_t)0ULL);
v___x_2444_ = lean_usize_of_nat(v___x_2428_);
v___x_2445_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_2381_, v_packages_2426_, v___x_2443_, v___x_2444_, v___x_2429_, v_snd_2391_);
lean_dec_ref(v_packages_2426_);
return v___x_2445_;
}
}
}
}
}
v___jp_2447_:
{
lean_object* v___x_2452_; uint8_t v___x_2453_; 
v___x_2452_ = lean_array_get_size(v___y_2449_);
v___x_2453_ = lean_nat_dec_lt(v___y_2450_, v___x_2452_);
if (v___x_2453_ == 0)
{
v___y_2389_ = v___y_2448_;
v_fst_2390_ = v_val_2451_;
v_snd_2391_ = v_a_2382_;
goto v___jp_2388_;
}
else
{
lean_object* v___x_2454_; uint8_t v___x_2455_; 
v___x_2454_ = lean_box(0);
v___x_2455_ = lean_nat_dec_le(v___x_2452_, v___x_2452_);
if (v___x_2455_ == 0)
{
if (v___x_2453_ == 0)
{
v___y_2389_ = v___y_2448_;
v_fst_2390_ = v_val_2451_;
v_snd_2391_ = v_a_2382_;
goto v___jp_2388_;
}
else
{
size_t v___x_2456_; size_t v___x_2457_; lean_object* v___x_2458_; 
v___x_2456_ = ((size_t)0ULL);
v___x_2457_ = lean_usize_of_nat(v___x_2452_);
v___x_2458_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___y_2449_, v___x_2456_, v___x_2457_, v___x_2454_, v___y_2380_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_dec_ref(v___x_2458_);
v___y_2389_ = v___y_2448_;
v_fst_2390_ = v_val_2451_;
v_snd_2391_ = v_a_2382_;
goto v___jp_2388_;
}
else
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2466_; 
lean_dec_ref(v_val_2451_);
lean_dec_ref(v___y_2448_);
lean_dec(v_a_2382_);
lean_dec_ref(v_dep_2381_);
lean_dec_ref(v___y_2380_);
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2461_ = v___x_2458_;
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2458_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2464_; 
if (v_isShared_2462_ == 0)
{
v___x_2464_ = v___x_2461_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_a_2459_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
}
}
else
{
size_t v___x_2467_; size_t v___x_2468_; lean_object* v___x_2469_; 
v___x_2467_ = ((size_t)0ULL);
v___x_2468_ = lean_usize_of_nat(v___x_2452_);
v___x_2469_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___y_2449_, v___x_2467_, v___x_2468_, v___x_2454_, v___y_2380_);
if (lean_obj_tag(v___x_2469_) == 0)
{
lean_dec_ref(v___x_2469_);
v___y_2389_ = v___y_2448_;
v_fst_2390_ = v_val_2451_;
v_snd_2391_ = v_a_2382_;
goto v___jp_2388_;
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2477_; 
lean_dec_ref(v_val_2451_);
lean_dec_ref(v___y_2448_);
lean_dec(v_a_2382_);
lean_dec_ref(v_dep_2381_);
lean_dec_ref(v___y_2380_);
v_a_2470_ = lean_ctor_get(v___x_2469_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2469_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2472_ = v___x_2469_;
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_a_2470_);
lean_dec(v___x_2469_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2475_; 
if (v_isShared_2473_ == 0)
{
v___x_2475_ = v___x_2472_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2470_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
}
}
v___jp_2478_:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2480_ = lean_unsigned_to_nat(0u);
v___x_2481_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___y_2479_);
v___x_2482_ = l_Lake_Manifest_load(v___y_2479_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2482_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2482_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
lean_ctor_set_tag(v___x_2485_, 1);
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
v___y_2448_ = v___y_2479_;
v___y_2449_ = v___x_2481_;
v___y_2450_ = v___x_2480_;
v_val_2451_ = v___x_2488_;
goto v___jp_2447_;
}
}
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
v_a_2491_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2482_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2482_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
lean_ctor_set_tag(v___x_2493_, 0);
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
v___y_2448_ = v___y_2479_;
v___y_2449_ = v___x_2481_;
v___y_2450_ = v___x_2480_;
v_val_2451_ = v___x_2496_;
goto v___jp_2447_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1___boxed(lean_object* v___y_2503_, lean_object* v_dep_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(v___y_2503_, v_dep_2504_, v_a_2505_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
lean_object* v___x_2514_; 
v___x_2514_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(v___y_2512_, v___y_2510_, v___y_2508_, v___y_2509_, v___y_2511_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; lean_object* v_fst_2516_; lean_object* v_snd_2517_; lean_object* v___x_2518_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2515_);
lean_dec_ref(v___x_2514_);
v_fst_2516_ = lean_ctor_get(v_a_2515_, 0);
lean_inc_n(v_fst_2516_, 2);
v_snd_2517_ = lean_ctor_get(v_a_2515_, 1);
lean_inc(v_snd_2517_);
lean_dec(v_a_2515_);
v___x_2518_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(v___y_2512_, v_fst_2516_, v_snd_2517_);
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2535_; 
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2521_ = v___x_2518_;
v_isShared_2522_ = v_isSharedCheck_2535_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2518_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2535_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v_snd_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2533_; 
v_snd_2523_ = lean_ctor_get(v_a_2519_, 1);
v_isSharedCheck_2533_ = !lean_is_exclusive(v_a_2519_);
if (v_isSharedCheck_2533_ == 0)
{
lean_object* v_unused_2534_; 
v_unused_2534_ = lean_ctor_get(v_a_2519_, 0);
lean_dec(v_unused_2534_);
v___x_2525_ = v_a_2519_;
v_isShared_2526_ = v_isSharedCheck_2533_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_snd_2523_);
lean_dec(v_a_2519_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2533_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
lean_ctor_set(v___x_2525_, 0, v_fst_2516_);
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_fst_2516_);
lean_ctor_set(v_reuseFailAlloc_2532_, 1, v_snd_2523_);
v___x_2528_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
lean_object* v___x_2530_; 
if (v_isShared_2522_ == 0)
{
lean_ctor_set(v___x_2521_, 0, v___x_2528_);
v___x_2530_ = v___x_2521_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2528_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
}
}
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2543_; 
lean_dec(v_fst_2516_);
v_a_2536_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2538_ = v___x_2518_;
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2518_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2541_; 
if (v_isShared_2539_ == 0)
{
v___x_2541_ = v___x_2538_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_a_2536_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
}
else
{
lean_dec_ref(v___y_2512_);
return v___x_2514_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0___boxed(lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(lean_object* v_a_2551_, lean_object* v_ws_2552_, lean_object* v_toUpdate_2553_, lean_object* v_a_2554_){
_start:
{
lean_object* v___y_2557_; lean_object* v___y_2562_; lean_object* v_fst_2563_; lean_object* v_snd_2564_; lean_object* v_packages_2583_; lean_object* v___x_2584_; lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v_val_2589_; lean_object* v___y_2617_; lean_object* v___y_2618_; lean_object* v___y_2619_; lean_object* v___y_2620_; lean_object* v___x_2637_; lean_object* v_baseName_2638_; lean_object* v_dir_2639_; lean_object* v_config_2640_; lean_object* v_relManifestFile_2641_; lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; uint8_t v_fst_2646_; lean_object* v_snd_2647_; lean_object* v_packagesDir_x3f_2668_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2704_; lean_object* v___y_2705_; lean_object* v___y_2706_; lean_object* v___y_2709_; lean_object* v___y_2710_; uint8_t v___x_2713_; lean_object* v_rootName_2714_; lean_object* v_fst_2716_; lean_object* v_snd_2717_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v_val_2768_; lean_object* v___x_2794_; 
v_packages_2583_ = lean_ctor_get(v_ws_2552_, 4);
v___x_2584_ = lean_unsigned_to_nat(0u);
v___x_2637_ = lean_array_fget_borrowed(v_packages_2583_, v___x_2584_);
v_baseName_2638_ = lean_ctor_get(v___x_2637_, 1);
v_dir_2639_ = lean_ctor_get(v___x_2637_, 4);
v_config_2640_ = lean_ctor_get(v___x_2637_, 6);
v_relManifestFile_2641_ = lean_ctor_get(v___x_2637_, 9);
v___x_2713_ = 0;
lean_inc(v_baseName_2638_);
v_rootName_2714_ = l_Lean_Name_toString(v_baseName_2638_, v___x_2713_);
lean_inc_ref(v_relManifestFile_2641_);
lean_inc_ref(v_dir_2639_);
v___x_2765_ = l_Lake_joinRelative(v_dir_2639_, v_relManifestFile_2641_);
v___x_2766_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_2794_ = l_Lake_Manifest_load(v___x_2765_);
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v___x_2794_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2794_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set_tag(v___x_2797_, 1);
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2795_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
v_val_2768_ = v___x_2800_;
goto v___jp_2767_;
}
}
}
else
{
lean_object* v_a_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2810_; 
v_a_2803_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2805_ = v___x_2794_;
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_a_2803_);
lean_dec(v___x_2794_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2808_; 
if (v_isShared_2806_ == 0)
{
lean_ctor_set_tag(v___x_2805_, 0);
v___x_2808_ = v___x_2805_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_a_2803_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
v_val_2768_ = v___x_2808_;
goto v___jp_2767_;
}
}
}
v___jp_2556_:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2558_ = lean_box(0);
v___x_2559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2558_);
lean_ctor_set(v___x_2559_, 1, v___y_2557_);
v___x_2560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2560_, 0, v___x_2559_);
return v___x_2560_;
}
v___jp_2561_:
{
if (lean_obj_tag(v_fst_2563_) == 0)
{
lean_object* v_a_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2579_; 
lean_dec(v_snd_2564_);
v_a_2565_ = lean_ctor_get(v_fst_2563_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v_fst_2563_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2567_ = v_fst_2563_;
v_isShared_2568_ = v_isSharedCheck_2579_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_a_2565_);
lean_dec(v_fst_2563_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2579_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; uint8_t v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2577_; 
v___x_2569_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0));
v___x_2570_ = lean_io_error_to_string(v_a_2565_);
v___x_2571_ = lean_string_append(v___x_2569_, v___x_2570_);
lean_dec_ref(v___x_2570_);
v___x_2572_ = 3;
v___x_2573_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2573_, 0, v___x_2571_);
lean_ctor_set_uint8(v___x_2573_, sizeof(void*)*1, v___x_2572_);
lean_inc_ref(v___y_2562_);
v___x_2574_ = lean_apply_2(v___y_2562_, v___x_2573_, lean_box(0));
v___x_2575_ = lean_box(0);
if (v_isShared_2568_ == 0)
{
lean_ctor_set_tag(v___x_2567_, 1);
lean_ctor_set(v___x_2567_, 0, v___x_2575_);
v___x_2577_ = v___x_2567_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v___x_2575_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
else
{
lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
lean_dec_ref(v_fst_2563_);
v___x_2580_ = lean_box(0);
v___x_2581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2580_);
lean_ctor_set(v___x_2581_, 1, v_snd_2564_);
v___x_2582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2581_);
return v___x_2582_;
}
}
v___jp_2585_:
{
lean_object* v___x_2590_; uint8_t v___x_2591_; 
v___x_2590_ = lean_array_get_size(v___y_2587_);
v___x_2591_ = lean_nat_dec_lt(v___x_2584_, v___x_2590_);
if (v___x_2591_ == 0)
{
v___y_2562_ = v___y_2588_;
v_fst_2563_ = v_val_2589_;
v_snd_2564_ = v___y_2586_;
goto v___jp_2561_;
}
else
{
lean_object* v___x_2592_; uint8_t v___x_2593_; 
v___x_2592_ = lean_box(0);
v___x_2593_ = lean_nat_dec_le(v___x_2590_, v___x_2590_);
if (v___x_2593_ == 0)
{
if (v___x_2591_ == 0)
{
v___y_2562_ = v___y_2588_;
v_fst_2563_ = v_val_2589_;
v_snd_2564_ = v___y_2586_;
goto v___jp_2561_;
}
else
{
size_t v___x_2594_; size_t v___x_2595_; lean_object* v___x_2596_; 
v___x_2594_ = ((size_t)0ULL);
v___x_2595_ = lean_usize_of_nat(v___x_2590_);
v___x_2596_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___y_2587_, v___x_2594_, v___x_2595_, v___x_2592_, v___y_2588_);
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_dec_ref(v___x_2596_);
v___y_2562_ = v___y_2588_;
v_fst_2563_ = v_val_2589_;
v_snd_2564_ = v___y_2586_;
goto v___jp_2561_;
}
else
{
lean_object* v_a_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2604_; 
lean_dec_ref(v_val_2589_);
lean_dec(v___y_2586_);
v_a_2597_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2599_ = v___x_2596_;
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_a_2597_);
lean_dec(v___x_2596_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2602_; 
if (v_isShared_2600_ == 0)
{
v___x_2602_ = v___x_2599_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_a_2597_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
}
}
}
else
{
size_t v___x_2605_; size_t v___x_2606_; lean_object* v___x_2607_; 
v___x_2605_ = ((size_t)0ULL);
v___x_2606_ = lean_usize_of_nat(v___x_2590_);
v___x_2607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___y_2587_, v___x_2605_, v___x_2606_, v___x_2592_, v___y_2588_);
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_dec_ref(v___x_2607_);
v___y_2562_ = v___y_2588_;
v_fst_2563_ = v_val_2589_;
v_snd_2564_ = v___y_2586_;
goto v___jp_2561_;
}
else
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2615_; 
lean_dec_ref(v_val_2589_);
lean_dec(v___y_2586_);
v_a_2608_ = lean_ctor_get(v___x_2607_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2610_ = v___x_2607_;
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v___x_2607_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2613_; 
if (v_isShared_2611_ == 0)
{
v___x_2613_ = v___x_2610_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_a_2608_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
}
}
}
v___jp_2616_:
{
if (lean_obj_tag(v___y_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2628_; 
v_a_2621_ = lean_ctor_get(v___y_2620_, 0);
v_isSharedCheck_2628_ = !lean_is_exclusive(v___y_2620_);
if (v_isSharedCheck_2628_ == 0)
{
v___x_2623_ = v___y_2620_;
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___y_2620_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2626_; 
if (v_isShared_2624_ == 0)
{
lean_ctor_set_tag(v___x_2623_, 1);
v___x_2626_ = v___x_2623_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v_a_2621_);
v___x_2626_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
v___y_2586_ = v___y_2617_;
v___y_2587_ = v___y_2618_;
v___y_2588_ = v___y_2619_;
v_val_2589_ = v___x_2626_;
goto v___jp_2585_;
}
}
}
else
{
lean_object* v_a_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2636_; 
v_a_2629_ = lean_ctor_get(v___y_2620_, 0);
v_isSharedCheck_2636_ = !lean_is_exclusive(v___y_2620_);
if (v_isSharedCheck_2636_ == 0)
{
v___x_2631_ = v___y_2620_;
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_a_2629_);
lean_dec(v___y_2620_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2634_; 
if (v_isShared_2632_ == 0)
{
lean_ctor_set_tag(v___x_2631_, 0);
v___x_2634_ = v___x_2631_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_a_2629_);
v___x_2634_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
v___y_2586_ = v___y_2617_;
v___y_2587_ = v___y_2618_;
v___y_2588_ = v___y_2619_;
v_val_2589_ = v___x_2634_;
goto v___jp_2585_;
}
}
}
}
v___jp_2642_:
{
lean_object* v_toWorkspaceConfig_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; uint8_t v___x_2652_; 
v_toWorkspaceConfig_2648_ = lean_ctor_get(v_config_2640_, 0);
v___x_2649_ = l_System_FilePath_normalize(v___y_2643_);
lean_inc_ref(v_toWorkspaceConfig_2648_);
v___x_2650_ = l_System_FilePath_normalize(v_toWorkspaceConfig_2648_);
lean_inc_ref(v___x_2650_);
v___x_2651_ = l_System_FilePath_normalize(v___x_2650_);
v___x_2652_ = lean_string_dec_eq(v___x_2649_, v___x_2651_);
lean_dec_ref(v___x_2651_);
lean_dec_ref(v___x_2649_);
if (v___x_2652_ == 0)
{
if (v_fst_2646_ == 0)
{
lean_dec_ref(v___x_2650_);
lean_dec_ref(v___y_2644_);
v___y_2557_ = v_snd_2647_;
goto v___jp_2556_;
}
else
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; uint8_t v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2653_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1));
v___x_2654_ = lean_string_append(v___x_2653_, v___y_2644_);
v___x_2655_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2));
v___x_2656_ = lean_string_append(v___x_2654_, v___x_2655_);
lean_inc_ref(v_dir_2639_);
v___x_2657_ = l_Lake_joinRelative(v_dir_2639_, v___x_2650_);
v___x_2658_ = lean_string_append(v___x_2656_, v___x_2657_);
v___x_2659_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_2660_ = lean_string_append(v___x_2658_, v___x_2659_);
v___x_2661_ = 1;
v___x_2662_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2662_, 0, v___x_2660_);
lean_ctor_set_uint8(v___x_2662_, sizeof(void*)*1, v___x_2661_);
lean_inc_ref(v___y_2645_);
v___x_2663_ = lean_apply_2(v___y_2645_, v___x_2662_, lean_box(0));
v___x_2664_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___x_2657_);
v___x_2665_ = l_Lake_createParentDirs(v___x_2657_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v___x_2666_; 
lean_dec_ref(v___x_2665_);
v___x_2666_ = lean_io_rename(v___y_2644_, v___x_2657_);
lean_dec_ref(v___x_2657_);
lean_dec_ref(v___y_2644_);
v___y_2617_ = v_snd_2647_;
v___y_2618_ = v___x_2664_;
v___y_2619_ = v___y_2645_;
v___y_2620_ = v___x_2666_;
goto v___jp_2616_;
}
else
{
lean_dec_ref(v___x_2657_);
lean_dec_ref(v___y_2644_);
v___y_2617_ = v_snd_2647_;
v___y_2618_ = v___x_2664_;
v___y_2619_ = v___y_2645_;
v___y_2620_ = v___x_2665_;
goto v___jp_2616_;
}
}
}
else
{
lean_dec_ref(v___x_2650_);
lean_dec_ref(v___y_2644_);
v___y_2557_ = v_snd_2647_;
goto v___jp_2556_;
}
}
v___jp_2667_:
{
if (lean_obj_tag(v_packagesDir_x3f_2668_) == 1)
{
lean_object* v_val_2671_; lean_object* v___x_2672_; uint8_t v___x_2673_; lean_object* v___x_2674_; uint8_t v___x_2675_; 
v_val_2671_ = lean_ctor_get(v_packagesDir_x3f_2668_, 0);
lean_inc_n(v_val_2671_, 2);
lean_dec_ref(v_packagesDir_x3f_2668_);
lean_inc_ref(v_dir_2639_);
v___x_2672_ = l_Lake_joinRelative(v_dir_2639_, v_val_2671_);
v___x_2673_ = l_System_FilePath_pathExists(v___x_2672_);
v___x_2674_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_2675_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_2675_ == 0)
{
v___y_2643_ = v_val_2671_;
v___y_2644_ = v___x_2672_;
v___y_2645_ = v___y_2670_;
v_fst_2646_ = v___x_2673_;
v_snd_2647_ = v___y_2669_;
goto v___jp_2642_;
}
else
{
lean_object* v___x_2676_; uint8_t v___x_2677_; 
v___x_2676_ = lean_box(0);
v___x_2677_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
if (v___x_2677_ == 0)
{
if (v___x_2675_ == 0)
{
v___y_2643_ = v_val_2671_;
v___y_2644_ = v___x_2672_;
v___y_2645_ = v___y_2670_;
v_fst_2646_ = v___x_2673_;
v_snd_2647_ = v___y_2669_;
goto v___jp_2642_;
}
else
{
size_t v___x_2678_; size_t v___x_2679_; lean_object* v___x_2680_; 
v___x_2678_ = ((size_t)0ULL);
v___x_2679_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8);
v___x_2680_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___x_2674_, v___x_2678_, v___x_2679_, v___x_2676_, v___y_2670_);
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_dec_ref(v___x_2680_);
v___y_2643_ = v_val_2671_;
v___y_2644_ = v___x_2672_;
v___y_2645_ = v___y_2670_;
v_fst_2646_ = v___x_2673_;
v_snd_2647_ = v___y_2669_;
goto v___jp_2642_;
}
else
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2688_; 
lean_dec_ref(v___x_2672_);
lean_dec(v_val_2671_);
lean_dec(v___y_2669_);
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2683_ = v___x_2680_;
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___x_2680_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2686_; 
if (v_isShared_2684_ == 0)
{
v___x_2686_ = v___x_2683_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2681_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
}
else
{
size_t v___x_2689_; size_t v___x_2690_; lean_object* v___x_2691_; 
v___x_2689_ = ((size_t)0ULL);
v___x_2690_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8);
v___x_2691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___x_2674_, v___x_2689_, v___x_2690_, v___x_2676_, v___y_2670_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_dec_ref(v___x_2691_);
v___y_2643_ = v_val_2671_;
v___y_2644_ = v___x_2672_;
v___y_2645_ = v___y_2670_;
v_fst_2646_ = v___x_2673_;
v_snd_2647_ = v___y_2669_;
goto v___jp_2642_;
}
else
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
lean_dec_ref(v___x_2672_);
lean_dec(v_val_2671_);
lean_dec(v___y_2669_);
v_a_2692_ = lean_ctor_get(v___x_2691_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___x_2691_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2691_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2697_; 
if (v_isShared_2695_ == 0)
{
v___x_2697_ = v___x_2694_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_a_2692_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
}
}
}
else
{
lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; 
lean_dec(v_packagesDir_x3f_2668_);
v___x_2700_ = lean_box(0);
v___x_2701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2700_);
lean_ctor_set(v___x_2701_, 1, v___y_2669_);
v___x_2702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2702_, 0, v___x_2701_);
return v___x_2702_;
}
}
v___jp_2703_:
{
lean_object* v_packagesDir_x3f_2707_; 
v_packagesDir_x3f_2707_ = lean_ctor_get(v___y_2704_, 2);
lean_inc(v_packagesDir_x3f_2707_);
lean_dec_ref(v___y_2704_);
v_packagesDir_x3f_2668_ = v_packagesDir_x3f_2707_;
v___y_2669_ = v___y_2705_;
v___y_2670_ = v___y_2706_;
goto v___jp_2667_;
}
v___jp_2708_:
{
if (lean_obj_tag(v___y_2710_) == 0)
{
lean_object* v_a_2711_; lean_object* v_snd_2712_; 
v_a_2711_ = lean_ctor_get(v___y_2710_, 0);
lean_inc(v_a_2711_);
lean_dec_ref(v___y_2710_);
v_snd_2712_ = lean_ctor_get(v_a_2711_, 1);
lean_inc(v_snd_2712_);
lean_dec(v_a_2711_);
v___y_2704_ = v___y_2709_;
v___y_2705_ = v_snd_2712_;
v___y_2706_ = v_a_2551_;
goto v___jp_2703_;
}
else
{
lean_dec_ref(v___y_2709_);
return v___y_2710_;
}
}
v___jp_2715_:
{
if (lean_obj_tag(v_fst_2716_) == 0)
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2750_; 
v_a_2718_ = lean_ctor_get(v_fst_2716_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v_fst_2716_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2720_ = v_fst_2716_;
v_isShared_2721_ = v_isSharedCheck_2750_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v_fst_2716_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2750_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
if (lean_obj_tag(v_a_2718_) == 11)
{
lean_object* v___x_2722_; lean_object* v___x_2723_; uint8_t v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2729_; 
lean_dec_ref(v_a_2718_);
v___x_2722_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9));
v___x_2723_ = lean_string_append(v_rootName_2714_, v___x_2722_);
v___x_2724_ = 1;
v___x_2725_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2725_, 0, v___x_2723_);
lean_ctor_set_uint8(v___x_2725_, sizeof(void*)*1, v___x_2724_);
lean_inc_ref(v_a_2551_);
v___x_2726_ = lean_apply_2(v_a_2551_, v___x_2725_, lean_box(0));
v___x_2727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2726_);
lean_ctor_set(v___x_2727_, 1, v_snd_2717_);
if (v_isShared_2721_ == 0)
{
lean_ctor_set(v___x_2720_, 0, v___x_2727_);
v___x_2729_ = v___x_2720_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v___x_2727_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
else
{
if (lean_obj_tag(v_toUpdate_2553_) == 0)
{
lean_object* v___x_2731_; uint8_t v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2737_; 
lean_dec(v_snd_2717_);
lean_dec_ref(v_rootName_2714_);
v___x_2731_ = lean_io_error_to_string(v_a_2718_);
v___x_2732_ = 3;
v___x_2733_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2733_, 0, v___x_2731_);
lean_ctor_set_uint8(v___x_2733_, sizeof(void*)*1, v___x_2732_);
lean_inc_ref(v_a_2551_);
v___x_2734_ = lean_apply_2(v_a_2551_, v___x_2733_, lean_box(0));
v___x_2735_ = lean_box(0);
if (v_isShared_2721_ == 0)
{
lean_ctor_set_tag(v___x_2720_, 1);
lean_ctor_set(v___x_2720_, 0, v___x_2735_);
v___x_2737_ = v___x_2720_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v___x_2735_);
v___x_2737_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
return v___x_2737_;
}
}
else
{
lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; uint8_t v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2748_; 
v___x_2739_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__10));
v___x_2740_ = lean_string_append(v_rootName_2714_, v___x_2739_);
v___x_2741_ = lean_io_error_to_string(v_a_2718_);
v___x_2742_ = lean_string_append(v___x_2740_, v___x_2741_);
lean_dec_ref(v___x_2741_);
v___x_2743_ = 2;
v___x_2744_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2744_, 0, v___x_2742_);
lean_ctor_set_uint8(v___x_2744_, sizeof(void*)*1, v___x_2743_);
lean_inc_ref(v_a_2551_);
v___x_2745_ = lean_apply_2(v_a_2551_, v___x_2744_, lean_box(0));
v___x_2746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2745_);
lean_ctor_set(v___x_2746_, 1, v_snd_2717_);
if (v_isShared_2721_ == 0)
{
lean_ctor_set(v___x_2720_, 0, v___x_2746_);
v___x_2748_ = v___x_2720_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v___x_2746_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
return v___x_2748_;
}
}
}
}
}
else
{
lean_dec_ref(v_rootName_2714_);
if (lean_obj_tag(v_toUpdate_2553_) == 0)
{
lean_object* v_a_2751_; lean_object* v_packagesDir_x3f_2752_; lean_object* v_packages_2753_; lean_object* v___x_2754_; uint8_t v___x_2755_; 
v_a_2751_ = lean_ctor_get(v_fst_2716_, 0);
lean_inc(v_a_2751_);
lean_dec_ref(v_fst_2716_);
v_packagesDir_x3f_2752_ = lean_ctor_get(v_a_2751_, 2);
v_packages_2753_ = lean_ctor_get(v_a_2751_, 3);
v___x_2754_ = lean_array_get_size(v_packages_2753_);
v___x_2755_ = lean_nat_dec_lt(v___x_2584_, v___x_2754_);
if (v___x_2755_ == 0)
{
lean_inc(v_packagesDir_x3f_2752_);
lean_dec(v_a_2751_);
v_packagesDir_x3f_2668_ = v_packagesDir_x3f_2752_;
v___y_2669_ = v_snd_2717_;
v___y_2670_ = v_a_2551_;
goto v___jp_2667_;
}
else
{
lean_object* v___x_2756_; uint8_t v___x_2757_; 
v___x_2756_ = lean_box(0);
v___x_2757_ = lean_nat_dec_le(v___x_2754_, v___x_2754_);
if (v___x_2757_ == 0)
{
if (v___x_2755_ == 0)
{
lean_inc(v_packagesDir_x3f_2752_);
lean_dec(v_a_2751_);
v_packagesDir_x3f_2668_ = v_packagesDir_x3f_2752_;
v___y_2669_ = v_snd_2717_;
v___y_2670_ = v_a_2551_;
goto v___jp_2667_;
}
else
{
size_t v___x_2758_; size_t v___x_2759_; lean_object* v___x_2760_; 
v___x_2758_ = ((size_t)0ULL);
v___x_2759_ = lean_usize_of_nat(v___x_2754_);
v___x_2760_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___redArg(v_toUpdate_2553_, v_packages_2753_, v___x_2758_, v___x_2759_, v___x_2756_, v_snd_2717_);
v___y_2709_ = v_a_2751_;
v___y_2710_ = v___x_2760_;
goto v___jp_2708_;
}
}
else
{
size_t v___x_2761_; size_t v___x_2762_; lean_object* v___x_2763_; 
v___x_2761_ = ((size_t)0ULL);
v___x_2762_ = lean_usize_of_nat(v___x_2754_);
v___x_2763_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___redArg(v_toUpdate_2553_, v_packages_2753_, v___x_2761_, v___x_2762_, v___x_2756_, v_snd_2717_);
v___y_2709_ = v_a_2751_;
v___y_2710_ = v___x_2763_;
goto v___jp_2708_;
}
}
}
else
{
lean_object* v_a_2764_; 
v_a_2764_ = lean_ctor_get(v_fst_2716_, 0);
lean_inc(v_a_2764_);
lean_dec_ref(v_fst_2716_);
v___y_2704_ = v_a_2764_;
v___y_2705_ = v_snd_2717_;
v___y_2706_ = v_a_2551_;
goto v___jp_2703_;
}
}
}
v___jp_2767_:
{
uint8_t v___x_2769_; 
v___x_2769_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_2769_ == 0)
{
v_fst_2716_ = v_val_2768_;
v_snd_2717_ = v_a_2554_;
goto v___jp_2715_;
}
else
{
lean_object* v___x_2770_; uint8_t v___x_2771_; 
v___x_2770_ = lean_box(0);
v___x_2771_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
if (v___x_2771_ == 0)
{
if (v___x_2769_ == 0)
{
v_fst_2716_ = v_val_2768_;
v_snd_2717_ = v_a_2554_;
goto v___jp_2715_;
}
else
{
size_t v___x_2772_; size_t v___x_2773_; lean_object* v___x_2774_; 
v___x_2772_ = ((size_t)0ULL);
v___x_2773_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8);
v___x_2774_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___x_2766_, v___x_2772_, v___x_2773_, v___x_2770_, v_a_2551_);
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_dec_ref(v___x_2774_);
v_fst_2716_ = v_val_2768_;
v_snd_2717_ = v_a_2554_;
goto v___jp_2715_;
}
else
{
lean_object* v_a_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2782_; 
lean_dec_ref(v_val_2768_);
lean_dec_ref(v_rootName_2714_);
lean_dec(v_a_2554_);
v_a_2775_ = lean_ctor_get(v___x_2774_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2774_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2777_ = v___x_2774_;
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_a_2775_);
lean_dec(v___x_2774_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2780_; 
if (v_isShared_2778_ == 0)
{
v___x_2780_ = v___x_2777_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_a_2775_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
}
}
}
}
}
else
{
size_t v___x_2783_; size_t v___x_2784_; lean_object* v___x_2785_; 
v___x_2783_ = ((size_t)0ULL);
v___x_2784_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8);
v___x_2785_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v___x_2766_, v___x_2783_, v___x_2784_, v___x_2770_, v_a_2551_);
if (lean_obj_tag(v___x_2785_) == 0)
{
lean_dec_ref(v___x_2785_);
v_fst_2716_ = v_val_2768_;
v_snd_2717_ = v_a_2554_;
goto v___jp_2715_;
}
else
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2793_; 
lean_dec_ref(v_val_2768_);
lean_dec_ref(v_rootName_2714_);
lean_dec(v_a_2554_);
v_a_2786_ = lean_ctor_get(v___x_2785_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2788_ = v___x_2785_;
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v___x_2785_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2791_; 
if (v_isShared_2789_ == 0)
{
v___x_2791_ = v___x_2788_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_a_2786_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
return v___x_2791_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___boxed(lean_object* v_a_2811_, lean_object* v_ws_2812_, lean_object* v_toUpdate_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_2811_, v_ws_2812_, v_toUpdate_2813_, v_a_2814_);
lean_dec(v_toUpdate_2813_);
lean_dec_ref(v_ws_2812_);
lean_dec_ref(v_a_2811_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8(lean_object* v_a_2817_, lean_object* v_ws_2818_, lean_object* v_rootDeps_2819_){
_start:
{
lean_object* v___y_2822_; lean_object* v_lakeEnv_2827_; lean_object* v_lakeArgs_x3f_2828_; lean_object* v_packages_2829_; lean_object* v___y_2831_; lean_object* v___y_2832_; uint8_t v___y_2833_; lean_object* v___y_2834_; lean_object* v___y_2978_; lean_object* v___y_2979_; uint8_t v___y_2980_; lean_object* v___x_2983_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2997_; lean_object* v___y_2998_; uint8_t v___y_2999_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3003_; lean_object* v___y_3011_; lean_object* v___y_3012_; uint8_t v___y_3013_; lean_object* v___y_3014_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___x_3019_; lean_object* v_baseName_3020_; lean_object* v_dir_3021_; lean_object* v_config_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v_lakeEnv_2827_ = lean_ctor_get(v_ws_2818_, 0);
lean_inc_ref(v_lakeEnv_2827_);
v_lakeArgs_x3f_2828_ = lean_ctor_get(v_ws_2818_, 3);
lean_inc(v_lakeArgs_x3f_2828_);
v_packages_2829_ = lean_ctor_get(v_ws_2818_, 4);
lean_inc_ref(v_packages_2829_);
lean_dec_ref(v_ws_2818_);
v___x_2983_ = lean_unsigned_to_nat(0u);
v___x_3019_ = lean_array_fget(v_packages_2829_, v___x_2983_);
lean_dec_ref(v_packages_2829_);
v_baseName_3020_ = lean_ctor_get(v___x_3019_, 1);
lean_inc(v_baseName_3020_);
v_dir_3021_ = lean_ctor_get(v___x_3019_, 4);
lean_inc_ref_n(v_dir_3021_, 2);
v_config_3022_ = lean_ctor_get(v___x_3019_, 6);
lean_inc_ref(v_config_3022_);
lean_dec(v___x_3019_);
v___x_3023_ = l_Lake_toolchainFileName;
v___x_3024_ = l_System_FilePath_join(v_dir_3021_, v___x_3023_);
v___x_3025_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_3024_);
lean_dec_ref(v___x_3024_);
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_object* v_a_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3084_; 
v_a_3026_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3028_ = v___x_3025_;
v_isShared_3029_ = v_isSharedCheck_3084_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_a_3026_);
lean_dec(v___x_3025_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3084_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v_src_3031_; lean_object* v_tc_x3f_3032_; lean_object* v_clashes_3033_; uint8_t v_fixed_3034_; lean_object* v___y_3058_; uint8_t v_fixedToolchain_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; uint8_t v___x_3075_; 
v_fixedToolchain_3072_ = lean_ctor_get_uint8(v_config_3022_, sizeof(void*)*26 + 6);
lean_dec_ref(v_config_3022_);
v___x_3073_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20));
v___x_3074_ = lean_array_get_size(v_rootDeps_2819_);
v___x_3075_ = lean_nat_dec_lt(v___x_2983_, v___x_3074_);
if (v___x_3075_ == 0)
{
lean_inc(v_a_3026_);
v_src_3031_ = v_baseName_3020_;
v_tc_x3f_3032_ = v_a_3026_;
v_clashes_3033_ = v___x_3073_;
v_fixed_3034_ = v_fixedToolchain_3072_;
goto v___jp_3030_;
}
else
{
lean_object* v___x_3076_; uint8_t v___x_3077_; 
lean_inc(v_a_3026_);
lean_inc(v_baseName_3020_);
v___x_3076_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3076_, 0, v_baseName_3020_);
lean_ctor_set(v___x_3076_, 1, v_a_3026_);
lean_ctor_set(v___x_3076_, 2, v___x_3073_);
lean_ctor_set_uint8(v___x_3076_, sizeof(void*)*3, v_fixedToolchain_3072_);
v___x_3077_ = lean_nat_dec_le(v___x_3074_, v___x_3074_);
if (v___x_3077_ == 0)
{
if (v___x_3075_ == 0)
{
lean_dec_ref(v___x_3076_);
lean_inc(v_a_3026_);
v_src_3031_ = v_baseName_3020_;
v_tc_x3f_3032_ = v_a_3026_;
v_clashes_3033_ = v___x_3073_;
v_fixed_3034_ = v_fixedToolchain_3072_;
goto v___jp_3030_;
}
else
{
size_t v___x_3078_; size_t v___x_3079_; lean_object* v___x_3080_; 
lean_dec(v_baseName_3020_);
v___x_3078_ = ((size_t)0ULL);
v___x_3079_ = lean_usize_of_nat(v___x_3074_);
lean_inc_ref(v_dir_3021_);
v___x_3080_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_3021_, v_rootDeps_2819_, v___x_3078_, v___x_3079_, v___x_3076_, v_a_2817_);
v___y_3058_ = v___x_3080_;
goto v___jp_3057_;
}
}
else
{
size_t v___x_3081_; size_t v___x_3082_; lean_object* v___x_3083_; 
lean_dec(v_baseName_3020_);
v___x_3081_ = ((size_t)0ULL);
v___x_3082_ = lean_usize_of_nat(v___x_3074_);
lean_inc_ref(v_dir_3021_);
v___x_3083_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_3021_, v_rootDeps_2819_, v___x_3081_, v___x_3082_, v___x_3076_, v_a_2817_);
v___y_3058_ = v___x_3083_;
goto v___jp_3057_;
}
}
v___jp_3030_:
{
lean_object* v___x_3035_; uint8_t v___x_3036_; 
v___x_3035_ = lean_array_get_size(v_clashes_3033_);
v___x_3036_ = lean_nat_dec_lt(v___x_2983_, v___x_3035_);
if (v___x_3036_ == 0)
{
lean_dec_ref(v_clashes_3033_);
lean_dec(v_src_3031_);
if (lean_obj_tag(v_tc_x3f_3032_) == 1)
{
lean_object* v_val_3037_; lean_object* v_rootToolchainFile_3038_; 
v_val_3037_ = lean_ctor_get(v_tc_x3f_3032_, 0);
lean_inc(v_val_3037_);
lean_dec_ref(v_tc_x3f_3032_);
v_rootToolchainFile_3038_ = l_Lake_joinRelative(v_dir_3021_, v___x_3023_);
if (lean_obj_tag(v_a_3026_) == 0)
{
lean_del_object(v___x_3028_);
v___y_2978_ = v_val_3037_;
v___y_2979_ = v_rootToolchainFile_3038_;
v___y_2980_ = v___x_3036_;
goto v___jp_2977_;
}
else
{
lean_object* v_val_3039_; uint8_t v___x_3040_; 
v_val_3039_ = lean_ctor_get(v_a_3026_, 0);
lean_inc(v_val_3039_);
lean_dec_ref(v_a_3026_);
lean_inc(v_val_3037_);
v___x_3040_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_3039_, v_val_3037_);
if (v___x_3040_ == 0)
{
lean_del_object(v___x_3028_);
v___y_2978_ = v_val_3037_;
v___y_2979_ = v_rootToolchainFile_3038_;
v___y_2980_ = v___x_3040_;
goto v___jp_2977_;
}
else
{
lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3045_; 
lean_dec_ref(v_rootToolchainFile_3038_);
lean_dec(v_val_3037_);
lean_dec(v_lakeArgs_x3f_2828_);
lean_dec_ref(v_lakeEnv_2827_);
v___x_3041_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16));
lean_inc_ref(v_a_2817_);
v___x_3042_ = lean_apply_2(v_a_2817_, v___x_3041_, lean_box(0));
v___x_3043_ = lean_box(0);
if (v_isShared_3029_ == 0)
{
lean_ctor_set(v___x_3028_, 0, v___x_3043_);
v___x_3045_ = v___x_3028_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v___x_3043_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
else
{
lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3050_; 
lean_dec(v_tc_x3f_3032_);
lean_dec(v_a_3026_);
lean_dec_ref(v_dir_3021_);
lean_dec(v_lakeArgs_x3f_2828_);
lean_dec_ref(v_lakeEnv_2827_);
v___x_3047_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18));
lean_inc_ref(v_a_2817_);
v___x_3048_ = lean_apply_2(v_a_2817_, v___x_3047_, lean_box(0));
if (v_isShared_3029_ == 0)
{
lean_ctor_set(v___x_3028_, 0, v___x_3048_);
v___x_3050_ = v___x_3028_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v___x_3048_);
v___x_3050_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
return v___x_3050_;
}
}
}
else
{
lean_del_object(v___x_3028_);
lean_dec(v_a_3026_);
lean_dec_ref(v_dir_3021_);
lean_dec(v_lakeArgs_x3f_2828_);
lean_dec_ref(v_lakeEnv_2827_);
if (lean_obj_tag(v_tc_x3f_3032_) == 1)
{
if (v_fixed_3034_ == 0)
{
lean_object* v_val_3052_; lean_object* v___x_3053_; 
v_val_3052_ = lean_ctor_get(v_tc_x3f_3032_, 0);
lean_inc(v_val_3052_);
lean_dec_ref(v_tc_x3f_3032_);
v___x_3053_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_3011_ = v_src_3031_;
v___y_3012_ = v_val_3052_;
v___y_3013_ = v___x_3036_;
v___y_3014_ = v_clashes_3033_;
v___y_3015_ = v___x_3035_;
v___y_3016_ = v___x_3053_;
goto v___jp_3010_;
}
else
{
lean_object* v_val_3054_; lean_object* v___x_3055_; 
v_val_3054_ = lean_ctor_get(v_tc_x3f_3032_, 0);
lean_inc(v_val_3054_);
lean_dec_ref(v_tc_x3f_3032_);
v___x_3055_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_3011_ = v_src_3031_;
v___y_3012_ = v_val_3054_;
v___y_3013_ = v___x_3036_;
v___y_3014_ = v_clashes_3033_;
v___y_3015_ = v___x_3035_;
v___y_3016_ = v___x_3055_;
goto v___jp_3010_;
}
}
else
{
lean_object* v___x_3056_; 
lean_dec(v_tc_x3f_3032_);
lean_dec(v_src_3031_);
v___x_3056_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19));
v___y_2985_ = v_clashes_3033_;
v___y_2986_ = v___x_3035_;
v___y_2987_ = v___x_3056_;
goto v___jp_2984_;
}
}
}
v___jp_3057_:
{
if (lean_obj_tag(v___y_3058_) == 0)
{
lean_object* v_a_3059_; lean_object* v_src_3060_; lean_object* v_tc_x3f_3061_; lean_object* v_clashes_3062_; uint8_t v_fixed_3063_; 
v_a_3059_ = lean_ctor_get(v___y_3058_, 0);
lean_inc(v_a_3059_);
lean_dec_ref(v___y_3058_);
v_src_3060_ = lean_ctor_get(v_a_3059_, 0);
lean_inc(v_src_3060_);
v_tc_x3f_3061_ = lean_ctor_get(v_a_3059_, 1);
lean_inc(v_tc_x3f_3061_);
v_clashes_3062_ = lean_ctor_get(v_a_3059_, 2);
lean_inc_ref(v_clashes_3062_);
v_fixed_3063_ = lean_ctor_get_uint8(v_a_3059_, sizeof(void*)*3);
lean_dec(v_a_3059_);
v_src_3031_ = v_src_3060_;
v_tc_x3f_3032_ = v_tc_x3f_3061_;
v_clashes_3033_ = v_clashes_3062_;
v_fixed_3034_ = v_fixed_3063_;
goto v___jp_3030_;
}
else
{
lean_object* v_a_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3071_; 
lean_del_object(v___x_3028_);
lean_dec(v_a_3026_);
lean_dec_ref(v_dir_3021_);
lean_dec(v_lakeArgs_x3f_2828_);
lean_dec_ref(v_lakeEnv_2827_);
v_a_3064_ = lean_ctor_get(v___y_3058_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v___y_3058_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3066_ = v___y_3058_;
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_a_3064_);
lean_dec(v___y_3058_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3069_; 
if (v_isShared_3067_ == 0)
{
v___x_3069_ = v___x_3066_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_a_3064_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
return v___x_3069_;
}
}
}
}
}
}
else
{
lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3097_; 
lean_dec_ref(v_config_3022_);
lean_dec_ref(v_dir_3021_);
lean_dec(v_baseName_3020_);
lean_dec(v_lakeArgs_x3f_2828_);
lean_dec_ref(v_lakeEnv_2827_);
v_a_3085_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3087_ = v___x_3025_;
v_isShared_3088_ = v_isSharedCheck_3097_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v___x_3025_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3097_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3089_; uint8_t v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3095_; 
v___x_3089_ = lean_io_error_to_string(v_a_3085_);
v___x_3090_ = 3;
v___x_3091_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3091_, 0, v___x_3089_);
lean_ctor_set_uint8(v___x_3091_, sizeof(void*)*1, v___x_3090_);
lean_inc_ref(v_a_2817_);
v___x_3092_ = lean_apply_2(v_a_2817_, v___x_3091_, lean_box(0));
v___x_3093_ = lean_box(0);
if (v_isShared_3088_ == 0)
{
lean_ctor_set(v___x_3087_, 0, v___x_3093_);
v___x_3095_ = v___x_3087_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v___x_3093_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
}
v___jp_2821_:
{
uint8_t v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; 
v___x_2823_ = 2;
v___x_2824_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2824_, 0, v___y_2822_);
lean_ctor_set_uint8(v___x_2824_, sizeof(void*)*1, v___x_2823_);
lean_inc_ref(v_a_2817_);
v___x_2825_ = lean_apply_2(v_a_2817_, v___x_2824_, lean_box(0));
v___x_2826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2825_);
return v___x_2826_;
}
v___jp_2830_:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; uint8_t v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
lean_inc_ref(v___y_2831_);
v___x_2835_ = lean_string_append(v___y_2831_, v___y_2834_);
v___x_2836_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_2837_ = lean_string_append(v___x_2835_, v___x_2836_);
v___x_2838_ = 1;
v___x_2839_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2839_, 0, v___x_2837_);
lean_ctor_set_uint8(v___x_2839_, sizeof(void*)*1, v___x_2838_);
lean_inc_ref(v_a_2817_);
v___x_2840_ = lean_apply_2(v_a_2817_, v___x_2839_, lean_box(0));
v___x_2841_ = l_IO_FS_writeFile(v___y_2832_, v___y_2834_);
lean_dec_ref(v___y_2832_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_dec_ref(v___x_2841_);
if (lean_obj_tag(v_lakeArgs_x3f_2828_) == 1)
{
lean_object* v_elan_x3f_2842_; 
v_elan_x3f_2842_ = lean_ctor_get(v_lakeEnv_2827_, 2);
if (lean_obj_tag(v_elan_x3f_2842_) == 1)
{
lean_object* v_val_2843_; lean_object* v_val_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v_elan_2848_; uint8_t v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; 
v_val_2843_ = lean_ctor_get(v_lakeArgs_x3f_2828_, 0);
lean_inc(v_val_2843_);
lean_dec_ref(v_lakeArgs_x3f_2828_);
v_val_2844_ = lean_ctor_get(v_elan_x3f_2842_, 0);
v___x_2845_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1));
lean_inc_ref(v_a_2817_);
v___x_2846_ = lean_apply_2(v_a_2817_, v___x_2845_, lean_box(0));
v___x_2847_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2));
v_elan_2848_ = lean_ctor_get(v_val_2844_, 1);
lean_inc_ref(v_elan_2848_);
v___x_2849_ = 1;
v___x_2850_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5));
v___x_2851_ = lean_unsigned_to_nat(4u);
v___x_2852_ = lean_mk_empty_array_with_capacity(v___x_2851_);
lean_dec_ref(v___x_2852_);
v___x_2853_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7);
v___x_2854_ = lean_array_push(v___x_2853_, v___y_2834_);
v___x_2855_ = lean_array_push(v___x_2854_, v___x_2850_);
v___x_2856_ = l_Array_append___redArg(v___x_2855_, v_val_2843_);
lean_dec(v_val_2843_);
v___x_2857_ = lean_box(0);
v___x_2858_ = l_Lake_Env_noToolchainVars(v_lakeEnv_2827_);
v___x_2859_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_2859_, 0, v___x_2847_);
lean_ctor_set(v___x_2859_, 1, v_elan_2848_);
lean_ctor_set(v___x_2859_, 2, v___x_2856_);
lean_ctor_set(v___x_2859_, 3, v___x_2857_);
lean_ctor_set(v___x_2859_, 4, v___x_2858_);
lean_ctor_set_uint8(v___x_2859_, sizeof(void*)*5, v___x_2849_);
lean_ctor_set_uint8(v___x_2859_, sizeof(void*)*5 + 1, v___y_2833_);
v___x_2860_ = lean_io_process_spawn(v___x_2859_);
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v_a_2861_; lean_object* v___x_2862_; 
v_a_2861_ = lean_ctor_get(v___x_2860_, 0);
lean_inc(v_a_2861_);
lean_dec_ref(v___x_2860_);
v___x_2862_ = lean_io_process_child_wait(v___x_2847_, v_a_2861_);
lean_dec(v_a_2861_);
if (lean_obj_tag(v___x_2862_) == 0)
{
lean_object* v_a_2863_; uint32_t v___x_2864_; uint8_t v___x_2865_; lean_object* v___x_2866_; 
v_a_2863_ = lean_ctor_get(v___x_2862_, 0);
lean_inc(v_a_2863_);
lean_dec_ref(v___x_2862_);
v___x_2864_ = lean_unbox_uint32(v_a_2863_);
lean_dec(v_a_2863_);
v___x_2865_ = lean_uint32_to_uint8(v___x_2864_);
v___x_2866_ = lean_io_exit(v___x_2865_);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2874_; 
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2869_ = v___x_2866_;
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___x_2866_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2872_; 
if (v_isShared_2870_ == 0)
{
v___x_2872_ = v___x_2869_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2867_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2887_; 
v_a_2875_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2877_ = v___x_2866_;
v_isShared_2878_ = v_isSharedCheck_2887_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2866_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2887_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2879_; uint8_t v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2885_; 
v___x_2879_ = lean_io_error_to_string(v_a_2875_);
v___x_2880_ = 3;
v___x_2881_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2881_, 0, v___x_2879_);
lean_ctor_set_uint8(v___x_2881_, sizeof(void*)*1, v___x_2880_);
lean_inc_ref(v_a_2817_);
v___x_2882_ = lean_apply_2(v_a_2817_, v___x_2881_, lean_box(0));
v___x_2883_ = lean_box(0);
if (v_isShared_2878_ == 0)
{
lean_ctor_set(v___x_2877_, 0, v___x_2883_);
v___x_2885_ = v___x_2877_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v___x_2883_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
}
}
else
{
lean_object* v_a_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2900_; 
v_a_2888_ = lean_ctor_get(v___x_2862_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2862_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2890_ = v___x_2862_;
v_isShared_2891_ = v_isSharedCheck_2900_;
goto v_resetjp_2889_;
}
else
{
lean_inc(v_a_2888_);
lean_dec(v___x_2862_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2900_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v___x_2892_; uint8_t v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2898_; 
v___x_2892_ = lean_io_error_to_string(v_a_2888_);
v___x_2893_ = 3;
v___x_2894_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2894_, 0, v___x_2892_);
lean_ctor_set_uint8(v___x_2894_, sizeof(void*)*1, v___x_2893_);
lean_inc_ref(v_a_2817_);
v___x_2895_ = lean_apply_2(v_a_2817_, v___x_2894_, lean_box(0));
v___x_2896_ = lean_box(0);
if (v_isShared_2891_ == 0)
{
lean_ctor_set(v___x_2890_, 0, v___x_2896_);
v___x_2898_ = v___x_2890_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v___x_2896_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
}
else
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2913_; 
v_a_2901_ = lean_ctor_get(v___x_2860_, 0);
v_isSharedCheck_2913_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2903_ = v___x_2860_;
v_isShared_2904_ = v_isSharedCheck_2913_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___x_2860_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2913_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2905_; uint8_t v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2911_; 
v___x_2905_ = lean_io_error_to_string(v_a_2901_);
v___x_2906_ = 3;
v___x_2907_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2907_, 0, v___x_2905_);
lean_ctor_set_uint8(v___x_2907_, sizeof(void*)*1, v___x_2906_);
lean_inc_ref(v_a_2817_);
v___x_2908_ = lean_apply_2(v_a_2817_, v___x_2907_, lean_box(0));
v___x_2909_ = lean_box(0);
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 0, v___x_2909_);
v___x_2911_ = v___x_2903_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v___x_2909_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
}
}
else
{
lean_object* v___x_2914_; lean_object* v___x_2915_; uint8_t v___x_2916_; lean_object* v___x_2917_; 
lean_dec_ref(v_lakeArgs_x3f_2828_);
lean_dec_ref(v___y_2834_);
lean_dec_ref(v_lakeEnv_2827_);
v___x_2914_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9));
lean_inc_ref(v_a_2817_);
v___x_2915_ = lean_apply_2(v_a_2817_, v___x_2914_, lean_box(0));
v___x_2916_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10);
v___x_2917_ = lean_io_exit(v___x_2916_);
if (lean_obj_tag(v___x_2917_) == 0)
{
lean_object* v_a_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2925_; 
v_a_2918_ = lean_ctor_get(v___x_2917_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2917_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2920_ = v___x_2917_;
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_a_2918_);
lean_dec(v___x_2917_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2923_; 
if (v_isShared_2921_ == 0)
{
v___x_2923_ = v___x_2920_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v_a_2918_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
else
{
lean_object* v_a_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2938_; 
v_a_2926_ = lean_ctor_get(v___x_2917_, 0);
v_isSharedCheck_2938_ = !lean_is_exclusive(v___x_2917_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2928_ = v___x_2917_;
v_isShared_2929_ = v_isSharedCheck_2938_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_a_2926_);
lean_dec(v___x_2917_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2938_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2930_; uint8_t v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2936_; 
v___x_2930_ = lean_io_error_to_string(v_a_2926_);
v___x_2931_ = 3;
v___x_2932_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2932_, 0, v___x_2930_);
lean_ctor_set_uint8(v___x_2932_, sizeof(void*)*1, v___x_2931_);
lean_inc_ref(v_a_2817_);
v___x_2933_ = lean_apply_2(v_a_2817_, v___x_2932_, lean_box(0));
v___x_2934_ = lean_box(0);
if (v_isShared_2929_ == 0)
{
lean_ctor_set(v___x_2928_, 0, v___x_2934_);
v___x_2936_ = v___x_2928_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v___x_2934_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
}
}
}
else
{
lean_object* v___x_2939_; lean_object* v___x_2940_; uint8_t v___x_2941_; lean_object* v___x_2942_; 
lean_dec_ref(v___y_2834_);
lean_dec(v_lakeArgs_x3f_2828_);
lean_dec_ref(v_lakeEnv_2827_);
v___x_2939_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12));
lean_inc_ref(v_a_2817_);
v___x_2940_ = lean_apply_2(v_a_2817_, v___x_2939_, lean_box(0));
v___x_2941_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10);
v___x_2942_ = lean_io_exit(v___x_2941_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2950_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2945_ = v___x_2942_;
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___x_2942_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_a_2943_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
else
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2963_; 
v_a_2951_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2953_ = v___x_2942_;
v_isShared_2954_ = v_isSharedCheck_2963_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v___x_2942_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2963_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2955_; uint8_t v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2961_; 
v___x_2955_ = lean_io_error_to_string(v_a_2951_);
v___x_2956_ = 3;
v___x_2957_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2957_, 0, v___x_2955_);
lean_ctor_set_uint8(v___x_2957_, sizeof(void*)*1, v___x_2956_);
lean_inc_ref(v_a_2817_);
v___x_2958_ = lean_apply_2(v_a_2817_, v___x_2957_, lean_box(0));
v___x_2959_ = lean_box(0);
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 0, v___x_2959_);
v___x_2961_ = v___x_2953_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v___x_2959_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
}
}
else
{
lean_object* v_a_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2976_; 
lean_dec_ref(v___y_2834_);
lean_dec(v_lakeArgs_x3f_2828_);
lean_dec_ref(v_lakeEnv_2827_);
v_a_2964_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2966_ = v___x_2841_;
v_isShared_2967_ = v_isSharedCheck_2976_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_a_2964_);
lean_dec(v___x_2841_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2976_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2968_; uint8_t v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2974_; 
v___x_2968_ = lean_io_error_to_string(v_a_2964_);
v___x_2969_ = 3;
v___x_2970_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2970_, 0, v___x_2968_);
lean_ctor_set_uint8(v___x_2970_, sizeof(void*)*1, v___x_2969_);
lean_inc_ref(v_a_2817_);
v___x_2971_ = lean_apply_2(v_a_2817_, v___x_2970_, lean_box(0));
v___x_2972_ = lean_box(0);
if (v_isShared_2967_ == 0)
{
lean_ctor_set(v___x_2966_, 0, v___x_2972_);
v___x_2974_ = v___x_2966_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v___x_2972_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
return v___x_2974_;
}
}
}
}
v___jp_2977_:
{
lean_object* v___x_2981_; lean_object* v_toString_2982_; 
v___x_2981_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13));
v_toString_2982_ = lean_ctor_get(v___y_2978_, 0);
lean_inc_ref(v_toString_2982_);
lean_dec_ref(v___y_2978_);
v___y_2831_ = v___x_2981_;
v___y_2832_ = v___y_2979_;
v___y_2833_ = v___y_2980_;
v___y_2834_ = v_toString_2982_;
goto v___jp_2830_;
}
v___jp_2984_:
{
uint8_t v___x_2988_; 
v___x_2988_ = lean_nat_dec_lt(v___x_2983_, v___y_2986_);
if (v___x_2988_ == 0)
{
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
v___y_2822_ = v___y_2987_;
goto v___jp_2821_;
}
else
{
uint8_t v___x_2989_; 
v___x_2989_ = lean_nat_dec_le(v___y_2986_, v___y_2986_);
if (v___x_2989_ == 0)
{
if (v___x_2988_ == 0)
{
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
v___y_2822_ = v___y_2987_;
goto v___jp_2821_;
}
else
{
size_t v___x_2990_; size_t v___x_2991_; lean_object* v___x_2992_; 
v___x_2990_ = ((size_t)0ULL);
v___x_2991_ = lean_usize_of_nat(v___y_2986_);
lean_dec(v___y_2986_);
v___x_2992_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___y_2985_, v___x_2990_, v___x_2991_, v___y_2987_);
lean_dec_ref(v___y_2985_);
v___y_2822_ = v___x_2992_;
goto v___jp_2821_;
}
}
else
{
size_t v___x_2993_; size_t v___x_2994_; lean_object* v___x_2995_; 
v___x_2993_ = ((size_t)0ULL);
v___x_2994_ = lean_usize_of_nat(v___y_2986_);
lean_dec(v___y_2986_);
v___x_2995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___y_2985_, v___x_2993_, v___x_2994_, v___y_2987_);
lean_dec_ref(v___y_2985_);
v___y_2822_ = v___x_2995_;
goto v___jp_2821_;
}
}
}
v___jp_2996_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; 
lean_inc_ref(v___y_3000_);
v___x_3004_ = lean_string_append(v___y_3000_, v___y_3003_);
lean_dec_ref(v___y_3003_);
v___x_3005_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_3006_ = lean_string_append(v___x_3004_, v___x_3005_);
v___x_3007_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_2997_, v___y_2999_);
v___x_3008_ = lean_string_append(v___x_3006_, v___x_3007_);
lean_dec_ref(v___x_3007_);
v___x_3009_ = lean_string_append(v___x_3008_, v___y_2998_);
v___y_2985_ = v___y_3002_;
v___y_2986_ = v___y_3001_;
v___y_2987_ = v___x_3009_;
goto v___jp_2984_;
}
v___jp_3010_:
{
lean_object* v___x_3017_; lean_object* v_toString_3018_; 
v___x_3017_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14));
v_toString_3018_ = lean_ctor_get(v___y_3012_, 0);
lean_inc_ref(v_toString_3018_);
lean_dec_ref(v___y_3012_);
v___y_2997_ = v___y_3011_;
v___y_2998_ = v___y_3016_;
v___y_2999_ = v___y_3013_;
v___y_3000_ = v___x_3017_;
v___y_3001_ = v___y_3015_;
v___y_3002_ = v___y_3014_;
v___y_3003_ = v_toString_3018_;
goto v___jp_2996_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___boxed(lean_object* v_a_3098_, lean_object* v_ws_3099_, lean_object* v_rootDeps_3100_, lean_object* v_a_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8(v_a_3098_, v_ws_3099_, v_rootDeps_3100_);
lean_dec_ref(v_rootDeps_3100_);
lean_dec_ref(v_a_3098_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__13(lean_object* v___x_3103_, uint8_t v___x_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_){
_start:
{
if (lean_obj_tag(v_a_3105_) == 0)
{
lean_object* v_fst_3107_; lean_object* v_snd_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3117_; 
v_fst_3107_ = lean_ctor_get(v_a_3106_, 0);
v_snd_3108_ = lean_ctor_get(v_a_3106_, 1);
v_isSharedCheck_3117_ = !lean_is_exclusive(v_a_3106_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3110_ = v_a_3106_;
v_isShared_3111_ = v_isSharedCheck_3117_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_snd_3108_);
lean_inc(v_fst_3107_);
lean_dec(v_a_3106_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3117_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3115_; 
v___x_3112_ = l_List_reverse___redArg(v_fst_3107_);
v___x_3113_ = l_List_reverse___redArg(v_snd_3108_);
if (v_isShared_3111_ == 0)
{
lean_ctor_set(v___x_3110_, 1, v___x_3113_);
lean_ctor_set(v___x_3110_, 0, v___x_3112_);
v___x_3115_ = v___x_3110_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v___x_3112_);
lean_ctor_set(v_reuseFailAlloc_3116_, 1, v___x_3113_);
v___x_3115_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
return v___x_3115_;
}
}
}
else
{
lean_object* v_head_3118_; lean_object* v_tail_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3141_; 
v_head_3118_ = lean_ctor_get(v_a_3105_, 0);
v_tail_3119_ = lean_ctor_get(v_a_3105_, 1);
v_isSharedCheck_3141_ = !lean_is_exclusive(v_a_3105_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3121_ = v_a_3105_;
v_isShared_3122_ = v_isSharedCheck_3141_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_tail_3119_);
lean_inc(v_head_3118_);
lean_dec(v_a_3105_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3141_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v_fst_3123_; lean_object* v_snd_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3140_; 
v_fst_3123_ = lean_ctor_get(v_a_3106_, 0);
v_snd_3124_ = lean_ctor_get(v_a_3106_, 1);
v_isSharedCheck_3140_ = !lean_is_exclusive(v_a_3106_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3126_ = v_a_3106_;
v_isShared_3127_ = v_isSharedCheck_3140_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_snd_3124_);
lean_inc(v_fst_3123_);
lean_dec(v_a_3106_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3140_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
uint8_t v___x_3136_; 
v___x_3136_ = lean_name_eq(v_head_3118_, v___x_3103_);
if (v___x_3136_ == 0)
{
if (v___x_3104_ == 0)
{
goto v___jp_3128_;
}
else
{
lean_object* v___x_3137_; lean_object* v___x_3138_; 
lean_del_object(v___x_3126_);
lean_del_object(v___x_3121_);
v___x_3137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3137_, 0, v_head_3118_);
lean_ctor_set(v___x_3137_, 1, v_fst_3123_);
v___x_3138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3137_);
lean_ctor_set(v___x_3138_, 1, v_snd_3124_);
v_a_3105_ = v_tail_3119_;
v_a_3106_ = v___x_3138_;
goto _start;
}
}
else
{
goto v___jp_3128_;
}
v___jp_3128_:
{
lean_object* v___x_3130_; 
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 1, v_snd_3124_);
v___x_3130_ = v___x_3121_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_head_3118_);
lean_ctor_set(v_reuseFailAlloc_3135_, 1, v_snd_3124_);
v___x_3130_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
lean_object* v___x_3132_; 
if (v_isShared_3127_ == 0)
{
lean_ctor_set(v___x_3126_, 1, v___x_3130_);
v___x_3132_ = v___x_3126_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_fst_3123_);
lean_ctor_set(v_reuseFailAlloc_3134_, 1, v___x_3130_);
v___x_3132_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
v_a_3105_ = v_tail_3119_;
v_a_3106_ = v___x_3132_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__13___boxed(lean_object* v___x_3142_, lean_object* v___x_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_){
_start:
{
uint8_t v___x_44506__boxed_3146_; lean_object* v_res_3147_; 
v___x_44506__boxed_3146_ = lean_unbox(v___x_3143_);
v_res_3147_ = l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__13(v___x_3142_, v___x_44506__boxed_3146_, v_a_3144_, v_a_3145_);
lean_dec(v___x_3142_);
return v_res_3147_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7___lam__0(lean_object* v___x_3148_, lean_object* v_x_3149_){
_start:
{
lean_object* v_baseName_3150_; lean_object* v_name_3151_; uint8_t v___x_3152_; 
v_baseName_3150_ = lean_ctor_get(v_x_3149_, 1);
v_name_3151_ = lean_ctor_get(v___x_3148_, 0);
v___x_3152_ = lean_name_eq(v_baseName_3150_, v_name_3151_);
return v___x_3152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7___lam__0___boxed(lean_object* v___x_3153_, lean_object* v_x_3154_){
_start:
{
uint8_t v_res_3155_; lean_object* v_r_3156_; 
v_res_3155_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7___lam__0(v___x_3153_, v_x_3154_);
lean_dec_ref(v_x_3154_);
lean_dec_ref(v___x_3153_);
v_r_3156_ = lean_box(v_res_3155_);
return v_r_3156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7(lean_object* v_pkg_3157_, lean_object* v_leanOpts_3158_, uint8_t v_reconfigure_3159_, lean_object* v_as_3160_, size_t v_i_3161_, size_t v_stop_3162_, lean_object* v_b_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_){
_start:
{
uint8_t v___x_3170_; 
v___x_3170_ = lean_usize_dec_eq(v_i_3161_, v_stop_3162_);
if (v___x_3170_ == 0)
{
lean_object* v_ws_3171_; lean_object* v_depIdxs_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3287_; 
v_ws_3171_ = lean_ctor_get(v_b_3163_, 0);
v_depIdxs_3172_ = lean_ctor_get(v_b_3163_, 1);
v_isSharedCheck_3287_ = !lean_is_exclusive(v_b_3163_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3174_ = v_b_3163_;
v_isShared_3175_ = v_isSharedCheck_3287_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_depIdxs_3172_);
lean_inc(v_ws_3171_);
lean_dec(v_b_3163_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3287_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v_packages_3176_; size_t v___x_3177_; size_t v___x_3178_; lean_object* v___x_3179_; lean_object* v___f_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
v_packages_3176_ = lean_ctor_get(v_ws_3171_, 4);
v___x_3177_ = ((size_t)1ULL);
v___x_3178_ = lean_usize_sub(v_i_3161_, v___x_3177_);
v___x_3179_ = lean_array_uget_borrowed(v_as_3160_, v___x_3178_);
lean_inc(v___x_3179_);
v___f_3180_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3180_, 0, v___x_3179_);
v___x_3181_ = lean_unsigned_to_nat(0u);
v___x_3182_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_3180_, v_packages_3176_, v___x_3181_);
if (lean_obj_tag(v___x_3182_) == 1)
{
lean_object* v_val_3183_; lean_object* v___x_3184_; lean_object* v___x_3186_; 
v_val_3183_ = lean_ctor_get(v___x_3182_, 0);
lean_inc(v_val_3183_);
lean_dec_ref(v___x_3182_);
v___x_3184_ = lean_array_push(v_depIdxs_3172_, v_val_3183_);
if (v_isShared_3175_ == 0)
{
lean_ctor_set(v___x_3174_, 1, v___x_3184_);
v___x_3186_ = v___x_3174_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_ws_3171_);
lean_ctor_set(v_reuseFailAlloc_3188_, 1, v___x_3184_);
v___x_3186_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
v_i_3161_ = v___x_3178_;
v_b_3163_ = v___x_3186_;
goto _start;
}
}
else
{
lean_object* v_baseName_3189_; lean_object* v_name_3190_; lean_object* v_opts_3191_; uint8_t v___x_3192_; 
lean_inc_ref(v_packages_3176_);
lean_dec(v___x_3182_);
v_baseName_3189_ = lean_ctor_get(v_pkg_3157_, 1);
v_name_3190_ = lean_ctor_get(v___x_3179_, 0);
v_opts_3191_ = lean_ctor_get(v___x_3179_, 4);
v___x_3192_ = lean_name_eq(v_baseName_3189_, v_name_3190_);
if (v___x_3192_ == 0)
{
lean_object* v___x_3193_; 
lean_inc_ref(v___y_3165_);
lean_inc_ref(v_ws_3171_);
lean_inc(v___x_3179_);
lean_inc_ref(v_pkg_3157_);
v___x_3193_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(v_pkg_3157_, v___x_3179_, v_ws_3171_, v___y_3164_, v___y_3165_);
if (lean_obj_tag(v___x_3193_) == 0)
{
lean_object* v_a_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3270_; 
v_a_3194_ = lean_ctor_get(v___x_3193_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3193_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3196_ = v___x_3193_;
v_isShared_3197_ = v_isSharedCheck_3270_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_a_3194_);
lean_dec(v___x_3193_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3270_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v_fst_3198_; lean_object* v_snd_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
v_fst_3198_ = lean_ctor_get(v_a_3194_, 0);
lean_inc(v_fst_3198_);
v_snd_3199_ = lean_ctor_get(v_a_3194_, 1);
lean_inc(v_snd_3199_);
lean_dec(v_a_3194_);
v___x_3200_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v_leanOpts_3158_);
lean_inc(v_opts_3191_);
v___x_3201_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_3171_, v_fst_3198_, v_opts_3191_, v_leanOpts_3158_, v_reconfigure_3159_, v___x_3200_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; lean_object* v_a_3203_; lean_object* v_wsIdx_3204_; lean_object* v___x_3205_; lean_object* v___x_3207_; 
lean_del_object(v___x_3196_);
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
lean_inc(v_a_3202_);
v_a_3203_ = lean_ctor_get(v___x_3201_, 1);
lean_inc(v_a_3203_);
lean_dec_ref(v___x_3201_);
v_wsIdx_3204_ = lean_array_get_size(v_packages_3176_);
lean_dec_ref(v_packages_3176_);
v___x_3205_ = lean_array_push(v_depIdxs_3172_, v_wsIdx_3204_);
if (v_isShared_3175_ == 0)
{
lean_ctor_set(v___x_3174_, 1, v___x_3205_);
lean_ctor_set(v___x_3174_, 0, v_a_3202_);
v___x_3207_ = v___x_3174_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v_a_3202_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v___x_3205_);
v___x_3207_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
lean_object* v___x_3208_; uint8_t v___x_3209_; 
v___x_3208_ = lean_array_get_size(v_a_3203_);
v___x_3209_ = lean_nat_dec_lt(v___x_3181_, v___x_3208_);
if (v___x_3209_ == 0)
{
lean_dec(v_a_3203_);
v_i_3161_ = v___x_3178_;
v_b_3163_ = v___x_3207_;
v___y_3164_ = v_snd_3199_;
goto _start;
}
else
{
lean_object* v___x_3211_; uint8_t v___x_3212_; 
v___x_3211_ = lean_box(0);
v___x_3212_ = lean_nat_dec_le(v___x_3208_, v___x_3208_);
if (v___x_3212_ == 0)
{
if (v___x_3209_ == 0)
{
lean_dec(v_a_3203_);
v_i_3161_ = v___x_3178_;
v_b_3163_ = v___x_3207_;
v___y_3164_ = v_snd_3199_;
goto _start;
}
else
{
size_t v___x_3214_; size_t v___x_3215_; lean_object* v___x_3216_; 
v___x_3214_ = ((size_t)0ULL);
v___x_3215_ = lean_usize_of_nat(v___x_3208_);
v___x_3216_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_3203_, v___x_3214_, v___x_3215_, v___x_3211_, v___y_3165_);
lean_dec(v_a_3203_);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_dec_ref(v___x_3216_);
v_i_3161_ = v___x_3178_;
v_b_3163_ = v___x_3207_;
v___y_3164_ = v_snd_3199_;
goto _start;
}
else
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3225_; 
lean_dec_ref(v___x_3207_);
lean_dec(v_snd_3199_);
lean_dec_ref(v_leanOpts_3158_);
lean_dec_ref(v_pkg_3157_);
v_a_3218_ = lean_ctor_get(v___x_3216_, 0);
v_isSharedCheck_3225_ = !lean_is_exclusive(v___x_3216_);
if (v_isSharedCheck_3225_ == 0)
{
v___x_3220_ = v___x_3216_;
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___x_3216_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3223_; 
if (v_isShared_3221_ == 0)
{
v___x_3223_ = v___x_3220_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v_a_3218_);
v___x_3223_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
return v___x_3223_;
}
}
}
}
}
else
{
size_t v___x_3226_; size_t v___x_3227_; lean_object* v___x_3228_; 
v___x_3226_ = ((size_t)0ULL);
v___x_3227_ = lean_usize_of_nat(v___x_3208_);
v___x_3228_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_3203_, v___x_3226_, v___x_3227_, v___x_3211_, v___y_3165_);
lean_dec(v_a_3203_);
if (lean_obj_tag(v___x_3228_) == 0)
{
lean_dec_ref(v___x_3228_);
v_i_3161_ = v___x_3178_;
v_b_3163_ = v___x_3207_;
v___y_3164_ = v_snd_3199_;
goto _start;
}
else
{
lean_object* v_a_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3237_; 
lean_dec_ref(v___x_3207_);
lean_dec(v_snd_3199_);
lean_dec_ref(v_leanOpts_3158_);
lean_dec_ref(v_pkg_3157_);
v_a_3230_ = lean_ctor_get(v___x_3228_, 0);
v_isSharedCheck_3237_ = !lean_is_exclusive(v___x_3228_);
if (v_isSharedCheck_3237_ == 0)
{
v___x_3232_ = v___x_3228_;
v_isShared_3233_ = v_isSharedCheck_3237_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_a_3230_);
lean_dec(v___x_3228_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3237_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
lean_object* v___x_3235_; 
if (v_isShared_3233_ == 0)
{
v___x_3235_ = v___x_3232_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3236_; 
v_reuseFailAlloc_3236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3236_, 0, v_a_3230_);
v___x_3235_ = v_reuseFailAlloc_3236_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
return v___x_3235_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3240_; uint8_t v___x_3241_; 
lean_dec(v_snd_3199_);
lean_dec_ref(v_packages_3176_);
lean_del_object(v___x_3174_);
lean_dec_ref(v_depIdxs_3172_);
lean_dec_ref(v_leanOpts_3158_);
lean_dec_ref(v_pkg_3157_);
v_a_3239_ = lean_ctor_get(v___x_3201_, 1);
lean_inc(v_a_3239_);
lean_dec_ref(v___x_3201_);
v___x_3240_ = lean_array_get_size(v_a_3239_);
v___x_3241_ = lean_nat_dec_lt(v___x_3181_, v___x_3240_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; lean_object* v___x_3244_; 
lean_dec(v_a_3239_);
v___x_3242_ = lean_box(0);
if (v_isShared_3197_ == 0)
{
lean_ctor_set_tag(v___x_3196_, 1);
lean_ctor_set(v___x_3196_, 0, v___x_3242_);
v___x_3244_ = v___x_3196_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v___x_3242_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
else
{
lean_object* v___x_3246_; uint8_t v___x_3247_; 
lean_del_object(v___x_3196_);
v___x_3246_ = lean_box(0);
v___x_3247_ = lean_nat_dec_le(v___x_3240_, v___x_3240_);
if (v___x_3247_ == 0)
{
if (v___x_3241_ == 0)
{
lean_dec(v_a_3239_);
goto v___jp_3167_;
}
else
{
size_t v___x_3248_; size_t v___x_3249_; lean_object* v___x_3250_; 
v___x_3248_ = ((size_t)0ULL);
v___x_3249_ = lean_usize_of_nat(v___x_3240_);
v___x_3250_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_3239_, v___x_3248_, v___x_3249_, v___x_3246_, v___y_3165_);
lean_dec(v_a_3239_);
if (lean_obj_tag(v___x_3250_) == 0)
{
lean_dec_ref(v___x_3250_);
goto v___jp_3167_;
}
else
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3258_; 
v_a_3251_ = lean_ctor_get(v___x_3250_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3253_ = v___x_3250_;
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3250_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3256_; 
if (v_isShared_3254_ == 0)
{
v___x_3256_ = v___x_3253_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_a_3251_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
}
}
else
{
size_t v___x_3259_; size_t v___x_3260_; lean_object* v___x_3261_; 
v___x_3259_ = ((size_t)0ULL);
v___x_3260_ = lean_usize_of_nat(v___x_3240_);
v___x_3261_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_3239_, v___x_3259_, v___x_3260_, v___x_3246_, v___y_3165_);
lean_dec(v_a_3239_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_dec_ref(v___x_3261_);
goto v___jp_3167_;
}
else
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3269_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3261_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3261_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
return v___x_3267_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3278_; 
lean_dec_ref(v_packages_3176_);
lean_del_object(v___x_3174_);
lean_dec_ref(v_depIdxs_3172_);
lean_dec_ref(v_ws_3171_);
lean_dec_ref(v_leanOpts_3158_);
lean_dec_ref(v_pkg_3157_);
v_a_3271_ = lean_ctor_get(v___x_3193_, 0);
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_3193_);
if (v_isSharedCheck_3278_ == 0)
{
v___x_3273_ = v___x_3193_;
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_a_3271_);
lean_dec(v___x_3193_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3276_; 
if (v_isShared_3274_ == 0)
{
v___x_3276_ = v___x_3273_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v_a_3271_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
return v___x_3276_;
}
}
}
}
else
{
lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; uint8_t v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
lean_inc(v_baseName_3189_);
lean_dec_ref(v_packages_3176_);
lean_del_object(v___x_3174_);
lean_dec_ref(v_depIdxs_3172_);
lean_dec_ref(v_ws_3171_);
lean_dec(v___y_3164_);
lean_dec_ref(v_leanOpts_3158_);
lean_dec_ref(v_pkg_3157_);
v___x_3279_ = l_Lean_Name_toString(v_baseName_3189_, v___x_3170_);
v___x_3280_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9___closed__0));
v___x_3281_ = lean_string_append(v___x_3279_, v___x_3280_);
v___x_3282_ = 3;
v___x_3283_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3283_, 0, v___x_3281_);
lean_ctor_set_uint8(v___x_3283_, sizeof(void*)*1, v___x_3282_);
lean_inc_ref(v___y_3165_);
v___x_3284_ = lean_apply_2(v___y_3165_, v___x_3283_, lean_box(0));
v___x_3285_ = lean_box(0);
v___x_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3285_);
return v___x_3286_;
}
}
}
}
else
{
lean_object* v___x_3288_; lean_object* v___x_3289_; 
lean_dec_ref(v_leanOpts_3158_);
lean_dec_ref(v_pkg_3157_);
v___x_3288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3288_, 0, v_b_3163_);
lean_ctor_set(v___x_3288_, 1, v___y_3164_);
v___x_3289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3288_);
return v___x_3289_;
}
v___jp_3167_:
{
lean_object* v___x_3168_; lean_object* v___x_3169_; 
v___x_3168_ = lean_box(0);
v___x_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3169_, 0, v___x_3168_);
return v___x_3169_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7___boxed(lean_object* v_pkg_3290_, lean_object* v_leanOpts_3291_, lean_object* v_reconfigure_3292_, lean_object* v_as_3293_, lean_object* v_i_3294_, lean_object* v_stop_3295_, lean_object* v_b_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_){
_start:
{
uint8_t v_reconfigure_boxed_3300_; size_t v_i_boxed_3301_; size_t v_stop_boxed_3302_; lean_object* v_res_3303_; 
v_reconfigure_boxed_3300_ = lean_unbox(v_reconfigure_3292_);
v_i_boxed_3301_ = lean_unbox_usize(v_i_3294_);
lean_dec(v_i_3294_);
v_stop_boxed_3302_ = lean_unbox_usize(v_stop_3295_);
lean_dec(v_stop_3295_);
v_res_3303_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7(v_pkg_3290_, v_leanOpts_3291_, v_reconfigure_boxed_3300_, v_as_3293_, v_i_boxed_3301_, v_stop_boxed_3302_, v_b_3296_, v___y_3297_, v___y_3298_);
lean_dec_ref(v___y_3298_);
lean_dec_ref(v_as_3293_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(lean_object* v___x_3304_, size_t v_sz_3305_, size_t v_i_3306_, lean_object* v_bs_3307_){
_start:
{
uint8_t v___x_3308_; 
v___x_3308_ = lean_usize_dec_lt(v_i_3306_, v_sz_3305_);
if (v___x_3308_ == 0)
{
return v_bs_3307_;
}
else
{
lean_object* v_v_3309_; lean_object* v___x_3310_; lean_object* v_bs_x27_3311_; lean_object* v___x_3312_; size_t v___x_3313_; size_t v___x_3314_; lean_object* v___x_3315_; 
v_v_3309_ = lean_array_uget(v_bs_3307_, v_i_3306_);
v___x_3310_ = lean_unsigned_to_nat(0u);
v_bs_x27_3311_ = lean_array_uset(v_bs_3307_, v_i_3306_, v___x_3310_);
v___x_3312_ = lean_array_fget_borrowed(v___x_3304_, v_v_3309_);
lean_dec(v_v_3309_);
v___x_3313_ = ((size_t)1ULL);
v___x_3314_ = lean_usize_add(v_i_3306_, v___x_3313_);
lean_inc(v___x_3312_);
v___x_3315_ = lean_array_uset(v_bs_x27_3311_, v_i_3306_, v___x_3312_);
v_i_3306_ = v___x_3314_;
v_bs_3307_ = v___x_3315_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5___boxed(lean_object* v___x_3317_, lean_object* v_sz_3318_, lean_object* v_i_3319_, lean_object* v_bs_3320_){
_start:
{
size_t v_sz_boxed_3321_; size_t v_i_boxed_3322_; lean_object* v_res_3323_; 
v_sz_boxed_3321_ = lean_unbox_usize(v_sz_3318_);
lean_dec(v_sz_3318_);
v_i_boxed_3322_ = lean_unbox_usize(v_i_3319_);
lean_dec(v_i_3319_);
v_res_3323_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v___x_3317_, v_sz_boxed_3321_, v_i_boxed_3322_, v_bs_3320_);
lean_dec_ref(v___x_3317_);
return v_res_3323_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4(lean_object* v_ws_3324_, lean_object* v_msg_3325_){
_start:
{
lean_object* v___x_3326_; 
v___x_3326_ = lean_panic_fn_borrowed(v_ws_3324_, v_msg_3325_);
return v___x_3326_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___boxed(lean_object* v_ws_3327_, lean_object* v_msg_3328_){
_start:
{
lean_object* v_res_3329_; 
v_res_3329_ = l_panic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4(v_ws_3327_, v_msg_3328_);
lean_dec_ref(v_ws_3327_);
return v_res_3329_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19_spec__23(lean_object* v_a_3331_, lean_object* v_a_3332_){
_start:
{
if (lean_obj_tag(v_a_3331_) == 0)
{
lean_object* v___x_3333_; 
v___x_3333_ = l_List_reverse___redArg(v_a_3332_);
return v___x_3333_;
}
else
{
lean_object* v_head_3334_; lean_object* v_tail_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3347_; 
v_head_3334_ = lean_ctor_get(v_a_3331_, 0);
v_tail_3335_ = lean_ctor_get(v_a_3331_, 1);
v_isSharedCheck_3347_ = !lean_is_exclusive(v_a_3331_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3337_ = v_a_3331_;
v_isShared_3338_ = v_isSharedCheck_3347_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_tail_3335_);
lean_inc(v_head_3334_);
lean_dec(v_a_3331_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3347_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3339_; uint8_t v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3344_; 
v___x_3339_ = ((lean_object*)(l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19_spec__23___closed__0));
v___x_3340_ = 1;
v___x_3341_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_3334_, v___x_3340_);
v___x_3342_ = lean_string_append(v___x_3339_, v___x_3341_);
lean_dec_ref(v___x_3341_);
if (v_isShared_3338_ == 0)
{
lean_ctor_set(v___x_3337_, 1, v_a_3332_);
lean_ctor_set(v___x_3337_, 0, v___x_3342_);
v___x_3344_ = v___x_3337_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v___x_3342_);
lean_ctor_set(v_reuseFailAlloc_3346_, 1, v_a_3332_);
v___x_3344_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
v_a_3331_ = v_tail_3335_;
v_a_3332_ = v___x_3344_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19(lean_object* v_cycle_3349_){
_start:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3350_ = ((lean_object*)(l_Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19___closed__0));
v___x_3351_ = lean_box(0);
v___x_3352_ = l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19_spec__23(v_cycle_3349_, v___x_3351_);
v___x_3353_ = l_String_intercalate(v___x_3350_, v___x_3352_);
return v___x_3353_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14___redArg(lean_object* v_cycle_3354_, lean_object* v___y_3355_){
_start:
{
lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; uint8_t v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3357_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg___closed__1));
v___x_3358_ = l_Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19(v_cycle_3354_);
v___x_3359_ = lean_string_append(v___x_3357_, v___x_3358_);
lean_dec_ref(v___x_3358_);
v___x_3360_ = 3;
v___x_3361_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3361_, 0, v___x_3359_);
lean_ctor_set_uint8(v___x_3361_, sizeof(void*)*1, v___x_3360_);
lean_inc_ref(v___y_3355_);
v___x_3362_ = lean_apply_2(v___y_3355_, v___x_3361_, lean_box(0));
v___x_3363_ = lean_box(0);
v___x_3364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3363_);
return v___x_3364_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14___redArg___boxed(lean_object* v_cycle_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14___redArg(v_cycle_3365_, v___y_3366_);
lean_dec_ref(v___y_3366_);
return v_res_3368_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__11(lean_object* v_a_3369_, lean_object* v_x_3370_){
_start:
{
if (lean_obj_tag(v_x_3370_) == 0)
{
uint8_t v___x_3371_; 
v___x_3371_ = 0;
return v___x_3371_;
}
else
{
lean_object* v_head_3372_; lean_object* v_tail_3373_; uint8_t v___x_3374_; 
v_head_3372_ = lean_ctor_get(v_x_3370_, 0);
v_tail_3373_ = lean_ctor_get(v_x_3370_, 1);
v___x_3374_ = lean_name_eq(v_a_3369_, v_head_3372_);
if (v___x_3374_ == 0)
{
v_x_3370_ = v_tail_3373_;
goto _start;
}
else
{
return v___x_3374_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__11___boxed(lean_object* v_a_3376_, lean_object* v_x_3377_){
_start:
{
uint8_t v_res_3378_; lean_object* v_r_3379_; 
v_res_3378_ = l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__11(v_a_3376_, v_x_3377_);
lean_dec(v_x_3377_);
lean_dec(v_a_3376_);
v_r_3379_ = lean_box(v_res_3378_);
return v_r_3379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26_spec__27(lean_object* v_leanOpts_3382_, lean_object* v___x_3383_, lean_object* v_as_3384_, size_t v_i_3385_, size_t v_stop_3386_, lean_object* v_b_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_){
_start:
{
uint8_t v___x_3391_; 
v___x_3391_ = lean_usize_dec_eq(v_i_3385_, v_stop_3386_);
if (v___x_3391_ == 0)
{
lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3392_ = lean_array_uget_borrowed(v_as_3384_, v_i_3385_);
lean_inc(v___x_3392_);
lean_inc_ref(v_leanOpts_3382_);
v___x_3393_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg(v_leanOpts_3382_, v___x_3392_, v___x_3383_, v_b_3387_, v___y_3388_, v___y_3389_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_object* v_a_3394_; lean_object* v_fst_3395_; lean_object* v_snd_3396_; lean_object* v_snd_3397_; size_t v___x_3398_; size_t v___x_3399_; 
v_a_3394_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_a_3394_);
lean_dec_ref(v___x_3393_);
v_fst_3395_ = lean_ctor_get(v_a_3394_, 0);
lean_inc(v_fst_3395_);
v_snd_3396_ = lean_ctor_get(v_a_3394_, 1);
lean_inc(v_snd_3396_);
lean_dec(v_a_3394_);
v_snd_3397_ = lean_ctor_get(v_fst_3395_, 1);
lean_inc(v_snd_3397_);
lean_dec(v_fst_3395_);
v___x_3398_ = ((size_t)1ULL);
v___x_3399_ = lean_usize_add(v_i_3385_, v___x_3398_);
v_i_3385_ = v___x_3399_;
v_b_3387_ = v_snd_3397_;
v___y_3388_ = v_snd_3396_;
goto _start;
}
else
{
lean_object* v_a_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3408_; 
lean_dec_ref(v_leanOpts_3382_);
v_a_3401_ = lean_ctor_get(v___x_3393_, 0);
v_isSharedCheck_3408_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3408_ == 0)
{
v___x_3403_ = v___x_3393_;
v_isShared_3404_ = v_isSharedCheck_3408_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_a_3401_);
lean_dec(v___x_3393_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3408_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3406_; 
if (v_isShared_3404_ == 0)
{
v___x_3406_ = v___x_3403_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3407_; 
v_reuseFailAlloc_3407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3407_, 0, v_a_3401_);
v___x_3406_ = v_reuseFailAlloc_3407_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
return v___x_3406_;
}
}
}
}
else
{
lean_object* v___x_3409_; lean_object* v___x_3410_; 
lean_dec_ref(v_leanOpts_3382_);
v___x_3409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3409_, 0, v_b_3387_);
lean_ctor_set(v___x_3409_, 1, v___y_3388_);
v___x_3410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3409_);
return v___x_3410_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26___redArg(lean_object* v_leanOpts_3411_, lean_object* v___x_3412_, lean_object* v_leanOpts_3413_, uint8_t v_reconfigure_3414_, lean_object* v_pkg_3415_, lean_object* v_a_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_){
_start:
{
lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3435_; lean_object* v___y_3441_; lean_object* v___y_3442_; lean_object* v_packages_3447_; lean_object* v_wsIdx_3448_; lean_object* v_depConfigs_3449_; lean_object* v___y_3451_; lean_object* v___y_3452_; lean_object* v_ws_3453_; lean_object* v_packages_3454_; lean_object* v___y_3455_; lean_object* v___y_3465_; lean_object* v___y_3466_; lean_object* v_ws_3467_; lean_object* v___y_3468_; lean_object* v_start_3470_; lean_object* v_ws_3472_; lean_object* v_packages_3473_; lean_object* v_depIdxs_3474_; lean_object* v___y_3475_; lean_object* v___y_3476_; lean_object* v_____x_3516_; lean_object* v___y_3517_; lean_object* v___y_3518_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v_ws_3525_; lean_object* v_packages_3526_; lean_object* v___y_3527_; lean_object* v_ws_3537_; lean_object* v___y_3538_; lean_object* v_s_3540_; lean_object* v___x_3541_; uint8_t v___x_3542_; 
v_packages_3447_ = lean_ctor_get(v_a_3416_, 4);
v_wsIdx_3448_ = lean_ctor_get(v_pkg_3415_, 0);
lean_inc(v_wsIdx_3448_);
v_depConfigs_3449_ = lean_ctor_get(v_pkg_3415_, 12);
lean_inc_ref(v_depConfigs_3449_);
v_start_3470_ = lean_array_get_size(v_packages_3447_);
v___x_3522_ = lean_array_get_size(v_depConfigs_3449_);
v___x_3523_ = lean_mk_empty_array_with_capacity(v___x_3522_);
lean_inc_ref(v___x_3523_);
lean_inc_ref(v_a_3416_);
v_s_3540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_3540_, 0, v_a_3416_);
lean_ctor_set(v_s_3540_, 1, v___x_3523_);
v___x_3541_ = lean_unsigned_to_nat(0u);
v___x_3542_ = lean_nat_dec_le(v___x_3522_, v___x_3522_);
if (v___x_3542_ == 0)
{
uint8_t v___x_3543_; 
v___x_3543_ = lean_nat_dec_lt(v___x_3541_, v___x_3522_);
if (v___x_3543_ == 0)
{
uint8_t v___x_3544_; 
lean_dec_ref(v_s_3540_);
lean_dec_ref(v_depConfigs_3449_);
lean_dec_ref(v_pkg_3415_);
lean_dec_ref(v_leanOpts_3413_);
v___x_3544_ = lean_nat_dec_lt(v_start_3470_, v_start_3470_);
if (v___x_3544_ == 0)
{
uint8_t v___x_3545_; 
lean_dec_ref(v_leanOpts_3411_);
v___x_3545_ = lean_nat_dec_le(v_start_3470_, v_start_3470_);
if (v___x_3545_ == 0)
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
lean_dec_ref(v___x_3523_);
lean_dec(v_wsIdx_3448_);
v___x_3546_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_3547_ = lean_panic_fn_borrowed(v_a_3416_, v___x_3546_);
lean_dec_ref(v_a_3416_);
v___y_3435_ = v___x_3547_;
goto v___jp_3434_;
}
else
{
size_t v_sz_3548_; size_t v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; 
v_sz_3548_ = lean_array_size(v___x_3523_);
v___x_3549_ = ((size_t)0ULL);
v___x_3550_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_3447_, v_sz_3548_, v___x_3549_, v___x_3523_);
v___x_3551_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_a_3416_, v_wsIdx_3448_, v___x_3550_);
lean_dec(v_wsIdx_3448_);
v___y_3435_ = v___x_3551_;
goto v___jp_3434_;
}
}
else
{
uint8_t v___x_3552_; 
lean_inc_ref(v_packages_3447_);
v___x_3552_ = lean_nat_dec_le(v_start_3470_, v_start_3470_);
if (v___x_3552_ == 0)
{
if (v___x_3544_ == 0)
{
lean_dec_ref(v_leanOpts_3411_);
v_ws_3525_ = v_a_3416_;
v_packages_3526_ = v_packages_3447_;
v___y_3527_ = v___y_3417_;
goto v___jp_3524_;
}
else
{
size_t v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = lean_usize_of_nat(v_start_3470_);
v___x_3554_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26_spec__27(v_leanOpts_3411_, v___x_3412_, v_packages_3447_, v___x_3553_, v___x_3553_, v_a_3416_, v___y_3417_, v___y_3418_);
lean_dec_ref(v_packages_3447_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; lean_object* v_fst_3556_; lean_object* v_snd_3557_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
lean_inc(v_a_3555_);
lean_dec_ref(v___x_3554_);
v_fst_3556_ = lean_ctor_get(v_a_3555_, 0);
lean_inc(v_fst_3556_);
v_snd_3557_ = lean_ctor_get(v_a_3555_, 1);
lean_inc(v_snd_3557_);
lean_dec(v_a_3555_);
v_ws_3537_ = v_fst_3556_;
v___y_3538_ = v_snd_3557_;
goto v___jp_3536_;
}
else
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3565_; 
lean_dec_ref(v___x_3523_);
lean_dec(v_wsIdx_3448_);
v_a_3558_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3560_ = v___x_3554_;
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v___x_3554_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3563_; 
if (v_isShared_3561_ == 0)
{
v___x_3563_ = v___x_3560_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_a_3558_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
return v___x_3563_;
}
}
}
}
}
else
{
size_t v___x_3566_; lean_object* v___x_3567_; 
v___x_3566_ = lean_usize_of_nat(v_start_3470_);
v___x_3567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26_spec__27(v_leanOpts_3411_, v___x_3412_, v_packages_3447_, v___x_3566_, v___x_3566_, v_a_3416_, v___y_3417_, v___y_3418_);
lean_dec_ref(v_packages_3447_);
if (lean_obj_tag(v___x_3567_) == 0)
{
lean_object* v_a_3568_; lean_object* v_fst_3569_; lean_object* v_snd_3570_; 
v_a_3568_ = lean_ctor_get(v___x_3567_, 0);
lean_inc(v_a_3568_);
lean_dec_ref(v___x_3567_);
v_fst_3569_ = lean_ctor_get(v_a_3568_, 0);
lean_inc(v_fst_3569_);
v_snd_3570_ = lean_ctor_get(v_a_3568_, 1);
lean_inc(v_snd_3570_);
lean_dec(v_a_3568_);
v_ws_3537_ = v_fst_3569_;
v___y_3538_ = v_snd_3570_;
goto v___jp_3536_;
}
else
{
lean_object* v_a_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3578_; 
lean_dec_ref(v___x_3523_);
lean_dec(v_wsIdx_3448_);
v_a_3571_ = lean_ctor_get(v___x_3567_, 0);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3567_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3573_ = v___x_3567_;
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_a_3571_);
lean_dec(v___x_3567_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3576_; 
if (v_isShared_3574_ == 0)
{
v___x_3576_ = v___x_3573_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_a_3571_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
return v___x_3576_;
}
}
}
}
}
}
else
{
size_t v___x_3579_; size_t v___x_3580_; lean_object* v___x_3581_; 
lean_dec_ref(v___x_3523_);
lean_dec_ref(v_a_3416_);
v___x_3579_ = lean_usize_of_nat(v___x_3522_);
v___x_3580_ = ((size_t)0ULL);
v___x_3581_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7(v_pkg_3415_, v_leanOpts_3413_, v_reconfigure_3414_, v_depConfigs_3449_, v___x_3579_, v___x_3580_, v_s_3540_, v___y_3417_, v___y_3418_);
lean_dec_ref(v_depConfigs_3449_);
if (lean_obj_tag(v___x_3581_) == 0)
{
lean_object* v_a_3582_; lean_object* v_fst_3583_; lean_object* v_snd_3584_; 
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
lean_inc(v_a_3582_);
lean_dec_ref(v___x_3581_);
v_fst_3583_ = lean_ctor_get(v_a_3582_, 0);
lean_inc(v_fst_3583_);
v_snd_3584_ = lean_ctor_get(v_a_3582_, 1);
lean_inc(v_snd_3584_);
lean_dec(v_a_3582_);
v_____x_3516_ = v_fst_3583_;
v___y_3517_ = v_snd_3584_;
v___y_3518_ = v___y_3418_;
goto v___jp_3515_;
}
else
{
lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3592_; 
lean_dec(v_wsIdx_3448_);
lean_dec_ref(v_leanOpts_3411_);
v_a_3585_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3592_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3592_ == 0)
{
v___x_3587_ = v___x_3581_;
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_a_3585_);
lean_dec(v___x_3581_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3590_; 
if (v_isShared_3588_ == 0)
{
v___x_3590_ = v___x_3587_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v_a_3585_);
v___x_3590_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
return v___x_3590_;
}
}
}
}
}
else
{
uint8_t v___x_3593_; 
lean_inc_ref(v_packages_3447_);
v___x_3593_ = lean_nat_dec_lt(v___x_3541_, v___x_3522_);
if (v___x_3593_ == 0)
{
lean_dec_ref(v_s_3540_);
lean_dec_ref(v_depConfigs_3449_);
lean_dec_ref(v_pkg_3415_);
lean_dec_ref(v_leanOpts_3413_);
v_ws_3472_ = v_a_3416_;
v_packages_3473_ = v_packages_3447_;
v_depIdxs_3474_ = v___x_3523_;
v___y_3475_ = v___y_3417_;
v___y_3476_ = v___y_3418_;
goto v___jp_3471_;
}
else
{
size_t v___x_3594_; size_t v___x_3595_; lean_object* v___x_3596_; 
lean_dec_ref(v___x_3523_);
lean_dec_ref(v_packages_3447_);
lean_dec_ref(v_a_3416_);
v___x_3594_ = lean_usize_of_nat(v___x_3522_);
v___x_3595_ = ((size_t)0ULL);
v___x_3596_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7(v_pkg_3415_, v_leanOpts_3413_, v_reconfigure_3414_, v_depConfigs_3449_, v___x_3594_, v___x_3595_, v_s_3540_, v___y_3417_, v___y_3418_);
lean_dec_ref(v_depConfigs_3449_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v_a_3597_; lean_object* v_fst_3598_; lean_object* v_snd_3599_; 
v_a_3597_ = lean_ctor_get(v___x_3596_, 0);
lean_inc(v_a_3597_);
lean_dec_ref(v___x_3596_);
v_fst_3598_ = lean_ctor_get(v_a_3597_, 0);
lean_inc(v_fst_3598_);
v_snd_3599_ = lean_ctor_get(v_a_3597_, 1);
lean_inc(v_snd_3599_);
lean_dec(v_a_3597_);
v_____x_3516_ = v_fst_3598_;
v___y_3517_ = v_snd_3599_;
v___y_3518_ = v___y_3418_;
goto v___jp_3515_;
}
else
{
lean_object* v_a_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3607_; 
lean_dec(v_wsIdx_3448_);
lean_dec_ref(v_leanOpts_3411_);
v_a_3600_ = lean_ctor_get(v___x_3596_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3596_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3602_ = v___x_3596_;
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_a_3600_);
lean_dec(v___x_3596_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3605_; 
if (v_isShared_3603_ == 0)
{
v___x_3605_ = v___x_3602_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_a_3600_);
v___x_3605_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
return v___x_3605_;
}
}
}
}
}
v___jp_3420_:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3423_ = lean_box(0);
v___x_3424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3424_, 0, v___x_3423_);
lean_ctor_set(v___x_3424_, 1, v___y_3422_);
v___x_3425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
lean_ctor_set(v___x_3425_, 1, v___y_3421_);
v___x_3426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3425_);
return v___x_3426_;
}
v___jp_3427_:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___x_3430_ = lean_box(0);
v___x_3431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3431_, 0, v___x_3430_);
lean_ctor_set(v___x_3431_, 1, v___y_3429_);
v___x_3432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3432_, 0, v___x_3431_);
lean_ctor_set(v___x_3432_, 1, v___y_3428_);
v___x_3433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3433_, 0, v___x_3432_);
return v___x_3433_;
}
v___jp_3434_:
{
lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3436_ = lean_box(0);
v___x_3437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3437_, 0, v___x_3436_);
lean_ctor_set(v___x_3437_, 1, v___y_3435_);
v___x_3438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3437_);
lean_ctor_set(v___x_3438_, 1, v___y_3417_);
v___x_3439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3438_);
return v___x_3439_;
}
v___jp_3440_:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; 
v___x_3443_ = lean_box(0);
v___x_3444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3443_);
lean_ctor_set(v___x_3444_, 1, v___y_3442_);
v___x_3445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3444_);
lean_ctor_set(v___x_3445_, 1, v___y_3441_);
v___x_3446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3445_);
return v___x_3446_;
}
v___jp_3450_:
{
lean_object* v___x_3456_; uint8_t v___x_3457_; 
v___x_3456_ = lean_array_get_size(v_packages_3454_);
v___x_3457_ = lean_nat_dec_le(v___y_3452_, v___x_3456_);
lean_dec(v___y_3452_);
if (v___x_3457_ == 0)
{
lean_object* v___x_3458_; lean_object* v___x_3459_; 
lean_dec_ref(v_packages_3454_);
lean_dec_ref(v___y_3451_);
lean_dec(v_wsIdx_3448_);
v___x_3458_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_3459_ = lean_panic_fn_borrowed(v_ws_3453_, v___x_3458_);
lean_dec_ref(v_ws_3453_);
v___y_3428_ = v___y_3455_;
v___y_3429_ = v___x_3459_;
goto v___jp_3427_;
}
else
{
size_t v_sz_3460_; size_t v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; 
v_sz_3460_ = lean_array_size(v___y_3451_);
v___x_3461_ = ((size_t)0ULL);
v___x_3462_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_3454_, v_sz_3460_, v___x_3461_, v___y_3451_);
lean_dec_ref(v_packages_3454_);
v___x_3463_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_3453_, v_wsIdx_3448_, v___x_3462_);
lean_dec(v_wsIdx_3448_);
v___y_3428_ = v___y_3455_;
v___y_3429_ = v___x_3463_;
goto v___jp_3427_;
}
}
v___jp_3464_:
{
lean_object* v_packages_3469_; 
v_packages_3469_ = lean_ctor_get(v_ws_3467_, 4);
lean_inc_ref(v_packages_3469_);
v___y_3451_ = v___y_3465_;
v___y_3452_ = v___y_3466_;
v_ws_3453_ = v_ws_3467_;
v_packages_3454_ = v_packages_3469_;
v___y_3455_ = v___y_3468_;
goto v___jp_3450_;
}
v___jp_3471_:
{
lean_object* v_depsEnd_3477_; uint8_t v___x_3478_; 
v_depsEnd_3477_ = lean_array_get_size(v_packages_3473_);
v___x_3478_ = lean_nat_dec_lt(v_start_3470_, v_depsEnd_3477_);
if (v___x_3478_ == 0)
{
uint8_t v___x_3479_; 
lean_dec_ref(v_leanOpts_3411_);
v___x_3479_ = lean_nat_dec_le(v_depsEnd_3477_, v_depsEnd_3477_);
if (v___x_3479_ == 0)
{
lean_object* v___x_3480_; lean_object* v___x_3481_; 
lean_dec_ref(v_depIdxs_3474_);
lean_dec_ref(v_packages_3473_);
lean_dec(v_wsIdx_3448_);
v___x_3480_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_3481_ = lean_panic_fn_borrowed(v_ws_3472_, v___x_3480_);
lean_dec_ref(v_ws_3472_);
v___y_3421_ = v___y_3475_;
v___y_3422_ = v___x_3481_;
goto v___jp_3420_;
}
else
{
size_t v_sz_3482_; size_t v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; 
v_sz_3482_ = lean_array_size(v_depIdxs_3474_);
v___x_3483_ = ((size_t)0ULL);
v___x_3484_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_3473_, v_sz_3482_, v___x_3483_, v_depIdxs_3474_);
lean_dec_ref(v_packages_3473_);
v___x_3485_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_3472_, v_wsIdx_3448_, v___x_3484_);
lean_dec(v_wsIdx_3448_);
v___y_3421_ = v___y_3475_;
v___y_3422_ = v___x_3485_;
goto v___jp_3420_;
}
}
else
{
uint8_t v___x_3486_; 
v___x_3486_ = lean_nat_dec_le(v_depsEnd_3477_, v_depsEnd_3477_);
if (v___x_3486_ == 0)
{
if (v___x_3478_ == 0)
{
lean_dec_ref(v_leanOpts_3411_);
v___y_3451_ = v_depIdxs_3474_;
v___y_3452_ = v_depsEnd_3477_;
v_ws_3453_ = v_ws_3472_;
v_packages_3454_ = v_packages_3473_;
v___y_3455_ = v___y_3475_;
goto v___jp_3450_;
}
else
{
size_t v___x_3487_; size_t v___x_3488_; lean_object* v___x_3489_; 
v___x_3487_ = lean_usize_of_nat(v_start_3470_);
v___x_3488_ = lean_usize_of_nat(v_depsEnd_3477_);
v___x_3489_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26_spec__27(v_leanOpts_3411_, v___x_3412_, v_packages_3473_, v___x_3487_, v___x_3488_, v_ws_3472_, v___y_3475_, v___y_3476_);
lean_dec_ref(v_packages_3473_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; lean_object* v_fst_3491_; lean_object* v_snd_3492_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref(v___x_3489_);
v_fst_3491_ = lean_ctor_get(v_a_3490_, 0);
lean_inc(v_fst_3491_);
v_snd_3492_ = lean_ctor_get(v_a_3490_, 1);
lean_inc(v_snd_3492_);
lean_dec(v_a_3490_);
v___y_3465_ = v_depIdxs_3474_;
v___y_3466_ = v_depsEnd_3477_;
v_ws_3467_ = v_fst_3491_;
v___y_3468_ = v_snd_3492_;
goto v___jp_3464_;
}
else
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3500_; 
lean_dec_ref(v_depIdxs_3474_);
lean_dec(v_wsIdx_3448_);
v_a_3493_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3495_ = v___x_3489_;
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3489_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3493_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
}
}
else
{
size_t v___x_3501_; size_t v___x_3502_; lean_object* v___x_3503_; 
v___x_3501_ = lean_usize_of_nat(v_start_3470_);
v___x_3502_ = lean_usize_of_nat(v_depsEnd_3477_);
v___x_3503_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26_spec__27(v_leanOpts_3411_, v___x_3412_, v_packages_3473_, v___x_3501_, v___x_3502_, v_ws_3472_, v___y_3475_, v___y_3476_);
lean_dec_ref(v_packages_3473_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; lean_object* v_fst_3505_; lean_object* v_snd_3506_; 
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3504_);
lean_dec_ref(v___x_3503_);
v_fst_3505_ = lean_ctor_get(v_a_3504_, 0);
lean_inc(v_fst_3505_);
v_snd_3506_ = lean_ctor_get(v_a_3504_, 1);
lean_inc(v_snd_3506_);
lean_dec(v_a_3504_);
v___y_3465_ = v_depIdxs_3474_;
v___y_3466_ = v_depsEnd_3477_;
v_ws_3467_ = v_fst_3505_;
v___y_3468_ = v_snd_3506_;
goto v___jp_3464_;
}
else
{
lean_object* v_a_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3514_; 
lean_dec_ref(v_depIdxs_3474_);
lean_dec(v_wsIdx_3448_);
v_a_3507_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3509_ = v___x_3503_;
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_a_3507_);
lean_dec(v___x_3503_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v___x_3512_; 
if (v_isShared_3510_ == 0)
{
v___x_3512_ = v___x_3509_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v_a_3507_);
v___x_3512_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
return v___x_3512_;
}
}
}
}
}
}
v___jp_3515_:
{
lean_object* v_ws_3519_; lean_object* v_depIdxs_3520_; lean_object* v_packages_3521_; 
v_ws_3519_ = lean_ctor_get(v_____x_3516_, 0);
lean_inc_ref(v_ws_3519_);
v_depIdxs_3520_ = lean_ctor_get(v_____x_3516_, 1);
lean_inc_ref(v_depIdxs_3520_);
lean_dec_ref(v_____x_3516_);
v_packages_3521_ = lean_ctor_get(v_ws_3519_, 4);
lean_inc_ref(v_packages_3521_);
v_ws_3472_ = v_ws_3519_;
v_packages_3473_ = v_packages_3521_;
v_depIdxs_3474_ = v_depIdxs_3520_;
v___y_3475_ = v___y_3517_;
v___y_3476_ = v___y_3518_;
goto v___jp_3471_;
}
v___jp_3524_:
{
lean_object* v___x_3528_; uint8_t v___x_3529_; 
v___x_3528_ = lean_array_get_size(v_packages_3526_);
v___x_3529_ = lean_nat_dec_le(v_start_3470_, v___x_3528_);
if (v___x_3529_ == 0)
{
lean_object* v___x_3530_; lean_object* v___x_3531_; 
lean_dec_ref(v_packages_3526_);
lean_dec_ref(v___x_3523_);
lean_dec(v_wsIdx_3448_);
v___x_3530_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_3531_ = lean_panic_fn_borrowed(v_ws_3525_, v___x_3530_);
lean_dec_ref(v_ws_3525_);
v___y_3441_ = v___y_3527_;
v___y_3442_ = v___x_3531_;
goto v___jp_3440_;
}
else
{
size_t v_sz_3532_; size_t v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
v_sz_3532_ = lean_array_size(v___x_3523_);
v___x_3533_ = ((size_t)0ULL);
v___x_3534_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_3526_, v_sz_3532_, v___x_3533_, v___x_3523_);
lean_dec_ref(v_packages_3526_);
v___x_3535_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_3525_, v_wsIdx_3448_, v___x_3534_);
lean_dec(v_wsIdx_3448_);
v___y_3441_ = v___y_3527_;
v___y_3442_ = v___x_3535_;
goto v___jp_3440_;
}
}
v___jp_3536_:
{
lean_object* v_packages_3539_; 
v_packages_3539_ = lean_ctor_get(v_ws_3537_, 4);
lean_inc_ref(v_packages_3539_);
v_ws_3525_ = v_ws_3537_;
v_packages_3526_ = v_packages_3539_;
v___y_3527_ = v___y_3538_;
goto v___jp_3524_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg(lean_object* v_leanOpts_3608_, lean_object* v_a_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_){
_start:
{
lean_object* v_baseName_3615_; uint8_t v___x_3616_; 
v_baseName_3615_ = lean_ctor_get(v_a_3609_, 1);
v___x_3616_ = l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__11(v_baseName_3615_, v___y_3610_);
if (v___x_3616_ == 0)
{
uint8_t v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3617_ = 1;
lean_inc(v___y_3610_);
lean_inc(v_baseName_3615_);
v___x_3618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3618_, 0, v_baseName_3615_);
lean_ctor_set(v___x_3618_, 1, v___y_3610_);
lean_inc_ref(v_leanOpts_3608_);
v___x_3619_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26___redArg(v_leanOpts_3608_, v___x_3618_, v_leanOpts_3608_, v___x_3617_, v_a_3609_, v___y_3611_, v___y_3612_, v___y_3613_);
lean_dec_ref(v___x_3618_);
return v___x_3619_;
}
else
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v_fst_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3633_; 
lean_inc(v_baseName_3615_);
lean_dec(v___y_3612_);
lean_dec_ref(v___y_3611_);
lean_dec_ref(v_a_3609_);
lean_dec_ref(v_leanOpts_3608_);
v___x_3620_ = lean_box(0);
v___x_3621_ = ((lean_object*)(l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg___closed__0));
lean_inc(v___y_3610_);
v___x_3622_ = l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__13(v_baseName_3615_, v___x_3616_, v___y_3610_, v___x_3621_);
v_fst_3623_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3633_ == 0)
{
lean_object* v_unused_3634_; 
v_unused_3634_ = lean_ctor_get(v___x_3622_, 1);
lean_dec(v_unused_3634_);
v___x_3625_ = v___x_3622_;
v_isShared_3626_ = v_isSharedCheck_3633_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_fst_3623_);
lean_dec(v___x_3622_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3633_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3628_; 
lean_inc(v_baseName_3615_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set_tag(v___x_3625_, 1);
lean_ctor_set(v___x_3625_, 1, v_fst_3623_);
lean_ctor_set(v___x_3625_, 0, v_baseName_3615_);
v___x_3628_ = v___x_3625_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_baseName_3615_);
lean_ctor_set(v_reuseFailAlloc_3632_, 1, v_fst_3623_);
v___x_3628_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; 
v___x_3629_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3629_, 0, v_baseName_3615_);
lean_ctor_set(v___x_3629_, 1, v___x_3620_);
v___x_3630_ = l_List_appendTR___redArg(v___x_3628_, v___x_3629_);
v___x_3631_ = l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14___redArg(v___x_3630_, v___y_3613_);
return v___x_3631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg___boxed(lean_object* v_leanOpts_3635_, lean_object* v_a_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_){
_start:
{
lean_object* v_res_3642_; 
v_res_3642_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg(v_leanOpts_3635_, v_a_3636_, v___y_3637_, v___y_3638_, v___y_3639_, v___y_3640_);
lean_dec_ref(v___y_3640_);
lean_dec(v___y_3637_);
return v_res_3642_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26_spec__27___boxed(lean_object* v_leanOpts_3643_, lean_object* v___x_3644_, lean_object* v_as_3645_, lean_object* v_i_3646_, lean_object* v_stop_3647_, lean_object* v_b_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_){
_start:
{
size_t v_i_boxed_3652_; size_t v_stop_boxed_3653_; lean_object* v_res_3654_; 
v_i_boxed_3652_ = lean_unbox_usize(v_i_3646_);
lean_dec(v_i_3646_);
v_stop_boxed_3653_ = lean_unbox_usize(v_stop_3647_);
lean_dec(v_stop_3647_);
v_res_3654_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26_spec__27(v_leanOpts_3643_, v___x_3644_, v_as_3645_, v_i_boxed_3652_, v_stop_boxed_3653_, v_b_3648_, v___y_3649_, v___y_3650_);
lean_dec_ref(v___y_3650_);
lean_dec_ref(v_as_3645_);
lean_dec(v___x_3644_);
return v_res_3654_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26___redArg___boxed(lean_object* v_leanOpts_3655_, lean_object* v___x_3656_, lean_object* v_leanOpts_3657_, lean_object* v_reconfigure_3658_, lean_object* v_pkg_3659_, lean_object* v_a_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_){
_start:
{
uint8_t v_reconfigure_boxed_3664_; lean_object* v_res_3665_; 
v_reconfigure_boxed_3664_ = lean_unbox(v_reconfigure_3658_);
v_res_3665_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26___redArg(v_leanOpts_3655_, v___x_3656_, v_leanOpts_3657_, v_reconfigure_boxed_3664_, v_pkg_3659_, v_a_3660_, v___y_3661_, v___y_3662_);
lean_dec_ref(v___y_3662_);
lean_dec(v___x_3656_);
return v_res_3665_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(lean_object* v_leanOpts_3666_, lean_object* v_ws_3667_, lean_object* v_root_3668_, lean_object* v_stack_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_){
_start:
{
lean_object* v___x_3673_; 
v___x_3673_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg(v_leanOpts_3666_, v_root_3668_, v_stack_3669_, v_ws_3667_, v___y_3670_, v___y_3671_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3692_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3676_ = v___x_3673_;
v_isShared_3677_ = v_isSharedCheck_3692_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3673_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3692_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v_fst_3678_; lean_object* v_snd_3679_; lean_object* v_snd_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3690_; 
v_fst_3678_ = lean_ctor_get(v_a_3674_, 0);
lean_inc(v_fst_3678_);
v_snd_3679_ = lean_ctor_get(v_a_3674_, 1);
lean_inc(v_snd_3679_);
lean_dec(v_a_3674_);
v_snd_3680_ = lean_ctor_get(v_fst_3678_, 1);
v_isSharedCheck_3690_ = !lean_is_exclusive(v_fst_3678_);
if (v_isSharedCheck_3690_ == 0)
{
lean_object* v_unused_3691_; 
v_unused_3691_ = lean_ctor_get(v_fst_3678_, 0);
lean_dec(v_unused_3691_);
v___x_3682_ = v_fst_3678_;
v_isShared_3683_ = v_isSharedCheck_3690_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_snd_3680_);
lean_dec(v_fst_3678_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3690_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3685_; 
if (v_isShared_3683_ == 0)
{
lean_ctor_set(v___x_3682_, 1, v_snd_3679_);
lean_ctor_set(v___x_3682_, 0, v_snd_3680_);
v___x_3685_ = v___x_3682_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_snd_3680_);
lean_ctor_set(v_reuseFailAlloc_3689_, 1, v_snd_3679_);
v___x_3685_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
lean_object* v___x_3687_; 
if (v_isShared_3677_ == 0)
{
lean_ctor_set(v___x_3676_, 0, v___x_3685_);
v___x_3687_ = v___x_3676_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v___x_3685_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
}
}
else
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3700_; 
v_a_3693_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3695_ = v___x_3673_;
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3673_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3698_; 
if (v_isShared_3696_ == 0)
{
v___x_3698_ = v___x_3695_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3693_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___boxed(lean_object* v_leanOpts_3701_, lean_object* v_ws_3702_, lean_object* v_root_3703_, lean_object* v_stack_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_){
_start:
{
lean_object* v_res_3708_; 
v_res_3708_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(v_leanOpts_3701_, v_ws_3702_, v_root_3703_, v_stack_3704_, v___y_3705_, v___y_3706_);
lean_dec_ref(v___y_3706_);
lean_dec(v_stack_3704_);
return v_res_3708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(lean_object* v_leanOpts_3709_, lean_object* v_as_3710_, size_t v_i_3711_, size_t v_stop_3712_, lean_object* v_b_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
uint8_t v___x_3717_; 
v___x_3717_ = lean_usize_dec_eq(v_i_3711_, v_stop_3712_);
if (v___x_3717_ == 0)
{
lean_object* v_packages_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v_baseName_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v_packages_3718_ = lean_ctor_get(v_b_3713_, 4);
v___x_3719_ = lean_unsigned_to_nat(0u);
v___x_3720_ = lean_array_fget_borrowed(v_packages_3718_, v___x_3719_);
v_baseName_3721_ = lean_ctor_get(v___x_3720_, 1);
v___x_3722_ = lean_array_uget_borrowed(v_as_3710_, v_i_3711_);
v___x_3723_ = lean_box(0);
lean_inc(v_baseName_3721_);
v___x_3724_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3724_, 0, v_baseName_3721_);
lean_ctor_set(v___x_3724_, 1, v___x_3723_);
lean_inc(v___x_3722_);
lean_inc_ref(v_leanOpts_3709_);
v___x_3725_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(v_leanOpts_3709_, v_b_3713_, v___x_3722_, v___x_3724_, v___y_3714_, v___y_3715_);
lean_dec_ref(v___x_3724_);
if (lean_obj_tag(v___x_3725_) == 0)
{
lean_object* v_a_3726_; lean_object* v_fst_3727_; lean_object* v_snd_3728_; size_t v___x_3729_; size_t v___x_3730_; 
v_a_3726_ = lean_ctor_get(v___x_3725_, 0);
lean_inc(v_a_3726_);
lean_dec_ref(v___x_3725_);
v_fst_3727_ = lean_ctor_get(v_a_3726_, 0);
lean_inc(v_fst_3727_);
v_snd_3728_ = lean_ctor_get(v_a_3726_, 1);
lean_inc(v_snd_3728_);
lean_dec(v_a_3726_);
v___x_3729_ = ((size_t)1ULL);
v___x_3730_ = lean_usize_add(v_i_3711_, v___x_3729_);
v_i_3711_ = v___x_3730_;
v_b_3713_ = v_fst_3727_;
v___y_3714_ = v_snd_3728_;
goto _start;
}
else
{
lean_dec_ref(v_leanOpts_3709_);
return v___x_3725_;
}
}
else
{
lean_object* v___x_3732_; lean_object* v___x_3733_; 
lean_dec_ref(v_leanOpts_3709_);
v___x_3732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3732_, 0, v_b_3713_);
lean_ctor_set(v___x_3732_, 1, v___y_3714_);
v___x_3733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3732_);
return v___x_3733_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___boxed(lean_object* v_leanOpts_3734_, lean_object* v_as_3735_, lean_object* v_i_3736_, lean_object* v_stop_3737_, lean_object* v_b_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_){
_start:
{
size_t v_i_boxed_3742_; size_t v_stop_boxed_3743_; lean_object* v_res_3744_; 
v_i_boxed_3742_ = lean_unbox_usize(v_i_3736_);
lean_dec(v_i_3736_);
v_stop_boxed_3743_ = lean_unbox_usize(v_stop_3737_);
lean_dec(v_stop_3737_);
v_res_3744_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(v_leanOpts_3734_, v_as_3735_, v_i_boxed_3742_, v_stop_boxed_3743_, v_b_3738_, v___y_3739_, v___y_3740_);
lean_dec_ref(v___y_3740_);
lean_dec_ref(v_as_3735_);
return v_res_3744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__10(lean_object* v_leanOpts_3745_, lean_object* v_as_3746_, size_t v_i_3747_, size_t v_stop_3748_, lean_object* v_b_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_){
_start:
{
uint8_t v___x_3756_; 
v___x_3756_ = lean_usize_dec_eq(v_i_3747_, v_stop_3748_);
if (v___x_3756_ == 0)
{
lean_object* v___x_3757_; lean_object* v_fst_3758_; lean_object* v_snd_3759_; lean_object* v___x_3760_; 
v___x_3757_ = lean_array_uget_borrowed(v_as_3746_, v_i_3747_);
v_fst_3758_ = lean_ctor_get(v___x_3757_, 0);
v_snd_3759_ = lean_ctor_get(v___x_3757_, 1);
lean_inc(v_snd_3759_);
v___x_3760_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_snd_3759_, v___y_3750_, v___y_3751_);
if (lean_obj_tag(v___x_3760_) == 0)
{
lean_object* v_a_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3835_; 
v_a_3761_ = lean_ctor_get(v___x_3760_, 0);
v_isSharedCheck_3835_ = !lean_is_exclusive(v___x_3760_);
if (v_isSharedCheck_3835_ == 0)
{
v___x_3763_ = v___x_3760_;
v_isShared_3764_ = v_isSharedCheck_3835_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_a_3761_);
lean_dec(v___x_3760_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3835_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v_snd_3765_; lean_object* v_opts_3766_; uint8_t v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v_snd_3765_ = lean_ctor_get(v_a_3761_, 1);
lean_inc(v_snd_3765_);
lean_dec(v_a_3761_);
v_opts_3766_ = lean_ctor_get(v_fst_3758_, 4);
v___x_3767_ = 1;
v___x_3768_ = lean_unsigned_to_nat(0u);
v___x_3769_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v_leanOpts_3745_);
lean_inc(v_opts_3766_);
lean_inc(v_snd_3759_);
v___x_3770_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_b_3749_, v_snd_3759_, v_opts_3766_, v_leanOpts_3745_, v___x_3767_, v___x_3769_);
if (lean_obj_tag(v___x_3770_) == 0)
{
lean_object* v_a_3771_; lean_object* v_a_3772_; lean_object* v_snd_3774_; lean_object* v___x_3778_; uint8_t v___x_3779_; 
lean_del_object(v___x_3763_);
v_a_3771_ = lean_ctor_get(v___x_3770_, 0);
lean_inc(v_a_3771_);
v_a_3772_ = lean_ctor_get(v___x_3770_, 1);
lean_inc(v_a_3772_);
lean_dec_ref(v___x_3770_);
v___x_3778_ = lean_array_get_size(v_a_3772_);
v___x_3779_ = lean_nat_dec_lt(v___x_3768_, v___x_3778_);
if (v___x_3779_ == 0)
{
lean_dec(v_a_3772_);
v_snd_3774_ = v_snd_3765_;
goto v___jp_3773_;
}
else
{
lean_object* v___x_3780_; uint8_t v___x_3781_; 
v___x_3780_ = lean_box(0);
v___x_3781_ = lean_nat_dec_le(v___x_3778_, v___x_3778_);
if (v___x_3781_ == 0)
{
if (v___x_3779_ == 0)
{
lean_dec(v_a_3772_);
v_snd_3774_ = v_snd_3765_;
goto v___jp_3773_;
}
else
{
size_t v___x_3782_; size_t v___x_3783_; lean_object* v___x_3784_; 
v___x_3782_ = ((size_t)0ULL);
v___x_3783_ = lean_usize_of_nat(v___x_3778_);
v___x_3784_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_3772_, v___x_3782_, v___x_3783_, v___x_3780_, v___y_3751_);
lean_dec(v_a_3772_);
if (lean_obj_tag(v___x_3784_) == 0)
{
lean_dec_ref(v___x_3784_);
v_snd_3774_ = v_snd_3765_;
goto v___jp_3773_;
}
else
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3792_; 
lean_dec(v_a_3771_);
lean_dec(v_snd_3765_);
lean_dec_ref(v_leanOpts_3745_);
v_a_3785_ = lean_ctor_get(v___x_3784_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v___x_3784_);
if (v_isSharedCheck_3792_ == 0)
{
v___x_3787_ = v___x_3784_;
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v___x_3784_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
lean_object* v___x_3790_; 
if (v_isShared_3788_ == 0)
{
v___x_3790_ = v___x_3787_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_a_3785_);
v___x_3790_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
return v___x_3790_;
}
}
}
}
}
else
{
size_t v___x_3793_; size_t v___x_3794_; lean_object* v___x_3795_; 
v___x_3793_ = ((size_t)0ULL);
v___x_3794_ = lean_usize_of_nat(v___x_3778_);
v___x_3795_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_3772_, v___x_3793_, v___x_3794_, v___x_3780_, v___y_3751_);
lean_dec(v_a_3772_);
if (lean_obj_tag(v___x_3795_) == 0)
{
lean_dec_ref(v___x_3795_);
v_snd_3774_ = v_snd_3765_;
goto v___jp_3773_;
}
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
lean_dec(v_a_3771_);
lean_dec(v_snd_3765_);
lean_dec_ref(v_leanOpts_3745_);
v_a_3796_ = lean_ctor_get(v___x_3795_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3795_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v___x_3795_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3795_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
if (v_isShared_3799_ == 0)
{
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_a_3796_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
}
v___jp_3773_:
{
size_t v___x_3775_; size_t v___x_3776_; 
v___x_3775_ = ((size_t)1ULL);
v___x_3776_ = lean_usize_add(v_i_3747_, v___x_3775_);
v_i_3747_ = v___x_3776_;
v_b_3749_ = v_a_3771_;
v___y_3750_ = v_snd_3774_;
goto _start;
}
}
else
{
lean_object* v_a_3804_; lean_object* v___x_3805_; uint8_t v___x_3806_; 
lean_dec(v_snd_3765_);
lean_dec_ref(v_leanOpts_3745_);
v_a_3804_ = lean_ctor_get(v___x_3770_, 1);
lean_inc(v_a_3804_);
lean_dec_ref(v___x_3770_);
v___x_3805_ = lean_array_get_size(v_a_3804_);
v___x_3806_ = lean_nat_dec_lt(v___x_3768_, v___x_3805_);
if (v___x_3806_ == 0)
{
lean_object* v___x_3807_; lean_object* v___x_3809_; 
lean_dec(v_a_3804_);
v___x_3807_ = lean_box(0);
if (v_isShared_3764_ == 0)
{
lean_ctor_set_tag(v___x_3763_, 1);
lean_ctor_set(v___x_3763_, 0, v___x_3807_);
v___x_3809_ = v___x_3763_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v___x_3807_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
else
{
lean_object* v___x_3811_; uint8_t v___x_3812_; 
lean_del_object(v___x_3763_);
v___x_3811_ = lean_box(0);
v___x_3812_ = lean_nat_dec_le(v___x_3805_, v___x_3805_);
if (v___x_3812_ == 0)
{
if (v___x_3806_ == 0)
{
lean_dec(v_a_3804_);
goto v___jp_3753_;
}
else
{
size_t v___x_3813_; size_t v___x_3814_; lean_object* v___x_3815_; 
v___x_3813_ = ((size_t)0ULL);
v___x_3814_ = lean_usize_of_nat(v___x_3805_);
v___x_3815_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_3804_, v___x_3813_, v___x_3814_, v___x_3811_, v___y_3751_);
lean_dec(v_a_3804_);
if (lean_obj_tag(v___x_3815_) == 0)
{
lean_dec_ref(v___x_3815_);
goto v___jp_3753_;
}
else
{
lean_object* v_a_3816_; lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3823_; 
v_a_3816_ = lean_ctor_get(v___x_3815_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v___x_3815_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3818_ = v___x_3815_;
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
else
{
lean_inc(v_a_3816_);
lean_dec(v___x_3815_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v___x_3821_; 
if (v_isShared_3819_ == 0)
{
v___x_3821_ = v___x_3818_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_a_3816_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
return v___x_3821_;
}
}
}
}
}
else
{
size_t v___x_3824_; size_t v___x_3825_; lean_object* v___x_3826_; 
v___x_3824_ = ((size_t)0ULL);
v___x_3825_ = lean_usize_of_nat(v___x_3805_);
v___x_3826_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_3804_, v___x_3824_, v___x_3825_, v___x_3811_, v___y_3751_);
lean_dec(v_a_3804_);
if (lean_obj_tag(v___x_3826_) == 0)
{
lean_dec_ref(v___x_3826_);
goto v___jp_3753_;
}
else
{
lean_object* v_a_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3834_; 
v_a_3827_ = lean_ctor_get(v___x_3826_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v___x_3826_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3829_ = v___x_3826_;
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_a_3827_);
lean_dec(v___x_3826_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
lean_object* v___x_3832_; 
if (v_isShared_3830_ == 0)
{
v___x_3832_ = v___x_3829_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v_a_3827_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3843_; 
lean_dec_ref(v_b_3749_);
lean_dec_ref(v_leanOpts_3745_);
v_a_3836_ = lean_ctor_get(v___x_3760_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___x_3760_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3838_ = v___x_3760_;
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v___x_3760_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3841_; 
if (v_isShared_3839_ == 0)
{
v___x_3841_ = v___x_3838_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_a_3836_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
}
else
{
lean_object* v___x_3844_; lean_object* v___x_3845_; 
lean_dec_ref(v_leanOpts_3745_);
v___x_3844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3844_, 0, v_b_3749_);
lean_ctor_set(v___x_3844_, 1, v___y_3750_);
v___x_3845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3845_, 0, v___x_3844_);
return v___x_3845_;
}
v___jp_3753_:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; 
v___x_3754_ = lean_box(0);
v___x_3755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3754_);
return v___x_3755_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__10___boxed(lean_object* v_leanOpts_3846_, lean_object* v_as_3847_, lean_object* v_i_3848_, lean_object* v_stop_3849_, lean_object* v_b_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_){
_start:
{
size_t v_i_boxed_3854_; size_t v_stop_boxed_3855_; lean_object* v_res_3856_; 
v_i_boxed_3854_ = lean_unbox_usize(v_i_3848_);
lean_dec(v_i_3848_);
v_stop_boxed_3855_ = lean_unbox_usize(v_stop_3849_);
lean_dec(v_stop_3849_);
v_res_3856_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__10(v_leanOpts_3846_, v_as_3847_, v_i_boxed_3854_, v_stop_boxed_3855_, v_b_3850_, v___y_3851_, v___y_3852_);
lean_dec_ref(v___y_3852_);
lean_dec_ref(v_as_3847_);
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11_spec__18___redArg(lean_object* v_msg_3857_){
_start:
{
lean_object* v___x_3858_; lean_object* v___x_3859_; 
v___x_3858_ = lean_box(1);
v___x_3859_ = lean_panic_fn_borrowed(v___x_3858_, v_msg_3857_);
return v___x_3859_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; 
v___x_3863_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__2));
v___x_3864_ = lean_unsigned_to_nat(35u);
v___x_3865_ = lean_unsigned_to_nat(276u);
v___x_3866_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__1));
v___x_3867_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__0));
v___x_3868_ = l_mkPanicMessageWithDecl(v___x_3867_, v___x_3866_, v___x_3865_, v___x_3864_, v___x_3863_);
return v___x_3868_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__4(void){
_start:
{
lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; 
v___x_3869_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__2));
v___x_3870_ = lean_unsigned_to_nat(21u);
v___x_3871_ = lean_unsigned_to_nat(277u);
v___x_3872_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__1));
v___x_3873_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__0));
v___x_3874_ = l_mkPanicMessageWithDecl(v___x_3873_, v___x_3872_, v___x_3871_, v___x_3870_, v___x_3869_);
return v___x_3874_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__7(void){
_start:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
v___x_3877_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__6));
v___x_3878_ = lean_unsigned_to_nat(35u);
v___x_3879_ = lean_unsigned_to_nat(182u);
v___x_3880_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__5));
v___x_3881_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__0));
v___x_3882_ = l_mkPanicMessageWithDecl(v___x_3881_, v___x_3880_, v___x_3879_, v___x_3878_, v___x_3877_);
return v___x_3882_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__8(void){
_start:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3883_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__6));
v___x_3884_ = lean_unsigned_to_nat(21u);
v___x_3885_ = lean_unsigned_to_nat(183u);
v___x_3886_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__5));
v___x_3887_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__0));
v___x_3888_ = l_mkPanicMessageWithDecl(v___x_3887_, v___x_3886_, v___x_3885_, v___x_3884_, v___x_3883_);
return v___x_3888_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg(lean_object* v_k_3889_, lean_object* v_v_3890_, lean_object* v_t_3891_){
_start:
{
if (lean_obj_tag(v_t_3891_) == 0)
{
lean_object* v_size_3892_; lean_object* v_k_3893_; lean_object* v_v_3894_; lean_object* v_l_3895_; lean_object* v_r_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_4253_; 
v_size_3892_ = lean_ctor_get(v_t_3891_, 0);
v_k_3893_ = lean_ctor_get(v_t_3891_, 1);
v_v_3894_ = lean_ctor_get(v_t_3891_, 2);
v_l_3895_ = lean_ctor_get(v_t_3891_, 3);
v_r_3896_ = lean_ctor_get(v_t_3891_, 4);
v_isSharedCheck_4253_ = !lean_is_exclusive(v_t_3891_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_3898_ = v_t_3891_;
v_isShared_3899_ = v_isSharedCheck_4253_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_r_3896_);
lean_inc(v_l_3895_);
lean_inc(v_v_3894_);
lean_inc(v_k_3893_);
lean_inc(v_size_3892_);
lean_dec(v_t_3891_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_4253_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
uint8_t v___x_3900_; 
v___x_3900_ = lean_string_dec_lt(v_k_3889_, v_k_3893_);
if (v___x_3900_ == 0)
{
uint8_t v___x_3901_; 
v___x_3901_ = lean_string_dec_eq(v_k_3889_, v_k_3893_);
if (v___x_3901_ == 0)
{
lean_object* v___x_3902_; 
lean_dec(v_size_3892_);
v___x_3902_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg(v_k_3889_, v_v_3890_, v_r_3896_);
if (lean_obj_tag(v_l_3895_) == 0)
{
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v_size_3903_; lean_object* v_size_3904_; lean_object* v_k_3905_; lean_object* v_v_3906_; lean_object* v_l_3907_; lean_object* v_r_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; uint8_t v___x_3911_; 
v_size_3903_ = lean_ctor_get(v_l_3895_, 0);
v_size_3904_ = lean_ctor_get(v___x_3902_, 0);
lean_inc(v_size_3904_);
v_k_3905_ = lean_ctor_get(v___x_3902_, 1);
lean_inc(v_k_3905_);
v_v_3906_ = lean_ctor_get(v___x_3902_, 2);
lean_inc(v_v_3906_);
v_l_3907_ = lean_ctor_get(v___x_3902_, 3);
lean_inc(v_l_3907_);
v_r_3908_ = lean_ctor_get(v___x_3902_, 4);
lean_inc(v_r_3908_);
v___x_3909_ = lean_unsigned_to_nat(3u);
v___x_3910_ = lean_nat_mul(v___x_3909_, v_size_3903_);
v___x_3911_ = lean_nat_dec_lt(v___x_3910_, v_size_3904_);
lean_dec(v___x_3910_);
if (v___x_3911_ == 0)
{
lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3916_; 
lean_dec(v_r_3908_);
lean_dec(v_l_3907_);
lean_dec(v_v_3906_);
lean_dec(v_k_3905_);
v___x_3912_ = lean_unsigned_to_nat(1u);
v___x_3913_ = lean_nat_add(v___x_3912_, v_size_3903_);
v___x_3914_ = lean_nat_add(v___x_3913_, v_size_3904_);
lean_dec(v_size_3904_);
lean_dec(v___x_3913_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v___x_3902_);
lean_ctor_set(v___x_3898_, 0, v___x_3914_);
v___x_3916_ = v___x_3898_;
goto v_reusejp_3915_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v___x_3914_);
lean_ctor_set(v_reuseFailAlloc_3917_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_3917_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_3917_, 3, v_l_3895_);
lean_ctor_set(v_reuseFailAlloc_3917_, 4, v___x_3902_);
v___x_3916_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3915_;
}
v_reusejp_3915_:
{
return v___x_3916_;
}
}
else
{
lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3987_; 
v_isSharedCheck_3987_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_3987_ == 0)
{
lean_object* v_unused_3988_; lean_object* v_unused_3989_; lean_object* v_unused_3990_; lean_object* v_unused_3991_; lean_object* v_unused_3992_; 
v_unused_3988_ = lean_ctor_get(v___x_3902_, 4);
lean_dec(v_unused_3988_);
v_unused_3989_ = lean_ctor_get(v___x_3902_, 3);
lean_dec(v_unused_3989_);
v_unused_3990_ = lean_ctor_get(v___x_3902_, 2);
lean_dec(v_unused_3990_);
v_unused_3991_ = lean_ctor_get(v___x_3902_, 1);
lean_dec(v_unused_3991_);
v_unused_3992_ = lean_ctor_get(v___x_3902_, 0);
lean_dec(v_unused_3992_);
v___x_3919_ = v___x_3902_;
v_isShared_3920_ = v_isSharedCheck_3987_;
goto v_resetjp_3918_;
}
else
{
lean_dec(v___x_3902_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3987_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
if (lean_obj_tag(v_l_3907_) == 0)
{
if (lean_obj_tag(v_r_3908_) == 0)
{
lean_object* v_size_3921_; lean_object* v_k_3922_; lean_object* v_v_3923_; lean_object* v_l_3924_; lean_object* v_r_3925_; lean_object* v_size_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; uint8_t v___x_3929_; 
v_size_3921_ = lean_ctor_get(v_l_3907_, 0);
v_k_3922_ = lean_ctor_get(v_l_3907_, 1);
v_v_3923_ = lean_ctor_get(v_l_3907_, 2);
v_l_3924_ = lean_ctor_get(v_l_3907_, 3);
v_r_3925_ = lean_ctor_get(v_l_3907_, 4);
v_size_3926_ = lean_ctor_get(v_r_3908_, 0);
v___x_3927_ = lean_unsigned_to_nat(2u);
v___x_3928_ = lean_nat_mul(v___x_3927_, v_size_3926_);
v___x_3929_ = lean_nat_dec_lt(v_size_3921_, v___x_3928_);
lean_dec(v___x_3928_);
if (v___x_3929_ == 0)
{
lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3958_; 
lean_inc(v_r_3925_);
lean_inc(v_l_3924_);
lean_inc(v_v_3923_);
lean_inc(v_k_3922_);
v_isSharedCheck_3958_ = !lean_is_exclusive(v_l_3907_);
if (v_isSharedCheck_3958_ == 0)
{
lean_object* v_unused_3959_; lean_object* v_unused_3960_; lean_object* v_unused_3961_; lean_object* v_unused_3962_; lean_object* v_unused_3963_; 
v_unused_3959_ = lean_ctor_get(v_l_3907_, 4);
lean_dec(v_unused_3959_);
v_unused_3960_ = lean_ctor_get(v_l_3907_, 3);
lean_dec(v_unused_3960_);
v_unused_3961_ = lean_ctor_get(v_l_3907_, 2);
lean_dec(v_unused_3961_);
v_unused_3962_ = lean_ctor_get(v_l_3907_, 1);
lean_dec(v_unused_3962_);
v_unused_3963_ = lean_ctor_get(v_l_3907_, 0);
lean_dec(v_unused_3963_);
v___x_3931_ = v_l_3907_;
v_isShared_3932_ = v_isSharedCheck_3958_;
goto v_resetjp_3930_;
}
else
{
lean_dec(v_l_3907_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3958_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___y_3937_; lean_object* v___y_3938_; lean_object* v___y_3939_; lean_object* v___y_3948_; 
v___x_3933_ = lean_unsigned_to_nat(1u);
v___x_3934_ = lean_nat_add(v___x_3933_, v_size_3903_);
v___x_3935_ = lean_nat_add(v___x_3934_, v_size_3904_);
lean_dec(v_size_3904_);
if (lean_obj_tag(v_l_3924_) == 0)
{
lean_object* v_size_3956_; 
v_size_3956_ = lean_ctor_get(v_l_3924_, 0);
lean_inc(v_size_3956_);
v___y_3948_ = v_size_3956_;
goto v___jp_3947_;
}
else
{
lean_object* v___x_3957_; 
v___x_3957_ = lean_unsigned_to_nat(0u);
v___y_3948_ = v___x_3957_;
goto v___jp_3947_;
}
v___jp_3936_:
{
lean_object* v___x_3940_; lean_object* v___x_3942_; 
v___x_3940_ = lean_nat_add(v___y_3937_, v___y_3939_);
lean_dec(v___y_3939_);
lean_dec(v___y_3937_);
if (v_isShared_3932_ == 0)
{
lean_ctor_set(v___x_3931_, 4, v_r_3908_);
lean_ctor_set(v___x_3931_, 3, v_r_3925_);
lean_ctor_set(v___x_3931_, 2, v_v_3906_);
lean_ctor_set(v___x_3931_, 1, v_k_3905_);
lean_ctor_set(v___x_3931_, 0, v___x_3940_);
v___x_3942_ = v___x_3931_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v___x_3940_);
lean_ctor_set(v_reuseFailAlloc_3946_, 1, v_k_3905_);
lean_ctor_set(v_reuseFailAlloc_3946_, 2, v_v_3906_);
lean_ctor_set(v_reuseFailAlloc_3946_, 3, v_r_3925_);
lean_ctor_set(v_reuseFailAlloc_3946_, 4, v_r_3908_);
v___x_3942_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
lean_object* v___x_3944_; 
if (v_isShared_3920_ == 0)
{
lean_ctor_set(v___x_3919_, 4, v___x_3942_);
lean_ctor_set(v___x_3919_, 3, v___y_3938_);
lean_ctor_set(v___x_3919_, 2, v_v_3923_);
lean_ctor_set(v___x_3919_, 1, v_k_3922_);
lean_ctor_set(v___x_3919_, 0, v___x_3935_);
v___x_3944_ = v___x_3919_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v___x_3935_);
lean_ctor_set(v_reuseFailAlloc_3945_, 1, v_k_3922_);
lean_ctor_set(v_reuseFailAlloc_3945_, 2, v_v_3923_);
lean_ctor_set(v_reuseFailAlloc_3945_, 3, v___y_3938_);
lean_ctor_set(v_reuseFailAlloc_3945_, 4, v___x_3942_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
return v___x_3944_;
}
}
}
v___jp_3947_:
{
lean_object* v___x_3949_; lean_object* v___x_3951_; 
v___x_3949_ = lean_nat_add(v___x_3934_, v___y_3948_);
lean_dec(v___y_3948_);
lean_dec(v___x_3934_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v_l_3924_);
lean_ctor_set(v___x_3898_, 0, v___x_3949_);
v___x_3951_ = v___x_3898_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v___x_3949_);
lean_ctor_set(v_reuseFailAlloc_3955_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_3955_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_3955_, 3, v_l_3895_);
lean_ctor_set(v_reuseFailAlloc_3955_, 4, v_l_3924_);
v___x_3951_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
lean_object* v___x_3952_; 
v___x_3952_ = lean_nat_add(v___x_3933_, v_size_3926_);
if (lean_obj_tag(v_r_3925_) == 0)
{
lean_object* v_size_3953_; 
v_size_3953_ = lean_ctor_get(v_r_3925_, 0);
lean_inc(v_size_3953_);
v___y_3937_ = v___x_3952_;
v___y_3938_ = v___x_3951_;
v___y_3939_ = v_size_3953_;
goto v___jp_3936_;
}
else
{
lean_object* v___x_3954_; 
v___x_3954_ = lean_unsigned_to_nat(0u);
v___y_3937_ = v___x_3952_;
v___y_3938_ = v___x_3951_;
v___y_3939_ = v___x_3954_;
goto v___jp_3936_;
}
}
}
}
}
else
{
lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3969_; 
lean_del_object(v___x_3898_);
v___x_3964_ = lean_unsigned_to_nat(1u);
v___x_3965_ = lean_nat_add(v___x_3964_, v_size_3903_);
v___x_3966_ = lean_nat_add(v___x_3965_, v_size_3904_);
lean_dec(v_size_3904_);
v___x_3967_ = lean_nat_add(v___x_3965_, v_size_3921_);
lean_dec(v___x_3965_);
lean_inc_ref(v_l_3895_);
if (v_isShared_3920_ == 0)
{
lean_ctor_set(v___x_3919_, 4, v_l_3907_);
lean_ctor_set(v___x_3919_, 3, v_l_3895_);
lean_ctor_set(v___x_3919_, 2, v_v_3894_);
lean_ctor_set(v___x_3919_, 1, v_k_3893_);
lean_ctor_set(v___x_3919_, 0, v___x_3967_);
v___x_3969_ = v___x_3919_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v___x_3967_);
lean_ctor_set(v_reuseFailAlloc_3982_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_3982_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_3982_, 3, v_l_3895_);
lean_ctor_set(v_reuseFailAlloc_3982_, 4, v_l_3907_);
v___x_3969_ = v_reuseFailAlloc_3982_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3976_; 
v_isSharedCheck_3976_ = !lean_is_exclusive(v_l_3895_);
if (v_isSharedCheck_3976_ == 0)
{
lean_object* v_unused_3977_; lean_object* v_unused_3978_; lean_object* v_unused_3979_; lean_object* v_unused_3980_; lean_object* v_unused_3981_; 
v_unused_3977_ = lean_ctor_get(v_l_3895_, 4);
lean_dec(v_unused_3977_);
v_unused_3978_ = lean_ctor_get(v_l_3895_, 3);
lean_dec(v_unused_3978_);
v_unused_3979_ = lean_ctor_get(v_l_3895_, 2);
lean_dec(v_unused_3979_);
v_unused_3980_ = lean_ctor_get(v_l_3895_, 1);
lean_dec(v_unused_3980_);
v_unused_3981_ = lean_ctor_get(v_l_3895_, 0);
lean_dec(v_unused_3981_);
v___x_3971_ = v_l_3895_;
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
else
{
lean_dec(v_l_3895_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
lean_object* v___x_3974_; 
if (v_isShared_3972_ == 0)
{
lean_ctor_set(v___x_3971_, 4, v_r_3908_);
lean_ctor_set(v___x_3971_, 3, v___x_3969_);
lean_ctor_set(v___x_3971_, 2, v_v_3906_);
lean_ctor_set(v___x_3971_, 1, v_k_3905_);
lean_ctor_set(v___x_3971_, 0, v___x_3966_);
v___x_3974_ = v___x_3971_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v___x_3966_);
lean_ctor_set(v_reuseFailAlloc_3975_, 1, v_k_3905_);
lean_ctor_set(v_reuseFailAlloc_3975_, 2, v_v_3906_);
lean_ctor_set(v_reuseFailAlloc_3975_, 3, v___x_3969_);
lean_ctor_set(v_reuseFailAlloc_3975_, 4, v_r_3908_);
v___x_3974_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
return v___x_3974_;
}
}
}
}
}
else
{
lean_object* v___x_3983_; lean_object* v___x_3984_; 
lean_dec_ref(v_l_3907_);
lean_del_object(v___x_3919_);
lean_dec(v_v_3906_);
lean_dec(v_k_3905_);
lean_dec(v_size_3904_);
lean_dec_ref(v_l_3895_);
lean_del_object(v___x_3898_);
lean_dec(v_v_3894_);
lean_dec(v_k_3893_);
v___x_3983_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__3);
v___x_3984_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11_spec__18___redArg(v___x_3983_);
return v___x_3984_;
}
}
else
{
lean_object* v___x_3985_; lean_object* v___x_3986_; 
lean_del_object(v___x_3919_);
lean_dec(v_r_3908_);
lean_dec(v_v_3906_);
lean_dec(v_k_3905_);
lean_dec(v_size_3904_);
lean_dec_ref(v_l_3895_);
lean_del_object(v___x_3898_);
lean_dec(v_v_3894_);
lean_dec(v_k_3893_);
v___x_3985_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__4);
v___x_3986_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11_spec__18___redArg(v___x_3985_);
return v___x_3986_;
}
}
}
}
else
{
lean_object* v_size_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3997_; 
v_size_3993_ = lean_ctor_get(v_l_3895_, 0);
v___x_3994_ = lean_unsigned_to_nat(1u);
v___x_3995_ = lean_nat_add(v___x_3994_, v_size_3993_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v___x_3902_);
lean_ctor_set(v___x_3898_, 0, v___x_3995_);
v___x_3997_ = v___x_3898_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3998_; 
v_reuseFailAlloc_3998_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3998_, 0, v___x_3995_);
lean_ctor_set(v_reuseFailAlloc_3998_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_3998_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_3998_, 3, v_l_3895_);
lean_ctor_set(v_reuseFailAlloc_3998_, 4, v___x_3902_);
v___x_3997_ = v_reuseFailAlloc_3998_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
return v___x_3997_;
}
}
}
else
{
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v_l_3999_; 
v_l_3999_ = lean_ctor_get(v___x_3902_, 3);
lean_inc(v_l_3999_);
if (lean_obj_tag(v_l_3999_) == 0)
{
lean_object* v_r_4000_; 
v_r_4000_ = lean_ctor_get(v___x_3902_, 4);
lean_inc(v_r_4000_);
if (lean_obj_tag(v_r_4000_) == 0)
{
lean_object* v_size_4001_; lean_object* v_k_4002_; lean_object* v_v_4003_; lean_object* v___x_4005_; uint8_t v_isShared_4006_; uint8_t v_isSharedCheck_4017_; 
v_size_4001_ = lean_ctor_get(v___x_3902_, 0);
v_k_4002_ = lean_ctor_get(v___x_3902_, 1);
v_v_4003_ = lean_ctor_get(v___x_3902_, 2);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_4017_ == 0)
{
lean_object* v_unused_4018_; lean_object* v_unused_4019_; 
v_unused_4018_ = lean_ctor_get(v___x_3902_, 4);
lean_dec(v_unused_4018_);
v_unused_4019_ = lean_ctor_get(v___x_3902_, 3);
lean_dec(v_unused_4019_);
v___x_4005_ = v___x_3902_;
v_isShared_4006_ = v_isSharedCheck_4017_;
goto v_resetjp_4004_;
}
else
{
lean_inc(v_v_4003_);
lean_inc(v_k_4002_);
lean_inc(v_size_4001_);
lean_dec(v___x_3902_);
v___x_4005_ = lean_box(0);
v_isShared_4006_ = v_isSharedCheck_4017_;
goto v_resetjp_4004_;
}
v_resetjp_4004_:
{
lean_object* v_size_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4012_; 
v_size_4007_ = lean_ctor_get(v_l_3999_, 0);
v___x_4008_ = lean_unsigned_to_nat(1u);
v___x_4009_ = lean_nat_add(v___x_4008_, v_size_4001_);
lean_dec(v_size_4001_);
v___x_4010_ = lean_nat_add(v___x_4008_, v_size_4007_);
if (v_isShared_4006_ == 0)
{
lean_ctor_set(v___x_4005_, 4, v_l_3999_);
lean_ctor_set(v___x_4005_, 3, v_l_3895_);
lean_ctor_set(v___x_4005_, 2, v_v_3894_);
lean_ctor_set(v___x_4005_, 1, v_k_3893_);
lean_ctor_set(v___x_4005_, 0, v___x_4010_);
v___x_4012_ = v___x_4005_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v___x_4010_);
lean_ctor_set(v_reuseFailAlloc_4016_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4016_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4016_, 3, v_l_3895_);
lean_ctor_set(v_reuseFailAlloc_4016_, 4, v_l_3999_);
v___x_4012_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
lean_object* v___x_4014_; 
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v_r_4000_);
lean_ctor_set(v___x_3898_, 3, v___x_4012_);
lean_ctor_set(v___x_3898_, 2, v_v_4003_);
lean_ctor_set(v___x_3898_, 1, v_k_4002_);
lean_ctor_set(v___x_3898_, 0, v___x_4009_);
v___x_4014_ = v___x_3898_;
goto v_reusejp_4013_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v___x_4009_);
lean_ctor_set(v_reuseFailAlloc_4015_, 1, v_k_4002_);
lean_ctor_set(v_reuseFailAlloc_4015_, 2, v_v_4003_);
lean_ctor_set(v_reuseFailAlloc_4015_, 3, v___x_4012_);
lean_ctor_set(v_reuseFailAlloc_4015_, 4, v_r_4000_);
v___x_4014_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4013_;
}
v_reusejp_4013_:
{
return v___x_4014_;
}
}
}
}
else
{
lean_object* v_k_4020_; lean_object* v_v_4021_; lean_object* v___x_4023_; uint8_t v_isShared_4024_; uint8_t v_isSharedCheck_4045_; 
v_k_4020_ = lean_ctor_get(v___x_3902_, 1);
v_v_4021_ = lean_ctor_get(v___x_3902_, 2);
v_isSharedCheck_4045_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_4045_ == 0)
{
lean_object* v_unused_4046_; lean_object* v_unused_4047_; lean_object* v_unused_4048_; 
v_unused_4046_ = lean_ctor_get(v___x_3902_, 4);
lean_dec(v_unused_4046_);
v_unused_4047_ = lean_ctor_get(v___x_3902_, 3);
lean_dec(v_unused_4047_);
v_unused_4048_ = lean_ctor_get(v___x_3902_, 0);
lean_dec(v_unused_4048_);
v___x_4023_ = v___x_3902_;
v_isShared_4024_ = v_isSharedCheck_4045_;
goto v_resetjp_4022_;
}
else
{
lean_inc(v_v_4021_);
lean_inc(v_k_4020_);
lean_dec(v___x_3902_);
v___x_4023_ = lean_box(0);
v_isShared_4024_ = v_isSharedCheck_4045_;
goto v_resetjp_4022_;
}
v_resetjp_4022_:
{
lean_object* v_k_4025_; lean_object* v_v_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4041_; 
v_k_4025_ = lean_ctor_get(v_l_3999_, 1);
v_v_4026_ = lean_ctor_get(v_l_3999_, 2);
v_isSharedCheck_4041_ = !lean_is_exclusive(v_l_3999_);
if (v_isSharedCheck_4041_ == 0)
{
lean_object* v_unused_4042_; lean_object* v_unused_4043_; lean_object* v_unused_4044_; 
v_unused_4042_ = lean_ctor_get(v_l_3999_, 4);
lean_dec(v_unused_4042_);
v_unused_4043_ = lean_ctor_get(v_l_3999_, 3);
lean_dec(v_unused_4043_);
v_unused_4044_ = lean_ctor_get(v_l_3999_, 0);
lean_dec(v_unused_4044_);
v___x_4028_ = v_l_3999_;
v_isShared_4029_ = v_isSharedCheck_4041_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_v_4026_);
lean_inc(v_k_4025_);
lean_dec(v_l_3999_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4041_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4033_; 
v___x_4030_ = lean_unsigned_to_nat(3u);
v___x_4031_ = lean_unsigned_to_nat(1u);
if (v_isShared_4029_ == 0)
{
lean_ctor_set(v___x_4028_, 4, v_r_4000_);
lean_ctor_set(v___x_4028_, 3, v_r_4000_);
lean_ctor_set(v___x_4028_, 2, v_v_3894_);
lean_ctor_set(v___x_4028_, 1, v_k_3893_);
lean_ctor_set(v___x_4028_, 0, v___x_4031_);
v___x_4033_ = v___x_4028_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v___x_4031_);
lean_ctor_set(v_reuseFailAlloc_4040_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4040_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4040_, 3, v_r_4000_);
lean_ctor_set(v_reuseFailAlloc_4040_, 4, v_r_4000_);
v___x_4033_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
lean_object* v___x_4035_; 
if (v_isShared_4024_ == 0)
{
lean_ctor_set(v___x_4023_, 3, v_r_4000_);
lean_ctor_set(v___x_4023_, 0, v___x_4031_);
v___x_4035_ = v___x_4023_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v___x_4031_);
lean_ctor_set(v_reuseFailAlloc_4039_, 1, v_k_4020_);
lean_ctor_set(v_reuseFailAlloc_4039_, 2, v_v_4021_);
lean_ctor_set(v_reuseFailAlloc_4039_, 3, v_r_4000_);
lean_ctor_set(v_reuseFailAlloc_4039_, 4, v_r_4000_);
v___x_4035_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
lean_object* v___x_4037_; 
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v___x_4035_);
lean_ctor_set(v___x_3898_, 3, v___x_4033_);
lean_ctor_set(v___x_3898_, 2, v_v_4026_);
lean_ctor_set(v___x_3898_, 1, v_k_4025_);
lean_ctor_set(v___x_3898_, 0, v___x_4030_);
v___x_4037_ = v___x_3898_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v___x_4030_);
lean_ctor_set(v_reuseFailAlloc_4038_, 1, v_k_4025_);
lean_ctor_set(v_reuseFailAlloc_4038_, 2, v_v_4026_);
lean_ctor_set(v_reuseFailAlloc_4038_, 3, v___x_4033_);
lean_ctor_set(v_reuseFailAlloc_4038_, 4, v___x_4035_);
v___x_4037_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
return v___x_4037_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_4049_; 
v_r_4049_ = lean_ctor_get(v___x_3902_, 4);
lean_inc(v_r_4049_);
if (lean_obj_tag(v_r_4049_) == 0)
{
lean_object* v_k_4050_; lean_object* v_v_4051_; lean_object* v___x_4053_; uint8_t v_isShared_4054_; uint8_t v_isSharedCheck_4063_; 
v_k_4050_ = lean_ctor_get(v___x_3902_, 1);
v_v_4051_ = lean_ctor_get(v___x_3902_, 2);
v_isSharedCheck_4063_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_4063_ == 0)
{
lean_object* v_unused_4064_; lean_object* v_unused_4065_; lean_object* v_unused_4066_; 
v_unused_4064_ = lean_ctor_get(v___x_3902_, 4);
lean_dec(v_unused_4064_);
v_unused_4065_ = lean_ctor_get(v___x_3902_, 3);
lean_dec(v_unused_4065_);
v_unused_4066_ = lean_ctor_get(v___x_3902_, 0);
lean_dec(v_unused_4066_);
v___x_4053_ = v___x_3902_;
v_isShared_4054_ = v_isSharedCheck_4063_;
goto v_resetjp_4052_;
}
else
{
lean_inc(v_v_4051_);
lean_inc(v_k_4050_);
lean_dec(v___x_3902_);
v___x_4053_ = lean_box(0);
v_isShared_4054_ = v_isSharedCheck_4063_;
goto v_resetjp_4052_;
}
v_resetjp_4052_:
{
lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4058_; 
v___x_4055_ = lean_unsigned_to_nat(3u);
v___x_4056_ = lean_unsigned_to_nat(1u);
if (v_isShared_4054_ == 0)
{
lean_ctor_set(v___x_4053_, 4, v_l_3999_);
lean_ctor_set(v___x_4053_, 2, v_v_3894_);
lean_ctor_set(v___x_4053_, 1, v_k_3893_);
lean_ctor_set(v___x_4053_, 0, v___x_4056_);
v___x_4058_ = v___x_4053_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v___x_4056_);
lean_ctor_set(v_reuseFailAlloc_4062_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4062_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4062_, 3, v_l_3999_);
lean_ctor_set(v_reuseFailAlloc_4062_, 4, v_l_3999_);
v___x_4058_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
lean_object* v___x_4060_; 
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v_r_4049_);
lean_ctor_set(v___x_3898_, 3, v___x_4058_);
lean_ctor_set(v___x_3898_, 2, v_v_4051_);
lean_ctor_set(v___x_3898_, 1, v_k_4050_);
lean_ctor_set(v___x_3898_, 0, v___x_4055_);
v___x_4060_ = v___x_3898_;
goto v_reusejp_4059_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v___x_4055_);
lean_ctor_set(v_reuseFailAlloc_4061_, 1, v_k_4050_);
lean_ctor_set(v_reuseFailAlloc_4061_, 2, v_v_4051_);
lean_ctor_set(v_reuseFailAlloc_4061_, 3, v___x_4058_);
lean_ctor_set(v_reuseFailAlloc_4061_, 4, v_r_4049_);
v___x_4060_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4059_;
}
v_reusejp_4059_:
{
return v___x_4060_;
}
}
}
}
else
{
lean_object* v___x_4067_; lean_object* v___x_4069_; 
v___x_4067_ = lean_unsigned_to_nat(2u);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v___x_3902_);
lean_ctor_set(v___x_3898_, 3, v_r_4049_);
lean_ctor_set(v___x_3898_, 0, v___x_4067_);
v___x_4069_ = v___x_3898_;
goto v_reusejp_4068_;
}
else
{
lean_object* v_reuseFailAlloc_4070_; 
v_reuseFailAlloc_4070_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4070_, 0, v___x_4067_);
lean_ctor_set(v_reuseFailAlloc_4070_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4070_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4070_, 3, v_r_4049_);
lean_ctor_set(v_reuseFailAlloc_4070_, 4, v___x_3902_);
v___x_4069_ = v_reuseFailAlloc_4070_;
goto v_reusejp_4068_;
}
v_reusejp_4068_:
{
return v___x_4069_;
}
}
}
}
else
{
lean_object* v___x_4071_; lean_object* v___x_4073_; 
v___x_4071_ = lean_unsigned_to_nat(1u);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v___x_3902_);
lean_ctor_set(v___x_3898_, 3, v___x_3902_);
lean_ctor_set(v___x_3898_, 0, v___x_4071_);
v___x_4073_ = v___x_3898_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v___x_4071_);
lean_ctor_set(v_reuseFailAlloc_4074_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4074_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4074_, 3, v___x_3902_);
lean_ctor_set(v_reuseFailAlloc_4074_, 4, v___x_3902_);
v___x_4073_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
return v___x_4073_;
}
}
}
}
else
{
lean_object* v___x_4076_; 
lean_dec(v_v_3894_);
lean_dec(v_k_3893_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 2, v_v_3890_);
lean_ctor_set(v___x_3898_, 1, v_k_3889_);
v___x_4076_ = v___x_3898_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v_size_3892_);
lean_ctor_set(v_reuseFailAlloc_4077_, 1, v_k_3889_);
lean_ctor_set(v_reuseFailAlloc_4077_, 2, v_v_3890_);
lean_ctor_set(v_reuseFailAlloc_4077_, 3, v_l_3895_);
lean_ctor_set(v_reuseFailAlloc_4077_, 4, v_r_3896_);
v___x_4076_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
return v___x_4076_;
}
}
}
else
{
lean_object* v___x_4078_; 
lean_dec(v_size_3892_);
v___x_4078_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg(v_k_3889_, v_v_3890_, v_l_3895_);
if (lean_obj_tag(v_r_3896_) == 0)
{
if (lean_obj_tag(v___x_4078_) == 0)
{
lean_object* v_size_4079_; lean_object* v_size_4080_; lean_object* v_k_4081_; lean_object* v_v_4082_; lean_object* v_l_4083_; lean_object* v_r_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; uint8_t v___x_4087_; 
v_size_4079_ = lean_ctor_get(v_r_3896_, 0);
v_size_4080_ = lean_ctor_get(v___x_4078_, 0);
lean_inc(v_size_4080_);
v_k_4081_ = lean_ctor_get(v___x_4078_, 1);
lean_inc(v_k_4081_);
v_v_4082_ = lean_ctor_get(v___x_4078_, 2);
lean_inc(v_v_4082_);
v_l_4083_ = lean_ctor_get(v___x_4078_, 3);
lean_inc(v_l_4083_);
v_r_4084_ = lean_ctor_get(v___x_4078_, 4);
lean_inc(v_r_4084_);
v___x_4085_ = lean_unsigned_to_nat(3u);
v___x_4086_ = lean_nat_mul(v___x_4085_, v_size_4079_);
v___x_4087_ = lean_nat_dec_lt(v___x_4086_, v_size_4080_);
lean_dec(v___x_4086_);
if (v___x_4087_ == 0)
{
lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4092_; 
lean_dec(v_r_4084_);
lean_dec(v_l_4083_);
lean_dec(v_v_4082_);
lean_dec(v_k_4081_);
v___x_4088_ = lean_unsigned_to_nat(1u);
v___x_4089_ = lean_nat_add(v___x_4088_, v_size_4080_);
lean_dec(v_size_4080_);
v___x_4090_ = lean_nat_add(v___x_4089_, v_size_4079_);
lean_dec(v___x_4089_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 3, v___x_4078_);
lean_ctor_set(v___x_3898_, 0, v___x_4090_);
v___x_4092_ = v___x_3898_;
goto v_reusejp_4091_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v___x_4090_);
lean_ctor_set(v_reuseFailAlloc_4093_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4093_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4093_, 3, v___x_4078_);
lean_ctor_set(v_reuseFailAlloc_4093_, 4, v_r_3896_);
v___x_4092_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4091_;
}
v_reusejp_4091_:
{
return v___x_4092_;
}
}
else
{
lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4165_; 
v_isSharedCheck_4165_ = !lean_is_exclusive(v___x_4078_);
if (v_isSharedCheck_4165_ == 0)
{
lean_object* v_unused_4166_; lean_object* v_unused_4167_; lean_object* v_unused_4168_; lean_object* v_unused_4169_; lean_object* v_unused_4170_; 
v_unused_4166_ = lean_ctor_get(v___x_4078_, 4);
lean_dec(v_unused_4166_);
v_unused_4167_ = lean_ctor_get(v___x_4078_, 3);
lean_dec(v_unused_4167_);
v_unused_4168_ = lean_ctor_get(v___x_4078_, 2);
lean_dec(v_unused_4168_);
v_unused_4169_ = lean_ctor_get(v___x_4078_, 1);
lean_dec(v_unused_4169_);
v_unused_4170_ = lean_ctor_get(v___x_4078_, 0);
lean_dec(v_unused_4170_);
v___x_4095_ = v___x_4078_;
v_isShared_4096_ = v_isSharedCheck_4165_;
goto v_resetjp_4094_;
}
else
{
lean_dec(v___x_4078_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4165_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
if (lean_obj_tag(v_l_4083_) == 0)
{
if (lean_obj_tag(v_r_4084_) == 0)
{
lean_object* v_size_4097_; lean_object* v_size_4098_; lean_object* v_k_4099_; lean_object* v_v_4100_; lean_object* v_l_4101_; lean_object* v_r_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; uint8_t v___x_4105_; 
v_size_4097_ = lean_ctor_get(v_l_4083_, 0);
v_size_4098_ = lean_ctor_get(v_r_4084_, 0);
v_k_4099_ = lean_ctor_get(v_r_4084_, 1);
v_v_4100_ = lean_ctor_get(v_r_4084_, 2);
v_l_4101_ = lean_ctor_get(v_r_4084_, 3);
v_r_4102_ = lean_ctor_get(v_r_4084_, 4);
v___x_4103_ = lean_unsigned_to_nat(2u);
v___x_4104_ = lean_nat_mul(v___x_4103_, v_size_4097_);
v___x_4105_ = lean_nat_dec_lt(v_size_4098_, v___x_4104_);
lean_dec(v___x_4104_);
if (v___x_4105_ == 0)
{
lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4135_; 
lean_inc(v_r_4102_);
lean_inc(v_l_4101_);
lean_inc(v_v_4100_);
lean_inc(v_k_4099_);
v_isSharedCheck_4135_ = !lean_is_exclusive(v_r_4084_);
if (v_isSharedCheck_4135_ == 0)
{
lean_object* v_unused_4136_; lean_object* v_unused_4137_; lean_object* v_unused_4138_; lean_object* v_unused_4139_; lean_object* v_unused_4140_; 
v_unused_4136_ = lean_ctor_get(v_r_4084_, 4);
lean_dec(v_unused_4136_);
v_unused_4137_ = lean_ctor_get(v_r_4084_, 3);
lean_dec(v_unused_4137_);
v_unused_4138_ = lean_ctor_get(v_r_4084_, 2);
lean_dec(v_unused_4138_);
v_unused_4139_ = lean_ctor_get(v_r_4084_, 1);
lean_dec(v_unused_4139_);
v_unused_4140_ = lean_ctor_get(v_r_4084_, 0);
lean_dec(v_unused_4140_);
v___x_4107_ = v_r_4084_;
v_isShared_4108_ = v_isSharedCheck_4135_;
goto v_resetjp_4106_;
}
else
{
lean_dec(v_r_4084_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4135_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___y_4113_; lean_object* v___y_4114_; lean_object* v___y_4115_; lean_object* v___x_4123_; lean_object* v___y_4125_; 
v___x_4109_ = lean_unsigned_to_nat(1u);
v___x_4110_ = lean_nat_add(v___x_4109_, v_size_4080_);
lean_dec(v_size_4080_);
v___x_4111_ = lean_nat_add(v___x_4110_, v_size_4079_);
lean_dec(v___x_4110_);
v___x_4123_ = lean_nat_add(v___x_4109_, v_size_4097_);
if (lean_obj_tag(v_l_4101_) == 0)
{
lean_object* v_size_4133_; 
v_size_4133_ = lean_ctor_get(v_l_4101_, 0);
lean_inc(v_size_4133_);
v___y_4125_ = v_size_4133_;
goto v___jp_4124_;
}
else
{
lean_object* v___x_4134_; 
v___x_4134_ = lean_unsigned_to_nat(0u);
v___y_4125_ = v___x_4134_;
goto v___jp_4124_;
}
v___jp_4112_:
{
lean_object* v___x_4116_; lean_object* v___x_4118_; 
v___x_4116_ = lean_nat_add(v___y_4113_, v___y_4115_);
lean_dec(v___y_4115_);
lean_dec(v___y_4113_);
if (v_isShared_4108_ == 0)
{
lean_ctor_set(v___x_4107_, 4, v_r_3896_);
lean_ctor_set(v___x_4107_, 3, v_r_4102_);
lean_ctor_set(v___x_4107_, 2, v_v_3894_);
lean_ctor_set(v___x_4107_, 1, v_k_3893_);
lean_ctor_set(v___x_4107_, 0, v___x_4116_);
v___x_4118_ = v___x_4107_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v___x_4116_);
lean_ctor_set(v_reuseFailAlloc_4122_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4122_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4122_, 3, v_r_4102_);
lean_ctor_set(v_reuseFailAlloc_4122_, 4, v_r_3896_);
v___x_4118_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
lean_object* v___x_4120_; 
if (v_isShared_4096_ == 0)
{
lean_ctor_set(v___x_4095_, 4, v___x_4118_);
lean_ctor_set(v___x_4095_, 3, v___y_4114_);
lean_ctor_set(v___x_4095_, 2, v_v_4100_);
lean_ctor_set(v___x_4095_, 1, v_k_4099_);
lean_ctor_set(v___x_4095_, 0, v___x_4111_);
v___x_4120_ = v___x_4095_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4111_);
lean_ctor_set(v_reuseFailAlloc_4121_, 1, v_k_4099_);
lean_ctor_set(v_reuseFailAlloc_4121_, 2, v_v_4100_);
lean_ctor_set(v_reuseFailAlloc_4121_, 3, v___y_4114_);
lean_ctor_set(v_reuseFailAlloc_4121_, 4, v___x_4118_);
v___x_4120_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
return v___x_4120_;
}
}
}
v___jp_4124_:
{
lean_object* v___x_4126_; lean_object* v___x_4128_; 
v___x_4126_ = lean_nat_add(v___x_4123_, v___y_4125_);
lean_dec(v___y_4125_);
lean_dec(v___x_4123_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v_l_4101_);
lean_ctor_set(v___x_3898_, 3, v_l_4083_);
lean_ctor_set(v___x_3898_, 2, v_v_4082_);
lean_ctor_set(v___x_3898_, 1, v_k_4081_);
lean_ctor_set(v___x_3898_, 0, v___x_4126_);
v___x_4128_ = v___x_3898_;
goto v_reusejp_4127_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v___x_4126_);
lean_ctor_set(v_reuseFailAlloc_4132_, 1, v_k_4081_);
lean_ctor_set(v_reuseFailAlloc_4132_, 2, v_v_4082_);
lean_ctor_set(v_reuseFailAlloc_4132_, 3, v_l_4083_);
lean_ctor_set(v_reuseFailAlloc_4132_, 4, v_l_4101_);
v___x_4128_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4127_;
}
v_reusejp_4127_:
{
lean_object* v___x_4129_; 
v___x_4129_ = lean_nat_add(v___x_4109_, v_size_4079_);
if (lean_obj_tag(v_r_4102_) == 0)
{
lean_object* v_size_4130_; 
v_size_4130_ = lean_ctor_get(v_r_4102_, 0);
lean_inc(v_size_4130_);
v___y_4113_ = v___x_4129_;
v___y_4114_ = v___x_4128_;
v___y_4115_ = v_size_4130_;
goto v___jp_4112_;
}
else
{
lean_object* v___x_4131_; 
v___x_4131_ = lean_unsigned_to_nat(0u);
v___y_4113_ = v___x_4129_;
v___y_4114_ = v___x_4128_;
v___y_4115_ = v___x_4131_;
goto v___jp_4112_;
}
}
}
}
}
else
{
lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4147_; 
lean_del_object(v___x_3898_);
v___x_4141_ = lean_unsigned_to_nat(1u);
v___x_4142_ = lean_nat_add(v___x_4141_, v_size_4080_);
lean_dec(v_size_4080_);
v___x_4143_ = lean_nat_add(v___x_4142_, v_size_4079_);
lean_dec(v___x_4142_);
v___x_4144_ = lean_nat_add(v___x_4141_, v_size_4079_);
v___x_4145_ = lean_nat_add(v___x_4144_, v_size_4098_);
lean_dec(v___x_4144_);
lean_inc_ref(v_r_3896_);
if (v_isShared_4096_ == 0)
{
lean_ctor_set(v___x_4095_, 4, v_r_3896_);
lean_ctor_set(v___x_4095_, 3, v_r_4084_);
lean_ctor_set(v___x_4095_, 2, v_v_3894_);
lean_ctor_set(v___x_4095_, 1, v_k_3893_);
lean_ctor_set(v___x_4095_, 0, v___x_4145_);
v___x_4147_ = v___x_4095_;
goto v_reusejp_4146_;
}
else
{
lean_object* v_reuseFailAlloc_4160_; 
v_reuseFailAlloc_4160_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4160_, 0, v___x_4145_);
lean_ctor_set(v_reuseFailAlloc_4160_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4160_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4160_, 3, v_r_4084_);
lean_ctor_set(v_reuseFailAlloc_4160_, 4, v_r_3896_);
v___x_4147_ = v_reuseFailAlloc_4160_;
goto v_reusejp_4146_;
}
v_reusejp_4146_:
{
lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4154_; 
v_isSharedCheck_4154_ = !lean_is_exclusive(v_r_3896_);
if (v_isSharedCheck_4154_ == 0)
{
lean_object* v_unused_4155_; lean_object* v_unused_4156_; lean_object* v_unused_4157_; lean_object* v_unused_4158_; lean_object* v_unused_4159_; 
v_unused_4155_ = lean_ctor_get(v_r_3896_, 4);
lean_dec(v_unused_4155_);
v_unused_4156_ = lean_ctor_get(v_r_3896_, 3);
lean_dec(v_unused_4156_);
v_unused_4157_ = lean_ctor_get(v_r_3896_, 2);
lean_dec(v_unused_4157_);
v_unused_4158_ = lean_ctor_get(v_r_3896_, 1);
lean_dec(v_unused_4158_);
v_unused_4159_ = lean_ctor_get(v_r_3896_, 0);
lean_dec(v_unused_4159_);
v___x_4149_ = v_r_3896_;
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
else
{
lean_dec(v_r_3896_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4152_; 
if (v_isShared_4150_ == 0)
{
lean_ctor_set(v___x_4149_, 4, v___x_4147_);
lean_ctor_set(v___x_4149_, 3, v_l_4083_);
lean_ctor_set(v___x_4149_, 2, v_v_4082_);
lean_ctor_set(v___x_4149_, 1, v_k_4081_);
lean_ctor_set(v___x_4149_, 0, v___x_4143_);
v___x_4152_ = v___x_4149_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v___x_4143_);
lean_ctor_set(v_reuseFailAlloc_4153_, 1, v_k_4081_);
lean_ctor_set(v_reuseFailAlloc_4153_, 2, v_v_4082_);
lean_ctor_set(v_reuseFailAlloc_4153_, 3, v_l_4083_);
lean_ctor_set(v_reuseFailAlloc_4153_, 4, v___x_4147_);
v___x_4152_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
return v___x_4152_;
}
}
}
}
}
else
{
lean_object* v___x_4161_; lean_object* v___x_4162_; 
lean_dec_ref(v_l_4083_);
lean_del_object(v___x_4095_);
lean_dec(v_v_4082_);
lean_dec(v_k_4081_);
lean_dec(v_size_4080_);
lean_dec_ref(v_r_3896_);
lean_del_object(v___x_3898_);
lean_dec(v_v_3894_);
lean_dec(v_k_3893_);
v___x_4161_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__7);
v___x_4162_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11_spec__18___redArg(v___x_4161_);
return v___x_4162_;
}
}
else
{
lean_object* v___x_4163_; lean_object* v___x_4164_; 
lean_del_object(v___x_4095_);
lean_dec(v_r_4084_);
lean_dec(v_v_4082_);
lean_dec(v_k_4081_);
lean_dec(v_size_4080_);
lean_dec_ref(v_r_3896_);
lean_del_object(v___x_3898_);
lean_dec(v_v_3894_);
lean_dec(v_k_3893_);
v___x_4163_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg___closed__8);
v___x_4164_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11_spec__18___redArg(v___x_4163_);
return v___x_4164_;
}
}
}
}
else
{
lean_object* v_size_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4175_; 
v_size_4171_ = lean_ctor_get(v_r_3896_, 0);
v___x_4172_ = lean_unsigned_to_nat(1u);
v___x_4173_ = lean_nat_add(v___x_4172_, v_size_4171_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 3, v___x_4078_);
lean_ctor_set(v___x_3898_, 0, v___x_4173_);
v___x_4175_ = v___x_3898_;
goto v_reusejp_4174_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v___x_4173_);
lean_ctor_set(v_reuseFailAlloc_4176_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4176_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4176_, 3, v___x_4078_);
lean_ctor_set(v_reuseFailAlloc_4176_, 4, v_r_3896_);
v___x_4175_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4174_;
}
v_reusejp_4174_:
{
return v___x_4175_;
}
}
}
else
{
if (lean_obj_tag(v___x_4078_) == 0)
{
lean_object* v_l_4177_; 
v_l_4177_ = lean_ctor_get(v___x_4078_, 3);
lean_inc(v_l_4177_);
if (lean_obj_tag(v_l_4177_) == 0)
{
lean_object* v_r_4178_; 
v_r_4178_ = lean_ctor_get(v___x_4078_, 4);
lean_inc(v_r_4178_);
if (lean_obj_tag(v_r_4178_) == 0)
{
lean_object* v_size_4179_; lean_object* v_k_4180_; lean_object* v_v_4181_; lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4195_; 
v_size_4179_ = lean_ctor_get(v___x_4078_, 0);
v_k_4180_ = lean_ctor_get(v___x_4078_, 1);
v_v_4181_ = lean_ctor_get(v___x_4078_, 2);
v_isSharedCheck_4195_ = !lean_is_exclusive(v___x_4078_);
if (v_isSharedCheck_4195_ == 0)
{
lean_object* v_unused_4196_; lean_object* v_unused_4197_; 
v_unused_4196_ = lean_ctor_get(v___x_4078_, 4);
lean_dec(v_unused_4196_);
v_unused_4197_ = lean_ctor_get(v___x_4078_, 3);
lean_dec(v_unused_4197_);
v___x_4183_ = v___x_4078_;
v_isShared_4184_ = v_isSharedCheck_4195_;
goto v_resetjp_4182_;
}
else
{
lean_inc(v_v_4181_);
lean_inc(v_k_4180_);
lean_inc(v_size_4179_);
lean_dec(v___x_4078_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4195_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
lean_object* v_size_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4190_; 
v_size_4185_ = lean_ctor_get(v_r_4178_, 0);
v___x_4186_ = lean_unsigned_to_nat(1u);
v___x_4187_ = lean_nat_add(v___x_4186_, v_size_4179_);
lean_dec(v_size_4179_);
v___x_4188_ = lean_nat_add(v___x_4186_, v_size_4185_);
if (v_isShared_4184_ == 0)
{
lean_ctor_set(v___x_4183_, 4, v_r_3896_);
lean_ctor_set(v___x_4183_, 3, v_r_4178_);
lean_ctor_set(v___x_4183_, 2, v_v_3894_);
lean_ctor_set(v___x_4183_, 1, v_k_3893_);
lean_ctor_set(v___x_4183_, 0, v___x_4188_);
v___x_4190_ = v___x_4183_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v___x_4188_);
lean_ctor_set(v_reuseFailAlloc_4194_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4194_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4194_, 3, v_r_4178_);
lean_ctor_set(v_reuseFailAlloc_4194_, 4, v_r_3896_);
v___x_4190_ = v_reuseFailAlloc_4194_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
lean_object* v___x_4192_; 
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v___x_4190_);
lean_ctor_set(v___x_3898_, 3, v_l_4177_);
lean_ctor_set(v___x_3898_, 2, v_v_4181_);
lean_ctor_set(v___x_3898_, 1, v_k_4180_);
lean_ctor_set(v___x_3898_, 0, v___x_4187_);
v___x_4192_ = v___x_3898_;
goto v_reusejp_4191_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v___x_4187_);
lean_ctor_set(v_reuseFailAlloc_4193_, 1, v_k_4180_);
lean_ctor_set(v_reuseFailAlloc_4193_, 2, v_v_4181_);
lean_ctor_set(v_reuseFailAlloc_4193_, 3, v_l_4177_);
lean_ctor_set(v_reuseFailAlloc_4193_, 4, v___x_4190_);
v___x_4192_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4191_;
}
v_reusejp_4191_:
{
return v___x_4192_;
}
}
}
}
else
{
lean_object* v_k_4198_; lean_object* v_v_4199_; lean_object* v___x_4201_; uint8_t v_isShared_4202_; uint8_t v_isSharedCheck_4211_; 
v_k_4198_ = lean_ctor_get(v___x_4078_, 1);
v_v_4199_ = lean_ctor_get(v___x_4078_, 2);
v_isSharedCheck_4211_ = !lean_is_exclusive(v___x_4078_);
if (v_isSharedCheck_4211_ == 0)
{
lean_object* v_unused_4212_; lean_object* v_unused_4213_; lean_object* v_unused_4214_; 
v_unused_4212_ = lean_ctor_get(v___x_4078_, 4);
lean_dec(v_unused_4212_);
v_unused_4213_ = lean_ctor_get(v___x_4078_, 3);
lean_dec(v_unused_4213_);
v_unused_4214_ = lean_ctor_get(v___x_4078_, 0);
lean_dec(v_unused_4214_);
v___x_4201_ = v___x_4078_;
v_isShared_4202_ = v_isSharedCheck_4211_;
goto v_resetjp_4200_;
}
else
{
lean_inc(v_v_4199_);
lean_inc(v_k_4198_);
lean_dec(v___x_4078_);
v___x_4201_ = lean_box(0);
v_isShared_4202_ = v_isSharedCheck_4211_;
goto v_resetjp_4200_;
}
v_resetjp_4200_:
{
lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4206_; 
v___x_4203_ = lean_unsigned_to_nat(3u);
v___x_4204_ = lean_unsigned_to_nat(1u);
if (v_isShared_4202_ == 0)
{
lean_ctor_set(v___x_4201_, 3, v_r_4178_);
lean_ctor_set(v___x_4201_, 2, v_v_3894_);
lean_ctor_set(v___x_4201_, 1, v_k_3893_);
lean_ctor_set(v___x_4201_, 0, v___x_4204_);
v___x_4206_ = v___x_4201_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v___x_4204_);
lean_ctor_set(v_reuseFailAlloc_4210_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4210_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4210_, 3, v_r_4178_);
lean_ctor_set(v_reuseFailAlloc_4210_, 4, v_r_4178_);
v___x_4206_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
lean_object* v___x_4208_; 
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v___x_4206_);
lean_ctor_set(v___x_3898_, 3, v_l_4177_);
lean_ctor_set(v___x_3898_, 2, v_v_4199_);
lean_ctor_set(v___x_3898_, 1, v_k_4198_);
lean_ctor_set(v___x_3898_, 0, v___x_4203_);
v___x_4208_ = v___x_3898_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v___x_4203_);
lean_ctor_set(v_reuseFailAlloc_4209_, 1, v_k_4198_);
lean_ctor_set(v_reuseFailAlloc_4209_, 2, v_v_4199_);
lean_ctor_set(v_reuseFailAlloc_4209_, 3, v_l_4177_);
lean_ctor_set(v_reuseFailAlloc_4209_, 4, v___x_4206_);
v___x_4208_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
return v___x_4208_;
}
}
}
}
}
else
{
lean_object* v_r_4215_; 
v_r_4215_ = lean_ctor_get(v___x_4078_, 4);
lean_inc(v_r_4215_);
if (lean_obj_tag(v_r_4215_) == 0)
{
lean_object* v_k_4216_; lean_object* v_v_4217_; lean_object* v___x_4219_; uint8_t v_isShared_4220_; uint8_t v_isSharedCheck_4241_; 
v_k_4216_ = lean_ctor_get(v___x_4078_, 1);
v_v_4217_ = lean_ctor_get(v___x_4078_, 2);
v_isSharedCheck_4241_ = !lean_is_exclusive(v___x_4078_);
if (v_isSharedCheck_4241_ == 0)
{
lean_object* v_unused_4242_; lean_object* v_unused_4243_; lean_object* v_unused_4244_; 
v_unused_4242_ = lean_ctor_get(v___x_4078_, 4);
lean_dec(v_unused_4242_);
v_unused_4243_ = lean_ctor_get(v___x_4078_, 3);
lean_dec(v_unused_4243_);
v_unused_4244_ = lean_ctor_get(v___x_4078_, 0);
lean_dec(v_unused_4244_);
v___x_4219_ = v___x_4078_;
v_isShared_4220_ = v_isSharedCheck_4241_;
goto v_resetjp_4218_;
}
else
{
lean_inc(v_v_4217_);
lean_inc(v_k_4216_);
lean_dec(v___x_4078_);
v___x_4219_ = lean_box(0);
v_isShared_4220_ = v_isSharedCheck_4241_;
goto v_resetjp_4218_;
}
v_resetjp_4218_:
{
lean_object* v_k_4221_; lean_object* v_v_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4237_; 
v_k_4221_ = lean_ctor_get(v_r_4215_, 1);
v_v_4222_ = lean_ctor_get(v_r_4215_, 2);
v_isSharedCheck_4237_ = !lean_is_exclusive(v_r_4215_);
if (v_isSharedCheck_4237_ == 0)
{
lean_object* v_unused_4238_; lean_object* v_unused_4239_; lean_object* v_unused_4240_; 
v_unused_4238_ = lean_ctor_get(v_r_4215_, 4);
lean_dec(v_unused_4238_);
v_unused_4239_ = lean_ctor_get(v_r_4215_, 3);
lean_dec(v_unused_4239_);
v_unused_4240_ = lean_ctor_get(v_r_4215_, 0);
lean_dec(v_unused_4240_);
v___x_4224_ = v_r_4215_;
v_isShared_4225_ = v_isSharedCheck_4237_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_v_4222_);
lean_inc(v_k_4221_);
lean_dec(v_r_4215_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4237_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4229_; 
v___x_4226_ = lean_unsigned_to_nat(3u);
v___x_4227_ = lean_unsigned_to_nat(1u);
if (v_isShared_4225_ == 0)
{
lean_ctor_set(v___x_4224_, 4, v_l_4177_);
lean_ctor_set(v___x_4224_, 3, v_l_4177_);
lean_ctor_set(v___x_4224_, 2, v_v_4217_);
lean_ctor_set(v___x_4224_, 1, v_k_4216_);
lean_ctor_set(v___x_4224_, 0, v___x_4227_);
v___x_4229_ = v___x_4224_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4236_; 
v_reuseFailAlloc_4236_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4236_, 0, v___x_4227_);
lean_ctor_set(v_reuseFailAlloc_4236_, 1, v_k_4216_);
lean_ctor_set(v_reuseFailAlloc_4236_, 2, v_v_4217_);
lean_ctor_set(v_reuseFailAlloc_4236_, 3, v_l_4177_);
lean_ctor_set(v_reuseFailAlloc_4236_, 4, v_l_4177_);
v___x_4229_ = v_reuseFailAlloc_4236_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
lean_object* v___x_4231_; 
if (v_isShared_4220_ == 0)
{
lean_ctor_set(v___x_4219_, 4, v_l_4177_);
lean_ctor_set(v___x_4219_, 2, v_v_3894_);
lean_ctor_set(v___x_4219_, 1, v_k_3893_);
lean_ctor_set(v___x_4219_, 0, v___x_4227_);
v___x_4231_ = v___x_4219_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v___x_4227_);
lean_ctor_set(v_reuseFailAlloc_4235_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4235_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4235_, 3, v_l_4177_);
lean_ctor_set(v_reuseFailAlloc_4235_, 4, v_l_4177_);
v___x_4231_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
lean_object* v___x_4233_; 
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v___x_4231_);
lean_ctor_set(v___x_3898_, 3, v___x_4229_);
lean_ctor_set(v___x_3898_, 2, v_v_4222_);
lean_ctor_set(v___x_3898_, 1, v_k_4221_);
lean_ctor_set(v___x_3898_, 0, v___x_4226_);
v___x_4233_ = v___x_3898_;
goto v_reusejp_4232_;
}
else
{
lean_object* v_reuseFailAlloc_4234_; 
v_reuseFailAlloc_4234_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4234_, 0, v___x_4226_);
lean_ctor_set(v_reuseFailAlloc_4234_, 1, v_k_4221_);
lean_ctor_set(v_reuseFailAlloc_4234_, 2, v_v_4222_);
lean_ctor_set(v_reuseFailAlloc_4234_, 3, v___x_4229_);
lean_ctor_set(v_reuseFailAlloc_4234_, 4, v___x_4231_);
v___x_4233_ = v_reuseFailAlloc_4234_;
goto v_reusejp_4232_;
}
v_reusejp_4232_:
{
return v___x_4233_;
}
}
}
}
}
}
else
{
lean_object* v___x_4245_; lean_object* v___x_4247_; 
v___x_4245_ = lean_unsigned_to_nat(2u);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v_r_4215_);
lean_ctor_set(v___x_3898_, 3, v___x_4078_);
lean_ctor_set(v___x_3898_, 0, v___x_4245_);
v___x_4247_ = v___x_3898_;
goto v_reusejp_4246_;
}
else
{
lean_object* v_reuseFailAlloc_4248_; 
v_reuseFailAlloc_4248_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4248_, 0, v___x_4245_);
lean_ctor_set(v_reuseFailAlloc_4248_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4248_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4248_, 3, v___x_4078_);
lean_ctor_set(v_reuseFailAlloc_4248_, 4, v_r_4215_);
v___x_4247_ = v_reuseFailAlloc_4248_;
goto v_reusejp_4246_;
}
v_reusejp_4246_:
{
return v___x_4247_;
}
}
}
}
else
{
lean_object* v___x_4249_; lean_object* v___x_4251_; 
v___x_4249_ = lean_unsigned_to_nat(1u);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 4, v___x_4078_);
lean_ctor_set(v___x_3898_, 3, v___x_4078_);
lean_ctor_set(v___x_3898_, 0, v___x_4249_);
v___x_4251_ = v___x_3898_;
goto v_reusejp_4250_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v___x_4249_);
lean_ctor_set(v_reuseFailAlloc_4252_, 1, v_k_3893_);
lean_ctor_set(v_reuseFailAlloc_4252_, 2, v_v_3894_);
lean_ctor_set(v_reuseFailAlloc_4252_, 3, v___x_4078_);
lean_ctor_set(v_reuseFailAlloc_4252_, 4, v___x_4078_);
v___x_4251_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4250_;
}
v_reusejp_4250_:
{
return v___x_4251_;
}
}
}
}
}
}
else
{
lean_object* v___x_4254_; lean_object* v___x_4255_; 
v___x_4254_ = lean_unsigned_to_nat(1u);
v___x_4255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4255_, 0, v___x_4254_);
lean_ctor_set(v___x_4255_, 1, v_k_3889_);
lean_ctor_set(v___x_4255_, 2, v_v_3890_);
lean_ctor_set(v___x_4255_, 3, v_t_3891_);
lean_ctor_set(v___x_4255_, 4, v_t_3891_);
return v___x_4255_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__12_spec__20(lean_object* v_init_4256_, lean_object* v_x_4257_){
_start:
{
if (lean_obj_tag(v_x_4257_) == 0)
{
lean_object* v_k_4258_; lean_object* v_v_4259_; lean_object* v_l_4260_; lean_object* v_r_4261_; lean_object* v___x_4262_; uint8_t v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; 
v_k_4258_ = lean_ctor_get(v_x_4257_, 1);
lean_inc(v_k_4258_);
v_v_4259_ = lean_ctor_get(v_x_4257_, 2);
lean_inc(v_v_4259_);
v_l_4260_ = lean_ctor_get(v_x_4257_, 3);
lean_inc(v_l_4260_);
v_r_4261_ = lean_ctor_get(v_x_4257_, 4);
lean_inc(v_r_4261_);
lean_dec_ref(v_x_4257_);
v___x_4262_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__12_spec__20(v_init_4256_, v_l_4260_);
v___x_4263_ = 1;
v___x_4264_ = l_Lean_Name_toString(v_k_4258_, v___x_4263_);
v___x_4265_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4265_, 0, v_v_4259_);
v___x_4266_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg(v___x_4264_, v___x_4265_, v___x_4262_);
v_init_4256_ = v___x_4266_;
v_x_4257_ = v_r_4261_;
goto _start;
}
else
{
return v_init_4256_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6(lean_object* v_m_4268_){
_start:
{
lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; 
v___x_4269_ = lean_box(1);
v___x_4270_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__12_spec__20(v___x_4269_, v_m_4268_);
v___x_4271_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4271_, 0, v___x_4270_);
return v___x_4271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(lean_object* v___x_4274_, uint8_t v_updateToolchain_4275_, lean_object* v_ws_4276_, size_t v_sz_4277_, size_t v_i_4278_, lean_object* v_bs_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_){
_start:
{
uint8_t v___x_4283_; 
v___x_4283_ = lean_usize_dec_lt(v_i_4278_, v_sz_4277_);
if (v___x_4283_ == 0)
{
lean_object* v___x_4284_; lean_object* v___x_4285_; 
lean_dec_ref(v_ws_4276_);
lean_dec_ref(v___x_4274_);
v___x_4284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4284_, 0, v_bs_4279_);
lean_ctor_set(v___x_4284_, 1, v___y_4280_);
v___x_4285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4285_, 0, v___x_4284_);
return v___x_4285_;
}
else
{
lean_object* v_baseName_4286_; lean_object* v_v_4287_; lean_object* v_name_4288_; lean_object* v_opts_4289_; uint8_t v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; uint8_t v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; 
v_baseName_4286_ = lean_ctor_get(v___x_4274_, 1);
v_v_4287_ = lean_array_uget_borrowed(v_bs_4279_, v_i_4278_);
v_name_4288_ = lean_ctor_get(v_v_4287_, 0);
v_opts_4289_ = lean_ctor_get(v_v_4287_, 4);
v___x_4290_ = 0;
lean_inc(v_baseName_4286_);
v___x_4291_ = l_Lean_Name_toString(v_baseName_4286_, v___x_4290_);
v___x_4292_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___closed__0));
v___x_4293_ = lean_string_append(v___x_4291_, v___x_4292_);
lean_inc(v_name_4288_);
v___x_4294_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4288_, v_updateToolchain_4275_);
v___x_4295_ = lean_string_append(v___x_4293_, v___x_4294_);
lean_dec_ref(v___x_4294_);
v___x_4296_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___closed__1));
v___x_4297_ = lean_string_append(v___x_4295_, v___x_4296_);
lean_inc(v_opts_4289_);
v___x_4298_ = l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6(v_opts_4289_);
v___x_4299_ = lean_unsigned_to_nat(80u);
v___x_4300_ = l_Lean_Json_pretty(v___x_4298_, v___x_4299_);
v___x_4301_ = lean_string_append(v___x_4297_, v___x_4300_);
lean_dec_ref(v___x_4300_);
v___x_4302_ = 0;
v___x_4303_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4303_, 0, v___x_4301_);
lean_ctor_set_uint8(v___x_4303_, sizeof(void*)*1, v___x_4302_);
lean_inc_ref(v___y_4281_);
v___x_4304_ = lean_apply_2(v___y_4281_, v___x_4303_, lean_box(0));
lean_inc(v_v_4287_);
lean_inc_ref(v___x_4274_);
lean_inc_ref(v_ws_4276_);
v___x_4305_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_4276_, v___x_4274_, v_v_4287_, v___y_4280_, v___y_4281_);
if (lean_obj_tag(v___x_4305_) == 0)
{
lean_object* v_a_4306_; lean_object* v_fst_4307_; lean_object* v_snd_4308_; lean_object* v___x_4309_; lean_object* v_bs_x27_4310_; size_t v___x_4311_; size_t v___x_4312_; lean_object* v___x_4313_; 
v_a_4306_ = lean_ctor_get(v___x_4305_, 0);
lean_inc(v_a_4306_);
lean_dec_ref(v___x_4305_);
v_fst_4307_ = lean_ctor_get(v_a_4306_, 0);
lean_inc(v_fst_4307_);
v_snd_4308_ = lean_ctor_get(v_a_4306_, 1);
lean_inc(v_snd_4308_);
lean_dec(v_a_4306_);
v___x_4309_ = lean_unsigned_to_nat(0u);
v_bs_x27_4310_ = lean_array_uset(v_bs_4279_, v_i_4278_, v___x_4309_);
v___x_4311_ = ((size_t)1ULL);
v___x_4312_ = lean_usize_add(v_i_4278_, v___x_4311_);
v___x_4313_ = lean_array_uset(v_bs_x27_4310_, v_i_4278_, v_fst_4307_);
v_i_4278_ = v___x_4312_;
v_bs_4279_ = v___x_4313_;
v___y_4280_ = v_snd_4308_;
goto _start;
}
else
{
lean_object* v_a_4315_; lean_object* v___x_4317_; uint8_t v_isShared_4318_; uint8_t v_isSharedCheck_4322_; 
lean_dec_ref(v_bs_4279_);
lean_dec_ref(v_ws_4276_);
lean_dec_ref(v___x_4274_);
v_a_4315_ = lean_ctor_get(v___x_4305_, 0);
v_isSharedCheck_4322_ = !lean_is_exclusive(v___x_4305_);
if (v_isSharedCheck_4322_ == 0)
{
v___x_4317_ = v___x_4305_;
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
else
{
lean_inc(v_a_4315_);
lean_dec(v___x_4305_);
v___x_4317_ = lean_box(0);
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
v_resetjp_4316_:
{
lean_object* v___x_4320_; 
if (v_isShared_4318_ == 0)
{
v___x_4320_ = v___x_4317_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v_a_4315_);
v___x_4320_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
return v___x_4320_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___boxed(lean_object* v___x_4323_, lean_object* v_updateToolchain_4324_, lean_object* v_ws_4325_, lean_object* v_sz_4326_, lean_object* v_i_4327_, lean_object* v_bs_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_){
_start:
{
uint8_t v_updateToolchain_boxed_4332_; size_t v_sz_boxed_4333_; size_t v_i_boxed_4334_; lean_object* v_res_4335_; 
v_updateToolchain_boxed_4332_ = lean_unbox(v_updateToolchain_4324_);
v_sz_boxed_4333_ = lean_unbox_usize(v_sz_4326_);
lean_dec(v_sz_4326_);
v_i_boxed_4334_ = lean_unbox_usize(v_i_4327_);
lean_dec(v_i_4327_);
v_res_4335_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(v___x_4323_, v_updateToolchain_boxed_4332_, v_ws_4325_, v_sz_boxed_4333_, v_i_boxed_4334_, v_bs_4328_, v___y_4329_, v___y_4330_);
lean_dec_ref(v___y_4330_);
return v_res_4335_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(lean_object* v_ws_4336_, lean_object* v_toUpdate_4337_, lean_object* v_leanOpts_4338_, uint8_t v_updateToolchain_4339_, lean_object* v_a_4340_){
_start:
{
lean_object* v___x_4342_; lean_object* v___x_4343_; 
v___x_4342_ = lean_box(1);
v___x_4343_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_4340_, v_ws_4336_, v_toUpdate_4337_, v___x_4342_);
if (lean_obj_tag(v___x_4343_) == 0)
{
lean_object* v_a_4344_; lean_object* v___x_4346_; uint8_t v_isShared_4347_; uint8_t v_isSharedCheck_4441_; 
v_a_4344_ = lean_ctor_get(v___x_4343_, 0);
v_isSharedCheck_4441_ = !lean_is_exclusive(v___x_4343_);
if (v_isSharedCheck_4441_ == 0)
{
v___x_4346_ = v___x_4343_;
v_isShared_4347_ = v_isSharedCheck_4441_;
goto v_resetjp_4345_;
}
else
{
lean_inc(v_a_4344_);
lean_dec(v___x_4343_);
v___x_4346_ = lean_box(0);
v_isShared_4347_ = v_isSharedCheck_4441_;
goto v_resetjp_4345_;
}
v_resetjp_4345_:
{
if (v_updateToolchain_4339_ == 0)
{
lean_object* v_snd_4348_; lean_object* v_packages_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; 
lean_del_object(v___x_4346_);
v_snd_4348_ = lean_ctor_get(v_a_4344_, 1);
lean_inc(v_snd_4348_);
lean_dec(v_a_4344_);
v_packages_4349_ = lean_ctor_get(v_ws_4336_, 4);
v___x_4350_ = lean_unsigned_to_nat(0u);
v___x_4351_ = lean_array_fget(v_packages_4349_, v___x_4350_);
v___x_4352_ = lean_box(0);
v___x_4353_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(v_leanOpts_4338_, v_ws_4336_, v___x_4351_, v___x_4352_, v_snd_4348_, v_a_4340_);
return v___x_4353_;
}
else
{
lean_object* v_snd_4354_; lean_object* v___x_4356_; uint8_t v_isShared_4357_; uint8_t v_isSharedCheck_4439_; 
v_snd_4354_ = lean_ctor_get(v_a_4344_, 1);
v_isSharedCheck_4439_ = !lean_is_exclusive(v_a_4344_);
if (v_isSharedCheck_4439_ == 0)
{
lean_object* v_unused_4440_; 
v_unused_4440_ = lean_ctor_get(v_a_4344_, 0);
lean_dec(v_unused_4440_);
v___x_4356_ = v_a_4344_;
v_isShared_4357_ = v_isSharedCheck_4439_;
goto v_resetjp_4355_;
}
else
{
lean_inc(v_snd_4354_);
lean_dec(v_a_4344_);
v___x_4356_ = lean_box(0);
v_isShared_4357_ = v_isSharedCheck_4439_;
goto v_resetjp_4355_;
}
v_resetjp_4355_:
{
lean_object* v_packages_4358_; lean_object* v___x_4359_; lean_object* v___y_4361_; lean_object* v___y_4362_; lean_object* v_fst_4363_; lean_object* v_packages_4364_; lean_object* v_snd_4365_; lean_object* v___y_4378_; lean_object* v___y_4379_; lean_object* v___y_4380_; lean_object* v_fst_4386_; lean_object* v_packages_4387_; lean_object* v_snd_4388_; lean_object* v___y_4400_; lean_object* v___x_4405_; lean_object* v_depConfigs_4406_; lean_object* v___x_4407_; size_t v_sz_4408_; size_t v___x_4409_; lean_object* v___x_4410_; 
v_packages_4358_ = lean_ctor_get(v_ws_4336_, 4);
lean_inc_ref(v_packages_4358_);
v___x_4359_ = lean_unsigned_to_nat(0u);
v___x_4405_ = lean_array_fget_borrowed(v_packages_4358_, v___x_4359_);
v_depConfigs_4406_ = lean_ctor_get(v___x_4405_, 12);
lean_inc_ref(v_depConfigs_4406_);
v___x_4407_ = l_Array_reverse___redArg(v_depConfigs_4406_);
v_sz_4408_ = lean_array_size(v___x_4407_);
v___x_4409_ = ((size_t)0ULL);
lean_inc_ref(v___x_4407_);
lean_inc_ref(v_ws_4336_);
lean_inc(v___x_4405_);
v___x_4410_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(v___x_4405_, v_updateToolchain_4339_, v_ws_4336_, v_sz_4408_, v___x_4409_, v___x_4407_, v_snd_4354_, v_a_4340_);
if (lean_obj_tag(v___x_4410_) == 0)
{
lean_object* v_a_4411_; lean_object* v_fst_4412_; lean_object* v_snd_4413_; lean_object* v___x_4414_; 
v_a_4411_ = lean_ctor_get(v___x_4410_, 0);
lean_inc(v_a_4411_);
lean_dec_ref(v___x_4410_);
v_fst_4412_ = lean_ctor_get(v_a_4411_, 0);
lean_inc(v_fst_4412_);
v_snd_4413_ = lean_ctor_get(v_a_4411_, 1);
lean_inc(v_snd_4413_);
lean_dec(v_a_4411_);
lean_inc_ref(v_ws_4336_);
v___x_4414_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8(v_a_4340_, v_ws_4336_, v_fst_4412_);
if (lean_obj_tag(v___x_4414_) == 0)
{
lean_object* v___x_4415_; lean_object* v___x_4416_; uint8_t v___x_4417_; 
lean_dec_ref(v___x_4414_);
v___x_4415_ = l_Array_zip___redArg(v___x_4407_, v_fst_4412_);
lean_dec(v_fst_4412_);
lean_dec_ref(v___x_4407_);
v___x_4416_ = lean_array_get_size(v___x_4415_);
v___x_4417_ = lean_nat_dec_lt(v___x_4359_, v___x_4416_);
if (v___x_4417_ == 0)
{
lean_dec_ref(v___x_4415_);
lean_inc_ref(v_packages_4358_);
v_fst_4386_ = v_ws_4336_;
v_packages_4387_ = v_packages_4358_;
v_snd_4388_ = v_snd_4413_;
goto v___jp_4385_;
}
else
{
uint8_t v___x_4418_; 
v___x_4418_ = lean_nat_dec_le(v___x_4416_, v___x_4416_);
if (v___x_4418_ == 0)
{
if (v___x_4417_ == 0)
{
lean_dec_ref(v___x_4415_);
lean_inc_ref(v_packages_4358_);
v_fst_4386_ = v_ws_4336_;
v_packages_4387_ = v_packages_4358_;
v_snd_4388_ = v_snd_4413_;
goto v___jp_4385_;
}
else
{
size_t v___x_4419_; lean_object* v___x_4420_; 
v___x_4419_ = lean_usize_of_nat(v___x_4416_);
lean_inc_ref(v_leanOpts_4338_);
v___x_4420_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__10(v_leanOpts_4338_, v___x_4415_, v___x_4409_, v___x_4419_, v_ws_4336_, v_snd_4413_, v_a_4340_);
lean_dec_ref(v___x_4415_);
v___y_4400_ = v___x_4420_;
goto v___jp_4399_;
}
}
else
{
size_t v___x_4421_; lean_object* v___x_4422_; 
v___x_4421_ = lean_usize_of_nat(v___x_4416_);
lean_inc_ref(v_leanOpts_4338_);
v___x_4422_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__10(v_leanOpts_4338_, v___x_4415_, v___x_4409_, v___x_4421_, v_ws_4336_, v_snd_4413_, v_a_4340_);
lean_dec_ref(v___x_4415_);
v___y_4400_ = v___x_4422_;
goto v___jp_4399_;
}
}
}
else
{
lean_object* v_a_4423_; lean_object* v___x_4425_; uint8_t v_isShared_4426_; uint8_t v_isSharedCheck_4430_; 
lean_dec(v_snd_4413_);
lean_dec(v_fst_4412_);
lean_dec_ref(v___x_4407_);
lean_dec_ref(v_packages_4358_);
lean_del_object(v___x_4356_);
lean_del_object(v___x_4346_);
lean_dec_ref(v_leanOpts_4338_);
lean_dec_ref(v_ws_4336_);
v_a_4423_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4430_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4430_ == 0)
{
v___x_4425_ = v___x_4414_;
v_isShared_4426_ = v_isSharedCheck_4430_;
goto v_resetjp_4424_;
}
else
{
lean_inc(v_a_4423_);
lean_dec(v___x_4414_);
v___x_4425_ = lean_box(0);
v_isShared_4426_ = v_isSharedCheck_4430_;
goto v_resetjp_4424_;
}
v_resetjp_4424_:
{
lean_object* v___x_4428_; 
if (v_isShared_4426_ == 0)
{
v___x_4428_ = v___x_4425_;
goto v_reusejp_4427_;
}
else
{
lean_object* v_reuseFailAlloc_4429_; 
v_reuseFailAlloc_4429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4429_, 0, v_a_4423_);
v___x_4428_ = v_reuseFailAlloc_4429_;
goto v_reusejp_4427_;
}
v_reusejp_4427_:
{
return v___x_4428_;
}
}
}
}
else
{
lean_object* v_a_4431_; lean_object* v___x_4433_; uint8_t v_isShared_4434_; uint8_t v_isSharedCheck_4438_; 
lean_dec_ref(v___x_4407_);
lean_dec_ref(v_packages_4358_);
lean_del_object(v___x_4356_);
lean_del_object(v___x_4346_);
lean_dec_ref(v_leanOpts_4338_);
lean_dec_ref(v_ws_4336_);
v_a_4431_ = lean_ctor_get(v___x_4410_, 0);
v_isSharedCheck_4438_ = !lean_is_exclusive(v___x_4410_);
if (v_isSharedCheck_4438_ == 0)
{
v___x_4433_ = v___x_4410_;
v_isShared_4434_ = v_isSharedCheck_4438_;
goto v_resetjp_4432_;
}
else
{
lean_inc(v_a_4431_);
lean_dec(v___x_4410_);
v___x_4433_ = lean_box(0);
v_isShared_4434_ = v_isSharedCheck_4438_;
goto v_resetjp_4432_;
}
v_resetjp_4432_:
{
lean_object* v___x_4436_; 
if (v_isShared_4434_ == 0)
{
v___x_4436_ = v___x_4433_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v_a_4431_);
v___x_4436_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
return v___x_4436_;
}
}
}
v___jp_4360_:
{
lean_object* v___x_4366_; lean_object* v_wsIdx_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4372_; 
v___x_4366_ = lean_array_fget_borrowed(v_packages_4364_, v___x_4359_);
v_wsIdx_4367_ = lean_ctor_get(v___x_4366_, 0);
lean_inc(v_wsIdx_4367_);
v___x_4368_ = l_Array_toSubarray___redArg(v_packages_4364_, v___y_4361_, v___y_4362_);
v___x_4369_ = l_Subarray_copy___redArg(v___x_4368_);
v___x_4370_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_fst_4363_, v_wsIdx_4367_, v___x_4369_);
lean_dec(v_wsIdx_4367_);
if (v_isShared_4357_ == 0)
{
lean_ctor_set(v___x_4356_, 1, v_snd_4365_);
lean_ctor_set(v___x_4356_, 0, v___x_4370_);
v___x_4372_ = v___x_4356_;
goto v_reusejp_4371_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v___x_4370_);
lean_ctor_set(v_reuseFailAlloc_4376_, 1, v_snd_4365_);
v___x_4372_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4371_;
}
v_reusejp_4371_:
{
lean_object* v___x_4374_; 
if (v_isShared_4347_ == 0)
{
lean_ctor_set(v___x_4346_, 0, v___x_4372_);
v___x_4374_ = v___x_4346_;
goto v_reusejp_4373_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v___x_4372_);
v___x_4374_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4373_;
}
v_reusejp_4373_:
{
return v___x_4374_;
}
}
}
v___jp_4377_:
{
if (lean_obj_tag(v___y_4380_) == 0)
{
lean_object* v_a_4381_; lean_object* v_fst_4382_; lean_object* v_snd_4383_; lean_object* v_packages_4384_; 
v_a_4381_ = lean_ctor_get(v___y_4380_, 0);
lean_inc(v_a_4381_);
lean_dec_ref(v___y_4380_);
v_fst_4382_ = lean_ctor_get(v_a_4381_, 0);
lean_inc(v_fst_4382_);
v_snd_4383_ = lean_ctor_get(v_a_4381_, 1);
lean_inc(v_snd_4383_);
lean_dec(v_a_4381_);
v_packages_4384_ = lean_ctor_get(v_fst_4382_, 4);
lean_inc_ref(v_packages_4384_);
v___y_4361_ = v___y_4378_;
v___y_4362_ = v___y_4379_;
v_fst_4363_ = v_fst_4382_;
v_packages_4364_ = v_packages_4384_;
v_snd_4365_ = v_snd_4383_;
goto v___jp_4360_;
}
else
{
lean_dec(v___y_4379_);
lean_dec(v___y_4378_);
lean_del_object(v___x_4356_);
lean_del_object(v___x_4346_);
return v___y_4380_;
}
}
v___jp_4385_:
{
lean_object* v___x_4389_; lean_object* v___x_4390_; uint8_t v___x_4391_; 
v___x_4389_ = lean_array_get_size(v_packages_4358_);
lean_dec_ref(v_packages_4358_);
v___x_4390_ = lean_array_get_size(v_packages_4387_);
v___x_4391_ = lean_nat_dec_lt(v___x_4389_, v___x_4390_);
if (v___x_4391_ == 0)
{
lean_dec_ref(v_leanOpts_4338_);
v___y_4361_ = v___x_4389_;
v___y_4362_ = v___x_4390_;
v_fst_4363_ = v_fst_4386_;
v_packages_4364_ = v_packages_4387_;
v_snd_4365_ = v_snd_4388_;
goto v___jp_4360_;
}
else
{
uint8_t v___x_4392_; 
v___x_4392_ = lean_nat_dec_le(v___x_4390_, v___x_4390_);
if (v___x_4392_ == 0)
{
if (v___x_4391_ == 0)
{
lean_dec_ref(v_leanOpts_4338_);
v___y_4361_ = v___x_4389_;
v___y_4362_ = v___x_4390_;
v_fst_4363_ = v_fst_4386_;
v_packages_4364_ = v_packages_4387_;
v_snd_4365_ = v_snd_4388_;
goto v___jp_4360_;
}
else
{
size_t v___x_4393_; size_t v___x_4394_; lean_object* v___x_4395_; 
v___x_4393_ = lean_usize_of_nat(v___x_4389_);
v___x_4394_ = lean_usize_of_nat(v___x_4390_);
v___x_4395_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(v_leanOpts_4338_, v_packages_4387_, v___x_4393_, v___x_4394_, v_fst_4386_, v_snd_4388_, v_a_4340_);
lean_dec_ref(v_packages_4387_);
v___y_4378_ = v___x_4389_;
v___y_4379_ = v___x_4390_;
v___y_4380_ = v___x_4395_;
goto v___jp_4377_;
}
}
else
{
size_t v___x_4396_; size_t v___x_4397_; lean_object* v___x_4398_; 
v___x_4396_ = lean_usize_of_nat(v___x_4389_);
v___x_4397_ = lean_usize_of_nat(v___x_4390_);
v___x_4398_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(v_leanOpts_4338_, v_packages_4387_, v___x_4396_, v___x_4397_, v_fst_4386_, v_snd_4388_, v_a_4340_);
lean_dec_ref(v_packages_4387_);
v___y_4378_ = v___x_4389_;
v___y_4379_ = v___x_4390_;
v___y_4380_ = v___x_4398_;
goto v___jp_4377_;
}
}
}
v___jp_4399_:
{
if (lean_obj_tag(v___y_4400_) == 0)
{
lean_object* v_a_4401_; lean_object* v_fst_4402_; lean_object* v_snd_4403_; lean_object* v_packages_4404_; 
v_a_4401_ = lean_ctor_get(v___y_4400_, 0);
lean_inc(v_a_4401_);
lean_dec_ref(v___y_4400_);
v_fst_4402_ = lean_ctor_get(v_a_4401_, 0);
lean_inc(v_fst_4402_);
v_snd_4403_ = lean_ctor_get(v_a_4401_, 1);
lean_inc(v_snd_4403_);
lean_dec(v_a_4401_);
v_packages_4404_ = lean_ctor_get(v_fst_4402_, 4);
lean_inc_ref(v_packages_4404_);
v_fst_4386_ = v_fst_4402_;
v_packages_4387_ = v_packages_4404_;
v_snd_4388_ = v_snd_4403_;
goto v___jp_4385_;
}
else
{
lean_dec_ref(v_packages_4358_);
lean_del_object(v___x_4356_);
lean_del_object(v___x_4346_);
lean_dec_ref(v_leanOpts_4338_);
return v___y_4400_;
}
}
}
}
}
}
else
{
lean_object* v_a_4442_; lean_object* v___x_4444_; uint8_t v_isShared_4445_; uint8_t v_isSharedCheck_4449_; 
lean_dec_ref(v_leanOpts_4338_);
lean_dec_ref(v_ws_4336_);
v_a_4442_ = lean_ctor_get(v___x_4343_, 0);
v_isSharedCheck_4449_ = !lean_is_exclusive(v___x_4343_);
if (v_isSharedCheck_4449_ == 0)
{
v___x_4444_ = v___x_4343_;
v_isShared_4445_ = v_isSharedCheck_4449_;
goto v_resetjp_4443_;
}
else
{
lean_inc(v_a_4442_);
lean_dec(v___x_4343_);
v___x_4444_ = lean_box(0);
v_isShared_4445_ = v_isSharedCheck_4449_;
goto v_resetjp_4443_;
}
v_resetjp_4443_:
{
lean_object* v___x_4447_; 
if (v_isShared_4445_ == 0)
{
v___x_4447_ = v___x_4444_;
goto v_reusejp_4446_;
}
else
{
lean_object* v_reuseFailAlloc_4448_; 
v_reuseFailAlloc_4448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4448_, 0, v_a_4442_);
v___x_4447_ = v_reuseFailAlloc_4448_;
goto v_reusejp_4446_;
}
v_reusejp_4446_:
{
return v___x_4447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___boxed(lean_object* v_ws_4450_, lean_object* v_toUpdate_4451_, lean_object* v_leanOpts_4452_, lean_object* v_updateToolchain_4453_, lean_object* v_a_4454_, lean_object* v_a_4455_){
_start:
{
uint8_t v_updateToolchain_boxed_4456_; lean_object* v_res_4457_; 
v_updateToolchain_boxed_4456_ = lean_unbox(v_updateToolchain_4453_);
v_res_4457_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(v_ws_4450_, v_toUpdate_4451_, v_leanOpts_4452_, v_updateToolchain_boxed_4456_, v_a_4454_);
lean_dec_ref(v_a_4454_);
lean_dec(v_toUpdate_4451_);
return v_res_4457_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6(lean_object* v___y_4458_, lean_object* v_a_4459_, lean_object* v_as_4460_, size_t v_i_4461_, size_t v_stop_4462_, lean_object* v_b_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_){
_start:
{
uint8_t v___x_4467_; 
v___x_4467_ = lean_usize_dec_eq(v_i_4461_, v_stop_4462_);
if (v___x_4467_ == 0)
{
lean_object* v___x_4468_; lean_object* v___x_4469_; 
v___x_4468_ = lean_array_uget_borrowed(v_as_4460_, v_i_4461_);
lean_inc_ref(v___y_4458_);
lean_inc_ref(v___y_4465_);
lean_inc(v_a_4459_);
lean_inc(v___x_4468_);
v___x_4469_ = lean_apply_6(v___y_4458_, v___x_4468_, v_a_4459_, v_b_4463_, v___y_4464_, v___y_4465_, lean_box(0));
if (lean_obj_tag(v___x_4469_) == 0)
{
lean_object* v_a_4470_; lean_object* v_fst_4471_; lean_object* v_snd_4472_; lean_object* v_snd_4473_; size_t v___x_4474_; size_t v___x_4475_; 
v_a_4470_ = lean_ctor_get(v___x_4469_, 0);
lean_inc(v_a_4470_);
lean_dec_ref(v___x_4469_);
v_fst_4471_ = lean_ctor_get(v_a_4470_, 0);
lean_inc(v_fst_4471_);
v_snd_4472_ = lean_ctor_get(v_a_4470_, 1);
lean_inc(v_snd_4472_);
lean_dec(v_a_4470_);
v_snd_4473_ = lean_ctor_get(v_fst_4471_, 1);
lean_inc(v_snd_4473_);
lean_dec(v_fst_4471_);
v___x_4474_ = ((size_t)1ULL);
v___x_4475_ = lean_usize_add(v_i_4461_, v___x_4474_);
v_i_4461_ = v___x_4475_;
v_b_4463_ = v_snd_4473_;
v___y_4464_ = v_snd_4472_;
goto _start;
}
else
{
lean_object* v_a_4477_; lean_object* v___x_4479_; uint8_t v_isShared_4480_; uint8_t v_isSharedCheck_4484_; 
lean_dec_ref(v___y_4458_);
v_a_4477_ = lean_ctor_get(v___x_4469_, 0);
v_isSharedCheck_4484_ = !lean_is_exclusive(v___x_4469_);
if (v_isSharedCheck_4484_ == 0)
{
v___x_4479_ = v___x_4469_;
v_isShared_4480_ = v_isSharedCheck_4484_;
goto v_resetjp_4478_;
}
else
{
lean_inc(v_a_4477_);
lean_dec(v___x_4469_);
v___x_4479_ = lean_box(0);
v_isShared_4480_ = v_isSharedCheck_4484_;
goto v_resetjp_4478_;
}
v_resetjp_4478_:
{
lean_object* v___x_4482_; 
if (v_isShared_4480_ == 0)
{
v___x_4482_ = v___x_4479_;
goto v_reusejp_4481_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v_a_4477_);
v___x_4482_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4481_;
}
v_reusejp_4481_:
{
return v___x_4482_;
}
}
}
}
else
{
lean_object* v___x_4485_; lean_object* v___x_4486_; 
lean_dec_ref(v___y_4458_);
v___x_4485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4485_, 0, v_b_4463_);
lean_ctor_set(v___x_4485_, 1, v___y_4464_);
v___x_4486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4486_, 0, v___x_4485_);
return v___x_4486_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6___boxed(lean_object* v___y_4487_, lean_object* v_a_4488_, lean_object* v_as_4489_, lean_object* v_i_4490_, lean_object* v_stop_4491_, lean_object* v_b_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_){
_start:
{
size_t v_i_boxed_4496_; size_t v_stop_boxed_4497_; lean_object* v_res_4498_; 
v_i_boxed_4496_ = lean_unbox_usize(v_i_4490_);
lean_dec(v_i_4490_);
v_stop_boxed_4497_ = lean_unbox_usize(v_stop_4491_);
lean_dec(v_stop_4491_);
v_res_4498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6(v___y_4487_, v_a_4488_, v_as_4489_, v_i_boxed_4496_, v_stop_boxed_4497_, v_b_4492_, v___y_4493_, v___y_4494_);
lean_dec_ref(v___y_4494_);
lean_dec_ref(v_as_4489_);
lean_dec(v_a_4488_);
return v_res_4498_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(lean_object* v___y_4499_, lean_object* v_leanOpts_4500_, uint8_t v_reconfigure_4501_, lean_object* v_pkg_4502_, lean_object* v_a_4503_, lean_object* v_a_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_){
_start:
{
lean_object* v___y_4509_; lean_object* v___y_4510_; lean_object* v___y_4516_; lean_object* v___y_4517_; lean_object* v___y_4523_; lean_object* v___y_4529_; lean_object* v___y_4530_; lean_object* v_packages_4535_; lean_object* v_wsIdx_4536_; lean_object* v_depConfigs_4537_; lean_object* v___y_4539_; lean_object* v___y_4540_; lean_object* v_ws_4541_; lean_object* v_packages_4542_; lean_object* v___y_4543_; lean_object* v___y_4553_; lean_object* v___y_4554_; lean_object* v_ws_4555_; lean_object* v___y_4556_; lean_object* v_start_4558_; lean_object* v_ws_4560_; lean_object* v_packages_4561_; lean_object* v_depIdxs_4562_; lean_object* v___y_4563_; lean_object* v___y_4564_; lean_object* v_____x_4604_; lean_object* v___y_4605_; lean_object* v___y_4606_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v_ws_4613_; lean_object* v_packages_4614_; lean_object* v___y_4615_; lean_object* v_ws_4625_; lean_object* v___y_4626_; lean_object* v_s_4628_; lean_object* v___x_4629_; uint8_t v___x_4630_; 
v_packages_4535_ = lean_ctor_get(v_a_4504_, 4);
v_wsIdx_4536_ = lean_ctor_get(v_pkg_4502_, 0);
lean_inc(v_wsIdx_4536_);
v_depConfigs_4537_ = lean_ctor_get(v_pkg_4502_, 12);
lean_inc_ref(v_depConfigs_4537_);
v_start_4558_ = lean_array_get_size(v_packages_4535_);
v___x_4610_ = lean_array_get_size(v_depConfigs_4537_);
v___x_4611_ = lean_mk_empty_array_with_capacity(v___x_4610_);
lean_inc_ref(v___x_4611_);
lean_inc_ref(v_a_4504_);
v_s_4628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_4628_, 0, v_a_4504_);
lean_ctor_set(v_s_4628_, 1, v___x_4611_);
v___x_4629_ = lean_unsigned_to_nat(0u);
v___x_4630_ = lean_nat_dec_le(v___x_4610_, v___x_4610_);
if (v___x_4630_ == 0)
{
uint8_t v___x_4631_; 
v___x_4631_ = lean_nat_dec_lt(v___x_4629_, v___x_4610_);
if (v___x_4631_ == 0)
{
uint8_t v___x_4632_; 
lean_dec_ref(v_s_4628_);
lean_dec_ref(v_depConfigs_4537_);
lean_dec_ref(v_pkg_4502_);
lean_dec_ref(v_leanOpts_4500_);
v___x_4632_ = lean_nat_dec_lt(v_start_4558_, v_start_4558_);
if (v___x_4632_ == 0)
{
uint8_t v___x_4633_; 
lean_dec_ref(v___y_4499_);
v___x_4633_ = lean_nat_dec_le(v_start_4558_, v_start_4558_);
if (v___x_4633_ == 0)
{
lean_object* v___x_4634_; lean_object* v___x_4635_; 
lean_dec_ref(v___x_4611_);
lean_dec(v_wsIdx_4536_);
v___x_4634_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_4635_ = lean_panic_fn_borrowed(v_a_4504_, v___x_4634_);
lean_dec_ref(v_a_4504_);
v___y_4523_ = v___x_4635_;
goto v___jp_4522_;
}
else
{
size_t v_sz_4636_; size_t v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; 
v_sz_4636_ = lean_array_size(v___x_4611_);
v___x_4637_ = ((size_t)0ULL);
v___x_4638_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_4535_, v_sz_4636_, v___x_4637_, v___x_4611_);
v___x_4639_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_a_4504_, v_wsIdx_4536_, v___x_4638_);
lean_dec(v_wsIdx_4536_);
v___y_4523_ = v___x_4639_;
goto v___jp_4522_;
}
}
else
{
uint8_t v___x_4640_; 
lean_inc_ref(v_packages_4535_);
v___x_4640_ = lean_nat_dec_le(v_start_4558_, v_start_4558_);
if (v___x_4640_ == 0)
{
if (v___x_4632_ == 0)
{
lean_dec_ref(v___y_4499_);
v_ws_4613_ = v_a_4504_;
v_packages_4614_ = v_packages_4535_;
v___y_4615_ = v___y_4505_;
goto v___jp_4612_;
}
else
{
size_t v___x_4641_; lean_object* v___x_4642_; 
v___x_4641_ = lean_usize_of_nat(v_start_4558_);
v___x_4642_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6(v___y_4499_, v_a_4503_, v_packages_4535_, v___x_4641_, v___x_4641_, v_a_4504_, v___y_4505_, v___y_4506_);
lean_dec_ref(v_packages_4535_);
if (lean_obj_tag(v___x_4642_) == 0)
{
lean_object* v_a_4643_; lean_object* v_fst_4644_; lean_object* v_snd_4645_; 
v_a_4643_ = lean_ctor_get(v___x_4642_, 0);
lean_inc(v_a_4643_);
lean_dec_ref(v___x_4642_);
v_fst_4644_ = lean_ctor_get(v_a_4643_, 0);
lean_inc(v_fst_4644_);
v_snd_4645_ = lean_ctor_get(v_a_4643_, 1);
lean_inc(v_snd_4645_);
lean_dec(v_a_4643_);
v_ws_4625_ = v_fst_4644_;
v___y_4626_ = v_snd_4645_;
goto v___jp_4624_;
}
else
{
lean_object* v_a_4646_; lean_object* v___x_4648_; uint8_t v_isShared_4649_; uint8_t v_isSharedCheck_4653_; 
lean_dec_ref(v___x_4611_);
lean_dec(v_wsIdx_4536_);
v_a_4646_ = lean_ctor_get(v___x_4642_, 0);
v_isSharedCheck_4653_ = !lean_is_exclusive(v___x_4642_);
if (v_isSharedCheck_4653_ == 0)
{
v___x_4648_ = v___x_4642_;
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
else
{
lean_inc(v_a_4646_);
lean_dec(v___x_4642_);
v___x_4648_ = lean_box(0);
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
v_resetjp_4647_:
{
lean_object* v___x_4651_; 
if (v_isShared_4649_ == 0)
{
v___x_4651_ = v___x_4648_;
goto v_reusejp_4650_;
}
else
{
lean_object* v_reuseFailAlloc_4652_; 
v_reuseFailAlloc_4652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4652_, 0, v_a_4646_);
v___x_4651_ = v_reuseFailAlloc_4652_;
goto v_reusejp_4650_;
}
v_reusejp_4650_:
{
return v___x_4651_;
}
}
}
}
}
else
{
size_t v___x_4654_; lean_object* v___x_4655_; 
v___x_4654_ = lean_usize_of_nat(v_start_4558_);
v___x_4655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6(v___y_4499_, v_a_4503_, v_packages_4535_, v___x_4654_, v___x_4654_, v_a_4504_, v___y_4505_, v___y_4506_);
lean_dec_ref(v_packages_4535_);
if (lean_obj_tag(v___x_4655_) == 0)
{
lean_object* v_a_4656_; lean_object* v_fst_4657_; lean_object* v_snd_4658_; 
v_a_4656_ = lean_ctor_get(v___x_4655_, 0);
lean_inc(v_a_4656_);
lean_dec_ref(v___x_4655_);
v_fst_4657_ = lean_ctor_get(v_a_4656_, 0);
lean_inc(v_fst_4657_);
v_snd_4658_ = lean_ctor_get(v_a_4656_, 1);
lean_inc(v_snd_4658_);
lean_dec(v_a_4656_);
v_ws_4625_ = v_fst_4657_;
v___y_4626_ = v_snd_4658_;
goto v___jp_4624_;
}
else
{
lean_object* v_a_4659_; lean_object* v___x_4661_; uint8_t v_isShared_4662_; uint8_t v_isSharedCheck_4666_; 
lean_dec_ref(v___x_4611_);
lean_dec(v_wsIdx_4536_);
v_a_4659_ = lean_ctor_get(v___x_4655_, 0);
v_isSharedCheck_4666_ = !lean_is_exclusive(v___x_4655_);
if (v_isSharedCheck_4666_ == 0)
{
v___x_4661_ = v___x_4655_;
v_isShared_4662_ = v_isSharedCheck_4666_;
goto v_resetjp_4660_;
}
else
{
lean_inc(v_a_4659_);
lean_dec(v___x_4655_);
v___x_4661_ = lean_box(0);
v_isShared_4662_ = v_isSharedCheck_4666_;
goto v_resetjp_4660_;
}
v_resetjp_4660_:
{
lean_object* v___x_4664_; 
if (v_isShared_4662_ == 0)
{
v___x_4664_ = v___x_4661_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4665_; 
v_reuseFailAlloc_4665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4665_, 0, v_a_4659_);
v___x_4664_ = v_reuseFailAlloc_4665_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
return v___x_4664_;
}
}
}
}
}
}
else
{
size_t v___x_4667_; size_t v___x_4668_; lean_object* v___x_4669_; 
lean_dec_ref(v___x_4611_);
lean_dec_ref(v_a_4504_);
v___x_4667_ = lean_usize_of_nat(v___x_4610_);
v___x_4668_ = ((size_t)0ULL);
v___x_4669_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7(v_pkg_4502_, v_leanOpts_4500_, v_reconfigure_4501_, v_depConfigs_4537_, v___x_4667_, v___x_4668_, v_s_4628_, v___y_4505_, v___y_4506_);
lean_dec_ref(v_depConfigs_4537_);
if (lean_obj_tag(v___x_4669_) == 0)
{
lean_object* v_a_4670_; lean_object* v_fst_4671_; lean_object* v_snd_4672_; 
v_a_4670_ = lean_ctor_get(v___x_4669_, 0);
lean_inc(v_a_4670_);
lean_dec_ref(v___x_4669_);
v_fst_4671_ = lean_ctor_get(v_a_4670_, 0);
lean_inc(v_fst_4671_);
v_snd_4672_ = lean_ctor_get(v_a_4670_, 1);
lean_inc(v_snd_4672_);
lean_dec(v_a_4670_);
v_____x_4604_ = v_fst_4671_;
v___y_4605_ = v_snd_4672_;
v___y_4606_ = v___y_4506_;
goto v___jp_4603_;
}
else
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4680_; 
lean_dec(v_wsIdx_4536_);
lean_dec_ref(v___y_4499_);
v_a_4673_ = lean_ctor_get(v___x_4669_, 0);
v_isSharedCheck_4680_ = !lean_is_exclusive(v___x_4669_);
if (v_isSharedCheck_4680_ == 0)
{
v___x_4675_ = v___x_4669_;
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v___x_4669_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v___x_4678_; 
if (v_isShared_4676_ == 0)
{
v___x_4678_ = v___x_4675_;
goto v_reusejp_4677_;
}
else
{
lean_object* v_reuseFailAlloc_4679_; 
v_reuseFailAlloc_4679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4679_, 0, v_a_4673_);
v___x_4678_ = v_reuseFailAlloc_4679_;
goto v_reusejp_4677_;
}
v_reusejp_4677_:
{
return v___x_4678_;
}
}
}
}
}
else
{
uint8_t v___x_4681_; 
lean_inc_ref(v_packages_4535_);
v___x_4681_ = lean_nat_dec_lt(v___x_4629_, v___x_4610_);
if (v___x_4681_ == 0)
{
lean_dec_ref(v_s_4628_);
lean_dec_ref(v_depConfigs_4537_);
lean_dec_ref(v_pkg_4502_);
lean_dec_ref(v_leanOpts_4500_);
v_ws_4560_ = v_a_4504_;
v_packages_4561_ = v_packages_4535_;
v_depIdxs_4562_ = v___x_4611_;
v___y_4563_ = v___y_4505_;
v___y_4564_ = v___y_4506_;
goto v___jp_4559_;
}
else
{
size_t v___x_4682_; size_t v___x_4683_; lean_object* v___x_4684_; 
lean_dec_ref(v___x_4611_);
lean_dec_ref(v_packages_4535_);
lean_dec_ref(v_a_4504_);
v___x_4682_ = lean_usize_of_nat(v___x_4610_);
v___x_4683_ = ((size_t)0ULL);
v___x_4684_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7(v_pkg_4502_, v_leanOpts_4500_, v_reconfigure_4501_, v_depConfigs_4537_, v___x_4682_, v___x_4683_, v_s_4628_, v___y_4505_, v___y_4506_);
lean_dec_ref(v_depConfigs_4537_);
if (lean_obj_tag(v___x_4684_) == 0)
{
lean_object* v_a_4685_; lean_object* v_fst_4686_; lean_object* v_snd_4687_; 
v_a_4685_ = lean_ctor_get(v___x_4684_, 0);
lean_inc(v_a_4685_);
lean_dec_ref(v___x_4684_);
v_fst_4686_ = lean_ctor_get(v_a_4685_, 0);
lean_inc(v_fst_4686_);
v_snd_4687_ = lean_ctor_get(v_a_4685_, 1);
lean_inc(v_snd_4687_);
lean_dec(v_a_4685_);
v_____x_4604_ = v_fst_4686_;
v___y_4605_ = v_snd_4687_;
v___y_4606_ = v___y_4506_;
goto v___jp_4603_;
}
else
{
lean_object* v_a_4688_; lean_object* v___x_4690_; uint8_t v_isShared_4691_; uint8_t v_isSharedCheck_4695_; 
lean_dec(v_wsIdx_4536_);
lean_dec_ref(v___y_4499_);
v_a_4688_ = lean_ctor_get(v___x_4684_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v___x_4684_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4690_ = v___x_4684_;
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
else
{
lean_inc(v_a_4688_);
lean_dec(v___x_4684_);
v___x_4690_ = lean_box(0);
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
v_resetjp_4689_:
{
lean_object* v___x_4693_; 
if (v_isShared_4691_ == 0)
{
v___x_4693_ = v___x_4690_;
goto v_reusejp_4692_;
}
else
{
lean_object* v_reuseFailAlloc_4694_; 
v_reuseFailAlloc_4694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4694_, 0, v_a_4688_);
v___x_4693_ = v_reuseFailAlloc_4694_;
goto v_reusejp_4692_;
}
v_reusejp_4692_:
{
return v___x_4693_;
}
}
}
}
}
v___jp_4508_:
{
lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; 
v___x_4511_ = lean_box(0);
v___x_4512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4511_);
lean_ctor_set(v___x_4512_, 1, v___y_4510_);
v___x_4513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4512_);
lean_ctor_set(v___x_4513_, 1, v___y_4509_);
v___x_4514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4513_);
return v___x_4514_;
}
v___jp_4515_:
{
lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; 
v___x_4518_ = lean_box(0);
v___x_4519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4519_, 0, v___x_4518_);
lean_ctor_set(v___x_4519_, 1, v___y_4517_);
v___x_4520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4520_, 0, v___x_4519_);
lean_ctor_set(v___x_4520_, 1, v___y_4516_);
v___x_4521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4520_);
return v___x_4521_;
}
v___jp_4522_:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; 
v___x_4524_ = lean_box(0);
v___x_4525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4524_);
lean_ctor_set(v___x_4525_, 1, v___y_4523_);
v___x_4526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4526_, 0, v___x_4525_);
lean_ctor_set(v___x_4526_, 1, v___y_4505_);
v___x_4527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4527_, 0, v___x_4526_);
return v___x_4527_;
}
v___jp_4528_:
{
lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; 
v___x_4531_ = lean_box(0);
v___x_4532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4532_, 0, v___x_4531_);
lean_ctor_set(v___x_4532_, 1, v___y_4530_);
v___x_4533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4533_, 0, v___x_4532_);
lean_ctor_set(v___x_4533_, 1, v___y_4529_);
v___x_4534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4534_, 0, v___x_4533_);
return v___x_4534_;
}
v___jp_4538_:
{
lean_object* v___x_4544_; uint8_t v___x_4545_; 
v___x_4544_ = lean_array_get_size(v_packages_4542_);
v___x_4545_ = lean_nat_dec_le(v___y_4540_, v___x_4544_);
lean_dec(v___y_4540_);
if (v___x_4545_ == 0)
{
lean_object* v___x_4546_; lean_object* v___x_4547_; 
lean_dec_ref(v_packages_4542_);
lean_dec_ref(v___y_4539_);
lean_dec(v_wsIdx_4536_);
v___x_4546_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_4547_ = lean_panic_fn_borrowed(v_ws_4541_, v___x_4546_);
lean_dec_ref(v_ws_4541_);
v___y_4516_ = v___y_4543_;
v___y_4517_ = v___x_4547_;
goto v___jp_4515_;
}
else
{
size_t v_sz_4548_; size_t v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; 
v_sz_4548_ = lean_array_size(v___y_4539_);
v___x_4549_ = ((size_t)0ULL);
v___x_4550_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_4542_, v_sz_4548_, v___x_4549_, v___y_4539_);
lean_dec_ref(v_packages_4542_);
v___x_4551_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_4541_, v_wsIdx_4536_, v___x_4550_);
lean_dec(v_wsIdx_4536_);
v___y_4516_ = v___y_4543_;
v___y_4517_ = v___x_4551_;
goto v___jp_4515_;
}
}
v___jp_4552_:
{
lean_object* v_packages_4557_; 
v_packages_4557_ = lean_ctor_get(v_ws_4555_, 4);
lean_inc_ref(v_packages_4557_);
v___y_4539_ = v___y_4553_;
v___y_4540_ = v___y_4554_;
v_ws_4541_ = v_ws_4555_;
v_packages_4542_ = v_packages_4557_;
v___y_4543_ = v___y_4556_;
goto v___jp_4538_;
}
v___jp_4559_:
{
lean_object* v_depsEnd_4565_; uint8_t v___x_4566_; 
v_depsEnd_4565_ = lean_array_get_size(v_packages_4561_);
v___x_4566_ = lean_nat_dec_lt(v_start_4558_, v_depsEnd_4565_);
if (v___x_4566_ == 0)
{
uint8_t v___x_4567_; 
lean_dec_ref(v___y_4499_);
v___x_4567_ = lean_nat_dec_le(v_depsEnd_4565_, v_depsEnd_4565_);
if (v___x_4567_ == 0)
{
lean_object* v___x_4568_; lean_object* v___x_4569_; 
lean_dec_ref(v_depIdxs_4562_);
lean_dec_ref(v_packages_4561_);
lean_dec(v_wsIdx_4536_);
v___x_4568_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_4569_ = lean_panic_fn_borrowed(v_ws_4560_, v___x_4568_);
lean_dec_ref(v_ws_4560_);
v___y_4509_ = v___y_4563_;
v___y_4510_ = v___x_4569_;
goto v___jp_4508_;
}
else
{
size_t v_sz_4570_; size_t v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; 
v_sz_4570_ = lean_array_size(v_depIdxs_4562_);
v___x_4571_ = ((size_t)0ULL);
v___x_4572_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_4561_, v_sz_4570_, v___x_4571_, v_depIdxs_4562_);
lean_dec_ref(v_packages_4561_);
v___x_4573_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_4560_, v_wsIdx_4536_, v___x_4572_);
lean_dec(v_wsIdx_4536_);
v___y_4509_ = v___y_4563_;
v___y_4510_ = v___x_4573_;
goto v___jp_4508_;
}
}
else
{
uint8_t v___x_4574_; 
v___x_4574_ = lean_nat_dec_le(v_depsEnd_4565_, v_depsEnd_4565_);
if (v___x_4574_ == 0)
{
if (v___x_4566_ == 0)
{
lean_dec_ref(v___y_4499_);
v___y_4539_ = v_depIdxs_4562_;
v___y_4540_ = v_depsEnd_4565_;
v_ws_4541_ = v_ws_4560_;
v_packages_4542_ = v_packages_4561_;
v___y_4543_ = v___y_4563_;
goto v___jp_4538_;
}
else
{
size_t v___x_4575_; size_t v___x_4576_; lean_object* v___x_4577_; 
v___x_4575_ = lean_usize_of_nat(v_start_4558_);
v___x_4576_ = lean_usize_of_nat(v_depsEnd_4565_);
v___x_4577_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6(v___y_4499_, v_a_4503_, v_packages_4561_, v___x_4575_, v___x_4576_, v_ws_4560_, v___y_4563_, v___y_4564_);
lean_dec_ref(v_packages_4561_);
if (lean_obj_tag(v___x_4577_) == 0)
{
lean_object* v_a_4578_; lean_object* v_fst_4579_; lean_object* v_snd_4580_; 
v_a_4578_ = lean_ctor_get(v___x_4577_, 0);
lean_inc(v_a_4578_);
lean_dec_ref(v___x_4577_);
v_fst_4579_ = lean_ctor_get(v_a_4578_, 0);
lean_inc(v_fst_4579_);
v_snd_4580_ = lean_ctor_get(v_a_4578_, 1);
lean_inc(v_snd_4580_);
lean_dec(v_a_4578_);
v___y_4553_ = v_depIdxs_4562_;
v___y_4554_ = v_depsEnd_4565_;
v_ws_4555_ = v_fst_4579_;
v___y_4556_ = v_snd_4580_;
goto v___jp_4552_;
}
else
{
lean_object* v_a_4581_; lean_object* v___x_4583_; uint8_t v_isShared_4584_; uint8_t v_isSharedCheck_4588_; 
lean_dec_ref(v_depIdxs_4562_);
lean_dec(v_wsIdx_4536_);
v_a_4581_ = lean_ctor_get(v___x_4577_, 0);
v_isSharedCheck_4588_ = !lean_is_exclusive(v___x_4577_);
if (v_isSharedCheck_4588_ == 0)
{
v___x_4583_ = v___x_4577_;
v_isShared_4584_ = v_isSharedCheck_4588_;
goto v_resetjp_4582_;
}
else
{
lean_inc(v_a_4581_);
lean_dec(v___x_4577_);
v___x_4583_ = lean_box(0);
v_isShared_4584_ = v_isSharedCheck_4588_;
goto v_resetjp_4582_;
}
v_resetjp_4582_:
{
lean_object* v___x_4586_; 
if (v_isShared_4584_ == 0)
{
v___x_4586_ = v___x_4583_;
goto v_reusejp_4585_;
}
else
{
lean_object* v_reuseFailAlloc_4587_; 
v_reuseFailAlloc_4587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4587_, 0, v_a_4581_);
v___x_4586_ = v_reuseFailAlloc_4587_;
goto v_reusejp_4585_;
}
v_reusejp_4585_:
{
return v___x_4586_;
}
}
}
}
}
else
{
size_t v___x_4589_; size_t v___x_4590_; lean_object* v___x_4591_; 
v___x_4589_ = lean_usize_of_nat(v_start_4558_);
v___x_4590_ = lean_usize_of_nat(v_depsEnd_4565_);
v___x_4591_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6(v___y_4499_, v_a_4503_, v_packages_4561_, v___x_4589_, v___x_4590_, v_ws_4560_, v___y_4563_, v___y_4564_);
lean_dec_ref(v_packages_4561_);
if (lean_obj_tag(v___x_4591_) == 0)
{
lean_object* v_a_4592_; lean_object* v_fst_4593_; lean_object* v_snd_4594_; 
v_a_4592_ = lean_ctor_get(v___x_4591_, 0);
lean_inc(v_a_4592_);
lean_dec_ref(v___x_4591_);
v_fst_4593_ = lean_ctor_get(v_a_4592_, 0);
lean_inc(v_fst_4593_);
v_snd_4594_ = lean_ctor_get(v_a_4592_, 1);
lean_inc(v_snd_4594_);
lean_dec(v_a_4592_);
v___y_4553_ = v_depIdxs_4562_;
v___y_4554_ = v_depsEnd_4565_;
v_ws_4555_ = v_fst_4593_;
v___y_4556_ = v_snd_4594_;
goto v___jp_4552_;
}
else
{
lean_object* v_a_4595_; lean_object* v___x_4597_; uint8_t v_isShared_4598_; uint8_t v_isSharedCheck_4602_; 
lean_dec_ref(v_depIdxs_4562_);
lean_dec(v_wsIdx_4536_);
v_a_4595_ = lean_ctor_get(v___x_4591_, 0);
v_isSharedCheck_4602_ = !lean_is_exclusive(v___x_4591_);
if (v_isSharedCheck_4602_ == 0)
{
v___x_4597_ = v___x_4591_;
v_isShared_4598_ = v_isSharedCheck_4602_;
goto v_resetjp_4596_;
}
else
{
lean_inc(v_a_4595_);
lean_dec(v___x_4591_);
v___x_4597_ = lean_box(0);
v_isShared_4598_ = v_isSharedCheck_4602_;
goto v_resetjp_4596_;
}
v_resetjp_4596_:
{
lean_object* v___x_4600_; 
if (v_isShared_4598_ == 0)
{
v___x_4600_ = v___x_4597_;
goto v_reusejp_4599_;
}
else
{
lean_object* v_reuseFailAlloc_4601_; 
v_reuseFailAlloc_4601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4601_, 0, v_a_4595_);
v___x_4600_ = v_reuseFailAlloc_4601_;
goto v_reusejp_4599_;
}
v_reusejp_4599_:
{
return v___x_4600_;
}
}
}
}
}
}
v___jp_4603_:
{
lean_object* v_ws_4607_; lean_object* v_depIdxs_4608_; lean_object* v_packages_4609_; 
v_ws_4607_ = lean_ctor_get(v_____x_4604_, 0);
lean_inc_ref(v_ws_4607_);
v_depIdxs_4608_ = lean_ctor_get(v_____x_4604_, 1);
lean_inc_ref(v_depIdxs_4608_);
lean_dec_ref(v_____x_4604_);
v_packages_4609_ = lean_ctor_get(v_ws_4607_, 4);
lean_inc_ref(v_packages_4609_);
v_ws_4560_ = v_ws_4607_;
v_packages_4561_ = v_packages_4609_;
v_depIdxs_4562_ = v_depIdxs_4608_;
v___y_4563_ = v___y_4605_;
v___y_4564_ = v___y_4606_;
goto v___jp_4559_;
}
v___jp_4612_:
{
lean_object* v___x_4616_; uint8_t v___x_4617_; 
v___x_4616_ = lean_array_get_size(v_packages_4614_);
v___x_4617_ = lean_nat_dec_le(v_start_4558_, v___x_4616_);
if (v___x_4617_ == 0)
{
lean_object* v___x_4618_; lean_object* v___x_4619_; 
lean_dec_ref(v_packages_4614_);
lean_dec_ref(v___x_4611_);
lean_dec(v_wsIdx_4536_);
v___x_4618_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_4619_ = lean_panic_fn_borrowed(v_ws_4613_, v___x_4618_);
lean_dec_ref(v_ws_4613_);
v___y_4529_ = v___y_4615_;
v___y_4530_ = v___x_4619_;
goto v___jp_4528_;
}
else
{
size_t v_sz_4620_; size_t v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; 
v_sz_4620_ = lean_array_size(v___x_4611_);
v___x_4621_ = ((size_t)0ULL);
v___x_4622_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_4614_, v_sz_4620_, v___x_4621_, v___x_4611_);
lean_dec_ref(v_packages_4614_);
v___x_4623_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_4613_, v_wsIdx_4536_, v___x_4622_);
lean_dec(v_wsIdx_4536_);
v___y_4529_ = v___y_4615_;
v___y_4530_ = v___x_4623_;
goto v___jp_4528_;
}
}
v___jp_4624_:
{
lean_object* v_packages_4627_; 
v_packages_4627_ = lean_ctor_get(v_ws_4625_, 4);
lean_inc_ref(v_packages_4627_);
v_ws_4613_ = v_ws_4625_;
v_packages_4614_ = v_packages_4627_;
v___y_4615_ = v___y_4626_;
goto v___jp_4612_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___boxed(lean_object* v___y_4696_, lean_object* v_leanOpts_4697_, lean_object* v_reconfigure_4698_, lean_object* v_pkg_4699_, lean_object* v_a_4700_, lean_object* v_a_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_){
_start:
{
uint8_t v_reconfigure_boxed_4705_; lean_object* v_res_4706_; 
v_reconfigure_boxed_4705_ = lean_unbox(v_reconfigure_4698_);
v_res_4706_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(v___y_4696_, v_leanOpts_4697_, v_reconfigure_boxed_4705_, v_pkg_4699_, v_a_4700_, v_a_4701_, v___y_4702_, v___y_4703_);
lean_dec_ref(v___y_4703_);
lean_dec(v_a_4700_);
return v_res_4706_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9(lean_object* v_leanOpts_4707_, lean_object* v_a_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_){
_start:
{
lean_object* v___x_4714_; 
v___x_4714_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg(v_leanOpts_4707_, v_a_4708_, v___y_4709_, v___y_4710_, v___y_4711_, v___y_4712_);
return v___x_4714_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9___boxed(lean_object* v_leanOpts_4715_, lean_object* v_a_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_){
_start:
{
lean_object* v_res_4722_; 
v_res_4722_ = l_Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9(v_leanOpts_4715_, v_a_4716_, v___y_4717_, v___y_4718_, v___y_4719_, v___y_4720_);
lean_dec_ref(v___y_4720_);
lean_dec(v___y_4717_);
return v_res_4722_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11_spec__18(lean_object* v_00_u03b2_4723_, lean_object* v_msg_4724_){
_start:
{
lean_object* v___x_4725_; 
v___x_4725_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11_spec__18___redArg(v_msg_4724_);
return v___x_4725_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11(lean_object* v_00_u03b2_4726_, lean_object* v_k_4727_, lean_object* v_v_4728_, lean_object* v_t_4729_){
_start:
{
lean_object* v___x_4730_; 
v___x_4730_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__11___redArg(v_k_4727_, v_v_4728_, v_t_4729_);
return v___x_4730_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__12(lean_object* v_init_4731_, lean_object* v_t_4732_){
_start:
{
lean_object* v___x_4733_; 
v___x_4733_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6_spec__12_spec__20(v_init_4731_, v_t_4732_);
return v___x_4733_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___redArg(lean_object* v___y_4734_, lean_object* v___x_4735_, lean_object* v_leanOpts_4736_, uint8_t v_reconfigure_4737_, lean_object* v_pkg_4738_, lean_object* v_a_4739_, lean_object* v___y_4740_, lean_object* v___y_4741_){
_start:
{
lean_object* v___y_4744_; lean_object* v___y_4745_; lean_object* v___y_4751_; lean_object* v___y_4752_; lean_object* v___y_4758_; lean_object* v___y_4764_; lean_object* v___y_4765_; lean_object* v_packages_4770_; lean_object* v_wsIdx_4771_; lean_object* v_depConfigs_4772_; lean_object* v___y_4774_; lean_object* v___y_4775_; lean_object* v_ws_4776_; lean_object* v_packages_4777_; lean_object* v___y_4778_; lean_object* v___y_4788_; lean_object* v___y_4789_; lean_object* v_ws_4790_; lean_object* v___y_4791_; lean_object* v_start_4793_; lean_object* v_ws_4795_; lean_object* v_packages_4796_; lean_object* v_depIdxs_4797_; lean_object* v___y_4798_; lean_object* v___y_4799_; lean_object* v_____x_4839_; lean_object* v___y_4840_; lean_object* v___y_4841_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v_ws_4848_; lean_object* v_packages_4849_; lean_object* v___y_4850_; lean_object* v_ws_4860_; lean_object* v___y_4861_; lean_object* v_s_4863_; lean_object* v___x_4864_; uint8_t v___x_4865_; 
v_packages_4770_ = lean_ctor_get(v_a_4739_, 4);
v_wsIdx_4771_ = lean_ctor_get(v_pkg_4738_, 0);
lean_inc(v_wsIdx_4771_);
v_depConfigs_4772_ = lean_ctor_get(v_pkg_4738_, 12);
lean_inc_ref(v_depConfigs_4772_);
v_start_4793_ = lean_array_get_size(v_packages_4770_);
v___x_4845_ = lean_array_get_size(v_depConfigs_4772_);
v___x_4846_ = lean_mk_empty_array_with_capacity(v___x_4845_);
lean_inc_ref(v___x_4846_);
lean_inc_ref(v_a_4739_);
v_s_4863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_4863_, 0, v_a_4739_);
lean_ctor_set(v_s_4863_, 1, v___x_4846_);
v___x_4864_ = lean_unsigned_to_nat(0u);
v___x_4865_ = lean_nat_dec_le(v___x_4845_, v___x_4845_);
if (v___x_4865_ == 0)
{
uint8_t v___x_4866_; 
v___x_4866_ = lean_nat_dec_lt(v___x_4864_, v___x_4845_);
if (v___x_4866_ == 0)
{
uint8_t v___x_4867_; 
lean_dec_ref(v_s_4863_);
lean_dec_ref(v_depConfigs_4772_);
lean_dec_ref(v_pkg_4738_);
lean_dec_ref(v_leanOpts_4736_);
v___x_4867_ = lean_nat_dec_lt(v_start_4793_, v_start_4793_);
if (v___x_4867_ == 0)
{
uint8_t v___x_4868_; 
lean_dec_ref(v___y_4734_);
v___x_4868_ = lean_nat_dec_le(v_start_4793_, v_start_4793_);
if (v___x_4868_ == 0)
{
lean_object* v___x_4869_; lean_object* v___x_4870_; 
lean_dec_ref(v___x_4846_);
lean_dec(v_wsIdx_4771_);
v___x_4869_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_4870_ = lean_panic_fn_borrowed(v_a_4739_, v___x_4869_);
lean_dec_ref(v_a_4739_);
v___y_4758_ = v___x_4870_;
goto v___jp_4757_;
}
else
{
size_t v_sz_4871_; size_t v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; 
v_sz_4871_ = lean_array_size(v___x_4846_);
v___x_4872_ = ((size_t)0ULL);
v___x_4873_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_4770_, v_sz_4871_, v___x_4872_, v___x_4846_);
v___x_4874_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_a_4739_, v_wsIdx_4771_, v___x_4873_);
lean_dec(v_wsIdx_4771_);
v___y_4758_ = v___x_4874_;
goto v___jp_4757_;
}
}
else
{
uint8_t v___x_4875_; 
lean_inc_ref(v_packages_4770_);
v___x_4875_ = lean_nat_dec_le(v_start_4793_, v_start_4793_);
if (v___x_4875_ == 0)
{
if (v___x_4867_ == 0)
{
lean_dec_ref(v___y_4734_);
v_ws_4848_ = v_a_4739_;
v_packages_4849_ = v_packages_4770_;
v___y_4850_ = v___y_4740_;
goto v___jp_4847_;
}
else
{
size_t v___x_4876_; lean_object* v___x_4877_; 
v___x_4876_ = lean_usize_of_nat(v_start_4793_);
v___x_4877_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6(v___y_4734_, v___x_4735_, v_packages_4770_, v___x_4876_, v___x_4876_, v_a_4739_, v___y_4740_, v___y_4741_);
lean_dec_ref(v_packages_4770_);
if (lean_obj_tag(v___x_4877_) == 0)
{
lean_object* v_a_4878_; lean_object* v_fst_4879_; lean_object* v_snd_4880_; 
v_a_4878_ = lean_ctor_get(v___x_4877_, 0);
lean_inc(v_a_4878_);
lean_dec_ref(v___x_4877_);
v_fst_4879_ = lean_ctor_get(v_a_4878_, 0);
lean_inc(v_fst_4879_);
v_snd_4880_ = lean_ctor_get(v_a_4878_, 1);
lean_inc(v_snd_4880_);
lean_dec(v_a_4878_);
v_ws_4860_ = v_fst_4879_;
v___y_4861_ = v_snd_4880_;
goto v___jp_4859_;
}
else
{
lean_object* v_a_4881_; lean_object* v___x_4883_; uint8_t v_isShared_4884_; uint8_t v_isSharedCheck_4888_; 
lean_dec_ref(v___x_4846_);
lean_dec(v_wsIdx_4771_);
v_a_4881_ = lean_ctor_get(v___x_4877_, 0);
v_isSharedCheck_4888_ = !lean_is_exclusive(v___x_4877_);
if (v_isSharedCheck_4888_ == 0)
{
v___x_4883_ = v___x_4877_;
v_isShared_4884_ = v_isSharedCheck_4888_;
goto v_resetjp_4882_;
}
else
{
lean_inc(v_a_4881_);
lean_dec(v___x_4877_);
v___x_4883_ = lean_box(0);
v_isShared_4884_ = v_isSharedCheck_4888_;
goto v_resetjp_4882_;
}
v_resetjp_4882_:
{
lean_object* v___x_4886_; 
if (v_isShared_4884_ == 0)
{
v___x_4886_ = v___x_4883_;
goto v_reusejp_4885_;
}
else
{
lean_object* v_reuseFailAlloc_4887_; 
v_reuseFailAlloc_4887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4887_, 0, v_a_4881_);
v___x_4886_ = v_reuseFailAlloc_4887_;
goto v_reusejp_4885_;
}
v_reusejp_4885_:
{
return v___x_4886_;
}
}
}
}
}
else
{
size_t v___x_4889_; lean_object* v___x_4890_; 
v___x_4889_ = lean_usize_of_nat(v_start_4793_);
v___x_4890_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6(v___y_4734_, v___x_4735_, v_packages_4770_, v___x_4889_, v___x_4889_, v_a_4739_, v___y_4740_, v___y_4741_);
lean_dec_ref(v_packages_4770_);
if (lean_obj_tag(v___x_4890_) == 0)
{
lean_object* v_a_4891_; lean_object* v_fst_4892_; lean_object* v_snd_4893_; 
v_a_4891_ = lean_ctor_get(v___x_4890_, 0);
lean_inc(v_a_4891_);
lean_dec_ref(v___x_4890_);
v_fst_4892_ = lean_ctor_get(v_a_4891_, 0);
lean_inc(v_fst_4892_);
v_snd_4893_ = lean_ctor_get(v_a_4891_, 1);
lean_inc(v_snd_4893_);
lean_dec(v_a_4891_);
v_ws_4860_ = v_fst_4892_;
v___y_4861_ = v_snd_4893_;
goto v___jp_4859_;
}
else
{
lean_object* v_a_4894_; lean_object* v___x_4896_; uint8_t v_isShared_4897_; uint8_t v_isSharedCheck_4901_; 
lean_dec_ref(v___x_4846_);
lean_dec(v_wsIdx_4771_);
v_a_4894_ = lean_ctor_get(v___x_4890_, 0);
v_isSharedCheck_4901_ = !lean_is_exclusive(v___x_4890_);
if (v_isSharedCheck_4901_ == 0)
{
v___x_4896_ = v___x_4890_;
v_isShared_4897_ = v_isSharedCheck_4901_;
goto v_resetjp_4895_;
}
else
{
lean_inc(v_a_4894_);
lean_dec(v___x_4890_);
v___x_4896_ = lean_box(0);
v_isShared_4897_ = v_isSharedCheck_4901_;
goto v_resetjp_4895_;
}
v_resetjp_4895_:
{
lean_object* v___x_4899_; 
if (v_isShared_4897_ == 0)
{
v___x_4899_ = v___x_4896_;
goto v_reusejp_4898_;
}
else
{
lean_object* v_reuseFailAlloc_4900_; 
v_reuseFailAlloc_4900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4900_, 0, v_a_4894_);
v___x_4899_ = v_reuseFailAlloc_4900_;
goto v_reusejp_4898_;
}
v_reusejp_4898_:
{
return v___x_4899_;
}
}
}
}
}
}
else
{
size_t v___x_4902_; size_t v___x_4903_; lean_object* v___x_4904_; 
lean_dec_ref(v___x_4846_);
lean_dec_ref(v_a_4739_);
v___x_4902_ = lean_usize_of_nat(v___x_4845_);
v___x_4903_ = ((size_t)0ULL);
v___x_4904_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7(v_pkg_4738_, v_leanOpts_4736_, v_reconfigure_4737_, v_depConfigs_4772_, v___x_4902_, v___x_4903_, v_s_4863_, v___y_4740_, v___y_4741_);
lean_dec_ref(v_depConfigs_4772_);
if (lean_obj_tag(v___x_4904_) == 0)
{
lean_object* v_a_4905_; lean_object* v_fst_4906_; lean_object* v_snd_4907_; 
v_a_4905_ = lean_ctor_get(v___x_4904_, 0);
lean_inc(v_a_4905_);
lean_dec_ref(v___x_4904_);
v_fst_4906_ = lean_ctor_get(v_a_4905_, 0);
lean_inc(v_fst_4906_);
v_snd_4907_ = lean_ctor_get(v_a_4905_, 1);
lean_inc(v_snd_4907_);
lean_dec(v_a_4905_);
v_____x_4839_ = v_fst_4906_;
v___y_4840_ = v_snd_4907_;
v___y_4841_ = v___y_4741_;
goto v___jp_4838_;
}
else
{
lean_object* v_a_4908_; lean_object* v___x_4910_; uint8_t v_isShared_4911_; uint8_t v_isSharedCheck_4915_; 
lean_dec(v_wsIdx_4771_);
lean_dec_ref(v___y_4734_);
v_a_4908_ = lean_ctor_get(v___x_4904_, 0);
v_isSharedCheck_4915_ = !lean_is_exclusive(v___x_4904_);
if (v_isSharedCheck_4915_ == 0)
{
v___x_4910_ = v___x_4904_;
v_isShared_4911_ = v_isSharedCheck_4915_;
goto v_resetjp_4909_;
}
else
{
lean_inc(v_a_4908_);
lean_dec(v___x_4904_);
v___x_4910_ = lean_box(0);
v_isShared_4911_ = v_isSharedCheck_4915_;
goto v_resetjp_4909_;
}
v_resetjp_4909_:
{
lean_object* v___x_4913_; 
if (v_isShared_4911_ == 0)
{
v___x_4913_ = v___x_4910_;
goto v_reusejp_4912_;
}
else
{
lean_object* v_reuseFailAlloc_4914_; 
v_reuseFailAlloc_4914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4914_, 0, v_a_4908_);
v___x_4913_ = v_reuseFailAlloc_4914_;
goto v_reusejp_4912_;
}
v_reusejp_4912_:
{
return v___x_4913_;
}
}
}
}
}
else
{
uint8_t v___x_4916_; 
lean_inc_ref(v_packages_4770_);
v___x_4916_ = lean_nat_dec_lt(v___x_4864_, v___x_4845_);
if (v___x_4916_ == 0)
{
lean_dec_ref(v_s_4863_);
lean_dec_ref(v_depConfigs_4772_);
lean_dec_ref(v_pkg_4738_);
lean_dec_ref(v_leanOpts_4736_);
v_ws_4795_ = v_a_4739_;
v_packages_4796_ = v_packages_4770_;
v_depIdxs_4797_ = v___x_4846_;
v___y_4798_ = v___y_4740_;
v___y_4799_ = v___y_4741_;
goto v___jp_4794_;
}
else
{
size_t v___x_4917_; size_t v___x_4918_; lean_object* v___x_4919_; 
lean_dec_ref(v___x_4846_);
lean_dec_ref(v_packages_4770_);
lean_dec_ref(v_a_4739_);
v___x_4917_ = lean_usize_of_nat(v___x_4845_);
v___x_4918_ = ((size_t)0ULL);
v___x_4919_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7(v_pkg_4738_, v_leanOpts_4736_, v_reconfigure_4737_, v_depConfigs_4772_, v___x_4917_, v___x_4918_, v_s_4863_, v___y_4740_, v___y_4741_);
lean_dec_ref(v_depConfigs_4772_);
if (lean_obj_tag(v___x_4919_) == 0)
{
lean_object* v_a_4920_; lean_object* v_fst_4921_; lean_object* v_snd_4922_; 
v_a_4920_ = lean_ctor_get(v___x_4919_, 0);
lean_inc(v_a_4920_);
lean_dec_ref(v___x_4919_);
v_fst_4921_ = lean_ctor_get(v_a_4920_, 0);
lean_inc(v_fst_4921_);
v_snd_4922_ = lean_ctor_get(v_a_4920_, 1);
lean_inc(v_snd_4922_);
lean_dec(v_a_4920_);
v_____x_4839_ = v_fst_4921_;
v___y_4840_ = v_snd_4922_;
v___y_4841_ = v___y_4741_;
goto v___jp_4838_;
}
else
{
lean_object* v_a_4923_; lean_object* v___x_4925_; uint8_t v_isShared_4926_; uint8_t v_isSharedCheck_4930_; 
lean_dec(v_wsIdx_4771_);
lean_dec_ref(v___y_4734_);
v_a_4923_ = lean_ctor_get(v___x_4919_, 0);
v_isSharedCheck_4930_ = !lean_is_exclusive(v___x_4919_);
if (v_isSharedCheck_4930_ == 0)
{
v___x_4925_ = v___x_4919_;
v_isShared_4926_ = v_isSharedCheck_4930_;
goto v_resetjp_4924_;
}
else
{
lean_inc(v_a_4923_);
lean_dec(v___x_4919_);
v___x_4925_ = lean_box(0);
v_isShared_4926_ = v_isSharedCheck_4930_;
goto v_resetjp_4924_;
}
v_resetjp_4924_:
{
lean_object* v___x_4928_; 
if (v_isShared_4926_ == 0)
{
v___x_4928_ = v___x_4925_;
goto v_reusejp_4927_;
}
else
{
lean_object* v_reuseFailAlloc_4929_; 
v_reuseFailAlloc_4929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4929_, 0, v_a_4923_);
v___x_4928_ = v_reuseFailAlloc_4929_;
goto v_reusejp_4927_;
}
v_reusejp_4927_:
{
return v___x_4928_;
}
}
}
}
}
v___jp_4743_:
{
lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; 
v___x_4746_ = lean_box(0);
v___x_4747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4747_, 0, v___x_4746_);
lean_ctor_set(v___x_4747_, 1, v___y_4745_);
v___x_4748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4748_, 0, v___x_4747_);
lean_ctor_set(v___x_4748_, 1, v___y_4744_);
v___x_4749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4749_, 0, v___x_4748_);
return v___x_4749_;
}
v___jp_4750_:
{
lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; 
v___x_4753_ = lean_box(0);
v___x_4754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4754_, 0, v___x_4753_);
lean_ctor_set(v___x_4754_, 1, v___y_4752_);
v___x_4755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4755_, 0, v___x_4754_);
lean_ctor_set(v___x_4755_, 1, v___y_4751_);
v___x_4756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4756_, 0, v___x_4755_);
return v___x_4756_;
}
v___jp_4757_:
{
lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; 
v___x_4759_ = lean_box(0);
v___x_4760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4760_, 0, v___x_4759_);
lean_ctor_set(v___x_4760_, 1, v___y_4758_);
v___x_4761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4761_, 0, v___x_4760_);
lean_ctor_set(v___x_4761_, 1, v___y_4740_);
v___x_4762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4762_, 0, v___x_4761_);
return v___x_4762_;
}
v___jp_4763_:
{
lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; 
v___x_4766_ = lean_box(0);
v___x_4767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4767_, 0, v___x_4766_);
lean_ctor_set(v___x_4767_, 1, v___y_4765_);
v___x_4768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4768_, 0, v___x_4767_);
lean_ctor_set(v___x_4768_, 1, v___y_4764_);
v___x_4769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4769_, 0, v___x_4768_);
return v___x_4769_;
}
v___jp_4773_:
{
lean_object* v___x_4779_; uint8_t v___x_4780_; 
v___x_4779_ = lean_array_get_size(v_packages_4777_);
v___x_4780_ = lean_nat_dec_le(v___y_4774_, v___x_4779_);
lean_dec(v___y_4774_);
if (v___x_4780_ == 0)
{
lean_object* v___x_4781_; lean_object* v___x_4782_; 
lean_dec_ref(v_packages_4777_);
lean_dec_ref(v___y_4775_);
lean_dec(v_wsIdx_4771_);
v___x_4781_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_4782_ = lean_panic_fn_borrowed(v_ws_4776_, v___x_4781_);
lean_dec_ref(v_ws_4776_);
v___y_4751_ = v___y_4778_;
v___y_4752_ = v___x_4782_;
goto v___jp_4750_;
}
else
{
size_t v_sz_4783_; size_t v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; 
v_sz_4783_ = lean_array_size(v___y_4775_);
v___x_4784_ = ((size_t)0ULL);
v___x_4785_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_4777_, v_sz_4783_, v___x_4784_, v___y_4775_);
lean_dec_ref(v_packages_4777_);
v___x_4786_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_4776_, v_wsIdx_4771_, v___x_4785_);
lean_dec(v_wsIdx_4771_);
v___y_4751_ = v___y_4778_;
v___y_4752_ = v___x_4786_;
goto v___jp_4750_;
}
}
v___jp_4787_:
{
lean_object* v_packages_4792_; 
v_packages_4792_ = lean_ctor_get(v_ws_4790_, 4);
lean_inc_ref(v_packages_4792_);
v___y_4774_ = v___y_4788_;
v___y_4775_ = v___y_4789_;
v_ws_4776_ = v_ws_4790_;
v_packages_4777_ = v_packages_4792_;
v___y_4778_ = v___y_4791_;
goto v___jp_4773_;
}
v___jp_4794_:
{
lean_object* v_depsEnd_4800_; uint8_t v___x_4801_; 
v_depsEnd_4800_ = lean_array_get_size(v_packages_4796_);
v___x_4801_ = lean_nat_dec_lt(v_start_4793_, v_depsEnd_4800_);
if (v___x_4801_ == 0)
{
uint8_t v___x_4802_; 
lean_dec_ref(v___y_4734_);
v___x_4802_ = lean_nat_dec_le(v_depsEnd_4800_, v_depsEnd_4800_);
if (v___x_4802_ == 0)
{
lean_object* v___x_4803_; lean_object* v___x_4804_; 
lean_dec_ref(v_depIdxs_4797_);
lean_dec_ref(v_packages_4796_);
lean_dec(v_wsIdx_4771_);
v___x_4803_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_4804_ = lean_panic_fn_borrowed(v_ws_4795_, v___x_4803_);
lean_dec_ref(v_ws_4795_);
v___y_4744_ = v___y_4798_;
v___y_4745_ = v___x_4804_;
goto v___jp_4743_;
}
else
{
size_t v_sz_4805_; size_t v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; 
v_sz_4805_ = lean_array_size(v_depIdxs_4797_);
v___x_4806_ = ((size_t)0ULL);
v___x_4807_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_4796_, v_sz_4805_, v___x_4806_, v_depIdxs_4797_);
lean_dec_ref(v_packages_4796_);
v___x_4808_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_4795_, v_wsIdx_4771_, v___x_4807_);
lean_dec(v_wsIdx_4771_);
v___y_4744_ = v___y_4798_;
v___y_4745_ = v___x_4808_;
goto v___jp_4743_;
}
}
else
{
uint8_t v___x_4809_; 
v___x_4809_ = lean_nat_dec_le(v_depsEnd_4800_, v_depsEnd_4800_);
if (v___x_4809_ == 0)
{
if (v___x_4801_ == 0)
{
lean_dec_ref(v___y_4734_);
v___y_4774_ = v_depsEnd_4800_;
v___y_4775_ = v_depIdxs_4797_;
v_ws_4776_ = v_ws_4795_;
v_packages_4777_ = v_packages_4796_;
v___y_4778_ = v___y_4798_;
goto v___jp_4773_;
}
else
{
size_t v___x_4810_; size_t v___x_4811_; lean_object* v___x_4812_; 
v___x_4810_ = lean_usize_of_nat(v_start_4793_);
v___x_4811_ = lean_usize_of_nat(v_depsEnd_4800_);
v___x_4812_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6(v___y_4734_, v___x_4735_, v_packages_4796_, v___x_4810_, v___x_4811_, v_ws_4795_, v___y_4798_, v___y_4799_);
lean_dec_ref(v_packages_4796_);
if (lean_obj_tag(v___x_4812_) == 0)
{
lean_object* v_a_4813_; lean_object* v_fst_4814_; lean_object* v_snd_4815_; 
v_a_4813_ = lean_ctor_get(v___x_4812_, 0);
lean_inc(v_a_4813_);
lean_dec_ref(v___x_4812_);
v_fst_4814_ = lean_ctor_get(v_a_4813_, 0);
lean_inc(v_fst_4814_);
v_snd_4815_ = lean_ctor_get(v_a_4813_, 1);
lean_inc(v_snd_4815_);
lean_dec(v_a_4813_);
v___y_4788_ = v_depsEnd_4800_;
v___y_4789_ = v_depIdxs_4797_;
v_ws_4790_ = v_fst_4814_;
v___y_4791_ = v_snd_4815_;
goto v___jp_4787_;
}
else
{
lean_object* v_a_4816_; lean_object* v___x_4818_; uint8_t v_isShared_4819_; uint8_t v_isSharedCheck_4823_; 
lean_dec_ref(v_depIdxs_4797_);
lean_dec(v_wsIdx_4771_);
v_a_4816_ = lean_ctor_get(v___x_4812_, 0);
v_isSharedCheck_4823_ = !lean_is_exclusive(v___x_4812_);
if (v_isSharedCheck_4823_ == 0)
{
v___x_4818_ = v___x_4812_;
v_isShared_4819_ = v_isSharedCheck_4823_;
goto v_resetjp_4817_;
}
else
{
lean_inc(v_a_4816_);
lean_dec(v___x_4812_);
v___x_4818_ = lean_box(0);
v_isShared_4819_ = v_isSharedCheck_4823_;
goto v_resetjp_4817_;
}
v_resetjp_4817_:
{
lean_object* v___x_4821_; 
if (v_isShared_4819_ == 0)
{
v___x_4821_ = v___x_4818_;
goto v_reusejp_4820_;
}
else
{
lean_object* v_reuseFailAlloc_4822_; 
v_reuseFailAlloc_4822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4822_, 0, v_a_4816_);
v___x_4821_ = v_reuseFailAlloc_4822_;
goto v_reusejp_4820_;
}
v_reusejp_4820_:
{
return v___x_4821_;
}
}
}
}
}
else
{
size_t v___x_4824_; size_t v___x_4825_; lean_object* v___x_4826_; 
v___x_4824_ = lean_usize_of_nat(v_start_4793_);
v___x_4825_ = lean_usize_of_nat(v_depsEnd_4800_);
v___x_4826_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__6(v___y_4734_, v___x_4735_, v_packages_4796_, v___x_4824_, v___x_4825_, v_ws_4795_, v___y_4798_, v___y_4799_);
lean_dec_ref(v_packages_4796_);
if (lean_obj_tag(v___x_4826_) == 0)
{
lean_object* v_a_4827_; lean_object* v_fst_4828_; lean_object* v_snd_4829_; 
v_a_4827_ = lean_ctor_get(v___x_4826_, 0);
lean_inc(v_a_4827_);
lean_dec_ref(v___x_4826_);
v_fst_4828_ = lean_ctor_get(v_a_4827_, 0);
lean_inc(v_fst_4828_);
v_snd_4829_ = lean_ctor_get(v_a_4827_, 1);
lean_inc(v_snd_4829_);
lean_dec(v_a_4827_);
v___y_4788_ = v_depsEnd_4800_;
v___y_4789_ = v_depIdxs_4797_;
v_ws_4790_ = v_fst_4828_;
v___y_4791_ = v_snd_4829_;
goto v___jp_4787_;
}
else
{
lean_object* v_a_4830_; lean_object* v___x_4832_; uint8_t v_isShared_4833_; uint8_t v_isSharedCheck_4837_; 
lean_dec_ref(v_depIdxs_4797_);
lean_dec(v_wsIdx_4771_);
v_a_4830_ = lean_ctor_get(v___x_4826_, 0);
v_isSharedCheck_4837_ = !lean_is_exclusive(v___x_4826_);
if (v_isSharedCheck_4837_ == 0)
{
v___x_4832_ = v___x_4826_;
v_isShared_4833_ = v_isSharedCheck_4837_;
goto v_resetjp_4831_;
}
else
{
lean_inc(v_a_4830_);
lean_dec(v___x_4826_);
v___x_4832_ = lean_box(0);
v_isShared_4833_ = v_isSharedCheck_4837_;
goto v_resetjp_4831_;
}
v_resetjp_4831_:
{
lean_object* v___x_4835_; 
if (v_isShared_4833_ == 0)
{
v___x_4835_ = v___x_4832_;
goto v_reusejp_4834_;
}
else
{
lean_object* v_reuseFailAlloc_4836_; 
v_reuseFailAlloc_4836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4836_, 0, v_a_4830_);
v___x_4835_ = v_reuseFailAlloc_4836_;
goto v_reusejp_4834_;
}
v_reusejp_4834_:
{
return v___x_4835_;
}
}
}
}
}
}
v___jp_4838_:
{
lean_object* v_ws_4842_; lean_object* v_depIdxs_4843_; lean_object* v_packages_4844_; 
v_ws_4842_ = lean_ctor_get(v_____x_4839_, 0);
lean_inc_ref(v_ws_4842_);
v_depIdxs_4843_ = lean_ctor_get(v_____x_4839_, 1);
lean_inc_ref(v_depIdxs_4843_);
lean_dec_ref(v_____x_4839_);
v_packages_4844_ = lean_ctor_get(v_ws_4842_, 4);
lean_inc_ref(v_packages_4844_);
v_ws_4795_ = v_ws_4842_;
v_packages_4796_ = v_packages_4844_;
v_depIdxs_4797_ = v_depIdxs_4843_;
v___y_4798_ = v___y_4840_;
v___y_4799_ = v___y_4841_;
goto v___jp_4794_;
}
v___jp_4847_:
{
lean_object* v___x_4851_; uint8_t v___x_4852_; 
v___x_4851_ = lean_array_get_size(v_packages_4849_);
v___x_4852_ = lean_nat_dec_le(v_start_4793_, v___x_4851_);
if (v___x_4852_ == 0)
{
lean_object* v___x_4853_; lean_object* v___x_4854_; 
lean_dec_ref(v_packages_4849_);
lean_dec_ref(v___x_4846_);
lean_dec(v_wsIdx_4771_);
v___x_4853_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_4854_ = lean_panic_fn_borrowed(v_ws_4848_, v___x_4853_);
lean_dec_ref(v_ws_4848_);
v___y_4764_ = v___y_4850_;
v___y_4765_ = v___x_4854_;
goto v___jp_4763_;
}
else
{
size_t v_sz_4855_; size_t v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; 
v_sz_4855_ = lean_array_size(v___x_4846_);
v___x_4856_ = ((size_t)0ULL);
v___x_4857_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_4849_, v_sz_4855_, v___x_4856_, v___x_4846_);
lean_dec_ref(v_packages_4849_);
v___x_4858_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_4848_, v_wsIdx_4771_, v___x_4857_);
lean_dec(v_wsIdx_4771_);
v___y_4764_ = v___y_4850_;
v___y_4765_ = v___x_4858_;
goto v___jp_4763_;
}
}
v___jp_4859_:
{
lean_object* v_packages_4862_; 
v_packages_4862_ = lean_ctor_get(v_ws_4860_, 4);
lean_inc_ref(v_packages_4862_);
v_ws_4848_ = v_ws_4860_;
v_packages_4849_ = v_packages_4862_;
v___y_4850_ = v___y_4861_;
goto v___jp_4847_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___redArg___boxed(lean_object* v___y_4931_, lean_object* v___x_4932_, lean_object* v_leanOpts_4933_, lean_object* v_reconfigure_4934_, lean_object* v_pkg_4935_, lean_object* v_a_4936_, lean_object* v___y_4937_, lean_object* v___y_4938_, lean_object* v___y_4939_){
_start:
{
uint8_t v_reconfigure_boxed_4940_; lean_object* v_res_4941_; 
v_reconfigure_boxed_4940_ = lean_unbox(v_reconfigure_4934_);
v_res_4941_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___redArg(v___y_4931_, v___x_4932_, v_leanOpts_4933_, v_reconfigure_boxed_4940_, v_pkg_4935_, v_a_4936_, v___y_4937_, v___y_4938_);
lean_dec_ref(v___y_4938_);
lean_dec(v___x_4932_);
return v_res_4941_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12(lean_object* v___y_4942_, lean_object* v___x_4943_, lean_object* v_leanOpts_4944_, uint8_t v_reconfigure_4945_, lean_object* v_pkg_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_){
_start:
{
lean_object* v___x_4952_; 
v___x_4952_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___redArg(v___y_4942_, v___x_4943_, v_leanOpts_4944_, v_reconfigure_4945_, v_pkg_4946_, v_a_4948_, v___y_4949_, v___y_4950_);
return v___x_4952_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___boxed(lean_object* v___y_4953_, lean_object* v___x_4954_, lean_object* v_leanOpts_4955_, lean_object* v_reconfigure_4956_, lean_object* v_pkg_4957_, lean_object* v_a_4958_, lean_object* v_a_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_){
_start:
{
uint8_t v_reconfigure_boxed_4963_; lean_object* v_res_4964_; 
v_reconfigure_boxed_4963_ = lean_unbox(v_reconfigure_4956_);
v_res_4964_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12(v___y_4953_, v___x_4954_, v_leanOpts_4955_, v_reconfigure_boxed_4963_, v_pkg_4957_, v_a_4958_, v_a_4959_, v___y_4960_, v___y_4961_);
lean_dec_ref(v___y_4961_);
lean_dec(v_a_4958_);
lean_dec(v___x_4954_);
return v_res_4964_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14(lean_object* v_00_u03b1_4965_, lean_object* v_cycle_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_){
_start:
{
lean_object* v___x_4972_; 
v___x_4972_ = l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14___redArg(v_cycle_4966_, v___y_4970_);
return v___x_4972_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14___boxed(lean_object* v_00_u03b1_4973_, lean_object* v_cycle_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_){
_start:
{
lean_object* v_res_4980_; 
v_res_4980_ = l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14(v_00_u03b1_4973_, v_cycle_4974_, v___y_4975_, v___y_4976_, v___y_4977_, v___y_4978_);
lean_dec_ref(v___y_4978_);
lean_dec(v___y_4977_);
lean_dec_ref(v___y_4976_);
lean_dec(v___y_4975_);
return v_res_4980_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15(lean_object* v_leanOpts_4981_, lean_object* v_inst_4982_, lean_object* v_a_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_){
_start:
{
lean_object* v___x_4989_; 
v___x_4989_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg(v_leanOpts_4981_, v_a_4983_, v___y_4984_, v___y_4985_, v___y_4986_, v___y_4987_);
return v___x_4989_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___boxed(lean_object* v_leanOpts_4990_, lean_object* v_inst_4991_, lean_object* v_a_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_, lean_object* v___y_4997_){
_start:
{
lean_object* v_res_4998_; 
v_res_4998_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15(v_leanOpts_4990_, v_inst_4991_, v_a_4992_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_);
lean_dec_ref(v___y_4996_);
lean_dec(v___y_4993_);
return v_res_4998_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26(lean_object* v_leanOpts_4999_, lean_object* v___x_5000_, lean_object* v_leanOpts_5001_, uint8_t v_reconfigure_5002_, lean_object* v_pkg_5003_, lean_object* v_a_5004_, lean_object* v_a_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_){
_start:
{
lean_object* v___x_5009_; 
v___x_5009_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26___redArg(v_leanOpts_4999_, v___x_5000_, v_leanOpts_5001_, v_reconfigure_5002_, v_pkg_5003_, v_a_5005_, v___y_5006_, v___y_5007_);
return v___x_5009_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26___boxed(lean_object* v_leanOpts_5010_, lean_object* v___x_5011_, lean_object* v_leanOpts_5012_, lean_object* v_reconfigure_5013_, lean_object* v_pkg_5014_, lean_object* v_a_5015_, lean_object* v_a_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_){
_start:
{
uint8_t v_reconfigure_boxed_5020_; lean_object* v_res_5021_; 
v_reconfigure_boxed_5020_ = lean_unbox(v_reconfigure_5013_);
v_res_5021_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__12___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15_spec__26(v_leanOpts_5010_, v___x_5011_, v_leanOpts_5012_, v_reconfigure_boxed_5020_, v_pkg_5014_, v_a_5015_, v_a_5016_, v___y_5017_, v___y_5018_);
lean_dec_ref(v___y_5018_);
lean_dec(v_a_5015_);
lean_dec(v___x_5011_);
return v_res_5021_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(lean_object* v_entries_5022_, lean_object* v_as_5023_, size_t v_i_5024_, size_t v_stop_5025_, lean_object* v_b_5026_){
_start:
{
lean_object* v___y_5028_; uint8_t v___x_5032_; 
v___x_5032_ = lean_usize_dec_eq(v_i_5024_, v_stop_5025_);
if (v___x_5032_ == 0)
{
lean_object* v___x_5033_; lean_object* v_baseName_5034_; lean_object* v_relConfigFile_5035_; lean_object* v_relManifestFile_5036_; lean_object* v___x_5037_; 
v___x_5033_ = lean_array_uget_borrowed(v_as_5023_, v_i_5024_);
v_baseName_5034_ = lean_ctor_get(v___x_5033_, 1);
v_relConfigFile_5035_ = lean_ctor_get(v___x_5033_, 8);
v_relManifestFile_5036_ = lean_ctor_get(v___x_5033_, 9);
v___x_5037_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_entries_5022_, v_baseName_5034_);
if (lean_obj_tag(v___x_5037_) == 0)
{
v___y_5028_ = v_b_5026_;
goto v___jp_5027_;
}
else
{
lean_object* v_val_5038_; lean_object* v___x_5040_; uint8_t v_isShared_5041_; uint8_t v_isSharedCheck_5059_; 
v_val_5038_ = lean_ctor_get(v___x_5037_, 0);
v_isSharedCheck_5059_ = !lean_is_exclusive(v___x_5037_);
if (v_isSharedCheck_5059_ == 0)
{
v___x_5040_ = v___x_5037_;
v_isShared_5041_ = v_isSharedCheck_5059_;
goto v_resetjp_5039_;
}
else
{
lean_inc(v_val_5038_);
lean_dec(v___x_5037_);
v___x_5040_ = lean_box(0);
v_isShared_5041_ = v_isSharedCheck_5059_;
goto v_resetjp_5039_;
}
v_resetjp_5039_:
{
lean_object* v_name_5042_; lean_object* v_scope_5043_; uint8_t v_inherited_5044_; lean_object* v_src_5045_; lean_object* v___x_5047_; uint8_t v_isShared_5048_; uint8_t v_isSharedCheck_5056_; 
v_name_5042_ = lean_ctor_get(v_val_5038_, 0);
v_scope_5043_ = lean_ctor_get(v_val_5038_, 1);
v_inherited_5044_ = lean_ctor_get_uint8(v_val_5038_, sizeof(void*)*5);
v_src_5045_ = lean_ctor_get(v_val_5038_, 4);
v_isSharedCheck_5056_ = !lean_is_exclusive(v_val_5038_);
if (v_isSharedCheck_5056_ == 0)
{
lean_object* v_unused_5057_; lean_object* v_unused_5058_; 
v_unused_5057_ = lean_ctor_get(v_val_5038_, 3);
lean_dec(v_unused_5057_);
v_unused_5058_ = lean_ctor_get(v_val_5038_, 2);
lean_dec(v_unused_5058_);
v___x_5047_ = v_val_5038_;
v_isShared_5048_ = v_isSharedCheck_5056_;
goto v_resetjp_5046_;
}
else
{
lean_inc(v_src_5045_);
lean_inc(v_scope_5043_);
lean_inc(v_name_5042_);
lean_dec(v_val_5038_);
v___x_5047_ = lean_box(0);
v_isShared_5048_ = v_isSharedCheck_5056_;
goto v_resetjp_5046_;
}
v_resetjp_5046_:
{
lean_object* v___x_5050_; 
lean_inc_ref(v_relManifestFile_5036_);
if (v_isShared_5041_ == 0)
{
lean_ctor_set(v___x_5040_, 0, v_relManifestFile_5036_);
v___x_5050_ = v___x_5040_;
goto v_reusejp_5049_;
}
else
{
lean_object* v_reuseFailAlloc_5055_; 
v_reuseFailAlloc_5055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5055_, 0, v_relManifestFile_5036_);
v___x_5050_ = v_reuseFailAlloc_5055_;
goto v_reusejp_5049_;
}
v_reusejp_5049_:
{
lean_object* v___x_5052_; 
lean_inc_ref(v_relConfigFile_5035_);
if (v_isShared_5048_ == 0)
{
lean_ctor_set(v___x_5047_, 3, v___x_5050_);
lean_ctor_set(v___x_5047_, 2, v_relConfigFile_5035_);
v___x_5052_ = v___x_5047_;
goto v_reusejp_5051_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v_name_5042_);
lean_ctor_set(v_reuseFailAlloc_5054_, 1, v_scope_5043_);
lean_ctor_set(v_reuseFailAlloc_5054_, 2, v_relConfigFile_5035_);
lean_ctor_set(v_reuseFailAlloc_5054_, 3, v___x_5050_);
lean_ctor_set(v_reuseFailAlloc_5054_, 4, v_src_5045_);
lean_ctor_set_uint8(v_reuseFailAlloc_5054_, sizeof(void*)*5, v_inherited_5044_);
v___x_5052_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5051_;
}
v_reusejp_5051_:
{
lean_object* v___x_5053_; 
v___x_5053_ = lean_array_push(v_b_5026_, v___x_5052_);
v___y_5028_ = v___x_5053_;
goto v___jp_5027_;
}
}
}
}
}
}
else
{
return v_b_5026_;
}
v___jp_5027_:
{
size_t v___x_5029_; size_t v___x_5030_; 
v___x_5029_ = ((size_t)1ULL);
v___x_5030_ = lean_usize_add(v_i_5024_, v___x_5029_);
v_i_5024_ = v___x_5030_;
v_b_5026_ = v___y_5028_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0___boxed(lean_object* v_entries_5060_, lean_object* v_as_5061_, lean_object* v_i_5062_, lean_object* v_stop_5063_, lean_object* v_b_5064_){
_start:
{
size_t v_i_boxed_5065_; size_t v_stop_boxed_5066_; lean_object* v_res_5067_; 
v_i_boxed_5065_ = lean_unbox_usize(v_i_5062_);
lean_dec(v_i_5062_);
v_stop_boxed_5066_ = lean_unbox_usize(v_stop_5063_);
lean_dec(v_stop_5063_);
v_res_5067_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_5060_, v_as_5061_, v_i_boxed_5065_, v_stop_boxed_5066_, v_b_5064_);
lean_dec_ref(v_as_5061_);
lean_dec(v_entries_5060_);
return v_res_5067_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(lean_object* v_ws_5068_, lean_object* v_entries_5069_){
_start:
{
lean_object* v_packages_5071_; lean_object* v___y_5073_; lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; uint8_t v___x_5091_; 
v_packages_5071_ = lean_ctor_get(v_ws_5068_, 4);
v___x_5088_ = lean_unsigned_to_nat(0u);
v___x_5089_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_5090_ = lean_array_get_size(v_packages_5071_);
v___x_5091_ = lean_nat_dec_lt(v___x_5088_, v___x_5090_);
if (v___x_5091_ == 0)
{
v___y_5073_ = v___x_5089_;
goto v___jp_5072_;
}
else
{
uint8_t v___x_5092_; 
v___x_5092_ = lean_nat_dec_le(v___x_5090_, v___x_5090_);
if (v___x_5092_ == 0)
{
if (v___x_5091_ == 0)
{
v___y_5073_ = v___x_5089_;
goto v___jp_5072_;
}
else
{
size_t v___x_5093_; size_t v___x_5094_; lean_object* v___x_5095_; 
v___x_5093_ = ((size_t)0ULL);
v___x_5094_ = lean_usize_of_nat(v___x_5090_);
v___x_5095_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_5069_, v_packages_5071_, v___x_5093_, v___x_5094_, v___x_5089_);
v___y_5073_ = v___x_5095_;
goto v___jp_5072_;
}
}
else
{
size_t v___x_5096_; size_t v___x_5097_; lean_object* v___x_5098_; 
v___x_5096_ = ((size_t)0ULL);
v___x_5097_ = lean_usize_of_nat(v___x_5090_);
v___x_5098_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_5069_, v_packages_5071_, v___x_5096_, v___x_5097_, v___x_5089_);
v___y_5073_ = v___x_5098_;
goto v___jp_5072_;
}
}
v___jp_5072_:
{
lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v_config_5076_; lean_object* v_baseName_5077_; lean_object* v_dir_5078_; lean_object* v_relManifestFile_5079_; lean_object* v_toWorkspaceConfig_5080_; uint8_t v_fixedToolchain_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v_manifest_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; 
v___x_5074_ = lean_unsigned_to_nat(0u);
v___x_5075_ = lean_array_fget_borrowed(v_packages_5071_, v___x_5074_);
v_config_5076_ = lean_ctor_get(v___x_5075_, 6);
v_baseName_5077_ = lean_ctor_get(v___x_5075_, 1);
v_dir_5078_ = lean_ctor_get(v___x_5075_, 4);
v_relManifestFile_5079_ = lean_ctor_get(v___x_5075_, 9);
v_toWorkspaceConfig_5080_ = lean_ctor_get(v_config_5076_, 0);
v_fixedToolchain_5081_ = lean_ctor_get_uint8(v_config_5076_, sizeof(void*)*26 + 6);
v___x_5082_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_toWorkspaceConfig_5080_);
v___x_5083_ = l_System_FilePath_normalize(v_toWorkspaceConfig_5080_);
v___x_5084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5084_, 0, v___x_5083_);
lean_inc(v_baseName_5077_);
v_manifest_5085_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_manifest_5085_, 0, v_baseName_5077_);
lean_ctor_set(v_manifest_5085_, 1, v___x_5082_);
lean_ctor_set(v_manifest_5085_, 2, v___x_5084_);
lean_ctor_set(v_manifest_5085_, 3, v___y_5073_);
lean_ctor_set_uint8(v_manifest_5085_, sizeof(void*)*4, v_fixedToolchain_5081_);
lean_inc_ref(v_relManifestFile_5079_);
lean_inc_ref(v_dir_5078_);
v___x_5086_ = l_Lake_joinRelative(v_dir_5078_, v_relManifestFile_5079_);
v___x_5087_ = l_Lake_Manifest_save(v_manifest_5085_, v___x_5086_);
lean_dec_ref(v___x_5086_);
return v___x_5087_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest___boxed(lean_object* v_ws_5099_, lean_object* v_entries_5100_, lean_object* v_a_5101_){
_start:
{
lean_object* v_res_5102_; 
v_res_5102_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(v_ws_5099_, v_entries_5100_);
lean_dec(v_entries_5100_);
lean_dec_ref(v_ws_5099_);
return v_res_5102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(lean_object* v_pkg_5103_, lean_object* v_as_5104_, size_t v_i_5105_, size_t v_stop_5106_, lean_object* v_b_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_){
_start:
{
lean_object* v_a_5112_; lean_object* v___y_5117_; uint8_t v___x_5122_; 
v___x_5122_ = lean_usize_dec_eq(v_i_5105_, v_stop_5106_);
if (v___x_5122_ == 0)
{
lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_9317__overap_5125_; lean_object* v___x_5126_; 
v___x_5123_ = lean_unsigned_to_nat(0u);
v___x_5124_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_9317__overap_5125_ = lean_array_uget_borrowed(v_as_5104_, v_i_5105_);
lean_inc(v___x_9317__overap_5125_);
lean_inc(v___y_5108_);
lean_inc_ref(v_pkg_5103_);
v___x_5126_ = lean_apply_4(v___x_9317__overap_5125_, v_pkg_5103_, v___y_5108_, v___x_5124_, lean_box(0));
if (lean_obj_tag(v___x_5126_) == 0)
{
lean_object* v_a_5127_; lean_object* v_a_5128_; lean_object* v___x_5129_; uint8_t v___x_5130_; 
v_a_5127_ = lean_ctor_get(v___x_5126_, 0);
lean_inc(v_a_5127_);
v_a_5128_ = lean_ctor_get(v___x_5126_, 1);
lean_inc(v_a_5128_);
lean_dec_ref(v___x_5126_);
v___x_5129_ = lean_array_get_size(v_a_5128_);
v___x_5130_ = lean_nat_dec_lt(v___x_5123_, v___x_5129_);
if (v___x_5130_ == 0)
{
lean_dec(v_a_5128_);
v_a_5112_ = v_a_5127_;
goto v___jp_5111_;
}
else
{
lean_object* v___x_5131_; uint8_t v___x_5132_; 
v___x_5131_ = lean_box(0);
v___x_5132_ = lean_nat_dec_le(v___x_5129_, v___x_5129_);
if (v___x_5132_ == 0)
{
if (v___x_5130_ == 0)
{
lean_dec(v_a_5128_);
v_a_5112_ = v_a_5127_;
goto v___jp_5111_;
}
else
{
size_t v___x_5133_; size_t v___x_5134_; lean_object* v___x_5135_; 
v___x_5133_ = ((size_t)0ULL);
v___x_5134_ = lean_usize_of_nat(v___x_5129_);
v___x_5135_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_5128_, v___x_5133_, v___x_5134_, v___x_5131_, v___y_5109_);
lean_dec(v_a_5128_);
if (lean_obj_tag(v___x_5135_) == 0)
{
lean_dec_ref(v___x_5135_);
v_a_5112_ = v_a_5127_;
goto v___jp_5111_;
}
else
{
lean_dec(v_a_5127_);
v___y_5117_ = v___x_5135_;
goto v___jp_5116_;
}
}
}
else
{
size_t v___x_5136_; size_t v___x_5137_; lean_object* v___x_5138_; 
v___x_5136_ = ((size_t)0ULL);
v___x_5137_ = lean_usize_of_nat(v___x_5129_);
v___x_5138_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_5128_, v___x_5136_, v___x_5137_, v___x_5131_, v___y_5109_);
lean_dec(v_a_5128_);
if (lean_obj_tag(v___x_5138_) == 0)
{
lean_dec_ref(v___x_5138_);
v_a_5112_ = v_a_5127_;
goto v___jp_5111_;
}
else
{
lean_dec(v_a_5127_);
v___y_5117_ = v___x_5138_;
goto v___jp_5116_;
}
}
}
}
else
{
lean_object* v_a_5139_; lean_object* v___x_5140_; uint8_t v___x_5141_; 
v_a_5139_ = lean_ctor_get(v___x_5126_, 1);
lean_inc(v_a_5139_);
lean_dec_ref(v___x_5126_);
v___x_5140_ = lean_array_get_size(v_a_5139_);
v___x_5141_ = lean_nat_dec_lt(v___x_5123_, v___x_5140_);
if (v___x_5141_ == 0)
{
lean_object* v___x_5142_; lean_object* v___x_5143_; 
lean_dec(v_a_5139_);
lean_dec_ref(v_pkg_5103_);
v___x_5142_ = lean_box(0);
v___x_5143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5143_, 0, v___x_5142_);
return v___x_5143_;
}
else
{
lean_object* v___x_5144_; uint8_t v___x_5145_; 
v___x_5144_ = lean_box(0);
v___x_5145_ = lean_nat_dec_le(v___x_5140_, v___x_5140_);
if (v___x_5145_ == 0)
{
if (v___x_5141_ == 0)
{
lean_dec(v_a_5139_);
lean_dec_ref(v_pkg_5103_);
goto v___jp_5119_;
}
else
{
size_t v___x_5146_; size_t v___x_5147_; lean_object* v___x_5148_; 
v___x_5146_ = ((size_t)0ULL);
v___x_5147_ = lean_usize_of_nat(v___x_5140_);
v___x_5148_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_5139_, v___x_5146_, v___x_5147_, v___x_5144_, v___y_5109_);
lean_dec(v_a_5139_);
if (lean_obj_tag(v___x_5148_) == 0)
{
lean_dec_ref(v___x_5148_);
lean_dec_ref(v_pkg_5103_);
goto v___jp_5119_;
}
else
{
v___y_5117_ = v___x_5148_;
goto v___jp_5116_;
}
}
}
else
{
size_t v___x_5149_; size_t v___x_5150_; lean_object* v___x_5151_; 
v___x_5149_ = ((size_t)0ULL);
v___x_5150_ = lean_usize_of_nat(v___x_5140_);
v___x_5151_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_5139_, v___x_5149_, v___x_5150_, v___x_5144_, v___y_5109_);
lean_dec(v_a_5139_);
if (lean_obj_tag(v___x_5151_) == 0)
{
lean_dec_ref(v___x_5151_);
lean_dec_ref(v_pkg_5103_);
goto v___jp_5119_;
}
else
{
v___y_5117_ = v___x_5151_;
goto v___jp_5116_;
}
}
}
}
}
else
{
lean_object* v___x_5152_; 
lean_dec_ref(v_pkg_5103_);
v___x_5152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5152_, 0, v_b_5107_);
return v___x_5152_;
}
v___jp_5111_:
{
size_t v___x_5113_; size_t v___x_5114_; 
v___x_5113_ = ((size_t)1ULL);
v___x_5114_ = lean_usize_add(v_i_5105_, v___x_5113_);
v_i_5105_ = v___x_5114_;
v_b_5107_ = v_a_5112_;
goto _start;
}
v___jp_5116_:
{
if (lean_obj_tag(v___y_5117_) == 0)
{
lean_object* v_a_5118_; 
v_a_5118_ = lean_ctor_get(v___y_5117_, 0);
lean_inc(v_a_5118_);
lean_dec_ref(v___y_5117_);
v_a_5112_ = v_a_5118_;
goto v___jp_5111_;
}
else
{
lean_dec_ref(v_pkg_5103_);
return v___y_5117_;
}
}
v___jp_5119_:
{
lean_object* v___x_5120_; lean_object* v___x_5121_; 
v___x_5120_ = lean_box(0);
v___x_5121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5121_, 0, v___x_5120_);
return v___x_5121_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0___boxed(lean_object* v_pkg_5153_, lean_object* v_as_5154_, lean_object* v_i_5155_, lean_object* v_stop_5156_, lean_object* v_b_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_){
_start:
{
size_t v_i_boxed_5161_; size_t v_stop_boxed_5162_; lean_object* v_res_5163_; 
v_i_boxed_5161_ = lean_unbox_usize(v_i_5155_);
lean_dec(v_i_5155_);
v_stop_boxed_5162_ = lean_unbox_usize(v_stop_5156_);
lean_dec(v_stop_5156_);
v_res_5163_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_5153_, v_as_5154_, v_i_boxed_5161_, v_stop_boxed_5162_, v_b_5157_, v___y_5158_, v___y_5159_);
lean_dec_ref(v___y_5159_);
lean_dec(v___y_5158_);
lean_dec_ref(v_as_5154_);
return v_res_5163_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(lean_object* v_pkg_5165_, lean_object* v_a_5166_, lean_object* v_a_5167_){
_start:
{
lean_object* v_baseName_5169_; lean_object* v_postUpdateHooks_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; uint8_t v___x_5173_; 
v_baseName_5169_ = lean_ctor_get(v_pkg_5165_, 1);
v_postUpdateHooks_5170_ = lean_ctor_get(v_pkg_5165_, 19);
lean_inc_ref(v_postUpdateHooks_5170_);
v___x_5171_ = lean_array_get_size(v_postUpdateHooks_5170_);
v___x_5172_ = lean_unsigned_to_nat(0u);
v___x_5173_ = lean_nat_dec_eq(v___x_5171_, v___x_5172_);
if (v___x_5173_ == 0)
{
lean_object* v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; uint8_t v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; uint8_t v___x_5181_; 
lean_inc(v_baseName_5169_);
v___x_5174_ = l_Lean_Name_toString(v_baseName_5169_, v___x_5173_);
v___x_5175_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0));
v___x_5176_ = lean_string_append(v___x_5174_, v___x_5175_);
v___x_5177_ = 1;
v___x_5178_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5178_, 0, v___x_5176_);
lean_ctor_set_uint8(v___x_5178_, sizeof(void*)*1, v___x_5177_);
lean_inc_ref(v_a_5167_);
v___x_5179_ = lean_apply_2(v_a_5167_, v___x_5178_, lean_box(0));
v___x_5180_ = lean_box(0);
v___x_5181_ = lean_nat_dec_lt(v___x_5172_, v___x_5171_);
if (v___x_5181_ == 0)
{
lean_object* v___x_5182_; 
lean_dec_ref(v_postUpdateHooks_5170_);
lean_dec_ref(v_pkg_5165_);
v___x_5182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5182_, 0, v___x_5180_);
return v___x_5182_;
}
else
{
uint8_t v___x_5183_; 
v___x_5183_ = lean_nat_dec_le(v___x_5171_, v___x_5171_);
if (v___x_5183_ == 0)
{
if (v___x_5181_ == 0)
{
lean_object* v___x_5184_; 
lean_dec_ref(v_postUpdateHooks_5170_);
lean_dec_ref(v_pkg_5165_);
v___x_5184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5184_, 0, v___x_5180_);
return v___x_5184_;
}
else
{
size_t v___x_5185_; size_t v___x_5186_; lean_object* v___x_5187_; 
v___x_5185_ = ((size_t)0ULL);
v___x_5186_ = lean_usize_of_nat(v___x_5171_);
v___x_5187_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_5165_, v_postUpdateHooks_5170_, v___x_5185_, v___x_5186_, v___x_5180_, v_a_5166_, v_a_5167_);
lean_dec_ref(v_postUpdateHooks_5170_);
return v___x_5187_;
}
}
else
{
size_t v___x_5188_; size_t v___x_5189_; lean_object* v___x_5190_; 
v___x_5188_ = ((size_t)0ULL);
v___x_5189_ = lean_usize_of_nat(v___x_5171_);
v___x_5190_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_5165_, v_postUpdateHooks_5170_, v___x_5188_, v___x_5189_, v___x_5180_, v_a_5166_, v_a_5167_);
lean_dec_ref(v_postUpdateHooks_5170_);
return v___x_5190_;
}
}
}
else
{
lean_object* v___x_5191_; lean_object* v___x_5192_; 
lean_dec_ref(v_postUpdateHooks_5170_);
lean_dec_ref(v_pkg_5165_);
v___x_5191_ = lean_box(0);
v___x_5192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5192_, 0, v___x_5191_);
return v___x_5192_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___boxed(lean_object* v_pkg_5193_, lean_object* v_a_5194_, lean_object* v_a_5195_, lean_object* v_a_5196_){
_start:
{
lean_object* v_res_5197_; 
v_res_5197_ = l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(v_pkg_5193_, v_a_5194_, v_a_5195_);
lean_dec_ref(v_a_5195_);
lean_dec(v_a_5194_);
return v_res_5197_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(lean_object* v_a_5198_, lean_object* v_ws_5199_, lean_object* v_toUpdate_5200_, lean_object* v_leanOpts_5201_, uint8_t v_updateToolchain_5202_){
_start:
{
lean_object* v___x_5204_; lean_object* v___x_5205_; 
v___x_5204_ = lean_box(1);
v___x_5205_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_5198_, v_ws_5199_, v_toUpdate_5200_, v___x_5204_);
if (lean_obj_tag(v___x_5205_) == 0)
{
lean_object* v_a_5206_; lean_object* v___x_5208_; uint8_t v_isShared_5209_; uint8_t v_isSharedCheck_5303_; 
v_a_5206_ = lean_ctor_get(v___x_5205_, 0);
v_isSharedCheck_5303_ = !lean_is_exclusive(v___x_5205_);
if (v_isSharedCheck_5303_ == 0)
{
v___x_5208_ = v___x_5205_;
v_isShared_5209_ = v_isSharedCheck_5303_;
goto v_resetjp_5207_;
}
else
{
lean_inc(v_a_5206_);
lean_dec(v___x_5205_);
v___x_5208_ = lean_box(0);
v_isShared_5209_ = v_isSharedCheck_5303_;
goto v_resetjp_5207_;
}
v_resetjp_5207_:
{
if (v_updateToolchain_5202_ == 0)
{
lean_object* v_snd_5210_; lean_object* v_packages_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; 
lean_del_object(v___x_5208_);
v_snd_5210_ = lean_ctor_get(v_a_5206_, 1);
lean_inc(v_snd_5210_);
lean_dec(v_a_5206_);
v_packages_5211_ = lean_ctor_get(v_ws_5199_, 4);
v___x_5212_ = lean_unsigned_to_nat(0u);
v___x_5213_ = lean_array_fget(v_packages_5211_, v___x_5212_);
v___x_5214_ = lean_box(0);
v___x_5215_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(v_leanOpts_5201_, v_ws_5199_, v___x_5213_, v___x_5214_, v_snd_5210_, v_a_5198_);
return v___x_5215_;
}
else
{
lean_object* v_snd_5216_; lean_object* v___x_5218_; uint8_t v_isShared_5219_; uint8_t v_isSharedCheck_5301_; 
v_snd_5216_ = lean_ctor_get(v_a_5206_, 1);
v_isSharedCheck_5301_ = !lean_is_exclusive(v_a_5206_);
if (v_isSharedCheck_5301_ == 0)
{
lean_object* v_unused_5302_; 
v_unused_5302_ = lean_ctor_get(v_a_5206_, 0);
lean_dec(v_unused_5302_);
v___x_5218_ = v_a_5206_;
v_isShared_5219_ = v_isSharedCheck_5301_;
goto v_resetjp_5217_;
}
else
{
lean_inc(v_snd_5216_);
lean_dec(v_a_5206_);
v___x_5218_ = lean_box(0);
v_isShared_5219_ = v_isSharedCheck_5301_;
goto v_resetjp_5217_;
}
v_resetjp_5217_:
{
lean_object* v_packages_5220_; lean_object* v___x_5221_; lean_object* v___y_5223_; lean_object* v___y_5224_; lean_object* v_fst_5225_; lean_object* v_packages_5226_; lean_object* v_snd_5227_; lean_object* v___y_5240_; lean_object* v___y_5241_; lean_object* v___y_5242_; lean_object* v_fst_5248_; lean_object* v_packages_5249_; lean_object* v_snd_5250_; lean_object* v___y_5262_; lean_object* v___x_5267_; lean_object* v_depConfigs_5268_; lean_object* v___x_5269_; size_t v_sz_5270_; size_t v___x_5271_; lean_object* v___x_5272_; 
v_packages_5220_ = lean_ctor_get(v_ws_5199_, 4);
lean_inc_ref(v_packages_5220_);
v___x_5221_ = lean_unsigned_to_nat(0u);
v___x_5267_ = lean_array_fget_borrowed(v_packages_5220_, v___x_5221_);
v_depConfigs_5268_ = lean_ctor_get(v___x_5267_, 12);
lean_inc_ref(v_depConfigs_5268_);
v___x_5269_ = l_Array_reverse___redArg(v_depConfigs_5268_);
v_sz_5270_ = lean_array_size(v___x_5269_);
v___x_5271_ = ((size_t)0ULL);
lean_inc_ref(v___x_5269_);
lean_inc_ref(v_ws_5199_);
lean_inc(v___x_5267_);
v___x_5272_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(v___x_5267_, v_updateToolchain_5202_, v_ws_5199_, v_sz_5270_, v___x_5271_, v___x_5269_, v_snd_5216_, v_a_5198_);
if (lean_obj_tag(v___x_5272_) == 0)
{
lean_object* v_a_5273_; lean_object* v_fst_5274_; lean_object* v_snd_5275_; lean_object* v___x_5276_; 
v_a_5273_ = lean_ctor_get(v___x_5272_, 0);
lean_inc(v_a_5273_);
lean_dec_ref(v___x_5272_);
v_fst_5274_ = lean_ctor_get(v_a_5273_, 0);
lean_inc(v_fst_5274_);
v_snd_5275_ = lean_ctor_get(v_a_5273_, 1);
lean_inc(v_snd_5275_);
lean_dec(v_a_5273_);
lean_inc_ref(v_ws_5199_);
v___x_5276_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8(v_a_5198_, v_ws_5199_, v_fst_5274_);
if (lean_obj_tag(v___x_5276_) == 0)
{
lean_object* v___x_5277_; lean_object* v___x_5278_; uint8_t v___x_5279_; 
lean_dec_ref(v___x_5276_);
v___x_5277_ = l_Array_zip___redArg(v___x_5269_, v_fst_5274_);
lean_dec(v_fst_5274_);
lean_dec_ref(v___x_5269_);
v___x_5278_ = lean_array_get_size(v___x_5277_);
v___x_5279_ = lean_nat_dec_lt(v___x_5221_, v___x_5278_);
if (v___x_5279_ == 0)
{
lean_dec_ref(v___x_5277_);
lean_inc_ref(v_packages_5220_);
v_fst_5248_ = v_ws_5199_;
v_packages_5249_ = v_packages_5220_;
v_snd_5250_ = v_snd_5275_;
goto v___jp_5247_;
}
else
{
uint8_t v___x_5280_; 
v___x_5280_ = lean_nat_dec_le(v___x_5278_, v___x_5278_);
if (v___x_5280_ == 0)
{
if (v___x_5279_ == 0)
{
lean_dec_ref(v___x_5277_);
lean_inc_ref(v_packages_5220_);
v_fst_5248_ = v_ws_5199_;
v_packages_5249_ = v_packages_5220_;
v_snd_5250_ = v_snd_5275_;
goto v___jp_5247_;
}
else
{
size_t v___x_5281_; lean_object* v___x_5282_; 
v___x_5281_ = lean_usize_of_nat(v___x_5278_);
lean_inc_ref(v_leanOpts_5201_);
v___x_5282_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__10(v_leanOpts_5201_, v___x_5277_, v___x_5271_, v___x_5281_, v_ws_5199_, v_snd_5275_, v_a_5198_);
lean_dec_ref(v___x_5277_);
v___y_5262_ = v___x_5282_;
goto v___jp_5261_;
}
}
else
{
size_t v___x_5283_; lean_object* v___x_5284_; 
v___x_5283_ = lean_usize_of_nat(v___x_5278_);
lean_inc_ref(v_leanOpts_5201_);
v___x_5284_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__10(v_leanOpts_5201_, v___x_5277_, v___x_5271_, v___x_5283_, v_ws_5199_, v_snd_5275_, v_a_5198_);
lean_dec_ref(v___x_5277_);
v___y_5262_ = v___x_5284_;
goto v___jp_5261_;
}
}
}
else
{
lean_object* v_a_5285_; lean_object* v___x_5287_; uint8_t v_isShared_5288_; uint8_t v_isSharedCheck_5292_; 
lean_dec(v_snd_5275_);
lean_dec(v_fst_5274_);
lean_dec_ref(v___x_5269_);
lean_dec_ref(v_packages_5220_);
lean_del_object(v___x_5218_);
lean_del_object(v___x_5208_);
lean_dec_ref(v_leanOpts_5201_);
lean_dec_ref(v_ws_5199_);
v_a_5285_ = lean_ctor_get(v___x_5276_, 0);
v_isSharedCheck_5292_ = !lean_is_exclusive(v___x_5276_);
if (v_isSharedCheck_5292_ == 0)
{
v___x_5287_ = v___x_5276_;
v_isShared_5288_ = v_isSharedCheck_5292_;
goto v_resetjp_5286_;
}
else
{
lean_inc(v_a_5285_);
lean_dec(v___x_5276_);
v___x_5287_ = lean_box(0);
v_isShared_5288_ = v_isSharedCheck_5292_;
goto v_resetjp_5286_;
}
v_resetjp_5286_:
{
lean_object* v___x_5290_; 
if (v_isShared_5288_ == 0)
{
v___x_5290_ = v___x_5287_;
goto v_reusejp_5289_;
}
else
{
lean_object* v_reuseFailAlloc_5291_; 
v_reuseFailAlloc_5291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5291_, 0, v_a_5285_);
v___x_5290_ = v_reuseFailAlloc_5291_;
goto v_reusejp_5289_;
}
v_reusejp_5289_:
{
return v___x_5290_;
}
}
}
}
else
{
lean_object* v_a_5293_; lean_object* v___x_5295_; uint8_t v_isShared_5296_; uint8_t v_isSharedCheck_5300_; 
lean_dec_ref(v___x_5269_);
lean_dec_ref(v_packages_5220_);
lean_del_object(v___x_5218_);
lean_del_object(v___x_5208_);
lean_dec_ref(v_leanOpts_5201_);
lean_dec_ref(v_ws_5199_);
v_a_5293_ = lean_ctor_get(v___x_5272_, 0);
v_isSharedCheck_5300_ = !lean_is_exclusive(v___x_5272_);
if (v_isSharedCheck_5300_ == 0)
{
v___x_5295_ = v___x_5272_;
v_isShared_5296_ = v_isSharedCheck_5300_;
goto v_resetjp_5294_;
}
else
{
lean_inc(v_a_5293_);
lean_dec(v___x_5272_);
v___x_5295_ = lean_box(0);
v_isShared_5296_ = v_isSharedCheck_5300_;
goto v_resetjp_5294_;
}
v_resetjp_5294_:
{
lean_object* v___x_5298_; 
if (v_isShared_5296_ == 0)
{
v___x_5298_ = v___x_5295_;
goto v_reusejp_5297_;
}
else
{
lean_object* v_reuseFailAlloc_5299_; 
v_reuseFailAlloc_5299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5299_, 0, v_a_5293_);
v___x_5298_ = v_reuseFailAlloc_5299_;
goto v_reusejp_5297_;
}
v_reusejp_5297_:
{
return v___x_5298_;
}
}
}
v___jp_5222_:
{
lean_object* v___x_5228_; lean_object* v_wsIdx_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5234_; 
v___x_5228_ = lean_array_fget_borrowed(v_packages_5226_, v___x_5221_);
v_wsIdx_5229_ = lean_ctor_get(v___x_5228_, 0);
lean_inc(v_wsIdx_5229_);
v___x_5230_ = l_Array_toSubarray___redArg(v_packages_5226_, v___y_5223_, v___y_5224_);
v___x_5231_ = l_Subarray_copy___redArg(v___x_5230_);
v___x_5232_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_fst_5225_, v_wsIdx_5229_, v___x_5231_);
lean_dec(v_wsIdx_5229_);
if (v_isShared_5219_ == 0)
{
lean_ctor_set(v___x_5218_, 1, v_snd_5227_);
lean_ctor_set(v___x_5218_, 0, v___x_5232_);
v___x_5234_ = v___x_5218_;
goto v_reusejp_5233_;
}
else
{
lean_object* v_reuseFailAlloc_5238_; 
v_reuseFailAlloc_5238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5238_, 0, v___x_5232_);
lean_ctor_set(v_reuseFailAlloc_5238_, 1, v_snd_5227_);
v___x_5234_ = v_reuseFailAlloc_5238_;
goto v_reusejp_5233_;
}
v_reusejp_5233_:
{
lean_object* v___x_5236_; 
if (v_isShared_5209_ == 0)
{
lean_ctor_set(v___x_5208_, 0, v___x_5234_);
v___x_5236_ = v___x_5208_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v___x_5234_);
v___x_5236_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
return v___x_5236_;
}
}
}
v___jp_5239_:
{
if (lean_obj_tag(v___y_5242_) == 0)
{
lean_object* v_a_5243_; lean_object* v_fst_5244_; lean_object* v_snd_5245_; lean_object* v_packages_5246_; 
v_a_5243_ = lean_ctor_get(v___y_5242_, 0);
lean_inc(v_a_5243_);
lean_dec_ref(v___y_5242_);
v_fst_5244_ = lean_ctor_get(v_a_5243_, 0);
lean_inc(v_fst_5244_);
v_snd_5245_ = lean_ctor_get(v_a_5243_, 1);
lean_inc(v_snd_5245_);
lean_dec(v_a_5243_);
v_packages_5246_ = lean_ctor_get(v_fst_5244_, 4);
lean_inc_ref(v_packages_5246_);
v___y_5223_ = v___y_5240_;
v___y_5224_ = v___y_5241_;
v_fst_5225_ = v_fst_5244_;
v_packages_5226_ = v_packages_5246_;
v_snd_5227_ = v_snd_5245_;
goto v___jp_5222_;
}
else
{
lean_dec(v___y_5241_);
lean_dec(v___y_5240_);
lean_del_object(v___x_5218_);
lean_del_object(v___x_5208_);
return v___y_5242_;
}
}
v___jp_5247_:
{
lean_object* v___x_5251_; lean_object* v___x_5252_; uint8_t v___x_5253_; 
v___x_5251_ = lean_array_get_size(v_packages_5220_);
lean_dec_ref(v_packages_5220_);
v___x_5252_ = lean_array_get_size(v_packages_5249_);
v___x_5253_ = lean_nat_dec_lt(v___x_5251_, v___x_5252_);
if (v___x_5253_ == 0)
{
lean_dec_ref(v_leanOpts_5201_);
v___y_5223_ = v___x_5251_;
v___y_5224_ = v___x_5252_;
v_fst_5225_ = v_fst_5248_;
v_packages_5226_ = v_packages_5249_;
v_snd_5227_ = v_snd_5250_;
goto v___jp_5222_;
}
else
{
uint8_t v___x_5254_; 
v___x_5254_ = lean_nat_dec_le(v___x_5252_, v___x_5252_);
if (v___x_5254_ == 0)
{
if (v___x_5253_ == 0)
{
lean_dec_ref(v_leanOpts_5201_);
v___y_5223_ = v___x_5251_;
v___y_5224_ = v___x_5252_;
v_fst_5225_ = v_fst_5248_;
v_packages_5226_ = v_packages_5249_;
v_snd_5227_ = v_snd_5250_;
goto v___jp_5222_;
}
else
{
size_t v___x_5255_; size_t v___x_5256_; lean_object* v___x_5257_; 
v___x_5255_ = lean_usize_of_nat(v___x_5251_);
v___x_5256_ = lean_usize_of_nat(v___x_5252_);
v___x_5257_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(v_leanOpts_5201_, v_packages_5249_, v___x_5255_, v___x_5256_, v_fst_5248_, v_snd_5250_, v_a_5198_);
lean_dec_ref(v_packages_5249_);
v___y_5240_ = v___x_5251_;
v___y_5241_ = v___x_5252_;
v___y_5242_ = v___x_5257_;
goto v___jp_5239_;
}
}
else
{
size_t v___x_5258_; size_t v___x_5259_; lean_object* v___x_5260_; 
v___x_5258_ = lean_usize_of_nat(v___x_5251_);
v___x_5259_ = lean_usize_of_nat(v___x_5252_);
v___x_5260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(v_leanOpts_5201_, v_packages_5249_, v___x_5258_, v___x_5259_, v_fst_5248_, v_snd_5250_, v_a_5198_);
lean_dec_ref(v_packages_5249_);
v___y_5240_ = v___x_5251_;
v___y_5241_ = v___x_5252_;
v___y_5242_ = v___x_5260_;
goto v___jp_5239_;
}
}
}
v___jp_5261_:
{
if (lean_obj_tag(v___y_5262_) == 0)
{
lean_object* v_a_5263_; lean_object* v_fst_5264_; lean_object* v_snd_5265_; lean_object* v_packages_5266_; 
v_a_5263_ = lean_ctor_get(v___y_5262_, 0);
lean_inc(v_a_5263_);
lean_dec_ref(v___y_5262_);
v_fst_5264_ = lean_ctor_get(v_a_5263_, 0);
lean_inc(v_fst_5264_);
v_snd_5265_ = lean_ctor_get(v_a_5263_, 1);
lean_inc(v_snd_5265_);
lean_dec(v_a_5263_);
v_packages_5266_ = lean_ctor_get(v_fst_5264_, 4);
lean_inc_ref(v_packages_5266_);
v_fst_5248_ = v_fst_5264_;
v_packages_5249_ = v_packages_5266_;
v_snd_5250_ = v_snd_5265_;
goto v___jp_5247_;
}
else
{
lean_dec_ref(v_packages_5220_);
lean_del_object(v___x_5218_);
lean_del_object(v___x_5208_);
lean_dec_ref(v_leanOpts_5201_);
return v___y_5262_;
}
}
}
}
}
}
else
{
lean_object* v_a_5304_; lean_object* v___x_5306_; uint8_t v_isShared_5307_; uint8_t v_isSharedCheck_5311_; 
lean_dec_ref(v_leanOpts_5201_);
lean_dec_ref(v_ws_5199_);
v_a_5304_ = lean_ctor_get(v___x_5205_, 0);
v_isSharedCheck_5311_ = !lean_is_exclusive(v___x_5205_);
if (v_isSharedCheck_5311_ == 0)
{
v___x_5306_ = v___x_5205_;
v_isShared_5307_ = v_isSharedCheck_5311_;
goto v_resetjp_5305_;
}
else
{
lean_inc(v_a_5304_);
lean_dec(v___x_5205_);
v___x_5306_ = lean_box(0);
v_isShared_5307_ = v_isSharedCheck_5311_;
goto v_resetjp_5305_;
}
v_resetjp_5305_:
{
lean_object* v___x_5309_; 
if (v_isShared_5307_ == 0)
{
v___x_5309_ = v___x_5306_;
goto v_reusejp_5308_;
}
else
{
lean_object* v_reuseFailAlloc_5310_; 
v_reuseFailAlloc_5310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5310_, 0, v_a_5304_);
v___x_5309_ = v_reuseFailAlloc_5310_;
goto v_reusejp_5308_;
}
v_reusejp_5308_:
{
return v___x_5309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0___boxed(lean_object* v_a_5312_, lean_object* v_ws_5313_, lean_object* v_toUpdate_5314_, lean_object* v_leanOpts_5315_, lean_object* v_updateToolchain_5316_, lean_object* v_a_5317_){
_start:
{
uint8_t v_updateToolchain_boxed_5318_; lean_object* v_res_5319_; 
v_updateToolchain_boxed_5318_ = lean_unbox(v_updateToolchain_5316_);
v_res_5319_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(v_a_5312_, v_ws_5313_, v_toUpdate_5314_, v_leanOpts_5315_, v_updateToolchain_boxed_5318_);
lean_dec(v_toUpdate_5314_);
lean_dec_ref(v_a_5312_);
return v_res_5319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(lean_object* v_as_5320_, size_t v_i_5321_, size_t v_stop_5322_, lean_object* v_b_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_){
_start:
{
uint8_t v___x_5327_; 
v___x_5327_ = lean_usize_dec_eq(v_i_5321_, v_stop_5322_);
if (v___x_5327_ == 0)
{
lean_object* v___x_5328_; lean_object* v___x_5329_; 
v___x_5328_ = lean_array_uget_borrowed(v_as_5320_, v_i_5321_);
lean_inc(v___x_5328_);
v___x_5329_ = l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(v___x_5328_, v___y_5324_, v___y_5325_);
if (lean_obj_tag(v___x_5329_) == 0)
{
lean_object* v_a_5330_; size_t v___x_5331_; size_t v___x_5332_; 
v_a_5330_ = lean_ctor_get(v___x_5329_, 0);
lean_inc(v_a_5330_);
lean_dec_ref(v___x_5329_);
v___x_5331_ = ((size_t)1ULL);
v___x_5332_ = lean_usize_add(v_i_5321_, v___x_5331_);
v_i_5321_ = v___x_5332_;
v_b_5323_ = v_a_5330_;
goto _start;
}
else
{
return v___x_5329_;
}
}
else
{
lean_object* v___x_5334_; 
v___x_5334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5334_, 0, v_b_5323_);
return v___x_5334_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1___boxed(lean_object* v_as_5335_, lean_object* v_i_5336_, lean_object* v_stop_5337_, lean_object* v_b_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_){
_start:
{
size_t v_i_boxed_5342_; size_t v_stop_boxed_5343_; lean_object* v_res_5344_; 
v_i_boxed_5342_ = lean_unbox_usize(v_i_5336_);
lean_dec(v_i_5336_);
v_stop_boxed_5343_ = lean_unbox_usize(v_stop_5337_);
lean_dec(v_stop_5337_);
v_res_5344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(v_as_5335_, v_i_boxed_5342_, v_stop_boxed_5343_, v_b_5338_, v___y_5339_, v___y_5340_);
lean_dec_ref(v___y_5340_);
lean_dec(v___y_5339_);
lean_dec_ref(v_as_5335_);
return v_res_5344_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize(lean_object* v_ws_5345_, lean_object* v_toUpdate_5346_, lean_object* v_leanOpts_5347_, uint8_t v_updateToolchain_5348_, lean_object* v_a_5349_){
_start:
{
lean_object* v___x_5351_; 
v___x_5351_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(v_a_5349_, v_ws_5345_, v_toUpdate_5346_, v_leanOpts_5347_, v_updateToolchain_5348_);
if (lean_obj_tag(v___x_5351_) == 0)
{
lean_object* v_a_5352_; lean_object* v_fst_5353_; lean_object* v_snd_5354_; lean_object* v___y_5356_; lean_object* v___x_5373_; 
v_a_5352_ = lean_ctor_get(v___x_5351_, 0);
lean_inc(v_a_5352_);
lean_dec_ref(v___x_5351_);
v_fst_5353_ = lean_ctor_get(v_a_5352_, 0);
lean_inc(v_fst_5353_);
v_snd_5354_ = lean_ctor_get(v_a_5352_, 1);
lean_inc(v_snd_5354_);
lean_dec(v_a_5352_);
v___x_5373_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(v_fst_5353_, v_snd_5354_);
lean_dec(v_snd_5354_);
if (lean_obj_tag(v___x_5373_) == 0)
{
lean_object* v___x_5375_; uint8_t v_isShared_5376_; uint8_t v_isSharedCheck_5395_; 
v_isSharedCheck_5395_ = !lean_is_exclusive(v___x_5373_);
if (v_isSharedCheck_5395_ == 0)
{
lean_object* v_unused_5396_; 
v_unused_5396_ = lean_ctor_get(v___x_5373_, 0);
lean_dec(v_unused_5396_);
v___x_5375_ = v___x_5373_;
v_isShared_5376_ = v_isSharedCheck_5395_;
goto v_resetjp_5374_;
}
else
{
lean_dec(v___x_5373_);
v___x_5375_ = lean_box(0);
v_isShared_5376_ = v_isSharedCheck_5395_;
goto v_resetjp_5374_;
}
v_resetjp_5374_:
{
lean_object* v_packages_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; uint8_t v___x_5380_; 
v_packages_5377_ = lean_ctor_get(v_fst_5353_, 4);
v___x_5378_ = lean_unsigned_to_nat(0u);
v___x_5379_ = lean_array_get_size(v_packages_5377_);
v___x_5380_ = lean_nat_dec_lt(v___x_5378_, v___x_5379_);
if (v___x_5380_ == 0)
{
lean_object* v___x_5382_; 
if (v_isShared_5376_ == 0)
{
lean_ctor_set(v___x_5375_, 0, v_fst_5353_);
v___x_5382_ = v___x_5375_;
goto v_reusejp_5381_;
}
else
{
lean_object* v_reuseFailAlloc_5383_; 
v_reuseFailAlloc_5383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5383_, 0, v_fst_5353_);
v___x_5382_ = v_reuseFailAlloc_5383_;
goto v_reusejp_5381_;
}
v_reusejp_5381_:
{
return v___x_5382_;
}
}
else
{
lean_object* v___x_5384_; uint8_t v___x_5385_; 
v___x_5384_ = lean_box(0);
v___x_5385_ = lean_nat_dec_le(v___x_5379_, v___x_5379_);
if (v___x_5385_ == 0)
{
if (v___x_5380_ == 0)
{
lean_object* v___x_5387_; 
if (v_isShared_5376_ == 0)
{
lean_ctor_set(v___x_5375_, 0, v_fst_5353_);
v___x_5387_ = v___x_5375_;
goto v_reusejp_5386_;
}
else
{
lean_object* v_reuseFailAlloc_5388_; 
v_reuseFailAlloc_5388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5388_, 0, v_fst_5353_);
v___x_5387_ = v_reuseFailAlloc_5388_;
goto v_reusejp_5386_;
}
v_reusejp_5386_:
{
return v___x_5387_;
}
}
else
{
size_t v___x_5389_; size_t v___x_5390_; lean_object* v___x_5391_; 
lean_del_object(v___x_5375_);
v___x_5389_ = ((size_t)0ULL);
v___x_5390_ = lean_usize_of_nat(v___x_5379_);
v___x_5391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(v_packages_5377_, v___x_5389_, v___x_5390_, v___x_5384_, v_fst_5353_, v_a_5349_);
v___y_5356_ = v___x_5391_;
goto v___jp_5355_;
}
}
else
{
size_t v___x_5392_; size_t v___x_5393_; lean_object* v___x_5394_; 
lean_del_object(v___x_5375_);
v___x_5392_ = ((size_t)0ULL);
v___x_5393_ = lean_usize_of_nat(v___x_5379_);
v___x_5394_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(v_packages_5377_, v___x_5392_, v___x_5393_, v___x_5384_, v_fst_5353_, v_a_5349_);
v___y_5356_ = v___x_5394_;
goto v___jp_5355_;
}
}
}
}
else
{
lean_object* v_a_5397_; lean_object* v___x_5399_; uint8_t v_isShared_5400_; uint8_t v_isSharedCheck_5409_; 
lean_dec(v_fst_5353_);
v_a_5397_ = lean_ctor_get(v___x_5373_, 0);
v_isSharedCheck_5409_ = !lean_is_exclusive(v___x_5373_);
if (v_isSharedCheck_5409_ == 0)
{
v___x_5399_ = v___x_5373_;
v_isShared_5400_ = v_isSharedCheck_5409_;
goto v_resetjp_5398_;
}
else
{
lean_inc(v_a_5397_);
lean_dec(v___x_5373_);
v___x_5399_ = lean_box(0);
v_isShared_5400_ = v_isSharedCheck_5409_;
goto v_resetjp_5398_;
}
v_resetjp_5398_:
{
lean_object* v___x_5401_; uint8_t v___x_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5407_; 
v___x_5401_ = lean_io_error_to_string(v_a_5397_);
v___x_5402_ = 3;
v___x_5403_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5403_, 0, v___x_5401_);
lean_ctor_set_uint8(v___x_5403_, sizeof(void*)*1, v___x_5402_);
lean_inc_ref(v_a_5349_);
v___x_5404_ = lean_apply_2(v_a_5349_, v___x_5403_, lean_box(0));
v___x_5405_ = lean_box(0);
if (v_isShared_5400_ == 0)
{
lean_ctor_set(v___x_5399_, 0, v___x_5405_);
v___x_5407_ = v___x_5399_;
goto v_reusejp_5406_;
}
else
{
lean_object* v_reuseFailAlloc_5408_; 
v_reuseFailAlloc_5408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5408_, 0, v___x_5405_);
v___x_5407_ = v_reuseFailAlloc_5408_;
goto v_reusejp_5406_;
}
v_reusejp_5406_:
{
return v___x_5407_;
}
}
}
v___jp_5355_:
{
if (lean_obj_tag(v___y_5356_) == 0)
{
lean_object* v___x_5358_; uint8_t v_isShared_5359_; uint8_t v_isSharedCheck_5363_; 
v_isSharedCheck_5363_ = !lean_is_exclusive(v___y_5356_);
if (v_isSharedCheck_5363_ == 0)
{
lean_object* v_unused_5364_; 
v_unused_5364_ = lean_ctor_get(v___y_5356_, 0);
lean_dec(v_unused_5364_);
v___x_5358_ = v___y_5356_;
v_isShared_5359_ = v_isSharedCheck_5363_;
goto v_resetjp_5357_;
}
else
{
lean_dec(v___y_5356_);
v___x_5358_ = lean_box(0);
v_isShared_5359_ = v_isSharedCheck_5363_;
goto v_resetjp_5357_;
}
v_resetjp_5357_:
{
lean_object* v___x_5361_; 
if (v_isShared_5359_ == 0)
{
lean_ctor_set(v___x_5358_, 0, v_fst_5353_);
v___x_5361_ = v___x_5358_;
goto v_reusejp_5360_;
}
else
{
lean_object* v_reuseFailAlloc_5362_; 
v_reuseFailAlloc_5362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5362_, 0, v_fst_5353_);
v___x_5361_ = v_reuseFailAlloc_5362_;
goto v_reusejp_5360_;
}
v_reusejp_5360_:
{
return v___x_5361_;
}
}
}
else
{
lean_object* v_a_5365_; lean_object* v___x_5367_; uint8_t v_isShared_5368_; uint8_t v_isSharedCheck_5372_; 
lean_dec(v_fst_5353_);
v_a_5365_ = lean_ctor_get(v___y_5356_, 0);
v_isSharedCheck_5372_ = !lean_is_exclusive(v___y_5356_);
if (v_isSharedCheck_5372_ == 0)
{
v___x_5367_ = v___y_5356_;
v_isShared_5368_ = v_isSharedCheck_5372_;
goto v_resetjp_5366_;
}
else
{
lean_inc(v_a_5365_);
lean_dec(v___y_5356_);
v___x_5367_ = lean_box(0);
v_isShared_5368_ = v_isSharedCheck_5372_;
goto v_resetjp_5366_;
}
v_resetjp_5366_:
{
lean_object* v___x_5370_; 
if (v_isShared_5368_ == 0)
{
v___x_5370_ = v___x_5367_;
goto v_reusejp_5369_;
}
else
{
lean_object* v_reuseFailAlloc_5371_; 
v_reuseFailAlloc_5371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5371_, 0, v_a_5365_);
v___x_5370_ = v_reuseFailAlloc_5371_;
goto v_reusejp_5369_;
}
v_reusejp_5369_:
{
return v___x_5370_;
}
}
}
}
}
else
{
lean_object* v_a_5410_; lean_object* v___x_5412_; uint8_t v_isShared_5413_; uint8_t v_isSharedCheck_5417_; 
v_a_5410_ = lean_ctor_get(v___x_5351_, 0);
v_isSharedCheck_5417_ = !lean_is_exclusive(v___x_5351_);
if (v_isSharedCheck_5417_ == 0)
{
v___x_5412_ = v___x_5351_;
v_isShared_5413_ = v_isSharedCheck_5417_;
goto v_resetjp_5411_;
}
else
{
lean_inc(v_a_5410_);
lean_dec(v___x_5351_);
v___x_5412_ = lean_box(0);
v_isShared_5413_ = v_isSharedCheck_5417_;
goto v_resetjp_5411_;
}
v_resetjp_5411_:
{
lean_object* v___x_5415_; 
if (v_isShared_5413_ == 0)
{
v___x_5415_ = v___x_5412_;
goto v_reusejp_5414_;
}
else
{
lean_object* v_reuseFailAlloc_5416_; 
v_reuseFailAlloc_5416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5416_, 0, v_a_5410_);
v___x_5415_ = v_reuseFailAlloc_5416_;
goto v_reusejp_5414_;
}
v_reusejp_5414_:
{
return v___x_5415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize___boxed(lean_object* v_ws_5418_, lean_object* v_toUpdate_5419_, lean_object* v_leanOpts_5420_, lean_object* v_updateToolchain_5421_, lean_object* v_a_5422_, lean_object* v_a_5423_){
_start:
{
uint8_t v_updateToolchain_boxed_5424_; lean_object* v_res_5425_; 
v_updateToolchain_boxed_5424_ = lean_unbox(v_updateToolchain_5421_);
v_res_5425_ = l_Lake_Workspace_updateAndMaterialize(v_ws_5418_, v_toUpdate_5419_, v_leanOpts_5420_, v_updateToolchain_boxed_5424_, v_a_5422_);
lean_dec_ref(v_a_5422_);
lean_dec(v_toUpdate_5419_);
return v_res_5425_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(lean_object* v___x_5430_, lean_object* v_what_5431_, lean_object* v___y_5432_){
_start:
{
lean_object* v_name_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; uint8_t v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; uint8_t v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; 
v_name_5434_ = lean_ctor_get(v___x_5430_, 0);
lean_inc(v_name_5434_);
lean_dec_ref(v___x_5430_);
v___x_5435_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0));
v___x_5436_ = lean_string_append(v___x_5435_, v_what_5431_);
v___x_5437_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1));
v___x_5438_ = lean_string_append(v___x_5436_, v___x_5437_);
v___x_5439_ = 1;
v___x_5440_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_5434_, v___x_5439_);
v___x_5441_ = lean_string_append(v___x_5438_, v___x_5440_);
v___x_5442_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2));
v___x_5443_ = lean_string_append(v___x_5441_, v___x_5442_);
v___x_5444_ = lean_string_append(v___x_5443_, v___x_5440_);
lean_dec_ref(v___x_5440_);
v___x_5445_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3));
v___x_5446_ = lean_string_append(v___x_5444_, v___x_5445_);
v___x_5447_ = 2;
v___x_5448_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5448_, 0, v___x_5446_);
lean_ctor_set_uint8(v___x_5448_, sizeof(void*)*1, v___x_5447_);
lean_inc_ref(v___y_5432_);
v___x_5449_ = lean_apply_2(v___y_5432_, v___x_5448_, lean_box(0));
v___x_5450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5450_, 0, v___x_5449_);
return v___x_5450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___boxed(lean_object* v___x_5451_, lean_object* v_what_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_){
_start:
{
lean_object* v_res_5455_; 
v_res_5455_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_5451_, v_what_5452_, v___y_5453_);
lean_dec_ref(v___y_5453_);
lean_dec_ref(v_what_5452_);
return v_res_5455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(lean_object* v_pkgEntries_5459_, lean_object* v_as_5460_, size_t v_i_5461_, size_t v_stop_5462_, lean_object* v_b_5463_, lean_object* v___y_5464_){
_start:
{
lean_object* v_a_5467_; lean_object* v___y_5472_; uint8_t v___x_5474_; 
v___x_5474_ = lean_usize_dec_eq(v_i_5461_, v_stop_5462_);
if (v___x_5474_ == 0)
{
lean_object* v___x_5475_; lean_object* v_src_x3f_5476_; 
v___x_5475_ = lean_array_uget_borrowed(v_as_5460_, v_i_5461_);
v_src_x3f_5476_ = lean_ctor_get(v___x_5475_, 3);
if (lean_obj_tag(v_src_x3f_5476_) == 1)
{
lean_object* v_name_5477_; lean_object* v_val_5478_; lean_object* v___x_5479_; 
v_name_5477_ = lean_ctor_get(v___x_5475_, 0);
v_val_5478_ = lean_ctor_get(v_src_x3f_5476_, 0);
v___x_5479_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_pkgEntries_5459_, v_name_5477_);
if (lean_obj_tag(v___x_5479_) == 1)
{
lean_object* v_val_5480_; lean_object* v___y_5482_; lean_object* v___y_5486_; 
v_val_5480_ = lean_ctor_get(v___x_5479_, 0);
lean_inc(v_val_5480_);
lean_dec_ref(v___x_5479_);
if (lean_obj_tag(v_val_5478_) == 0)
{
lean_object* v_src_5489_; 
v_src_5489_ = lean_ctor_get(v_val_5480_, 4);
lean_inc_ref(v_src_5489_);
lean_dec(v_val_5480_);
if (lean_obj_tag(v_src_5489_) == 0)
{
lean_object* v___x_5490_; 
lean_dec_ref(v_src_5489_);
v___x_5490_ = lean_box(0);
v_a_5467_ = v___x_5490_;
goto v___jp_5466_;
}
else
{
lean_dec_ref(v_src_5489_);
v___y_5486_ = v___y_5464_;
goto v___jp_5485_;
}
}
else
{
lean_object* v_src_5491_; 
v_src_5491_ = lean_ctor_get(v_val_5480_, 4);
lean_inc_ref(v_src_5491_);
lean_dec(v_val_5480_);
if (lean_obj_tag(v_src_5491_) == 1)
{
lean_object* v_url_5492_; lean_object* v_rev_5493_; lean_object* v_url_5494_; lean_object* v_inputRev_x3f_5495_; lean_object* v___y_5497_; uint8_t v___x_5504_; 
v_url_5492_ = lean_ctor_get(v_val_5478_, 0);
v_rev_5493_ = lean_ctor_get(v_val_5478_, 1);
v_url_5494_ = lean_ctor_get(v_src_5491_, 0);
lean_inc_ref(v_url_5494_);
v_inputRev_x3f_5495_ = lean_ctor_get(v_src_5491_, 2);
lean_inc(v_inputRev_x3f_5495_);
lean_dec_ref(v_src_5491_);
v___x_5504_ = lean_string_dec_eq(v_url_5492_, v_url_5494_);
lean_dec_ref(v_url_5494_);
if (v___x_5504_ == 0)
{
goto v___jp_5501_;
}
else
{
if (v___x_5474_ == 0)
{
v___y_5497_ = v___y_5464_;
goto v___jp_5496_;
}
else
{
goto v___jp_5501_;
}
}
v___jp_5496_:
{
lean_object* v___x_5498_; uint8_t v___x_5499_; 
v___x_5498_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
lean_inc(v_rev_5493_);
v___x_5499_ = l_Option_instDecidableEq___redArg(v___x_5498_, v_rev_5493_, v_inputRev_x3f_5495_);
if (v___x_5499_ == 0)
{
v___y_5482_ = v___y_5497_;
goto v___jp_5481_;
}
else
{
if (v___x_5474_ == 0)
{
lean_object* v___x_5500_; 
v___x_5500_ = lean_box(0);
v_a_5467_ = v___x_5500_;
goto v___jp_5466_;
}
else
{
v___y_5482_ = v___y_5497_;
goto v___jp_5481_;
}
}
}
v___jp_5501_:
{
lean_object* v___x_5502_; lean_object* v___x_5503_; 
v___x_5502_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2));
lean_inc(v___x_5475_);
v___x_5503_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_5475_, v___x_5502_, v___y_5464_);
if (lean_obj_tag(v___x_5503_) == 0)
{
lean_dec_ref(v___x_5503_);
v___y_5497_ = v___y_5464_;
goto v___jp_5496_;
}
else
{
lean_dec(v_inputRev_x3f_5495_);
return v___x_5503_;
}
}
}
else
{
lean_dec_ref(v_src_5491_);
v___y_5486_ = v___y_5464_;
goto v___jp_5485_;
}
}
v___jp_5481_:
{
lean_object* v___x_5483_; lean_object* v___x_5484_; 
v___x_5483_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0));
lean_inc(v___x_5475_);
v___x_5484_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_5475_, v___x_5483_, v___y_5482_);
v___y_5472_ = v___x_5484_;
goto v___jp_5471_;
}
v___jp_5485_:
{
lean_object* v___x_5487_; lean_object* v___x_5488_; 
v___x_5487_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1));
lean_inc(v___x_5475_);
v___x_5488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_5475_, v___x_5487_, v___y_5486_);
v___y_5472_ = v___x_5488_;
goto v___jp_5471_;
}
}
else
{
lean_object* v___x_5505_; 
lean_dec(v___x_5479_);
v___x_5505_ = lean_box(0);
v_a_5467_ = v___x_5505_;
goto v___jp_5466_;
}
}
else
{
lean_object* v___x_5506_; 
v___x_5506_ = lean_box(0);
v_a_5467_ = v___x_5506_;
goto v___jp_5466_;
}
}
else
{
lean_object* v___x_5507_; 
v___x_5507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5507_, 0, v_b_5463_);
return v___x_5507_;
}
v___jp_5466_:
{
size_t v___x_5468_; size_t v___x_5469_; 
v___x_5468_ = ((size_t)1ULL);
v___x_5469_ = lean_usize_add(v_i_5461_, v___x_5468_);
v_i_5461_ = v___x_5469_;
v_b_5463_ = v_a_5467_;
goto _start;
}
v___jp_5471_:
{
if (lean_obj_tag(v___y_5472_) == 0)
{
lean_object* v_a_5473_; 
v_a_5473_ = lean_ctor_get(v___y_5472_, 0);
lean_inc(v_a_5473_);
lean_dec_ref(v___y_5472_);
v_a_5467_ = v_a_5473_;
goto v___jp_5466_;
}
else
{
return v___y_5472_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___boxed(lean_object* v_pkgEntries_5508_, lean_object* v_as_5509_, lean_object* v_i_5510_, lean_object* v_stop_5511_, lean_object* v_b_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_){
_start:
{
size_t v_i_boxed_5515_; size_t v_stop_boxed_5516_; lean_object* v_res_5517_; 
v_i_boxed_5515_ = lean_unbox_usize(v_i_5510_);
lean_dec(v_i_5510_);
v_stop_boxed_5516_ = lean_unbox_usize(v_stop_5511_);
lean_dec(v_stop_5511_);
v_res_5517_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_5508_, v_as_5509_, v_i_boxed_5515_, v_stop_boxed_5516_, v_b_5512_, v___y_5513_);
lean_dec_ref(v___y_5513_);
lean_dec_ref(v_as_5509_);
lean_dec(v_pkgEntries_5508_);
return v_res_5517_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest(lean_object* v_pkgEntries_5518_, lean_object* v_deps_5519_, lean_object* v_a_5520_){
_start:
{
lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5524_; uint8_t v___x_5525_; 
v___x_5522_ = lean_unsigned_to_nat(0u);
v___x_5523_ = lean_array_get_size(v_deps_5519_);
v___x_5524_ = lean_box(0);
v___x_5525_ = lean_nat_dec_lt(v___x_5522_, v___x_5523_);
if (v___x_5525_ == 0)
{
lean_object* v___x_5526_; 
v___x_5526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5526_, 0, v___x_5524_);
return v___x_5526_;
}
else
{
uint8_t v___x_5527_; 
v___x_5527_ = lean_nat_dec_le(v___x_5523_, v___x_5523_);
if (v___x_5527_ == 0)
{
if (v___x_5525_ == 0)
{
lean_object* v___x_5528_; 
v___x_5528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5528_, 0, v___x_5524_);
return v___x_5528_;
}
else
{
size_t v___x_5529_; size_t v___x_5530_; lean_object* v___x_5531_; 
v___x_5529_ = ((size_t)0ULL);
v___x_5530_ = lean_usize_of_nat(v___x_5523_);
v___x_5531_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_5518_, v_deps_5519_, v___x_5529_, v___x_5530_, v___x_5524_, v_a_5520_);
return v___x_5531_;
}
}
else
{
size_t v___x_5532_; size_t v___x_5533_; lean_object* v___x_5534_; 
v___x_5532_ = ((size_t)0ULL);
v___x_5533_ = lean_usize_of_nat(v___x_5523_);
v___x_5534_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_5518_, v_deps_5519_, v___x_5532_, v___x_5533_, v___x_5524_, v_a_5520_);
return v___x_5534_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest___boxed(lean_object* v_pkgEntries_5535_, lean_object* v_deps_5536_, lean_object* v_a_5537_, lean_object* v_a_5538_){
_start:
{
lean_object* v_res_5539_; 
v_res_5539_ = l___private_Lake_Load_Resolve_0__Lake_validateManifest(v_pkgEntries_5535_, v_deps_5536_, v_a_5537_);
lean_dec_ref(v_a_5537_);
lean_dec_ref(v_deps_5536_);
lean_dec(v_pkgEntries_5535_);
return v_res_5539_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__3(lean_object* v_x_5540_, lean_object* v_x_5541_){
_start:
{
if (lean_obj_tag(v_x_5540_) == 0)
{
if (lean_obj_tag(v_x_5541_) == 0)
{
uint8_t v___x_5542_; 
v___x_5542_ = 1;
return v___x_5542_;
}
else
{
uint8_t v___x_5543_; 
v___x_5543_ = 0;
return v___x_5543_;
}
}
else
{
if (lean_obj_tag(v_x_5541_) == 0)
{
uint8_t v___x_5544_; 
v___x_5544_ = 0;
return v___x_5544_;
}
else
{
lean_object* v_val_5545_; lean_object* v_val_5546_; uint8_t v___x_5547_; 
v_val_5545_ = lean_ctor_get(v_x_5540_, 0);
v_val_5546_ = lean_ctor_get(v_x_5541_, 0);
v___x_5547_ = lean_string_dec_eq(v_val_5545_, v_val_5546_);
return v___x_5547_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__3___boxed(lean_object* v_x_5548_, lean_object* v_x_5549_){
_start:
{
uint8_t v_res_5550_; lean_object* v_r_5551_; 
v_res_5550_ = l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__3(v_x_5548_, v_x_5549_);
lean_dec(v_x_5549_);
lean_dec(v_x_5548_);
v_r_5551_ = lean_box(v_res_5550_);
return v_r_5551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1(lean_object* v_pkg_5557_, lean_object* v___y_5558_, lean_object* v___y_5559_, lean_object* v_leanOpts_5560_, uint8_t v_reconfigure_5561_, lean_object* v_as_5562_, size_t v_i_5563_, size_t v_stop_5564_, lean_object* v_b_5565_, lean_object* v___y_5566_){
_start:
{
uint8_t v___x_5571_; 
v___x_5571_ = lean_usize_dec_eq(v_i_5563_, v_stop_5564_);
if (v___x_5571_ == 0)
{
lean_object* v_ws_5572_; lean_object* v_depIdxs_5573_; lean_object* v___x_5575_; uint8_t v_isShared_5576_; uint8_t v_isSharedCheck_5721_; 
v_ws_5572_ = lean_ctor_get(v_b_5565_, 0);
v_depIdxs_5573_ = lean_ctor_get(v_b_5565_, 1);
v_isSharedCheck_5721_ = !lean_is_exclusive(v_b_5565_);
if (v_isSharedCheck_5721_ == 0)
{
v___x_5575_ = v_b_5565_;
v_isShared_5576_ = v_isSharedCheck_5721_;
goto v_resetjp_5574_;
}
else
{
lean_inc(v_depIdxs_5573_);
lean_inc(v_ws_5572_);
lean_dec(v_b_5565_);
v___x_5575_ = lean_box(0);
v_isShared_5576_ = v_isSharedCheck_5721_;
goto v_resetjp_5574_;
}
v_resetjp_5574_:
{
lean_object* v_lakeEnv_5577_; lean_object* v_packages_5578_; size_t v___x_5579_; size_t v___x_5580_; lean_object* v___x_5581_; lean_object* v___f_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; 
v_lakeEnv_5577_ = lean_ctor_get(v_ws_5572_, 0);
v_packages_5578_ = lean_ctor_get(v_ws_5572_, 4);
v___x_5579_ = ((size_t)1ULL);
v___x_5580_ = lean_usize_sub(v_i_5563_, v___x_5579_);
v___x_5581_ = lean_array_uget_borrowed(v_as_5562_, v___x_5580_);
lean_inc(v___x_5581_);
v___f_5582_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__7___lam__0___boxed), 2, 1);
lean_closure_set(v___f_5582_, 0, v___x_5581_);
v___x_5583_ = lean_unsigned_to_nat(0u);
v___x_5584_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_5582_, v_packages_5578_, v___x_5583_);
if (lean_obj_tag(v___x_5584_) == 1)
{
lean_object* v_val_5585_; lean_object* v___x_5586_; lean_object* v___x_5588_; 
v_val_5585_ = lean_ctor_get(v___x_5584_, 0);
lean_inc(v_val_5585_);
lean_dec_ref(v___x_5584_);
v___x_5586_ = lean_array_push(v_depIdxs_5573_, v_val_5585_);
if (v_isShared_5576_ == 0)
{
lean_ctor_set(v___x_5575_, 1, v___x_5586_);
v___x_5588_ = v___x_5575_;
goto v_reusejp_5587_;
}
else
{
lean_object* v_reuseFailAlloc_5590_; 
v_reuseFailAlloc_5590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5590_, 0, v_ws_5572_);
lean_ctor_set(v_reuseFailAlloc_5590_, 1, v___x_5586_);
v___x_5588_ = v_reuseFailAlloc_5590_;
goto v_reusejp_5587_;
}
v_reusejp_5587_:
{
v_i_5563_ = v___x_5580_;
v_b_5565_ = v___x_5588_;
goto _start;
}
}
else
{
lean_object* v_wsIdx_5591_; lean_object* v_baseName_5592_; lean_object* v_name_5593_; lean_object* v_opts_5594_; uint8_t v___x_5595_; 
lean_inc_ref(v_packages_5578_);
lean_dec(v___x_5584_);
v_wsIdx_5591_ = lean_ctor_get(v_pkg_5557_, 0);
v_baseName_5592_ = lean_ctor_get(v_pkg_5557_, 1);
v_name_5593_ = lean_ctor_get(v___x_5581_, 0);
v_opts_5594_ = lean_ctor_get(v___x_5581_, 4);
v___x_5595_ = lean_name_eq(v_baseName_5592_, v_name_5593_);
if (v___x_5595_ == 0)
{
lean_object* v___x_5596_; 
v___x_5596_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___y_5558_, v_name_5593_);
if (lean_obj_tag(v___x_5596_) == 1)
{
lean_object* v_val_5597_; lean_object* v___x_5598_; lean_object* v_dir_5599_; lean_object* v___x_5600_; 
v_val_5597_ = lean_ctor_get(v___x_5596_, 0);
lean_inc(v_val_5597_);
lean_dec_ref(v___x_5596_);
v___x_5598_ = lean_array_fget_borrowed(v_packages_5578_, v___x_5583_);
v_dir_5599_ = lean_ctor_get(v___x_5598_, 4);
lean_inc_ref(v___y_5559_);
lean_inc_ref(v_dir_5599_);
v___x_5600_ = l_Lake_PackageEntry_materialize(v_val_5597_, v_lakeEnv_5577_, v_dir_5599_, v___y_5559_, v___y_5566_);
if (lean_obj_tag(v___x_5600_) == 0)
{
lean_object* v_a_5601_; lean_object* v___x_5603_; uint8_t v_isShared_5604_; uint8_t v_isSharedCheck_5675_; 
v_a_5601_ = lean_ctor_get(v___x_5600_, 0);
v_isSharedCheck_5675_ = !lean_is_exclusive(v___x_5600_);
if (v_isSharedCheck_5675_ == 0)
{
v___x_5603_ = v___x_5600_;
v_isShared_5604_ = v_isSharedCheck_5675_;
goto v_resetjp_5602_;
}
else
{
lean_inc(v_a_5601_);
lean_dec(v___x_5600_);
v___x_5603_ = lean_box(0);
v_isShared_5604_ = v_isSharedCheck_5675_;
goto v_resetjp_5602_;
}
v_resetjp_5602_:
{
lean_object* v___x_5605_; lean_object* v___x_5606_; 
v___x_5605_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v_leanOpts_5560_);
lean_inc(v_opts_5594_);
v___x_5606_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_5572_, v_a_5601_, v_opts_5594_, v_leanOpts_5560_, v_reconfigure_5561_, v___x_5605_);
if (lean_obj_tag(v___x_5606_) == 0)
{
lean_object* v_a_5607_; lean_object* v_a_5608_; lean_object* v_wsIdx_5609_; lean_object* v___x_5610_; lean_object* v___x_5612_; 
lean_del_object(v___x_5603_);
v_a_5607_ = lean_ctor_get(v___x_5606_, 0);
lean_inc(v_a_5607_);
v_a_5608_ = lean_ctor_get(v___x_5606_, 1);
lean_inc(v_a_5608_);
lean_dec_ref(v___x_5606_);
v_wsIdx_5609_ = lean_array_get_size(v_packages_5578_);
lean_dec_ref(v_packages_5578_);
v___x_5610_ = lean_array_push(v_depIdxs_5573_, v_wsIdx_5609_);
if (v_isShared_5576_ == 0)
{
lean_ctor_set(v___x_5575_, 1, v___x_5610_);
lean_ctor_set(v___x_5575_, 0, v_a_5607_);
v___x_5612_ = v___x_5575_;
goto v_reusejp_5611_;
}
else
{
lean_object* v_reuseFailAlloc_5643_; 
v_reuseFailAlloc_5643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5643_, 0, v_a_5607_);
lean_ctor_set(v_reuseFailAlloc_5643_, 1, v___x_5610_);
v___x_5612_ = v_reuseFailAlloc_5643_;
goto v_reusejp_5611_;
}
v_reusejp_5611_:
{
lean_object* v___x_5613_; uint8_t v___x_5614_; 
v___x_5613_ = lean_array_get_size(v_a_5608_);
v___x_5614_ = lean_nat_dec_lt(v___x_5583_, v___x_5613_);
if (v___x_5614_ == 0)
{
lean_dec(v_a_5608_);
v_i_5563_ = v___x_5580_;
v_b_5565_ = v___x_5612_;
goto _start;
}
else
{
lean_object* v___x_5616_; uint8_t v___x_5617_; 
v___x_5616_ = lean_box(0);
v___x_5617_ = lean_nat_dec_le(v___x_5613_, v___x_5613_);
if (v___x_5617_ == 0)
{
if (v___x_5614_ == 0)
{
lean_dec(v_a_5608_);
v_i_5563_ = v___x_5580_;
v_b_5565_ = v___x_5612_;
goto _start;
}
else
{
size_t v___x_5619_; size_t v___x_5620_; lean_object* v___x_5621_; 
v___x_5619_ = ((size_t)0ULL);
v___x_5620_ = lean_usize_of_nat(v___x_5613_);
v___x_5621_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_5608_, v___x_5619_, v___x_5620_, v___x_5616_, v___y_5566_);
lean_dec(v_a_5608_);
if (lean_obj_tag(v___x_5621_) == 0)
{
lean_dec_ref(v___x_5621_);
v_i_5563_ = v___x_5580_;
v_b_5565_ = v___x_5612_;
goto _start;
}
else
{
lean_object* v_a_5623_; lean_object* v___x_5625_; uint8_t v_isShared_5626_; uint8_t v_isSharedCheck_5630_; 
lean_dec_ref(v___x_5612_);
lean_dec_ref(v_leanOpts_5560_);
lean_dec_ref(v___y_5559_);
lean_dec_ref(v_pkg_5557_);
v_a_5623_ = lean_ctor_get(v___x_5621_, 0);
v_isSharedCheck_5630_ = !lean_is_exclusive(v___x_5621_);
if (v_isSharedCheck_5630_ == 0)
{
v___x_5625_ = v___x_5621_;
v_isShared_5626_ = v_isSharedCheck_5630_;
goto v_resetjp_5624_;
}
else
{
lean_inc(v_a_5623_);
lean_dec(v___x_5621_);
v___x_5625_ = lean_box(0);
v_isShared_5626_ = v_isSharedCheck_5630_;
goto v_resetjp_5624_;
}
v_resetjp_5624_:
{
lean_object* v___x_5628_; 
if (v_isShared_5626_ == 0)
{
v___x_5628_ = v___x_5625_;
goto v_reusejp_5627_;
}
else
{
lean_object* v_reuseFailAlloc_5629_; 
v_reuseFailAlloc_5629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5629_, 0, v_a_5623_);
v___x_5628_ = v_reuseFailAlloc_5629_;
goto v_reusejp_5627_;
}
v_reusejp_5627_:
{
return v___x_5628_;
}
}
}
}
}
else
{
size_t v___x_5631_; size_t v___x_5632_; lean_object* v___x_5633_; 
v___x_5631_ = ((size_t)0ULL);
v___x_5632_ = lean_usize_of_nat(v___x_5613_);
v___x_5633_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_5608_, v___x_5631_, v___x_5632_, v___x_5616_, v___y_5566_);
lean_dec(v_a_5608_);
if (lean_obj_tag(v___x_5633_) == 0)
{
lean_dec_ref(v___x_5633_);
v_i_5563_ = v___x_5580_;
v_b_5565_ = v___x_5612_;
goto _start;
}
else
{
lean_object* v_a_5635_; lean_object* v___x_5637_; uint8_t v_isShared_5638_; uint8_t v_isSharedCheck_5642_; 
lean_dec_ref(v___x_5612_);
lean_dec_ref(v_leanOpts_5560_);
lean_dec_ref(v___y_5559_);
lean_dec_ref(v_pkg_5557_);
v_a_5635_ = lean_ctor_get(v___x_5633_, 0);
v_isSharedCheck_5642_ = !lean_is_exclusive(v___x_5633_);
if (v_isSharedCheck_5642_ == 0)
{
v___x_5637_ = v___x_5633_;
v_isShared_5638_ = v_isSharedCheck_5642_;
goto v_resetjp_5636_;
}
else
{
lean_inc(v_a_5635_);
lean_dec(v___x_5633_);
v___x_5637_ = lean_box(0);
v_isShared_5638_ = v_isSharedCheck_5642_;
goto v_resetjp_5636_;
}
v_resetjp_5636_:
{
lean_object* v___x_5640_; 
if (v_isShared_5638_ == 0)
{
v___x_5640_ = v___x_5637_;
goto v_reusejp_5639_;
}
else
{
lean_object* v_reuseFailAlloc_5641_; 
v_reuseFailAlloc_5641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5641_, 0, v_a_5635_);
v___x_5640_ = v_reuseFailAlloc_5641_;
goto v_reusejp_5639_;
}
v_reusejp_5639_:
{
return v___x_5640_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5644_; lean_object* v___x_5645_; uint8_t v___x_5646_; 
lean_dec_ref(v_packages_5578_);
lean_del_object(v___x_5575_);
lean_dec_ref(v_depIdxs_5573_);
lean_dec_ref(v_leanOpts_5560_);
lean_dec_ref(v___y_5559_);
lean_dec_ref(v_pkg_5557_);
v_a_5644_ = lean_ctor_get(v___x_5606_, 1);
lean_inc(v_a_5644_);
lean_dec_ref(v___x_5606_);
v___x_5645_ = lean_array_get_size(v_a_5644_);
v___x_5646_ = lean_nat_dec_lt(v___x_5583_, v___x_5645_);
if (v___x_5646_ == 0)
{
lean_object* v___x_5647_; lean_object* v___x_5649_; 
lean_dec(v_a_5644_);
v___x_5647_ = lean_box(0);
if (v_isShared_5604_ == 0)
{
lean_ctor_set_tag(v___x_5603_, 1);
lean_ctor_set(v___x_5603_, 0, v___x_5647_);
v___x_5649_ = v___x_5603_;
goto v_reusejp_5648_;
}
else
{
lean_object* v_reuseFailAlloc_5650_; 
v_reuseFailAlloc_5650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5650_, 0, v___x_5647_);
v___x_5649_ = v_reuseFailAlloc_5650_;
goto v_reusejp_5648_;
}
v_reusejp_5648_:
{
return v___x_5649_;
}
}
else
{
lean_object* v___x_5651_; uint8_t v___x_5652_; 
lean_del_object(v___x_5603_);
v___x_5651_ = lean_box(0);
v___x_5652_ = lean_nat_dec_le(v___x_5645_, v___x_5645_);
if (v___x_5652_ == 0)
{
if (v___x_5646_ == 0)
{
lean_dec(v_a_5644_);
goto v___jp_5568_;
}
else
{
size_t v___x_5653_; size_t v___x_5654_; lean_object* v___x_5655_; 
v___x_5653_ = ((size_t)0ULL);
v___x_5654_ = lean_usize_of_nat(v___x_5645_);
v___x_5655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_5644_, v___x_5653_, v___x_5654_, v___x_5651_, v___y_5566_);
lean_dec(v_a_5644_);
if (lean_obj_tag(v___x_5655_) == 0)
{
lean_dec_ref(v___x_5655_);
goto v___jp_5568_;
}
else
{
lean_object* v_a_5656_; lean_object* v___x_5658_; uint8_t v_isShared_5659_; uint8_t v_isSharedCheck_5663_; 
v_a_5656_ = lean_ctor_get(v___x_5655_, 0);
v_isSharedCheck_5663_ = !lean_is_exclusive(v___x_5655_);
if (v_isSharedCheck_5663_ == 0)
{
v___x_5658_ = v___x_5655_;
v_isShared_5659_ = v_isSharedCheck_5663_;
goto v_resetjp_5657_;
}
else
{
lean_inc(v_a_5656_);
lean_dec(v___x_5655_);
v___x_5658_ = lean_box(0);
v_isShared_5659_ = v_isSharedCheck_5663_;
goto v_resetjp_5657_;
}
v_resetjp_5657_:
{
lean_object* v___x_5661_; 
if (v_isShared_5659_ == 0)
{
v___x_5661_ = v___x_5658_;
goto v_reusejp_5660_;
}
else
{
lean_object* v_reuseFailAlloc_5662_; 
v_reuseFailAlloc_5662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5662_, 0, v_a_5656_);
v___x_5661_ = v_reuseFailAlloc_5662_;
goto v_reusejp_5660_;
}
v_reusejp_5660_:
{
return v___x_5661_;
}
}
}
}
}
else
{
size_t v___x_5664_; size_t v___x_5665_; lean_object* v___x_5666_; 
v___x_5664_ = ((size_t)0ULL);
v___x_5665_ = lean_usize_of_nat(v___x_5645_);
v___x_5666_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_a_5644_, v___x_5664_, v___x_5665_, v___x_5651_, v___y_5566_);
lean_dec(v_a_5644_);
if (lean_obj_tag(v___x_5666_) == 0)
{
lean_dec_ref(v___x_5666_);
goto v___jp_5568_;
}
else
{
lean_object* v_a_5667_; lean_object* v___x_5669_; uint8_t v_isShared_5670_; uint8_t v_isSharedCheck_5674_; 
v_a_5667_ = lean_ctor_get(v___x_5666_, 0);
v_isSharedCheck_5674_ = !lean_is_exclusive(v___x_5666_);
if (v_isSharedCheck_5674_ == 0)
{
v___x_5669_ = v___x_5666_;
v_isShared_5670_ = v_isSharedCheck_5674_;
goto v_resetjp_5668_;
}
else
{
lean_inc(v_a_5667_);
lean_dec(v___x_5666_);
v___x_5669_ = lean_box(0);
v_isShared_5670_ = v_isSharedCheck_5674_;
goto v_resetjp_5668_;
}
v_resetjp_5668_:
{
lean_object* v___x_5672_; 
if (v_isShared_5670_ == 0)
{
v___x_5672_ = v___x_5669_;
goto v_reusejp_5671_;
}
else
{
lean_object* v_reuseFailAlloc_5673_; 
v_reuseFailAlloc_5673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5673_, 0, v_a_5667_);
v___x_5672_ = v_reuseFailAlloc_5673_;
goto v_reusejp_5671_;
}
v_reusejp_5671_:
{
return v___x_5672_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_5676_; lean_object* v___x_5678_; uint8_t v_isShared_5679_; uint8_t v_isSharedCheck_5683_; 
lean_dec_ref(v_packages_5578_);
lean_del_object(v___x_5575_);
lean_dec_ref(v_depIdxs_5573_);
lean_dec_ref(v_ws_5572_);
lean_dec_ref(v_leanOpts_5560_);
lean_dec_ref(v___y_5559_);
lean_dec_ref(v_pkg_5557_);
v_a_5676_ = lean_ctor_get(v___x_5600_, 0);
v_isSharedCheck_5683_ = !lean_is_exclusive(v___x_5600_);
if (v_isSharedCheck_5683_ == 0)
{
v___x_5678_ = v___x_5600_;
v_isShared_5679_ = v_isSharedCheck_5683_;
goto v_resetjp_5677_;
}
else
{
lean_inc(v_a_5676_);
lean_dec(v___x_5600_);
v___x_5678_ = lean_box(0);
v_isShared_5679_ = v_isSharedCheck_5683_;
goto v_resetjp_5677_;
}
v_resetjp_5677_:
{
lean_object* v___x_5681_; 
if (v_isShared_5679_ == 0)
{
v___x_5681_ = v___x_5678_;
goto v_reusejp_5680_;
}
else
{
lean_object* v_reuseFailAlloc_5682_; 
v_reuseFailAlloc_5682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5682_, 0, v_a_5676_);
v___x_5681_ = v_reuseFailAlloc_5682_;
goto v_reusejp_5680_;
}
v_reusejp_5680_:
{
return v___x_5681_;
}
}
}
}
else
{
uint8_t v___x_5684_; 
lean_inc(v_baseName_5592_);
lean_inc(v_wsIdx_5591_);
lean_dec(v___x_5596_);
lean_dec_ref(v_packages_5578_);
lean_del_object(v___x_5575_);
lean_dec_ref(v_depIdxs_5573_);
lean_dec_ref(v_ws_5572_);
lean_dec_ref(v_leanOpts_5560_);
lean_dec_ref(v___y_5559_);
lean_dec_ref(v_pkg_5557_);
v___x_5684_ = lean_nat_dec_eq(v_wsIdx_5591_, v___x_5583_);
lean_dec(v_wsIdx_5591_);
if (v___x_5684_ == 0)
{
lean_object* v___x_5685_; uint8_t v___x_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5694_; uint8_t v___x_5695_; lean_object* v___x_5696_; lean_object* v___x_5697_; lean_object* v___x_5698_; lean_object* v___x_5699_; 
v___x_5685_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__0));
v___x_5686_ = 1;
lean_inc(v_name_5593_);
v___x_5687_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_5593_, v___x_5686_);
v___x_5688_ = lean_string_append(v___x_5685_, v___x_5687_);
lean_dec_ref(v___x_5687_);
v___x_5689_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__1));
v___x_5690_ = lean_string_append(v___x_5688_, v___x_5689_);
v___x_5691_ = l_Lean_Name_toString(v_baseName_5592_, v___x_5684_);
v___x_5692_ = lean_string_append(v___x_5690_, v___x_5691_);
lean_dec_ref(v___x_5691_);
v___x_5693_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__2));
v___x_5694_ = lean_string_append(v___x_5692_, v___x_5693_);
v___x_5695_ = 3;
v___x_5696_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5696_, 0, v___x_5694_);
lean_ctor_set_uint8(v___x_5696_, sizeof(void*)*1, v___x_5695_);
lean_inc_ref(v___y_5566_);
v___x_5697_ = lean_apply_2(v___y_5566_, v___x_5696_, lean_box(0));
v___x_5698_ = lean_box(0);
v___x_5699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5699_, 0, v___x_5698_);
return v___x_5699_;
}
else
{
lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; uint8_t v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; 
lean_dec(v_baseName_5592_);
v___x_5700_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__0));
lean_inc(v_name_5593_);
v___x_5701_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_5593_, v___x_5684_);
v___x_5702_ = lean_string_append(v___x_5700_, v___x_5701_);
v___x_5703_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__3));
v___x_5704_ = lean_string_append(v___x_5702_, v___x_5703_);
v___x_5705_ = lean_string_append(v___x_5704_, v___x_5701_);
lean_dec_ref(v___x_5701_);
v___x_5706_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___closed__4));
v___x_5707_ = lean_string_append(v___x_5705_, v___x_5706_);
v___x_5708_ = 3;
v___x_5709_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5709_, 0, v___x_5707_);
lean_ctor_set_uint8(v___x_5709_, sizeof(void*)*1, v___x_5708_);
lean_inc_ref(v___y_5566_);
v___x_5710_ = lean_apply_2(v___y_5566_, v___x_5709_, lean_box(0));
v___x_5711_ = lean_box(0);
v___x_5712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5712_, 0, v___x_5711_);
return v___x_5712_;
}
}
}
else
{
lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; uint8_t v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; 
lean_inc(v_baseName_5592_);
lean_dec_ref(v_packages_5578_);
lean_del_object(v___x_5575_);
lean_dec_ref(v_depIdxs_5573_);
lean_dec_ref(v_ws_5572_);
lean_dec_ref(v_leanOpts_5560_);
lean_dec_ref(v___y_5559_);
lean_dec_ref(v_pkg_5557_);
v___x_5713_ = l_Lean_Name_toString(v_baseName_5592_, v___x_5571_);
v___x_5714_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__9___closed__0));
v___x_5715_ = lean_string_append(v___x_5713_, v___x_5714_);
v___x_5716_ = 3;
v___x_5717_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5717_, 0, v___x_5715_);
lean_ctor_set_uint8(v___x_5717_, sizeof(void*)*1, v___x_5716_);
lean_inc_ref(v___y_5566_);
v___x_5718_ = lean_apply_2(v___y_5566_, v___x_5717_, lean_box(0));
v___x_5719_ = lean_box(0);
v___x_5720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5720_, 0, v___x_5719_);
return v___x_5720_;
}
}
}
}
else
{
lean_object* v___x_5722_; 
lean_dec_ref(v_leanOpts_5560_);
lean_dec_ref(v___y_5559_);
lean_dec_ref(v_pkg_5557_);
v___x_5722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5722_, 0, v_b_5565_);
return v___x_5722_;
}
v___jp_5568_:
{
lean_object* v___x_5569_; lean_object* v___x_5570_; 
v___x_5569_ = lean_box(0);
v___x_5570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5570_, 0, v___x_5569_);
return v___x_5570_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1___boxed(lean_object* v_pkg_5723_, lean_object* v___y_5724_, lean_object* v___y_5725_, lean_object* v_leanOpts_5726_, lean_object* v_reconfigure_5727_, lean_object* v_as_5728_, lean_object* v_i_5729_, lean_object* v_stop_5730_, lean_object* v_b_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_){
_start:
{
uint8_t v_reconfigure_boxed_5734_; size_t v_i_boxed_5735_; size_t v_stop_boxed_5736_; lean_object* v_res_5737_; 
v_reconfigure_boxed_5734_ = lean_unbox(v_reconfigure_5727_);
v_i_boxed_5735_ = lean_unbox_usize(v_i_5729_);
lean_dec(v_i_5729_);
v_stop_boxed_5736_ = lean_unbox_usize(v_stop_5730_);
lean_dec(v_stop_5730_);
v_res_5737_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1(v_pkg_5723_, v___y_5724_, v___y_5725_, v_leanOpts_5726_, v_reconfigure_boxed_5734_, v_as_5728_, v_i_boxed_5735_, v_stop_boxed_5736_, v_b_5731_, v___y_5732_);
lean_dec_ref(v___y_5732_);
lean_dec_ref(v_as_5728_);
lean_dec(v___y_5724_);
return v_res_5737_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6___redArg(lean_object* v_cycle_5738_, lean_object* v___y_5739_){
_start:
{
lean_object* v___x_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; uint8_t v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; 
v___x_5741_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_depCycleError___redArg___closed__1));
v___x_5742_ = l_Lake_formatCycle___at___00__private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__14_spec__19(v_cycle_5738_);
v___x_5743_ = lean_string_append(v___x_5741_, v___x_5742_);
lean_dec_ref(v___x_5742_);
v___x_5744_ = 3;
v___x_5745_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5745_, 0, v___x_5743_);
lean_ctor_set_uint8(v___x_5745_, sizeof(void*)*1, v___x_5744_);
lean_inc_ref(v___y_5739_);
v___x_5746_ = lean_apply_2(v___y_5739_, v___x_5745_, lean_box(0));
v___x_5747_ = lean_box(0);
v___x_5748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5748_, 0, v___x_5747_);
return v___x_5748_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_cycle_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_){
_start:
{
lean_object* v_res_5752_; 
v_res_5752_ = l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6___redArg(v_cycle_5749_, v___y_5750_);
lean_dec_ref(v___y_5750_);
return v_res_5752_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11___redArg(lean_object* v___y_5753_, lean_object* v___y_5754_, lean_object* v_leanOpts_5755_, uint8_t v_reconfigure_5756_, lean_object* v___x_5757_, lean_object* v___y_5758_, lean_object* v___y_5759_, lean_object* v_leanOpts_5760_, uint8_t v_reconfigure_5761_, lean_object* v_pkg_5762_, lean_object* v_a_5763_, lean_object* v___y_5764_){
_start:
{
lean_object* v___y_5767_; lean_object* v___y_5772_; lean_object* v___y_5777_; lean_object* v___y_5782_; lean_object* v_packages_5786_; lean_object* v_wsIdx_5787_; lean_object* v_depConfigs_5788_; lean_object* v___y_5790_; lean_object* v___y_5791_; lean_object* v_ws_5792_; lean_object* v_packages_5793_; lean_object* v___y_5803_; lean_object* v___y_5804_; lean_object* v_ws_5805_; lean_object* v_start_5807_; lean_object* v_ws_5809_; lean_object* v_packages_5810_; lean_object* v_depIdxs_5811_; lean_object* v___y_5812_; lean_object* v_____x_5848_; lean_object* v___y_5849_; lean_object* v___x_5853_; lean_object* v___x_5854_; lean_object* v_ws_5856_; lean_object* v_packages_5857_; lean_object* v_ws_5867_; lean_object* v_s_5869_; lean_object* v___x_5870_; uint8_t v___x_5871_; 
v_packages_5786_ = lean_ctor_get(v_a_5763_, 4);
v_wsIdx_5787_ = lean_ctor_get(v_pkg_5762_, 0);
lean_inc(v_wsIdx_5787_);
v_depConfigs_5788_ = lean_ctor_get(v_pkg_5762_, 12);
lean_inc_ref(v_depConfigs_5788_);
v_start_5807_ = lean_array_get_size(v_packages_5786_);
v___x_5853_ = lean_array_get_size(v_depConfigs_5788_);
v___x_5854_ = lean_mk_empty_array_with_capacity(v___x_5853_);
lean_inc_ref(v___x_5854_);
lean_inc_ref(v_a_5763_);
v_s_5869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_5869_, 0, v_a_5763_);
lean_ctor_set(v_s_5869_, 1, v___x_5854_);
v___x_5870_ = lean_unsigned_to_nat(0u);
v___x_5871_ = lean_nat_dec_le(v___x_5853_, v___x_5853_);
if (v___x_5871_ == 0)
{
uint8_t v___x_5872_; 
v___x_5872_ = lean_nat_dec_lt(v___x_5870_, v___x_5853_);
if (v___x_5872_ == 0)
{
uint8_t v___x_5873_; 
lean_dec_ref(v_s_5869_);
lean_dec_ref(v_depConfigs_5788_);
lean_dec_ref(v_pkg_5762_);
lean_dec_ref(v_leanOpts_5760_);
lean_dec_ref(v___y_5759_);
v___x_5873_ = lean_nat_dec_lt(v_start_5807_, v_start_5807_);
if (v___x_5873_ == 0)
{
uint8_t v___x_5874_; 
lean_dec_ref(v_leanOpts_5755_);
lean_dec_ref(v___y_5754_);
v___x_5874_ = lean_nat_dec_le(v_start_5807_, v_start_5807_);
if (v___x_5874_ == 0)
{
lean_object* v___x_5875_; lean_object* v___x_5876_; 
lean_dec_ref(v___x_5854_);
lean_dec(v_wsIdx_5787_);
v___x_5875_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_5876_ = lean_panic_fn_borrowed(v_a_5763_, v___x_5875_);
lean_dec_ref(v_a_5763_);
v___y_5777_ = v___x_5876_;
goto v___jp_5776_;
}
else
{
size_t v_sz_5877_; size_t v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; 
v_sz_5877_ = lean_array_size(v___x_5854_);
v___x_5878_ = ((size_t)0ULL);
v___x_5879_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_5786_, v_sz_5877_, v___x_5878_, v___x_5854_);
v___x_5880_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_a_5763_, v_wsIdx_5787_, v___x_5879_);
lean_dec(v_wsIdx_5787_);
v___y_5777_ = v___x_5880_;
goto v___jp_5776_;
}
}
else
{
uint8_t v___x_5881_; 
lean_inc_ref(v_packages_5786_);
v___x_5881_ = lean_nat_dec_le(v_start_5807_, v_start_5807_);
if (v___x_5881_ == 0)
{
if (v___x_5873_ == 0)
{
lean_dec_ref(v_leanOpts_5755_);
lean_dec_ref(v___y_5754_);
v_ws_5856_ = v_a_5763_;
v_packages_5857_ = v_packages_5786_;
goto v___jp_5855_;
}
else
{
size_t v___x_5882_; lean_object* v___x_5883_; 
v___x_5882_ = lean_usize_of_nat(v_start_5807_);
v___x_5883_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11_spec__11(v___y_5753_, v___y_5754_, v_leanOpts_5755_, v_reconfigure_5756_, v___x_5757_, v_packages_5786_, v___x_5882_, v___x_5882_, v_a_5763_, v___y_5764_);
lean_dec_ref(v_packages_5786_);
if (lean_obj_tag(v___x_5883_) == 0)
{
lean_object* v_a_5884_; 
v_a_5884_ = lean_ctor_get(v___x_5883_, 0);
lean_inc(v_a_5884_);
lean_dec_ref(v___x_5883_);
v_ws_5867_ = v_a_5884_;
goto v___jp_5866_;
}
else
{
lean_object* v_a_5885_; lean_object* v___x_5887_; uint8_t v_isShared_5888_; uint8_t v_isSharedCheck_5892_; 
lean_dec_ref(v___x_5854_);
lean_dec(v_wsIdx_5787_);
v_a_5885_ = lean_ctor_get(v___x_5883_, 0);
v_isSharedCheck_5892_ = !lean_is_exclusive(v___x_5883_);
if (v_isSharedCheck_5892_ == 0)
{
v___x_5887_ = v___x_5883_;
v_isShared_5888_ = v_isSharedCheck_5892_;
goto v_resetjp_5886_;
}
else
{
lean_inc(v_a_5885_);
lean_dec(v___x_5883_);
v___x_5887_ = lean_box(0);
v_isShared_5888_ = v_isSharedCheck_5892_;
goto v_resetjp_5886_;
}
v_resetjp_5886_:
{
lean_object* v___x_5890_; 
if (v_isShared_5888_ == 0)
{
v___x_5890_ = v___x_5887_;
goto v_reusejp_5889_;
}
else
{
lean_object* v_reuseFailAlloc_5891_; 
v_reuseFailAlloc_5891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5891_, 0, v_a_5885_);
v___x_5890_ = v_reuseFailAlloc_5891_;
goto v_reusejp_5889_;
}
v_reusejp_5889_:
{
return v___x_5890_;
}
}
}
}
}
else
{
size_t v___x_5893_; lean_object* v___x_5894_; 
v___x_5893_ = lean_usize_of_nat(v_start_5807_);
v___x_5894_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11_spec__11(v___y_5753_, v___y_5754_, v_leanOpts_5755_, v_reconfigure_5756_, v___x_5757_, v_packages_5786_, v___x_5893_, v___x_5893_, v_a_5763_, v___y_5764_);
lean_dec_ref(v_packages_5786_);
if (lean_obj_tag(v___x_5894_) == 0)
{
lean_object* v_a_5895_; 
v_a_5895_ = lean_ctor_get(v___x_5894_, 0);
lean_inc(v_a_5895_);
lean_dec_ref(v___x_5894_);
v_ws_5867_ = v_a_5895_;
goto v___jp_5866_;
}
else
{
lean_object* v_a_5896_; lean_object* v___x_5898_; uint8_t v_isShared_5899_; uint8_t v_isSharedCheck_5903_; 
lean_dec_ref(v___x_5854_);
lean_dec(v_wsIdx_5787_);
v_a_5896_ = lean_ctor_get(v___x_5894_, 0);
v_isSharedCheck_5903_ = !lean_is_exclusive(v___x_5894_);
if (v_isSharedCheck_5903_ == 0)
{
v___x_5898_ = v___x_5894_;
v_isShared_5899_ = v_isSharedCheck_5903_;
goto v_resetjp_5897_;
}
else
{
lean_inc(v_a_5896_);
lean_dec(v___x_5894_);
v___x_5898_ = lean_box(0);
v_isShared_5899_ = v_isSharedCheck_5903_;
goto v_resetjp_5897_;
}
v_resetjp_5897_:
{
lean_object* v___x_5901_; 
if (v_isShared_5899_ == 0)
{
v___x_5901_ = v___x_5898_;
goto v_reusejp_5900_;
}
else
{
lean_object* v_reuseFailAlloc_5902_; 
v_reuseFailAlloc_5902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5902_, 0, v_a_5896_);
v___x_5901_ = v_reuseFailAlloc_5902_;
goto v_reusejp_5900_;
}
v_reusejp_5900_:
{
return v___x_5901_;
}
}
}
}
}
}
else
{
size_t v___x_5904_; size_t v___x_5905_; lean_object* v___x_5906_; 
lean_dec_ref(v___x_5854_);
lean_dec_ref(v_a_5763_);
v___x_5904_ = lean_usize_of_nat(v___x_5853_);
v___x_5905_ = ((size_t)0ULL);
v___x_5906_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1(v_pkg_5762_, v___y_5758_, v___y_5759_, v_leanOpts_5760_, v_reconfigure_5761_, v_depConfigs_5788_, v___x_5904_, v___x_5905_, v_s_5869_, v___y_5764_);
lean_dec_ref(v_depConfigs_5788_);
if (lean_obj_tag(v___x_5906_) == 0)
{
lean_object* v_a_5907_; 
v_a_5907_ = lean_ctor_get(v___x_5906_, 0);
lean_inc(v_a_5907_);
lean_dec_ref(v___x_5906_);
v_____x_5848_ = v_a_5907_;
v___y_5849_ = v___y_5764_;
goto v___jp_5847_;
}
else
{
lean_object* v_a_5908_; lean_object* v___x_5910_; uint8_t v_isShared_5911_; uint8_t v_isSharedCheck_5915_; 
lean_dec(v_wsIdx_5787_);
lean_dec_ref(v_leanOpts_5755_);
lean_dec_ref(v___y_5754_);
v_a_5908_ = lean_ctor_get(v___x_5906_, 0);
v_isSharedCheck_5915_ = !lean_is_exclusive(v___x_5906_);
if (v_isSharedCheck_5915_ == 0)
{
v___x_5910_ = v___x_5906_;
v_isShared_5911_ = v_isSharedCheck_5915_;
goto v_resetjp_5909_;
}
else
{
lean_inc(v_a_5908_);
lean_dec(v___x_5906_);
v___x_5910_ = lean_box(0);
v_isShared_5911_ = v_isSharedCheck_5915_;
goto v_resetjp_5909_;
}
v_resetjp_5909_:
{
lean_object* v___x_5913_; 
if (v_isShared_5911_ == 0)
{
v___x_5913_ = v___x_5910_;
goto v_reusejp_5912_;
}
else
{
lean_object* v_reuseFailAlloc_5914_; 
v_reuseFailAlloc_5914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5914_, 0, v_a_5908_);
v___x_5913_ = v_reuseFailAlloc_5914_;
goto v_reusejp_5912_;
}
v_reusejp_5912_:
{
return v___x_5913_;
}
}
}
}
}
else
{
uint8_t v___x_5916_; 
lean_inc_ref(v_packages_5786_);
v___x_5916_ = lean_nat_dec_lt(v___x_5870_, v___x_5853_);
if (v___x_5916_ == 0)
{
lean_dec_ref(v_s_5869_);
lean_dec_ref(v_depConfigs_5788_);
lean_dec_ref(v_pkg_5762_);
lean_dec_ref(v_leanOpts_5760_);
lean_dec_ref(v___y_5759_);
v_ws_5809_ = v_a_5763_;
v_packages_5810_ = v_packages_5786_;
v_depIdxs_5811_ = v___x_5854_;
v___y_5812_ = v___y_5764_;
goto v___jp_5808_;
}
else
{
size_t v___x_5917_; size_t v___x_5918_; lean_object* v___x_5919_; 
lean_dec_ref(v___x_5854_);
lean_dec_ref(v_packages_5786_);
lean_dec_ref(v_a_5763_);
v___x_5917_ = lean_usize_of_nat(v___x_5853_);
v___x_5918_ = ((size_t)0ULL);
v___x_5919_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1(v_pkg_5762_, v___y_5758_, v___y_5759_, v_leanOpts_5760_, v_reconfigure_5761_, v_depConfigs_5788_, v___x_5917_, v___x_5918_, v_s_5869_, v___y_5764_);
lean_dec_ref(v_depConfigs_5788_);
if (lean_obj_tag(v___x_5919_) == 0)
{
lean_object* v_a_5920_; 
v_a_5920_ = lean_ctor_get(v___x_5919_, 0);
lean_inc(v_a_5920_);
lean_dec_ref(v___x_5919_);
v_____x_5848_ = v_a_5920_;
v___y_5849_ = v___y_5764_;
goto v___jp_5847_;
}
else
{
lean_object* v_a_5921_; lean_object* v___x_5923_; uint8_t v_isShared_5924_; uint8_t v_isSharedCheck_5928_; 
lean_dec(v_wsIdx_5787_);
lean_dec_ref(v_leanOpts_5755_);
lean_dec_ref(v___y_5754_);
v_a_5921_ = lean_ctor_get(v___x_5919_, 0);
v_isSharedCheck_5928_ = !lean_is_exclusive(v___x_5919_);
if (v_isSharedCheck_5928_ == 0)
{
v___x_5923_ = v___x_5919_;
v_isShared_5924_ = v_isSharedCheck_5928_;
goto v_resetjp_5922_;
}
else
{
lean_inc(v_a_5921_);
lean_dec(v___x_5919_);
v___x_5923_ = lean_box(0);
v_isShared_5924_ = v_isSharedCheck_5928_;
goto v_resetjp_5922_;
}
v_resetjp_5922_:
{
lean_object* v___x_5926_; 
if (v_isShared_5924_ == 0)
{
v___x_5926_ = v___x_5923_;
goto v_reusejp_5925_;
}
else
{
lean_object* v_reuseFailAlloc_5927_; 
v_reuseFailAlloc_5927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5927_, 0, v_a_5921_);
v___x_5926_ = v_reuseFailAlloc_5927_;
goto v_reusejp_5925_;
}
v_reusejp_5925_:
{
return v___x_5926_;
}
}
}
}
}
v___jp_5766_:
{
lean_object* v___x_5768_; lean_object* v___x_5769_; lean_object* v___x_5770_; 
v___x_5768_ = lean_box(0);
v___x_5769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5769_, 0, v___x_5768_);
lean_ctor_set(v___x_5769_, 1, v___y_5767_);
v___x_5770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5770_, 0, v___x_5769_);
return v___x_5770_;
}
v___jp_5771_:
{
lean_object* v___x_5773_; lean_object* v___x_5774_; lean_object* v___x_5775_; 
v___x_5773_ = lean_box(0);
v___x_5774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5774_, 0, v___x_5773_);
lean_ctor_set(v___x_5774_, 1, v___y_5772_);
v___x_5775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5775_, 0, v___x_5774_);
return v___x_5775_;
}
v___jp_5776_:
{
lean_object* v___x_5778_; lean_object* v___x_5779_; lean_object* v___x_5780_; 
v___x_5778_ = lean_box(0);
v___x_5779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5779_, 0, v___x_5778_);
lean_ctor_set(v___x_5779_, 1, v___y_5777_);
v___x_5780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5780_, 0, v___x_5779_);
return v___x_5780_;
}
v___jp_5781_:
{
lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; 
v___x_5783_ = lean_box(0);
v___x_5784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5784_, 0, v___x_5783_);
lean_ctor_set(v___x_5784_, 1, v___y_5782_);
v___x_5785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5785_, 0, v___x_5784_);
return v___x_5785_;
}
v___jp_5789_:
{
lean_object* v___x_5794_; uint8_t v___x_5795_; 
v___x_5794_ = lean_array_get_size(v_packages_5793_);
v___x_5795_ = lean_nat_dec_le(v___y_5790_, v___x_5794_);
lean_dec(v___y_5790_);
if (v___x_5795_ == 0)
{
lean_object* v___x_5796_; lean_object* v___x_5797_; 
lean_dec_ref(v_packages_5793_);
lean_dec_ref(v___y_5791_);
lean_dec(v_wsIdx_5787_);
v___x_5796_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_5797_ = lean_panic_fn_borrowed(v_ws_5792_, v___x_5796_);
lean_dec_ref(v_ws_5792_);
v___y_5772_ = v___x_5797_;
goto v___jp_5771_;
}
else
{
size_t v_sz_5798_; size_t v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; 
v_sz_5798_ = lean_array_size(v___y_5791_);
v___x_5799_ = ((size_t)0ULL);
v___x_5800_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_5793_, v_sz_5798_, v___x_5799_, v___y_5791_);
lean_dec_ref(v_packages_5793_);
v___x_5801_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_5792_, v_wsIdx_5787_, v___x_5800_);
lean_dec(v_wsIdx_5787_);
v___y_5772_ = v___x_5801_;
goto v___jp_5771_;
}
}
v___jp_5802_:
{
lean_object* v_packages_5806_; 
v_packages_5806_ = lean_ctor_get(v_ws_5805_, 4);
lean_inc_ref(v_packages_5806_);
v___y_5790_ = v___y_5803_;
v___y_5791_ = v___y_5804_;
v_ws_5792_ = v_ws_5805_;
v_packages_5793_ = v_packages_5806_;
goto v___jp_5789_;
}
v___jp_5808_:
{
lean_object* v_depsEnd_5813_; uint8_t v___x_5814_; 
v_depsEnd_5813_ = lean_array_get_size(v_packages_5810_);
v___x_5814_ = lean_nat_dec_lt(v_start_5807_, v_depsEnd_5813_);
if (v___x_5814_ == 0)
{
uint8_t v___x_5815_; 
lean_dec_ref(v_leanOpts_5755_);
lean_dec_ref(v___y_5754_);
v___x_5815_ = lean_nat_dec_le(v_depsEnd_5813_, v_depsEnd_5813_);
if (v___x_5815_ == 0)
{
lean_object* v___x_5816_; lean_object* v___x_5817_; 
lean_dec_ref(v_depIdxs_5811_);
lean_dec_ref(v_packages_5810_);
lean_dec(v_wsIdx_5787_);
v___x_5816_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_5817_ = lean_panic_fn_borrowed(v_ws_5809_, v___x_5816_);
lean_dec_ref(v_ws_5809_);
v___y_5767_ = v___x_5817_;
goto v___jp_5766_;
}
else
{
size_t v_sz_5818_; size_t v___x_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; 
v_sz_5818_ = lean_array_size(v_depIdxs_5811_);
v___x_5819_ = ((size_t)0ULL);
v___x_5820_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_5810_, v_sz_5818_, v___x_5819_, v_depIdxs_5811_);
lean_dec_ref(v_packages_5810_);
v___x_5821_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_5809_, v_wsIdx_5787_, v___x_5820_);
lean_dec(v_wsIdx_5787_);
v___y_5767_ = v___x_5821_;
goto v___jp_5766_;
}
}
else
{
uint8_t v___x_5822_; 
v___x_5822_ = lean_nat_dec_le(v_depsEnd_5813_, v_depsEnd_5813_);
if (v___x_5822_ == 0)
{
if (v___x_5814_ == 0)
{
lean_dec_ref(v_leanOpts_5755_);
lean_dec_ref(v___y_5754_);
v___y_5790_ = v_depsEnd_5813_;
v___y_5791_ = v_depIdxs_5811_;
v_ws_5792_ = v_ws_5809_;
v_packages_5793_ = v_packages_5810_;
goto v___jp_5789_;
}
else
{
size_t v___x_5823_; size_t v___x_5824_; lean_object* v___x_5825_; 
v___x_5823_ = lean_usize_of_nat(v_start_5807_);
v___x_5824_ = lean_usize_of_nat(v_depsEnd_5813_);
v___x_5825_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11_spec__11(v___y_5753_, v___y_5754_, v_leanOpts_5755_, v_reconfigure_5756_, v___x_5757_, v_packages_5810_, v___x_5823_, v___x_5824_, v_ws_5809_, v___y_5812_);
lean_dec_ref(v_packages_5810_);
if (lean_obj_tag(v___x_5825_) == 0)
{
lean_object* v_a_5826_; 
v_a_5826_ = lean_ctor_get(v___x_5825_, 0);
lean_inc(v_a_5826_);
lean_dec_ref(v___x_5825_);
v___y_5803_ = v_depsEnd_5813_;
v___y_5804_ = v_depIdxs_5811_;
v_ws_5805_ = v_a_5826_;
goto v___jp_5802_;
}
else
{
lean_object* v_a_5827_; lean_object* v___x_5829_; uint8_t v_isShared_5830_; uint8_t v_isSharedCheck_5834_; 
lean_dec_ref(v_depIdxs_5811_);
lean_dec(v_wsIdx_5787_);
v_a_5827_ = lean_ctor_get(v___x_5825_, 0);
v_isSharedCheck_5834_ = !lean_is_exclusive(v___x_5825_);
if (v_isSharedCheck_5834_ == 0)
{
v___x_5829_ = v___x_5825_;
v_isShared_5830_ = v_isSharedCheck_5834_;
goto v_resetjp_5828_;
}
else
{
lean_inc(v_a_5827_);
lean_dec(v___x_5825_);
v___x_5829_ = lean_box(0);
v_isShared_5830_ = v_isSharedCheck_5834_;
goto v_resetjp_5828_;
}
v_resetjp_5828_:
{
lean_object* v___x_5832_; 
if (v_isShared_5830_ == 0)
{
v___x_5832_ = v___x_5829_;
goto v_reusejp_5831_;
}
else
{
lean_object* v_reuseFailAlloc_5833_; 
v_reuseFailAlloc_5833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5833_, 0, v_a_5827_);
v___x_5832_ = v_reuseFailAlloc_5833_;
goto v_reusejp_5831_;
}
v_reusejp_5831_:
{
return v___x_5832_;
}
}
}
}
}
else
{
size_t v___x_5835_; size_t v___x_5836_; lean_object* v___x_5837_; 
v___x_5835_ = lean_usize_of_nat(v_start_5807_);
v___x_5836_ = lean_usize_of_nat(v_depsEnd_5813_);
v___x_5837_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11_spec__11(v___y_5753_, v___y_5754_, v_leanOpts_5755_, v_reconfigure_5756_, v___x_5757_, v_packages_5810_, v___x_5835_, v___x_5836_, v_ws_5809_, v___y_5812_);
lean_dec_ref(v_packages_5810_);
if (lean_obj_tag(v___x_5837_) == 0)
{
lean_object* v_a_5838_; 
v_a_5838_ = lean_ctor_get(v___x_5837_, 0);
lean_inc(v_a_5838_);
lean_dec_ref(v___x_5837_);
v___y_5803_ = v_depsEnd_5813_;
v___y_5804_ = v_depIdxs_5811_;
v_ws_5805_ = v_a_5838_;
goto v___jp_5802_;
}
else
{
lean_object* v_a_5839_; lean_object* v___x_5841_; uint8_t v_isShared_5842_; uint8_t v_isSharedCheck_5846_; 
lean_dec_ref(v_depIdxs_5811_);
lean_dec(v_wsIdx_5787_);
v_a_5839_ = lean_ctor_get(v___x_5837_, 0);
v_isSharedCheck_5846_ = !lean_is_exclusive(v___x_5837_);
if (v_isSharedCheck_5846_ == 0)
{
v___x_5841_ = v___x_5837_;
v_isShared_5842_ = v_isSharedCheck_5846_;
goto v_resetjp_5840_;
}
else
{
lean_inc(v_a_5839_);
lean_dec(v___x_5837_);
v___x_5841_ = lean_box(0);
v_isShared_5842_ = v_isSharedCheck_5846_;
goto v_resetjp_5840_;
}
v_resetjp_5840_:
{
lean_object* v___x_5844_; 
if (v_isShared_5842_ == 0)
{
v___x_5844_ = v___x_5841_;
goto v_reusejp_5843_;
}
else
{
lean_object* v_reuseFailAlloc_5845_; 
v_reuseFailAlloc_5845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5845_, 0, v_a_5839_);
v___x_5844_ = v_reuseFailAlloc_5845_;
goto v_reusejp_5843_;
}
v_reusejp_5843_:
{
return v___x_5844_;
}
}
}
}
}
}
v___jp_5847_:
{
lean_object* v_ws_5850_; lean_object* v_depIdxs_5851_; lean_object* v_packages_5852_; 
v_ws_5850_ = lean_ctor_get(v_____x_5848_, 0);
lean_inc_ref(v_ws_5850_);
v_depIdxs_5851_ = lean_ctor_get(v_____x_5848_, 1);
lean_inc_ref(v_depIdxs_5851_);
lean_dec_ref(v_____x_5848_);
v_packages_5852_ = lean_ctor_get(v_ws_5850_, 4);
lean_inc_ref(v_packages_5852_);
v_ws_5809_ = v_ws_5850_;
v_packages_5810_ = v_packages_5852_;
v_depIdxs_5811_ = v_depIdxs_5851_;
v___y_5812_ = v___y_5849_;
goto v___jp_5808_;
}
v___jp_5855_:
{
lean_object* v___x_5858_; uint8_t v___x_5859_; 
v___x_5858_ = lean_array_get_size(v_packages_5857_);
v___x_5859_ = lean_nat_dec_le(v_start_5807_, v___x_5858_);
if (v___x_5859_ == 0)
{
lean_object* v___x_5860_; lean_object* v___x_5861_; 
lean_dec_ref(v_packages_5857_);
lean_dec_ref(v___x_5854_);
lean_dec(v_wsIdx_5787_);
v___x_5860_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_5861_ = lean_panic_fn_borrowed(v_ws_5856_, v___x_5860_);
lean_dec_ref(v_ws_5856_);
v___y_5782_ = v___x_5861_;
goto v___jp_5781_;
}
else
{
size_t v_sz_5862_; size_t v___x_5863_; lean_object* v___x_5864_; lean_object* v___x_5865_; 
v_sz_5862_ = lean_array_size(v___x_5854_);
v___x_5863_ = ((size_t)0ULL);
v___x_5864_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_5857_, v_sz_5862_, v___x_5863_, v___x_5854_);
lean_dec_ref(v_packages_5857_);
v___x_5865_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_5856_, v_wsIdx_5787_, v___x_5864_);
lean_dec(v_wsIdx_5787_);
v___y_5782_ = v___x_5865_;
goto v___jp_5781_;
}
}
v___jp_5866_:
{
lean_object* v_packages_5868_; 
v_packages_5868_ = lean_ctor_get(v_ws_5867_, 4);
lean_inc_ref(v_packages_5868_);
v_ws_5856_ = v_ws_5867_;
v_packages_5857_ = v_packages_5868_;
goto v___jp_5855_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7___redArg(lean_object* v___y_5929_, lean_object* v___y_5930_, lean_object* v_leanOpts_5931_, uint8_t v_reconfigure_5932_, lean_object* v_a_5933_, lean_object* v___y_5934_, lean_object* v___y_5935_, lean_object* v___y_5936_){
_start:
{
lean_object* v_baseName_5938_; uint8_t v___x_5939_; 
v_baseName_5938_ = lean_ctor_get(v_a_5933_, 1);
v___x_5939_ = l_List_elem___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__11(v_baseName_5938_, v___y_5934_);
if (v___x_5939_ == 0)
{
lean_object* v___x_5940_; lean_object* v___x_5941_; 
lean_inc(v___y_5934_);
lean_inc(v_baseName_5938_);
v___x_5940_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5940_, 0, v_baseName_5938_);
lean_ctor_set(v___x_5940_, 1, v___y_5934_);
lean_inc_ref(v_leanOpts_5931_);
lean_inc_ref(v___y_5930_);
v___x_5941_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11___redArg(v___y_5929_, v___y_5930_, v_leanOpts_5931_, v_reconfigure_5932_, v___x_5940_, v___y_5929_, v___y_5930_, v_leanOpts_5931_, v_reconfigure_5932_, v_a_5933_, v___y_5935_, v___y_5936_);
lean_dec_ref(v___x_5940_);
return v___x_5941_;
}
else
{
lean_object* v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v_fst_5945_; lean_object* v___x_5947_; uint8_t v_isShared_5948_; uint8_t v_isSharedCheck_5955_; 
lean_inc(v_baseName_5938_);
lean_dec_ref(v___y_5935_);
lean_dec_ref(v_a_5933_);
lean_dec_ref(v_leanOpts_5931_);
lean_dec_ref(v___y_5930_);
v___x_5942_ = lean_box(0);
v___x_5943_ = ((lean_object*)(l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__15___redArg___closed__0));
lean_inc(v___y_5934_);
v___x_5944_ = l_List_partition_loop___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__9_spec__13(v_baseName_5938_, v___x_5939_, v___y_5934_, v___x_5943_);
v_fst_5945_ = lean_ctor_get(v___x_5944_, 0);
v_isSharedCheck_5955_ = !lean_is_exclusive(v___x_5944_);
if (v_isSharedCheck_5955_ == 0)
{
lean_object* v_unused_5956_; 
v_unused_5956_ = lean_ctor_get(v___x_5944_, 1);
lean_dec(v_unused_5956_);
v___x_5947_ = v___x_5944_;
v_isShared_5948_ = v_isSharedCheck_5955_;
goto v_resetjp_5946_;
}
else
{
lean_inc(v_fst_5945_);
lean_dec(v___x_5944_);
v___x_5947_ = lean_box(0);
v_isShared_5948_ = v_isSharedCheck_5955_;
goto v_resetjp_5946_;
}
v_resetjp_5946_:
{
lean_object* v___x_5950_; 
lean_inc(v_baseName_5938_);
if (v_isShared_5948_ == 0)
{
lean_ctor_set_tag(v___x_5947_, 1);
lean_ctor_set(v___x_5947_, 1, v_fst_5945_);
lean_ctor_set(v___x_5947_, 0, v_baseName_5938_);
v___x_5950_ = v___x_5947_;
goto v_reusejp_5949_;
}
else
{
lean_object* v_reuseFailAlloc_5954_; 
v_reuseFailAlloc_5954_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5954_, 0, v_baseName_5938_);
lean_ctor_set(v_reuseFailAlloc_5954_, 1, v_fst_5945_);
v___x_5950_ = v_reuseFailAlloc_5954_;
goto v_reusejp_5949_;
}
v_reusejp_5949_:
{
lean_object* v___x_5951_; lean_object* v___x_5952_; lean_object* v___x_5953_; 
v___x_5951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5951_, 0, v_baseName_5938_);
lean_ctor_set(v___x_5951_, 1, v___x_5942_);
v___x_5952_ = l_List_appendTR___redArg(v___x_5950_, v___x_5951_);
v___x_5953_ = l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6___redArg(v___x_5952_, v___y_5936_);
return v___x_5953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11_spec__11(lean_object* v___y_5957_, lean_object* v___y_5958_, lean_object* v_leanOpts_5959_, uint8_t v_reconfigure_5960_, lean_object* v___x_5961_, lean_object* v_as_5962_, size_t v_i_5963_, size_t v_stop_5964_, lean_object* v_b_5965_, lean_object* v___y_5966_){
_start:
{
uint8_t v___x_5968_; 
v___x_5968_ = lean_usize_dec_eq(v_i_5963_, v_stop_5964_);
if (v___x_5968_ == 0)
{
lean_object* v___x_5969_; lean_object* v___x_5970_; 
v___x_5969_ = lean_array_uget_borrowed(v_as_5962_, v_i_5963_);
lean_inc(v___x_5969_);
lean_inc_ref(v_leanOpts_5959_);
lean_inc_ref(v___y_5958_);
v___x_5970_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7___redArg(v___y_5957_, v___y_5958_, v_leanOpts_5959_, v_reconfigure_5960_, v___x_5969_, v___x_5961_, v_b_5965_, v___y_5966_);
if (lean_obj_tag(v___x_5970_) == 0)
{
lean_object* v_a_5971_; lean_object* v_snd_5972_; size_t v___x_5973_; size_t v___x_5974_; 
v_a_5971_ = lean_ctor_get(v___x_5970_, 0);
lean_inc(v_a_5971_);
lean_dec_ref(v___x_5970_);
v_snd_5972_ = lean_ctor_get(v_a_5971_, 1);
lean_inc(v_snd_5972_);
lean_dec(v_a_5971_);
v___x_5973_ = ((size_t)1ULL);
v___x_5974_ = lean_usize_add(v_i_5963_, v___x_5973_);
v_i_5963_ = v___x_5974_;
v_b_5965_ = v_snd_5972_;
goto _start;
}
else
{
lean_object* v_a_5976_; lean_object* v___x_5978_; uint8_t v_isShared_5979_; uint8_t v_isSharedCheck_5983_; 
lean_dec_ref(v_leanOpts_5959_);
lean_dec_ref(v___y_5958_);
v_a_5976_ = lean_ctor_get(v___x_5970_, 0);
v_isSharedCheck_5983_ = !lean_is_exclusive(v___x_5970_);
if (v_isSharedCheck_5983_ == 0)
{
v___x_5978_ = v___x_5970_;
v_isShared_5979_ = v_isSharedCheck_5983_;
goto v_resetjp_5977_;
}
else
{
lean_inc(v_a_5976_);
lean_dec(v___x_5970_);
v___x_5978_ = lean_box(0);
v_isShared_5979_ = v_isSharedCheck_5983_;
goto v_resetjp_5977_;
}
v_resetjp_5977_:
{
lean_object* v___x_5981_; 
if (v_isShared_5979_ == 0)
{
v___x_5981_ = v___x_5978_;
goto v_reusejp_5980_;
}
else
{
lean_object* v_reuseFailAlloc_5982_; 
v_reuseFailAlloc_5982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5982_, 0, v_a_5976_);
v___x_5981_ = v_reuseFailAlloc_5982_;
goto v_reusejp_5980_;
}
v_reusejp_5980_:
{
return v___x_5981_;
}
}
}
}
else
{
lean_object* v___x_5984_; 
lean_dec_ref(v_leanOpts_5959_);
lean_dec_ref(v___y_5958_);
v___x_5984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5984_, 0, v_b_5965_);
return v___x_5984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11_spec__11___boxed(lean_object* v___y_5985_, lean_object* v___y_5986_, lean_object* v_leanOpts_5987_, lean_object* v_reconfigure_5988_, lean_object* v___x_5989_, lean_object* v_as_5990_, lean_object* v_i_5991_, lean_object* v_stop_5992_, lean_object* v_b_5993_, lean_object* v___y_5994_, lean_object* v___y_5995_){
_start:
{
uint8_t v_reconfigure_boxed_5996_; size_t v_i_boxed_5997_; size_t v_stop_boxed_5998_; lean_object* v_res_5999_; 
v_reconfigure_boxed_5996_ = lean_unbox(v_reconfigure_5988_);
v_i_boxed_5997_ = lean_unbox_usize(v_i_5991_);
lean_dec(v_i_5991_);
v_stop_boxed_5998_ = lean_unbox_usize(v_stop_5992_);
lean_dec(v_stop_5992_);
v_res_5999_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11_spec__11(v___y_5985_, v___y_5986_, v_leanOpts_5987_, v_reconfigure_boxed_5996_, v___x_5989_, v_as_5990_, v_i_boxed_5997_, v_stop_boxed_5998_, v_b_5993_, v___y_5994_);
lean_dec_ref(v___y_5994_);
lean_dec_ref(v_as_5990_);
lean_dec(v___x_5989_);
lean_dec(v___y_5985_);
return v_res_5999_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7___redArg___boxed(lean_object* v___y_6000_, lean_object* v___y_6001_, lean_object* v_leanOpts_6002_, lean_object* v_reconfigure_6003_, lean_object* v_a_6004_, lean_object* v___y_6005_, lean_object* v___y_6006_, lean_object* v___y_6007_, lean_object* v___y_6008_){
_start:
{
uint8_t v_reconfigure_boxed_6009_; lean_object* v_res_6010_; 
v_reconfigure_boxed_6009_ = lean_unbox(v_reconfigure_6003_);
v_res_6010_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7___redArg(v___y_6000_, v___y_6001_, v_leanOpts_6002_, v_reconfigure_boxed_6009_, v_a_6004_, v___y_6005_, v___y_6006_, v___y_6007_);
lean_dec_ref(v___y_6007_);
lean_dec(v___y_6005_);
lean_dec(v___y_6000_);
return v_res_6010_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11___redArg___boxed(lean_object* v___y_6011_, lean_object* v___y_6012_, lean_object* v_leanOpts_6013_, lean_object* v_reconfigure_6014_, lean_object* v___x_6015_, lean_object* v___y_6016_, lean_object* v___y_6017_, lean_object* v_leanOpts_6018_, lean_object* v_reconfigure_6019_, lean_object* v_pkg_6020_, lean_object* v_a_6021_, lean_object* v___y_6022_, lean_object* v___y_6023_){
_start:
{
uint8_t v_reconfigure_boxed_6024_; uint8_t v_reconfigure_boxed_6025_; lean_object* v_res_6026_; 
v_reconfigure_boxed_6024_ = lean_unbox(v_reconfigure_6014_);
v_reconfigure_boxed_6025_ = lean_unbox(v_reconfigure_6019_);
v_res_6026_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11___redArg(v___y_6011_, v___y_6012_, v_leanOpts_6013_, v_reconfigure_boxed_6024_, v___x_6015_, v___y_6016_, v___y_6017_, v_leanOpts_6018_, v_reconfigure_boxed_6025_, v_pkg_6020_, v_a_6021_, v___y_6022_);
lean_dec_ref(v___y_6022_);
lean_dec(v___y_6016_);
lean_dec(v___x_6015_);
lean_dec(v___y_6011_);
return v_res_6026_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1(lean_object* v___y_6027_, lean_object* v___y_6028_, lean_object* v_leanOpts_6029_, uint8_t v_reconfigure_6030_, lean_object* v_ws_6031_, lean_object* v_root_6032_, lean_object* v_stack_6033_, lean_object* v___y_6034_){
_start:
{
lean_object* v___x_6036_; 
v___x_6036_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7___redArg(v___y_6027_, v___y_6028_, v_leanOpts_6029_, v_reconfigure_6030_, v_root_6032_, v_stack_6033_, v_ws_6031_, v___y_6034_);
if (lean_obj_tag(v___x_6036_) == 0)
{
lean_object* v_a_6037_; lean_object* v___x_6039_; uint8_t v_isShared_6040_; uint8_t v_isSharedCheck_6045_; 
v_a_6037_ = lean_ctor_get(v___x_6036_, 0);
v_isSharedCheck_6045_ = !lean_is_exclusive(v___x_6036_);
if (v_isSharedCheck_6045_ == 0)
{
v___x_6039_ = v___x_6036_;
v_isShared_6040_ = v_isSharedCheck_6045_;
goto v_resetjp_6038_;
}
else
{
lean_inc(v_a_6037_);
lean_dec(v___x_6036_);
v___x_6039_ = lean_box(0);
v_isShared_6040_ = v_isSharedCheck_6045_;
goto v_resetjp_6038_;
}
v_resetjp_6038_:
{
lean_object* v_snd_6041_; lean_object* v___x_6043_; 
v_snd_6041_ = lean_ctor_get(v_a_6037_, 1);
lean_inc(v_snd_6041_);
lean_dec(v_a_6037_);
if (v_isShared_6040_ == 0)
{
lean_ctor_set(v___x_6039_, 0, v_snd_6041_);
v___x_6043_ = v___x_6039_;
goto v_reusejp_6042_;
}
else
{
lean_object* v_reuseFailAlloc_6044_; 
v_reuseFailAlloc_6044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6044_, 0, v_snd_6041_);
v___x_6043_ = v_reuseFailAlloc_6044_;
goto v_reusejp_6042_;
}
v_reusejp_6042_:
{
return v___x_6043_;
}
}
}
else
{
lean_object* v_a_6046_; lean_object* v___x_6048_; uint8_t v_isShared_6049_; uint8_t v_isSharedCheck_6053_; 
v_a_6046_ = lean_ctor_get(v___x_6036_, 0);
v_isSharedCheck_6053_ = !lean_is_exclusive(v___x_6036_);
if (v_isSharedCheck_6053_ == 0)
{
v___x_6048_ = v___x_6036_;
v_isShared_6049_ = v_isSharedCheck_6053_;
goto v_resetjp_6047_;
}
else
{
lean_inc(v_a_6046_);
lean_dec(v___x_6036_);
v___x_6048_ = lean_box(0);
v_isShared_6049_ = v_isSharedCheck_6053_;
goto v_resetjp_6047_;
}
v_resetjp_6047_:
{
lean_object* v___x_6051_; 
if (v_isShared_6049_ == 0)
{
v___x_6051_ = v___x_6048_;
goto v_reusejp_6050_;
}
else
{
lean_object* v_reuseFailAlloc_6052_; 
v_reuseFailAlloc_6052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6052_, 0, v_a_6046_);
v___x_6051_ = v_reuseFailAlloc_6052_;
goto v_reusejp_6050_;
}
v_reusejp_6050_:
{
return v___x_6051_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1___boxed(lean_object* v___y_6054_, lean_object* v___y_6055_, lean_object* v_leanOpts_6056_, lean_object* v_reconfigure_6057_, lean_object* v_ws_6058_, lean_object* v_root_6059_, lean_object* v_stack_6060_, lean_object* v___y_6061_, lean_object* v___y_6062_){
_start:
{
uint8_t v_reconfigure_boxed_6063_; lean_object* v_res_6064_; 
v_reconfigure_boxed_6063_ = lean_unbox(v_reconfigure_6057_);
v_res_6064_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1(v___y_6054_, v___y_6055_, v_leanOpts_6056_, v_reconfigure_boxed_6063_, v_ws_6058_, v_root_6059_, v_stack_6060_, v___y_6061_);
lean_dec_ref(v___y_6061_);
lean_dec(v_stack_6060_);
lean_dec(v___y_6054_);
return v_res_6064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2_spec__5(lean_object* v_as_6065_, size_t v_i_6066_, size_t v_stop_6067_, lean_object* v_b_6068_){
_start:
{
uint8_t v___x_6069_; 
v___x_6069_ = lean_usize_dec_eq(v_i_6066_, v_stop_6067_);
if (v___x_6069_ == 0)
{
lean_object* v___x_6070_; lean_object* v_name_6071_; lean_object* v___x_6072_; size_t v___x_6073_; size_t v___x_6074_; 
v___x_6070_ = lean_array_uget_borrowed(v_as_6065_, v_i_6066_);
v_name_6071_ = lean_ctor_get(v___x_6070_, 0);
lean_inc(v___x_6070_);
lean_inc(v_name_6071_);
v___x_6072_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_6071_, v___x_6070_, v_b_6068_);
v___x_6073_ = ((size_t)1ULL);
v___x_6074_ = lean_usize_add(v_i_6066_, v___x_6073_);
v_i_6066_ = v___x_6074_;
v_b_6068_ = v___x_6072_;
goto _start;
}
else
{
return v_b_6068_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2_spec__5___boxed(lean_object* v_as_6076_, lean_object* v_i_6077_, lean_object* v_stop_6078_, lean_object* v_b_6079_){
_start:
{
size_t v_i_boxed_6080_; size_t v_stop_boxed_6081_; lean_object* v_res_6082_; 
v_i_boxed_6080_ = lean_unbox_usize(v_i_6077_);
lean_dec(v_i_6077_);
v_stop_boxed_6081_ = lean_unbox_usize(v_stop_6078_);
lean_dec(v_stop_6078_);
v_res_6082_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2_spec__5(v_as_6076_, v_i_boxed_6080_, v_stop_boxed_6081_, v_b_6079_);
lean_dec_ref(v_as_6076_);
return v_res_6082_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2(lean_object* v_as_6083_, size_t v_i_6084_, size_t v_stop_6085_, lean_object* v_b_6086_){
_start:
{
uint8_t v___x_6087_; 
v___x_6087_ = lean_usize_dec_eq(v_i_6084_, v_stop_6085_);
if (v___x_6087_ == 0)
{
lean_object* v___x_6088_; lean_object* v_name_6089_; lean_object* v___x_6090_; size_t v___x_6091_; size_t v___x_6092_; lean_object* v___x_6093_; 
v___x_6088_ = lean_array_uget_borrowed(v_as_6083_, v_i_6084_);
v_name_6089_ = lean_ctor_get(v___x_6088_, 0);
lean_inc(v___x_6088_);
lean_inc(v_name_6089_);
v___x_6090_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_6089_, v___x_6088_, v_b_6086_);
v___x_6091_ = ((size_t)1ULL);
v___x_6092_ = lean_usize_add(v_i_6084_, v___x_6091_);
v___x_6093_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2_spec__5(v_as_6083_, v___x_6092_, v_stop_6085_, v___x_6090_);
return v___x_6093_;
}
else
{
return v_b_6086_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2___boxed(lean_object* v_as_6094_, lean_object* v_i_6095_, lean_object* v_stop_6096_, lean_object* v_b_6097_){
_start:
{
size_t v_i_boxed_6098_; size_t v_stop_boxed_6099_; lean_object* v_res_6100_; 
v_i_boxed_6098_ = lean_unbox_usize(v_i_6095_);
lean_dec(v_i_6095_);
v_stop_boxed_6099_ = lean_unbox_usize(v_stop_6096_);
lean_dec(v_stop_6096_);
v_res_6100_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2(v_as_6094_, v_i_boxed_6098_, v_stop_boxed_6099_, v_b_6097_);
lean_dec_ref(v_as_6094_);
return v_res_6100_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps(lean_object* v_ws_6110_, lean_object* v_manifest_6111_, lean_object* v_leanOpts_6112_, uint8_t v_reconfigure_6113_, lean_object* v_overrides_6114_, lean_object* v_a_6115_){
_start:
{
lean_object* v___y_6118_; lean_object* v___y_6119_; lean_object* v___y_6120_; lean_object* v___y_6121_; lean_object* v___y_6125_; lean_object* v___y_6126_; lean_object* v___y_6127_; lean_object* v___y_6128_; lean_object* v___y_6129_; lean_object* v___y_6130_; lean_object* v___y_6138_; lean_object* v___y_6139_; lean_object* v___y_6140_; lean_object* v___y_6141_; lean_object* v___y_6142_; lean_object* v___y_6143_; lean_object* v___y_6154_; lean_object* v___y_6155_; lean_object* v___y_6156_; lean_object* v___y_6157_; lean_object* v_packagesDir_x3f_6199_; lean_object* v_packages_6200_; lean_object* v___y_6202_; lean_object* v___y_6203_; lean_object* v___y_6216_; lean_object* v___x_6224_; lean_object* v___x_6225_; uint8_t v___x_6226_; 
v_packagesDir_x3f_6199_ = lean_ctor_get(v_manifest_6111_, 2);
lean_inc(v_packagesDir_x3f_6199_);
v_packages_6200_ = lean_ctor_get(v_manifest_6111_, 3);
lean_inc_ref(v_packages_6200_);
lean_dec_ref(v_manifest_6111_);
v___x_6224_ = lean_array_get_size(v_packages_6200_);
v___x_6225_ = lean_unsigned_to_nat(0u);
v___x_6226_ = lean_nat_dec_eq(v___x_6224_, v___x_6225_);
if (v___x_6226_ == 0)
{
lean_object* v_packages_6227_; lean_object* v___x_6228_; lean_object* v_config_6229_; lean_object* v_toWorkspaceConfig_6230_; lean_object* v___x_6231_; lean_object* v___x_6232_; lean_object* v___x_6233_; uint8_t v___x_6234_; 
v_packages_6227_ = lean_ctor_get(v_ws_6110_, 4);
v___x_6228_ = lean_array_fget_borrowed(v_packages_6227_, v___x_6225_);
v_config_6229_ = lean_ctor_get(v___x_6228_, 6);
v_toWorkspaceConfig_6230_ = lean_ctor_get(v_config_6229_, 0);
lean_inc_ref(v_toWorkspaceConfig_6230_);
v___x_6231_ = l_System_FilePath_normalize(v_toWorkspaceConfig_6230_);
v___x_6232_ = l_Lake_mkRelPathString(v___x_6231_);
v___x_6233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6233_, 0, v___x_6232_);
v___x_6234_ = l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__3(v_packagesDir_x3f_6199_, v___x_6233_);
lean_dec_ref(v___x_6233_);
if (v___x_6234_ == 0)
{
lean_object* v___x_6235_; lean_object* v___x_6236_; 
v___x_6235_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__4));
lean_inc_ref(v_a_6115_);
v___x_6236_ = lean_apply_2(v_a_6115_, v___x_6235_, lean_box(0));
v___y_6216_ = v_a_6115_;
goto v___jp_6215_;
}
else
{
v___y_6216_ = v_a_6115_;
goto v___jp_6215_;
}
}
else
{
v___y_6216_ = v_a_6115_;
goto v___jp_6215_;
}
v___jp_6117_:
{
lean_object* v___x_6122_; lean_object* v___x_6123_; 
v___x_6122_ = lean_box(0);
v___x_6123_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1(v___y_6121_, v___y_6119_, v_leanOpts_6112_, v_reconfigure_6113_, v_ws_6110_, v___y_6120_, v___x_6122_, v___y_6118_);
lean_dec(v___y_6121_);
return v___x_6123_;
}
v___jp_6124_:
{
if (lean_obj_tag(v___y_6130_) == 0)
{
lean_dec_ref(v___y_6126_);
v___y_6118_ = v___y_6127_;
v___y_6119_ = v___y_6128_;
v___y_6120_ = v___y_6129_;
v___y_6121_ = v___y_6130_;
goto v___jp_6117_;
}
else
{
lean_object* v___x_6131_; uint8_t v___x_6132_; 
v___x_6131_ = lean_array_get_size(v___y_6126_);
lean_dec_ref(v___y_6126_);
v___x_6132_ = lean_nat_dec_eq(v___x_6131_, v___y_6125_);
if (v___x_6132_ == 0)
{
lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; 
lean_dec_ref(v___y_6129_);
lean_dec_ref(v___y_6128_);
lean_dec_ref(v_leanOpts_6112_);
lean_dec_ref(v_ws_6110_);
v___x_6133_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__1));
lean_inc_ref(v___y_6127_);
v___x_6134_ = lean_apply_2(v___y_6127_, v___x_6133_, lean_box(0));
v___x_6135_ = lean_box(0);
v___x_6136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6136_, 0, v___x_6135_);
return v___x_6136_;
}
else
{
v___y_6118_ = v___y_6127_;
v___y_6119_ = v___y_6128_;
v___y_6120_ = v___y_6129_;
v___y_6121_ = v___y_6130_;
goto v___jp_6117_;
}
}
}
v___jp_6137_:
{
lean_object* v___x_6144_; uint8_t v___x_6145_; 
v___x_6144_ = lean_array_get_size(v_overrides_6114_);
v___x_6145_ = lean_nat_dec_lt(v___y_6140_, v___x_6144_);
if (v___x_6145_ == 0)
{
v___y_6125_ = v___y_6140_;
v___y_6126_ = v___y_6139_;
v___y_6127_ = v___y_6138_;
v___y_6128_ = v___y_6141_;
v___y_6129_ = v___y_6142_;
v___y_6130_ = v___y_6143_;
goto v___jp_6124_;
}
else
{
uint8_t v___x_6146_; 
v___x_6146_ = lean_nat_dec_le(v___x_6144_, v___x_6144_);
if (v___x_6146_ == 0)
{
if (v___x_6145_ == 0)
{
v___y_6125_ = v___y_6140_;
v___y_6126_ = v___y_6139_;
v___y_6127_ = v___y_6138_;
v___y_6128_ = v___y_6141_;
v___y_6129_ = v___y_6142_;
v___y_6130_ = v___y_6143_;
goto v___jp_6124_;
}
else
{
size_t v___x_6147_; size_t v___x_6148_; lean_object* v___x_6149_; 
v___x_6147_ = ((size_t)0ULL);
v___x_6148_ = lean_usize_of_nat(v___x_6144_);
v___x_6149_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2(v_overrides_6114_, v___x_6147_, v___x_6148_, v___y_6143_);
v___y_6125_ = v___y_6140_;
v___y_6126_ = v___y_6139_;
v___y_6127_ = v___y_6138_;
v___y_6128_ = v___y_6141_;
v___y_6129_ = v___y_6142_;
v___y_6130_ = v___x_6149_;
goto v___jp_6124_;
}
}
else
{
size_t v___x_6150_; size_t v___x_6151_; lean_object* v___x_6152_; 
v___x_6150_ = ((size_t)0ULL);
v___x_6151_ = lean_usize_of_nat(v___x_6144_);
v___x_6152_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2(v_overrides_6114_, v___x_6150_, v___x_6151_, v___y_6143_);
v___y_6125_ = v___y_6140_;
v___y_6126_ = v___y_6139_;
v___y_6127_ = v___y_6138_;
v___y_6128_ = v___y_6141_;
v___y_6129_ = v___y_6142_;
v___y_6130_ = v___x_6152_;
goto v___jp_6124_;
}
}
}
v___jp_6153_:
{
lean_object* v_packages_6158_; lean_object* v___x_6159_; lean_object* v_dir_6160_; lean_object* v_depConfigs_6161_; lean_object* v___x_6162_; 
v_packages_6158_ = lean_ctor_get(v_ws_6110_, 4);
v___x_6159_ = lean_array_fget_borrowed(v_packages_6158_, v___y_6155_);
v_dir_6160_ = lean_ctor_get(v___x_6159_, 4);
v_depConfigs_6161_ = lean_ctor_get(v___x_6159_, 12);
v___x_6162_ = l___private_Lake_Load_Resolve_0__Lake_validateManifest(v___y_6157_, v_depConfigs_6161_, v___y_6154_);
if (lean_obj_tag(v___x_6162_) == 0)
{
lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; lean_object* v___x_6167_; 
lean_dec_ref(v___x_6162_);
v___x_6163_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_dir_6160_);
v___x_6164_ = l_Lake_joinRelative(v_dir_6160_, v___x_6163_);
v___x_6165_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__2));
v___x_6166_ = l_Lake_joinRelative(v___x_6164_, v___x_6165_);
v___x_6167_ = l_Lake_Manifest_tryLoadEntries(v___x_6166_);
if (lean_obj_tag(v___x_6167_) == 0)
{
lean_object* v_a_6168_; lean_object* v___x_6169_; uint8_t v___x_6170_; 
v_a_6168_ = lean_ctor_get(v___x_6167_, 0);
lean_inc(v_a_6168_);
lean_dec_ref(v___x_6167_);
v___x_6169_ = lean_array_get_size(v_a_6168_);
v___x_6170_ = lean_nat_dec_lt(v___y_6155_, v___x_6169_);
if (v___x_6170_ == 0)
{
lean_dec(v_a_6168_);
lean_inc(v___x_6159_);
lean_inc_ref(v_depConfigs_6161_);
v___y_6138_ = v___y_6154_;
v___y_6139_ = v_depConfigs_6161_;
v___y_6140_ = v___y_6155_;
v___y_6141_ = v___y_6156_;
v___y_6142_ = v___x_6159_;
v___y_6143_ = v___y_6157_;
goto v___jp_6137_;
}
else
{
uint8_t v___x_6171_; 
v___x_6171_ = lean_nat_dec_le(v___x_6169_, v___x_6169_);
if (v___x_6171_ == 0)
{
if (v___x_6170_ == 0)
{
lean_dec(v_a_6168_);
lean_inc(v___x_6159_);
lean_inc_ref(v_depConfigs_6161_);
v___y_6138_ = v___y_6154_;
v___y_6139_ = v_depConfigs_6161_;
v___y_6140_ = v___y_6155_;
v___y_6141_ = v___y_6156_;
v___y_6142_ = v___x_6159_;
v___y_6143_ = v___y_6157_;
goto v___jp_6137_;
}
else
{
size_t v___x_6172_; size_t v___x_6173_; lean_object* v___x_6174_; 
v___x_6172_ = ((size_t)0ULL);
v___x_6173_ = lean_usize_of_nat(v___x_6169_);
v___x_6174_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2(v_a_6168_, v___x_6172_, v___x_6173_, v___y_6157_);
lean_dec(v_a_6168_);
lean_inc(v___x_6159_);
lean_inc_ref(v_depConfigs_6161_);
v___y_6138_ = v___y_6154_;
v___y_6139_ = v_depConfigs_6161_;
v___y_6140_ = v___y_6155_;
v___y_6141_ = v___y_6156_;
v___y_6142_ = v___x_6159_;
v___y_6143_ = v___x_6174_;
goto v___jp_6137_;
}
}
else
{
size_t v___x_6175_; size_t v___x_6176_; lean_object* v___x_6177_; 
v___x_6175_ = ((size_t)0ULL);
v___x_6176_ = lean_usize_of_nat(v___x_6169_);
v___x_6177_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2(v_a_6168_, v___x_6175_, v___x_6176_, v___y_6157_);
lean_dec(v_a_6168_);
lean_inc(v___x_6159_);
lean_inc_ref(v_depConfigs_6161_);
v___y_6138_ = v___y_6154_;
v___y_6139_ = v_depConfigs_6161_;
v___y_6140_ = v___y_6155_;
v___y_6141_ = v___y_6156_;
v___y_6142_ = v___x_6159_;
v___y_6143_ = v___x_6177_;
goto v___jp_6137_;
}
}
}
else
{
lean_object* v_a_6178_; lean_object* v___x_6180_; uint8_t v_isShared_6181_; uint8_t v_isSharedCheck_6190_; 
lean_dec(v___y_6157_);
lean_dec_ref(v___y_6156_);
lean_dec_ref(v_leanOpts_6112_);
lean_dec_ref(v_ws_6110_);
v_a_6178_ = lean_ctor_get(v___x_6167_, 0);
v_isSharedCheck_6190_ = !lean_is_exclusive(v___x_6167_);
if (v_isSharedCheck_6190_ == 0)
{
v___x_6180_ = v___x_6167_;
v_isShared_6181_ = v_isSharedCheck_6190_;
goto v_resetjp_6179_;
}
else
{
lean_inc(v_a_6178_);
lean_dec(v___x_6167_);
v___x_6180_ = lean_box(0);
v_isShared_6181_ = v_isSharedCheck_6190_;
goto v_resetjp_6179_;
}
v_resetjp_6179_:
{
lean_object* v___x_6182_; uint8_t v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6188_; 
v___x_6182_ = lean_io_error_to_string(v_a_6178_);
v___x_6183_ = 3;
v___x_6184_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6184_, 0, v___x_6182_);
lean_ctor_set_uint8(v___x_6184_, sizeof(void*)*1, v___x_6183_);
lean_inc_ref(v___y_6154_);
v___x_6185_ = lean_apply_2(v___y_6154_, v___x_6184_, lean_box(0));
v___x_6186_ = lean_box(0);
if (v_isShared_6181_ == 0)
{
lean_ctor_set(v___x_6180_, 0, v___x_6186_);
v___x_6188_ = v___x_6180_;
goto v_reusejp_6187_;
}
else
{
lean_object* v_reuseFailAlloc_6189_; 
v_reuseFailAlloc_6189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6189_, 0, v___x_6186_);
v___x_6188_ = v_reuseFailAlloc_6189_;
goto v_reusejp_6187_;
}
v_reusejp_6187_:
{
return v___x_6188_;
}
}
}
}
else
{
lean_object* v_a_6191_; lean_object* v___x_6193_; uint8_t v_isShared_6194_; uint8_t v_isSharedCheck_6198_; 
lean_dec(v___y_6157_);
lean_dec_ref(v___y_6156_);
lean_dec_ref(v_leanOpts_6112_);
lean_dec_ref(v_ws_6110_);
v_a_6191_ = lean_ctor_get(v___x_6162_, 0);
v_isSharedCheck_6198_ = !lean_is_exclusive(v___x_6162_);
if (v_isSharedCheck_6198_ == 0)
{
v___x_6193_ = v___x_6162_;
v_isShared_6194_ = v_isSharedCheck_6198_;
goto v_resetjp_6192_;
}
else
{
lean_inc(v_a_6191_);
lean_dec(v___x_6162_);
v___x_6193_ = lean_box(0);
v_isShared_6194_ = v_isSharedCheck_6198_;
goto v_resetjp_6192_;
}
v_resetjp_6192_:
{
lean_object* v___x_6196_; 
if (v_isShared_6194_ == 0)
{
v___x_6196_ = v___x_6193_;
goto v_reusejp_6195_;
}
else
{
lean_object* v_reuseFailAlloc_6197_; 
v_reuseFailAlloc_6197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6197_, 0, v_a_6191_);
v___x_6196_ = v_reuseFailAlloc_6197_;
goto v_reusejp_6195_;
}
v_reusejp_6195_:
{
return v___x_6196_;
}
}
}
}
v___jp_6201_:
{
lean_object* v_pkgEntries_6204_; lean_object* v___x_6205_; lean_object* v___x_6206_; uint8_t v___x_6207_; 
v_pkgEntries_6204_ = lean_box(1);
v___x_6205_ = lean_unsigned_to_nat(0u);
v___x_6206_ = lean_array_get_size(v_packages_6200_);
v___x_6207_ = lean_nat_dec_lt(v___x_6205_, v___x_6206_);
if (v___x_6207_ == 0)
{
lean_dec_ref(v_packages_6200_);
v___y_6154_ = v___y_6202_;
v___y_6155_ = v___x_6205_;
v___y_6156_ = v___y_6203_;
v___y_6157_ = v_pkgEntries_6204_;
goto v___jp_6153_;
}
else
{
uint8_t v___x_6208_; 
v___x_6208_ = lean_nat_dec_le(v___x_6206_, v___x_6206_);
if (v___x_6208_ == 0)
{
if (v___x_6207_ == 0)
{
lean_dec_ref(v_packages_6200_);
v___y_6154_ = v___y_6202_;
v___y_6155_ = v___x_6205_;
v___y_6156_ = v___y_6203_;
v___y_6157_ = v_pkgEntries_6204_;
goto v___jp_6153_;
}
else
{
size_t v___x_6209_; size_t v___x_6210_; lean_object* v___x_6211_; 
v___x_6209_ = ((size_t)0ULL);
v___x_6210_ = lean_usize_of_nat(v___x_6206_);
v___x_6211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2(v_packages_6200_, v___x_6209_, v___x_6210_, v_pkgEntries_6204_);
lean_dec_ref(v_packages_6200_);
v___y_6154_ = v___y_6202_;
v___y_6155_ = v___x_6205_;
v___y_6156_ = v___y_6203_;
v___y_6157_ = v___x_6211_;
goto v___jp_6153_;
}
}
else
{
size_t v___x_6212_; size_t v___x_6213_; lean_object* v___x_6214_; 
v___x_6212_ = ((size_t)0ULL);
v___x_6213_ = lean_usize_of_nat(v___x_6206_);
v___x_6214_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__2(v_packages_6200_, v___x_6212_, v___x_6213_, v_pkgEntries_6204_);
lean_dec_ref(v_packages_6200_);
v___y_6154_ = v___y_6202_;
v___y_6155_ = v___x_6205_;
v___y_6156_ = v___y_6203_;
v___y_6157_ = v___x_6214_;
goto v___jp_6153_;
}
}
}
v___jp_6215_:
{
if (lean_obj_tag(v_packagesDir_x3f_6199_) == 0)
{
lean_object* v_packages_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; lean_object* v_config_6220_; lean_object* v_toWorkspaceConfig_6221_; lean_object* v___x_6222_; 
v_packages_6217_ = lean_ctor_get(v_ws_6110_, 4);
v___x_6218_ = lean_unsigned_to_nat(0u);
v___x_6219_ = lean_array_fget_borrowed(v_packages_6217_, v___x_6218_);
v_config_6220_ = lean_ctor_get(v___x_6219_, 6);
v_toWorkspaceConfig_6221_ = lean_ctor_get(v_config_6220_, 0);
lean_inc_ref(v_toWorkspaceConfig_6221_);
v___x_6222_ = l_System_FilePath_normalize(v_toWorkspaceConfig_6221_);
v___y_6202_ = v___y_6216_;
v___y_6203_ = v___x_6222_;
goto v___jp_6201_;
}
else
{
lean_object* v_val_6223_; 
v_val_6223_ = lean_ctor_get(v_packagesDir_x3f_6199_, 0);
lean_inc(v_val_6223_);
lean_dec_ref(v_packagesDir_x3f_6199_);
v___y_6202_ = v___y_6216_;
v___y_6203_ = v_val_6223_;
goto v___jp_6201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps___boxed(lean_object* v_ws_6237_, lean_object* v_manifest_6238_, lean_object* v_leanOpts_6239_, lean_object* v_reconfigure_6240_, lean_object* v_overrides_6241_, lean_object* v_a_6242_, lean_object* v_a_6243_){
_start:
{
uint8_t v_reconfigure_boxed_6244_; lean_object* v_res_6245_; 
v_reconfigure_boxed_6244_ = lean_unbox(v_reconfigure_6240_);
v_res_6245_ = l_Lake_Workspace_materializeDeps(v_ws_6237_, v_manifest_6238_, v_leanOpts_6239_, v_reconfigure_boxed_6244_, v_overrides_6241_, v_a_6242_);
lean_dec_ref(v_a_6242_);
lean_dec_ref(v_overrides_6241_);
return v_res_6245_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(lean_object* v___y_6246_, lean_object* v_a_6247_, lean_object* v_as_6248_, size_t v_i_6249_, size_t v_stop_6250_, lean_object* v_b_6251_, lean_object* v___y_6252_){
_start:
{
uint8_t v___x_6254_; 
v___x_6254_ = lean_usize_dec_eq(v_i_6249_, v_stop_6250_);
if (v___x_6254_ == 0)
{
lean_object* v___x_6255_; lean_object* v___x_6256_; 
v___x_6255_ = lean_array_uget_borrowed(v_as_6248_, v_i_6249_);
lean_inc_ref(v___y_6246_);
lean_inc_ref(v___y_6252_);
lean_inc(v_a_6247_);
lean_inc(v___x_6255_);
v___x_6256_ = lean_apply_5(v___y_6246_, v___x_6255_, v_a_6247_, v_b_6251_, v___y_6252_, lean_box(0));
if (lean_obj_tag(v___x_6256_) == 0)
{
lean_object* v_a_6257_; lean_object* v_snd_6258_; size_t v___x_6259_; size_t v___x_6260_; 
v_a_6257_ = lean_ctor_get(v___x_6256_, 0);
lean_inc(v_a_6257_);
lean_dec_ref(v___x_6256_);
v_snd_6258_ = lean_ctor_get(v_a_6257_, 1);
lean_inc(v_snd_6258_);
lean_dec(v_a_6257_);
v___x_6259_ = ((size_t)1ULL);
v___x_6260_ = lean_usize_add(v_i_6249_, v___x_6259_);
v_i_6249_ = v___x_6260_;
v_b_6251_ = v_snd_6258_;
goto _start;
}
else
{
lean_object* v_a_6262_; lean_object* v___x_6264_; uint8_t v_isShared_6265_; uint8_t v_isSharedCheck_6269_; 
lean_dec_ref(v___y_6246_);
v_a_6262_ = lean_ctor_get(v___x_6256_, 0);
v_isSharedCheck_6269_ = !lean_is_exclusive(v___x_6256_);
if (v_isSharedCheck_6269_ == 0)
{
v___x_6264_ = v___x_6256_;
v_isShared_6265_ = v_isSharedCheck_6269_;
goto v_resetjp_6263_;
}
else
{
lean_inc(v_a_6262_);
lean_dec(v___x_6256_);
v___x_6264_ = lean_box(0);
v_isShared_6265_ = v_isSharedCheck_6269_;
goto v_resetjp_6263_;
}
v_resetjp_6263_:
{
lean_object* v___x_6267_; 
if (v_isShared_6265_ == 0)
{
v___x_6267_ = v___x_6264_;
goto v_reusejp_6266_;
}
else
{
lean_object* v_reuseFailAlloc_6268_; 
v_reuseFailAlloc_6268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6268_, 0, v_a_6262_);
v___x_6267_ = v_reuseFailAlloc_6268_;
goto v_reusejp_6266_;
}
v_reusejp_6266_:
{
return v___x_6267_;
}
}
}
}
else
{
lean_object* v___x_6270_; 
lean_dec_ref(v___y_6246_);
v___x_6270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6270_, 0, v_b_6251_);
return v___x_6270_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0___boxed(lean_object* v___y_6271_, lean_object* v_a_6272_, lean_object* v_as_6273_, lean_object* v_i_6274_, lean_object* v_stop_6275_, lean_object* v_b_6276_, lean_object* v___y_6277_, lean_object* v___y_6278_){
_start:
{
size_t v_i_boxed_6279_; size_t v_stop_boxed_6280_; lean_object* v_res_6281_; 
v_i_boxed_6279_ = lean_unbox_usize(v_i_6274_);
lean_dec(v_i_6274_);
v_stop_boxed_6280_ = lean_unbox_usize(v_stop_6275_);
lean_dec(v_stop_6275_);
v_res_6281_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v___y_6271_, v_a_6272_, v_as_6273_, v_i_boxed_6279_, v_stop_boxed_6280_, v_b_6276_, v___y_6277_);
lean_dec_ref(v___y_6277_);
lean_dec_ref(v_as_6273_);
lean_dec(v_a_6272_);
return v_res_6281_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(lean_object* v___y_6282_, lean_object* v___y_6283_, lean_object* v___y_6284_, lean_object* v_leanOpts_6285_, uint8_t v_reconfigure_6286_, lean_object* v_pkg_6287_, lean_object* v_a_6288_, lean_object* v_a_6289_, lean_object* v___y_6290_){
_start:
{
lean_object* v___y_6293_; lean_object* v___y_6298_; lean_object* v___y_6303_; lean_object* v___y_6308_; lean_object* v_packages_6312_; lean_object* v_wsIdx_6313_; lean_object* v_depConfigs_6314_; lean_object* v___y_6316_; lean_object* v___y_6317_; lean_object* v_ws_6318_; lean_object* v_packages_6319_; lean_object* v___y_6329_; lean_object* v___y_6330_; lean_object* v_ws_6331_; lean_object* v_start_6333_; lean_object* v_ws_6335_; lean_object* v_packages_6336_; lean_object* v_depIdxs_6337_; lean_object* v___y_6338_; lean_object* v_____x_6374_; lean_object* v___y_6375_; lean_object* v___x_6379_; lean_object* v___x_6380_; lean_object* v_ws_6382_; lean_object* v_packages_6383_; lean_object* v_ws_6393_; lean_object* v_s_6395_; lean_object* v___x_6396_; uint8_t v___x_6397_; 
v_packages_6312_ = lean_ctor_get(v_a_6289_, 4);
v_wsIdx_6313_ = lean_ctor_get(v_pkg_6287_, 0);
lean_inc(v_wsIdx_6313_);
v_depConfigs_6314_ = lean_ctor_get(v_pkg_6287_, 12);
lean_inc_ref(v_depConfigs_6314_);
v_start_6333_ = lean_array_get_size(v_packages_6312_);
v___x_6379_ = lean_array_get_size(v_depConfigs_6314_);
v___x_6380_ = lean_mk_empty_array_with_capacity(v___x_6379_);
lean_inc_ref(v___x_6380_);
lean_inc_ref(v_a_6289_);
v_s_6395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_6395_, 0, v_a_6289_);
lean_ctor_set(v_s_6395_, 1, v___x_6380_);
v___x_6396_ = lean_unsigned_to_nat(0u);
v___x_6397_ = lean_nat_dec_le(v___x_6379_, v___x_6379_);
if (v___x_6397_ == 0)
{
uint8_t v___x_6398_; 
v___x_6398_ = lean_nat_dec_lt(v___x_6396_, v___x_6379_);
if (v___x_6398_ == 0)
{
uint8_t v___x_6399_; 
lean_dec_ref(v_s_6395_);
lean_dec_ref(v_depConfigs_6314_);
lean_dec_ref(v_pkg_6287_);
lean_dec_ref(v_leanOpts_6285_);
lean_dec_ref(v___y_6283_);
v___x_6399_ = lean_nat_dec_lt(v_start_6333_, v_start_6333_);
if (v___x_6399_ == 0)
{
uint8_t v___x_6400_; 
lean_dec_ref(v___y_6284_);
v___x_6400_ = lean_nat_dec_le(v_start_6333_, v_start_6333_);
if (v___x_6400_ == 0)
{
lean_object* v___x_6401_; lean_object* v___x_6402_; 
lean_dec_ref(v___x_6380_);
lean_dec(v_wsIdx_6313_);
v___x_6401_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_6402_ = lean_panic_fn_borrowed(v_a_6289_, v___x_6401_);
lean_dec_ref(v_a_6289_);
v___y_6303_ = v___x_6402_;
goto v___jp_6302_;
}
else
{
size_t v_sz_6403_; size_t v___x_6404_; lean_object* v___x_6405_; lean_object* v___x_6406_; 
v_sz_6403_ = lean_array_size(v___x_6380_);
v___x_6404_ = ((size_t)0ULL);
v___x_6405_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_6312_, v_sz_6403_, v___x_6404_, v___x_6380_);
v___x_6406_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_a_6289_, v_wsIdx_6313_, v___x_6405_);
lean_dec(v_wsIdx_6313_);
v___y_6303_ = v___x_6406_;
goto v___jp_6302_;
}
}
else
{
uint8_t v___x_6407_; 
lean_inc_ref(v_packages_6312_);
v___x_6407_ = lean_nat_dec_le(v_start_6333_, v_start_6333_);
if (v___x_6407_ == 0)
{
if (v___x_6399_ == 0)
{
lean_dec_ref(v___y_6284_);
v_ws_6382_ = v_a_6289_;
v_packages_6383_ = v_packages_6312_;
goto v___jp_6381_;
}
else
{
size_t v___x_6408_; lean_object* v___x_6409_; 
v___x_6408_ = lean_usize_of_nat(v_start_6333_);
v___x_6409_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v___y_6284_, v_a_6288_, v_packages_6312_, v___x_6408_, v___x_6408_, v_a_6289_, v___y_6290_);
lean_dec_ref(v_packages_6312_);
if (lean_obj_tag(v___x_6409_) == 0)
{
lean_object* v_a_6410_; 
v_a_6410_ = lean_ctor_get(v___x_6409_, 0);
lean_inc(v_a_6410_);
lean_dec_ref(v___x_6409_);
v_ws_6393_ = v_a_6410_;
goto v___jp_6392_;
}
else
{
lean_object* v_a_6411_; lean_object* v___x_6413_; uint8_t v_isShared_6414_; uint8_t v_isSharedCheck_6418_; 
lean_dec_ref(v___x_6380_);
lean_dec(v_wsIdx_6313_);
v_a_6411_ = lean_ctor_get(v___x_6409_, 0);
v_isSharedCheck_6418_ = !lean_is_exclusive(v___x_6409_);
if (v_isSharedCheck_6418_ == 0)
{
v___x_6413_ = v___x_6409_;
v_isShared_6414_ = v_isSharedCheck_6418_;
goto v_resetjp_6412_;
}
else
{
lean_inc(v_a_6411_);
lean_dec(v___x_6409_);
v___x_6413_ = lean_box(0);
v_isShared_6414_ = v_isSharedCheck_6418_;
goto v_resetjp_6412_;
}
v_resetjp_6412_:
{
lean_object* v___x_6416_; 
if (v_isShared_6414_ == 0)
{
v___x_6416_ = v___x_6413_;
goto v_reusejp_6415_;
}
else
{
lean_object* v_reuseFailAlloc_6417_; 
v_reuseFailAlloc_6417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6417_, 0, v_a_6411_);
v___x_6416_ = v_reuseFailAlloc_6417_;
goto v_reusejp_6415_;
}
v_reusejp_6415_:
{
return v___x_6416_;
}
}
}
}
}
else
{
size_t v___x_6419_; lean_object* v___x_6420_; 
v___x_6419_ = lean_usize_of_nat(v_start_6333_);
v___x_6420_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v___y_6284_, v_a_6288_, v_packages_6312_, v___x_6419_, v___x_6419_, v_a_6289_, v___y_6290_);
lean_dec_ref(v_packages_6312_);
if (lean_obj_tag(v___x_6420_) == 0)
{
lean_object* v_a_6421_; 
v_a_6421_ = lean_ctor_get(v___x_6420_, 0);
lean_inc(v_a_6421_);
lean_dec_ref(v___x_6420_);
v_ws_6393_ = v_a_6421_;
goto v___jp_6392_;
}
else
{
lean_object* v_a_6422_; lean_object* v___x_6424_; uint8_t v_isShared_6425_; uint8_t v_isSharedCheck_6429_; 
lean_dec_ref(v___x_6380_);
lean_dec(v_wsIdx_6313_);
v_a_6422_ = lean_ctor_get(v___x_6420_, 0);
v_isSharedCheck_6429_ = !lean_is_exclusive(v___x_6420_);
if (v_isSharedCheck_6429_ == 0)
{
v___x_6424_ = v___x_6420_;
v_isShared_6425_ = v_isSharedCheck_6429_;
goto v_resetjp_6423_;
}
else
{
lean_inc(v_a_6422_);
lean_dec(v___x_6420_);
v___x_6424_ = lean_box(0);
v_isShared_6425_ = v_isSharedCheck_6429_;
goto v_resetjp_6423_;
}
v_resetjp_6423_:
{
lean_object* v___x_6427_; 
if (v_isShared_6425_ == 0)
{
v___x_6427_ = v___x_6424_;
goto v_reusejp_6426_;
}
else
{
lean_object* v_reuseFailAlloc_6428_; 
v_reuseFailAlloc_6428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6428_, 0, v_a_6422_);
v___x_6427_ = v_reuseFailAlloc_6428_;
goto v_reusejp_6426_;
}
v_reusejp_6426_:
{
return v___x_6427_;
}
}
}
}
}
}
else
{
size_t v___x_6430_; size_t v___x_6431_; lean_object* v___x_6432_; 
lean_dec_ref(v___x_6380_);
lean_dec_ref(v_a_6289_);
v___x_6430_ = lean_usize_of_nat(v___x_6379_);
v___x_6431_ = ((size_t)0ULL);
v___x_6432_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1(v_pkg_6287_, v___y_6282_, v___y_6283_, v_leanOpts_6285_, v_reconfigure_6286_, v_depConfigs_6314_, v___x_6430_, v___x_6431_, v_s_6395_, v___y_6290_);
lean_dec_ref(v_depConfigs_6314_);
if (lean_obj_tag(v___x_6432_) == 0)
{
lean_object* v_a_6433_; 
v_a_6433_ = lean_ctor_get(v___x_6432_, 0);
lean_inc(v_a_6433_);
lean_dec_ref(v___x_6432_);
v_____x_6374_ = v_a_6433_;
v___y_6375_ = v___y_6290_;
goto v___jp_6373_;
}
else
{
lean_object* v_a_6434_; lean_object* v___x_6436_; uint8_t v_isShared_6437_; uint8_t v_isSharedCheck_6441_; 
lean_dec(v_wsIdx_6313_);
lean_dec_ref(v___y_6284_);
v_a_6434_ = lean_ctor_get(v___x_6432_, 0);
v_isSharedCheck_6441_ = !lean_is_exclusive(v___x_6432_);
if (v_isSharedCheck_6441_ == 0)
{
v___x_6436_ = v___x_6432_;
v_isShared_6437_ = v_isSharedCheck_6441_;
goto v_resetjp_6435_;
}
else
{
lean_inc(v_a_6434_);
lean_dec(v___x_6432_);
v___x_6436_ = lean_box(0);
v_isShared_6437_ = v_isSharedCheck_6441_;
goto v_resetjp_6435_;
}
v_resetjp_6435_:
{
lean_object* v___x_6439_; 
if (v_isShared_6437_ == 0)
{
v___x_6439_ = v___x_6436_;
goto v_reusejp_6438_;
}
else
{
lean_object* v_reuseFailAlloc_6440_; 
v_reuseFailAlloc_6440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6440_, 0, v_a_6434_);
v___x_6439_ = v_reuseFailAlloc_6440_;
goto v_reusejp_6438_;
}
v_reusejp_6438_:
{
return v___x_6439_;
}
}
}
}
}
else
{
uint8_t v___x_6442_; 
lean_inc_ref(v_packages_6312_);
v___x_6442_ = lean_nat_dec_lt(v___x_6396_, v___x_6379_);
if (v___x_6442_ == 0)
{
lean_dec_ref(v_s_6395_);
lean_dec_ref(v_depConfigs_6314_);
lean_dec_ref(v_pkg_6287_);
lean_dec_ref(v_leanOpts_6285_);
lean_dec_ref(v___y_6283_);
v_ws_6335_ = v_a_6289_;
v_packages_6336_ = v_packages_6312_;
v_depIdxs_6337_ = v___x_6380_;
v___y_6338_ = v___y_6290_;
goto v___jp_6334_;
}
else
{
size_t v___x_6443_; size_t v___x_6444_; lean_object* v___x_6445_; 
lean_dec_ref(v___x_6380_);
lean_dec_ref(v_packages_6312_);
lean_dec_ref(v_a_6289_);
v___x_6443_ = lean_usize_of_nat(v___x_6379_);
v___x_6444_ = ((size_t)0ULL);
v___x_6445_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1(v_pkg_6287_, v___y_6282_, v___y_6283_, v_leanOpts_6285_, v_reconfigure_6286_, v_depConfigs_6314_, v___x_6443_, v___x_6444_, v_s_6395_, v___y_6290_);
lean_dec_ref(v_depConfigs_6314_);
if (lean_obj_tag(v___x_6445_) == 0)
{
lean_object* v_a_6446_; 
v_a_6446_ = lean_ctor_get(v___x_6445_, 0);
lean_inc(v_a_6446_);
lean_dec_ref(v___x_6445_);
v_____x_6374_ = v_a_6446_;
v___y_6375_ = v___y_6290_;
goto v___jp_6373_;
}
else
{
lean_object* v_a_6447_; lean_object* v___x_6449_; uint8_t v_isShared_6450_; uint8_t v_isSharedCheck_6454_; 
lean_dec(v_wsIdx_6313_);
lean_dec_ref(v___y_6284_);
v_a_6447_ = lean_ctor_get(v___x_6445_, 0);
v_isSharedCheck_6454_ = !lean_is_exclusive(v___x_6445_);
if (v_isSharedCheck_6454_ == 0)
{
v___x_6449_ = v___x_6445_;
v_isShared_6450_ = v_isSharedCheck_6454_;
goto v_resetjp_6448_;
}
else
{
lean_inc(v_a_6447_);
lean_dec(v___x_6445_);
v___x_6449_ = lean_box(0);
v_isShared_6450_ = v_isSharedCheck_6454_;
goto v_resetjp_6448_;
}
v_resetjp_6448_:
{
lean_object* v___x_6452_; 
if (v_isShared_6450_ == 0)
{
v___x_6452_ = v___x_6449_;
goto v_reusejp_6451_;
}
else
{
lean_object* v_reuseFailAlloc_6453_; 
v_reuseFailAlloc_6453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6453_, 0, v_a_6447_);
v___x_6452_ = v_reuseFailAlloc_6453_;
goto v_reusejp_6451_;
}
v_reusejp_6451_:
{
return v___x_6452_;
}
}
}
}
}
v___jp_6292_:
{
lean_object* v___x_6294_; lean_object* v___x_6295_; lean_object* v___x_6296_; 
v___x_6294_ = lean_box(0);
v___x_6295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6295_, 0, v___x_6294_);
lean_ctor_set(v___x_6295_, 1, v___y_6293_);
v___x_6296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6296_, 0, v___x_6295_);
return v___x_6296_;
}
v___jp_6297_:
{
lean_object* v___x_6299_; lean_object* v___x_6300_; lean_object* v___x_6301_; 
v___x_6299_ = lean_box(0);
v___x_6300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6300_, 0, v___x_6299_);
lean_ctor_set(v___x_6300_, 1, v___y_6298_);
v___x_6301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6301_, 0, v___x_6300_);
return v___x_6301_;
}
v___jp_6302_:
{
lean_object* v___x_6304_; lean_object* v___x_6305_; lean_object* v___x_6306_; 
v___x_6304_ = lean_box(0);
v___x_6305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6305_, 0, v___x_6304_);
lean_ctor_set(v___x_6305_, 1, v___y_6303_);
v___x_6306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6306_, 0, v___x_6305_);
return v___x_6306_;
}
v___jp_6307_:
{
lean_object* v___x_6309_; lean_object* v___x_6310_; lean_object* v___x_6311_; 
v___x_6309_ = lean_box(0);
v___x_6310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6310_, 0, v___x_6309_);
lean_ctor_set(v___x_6310_, 1, v___y_6308_);
v___x_6311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6311_, 0, v___x_6310_);
return v___x_6311_;
}
v___jp_6315_:
{
lean_object* v___x_6320_; uint8_t v___x_6321_; 
v___x_6320_ = lean_array_get_size(v_packages_6319_);
v___x_6321_ = lean_nat_dec_le(v___y_6317_, v___x_6320_);
lean_dec(v___y_6317_);
if (v___x_6321_ == 0)
{
lean_object* v___x_6322_; lean_object* v___x_6323_; 
lean_dec_ref(v_packages_6319_);
lean_dec_ref(v___y_6316_);
lean_dec(v_wsIdx_6313_);
v___x_6322_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_6323_ = lean_panic_fn_borrowed(v_ws_6318_, v___x_6322_);
lean_dec_ref(v_ws_6318_);
v___y_6298_ = v___x_6323_;
goto v___jp_6297_;
}
else
{
size_t v_sz_6324_; size_t v___x_6325_; lean_object* v___x_6326_; lean_object* v___x_6327_; 
v_sz_6324_ = lean_array_size(v___y_6316_);
v___x_6325_ = ((size_t)0ULL);
v___x_6326_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_6319_, v_sz_6324_, v___x_6325_, v___y_6316_);
lean_dec_ref(v_packages_6319_);
v___x_6327_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_6318_, v_wsIdx_6313_, v___x_6326_);
lean_dec(v_wsIdx_6313_);
v___y_6298_ = v___x_6327_;
goto v___jp_6297_;
}
}
v___jp_6328_:
{
lean_object* v_packages_6332_; 
v_packages_6332_ = lean_ctor_get(v_ws_6331_, 4);
lean_inc_ref(v_packages_6332_);
v___y_6316_ = v___y_6329_;
v___y_6317_ = v___y_6330_;
v_ws_6318_ = v_ws_6331_;
v_packages_6319_ = v_packages_6332_;
goto v___jp_6315_;
}
v___jp_6334_:
{
lean_object* v_depsEnd_6339_; uint8_t v___x_6340_; 
v_depsEnd_6339_ = lean_array_get_size(v_packages_6336_);
v___x_6340_ = lean_nat_dec_lt(v_start_6333_, v_depsEnd_6339_);
if (v___x_6340_ == 0)
{
uint8_t v___x_6341_; 
lean_dec_ref(v___y_6284_);
v___x_6341_ = lean_nat_dec_le(v_depsEnd_6339_, v_depsEnd_6339_);
if (v___x_6341_ == 0)
{
lean_object* v___x_6342_; lean_object* v___x_6343_; 
lean_dec_ref(v_depIdxs_6337_);
lean_dec_ref(v_packages_6336_);
lean_dec(v_wsIdx_6313_);
v___x_6342_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_6343_ = lean_panic_fn_borrowed(v_ws_6335_, v___x_6342_);
lean_dec_ref(v_ws_6335_);
v___y_6293_ = v___x_6343_;
goto v___jp_6292_;
}
else
{
size_t v_sz_6344_; size_t v___x_6345_; lean_object* v___x_6346_; lean_object* v___x_6347_; 
v_sz_6344_ = lean_array_size(v_depIdxs_6337_);
v___x_6345_ = ((size_t)0ULL);
v___x_6346_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_6336_, v_sz_6344_, v___x_6345_, v_depIdxs_6337_);
lean_dec_ref(v_packages_6336_);
v___x_6347_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_6335_, v_wsIdx_6313_, v___x_6346_);
lean_dec(v_wsIdx_6313_);
v___y_6293_ = v___x_6347_;
goto v___jp_6292_;
}
}
else
{
uint8_t v___x_6348_; 
v___x_6348_ = lean_nat_dec_le(v_depsEnd_6339_, v_depsEnd_6339_);
if (v___x_6348_ == 0)
{
if (v___x_6340_ == 0)
{
lean_dec_ref(v___y_6284_);
v___y_6316_ = v_depIdxs_6337_;
v___y_6317_ = v_depsEnd_6339_;
v_ws_6318_ = v_ws_6335_;
v_packages_6319_ = v_packages_6336_;
goto v___jp_6315_;
}
else
{
size_t v___x_6349_; size_t v___x_6350_; lean_object* v___x_6351_; 
v___x_6349_ = lean_usize_of_nat(v_start_6333_);
v___x_6350_ = lean_usize_of_nat(v_depsEnd_6339_);
v___x_6351_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v___y_6284_, v_a_6288_, v_packages_6336_, v___x_6349_, v___x_6350_, v_ws_6335_, v___y_6338_);
lean_dec_ref(v_packages_6336_);
if (lean_obj_tag(v___x_6351_) == 0)
{
lean_object* v_a_6352_; 
v_a_6352_ = lean_ctor_get(v___x_6351_, 0);
lean_inc(v_a_6352_);
lean_dec_ref(v___x_6351_);
v___y_6329_ = v_depIdxs_6337_;
v___y_6330_ = v_depsEnd_6339_;
v_ws_6331_ = v_a_6352_;
goto v___jp_6328_;
}
else
{
lean_object* v_a_6353_; lean_object* v___x_6355_; uint8_t v_isShared_6356_; uint8_t v_isSharedCheck_6360_; 
lean_dec_ref(v_depIdxs_6337_);
lean_dec(v_wsIdx_6313_);
v_a_6353_ = lean_ctor_get(v___x_6351_, 0);
v_isSharedCheck_6360_ = !lean_is_exclusive(v___x_6351_);
if (v_isSharedCheck_6360_ == 0)
{
v___x_6355_ = v___x_6351_;
v_isShared_6356_ = v_isSharedCheck_6360_;
goto v_resetjp_6354_;
}
else
{
lean_inc(v_a_6353_);
lean_dec(v___x_6351_);
v___x_6355_ = lean_box(0);
v_isShared_6356_ = v_isSharedCheck_6360_;
goto v_resetjp_6354_;
}
v_resetjp_6354_:
{
lean_object* v___x_6358_; 
if (v_isShared_6356_ == 0)
{
v___x_6358_ = v___x_6355_;
goto v_reusejp_6357_;
}
else
{
lean_object* v_reuseFailAlloc_6359_; 
v_reuseFailAlloc_6359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6359_, 0, v_a_6353_);
v___x_6358_ = v_reuseFailAlloc_6359_;
goto v_reusejp_6357_;
}
v_reusejp_6357_:
{
return v___x_6358_;
}
}
}
}
}
else
{
size_t v___x_6361_; size_t v___x_6362_; lean_object* v___x_6363_; 
v___x_6361_ = lean_usize_of_nat(v_start_6333_);
v___x_6362_ = lean_usize_of_nat(v_depsEnd_6339_);
v___x_6363_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v___y_6284_, v_a_6288_, v_packages_6336_, v___x_6361_, v___x_6362_, v_ws_6335_, v___y_6338_);
lean_dec_ref(v_packages_6336_);
if (lean_obj_tag(v___x_6363_) == 0)
{
lean_object* v_a_6364_; 
v_a_6364_ = lean_ctor_get(v___x_6363_, 0);
lean_inc(v_a_6364_);
lean_dec_ref(v___x_6363_);
v___y_6329_ = v_depIdxs_6337_;
v___y_6330_ = v_depsEnd_6339_;
v_ws_6331_ = v_a_6364_;
goto v___jp_6328_;
}
else
{
lean_object* v_a_6365_; lean_object* v___x_6367_; uint8_t v_isShared_6368_; uint8_t v_isSharedCheck_6372_; 
lean_dec_ref(v_depIdxs_6337_);
lean_dec(v_wsIdx_6313_);
v_a_6365_ = lean_ctor_get(v___x_6363_, 0);
v_isSharedCheck_6372_ = !lean_is_exclusive(v___x_6363_);
if (v_isSharedCheck_6372_ == 0)
{
v___x_6367_ = v___x_6363_;
v_isShared_6368_ = v_isSharedCheck_6372_;
goto v_resetjp_6366_;
}
else
{
lean_inc(v_a_6365_);
lean_dec(v___x_6363_);
v___x_6367_ = lean_box(0);
v_isShared_6368_ = v_isSharedCheck_6372_;
goto v_resetjp_6366_;
}
v_resetjp_6366_:
{
lean_object* v___x_6370_; 
if (v_isShared_6368_ == 0)
{
v___x_6370_ = v___x_6367_;
goto v_reusejp_6369_;
}
else
{
lean_object* v_reuseFailAlloc_6371_; 
v_reuseFailAlloc_6371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6371_, 0, v_a_6365_);
v___x_6370_ = v_reuseFailAlloc_6371_;
goto v_reusejp_6369_;
}
v_reusejp_6369_:
{
return v___x_6370_;
}
}
}
}
}
}
v___jp_6373_:
{
lean_object* v_ws_6376_; lean_object* v_depIdxs_6377_; lean_object* v_packages_6378_; 
v_ws_6376_ = lean_ctor_get(v_____x_6374_, 0);
lean_inc_ref(v_ws_6376_);
v_depIdxs_6377_ = lean_ctor_get(v_____x_6374_, 1);
lean_inc_ref(v_depIdxs_6377_);
lean_dec_ref(v_____x_6374_);
v_packages_6378_ = lean_ctor_get(v_ws_6376_, 4);
lean_inc_ref(v_packages_6378_);
v_ws_6335_ = v_ws_6376_;
v_packages_6336_ = v_packages_6378_;
v_depIdxs_6337_ = v_depIdxs_6377_;
v___y_6338_ = v___y_6375_;
goto v___jp_6334_;
}
v___jp_6381_:
{
lean_object* v___x_6384_; uint8_t v___x_6385_; 
v___x_6384_ = lean_array_get_size(v_packages_6383_);
v___x_6385_ = lean_nat_dec_le(v_start_6333_, v___x_6384_);
if (v___x_6385_ == 0)
{
lean_object* v___x_6386_; lean_object* v___x_6387_; 
lean_dec_ref(v_packages_6383_);
lean_dec_ref(v___x_6380_);
lean_dec(v_wsIdx_6313_);
v___x_6386_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_6387_ = lean_panic_fn_borrowed(v_ws_6382_, v___x_6386_);
lean_dec_ref(v_ws_6382_);
v___y_6308_ = v___x_6387_;
goto v___jp_6307_;
}
else
{
size_t v_sz_6388_; size_t v___x_6389_; lean_object* v___x_6390_; lean_object* v___x_6391_; 
v_sz_6388_ = lean_array_size(v___x_6380_);
v___x_6389_ = ((size_t)0ULL);
v___x_6390_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_6383_, v_sz_6388_, v___x_6389_, v___x_6380_);
lean_dec_ref(v_packages_6383_);
v___x_6391_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_6382_, v_wsIdx_6313_, v___x_6390_);
lean_dec(v_wsIdx_6313_);
v___y_6308_ = v___x_6391_;
goto v___jp_6307_;
}
}
v___jp_6392_:
{
lean_object* v_packages_6394_; 
v_packages_6394_ = lean_ctor_get(v_ws_6393_, 4);
lean_inc_ref(v_packages_6394_);
v_ws_6382_ = v_ws_6393_;
v_packages_6383_ = v_packages_6394_;
goto v___jp_6381_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___boxed(lean_object* v___y_6455_, lean_object* v___y_6456_, lean_object* v___y_6457_, lean_object* v_leanOpts_6458_, lean_object* v_reconfigure_6459_, lean_object* v_pkg_6460_, lean_object* v_a_6461_, lean_object* v_a_6462_, lean_object* v___y_6463_, lean_object* v___y_6464_){
_start:
{
uint8_t v_reconfigure_boxed_6465_; lean_object* v_res_6466_; 
v_reconfigure_boxed_6465_ = lean_unbox(v_reconfigure_6459_);
v_res_6466_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(v___y_6455_, v___y_6456_, v___y_6457_, v_leanOpts_6458_, v_reconfigure_boxed_6465_, v_pkg_6460_, v_a_6461_, v_a_6462_, v___y_6463_);
lean_dec_ref(v___y_6463_);
lean_dec(v_a_6461_);
lean_dec(v___y_6455_);
return v_res_6466_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3(lean_object* v___y_6467_, lean_object* v___y_6468_, lean_object* v_leanOpts_6469_, uint8_t v_reconfigure_6470_, lean_object* v_a_6471_, lean_object* v___y_6472_, lean_object* v___y_6473_, lean_object* v___y_6474_){
_start:
{
lean_object* v___x_6476_; 
v___x_6476_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7___redArg(v___y_6467_, v___y_6468_, v_leanOpts_6469_, v_reconfigure_6470_, v_a_6471_, v___y_6472_, v___y_6473_, v___y_6474_);
return v___x_6476_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3___boxed(lean_object* v___y_6477_, lean_object* v___y_6478_, lean_object* v_leanOpts_6479_, lean_object* v_reconfigure_6480_, lean_object* v_a_6481_, lean_object* v___y_6482_, lean_object* v___y_6483_, lean_object* v___y_6484_, lean_object* v___y_6485_){
_start:
{
uint8_t v_reconfigure_boxed_6486_; lean_object* v_res_6487_; 
v_reconfigure_boxed_6486_ = lean_unbox(v_reconfigure_6480_);
v_res_6487_ = l_Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3(v___y_6477_, v___y_6478_, v_leanOpts_6479_, v_reconfigure_boxed_6486_, v_a_6481_, v___y_6482_, v___y_6483_, v___y_6484_);
lean_dec_ref(v___y_6484_);
lean_dec(v___y_6482_);
lean_dec(v___y_6477_);
return v_res_6487_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___redArg(lean_object* v___y_6488_, lean_object* v___x_6489_, lean_object* v___y_6490_, lean_object* v___y_6491_, lean_object* v_leanOpts_6492_, uint8_t v_reconfigure_6493_, lean_object* v_pkg_6494_, lean_object* v_a_6495_, lean_object* v___y_6496_){
_start:
{
lean_object* v___y_6499_; lean_object* v___y_6504_; lean_object* v___y_6509_; lean_object* v___y_6514_; lean_object* v_packages_6518_; lean_object* v_wsIdx_6519_; lean_object* v_depConfigs_6520_; lean_object* v___y_6522_; lean_object* v___y_6523_; lean_object* v_ws_6524_; lean_object* v_packages_6525_; lean_object* v___y_6535_; lean_object* v___y_6536_; lean_object* v_ws_6537_; lean_object* v_start_6539_; lean_object* v_ws_6541_; lean_object* v_packages_6542_; lean_object* v_depIdxs_6543_; lean_object* v___y_6544_; lean_object* v_____x_6580_; lean_object* v___y_6581_; lean_object* v___x_6585_; lean_object* v___x_6586_; lean_object* v_ws_6588_; lean_object* v_packages_6589_; lean_object* v_ws_6599_; lean_object* v_s_6601_; lean_object* v___x_6602_; uint8_t v___x_6603_; 
v_packages_6518_ = lean_ctor_get(v_a_6495_, 4);
v_wsIdx_6519_ = lean_ctor_get(v_pkg_6494_, 0);
lean_inc(v_wsIdx_6519_);
v_depConfigs_6520_ = lean_ctor_get(v_pkg_6494_, 12);
lean_inc_ref(v_depConfigs_6520_);
v_start_6539_ = lean_array_get_size(v_packages_6518_);
v___x_6585_ = lean_array_get_size(v_depConfigs_6520_);
v___x_6586_ = lean_mk_empty_array_with_capacity(v___x_6585_);
lean_inc_ref(v___x_6586_);
lean_inc_ref(v_a_6495_);
v_s_6601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_6601_, 0, v_a_6495_);
lean_ctor_set(v_s_6601_, 1, v___x_6586_);
v___x_6602_ = lean_unsigned_to_nat(0u);
v___x_6603_ = lean_nat_dec_le(v___x_6585_, v___x_6585_);
if (v___x_6603_ == 0)
{
uint8_t v___x_6604_; 
v___x_6604_ = lean_nat_dec_lt(v___x_6602_, v___x_6585_);
if (v___x_6604_ == 0)
{
uint8_t v___x_6605_; 
lean_dec_ref(v_s_6601_);
lean_dec_ref(v_depConfigs_6520_);
lean_dec_ref(v_pkg_6494_);
lean_dec_ref(v_leanOpts_6492_);
lean_dec_ref(v___y_6491_);
v___x_6605_ = lean_nat_dec_lt(v_start_6539_, v_start_6539_);
if (v___x_6605_ == 0)
{
uint8_t v___x_6606_; 
lean_dec_ref(v___y_6488_);
v___x_6606_ = lean_nat_dec_le(v_start_6539_, v_start_6539_);
if (v___x_6606_ == 0)
{
lean_object* v___x_6607_; lean_object* v___x_6608_; 
lean_dec_ref(v___x_6586_);
lean_dec(v_wsIdx_6519_);
v___x_6607_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_6608_ = lean_panic_fn_borrowed(v_a_6495_, v___x_6607_);
lean_dec_ref(v_a_6495_);
v___y_6509_ = v___x_6608_;
goto v___jp_6508_;
}
else
{
size_t v_sz_6609_; size_t v___x_6610_; lean_object* v___x_6611_; lean_object* v___x_6612_; 
v_sz_6609_ = lean_array_size(v___x_6586_);
v___x_6610_ = ((size_t)0ULL);
v___x_6611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_6518_, v_sz_6609_, v___x_6610_, v___x_6586_);
v___x_6612_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_a_6495_, v_wsIdx_6519_, v___x_6611_);
lean_dec(v_wsIdx_6519_);
v___y_6509_ = v___x_6612_;
goto v___jp_6508_;
}
}
else
{
uint8_t v___x_6613_; 
lean_inc_ref(v_packages_6518_);
v___x_6613_ = lean_nat_dec_le(v_start_6539_, v_start_6539_);
if (v___x_6613_ == 0)
{
if (v___x_6605_ == 0)
{
lean_dec_ref(v___y_6488_);
v_ws_6588_ = v_a_6495_;
v_packages_6589_ = v_packages_6518_;
goto v___jp_6587_;
}
else
{
size_t v___x_6614_; lean_object* v___x_6615_; 
v___x_6614_ = lean_usize_of_nat(v_start_6539_);
v___x_6615_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v___y_6488_, v___x_6489_, v_packages_6518_, v___x_6614_, v___x_6614_, v_a_6495_, v___y_6496_);
lean_dec_ref(v_packages_6518_);
if (lean_obj_tag(v___x_6615_) == 0)
{
lean_object* v_a_6616_; 
v_a_6616_ = lean_ctor_get(v___x_6615_, 0);
lean_inc(v_a_6616_);
lean_dec_ref(v___x_6615_);
v_ws_6599_ = v_a_6616_;
goto v___jp_6598_;
}
else
{
lean_object* v_a_6617_; lean_object* v___x_6619_; uint8_t v_isShared_6620_; uint8_t v_isSharedCheck_6624_; 
lean_dec_ref(v___x_6586_);
lean_dec(v_wsIdx_6519_);
v_a_6617_ = lean_ctor_get(v___x_6615_, 0);
v_isSharedCheck_6624_ = !lean_is_exclusive(v___x_6615_);
if (v_isSharedCheck_6624_ == 0)
{
v___x_6619_ = v___x_6615_;
v_isShared_6620_ = v_isSharedCheck_6624_;
goto v_resetjp_6618_;
}
else
{
lean_inc(v_a_6617_);
lean_dec(v___x_6615_);
v___x_6619_ = lean_box(0);
v_isShared_6620_ = v_isSharedCheck_6624_;
goto v_resetjp_6618_;
}
v_resetjp_6618_:
{
lean_object* v___x_6622_; 
if (v_isShared_6620_ == 0)
{
v___x_6622_ = v___x_6619_;
goto v_reusejp_6621_;
}
else
{
lean_object* v_reuseFailAlloc_6623_; 
v_reuseFailAlloc_6623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6623_, 0, v_a_6617_);
v___x_6622_ = v_reuseFailAlloc_6623_;
goto v_reusejp_6621_;
}
v_reusejp_6621_:
{
return v___x_6622_;
}
}
}
}
}
else
{
size_t v___x_6625_; lean_object* v___x_6626_; 
v___x_6625_ = lean_usize_of_nat(v_start_6539_);
v___x_6626_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v___y_6488_, v___x_6489_, v_packages_6518_, v___x_6625_, v___x_6625_, v_a_6495_, v___y_6496_);
lean_dec_ref(v_packages_6518_);
if (lean_obj_tag(v___x_6626_) == 0)
{
lean_object* v_a_6627_; 
v_a_6627_ = lean_ctor_get(v___x_6626_, 0);
lean_inc(v_a_6627_);
lean_dec_ref(v___x_6626_);
v_ws_6599_ = v_a_6627_;
goto v___jp_6598_;
}
else
{
lean_object* v_a_6628_; lean_object* v___x_6630_; uint8_t v_isShared_6631_; uint8_t v_isSharedCheck_6635_; 
lean_dec_ref(v___x_6586_);
lean_dec(v_wsIdx_6519_);
v_a_6628_ = lean_ctor_get(v___x_6626_, 0);
v_isSharedCheck_6635_ = !lean_is_exclusive(v___x_6626_);
if (v_isSharedCheck_6635_ == 0)
{
v___x_6630_ = v___x_6626_;
v_isShared_6631_ = v_isSharedCheck_6635_;
goto v_resetjp_6629_;
}
else
{
lean_inc(v_a_6628_);
lean_dec(v___x_6626_);
v___x_6630_ = lean_box(0);
v_isShared_6631_ = v_isSharedCheck_6635_;
goto v_resetjp_6629_;
}
v_resetjp_6629_:
{
lean_object* v___x_6633_; 
if (v_isShared_6631_ == 0)
{
v___x_6633_ = v___x_6630_;
goto v_reusejp_6632_;
}
else
{
lean_object* v_reuseFailAlloc_6634_; 
v_reuseFailAlloc_6634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6634_, 0, v_a_6628_);
v___x_6633_ = v_reuseFailAlloc_6634_;
goto v_reusejp_6632_;
}
v_reusejp_6632_:
{
return v___x_6633_;
}
}
}
}
}
}
else
{
size_t v___x_6636_; size_t v___x_6637_; lean_object* v___x_6638_; 
lean_dec_ref(v___x_6586_);
lean_dec_ref(v_a_6495_);
v___x_6636_ = lean_usize_of_nat(v___x_6585_);
v___x_6637_ = ((size_t)0ULL);
v___x_6638_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1(v_pkg_6494_, v___y_6490_, v___y_6491_, v_leanOpts_6492_, v_reconfigure_6493_, v_depConfigs_6520_, v___x_6636_, v___x_6637_, v_s_6601_, v___y_6496_);
lean_dec_ref(v_depConfigs_6520_);
if (lean_obj_tag(v___x_6638_) == 0)
{
lean_object* v_a_6639_; 
v_a_6639_ = lean_ctor_get(v___x_6638_, 0);
lean_inc(v_a_6639_);
lean_dec_ref(v___x_6638_);
v_____x_6580_ = v_a_6639_;
v___y_6581_ = v___y_6496_;
goto v___jp_6579_;
}
else
{
lean_object* v_a_6640_; lean_object* v___x_6642_; uint8_t v_isShared_6643_; uint8_t v_isSharedCheck_6647_; 
lean_dec(v_wsIdx_6519_);
lean_dec_ref(v___y_6488_);
v_a_6640_ = lean_ctor_get(v___x_6638_, 0);
v_isSharedCheck_6647_ = !lean_is_exclusive(v___x_6638_);
if (v_isSharedCheck_6647_ == 0)
{
v___x_6642_ = v___x_6638_;
v_isShared_6643_ = v_isSharedCheck_6647_;
goto v_resetjp_6641_;
}
else
{
lean_inc(v_a_6640_);
lean_dec(v___x_6638_);
v___x_6642_ = lean_box(0);
v_isShared_6643_ = v_isSharedCheck_6647_;
goto v_resetjp_6641_;
}
v_resetjp_6641_:
{
lean_object* v___x_6645_; 
if (v_isShared_6643_ == 0)
{
v___x_6645_ = v___x_6642_;
goto v_reusejp_6644_;
}
else
{
lean_object* v_reuseFailAlloc_6646_; 
v_reuseFailAlloc_6646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6646_, 0, v_a_6640_);
v___x_6645_ = v_reuseFailAlloc_6646_;
goto v_reusejp_6644_;
}
v_reusejp_6644_:
{
return v___x_6645_;
}
}
}
}
}
else
{
uint8_t v___x_6648_; 
lean_inc_ref(v_packages_6518_);
v___x_6648_ = lean_nat_dec_lt(v___x_6602_, v___x_6585_);
if (v___x_6648_ == 0)
{
lean_dec_ref(v_s_6601_);
lean_dec_ref(v_depConfigs_6520_);
lean_dec_ref(v_pkg_6494_);
lean_dec_ref(v_leanOpts_6492_);
lean_dec_ref(v___y_6491_);
v_ws_6541_ = v_a_6495_;
v_packages_6542_ = v_packages_6518_;
v_depIdxs_6543_ = v___x_6586_;
v___y_6544_ = v___y_6496_;
goto v___jp_6540_;
}
else
{
size_t v___x_6649_; size_t v___x_6650_; lean_object* v___x_6651_; 
lean_dec_ref(v___x_6586_);
lean_dec_ref(v_packages_6518_);
lean_dec_ref(v_a_6495_);
v___x_6649_ = lean_usize_of_nat(v___x_6585_);
v___x_6650_ = ((size_t)0ULL);
v___x_6651_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__1(v_pkg_6494_, v___y_6490_, v___y_6491_, v_leanOpts_6492_, v_reconfigure_6493_, v_depConfigs_6520_, v___x_6649_, v___x_6650_, v_s_6601_, v___y_6496_);
lean_dec_ref(v_depConfigs_6520_);
if (lean_obj_tag(v___x_6651_) == 0)
{
lean_object* v_a_6652_; 
v_a_6652_ = lean_ctor_get(v___x_6651_, 0);
lean_inc(v_a_6652_);
lean_dec_ref(v___x_6651_);
v_____x_6580_ = v_a_6652_;
v___y_6581_ = v___y_6496_;
goto v___jp_6579_;
}
else
{
lean_object* v_a_6653_; lean_object* v___x_6655_; uint8_t v_isShared_6656_; uint8_t v_isSharedCheck_6660_; 
lean_dec(v_wsIdx_6519_);
lean_dec_ref(v___y_6488_);
v_a_6653_ = lean_ctor_get(v___x_6651_, 0);
v_isSharedCheck_6660_ = !lean_is_exclusive(v___x_6651_);
if (v_isSharedCheck_6660_ == 0)
{
v___x_6655_ = v___x_6651_;
v_isShared_6656_ = v_isSharedCheck_6660_;
goto v_resetjp_6654_;
}
else
{
lean_inc(v_a_6653_);
lean_dec(v___x_6651_);
v___x_6655_ = lean_box(0);
v_isShared_6656_ = v_isSharedCheck_6660_;
goto v_resetjp_6654_;
}
v_resetjp_6654_:
{
lean_object* v___x_6658_; 
if (v_isShared_6656_ == 0)
{
v___x_6658_ = v___x_6655_;
goto v_reusejp_6657_;
}
else
{
lean_object* v_reuseFailAlloc_6659_; 
v_reuseFailAlloc_6659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6659_, 0, v_a_6653_);
v___x_6658_ = v_reuseFailAlloc_6659_;
goto v_reusejp_6657_;
}
v_reusejp_6657_:
{
return v___x_6658_;
}
}
}
}
}
v___jp_6498_:
{
lean_object* v___x_6500_; lean_object* v___x_6501_; lean_object* v___x_6502_; 
v___x_6500_ = lean_box(0);
v___x_6501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6501_, 0, v___x_6500_);
lean_ctor_set(v___x_6501_, 1, v___y_6499_);
v___x_6502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6502_, 0, v___x_6501_);
return v___x_6502_;
}
v___jp_6503_:
{
lean_object* v___x_6505_; lean_object* v___x_6506_; lean_object* v___x_6507_; 
v___x_6505_ = lean_box(0);
v___x_6506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6506_, 0, v___x_6505_);
lean_ctor_set(v___x_6506_, 1, v___y_6504_);
v___x_6507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6507_, 0, v___x_6506_);
return v___x_6507_;
}
v___jp_6508_:
{
lean_object* v___x_6510_; lean_object* v___x_6511_; lean_object* v___x_6512_; 
v___x_6510_ = lean_box(0);
v___x_6511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6511_, 0, v___x_6510_);
lean_ctor_set(v___x_6511_, 1, v___y_6509_);
v___x_6512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6512_, 0, v___x_6511_);
return v___x_6512_;
}
v___jp_6513_:
{
lean_object* v___x_6515_; lean_object* v___x_6516_; lean_object* v___x_6517_; 
v___x_6515_ = lean_box(0);
v___x_6516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6516_, 0, v___x_6515_);
lean_ctor_set(v___x_6516_, 1, v___y_6514_);
v___x_6517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6517_, 0, v___x_6516_);
return v___x_6517_;
}
v___jp_6521_:
{
lean_object* v___x_6526_; uint8_t v___x_6527_; 
v___x_6526_ = lean_array_get_size(v_packages_6525_);
v___x_6527_ = lean_nat_dec_le(v___y_6522_, v___x_6526_);
lean_dec(v___y_6522_);
if (v___x_6527_ == 0)
{
lean_object* v___x_6528_; lean_object* v___x_6529_; 
lean_dec_ref(v_packages_6525_);
lean_dec_ref(v___y_6523_);
lean_dec(v_wsIdx_6519_);
v___x_6528_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_6529_ = lean_panic_fn_borrowed(v_ws_6524_, v___x_6528_);
lean_dec_ref(v_ws_6524_);
v___y_6504_ = v___x_6529_;
goto v___jp_6503_;
}
else
{
size_t v_sz_6530_; size_t v___x_6531_; lean_object* v___x_6532_; lean_object* v___x_6533_; 
v_sz_6530_ = lean_array_size(v___y_6523_);
v___x_6531_ = ((size_t)0ULL);
v___x_6532_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_6525_, v_sz_6530_, v___x_6531_, v___y_6523_);
lean_dec_ref(v_packages_6525_);
v___x_6533_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_6524_, v_wsIdx_6519_, v___x_6532_);
lean_dec(v_wsIdx_6519_);
v___y_6504_ = v___x_6533_;
goto v___jp_6503_;
}
}
v___jp_6534_:
{
lean_object* v_packages_6538_; 
v_packages_6538_ = lean_ctor_get(v_ws_6537_, 4);
lean_inc_ref(v_packages_6538_);
v___y_6522_ = v___y_6535_;
v___y_6523_ = v___y_6536_;
v_ws_6524_ = v_ws_6537_;
v_packages_6525_ = v_packages_6538_;
goto v___jp_6521_;
}
v___jp_6540_:
{
lean_object* v_depsEnd_6545_; uint8_t v___x_6546_; 
v_depsEnd_6545_ = lean_array_get_size(v_packages_6542_);
v___x_6546_ = lean_nat_dec_lt(v_start_6539_, v_depsEnd_6545_);
if (v___x_6546_ == 0)
{
uint8_t v___x_6547_; 
lean_dec_ref(v___y_6488_);
v___x_6547_ = lean_nat_dec_le(v_depsEnd_6545_, v_depsEnd_6545_);
if (v___x_6547_ == 0)
{
lean_object* v___x_6548_; lean_object* v___x_6549_; 
lean_dec_ref(v_depIdxs_6543_);
lean_dec_ref(v_packages_6542_);
lean_dec(v_wsIdx_6519_);
v___x_6548_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_6549_ = lean_panic_fn_borrowed(v_ws_6541_, v___x_6548_);
lean_dec_ref(v_ws_6541_);
v___y_6499_ = v___x_6549_;
goto v___jp_6498_;
}
else
{
size_t v_sz_6550_; size_t v___x_6551_; lean_object* v___x_6552_; lean_object* v___x_6553_; 
v_sz_6550_ = lean_array_size(v_depIdxs_6543_);
v___x_6551_ = ((size_t)0ULL);
v___x_6552_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_6542_, v_sz_6550_, v___x_6551_, v_depIdxs_6543_);
lean_dec_ref(v_packages_6542_);
v___x_6553_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_6541_, v_wsIdx_6519_, v___x_6552_);
lean_dec(v_wsIdx_6519_);
v___y_6499_ = v___x_6553_;
goto v___jp_6498_;
}
}
else
{
uint8_t v___x_6554_; 
v___x_6554_ = lean_nat_dec_le(v_depsEnd_6545_, v_depsEnd_6545_);
if (v___x_6554_ == 0)
{
if (v___x_6546_ == 0)
{
lean_dec_ref(v___y_6488_);
v___y_6522_ = v_depsEnd_6545_;
v___y_6523_ = v_depIdxs_6543_;
v_ws_6524_ = v_ws_6541_;
v_packages_6525_ = v_packages_6542_;
goto v___jp_6521_;
}
else
{
size_t v___x_6555_; size_t v___x_6556_; lean_object* v___x_6557_; 
v___x_6555_ = lean_usize_of_nat(v_start_6539_);
v___x_6556_ = lean_usize_of_nat(v_depsEnd_6545_);
v___x_6557_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v___y_6488_, v___x_6489_, v_packages_6542_, v___x_6555_, v___x_6556_, v_ws_6541_, v___y_6544_);
lean_dec_ref(v_packages_6542_);
if (lean_obj_tag(v___x_6557_) == 0)
{
lean_object* v_a_6558_; 
v_a_6558_ = lean_ctor_get(v___x_6557_, 0);
lean_inc(v_a_6558_);
lean_dec_ref(v___x_6557_);
v___y_6535_ = v_depsEnd_6545_;
v___y_6536_ = v_depIdxs_6543_;
v_ws_6537_ = v_a_6558_;
goto v___jp_6534_;
}
else
{
lean_object* v_a_6559_; lean_object* v___x_6561_; uint8_t v_isShared_6562_; uint8_t v_isSharedCheck_6566_; 
lean_dec_ref(v_depIdxs_6543_);
lean_dec(v_wsIdx_6519_);
v_a_6559_ = lean_ctor_get(v___x_6557_, 0);
v_isSharedCheck_6566_ = !lean_is_exclusive(v___x_6557_);
if (v_isSharedCheck_6566_ == 0)
{
v___x_6561_ = v___x_6557_;
v_isShared_6562_ = v_isSharedCheck_6566_;
goto v_resetjp_6560_;
}
else
{
lean_inc(v_a_6559_);
lean_dec(v___x_6557_);
v___x_6561_ = lean_box(0);
v_isShared_6562_ = v_isSharedCheck_6566_;
goto v_resetjp_6560_;
}
v_resetjp_6560_:
{
lean_object* v___x_6564_; 
if (v_isShared_6562_ == 0)
{
v___x_6564_ = v___x_6561_;
goto v_reusejp_6563_;
}
else
{
lean_object* v_reuseFailAlloc_6565_; 
v_reuseFailAlloc_6565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6565_, 0, v_a_6559_);
v___x_6564_ = v_reuseFailAlloc_6565_;
goto v_reusejp_6563_;
}
v_reusejp_6563_:
{
return v___x_6564_;
}
}
}
}
}
else
{
size_t v___x_6567_; size_t v___x_6568_; lean_object* v___x_6569_; 
v___x_6567_ = lean_usize_of_nat(v_start_6539_);
v___x_6568_ = lean_usize_of_nat(v_depsEnd_6545_);
v___x_6569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v___y_6488_, v___x_6489_, v_packages_6542_, v___x_6567_, v___x_6568_, v_ws_6541_, v___y_6544_);
lean_dec_ref(v_packages_6542_);
if (lean_obj_tag(v___x_6569_) == 0)
{
lean_object* v_a_6570_; 
v_a_6570_ = lean_ctor_get(v___x_6569_, 0);
lean_inc(v_a_6570_);
lean_dec_ref(v___x_6569_);
v___y_6535_ = v_depsEnd_6545_;
v___y_6536_ = v_depIdxs_6543_;
v_ws_6537_ = v_a_6570_;
goto v___jp_6534_;
}
else
{
lean_object* v_a_6571_; lean_object* v___x_6573_; uint8_t v_isShared_6574_; uint8_t v_isSharedCheck_6578_; 
lean_dec_ref(v_depIdxs_6543_);
lean_dec(v_wsIdx_6519_);
v_a_6571_ = lean_ctor_get(v___x_6569_, 0);
v_isSharedCheck_6578_ = !lean_is_exclusive(v___x_6569_);
if (v_isSharedCheck_6578_ == 0)
{
v___x_6573_ = v___x_6569_;
v_isShared_6574_ = v_isSharedCheck_6578_;
goto v_resetjp_6572_;
}
else
{
lean_inc(v_a_6571_);
lean_dec(v___x_6569_);
v___x_6573_ = lean_box(0);
v_isShared_6574_ = v_isSharedCheck_6578_;
goto v_resetjp_6572_;
}
v_resetjp_6572_:
{
lean_object* v___x_6576_; 
if (v_isShared_6574_ == 0)
{
v___x_6576_ = v___x_6573_;
goto v_reusejp_6575_;
}
else
{
lean_object* v_reuseFailAlloc_6577_; 
v_reuseFailAlloc_6577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6577_, 0, v_a_6571_);
v___x_6576_ = v_reuseFailAlloc_6577_;
goto v_reusejp_6575_;
}
v_reusejp_6575_:
{
return v___x_6576_;
}
}
}
}
}
}
v___jp_6579_:
{
lean_object* v_ws_6582_; lean_object* v_depIdxs_6583_; lean_object* v_packages_6584_; 
v_ws_6582_ = lean_ctor_get(v_____x_6580_, 0);
lean_inc_ref(v_ws_6582_);
v_depIdxs_6583_ = lean_ctor_get(v_____x_6580_, 1);
lean_inc_ref(v_depIdxs_6583_);
lean_dec_ref(v_____x_6580_);
v_packages_6584_ = lean_ctor_get(v_ws_6582_, 4);
lean_inc_ref(v_packages_6584_);
v_ws_6541_ = v_ws_6582_;
v_packages_6542_ = v_packages_6584_;
v_depIdxs_6543_ = v_depIdxs_6583_;
v___y_6544_ = v___y_6581_;
goto v___jp_6540_;
}
v___jp_6587_:
{
lean_object* v___x_6590_; uint8_t v___x_6591_; 
v___x_6590_ = lean_array_get_size(v_packages_6589_);
v___x_6591_ = lean_nat_dec_le(v_start_6539_, v___x_6590_);
if (v___x_6591_ == 0)
{
lean_object* v___x_6592_; lean_object* v___x_6593_; 
lean_dec_ref(v_packages_6589_);
lean_dec_ref(v___x_6586_);
lean_dec(v_wsIdx_6519_);
v___x_6592_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3, &l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___closed__3);
v___x_6593_ = lean_panic_fn_borrowed(v_ws_6588_, v___x_6592_);
lean_dec_ref(v_ws_6588_);
v___y_6514_ = v___x_6593_;
goto v___jp_6513_;
}
else
{
size_t v_sz_6594_; size_t v___x_6595_; lean_object* v___x_6596_; lean_object* v___x_6597_; 
v_sz_6594_ = lean_array_size(v___x_6586_);
v___x_6595_ = ((size_t)0ULL);
v___x_6596_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__5(v_packages_6589_, v_sz_6594_, v___x_6595_, v___x_6586_);
lean_dec_ref(v_packages_6589_);
v___x_6597_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepPkgs(v_ws_6588_, v_wsIdx_6519_, v___x_6596_);
lean_dec(v_wsIdx_6519_);
v___y_6514_ = v___x_6597_;
goto v___jp_6513_;
}
}
v___jp_6598_:
{
lean_object* v_packages_6600_; 
v_packages_6600_ = lean_ctor_get(v_ws_6599_, 4);
lean_inc_ref(v_packages_6600_);
v_ws_6588_ = v_ws_6599_;
v_packages_6589_ = v_packages_6600_;
goto v___jp_6587_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v___y_6661_, lean_object* v___x_6662_, lean_object* v___y_6663_, lean_object* v___y_6664_, lean_object* v_leanOpts_6665_, lean_object* v_reconfigure_6666_, lean_object* v_pkg_6667_, lean_object* v_a_6668_, lean_object* v___y_6669_, lean_object* v___y_6670_){
_start:
{
uint8_t v_reconfigure_boxed_6671_; lean_object* v_res_6672_; 
v_reconfigure_boxed_6671_ = lean_unbox(v_reconfigure_6666_);
v_res_6672_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___redArg(v___y_6661_, v___x_6662_, v___y_6663_, v___y_6664_, v_leanOpts_6665_, v_reconfigure_boxed_6671_, v_pkg_6667_, v_a_6668_, v___y_6669_);
lean_dec_ref(v___y_6669_);
lean_dec(v___y_6663_);
lean_dec(v___x_6662_);
return v_res_6672_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5(lean_object* v___y_6673_, lean_object* v___x_6674_, lean_object* v___y_6675_, lean_object* v___y_6676_, lean_object* v_leanOpts_6677_, uint8_t v_reconfigure_6678_, lean_object* v_pkg_6679_, lean_object* v_a_6680_, lean_object* v_a_6681_, lean_object* v___y_6682_){
_start:
{
lean_object* v___x_6684_; 
v___x_6684_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___redArg(v___y_6673_, v___x_6674_, v___y_6675_, v___y_6676_, v_leanOpts_6677_, v_reconfigure_6678_, v_pkg_6679_, v_a_6681_, v___y_6682_);
return v___x_6684_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___boxed(lean_object* v___y_6685_, lean_object* v___x_6686_, lean_object* v___y_6687_, lean_object* v___y_6688_, lean_object* v_leanOpts_6689_, lean_object* v_reconfigure_6690_, lean_object* v_pkg_6691_, lean_object* v_a_6692_, lean_object* v_a_6693_, lean_object* v___y_6694_, lean_object* v___y_6695_){
_start:
{
uint8_t v_reconfigure_boxed_6696_; lean_object* v_res_6697_; 
v_reconfigure_boxed_6696_ = lean_unbox(v_reconfigure_6690_);
v_res_6697_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5(v___y_6685_, v___x_6686_, v___y_6687_, v___y_6688_, v_leanOpts_6689_, v_reconfigure_boxed_6696_, v_pkg_6691_, v_a_6692_, v_a_6693_, v___y_6694_);
lean_dec_ref(v___y_6694_);
lean_dec(v_a_6692_);
lean_dec(v___y_6687_);
lean_dec(v___x_6686_);
return v_res_6697_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6(lean_object* v_00_u03b1_6698_, lean_object* v_cycle_6699_, lean_object* v___y_6700_, lean_object* v___y_6701_, lean_object* v___y_6702_){
_start:
{
lean_object* v___x_6704_; 
v___x_6704_ = l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6___redArg(v_cycle_6699_, v___y_6702_);
return v___x_6704_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b1_6705_, lean_object* v_cycle_6706_, lean_object* v___y_6707_, lean_object* v___y_6708_, lean_object* v___y_6709_, lean_object* v___y_6710_){
_start:
{
lean_object* v_res_6711_; 
v_res_6711_ = l___private_Lake_Load_Resolve_0__Lake_depCycleError___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__6(v_00_u03b1_6705_, v_cycle_6706_, v___y_6707_, v___y_6708_, v___y_6709_);
lean_dec_ref(v___y_6709_);
lean_dec_ref(v___y_6708_);
lean_dec(v___y_6707_);
return v_res_6711_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7(lean_object* v___y_6712_, lean_object* v___y_6713_, lean_object* v_leanOpts_6714_, uint8_t v_reconfigure_6715_, lean_object* v_inst_6716_, lean_object* v_a_6717_, lean_object* v___y_6718_, lean_object* v___y_6719_, lean_object* v___y_6720_){
_start:
{
lean_object* v___x_6722_; 
v___x_6722_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7___redArg(v___y_6712_, v___y_6713_, v_leanOpts_6714_, v_reconfigure_6715_, v_a_6717_, v___y_6718_, v___y_6719_, v___y_6720_);
return v___x_6722_;
}
}
LEAN_EXPORT lean_object* l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7___boxed(lean_object* v___y_6723_, lean_object* v___y_6724_, lean_object* v_leanOpts_6725_, lean_object* v_reconfigure_6726_, lean_object* v_inst_6727_, lean_object* v_a_6728_, lean_object* v___y_6729_, lean_object* v___y_6730_, lean_object* v___y_6731_, lean_object* v___y_6732_){
_start:
{
uint8_t v_reconfigure_boxed_6733_; lean_object* v_res_6734_; 
v_reconfigure_boxed_6733_ = lean_unbox(v_reconfigure_6726_);
v_res_6734_ = l_Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7(v___y_6723_, v___y_6724_, v_leanOpts_6725_, v_reconfigure_boxed_6733_, v_inst_6727_, v_a_6728_, v___y_6729_, v___y_6730_, v___y_6731_);
lean_dec_ref(v___y_6731_);
lean_dec(v___y_6729_);
lean_dec(v___y_6723_);
return v_res_6734_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11(lean_object* v___y_6735_, lean_object* v___y_6736_, lean_object* v_leanOpts_6737_, uint8_t v_reconfigure_6738_, lean_object* v___x_6739_, lean_object* v___y_6740_, lean_object* v___y_6741_, lean_object* v_leanOpts_6742_, uint8_t v_reconfigure_6743_, lean_object* v_pkg_6744_, lean_object* v_a_6745_, lean_object* v_a_6746_, lean_object* v___y_6747_){
_start:
{
lean_object* v___x_6749_; 
v___x_6749_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11___redArg(v___y_6735_, v___y_6736_, v_leanOpts_6737_, v_reconfigure_6738_, v___x_6739_, v___y_6740_, v___y_6741_, v_leanOpts_6742_, v_reconfigure_6743_, v_pkg_6744_, v_a_6746_, v___y_6747_);
return v___x_6749_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11___boxed(lean_object* v___y_6750_, lean_object* v___y_6751_, lean_object* v_leanOpts_6752_, lean_object* v_reconfigure_6753_, lean_object* v___x_6754_, lean_object* v___y_6755_, lean_object* v___y_6756_, lean_object* v_leanOpts_6757_, lean_object* v_reconfigure_6758_, lean_object* v_pkg_6759_, lean_object* v_a_6760_, lean_object* v_a_6761_, lean_object* v___y_6762_, lean_object* v___y_6763_){
_start:
{
uint8_t v_reconfigure_boxed_6764_; uint8_t v_reconfigure_boxed_6765_; lean_object* v_res_6766_; 
v_reconfigure_boxed_6764_ = lean_unbox(v_reconfigure_6753_);
v_reconfigure_boxed_6765_ = lean_unbox(v_reconfigure_6758_);
v_res_6766_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__5___at___00Lake_recFetch___at___00Lake_recFetchAcyclic___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_runResolveT___at___00Lake_Workspace_materializeDeps_spec__1_spec__3_spec__7_spec__11(v___y_6750_, v___y_6751_, v_leanOpts_6752_, v_reconfigure_boxed_6764_, v___x_6754_, v___y_6755_, v___y_6756_, v_leanOpts_6757_, v_reconfigure_boxed_6765_, v_pkg_6759_, v_a_6760_, v_a_6761_, v___y_6762_);
lean_dec_ref(v___y_6762_);
lean_dec(v_a_6760_);
lean_dec(v___y_6755_);
lean_dec(v___x_6754_);
lean_dec(v___y_6750_);
return v_res_6766_;
}
}
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_StoreInsts(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Topological(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Materialize(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Lean_Eval(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Package(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_TacticsExtra(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Topological(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Materialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Lean_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lake_Load_Resolve_0__Lake_restartCode = _init_l___private_Lake_Load_Resolve_0__Lake_restartCode();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Lake_Util_StoreInsts(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Topological(uint8_t builtin);
lean_object* initialize_Lake_Load_Materialize(uint8_t builtin);
lean_object* initialize_Lake_Load_Lean_Eval(uint8_t builtin);
lean_object* initialize_Lake_Load_Package(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_TacticsExtra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Topological(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Materialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Lean_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Resolve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Load_Resolve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Load_Resolve(builtin);
}
#ifdef __cplusplus
}
#endif
