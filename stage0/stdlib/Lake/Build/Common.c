// Lean compiler output
// Module: Lake.Build.Common
// Imports: public import Lake.Build.Job.Monad public import Lake.Config.Monad public import Lake.Util.JsonObject public import Lake.Util.IO public import Lake.Build.Actions
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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_instMonadST(lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instAlternativeELogTOfMonad___redArg(lean_object*);
lean_object* l_ReaderT_instAlternativeOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_ReaderT_read(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(lean_object*, lean_object*);
lean_object* l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(lean_object*, lean_object*);
lean_object* l_instMonadST___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EquipT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EquipT_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_JobM_runFetchM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_Hash_hex(uint64_t);
lean_object* l_String_decidableLT___boxed(lean_object*, lean_object*);
lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
extern lean_object* l_System_Platform_target;
uint64_t lean_string_hash(lean_object*);
extern uint64_t l_Lake_Hash_nil;
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lake_BuildTrace_mix(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lake_compileStaticLib(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lake_Artifact_trace(lean_object*);
lean_object* lean_io_metadata(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lake_Hash_ofJsonNumber_x3f(lean_object*);
lean_object* l_Lake_JsonObject_getJson_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lake_instFromJsonLogEntry_fromJson(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lake_Hash_ofDecimal_x3f(lean_object*);
lean_object* l_Lake_Hash_fromJson_x3f(lean_object*);
lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(uint64_t, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* lean_io_hard_link(lean_object*, lean_object*);
lean_object* l_Lake_copyFile(lean_object*, lean_object*);
lean_object* l_IO_setAccessRights(lean_object*, lean_object*);
lean_object* l_Lake_JsonObject_insertJson(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instToJsonLogEntry_toJson(lean_object*);
uint8_t l_Lake_JobAction_merge(uint8_t, uint8_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* l_Lake_removeFileIfExists(lean_object*);
lean_object* l_Lake_Package_cacheScope(lean_object*);
lean_object* l_Lake_Cache_readOutputs_x3f(lean_object*, lean_object*, uint64_t, lean_object*);
lean_object* l_Lake_ArtifactDescr_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_render(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lake_CacheService_artifactUrl(uint64_t, lean_object*, lean_object*);
lean_object* l_Lake_downloadArtifactCore(uint64_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now();
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lake_computeBinFileHash(lean_object*);
lean_object* l_Lake_computeTextFileHash(lean_object*);
lean_object* l_Lake_Hash_load_x3f(lean_object*);
uint8_t l_IO_FS_instOrdSystemTime_ord(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
uint64_t lean_byte_array_hash(lean_object*);
lean_object* l_IO_FS_writeBinFile(lean_object*, lean_object*);
lean_object* l_String_crlfToLf(lean_object*);
extern lean_object* l_Lake_instDataKindFilePath;
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Job_mapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instDecidableEqHash___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lake_MTime_checkUpToDate___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_compileO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_Job_async___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_System_FilePath_isDir(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_System_FilePath_walkDir(lean_object*, lean_object*);
lean_object* l_Lake_Job_bindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Dynlib_dir_x3f(lean_object*);
lean_object* l_Lake_LeanInstall_ccLinkFlags(uint8_t, lean_object*);
lean_object* l_Lake_compileExe(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_compileSharedLib(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_sharedLibExt;
extern lean_object* l_System_FilePath_exeExtension;
extern lean_object* l_Lake_instDataKindDynlib;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__0;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__1 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__1_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__2 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__2_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__3 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__3_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__4 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__4_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__5 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__5_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__6 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__6_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__7 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__7_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__1_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__2_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__8 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__8_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__8_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__3_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__4_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__5_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__6_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__9 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__9_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__9_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__7_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__10 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__10_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instFunctorOfMonad___redArg___lam__0, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__8_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__11 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__11_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instFunctorOfMonad___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__8_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__12 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__12_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__11_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__12_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__13 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__13_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_read, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__10_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__14 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__14_value;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__15;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__16;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadST___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__17 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__17_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instPure___redArg___lam__0, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__17_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__18 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__18_value;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__19;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__20;
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceJobM;
static lean_once_cell_t l_Lake_platformTrace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_platformTrace___closed__0;
static lean_once_cell_t l_Lake_platformTrace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_platformTrace___closed__1;
static const lean_array_object l_Lake_platformTrace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_platformTrace___closed__2 = (const lean_object*)&l_Lake_platformTrace___closed__2_value;
static lean_once_cell_t l_Lake_platformTrace___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_platformTrace___closed__3;
static lean_once_cell_t l_Lake_platformTrace___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_platformTrace___closed__4;
static lean_once_cell_t l_Lake_platformTrace___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_platformTrace___closed__5;
LEAN_EXPORT lean_object* l_Lake_platformTrace;
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_addPureTrace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lake_addPureTrace___redArg___closed__0 = (const lean_object*)&l_Lake_addPureTrace___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPureTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPureTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "2025-09-10"};
static const lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_value;
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Prod_toJson___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2(lean_object*);
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "schemaVersion"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__0 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__0_value;
static const lean_ctor_object l_Lake_BuildMetadata_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_value)}};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__1 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__1_value;
static lean_once_cell_t l_Lake_BuildMetadata_toJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_toJson___closed__2;
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "depHash"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__3 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__3_value;
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inputs"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__4 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__4_value;
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "outputs"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__5 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__5_value;
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "log"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__6 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__6_value;
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "synthetic"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__7 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_toJson(lean_object*);
static const lean_closure_object l_Lake_instToJsonBuildMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildMetadata_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToJsonBuildMetadata___closed__0 = (const lean_object*)&l_Lake_instToJsonBuildMetadata___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToJsonBuildMetadata = (const lean_object*)&l_Lake_instToJsonBuildMetadata___closed__0_value;
static const lean_array_object l_Lake_BuildMetadata_ofStub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuildMetadata_ofStub___closed__0 = (const lean_object*)&l_Lake_BuildMetadata_ofStub___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub(uint64_t);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub___boxed(lean_object*);
static const lean_ctor_object l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0 = (const lean_object*)&l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___boxed(lean_object*);
static const lean_ctor_object l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0 = (const lean_object*)&l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3(lean_object*);
static const lean_ctor_object l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0 = (const lean_object*)&l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0 = (const lean_object*)&l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0_value;
static const lean_string_object l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1 = (const lean_object*)&l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1(lean_object*);
static const lean_ctor_object l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0 = (const lean_object*)&l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1(lean_object*);
static const lean_string_object l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected pair, got '"};
static const lean_object* l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0 = (const lean_object*)&l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5(lean_object*);
static const lean_ctor_object l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0 = (const lean_object*)&l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3(lean_object*);
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "synthetic: "};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0_value;
static const lean_array_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "log: "};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "outputs: "};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3_value;
static const lean_array_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "inputs: "};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "property not found: depHash"};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6_value;
static const lean_ctor_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6_value)}};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "depHash: "};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "invalid trace: expected string 'depHash' of decimal digits"};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9_value;
static const lean_ctor_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9_value)}};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10_value;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___boxed(lean_object*);
static const lean_string_object l_Lake_BuildMetadata_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid trace stub: "};
static const lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__0 = (const lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__0_value;
static const lean_string_object l_Lake_BuildMetadata_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "unknown trace format: "};
static const lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__1 = (const lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__1_value;
static const lean_string_object l_Lake_BuildMetadata_fromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "invalid trace: "};
static const lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__2 = (const lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__2_value;
static const lean_string_object l_Lake_BuildMetadata_fromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "unknown trace format: expected JSON number or object"};
static const lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__3 = (const lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__3_value;
static const lean_ctor_object l_Lake_BuildMetadata_fromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__3_value)}};
static const lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__4 = (const lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f___boxed(lean_object*);
static const lean_closure_object l_Lake_instFromJsonBuildMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildMetadata_fromJson_x3f___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instFromJsonBuildMetadata___closed__0 = (const lean_object*)&l_Lake_instFromJsonBuildMetadata___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instFromJsonBuildMetadata = (const lean_object*)&l_Lake_instFromJsonBuildMetadata___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_parse(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_readTraceFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ": read failed: "};
static const lean_object* l_Lake_readTraceFile___closed__0 = (const lean_object*)&l_Lake_readTraceFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_readTraceFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_readTraceFile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqOutputStatus(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqOutputStatus___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofHashCheck(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofHashCheck___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofMTimeCheck(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofMTimeCheck___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isUpToDate(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isUpToDate___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isCacheable(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isCacheable___boxed(lean_object*);
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonPUnit___lam__0(lean_object*);
static const lean_closure_object l_Lake_instToOutputJsonPUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToOutputJsonPUnit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToOutputJsonPUnit___closed__0 = (const lean_object*)&l_Lake_instToOutputJsonPUnit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToOutputJsonPUnit = (const lean_object*)&l_Lake_instToOutputJsonPUnit___closed__0_value;
static const lean_string_object l_Lake_instToOutputJsonArtifact___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_instToOutputJsonArtifact___lam__0___closed__0 = (const lean_object*)&l_Lake_instToOutputJsonArtifact___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instToOutputJsonArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToOutputJsonArtifact___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToOutputJsonArtifact___closed__0 = (const lean_object*)&l_Lake_instToOutputJsonArtifact___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToOutputJsonArtifact = (const lean_object*)&l_Lake_instToOutputJsonArtifact___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildAction___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "target is out-of-date and needs to be rebuilt"};
static const lean_object* l_Lake_buildAction___redArg___closed__0 = (const lean_object*)&l_Lake_buildAction___redArg___closed__0_value;
static const lean_ctor_object l_Lake_buildAction___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_buildAction___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_buildAction___redArg___closed__1 = (const lean_object*)&l_Lake_buildAction___redArg___closed__1_value;
static const lean_string_object l_Lake_buildAction___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nobuild"};
static const lean_object* l_Lake_buildAction___redArg___closed__2 = (const lean_object*)&l_Lake_buildAction___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_writeFileHash___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ".hash"};
static const lean_object* l_Lake_writeFileHash___closed__0 = (const lean_object*)&l_Lake_writeFileHash___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_writeFileHash(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lake_writeFileHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheFileHash(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_cacheFileHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_clearFileHash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_clearFileHash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildFileUnlessUpToDate_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ".trace"};
static const lean_object* l_Lake_buildFileUnlessUpToDate_x27___closed__0 = (const lean_object*)&l_Lake_buildFileUnlessUpToDate_x27___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0(lean_object*, uint64_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Cache_saveArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "failed to cache artifact: "};
static const lean_object* l_Lake_Cache_saveArtifact___closed__0 = (const lean_object*)&l_Lake_Cache_saveArtifact___closed__0_value;
static const lean_string_object l_Lake_Cache_saveArtifact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "artifacts"};
static const lean_object* l_Lake_Cache_saveArtifact___closed__1 = (const lean_object*)&l_Lake_Cache_saveArtifact___closed__1_value;
static const lean_ctor_object l_Lake_Cache_saveArtifact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Cache_saveArtifact___closed__2 = (const lean_object*)&l_Lake_Cache_saveArtifact___closed__2_value;
static lean_once_cell_t l_Lake_Cache_saveArtifact___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Cache_saveArtifact___closed__3;
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_cacheArtifact___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_cacheArtifact___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_cacheArtifact___redArg___closed__0 = (const lean_object*)&l_Lake_cacheArtifact___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\n- "};
static const lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "input '"};
static const lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "' found in package artifact cache, but some output(s) have issues:"};
static const lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1_value;
static const lean_closure_object l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "could not write outputs to cache: "};
static const lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_resolveArtifact___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "downloaded succeeded, but artifact failed to resolve: "};
static const lean_object* l_Lake_resolveArtifact___lam__1___closed__0 = (const lean_object*)&l_Lake_resolveArtifact___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_resolveArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "downloaded artifact "};
static const lean_object* l_Lake_resolveArtifact___closed__0 = (const lean_object*)&l_Lake_resolveArtifact___closed__0_value;
static const lean_string_object l_Lake_resolveArtifact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n  local path: "};
static const lean_object* l_Lake_resolveArtifact___closed__1 = (const lean_object*)&l_Lake_resolveArtifact___closed__1_value;
static const lean_string_object l_Lake_resolveArtifact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n  remote URL: "};
static const lean_object* l_Lake_resolveArtifact___closed__2 = (const lean_object*)&l_Lake_resolveArtifact___closed__2_value;
static const lean_string_object l_Lake_resolveArtifact___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "could not mark downloaded artifact read-only: "};
static const lean_object* l_Lake_resolveArtifact___closed__3 = (const lean_object*)&l_Lake_resolveArtifact___closed__3_value;
static const lean_string_object l_Lake_resolveArtifact___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "artifact with associated cache service but no scope"};
static const lean_object* l_Lake_resolveArtifact___closed__4 = (const lean_object*)&l_Lake_resolveArtifact___closed__4_value;
static const lean_ctor_object l_Lake_resolveArtifact___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_resolveArtifact___closed__4_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_resolveArtifact___closed__5 = (const lean_object*)&l_Lake_resolveArtifact___closed__5_value;
static const lean_string_object l_Lake_resolveArtifact___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "artifact cache service is not configured: "};
static const lean_object* l_Lake_resolveArtifact___closed__6 = (const lean_object*)&l_Lake_resolveArtifact___closed__6_value;
static const lean_string_object l_Lake_resolveArtifact___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "artifact not found in cache:\n  "};
static const lean_object* l_Lake_resolveArtifact___closed__7 = (const lean_object*)&l_Lake_resolveArtifact___closed__7_value;
static const lean_string_object l_Lake_resolveArtifact___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "failed to retrieve artifact from cache: "};
static const lean_object* l_Lake_resolveArtifact___closed__8 = (const lean_object*)&l_Lake_resolveArtifact___closed__8_value;
LEAN_EXPORT lean_object* l_Lake_resolveArtifact(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_resolveArtifactOutput___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "ill-formed artifact output:\n"};
static const lean_object* l_Lake_resolveArtifactOutput___closed__0 = (const lean_object*)&l_Lake_resolveArtifactOutput___closed__0_value;
static const lean_string_object l_Lake_resolveArtifactOutput___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lake_resolveArtifactOutput___closed__1 = (const lean_object*)&l_Lake_resolveArtifactOutput___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_restoreArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "restored artifact from cache to: "};
static const lean_object* l_Lake_restoreArtifact___closed__0 = (const lean_object*)&l_Lake_restoreArtifact___closed__0_value;
static const lean_string_object l_Lake_restoreArtifact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "found artifact in cache: "};
static const lean_object* l_Lake_restoreArtifact___closed__1 = (const lean_object*)&l_Lake_restoreArtifact___closed__1_value;
static const lean_string_object l_Lake_restoreArtifact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "could not hard link artifact, copying from cache instead; error: "};
static const lean_object* l_Lake_restoreArtifact___closed__2 = (const lean_object*)&l_Lake_restoreArtifact___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_restoreArtifact(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_restoreArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "failed to retrieve artifact modification time: "};
static const lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(uint8_t, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(uint8_t, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0(uint8_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildFileAfterDep___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "art"};
static const lean_object* l_Lake_buildFileAfterDep___redArg___lam__0___closed__0 = (const lean_object*)&l_Lake_buildFileAfterDep___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_inputBinFile___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_inputBinFile___redArg___closed__0 = (const lean_object*)&l_Lake_inputBinFile___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_decidableLT___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_inputDir___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_inputDir___lam__1___closed__0 = (const lean_object*)&l_Lake_inputDir___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_inputDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_inputDir___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_inputDir___closed__0 = (const lean_object*)&l_Lake_inputDir___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_inputDir(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_buildO___lam__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildO___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "traceArgs: "};
static const lean_object* l_Lake_buildO___lam__2___closed__0 = (const lean_object*)&l_Lake_buildO___lam__2___closed__0_value;
static const lean_string_object l_Lake_buildO___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lake_buildO___lam__2___closed__1 = (const lean_object*)&l_Lake_buildO___lam__2___closed__1_value;
static const lean_string_object l_Lake_buildO___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "o"};
static const lean_object* l_Lake_buildO___lam__2___closed__2 = (const lean_object*)&l_Lake_buildO___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_buildO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_buildO___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_buildO___closed__0 = (const lean_object*)&l_Lake_buildO___closed__0_value;
static const lean_closure_object l_Lake_buildO___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_buildO___closed__1 = (const lean_object*)&l_Lake_buildO___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_buildO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildLeanO___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-I"};
static const lean_object* l_Lake_buildLeanO___lam__0___closed__0 = (const lean_object*)&l_Lake_buildLeanO___lam__0___closed__0_value;
static lean_once_cell_t l_Lake_buildLeanO___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildLeanO___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lake_buildLeanO_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lake_buildLeanO_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lake_buildLeanO_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lake_buildLeanO_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildStaticLib___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lake_buildStaticLib___lam__1___closed__0 = (const lean_object*)&l_Lake_buildStaticLib___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildStaticLib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "objs"};
static const lean_object* l_Lake_buildStaticLib___closed__0 = (const lean_object*)&l_Lake_buildStaticLib___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildStaticLib(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-l"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-L"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "  "};
static const lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "library dependency cycle:\n"};
static const lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__0_value;
static const lean_array_object l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1_value)}};
static const lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildSharedLib___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "linkLibs"};
static const lean_object* l_Lake_buildSharedLib___lam__3___closed__0 = (const lean_object*)&l_Lake_buildSharedLib___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__3___boxed(lean_object**);
static const lean_string_object l_Lake_buildSharedLib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "linkObjs"};
static const lean_object* l_Lake_buildSharedLib___closed__0 = (const lean_object*)&l_Lake_buildSharedLib___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___boxed(lean_object**);
static lean_once_cell_t l_Lake_buildLeanSharedLib___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_buildLeanSharedLib___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_instMonadST(lean_box(0));
return v___x_1_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__15(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__13));
v___x_31_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__14));
v___x_32_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_31_, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__16(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__0, &l_Lake_instMonadWorkspaceJobM___closed__0_once, _init_l_Lake_instMonadWorkspaceJobM___closed__0);
v___x_34_ = l_Lake_instAlternativeELogTOfMonad___redArg(v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__19(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_38_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__13));
v___x_39_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__15, &l_Lake_instMonadWorkspaceJobM___closed__15_once, _init_l_Lake_instMonadWorkspaceJobM___closed__15);
v___x_40_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_39_, v___x_38_);
return v___x_40_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__20(void){
_start:
{
lean_object* v___x_41_; lean_object* v___f_42_; lean_object* v___x_43_; 
v___x_41_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__19, &l_Lake_instMonadWorkspaceJobM___closed__19_once, _init_l_Lake_instMonadWorkspaceJobM___closed__19);
v___f_42_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__18));
v___x_43_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0), 4, 3);
lean_closure_set(v___x_43_, 0, v___f_42_);
lean_closure_set(v___x_43_, 1, lean_box(0));
lean_closure_set(v___x_43_, 2, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM(void){
_start:
{
lean_object* v___x_44_; lean_object* v_toApplicative_45_; lean_object* v_toBind_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_123_; 
v___x_44_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__0, &l_Lake_instMonadWorkspaceJobM___closed__0_once, _init_l_Lake_instMonadWorkspaceJobM___closed__0);
v_toApplicative_45_ = lean_ctor_get(v___x_44_, 0);
v_toBind_46_ = lean_ctor_get(v___x_44_, 1);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_123_ == 0)
{
v___x_48_ = v___x_44_;
v_isShared_49_ = v_isSharedCheck_123_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_toBind_46_);
lean_inc(v_toApplicative_45_);
lean_dec(v___x_44_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_123_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v_toFunctor_50_; lean_object* v_toPure_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_119_; 
v_toFunctor_50_ = lean_ctor_get(v_toApplicative_45_, 0);
v_toPure_51_ = lean_ctor_get(v_toApplicative_45_, 1);
v_isSharedCheck_119_ = !lean_is_exclusive(v_toApplicative_45_);
if (v_isSharedCheck_119_ == 0)
{
lean_object* v_unused_120_; lean_object* v_unused_121_; lean_object* v_unused_122_; 
v_unused_120_ = lean_ctor_get(v_toApplicative_45_, 4);
lean_dec(v_unused_120_);
v_unused_121_ = lean_ctor_get(v_toApplicative_45_, 3);
lean_dec(v_unused_121_);
v_unused_122_ = lean_ctor_get(v_toApplicative_45_, 2);
lean_dec(v_unused_122_);
v___x_53_ = v_toApplicative_45_;
v_isShared_54_ = v_isSharedCheck_119_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_toPure_51_);
lean_inc(v_toFunctor_50_);
lean_dec(v_toApplicative_45_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_119_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v___f_55_; lean_object* v___f_56_; lean_object* v___f_57_; lean_object* v___f_58_; lean_object* v___x_59_; lean_object* v___f_60_; lean_object* v___x_62_; 
lean_inc(v_toBind_46_);
lean_inc(v_toPure_51_);
v___f_55_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_55_, 0, v_toPure_51_);
lean_closure_set(v___f_55_, 1, v_toBind_46_);
lean_inc(v_toBind_46_);
lean_inc(v_toPure_51_);
v___f_56_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_56_, 0, v_toPure_51_);
lean_closure_set(v___f_56_, 1, v_toBind_46_);
lean_inc_ref(v___f_55_);
lean_inc(v_toPure_51_);
v___f_57_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_57_, 0, v_toPure_51_);
lean_closure_set(v___f_57_, 1, v___f_55_);
lean_inc(v_toPure_51_);
lean_inc_ref(v_toFunctor_50_);
v___f_58_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_58_, 0, v_toFunctor_50_);
lean_closure_set(v___f_58_, 1, v_toPure_51_);
lean_closure_set(v___f_58_, 2, v_toBind_46_);
v___x_59_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_50_);
v___f_60_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_60_, 0, v_toPure_51_);
lean_inc_ref(v___x_59_);
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 4, v___f_56_);
lean_ctor_set(v___x_53_, 3, v___f_57_);
lean_ctor_set(v___x_53_, 2, v___f_58_);
lean_ctor_set(v___x_53_, 1, v___f_60_);
lean_ctor_set(v___x_53_, 0, v___x_59_);
v___x_62_ = v___x_53_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_59_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___f_60_);
lean_ctor_set(v_reuseFailAlloc_118_, 2, v___f_58_);
lean_ctor_set(v_reuseFailAlloc_118_, 3, v___f_57_);
lean_ctor_set(v_reuseFailAlloc_118_, 4, v___f_56_);
v___x_62_ = v_reuseFailAlloc_118_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
lean_object* v___x_64_; 
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 1, v___f_55_);
lean_ctor_set(v___x_48_, 0, v___x_62_);
v___x_64_ = v___x_48_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_62_);
lean_ctor_set(v_reuseFailAlloc_117_, 1, v___f_55_);
v___x_64_ = v_reuseFailAlloc_117_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
lean_object* v___f_65_; lean_object* v___f_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v_toApplicative_72_; lean_object* v_toFunctor_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v_toApplicative_77_; lean_object* v_toFunctor_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___f_82_; lean_object* v___f_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v_toApplicative_86_; lean_object* v_toFunctor_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___f_93_; lean_object* v___f_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v_toApplicative_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_115_; 
lean_inc_ref(v___x_59_);
v___f_65_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_65_, 0, v___x_59_);
v___f_66_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_66_, 0, v___x_59_);
v___x_67_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_67_, 0, v___f_65_);
lean_ctor_set(v___x_67_, 1, v___f_66_);
v___x_68_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__16, &l_Lake_instMonadWorkspaceJobM___closed__16_once, _init_l_Lake_instMonadWorkspaceJobM___closed__16);
lean_inc_ref(v___x_64_);
v___x_69_ = l_ReaderT_instAlternativeOfMonad___redArg(v___x_68_, v___x_64_);
v___x_70_ = l_ReaderT_instMonad___redArg(v___x_64_);
lean_inc_ref(v___x_70_);
v___x_71_ = l_ReaderT_instAlternativeOfMonad___redArg(v___x_69_, v___x_70_);
v_toApplicative_72_ = lean_ctor_get(v___x_71_, 0);
lean_inc_ref(v_toApplicative_72_);
lean_dec_ref(v___x_71_);
v_toFunctor_73_ = lean_ctor_get(v_toApplicative_72_, 0);
lean_inc_ref(v_toFunctor_73_);
lean_dec_ref(v_toApplicative_72_);
v___x_74_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__20, &l_Lake_instMonadWorkspaceJobM___closed__20_once, _init_l_Lake_instMonadWorkspaceJobM___closed__20);
lean_inc_ref(v___x_67_);
v___x_75_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_74_, v___x_67_);
v___x_76_ = l_ReaderT_instMonad___redArg(v___x_70_);
v_toApplicative_77_ = lean_ctor_get(v___x_76_, 0);
lean_inc_ref(v_toApplicative_77_);
v_toFunctor_78_ = lean_ctor_get(v_toApplicative_77_, 0);
lean_inc_ref(v_toFunctor_78_);
lean_dec_ref(v_toApplicative_77_);
v___x_79_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_75_, v___x_67_);
v___x_80_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_80_, 0, lean_box(0));
lean_closure_set(v___x_80_, 1, lean_box(0));
lean_closure_set(v___x_80_, 2, lean_box(0));
lean_closure_set(v___x_80_, 3, lean_box(0));
lean_closure_set(v___x_80_, 4, v___x_79_);
lean_inc_ref(v_toFunctor_73_);
v___x_81_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_80_, v_toFunctor_73_);
lean_inc_ref(v_toFunctor_78_);
v___f_82_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_82_, 0, v_toFunctor_78_);
v___f_83_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_83_, 0, v_toFunctor_78_);
v___x_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_84_, 0, v___f_82_);
lean_ctor_set(v___x_84_, 1, v___f_83_);
v___x_85_ = l_ReaderT_instMonad___redArg(v___x_76_);
v_toApplicative_86_ = lean_ctor_get(v___x_85_, 0);
lean_inc_ref(v_toApplicative_86_);
v_toFunctor_87_ = lean_ctor_get(v_toApplicative_86_, 0);
lean_inc_ref(v_toFunctor_87_);
lean_dec_ref(v_toApplicative_86_);
v___x_88_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_81_, v_toFunctor_73_);
v___x_89_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 2);
lean_closure_set(v___x_89_, 0, lean_box(0));
lean_closure_set(v___x_89_, 1, v___x_88_);
lean_inc_ref(v___x_84_);
v___x_90_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_89_, v___x_84_);
v___x_91_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_90_, v___x_84_);
v___x_92_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 2);
lean_closure_set(v___x_92_, 0, lean_box(0));
lean_closure_set(v___x_92_, 1, v___x_91_);
lean_inc_ref(v_toFunctor_87_);
v___f_93_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_93_, 0, v_toFunctor_87_);
v___f_94_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_94_, 0, v_toFunctor_87_);
v___x_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_95_, 0, v___f_93_);
lean_ctor_set(v___x_95_, 1, v___f_94_);
lean_inc_ref(v___x_95_);
v___x_96_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_92_, v___x_95_);
lean_inc_ref(v___x_95_);
v___x_97_ = l_Lake_EquipT_instFunctor___redArg(v___x_95_);
v_toApplicative_98_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_115_ == 0)
{
lean_object* v_unused_116_; 
v_unused_116_ = lean_ctor_get(v___x_85_, 1);
lean_dec(v_unused_116_);
v___x_100_ = v___x_85_;
v_isShared_101_ = v_isSharedCheck_115_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_toApplicative_98_);
lean_dec(v___x_85_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_115_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v_toFunctor_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___f_108_; lean_object* v___f_109_; lean_object* v___x_111_; 
v_toFunctor_102_ = lean_ctor_get(v_toApplicative_98_, 0);
lean_inc_ref(v_toFunctor_102_);
lean_dec_ref(v_toApplicative_98_);
v___x_103_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_96_, v___x_95_);
v___x_104_ = lean_alloc_closure((void*)(l_Lake_EquipT_lift___boxed), 5, 4);
lean_closure_set(v___x_104_, 0, lean_box(0));
lean_closure_set(v___x_104_, 1, lean_box(0));
lean_closure_set(v___x_104_, 2, lean_box(0));
lean_closure_set(v___x_104_, 3, v___x_103_);
lean_inc_ref(v___x_97_);
v___x_105_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_104_, v___x_97_);
v___x_106_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_105_, v___x_97_);
v___x_107_ = lean_alloc_closure((void*)(l_Lake_JobM_runFetchM___boxed), 9, 2);
lean_closure_set(v___x_107_, 0, lean_box(0));
lean_closure_set(v___x_107_, 1, v___x_106_);
lean_inc_ref(v_toFunctor_102_);
v___f_108_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_108_, 0, v_toFunctor_102_);
v___f_109_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_109_, 0, v_toFunctor_102_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 1, v___f_109_);
lean_ctor_set(v___x_100_, 0, v___f_108_);
v___x_111_ = v___x_100_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___f_108_);
lean_ctor_set(v_reuseFailAlloc_114_, 1, v___f_109_);
v___x_111_ = v_reuseFailAlloc_114_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = l_Lake_EquipT_instFunctor___redArg(v___x_111_);
v___x_113_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_107_, v___x_112_);
return v___x_113_;
}
}
}
}
}
}
}
}
static uint64_t _init_l_Lake_platformTrace___closed__0(void){
_start:
{
lean_object* v___x_124_; uint64_t v___x_125_; 
v___x_124_ = l_System_Platform_target;
v___x_125_ = lean_string_hash(v___x_124_);
return v___x_125_;
}
}
static uint64_t _init_l_Lake_platformTrace___closed__1(void){
_start:
{
uint64_t v___x_126_; uint64_t v___x_127_; uint64_t v___x_128_; 
v___x_126_ = lean_uint64_once(&l_Lake_platformTrace___closed__0, &l_Lake_platformTrace___closed__0_once, _init_l_Lake_platformTrace___closed__0);
v___x_127_ = l_Lake_Hash_nil;
v___x_128_ = lean_uint64_mix_hash(v___x_127_, v___x_126_);
return v___x_128_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__3(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = lean_nat_to_int(v___x_131_);
return v___x_132_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__4(void){
_start:
{
uint32_t v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_133_ = 0;
v___x_134_ = lean_obj_once(&l_Lake_platformTrace___closed__3, &l_Lake_platformTrace___closed__3_once, _init_l_Lake_platformTrace___closed__3);
v___x_135_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set_uint32(v___x_135_, sizeof(void*)*1, v___x_133_);
return v___x_135_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__5(void){
_start:
{
lean_object* v___x_136_; uint64_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_136_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_137_ = lean_uint64_once(&l_Lake_platformTrace___closed__1, &l_Lake_platformTrace___closed__1_once, _init_l_Lake_platformTrace___closed__1);
v___x_138_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_139_ = l_System_Platform_target;
v___x_140_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_140_, 0, v___x_139_);
lean_ctor_set(v___x_140_, 1, v___x_138_);
lean_ctor_set(v___x_140_, 2, v___x_136_);
lean_ctor_set_uint64(v___x_140_, sizeof(void*)*3, v___x_137_);
return v___x_140_;
}
}
static lean_object* _init_l_Lake_platformTrace(void){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_obj_once(&l_Lake_platformTrace___closed__5, &l_Lake_platformTrace___closed__5_once, _init_l_Lake_platformTrace___closed__5);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg(lean_object* v_a_142_){
_start:
{
lean_object* v_log_144_; uint8_t v_action_145_; uint8_t v_wantsRebuild_146_; lean_object* v_trace_147_; lean_object* v_buildTime_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_159_; 
v_log_144_ = lean_ctor_get(v_a_142_, 0);
v_action_145_ = lean_ctor_get_uint8(v_a_142_, sizeof(void*)*3);
v_wantsRebuild_146_ = lean_ctor_get_uint8(v_a_142_, sizeof(void*)*3 + 1);
v_trace_147_ = lean_ctor_get(v_a_142_, 1);
v_buildTime_148_ = lean_ctor_get(v_a_142_, 2);
v_isSharedCheck_159_ = !lean_is_exclusive(v_a_142_);
if (v_isSharedCheck_159_ == 0)
{
v___x_150_ = v_a_142_;
v_isShared_151_ = v_isSharedCheck_159_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_buildTime_148_);
lean_inc(v_trace_147_);
lean_inc(v_log_144_);
lean_dec(v_a_142_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_159_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_152_ = l_Lake_platformTrace;
v___x_153_ = lean_box(0);
v___x_154_ = l_Lake_BuildTrace_mix(v_trace_147_, v___x_152_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 1, v___x_154_);
v___x_156_ = v___x_150_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_log_144_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_158_, 2, v_buildTime_148_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, sizeof(void*)*3, v_action_145_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, sizeof(void*)*3 + 1, v_wantsRebuild_146_);
v___x_156_ = v_reuseFailAlloc_158_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
lean_object* v___x_157_; 
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_153_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
return v___x_157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg___boxed(lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lake_addPlatformTrace___redArg(v_a_160_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace(lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v_log_170_; uint8_t v_action_171_; uint8_t v_wantsRebuild_172_; lean_object* v_trace_173_; lean_object* v_buildTime_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_185_; 
v_log_170_ = lean_ctor_get(v_a_168_, 0);
v_action_171_ = lean_ctor_get_uint8(v_a_168_, sizeof(void*)*3);
v_wantsRebuild_172_ = lean_ctor_get_uint8(v_a_168_, sizeof(void*)*3 + 1);
v_trace_173_ = lean_ctor_get(v_a_168_, 1);
v_buildTime_174_ = lean_ctor_get(v_a_168_, 2);
v_isSharedCheck_185_ = !lean_is_exclusive(v_a_168_);
if (v_isSharedCheck_185_ == 0)
{
v___x_176_ = v_a_168_;
v_isShared_177_ = v_isSharedCheck_185_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_buildTime_174_);
lean_inc(v_trace_173_);
lean_inc(v_log_170_);
lean_dec(v_a_168_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_185_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_178_ = l_Lake_platformTrace;
v___x_179_ = lean_box(0);
v___x_180_ = l_Lake_BuildTrace_mix(v_trace_173_, v___x_178_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 1, v___x_180_);
v___x_182_ = v___x_176_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_log_170_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v___x_180_);
lean_ctor_set(v_reuseFailAlloc_184_, 2, v_buildTime_174_);
lean_ctor_set_uint8(v_reuseFailAlloc_184_, sizeof(void*)*3, v_action_171_);
lean_ctor_set_uint8(v_reuseFailAlloc_184_, sizeof(void*)*3 + 1, v_wantsRebuild_172_);
v___x_182_ = v_reuseFailAlloc_184_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_183_; 
v___x_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_179_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
return v___x_183_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___boxed(lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lake_addPlatformTrace(v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
lean_dec(v_a_188_);
lean_dec(v_a_187_);
lean_dec_ref(v_a_186_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg(lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v_log_197_; uint8_t v_action_198_; uint8_t v_wantsRebuild_199_; lean_object* v_trace_200_; lean_object* v_buildTime_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_212_; 
v_log_197_ = lean_ctor_get(v_a_195_, 0);
v_action_198_ = lean_ctor_get_uint8(v_a_195_, sizeof(void*)*3);
v_wantsRebuild_199_ = lean_ctor_get_uint8(v_a_195_, sizeof(void*)*3 + 1);
v_trace_200_ = lean_ctor_get(v_a_195_, 1);
v_buildTime_201_ = lean_ctor_get(v_a_195_, 2);
v_isSharedCheck_212_ = !lean_is_exclusive(v_a_195_);
if (v_isSharedCheck_212_ == 0)
{
v___x_203_ = v_a_195_;
v_isShared_204_ = v_isSharedCheck_212_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_buildTime_201_);
lean_inc(v_trace_200_);
lean_inc(v_log_197_);
lean_dec(v_a_195_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_212_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v_leanTrace_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_209_; 
v_leanTrace_205_ = lean_ctor_get(v_a_194_, 2);
lean_inc_ref(v_leanTrace_205_);
lean_dec_ref(v_a_194_);
v___x_206_ = lean_box(0);
v___x_207_ = l_Lake_BuildTrace_mix(v_trace_200_, v_leanTrace_205_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 1, v___x_207_);
v___x_209_ = v___x_203_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_log_197_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v___x_207_);
lean_ctor_set(v_reuseFailAlloc_211_, 2, v_buildTime_201_);
lean_ctor_set_uint8(v_reuseFailAlloc_211_, sizeof(void*)*3, v_action_198_);
lean_ctor_set_uint8(v_reuseFailAlloc_211_, sizeof(void*)*3 + 1, v_wantsRebuild_199_);
v___x_209_ = v_reuseFailAlloc_211_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_210_; 
v___x_210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_206_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
return v___x_210_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg___boxed(lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lake_addLeanTrace___redArg(v_a_213_, v_a_214_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace(lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_){
_start:
{
lean_object* v_log_224_; uint8_t v_action_225_; uint8_t v_wantsRebuild_226_; lean_object* v_trace_227_; lean_object* v_buildTime_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_239_; 
v_log_224_ = lean_ctor_get(v_a_222_, 0);
v_action_225_ = lean_ctor_get_uint8(v_a_222_, sizeof(void*)*3);
v_wantsRebuild_226_ = lean_ctor_get_uint8(v_a_222_, sizeof(void*)*3 + 1);
v_trace_227_ = lean_ctor_get(v_a_222_, 1);
v_buildTime_228_ = lean_ctor_get(v_a_222_, 2);
v_isSharedCheck_239_ = !lean_is_exclusive(v_a_222_);
if (v_isSharedCheck_239_ == 0)
{
v___x_230_ = v_a_222_;
v_isShared_231_ = v_isSharedCheck_239_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_buildTime_228_);
lean_inc(v_trace_227_);
lean_inc(v_log_224_);
lean_dec(v_a_222_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_239_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v_leanTrace_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
v_leanTrace_232_ = lean_ctor_get(v_a_221_, 2);
lean_inc_ref(v_leanTrace_232_);
lean_dec_ref(v_a_221_);
v___x_233_ = lean_box(0);
v___x_234_ = l_Lake_BuildTrace_mix(v_trace_227_, v_leanTrace_232_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 1, v___x_234_);
v___x_236_ = v___x_230_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_log_224_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v___x_234_);
lean_ctor_set(v_reuseFailAlloc_238_, 2, v_buildTime_228_);
lean_ctor_set_uint8(v_reuseFailAlloc_238_, sizeof(void*)*3, v_action_225_);
lean_ctor_set_uint8(v_reuseFailAlloc_238_, sizeof(void*)*3 + 1, v_wantsRebuild_226_);
v___x_236_ = v_reuseFailAlloc_238_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_237_; 
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_233_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
return v___x_237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___boxed(lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lake_addLeanTrace(v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
lean_dec(v_a_243_);
lean_dec(v_a_242_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg(lean_object* v_inst_249_, lean_object* v_inst_250_, lean_object* v_a_251_, lean_object* v_caption_252_, lean_object* v_a_253_){
_start:
{
lean_object* v_log_255_; uint8_t v_action_256_; uint8_t v_wantsRebuild_257_; lean_object* v_trace_258_; lean_object* v_buildTime_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_278_; 
v_log_255_ = lean_ctor_get(v_a_253_, 0);
v_action_256_ = lean_ctor_get_uint8(v_a_253_, sizeof(void*)*3);
v_wantsRebuild_257_ = lean_ctor_get_uint8(v_a_253_, sizeof(void*)*3 + 1);
v_trace_258_ = lean_ctor_get(v_a_253_, 1);
v_buildTime_259_ = lean_ctor_get(v_a_253_, 2);
v_isSharedCheck_278_ = !lean_is_exclusive(v_a_253_);
if (v_isSharedCheck_278_ == 0)
{
v___x_261_ = v_a_253_;
v_isShared_262_ = v_isSharedCheck_278_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_buildTime_259_);
lean_inc(v_trace_258_);
lean_inc(v_log_255_);
lean_dec(v_a_253_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_278_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; uint64_t v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_275_; 
lean_inc(v_a_251_);
v___x_263_ = lean_apply_1(v_inst_250_, v_a_251_);
v___x_264_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_265_ = ((lean_object*)(l_Lake_addPureTrace___redArg___closed__0));
v___x_266_ = lean_string_append(v_caption_252_, v___x_265_);
v___x_267_ = lean_apply_1(v_inst_249_, v_a_251_);
v___x_268_ = lean_string_append(v___x_266_, v___x_267_);
lean_dec_ref(v___x_267_);
v___x_269_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_270_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_270_, 0, v___x_268_);
lean_ctor_set(v___x_270_, 1, v___x_264_);
lean_ctor_set(v___x_270_, 2, v___x_269_);
v___x_271_ = lean_unbox_uint64(v___x_263_);
lean_dec_ref(v___x_263_);
lean_ctor_set_uint64(v___x_270_, sizeof(void*)*3, v___x_271_);
v___x_272_ = lean_box(0);
v___x_273_ = l_Lake_BuildTrace_mix(v_trace_258_, v___x_270_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 1, v___x_273_);
v___x_275_ = v___x_261_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_log_255_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_277_, 2, v_buildTime_259_);
lean_ctor_set_uint8(v_reuseFailAlloc_277_, sizeof(void*)*3, v_action_256_);
lean_ctor_set_uint8(v_reuseFailAlloc_277_, sizeof(void*)*3 + 1, v_wantsRebuild_257_);
v___x_275_ = v_reuseFailAlloc_277_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_276_; 
v___x_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_272_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
return v___x_276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg___boxed(lean_object* v_inst_279_, lean_object* v_inst_280_, lean_object* v_a_281_, lean_object* v_caption_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Lake_addPureTrace___redArg(v_inst_279_, v_inst_280_, v_a_281_, v_caption_282_, v_a_283_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace(lean_object* v_00_u03b1_286_, lean_object* v_inst_287_, lean_object* v_inst_288_, lean_object* v_a_289_, lean_object* v_caption_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_log_298_; uint8_t v_action_299_; uint8_t v_wantsRebuild_300_; lean_object* v_trace_301_; lean_object* v_buildTime_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_321_; 
v_log_298_ = lean_ctor_get(v_a_296_, 0);
v_action_299_ = lean_ctor_get_uint8(v_a_296_, sizeof(void*)*3);
v_wantsRebuild_300_ = lean_ctor_get_uint8(v_a_296_, sizeof(void*)*3 + 1);
v_trace_301_ = lean_ctor_get(v_a_296_, 1);
v_buildTime_302_ = lean_ctor_get(v_a_296_, 2);
v_isSharedCheck_321_ = !lean_is_exclusive(v_a_296_);
if (v_isSharedCheck_321_ == 0)
{
v___x_304_ = v_a_296_;
v_isShared_305_ = v_isSharedCheck_321_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_buildTime_302_);
lean_inc(v_trace_301_);
lean_inc(v_log_298_);
lean_dec(v_a_296_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_321_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint64_t v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_318_; 
lean_inc(v_a_289_);
v___x_306_ = lean_apply_1(v_inst_288_, v_a_289_);
v___x_307_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_308_ = ((lean_object*)(l_Lake_addPureTrace___redArg___closed__0));
v___x_309_ = lean_string_append(v_caption_290_, v___x_308_);
v___x_310_ = lean_apply_1(v_inst_287_, v_a_289_);
v___x_311_ = lean_string_append(v___x_309_, v___x_310_);
lean_dec_ref(v___x_310_);
v___x_312_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_313_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_313_, 0, v___x_311_);
lean_ctor_set(v___x_313_, 1, v___x_307_);
lean_ctor_set(v___x_313_, 2, v___x_312_);
v___x_314_ = lean_unbox_uint64(v___x_306_);
lean_dec_ref(v___x_306_);
lean_ctor_set_uint64(v___x_313_, sizeof(void*)*3, v___x_314_);
v___x_315_ = lean_box(0);
v___x_316_ = l_Lake_BuildTrace_mix(v_trace_301_, v___x_313_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 1, v___x_316_);
v___x_318_ = v___x_304_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_log_298_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v___x_316_);
lean_ctor_set(v_reuseFailAlloc_320_, 2, v_buildTime_302_);
lean_ctor_set_uint8(v_reuseFailAlloc_320_, sizeof(void*)*3, v_action_299_);
lean_ctor_set_uint8(v_reuseFailAlloc_320_, sizeof(void*)*3 + 1, v_wantsRebuild_300_);
v___x_318_ = v_reuseFailAlloc_320_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_319_; 
v___x_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_315_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
return v___x_319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___boxed(lean_object* v_00_u03b1_322_, lean_object* v_inst_323_, lean_object* v_inst_324_, lean_object* v_a_325_, lean_object* v_caption_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lake_addPureTrace(v_00_u03b1_322_, v_inst_323_, v_inst_324_, v_a_325_, v_caption_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_a_330_);
lean_dec(v_a_329_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(lean_object* v_x_337_){
_start:
{
if (lean_obj_tag(v_x_337_) == 0)
{
lean_object* v___x_338_; 
v___x_338_ = lean_box(0);
return v___x_338_;
}
else
{
lean_object* v_val_339_; 
v_val_339_ = lean_ctor_get(v_x_337_, 0);
lean_inc(v_val_339_);
return v_val_339_;
}
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1___boxed(lean_object* v_x_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(v_x_340_);
lean_dec(v_x_340_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Prod_toJson___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__0(lean_object* v_x_342_){
_start:
{
lean_object* v_fst_343_; lean_object* v_snd_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_fst_343_ = lean_ctor_get(v_x_342_, 0);
lean_inc(v_fst_343_);
v_snd_344_ = lean_ctor_get(v_x_342_, 1);
lean_inc(v_snd_344_);
lean_dec_ref(v_x_342_);
v___x_345_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_345_, 0, v_fst_343_);
v___x_346_ = lean_unsigned_to_nat(2u);
v___x_347_ = lean_mk_empty_array_with_capacity(v___x_346_);
v___x_348_ = lean_array_push(v___x_347_, v___x_345_);
v___x_349_ = lean_array_push(v___x_348_, v_snd_344_);
v___x_350_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(size_t v_sz_351_, size_t v_i_352_, lean_object* v_bs_353_){
_start:
{
uint8_t v___x_354_; 
v___x_354_ = lean_usize_dec_lt(v_i_352_, v_sz_351_);
if (v___x_354_ == 0)
{
return v_bs_353_;
}
else
{
lean_object* v_v_355_; lean_object* v___x_356_; lean_object* v_bs_x27_357_; lean_object* v___x_358_; size_t v___x_359_; size_t v___x_360_; lean_object* v___x_361_; 
v_v_355_ = lean_array_uget(v_bs_353_, v_i_352_);
v___x_356_ = lean_unsigned_to_nat(0u);
v_bs_x27_357_ = lean_array_uset(v_bs_353_, v_i_352_, v___x_356_);
v___x_358_ = l_Prod_toJson___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__0(v_v_355_);
v___x_359_ = ((size_t)1ULL);
v___x_360_ = lean_usize_add(v_i_352_, v___x_359_);
v___x_361_ = lean_array_uset(v_bs_x27_357_, v_i_352_, v___x_358_);
v_i_352_ = v___x_360_;
v_bs_353_ = v___x_361_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1___boxed(lean_object* v_sz_363_, lean_object* v_i_364_, lean_object* v_bs_365_){
_start:
{
size_t v_sz_boxed_366_; size_t v_i_boxed_367_; lean_object* v_res_368_; 
v_sz_boxed_366_ = lean_unbox_usize(v_sz_363_);
lean_dec(v_sz_363_);
v_i_boxed_367_ = lean_unbox_usize(v_i_364_);
lean_dec(v_i_364_);
v_res_368_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(v_sz_boxed_366_, v_i_boxed_367_, v_bs_365_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(lean_object* v_a_369_){
_start:
{
size_t v_sz_370_; size_t v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v_sz_370_ = lean_array_size(v_a_369_);
v___x_371_ = ((size_t)0ULL);
v___x_372_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(v_sz_370_, v___x_371_, v_a_369_);
v___x_373_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(size_t v_sz_374_, size_t v_i_375_, lean_object* v_bs_376_){
_start:
{
uint8_t v___x_377_; 
v___x_377_ = lean_usize_dec_lt(v_i_375_, v_sz_374_);
if (v___x_377_ == 0)
{
return v_bs_376_;
}
else
{
lean_object* v_v_378_; lean_object* v___x_379_; lean_object* v_bs_x27_380_; lean_object* v___x_381_; size_t v___x_382_; size_t v___x_383_; lean_object* v___x_384_; 
v_v_378_ = lean_array_uget(v_bs_376_, v_i_375_);
v___x_379_ = lean_unsigned_to_nat(0u);
v_bs_x27_380_ = lean_array_uset(v_bs_376_, v_i_375_, v___x_379_);
v___x_381_ = l_Lake_instToJsonLogEntry_toJson(v_v_378_);
lean_dec(v_v_378_);
v___x_382_ = ((size_t)1ULL);
v___x_383_ = lean_usize_add(v_i_375_, v___x_382_);
v___x_384_ = lean_array_uset(v_bs_x27_380_, v_i_375_, v___x_381_);
v_i_375_ = v___x_383_;
v_bs_376_ = v___x_384_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4___boxed(lean_object* v_sz_386_, lean_object* v_i_387_, lean_object* v_bs_388_){
_start:
{
size_t v_sz_boxed_389_; size_t v_i_boxed_390_; lean_object* v_res_391_; 
v_sz_boxed_389_ = lean_unbox_usize(v_sz_386_);
lean_dec(v_sz_386_);
v_i_boxed_390_ = lean_unbox_usize(v_i_387_);
lean_dec(v_i_387_);
v_res_391_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(v_sz_boxed_389_, v_i_boxed_390_, v_bs_388_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2(lean_object* v_a_392_){
_start:
{
size_t v_sz_393_; size_t v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v_sz_393_ = lean_array_size(v_a_392_);
v___x_394_ = ((size_t)0ULL);
v___x_395_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(v_sz_393_, v___x_394_, v_a_392_);
v___x_396_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
return v___x_396_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_toJson___closed__2(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_400_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__1));
v___x_401_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__0));
v___x_402_ = lean_box(1);
v___x_403_ = l_Lake_JsonObject_insertJson(v___x_402_, v___x_401_, v___x_400_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_toJson(lean_object* v_self_409_){
_start:
{
uint64_t v_depHash_410_; lean_object* v_inputs_411_; lean_object* v_outputs_x3f_412_; lean_object* v_log_413_; uint8_t v_synthetic_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v_depHash_410_ = lean_ctor_get_uint64(v_self_409_, sizeof(void*)*3);
v_inputs_411_ = lean_ctor_get(v_self_409_, 0);
lean_inc_ref(v_inputs_411_);
v_outputs_x3f_412_ = lean_ctor_get(v_self_409_, 1);
lean_inc(v_outputs_x3f_412_);
v_log_413_ = lean_ctor_get(v_self_409_, 2);
lean_inc_ref(v_log_413_);
v_synthetic_414_ = lean_ctor_get_uint8(v_self_409_, sizeof(void*)*3 + 8);
lean_dec_ref(v_self_409_);
v___x_415_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__2, &l_Lake_BuildMetadata_toJson___closed__2_once, _init_l_Lake_BuildMetadata_toJson___closed__2);
v___x_416_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__3));
v___x_417_ = l_Lake_Hash_hex(v_depHash_410_);
v___x_418_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
v___x_419_ = l_Lake_JsonObject_insertJson(v___x_415_, v___x_416_, v___x_418_);
v___x_420_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__4));
v___x_421_ = l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(v_inputs_411_);
v___x_422_ = l_Lake_JsonObject_insertJson(v___x_419_, v___x_420_, v___x_421_);
v___x_423_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__5));
v___x_424_ = l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(v_outputs_x3f_412_);
lean_dec(v_outputs_x3f_412_);
v___x_425_ = l_Lake_JsonObject_insertJson(v___x_422_, v___x_423_, v___x_424_);
v___x_426_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__6));
v___x_427_ = l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2(v_log_413_);
v___x_428_ = l_Lake_JsonObject_insertJson(v___x_425_, v___x_426_, v___x_427_);
v___x_429_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__7));
v___x_430_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_430_, 0, v_synthetic_414_);
v___x_431_ = l_Lake_JsonObject_insertJson(v___x_428_, v___x_429_, v___x_430_);
v___x_432_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub(uint64_t v_hash_437_){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; uint8_t v___x_440_; lean_object* v___x_441_; 
v___x_438_ = ((lean_object*)(l_Lake_BuildMetadata_ofStub___closed__0));
v___x_439_ = lean_box(0);
v___x_440_ = 0;
v___x_441_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_441_, 0, v___x_438_);
lean_ctor_set(v___x_441_, 1, v___x_439_);
lean_ctor_set(v___x_441_, 2, v___x_438_);
lean_ctor_set_uint64(v___x_441_, sizeof(void*)*3, v_hash_437_);
lean_ctor_set_uint8(v___x_441_, sizeof(void*)*3 + 8, v___x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub___boxed(lean_object* v_hash_442_){
_start:
{
uint64_t v_hash_boxed_443_; lean_object* v_res_444_; 
v_hash_boxed_443_ = lean_unbox_uint64(v_hash_442_);
lean_dec_ref(v_hash_442_);
v_res_444_ = l_Lake_BuildMetadata_ofStub(v_hash_boxed_443_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(lean_object* v_x_447_){
_start:
{
if (lean_obj_tag(v_x_447_) == 0)
{
lean_object* v___x_448_; 
v___x_448_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0));
return v___x_448_;
}
else
{
lean_object* v___x_449_; 
v___x_449_ = l_Lean_Json_getBool_x3f(v_x_447_);
if (lean_obj_tag(v___x_449_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_457_; 
v_a_450_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_457_ == 0)
{
v___x_452_ = v___x_449_;
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_449_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_466_; 
v_a_458_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_466_ == 0)
{
v___x_460_ = v___x_449_;
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_449_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___x_464_; 
v___x_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_462_, 0, v_a_458_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_462_);
v___x_464_ = v___x_460_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_462_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___boxed(lean_object* v_x_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(v_x_467_);
lean_dec(v_x_467_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3(lean_object* v_x_471_){
_start:
{
if (lean_obj_tag(v_x_471_) == 0)
{
lean_object* v___x_472_; 
v___x_472_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0));
return v___x_472_;
}
else
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_473_, 0, v_x_471_);
v___x_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
return v___x_474_;
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2(lean_object* v_x_477_){
_start:
{
if (lean_obj_tag(v_x_477_) == 0)
{
lean_object* v___x_478_; 
v___x_478_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0));
return v___x_478_;
}
else
{
lean_object* v___x_479_; lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_488_; 
v___x_479_ = l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3(v_x_477_);
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_488_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_484_, 0, v_a_480_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_484_);
v___x_486_ = v___x_482_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(size_t v_sz_489_, size_t v_i_490_, lean_object* v_bs_491_){
_start:
{
uint8_t v___x_492_; 
v___x_492_ = lean_usize_dec_lt(v_i_490_, v_sz_489_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; 
v___x_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_493_, 0, v_bs_491_);
return v___x_493_;
}
else
{
lean_object* v_v_494_; lean_object* v___x_495_; 
v_v_494_ = lean_array_uget_borrowed(v_bs_491_, v_i_490_);
lean_inc(v_v_494_);
v___x_495_ = l_Lake_instFromJsonLogEntry_fromJson(v_v_494_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
lean_dec_ref(v_bs_491_);
v_a_496_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_495_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_495_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
else
{
lean_object* v_a_504_; lean_object* v___x_505_; lean_object* v_bs_x27_506_; size_t v___x_507_; size_t v___x_508_; lean_object* v___x_509_; 
v_a_504_ = lean_ctor_get(v___x_495_, 0);
lean_inc(v_a_504_);
lean_dec_ref(v___x_495_);
v___x_505_ = lean_unsigned_to_nat(0u);
v_bs_x27_506_ = lean_array_uset(v_bs_491_, v_i_490_, v___x_505_);
v___x_507_ = ((size_t)1ULL);
v___x_508_ = lean_usize_add(v_i_490_, v___x_507_);
v___x_509_ = lean_array_uset(v_bs_x27_506_, v_i_490_, v_a_504_);
v_i_490_ = v___x_508_;
v_bs_491_ = v___x_509_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_511_, lean_object* v_i_512_, lean_object* v_bs_513_){
_start:
{
size_t v_sz_boxed_514_; size_t v_i_boxed_515_; lean_object* v_res_516_; 
v_sz_boxed_514_ = lean_unbox_usize(v_sz_511_);
lean_dec(v_sz_511_);
v_i_boxed_515_ = lean_unbox_usize(v_i_512_);
lean_dec(v_i_512_);
v_res_516_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(v_sz_boxed_514_, v_i_boxed_515_, v_bs_513_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1(lean_object* v_x_519_){
_start:
{
if (lean_obj_tag(v_x_519_) == 4)
{
lean_object* v_elems_520_; size_t v_sz_521_; size_t v___x_522_; lean_object* v___x_523_; 
v_elems_520_ = lean_ctor_get(v_x_519_, 0);
lean_inc_ref(v_elems_520_);
lean_dec_ref(v_x_519_);
v_sz_521_ = lean_array_size(v_elems_520_);
v___x_522_ = ((size_t)0ULL);
v___x_523_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(v_sz_521_, v___x_522_, v_elems_520_);
return v___x_523_;
}
else
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_524_ = ((lean_object*)(l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0));
v___x_525_ = lean_unsigned_to_nat(80u);
v___x_526_ = l_Lean_Json_pretty(v_x_519_, v___x_525_);
v___x_527_ = lean_string_append(v___x_524_, v___x_526_);
lean_dec_ref(v___x_526_);
v___x_528_ = ((lean_object*)(l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1));
v___x_529_ = lean_string_append(v___x_527_, v___x_528_);
v___x_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
return v___x_530_;
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1(lean_object* v_x_533_){
_start:
{
if (lean_obj_tag(v_x_533_) == 0)
{
lean_object* v___x_534_; 
v___x_534_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0));
return v___x_534_;
}
else
{
lean_object* v___x_535_; 
v___x_535_ = l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1(v_x_533_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_543_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_543_ == 0)
{
v___x_538_ = v___x_535_;
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_535_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_a_536_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
else
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_552_; 
v_a_544_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_552_ == 0)
{
v___x_546_ = v___x_535_;
v_isShared_547_ = v_isSharedCheck_552_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_535_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_552_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_550_; 
v___x_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_548_, 0, v_a_544_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 0, v___x_548_);
v___x_550_ = v___x_546_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v___x_548_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7(lean_object* v_x_554_){
_start:
{
lean_object* v_j_556_; 
if (lean_obj_tag(v_x_554_) == 4)
{
lean_object* v_elems_564_; lean_object* v___x_565_; lean_object* v___x_566_; uint8_t v___x_567_; 
v_elems_564_ = lean_ctor_get(v_x_554_, 0);
v___x_565_ = lean_array_get_size(v_elems_564_);
v___x_566_ = lean_unsigned_to_nat(2u);
v___x_567_ = lean_nat_dec_eq(v___x_565_, v___x_566_);
if (v___x_567_ == 0)
{
v_j_556_ = v_x_554_;
goto v___jp_555_;
}
else
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
lean_inc_ref(v_elems_564_);
lean_dec_ref(v_x_554_);
v___x_568_ = lean_unsigned_to_nat(0u);
v___x_569_ = lean_array_fget_borrowed(v_elems_564_, v___x_568_);
lean_inc(v___x_569_);
v___x_570_ = l_Lean_Json_getStr_x3f(v___x_569_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
lean_dec_ref(v_elems_564_);
v_a_571_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_570_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_570_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_589_; 
v_a_579_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_589_ == 0)
{
v___x_581_ = v___x_570_;
v_isShared_582_ = v_isSharedCheck_589_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_570_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_589_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_583_ = lean_unsigned_to_nat(1u);
v___x_584_ = lean_array_fget(v_elems_564_, v___x_583_);
lean_dec_ref(v_elems_564_);
v___x_585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_585_, 0, v_a_579_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 0, v___x_585_);
v___x_587_ = v___x_581_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
}
else
{
v_j_556_ = v_x_554_;
goto v___jp_555_;
}
v___jp_555_:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_557_ = ((lean_object*)(l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0));
v___x_558_ = lean_unsigned_to_nat(80u);
v___x_559_ = l_Lean_Json_pretty(v_j_556_, v___x_558_);
v___x_560_ = lean_string_append(v___x_557_, v___x_559_);
lean_dec_ref(v___x_559_);
v___x_561_ = ((lean_object*)(l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1));
v___x_562_ = lean_string_append(v___x_560_, v___x_561_);
v___x_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
return v___x_563_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(size_t v_sz_590_, size_t v_i_591_, lean_object* v_bs_592_){
_start:
{
uint8_t v___x_593_; 
v___x_593_ = lean_usize_dec_lt(v_i_591_, v_sz_590_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; 
v___x_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_594_, 0, v_bs_592_);
return v___x_594_;
}
else
{
lean_object* v_v_595_; lean_object* v___x_596_; 
v_v_595_ = lean_array_uget_borrowed(v_bs_592_, v_i_591_);
lean_inc(v_v_595_);
v___x_596_ = l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7(v_v_595_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec_ref(v_bs_592_);
v_a_597_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_596_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_596_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_606_; lean_object* v_bs_x27_607_; size_t v___x_608_; size_t v___x_609_; lean_object* v___x_610_; 
v_a_605_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_a_605_);
lean_dec_ref(v___x_596_);
v___x_606_ = lean_unsigned_to_nat(0u);
v_bs_x27_607_ = lean_array_uset(v_bs_592_, v_i_591_, v___x_606_);
v___x_608_ = ((size_t)1ULL);
v___x_609_ = lean_usize_add(v_i_591_, v___x_608_);
v___x_610_ = lean_array_uset(v_bs_x27_607_, v_i_591_, v_a_605_);
v_i_591_ = v___x_609_;
v_bs_592_ = v___x_610_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8___boxed(lean_object* v_sz_612_, lean_object* v_i_613_, lean_object* v_bs_614_){
_start:
{
size_t v_sz_boxed_615_; size_t v_i_boxed_616_; lean_object* v_res_617_; 
v_sz_boxed_615_ = lean_unbox_usize(v_sz_612_);
lean_dec(v_sz_612_);
v_i_boxed_616_ = lean_unbox_usize(v_i_613_);
lean_dec(v_i_613_);
v_res_617_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(v_sz_boxed_615_, v_i_boxed_616_, v_bs_614_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5(lean_object* v_x_618_){
_start:
{
if (lean_obj_tag(v_x_618_) == 4)
{
lean_object* v_elems_619_; size_t v_sz_620_; size_t v___x_621_; lean_object* v___x_622_; 
v_elems_619_ = lean_ctor_get(v_x_618_, 0);
lean_inc_ref(v_elems_619_);
lean_dec_ref(v_x_618_);
v_sz_620_ = lean_array_size(v_elems_619_);
v___x_621_ = ((size_t)0ULL);
v___x_622_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(v_sz_620_, v___x_621_, v_elems_619_);
return v___x_622_;
}
else
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_623_ = ((lean_object*)(l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0));
v___x_624_ = lean_unsigned_to_nat(80u);
v___x_625_ = l_Lean_Json_pretty(v_x_618_, v___x_624_);
v___x_626_ = lean_string_append(v___x_623_, v___x_625_);
lean_dec_ref(v___x_625_);
v___x_627_ = ((lean_object*)(l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1));
v___x_628_ = lean_string_append(v___x_626_, v___x_627_);
v___x_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
return v___x_629_;
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3(lean_object* v_x_632_){
_start:
{
if (lean_obj_tag(v_x_632_) == 0)
{
lean_object* v___x_633_; 
v___x_633_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0));
return v___x_633_;
}
else
{
lean_object* v___x_634_; 
v___x_634_ = l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5(v_x_632_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
v_a_635_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_634_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_634_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_651_; 
v_a_643_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_651_ == 0)
{
v___x_645_ = v___x_634_;
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_634_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_647_; lean_object* v___x_649_; 
v___x_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_647_, 0, v_a_643_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v___x_647_);
v___x_649_ = v___x_645_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v___x_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f(lean_object* v_obj_667_){
_start:
{
lean_object* v___y_669_; uint64_t v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; uint8_t v_a_673_; lean_object* v___y_677_; uint64_t v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; uint64_t v___y_683_; lean_object* v___y_684_; lean_object* v___y_685_; lean_object* v_a_686_; uint64_t v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; uint64_t v___y_718_; lean_object* v___y_719_; lean_object* v_a_720_; uint64_t v___y_746_; lean_object* v___y_747_; uint64_t v___y_750_; lean_object* v_a_751_; uint64_t v___y_777_; uint64_t v_depHash_780_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__0));
v___x_806_ = l_Lake_JsonObject_getJson_x3f(v_obj_667_, v___x_805_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__3));
v___x_808_ = l_Lake_JsonObject_getJson_x3f(v_obj_667_, v___x_807_);
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v___x_809_; 
v___x_809_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7));
return v___x_809_;
}
else
{
lean_object* v_val_810_; lean_object* v___x_811_; 
v_val_810_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_val_810_);
lean_dec_ref(v___x_808_);
v___x_811_ = l_Lean_Json_getStr_x3f(v_val_810_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_821_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_821_ == 0)
{
v___x_814_ = v___x_811_;
v_isShared_815_ = v_isSharedCheck_821_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_811_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_821_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_819_; 
v___x_816_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8));
v___x_817_ = lean_string_append(v___x_816_, v_a_812_);
lean_dec(v_a_812_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_817_);
v___x_819_ = v___x_814_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_817_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
else
{
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
v_a_822_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_811_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_811_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
lean_ctor_set_tag(v___x_824_, 0);
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
else
{
lean_object* v_a_830_; lean_object* v___x_831_; 
v_a_830_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_a_830_);
lean_dec_ref(v___x_811_);
v___x_831_ = l_Lake_Hash_ofDecimal_x3f(v_a_830_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_object* v___x_832_; 
v___x_832_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10));
return v___x_832_;
}
else
{
lean_object* v_val_833_; uint64_t v___x_834_; 
v_val_833_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_val_833_);
lean_dec_ref(v___x_831_);
v___x_834_ = lean_unbox_uint64(v_val_833_);
lean_dec(v_val_833_);
v_depHash_780_ = v___x_834_;
goto v___jp_779_;
}
}
}
}
}
else
{
lean_object* v___x_835_; lean_object* v___x_836_; 
lean_dec_ref(v___x_806_);
v___x_835_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__3));
v___x_836_ = l_Lake_JsonObject_getJson_x3f(v_obj_667_, v___x_835_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v___x_837_; 
v___x_837_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7));
return v___x_837_;
}
else
{
lean_object* v_val_838_; lean_object* v___x_839_; 
v_val_838_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_val_838_);
lean_dec_ref(v___x_836_);
v___x_839_ = l_Lake_Hash_fromJson_x3f(v_val_838_);
if (lean_obj_tag(v___x_839_) == 0)
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_849_; 
v_a_840_ = lean_ctor_get(v___x_839_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_849_ == 0)
{
v___x_842_ = v___x_839_;
v_isShared_843_ = v_isSharedCheck_849_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_839_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_849_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
v___x_844_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8));
v___x_845_ = lean_string_append(v___x_844_, v_a_840_);
lean_dec(v_a_840_);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v___x_845_);
v___x_847_ = v___x_842_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_845_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
else
{
if (lean_obj_tag(v___x_839_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
v_a_850_ = lean_ctor_get(v___x_839_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_839_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_839_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
lean_ctor_set_tag(v___x_852_, 0);
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
else
{
lean_object* v_a_858_; uint64_t v___x_859_; 
v_a_858_ = lean_ctor_get(v___x_839_, 0);
lean_inc(v_a_858_);
lean_dec_ref(v___x_839_);
v___x_859_ = lean_unbox_uint64(v_a_858_);
lean_dec(v_a_858_);
v_depHash_780_ = v___x_859_;
goto v___jp_779_;
}
}
}
}
v___jp_668_:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_674_, 0, v___y_672_);
lean_ctor_set(v___x_674_, 1, v___y_671_);
lean_ctor_set(v___x_674_, 2, v___y_669_);
lean_ctor_set_uint64(v___x_674_, sizeof(void*)*3, v___y_670_);
lean_ctor_set_uint8(v___x_674_, sizeof(void*)*3 + 8, v_a_673_);
v___x_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
v___jp_676_:
{
uint8_t v___x_681_; 
v___x_681_ = 0;
v___y_669_ = v___y_677_;
v___y_670_ = v___y_678_;
v___y_671_ = v___y_680_;
v___y_672_ = v___y_679_;
v_a_673_ = v___x_681_;
goto v___jp_668_;
}
v___jp_682_:
{
lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_687_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__7));
v___x_688_ = l_Lake_JsonObject_getJson_x3f(v_obj_667_, v___x_687_);
if (lean_obj_tag(v___x_688_) == 0)
{
v___y_677_ = v_a_686_;
v___y_678_ = v___y_683_;
v___y_679_ = v___y_684_;
v___y_680_ = v___y_685_;
goto v___jp_676_;
}
else
{
lean_object* v_val_689_; lean_object* v___x_690_; 
v_val_689_ = lean_ctor_get(v___x_688_, 0);
lean_inc(v_val_689_);
lean_dec_ref(v___x_688_);
v___x_690_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(v_val_689_);
lean_dec(v_val_689_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_700_; 
lean_dec_ref(v_a_686_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
v_a_691_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_700_ == 0)
{
v___x_693_ = v___x_690_;
v_isShared_694_ = v_isSharedCheck_700_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_a_691_);
lean_dec(v___x_690_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_700_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_698_; 
v___x_695_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0));
v___x_696_ = lean_string_append(v___x_695_, v_a_691_);
lean_dec(v_a_691_);
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 0, v___x_696_);
v___x_698_ = v___x_693_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
else
{
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec_ref(v_a_686_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
v_a_701_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_690_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_690_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
lean_ctor_set_tag(v___x_703_, 0);
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
else
{
lean_object* v_a_709_; 
v_a_709_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_709_);
lean_dec_ref(v___x_690_);
if (lean_obj_tag(v_a_709_) == 0)
{
v___y_677_ = v_a_686_;
v___y_678_ = v___y_683_;
v___y_679_ = v___y_684_;
v___y_680_ = v___y_685_;
goto v___jp_676_;
}
else
{
lean_object* v_val_710_; uint8_t v___x_711_; 
v_val_710_ = lean_ctor_get(v_a_709_, 0);
lean_inc(v_val_710_);
lean_dec_ref(v_a_709_);
v___x_711_ = lean_unbox(v_val_710_);
lean_dec(v_val_710_);
v___y_669_ = v_a_686_;
v___y_670_ = v___y_683_;
v___y_671_ = v___y_685_;
v___y_672_ = v___y_684_;
v_a_673_ = v___x_711_;
goto v___jp_668_;
}
}
}
}
}
v___jp_712_:
{
lean_object* v___x_716_; 
v___x_716_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___y_683_ = v___y_713_;
v___y_684_ = v___y_715_;
v___y_685_ = v___y_714_;
v_a_686_ = v___x_716_;
goto v___jp_682_;
}
v___jp_717_:
{
lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_721_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__6));
v___x_722_ = l_Lake_JsonObject_getJson_x3f(v_obj_667_, v___x_721_);
if (lean_obj_tag(v___x_722_) == 0)
{
v___y_713_ = v___y_718_;
v___y_714_ = v_a_720_;
v___y_715_ = v___y_719_;
goto v___jp_712_;
}
else
{
lean_object* v_val_723_; lean_object* v___x_724_; 
v_val_723_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_val_723_);
lean_dec_ref(v___x_722_);
v___x_724_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1(v_val_723_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_734_; 
lean_dec(v_a_720_);
lean_dec_ref(v___y_719_);
v_a_725_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_734_ == 0)
{
v___x_727_ = v___x_724_;
v_isShared_728_ = v_isSharedCheck_734_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_724_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_734_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_729_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2));
v___x_730_ = lean_string_append(v___x_729_, v_a_725_);
lean_dec(v_a_725_);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 0, v___x_730_);
v___x_732_ = v___x_727_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_730_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
else
{
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec(v_a_720_);
lean_dec_ref(v___y_719_);
v_a_735_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_724_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_724_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
lean_ctor_set_tag(v___x_737_, 0);
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
else
{
lean_object* v_a_743_; 
v_a_743_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_743_);
lean_dec_ref(v___x_724_);
if (lean_obj_tag(v_a_743_) == 0)
{
v___y_713_ = v___y_718_;
v___y_714_ = v_a_720_;
v___y_715_ = v___y_719_;
goto v___jp_712_;
}
else
{
lean_object* v_val_744_; 
v_val_744_ = lean_ctor_get(v_a_743_, 0);
lean_inc(v_val_744_);
lean_dec_ref(v_a_743_);
v___y_683_ = v___y_718_;
v___y_684_ = v___y_719_;
v___y_685_ = v_a_720_;
v_a_686_ = v_val_744_;
goto v___jp_682_;
}
}
}
}
}
v___jp_745_:
{
lean_object* v___x_748_; 
v___x_748_ = lean_box(0);
v___y_718_ = v___y_746_;
v___y_719_ = v___y_747_;
v_a_720_ = v___x_748_;
goto v___jp_717_;
}
v___jp_749_:
{
lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_752_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__5));
v___x_753_ = l_Lake_JsonObject_getJson_x3f(v_obj_667_, v___x_752_);
if (lean_obj_tag(v___x_753_) == 0)
{
v___y_746_ = v___y_750_;
v___y_747_ = v_a_751_;
goto v___jp_745_;
}
else
{
lean_object* v_val_754_; lean_object* v___x_755_; 
v_val_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_val_754_);
lean_dec_ref(v___x_753_);
v___x_755_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2(v_val_754_);
if (lean_obj_tag(v___x_755_) == 0)
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_765_; 
lean_dec_ref(v_a_751_);
v_a_756_ = lean_ctor_get(v___x_755_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_765_ == 0)
{
v___x_758_ = v___x_755_;
v_isShared_759_ = v_isSharedCheck_765_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_755_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_765_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_763_; 
v___x_760_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3));
v___x_761_ = lean_string_append(v___x_760_, v_a_756_);
lean_dec(v_a_756_);
if (v_isShared_759_ == 0)
{
lean_ctor_set(v___x_758_, 0, v___x_761_);
v___x_763_ = v___x_758_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_761_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
else
{
if (lean_obj_tag(v___x_755_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
lean_dec_ref(v_a_751_);
v_a_766_ = lean_ctor_get(v___x_755_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_755_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_755_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
lean_ctor_set_tag(v___x_768_, 0);
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_766_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
else
{
lean_object* v_a_774_; 
v_a_774_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_a_774_);
lean_dec_ref(v___x_755_);
if (lean_obj_tag(v_a_774_) == 0)
{
v___y_746_ = v___y_750_;
v___y_747_ = v_a_751_;
goto v___jp_745_;
}
else
{
lean_object* v_val_775_; 
v_val_775_ = lean_ctor_get(v_a_774_, 0);
lean_inc(v_val_775_);
lean_dec_ref(v_a_774_);
v___y_718_ = v___y_750_;
v___y_719_ = v_a_751_;
v_a_720_ = v_val_775_;
goto v___jp_717_;
}
}
}
}
}
v___jp_776_:
{
lean_object* v___x_778_; 
v___x_778_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4));
v___y_750_ = v___y_777_;
v_a_751_ = v___x_778_;
goto v___jp_749_;
}
v___jp_779_:
{
lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_781_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__4));
v___x_782_ = l_Lake_JsonObject_getJson_x3f(v_obj_667_, v___x_781_);
if (lean_obj_tag(v___x_782_) == 0)
{
v___y_777_ = v_depHash_780_;
goto v___jp_776_;
}
else
{
lean_object* v_val_783_; lean_object* v___x_784_; 
v_val_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_val_783_);
lean_dec_ref(v___x_782_);
v___x_784_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3(v_val_783_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_794_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_794_ == 0)
{
v___x_787_ = v___x_784_;
v_isShared_788_ = v_isSharedCheck_794_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_784_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_794_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_789_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5));
v___x_790_ = lean_string_append(v___x_789_, v_a_785_);
lean_dec(v_a_785_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_790_);
v___x_792_ = v___x_787_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
else
{
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
v_a_795_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_784_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_784_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
lean_ctor_set_tag(v___x_797_, 0);
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
else
{
lean_object* v_a_803_; 
v_a_803_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_803_);
lean_dec_ref(v___x_784_);
if (lean_obj_tag(v_a_803_) == 0)
{
v___y_777_ = v_depHash_780_;
goto v___jp_776_;
}
else
{
lean_object* v_val_804_; 
v_val_804_ = lean_ctor_get(v_a_803_, 0);
lean_inc(v_val_804_);
lean_dec_ref(v_a_803_);
v___y_750_ = v_depHash_780_;
v_a_751_ = v_val_804_;
goto v___jp_749_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___boxed(lean_object* v_obj_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lake_BuildMetadata_fromJsonObject_x3f(v_obj_860_);
lean_dec(v_obj_860_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f(lean_object* v_json_868_){
_start:
{
switch(lean_obj_tag(v_json_868_))
{
case 2:
{
lean_object* v_n_869_; lean_object* v___x_870_; 
v_n_869_ = lean_ctor_get(v_json_868_, 0);
v___x_870_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_869_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_880_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_880_ == 0)
{
v___x_873_ = v___x_870_;
v_isShared_874_ = v_isSharedCheck_880_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_870_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_880_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_878_; 
v___x_875_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__0));
v___x_876_ = lean_string_append(v___x_875_, v_a_871_);
lean_dec(v_a_871_);
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 0, v___x_876_);
v___x_878_ = v___x_873_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_876_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_890_; 
v_a_881_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_890_ == 0)
{
v___x_883_ = v___x_870_;
v_isShared_884_ = v_isSharedCheck_890_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_870_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_890_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
uint64_t v___x_885_; lean_object* v___x_886_; lean_object* v___x_888_; 
v___x_885_ = lean_unbox_uint64(v_a_881_);
lean_dec(v_a_881_);
v___x_886_ = l_Lake_BuildMetadata_ofStub(v___x_885_);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 0, v___x_886_);
v___x_888_ = v___x_883_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_886_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
case 5:
{
lean_object* v_kvPairs_891_; lean_object* v___x_892_; 
v_kvPairs_891_ = lean_ctor_get(v_json_868_, 0);
v___x_892_ = l_Lake_BuildMetadata_fromJsonObject_x3f(v_kvPairs_891_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_918_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_918_ == 0)
{
v___x_895_ = v___x_892_;
v_isShared_896_ = v_isSharedCheck_918_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_a_893_);
lean_dec(v___x_892_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_918_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__0));
v___x_904_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_891_, v___x_903_);
if (lean_obj_tag(v___x_904_) == 1)
{
lean_object* v_val_905_; 
v_val_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_val_905_);
lean_dec_ref(v___x_904_);
if (lean_obj_tag(v_val_905_) == 3)
{
lean_object* v_s_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_917_; 
v_s_906_ = lean_ctor_get(v_val_905_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v_val_905_);
if (v_isSharedCheck_917_ == 0)
{
v___x_908_ = v_val_905_;
v_isShared_909_ = v_isSharedCheck_917_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_s_906_);
lean_dec(v_val_905_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_917_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_910_; uint8_t v___x_911_; 
v___x_910_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0));
v___x_911_ = lean_string_dec_eq(v_s_906_, v___x_910_);
lean_dec_ref(v_s_906_);
if (v___x_911_ == 0)
{
lean_del_object(v___x_908_);
goto v___jp_897_;
}
else
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_915_; 
lean_del_object(v___x_895_);
v___x_912_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__2));
v___x_913_ = lean_string_append(v___x_912_, v_a_893_);
lean_dec(v_a_893_);
if (v_isShared_909_ == 0)
{
lean_ctor_set_tag(v___x_908_, 0);
lean_ctor_set(v___x_908_, 0, v___x_913_);
v___x_915_ = v___x_908_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v___x_913_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
else
{
lean_dec(v_val_905_);
goto v___jp_897_;
}
}
else
{
lean_dec(v___x_904_);
goto v___jp_897_;
}
v___jp_897_:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_901_; 
v___x_898_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__1));
v___x_899_ = lean_string_append(v___x_898_, v_a_893_);
lean_dec(v_a_893_);
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 0, v___x_899_);
v___x_901_ = v___x_895_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_899_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
else
{
return v___x_892_;
}
}
default: 
{
lean_object* v___x_919_; 
v___x_919_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__4));
return v___x_919_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f___boxed(lean_object* v_json_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l_Lake_BuildMetadata_fromJson_x3f(v_json_920_);
lean_dec(v_json_920_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_parse(lean_object* v_contents_924_){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = l_Lean_Json_parse(v_contents_924_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
v_a_926_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_925_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_925_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_935_; 
v_a_934_ = lean_ctor_get(v___x_925_, 0);
lean_inc(v_a_934_);
lean_dec_ref(v___x_925_);
v___x_935_ = l_Lake_BuildMetadata_fromJson_x3f(v_a_934_);
lean_dec(v_a_934_);
return v___x_935_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch(uint64_t v_inputHash_936_, lean_object* v_outputs_937_){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; uint8_t v___x_940_; lean_object* v___x_941_; 
v___x_938_ = ((lean_object*)(l_Lake_BuildMetadata_ofStub___closed__0));
v___x_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_939_, 0, v_outputs_937_);
v___x_940_ = 1;
v___x_941_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_941_, 0, v___x_938_);
lean_ctor_set(v___x_941_, 1, v___x_939_);
lean_ctor_set(v___x_941_, 2, v___x_938_);
lean_ctor_set_uint64(v___x_941_, sizeof(void*)*3, v_inputHash_936_);
lean_ctor_set_uint8(v___x_941_, sizeof(void*)*3 + 8, v___x_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch___boxed(lean_object* v_inputHash_942_, lean_object* v_outputs_943_){
_start:
{
uint64_t v_inputHash_boxed_944_; lean_object* v_res_945_; 
v_inputHash_boxed_944_ = lean_unbox_uint64(v_inputHash_942_);
lean_dec_ref(v_inputHash_942_);
v_res_945_ = l_Lake_BuildMetadata_ofFetch(v_inputHash_boxed_944_, v_outputs_943_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(lean_object* v_as_946_, size_t v_i_947_, size_t v_stop_948_, lean_object* v_b_949_){
_start:
{
uint8_t v___x_950_; 
v___x_950_ = lean_usize_dec_eq(v_i_947_, v_stop_948_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; lean_object* v___y_953_; lean_object* v_inputs_960_; uint64_t v_hash_961_; lean_object* v___x_962_; lean_object* v___x_963_; uint8_t v___x_964_; 
v___x_951_ = lean_array_uget_borrowed(v_as_946_, v_i_947_);
v_inputs_960_ = lean_ctor_get(v___x_951_, 1);
v_hash_961_ = lean_ctor_get_uint64(v___x_951_, sizeof(void*)*3);
v___x_962_ = lean_array_get_size(v_inputs_960_);
v___x_963_ = lean_unsigned_to_nat(0u);
v___x_964_ = lean_nat_dec_eq(v___x_962_, v___x_963_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_960_);
v___x_966_ = l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(v___x_965_);
v___y_953_ = v___x_966_;
goto v___jp_952_;
}
else
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = l_Lake_Hash_hex(v_hash_961_);
v___x_968_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
v___y_953_ = v___x_968_;
goto v___jp_952_;
}
v___jp_952_:
{
lean_object* v_caption_954_; lean_object* v___x_955_; lean_object* v___x_956_; size_t v___x_957_; size_t v___x_958_; 
v_caption_954_ = lean_ctor_get(v___x_951_, 0);
lean_inc_ref(v_caption_954_);
v___x_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_955_, 0, v_caption_954_);
lean_ctor_set(v___x_955_, 1, v___y_953_);
v___x_956_ = lean_array_push(v_b_949_, v___x_955_);
v___x_957_ = ((size_t)1ULL);
v___x_958_ = lean_usize_add(v_i_947_, v___x_957_);
v_i_947_ = v___x_958_;
v_b_949_ = v___x_956_;
goto _start;
}
}
else
{
return v_b_949_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs(lean_object* v_inputs_969_){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_970_ = lean_unsigned_to_nat(0u);
v___x_971_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4));
v___x_972_ = lean_array_get_size(v_inputs_969_);
v___x_973_ = lean_nat_dec_lt(v___x_970_, v___x_972_);
if (v___x_973_ == 0)
{
return v___x_971_;
}
else
{
uint8_t v___x_974_; 
v___x_974_ = lean_nat_dec_le(v___x_972_, v___x_972_);
if (v___x_974_ == 0)
{
if (v___x_973_ == 0)
{
return v___x_971_;
}
else
{
size_t v___x_975_; size_t v___x_976_; lean_object* v___x_977_; 
v___x_975_ = ((size_t)0ULL);
v___x_976_ = lean_usize_of_nat(v___x_972_);
v___x_977_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_inputs_969_, v___x_975_, v___x_976_, v___x_971_);
return v___x_977_;
}
}
else
{
size_t v___x_978_; size_t v___x_979_; lean_object* v___x_980_; 
v___x_978_ = ((size_t)0ULL);
v___x_979_ = lean_usize_of_nat(v___x_972_);
v___x_980_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_inputs_969_, v___x_978_, v___x_979_, v___x_971_);
return v___x_980_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs___boxed(lean_object* v_inputs_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_981_);
lean_dec_ref(v_inputs_981_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0___boxed(lean_object* v_as_983_, lean_object* v_i_984_, lean_object* v_stop_985_, lean_object* v_b_986_){
_start:
{
size_t v_i_boxed_987_; size_t v_stop_boxed_988_; lean_object* v_res_989_; 
v_i_boxed_987_ = lean_unbox_usize(v_i_984_);
lean_dec(v_i_984_);
v_stop_boxed_988_ = lean_unbox_usize(v_stop_985_);
lean_dec(v_stop_985_);
v_res_989_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_as_983_, v_i_boxed_987_, v_stop_boxed_988_, v_b_986_);
lean_dec_ref(v_as_983_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(lean_object* v_depTrace_990_, lean_object* v_outputs_991_, lean_object* v_log_992_){
_start:
{
lean_object* v_inputs_993_; uint64_t v_hash_994_; lean_object* v___x_995_; lean_object* v___x_996_; uint8_t v___x_997_; lean_object* v___x_998_; 
v_inputs_993_ = lean_ctor_get(v_depTrace_990_, 1);
v_hash_994_ = lean_ctor_get_uint64(v_depTrace_990_, sizeof(void*)*3);
v___x_995_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_993_);
v___x_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_996_, 0, v_outputs_991_);
v___x_997_ = 0;
v___x_998_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_998_, 0, v___x_995_);
lean_ctor_set(v___x_998_, 1, v___x_996_);
lean_ctor_set(v___x_998_, 2, v_log_992_);
lean_ctor_set_uint64(v___x_998_, sizeof(void*)*3, v_hash_994_);
lean_ctor_set_uint8(v___x_998_, sizeof(void*)*3 + 8, v___x_997_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore___boxed(lean_object* v_depTrace_999_, lean_object* v_outputs_1000_, lean_object* v_log_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_999_, v_outputs_1000_, v_log_1001_);
lean_dec_ref(v_depTrace_999_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg(lean_object* v_inst_1003_, lean_object* v_depTrace_1004_, lean_object* v_outputs_1005_, lean_object* v_log_1006_){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = lean_apply_1(v_inst_1003_, v_outputs_1005_);
v___x_1008_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1004_, v___x_1007_, v_log_1006_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg___boxed(lean_object* v_inst_1009_, lean_object* v_depTrace_1010_, lean_object* v_outputs_1011_, lean_object* v_log_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lake_BuildMetadata_ofBuild___redArg(v_inst_1009_, v_depTrace_1010_, v_outputs_1011_, v_log_1012_);
lean_dec_ref(v_depTrace_1010_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild(lean_object* v_00_u03b1_1014_, lean_object* v_inst_1015_, lean_object* v_depTrace_1016_, lean_object* v_outputs_1017_, lean_object* v_log_1018_){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = lean_apply_1(v_inst_1015_, v_outputs_1017_);
v___x_1020_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1016_, v___x_1019_, v_log_1018_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___boxed(lean_object* v_00_u03b1_1021_, lean_object* v_inst_1022_, lean_object* v_depTrace_1023_, lean_object* v_outputs_1024_, lean_object* v_log_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lake_BuildMetadata_ofBuild(v_00_u03b1_1021_, v_inst_1022_, v_depTrace_1023_, v_outputs_1024_, v_log_1025_);
lean_dec_ref(v_depTrace_1023_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx(lean_object* v_x_1027_){
_start:
{
switch(lean_obj_tag(v_x_1027_))
{
case 0:
{
lean_object* v___x_1028_; 
v___x_1028_ = lean_unsigned_to_nat(0u);
return v___x_1028_;
}
case 1:
{
lean_object* v___x_1029_; 
v___x_1029_ = lean_unsigned_to_nat(1u);
return v___x_1029_;
}
default: 
{
lean_object* v___x_1030_; 
v___x_1030_ = lean_unsigned_to_nat(2u);
return v___x_1030_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx___boxed(lean_object* v_x_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_Lake_SavedTrace_ctorIdx(v_x_1031_);
lean_dec(v_x_1031_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___redArg(lean_object* v_t_1033_, lean_object* v_k_1034_){
_start:
{
if (lean_obj_tag(v_t_1033_) == 2)
{
lean_object* v_data_1035_; lean_object* v___x_1036_; 
v_data_1035_ = lean_ctor_get(v_t_1033_, 0);
lean_inc_ref(v_data_1035_);
lean_dec_ref(v_t_1033_);
v___x_1036_ = lean_apply_1(v_k_1034_, v_data_1035_);
return v___x_1036_;
}
else
{
lean_dec(v_t_1033_);
return v_k_1034_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim(lean_object* v_motive_1037_, lean_object* v_ctorIdx_1038_, lean_object* v_t_1039_, lean_object* v_h_1040_, lean_object* v_k_1041_){
_start:
{
lean_object* v___x_1042_; 
v___x_1042_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1039_, v_k_1041_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___boxed(lean_object* v_motive_1043_, lean_object* v_ctorIdx_1044_, lean_object* v_t_1045_, lean_object* v_h_1046_, lean_object* v_k_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lake_SavedTrace_ctorElim(v_motive_1043_, v_ctorIdx_1044_, v_t_1045_, v_h_1046_, v_k_1047_);
lean_dec(v_ctorIdx_1044_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim___redArg(lean_object* v_t_1049_, lean_object* v_missing_1050_){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1049_, v_missing_1050_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim(lean_object* v_motive_1052_, lean_object* v_t_1053_, lean_object* v_h_1054_, lean_object* v_missing_1055_){
_start:
{
lean_object* v___x_1056_; 
v___x_1056_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1053_, v_missing_1055_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim___redArg(lean_object* v_t_1057_, lean_object* v_invalid_1058_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1057_, v_invalid_1058_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim(lean_object* v_motive_1060_, lean_object* v_t_1061_, lean_object* v_h_1062_, lean_object* v_invalid_1063_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1061_, v_invalid_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim___redArg(lean_object* v_t_1065_, lean_object* v_ok_1066_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1065_, v_ok_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim(lean_object* v_motive_1068_, lean_object* v_t_1069_, lean_object* v_h_1070_, lean_object* v_ok_1071_){
_start:
{
lean_object* v___x_1072_; 
v___x_1072_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1069_, v_ok_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lake_readTraceFile(lean_object* v_path_1074_, lean_object* v_a_1075_){
_start:
{
lean_object* v___x_1077_; 
v___x_1077_ = l_IO_FS_readFile(v_path_1074_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v_a_1080_; lean_object* v___x_1089_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref(v___x_1077_);
v___x_1089_ = l_Lean_Json_parse(v_a_1078_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1090_);
lean_dec_ref(v___x_1089_);
v_a_1080_ = v_a_1090_;
goto v___jp_1079_;
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1092_; 
v_a_1091_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1091_);
lean_dec_ref(v___x_1089_);
v___x_1092_ = l_Lake_BuildMetadata_fromJson_x3f(v_a_1091_);
lean_dec(v_a_1091_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref(v___x_1092_);
v_a_1080_ = v_a_1093_;
goto v___jp_1079_;
}
else
{
lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1102_; 
lean_dec_ref(v_path_1074_);
v_a_1094_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1096_ = v___x_1092_;
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_dec(v___x_1092_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1099_; 
if (v_isShared_1097_ == 0)
{
lean_ctor_set_tag(v___x_1096_, 2);
v___x_1099_ = v___x_1096_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1094_);
v___x_1099_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
lean_object* v___x_1100_; 
v___x_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1099_);
lean_ctor_set(v___x_1100_, 1, v_a_1075_);
return v___x_1100_;
}
}
}
}
v___jp_1079_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; uint8_t v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1081_ = ((lean_object*)(l_Lake_addPureTrace___redArg___closed__0));
v___x_1082_ = lean_string_append(v_path_1074_, v___x_1081_);
v___x_1083_ = lean_string_append(v___x_1082_, v_a_1080_);
lean_dec_ref(v_a_1080_);
v___x_1084_ = 2;
v___x_1085_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1085_, 0, v___x_1083_);
lean_ctor_set_uint8(v___x_1085_, sizeof(void*)*1, v___x_1084_);
v___x_1086_ = lean_array_push(v_a_1075_, v___x_1085_);
v___x_1087_ = lean_box(1);
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
lean_ctor_set(v___x_1088_, 1, v___x_1086_);
return v___x_1088_;
}
}
else
{
lean_object* v_a_1103_; 
v_a_1103_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1103_);
lean_dec_ref(v___x_1077_);
if (lean_obj_tag(v_a_1103_) == 11)
{
lean_object* v___x_1104_; lean_object* v___x_1105_; 
lean_dec_ref(v_a_1103_);
lean_dec_ref(v_path_1074_);
v___x_1104_ = lean_box(0);
v___x_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1104_);
lean_ctor_set(v___x_1105_, 1, v_a_1075_);
return v___x_1105_;
}
else
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1106_ = ((lean_object*)(l_Lake_readTraceFile___closed__0));
v___x_1107_ = lean_string_append(v_path_1074_, v___x_1106_);
v___x_1108_ = lean_io_error_to_string(v_a_1103_);
v___x_1109_ = lean_string_append(v___x_1107_, v___x_1108_);
lean_dec_ref(v___x_1108_);
v___x_1110_ = 3;
v___x_1111_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set_uint8(v___x_1111_, sizeof(void*)*1, v___x_1110_);
v___x_1112_ = lean_array_get_size(v_a_1075_);
v___x_1113_ = lean_array_push(v_a_1075_, v___x_1111_);
v___x_1114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1112_);
lean_ctor_set(v___x_1114_, 1, v___x_1113_);
return v___x_1114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_readTraceFile___boxed(lean_object* v_path_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lake_readTraceFile(v_path_1115_, v_a_1116_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile(lean_object* v_path_1119_, lean_object* v_data_1120_){
_start:
{
lean_object* v___x_1122_; 
lean_inc_ref(v_path_1119_);
v___x_1122_ = l_Lake_createParentDirs(v_path_1119_);
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
lean_dec_ref(v___x_1122_);
v___x_1123_ = l_Lake_BuildMetadata_toJson(v_data_1120_);
v___x_1124_ = lean_unsigned_to_nat(80u);
v___x_1125_ = l_Lean_Json_pretty(v___x_1123_, v___x_1124_);
v___x_1126_ = l_IO_FS_writeFile(v_path_1119_, v___x_1125_);
lean_dec_ref(v___x_1125_);
lean_dec_ref(v_path_1119_);
return v___x_1126_;
}
else
{
lean_dec_ref(v_data_1120_);
lean_dec_ref(v_path_1119_);
return v___x_1122_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile___boxed(lean_object* v_path_1127_, lean_object* v_data_1128_, lean_object* v_a_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lake_BuildMetadata_writeFile(v_path_1127_, v_data_1128_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace(lean_object* v_path_1131_, uint64_t v_inputHash_1132_, lean_object* v_outputs_1133_){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = l_Lake_BuildMetadata_ofFetch(v_inputHash_1132_, v_outputs_1133_);
v___x_1136_ = l_Lake_BuildMetadata_writeFile(v_path_1131_, v___x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace___boxed(lean_object* v_path_1137_, lean_object* v_inputHash_1138_, lean_object* v_outputs_1139_, lean_object* v_a_1140_){
_start:
{
uint64_t v_inputHash_boxed_1141_; lean_object* v_res_1142_; 
v_inputHash_boxed_1141_ = lean_unbox_uint64(v_inputHash_1138_);
lean_dec_ref(v_inputHash_1138_);
v_res_1142_ = l_Lake_writeFetchTrace(v_path_1137_, v_inputHash_boxed_1141_, v_outputs_1139_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg(lean_object* v_inst_1143_, lean_object* v_path_1144_, lean_object* v_depTrace_1145_, lean_object* v_outputs_1146_, lean_object* v_log_1147_){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1149_ = lean_apply_1(v_inst_1143_, v_outputs_1146_);
v___x_1150_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1145_, v___x_1149_, v_log_1147_);
v___x_1151_ = l_Lake_BuildMetadata_writeFile(v_path_1144_, v___x_1150_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg___boxed(lean_object* v_inst_1152_, lean_object* v_path_1153_, lean_object* v_depTrace_1154_, lean_object* v_outputs_1155_, lean_object* v_log_1156_, lean_object* v_a_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = l_Lake_writeBuildTrace___redArg(v_inst_1152_, v_path_1153_, v_depTrace_1154_, v_outputs_1155_, v_log_1156_);
lean_dec_ref(v_depTrace_1154_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace(lean_object* v_00_u03b1_1159_, lean_object* v_inst_1160_, lean_object* v_path_1161_, lean_object* v_depTrace_1162_, lean_object* v_outputs_1163_, lean_object* v_log_1164_){
_start:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1166_ = lean_apply_1(v_inst_1160_, v_outputs_1163_);
v___x_1167_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1162_, v___x_1166_, v_log_1164_);
v___x_1168_ = l_Lake_BuildMetadata_writeFile(v_path_1161_, v___x_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___boxed(lean_object* v_00_u03b1_1169_, lean_object* v_inst_1170_, lean_object* v_path_1171_, lean_object* v_depTrace_1172_, lean_object* v_outputs_1173_, lean_object* v_log_1174_, lean_object* v_a_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l_Lake_writeBuildTrace(v_00_u03b1_1169_, v_inst_1170_, v_path_1171_, v_depTrace_1172_, v_outputs_1173_, v_log_1174_);
lean_dec_ref(v_depTrace_1172_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx(uint8_t v_x_1177_){
_start:
{
switch(v_x_1177_)
{
case 0:
{
lean_object* v___x_1178_; 
v___x_1178_ = lean_unsigned_to_nat(0u);
return v___x_1178_;
}
case 1:
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_unsigned_to_nat(1u);
return v___x_1179_;
}
default: 
{
lean_object* v___x_1180_; 
v___x_1180_ = lean_unsigned_to_nat(2u);
return v___x_1180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx___boxed(lean_object* v_x_1181_){
_start:
{
uint8_t v_x_boxed_1182_; lean_object* v_res_1183_; 
v_x_boxed_1182_ = lean_unbox(v_x_1181_);
v_res_1183_ = l_Lake_OutputStatus_ctorIdx(v_x_boxed_1182_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_toCtorIdx(uint8_t v_x_1184_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = l_Lake_OutputStatus_ctorIdx(v_x_1184_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_toCtorIdx___boxed(lean_object* v_x_1186_){
_start:
{
uint8_t v_x_4__boxed_1187_; lean_object* v_res_1188_; 
v_x_4__boxed_1187_ = lean_unbox(v_x_1186_);
v_res_1188_ = l_Lake_OutputStatus_toCtorIdx(v_x_4__boxed_1187_);
return v_res_1188_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg(lean_object* v_k_1189_){
_start:
{
lean_inc(v_k_1189_);
return v_k_1189_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg___boxed(lean_object* v_k_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lake_OutputStatus_ctorElim___redArg(v_k_1190_);
lean_dec(v_k_1190_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim(lean_object* v_motive_1192_, lean_object* v_ctorIdx_1193_, uint8_t v_t_1194_, lean_object* v_h_1195_, lean_object* v_k_1196_){
_start:
{
lean_inc(v_k_1196_);
return v_k_1196_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___boxed(lean_object* v_motive_1197_, lean_object* v_ctorIdx_1198_, lean_object* v_t_1199_, lean_object* v_h_1200_, lean_object* v_k_1201_){
_start:
{
uint8_t v_t_boxed_1202_; lean_object* v_res_1203_; 
v_t_boxed_1202_ = lean_unbox(v_t_1199_);
v_res_1203_ = l_Lake_OutputStatus_ctorElim(v_motive_1197_, v_ctorIdx_1198_, v_t_boxed_1202_, v_h_1200_, v_k_1201_);
lean_dec(v_k_1201_);
lean_dec(v_ctorIdx_1198_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg(lean_object* v_outOfDate_1204_){
_start:
{
lean_inc(v_outOfDate_1204_);
return v_outOfDate_1204_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg___boxed(lean_object* v_outOfDate_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lake_OutputStatus_outOfDate_elim___redArg(v_outOfDate_1205_);
lean_dec(v_outOfDate_1205_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim(lean_object* v_motive_1207_, uint8_t v_t_1208_, lean_object* v_h_1209_, lean_object* v_outOfDate_1210_){
_start:
{
lean_inc(v_outOfDate_1210_);
return v_outOfDate_1210_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___boxed(lean_object* v_motive_1211_, lean_object* v_t_1212_, lean_object* v_h_1213_, lean_object* v_outOfDate_1214_){
_start:
{
uint8_t v_t_boxed_1215_; lean_object* v_res_1216_; 
v_t_boxed_1215_ = lean_unbox(v_t_1212_);
v_res_1216_ = l_Lake_OutputStatus_outOfDate_elim(v_motive_1211_, v_t_boxed_1215_, v_h_1213_, v_outOfDate_1214_);
lean_dec(v_outOfDate_1214_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg(lean_object* v_mtimeUpToDate_1217_){
_start:
{
lean_inc(v_mtimeUpToDate_1217_);
return v_mtimeUpToDate_1217_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg___boxed(lean_object* v_mtimeUpToDate_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_Lake_OutputStatus_mtimeUpToDate_elim___redArg(v_mtimeUpToDate_1218_);
lean_dec(v_mtimeUpToDate_1218_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim(lean_object* v_motive_1220_, uint8_t v_t_1221_, lean_object* v_h_1222_, lean_object* v_mtimeUpToDate_1223_){
_start:
{
lean_inc(v_mtimeUpToDate_1223_);
return v_mtimeUpToDate_1223_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___boxed(lean_object* v_motive_1224_, lean_object* v_t_1225_, lean_object* v_h_1226_, lean_object* v_mtimeUpToDate_1227_){
_start:
{
uint8_t v_t_boxed_1228_; lean_object* v_res_1229_; 
v_t_boxed_1228_ = lean_unbox(v_t_1225_);
v_res_1229_ = l_Lake_OutputStatus_mtimeUpToDate_elim(v_motive_1224_, v_t_boxed_1228_, v_h_1226_, v_mtimeUpToDate_1227_);
lean_dec(v_mtimeUpToDate_1227_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg(lean_object* v_hashUpToDate_1230_){
_start:
{
lean_inc(v_hashUpToDate_1230_);
return v_hashUpToDate_1230_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg___boxed(lean_object* v_hashUpToDate_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lake_OutputStatus_hashUpToDate_elim___redArg(v_hashUpToDate_1231_);
lean_dec(v_hashUpToDate_1231_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim(lean_object* v_motive_1233_, uint8_t v_t_1234_, lean_object* v_h_1235_, lean_object* v_hashUpToDate_1236_){
_start:
{
lean_inc(v_hashUpToDate_1236_);
return v_hashUpToDate_1236_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___boxed(lean_object* v_motive_1237_, lean_object* v_t_1238_, lean_object* v_h_1239_, lean_object* v_hashUpToDate_1240_){
_start:
{
uint8_t v_t_boxed_1241_; lean_object* v_res_1242_; 
v_t_boxed_1241_ = lean_unbox(v_t_1238_);
v_res_1242_ = l_Lake_OutputStatus_hashUpToDate_elim(v_motive_1237_, v_t_boxed_1241_, v_h_1239_, v_hashUpToDate_1240_);
lean_dec(v_hashUpToDate_1240_);
return v_res_1242_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofNat(lean_object* v_n_1243_){
_start:
{
lean_object* v___x_1244_; uint8_t v___x_1245_; 
v___x_1244_ = lean_unsigned_to_nat(0u);
v___x_1245_ = lean_nat_dec_le(v_n_1243_, v___x_1244_);
if (v___x_1245_ == 0)
{
lean_object* v___x_1246_; uint8_t v___x_1247_; 
v___x_1246_ = lean_unsigned_to_nat(1u);
v___x_1247_ = lean_nat_dec_le(v_n_1243_, v___x_1246_);
if (v___x_1247_ == 0)
{
uint8_t v___x_1248_; 
v___x_1248_ = 2;
return v___x_1248_;
}
else
{
uint8_t v___x_1249_; 
v___x_1249_ = 1;
return v___x_1249_;
}
}
else
{
uint8_t v___x_1250_; 
v___x_1250_ = 0;
return v___x_1250_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofNat___boxed(lean_object* v_n_1251_){
_start:
{
uint8_t v_res_1252_; lean_object* v_r_1253_; 
v_res_1252_ = l_Lake_OutputStatus_ofNat(v_n_1251_);
lean_dec(v_n_1251_);
v_r_1253_ = lean_box(v_res_1252_);
return v_r_1253_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqOutputStatus(uint8_t v_x_1254_, uint8_t v_y_1255_){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; uint8_t v___x_1258_; 
v___x_1256_ = l_Lake_OutputStatus_ctorIdx(v_x_1254_);
v___x_1257_ = l_Lake_OutputStatus_ctorIdx(v_y_1255_);
v___x_1258_ = lean_nat_dec_eq(v___x_1256_, v___x_1257_);
lean_dec(v___x_1257_);
lean_dec(v___x_1256_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqOutputStatus___boxed(lean_object* v_x_1259_, lean_object* v_y_1260_){
_start:
{
uint8_t v_x_13__boxed_1261_; uint8_t v_y_14__boxed_1262_; uint8_t v_res_1263_; lean_object* v_r_1264_; 
v_x_13__boxed_1261_ = lean_unbox(v_x_1259_);
v_y_14__boxed_1262_ = lean_unbox(v_y_1260_);
v_res_1263_ = l_Lake_instDecidableEqOutputStatus(v_x_13__boxed_1261_, v_y_14__boxed_1262_);
v_r_1264_ = lean_box(v_res_1263_);
return v_r_1264_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofHashCheck(uint8_t v_upToDate_1265_){
_start:
{
if (v_upToDate_1265_ == 0)
{
uint8_t v___x_1266_; 
v___x_1266_ = 0;
return v___x_1266_;
}
else
{
uint8_t v___x_1267_; 
v___x_1267_ = 2;
return v___x_1267_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofHashCheck___boxed(lean_object* v_upToDate_1268_){
_start:
{
uint8_t v_upToDate_boxed_1269_; uint8_t v_res_1270_; lean_object* v_r_1271_; 
v_upToDate_boxed_1269_ = lean_unbox(v_upToDate_1268_);
v_res_1270_ = l_Lake_OutputStatus_ofHashCheck(v_upToDate_boxed_1269_);
v_r_1271_ = lean_box(v_res_1270_);
return v_r_1271_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofMTimeCheck(uint8_t v_upToDate_1272_){
_start:
{
if (v_upToDate_1272_ == 0)
{
uint8_t v___x_1273_; 
v___x_1273_ = 0;
return v___x_1273_;
}
else
{
uint8_t v___x_1274_; 
v___x_1274_ = 1;
return v___x_1274_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofMTimeCheck___boxed(lean_object* v_upToDate_1275_){
_start:
{
uint8_t v_upToDate_boxed_1276_; uint8_t v_res_1277_; lean_object* v_r_1278_; 
v_upToDate_boxed_1276_ = lean_unbox(v_upToDate_1275_);
v_res_1277_ = l_Lake_OutputStatus_ofMTimeCheck(v_upToDate_boxed_1276_);
v_r_1278_ = lean_box(v_res_1277_);
return v_r_1278_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isUpToDate(uint8_t v_status_1279_){
_start:
{
uint8_t v___x_1280_; uint8_t v___x_1281_; 
v___x_1280_ = 0;
v___x_1281_ = l_Lake_instDecidableEqOutputStatus(v_status_1279_, v___x_1280_);
if (v___x_1281_ == 0)
{
uint8_t v___x_1282_; 
v___x_1282_ = 1;
return v___x_1282_;
}
else
{
uint8_t v___x_1283_; 
v___x_1283_ = 0;
return v___x_1283_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isUpToDate___boxed(lean_object* v_status_1284_){
_start:
{
uint8_t v_status_boxed_1285_; uint8_t v_res_1286_; lean_object* v_r_1287_; 
v_status_boxed_1285_ = lean_unbox(v_status_1284_);
v_res_1286_ = l_Lake_OutputStatus_isUpToDate(v_status_boxed_1285_);
v_r_1287_ = lean_box(v_res_1286_);
return v_r_1287_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isCacheable(uint8_t v_status_1288_){
_start:
{
uint8_t v___x_1289_; uint8_t v___x_1290_; 
v___x_1289_ = 1;
v___x_1290_ = l_Lake_instDecidableEqOutputStatus(v_status_1288_, v___x_1289_);
if (v___x_1290_ == 0)
{
uint8_t v___x_1291_; 
v___x_1291_ = 1;
return v___x_1291_;
}
else
{
uint8_t v___x_1292_; 
v___x_1292_ = 0;
return v___x_1292_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isCacheable___boxed(lean_object* v_status_1293_){
_start:
{
uint8_t v_status_boxed_1294_; uint8_t v_res_1295_; lean_object* v_r_1296_; 
v_status_boxed_1294_ = lean_unbox(v_status_1293_);
v_res_1295_ = l_Lake_OutputStatus_isCacheable(v_status_boxed_1294_);
v_r_1296_ = lean_box(v_res_1295_);
return v_r_1296_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___f_1298_; 
v___x_1297_ = lean_alloc_closure((void*)(l_Lake_instDecidableEqHash___boxed), 2, 0);
v___f_1298_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1298_, 0, v___x_1297_);
return v___f_1298_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(lean_object* v_inst_1299_, lean_object* v_inst_1300_, lean_object* v_info_1301_, lean_object* v_depTrace_1302_, lean_object* v_depHash_1303_, lean_object* v_oldTrace_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_){
_start:
{
uint64_t v_hash_1308_; lean_object* v___f_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; uint8_t v___x_1312_; 
v_hash_1308_ = lean_ctor_get_uint64(v_depTrace_1302_, sizeof(void*)*3);
v___f_1309_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0);
v___x_1310_ = lean_box_uint64(v_hash_1308_);
v___x_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
v___x_1312_ = l_Option_instBEq_beq___redArg(v___f_1309_, v___x_1311_, v_depHash_1303_);
if (v___x_1312_ == 0)
{
lean_object* v_toBuildConfig_1313_; uint8_t v_oldMode_1314_; 
lean_dec_ref(v_inst_1299_);
v_toBuildConfig_1313_ = lean_ctor_get(v_a_1305_, 0);
v_oldMode_1314_ = lean_ctor_get_uint8(v_toBuildConfig_1313_, sizeof(void*)*2);
if (v_oldMode_1314_ == 0)
{
uint8_t v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
lean_dec(v_info_1301_);
lean_dec_ref(v_inst_1300_);
v___x_1315_ = 0;
v___x_1316_ = lean_box(v___x_1315_);
v___x_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
lean_ctor_set(v___x_1317_, 1, v_a_1306_);
return v___x_1317_;
}
else
{
uint8_t v___x_1318_; 
v___x_1318_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1300_, v_info_1301_, v_oldTrace_1304_);
if (v___x_1318_ == 0)
{
uint8_t v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1319_ = 0;
v___x_1320_ = lean_box(v___x_1319_);
v___x_1321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
lean_ctor_set(v___x_1321_, 1, v_a_1306_);
return v___x_1321_;
}
else
{
uint8_t v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1322_ = 1;
v___x_1323_ = lean_box(v___x_1322_);
v___x_1324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
lean_ctor_set(v___x_1324_, 1, v_a_1306_);
return v___x_1324_;
}
}
}
else
{
lean_object* v___x_1325_; uint8_t v___x_1326_; 
lean_dec_ref(v_inst_1300_);
v___x_1325_ = lean_apply_2(v_inst_1299_, v_info_1301_, lean_box(0));
v___x_1326_ = lean_unbox(v___x_1325_);
if (v___x_1326_ == 0)
{
uint8_t v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1327_ = 0;
v___x_1328_ = lean_box(v___x_1327_);
v___x_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
lean_ctor_set(v___x_1329_, 1, v_a_1306_);
return v___x_1329_;
}
else
{
uint8_t v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1330_ = 2;
v___x_1331_ = lean_box(v___x_1330_);
v___x_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
lean_ctor_set(v___x_1332_, 1, v_a_1306_);
return v___x_1332_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___boxed(lean_object* v_inst_1333_, lean_object* v_inst_1334_, lean_object* v_info_1335_, lean_object* v_depTrace_1336_, lean_object* v_depHash_1337_, lean_object* v_oldTrace_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1333_, v_inst_1334_, v_info_1335_, v_depTrace_1336_, v_depHash_1337_, v_oldTrace_1338_, v_a_1339_, v_a_1340_);
lean_dec_ref(v_a_1339_);
lean_dec_ref(v_oldTrace_1338_);
lean_dec_ref(v_depTrace_1336_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27(lean_object* v_00_u03b9_1343_, lean_object* v_inst_1344_, lean_object* v_inst_1345_, lean_object* v_info_1346_, lean_object* v_depTrace_1347_, lean_object* v_depHash_1348_, lean_object* v_oldTrace_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1344_, v_inst_1345_, v_info_1346_, v_depTrace_1347_, v_depHash_1348_, v_oldTrace_1349_, v_a_1354_, v_a_1355_);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___boxed(lean_object* v_00_u03b9_1358_, lean_object* v_inst_1359_, lean_object* v_inst_1360_, lean_object* v_info_1361_, lean_object* v_depTrace_1362_, lean_object* v_depHash_1363_, lean_object* v_oldTrace_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27(v_00_u03b9_1358_, v_inst_1359_, v_inst_1360_, v_info_1361_, v_depTrace_1362_, v_depHash_1363_, v_oldTrace_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_);
lean_dec_ref(v_a_1369_);
lean_dec(v_a_1368_);
lean_dec(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec_ref(v_oldTrace_1364_);
lean_dec_ref(v_depTrace_1362_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg(lean_object* v_inst_1373_, lean_object* v_inst_1374_, lean_object* v_info_1375_, lean_object* v_depTrace_1376_, lean_object* v_depHash_1377_, lean_object* v_oldTrace_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_){
_start:
{
lean_object* v___x_1382_; lean_object* v_a_1383_; lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1401_; 
v___x_1382_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1373_, v_inst_1374_, v_info_1375_, v_depTrace_1376_, v_depHash_1377_, v_oldTrace_1378_, v_a_1379_, v_a_1380_);
v_a_1383_ = lean_ctor_get(v___x_1382_, 0);
v_a_1384_ = lean_ctor_get(v___x_1382_, 1);
v_isSharedCheck_1401_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1386_ = v___x_1382_;
v_isShared_1387_ = v_isSharedCheck_1401_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_inc(v_a_1383_);
lean_dec(v___x_1382_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1401_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
uint8_t v___x_1388_; uint8_t v___x_1389_; uint8_t v___x_1390_; 
v___x_1388_ = 0;
v___x_1389_ = lean_unbox(v_a_1383_);
lean_dec(v_a_1383_);
v___x_1390_ = l_Lake_instDecidableEqOutputStatus(v___x_1389_, v___x_1388_);
if (v___x_1390_ == 0)
{
uint8_t v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1394_; 
v___x_1391_ = 1;
v___x_1392_ = lean_box(v___x_1391_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 0, v___x_1392_);
v___x_1394_ = v___x_1386_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1392_);
lean_ctor_set(v_reuseFailAlloc_1395_, 1, v_a_1384_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
else
{
uint8_t v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1399_; 
v___x_1396_ = 0;
v___x_1397_ = lean_box(v___x_1396_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 0, v___x_1397_);
v___x_1399_ = v___x_1386_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v___x_1397_);
lean_ctor_set(v_reuseFailAlloc_1400_, 1, v_a_1384_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg___boxed(lean_object* v_inst_1402_, lean_object* v_inst_1403_, lean_object* v_info_1404_, lean_object* v_depTrace_1405_, lean_object* v_depHash_1406_, lean_object* v_oldTrace_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lake_checkHashUpToDate___redArg(v_inst_1402_, v_inst_1403_, v_info_1404_, v_depTrace_1405_, v_depHash_1406_, v_oldTrace_1407_, v_a_1408_, v_a_1409_);
lean_dec_ref(v_a_1408_);
lean_dec_ref(v_oldTrace_1407_);
lean_dec_ref(v_depTrace_1405_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate(lean_object* v_00_u03b9_1412_, lean_object* v_inst_1413_, lean_object* v_inst_1414_, lean_object* v_info_1415_, lean_object* v_depTrace_1416_, lean_object* v_depHash_1417_, lean_object* v_oldTrace_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_){
_start:
{
lean_object* v___x_1426_; lean_object* v_a_1427_; lean_object* v_a_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1445_; 
v___x_1426_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1413_, v_inst_1414_, v_info_1415_, v_depTrace_1416_, v_depHash_1417_, v_oldTrace_1418_, v_a_1423_, v_a_1424_);
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
v_a_1428_ = lean_ctor_get(v___x_1426_, 1);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1430_ = v___x_1426_;
v_isShared_1431_ = v_isSharedCheck_1445_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_a_1428_);
lean_inc(v_a_1427_);
lean_dec(v___x_1426_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1445_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
uint8_t v___x_1432_; uint8_t v___x_1433_; uint8_t v___x_1434_; 
v___x_1432_ = 0;
v___x_1433_ = lean_unbox(v_a_1427_);
lean_dec(v_a_1427_);
v___x_1434_ = l_Lake_instDecidableEqOutputStatus(v___x_1433_, v___x_1432_);
if (v___x_1434_ == 0)
{
uint8_t v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1438_; 
v___x_1435_ = 1;
v___x_1436_ = lean_box(v___x_1435_);
if (v_isShared_1431_ == 0)
{
lean_ctor_set(v___x_1430_, 0, v___x_1436_);
v___x_1438_ = v___x_1430_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1436_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v_a_1428_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
else
{
uint8_t v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1443_; 
v___x_1440_ = 0;
v___x_1441_ = lean_box(v___x_1440_);
if (v_isShared_1431_ == 0)
{
lean_ctor_set(v___x_1430_, 0, v___x_1441_);
v___x_1443_ = v___x_1430_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1441_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v_a_1428_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___boxed(lean_object* v_00_u03b9_1446_, lean_object* v_inst_1447_, lean_object* v_inst_1448_, lean_object* v_info_1449_, lean_object* v_depTrace_1450_, lean_object* v_depHash_1451_, lean_object* v_oldTrace_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = l_Lake_checkHashUpToDate(v_00_u03b9_1446_, v_inst_1447_, v_inst_1448_, v_info_1449_, v_depTrace_1450_, v_depHash_1451_, v_oldTrace_1452_, v_a_1453_, v_a_1454_, v_a_1455_, v_a_1456_, v_a_1457_, v_a_1458_);
lean_dec_ref(v_a_1457_);
lean_dec(v_a_1456_);
lean_dec(v_a_1455_);
lean_dec(v_a_1454_);
lean_dec_ref(v_a_1453_);
lean_dec_ref(v_oldTrace_1452_);
lean_dec_ref(v_depTrace_1450_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(lean_object* v_as_1461_, size_t v_i_1462_, size_t v_stop_1463_, lean_object* v_b_1464_, lean_object* v___y_1465_){
_start:
{
uint8_t v___x_1467_; 
v___x_1467_ = lean_usize_dec_eq(v_i_1462_, v_stop_1463_);
if (v___x_1467_ == 0)
{
lean_object* v_log_1468_; uint8_t v_action_1469_; uint8_t v_wantsRebuild_1470_; lean_object* v_trace_1471_; lean_object* v_buildTime_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1485_; 
v_log_1468_ = lean_ctor_get(v___y_1465_, 0);
v_action_1469_ = lean_ctor_get_uint8(v___y_1465_, sizeof(void*)*3);
v_wantsRebuild_1470_ = lean_ctor_get_uint8(v___y_1465_, sizeof(void*)*3 + 1);
v_trace_1471_ = lean_ctor_get(v___y_1465_, 1);
v_buildTime_1472_ = lean_ctor_get(v___y_1465_, 2);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___y_1465_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1474_ = v___y_1465_;
v_isShared_1475_ = v_isSharedCheck_1485_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_buildTime_1472_);
lean_inc(v_trace_1471_);
lean_inc(v_log_1468_);
lean_dec(v___y_1465_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1485_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1480_; 
v___x_1476_ = lean_array_uget_borrowed(v_as_1461_, v_i_1462_);
v___x_1477_ = lean_box(0);
lean_inc(v___x_1476_);
v___x_1478_ = lean_array_push(v_log_1468_, v___x_1476_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 0, v___x_1478_);
v___x_1480_ = v___x_1474_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v___x_1478_);
lean_ctor_set(v_reuseFailAlloc_1484_, 1, v_trace_1471_);
lean_ctor_set(v_reuseFailAlloc_1484_, 2, v_buildTime_1472_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*3, v_action_1469_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*3 + 1, v_wantsRebuild_1470_);
v___x_1480_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
size_t v___x_1481_; size_t v___x_1482_; 
v___x_1481_ = ((size_t)1ULL);
v___x_1482_ = lean_usize_add(v_i_1462_, v___x_1481_);
v_i_1462_ = v___x_1482_;
v_b_1464_ = v___x_1477_;
v___y_1465_ = v___x_1480_;
goto _start;
}
}
}
else
{
lean_object* v___x_1486_; 
v___x_1486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1486_, 0, v_b_1464_);
lean_ctor_set(v___x_1486_, 1, v___y_1465_);
return v___x_1486_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg___boxed(lean_object* v_as_1487_, lean_object* v_i_1488_, lean_object* v_stop_1489_, lean_object* v_b_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
size_t v_i_boxed_1493_; size_t v_stop_boxed_1494_; lean_object* v_res_1495_; 
v_i_boxed_1493_ = lean_unbox_usize(v_i_1488_);
lean_dec(v_i_1488_);
v_stop_boxed_1494_ = lean_unbox_usize(v_stop_1489_);
lean_dec(v_stop_1489_);
v_res_1495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_as_1487_, v_i_boxed_1493_, v_stop_boxed_1494_, v_b_1490_, v___y_1491_);
lean_dec_ref(v_as_1487_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(lean_object* v_log_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_){
_start:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; 
v___x_1504_ = lean_unsigned_to_nat(0u);
v___x_1505_ = lean_array_get_size(v_log_1496_);
v___x_1506_ = lean_box(0);
v___x_1507_ = lean_nat_dec_lt(v___x_1504_, v___x_1505_);
if (v___x_1507_ == 0)
{
lean_object* v___x_1508_; 
v___x_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1506_);
lean_ctor_set(v___x_1508_, 1, v_a_1502_);
return v___x_1508_;
}
else
{
uint8_t v___x_1509_; 
v___x_1509_ = lean_nat_dec_le(v___x_1505_, v___x_1505_);
if (v___x_1509_ == 0)
{
if (v___x_1507_ == 0)
{
lean_object* v___x_1510_; 
v___x_1510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1506_);
lean_ctor_set(v___x_1510_, 1, v_a_1502_);
return v___x_1510_;
}
else
{
size_t v___x_1511_; size_t v___x_1512_; lean_object* v___x_1513_; 
v___x_1511_ = ((size_t)0ULL);
v___x_1512_ = lean_usize_of_nat(v___x_1505_);
v___x_1513_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1496_, v___x_1511_, v___x_1512_, v___x_1506_, v_a_1502_);
return v___x_1513_;
}
}
else
{
size_t v___x_1514_; size_t v___x_1515_; lean_object* v___x_1516_; 
v___x_1514_ = ((size_t)0ULL);
v___x_1515_ = lean_usize_of_nat(v___x_1505_);
v___x_1516_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1496_, v___x_1514_, v___x_1515_, v___x_1506_, v_a_1502_);
return v___x_1516_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay___boxed(lean_object* v_log_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
lean_dec_ref(v_a_1522_);
lean_dec(v_a_1521_);
lean_dec(v_a_1520_);
lean_dec(v_a_1519_);
lean_dec_ref(v_a_1518_);
lean_dec_ref(v_log_1517_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0(lean_object* v_as_1526_, size_t v_i_1527_, size_t v_stop_1528_, lean_object* v_b_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_as_1526_, v_i_1527_, v_stop_1528_, v_b_1529_, v___y_1535_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___boxed(lean_object* v_as_1538_, lean_object* v_i_1539_, lean_object* v_stop_1540_, lean_object* v_b_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
size_t v_i_boxed_1549_; size_t v_stop_boxed_1550_; lean_object* v_res_1551_; 
v_i_boxed_1549_ = lean_unbox_usize(v_i_1539_);
lean_dec(v_i_1539_);
v_stop_boxed_1550_ = lean_unbox_usize(v_stop_1540_);
lean_dec(v_stop_1540_);
v_res_1551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0(v_as_1538_, v_i_boxed_1549_, v_stop_boxed_1550_, v_b_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_);
lean_dec_ref(v___y_1546_);
lean_dec(v___y_1545_);
lean_dec(v___y_1544_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec_ref(v_as_1538_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(lean_object* v_inst_1552_, lean_object* v_inst_1553_, lean_object* v_info_1554_, lean_object* v_depTrace_1555_, lean_object* v_savedTrace_1556_, lean_object* v_oldTrace_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_){
_start:
{
if (lean_obj_tag(v_savedTrace_1556_) == 2)
{
lean_object* v_data_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1615_; 
v_data_1565_ = lean_ctor_get(v_savedTrace_1556_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v_savedTrace_1556_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1567_ = v_savedTrace_1556_;
v_isShared_1568_ = v_isSharedCheck_1615_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_data_1565_);
lean_dec(v_savedTrace_1556_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1615_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
uint64_t v_depHash_1569_; lean_object* v_log_1570_; lean_object* v___x_1571_; lean_object* v___x_1573_; 
v_depHash_1569_ = lean_ctor_get_uint64(v_data_1565_, sizeof(void*)*3);
v_log_1570_ = lean_ctor_get(v_data_1565_, 2);
lean_inc_ref(v_log_1570_);
lean_dec_ref(v_data_1565_);
v___x_1571_ = lean_box_uint64(v_depHash_1569_);
if (v_isShared_1568_ == 0)
{
lean_ctor_set_tag(v___x_1567_, 1);
lean_ctor_set(v___x_1567_, 0, v___x_1571_);
v___x_1573_ = v___x_1567_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v___x_1571_);
v___x_1573_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
lean_object* v___x_1574_; lean_object* v_a_1575_; lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1613_; 
v___x_1574_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1552_, v_inst_1553_, v_info_1554_, v_depTrace_1555_, v___x_1573_, v_oldTrace_1557_, v_a_1562_, v_a_1563_);
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
v_a_1576_ = lean_ctor_get(v___x_1574_, 1);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1578_ = v___x_1574_;
v_isShared_1579_ = v_isSharedCheck_1613_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_inc(v_a_1575_);
lean_dec(v___x_1574_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1613_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___y_1581_; uint8_t v___x_1585_; uint8_t v___x_1586_; uint8_t v___x_1587_; 
v___x_1585_ = 0;
v___x_1586_ = lean_unbox(v_a_1575_);
v___x_1587_ = l_Lake_instDecidableEqOutputStatus(v___x_1586_, v___x_1585_);
if (v___x_1587_ == 0)
{
lean_object* v_log_1588_; uint8_t v_action_1589_; uint8_t v_wantsRebuild_1590_; lean_object* v_trace_1591_; lean_object* v_buildTime_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1612_; 
v_log_1588_ = lean_ctor_get(v_a_1576_, 0);
v_action_1589_ = lean_ctor_get_uint8(v_a_1576_, sizeof(void*)*3);
v_wantsRebuild_1590_ = lean_ctor_get_uint8(v_a_1576_, sizeof(void*)*3 + 1);
v_trace_1591_ = lean_ctor_get(v_a_1576_, 1);
v_buildTime_1592_ = lean_ctor_get(v_a_1576_, 2);
v_isSharedCheck_1612_ = !lean_is_exclusive(v_a_1576_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1594_ = v_a_1576_;
v_isShared_1595_ = v_isSharedCheck_1612_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_buildTime_1592_);
lean_inc(v_trace_1591_);
lean_inc(v_log_1588_);
lean_dec(v_a_1576_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1612_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
uint8_t v___x_1596_; uint8_t v___x_1597_; lean_object* v___x_1599_; 
v___x_1596_ = 1;
v___x_1597_ = l_Lake_JobAction_merge(v_action_1589_, v___x_1596_);
if (v_isShared_1595_ == 0)
{
v___x_1599_ = v___x_1594_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_log_1588_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v_trace_1591_);
lean_ctor_set(v_reuseFailAlloc_1611_, 2, v_buildTime_1592_);
lean_ctor_set_uint8(v_reuseFailAlloc_1611_, sizeof(void*)*3 + 1, v_wantsRebuild_1590_);
v___x_1599_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
lean_object* v___x_1600_; 
lean_ctor_set_uint8(v___x_1599_, sizeof(void*)*3, v___x_1597_);
v___x_1600_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_1570_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_, v___x_1599_);
lean_dec_ref(v_log_1570_);
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_object* v_a_1601_; 
v_a_1601_ = lean_ctor_get(v___x_1600_, 1);
lean_inc(v_a_1601_);
lean_dec_ref(v___x_1600_);
v___y_1581_ = v_a_1601_;
goto v___jp_1580_;
}
else
{
lean_object* v_a_1602_; lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
lean_del_object(v___x_1578_);
lean_dec(v_a_1575_);
v_a_1602_ = lean_ctor_get(v___x_1600_, 0);
v_a_1603_ = lean_ctor_get(v___x_1600_, 1);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1605_ = v___x_1600_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_inc(v_a_1602_);
lean_dec(v___x_1600_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1602_);
lean_ctor_set(v_reuseFailAlloc_1609_, 1, v_a_1603_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_log_1570_);
v___y_1581_ = v_a_1576_;
goto v___jp_1580_;
}
v___jp_1580_:
{
lean_object* v___x_1583_; 
if (v_isShared_1579_ == 0)
{
lean_ctor_set(v___x_1578_, 1, v___y_1581_);
v___x_1583_ = v___x_1578_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1575_);
lean_ctor_set(v_reuseFailAlloc_1584_, 1, v___y_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
}
}
else
{
lean_object* v_toBuildConfig_1616_; uint8_t v_oldMode_1617_; 
lean_dec(v_savedTrace_1556_);
lean_dec_ref(v_inst_1552_);
v_toBuildConfig_1616_ = lean_ctor_get(v_a_1562_, 0);
v_oldMode_1617_ = lean_ctor_get_uint8(v_toBuildConfig_1616_, sizeof(void*)*2);
if (v_oldMode_1617_ == 0)
{
uint8_t v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
lean_dec(v_info_1554_);
lean_dec_ref(v_inst_1553_);
v___x_1618_ = 0;
v___x_1619_ = lean_box(v___x_1618_);
v___x_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1619_);
lean_ctor_set(v___x_1620_, 1, v_a_1563_);
return v___x_1620_;
}
else
{
uint8_t v___x_1621_; 
v___x_1621_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1553_, v_info_1554_, v_oldTrace_1557_);
if (v___x_1621_ == 0)
{
uint8_t v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1622_ = 0;
v___x_1623_ = lean_box(v___x_1622_);
v___x_1624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
lean_ctor_set(v___x_1624_, 1, v_a_1563_);
return v___x_1624_;
}
else
{
uint8_t v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1625_ = 1;
v___x_1626_ = lean_box(v___x_1625_);
v___x_1627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
lean_ctor_set(v___x_1627_, 1, v_a_1563_);
return v___x_1627_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg___boxed(lean_object* v_inst_1628_, lean_object* v_inst_1629_, lean_object* v_info_1630_, lean_object* v_depTrace_1631_, lean_object* v_savedTrace_1632_, lean_object* v_oldTrace_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1628_, v_inst_1629_, v_info_1630_, v_depTrace_1631_, v_savedTrace_1632_, v_oldTrace_1633_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
lean_dec_ref(v_a_1638_);
lean_dec(v_a_1637_);
lean_dec(v_a_1636_);
lean_dec(v_a_1635_);
lean_dec_ref(v_a_1634_);
lean_dec_ref(v_oldTrace_1633_);
lean_dec_ref(v_depTrace_1631_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27(lean_object* v_00_u03b9_1642_, lean_object* v_inst_1643_, lean_object* v_inst_1644_, lean_object* v_info_1645_, lean_object* v_depTrace_1646_, lean_object* v_savedTrace_1647_, lean_object* v_oldTrace_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1643_, v_inst_1644_, v_info_1645_, v_depTrace_1646_, v_savedTrace_1647_, v_oldTrace_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_, v_a_1654_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___boxed(lean_object* v_00_u03b9_1657_, lean_object* v_inst_1658_, lean_object* v_inst_1659_, lean_object* v_info_1660_, lean_object* v_depTrace_1661_, lean_object* v_savedTrace_1662_, lean_object* v_oldTrace_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l_Lake_SavedTrace_replayIfUpToDate_x27(v_00_u03b9_1657_, v_inst_1658_, v_inst_1659_, v_info_1660_, v_depTrace_1661_, v_savedTrace_1662_, v_oldTrace_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_);
lean_dec_ref(v_a_1668_);
lean_dec(v_a_1667_);
lean_dec(v_a_1666_);
lean_dec(v_a_1665_);
lean_dec_ref(v_a_1664_);
lean_dec_ref(v_oldTrace_1663_);
lean_dec_ref(v_depTrace_1661_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg(lean_object* v_inst_1672_, lean_object* v_inst_1673_, lean_object* v_info_1674_, lean_object* v_depTrace_1675_, lean_object* v_savedTrace_1676_, lean_object* v_oldTrace_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_){
_start:
{
lean_object* v___x_1685_; 
v___x_1685_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1672_, v_inst_1673_, v_info_1674_, v_depTrace_1675_, v_savedTrace_1676_, v_oldTrace_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v_a_1686_; lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1704_; 
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
v_a_1687_ = lean_ctor_get(v___x_1685_, 1);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1689_ = v___x_1685_;
v_isShared_1690_ = v_isSharedCheck_1704_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_inc(v_a_1686_);
lean_dec(v___x_1685_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1704_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
uint8_t v___x_1691_; uint8_t v___x_1692_; uint8_t v___x_1693_; 
v___x_1691_ = 0;
v___x_1692_ = lean_unbox(v_a_1686_);
lean_dec(v_a_1686_);
v___x_1693_ = l_Lake_instDecidableEqOutputStatus(v___x_1692_, v___x_1691_);
if (v___x_1693_ == 0)
{
uint8_t v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1697_; 
v___x_1694_ = 1;
v___x_1695_ = lean_box(v___x_1694_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v___x_1695_);
v___x_1697_ = v___x_1689_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1695_);
lean_ctor_set(v_reuseFailAlloc_1698_, 1, v_a_1687_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
else
{
uint8_t v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1702_; 
v___x_1699_ = 0;
v___x_1700_ = lean_box(v___x_1699_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v___x_1700_);
v___x_1702_ = v___x_1689_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v___x_1700_);
lean_ctor_set(v_reuseFailAlloc_1703_, 1, v_a_1687_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
}
else
{
lean_object* v_a_1705_; lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
v_a_1705_ = lean_ctor_get(v___x_1685_, 0);
v_a_1706_ = lean_ctor_get(v___x_1685_, 1);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1685_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_inc(v_a_1705_);
lean_dec(v___x_1685_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1705_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg___boxed(lean_object* v_inst_1714_, lean_object* v_inst_1715_, lean_object* v_info_1716_, lean_object* v_depTrace_1717_, lean_object* v_savedTrace_1718_, lean_object* v_oldTrace_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_){
_start:
{
lean_object* v_res_1727_; 
v_res_1727_ = l_Lake_SavedTrace_replayIfUpToDate___redArg(v_inst_1714_, v_inst_1715_, v_info_1716_, v_depTrace_1717_, v_savedTrace_1718_, v_oldTrace_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_, v_a_1725_);
lean_dec_ref(v_a_1724_);
lean_dec(v_a_1723_);
lean_dec(v_a_1722_);
lean_dec(v_a_1721_);
lean_dec_ref(v_a_1720_);
lean_dec_ref(v_oldTrace_1719_);
lean_dec_ref(v_depTrace_1717_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate(lean_object* v_00_u03b9_1728_, lean_object* v_inst_1729_, lean_object* v_inst_1730_, lean_object* v_info_1731_, lean_object* v_depTrace_1732_, lean_object* v_savedTrace_1733_, lean_object* v_oldTrace_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_){
_start:
{
lean_object* v___x_1742_; 
v___x_1742_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1729_, v_inst_1730_, v_info_1731_, v_depTrace_1732_, v_savedTrace_1733_, v_oldTrace_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1761_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
v_a_1744_ = lean_ctor_get(v___x_1742_, 1);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1746_ = v___x_1742_;
v_isShared_1747_ = v_isSharedCheck_1761_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_inc(v_a_1743_);
lean_dec(v___x_1742_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1761_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
uint8_t v___x_1748_; uint8_t v___x_1749_; uint8_t v___x_1750_; 
v___x_1748_ = 0;
v___x_1749_ = lean_unbox(v_a_1743_);
lean_dec(v_a_1743_);
v___x_1750_ = l_Lake_instDecidableEqOutputStatus(v___x_1749_, v___x_1748_);
if (v___x_1750_ == 0)
{
uint8_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1754_; 
v___x_1751_ = 1;
v___x_1752_ = lean_box(v___x_1751_);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 0, v___x_1752_);
v___x_1754_ = v___x_1746_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v___x_1752_);
lean_ctor_set(v_reuseFailAlloc_1755_, 1, v_a_1744_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
else
{
uint8_t v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1759_; 
v___x_1756_ = 0;
v___x_1757_ = lean_box(v___x_1756_);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 0, v___x_1757_);
v___x_1759_ = v___x_1746_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1757_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v_a_1744_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
else
{
lean_object* v_a_1762_; lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1770_; 
v_a_1762_ = lean_ctor_get(v___x_1742_, 0);
v_a_1763_ = lean_ctor_get(v___x_1742_, 1);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1742_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_inc(v_a_1762_);
lean_dec(v___x_1742_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1762_);
lean_ctor_set(v_reuseFailAlloc_1769_, 1, v_a_1763_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___boxed(lean_object* v_00_u03b9_1771_, lean_object* v_inst_1772_, lean_object* v_inst_1773_, lean_object* v_info_1774_, lean_object* v_depTrace_1775_, lean_object* v_savedTrace_1776_, lean_object* v_oldTrace_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l_Lake_SavedTrace_replayIfUpToDate(v_00_u03b9_1771_, v_inst_1772_, v_inst_1773_, v_info_1774_, v_depTrace_1775_, v_savedTrace_1776_, v_oldTrace_1777_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_, v_a_1783_);
lean_dec_ref(v_a_1782_);
lean_dec(v_a_1781_);
lean_dec(v_a_1780_);
lean_dec(v_a_1779_);
lean_dec_ref(v_a_1778_);
lean_dec_ref(v_oldTrace_1777_);
lean_dec_ref(v_depTrace_1775_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(uint64_t v_inputHash_1786_, lean_object* v_self_1787_, lean_object* v_a_1788_){
_start:
{
lean_object* v___y_1791_; 
if (lean_obj_tag(v_self_1787_) == 2)
{
lean_object* v_data_1809_; uint64_t v_depHash_1810_; lean_object* v_log_1811_; uint8_t v_synthetic_1812_; uint8_t v___x_1813_; lean_object* v___y_1815_; lean_object* v___y_1819_; 
v_data_1809_ = lean_ctor_get(v_self_1787_, 0);
v_depHash_1810_ = lean_ctor_get_uint64(v_data_1809_, sizeof(void*)*3);
v_log_1811_ = lean_ctor_get(v_data_1809_, 2);
v_synthetic_1812_ = lean_ctor_get_uint8(v_data_1809_, sizeof(void*)*3 + 8);
v___x_1813_ = lean_uint64_dec_eq(v_depHash_1810_, v_inputHash_1786_);
if (v___x_1813_ == 0)
{
v___y_1791_ = v_a_1788_;
goto v___jp_1790_;
}
else
{
if (v_synthetic_1812_ == 0)
{
goto v___jp_1830_;
}
else
{
lean_object* v___x_1856_; lean_object* v___x_1857_; uint8_t v___x_1858_; 
v___x_1856_ = lean_array_get_size(v_log_1811_);
v___x_1857_ = lean_unsigned_to_nat(0u);
v___x_1858_ = lean_nat_dec_eq(v___x_1856_, v___x_1857_);
if (v___x_1858_ == 0)
{
goto v___jp_1830_;
}
else
{
lean_object* v_log_1859_; uint8_t v_action_1860_; uint8_t v_wantsRebuild_1861_; lean_object* v_trace_1862_; lean_object* v_buildTime_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1872_; 
v_log_1859_ = lean_ctor_get(v_a_1788_, 0);
v_action_1860_ = lean_ctor_get_uint8(v_a_1788_, sizeof(void*)*3);
v_wantsRebuild_1861_ = lean_ctor_get_uint8(v_a_1788_, sizeof(void*)*3 + 1);
v_trace_1862_ = lean_ctor_get(v_a_1788_, 1);
v_buildTime_1863_ = lean_ctor_get(v_a_1788_, 2);
v_isSharedCheck_1872_ = !lean_is_exclusive(v_a_1788_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1865_ = v_a_1788_;
v_isShared_1866_ = v_isSharedCheck_1872_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_buildTime_1863_);
lean_inc(v_trace_1862_);
lean_inc(v_log_1859_);
lean_dec(v_a_1788_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1872_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
uint8_t v___x_1867_; uint8_t v___x_1868_; lean_object* v___x_1870_; 
v___x_1867_ = 2;
v___x_1868_ = l_Lake_JobAction_merge(v_action_1860_, v___x_1867_);
if (v_isShared_1866_ == 0)
{
v___x_1870_ = v___x_1865_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_log_1859_);
lean_ctor_set(v_reuseFailAlloc_1871_, 1, v_trace_1862_);
lean_ctor_set(v_reuseFailAlloc_1871_, 2, v_buildTime_1863_);
lean_ctor_set_uint8(v_reuseFailAlloc_1871_, sizeof(void*)*3 + 1, v_wantsRebuild_1861_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
lean_ctor_set_uint8(v___x_1870_, sizeof(void*)*3, v___x_1868_);
v___y_1815_ = v___x_1870_;
goto v___jp_1814_;
}
}
}
}
}
v___jp_1814_:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1816_ = lean_box(v___x_1813_);
v___x_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1816_);
lean_ctor_set(v___x_1817_, 1, v___y_1815_);
return v___x_1817_;
}
v___jp_1818_:
{
if (lean_obj_tag(v___y_1819_) == 0)
{
lean_object* v_a_1820_; 
v_a_1820_ = lean_ctor_get(v___y_1819_, 1);
lean_inc(v_a_1820_);
lean_dec_ref(v___y_1819_);
v___y_1815_ = v_a_1820_;
goto v___jp_1814_;
}
else
{
lean_object* v_a_1821_; lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1829_; 
v_a_1821_ = lean_ctor_get(v___y_1819_, 0);
v_a_1822_ = lean_ctor_get(v___y_1819_, 1);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___y_1819_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1824_ = v___y_1819_;
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_inc(v_a_1821_);
lean_dec(v___y_1819_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1825_ == 0)
{
v___x_1827_ = v___x_1824_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_a_1821_);
lean_ctor_set(v_reuseFailAlloc_1828_, 1, v_a_1822_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
return v___x_1827_;
}
}
}
}
v___jp_1830_:
{
lean_object* v_log_1831_; uint8_t v_action_1832_; uint8_t v_wantsRebuild_1833_; lean_object* v_trace_1834_; lean_object* v_buildTime_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1855_; 
v_log_1831_ = lean_ctor_get(v_a_1788_, 0);
v_action_1832_ = lean_ctor_get_uint8(v_a_1788_, sizeof(void*)*3);
v_wantsRebuild_1833_ = lean_ctor_get_uint8(v_a_1788_, sizeof(void*)*3 + 1);
v_trace_1834_ = lean_ctor_get(v_a_1788_, 1);
v_buildTime_1835_ = lean_ctor_get(v_a_1788_, 2);
v_isSharedCheck_1855_ = !lean_is_exclusive(v_a_1788_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1837_ = v_a_1788_;
v_isShared_1838_ = v_isSharedCheck_1855_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_buildTime_1835_);
lean_inc(v_trace_1834_);
lean_inc(v_log_1831_);
lean_dec(v_a_1788_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1855_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
uint8_t v___x_1839_; uint8_t v___x_1840_; lean_object* v___x_1842_; 
v___x_1839_ = 1;
v___x_1840_ = l_Lake_JobAction_merge(v_action_1832_, v___x_1839_);
if (v_isShared_1838_ == 0)
{
v___x_1842_ = v___x_1837_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_log_1831_);
lean_ctor_set(v_reuseFailAlloc_1854_, 1, v_trace_1834_);
lean_ctor_set(v_reuseFailAlloc_1854_, 2, v_buildTime_1835_);
lean_ctor_set_uint8(v_reuseFailAlloc_1854_, sizeof(void*)*3 + 1, v_wantsRebuild_1833_);
v___x_1842_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; uint8_t v___x_1845_; 
lean_ctor_set_uint8(v___x_1842_, sizeof(void*)*3, v___x_1840_);
v___x_1843_ = lean_unsigned_to_nat(0u);
v___x_1844_ = lean_array_get_size(v_log_1811_);
v___x_1845_ = lean_nat_dec_lt(v___x_1843_, v___x_1844_);
if (v___x_1845_ == 0)
{
v___y_1815_ = v___x_1842_;
goto v___jp_1814_;
}
else
{
lean_object* v___x_1846_; uint8_t v___x_1847_; 
v___x_1846_ = lean_box(0);
v___x_1847_ = lean_nat_dec_le(v___x_1844_, v___x_1844_);
if (v___x_1847_ == 0)
{
if (v___x_1845_ == 0)
{
v___y_1815_ = v___x_1842_;
goto v___jp_1814_;
}
else
{
size_t v___x_1848_; size_t v___x_1849_; lean_object* v___x_1850_; 
v___x_1848_ = ((size_t)0ULL);
v___x_1849_ = lean_usize_of_nat(v___x_1844_);
v___x_1850_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1811_, v___x_1848_, v___x_1849_, v___x_1846_, v___x_1842_);
v___y_1819_ = v___x_1850_;
goto v___jp_1818_;
}
}
else
{
size_t v___x_1851_; size_t v___x_1852_; lean_object* v___x_1853_; 
v___x_1851_ = ((size_t)0ULL);
v___x_1852_ = lean_usize_of_nat(v___x_1844_);
v___x_1853_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1811_, v___x_1851_, v___x_1852_, v___x_1846_, v___x_1842_);
v___y_1819_ = v___x_1853_;
goto v___jp_1818_;
}
}
}
}
}
}
else
{
v___y_1791_ = v_a_1788_;
goto v___jp_1790_;
}
v___jp_1790_:
{
lean_object* v_log_1792_; uint8_t v_action_1793_; uint8_t v_wantsRebuild_1794_; lean_object* v_trace_1795_; lean_object* v_buildTime_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1808_; 
v_log_1792_ = lean_ctor_get(v___y_1791_, 0);
v_action_1793_ = lean_ctor_get_uint8(v___y_1791_, sizeof(void*)*3);
v_wantsRebuild_1794_ = lean_ctor_get_uint8(v___y_1791_, sizeof(void*)*3 + 1);
v_trace_1795_ = lean_ctor_get(v___y_1791_, 1);
v_buildTime_1796_ = lean_ctor_get(v___y_1791_, 2);
v_isSharedCheck_1808_ = !lean_is_exclusive(v___y_1791_);
if (v_isSharedCheck_1808_ == 0)
{
v___x_1798_ = v___y_1791_;
v_isShared_1799_ = v_isSharedCheck_1808_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_buildTime_1796_);
lean_inc(v_trace_1795_);
lean_inc(v_log_1792_);
lean_dec(v___y_1791_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1808_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
uint8_t v___x_1800_; uint8_t v___x_1801_; lean_object* v___x_1803_; 
v___x_1800_ = 2;
v___x_1801_ = l_Lake_JobAction_merge(v_action_1793_, v___x_1800_);
if (v_isShared_1799_ == 0)
{
v___x_1803_ = v___x_1798_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v_log_1792_);
lean_ctor_set(v_reuseFailAlloc_1807_, 1, v_trace_1795_);
lean_ctor_set(v_reuseFailAlloc_1807_, 2, v_buildTime_1796_);
lean_ctor_set_uint8(v_reuseFailAlloc_1807_, sizeof(void*)*3 + 1, v_wantsRebuild_1794_);
v___x_1803_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
uint8_t v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
lean_ctor_set_uint8(v___x_1803_, sizeof(void*)*3, v___x_1801_);
v___x_1804_ = 0;
v___x_1805_ = lean_box(v___x_1804_);
v___x_1806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1805_);
lean_ctor_set(v___x_1806_, 1, v___x_1803_);
return v___x_1806_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg___boxed(lean_object* v_inputHash_1873_, lean_object* v_self_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_){
_start:
{
uint64_t v_inputHash_boxed_1877_; lean_object* v_res_1878_; 
v_inputHash_boxed_1877_ = lean_unbox_uint64(v_inputHash_1873_);
lean_dec_ref(v_inputHash_1873_);
v_res_1878_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(v_inputHash_boxed_1877_, v_self_1874_, v_a_1875_);
lean_dec(v_self_1874_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate(uint64_t v_inputHash_1879_, lean_object* v_self_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(v_inputHash_1879_, v_self_1880_, v_a_1886_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___boxed(lean_object* v_inputHash_1889_, lean_object* v_self_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_){
_start:
{
uint64_t v_inputHash_boxed_1898_; lean_object* v_res_1899_; 
v_inputHash_boxed_1898_ = lean_unbox_uint64(v_inputHash_1889_);
lean_dec_ref(v_inputHash_1889_);
v_res_1899_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate(v_inputHash_boxed_1898_, v_self_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_);
lean_dec_ref(v_a_1895_);
lean_dec(v_a_1894_);
lean_dec(v_a_1893_);
lean_dec(v_a_1892_);
lean_dec_ref(v_a_1891_);
lean_dec(v_self_1890_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonPUnit___lam__0(lean_object* v_x_1900_){
_start:
{
lean_object* v___x_1901_; 
v___x_1901_ = lean_box(0);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0(lean_object* v_x_1905_){
_start:
{
lean_object* v_descr_1906_; uint64_t v_hash_1907_; lean_object* v_ext_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; uint8_t v___x_1911_; 
v_descr_1906_ = lean_ctor_get(v_x_1905_, 0);
v_hash_1907_ = lean_ctor_get_uint64(v_descr_1906_, sizeof(void*)*1);
v_ext_1908_ = lean_ctor_get(v_descr_1906_, 0);
v___x_1909_ = lean_string_utf8_byte_size(v_ext_1908_);
v___x_1910_ = lean_unsigned_to_nat(0u);
v___x_1911_ = lean_nat_dec_eq(v___x_1909_, v___x_1910_);
if (v___x_1911_ == 0)
{
lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1912_ = l_Lake_Hash_hex(v_hash_1907_);
v___x_1913_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_1914_ = lean_string_append(v___x_1912_, v___x_1913_);
v___x_1915_ = lean_string_append(v___x_1914_, v_ext_1908_);
v___x_1916_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1915_);
return v___x_1916_;
}
else
{
lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1917_ = l_Lake_Hash_hex(v_hash_1907_);
v___x_1918_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1917_);
return v___x_1918_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0___boxed(lean_object* v_x_1919_){
_start:
{
lean_object* v_res_1920_; 
v_res_1920_ = l_Lake_instToOutputJsonArtifact___lam__0(v_x_1919_);
lean_dec_ref(v_x_1919_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0(lean_object* v_val_1923_, lean_object* v_a_x3f_1924_, lean_object* v___y_1925_){
_start:
{
lean_object* v___x_1927_; lean_object* v_log_1928_; uint8_t v_action_1929_; uint8_t v_wantsRebuild_1930_; lean_object* v_trace_1931_; lean_object* v_buildTime_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1943_; 
v___x_1927_ = lean_io_mono_ms_now();
v_log_1928_ = lean_ctor_get(v___y_1925_, 0);
v_action_1929_ = lean_ctor_get_uint8(v___y_1925_, sizeof(void*)*3);
v_wantsRebuild_1930_ = lean_ctor_get_uint8(v___y_1925_, sizeof(void*)*3 + 1);
v_trace_1931_ = lean_ctor_get(v___y_1925_, 1);
v_buildTime_1932_ = lean_ctor_get(v___y_1925_, 2);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___y_1925_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1934_ = v___y_1925_;
v_isShared_1935_ = v_isSharedCheck_1943_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_buildTime_1932_);
lean_inc(v_trace_1931_);
lean_inc(v_log_1928_);
lean_dec(v___y_1925_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1943_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1940_; 
v___x_1936_ = lean_nat_sub(v___x_1927_, v_val_1923_);
lean_dec(v___x_1927_);
v___x_1937_ = lean_box(0);
v___x_1938_ = lean_nat_add(v_buildTime_1932_, v___x_1936_);
lean_dec(v___x_1936_);
lean_dec(v_buildTime_1932_);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 2, v___x_1938_);
v___x_1940_ = v___x_1934_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_log_1928_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v_trace_1931_);
lean_ctor_set(v_reuseFailAlloc_1942_, 2, v___x_1938_);
lean_ctor_set_uint8(v_reuseFailAlloc_1942_, sizeof(void*)*3, v_action_1929_);
lean_ctor_set_uint8(v_reuseFailAlloc_1942_, sizeof(void*)*3 + 1, v_wantsRebuild_1930_);
v___x_1940_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
lean_object* v___x_1941_; 
v___x_1941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1937_);
lean_ctor_set(v___x_1941_, 1, v___x_1940_);
return v___x_1941_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0___boxed(lean_object* v_val_1944_, lean_object* v_a_x3f_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Lake_buildAction___redArg___lam__0(v_val_1944_, v_a_x3f_1945_, v___y_1946_);
lean_dec(v_a_x3f_1945_);
lean_dec(v_val_1944_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg(lean_object* v_inst_1954_, lean_object* v_depTrace_1955_, lean_object* v_traceFile_1956_, lean_object* v_build_1957_, uint8_t v_action_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_){
_start:
{
lean_object* v_a_1967_; lean_object* v_a_1968_; lean_object* v_log_1971_; uint8_t v_action_1972_; uint8_t v_wantsRebuild_1973_; lean_object* v_trace_1974_; lean_object* v_buildTime_1975_; lean_object* v_toBuildConfig_1981_; lean_object* v_log_1982_; uint8_t v_action_1983_; uint8_t v_wantsRebuild_1984_; lean_object* v_trace_1985_; lean_object* v_buildTime_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2092_; 
v_toBuildConfig_1981_ = lean_ctor_get(v_a_1963_, 0);
v_log_1982_ = lean_ctor_get(v_a_1964_, 0);
v_action_1983_ = lean_ctor_get_uint8(v_a_1964_, sizeof(void*)*3);
v_wantsRebuild_1984_ = lean_ctor_get_uint8(v_a_1964_, sizeof(void*)*3 + 1);
v_trace_1985_ = lean_ctor_get(v_a_1964_, 1);
v_buildTime_1986_ = lean_ctor_get(v_a_1964_, 2);
v_isSharedCheck_2092_ = !lean_is_exclusive(v_a_1964_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_1988_ = v_a_1964_;
v_isShared_1989_ = v_isSharedCheck_2092_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_buildTime_1986_);
lean_inc(v_trace_1985_);
lean_inc(v_log_1982_);
lean_dec(v_a_1964_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2092_;
goto v_resetjp_1987_;
}
v___jp_1966_:
{
lean_object* v___x_1969_; 
v___x_1969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1969_, 0, v_a_1967_);
lean_ctor_set(v___x_1969_, 1, v_a_1968_);
return v___x_1969_;
}
v___jp_1970_:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1976_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__1));
v___x_1977_ = lean_array_get_size(v_log_1971_);
v___x_1978_ = lean_array_push(v_log_1971_, v___x_1976_);
v___x_1979_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1979_, 0, v___x_1978_);
lean_ctor_set(v___x_1979_, 1, v_trace_1974_);
lean_ctor_set(v___x_1979_, 2, v_buildTime_1975_);
lean_ctor_set_uint8(v___x_1979_, sizeof(void*)*3, v_action_1972_);
lean_ctor_set_uint8(v___x_1979_, sizeof(void*)*3 + 1, v_wantsRebuild_1973_);
v___x_1980_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1977_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
return v___x_1980_;
}
v_resetjp_1987_:
{
uint8_t v_noBuild_1990_; uint8_t v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v_noBuild_1990_ = lean_ctor_get_uint8(v_toBuildConfig_1981_, sizeof(void*)*2 + 2);
v___x_1991_ = l_Lake_JobAction_merge(v_action_1983_, v_action_1958_);
v___x_1992_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__2));
lean_inc_ref(v_traceFile_1956_);
v___x_1993_ = l_System_FilePath_addExtension(v_traceFile_1956_, v___x_1992_);
if (v_noBuild_1990_ == 0)
{
lean_object* v___x_1994_; lean_object* v___x_1996_; 
v___x_1994_ = lean_io_mono_ms_now();
lean_inc_ref(v_log_1982_);
if (v_isShared_1989_ == 0)
{
v___x_1996_ = v___x_1988_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_log_1982_);
lean_ctor_set(v_reuseFailAlloc_2076_, 1, v_trace_1985_);
lean_ctor_set(v_reuseFailAlloc_2076_, 2, v_buildTime_1986_);
lean_ctor_set_uint8(v_reuseFailAlloc_2076_, sizeof(void*)*3 + 1, v_wantsRebuild_1984_);
v___x_1996_ = v_reuseFailAlloc_2076_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
lean_object* v___x_1997_; lean_object* v_a_1999_; lean_object* v_a_2000_; 
lean_ctor_set_uint8(v___x_1996_, sizeof(void*)*3, v___x_1991_);
v___x_1997_ = lean_apply_7(v_build_1957_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v___x_1996_, lean_box(0));
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_2004_; lean_object* v_a_2005_; lean_object* v_log_2006_; uint8_t v_action_2007_; uint8_t v_wantsRebuild_2008_; lean_object* v_trace_2009_; lean_object* v_buildTime_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v_a_2004_ = lean_ctor_get(v___x_1997_, 1);
lean_inc(v_a_2004_);
v_a_2005_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_2005_);
lean_dec_ref(v___x_1997_);
v_log_2006_ = lean_ctor_get(v_a_2004_, 0);
v_action_2007_ = lean_ctor_get_uint8(v_a_2004_, sizeof(void*)*3);
v_wantsRebuild_2008_ = lean_ctor_get_uint8(v_a_2004_, sizeof(void*)*3 + 1);
v_trace_2009_ = lean_ctor_get(v_a_2004_, 1);
v_buildTime_2010_ = lean_ctor_get(v_a_2004_, 2);
v___x_2011_ = lean_array_get_size(v_log_1982_);
lean_dec_ref(v_log_1982_);
v___x_2012_ = lean_array_get_size(v_log_2006_);
v___x_2013_ = l_Array_extract___redArg(v_log_2006_, v___x_2011_, v___x_2012_);
lean_inc(v_a_2005_);
v___x_2014_ = lean_apply_1(v_inst_1954_, v_a_2005_);
v___x_2015_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1955_, v___x_2014_, v___x_2013_);
v___x_2016_ = l_Lake_BuildMetadata_writeFile(v_traceFile_1956_, v___x_2015_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2057_; 
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2057_ == 0)
{
lean_object* v_unused_2058_; 
v_unused_2058_ = lean_ctor_get(v___x_2016_, 0);
lean_dec(v_unused_2058_);
v___x_2018_ = v___x_2016_;
v_isShared_2019_ = v_isSharedCheck_2057_;
goto v_resetjp_2017_;
}
else
{
lean_dec(v___x_2016_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2057_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2020_; 
v___x_2020_ = l_Lake_removeFileIfExists(v___x_1993_);
lean_dec_ref(v___x_1993_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2040_; 
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2040_ == 0)
{
lean_object* v_unused_2041_; 
v_unused_2041_ = lean_ctor_get(v___x_2020_, 0);
lean_dec(v_unused_2041_);
v___x_2022_ = v___x_2020_;
v_isShared_2023_ = v_isSharedCheck_2040_;
goto v_resetjp_2021_;
}
else
{
lean_dec(v___x_2020_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2040_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
lean_inc(v_a_2005_);
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 0, v_a_2005_);
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_a_2005_);
v___x_2025_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2027_; 
if (v_isShared_2019_ == 0)
{
lean_ctor_set_tag(v___x_2018_, 1);
lean_ctor_set(v___x_2018_, 0, v___x_2025_);
v___x_2027_ = v___x_2018_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2025_);
v___x_2027_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
lean_object* v___x_2028_; lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2036_; 
v___x_2028_ = l_Lake_buildAction___redArg___lam__0(v___x_1994_, v___x_2027_, v_a_2004_);
lean_dec_ref(v___x_2027_);
lean_dec(v___x_1994_);
v_a_2029_ = lean_ctor_get(v___x_2028_, 1);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2036_ == 0)
{
lean_object* v_unused_2037_; 
v_unused_2037_ = lean_ctor_get(v___x_2028_, 0);
lean_dec(v_unused_2037_);
v___x_2031_ = v___x_2028_;
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2028_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2034_; 
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 0, v_a_2005_);
v___x_2034_ = v___x_2031_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_a_2005_);
lean_ctor_set(v_reuseFailAlloc_2035_, 1, v_a_2029_);
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
}
}
else
{
lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2053_; 
lean_inc(v_buildTime_2010_);
lean_inc_ref(v_trace_2009_);
lean_inc_ref(v_log_2006_);
lean_del_object(v___x_2018_);
lean_dec(v_a_2005_);
v_isSharedCheck_2053_ = !lean_is_exclusive(v_a_2004_);
if (v_isSharedCheck_2053_ == 0)
{
lean_object* v_unused_2054_; lean_object* v_unused_2055_; lean_object* v_unused_2056_; 
v_unused_2054_ = lean_ctor_get(v_a_2004_, 2);
lean_dec(v_unused_2054_);
v_unused_2055_ = lean_ctor_get(v_a_2004_, 1);
lean_dec(v_unused_2055_);
v_unused_2056_ = lean_ctor_get(v_a_2004_, 0);
lean_dec(v_unused_2056_);
v___x_2043_ = v_a_2004_;
v_isShared_2044_ = v_isSharedCheck_2053_;
goto v_resetjp_2042_;
}
else
{
lean_dec(v_a_2004_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2053_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v_a_2045_; lean_object* v___x_2046_; uint8_t v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2051_; 
v_a_2045_ = lean_ctor_get(v___x_2020_, 0);
lean_inc(v_a_2045_);
lean_dec_ref(v___x_2020_);
v___x_2046_ = lean_io_error_to_string(v_a_2045_);
v___x_2047_ = 3;
v___x_2048_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2048_, 0, v___x_2046_);
lean_ctor_set_uint8(v___x_2048_, sizeof(void*)*1, v___x_2047_);
v___x_2049_ = lean_array_push(v_log_2006_, v___x_2048_);
if (v_isShared_2044_ == 0)
{
lean_ctor_set(v___x_2043_, 0, v___x_2049_);
v___x_2051_ = v___x_2043_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v___x_2049_);
lean_ctor_set(v_reuseFailAlloc_2052_, 1, v_trace_2009_);
lean_ctor_set(v_reuseFailAlloc_2052_, 2, v_buildTime_2010_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*3, v_action_2007_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*3 + 1, v_wantsRebuild_2008_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
v_a_1999_ = v___x_2012_;
v_a_2000_ = v___x_2051_;
goto v___jp_1998_;
}
}
}
}
}
else
{
lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2070_; 
lean_inc(v_buildTime_2010_);
lean_inc_ref(v_trace_2009_);
lean_inc_ref(v_log_2006_);
lean_dec(v_a_2005_);
lean_dec_ref(v___x_1993_);
v_isSharedCheck_2070_ = !lean_is_exclusive(v_a_2004_);
if (v_isSharedCheck_2070_ == 0)
{
lean_object* v_unused_2071_; lean_object* v_unused_2072_; lean_object* v_unused_2073_; 
v_unused_2071_ = lean_ctor_get(v_a_2004_, 2);
lean_dec(v_unused_2071_);
v_unused_2072_ = lean_ctor_get(v_a_2004_, 1);
lean_dec(v_unused_2072_);
v_unused_2073_ = lean_ctor_get(v_a_2004_, 0);
lean_dec(v_unused_2073_);
v___x_2060_ = v_a_2004_;
v_isShared_2061_ = v_isSharedCheck_2070_;
goto v_resetjp_2059_;
}
else
{
lean_dec(v_a_2004_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2070_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v_a_2062_; lean_object* v___x_2063_; uint8_t v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2068_; 
v_a_2062_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_a_2062_);
lean_dec_ref(v___x_2016_);
v___x_2063_ = lean_io_error_to_string(v_a_2062_);
v___x_2064_ = 3;
v___x_2065_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2065_, 0, v___x_2063_);
lean_ctor_set_uint8(v___x_2065_, sizeof(void*)*1, v___x_2064_);
v___x_2066_ = lean_array_push(v_log_2006_, v___x_2065_);
if (v_isShared_2061_ == 0)
{
lean_ctor_set(v___x_2060_, 0, v___x_2066_);
v___x_2068_ = v___x_2060_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v___x_2066_);
lean_ctor_set(v_reuseFailAlloc_2069_, 1, v_trace_2009_);
lean_ctor_set(v_reuseFailAlloc_2069_, 2, v_buildTime_2010_);
lean_ctor_set_uint8(v_reuseFailAlloc_2069_, sizeof(void*)*3, v_action_2007_);
lean_ctor_set_uint8(v_reuseFailAlloc_2069_, sizeof(void*)*3 + 1, v_wantsRebuild_2008_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
v_a_1999_ = v___x_2012_;
v_a_2000_ = v___x_2068_;
goto v___jp_1998_;
}
}
}
}
else
{
lean_object* v_a_2074_; lean_object* v_a_2075_; 
lean_dec_ref(v___x_1993_);
lean_dec_ref(v_log_1982_);
lean_dec_ref(v_traceFile_1956_);
lean_dec_ref(v_inst_1954_);
v_a_2074_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_2074_);
v_a_2075_ = lean_ctor_get(v___x_1997_, 1);
lean_inc(v_a_2075_);
lean_dec_ref(v___x_1997_);
v_a_1999_ = v_a_2074_;
v_a_2000_ = v_a_2075_;
goto v___jp_1998_;
}
v___jp_1998_:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v_a_2003_; 
v___x_2001_ = lean_box(0);
v___x_2002_ = l_Lake_buildAction___redArg___lam__0(v___x_1994_, v___x_2001_, v_a_2000_);
lean_dec(v___x_1994_);
v_a_2003_ = lean_ctor_get(v___x_2002_, 1);
lean_inc(v_a_2003_);
lean_dec_ref(v___x_2002_);
v_a_1967_ = v_a_1999_;
v_a_1968_ = v_a_2003_;
goto v___jp_1966_;
}
}
}
else
{
uint8_t v___x_2077_; 
lean_dec_ref(v_a_1963_);
lean_dec(v_a_1962_);
lean_dec(v_a_1961_);
lean_dec(v_a_1960_);
lean_dec_ref(v_a_1959_);
lean_dec_ref(v_build_1957_);
lean_dec_ref(v_inst_1954_);
v___x_2077_ = l_System_FilePath_pathExists(v_traceFile_1956_);
lean_dec_ref(v_traceFile_1956_);
if (v___x_2077_ == 0)
{
lean_dec_ref(v___x_1993_);
lean_del_object(v___x_1988_);
v_log_1971_ = v_log_1982_;
v_action_1972_ = v___x_1991_;
v_wantsRebuild_1973_ = v_noBuild_1990_;
v_trace_1974_ = v_trace_1985_;
v_buildTime_1975_ = v_buildTime_1986_;
goto v___jp_1970_;
}
else
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2078_ = lean_box(0);
v___x_2079_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___x_2080_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1955_, v___x_2078_, v___x_2079_);
v___x_2081_ = l_Lake_BuildMetadata_writeFile(v___x_1993_, v___x_2080_);
if (lean_obj_tag(v___x_2081_) == 0)
{
lean_dec_ref(v___x_2081_);
lean_del_object(v___x_1988_);
v_log_1971_ = v_log_1982_;
v_action_1972_ = v___x_1991_;
v_wantsRebuild_1973_ = v_noBuild_1990_;
v_trace_1974_ = v_trace_1985_;
v_buildTime_1975_ = v_buildTime_1986_;
goto v___jp_1970_;
}
else
{
lean_object* v_a_2082_; lean_object* v___x_2083_; uint8_t v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2089_; 
v_a_2082_ = lean_ctor_get(v___x_2081_, 0);
lean_inc(v_a_2082_);
lean_dec_ref(v___x_2081_);
v___x_2083_ = lean_io_error_to_string(v_a_2082_);
v___x_2084_ = 3;
v___x_2085_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2085_, 0, v___x_2083_);
lean_ctor_set_uint8(v___x_2085_, sizeof(void*)*1, v___x_2084_);
v___x_2086_ = lean_array_get_size(v_log_1982_);
v___x_2087_ = lean_array_push(v_log_1982_, v___x_2085_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 0, v___x_2087_);
v___x_2089_ = v___x_1988_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v_trace_1985_);
lean_ctor_set(v_reuseFailAlloc_2091_, 2, v_buildTime_1986_);
v___x_2089_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2090_; 
lean_ctor_set_uint8(v___x_2089_, sizeof(void*)*3, v___x_1991_);
lean_ctor_set_uint8(v___x_2089_, sizeof(void*)*3 + 1, v_noBuild_1990_);
v___x_2090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2086_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
return v___x_2090_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___boxed(lean_object* v_inst_2093_, lean_object* v_depTrace_2094_, lean_object* v_traceFile_2095_, lean_object* v_build_2096_, lean_object* v_action_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_){
_start:
{
uint8_t v_action_boxed_2105_; lean_object* v_res_2106_; 
v_action_boxed_2105_ = lean_unbox(v_action_2097_);
v_res_2106_ = l_Lake_buildAction___redArg(v_inst_2093_, v_depTrace_2094_, v_traceFile_2095_, v_build_2096_, v_action_boxed_2105_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
lean_dec_ref(v_depTrace_2094_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction(lean_object* v_00_u03b1_2107_, lean_object* v_inst_2108_, lean_object* v_depTrace_2109_, lean_object* v_traceFile_2110_, lean_object* v_build_2111_, uint8_t v_action_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_, lean_object* v_a_2118_){
_start:
{
lean_object* v___x_2120_; 
v___x_2120_ = l_Lake_buildAction___redArg(v_inst_2108_, v_depTrace_2109_, v_traceFile_2110_, v_build_2111_, v_action_2112_, v_a_2113_, v_a_2114_, v_a_2115_, v_a_2116_, v_a_2117_, v_a_2118_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___boxed(lean_object* v_00_u03b1_2121_, lean_object* v_inst_2122_, lean_object* v_depTrace_2123_, lean_object* v_traceFile_2124_, lean_object* v_build_2125_, lean_object* v_action_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_){
_start:
{
uint8_t v_action_boxed_2134_; lean_object* v_res_2135_; 
v_action_boxed_2134_ = lean_unbox(v_action_2126_);
v_res_2135_ = l_Lake_buildAction(v_00_u03b1_2121_, v_inst_2122_, v_depTrace_2123_, v_traceFile_2124_, v_build_2125_, v_action_boxed_2134_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_);
lean_dec_ref(v_depTrace_2123_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg(lean_object* v_inst_2136_, lean_object* v_inst_2137_, lean_object* v_info_2138_, lean_object* v_depTrace_2139_, lean_object* v_traceFile_2140_, lean_object* v_build_2141_, uint8_t v_action_2142_, lean_object* v_oldTrace_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_){
_start:
{
lean_object* v_log_2151_; uint8_t v_action_2152_; uint8_t v_wantsRebuild_2153_; lean_object* v_trace_2154_; lean_object* v_buildTime_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2223_; 
v_log_2151_ = lean_ctor_get(v_a_2149_, 0);
v_action_2152_ = lean_ctor_get_uint8(v_a_2149_, sizeof(void*)*3);
v_wantsRebuild_2153_ = lean_ctor_get_uint8(v_a_2149_, sizeof(void*)*3 + 1);
v_trace_2154_ = lean_ctor_get(v_a_2149_, 1);
v_buildTime_2155_ = lean_ctor_get(v_a_2149_, 2);
v_isSharedCheck_2223_ = !lean_is_exclusive(v_a_2149_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2157_ = v_a_2149_;
v_isShared_2158_ = v_isSharedCheck_2223_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_buildTime_2155_);
lean_inc(v_trace_2154_);
lean_inc(v_log_2151_);
lean_dec(v_a_2149_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2223_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2159_; 
lean_inc_ref(v_traceFile_2140_);
v___x_2159_ = l_Lake_readTraceFile(v_traceFile_2140_, v_log_2151_);
if (lean_obj_tag(v___x_2159_) == 0)
{
lean_object* v_a_2160_; lean_object* v_a_2161_; lean_object* v___x_2163_; 
v_a_2160_ = lean_ctor_get(v___x_2159_, 0);
lean_inc(v_a_2160_);
v_a_2161_ = lean_ctor_get(v___x_2159_, 1);
lean_inc(v_a_2161_);
lean_dec_ref(v___x_2159_);
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 0, v_a_2161_);
v___x_2163_ = v___x_2157_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_a_2161_);
lean_ctor_set(v_reuseFailAlloc_2210_, 1, v_trace_2154_);
lean_ctor_set(v_reuseFailAlloc_2210_, 2, v_buildTime_2155_);
lean_ctor_set_uint8(v_reuseFailAlloc_2210_, sizeof(void*)*3, v_action_2152_);
lean_ctor_set_uint8(v_reuseFailAlloc_2210_, sizeof(void*)*3 + 1, v_wantsRebuild_2153_);
v___x_2163_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
lean_object* v___x_2164_; 
v___x_2164_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2136_, v_inst_2137_, v_info_2138_, v_depTrace_2139_, v_a_2160_, v_oldTrace_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v___x_2163_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v_a_2165_; lean_object* v_a_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2200_; 
v_a_2165_ = lean_ctor_get(v___x_2164_, 0);
v_a_2166_ = lean_ctor_get(v___x_2164_, 1);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2168_ = v___x_2164_;
v_isShared_2169_ = v_isSharedCheck_2200_;
goto v_resetjp_2167_;
}
else
{
lean_inc(v_a_2166_);
lean_inc(v_a_2165_);
lean_dec(v___x_2164_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2200_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
uint8_t v___x_2170_; uint8_t v___x_2171_; uint8_t v___x_2172_; 
v___x_2170_ = 0;
v___x_2171_ = lean_unbox(v_a_2165_);
lean_dec(v_a_2165_);
v___x_2172_ = l_Lake_instDecidableEqOutputStatus(v___x_2171_, v___x_2170_);
if (v___x_2172_ == 0)
{
uint8_t v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2176_; 
lean_dec_ref(v_a_2148_);
lean_dec(v_a_2147_);
lean_dec(v_a_2146_);
lean_dec(v_a_2145_);
lean_dec_ref(v_a_2144_);
lean_dec_ref(v_build_2141_);
lean_dec_ref(v_traceFile_2140_);
v___x_2173_ = 1;
v___x_2174_ = lean_box(v___x_2173_);
if (v_isShared_2169_ == 0)
{
lean_ctor_set(v___x_2168_, 0, v___x_2174_);
v___x_2176_ = v___x_2168_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v___x_2174_);
lean_ctor_set(v_reuseFailAlloc_2177_, 1, v_a_2166_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
else
{
lean_object* v___f_2178_; lean_object* v___x_2179_; 
lean_del_object(v___x_2168_);
v___f_2178_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
v___x_2179_ = l_Lake_buildAction___redArg(v___f_2178_, v_depTrace_2139_, v_traceFile_2140_, v_build_2141_, v_action_2142_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2166_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2189_; 
v_a_2180_ = lean_ctor_get(v___x_2179_, 1);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2189_ == 0)
{
lean_object* v_unused_2190_; 
v_unused_2190_ = lean_ctor_get(v___x_2179_, 0);
lean_dec(v_unused_2190_);
v___x_2182_ = v___x_2179_;
v_isShared_2183_ = v_isSharedCheck_2189_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2179_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2189_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
uint8_t v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2187_; 
v___x_2184_ = 0;
v___x_2185_ = lean_box(v___x_2184_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 0, v___x_2185_);
v___x_2187_ = v___x_2182_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v___x_2185_);
lean_ctor_set(v_reuseFailAlloc_2188_, 1, v_a_2180_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
else
{
lean_object* v_a_2191_; lean_object* v_a_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2199_; 
v_a_2191_ = lean_ctor_get(v___x_2179_, 0);
v_a_2192_ = lean_ctor_get(v___x_2179_, 1);
v_isSharedCheck_2199_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2199_ == 0)
{
v___x_2194_ = v___x_2179_;
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_a_2192_);
lean_inc(v_a_2191_);
lean_dec(v___x_2179_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2197_; 
if (v_isShared_2195_ == 0)
{
v___x_2197_ = v___x_2194_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_a_2191_);
lean_ctor_set(v_reuseFailAlloc_2198_, 1, v_a_2192_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
}
}
}
}
else
{
lean_object* v_a_2201_; lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2209_; 
lean_dec_ref(v_a_2148_);
lean_dec(v_a_2147_);
lean_dec(v_a_2146_);
lean_dec(v_a_2145_);
lean_dec_ref(v_a_2144_);
lean_dec_ref(v_build_2141_);
lean_dec_ref(v_traceFile_2140_);
v_a_2201_ = lean_ctor_get(v___x_2164_, 0);
v_a_2202_ = lean_ctor_get(v___x_2164_, 1);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2204_ = v___x_2164_;
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_inc(v_a_2201_);
lean_dec(v___x_2164_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2201_);
lean_ctor_set(v_reuseFailAlloc_2208_, 1, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
}
else
{
lean_object* v_a_2211_; lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2222_; 
lean_dec_ref(v_a_2148_);
lean_dec(v_a_2147_);
lean_dec(v_a_2146_);
lean_dec(v_a_2145_);
lean_dec_ref(v_a_2144_);
lean_dec_ref(v_build_2141_);
lean_dec_ref(v_traceFile_2140_);
lean_dec(v_info_2138_);
lean_dec_ref(v_inst_2137_);
lean_dec_ref(v_inst_2136_);
v_a_2211_ = lean_ctor_get(v___x_2159_, 0);
v_a_2212_ = lean_ctor_get(v___x_2159_, 1);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2159_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2214_ = v___x_2159_;
v_isShared_2215_ = v_isSharedCheck_2222_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_inc(v_a_2211_);
lean_dec(v___x_2159_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2222_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 0, v_a_2212_);
v___x_2217_ = v___x_2157_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_a_2212_);
lean_ctor_set(v_reuseFailAlloc_2221_, 1, v_trace_2154_);
lean_ctor_set(v_reuseFailAlloc_2221_, 2, v_buildTime_2155_);
lean_ctor_set_uint8(v_reuseFailAlloc_2221_, sizeof(void*)*3, v_action_2152_);
lean_ctor_set_uint8(v_reuseFailAlloc_2221_, sizeof(void*)*3 + 1, v_wantsRebuild_2153_);
v___x_2217_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
lean_object* v___x_2219_; 
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 1, v___x_2217_);
v___x_2219_ = v___x_2214_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2211_);
lean_ctor_set(v_reuseFailAlloc_2220_, 1, v___x_2217_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg___boxed(lean_object* v_inst_2224_, lean_object* v_inst_2225_, lean_object* v_info_2226_, lean_object* v_depTrace_2227_, lean_object* v_traceFile_2228_, lean_object* v_build_2229_, lean_object* v_action_2230_, lean_object* v_oldTrace_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_){
_start:
{
uint8_t v_action_boxed_2239_; lean_object* v_res_2240_; 
v_action_boxed_2239_ = lean_unbox(v_action_2230_);
v_res_2240_ = l_Lake_buildUnlessUpToDate_x3f___redArg(v_inst_2224_, v_inst_2225_, v_info_2226_, v_depTrace_2227_, v_traceFile_2228_, v_build_2229_, v_action_boxed_2239_, v_oldTrace_2231_, v_a_2232_, v_a_2233_, v_a_2234_, v_a_2235_, v_a_2236_, v_a_2237_);
lean_dec_ref(v_oldTrace_2231_);
lean_dec_ref(v_depTrace_2227_);
return v_res_2240_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f(lean_object* v_00_u03b9_2241_, lean_object* v_inst_2242_, lean_object* v_inst_2243_, lean_object* v_info_2244_, lean_object* v_depTrace_2245_, lean_object* v_traceFile_2246_, lean_object* v_build_2247_, uint8_t v_action_2248_, lean_object* v_oldTrace_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_){
_start:
{
lean_object* v_log_2257_; uint8_t v_action_2258_; uint8_t v_wantsRebuild_2259_; lean_object* v_trace_2260_; lean_object* v_buildTime_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2329_; 
v_log_2257_ = lean_ctor_get(v_a_2255_, 0);
v_action_2258_ = lean_ctor_get_uint8(v_a_2255_, sizeof(void*)*3);
v_wantsRebuild_2259_ = lean_ctor_get_uint8(v_a_2255_, sizeof(void*)*3 + 1);
v_trace_2260_ = lean_ctor_get(v_a_2255_, 1);
v_buildTime_2261_ = lean_ctor_get(v_a_2255_, 2);
v_isSharedCheck_2329_ = !lean_is_exclusive(v_a_2255_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2263_ = v_a_2255_;
v_isShared_2264_ = v_isSharedCheck_2329_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_buildTime_2261_);
lean_inc(v_trace_2260_);
lean_inc(v_log_2257_);
lean_dec(v_a_2255_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2329_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2265_; 
lean_inc_ref(v_traceFile_2246_);
v___x_2265_ = l_Lake_readTraceFile(v_traceFile_2246_, v_log_2257_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v_a_2266_; lean_object* v_a_2267_; lean_object* v___x_2269_; 
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2266_);
v_a_2267_ = lean_ctor_get(v___x_2265_, 1);
lean_inc(v_a_2267_);
lean_dec_ref(v___x_2265_);
if (v_isShared_2264_ == 0)
{
lean_ctor_set(v___x_2263_, 0, v_a_2267_);
v___x_2269_ = v___x_2263_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_a_2267_);
lean_ctor_set(v_reuseFailAlloc_2316_, 1, v_trace_2260_);
lean_ctor_set(v_reuseFailAlloc_2316_, 2, v_buildTime_2261_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*3, v_action_2258_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*3 + 1, v_wantsRebuild_2259_);
v___x_2269_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
lean_object* v___x_2270_; 
v___x_2270_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2242_, v_inst_2243_, v_info_2244_, v_depTrace_2245_, v_a_2266_, v_oldTrace_2249_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_, v_a_2254_, v___x_2269_);
if (lean_obj_tag(v___x_2270_) == 0)
{
lean_object* v_a_2271_; lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2306_; 
v_a_2271_ = lean_ctor_get(v___x_2270_, 0);
v_a_2272_ = lean_ctor_get(v___x_2270_, 1);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2270_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2274_ = v___x_2270_;
v_isShared_2275_ = v_isSharedCheck_2306_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_inc(v_a_2271_);
lean_dec(v___x_2270_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2306_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
uint8_t v___x_2276_; uint8_t v___x_2277_; uint8_t v___x_2278_; 
v___x_2276_ = 0;
v___x_2277_ = lean_unbox(v_a_2271_);
lean_dec(v_a_2271_);
v___x_2278_ = l_Lake_instDecidableEqOutputStatus(v___x_2277_, v___x_2276_);
if (v___x_2278_ == 0)
{
uint8_t v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2282_; 
lean_dec_ref(v_a_2254_);
lean_dec(v_a_2253_);
lean_dec(v_a_2252_);
lean_dec(v_a_2251_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v_build_2247_);
lean_dec_ref(v_traceFile_2246_);
v___x_2279_ = 1;
v___x_2280_ = lean_box(v___x_2279_);
if (v_isShared_2275_ == 0)
{
lean_ctor_set(v___x_2274_, 0, v___x_2280_);
v___x_2282_ = v___x_2274_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v___x_2280_);
lean_ctor_set(v_reuseFailAlloc_2283_, 1, v_a_2272_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
else
{
lean_object* v___f_2284_; lean_object* v___x_2285_; 
lean_del_object(v___x_2274_);
v___f_2284_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
v___x_2285_ = l_Lake_buildAction___redArg(v___f_2284_, v_depTrace_2245_, v_traceFile_2246_, v_build_2247_, v_action_2248_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_, v_a_2254_, v_a_2272_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2295_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 1);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2295_ == 0)
{
lean_object* v_unused_2296_; 
v_unused_2296_ = lean_ctor_get(v___x_2285_, 0);
lean_dec(v_unused_2296_);
v___x_2288_ = v___x_2285_;
v_isShared_2289_ = v_isSharedCheck_2295_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2285_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2295_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
uint8_t v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2293_; 
v___x_2290_ = 0;
v___x_2291_ = lean_box(v___x_2290_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 0, v___x_2291_);
v___x_2293_ = v___x_2288_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v___x_2291_);
lean_ctor_set(v_reuseFailAlloc_2294_, 1, v_a_2286_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
else
{
lean_object* v_a_2297_; lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
v_a_2297_ = lean_ctor_get(v___x_2285_, 0);
v_a_2298_ = lean_ctor_get(v___x_2285_, 1);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2285_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_inc(v_a_2297_);
lean_dec(v___x_2285_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_a_2297_);
lean_ctor_set(v_reuseFailAlloc_2304_, 1, v_a_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
}
}
else
{
lean_object* v_a_2307_; lean_object* v_a_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2315_; 
lean_dec_ref(v_a_2254_);
lean_dec(v_a_2253_);
lean_dec(v_a_2252_);
lean_dec(v_a_2251_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v_build_2247_);
lean_dec_ref(v_traceFile_2246_);
v_a_2307_ = lean_ctor_get(v___x_2270_, 0);
v_a_2308_ = lean_ctor_get(v___x_2270_, 1);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2270_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2310_ = v___x_2270_;
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_a_2308_);
lean_inc(v_a_2307_);
lean_dec(v___x_2270_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2313_; 
if (v_isShared_2311_ == 0)
{
v___x_2313_ = v___x_2310_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_a_2307_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v_a_2308_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
}
}
else
{
lean_object* v_a_2317_; lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2328_; 
lean_dec_ref(v_a_2254_);
lean_dec(v_a_2253_);
lean_dec(v_a_2252_);
lean_dec(v_a_2251_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v_build_2247_);
lean_dec_ref(v_traceFile_2246_);
lean_dec(v_info_2244_);
lean_dec_ref(v_inst_2243_);
lean_dec_ref(v_inst_2242_);
v_a_2317_ = lean_ctor_get(v___x_2265_, 0);
v_a_2318_ = lean_ctor_get(v___x_2265_, 1);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2320_ = v___x_2265_;
v_isShared_2321_ = v_isSharedCheck_2328_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_inc(v_a_2317_);
lean_dec(v___x_2265_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2328_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2323_; 
if (v_isShared_2264_ == 0)
{
lean_ctor_set(v___x_2263_, 0, v_a_2318_);
v___x_2323_ = v___x_2263_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_a_2318_);
lean_ctor_set(v_reuseFailAlloc_2327_, 1, v_trace_2260_);
lean_ctor_set(v_reuseFailAlloc_2327_, 2, v_buildTime_2261_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, sizeof(void*)*3, v_action_2258_);
lean_ctor_set_uint8(v_reuseFailAlloc_2327_, sizeof(void*)*3 + 1, v_wantsRebuild_2259_);
v___x_2323_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
lean_object* v___x_2325_; 
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 1, v___x_2323_);
v___x_2325_ = v___x_2320_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2317_);
lean_ctor_set(v_reuseFailAlloc_2326_, 1, v___x_2323_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___boxed(lean_object* v_00_u03b9_2330_, lean_object* v_inst_2331_, lean_object* v_inst_2332_, lean_object* v_info_2333_, lean_object* v_depTrace_2334_, lean_object* v_traceFile_2335_, lean_object* v_build_2336_, lean_object* v_action_2337_, lean_object* v_oldTrace_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_){
_start:
{
uint8_t v_action_boxed_2346_; lean_object* v_res_2347_; 
v_action_boxed_2346_ = lean_unbox(v_action_2337_);
v_res_2347_ = l_Lake_buildUnlessUpToDate_x3f(v_00_u03b9_2330_, v_inst_2331_, v_inst_2332_, v_info_2333_, v_depTrace_2334_, v_traceFile_2335_, v_build_2336_, v_action_boxed_2346_, v_oldTrace_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
lean_dec_ref(v_oldTrace_2338_);
lean_dec_ref(v_depTrace_2334_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg(lean_object* v_inst_2348_, lean_object* v_inst_2349_, lean_object* v_info_2350_, lean_object* v_depTrace_2351_, lean_object* v_traceFile_2352_, lean_object* v_build_2353_, uint8_t v_action_2354_, lean_object* v_oldTrace_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_){
_start:
{
lean_object* v_a_2364_; lean_object* v_a_2365_; lean_object* v_log_2367_; uint8_t v_action_2368_; uint8_t v_wantsRebuild_2369_; lean_object* v_trace_2370_; lean_object* v_buildTime_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2409_; 
v_log_2367_ = lean_ctor_get(v_a_2361_, 0);
v_action_2368_ = lean_ctor_get_uint8(v_a_2361_, sizeof(void*)*3);
v_wantsRebuild_2369_ = lean_ctor_get_uint8(v_a_2361_, sizeof(void*)*3 + 1);
v_trace_2370_ = lean_ctor_get(v_a_2361_, 1);
v_buildTime_2371_ = lean_ctor_get(v_a_2361_, 2);
v_isSharedCheck_2409_ = !lean_is_exclusive(v_a_2361_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2373_ = v_a_2361_;
v_isShared_2374_ = v_isSharedCheck_2409_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_buildTime_2371_);
lean_inc(v_trace_2370_);
lean_inc(v_log_2367_);
lean_dec(v_a_2361_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2409_;
goto v_resetjp_2372_;
}
v___jp_2363_:
{
lean_object* v___x_2366_; 
v___x_2366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2366_, 0, v_a_2364_);
lean_ctor_set(v___x_2366_, 1, v_a_2365_);
return v___x_2366_;
}
v_resetjp_2372_:
{
lean_object* v___x_2375_; 
lean_inc_ref(v_traceFile_2352_);
v___x_2375_ = l_Lake_readTraceFile(v_traceFile_2352_, v_log_2367_);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; lean_object* v_a_2377_; lean_object* v___x_2379_; 
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
lean_inc(v_a_2376_);
v_a_2377_ = lean_ctor_get(v___x_2375_, 1);
lean_inc(v_a_2377_);
lean_dec_ref(v___x_2375_);
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 0, v_a_2377_);
v___x_2379_ = v___x_2373_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v_a_2377_);
lean_ctor_set(v_reuseFailAlloc_2403_, 1, v_trace_2370_);
lean_ctor_set(v_reuseFailAlloc_2403_, 2, v_buildTime_2371_);
lean_ctor_set_uint8(v_reuseFailAlloc_2403_, sizeof(void*)*3, v_action_2368_);
lean_ctor_set_uint8(v_reuseFailAlloc_2403_, sizeof(void*)*3 + 1, v_wantsRebuild_2369_);
v___x_2379_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
lean_object* v___x_2380_; 
v___x_2380_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2348_, v_inst_2349_, v_info_2350_, v_depTrace_2351_, v_a_2376_, v_oldTrace_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v_a_2360_, v___x_2379_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2400_; 
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
v_a_2382_ = lean_ctor_get(v___x_2380_, 1);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2384_ = v___x_2380_;
v_isShared_2385_ = v_isSharedCheck_2400_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_inc(v_a_2381_);
lean_dec(v___x_2380_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2400_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2386_; lean_object* v_a_2388_; uint8_t v___x_2392_; uint8_t v___x_2393_; uint8_t v___x_2394_; 
v___x_2386_ = lean_box(0);
v___x_2392_ = 0;
v___x_2393_ = lean_unbox(v_a_2381_);
lean_dec(v_a_2381_);
v___x_2394_ = l_Lake_instDecidableEqOutputStatus(v___x_2393_, v___x_2392_);
if (v___x_2394_ == 0)
{
lean_dec_ref(v_a_2360_);
lean_dec(v_a_2359_);
lean_dec(v_a_2358_);
lean_dec(v_a_2357_);
lean_dec_ref(v_a_2356_);
lean_dec_ref(v_build_2353_);
lean_dec_ref(v_traceFile_2352_);
v_a_2388_ = v_a_2382_;
goto v___jp_2387_;
}
else
{
lean_object* v___f_2395_; lean_object* v___x_2396_; 
v___f_2395_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
v___x_2396_ = l_Lake_buildAction___redArg(v___f_2395_, v_depTrace_2351_, v_traceFile_2352_, v_build_2353_, v_action_2354_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v_a_2360_, v_a_2382_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2397_; 
v_a_2397_ = lean_ctor_get(v___x_2396_, 1);
lean_inc(v_a_2397_);
lean_dec_ref(v___x_2396_);
v_a_2388_ = v_a_2397_;
goto v___jp_2387_;
}
else
{
lean_object* v_a_2398_; lean_object* v_a_2399_; 
lean_del_object(v___x_2384_);
v_a_2398_ = lean_ctor_get(v___x_2396_, 0);
lean_inc(v_a_2398_);
v_a_2399_ = lean_ctor_get(v___x_2396_, 1);
lean_inc(v_a_2399_);
lean_dec_ref(v___x_2396_);
v_a_2364_ = v_a_2398_;
v_a_2365_ = v_a_2399_;
goto v___jp_2363_;
}
}
v___jp_2387_:
{
lean_object* v___x_2390_; 
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 1, v_a_2388_);
lean_ctor_set(v___x_2384_, 0, v___x_2386_);
v___x_2390_ = v___x_2384_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v___x_2386_);
lean_ctor_set(v_reuseFailAlloc_2391_, 1, v_a_2388_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
}
else
{
lean_object* v_a_2401_; lean_object* v_a_2402_; 
lean_dec_ref(v_a_2360_);
lean_dec(v_a_2359_);
lean_dec(v_a_2358_);
lean_dec(v_a_2357_);
lean_dec_ref(v_a_2356_);
lean_dec_ref(v_build_2353_);
lean_dec_ref(v_traceFile_2352_);
v_a_2401_ = lean_ctor_get(v___x_2380_, 0);
lean_inc(v_a_2401_);
v_a_2402_ = lean_ctor_get(v___x_2380_, 1);
lean_inc(v_a_2402_);
lean_dec_ref(v___x_2380_);
v_a_2364_ = v_a_2401_;
v_a_2365_ = v_a_2402_;
goto v___jp_2363_;
}
}
}
else
{
lean_object* v_a_2404_; lean_object* v_a_2405_; lean_object* v___x_2407_; 
lean_dec_ref(v_a_2360_);
lean_dec(v_a_2359_);
lean_dec(v_a_2358_);
lean_dec(v_a_2357_);
lean_dec_ref(v_a_2356_);
lean_dec_ref(v_build_2353_);
lean_dec_ref(v_traceFile_2352_);
lean_dec(v_info_2350_);
lean_dec_ref(v_inst_2349_);
lean_dec_ref(v_inst_2348_);
v_a_2404_ = lean_ctor_get(v___x_2375_, 0);
lean_inc(v_a_2404_);
v_a_2405_ = lean_ctor_get(v___x_2375_, 1);
lean_inc(v_a_2405_);
lean_dec_ref(v___x_2375_);
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 0, v_a_2405_);
v___x_2407_ = v___x_2373_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_a_2405_);
lean_ctor_set(v_reuseFailAlloc_2408_, 1, v_trace_2370_);
lean_ctor_set(v_reuseFailAlloc_2408_, 2, v_buildTime_2371_);
lean_ctor_set_uint8(v_reuseFailAlloc_2408_, sizeof(void*)*3, v_action_2368_);
lean_ctor_set_uint8(v_reuseFailAlloc_2408_, sizeof(void*)*3 + 1, v_wantsRebuild_2369_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
v_a_2364_ = v_a_2404_;
v_a_2365_ = v___x_2407_;
goto v___jp_2363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg___boxed(lean_object* v_inst_2410_, lean_object* v_inst_2411_, lean_object* v_info_2412_, lean_object* v_depTrace_2413_, lean_object* v_traceFile_2414_, lean_object* v_build_2415_, lean_object* v_action_2416_, lean_object* v_oldTrace_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_){
_start:
{
uint8_t v_action_boxed_2425_; lean_object* v_res_2426_; 
v_action_boxed_2425_ = lean_unbox(v_action_2416_);
v_res_2426_ = l_Lake_buildUnlessUpToDate___redArg(v_inst_2410_, v_inst_2411_, v_info_2412_, v_depTrace_2413_, v_traceFile_2414_, v_build_2415_, v_action_boxed_2425_, v_oldTrace_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_, v_a_2423_);
lean_dec_ref(v_oldTrace_2417_);
lean_dec_ref(v_depTrace_2413_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate(lean_object* v_00_u03b9_2427_, lean_object* v_inst_2428_, lean_object* v_inst_2429_, lean_object* v_info_2430_, lean_object* v_depTrace_2431_, lean_object* v_traceFile_2432_, lean_object* v_build_2433_, uint8_t v_action_2434_, lean_object* v_oldTrace_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_){
_start:
{
lean_object* v_a_2444_; lean_object* v_a_2445_; lean_object* v_log_2447_; uint8_t v_action_2448_; uint8_t v_wantsRebuild_2449_; lean_object* v_trace_2450_; lean_object* v_buildTime_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2489_; 
v_log_2447_ = lean_ctor_get(v_a_2441_, 0);
v_action_2448_ = lean_ctor_get_uint8(v_a_2441_, sizeof(void*)*3);
v_wantsRebuild_2449_ = lean_ctor_get_uint8(v_a_2441_, sizeof(void*)*3 + 1);
v_trace_2450_ = lean_ctor_get(v_a_2441_, 1);
v_buildTime_2451_ = lean_ctor_get(v_a_2441_, 2);
v_isSharedCheck_2489_ = !lean_is_exclusive(v_a_2441_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2453_ = v_a_2441_;
v_isShared_2454_ = v_isSharedCheck_2489_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_buildTime_2451_);
lean_inc(v_trace_2450_);
lean_inc(v_log_2447_);
lean_dec(v_a_2441_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2489_;
goto v_resetjp_2452_;
}
v___jp_2443_:
{
lean_object* v___x_2446_; 
v___x_2446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2446_, 0, v_a_2444_);
lean_ctor_set(v___x_2446_, 1, v_a_2445_);
return v___x_2446_;
}
v_resetjp_2452_:
{
lean_object* v___x_2455_; 
lean_inc_ref(v_traceFile_2432_);
v___x_2455_ = l_Lake_readTraceFile(v_traceFile_2432_, v_log_2447_);
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; lean_object* v_a_2457_; lean_object* v___x_2459_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2456_);
v_a_2457_ = lean_ctor_get(v___x_2455_, 1);
lean_inc(v_a_2457_);
lean_dec_ref(v___x_2455_);
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v_a_2457_);
v___x_2459_ = v___x_2453_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v_a_2457_);
lean_ctor_set(v_reuseFailAlloc_2483_, 1, v_trace_2450_);
lean_ctor_set(v_reuseFailAlloc_2483_, 2, v_buildTime_2451_);
lean_ctor_set_uint8(v_reuseFailAlloc_2483_, sizeof(void*)*3, v_action_2448_);
lean_ctor_set_uint8(v_reuseFailAlloc_2483_, sizeof(void*)*3 + 1, v_wantsRebuild_2449_);
v___x_2459_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
lean_object* v___x_2460_; 
v___x_2460_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2428_, v_inst_2429_, v_info_2430_, v_depTrace_2431_, v_a_2456_, v_oldTrace_2435_, v_a_2436_, v_a_2437_, v_a_2438_, v_a_2439_, v_a_2440_, v___x_2459_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2480_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
v_a_2462_ = lean_ctor_get(v___x_2460_, 1);
v_isSharedCheck_2480_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2480_ == 0)
{
v___x_2464_ = v___x_2460_;
v_isShared_2465_ = v_isSharedCheck_2480_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_inc(v_a_2461_);
lean_dec(v___x_2460_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2480_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2466_; lean_object* v_a_2468_; uint8_t v___x_2472_; uint8_t v___x_2473_; uint8_t v___x_2474_; 
v___x_2466_ = lean_box(0);
v___x_2472_ = 0;
v___x_2473_ = lean_unbox(v_a_2461_);
lean_dec(v_a_2461_);
v___x_2474_ = l_Lake_instDecidableEqOutputStatus(v___x_2473_, v___x_2472_);
if (v___x_2474_ == 0)
{
lean_dec_ref(v_a_2440_);
lean_dec(v_a_2439_);
lean_dec(v_a_2438_);
lean_dec(v_a_2437_);
lean_dec_ref(v_a_2436_);
lean_dec_ref(v_build_2433_);
lean_dec_ref(v_traceFile_2432_);
v_a_2468_ = v_a_2462_;
goto v___jp_2467_;
}
else
{
lean_object* v___f_2475_; lean_object* v___x_2476_; 
v___f_2475_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
v___x_2476_ = l_Lake_buildAction___redArg(v___f_2475_, v_depTrace_2431_, v_traceFile_2432_, v_build_2433_, v_action_2434_, v_a_2436_, v_a_2437_, v_a_2438_, v_a_2439_, v_a_2440_, v_a_2462_);
if (lean_obj_tag(v___x_2476_) == 0)
{
lean_object* v_a_2477_; 
v_a_2477_ = lean_ctor_get(v___x_2476_, 1);
lean_inc(v_a_2477_);
lean_dec_ref(v___x_2476_);
v_a_2468_ = v_a_2477_;
goto v___jp_2467_;
}
else
{
lean_object* v_a_2478_; lean_object* v_a_2479_; 
lean_del_object(v___x_2464_);
v_a_2478_ = lean_ctor_get(v___x_2476_, 0);
lean_inc(v_a_2478_);
v_a_2479_ = lean_ctor_get(v___x_2476_, 1);
lean_inc(v_a_2479_);
lean_dec_ref(v___x_2476_);
v_a_2444_ = v_a_2478_;
v_a_2445_ = v_a_2479_;
goto v___jp_2443_;
}
}
v___jp_2467_:
{
lean_object* v___x_2470_; 
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 1, v_a_2468_);
lean_ctor_set(v___x_2464_, 0, v___x_2466_);
v___x_2470_ = v___x_2464_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v___x_2466_);
lean_ctor_set(v_reuseFailAlloc_2471_, 1, v_a_2468_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
}
else
{
lean_object* v_a_2481_; lean_object* v_a_2482_; 
lean_dec_ref(v_a_2440_);
lean_dec(v_a_2439_);
lean_dec(v_a_2438_);
lean_dec(v_a_2437_);
lean_dec_ref(v_a_2436_);
lean_dec_ref(v_build_2433_);
lean_dec_ref(v_traceFile_2432_);
v_a_2481_ = lean_ctor_get(v___x_2460_, 0);
lean_inc(v_a_2481_);
v_a_2482_ = lean_ctor_get(v___x_2460_, 1);
lean_inc(v_a_2482_);
lean_dec_ref(v___x_2460_);
v_a_2444_ = v_a_2481_;
v_a_2445_ = v_a_2482_;
goto v___jp_2443_;
}
}
}
else
{
lean_object* v_a_2484_; lean_object* v_a_2485_; lean_object* v___x_2487_; 
lean_dec_ref(v_a_2440_);
lean_dec(v_a_2439_);
lean_dec(v_a_2438_);
lean_dec(v_a_2437_);
lean_dec_ref(v_a_2436_);
lean_dec_ref(v_build_2433_);
lean_dec_ref(v_traceFile_2432_);
lean_dec(v_info_2430_);
lean_dec_ref(v_inst_2429_);
lean_dec_ref(v_inst_2428_);
v_a_2484_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2484_);
v_a_2485_ = lean_ctor_get(v___x_2455_, 1);
lean_inc(v_a_2485_);
lean_dec_ref(v___x_2455_);
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v_a_2485_);
v___x_2487_ = v___x_2453_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_a_2485_);
lean_ctor_set(v_reuseFailAlloc_2488_, 1, v_trace_2450_);
lean_ctor_set(v_reuseFailAlloc_2488_, 2, v_buildTime_2451_);
lean_ctor_set_uint8(v_reuseFailAlloc_2488_, sizeof(void*)*3, v_action_2448_);
lean_ctor_set_uint8(v_reuseFailAlloc_2488_, sizeof(void*)*3 + 1, v_wantsRebuild_2449_);
v___x_2487_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
v_a_2444_ = v_a_2484_;
v_a_2445_ = v___x_2487_;
goto v___jp_2443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___boxed(lean_object* v_00_u03b9_2490_, lean_object* v_inst_2491_, lean_object* v_inst_2492_, lean_object* v_info_2493_, lean_object* v_depTrace_2494_, lean_object* v_traceFile_2495_, lean_object* v_build_2496_, lean_object* v_action_2497_, lean_object* v_oldTrace_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_){
_start:
{
uint8_t v_action_boxed_2506_; lean_object* v_res_2507_; 
v_action_boxed_2506_ = lean_unbox(v_action_2497_);
v_res_2507_ = l_Lake_buildUnlessUpToDate(v_00_u03b9_2490_, v_inst_2491_, v_inst_2492_, v_info_2493_, v_depTrace_2494_, v_traceFile_2495_, v_build_2496_, v_action_boxed_2506_, v_oldTrace_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_, v_a_2504_);
lean_dec_ref(v_oldTrace_2498_);
lean_dec_ref(v_depTrace_2494_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFileHash(lean_object* v_file_2509_, uint64_t v_hash_2510_){
_start:
{
lean_object* v___x_2512_; lean_object* v_hashFile_2513_; lean_object* v___x_2514_; 
v___x_2512_ = ((lean_object*)(l_Lake_writeFileHash___closed__0));
v_hashFile_2513_ = lean_string_append(v_file_2509_, v___x_2512_);
lean_inc_ref(v_hashFile_2513_);
v___x_2514_ = l_Lake_createParentDirs(v_hashFile_2513_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
lean_dec_ref(v___x_2514_);
v___x_2515_ = l_Lake_Hash_hex(v_hash_2510_);
v___x_2516_ = l_IO_FS_writeFile(v_hashFile_2513_, v___x_2515_);
lean_dec_ref(v___x_2515_);
lean_dec_ref(v_hashFile_2513_);
return v___x_2516_;
}
else
{
lean_dec_ref(v_hashFile_2513_);
return v___x_2514_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_writeFileHash___boxed(lean_object* v_file_2517_, lean_object* v_hash_2518_, lean_object* v_a_2519_){
_start:
{
uint64_t v_hash_boxed_2520_; lean_object* v_res_2521_; 
v_hash_boxed_2520_ = lean_unbox_uint64(v_hash_2518_);
lean_dec_ref(v_hash_2518_);
v_res_2521_ = l_Lake_writeFileHash(v_file_2517_, v_hash_boxed_2520_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheFileHash(lean_object* v_file_2522_, uint8_t v_text_2523_){
_start:
{
lean_object* v___y_2526_; 
if (v_text_2523_ == 0)
{
lean_object* v___x_2538_; 
v___x_2538_ = l_Lake_computeBinFileHash(v_file_2522_);
v___y_2526_ = v___x_2538_;
goto v___jp_2525_;
}
else
{
lean_object* v___x_2539_; 
v___x_2539_ = l_Lake_computeTextFileHash(v_file_2522_);
v___y_2526_ = v___x_2539_;
goto v___jp_2525_;
}
v___jp_2525_:
{
if (lean_obj_tag(v___y_2526_) == 0)
{
lean_object* v_a_2527_; uint64_t v___x_2528_; lean_object* v___x_2529_; 
v_a_2527_ = lean_ctor_get(v___y_2526_, 0);
lean_inc(v_a_2527_);
lean_dec_ref(v___y_2526_);
v___x_2528_ = lean_unbox_uint64(v_a_2527_);
lean_dec(v_a_2527_);
v___x_2529_ = l_Lake_writeFileHash(v_file_2522_, v___x_2528_);
return v___x_2529_;
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
lean_dec_ref(v_file_2522_);
v_a_2530_ = lean_ctor_get(v___y_2526_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___y_2526_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2532_ = v___y_2526_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___y_2526_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_a_2530_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_cacheFileHash___boxed(lean_object* v_file_2540_, lean_object* v_text_2541_, lean_object* v_a_2542_){
_start:
{
uint8_t v_text_boxed_2543_; lean_object* v_res_2544_; 
v_text_boxed_2543_ = lean_unbox(v_text_2541_);
v_res_2544_ = l_Lake_cacheFileHash(v_file_2540_, v_text_boxed_2543_);
return v_res_2544_;
}
}
LEAN_EXPORT lean_object* l_Lake_clearFileHash(lean_object* v_file_2545_){
_start:
{
lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2547_ = ((lean_object*)(l_Lake_writeFileHash___closed__0));
v___x_2548_ = lean_string_append(v_file_2545_, v___x_2547_);
v___x_2549_ = l_Lake_removeFileIfExists(v___x_2548_);
lean_dec_ref(v___x_2548_);
return v___x_2549_;
}
}
LEAN_EXPORT lean_object* l_Lake_clearFileHash___boxed(lean_object* v_file_2550_, lean_object* v_a_2551_){
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l_Lake_clearFileHash(v_file_2550_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg(lean_object* v_file_2553_, uint8_t v_text_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_){
_start:
{
lean_object* v_toBuildConfig_2558_; uint8_t v_trustHash_2559_; lean_object* v___x_2560_; lean_object* v_hashFile_2561_; uint8_t v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; uint8_t v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2601_; 
v_toBuildConfig_2558_ = lean_ctor_get(v_a_2555_, 0);
v_trustHash_2559_ = lean_ctor_get_uint8(v_toBuildConfig_2558_, sizeof(void*)*2 + 1);
v___x_2560_ = ((lean_object*)(l_Lake_writeFileHash___closed__0));
lean_inc_ref(v_file_2553_);
v_hashFile_2561_ = lean_string_append(v_file_2553_, v___x_2560_);
if (v_trustHash_2559_ == 0)
{
v___y_2601_ = v_a_2556_;
goto v___jp_2600_;
}
else
{
lean_object* v___x_2614_; 
v___x_2614_ = l_Lake_Hash_load_x3f(v_hashFile_2561_);
if (lean_obj_tag(v___x_2614_) == 1)
{
lean_object* v_val_2615_; lean_object* v___x_2616_; 
lean_dec_ref(v_hashFile_2561_);
lean_dec_ref(v_file_2553_);
v_val_2615_ = lean_ctor_get(v___x_2614_, 0);
lean_inc(v_val_2615_);
lean_dec_ref(v___x_2614_);
v___x_2616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2616_, 0, v_val_2615_);
lean_ctor_set(v___x_2616_, 1, v_a_2556_);
return v___x_2616_;
}
else
{
lean_dec(v___x_2614_);
v___y_2601_ = v_a_2556_;
goto v___jp_2600_;
}
}
v___jp_2562_:
{
if (lean_obj_tag(v___y_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___x_2570_; 
v_a_2569_ = lean_ctor_get(v___y_2568_, 0);
lean_inc(v_a_2569_);
lean_dec_ref(v___y_2568_);
lean_inc_ref(v_hashFile_2561_);
v___x_2570_ = l_Lake_createParentDirs(v_hashFile_2561_);
if (lean_obj_tag(v___x_2570_) == 0)
{
uint64_t v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
lean_dec_ref(v___x_2570_);
v___x_2571_ = lean_unbox_uint64(v_a_2569_);
v___x_2572_ = l_Lake_Hash_hex(v___x_2571_);
v___x_2573_ = l_IO_FS_writeFile(v_hashFile_2561_, v___x_2572_);
lean_dec_ref(v___x_2572_);
lean_dec_ref(v_hashFile_2561_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v___x_2574_; lean_object* v___x_2575_; 
lean_dec_ref(v___x_2573_);
v___x_2574_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2574_, 0, v___y_2564_);
lean_ctor_set(v___x_2574_, 1, v___y_2566_);
lean_ctor_set(v___x_2574_, 2, v___y_2565_);
lean_ctor_set_uint8(v___x_2574_, sizeof(void*)*3, v___y_2567_);
lean_ctor_set_uint8(v___x_2574_, sizeof(void*)*3 + 1, v___y_2563_);
v___x_2575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2575_, 0, v_a_2569_);
lean_ctor_set(v___x_2575_, 1, v___x_2574_);
return v___x_2575_;
}
else
{
lean_object* v_a_2576_; lean_object* v___x_2577_; uint8_t v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
lean_dec(v_a_2569_);
v_a_2576_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_a_2576_);
lean_dec_ref(v___x_2573_);
v___x_2577_ = lean_io_error_to_string(v_a_2576_);
v___x_2578_ = 3;
v___x_2579_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2579_, 0, v___x_2577_);
lean_ctor_set_uint8(v___x_2579_, sizeof(void*)*1, v___x_2578_);
v___x_2580_ = lean_array_get_size(v___y_2564_);
v___x_2581_ = lean_array_push(v___y_2564_, v___x_2579_);
v___x_2582_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2582_, 0, v___x_2581_);
lean_ctor_set(v___x_2582_, 1, v___y_2566_);
lean_ctor_set(v___x_2582_, 2, v___y_2565_);
lean_ctor_set_uint8(v___x_2582_, sizeof(void*)*3, v___y_2567_);
lean_ctor_set_uint8(v___x_2582_, sizeof(void*)*3 + 1, v___y_2563_);
v___x_2583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2580_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
return v___x_2583_;
}
}
else
{
lean_object* v_a_2584_; lean_object* v___x_2585_; uint8_t v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
lean_dec(v_a_2569_);
lean_dec_ref(v_hashFile_2561_);
v_a_2584_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_a_2584_);
lean_dec_ref(v___x_2570_);
v___x_2585_ = lean_io_error_to_string(v_a_2584_);
v___x_2586_ = 3;
v___x_2587_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2587_, 0, v___x_2585_);
lean_ctor_set_uint8(v___x_2587_, sizeof(void*)*1, v___x_2586_);
v___x_2588_ = lean_array_get_size(v___y_2564_);
v___x_2589_ = lean_array_push(v___y_2564_, v___x_2587_);
v___x_2590_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2590_, 0, v___x_2589_);
lean_ctor_set(v___x_2590_, 1, v___y_2566_);
lean_ctor_set(v___x_2590_, 2, v___y_2565_);
lean_ctor_set_uint8(v___x_2590_, sizeof(void*)*3, v___y_2567_);
lean_ctor_set_uint8(v___x_2590_, sizeof(void*)*3 + 1, v___y_2563_);
v___x_2591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2588_);
lean_ctor_set(v___x_2591_, 1, v___x_2590_);
return v___x_2591_;
}
}
else
{
lean_object* v_a_2592_; lean_object* v___x_2593_; uint8_t v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; 
lean_dec_ref(v_hashFile_2561_);
v_a_2592_ = lean_ctor_get(v___y_2568_, 0);
lean_inc(v_a_2592_);
lean_dec_ref(v___y_2568_);
v___x_2593_ = lean_io_error_to_string(v_a_2592_);
v___x_2594_ = 3;
v___x_2595_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2595_, 0, v___x_2593_);
lean_ctor_set_uint8(v___x_2595_, sizeof(void*)*1, v___x_2594_);
v___x_2596_ = lean_array_get_size(v___y_2564_);
v___x_2597_ = lean_array_push(v___y_2564_, v___x_2595_);
v___x_2598_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2598_, 0, v___x_2597_);
lean_ctor_set(v___x_2598_, 1, v___y_2566_);
lean_ctor_set(v___x_2598_, 2, v___y_2565_);
lean_ctor_set_uint8(v___x_2598_, sizeof(void*)*3, v___y_2567_);
lean_ctor_set_uint8(v___x_2598_, sizeof(void*)*3 + 1, v___y_2563_);
v___x_2599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2596_);
lean_ctor_set(v___x_2599_, 1, v___x_2598_);
return v___x_2599_;
}
}
v___jp_2600_:
{
if (v_text_2554_ == 0)
{
lean_object* v_log_2602_; uint8_t v_action_2603_; uint8_t v_wantsRebuild_2604_; lean_object* v_trace_2605_; lean_object* v_buildTime_2606_; lean_object* v___x_2607_; 
v_log_2602_ = lean_ctor_get(v___y_2601_, 0);
lean_inc_ref(v_log_2602_);
v_action_2603_ = lean_ctor_get_uint8(v___y_2601_, sizeof(void*)*3);
v_wantsRebuild_2604_ = lean_ctor_get_uint8(v___y_2601_, sizeof(void*)*3 + 1);
v_trace_2605_ = lean_ctor_get(v___y_2601_, 1);
lean_inc_ref(v_trace_2605_);
v_buildTime_2606_ = lean_ctor_get(v___y_2601_, 2);
lean_inc(v_buildTime_2606_);
lean_dec_ref(v___y_2601_);
v___x_2607_ = l_Lake_computeBinFileHash(v_file_2553_);
lean_dec_ref(v_file_2553_);
v___y_2563_ = v_wantsRebuild_2604_;
v___y_2564_ = v_log_2602_;
v___y_2565_ = v_buildTime_2606_;
v___y_2566_ = v_trace_2605_;
v___y_2567_ = v_action_2603_;
v___y_2568_ = v___x_2607_;
goto v___jp_2562_;
}
else
{
lean_object* v_log_2608_; uint8_t v_action_2609_; uint8_t v_wantsRebuild_2610_; lean_object* v_trace_2611_; lean_object* v_buildTime_2612_; lean_object* v___x_2613_; 
v_log_2608_ = lean_ctor_get(v___y_2601_, 0);
lean_inc_ref(v_log_2608_);
v_action_2609_ = lean_ctor_get_uint8(v___y_2601_, sizeof(void*)*3);
v_wantsRebuild_2610_ = lean_ctor_get_uint8(v___y_2601_, sizeof(void*)*3 + 1);
v_trace_2611_ = lean_ctor_get(v___y_2601_, 1);
lean_inc_ref(v_trace_2611_);
v_buildTime_2612_ = lean_ctor_get(v___y_2601_, 2);
lean_inc(v_buildTime_2612_);
lean_dec_ref(v___y_2601_);
v___x_2613_ = l_Lake_computeTextFileHash(v_file_2553_);
lean_dec_ref(v_file_2553_);
v___y_2563_ = v_wantsRebuild_2610_;
v___y_2564_ = v_log_2608_;
v___y_2565_ = v_buildTime_2612_;
v___y_2566_ = v_trace_2611_;
v___y_2567_ = v_action_2609_;
v___y_2568_ = v___x_2613_;
goto v___jp_2562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg___boxed(lean_object* v_file_2617_, lean_object* v_text_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_){
_start:
{
uint8_t v_text_boxed_2622_; lean_object* v_res_2623_; 
v_text_boxed_2622_ = lean_unbox(v_text_2618_);
v_res_2623_ = l_Lake_fetchFileHash___redArg(v_file_2617_, v_text_boxed_2622_, v_a_2619_, v_a_2620_);
lean_dec_ref(v_a_2619_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash(lean_object* v_file_2624_, uint8_t v_text_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_, lean_object* v_a_2631_){
_start:
{
lean_object* v___x_2633_; 
v___x_2633_ = l_Lake_fetchFileHash___redArg(v_file_2624_, v_text_2625_, v_a_2630_, v_a_2631_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___boxed(lean_object* v_file_2634_, lean_object* v_text_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_a_2639_, lean_object* v_a_2640_, lean_object* v_a_2641_, lean_object* v_a_2642_){
_start:
{
uint8_t v_text_boxed_2643_; lean_object* v_res_2644_; 
v_text_boxed_2643_ = lean_unbox(v_text_2635_);
v_res_2644_ = l_Lake_fetchFileHash(v_file_2634_, v_text_boxed_2643_, v_a_2636_, v_a_2637_, v_a_2638_, v_a_2639_, v_a_2640_, v_a_2641_);
lean_dec_ref(v_a_2640_);
lean_dec(v_a_2639_);
lean_dec(v_a_2638_);
lean_dec(v_a_2637_);
lean_dec_ref(v_a_2636_);
return v_res_2644_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg(lean_object* v_file_2645_, uint8_t v_text_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_){
_start:
{
lean_object* v___x_2650_; 
lean_inc_ref(v_file_2645_);
v___x_2650_ = l_Lake_fetchFileHash___redArg(v_file_2645_, v_text_2646_, v_a_2647_, v_a_2648_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2651_; lean_object* v_a_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2689_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 1);
v_a_2652_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2654_ = v___x_2650_;
v_isShared_2655_ = v_isSharedCheck_2689_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_a_2651_);
lean_inc(v_a_2652_);
lean_dec(v___x_2650_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2689_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v_log_2656_; uint8_t v_action_2657_; uint8_t v_wantsRebuild_2658_; lean_object* v_trace_2659_; lean_object* v_buildTime_2660_; lean_object* v___x_2661_; 
v_log_2656_ = lean_ctor_get(v_a_2651_, 0);
v_action_2657_ = lean_ctor_get_uint8(v_a_2651_, sizeof(void*)*3);
v_wantsRebuild_2658_ = lean_ctor_get_uint8(v_a_2651_, sizeof(void*)*3 + 1);
v_trace_2659_ = lean_ctor_get(v_a_2651_, 1);
v_buildTime_2660_ = lean_ctor_get(v_a_2651_, 2);
v___x_2661_ = lean_io_metadata(v_file_2645_);
if (lean_obj_tag(v___x_2661_) == 0)
{
lean_object* v_a_2662_; lean_object* v_modified_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; uint64_t v___x_2666_; lean_object* v___x_2668_; 
v_a_2662_ = lean_ctor_get(v___x_2661_, 0);
lean_inc(v_a_2662_);
lean_dec_ref(v___x_2661_);
v_modified_2663_ = lean_ctor_get(v_a_2662_, 1);
lean_inc_ref(v_modified_2663_);
lean_dec(v_a_2662_);
v___x_2664_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_2665_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_2665_, 0, v_file_2645_);
lean_ctor_set(v___x_2665_, 1, v___x_2664_);
lean_ctor_set(v___x_2665_, 2, v_modified_2663_);
v___x_2666_ = lean_unbox_uint64(v_a_2652_);
lean_dec(v_a_2652_);
lean_ctor_set_uint64(v___x_2665_, sizeof(void*)*3, v___x_2666_);
if (v_isShared_2655_ == 0)
{
lean_ctor_set(v___x_2654_, 0, v___x_2665_);
v___x_2668_ = v___x_2654_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v___x_2665_);
lean_ctor_set(v_reuseFailAlloc_2669_, 1, v_a_2651_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
else
{
lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2685_; 
lean_inc(v_buildTime_2660_);
lean_inc_ref(v_trace_2659_);
lean_inc_ref(v_log_2656_);
lean_dec(v_a_2652_);
lean_dec_ref(v_file_2645_);
v_isSharedCheck_2685_ = !lean_is_exclusive(v_a_2651_);
if (v_isSharedCheck_2685_ == 0)
{
lean_object* v_unused_2686_; lean_object* v_unused_2687_; lean_object* v_unused_2688_; 
v_unused_2686_ = lean_ctor_get(v_a_2651_, 2);
lean_dec(v_unused_2686_);
v_unused_2687_ = lean_ctor_get(v_a_2651_, 1);
lean_dec(v_unused_2687_);
v_unused_2688_ = lean_ctor_get(v_a_2651_, 0);
lean_dec(v_unused_2688_);
v___x_2671_ = v_a_2651_;
v_isShared_2672_ = v_isSharedCheck_2685_;
goto v_resetjp_2670_;
}
else
{
lean_dec(v_a_2651_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2685_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v_a_2673_; lean_object* v___x_2674_; uint8_t v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2680_; 
v_a_2673_ = lean_ctor_get(v___x_2661_, 0);
lean_inc(v_a_2673_);
lean_dec_ref(v___x_2661_);
v___x_2674_ = lean_io_error_to_string(v_a_2673_);
v___x_2675_ = 3;
v___x_2676_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2676_, 0, v___x_2674_);
lean_ctor_set_uint8(v___x_2676_, sizeof(void*)*1, v___x_2675_);
v___x_2677_ = lean_array_get_size(v_log_2656_);
v___x_2678_ = lean_array_push(v_log_2656_, v___x_2676_);
if (v_isShared_2672_ == 0)
{
lean_ctor_set(v___x_2671_, 0, v___x_2678_);
v___x_2680_ = v___x_2671_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v___x_2678_);
lean_ctor_set(v_reuseFailAlloc_2684_, 1, v_trace_2659_);
lean_ctor_set(v_reuseFailAlloc_2684_, 2, v_buildTime_2660_);
lean_ctor_set_uint8(v_reuseFailAlloc_2684_, sizeof(void*)*3, v_action_2657_);
lean_ctor_set_uint8(v_reuseFailAlloc_2684_, sizeof(void*)*3 + 1, v_wantsRebuild_2658_);
v___x_2680_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
lean_object* v___x_2682_; 
if (v_isShared_2655_ == 0)
{
lean_ctor_set_tag(v___x_2654_, 1);
lean_ctor_set(v___x_2654_, 1, v___x_2680_);
lean_ctor_set(v___x_2654_, 0, v___x_2677_);
v___x_2682_ = v___x_2654_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___x_2677_);
lean_ctor_set(v_reuseFailAlloc_2683_, 1, v___x_2680_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
}
}
else
{
lean_object* v_a_2690_; lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_dec_ref(v_file_2645_);
v_a_2690_ = lean_ctor_get(v___x_2650_, 0);
v_a_2691_ = lean_ctor_get(v___x_2650_, 1);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2650_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_inc(v_a_2690_);
lean_dec(v___x_2650_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2690_);
lean_ctor_set(v_reuseFailAlloc_2697_, 1, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg___boxed(lean_object* v_file_2699_, lean_object* v_text_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_){
_start:
{
uint8_t v_text_boxed_2704_; lean_object* v_res_2705_; 
v_text_boxed_2704_ = lean_unbox(v_text_2700_);
v_res_2705_ = l_Lake_fetchFileTrace___redArg(v_file_2699_, v_text_boxed_2704_, v_a_2701_, v_a_2702_);
lean_dec_ref(v_a_2701_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace(lean_object* v_file_2706_, uint8_t v_text_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_, lean_object* v_a_2713_){
_start:
{
lean_object* v___x_2715_; 
v___x_2715_ = l_Lake_fetchFileTrace___redArg(v_file_2706_, v_text_2707_, v_a_2712_, v_a_2713_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___boxed(lean_object* v_file_2716_, lean_object* v_text_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_){
_start:
{
uint8_t v_text_boxed_2725_; lean_object* v_res_2726_; 
v_text_boxed_2725_ = lean_unbox(v_text_2717_);
v_res_2726_ = l_Lake_fetchFileTrace(v_file_2716_, v_text_boxed_2725_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_, v_a_2722_, v_a_2723_);
lean_dec_ref(v_a_2722_);
lean_dec(v_a_2721_);
lean_dec(v_a_2720_);
lean_dec(v_a_2719_);
lean_dec_ref(v_a_2718_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(lean_object* v_val_2727_, lean_object* v_a_x3f_2728_, lean_object* v___y_2729_){
_start:
{
lean_object* v___x_2731_; lean_object* v_log_2732_; uint8_t v_action_2733_; uint8_t v_wantsRebuild_2734_; lean_object* v_trace_2735_; lean_object* v_buildTime_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2747_; 
v___x_2731_ = lean_io_mono_ms_now();
v_log_2732_ = lean_ctor_get(v___y_2729_, 0);
v_action_2733_ = lean_ctor_get_uint8(v___y_2729_, sizeof(void*)*3);
v_wantsRebuild_2734_ = lean_ctor_get_uint8(v___y_2729_, sizeof(void*)*3 + 1);
v_trace_2735_ = lean_ctor_get(v___y_2729_, 1);
v_buildTime_2736_ = lean_ctor_get(v___y_2729_, 2);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___y_2729_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2738_ = v___y_2729_;
v_isShared_2739_ = v_isSharedCheck_2747_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_buildTime_2736_);
lean_inc(v_trace_2735_);
lean_inc(v_log_2732_);
lean_dec(v___y_2729_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2747_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2744_; 
v___x_2740_ = lean_nat_sub(v___x_2731_, v_val_2727_);
lean_dec(v___x_2731_);
v___x_2741_ = lean_box(0);
v___x_2742_ = lean_nat_add(v_buildTime_2736_, v___x_2740_);
lean_dec(v___x_2740_);
lean_dec(v_buildTime_2736_);
if (v_isShared_2739_ == 0)
{
lean_ctor_set(v___x_2738_, 2, v___x_2742_);
v___x_2744_ = v___x_2738_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_log_2732_);
lean_ctor_set(v_reuseFailAlloc_2746_, 1, v_trace_2735_);
lean_ctor_set(v_reuseFailAlloc_2746_, 2, v___x_2742_);
lean_ctor_set_uint8(v_reuseFailAlloc_2746_, sizeof(void*)*3, v_action_2733_);
lean_ctor_set_uint8(v_reuseFailAlloc_2746_, sizeof(void*)*3 + 1, v_wantsRebuild_2734_);
v___x_2744_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
lean_object* v___x_2745_; 
v___x_2745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2745_, 0, v___x_2741_);
lean_ctor_set(v___x_2745_, 1, v___x_2744_);
return v___x_2745_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0___boxed(lean_object* v_val_2748_, lean_object* v_a_x3f_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_){
_start:
{
lean_object* v_res_2752_; 
v_res_2752_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v_val_2748_, v_a_x3f_2749_, v___y_2750_);
lean_dec(v_a_x3f_2749_);
lean_dec(v_val_2748_);
return v_res_2752_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(lean_object* v_build_2753_, lean_object* v_file_2754_, lean_object* v_a_2755_, lean_object* v_depTrace_2756_, lean_object* v_traceFile_2757_, uint8_t v_action_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_){
_start:
{
lean_object* v_a_2766_; lean_object* v_a_2767_; lean_object* v_log_2770_; uint8_t v_action_2771_; uint8_t v_wantsRebuild_2772_; lean_object* v_trace_2773_; lean_object* v_buildTime_2774_; lean_object* v_toBuildConfig_2780_; lean_object* v_log_2781_; uint8_t v_action_2782_; uint8_t v_wantsRebuild_2783_; lean_object* v_trace_2784_; lean_object* v_buildTime_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2908_; 
v_toBuildConfig_2780_ = lean_ctor_get(v_a_2762_, 0);
v_log_2781_ = lean_ctor_get(v_a_2763_, 0);
v_action_2782_ = lean_ctor_get_uint8(v_a_2763_, sizeof(void*)*3);
v_wantsRebuild_2783_ = lean_ctor_get_uint8(v_a_2763_, sizeof(void*)*3 + 1);
v_trace_2784_ = lean_ctor_get(v_a_2763_, 1);
v_buildTime_2785_ = lean_ctor_get(v_a_2763_, 2);
v_isSharedCheck_2908_ = !lean_is_exclusive(v_a_2763_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2787_ = v_a_2763_;
v_isShared_2788_ = v_isSharedCheck_2908_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_buildTime_2785_);
lean_inc(v_trace_2784_);
lean_inc(v_log_2781_);
lean_dec(v_a_2763_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2908_;
goto v_resetjp_2786_;
}
v___jp_2765_:
{
lean_object* v___x_2768_; 
v___x_2768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2768_, 0, v_a_2766_);
lean_ctor_set(v___x_2768_, 1, v_a_2767_);
return v___x_2768_;
}
v___jp_2769_:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v___x_2775_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__1));
v___x_2776_ = lean_array_get_size(v_log_2770_);
v___x_2777_ = lean_array_push(v_log_2770_, v___x_2775_);
v___x_2778_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
lean_ctor_set(v___x_2778_, 1, v_trace_2773_);
lean_ctor_set(v___x_2778_, 2, v_buildTime_2774_);
lean_ctor_set_uint8(v___x_2778_, sizeof(void*)*3, v_action_2771_);
lean_ctor_set_uint8(v___x_2778_, sizeof(void*)*3 + 1, v_wantsRebuild_2772_);
v___x_2779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2776_);
lean_ctor_set(v___x_2779_, 1, v___x_2778_);
return v___x_2779_;
}
v_resetjp_2786_:
{
uint8_t v_noBuild_2789_; uint8_t v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v_noBuild_2789_ = lean_ctor_get_uint8(v_toBuildConfig_2780_, sizeof(void*)*2 + 2);
v___x_2790_ = l_Lake_JobAction_merge(v_action_2782_, v_action_2758_);
v___x_2791_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__2));
lean_inc_ref(v_traceFile_2757_);
v___x_2792_ = l_System_FilePath_addExtension(v_traceFile_2757_, v___x_2791_);
if (v_noBuild_2789_ == 0)
{
lean_object* v___x_2793_; lean_object* v___x_2795_; 
v___x_2793_ = lean_io_mono_ms_now();
lean_inc_ref(v_log_2781_);
if (v_isShared_2788_ == 0)
{
v___x_2795_ = v___x_2787_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_log_2781_);
lean_ctor_set(v_reuseFailAlloc_2892_, 1, v_trace_2784_);
lean_ctor_set(v_reuseFailAlloc_2892_, 2, v_buildTime_2785_);
lean_ctor_set_uint8(v_reuseFailAlloc_2892_, sizeof(void*)*3 + 1, v_wantsRebuild_2783_);
v___x_2795_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
lean_object* v___x_2796_; lean_object* v_a_2798_; lean_object* v_a_2799_; 
lean_ctor_set_uint8(v___x_2795_, sizeof(void*)*3, v___x_2790_);
v___x_2796_ = lean_apply_7(v_build_2753_, v_a_2755_, v_a_2759_, v_a_2760_, v_a_2761_, v_a_2762_, v___x_2795_, lean_box(0));
if (lean_obj_tag(v___x_2796_) == 0)
{
lean_object* v_a_2803_; lean_object* v_log_2804_; uint8_t v_action_2805_; uint8_t v_wantsRebuild_2806_; lean_object* v_trace_2807_; lean_object* v_buildTime_2808_; lean_object* v___x_2809_; 
v_a_2803_ = lean_ctor_get(v___x_2796_, 1);
lean_inc(v_a_2803_);
lean_dec_ref(v___x_2796_);
v_log_2804_ = lean_ctor_get(v_a_2803_, 0);
v_action_2805_ = lean_ctor_get_uint8(v_a_2803_, sizeof(void*)*3);
v_wantsRebuild_2806_ = lean_ctor_get_uint8(v_a_2803_, sizeof(void*)*3 + 1);
v_trace_2807_ = lean_ctor_get(v_a_2803_, 1);
v_buildTime_2808_ = lean_ctor_get(v_a_2803_, 2);
v___x_2809_ = l_Lake_clearFileHash(v_file_2754_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_object* v_a_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; 
v_a_2810_ = lean_ctor_get(v___x_2809_, 0);
lean_inc(v_a_2810_);
lean_dec_ref(v___x_2809_);
v___x_2811_ = lean_array_get_size(v_log_2781_);
lean_dec_ref(v_log_2781_);
v___x_2812_ = lean_array_get_size(v_log_2804_);
v___x_2813_ = l_Array_extract___redArg(v_log_2804_, v___x_2811_, v___x_2812_);
v___x_2814_ = lean_box(0);
v___x_2815_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_2756_, v___x_2814_, v___x_2813_);
v___x_2816_ = l_Lake_BuildMetadata_writeFile(v_traceFile_2757_, v___x_2815_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2857_; 
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2857_ == 0)
{
lean_object* v_unused_2858_; 
v_unused_2858_ = lean_ctor_get(v___x_2816_, 0);
lean_dec(v_unused_2858_);
v___x_2818_ = v___x_2816_;
v_isShared_2819_ = v_isSharedCheck_2857_;
goto v_resetjp_2817_;
}
else
{
lean_dec(v___x_2816_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2857_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2820_; 
v___x_2820_ = l_Lake_removeFileIfExists(v___x_2792_);
lean_dec_ref(v___x_2792_);
if (lean_obj_tag(v___x_2820_) == 0)
{
lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2840_; 
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2840_ == 0)
{
lean_object* v_unused_2841_; 
v_unused_2841_ = lean_ctor_get(v___x_2820_, 0);
lean_dec(v_unused_2841_);
v___x_2822_ = v___x_2820_;
v_isShared_2823_ = v_isSharedCheck_2840_;
goto v_resetjp_2821_;
}
else
{
lean_dec(v___x_2820_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2840_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
lean_inc(v_a_2810_);
if (v_isShared_2823_ == 0)
{
lean_ctor_set(v___x_2822_, 0, v_a_2810_);
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2810_);
v___x_2825_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
lean_object* v___x_2827_; 
if (v_isShared_2819_ == 0)
{
lean_ctor_set_tag(v___x_2818_, 1);
lean_ctor_set(v___x_2818_, 0, v___x_2825_);
v___x_2827_ = v___x_2818_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v___x_2825_);
v___x_2827_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
lean_object* v___x_2828_; lean_object* v_a_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2836_; 
v___x_2828_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v___x_2793_, v___x_2827_, v_a_2803_);
lean_dec_ref(v___x_2827_);
lean_dec(v___x_2793_);
v_a_2829_ = lean_ctor_get(v___x_2828_, 1);
v_isSharedCheck_2836_ = !lean_is_exclusive(v___x_2828_);
if (v_isSharedCheck_2836_ == 0)
{
lean_object* v_unused_2837_; 
v_unused_2837_ = lean_ctor_get(v___x_2828_, 0);
lean_dec(v_unused_2837_);
v___x_2831_ = v___x_2828_;
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_a_2829_);
lean_dec(v___x_2828_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2834_; 
if (v_isShared_2832_ == 0)
{
lean_ctor_set(v___x_2831_, 0, v_a_2810_);
v___x_2834_ = v___x_2831_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_a_2810_);
lean_ctor_set(v_reuseFailAlloc_2835_, 1, v_a_2829_);
v___x_2834_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
return v___x_2834_;
}
}
}
}
}
}
else
{
lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2853_; 
lean_inc(v_buildTime_2808_);
lean_inc_ref(v_trace_2807_);
lean_inc_ref(v_log_2804_);
lean_del_object(v___x_2818_);
lean_dec(v_a_2810_);
v_isSharedCheck_2853_ = !lean_is_exclusive(v_a_2803_);
if (v_isSharedCheck_2853_ == 0)
{
lean_object* v_unused_2854_; lean_object* v_unused_2855_; lean_object* v_unused_2856_; 
v_unused_2854_ = lean_ctor_get(v_a_2803_, 2);
lean_dec(v_unused_2854_);
v_unused_2855_ = lean_ctor_get(v_a_2803_, 1);
lean_dec(v_unused_2855_);
v_unused_2856_ = lean_ctor_get(v_a_2803_, 0);
lean_dec(v_unused_2856_);
v___x_2843_ = v_a_2803_;
v_isShared_2844_ = v_isSharedCheck_2853_;
goto v_resetjp_2842_;
}
else
{
lean_dec(v_a_2803_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2853_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v_a_2845_; lean_object* v___x_2846_; uint8_t v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2851_; 
v_a_2845_ = lean_ctor_get(v___x_2820_, 0);
lean_inc(v_a_2845_);
lean_dec_ref(v___x_2820_);
v___x_2846_ = lean_io_error_to_string(v_a_2845_);
v___x_2847_ = 3;
v___x_2848_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2848_, 0, v___x_2846_);
lean_ctor_set_uint8(v___x_2848_, sizeof(void*)*1, v___x_2847_);
v___x_2849_ = lean_array_push(v_log_2804_, v___x_2848_);
if (v_isShared_2844_ == 0)
{
lean_ctor_set(v___x_2843_, 0, v___x_2849_);
v___x_2851_ = v___x_2843_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v___x_2849_);
lean_ctor_set(v_reuseFailAlloc_2852_, 1, v_trace_2807_);
lean_ctor_set(v_reuseFailAlloc_2852_, 2, v_buildTime_2808_);
lean_ctor_set_uint8(v_reuseFailAlloc_2852_, sizeof(void*)*3, v_action_2805_);
lean_ctor_set_uint8(v_reuseFailAlloc_2852_, sizeof(void*)*3 + 1, v_wantsRebuild_2806_);
v___x_2851_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
v_a_2798_ = v___x_2812_;
v_a_2799_ = v___x_2851_;
goto v___jp_2797_;
}
}
}
}
}
else
{
lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2870_; 
lean_inc(v_buildTime_2808_);
lean_inc_ref(v_trace_2807_);
lean_inc_ref(v_log_2804_);
lean_dec(v_a_2810_);
lean_dec_ref(v___x_2792_);
v_isSharedCheck_2870_ = !lean_is_exclusive(v_a_2803_);
if (v_isSharedCheck_2870_ == 0)
{
lean_object* v_unused_2871_; lean_object* v_unused_2872_; lean_object* v_unused_2873_; 
v_unused_2871_ = lean_ctor_get(v_a_2803_, 2);
lean_dec(v_unused_2871_);
v_unused_2872_ = lean_ctor_get(v_a_2803_, 1);
lean_dec(v_unused_2872_);
v_unused_2873_ = lean_ctor_get(v_a_2803_, 0);
lean_dec(v_unused_2873_);
v___x_2860_ = v_a_2803_;
v_isShared_2861_ = v_isSharedCheck_2870_;
goto v_resetjp_2859_;
}
else
{
lean_dec(v_a_2803_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2870_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v_a_2862_; lean_object* v___x_2863_; uint8_t v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2868_; 
v_a_2862_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_a_2862_);
lean_dec_ref(v___x_2816_);
v___x_2863_ = lean_io_error_to_string(v_a_2862_);
v___x_2864_ = 3;
v___x_2865_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2865_, 0, v___x_2863_);
lean_ctor_set_uint8(v___x_2865_, sizeof(void*)*1, v___x_2864_);
v___x_2866_ = lean_array_push(v_log_2804_, v___x_2865_);
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 0, v___x_2866_);
v___x_2868_ = v___x_2860_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v___x_2866_);
lean_ctor_set(v_reuseFailAlloc_2869_, 1, v_trace_2807_);
lean_ctor_set(v_reuseFailAlloc_2869_, 2, v_buildTime_2808_);
lean_ctor_set_uint8(v_reuseFailAlloc_2869_, sizeof(void*)*3, v_action_2805_);
lean_ctor_set_uint8(v_reuseFailAlloc_2869_, sizeof(void*)*3 + 1, v_wantsRebuild_2806_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
v_a_2798_ = v___x_2812_;
v_a_2799_ = v___x_2868_;
goto v___jp_2797_;
}
}
}
}
else
{
lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2886_; 
lean_inc(v_buildTime_2808_);
lean_inc_ref(v_trace_2807_);
lean_inc_ref(v_log_2804_);
lean_dec_ref(v___x_2792_);
lean_dec_ref(v_log_2781_);
lean_dec_ref(v_traceFile_2757_);
v_isSharedCheck_2886_ = !lean_is_exclusive(v_a_2803_);
if (v_isSharedCheck_2886_ == 0)
{
lean_object* v_unused_2887_; lean_object* v_unused_2888_; lean_object* v_unused_2889_; 
v_unused_2887_ = lean_ctor_get(v_a_2803_, 2);
lean_dec(v_unused_2887_);
v_unused_2888_ = lean_ctor_get(v_a_2803_, 1);
lean_dec(v_unused_2888_);
v_unused_2889_ = lean_ctor_get(v_a_2803_, 0);
lean_dec(v_unused_2889_);
v___x_2875_ = v_a_2803_;
v_isShared_2876_ = v_isSharedCheck_2886_;
goto v_resetjp_2874_;
}
else
{
lean_dec(v_a_2803_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2886_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v_a_2877_; lean_object* v___x_2878_; uint8_t v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2884_; 
v_a_2877_ = lean_ctor_get(v___x_2809_, 0);
lean_inc(v_a_2877_);
lean_dec_ref(v___x_2809_);
v___x_2878_ = lean_io_error_to_string(v_a_2877_);
v___x_2879_ = 3;
v___x_2880_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2880_, 0, v___x_2878_);
lean_ctor_set_uint8(v___x_2880_, sizeof(void*)*1, v___x_2879_);
v___x_2881_ = lean_array_get_size(v_log_2804_);
v___x_2882_ = lean_array_push(v_log_2804_, v___x_2880_);
if (v_isShared_2876_ == 0)
{
lean_ctor_set(v___x_2875_, 0, v___x_2882_);
v___x_2884_ = v___x_2875_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v___x_2882_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v_trace_2807_);
lean_ctor_set(v_reuseFailAlloc_2885_, 2, v_buildTime_2808_);
lean_ctor_set_uint8(v_reuseFailAlloc_2885_, sizeof(void*)*3, v_action_2805_);
lean_ctor_set_uint8(v_reuseFailAlloc_2885_, sizeof(void*)*3 + 1, v_wantsRebuild_2806_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
v_a_2798_ = v___x_2881_;
v_a_2799_ = v___x_2884_;
goto v___jp_2797_;
}
}
}
}
else
{
lean_object* v_a_2890_; lean_object* v_a_2891_; 
lean_dec_ref(v___x_2792_);
lean_dec_ref(v_log_2781_);
lean_dec_ref(v_traceFile_2757_);
lean_dec_ref(v_file_2754_);
v_a_2890_ = lean_ctor_get(v___x_2796_, 0);
lean_inc(v_a_2890_);
v_a_2891_ = lean_ctor_get(v___x_2796_, 1);
lean_inc(v_a_2891_);
lean_dec_ref(v___x_2796_);
v_a_2798_ = v_a_2890_;
v_a_2799_ = v_a_2891_;
goto v___jp_2797_;
}
v___jp_2797_:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v_a_2802_; 
v___x_2800_ = lean_box(0);
v___x_2801_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v___x_2793_, v___x_2800_, v_a_2799_);
lean_dec(v___x_2793_);
v_a_2802_ = lean_ctor_get(v___x_2801_, 1);
lean_inc(v_a_2802_);
lean_dec_ref(v___x_2801_);
v_a_2766_ = v_a_2798_;
v_a_2767_ = v_a_2802_;
goto v___jp_2765_;
}
}
}
else
{
uint8_t v___x_2893_; 
lean_dec_ref(v_a_2762_);
lean_dec(v_a_2761_);
lean_dec(v_a_2760_);
lean_dec(v_a_2759_);
lean_dec_ref(v_a_2755_);
lean_dec_ref(v_file_2754_);
lean_dec_ref(v_build_2753_);
v___x_2893_ = l_System_FilePath_pathExists(v_traceFile_2757_);
lean_dec_ref(v_traceFile_2757_);
if (v___x_2893_ == 0)
{
lean_dec_ref(v___x_2792_);
lean_del_object(v___x_2787_);
v_log_2770_ = v_log_2781_;
v_action_2771_ = v___x_2790_;
v_wantsRebuild_2772_ = v_noBuild_2789_;
v_trace_2773_ = v_trace_2784_;
v_buildTime_2774_ = v_buildTime_2785_;
goto v___jp_2769_;
}
else
{
lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2894_ = lean_box(0);
v___x_2895_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___x_2896_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_2756_, v___x_2894_, v___x_2895_);
v___x_2897_ = l_Lake_BuildMetadata_writeFile(v___x_2792_, v___x_2896_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_dec_ref(v___x_2897_);
lean_del_object(v___x_2787_);
v_log_2770_ = v_log_2781_;
v_action_2771_ = v___x_2790_;
v_wantsRebuild_2772_ = v_noBuild_2789_;
v_trace_2773_ = v_trace_2784_;
v_buildTime_2774_ = v_buildTime_2785_;
goto v___jp_2769_;
}
else
{
lean_object* v_a_2898_; lean_object* v___x_2899_; uint8_t v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2905_; 
v_a_2898_ = lean_ctor_get(v___x_2897_, 0);
lean_inc(v_a_2898_);
lean_dec_ref(v___x_2897_);
v___x_2899_ = lean_io_error_to_string(v_a_2898_);
v___x_2900_ = 3;
v___x_2901_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2901_, 0, v___x_2899_);
lean_ctor_set_uint8(v___x_2901_, sizeof(void*)*1, v___x_2900_);
v___x_2902_ = lean_array_get_size(v_log_2781_);
v___x_2903_ = lean_array_push(v_log_2781_, v___x_2901_);
if (v_isShared_2788_ == 0)
{
lean_ctor_set(v___x_2787_, 0, v___x_2903_);
v___x_2905_ = v___x_2787_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v___x_2903_);
lean_ctor_set(v_reuseFailAlloc_2907_, 1, v_trace_2784_);
lean_ctor_set(v_reuseFailAlloc_2907_, 2, v_buildTime_2785_);
v___x_2905_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
lean_object* v___x_2906_; 
lean_ctor_set_uint8(v___x_2905_, sizeof(void*)*3, v___x_2790_);
lean_ctor_set_uint8(v___x_2905_, sizeof(void*)*3 + 1, v_noBuild_2789_);
v___x_2906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2902_);
lean_ctor_set(v___x_2906_, 1, v___x_2905_);
return v___x_2906_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___boxed(lean_object* v_build_2909_, lean_object* v_file_2910_, lean_object* v_a_2911_, lean_object* v_depTrace_2912_, lean_object* v_traceFile_2913_, lean_object* v_action_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_){
_start:
{
uint8_t v_action_boxed_2921_; lean_object* v_res_2922_; 
v_action_boxed_2921_ = lean_unbox(v_action_2914_);
v_res_2922_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(v_build_2909_, v_file_2910_, v_a_2911_, v_depTrace_2912_, v_traceFile_2913_, v_action_boxed_2921_, v_a_2915_, v_a_2916_, v_a_2917_, v_a_2918_, v_a_2919_);
lean_dec_ref(v_depTrace_2912_);
return v_res_2922_;
}
}
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(lean_object* v_info_2923_, lean_object* v_self_2924_){
_start:
{
lean_object* v___x_2926_; 
v___x_2926_ = lean_io_metadata(v_info_2923_);
if (lean_obj_tag(v___x_2926_) == 0)
{
lean_object* v_a_2927_; lean_object* v_modified_2928_; uint8_t v___x_2929_; 
v_a_2927_ = lean_ctor_get(v___x_2926_, 0);
lean_inc(v_a_2927_);
lean_dec_ref(v___x_2926_);
v_modified_2928_ = lean_ctor_get(v_a_2927_, 1);
lean_inc_ref(v_modified_2928_);
lean_dec(v_a_2927_);
v___x_2929_ = l_IO_FS_instOrdSystemTime_ord(v_self_2924_, v_modified_2928_);
lean_dec_ref(v_modified_2928_);
if (v___x_2929_ == 0)
{
uint8_t v___x_2930_; 
v___x_2930_ = 1;
return v___x_2930_;
}
else
{
uint8_t v___x_2931_; 
v___x_2931_ = 0;
return v___x_2931_;
}
}
else
{
uint8_t v___x_2932_; 
lean_dec_ref(v___x_2926_);
v___x_2932_ = 0;
return v___x_2932_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1___boxed(lean_object* v_info_2933_, lean_object* v_self_2934_, lean_object* v_a_2935_){
_start:
{
uint8_t v_res_2936_; lean_object* v_r_2937_; 
v_res_2936_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_2933_, v_self_2934_);
lean_dec_ref(v_self_2934_);
lean_dec_ref(v_info_2933_);
v_r_2937_ = lean_box(v_res_2936_);
return v_r_2937_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(lean_object* v_x_2938_, lean_object* v_x_2939_){
_start:
{
if (lean_obj_tag(v_x_2938_) == 0)
{
if (lean_obj_tag(v_x_2939_) == 0)
{
uint8_t v___x_2940_; 
v___x_2940_ = 1;
return v___x_2940_;
}
else
{
uint8_t v___x_2941_; 
v___x_2941_ = 0;
return v___x_2941_;
}
}
else
{
if (lean_obj_tag(v_x_2939_) == 0)
{
uint8_t v___x_2942_; 
v___x_2942_ = 0;
return v___x_2942_;
}
else
{
lean_object* v_val_2943_; lean_object* v_val_2944_; uint64_t v___x_2945_; uint64_t v___x_2946_; uint8_t v___x_2947_; 
v_val_2943_ = lean_ctor_get(v_x_2938_, 0);
v_val_2944_ = lean_ctor_get(v_x_2939_, 0);
v___x_2945_ = lean_unbox_uint64(v_val_2943_);
v___x_2946_ = lean_unbox_uint64(v_val_2944_);
v___x_2947_ = lean_uint64_dec_eq(v___x_2945_, v___x_2946_);
return v___x_2947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2___boxed(lean_object* v_x_2948_, lean_object* v_x_2949_){
_start:
{
uint8_t v_res_2950_; lean_object* v_r_2951_; 
v_res_2950_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(v_x_2948_, v_x_2949_);
lean_dec(v_x_2949_);
lean_dec(v_x_2948_);
v_r_2951_ = lean_box(v_res_2950_);
return v_r_2951_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(lean_object* v_info_2952_, lean_object* v_depTrace_2953_, lean_object* v_depHash_2954_, lean_object* v_oldTrace_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_){
_start:
{
uint64_t v_hash_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; uint8_t v___x_2962_; 
v_hash_2959_ = lean_ctor_get_uint64(v_depTrace_2953_, sizeof(void*)*3);
v___x_2960_ = lean_box_uint64(v_hash_2959_);
v___x_2961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2961_, 0, v___x_2960_);
v___x_2962_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(v___x_2961_, v_depHash_2954_);
lean_dec_ref(v___x_2961_);
if (v___x_2962_ == 0)
{
lean_object* v_toBuildConfig_2963_; uint8_t v_oldMode_2964_; 
v_toBuildConfig_2963_ = lean_ctor_get(v_a_2956_, 0);
v_oldMode_2964_ = lean_ctor_get_uint8(v_toBuildConfig_2963_, sizeof(void*)*2);
if (v_oldMode_2964_ == 0)
{
uint8_t v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2965_ = 0;
v___x_2966_ = lean_box(v___x_2965_);
v___x_2967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2966_);
lean_ctor_set(v___x_2967_, 1, v_a_2957_);
return v___x_2967_;
}
else
{
uint8_t v___x_2968_; 
v___x_2968_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_2952_, v_oldTrace_2955_);
if (v___x_2968_ == 0)
{
uint8_t v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2969_ = 0;
v___x_2970_ = lean_box(v___x_2969_);
v___x_2971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2971_, 0, v___x_2970_);
lean_ctor_set(v___x_2971_, 1, v_a_2957_);
return v___x_2971_;
}
else
{
uint8_t v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2972_ = 1;
v___x_2973_ = lean_box(v___x_2972_);
v___x_2974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
lean_ctor_set(v___x_2974_, 1, v_a_2957_);
return v___x_2974_;
}
}
}
else
{
uint8_t v___x_2975_; 
v___x_2975_ = l_System_FilePath_pathExists(v_info_2952_);
if (v___x_2975_ == 0)
{
uint8_t v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2976_ = 0;
v___x_2977_ = lean_box(v___x_2976_);
v___x_2978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2977_);
lean_ctor_set(v___x_2978_, 1, v_a_2957_);
return v___x_2978_;
}
else
{
uint8_t v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2979_ = 2;
v___x_2980_ = lean_box(v___x_2979_);
v___x_2981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2980_);
lean_ctor_set(v___x_2981_, 1, v_a_2957_);
return v___x_2981_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg___boxed(lean_object* v_info_2982_, lean_object* v_depTrace_2983_, lean_object* v_depHash_2984_, lean_object* v_oldTrace_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_){
_start:
{
lean_object* v_res_2989_; 
v_res_2989_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_2982_, v_depTrace_2983_, v_depHash_2984_, v_oldTrace_2985_, v_a_2986_, v_a_2987_);
lean_dec_ref(v_a_2986_);
lean_dec_ref(v_oldTrace_2985_);
lean_dec(v_depHash_2984_);
lean_dec_ref(v_depTrace_2983_);
lean_dec_ref(v_info_2982_);
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(lean_object* v_a_2990_, lean_object* v_info_2991_, lean_object* v_depTrace_2992_, lean_object* v_savedTrace_2993_, lean_object* v_oldTrace_2994_, lean_object* v_a_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_){
_start:
{
if (lean_obj_tag(v_savedTrace_2993_) == 2)
{
lean_object* v_data_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3051_; 
v_data_3001_ = lean_ctor_get(v_savedTrace_2993_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v_savedTrace_2993_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3003_ = v_savedTrace_2993_;
v_isShared_3004_ = v_isSharedCheck_3051_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_data_3001_);
lean_dec(v_savedTrace_2993_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3051_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
uint64_t v_depHash_3005_; lean_object* v_log_3006_; lean_object* v___x_3007_; lean_object* v___x_3009_; 
v_depHash_3005_ = lean_ctor_get_uint64(v_data_3001_, sizeof(void*)*3);
v_log_3006_ = lean_ctor_get(v_data_3001_, 2);
lean_inc_ref(v_log_3006_);
lean_dec_ref(v_data_3001_);
v___x_3007_ = lean_box_uint64(v_depHash_3005_);
if (v_isShared_3004_ == 0)
{
lean_ctor_set_tag(v___x_3003_, 1);
lean_ctor_set(v___x_3003_, 0, v___x_3007_);
v___x_3009_ = v___x_3003_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v___x_3007_);
v___x_3009_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
lean_object* v___x_3010_; lean_object* v_a_3011_; lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3049_; 
v___x_3010_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_2991_, v_depTrace_2992_, v___x_3009_, v_oldTrace_2994_, v_a_2998_, v_a_2999_);
lean_dec_ref(v___x_3009_);
v_a_3011_ = lean_ctor_get(v___x_3010_, 0);
v_a_3012_ = lean_ctor_get(v___x_3010_, 1);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3014_ = v___x_3010_;
v_isShared_3015_ = v_isSharedCheck_3049_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_inc(v_a_3011_);
lean_dec(v___x_3010_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3049_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___y_3017_; uint8_t v___x_3021_; uint8_t v___x_3022_; uint8_t v___x_3023_; 
v___x_3021_ = 0;
v___x_3022_ = lean_unbox(v_a_3011_);
v___x_3023_ = l_Lake_instDecidableEqOutputStatus(v___x_3022_, v___x_3021_);
if (v___x_3023_ == 0)
{
lean_object* v_log_3024_; uint8_t v_action_3025_; uint8_t v_wantsRebuild_3026_; lean_object* v_trace_3027_; lean_object* v_buildTime_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3048_; 
v_log_3024_ = lean_ctor_get(v_a_3012_, 0);
v_action_3025_ = lean_ctor_get_uint8(v_a_3012_, sizeof(void*)*3);
v_wantsRebuild_3026_ = lean_ctor_get_uint8(v_a_3012_, sizeof(void*)*3 + 1);
v_trace_3027_ = lean_ctor_get(v_a_3012_, 1);
v_buildTime_3028_ = lean_ctor_get(v_a_3012_, 2);
v_isSharedCheck_3048_ = !lean_is_exclusive(v_a_3012_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_3030_ = v_a_3012_;
v_isShared_3031_ = v_isSharedCheck_3048_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_buildTime_3028_);
lean_inc(v_trace_3027_);
lean_inc(v_log_3024_);
lean_dec(v_a_3012_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3048_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
uint8_t v___x_3032_; uint8_t v___x_3033_; lean_object* v___x_3035_; 
v___x_3032_ = 1;
v___x_3033_ = l_Lake_JobAction_merge(v_action_3025_, v___x_3032_);
if (v_isShared_3031_ == 0)
{
v___x_3035_ = v___x_3030_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v_log_3024_);
lean_ctor_set(v_reuseFailAlloc_3047_, 1, v_trace_3027_);
lean_ctor_set(v_reuseFailAlloc_3047_, 2, v_buildTime_3028_);
lean_ctor_set_uint8(v_reuseFailAlloc_3047_, sizeof(void*)*3 + 1, v_wantsRebuild_3026_);
v___x_3035_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3036_; 
lean_ctor_set_uint8(v___x_3035_, sizeof(void*)*3, v___x_3033_);
v___x_3036_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_3006_, v_a_2990_, v_a_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v___x_3035_);
lean_dec_ref(v_log_3006_);
if (lean_obj_tag(v___x_3036_) == 0)
{
lean_object* v_a_3037_; 
v_a_3037_ = lean_ctor_get(v___x_3036_, 1);
lean_inc(v_a_3037_);
lean_dec_ref(v___x_3036_);
v___y_3017_ = v_a_3037_;
goto v___jp_3016_;
}
else
{
lean_object* v_a_3038_; lean_object* v_a_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3046_; 
lean_del_object(v___x_3014_);
lean_dec(v_a_3011_);
v_a_3038_ = lean_ctor_get(v___x_3036_, 0);
v_a_3039_ = lean_ctor_get(v___x_3036_, 1);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3041_ = v___x_3036_;
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_a_3039_);
lean_inc(v_a_3038_);
lean_dec(v___x_3036_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3044_; 
if (v_isShared_3042_ == 0)
{
v___x_3044_ = v___x_3041_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_a_3038_);
lean_ctor_set(v_reuseFailAlloc_3045_, 1, v_a_3039_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_log_3006_);
v___y_3017_ = v_a_3012_;
goto v___jp_3016_;
}
v___jp_3016_:
{
lean_object* v___x_3019_; 
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 1, v___y_3017_);
v___x_3019_ = v___x_3014_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_a_3011_);
lean_ctor_set(v_reuseFailAlloc_3020_, 1, v___y_3017_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
}
}
}
}
else
{
lean_object* v_toBuildConfig_3052_; uint8_t v_oldMode_3053_; 
lean_dec(v_savedTrace_2993_);
v_toBuildConfig_3052_ = lean_ctor_get(v_a_2998_, 0);
v_oldMode_3053_ = lean_ctor_get_uint8(v_toBuildConfig_3052_, sizeof(void*)*2);
if (v_oldMode_3053_ == 0)
{
uint8_t v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3054_ = 0;
v___x_3055_ = lean_box(v___x_3054_);
v___x_3056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3055_);
lean_ctor_set(v___x_3056_, 1, v_a_2999_);
return v___x_3056_;
}
else
{
uint8_t v___x_3057_; 
v___x_3057_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_2991_, v_oldTrace_2994_);
if (v___x_3057_ == 0)
{
uint8_t v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3058_ = 0;
v___x_3059_ = lean_box(v___x_3058_);
v___x_3060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3060_, 0, v___x_3059_);
lean_ctor_set(v___x_3060_, 1, v_a_2999_);
return v___x_3060_;
}
else
{
uint8_t v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3061_ = 1;
v___x_3062_ = lean_box(v___x_3061_);
v___x_3063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3062_);
lean_ctor_set(v___x_3063_, 1, v_a_2999_);
return v___x_3063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0___boxed(lean_object* v_a_3064_, lean_object* v_info_3065_, lean_object* v_depTrace_3066_, lean_object* v_savedTrace_3067_, lean_object* v_oldTrace_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_, lean_object* v_a_3073_, lean_object* v_a_3074_){
_start:
{
lean_object* v_res_3075_; 
v_res_3075_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_3064_, v_info_3065_, v_depTrace_3066_, v_savedTrace_3067_, v_oldTrace_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_, v_a_3073_);
lean_dec_ref(v_a_3072_);
lean_dec(v_a_3071_);
lean_dec(v_a_3070_);
lean_dec(v_a_3069_);
lean_dec_ref(v_oldTrace_3068_);
lean_dec_ref(v_depTrace_3066_);
lean_dec_ref(v_info_3065_);
lean_dec_ref(v_a_3064_);
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27(lean_object* v_file_3077_, lean_object* v_build_3078_, uint8_t v_text_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_){
_start:
{
lean_object* v_a_3088_; lean_object* v_a_3089_; lean_object* v_a_3092_; lean_object* v_log_3125_; uint8_t v_action_3126_; uint8_t v_wantsRebuild_3127_; lean_object* v_trace_3128_; lean_object* v_buildTime_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3160_; 
v_log_3125_ = lean_ctor_get(v_a_3085_, 0);
v_action_3126_ = lean_ctor_get_uint8(v_a_3085_, sizeof(void*)*3);
v_wantsRebuild_3127_ = lean_ctor_get_uint8(v_a_3085_, sizeof(void*)*3 + 1);
v_trace_3128_ = lean_ctor_get(v_a_3085_, 1);
v_buildTime_3129_ = lean_ctor_get(v_a_3085_, 2);
v_isSharedCheck_3160_ = !lean_is_exclusive(v_a_3085_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3131_ = v_a_3085_;
v_isShared_3132_ = v_isSharedCheck_3160_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_buildTime_3129_);
lean_inc(v_trace_3128_);
lean_inc(v_log_3125_);
lean_dec(v_a_3085_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3160_;
goto v_resetjp_3130_;
}
v___jp_3087_:
{
lean_object* v___x_3090_; 
v___x_3090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3090_, 0, v_a_3088_);
lean_ctor_set(v___x_3090_, 1, v_a_3089_);
return v___x_3090_;
}
v___jp_3091_:
{
lean_object* v___x_3093_; 
v___x_3093_ = l_Lake_fetchFileTrace___redArg(v_file_3077_, v_text_3079_, v_a_3084_, v_a_3092_);
lean_dec_ref(v_a_3084_);
if (lean_obj_tag(v___x_3093_) == 0)
{
lean_object* v_a_3094_; lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3115_; 
v_a_3094_ = lean_ctor_get(v___x_3093_, 1);
v_a_3095_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3097_ = v___x_3093_;
v_isShared_3098_ = v_isSharedCheck_3115_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3094_);
lean_inc(v_a_3095_);
lean_dec(v___x_3093_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3115_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v_log_3099_; uint8_t v_action_3100_; uint8_t v_wantsRebuild_3101_; lean_object* v_buildTime_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3113_; 
v_log_3099_ = lean_ctor_get(v_a_3094_, 0);
v_action_3100_ = lean_ctor_get_uint8(v_a_3094_, sizeof(void*)*3);
v_wantsRebuild_3101_ = lean_ctor_get_uint8(v_a_3094_, sizeof(void*)*3 + 1);
v_buildTime_3102_ = lean_ctor_get(v_a_3094_, 2);
v_isSharedCheck_3113_ = !lean_is_exclusive(v_a_3094_);
if (v_isSharedCheck_3113_ == 0)
{
lean_object* v_unused_3114_; 
v_unused_3114_ = lean_ctor_get(v_a_3094_, 1);
lean_dec(v_unused_3114_);
v___x_3104_ = v_a_3094_;
v_isShared_3105_ = v_isSharedCheck_3113_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_buildTime_3102_);
lean_inc(v_log_3099_);
lean_dec(v_a_3094_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3113_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3106_; lean_object* v___x_3108_; 
v___x_3106_ = lean_box(0);
if (v_isShared_3105_ == 0)
{
lean_ctor_set(v___x_3104_, 1, v_a_3095_);
v___x_3108_ = v___x_3104_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_log_3099_);
lean_ctor_set(v_reuseFailAlloc_3112_, 1, v_a_3095_);
lean_ctor_set(v_reuseFailAlloc_3112_, 2, v_buildTime_3102_);
lean_ctor_set_uint8(v_reuseFailAlloc_3112_, sizeof(void*)*3, v_action_3100_);
lean_ctor_set_uint8(v_reuseFailAlloc_3112_, sizeof(void*)*3 + 1, v_wantsRebuild_3101_);
v___x_3108_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
lean_object* v___x_3110_; 
if (v_isShared_3098_ == 0)
{
lean_ctor_set(v___x_3097_, 1, v___x_3108_);
lean_ctor_set(v___x_3097_, 0, v___x_3106_);
v___x_3110_ = v___x_3097_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v___x_3106_);
lean_ctor_set(v_reuseFailAlloc_3111_, 1, v___x_3108_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
}
}
else
{
lean_object* v_a_3116_; lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3124_; 
v_a_3116_ = lean_ctor_get(v___x_3093_, 0);
v_a_3117_ = lean_ctor_get(v___x_3093_, 1);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3119_ = v___x_3093_;
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_inc(v_a_3116_);
lean_dec(v___x_3093_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3122_; 
if (v_isShared_3120_ == 0)
{
v___x_3122_ = v___x_3119_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_a_3116_);
lean_ctor_set(v_reuseFailAlloc_3123_, 1, v_a_3117_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
}
v_resetjp_3130_:
{
lean_object* v___x_3133_; lean_object* v_traceFile_3134_; lean_object* v___x_3135_; 
v___x_3133_ = ((lean_object*)(l_Lake_buildFileUnlessUpToDate_x27___closed__0));
lean_inc_ref(v_file_3077_);
v_traceFile_3134_ = lean_string_append(v_file_3077_, v___x_3133_);
lean_inc_ref(v_traceFile_3134_);
v___x_3135_ = l_Lake_readTraceFile(v_traceFile_3134_, v_log_3125_);
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v_a_3136_; lean_object* v_a_3137_; lean_object* v_mtime_3138_; lean_object* v___x_3140_; 
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3136_);
v_a_3137_ = lean_ctor_get(v___x_3135_, 1);
lean_inc(v_a_3137_);
lean_dec_ref(v___x_3135_);
v_mtime_3138_ = lean_ctor_get(v_trace_3128_, 2);
lean_inc_ref(v_trace_3128_);
if (v_isShared_3132_ == 0)
{
lean_ctor_set(v___x_3131_, 0, v_a_3137_);
v___x_3140_ = v___x_3131_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_a_3137_);
lean_ctor_set(v_reuseFailAlloc_3154_, 1, v_trace_3128_);
lean_ctor_set(v_reuseFailAlloc_3154_, 2, v_buildTime_3129_);
lean_ctor_set_uint8(v_reuseFailAlloc_3154_, sizeof(void*)*3, v_action_3126_);
lean_ctor_set_uint8(v_reuseFailAlloc_3154_, sizeof(void*)*3 + 1, v_wantsRebuild_3127_);
v___x_3140_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
lean_object* v___x_3141_; 
v___x_3141_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_3080_, v_file_3077_, v_trace_3128_, v_a_3136_, v_mtime_3138_, v_a_3081_, v_a_3082_, v_a_3083_, v_a_3084_, v___x_3140_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3142_; lean_object* v_a_3143_; uint8_t v___x_3144_; uint8_t v___x_3145_; uint8_t v___x_3146_; 
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3142_);
v_a_3143_ = lean_ctor_get(v___x_3141_, 1);
lean_inc(v_a_3143_);
lean_dec_ref(v___x_3141_);
v___x_3144_ = 0;
v___x_3145_ = lean_unbox(v_a_3142_);
lean_dec(v_a_3142_);
v___x_3146_ = l_Lake_instDecidableEqOutputStatus(v___x_3145_, v___x_3144_);
if (v___x_3146_ == 0)
{
lean_dec_ref(v_traceFile_3134_);
lean_dec_ref(v_trace_3128_);
lean_dec(v_a_3083_);
lean_dec(v_a_3082_);
lean_dec(v_a_3081_);
lean_dec_ref(v_a_3080_);
lean_dec_ref(v_build_3078_);
v_a_3092_ = v_a_3143_;
goto v___jp_3091_;
}
else
{
uint8_t v___x_3147_; lean_object* v___x_3148_; 
v___x_3147_ = 3;
lean_inc_ref(v_a_3084_);
lean_inc_ref(v_file_3077_);
v___x_3148_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(v_build_3078_, v_file_3077_, v_a_3080_, v_trace_3128_, v_traceFile_3134_, v___x_3147_, v_a_3081_, v_a_3082_, v_a_3083_, v_a_3084_, v_a_3143_);
lean_dec_ref(v_trace_3128_);
if (lean_obj_tag(v___x_3148_) == 0)
{
lean_object* v_a_3149_; 
v_a_3149_ = lean_ctor_get(v___x_3148_, 1);
lean_inc(v_a_3149_);
lean_dec_ref(v___x_3148_);
v_a_3092_ = v_a_3149_;
goto v___jp_3091_;
}
else
{
lean_object* v_a_3150_; lean_object* v_a_3151_; 
lean_dec_ref(v_a_3084_);
lean_dec_ref(v_file_3077_);
v_a_3150_ = lean_ctor_get(v___x_3148_, 0);
lean_inc(v_a_3150_);
v_a_3151_ = lean_ctor_get(v___x_3148_, 1);
lean_inc(v_a_3151_);
lean_dec_ref(v___x_3148_);
v_a_3088_ = v_a_3150_;
v_a_3089_ = v_a_3151_;
goto v___jp_3087_;
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v_a_3153_; 
lean_dec_ref(v_traceFile_3134_);
lean_dec_ref(v_trace_3128_);
lean_dec_ref(v_a_3084_);
lean_dec(v_a_3083_);
lean_dec(v_a_3082_);
lean_dec(v_a_3081_);
lean_dec_ref(v_a_3080_);
lean_dec_ref(v_build_3078_);
lean_dec_ref(v_file_3077_);
v_a_3152_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3152_);
v_a_3153_ = lean_ctor_get(v___x_3141_, 1);
lean_inc(v_a_3153_);
lean_dec_ref(v___x_3141_);
v_a_3088_ = v_a_3152_;
v_a_3089_ = v_a_3153_;
goto v___jp_3087_;
}
}
}
else
{
lean_object* v_a_3155_; lean_object* v_a_3156_; lean_object* v___x_3158_; 
lean_dec_ref(v_traceFile_3134_);
lean_dec_ref(v_a_3084_);
lean_dec(v_a_3083_);
lean_dec(v_a_3082_);
lean_dec(v_a_3081_);
lean_dec_ref(v_a_3080_);
lean_dec_ref(v_build_3078_);
lean_dec_ref(v_file_3077_);
v_a_3155_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3155_);
v_a_3156_ = lean_ctor_get(v___x_3135_, 1);
lean_inc(v_a_3156_);
lean_dec_ref(v___x_3135_);
if (v_isShared_3132_ == 0)
{
lean_ctor_set(v___x_3131_, 0, v_a_3156_);
v___x_3158_ = v___x_3131_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v_a_3156_);
lean_ctor_set(v_reuseFailAlloc_3159_, 1, v_trace_3128_);
lean_ctor_set(v_reuseFailAlloc_3159_, 2, v_buildTime_3129_);
lean_ctor_set_uint8(v_reuseFailAlloc_3159_, sizeof(void*)*3, v_action_3126_);
lean_ctor_set_uint8(v_reuseFailAlloc_3159_, sizeof(void*)*3 + 1, v_wantsRebuild_3127_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
v_a_3088_ = v_a_3155_;
v_a_3089_ = v___x_3158_;
goto v___jp_3087_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27___boxed(lean_object* v_file_3161_, lean_object* v_build_3162_, lean_object* v_text_3163_, lean_object* v_a_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_){
_start:
{
uint8_t v_text_boxed_3171_; lean_object* v_res_3172_; 
v_text_boxed_3171_ = lean_unbox(v_text_3163_);
v_res_3172_ = l_Lake_buildFileUnlessUpToDate_x27(v_file_3161_, v_build_3162_, v_text_boxed_3171_, v_a_3164_, v_a_3165_, v_a_3166_, v_a_3167_, v_a_3168_, v_a_3169_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0(lean_object* v_a_3173_, lean_object* v_info_3174_, lean_object* v_depTrace_3175_, lean_object* v_depHash_3176_, lean_object* v_oldTrace_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_){
_start:
{
lean_object* v___x_3184_; 
v___x_3184_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_3174_, v_depTrace_3175_, v_depHash_3176_, v_oldTrace_3177_, v_a_3181_, v_a_3182_);
return v___x_3184_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___boxed(lean_object* v_a_3185_, lean_object* v_info_3186_, lean_object* v_depTrace_3187_, lean_object* v_depHash_3188_, lean_object* v_oldTrace_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_, lean_object* v_a_3194_, lean_object* v_a_3195_){
_start:
{
lean_object* v_res_3196_; 
v_res_3196_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0(v_a_3185_, v_info_3186_, v_depTrace_3187_, v_depHash_3188_, v_oldTrace_3189_, v_a_3190_, v_a_3191_, v_a_3192_, v_a_3193_, v_a_3194_);
lean_dec_ref(v_a_3193_);
lean_dec(v_a_3192_);
lean_dec(v_a_3191_);
lean_dec(v_a_3190_);
lean_dec_ref(v_oldTrace_3189_);
lean_dec(v_depHash_3188_);
lean_dec_ref(v_depTrace_3187_);
lean_dec_ref(v_info_3186_);
lean_dec_ref(v_a_3185_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0(lean_object* v_file_3197_, uint64_t v___x_3198_, lean_object* v___x_3199_, uint8_t v_useLocalFile_3200_, lean_object* v___x_3201_, lean_object* v_____r_3202_){
_start:
{
lean_object* v___y_3205_; lean_object* v___y_3206_; lean_object* v___y_3211_; lean_object* v___x_3212_; 
lean_inc_ref(v_file_3197_);
v___x_3212_ = l_Lake_writeFileHash(v_file_3197_, v___x_3198_);
if (lean_obj_tag(v___x_3212_) == 0)
{
lean_object* v___x_3213_; 
lean_dec_ref(v___x_3212_);
v___x_3213_ = lean_io_metadata(v___x_3201_);
if (lean_obj_tag(v___x_3213_) == 0)
{
lean_object* v_a_3214_; lean_object* v_modified_3215_; 
v_a_3214_ = lean_ctor_get(v___x_3213_, 0);
lean_inc(v_a_3214_);
lean_dec_ref(v___x_3213_);
v_modified_3215_ = lean_ctor_get(v_a_3214_, 1);
lean_inc_ref(v_modified_3215_);
lean_dec(v_a_3214_);
v___y_3211_ = v_modified_3215_;
goto v___jp_3210_;
}
else
{
lean_object* v___x_3216_; 
lean_dec_ref(v___x_3213_);
v___x_3216_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___y_3211_ = v___x_3216_;
goto v___jp_3210_;
}
}
else
{
lean_object* v_a_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3224_; 
lean_dec_ref(v___x_3201_);
lean_dec_ref(v___x_3199_);
lean_dec_ref(v_file_3197_);
v_a_3217_ = lean_ctor_get(v___x_3212_, 0);
v_isSharedCheck_3224_ = !lean_is_exclusive(v___x_3212_);
if (v_isSharedCheck_3224_ == 0)
{
v___x_3219_ = v___x_3212_;
v_isShared_3220_ = v_isSharedCheck_3224_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_a_3217_);
lean_dec(v___x_3212_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3224_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3222_; 
if (v_isShared_3220_ == 0)
{
v___x_3222_ = v___x_3219_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v_a_3217_);
v___x_3222_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
return v___x_3222_;
}
}
}
v___jp_3204_:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3207_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3199_);
lean_ctor_set(v___x_3207_, 1, v___y_3206_);
lean_ctor_set(v___x_3207_, 2, v_file_3197_);
lean_ctor_set(v___x_3207_, 3, v___y_3205_);
v___x_3208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3207_);
v___x_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3208_);
return v___x_3209_;
}
v___jp_3210_:
{
if (v_useLocalFile_3200_ == 0)
{
v___y_3205_ = v___y_3211_;
v___y_3206_ = v___x_3201_;
goto v___jp_3204_;
}
else
{
lean_dec_ref(v___x_3201_);
lean_inc_ref(v_file_3197_);
v___y_3205_ = v___y_3211_;
v___y_3206_ = v_file_3197_;
goto v___jp_3204_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0___boxed(lean_object* v_file_3225_, lean_object* v___x_3226_, lean_object* v___x_3227_, lean_object* v_useLocalFile_3228_, lean_object* v___x_3229_, lean_object* v_____r_3230_, lean_object* v___y_3231_){
_start:
{
uint64_t v___x_3808__boxed_3232_; uint8_t v_useLocalFile_boxed_3233_; lean_object* v_res_3234_; 
v___x_3808__boxed_3232_ = lean_unbox_uint64(v___x_3226_);
lean_dec_ref(v___x_3226_);
v_useLocalFile_boxed_3233_ = lean_unbox(v_useLocalFile_3228_);
v_res_3234_ = l_Lake_Cache_saveArtifact___lam__0(v_file_3225_, v___x_3808__boxed_3232_, v___x_3227_, v_useLocalFile_boxed_3233_, v___x_3229_, v_____r_3230_);
return v_res_3234_;
}
}
static lean_object* _init_l_Lake_Cache_saveArtifact___closed__3(void){
_start:
{
lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3240_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__2));
v___x_3241_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3241_, 0, v___x_3240_);
lean_ctor_set(v___x_3241_, 1, v___x_3240_);
lean_ctor_set(v___x_3241_, 2, v___x_3240_);
return v___x_3241_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact(lean_object* v_cache_3242_, lean_object* v_file_3243_, lean_object* v_ext_3244_, uint8_t v_text_3245_, uint8_t v_exe_3246_, uint8_t v_useLocalFile_3247_){
_start:
{
lean_object* v_a_3250_; lean_object* v___y_3257_; uint8_t v___x_3268_; 
v___x_3268_ = 1;
if (v_text_3245_ == 0)
{
lean_object* v___x_3269_; 
v___x_3269_ = l_IO_FS_readBinFile(v_file_3243_);
if (lean_obj_tag(v___x_3269_) == 0)
{
lean_object* v_a_3270_; uint64_t v___x_3271_; uint64_t v___x_3272_; uint64_t v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___y_3278_; lean_object* v___x_3298_; lean_object* v___x_3299_; uint8_t v___x_3300_; 
v_a_3270_ = lean_ctor_get(v___x_3269_, 0);
lean_inc(v_a_3270_);
lean_dec_ref(v___x_3269_);
v___x_3271_ = l_Lake_Hash_nil;
v___x_3272_ = lean_byte_array_hash(v_a_3270_);
v___x_3273_ = lean_uint64_mix_hash(v___x_3271_, v___x_3272_);
lean_inc_ref(v_ext_3244_);
v___x_3274_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3274_, 0, v_ext_3244_);
lean_ctor_set_uint64(v___x_3274_, sizeof(void*)*1, v___x_3273_);
v___x_3275_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__1));
v___x_3276_ = l_System_FilePath_join(v_cache_3242_, v___x_3275_);
v___x_3298_ = lean_string_utf8_byte_size(v_ext_3244_);
v___x_3299_ = lean_unsigned_to_nat(0u);
v___x_3300_ = lean_nat_dec_eq(v___x_3298_, v___x_3299_);
if (v___x_3300_ == 0)
{
lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; 
v___x_3301_ = l_Lake_Hash_hex(v___x_3273_);
v___x_3302_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_3303_ = lean_string_append(v___x_3301_, v___x_3302_);
v___x_3304_ = lean_string_append(v___x_3303_, v_ext_3244_);
lean_dec_ref(v_ext_3244_);
v___y_3278_ = v___x_3304_;
goto v___jp_3277_;
}
else
{
lean_object* v___x_3305_; 
lean_dec_ref(v_ext_3244_);
v___x_3305_ = l_Lake_Hash_hex(v___x_3273_);
v___y_3278_ = v___x_3305_;
goto v___jp_3277_;
}
v___jp_3277_:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; 
v___x_3279_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_3279_, 0, v___x_3268_);
lean_ctor_set_uint8(v___x_3279_, 1, v_text_3245_);
lean_ctor_set_uint8(v___x_3279_, 2, v_exe_3246_);
lean_inc_ref_n(v___x_3279_, 2);
v___x_3280_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3279_);
lean_ctor_set(v___x_3280_, 1, v___x_3279_);
lean_ctor_set(v___x_3280_, 2, v___x_3279_);
v___x_3281_ = l_IO_setAccessRights(v_file_3243_, v___x_3280_);
if (lean_obj_tag(v___x_3281_) == 0)
{
lean_object* v___x_3282_; uint8_t v___x_3283_; 
lean_dec_ref(v___x_3281_);
v___x_3282_ = l_Lake_joinRelative(v___x_3276_, v___y_3278_);
v___x_3283_ = l_System_FilePath_pathExists(v___x_3282_);
if (v___x_3283_ == 0)
{
lean_object* v___x_3284_; 
lean_inc_ref(v___x_3282_);
v___x_3284_ = l_Lake_createParentDirs(v___x_3282_);
if (lean_obj_tag(v___x_3284_) == 0)
{
lean_object* v___x_3285_; 
lean_dec_ref(v___x_3284_);
v___x_3285_ = lean_io_hard_link(v_file_3243_, v___x_3282_);
if (lean_obj_tag(v___x_3285_) == 0)
{
lean_object* v___x_3286_; lean_object* v___x_3287_; 
lean_dec_ref(v___x_3285_);
lean_dec_ref(v___x_3280_);
lean_dec(v_a_3270_);
v___x_3286_ = lean_box(0);
v___x_3287_ = l_Lake_Cache_saveArtifact___lam__0(v_file_3243_, v___x_3273_, v___x_3274_, v_useLocalFile_3247_, v___x_3282_, v___x_3286_);
v___y_3257_ = v___x_3287_;
goto v___jp_3256_;
}
else
{
lean_object* v___x_3288_; 
lean_dec_ref(v___x_3285_);
v___x_3288_ = l_IO_FS_writeBinFile(v___x_3282_, v_a_3270_);
lean_dec(v_a_3270_);
if (lean_obj_tag(v___x_3288_) == 0)
{
lean_object* v___x_3289_; 
lean_dec_ref(v___x_3288_);
v___x_3289_ = l_IO_setAccessRights(v___x_3282_, v___x_3280_);
lean_dec_ref(v___x_3280_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v_a_3290_; lean_object* v___x_3291_; 
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
lean_inc(v_a_3290_);
lean_dec_ref(v___x_3289_);
v___x_3291_ = l_Lake_Cache_saveArtifact___lam__0(v_file_3243_, v___x_3273_, v___x_3274_, v_useLocalFile_3247_, v___x_3282_, v_a_3290_);
v___y_3257_ = v___x_3291_;
goto v___jp_3256_;
}
else
{
lean_object* v_a_3292_; 
lean_dec_ref(v___x_3282_);
lean_dec_ref(v___x_3274_);
lean_dec_ref(v_file_3243_);
v_a_3292_ = lean_ctor_get(v___x_3289_, 0);
lean_inc(v_a_3292_);
lean_dec_ref(v___x_3289_);
v_a_3250_ = v_a_3292_;
goto v___jp_3249_;
}
}
else
{
lean_object* v_a_3293_; 
lean_dec_ref(v___x_3282_);
lean_dec_ref(v___x_3280_);
lean_dec_ref(v___x_3274_);
lean_dec_ref(v_file_3243_);
v_a_3293_ = lean_ctor_get(v___x_3288_, 0);
lean_inc(v_a_3293_);
lean_dec_ref(v___x_3288_);
v_a_3250_ = v_a_3293_;
goto v___jp_3249_;
}
}
}
else
{
lean_object* v_a_3294_; 
lean_dec_ref(v___x_3282_);
lean_dec_ref(v___x_3280_);
lean_dec_ref(v___x_3274_);
lean_dec(v_a_3270_);
lean_dec_ref(v_file_3243_);
v_a_3294_ = lean_ctor_get(v___x_3284_, 0);
lean_inc(v_a_3294_);
lean_dec_ref(v___x_3284_);
v_a_3250_ = v_a_3294_;
goto v___jp_3249_;
}
}
else
{
lean_object* v___x_3295_; lean_object* v___x_3296_; 
lean_dec_ref(v___x_3280_);
lean_dec(v_a_3270_);
v___x_3295_ = lean_box(0);
v___x_3296_ = l_Lake_Cache_saveArtifact___lam__0(v_file_3243_, v___x_3273_, v___x_3274_, v_useLocalFile_3247_, v___x_3282_, v___x_3295_);
v___y_3257_ = v___x_3296_;
goto v___jp_3256_;
}
}
else
{
lean_object* v_a_3297_; 
lean_dec_ref(v___x_3280_);
lean_dec_ref(v___y_3278_);
lean_dec_ref(v___x_3276_);
lean_dec_ref(v___x_3274_);
lean_dec(v_a_3270_);
lean_dec_ref(v_file_3243_);
v_a_3297_ = lean_ctor_get(v___x_3281_, 0);
lean_inc(v_a_3297_);
lean_dec_ref(v___x_3281_);
v_a_3250_ = v_a_3297_;
goto v___jp_3249_;
}
}
}
else
{
lean_object* v_a_3306_; 
lean_dec_ref(v_ext_3244_);
lean_dec_ref(v_file_3243_);
lean_dec_ref(v_cache_3242_);
v_a_3306_ = lean_ctor_get(v___x_3269_, 0);
lean_inc(v_a_3306_);
lean_dec_ref(v___x_3269_);
v_a_3250_ = v_a_3306_;
goto v___jp_3249_;
}
}
else
{
lean_object* v___x_3307_; 
v___x_3307_ = l_IO_FS_readFile(v_file_3243_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v_a_3308_; lean_object* v___x_3309_; uint64_t v___x_3310_; uint64_t v___x_3311_; uint64_t v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___y_3317_; lean_object* v___x_3333_; lean_object* v___x_3334_; uint8_t v___x_3335_; 
v_a_3308_ = lean_ctor_get(v___x_3307_, 0);
lean_inc(v_a_3308_);
lean_dec_ref(v___x_3307_);
v___x_3309_ = l_String_crlfToLf(v_a_3308_);
lean_dec(v_a_3308_);
v___x_3310_ = l_Lake_Hash_nil;
v___x_3311_ = lean_string_hash(v___x_3309_);
v___x_3312_ = lean_uint64_mix_hash(v___x_3310_, v___x_3311_);
lean_inc_ref(v_ext_3244_);
v___x_3313_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3313_, 0, v_ext_3244_);
lean_ctor_set_uint64(v___x_3313_, sizeof(void*)*1, v___x_3312_);
v___x_3314_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__1));
v___x_3315_ = l_System_FilePath_join(v_cache_3242_, v___x_3314_);
v___x_3333_ = lean_string_utf8_byte_size(v_ext_3244_);
v___x_3334_ = lean_unsigned_to_nat(0u);
v___x_3335_ = lean_nat_dec_eq(v___x_3333_, v___x_3334_);
if (v___x_3335_ == 0)
{
lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3336_ = l_Lake_Hash_hex(v___x_3312_);
v___x_3337_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_3338_ = lean_string_append(v___x_3336_, v___x_3337_);
v___x_3339_ = lean_string_append(v___x_3338_, v_ext_3244_);
lean_dec_ref(v_ext_3244_);
v___y_3317_ = v___x_3339_;
goto v___jp_3316_;
}
else
{
lean_object* v___x_3340_; 
lean_dec_ref(v_ext_3244_);
v___x_3340_ = l_Lake_Hash_hex(v___x_3312_);
v___y_3317_ = v___x_3340_;
goto v___jp_3316_;
}
v___jp_3316_:
{
lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3318_ = lean_obj_once(&l_Lake_Cache_saveArtifact___closed__3, &l_Lake_Cache_saveArtifact___closed__3_once, _init_l_Lake_Cache_saveArtifact___closed__3);
v___x_3319_ = l_IO_setAccessRights(v_file_3243_, v___x_3318_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_object* v___x_3320_; uint8_t v___x_3321_; 
lean_dec_ref(v___x_3319_);
v___x_3320_ = l_Lake_joinRelative(v___x_3315_, v___y_3317_);
v___x_3321_ = l_System_FilePath_pathExists(v___x_3320_);
if (v___x_3321_ == 0)
{
lean_object* v___x_3322_; 
lean_inc_ref(v___x_3320_);
v___x_3322_ = l_Lake_createParentDirs(v___x_3320_);
if (lean_obj_tag(v___x_3322_) == 0)
{
lean_object* v___x_3323_; 
lean_dec_ref(v___x_3322_);
v___x_3323_ = l_IO_FS_writeFile(v___x_3320_, v___x_3309_);
lean_dec_ref(v___x_3309_);
if (lean_obj_tag(v___x_3323_) == 0)
{
lean_object* v___x_3324_; 
lean_dec_ref(v___x_3323_);
v___x_3324_ = l_IO_setAccessRights(v___x_3320_, v___x_3318_);
if (lean_obj_tag(v___x_3324_) == 0)
{
lean_object* v_a_3325_; lean_object* v___x_3326_; 
v_a_3325_ = lean_ctor_get(v___x_3324_, 0);
lean_inc(v_a_3325_);
lean_dec_ref(v___x_3324_);
v___x_3326_ = l_Lake_Cache_saveArtifact___lam__0(v_file_3243_, v___x_3312_, v___x_3313_, v_useLocalFile_3247_, v___x_3320_, v_a_3325_);
v___y_3257_ = v___x_3326_;
goto v___jp_3256_;
}
else
{
lean_object* v_a_3327_; 
lean_dec_ref(v___x_3320_);
lean_dec_ref(v___x_3313_);
lean_dec_ref(v_file_3243_);
v_a_3327_ = lean_ctor_get(v___x_3324_, 0);
lean_inc(v_a_3327_);
lean_dec_ref(v___x_3324_);
v_a_3250_ = v_a_3327_;
goto v___jp_3249_;
}
}
else
{
lean_object* v_a_3328_; 
lean_dec_ref(v___x_3320_);
lean_dec_ref(v___x_3313_);
lean_dec_ref(v_file_3243_);
v_a_3328_ = lean_ctor_get(v___x_3323_, 0);
lean_inc(v_a_3328_);
lean_dec_ref(v___x_3323_);
v_a_3250_ = v_a_3328_;
goto v___jp_3249_;
}
}
else
{
lean_object* v_a_3329_; 
lean_dec_ref(v___x_3320_);
lean_dec_ref(v___x_3313_);
lean_dec_ref(v___x_3309_);
lean_dec_ref(v_file_3243_);
v_a_3329_ = lean_ctor_get(v___x_3322_, 0);
lean_inc(v_a_3329_);
lean_dec_ref(v___x_3322_);
v_a_3250_ = v_a_3329_;
goto v___jp_3249_;
}
}
else
{
lean_object* v___x_3330_; lean_object* v___x_3331_; 
lean_dec_ref(v___x_3309_);
v___x_3330_ = lean_box(0);
v___x_3331_ = l_Lake_Cache_saveArtifact___lam__0(v_file_3243_, v___x_3312_, v___x_3313_, v_useLocalFile_3247_, v___x_3320_, v___x_3330_);
v___y_3257_ = v___x_3331_;
goto v___jp_3256_;
}
}
else
{
lean_object* v_a_3332_; 
lean_dec_ref(v___y_3317_);
lean_dec_ref(v___x_3315_);
lean_dec_ref(v___x_3313_);
lean_dec_ref(v___x_3309_);
lean_dec_ref(v_file_3243_);
v_a_3332_ = lean_ctor_get(v___x_3319_, 0);
lean_inc(v_a_3332_);
lean_dec_ref(v___x_3319_);
v_a_3250_ = v_a_3332_;
goto v___jp_3249_;
}
}
}
else
{
lean_object* v_a_3341_; 
lean_dec_ref(v_ext_3244_);
lean_dec_ref(v_file_3243_);
lean_dec_ref(v_cache_3242_);
v_a_3341_ = lean_ctor_get(v___x_3307_, 0);
lean_inc(v_a_3341_);
lean_dec_ref(v___x_3307_);
v_a_3250_ = v_a_3341_;
goto v___jp_3249_;
}
}
v___jp_3249_:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; 
v___x_3251_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__0));
v___x_3252_ = lean_io_error_to_string(v_a_3250_);
v___x_3253_ = lean_string_append(v___x_3251_, v___x_3252_);
lean_dec_ref(v___x_3252_);
v___x_3254_ = lean_mk_io_user_error(v___x_3253_);
v___x_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3254_);
return v___x_3255_;
}
v___jp_3256_:
{
if (lean_obj_tag(v___y_3257_) == 0)
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3266_; 
v_a_3258_ = lean_ctor_get(v___y_3257_, 0);
v_isSharedCheck_3266_ = !lean_is_exclusive(v___y_3257_);
if (v_isSharedCheck_3266_ == 0)
{
v___x_3260_ = v___y_3257_;
v_isShared_3261_ = v_isSharedCheck_3266_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___y_3257_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3266_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v_a_3262_; lean_object* v___x_3264_; 
v_a_3262_ = lean_ctor_get(v_a_3258_, 0);
lean_inc(v_a_3262_);
lean_dec(v_a_3258_);
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 0, v_a_3262_);
v___x_3264_ = v___x_3260_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3262_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
}
else
{
lean_object* v_a_3267_; 
v_a_3267_ = lean_ctor_get(v___y_3257_, 0);
lean_inc(v_a_3267_);
lean_dec_ref(v___y_3257_);
v_a_3250_ = v_a_3267_;
goto v___jp_3249_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___boxed(lean_object* v_cache_3342_, lean_object* v_file_3343_, lean_object* v_ext_3344_, lean_object* v_text_3345_, lean_object* v_exe_3346_, lean_object* v_useLocalFile_3347_, lean_object* v_a_3348_){
_start:
{
uint8_t v_text_boxed_3349_; uint8_t v_exe_boxed_3350_; uint8_t v_useLocalFile_boxed_3351_; lean_object* v_res_3352_; 
v_text_boxed_3349_ = lean_unbox(v_text_3345_);
v_exe_boxed_3350_ = lean_unbox(v_exe_3346_);
v_useLocalFile_boxed_3351_ = lean_unbox(v_useLocalFile_3347_);
v_res_3352_ = l_Lake_Cache_saveArtifact(v_cache_3342_, v_file_3343_, v_ext_3344_, v_text_boxed_3349_, v_exe_boxed_3350_, v_useLocalFile_boxed_3351_);
return v_res_3352_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0(lean_object* v_x_3353_){
_start:
{
lean_object* v_lakeCache_3354_; 
v_lakeCache_3354_ = lean_ctor_get(v_x_3353_, 3);
lean_inc_ref(v_lakeCache_3354_);
return v_lakeCache_3354_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0___boxed(lean_object* v_x_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = l_Lake_cacheArtifact___redArg___lam__0(v_x_3355_);
lean_dec_ref(v_x_3355_);
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1(lean_object* v_file_3357_, lean_object* v_ext_3358_, uint8_t v_text_3359_, uint8_t v_exe_3360_, uint8_t v_useLocalFile_3361_, lean_object* v_inst_3362_, lean_object* v_____do__lift_3363_){
_start:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3364_ = lean_box(v_text_3359_);
v___x_3365_ = lean_box(v_exe_3360_);
v___x_3366_ = lean_box(v_useLocalFile_3361_);
v___x_3367_ = lean_alloc_closure((void*)(l_Lake_Cache_saveArtifact___boxed), 7, 6);
lean_closure_set(v___x_3367_, 0, v_____do__lift_3363_);
lean_closure_set(v___x_3367_, 1, v_file_3357_);
lean_closure_set(v___x_3367_, 2, v_ext_3358_);
lean_closure_set(v___x_3367_, 3, v___x_3364_);
lean_closure_set(v___x_3367_, 4, v___x_3365_);
lean_closure_set(v___x_3367_, 5, v___x_3366_);
v___x_3368_ = lean_apply_2(v_inst_3362_, lean_box(0), v___x_3367_);
return v___x_3368_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1___boxed(lean_object* v_file_3369_, lean_object* v_ext_3370_, lean_object* v_text_3371_, lean_object* v_exe_3372_, lean_object* v_useLocalFile_3373_, lean_object* v_inst_3374_, lean_object* v_____do__lift_3375_){
_start:
{
uint8_t v_text_boxed_3376_; uint8_t v_exe_boxed_3377_; uint8_t v_useLocalFile_boxed_3378_; lean_object* v_res_3379_; 
v_text_boxed_3376_ = lean_unbox(v_text_3371_);
v_exe_boxed_3377_ = lean_unbox(v_exe_3372_);
v_useLocalFile_boxed_3378_ = lean_unbox(v_useLocalFile_3373_);
v_res_3379_ = l_Lake_cacheArtifact___redArg___lam__1(v_file_3369_, v_ext_3370_, v_text_boxed_3376_, v_exe_boxed_3377_, v_useLocalFile_boxed_3378_, v_inst_3374_, v_____do__lift_3375_);
return v_res_3379_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg(lean_object* v_inst_3381_, lean_object* v_inst_3382_, lean_object* v_inst_3383_, lean_object* v_file_3384_, lean_object* v_ext_3385_, uint8_t v_text_3386_, uint8_t v_exe_3387_, uint8_t v_useLocalFile_3388_){
_start:
{
lean_object* v_toApplicative_3389_; lean_object* v_toFunctor_3390_; lean_object* v_toBind_3391_; lean_object* v_map_3392_; lean_object* v___f_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___f_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v_toApplicative_3389_ = lean_ctor_get(v_inst_3383_, 0);
v_toFunctor_3390_ = lean_ctor_get(v_toApplicative_3389_, 0);
lean_inc_ref(v_toFunctor_3390_);
v_toBind_3391_ = lean_ctor_get(v_inst_3383_, 1);
lean_inc(v_toBind_3391_);
lean_dec_ref(v_inst_3383_);
v_map_3392_ = lean_ctor_get(v_toFunctor_3390_, 0);
lean_inc(v_map_3392_);
lean_dec_ref(v_toFunctor_3390_);
v___f_3393_ = ((lean_object*)(l_Lake_cacheArtifact___redArg___closed__0));
v___x_3394_ = lean_box(v_text_3386_);
v___x_3395_ = lean_box(v_exe_3387_);
v___x_3396_ = lean_box(v_useLocalFile_3388_);
v___f_3397_ = lean_alloc_closure((void*)(l_Lake_cacheArtifact___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_3397_, 0, v_file_3384_);
lean_closure_set(v___f_3397_, 1, v_ext_3385_);
lean_closure_set(v___f_3397_, 2, v___x_3394_);
lean_closure_set(v___f_3397_, 3, v___x_3395_);
lean_closure_set(v___f_3397_, 4, v___x_3396_);
lean_closure_set(v___f_3397_, 5, v_inst_3382_);
v___x_3398_ = lean_apply_4(v_map_3392_, lean_box(0), lean_box(0), v___f_3393_, v_inst_3381_);
v___x_3399_ = lean_apply_4(v_toBind_3391_, lean_box(0), lean_box(0), v___x_3398_, v___f_3397_);
return v___x_3399_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___boxed(lean_object* v_inst_3400_, lean_object* v_inst_3401_, lean_object* v_inst_3402_, lean_object* v_file_3403_, lean_object* v_ext_3404_, lean_object* v_text_3405_, lean_object* v_exe_3406_, lean_object* v_useLocalFile_3407_){
_start:
{
uint8_t v_text_boxed_3408_; uint8_t v_exe_boxed_3409_; uint8_t v_useLocalFile_boxed_3410_; lean_object* v_res_3411_; 
v_text_boxed_3408_ = lean_unbox(v_text_3405_);
v_exe_boxed_3409_ = lean_unbox(v_exe_3406_);
v_useLocalFile_boxed_3410_ = lean_unbox(v_useLocalFile_3407_);
v_res_3411_ = l_Lake_cacheArtifact___redArg(v_inst_3400_, v_inst_3401_, v_inst_3402_, v_file_3403_, v_ext_3404_, v_text_boxed_3408_, v_exe_boxed_3409_, v_useLocalFile_boxed_3410_);
return v_res_3411_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact(lean_object* v_m_3412_, lean_object* v_inst_3413_, lean_object* v_inst_3414_, lean_object* v_inst_3415_, lean_object* v_file_3416_, lean_object* v_ext_3417_, uint8_t v_text_3418_, uint8_t v_exe_3419_, uint8_t v_useLocalFile_3420_){
_start:
{
lean_object* v_toApplicative_3421_; lean_object* v_toFunctor_3422_; lean_object* v_toBind_3423_; lean_object* v_map_3424_; lean_object* v___f_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___f_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; 
v_toApplicative_3421_ = lean_ctor_get(v_inst_3415_, 0);
v_toFunctor_3422_ = lean_ctor_get(v_toApplicative_3421_, 0);
lean_inc_ref(v_toFunctor_3422_);
v_toBind_3423_ = lean_ctor_get(v_inst_3415_, 1);
lean_inc(v_toBind_3423_);
lean_dec_ref(v_inst_3415_);
v_map_3424_ = lean_ctor_get(v_toFunctor_3422_, 0);
lean_inc(v_map_3424_);
lean_dec_ref(v_toFunctor_3422_);
v___f_3425_ = ((lean_object*)(l_Lake_cacheArtifact___redArg___closed__0));
v___x_3426_ = lean_box(v_text_3418_);
v___x_3427_ = lean_box(v_exe_3419_);
v___x_3428_ = lean_box(v_useLocalFile_3420_);
v___f_3429_ = lean_alloc_closure((void*)(l_Lake_cacheArtifact___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_3429_, 0, v_file_3416_);
lean_closure_set(v___f_3429_, 1, v_ext_3417_);
lean_closure_set(v___f_3429_, 2, v___x_3426_);
lean_closure_set(v___f_3429_, 3, v___x_3427_);
lean_closure_set(v___f_3429_, 4, v___x_3428_);
lean_closure_set(v___f_3429_, 5, v_inst_3414_);
v___x_3430_ = lean_apply_4(v_map_3424_, lean_box(0), lean_box(0), v___f_3425_, v_inst_3413_);
v___x_3431_ = lean_apply_4(v_toBind_3423_, lean_box(0), lean_box(0), v___x_3430_, v___f_3429_);
return v___x_3431_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___boxed(lean_object* v_m_3432_, lean_object* v_inst_3433_, lean_object* v_inst_3434_, lean_object* v_inst_3435_, lean_object* v_file_3436_, lean_object* v_ext_3437_, lean_object* v_text_3438_, lean_object* v_exe_3439_, lean_object* v_useLocalFile_3440_){
_start:
{
uint8_t v_text_boxed_3441_; uint8_t v_exe_boxed_3442_; uint8_t v_useLocalFile_boxed_3443_; lean_object* v_res_3444_; 
v_text_boxed_3441_ = lean_unbox(v_text_3438_);
v_exe_boxed_3442_ = lean_unbox(v_exe_3439_);
v_useLocalFile_boxed_3443_ = lean_unbox(v_useLocalFile_3440_);
v_res_3444_ = l_Lake_cacheArtifact(v_m_3432_, v_inst_3433_, v_inst_3434_, v_inst_3435_, v_file_3436_, v_ext_3437_, v_text_boxed_3441_, v_exe_boxed_3442_, v_useLocalFile_boxed_3443_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0(lean_object* v_x1_3446_, lean_object* v_x2_3447_){
_start:
{
lean_object* v_message_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; 
v_message_3448_ = lean_ctor_get(v_x2_3447_, 0);
v___x_3449_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0));
v___x_3450_ = lean_string_append(v_x1_3446_, v___x_3449_);
v___x_3451_ = lean_string_append(v___x_3450_, v_message_3448_);
return v___x_3451_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___boxed(lean_object* v_x1_3452_, lean_object* v_x2_3453_){
_start:
{
lean_object* v_res_3454_; 
v_res_3454_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0(v_x1_3452_, v_x2_3453_);
lean_dec_ref(v_x2_3453_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(lean_object* v_inst_3458_, uint64_t v_inputHash_3459_, lean_object* v_pkg_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_){
_start:
{
lean_object* v_toContext_3468_; lean_object* v_log_3469_; uint8_t v_action_3470_; uint8_t v_wantsRebuild_3471_; lean_object* v_trace_3472_; lean_object* v_buildTime_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3568_; 
v_toContext_3468_ = lean_ctor_get(v_a_3465_, 1);
v_log_3469_ = lean_ctor_get(v_a_3466_, 0);
v_action_3470_ = lean_ctor_get_uint8(v_a_3466_, sizeof(void*)*3);
v_wantsRebuild_3471_ = lean_ctor_get_uint8(v_a_3466_, sizeof(void*)*3 + 1);
v_trace_3472_ = lean_ctor_get(v_a_3466_, 1);
v_buildTime_3473_ = lean_ctor_get(v_a_3466_, 2);
v_isSharedCheck_3568_ = !lean_is_exclusive(v_a_3466_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3475_ = v_a_3466_;
v_isShared_3476_ = v_isSharedCheck_3568_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_buildTime_3473_);
lean_inc(v_trace_3472_);
lean_inc(v_log_3469_);
lean_dec(v_a_3466_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3568_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v_lakeCache_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; 
v_lakeCache_3477_ = lean_ctor_get(v_toContext_3468_, 3);
v___x_3478_ = l_Lake_Package_cacheScope(v_pkg_3460_);
lean_inc_ref(v_lakeCache_3477_);
v___x_3479_ = l_Lake_Cache_readOutputs_x3f(v_lakeCache_3477_, v___x_3478_, v_inputHash_3459_, v_log_3469_);
if (lean_obj_tag(v___x_3479_) == 0)
{
lean_object* v_a_3480_; lean_object* v_a_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3555_; 
v_a_3480_ = lean_ctor_get(v___x_3479_, 0);
v_a_3481_ = lean_ctor_get(v___x_3479_, 1);
v_isSharedCheck_3555_ = !lean_is_exclusive(v___x_3479_);
if (v_isSharedCheck_3555_ == 0)
{
v___x_3483_ = v___x_3479_;
v_isShared_3484_ = v_isSharedCheck_3555_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_a_3481_);
lean_inc(v_a_3480_);
lean_dec(v___x_3479_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3555_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3486_; 
if (v_isShared_3476_ == 0)
{
lean_ctor_set(v___x_3475_, 0, v_a_3481_);
v___x_3486_ = v___x_3475_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3554_; 
v_reuseFailAlloc_3554_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3554_, 0, v_a_3481_);
lean_ctor_set(v_reuseFailAlloc_3554_, 1, v_trace_3472_);
lean_ctor_set(v_reuseFailAlloc_3554_, 2, v_buildTime_3473_);
lean_ctor_set_uint8(v_reuseFailAlloc_3554_, sizeof(void*)*3, v_action_3470_);
lean_ctor_set_uint8(v_reuseFailAlloc_3554_, sizeof(void*)*3 + 1, v_wantsRebuild_3471_);
v___x_3486_ = v_reuseFailAlloc_3554_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
if (lean_obj_tag(v_a_3480_) == 1)
{
lean_object* v_val_3487_; lean_object* v___x_3489_; uint8_t v_isShared_3490_; uint8_t v_isSharedCheck_3549_; 
v_val_3487_ = lean_ctor_get(v_a_3480_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v_a_3480_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3489_ = v_a_3480_;
v_isShared_3490_ = v_isSharedCheck_3549_;
goto v_resetjp_3488_;
}
else
{
lean_inc(v_val_3487_);
lean_dec(v_a_3480_);
v___x_3489_ = lean_box(0);
v_isShared_3490_ = v_isSharedCheck_3549_;
goto v_resetjp_3488_;
}
v_resetjp_3488_:
{
lean_object* v___x_3491_; lean_object* v_r_3493_; lean_object* v___y_3494_; 
v___x_3491_ = lean_apply_8(v_inst_3458_, v_val_3487_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_, v_a_3465_, v___x_3486_, lean_box(0));
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v_a_3498_; lean_object* v_a_3499_; lean_object* v___x_3501_; 
v_a_3498_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3498_);
v_a_3499_ = lean_ctor_get(v___x_3491_, 1);
lean_inc(v_a_3499_);
lean_dec_ref(v___x_3491_);
if (v_isShared_3490_ == 0)
{
lean_ctor_set(v___x_3489_, 0, v_a_3498_);
v___x_3501_ = v___x_3489_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v_a_3498_);
v___x_3501_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
v_r_3493_ = v___x_3501_;
v___y_3494_ = v_a_3499_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3503_; lean_object* v_a_3504_; lean_object* v_log_3505_; uint8_t v_action_3506_; uint8_t v_wantsRebuild_3507_; lean_object* v_trace_3508_; lean_object* v_buildTime_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3548_; 
lean_del_object(v___x_3489_);
v_a_3503_ = lean_ctor_get(v___x_3491_, 1);
lean_inc(v_a_3503_);
v_a_3504_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3504_);
lean_dec_ref(v___x_3491_);
v_log_3505_ = lean_ctor_get(v_a_3503_, 0);
v_action_3506_ = lean_ctor_get_uint8(v_a_3503_, sizeof(void*)*3);
v_wantsRebuild_3507_ = lean_ctor_get_uint8(v_a_3503_, sizeof(void*)*3 + 1);
v_trace_3508_ = lean_ctor_get(v_a_3503_, 1);
v_buildTime_3509_ = lean_ctor_get(v_a_3503_, 2);
v_isSharedCheck_3548_ = !lean_is_exclusive(v_a_3503_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3511_ = v_a_3503_;
v_isShared_3512_ = v_isSharedCheck_3548_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_buildTime_3509_);
lean_inc(v_trace_3508_);
lean_inc(v_log_3505_);
lean_dec(v_a_3503_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3548_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___y_3517_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; uint8_t v___x_3539_; 
v___x_3513_ = lean_array_get_size(v_log_3505_);
lean_inc(v_a_3504_);
v___x_3514_ = l_Array_extract___redArg(v_log_3505_, v_a_3504_, v___x_3513_);
v___x_3515_ = l_Array_shrink___redArg(v_log_3505_, v_a_3504_);
lean_dec(v_a_3504_);
v___x_3525_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0));
v___x_3526_ = l_Lake_Hash_hex(v_inputHash_3459_);
v___x_3527_ = lean_unsigned_to_nat(7u);
v___x_3528_ = lean_unsigned_to_nat(0u);
v___x_3529_ = lean_string_utf8_byte_size(v___x_3526_);
lean_inc_ref(v___x_3526_);
v___x_3530_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3526_);
lean_ctor_set(v___x_3530_, 1, v___x_3528_);
lean_ctor_set(v___x_3530_, 2, v___x_3529_);
v___x_3531_ = l_String_Slice_Pos_nextn(v___x_3530_, v___x_3528_, v___x_3527_);
lean_dec_ref(v___x_3530_);
v___x_3532_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3532_, 0, v___x_3526_);
lean_ctor_set(v___x_3532_, 1, v___x_3528_);
lean_ctor_set(v___x_3532_, 2, v___x_3531_);
v___x_3533_ = l_String_Slice_toString(v___x_3532_);
lean_dec_ref(v___x_3532_);
v___x_3534_ = lean_string_append(v___x_3525_, v___x_3533_);
lean_dec_ref(v___x_3533_);
v___x_3535_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1));
v___x_3536_ = lean_string_append(v___x_3534_, v___x_3535_);
v___x_3537_ = lean_array_get_size(v___x_3514_);
v___x_3538_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__10));
v___x_3539_ = lean_nat_dec_lt(v___x_3528_, v___x_3537_);
if (v___x_3539_ == 0)
{
lean_dec_ref(v___x_3514_);
v___y_3517_ = v___x_3536_;
goto v___jp_3516_;
}
else
{
lean_object* v___f_3540_; uint8_t v___x_3541_; 
v___f_3540_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2));
v___x_3541_ = lean_nat_dec_le(v___x_3537_, v___x_3537_);
if (v___x_3541_ == 0)
{
if (v___x_3539_ == 0)
{
lean_dec_ref(v___x_3514_);
v___y_3517_ = v___x_3536_;
goto v___jp_3516_;
}
else
{
size_t v___x_3542_; size_t v___x_3543_; lean_object* v___x_3544_; 
v___x_3542_ = ((size_t)0ULL);
v___x_3543_ = lean_usize_of_nat(v___x_3537_);
v___x_3544_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3538_, v___f_3540_, v___x_3514_, v___x_3542_, v___x_3543_, v___x_3536_);
v___y_3517_ = v___x_3544_;
goto v___jp_3516_;
}
}
else
{
size_t v___x_3545_; size_t v___x_3546_; lean_object* v___x_3547_; 
v___x_3545_ = ((size_t)0ULL);
v___x_3546_ = lean_usize_of_nat(v___x_3537_);
v___x_3547_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3538_, v___f_3540_, v___x_3514_, v___x_3545_, v___x_3546_, v___x_3536_);
v___y_3517_ = v___x_3547_;
goto v___jp_3516_;
}
}
v___jp_3516_:
{
uint8_t v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3522_; 
v___x_3518_ = 2;
v___x_3519_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3519_, 0, v___y_3517_);
lean_ctor_set_uint8(v___x_3519_, sizeof(void*)*1, v___x_3518_);
v___x_3520_ = lean_array_push(v___x_3515_, v___x_3519_);
if (v_isShared_3512_ == 0)
{
lean_ctor_set(v___x_3511_, 0, v___x_3520_);
v___x_3522_ = v___x_3511_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v___x_3520_);
lean_ctor_set(v_reuseFailAlloc_3524_, 1, v_trace_3508_);
lean_ctor_set(v_reuseFailAlloc_3524_, 2, v_buildTime_3509_);
lean_ctor_set_uint8(v_reuseFailAlloc_3524_, sizeof(void*)*3, v_action_3506_);
lean_ctor_set_uint8(v_reuseFailAlloc_3524_, sizeof(void*)*3 + 1, v_wantsRebuild_3507_);
v___x_3522_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
lean_object* v___x_3523_; 
v___x_3523_ = lean_box(0);
v_r_3493_ = v___x_3523_;
v___y_3494_ = v___x_3522_;
goto v___jp_3492_;
}
}
}
}
v___jp_3492_:
{
lean_object* v___x_3496_; 
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 1, v___y_3494_);
lean_ctor_set(v___x_3483_, 0, v_r_3493_);
v___x_3496_ = v___x_3483_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_r_3493_);
lean_ctor_set(v_reuseFailAlloc_3497_, 1, v___y_3494_);
v___x_3496_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
return v___x_3496_;
}
}
}
}
else
{
lean_object* v___x_3550_; lean_object* v___x_3552_; 
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3465_);
lean_dec(v_a_3464_);
lean_dec(v_a_3463_);
lean_dec(v_a_3462_);
lean_dec_ref(v_a_3461_);
lean_dec_ref(v_inst_3458_);
v___x_3550_ = lean_box(0);
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 1, v___x_3486_);
lean_ctor_set(v___x_3483_, 0, v___x_3550_);
v___x_3552_ = v___x_3483_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v___x_3550_);
lean_ctor_set(v_reuseFailAlloc_3553_, 1, v___x_3486_);
v___x_3552_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
return v___x_3552_;
}
}
}
}
}
else
{
lean_object* v_a_3556_; lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3567_; 
lean_dec_ref(v_a_3465_);
lean_dec(v_a_3464_);
lean_dec(v_a_3463_);
lean_dec(v_a_3462_);
lean_dec_ref(v_a_3461_);
lean_dec_ref(v_inst_3458_);
v_a_3556_ = lean_ctor_get(v___x_3479_, 0);
v_a_3557_ = lean_ctor_get(v___x_3479_, 1);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3479_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3559_ = v___x_3479_;
v_isShared_3560_ = v_isSharedCheck_3567_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_inc(v_a_3556_);
lean_dec(v___x_3479_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3567_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3562_; 
if (v_isShared_3476_ == 0)
{
lean_ctor_set(v___x_3475_, 0, v_a_3557_);
v___x_3562_ = v___x_3475_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3557_);
lean_ctor_set(v_reuseFailAlloc_3566_, 1, v_trace_3472_);
lean_ctor_set(v_reuseFailAlloc_3566_, 2, v_buildTime_3473_);
lean_ctor_set_uint8(v_reuseFailAlloc_3566_, sizeof(void*)*3, v_action_3470_);
lean_ctor_set_uint8(v_reuseFailAlloc_3566_, sizeof(void*)*3 + 1, v_wantsRebuild_3471_);
v___x_3562_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
lean_object* v___x_3564_; 
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 1, v___x_3562_);
v___x_3564_ = v___x_3559_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v_a_3556_);
lean_ctor_set(v_reuseFailAlloc_3565_, 1, v___x_3562_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___boxed(lean_object* v_inst_3569_, lean_object* v_inputHash_3570_, lean_object* v_pkg_3571_, lean_object* v_a_3572_, lean_object* v_a_3573_, lean_object* v_a_3574_, lean_object* v_a_3575_, lean_object* v_a_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_){
_start:
{
uint64_t v_inputHash_boxed_3579_; lean_object* v_res_3580_; 
v_inputHash_boxed_3579_ = lean_unbox_uint64(v_inputHash_3570_);
lean_dec_ref(v_inputHash_3570_);
v_res_3580_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3569_, v_inputHash_boxed_3579_, v_pkg_3571_, v_a_3572_, v_a_3573_, v_a_3574_, v_a_3575_, v_a_3576_, v_a_3577_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f(lean_object* v_00_u03b1_3581_, lean_object* v_inst_3582_, uint64_t v_inputHash_3583_, lean_object* v_pkg_3584_, lean_object* v_a_3585_, lean_object* v_a_3586_, lean_object* v_a_3587_, lean_object* v_a_3588_, lean_object* v_a_3589_, lean_object* v_a_3590_){
_start:
{
lean_object* v___x_3592_; 
v___x_3592_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3582_, v_inputHash_3583_, v_pkg_3584_, v_a_3585_, v_a_3586_, v_a_3587_, v_a_3588_, v_a_3589_, v_a_3590_);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___boxed(lean_object* v_00_u03b1_3593_, lean_object* v_inst_3594_, lean_object* v_inputHash_3595_, lean_object* v_pkg_3596_, lean_object* v_a_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_){
_start:
{
uint64_t v_inputHash_boxed_3604_; lean_object* v_res_3605_; 
v_inputHash_boxed_3604_ = lean_unbox_uint64(v_inputHash_3595_);
lean_dec_ref(v_inputHash_3595_);
v_res_3605_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f(v_00_u03b1_3593_, v_inst_3594_, v_inputHash_boxed_3604_, v_pkg_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
return v_res_3605_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(lean_object* v_a_3606_, lean_object* v_____r_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_){
_start:
{
lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; 
v___x_3615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3615_, 0, v_a_3606_);
v___x_3616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3616_, 0, v___x_3615_);
v___x_3617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3617_, 0, v___x_3616_);
lean_ctor_set(v___x_3617_, 1, v___y_3613_);
return v___x_3617_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0___boxed(lean_object* v_a_3618_, lean_object* v_____r_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_){
_start:
{
lean_object* v_res_3627_; 
v_res_3627_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3618_, v_____r_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_, v___y_3624_, v___y_3625_);
lean_dec_ref(v___y_3624_);
lean_dec(v___y_3623_);
lean_dec(v___y_3622_);
lean_dec(v___y_3621_);
lean_dec_ref(v___y_3620_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg(lean_object* v_inst_3629_, uint64_t v_inputHash_3630_, lean_object* v_savedTrace_3631_, lean_object* v_pkg_3632_, lean_object* v_a_3633_, lean_object* v_a_3634_, lean_object* v_a_3635_, lean_object* v_a_3636_, lean_object* v_a_3637_, lean_object* v_a_3638_){
_start:
{
lean_object* v___y_3641_; lean_object* v_a_3645_; lean_object* v_a_3646_; lean_object* v___y_3661_; 
if (lean_obj_tag(v_savedTrace_3631_) == 2)
{
lean_object* v_data_3676_; uint64_t v_depHash_3677_; lean_object* v_outputs_x3f_3678_; uint8_t v___x_3679_; 
v_data_3676_ = lean_ctor_get(v_savedTrace_3631_, 0);
lean_inc_ref(v_data_3676_);
lean_dec_ref(v_savedTrace_3631_);
v_depHash_3677_ = lean_ctor_get_uint64(v_data_3676_, sizeof(void*)*3);
v_outputs_x3f_3678_ = lean_ctor_get(v_data_3676_, 1);
lean_inc(v_outputs_x3f_3678_);
lean_dec_ref(v_data_3676_);
v___x_3679_ = lean_uint64_dec_eq(v_depHash_3677_, v_inputHash_3630_);
if (v___x_3679_ == 0)
{
lean_dec(v_outputs_x3f_3678_);
lean_dec_ref(v_a_3637_);
lean_dec(v_a_3636_);
lean_dec(v_a_3635_);
lean_dec(v_a_3634_);
lean_dec_ref(v_a_3633_);
lean_dec_ref(v_pkg_3632_);
lean_dec_ref(v_inst_3629_);
v___y_3641_ = v_a_3638_;
goto v___jp_3640_;
}
else
{
if (lean_obj_tag(v_outputs_x3f_3678_) == 1)
{
lean_object* v_val_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; 
v_val_3680_ = lean_ctor_get(v_outputs_x3f_3678_, 0);
lean_inc(v_val_3680_);
lean_dec_ref(v_outputs_x3f_3678_);
v___x_3681_ = lean_box(0);
lean_inc(v_val_3680_);
v___x_3682_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3682_, 0, v_val_3680_);
lean_ctor_set(v___x_3682_, 1, v___x_3681_);
lean_ctor_set(v___x_3682_, 2, v___x_3681_);
lean_inc_ref(v_a_3637_);
lean_inc(v_a_3636_);
lean_inc(v_a_3635_);
lean_inc(v_a_3634_);
lean_inc_ref(v_a_3633_);
v___x_3683_ = lean_apply_8(v_inst_3629_, v___x_3682_, v_a_3633_, v_a_3634_, v_a_3635_, v_a_3636_, v_a_3637_, v_a_3638_, lean_box(0));
if (lean_obj_tag(v___x_3683_) == 0)
{
lean_object* v_config_3684_; lean_object* v_a_3685_; lean_object* v_a_3686_; lean_object* v_enableArtifactCache_x3f_3687_; lean_object* v_a_3689_; uint8_t v_a_3693_; lean_object* v_a_3694_; 
v_config_3684_ = lean_ctor_get(v_pkg_3632_, 6);
v_a_3685_ = lean_ctor_get(v___x_3683_, 0);
lean_inc(v_a_3685_);
v_a_3686_ = lean_ctor_get(v___x_3683_, 1);
lean_inc(v_a_3686_);
lean_dec_ref(v___x_3683_);
v_enableArtifactCache_x3f_3687_ = lean_ctor_get(v_config_3684_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_3687_) == 0)
{
lean_object* v_toContext_3725_; lean_object* v_lakeEnv_3726_; lean_object* v_enableArtifactCache_x3f_3727_; 
v_toContext_3725_ = lean_ctor_get(v_a_3637_, 1);
v_lakeEnv_3726_ = lean_ctor_get(v_toContext_3725_, 1);
v_enableArtifactCache_x3f_3727_ = lean_ctor_get(v_lakeEnv_3726_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_3727_) == 0)
{
lean_object* v_root_3728_; lean_object* v_config_3729_; lean_object* v_enableArtifactCache_x3f_3730_; 
v_root_3728_ = lean_ctor_get(v_toContext_3725_, 0);
v_config_3729_ = lean_ctor_get(v_root_3728_, 6);
v_enableArtifactCache_x3f_3730_ = lean_ctor_get(v_config_3729_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_3730_) == 0)
{
lean_dec(v_val_3680_);
lean_dec_ref(v_pkg_3632_);
v_a_3689_ = v_a_3686_;
goto v___jp_3688_;
}
else
{
lean_object* v_val_3731_; uint8_t v___x_3732_; 
v_val_3731_ = lean_ctor_get(v_enableArtifactCache_x3f_3730_, 0);
v___x_3732_ = lean_unbox(v_val_3731_);
v_a_3693_ = v___x_3732_;
v_a_3694_ = v_a_3686_;
goto v___jp_3692_;
}
}
else
{
lean_object* v_val_3733_; uint8_t v___x_3734_; 
v_val_3733_ = lean_ctor_get(v_enableArtifactCache_x3f_3727_, 0);
v___x_3734_ = lean_unbox(v_val_3733_);
v_a_3693_ = v___x_3734_;
v_a_3694_ = v_a_3686_;
goto v___jp_3692_;
}
}
else
{
lean_object* v_val_3735_; uint8_t v___x_3736_; 
v_val_3735_ = lean_ctor_get(v_enableArtifactCache_x3f_3687_, 0);
v___x_3736_ = lean_unbox(v_val_3735_);
v_a_3693_ = v___x_3736_;
v_a_3694_ = v_a_3686_;
goto v___jp_3692_;
}
v___jp_3688_:
{
lean_object* v___x_3690_; lean_object* v___x_3691_; 
v___x_3690_ = lean_box(0);
v___x_3691_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3685_, v___x_3690_, v_a_3633_, v_a_3634_, v_a_3635_, v_a_3636_, v_a_3637_, v_a_3689_);
lean_dec_ref(v_a_3637_);
lean_dec(v_a_3636_);
lean_dec(v_a_3635_);
lean_dec(v_a_3634_);
lean_dec_ref(v_a_3633_);
v___y_3661_ = v___x_3691_;
goto v___jp_3660_;
}
v___jp_3692_:
{
if (v_a_3693_ == 0)
{
lean_dec(v_val_3680_);
lean_dec_ref(v_pkg_3632_);
v_a_3689_ = v_a_3694_;
goto v___jp_3688_;
}
else
{
lean_object* v_toContext_3695_; lean_object* v_log_3696_; uint8_t v_action_3697_; uint8_t v_wantsRebuild_3698_; lean_object* v_trace_3699_; lean_object* v_buildTime_3700_; lean_object* v_lakeCache_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; 
v_toContext_3695_ = lean_ctor_get(v_a_3637_, 1);
v_log_3696_ = lean_ctor_get(v_a_3694_, 0);
v_action_3697_ = lean_ctor_get_uint8(v_a_3694_, sizeof(void*)*3);
v_wantsRebuild_3698_ = lean_ctor_get_uint8(v_a_3694_, sizeof(void*)*3 + 1);
v_trace_3699_ = lean_ctor_get(v_a_3694_, 1);
v_buildTime_3700_ = lean_ctor_get(v_a_3694_, 2);
v_lakeCache_3701_ = lean_ctor_get(v_toContext_3695_, 3);
v___x_3702_ = l_Lake_Package_cacheScope(v_pkg_3632_);
lean_inc_ref(v_lakeCache_3701_);
v___x_3703_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_3701_, v___x_3702_, v_inputHash_3630_, v_val_3680_, v___x_3681_, v___x_3681_);
if (lean_obj_tag(v___x_3703_) == 0)
{
lean_object* v___x_3704_; lean_object* v___x_3705_; 
lean_dec_ref(v___x_3703_);
v___x_3704_ = lean_box(0);
v___x_3705_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3685_, v___x_3704_, v_a_3633_, v_a_3634_, v_a_3635_, v_a_3636_, v_a_3637_, v_a_3694_);
lean_dec_ref(v_a_3637_);
lean_dec(v_a_3636_);
lean_dec(v_a_3635_);
lean_dec(v_a_3634_);
lean_dec_ref(v_a_3633_);
v___y_3661_ = v___x_3705_;
goto v___jp_3660_;
}
else
{
lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3721_; 
lean_inc(v_buildTime_3700_);
lean_inc_ref(v_trace_3699_);
lean_inc_ref(v_log_3696_);
v_isSharedCheck_3721_ = !lean_is_exclusive(v_a_3694_);
if (v_isSharedCheck_3721_ == 0)
{
lean_object* v_unused_3722_; lean_object* v_unused_3723_; lean_object* v_unused_3724_; 
v_unused_3722_ = lean_ctor_get(v_a_3694_, 2);
lean_dec(v_unused_3722_);
v_unused_3723_ = lean_ctor_get(v_a_3694_, 1);
lean_dec(v_unused_3723_);
v_unused_3724_ = lean_ctor_get(v_a_3694_, 0);
lean_dec(v_unused_3724_);
v___x_3707_ = v_a_3694_;
v_isShared_3708_ = v_isSharedCheck_3721_;
goto v_resetjp_3706_;
}
else
{
lean_dec(v_a_3694_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3721_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v_a_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; uint8_t v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3718_; 
v_a_3709_ = lean_ctor_get(v___x_3703_, 0);
lean_inc(v_a_3709_);
lean_dec_ref(v___x_3703_);
v___x_3710_ = ((lean_object*)(l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0));
v___x_3711_ = lean_io_error_to_string(v_a_3709_);
v___x_3712_ = lean_string_append(v___x_3710_, v___x_3711_);
lean_dec_ref(v___x_3711_);
v___x_3713_ = 2;
v___x_3714_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3714_, 0, v___x_3712_);
lean_ctor_set_uint8(v___x_3714_, sizeof(void*)*1, v___x_3713_);
v___x_3715_ = lean_box(0);
v___x_3716_ = lean_array_push(v_log_3696_, v___x_3714_);
if (v_isShared_3708_ == 0)
{
lean_ctor_set(v___x_3707_, 0, v___x_3716_);
v___x_3718_ = v___x_3707_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v___x_3716_);
lean_ctor_set(v_reuseFailAlloc_3720_, 1, v_trace_3699_);
lean_ctor_set(v_reuseFailAlloc_3720_, 2, v_buildTime_3700_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, sizeof(void*)*3, v_action_3697_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, sizeof(void*)*3 + 1, v_wantsRebuild_3698_);
v___x_3718_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
lean_object* v___x_3719_; 
v___x_3719_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3685_, v___x_3715_, v_a_3633_, v_a_3634_, v_a_3635_, v_a_3636_, v_a_3637_, v___x_3718_);
lean_dec_ref(v_a_3637_);
lean_dec(v_a_3636_);
lean_dec(v_a_3635_);
lean_dec(v_a_3634_);
lean_dec_ref(v_a_3633_);
v___y_3661_ = v___x_3719_;
goto v___jp_3660_;
}
}
}
}
}
}
else
{
lean_object* v_a_3737_; lean_object* v_a_3738_; 
lean_dec(v_val_3680_);
lean_dec_ref(v_a_3637_);
lean_dec(v_a_3636_);
lean_dec(v_a_3635_);
lean_dec(v_a_3634_);
lean_dec_ref(v_a_3633_);
lean_dec_ref(v_pkg_3632_);
v_a_3737_ = lean_ctor_get(v___x_3683_, 0);
lean_inc(v_a_3737_);
v_a_3738_ = lean_ctor_get(v___x_3683_, 1);
lean_inc(v_a_3738_);
lean_dec_ref(v___x_3683_);
v_a_3645_ = v_a_3737_;
v_a_3646_ = v_a_3738_;
goto v___jp_3644_;
}
}
else
{
lean_dec(v_outputs_x3f_3678_);
lean_dec_ref(v_a_3637_);
lean_dec(v_a_3636_);
lean_dec(v_a_3635_);
lean_dec(v_a_3634_);
lean_dec_ref(v_a_3633_);
lean_dec_ref(v_pkg_3632_);
lean_dec_ref(v_inst_3629_);
v___y_3641_ = v_a_3638_;
goto v___jp_3640_;
}
}
}
else
{
lean_dec_ref(v_a_3637_);
lean_dec(v_a_3636_);
lean_dec(v_a_3635_);
lean_dec(v_a_3634_);
lean_dec_ref(v_a_3633_);
lean_dec_ref(v_pkg_3632_);
lean_dec(v_savedTrace_3631_);
lean_dec_ref(v_inst_3629_);
v___y_3641_ = v_a_3638_;
goto v___jp_3640_;
}
v___jp_3640_:
{
lean_object* v___x_3642_; lean_object* v___x_3643_; 
v___x_3642_ = lean_box(0);
v___x_3643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3643_, 0, v___x_3642_);
lean_ctor_set(v___x_3643_, 1, v___y_3641_);
return v___x_3643_;
}
v___jp_3644_:
{
lean_object* v_log_3647_; uint8_t v_action_3648_; uint8_t v_wantsRebuild_3649_; lean_object* v_trace_3650_; lean_object* v_buildTime_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3659_; 
v_log_3647_ = lean_ctor_get(v_a_3646_, 0);
v_action_3648_ = lean_ctor_get_uint8(v_a_3646_, sizeof(void*)*3);
v_wantsRebuild_3649_ = lean_ctor_get_uint8(v_a_3646_, sizeof(void*)*3 + 1);
v_trace_3650_ = lean_ctor_get(v_a_3646_, 1);
v_buildTime_3651_ = lean_ctor_get(v_a_3646_, 2);
v_isSharedCheck_3659_ = !lean_is_exclusive(v_a_3646_);
if (v_isSharedCheck_3659_ == 0)
{
v___x_3653_ = v_a_3646_;
v_isShared_3654_ = v_isSharedCheck_3659_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_buildTime_3651_);
lean_inc(v_trace_3650_);
lean_inc(v_log_3647_);
lean_dec(v_a_3646_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3659_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3655_; lean_object* v___x_3657_; 
v___x_3655_ = l_Array_shrink___redArg(v_log_3647_, v_a_3645_);
lean_dec(v_a_3645_);
if (v_isShared_3654_ == 0)
{
lean_ctor_set(v___x_3653_, 0, v___x_3655_);
v___x_3657_ = v___x_3653_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v___x_3655_);
lean_ctor_set(v_reuseFailAlloc_3658_, 1, v_trace_3650_);
lean_ctor_set(v_reuseFailAlloc_3658_, 2, v_buildTime_3651_);
lean_ctor_set_uint8(v_reuseFailAlloc_3658_, sizeof(void*)*3, v_action_3648_);
lean_ctor_set_uint8(v_reuseFailAlloc_3658_, sizeof(void*)*3 + 1, v_wantsRebuild_3649_);
v___x_3657_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
v___y_3641_ = v___x_3657_;
goto v___jp_3640_;
}
}
}
v___jp_3660_:
{
if (lean_obj_tag(v___y_3661_) == 0)
{
lean_object* v_a_3662_; 
v_a_3662_ = lean_ctor_get(v___y_3661_, 0);
if (lean_obj_tag(v_a_3662_) == 0)
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3671_; 
lean_inc_ref(v_a_3662_);
v_a_3663_ = lean_ctor_get(v___y_3661_, 1);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___y_3661_);
if (v_isSharedCheck_3671_ == 0)
{
lean_object* v_unused_3672_; 
v_unused_3672_ = lean_ctor_get(v___y_3661_, 0);
lean_dec(v_unused_3672_);
v___x_3665_ = v___y_3661_;
v_isShared_3666_ = v_isSharedCheck_3671_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___y_3661_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3671_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v_a_3667_; lean_object* v___x_3669_; 
v_a_3667_ = lean_ctor_get(v_a_3662_, 0);
lean_inc(v_a_3667_);
lean_dec_ref(v_a_3662_);
if (v_isShared_3666_ == 0)
{
lean_ctor_set(v___x_3665_, 0, v_a_3667_);
v___x_3669_ = v___x_3665_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v_a_3667_);
lean_ctor_set(v_reuseFailAlloc_3670_, 1, v_a_3663_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
else
{
lean_object* v_a_3673_; 
v_a_3673_ = lean_ctor_get(v___y_3661_, 1);
lean_inc(v_a_3673_);
lean_dec_ref(v___y_3661_);
v___y_3641_ = v_a_3673_;
goto v___jp_3640_;
}
}
else
{
lean_object* v_a_3674_; lean_object* v_a_3675_; 
v_a_3674_ = lean_ctor_get(v___y_3661_, 0);
lean_inc(v_a_3674_);
v_a_3675_ = lean_ctor_get(v___y_3661_, 1);
lean_inc(v_a_3675_);
lean_dec_ref(v___y_3661_);
v_a_3645_ = v_a_3674_;
v_a_3646_ = v_a_3675_;
goto v___jp_3644_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___boxed(lean_object* v_inst_3739_, lean_object* v_inputHash_3740_, lean_object* v_savedTrace_3741_, lean_object* v_pkg_3742_, lean_object* v_a_3743_, lean_object* v_a_3744_, lean_object* v_a_3745_, lean_object* v_a_3746_, lean_object* v_a_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_){
_start:
{
uint64_t v_inputHash_boxed_3750_; lean_object* v_res_3751_; 
v_inputHash_boxed_3750_ = lean_unbox_uint64(v_inputHash_3740_);
lean_dec_ref(v_inputHash_3740_);
v_res_3751_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3739_, v_inputHash_boxed_3750_, v_savedTrace_3741_, v_pkg_3742_, v_a_3743_, v_a_3744_, v_a_3745_, v_a_3746_, v_a_3747_, v_a_3748_);
return v_res_3751_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f(lean_object* v_00_u03b1_3752_, lean_object* v_inst_3753_, uint64_t v_inputHash_3754_, lean_object* v_savedTrace_3755_, lean_object* v_pkg_3756_, lean_object* v_a_3757_, lean_object* v_a_3758_, lean_object* v_a_3759_, lean_object* v_a_3760_, lean_object* v_a_3761_, lean_object* v_a_3762_){
_start:
{
lean_object* v___x_3764_; 
v___x_3764_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3753_, v_inputHash_3754_, v_savedTrace_3755_, v_pkg_3756_, v_a_3757_, v_a_3758_, v_a_3759_, v_a_3760_, v_a_3761_, v_a_3762_);
return v___x_3764_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___boxed(lean_object* v_00_u03b1_3765_, lean_object* v_inst_3766_, lean_object* v_inputHash_3767_, lean_object* v_savedTrace_3768_, lean_object* v_pkg_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_, lean_object* v_a_3773_, lean_object* v_a_3774_, lean_object* v_a_3775_, lean_object* v_a_3776_){
_start:
{
uint64_t v_inputHash_boxed_3777_; lean_object* v_res_3778_; 
v_inputHash_boxed_3777_ = lean_unbox_uint64(v_inputHash_3767_);
lean_dec_ref(v_inputHash_3767_);
v_res_3778_ = l_Lake_getArtifactsUsingTrace_x3f(v_00_u03b1_3765_, v_inst_3766_, v_inputHash_boxed_3777_, v_savedTrace_3768_, v_pkg_3769_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_);
return v_res_3778_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg(lean_object* v_inst_3779_, uint64_t v_inputHash_3780_, lean_object* v_savedTrace_3781_, lean_object* v_pkg_3782_, lean_object* v_a_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_, lean_object* v_a_3787_, lean_object* v_a_3788_){
_start:
{
lean_object* v___x_3790_; 
lean_inc_ref(v_a_3787_);
lean_inc(v_a_3786_);
lean_inc(v_a_3785_);
lean_inc(v_a_3784_);
lean_inc_ref(v_a_3783_);
lean_inc_ref(v_pkg_3782_);
lean_inc_ref(v_inst_3779_);
v___x_3790_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3779_, v_inputHash_3780_, v_pkg_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_, v_a_3787_, v_a_3788_);
if (lean_obj_tag(v___x_3790_) == 0)
{
lean_object* v_a_3791_; 
v_a_3791_ = lean_ctor_get(v___x_3790_, 0);
lean_inc(v_a_3791_);
if (lean_obj_tag(v_a_3791_) == 1)
{
lean_dec_ref(v_a_3791_);
lean_dec_ref(v_a_3787_);
lean_dec(v_a_3786_);
lean_dec(v_a_3785_);
lean_dec(v_a_3784_);
lean_dec_ref(v_a_3783_);
lean_dec_ref(v_pkg_3782_);
lean_dec(v_savedTrace_3781_);
lean_dec_ref(v_inst_3779_);
return v___x_3790_;
}
else
{
lean_object* v_a_3792_; lean_object* v___x_3793_; lean_object* v_a_3794_; 
lean_dec(v_a_3791_);
v_a_3792_ = lean_ctor_get(v___x_3790_, 1);
lean_inc(v_a_3792_);
lean_dec_ref(v___x_3790_);
v___x_3793_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3779_, v_inputHash_3780_, v_savedTrace_3781_, v_pkg_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_, v_a_3787_, v_a_3792_);
v_a_3794_ = lean_ctor_get(v___x_3793_, 0);
lean_inc(v_a_3794_);
if (lean_obj_tag(v_a_3794_) == 1)
{
lean_dec_ref(v_a_3794_);
return v___x_3793_;
}
else
{
lean_object* v_a_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3803_; 
lean_dec(v_a_3794_);
v_a_3795_ = lean_ctor_get(v___x_3793_, 1);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3793_);
if (v_isSharedCheck_3803_ == 0)
{
lean_object* v_unused_3804_; 
v_unused_3804_ = lean_ctor_get(v___x_3793_, 0);
lean_dec(v_unused_3804_);
v___x_3797_ = v___x_3793_;
v_isShared_3798_ = v_isSharedCheck_3803_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_a_3795_);
lean_dec(v___x_3793_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3803_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3799_; lean_object* v___x_3801_; 
v___x_3799_ = lean_box(0);
if (v_isShared_3798_ == 0)
{
lean_ctor_set(v___x_3797_, 0, v___x_3799_);
v___x_3801_ = v___x_3797_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v___x_3799_);
lean_ctor_set(v_reuseFailAlloc_3802_, 1, v_a_3795_);
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
else
{
lean_dec_ref(v_a_3787_);
lean_dec(v_a_3786_);
lean_dec(v_a_3785_);
lean_dec(v_a_3784_);
lean_dec_ref(v_a_3783_);
lean_dec_ref(v_pkg_3782_);
lean_dec(v_savedTrace_3781_);
lean_dec_ref(v_inst_3779_);
return v___x_3790_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg___boxed(lean_object* v_inst_3805_, lean_object* v_inputHash_3806_, lean_object* v_savedTrace_3807_, lean_object* v_pkg_3808_, lean_object* v_a_3809_, lean_object* v_a_3810_, lean_object* v_a_3811_, lean_object* v_a_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_){
_start:
{
uint64_t v_inputHash_boxed_3816_; lean_object* v_res_3817_; 
v_inputHash_boxed_3816_ = lean_unbox_uint64(v_inputHash_3806_);
lean_dec_ref(v_inputHash_3806_);
v_res_3817_ = l_Lake_getArtifacts_x3f___redArg(v_inst_3805_, v_inputHash_boxed_3816_, v_savedTrace_3807_, v_pkg_3808_, v_a_3809_, v_a_3810_, v_a_3811_, v_a_3812_, v_a_3813_, v_a_3814_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f(lean_object* v_00_u03b1_3818_, lean_object* v_inst_3819_, uint64_t v_inputHash_3820_, lean_object* v_savedTrace_3821_, lean_object* v_pkg_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_, lean_object* v_a_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_){
_start:
{
lean_object* v___x_3830_; 
lean_inc_ref(v_a_3827_);
lean_inc(v_a_3826_);
lean_inc(v_a_3825_);
lean_inc(v_a_3824_);
lean_inc_ref(v_a_3823_);
lean_inc_ref(v_pkg_3822_);
lean_inc_ref(v_inst_3819_);
v___x_3830_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3819_, v_inputHash_3820_, v_pkg_3822_, v_a_3823_, v_a_3824_, v_a_3825_, v_a_3826_, v_a_3827_, v_a_3828_);
if (lean_obj_tag(v___x_3830_) == 0)
{
lean_object* v_a_3831_; 
v_a_3831_ = lean_ctor_get(v___x_3830_, 0);
lean_inc(v_a_3831_);
if (lean_obj_tag(v_a_3831_) == 1)
{
lean_dec_ref(v_a_3831_);
lean_dec_ref(v_a_3827_);
lean_dec(v_a_3826_);
lean_dec(v_a_3825_);
lean_dec(v_a_3824_);
lean_dec_ref(v_a_3823_);
lean_dec_ref(v_pkg_3822_);
lean_dec(v_savedTrace_3821_);
lean_dec_ref(v_inst_3819_);
return v___x_3830_;
}
else
{
lean_object* v_a_3832_; lean_object* v___x_3833_; lean_object* v_a_3834_; 
lean_dec(v_a_3831_);
v_a_3832_ = lean_ctor_get(v___x_3830_, 1);
lean_inc(v_a_3832_);
lean_dec_ref(v___x_3830_);
v___x_3833_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3819_, v_inputHash_3820_, v_savedTrace_3821_, v_pkg_3822_, v_a_3823_, v_a_3824_, v_a_3825_, v_a_3826_, v_a_3827_, v_a_3832_);
v_a_3834_ = lean_ctor_get(v___x_3833_, 0);
lean_inc(v_a_3834_);
if (lean_obj_tag(v_a_3834_) == 1)
{
lean_dec_ref(v_a_3834_);
return v___x_3833_;
}
else
{
lean_object* v_a_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3843_; 
lean_dec(v_a_3834_);
v_a_3835_ = lean_ctor_get(v___x_3833_, 1);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3843_ == 0)
{
lean_object* v_unused_3844_; 
v_unused_3844_ = lean_ctor_get(v___x_3833_, 0);
lean_dec(v_unused_3844_);
v___x_3837_ = v___x_3833_;
v_isShared_3838_ = v_isSharedCheck_3843_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_a_3835_);
lean_dec(v___x_3833_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3843_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
lean_object* v___x_3839_; lean_object* v___x_3841_; 
v___x_3839_ = lean_box(0);
if (v_isShared_3838_ == 0)
{
lean_ctor_set(v___x_3837_, 0, v___x_3839_);
v___x_3841_ = v___x_3837_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v___x_3839_);
lean_ctor_set(v_reuseFailAlloc_3842_, 1, v_a_3835_);
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
}
else
{
lean_dec_ref(v_a_3827_);
lean_dec(v_a_3826_);
lean_dec(v_a_3825_);
lean_dec(v_a_3824_);
lean_dec_ref(v_a_3823_);
lean_dec_ref(v_pkg_3822_);
lean_dec(v_savedTrace_3821_);
lean_dec_ref(v_inst_3819_);
return v___x_3830_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___boxed(lean_object* v_00_u03b1_3845_, lean_object* v_inst_3846_, lean_object* v_inputHash_3847_, lean_object* v_savedTrace_3848_, lean_object* v_pkg_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_, lean_object* v_a_3852_, lean_object* v_a_3853_, lean_object* v_a_3854_, lean_object* v_a_3855_, lean_object* v_a_3856_){
_start:
{
uint64_t v_inputHash_boxed_3857_; lean_object* v_res_3858_; 
v_inputHash_boxed_3857_ = lean_unbox_uint64(v_inputHash_3847_);
lean_dec_ref(v_inputHash_3847_);
v_res_3858_ = l_Lake_getArtifacts_x3f(v_00_u03b1_3845_, v_inst_3846_, v_inputHash_boxed_3857_, v_savedTrace_3848_, v_pkg_3849_, v_a_3850_, v_a_3851_, v_a_3852_, v_a_3853_, v_a_3854_, v_a_3855_);
return v_res_3858_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0(lean_object* v_descr_3859_, lean_object* v___x_3860_, lean_object* v_mtime_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_){
_start:
{
lean_object* v___x_3869_; lean_object* v___x_3870_; 
lean_inc_ref(v___x_3860_);
v___x_3869_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3869_, 0, v_descr_3859_);
lean_ctor_set(v___x_3869_, 1, v___x_3860_);
lean_ctor_set(v___x_3869_, 2, v___x_3860_);
lean_ctor_set(v___x_3869_, 3, v_mtime_3861_);
v___x_3870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3870_, 0, v___x_3869_);
lean_ctor_set(v___x_3870_, 1, v___y_3867_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0___boxed(lean_object* v_descr_3871_, lean_object* v___x_3872_, lean_object* v_mtime_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_){
_start:
{
lean_object* v_res_3881_; 
v_res_3881_ = l_Lake_resolveArtifact___lam__0(v_descr_3871_, v___x_3872_, v_mtime_3873_, v___y_3874_, v___y_3875_, v___y_3876_, v___y_3877_, v___y_3878_, v___y_3879_);
lean_dec_ref(v___y_3878_);
lean_dec(v___y_3877_);
lean_dec(v___y_3876_);
lean_dec(v___y_3875_);
lean_dec_ref(v___y_3874_);
return v_res_3881_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1(lean_object* v___x_3883_, lean_object* v___f_3884_, lean_object* v_____r_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_){
_start:
{
lean_object* v_log_3893_; uint8_t v_action_3894_; uint8_t v_wantsRebuild_3895_; lean_object* v_trace_3896_; lean_object* v_buildTime_3897_; lean_object* v___x_3898_; 
v_log_3893_ = lean_ctor_get(v___y_3891_, 0);
v_action_3894_ = lean_ctor_get_uint8(v___y_3891_, sizeof(void*)*3);
v_wantsRebuild_3895_ = lean_ctor_get_uint8(v___y_3891_, sizeof(void*)*3 + 1);
v_trace_3896_ = lean_ctor_get(v___y_3891_, 1);
v_buildTime_3897_ = lean_ctor_get(v___y_3891_, 2);
v___x_3898_ = lean_io_metadata(v___x_3883_);
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_object* v_a_3899_; lean_object* v_modified_3900_; lean_object* v___x_3901_; 
v_a_3899_ = lean_ctor_get(v___x_3898_, 0);
lean_inc(v_a_3899_);
lean_dec_ref(v___x_3898_);
v_modified_3900_ = lean_ctor_get(v_a_3899_, 1);
lean_inc_ref(v_modified_3900_);
lean_dec(v_a_3899_);
v___x_3901_ = lean_apply_8(v___f_3884_, v_modified_3900_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_, lean_box(0));
return v___x_3901_;
}
else
{
lean_object* v___x_3903_; uint8_t v_isShared_3904_; uint8_t v_isSharedCheck_3917_; 
lean_inc(v_buildTime_3897_);
lean_inc_ref(v_trace_3896_);
lean_inc_ref(v_log_3893_);
lean_dec_ref(v___y_3890_);
lean_dec(v___y_3889_);
lean_dec(v___y_3888_);
lean_dec(v___y_3887_);
lean_dec_ref(v___y_3886_);
lean_dec_ref(v___f_3884_);
v_isSharedCheck_3917_ = !lean_is_exclusive(v___y_3891_);
if (v_isSharedCheck_3917_ == 0)
{
lean_object* v_unused_3918_; lean_object* v_unused_3919_; lean_object* v_unused_3920_; 
v_unused_3918_ = lean_ctor_get(v___y_3891_, 2);
lean_dec(v_unused_3918_);
v_unused_3919_ = lean_ctor_get(v___y_3891_, 1);
lean_dec(v_unused_3919_);
v_unused_3920_ = lean_ctor_get(v___y_3891_, 0);
lean_dec(v_unused_3920_);
v___x_3903_ = v___y_3891_;
v_isShared_3904_ = v_isSharedCheck_3917_;
goto v_resetjp_3902_;
}
else
{
lean_dec(v___y_3891_);
v___x_3903_ = lean_box(0);
v_isShared_3904_ = v_isSharedCheck_3917_;
goto v_resetjp_3902_;
}
v_resetjp_3902_:
{
lean_object* v_a_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; uint8_t v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3914_; 
v_a_3905_ = lean_ctor_get(v___x_3898_, 0);
lean_inc(v_a_3905_);
lean_dec_ref(v___x_3898_);
v___x_3906_ = ((lean_object*)(l_Lake_resolveArtifact___lam__1___closed__0));
v___x_3907_ = lean_io_error_to_string(v_a_3905_);
v___x_3908_ = lean_string_append(v___x_3906_, v___x_3907_);
lean_dec_ref(v___x_3907_);
v___x_3909_ = 3;
v___x_3910_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3910_, 0, v___x_3908_);
lean_ctor_set_uint8(v___x_3910_, sizeof(void*)*1, v___x_3909_);
v___x_3911_ = lean_array_get_size(v_log_3893_);
v___x_3912_ = lean_array_push(v_log_3893_, v___x_3910_);
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3912_);
v___x_3914_ = v___x_3903_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v___x_3912_);
lean_ctor_set(v_reuseFailAlloc_3916_, 1, v_trace_3896_);
lean_ctor_set(v_reuseFailAlloc_3916_, 2, v_buildTime_3897_);
lean_ctor_set_uint8(v_reuseFailAlloc_3916_, sizeof(void*)*3, v_action_3894_);
lean_ctor_set_uint8(v_reuseFailAlloc_3916_, sizeof(void*)*3 + 1, v_wantsRebuild_3895_);
v___x_3914_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3913_;
}
v_reusejp_3913_:
{
lean_object* v___x_3915_; 
v___x_3915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3911_);
lean_ctor_set(v___x_3915_, 1, v___x_3914_);
return v___x_3915_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1___boxed(lean_object* v___x_3921_, lean_object* v___f_3922_, lean_object* v_____r_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l_Lake_resolveArtifact___lam__1(v___x_3921_, v___f_3922_, v_____r_3923_, v___y_3924_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_, v___y_3929_);
lean_dec_ref(v___x_3921_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact(lean_object* v_descr_3943_, lean_object* v_service_x3f_3944_, lean_object* v_scope_x3f_3945_, uint8_t v_exe_3946_, lean_object* v_a_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_, lean_object* v_a_3951_, lean_object* v_a_3952_){
_start:
{
lean_object* v___y_3955_; lean_object* v_a_3956_; lean_object* v___y_3959_; lean_object* v___y_3960_; lean_object* v_toContext_3962_; lean_object* v_log_3963_; uint8_t v_action_3964_; uint8_t v_wantsRebuild_3965_; lean_object* v_trace_3966_; lean_object* v_buildTime_3967_; lean_object* v_lakeConfig_3968_; lean_object* v_lakeCache_3969_; uint64_t v_hash_3970_; lean_object* v_ext_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___y_3975_; lean_object* v___x_4073_; lean_object* v___x_4074_; uint8_t v___x_4075_; 
v_toContext_3962_ = lean_ctor_get(v_a_3951_, 1);
v_log_3963_ = lean_ctor_get(v_a_3952_, 0);
v_action_3964_ = lean_ctor_get_uint8(v_a_3952_, sizeof(void*)*3);
v_wantsRebuild_3965_ = lean_ctor_get_uint8(v_a_3952_, sizeof(void*)*3 + 1);
v_trace_3966_ = lean_ctor_get(v_a_3952_, 1);
v_buildTime_3967_ = lean_ctor_get(v_a_3952_, 2);
v_lakeConfig_3968_ = lean_ctor_get(v_toContext_3962_, 2);
v_lakeCache_3969_ = lean_ctor_get(v_toContext_3962_, 3);
v_hash_3970_ = lean_ctor_get_uint64(v_descr_3943_, sizeof(void*)*1);
v_ext_3971_ = lean_ctor_get(v_descr_3943_, 0);
v___x_3972_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__1));
lean_inc_ref(v_lakeCache_3969_);
v___x_3973_ = l_System_FilePath_join(v_lakeCache_3969_, v___x_3972_);
v___x_4073_ = lean_string_utf8_byte_size(v_ext_3971_);
v___x_4074_ = lean_unsigned_to_nat(0u);
v___x_4075_ = lean_nat_dec_eq(v___x_4073_, v___x_4074_);
if (v___x_4075_ == 0)
{
lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; 
v___x_4076_ = l_Lake_Hash_hex(v_hash_3970_);
v___x_4077_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_4078_ = lean_string_append(v___x_4076_, v___x_4077_);
v___x_4079_ = lean_string_append(v___x_4078_, v_ext_3971_);
v___y_3975_ = v___x_4079_;
goto v___jp_3974_;
}
else
{
lean_object* v___x_4080_; 
v___x_4080_ = l_Lake_Hash_hex(v_hash_3970_);
v___y_3975_ = v___x_4080_;
goto v___jp_3974_;
}
v___jp_3954_:
{
lean_object* v___x_3957_; 
v___x_3957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3957_, 0, v___y_3955_);
lean_ctor_set(v___x_3957_, 1, v_a_3956_);
return v___x_3957_;
}
v___jp_3958_:
{
if (lean_obj_tag(v___y_3960_) == 0)
{
lean_dec(v___y_3959_);
return v___y_3960_;
}
else
{
lean_object* v_a_3961_; 
v_a_3961_ = lean_ctor_get(v___y_3960_, 1);
lean_inc(v_a_3961_);
lean_dec_ref(v___y_3960_);
v___y_3955_ = v___y_3959_;
v_a_3956_ = v_a_3961_;
goto v___jp_3954_;
}
}
v___jp_3974_:
{
lean_object* v___x_3976_; lean_object* v___f_3977_; lean_object* v___x_3978_; 
v___x_3976_ = l_Lake_joinRelative(v___x_3973_, v___y_3975_);
lean_inc_ref(v___x_3976_);
lean_inc_ref(v_descr_3943_);
v___f_3977_ = lean_alloc_closure((void*)(l_Lake_resolveArtifact___lam__0___boxed), 10, 2);
lean_closure_set(v___f_3977_, 0, v_descr_3943_);
lean_closure_set(v___f_3977_, 1, v___x_3976_);
v___x_3978_ = lean_io_metadata(v___x_3976_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v_a_3979_; lean_object* v_modified_3980_; lean_object* v___x_3981_; 
lean_dec_ref(v___f_3977_);
lean_dec(v_scope_x3f_3945_);
lean_dec(v_service_x3f_3944_);
v_a_3979_ = lean_ctor_get(v___x_3978_, 0);
lean_inc(v_a_3979_);
lean_dec_ref(v___x_3978_);
v_modified_3980_ = lean_ctor_get(v_a_3979_, 1);
lean_inc_ref(v_modified_3980_);
lean_dec(v_a_3979_);
v___x_3981_ = l_Lake_resolveArtifact___lam__0(v_descr_3943_, v___x_3976_, v_modified_3980_, v_a_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_, v_a_3952_);
lean_dec_ref(v_a_3951_);
lean_dec(v_a_3950_);
lean_dec(v_a_3949_);
lean_dec(v_a_3948_);
lean_dec_ref(v_a_3947_);
return v___x_3981_;
}
else
{
lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_4069_; 
lean_inc(v_buildTime_3967_);
lean_inc_ref(v_trace_3966_);
lean_inc_ref(v_log_3963_);
lean_dec_ref(v_descr_3943_);
v_isSharedCheck_4069_ = !lean_is_exclusive(v_a_3952_);
if (v_isSharedCheck_4069_ == 0)
{
lean_object* v_unused_4070_; lean_object* v_unused_4071_; lean_object* v_unused_4072_; 
v_unused_4070_ = lean_ctor_get(v_a_3952_, 2);
lean_dec(v_unused_4070_);
v_unused_4071_ = lean_ctor_get(v_a_3952_, 1);
lean_dec(v_unused_4071_);
v_unused_4072_ = lean_ctor_get(v_a_3952_, 0);
lean_dec(v_unused_4072_);
v___x_3983_ = v_a_3952_;
v_isShared_3984_ = v_isSharedCheck_4069_;
goto v_resetjp_3982_;
}
else
{
lean_dec(v_a_3952_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_4069_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v_a_3985_; 
v_a_3985_ = lean_ctor_get(v___x_3978_, 0);
lean_inc(v_a_3985_);
lean_dec_ref(v___x_3978_);
if (lean_obj_tag(v_a_3985_) == 11)
{
lean_object* v___x_3986_; 
lean_dec_ref(v_a_3985_);
v___x_3986_ = lean_array_get_size(v_log_3963_);
if (lean_obj_tag(v_service_x3f_3944_) == 1)
{
lean_object* v_val_3987_; lean_object* v_cacheServices_3988_; uint8_t v___x_3989_; uint8_t v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; 
v_val_3987_ = lean_ctor_get(v_service_x3f_3944_, 0);
lean_inc(v_val_3987_);
lean_dec_ref(v_service_x3f_3944_);
v_cacheServices_3988_ = lean_ctor_get(v_lakeConfig_3968_, 3);
v___x_3989_ = 2;
v___x_3990_ = l_Lake_JobAction_merge(v_action_3964_, v___x_3989_);
v___x_3991_ = lean_box(0);
lean_inc(v_val_3987_);
v___x_3992_ = l_Lean_Name_str___override(v___x_3991_, v_val_3987_);
v___x_3993_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_cacheServices_3988_, v___x_3992_);
lean_dec(v___x_3992_);
if (lean_obj_tag(v___x_3993_) == 1)
{
lean_dec(v_val_3987_);
if (lean_obj_tag(v_scope_x3f_3945_) == 1)
{
lean_object* v_val_3994_; lean_object* v_val_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; uint8_t v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
v_val_3994_ = lean_ctor_get(v___x_3993_, 0);
lean_inc(v_val_3994_);
lean_dec_ref(v___x_3993_);
v_val_3995_ = lean_ctor_get(v_scope_x3f_3945_, 0);
lean_inc(v_val_3995_);
lean_dec_ref(v_scope_x3f_3945_);
v___x_3996_ = l_Lake_CacheService_artifactUrl(v_hash_3970_, v_val_3994_, v_val_3995_);
v___x_3997_ = ((lean_object*)(l_Lake_resolveArtifact___closed__0));
v___x_3998_ = l_Lake_Hash_hex(v_hash_3970_);
v___x_3999_ = lean_string_append(v___x_3997_, v___x_3998_);
lean_dec_ref(v___x_3998_);
v___x_4000_ = ((lean_object*)(l_Lake_resolveArtifact___closed__1));
v___x_4001_ = lean_string_append(v___x_3999_, v___x_4000_);
v___x_4002_ = lean_string_append(v___x_4001_, v___x_3976_);
v___x_4003_ = ((lean_object*)(l_Lake_resolveArtifact___closed__2));
v___x_4004_ = lean_string_append(v___x_4002_, v___x_4003_);
v___x_4005_ = lean_string_append(v___x_4004_, v___x_3996_);
v___x_4006_ = 0;
v___x_4007_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4007_, 0, v___x_4005_);
lean_ctor_set_uint8(v___x_4007_, sizeof(void*)*1, v___x_4006_);
v___x_4008_ = lean_array_push(v_log_3963_, v___x_4007_);
lean_inc_ref(v___x_3976_);
v___x_4009_ = l_Lake_downloadArtifactCore(v_hash_3970_, v___x_3996_, v___x_3976_, v___x_4008_);
if (lean_obj_tag(v___x_4009_) == 0)
{
lean_object* v_a_4010_; uint8_t v___x_4011_; uint8_t v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; 
v_a_4010_ = lean_ctor_get(v___x_4009_, 1);
lean_inc(v_a_4010_);
lean_dec_ref(v___x_4009_);
v___x_4011_ = 1;
v___x_4012_ = 0;
v___x_4013_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_4013_, 0, v___x_4011_);
lean_ctor_set_uint8(v___x_4013_, 1, v___x_4012_);
lean_ctor_set_uint8(v___x_4013_, 2, v_exe_3946_);
lean_inc_ref_n(v___x_4013_, 2);
v___x_4014_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4014_, 0, v___x_4013_);
lean_ctor_set(v___x_4014_, 1, v___x_4013_);
lean_ctor_set(v___x_4014_, 2, v___x_4013_);
v___x_4015_ = l_IO_setAccessRights(v___x_3976_, v___x_4014_);
lean_dec_ref(v___x_4014_);
if (lean_obj_tag(v___x_4015_) == 0)
{
lean_object* v___x_4017_; 
lean_dec_ref(v___x_4015_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v_a_4010_);
v___x_4017_ = v___x_3983_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4020_; 
v_reuseFailAlloc_4020_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4020_, 0, v_a_4010_);
lean_ctor_set(v_reuseFailAlloc_4020_, 1, v_trace_3966_);
lean_ctor_set(v_reuseFailAlloc_4020_, 2, v_buildTime_3967_);
lean_ctor_set_uint8(v_reuseFailAlloc_4020_, sizeof(void*)*3 + 1, v_wantsRebuild_3965_);
v___x_4017_ = v_reuseFailAlloc_4020_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
lean_object* v___x_4018_; lean_object* v___x_4019_; 
lean_ctor_set_uint8(v___x_4017_, sizeof(void*)*3, v___x_3990_);
v___x_4018_ = lean_box(0);
v___x_4019_ = l_Lake_resolveArtifact___lam__1(v___x_3976_, v___f_3977_, v___x_4018_, v_a_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_, v___x_4017_);
lean_dec_ref(v___x_3976_);
v___y_3959_ = v___x_3986_;
v___y_3960_ = v___x_4019_;
goto v___jp_3958_;
}
}
else
{
lean_object* v_a_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; uint8_t v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4030_; 
v_a_4021_ = lean_ctor_get(v___x_4015_, 0);
lean_inc(v_a_4021_);
lean_dec_ref(v___x_4015_);
v___x_4022_ = ((lean_object*)(l_Lake_resolveArtifact___closed__3));
v___x_4023_ = lean_io_error_to_string(v_a_4021_);
v___x_4024_ = lean_string_append(v___x_4022_, v___x_4023_);
lean_dec_ref(v___x_4023_);
v___x_4025_ = 2;
v___x_4026_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4026_, 0, v___x_4024_);
lean_ctor_set_uint8(v___x_4026_, sizeof(void*)*1, v___x_4025_);
v___x_4027_ = lean_box(0);
v___x_4028_ = lean_array_push(v_a_4010_, v___x_4026_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v___x_4028_);
v___x_4030_ = v___x_3983_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v___x_4028_);
lean_ctor_set(v_reuseFailAlloc_4032_, 1, v_trace_3966_);
lean_ctor_set(v_reuseFailAlloc_4032_, 2, v_buildTime_3967_);
lean_ctor_set_uint8(v_reuseFailAlloc_4032_, sizeof(void*)*3 + 1, v_wantsRebuild_3965_);
v___x_4030_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
lean_object* v___x_4031_; 
lean_ctor_set_uint8(v___x_4030_, sizeof(void*)*3, v___x_3990_);
v___x_4031_ = l_Lake_resolveArtifact___lam__1(v___x_3976_, v___f_3977_, v___x_4027_, v_a_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_, v___x_4030_);
lean_dec_ref(v___x_3976_);
v___y_3959_ = v___x_3986_;
v___y_3960_ = v___x_4031_;
goto v___jp_3958_;
}
}
}
else
{
lean_object* v_a_4033_; lean_object* v___x_4035_; 
lean_dec_ref(v___f_3977_);
lean_dec_ref(v___x_3976_);
lean_dec_ref(v_a_3951_);
lean_dec(v_a_3950_);
lean_dec(v_a_3949_);
lean_dec(v_a_3948_);
lean_dec_ref(v_a_3947_);
v_a_4033_ = lean_ctor_get(v___x_4009_, 1);
lean_inc(v_a_4033_);
lean_dec_ref(v___x_4009_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v_a_4033_);
v___x_4035_ = v___x_3983_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v_a_4033_);
lean_ctor_set(v_reuseFailAlloc_4036_, 1, v_trace_3966_);
lean_ctor_set(v_reuseFailAlloc_4036_, 2, v_buildTime_3967_);
lean_ctor_set_uint8(v_reuseFailAlloc_4036_, sizeof(void*)*3 + 1, v_wantsRebuild_3965_);
v___x_4035_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
lean_ctor_set_uint8(v___x_4035_, sizeof(void*)*3, v___x_3990_);
v___y_3955_ = v___x_3986_;
v_a_3956_ = v___x_4035_;
goto v___jp_3954_;
}
}
}
else
{
lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4040_; 
lean_dec_ref(v___x_3993_);
lean_dec_ref(v___f_3977_);
lean_dec_ref(v___x_3976_);
lean_dec_ref(v_a_3951_);
lean_dec(v_a_3950_);
lean_dec(v_a_3949_);
lean_dec(v_a_3948_);
lean_dec_ref(v_a_3947_);
lean_dec(v_scope_x3f_3945_);
v___x_4037_ = ((lean_object*)(l_Lake_resolveArtifact___closed__5));
v___x_4038_ = lean_array_push(v_log_3963_, v___x_4037_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v___x_4038_);
v___x_4040_ = v___x_3983_;
goto v_reusejp_4039_;
}
else
{
lean_object* v_reuseFailAlloc_4041_; 
v_reuseFailAlloc_4041_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4041_, 0, v___x_4038_);
lean_ctor_set(v_reuseFailAlloc_4041_, 1, v_trace_3966_);
lean_ctor_set(v_reuseFailAlloc_4041_, 2, v_buildTime_3967_);
lean_ctor_set_uint8(v_reuseFailAlloc_4041_, sizeof(void*)*3 + 1, v_wantsRebuild_3965_);
v___x_4040_ = v_reuseFailAlloc_4041_;
goto v_reusejp_4039_;
}
v_reusejp_4039_:
{
lean_ctor_set_uint8(v___x_4040_, sizeof(void*)*3, v___x_3990_);
v___y_3955_ = v___x_3986_;
v_a_3956_ = v___x_4040_;
goto v___jp_3954_;
}
}
}
else
{
lean_object* v___x_4042_; lean_object* v___x_4043_; uint8_t v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4048_; 
lean_dec(v___x_3993_);
lean_dec_ref(v___f_3977_);
lean_dec_ref(v___x_3976_);
lean_dec_ref(v_a_3951_);
lean_dec(v_a_3950_);
lean_dec(v_a_3949_);
lean_dec(v_a_3948_);
lean_dec_ref(v_a_3947_);
lean_dec(v_scope_x3f_3945_);
v___x_4042_ = ((lean_object*)(l_Lake_resolveArtifact___closed__6));
v___x_4043_ = lean_string_append(v___x_4042_, v_val_3987_);
lean_dec(v_val_3987_);
v___x_4044_ = 3;
v___x_4045_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4045_, 0, v___x_4043_);
lean_ctor_set_uint8(v___x_4045_, sizeof(void*)*1, v___x_4044_);
v___x_4046_ = lean_array_push(v_log_3963_, v___x_4045_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v___x_4046_);
v___x_4048_ = v___x_3983_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v___x_4046_);
lean_ctor_set(v_reuseFailAlloc_4049_, 1, v_trace_3966_);
lean_ctor_set(v_reuseFailAlloc_4049_, 2, v_buildTime_3967_);
lean_ctor_set_uint8(v_reuseFailAlloc_4049_, sizeof(void*)*3 + 1, v_wantsRebuild_3965_);
v___x_4048_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
lean_ctor_set_uint8(v___x_4048_, sizeof(void*)*3, v___x_3990_);
v___y_3955_ = v___x_3986_;
v_a_3956_ = v___x_4048_;
goto v___jp_3954_;
}
}
}
else
{
lean_object* v___x_4050_; lean_object* v___x_4051_; uint8_t v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4056_; 
lean_dec_ref(v___f_3977_);
lean_dec_ref(v_a_3951_);
lean_dec(v_a_3950_);
lean_dec(v_a_3949_);
lean_dec(v_a_3948_);
lean_dec_ref(v_a_3947_);
lean_dec(v_scope_x3f_3945_);
lean_dec(v_service_x3f_3944_);
v___x_4050_ = ((lean_object*)(l_Lake_resolveArtifact___closed__7));
v___x_4051_ = lean_string_append(v___x_4050_, v___x_3976_);
lean_dec_ref(v___x_3976_);
v___x_4052_ = 3;
v___x_4053_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4053_, 0, v___x_4051_);
lean_ctor_set_uint8(v___x_4053_, sizeof(void*)*1, v___x_4052_);
v___x_4054_ = lean_array_push(v_log_3963_, v___x_4053_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v___x_4054_);
v___x_4056_ = v___x_3983_;
goto v_reusejp_4055_;
}
else
{
lean_object* v_reuseFailAlloc_4057_; 
v_reuseFailAlloc_4057_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4057_, 0, v___x_4054_);
lean_ctor_set(v_reuseFailAlloc_4057_, 1, v_trace_3966_);
lean_ctor_set(v_reuseFailAlloc_4057_, 2, v_buildTime_3967_);
lean_ctor_set_uint8(v_reuseFailAlloc_4057_, sizeof(void*)*3, v_action_3964_);
lean_ctor_set_uint8(v_reuseFailAlloc_4057_, sizeof(void*)*3 + 1, v_wantsRebuild_3965_);
v___x_4056_ = v_reuseFailAlloc_4057_;
goto v_reusejp_4055_;
}
v_reusejp_4055_:
{
v___y_3955_ = v___x_3986_;
v_a_3956_ = v___x_4056_;
goto v___jp_3954_;
}
}
}
else
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; uint8_t v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4066_; 
lean_dec_ref(v___f_3977_);
lean_dec_ref(v___x_3976_);
lean_dec_ref(v_a_3951_);
lean_dec(v_a_3950_);
lean_dec(v_a_3949_);
lean_dec(v_a_3948_);
lean_dec_ref(v_a_3947_);
lean_dec(v_scope_x3f_3945_);
lean_dec(v_service_x3f_3944_);
v___x_4058_ = ((lean_object*)(l_Lake_resolveArtifact___closed__8));
v___x_4059_ = lean_io_error_to_string(v_a_3985_);
v___x_4060_ = lean_string_append(v___x_4058_, v___x_4059_);
lean_dec_ref(v___x_4059_);
v___x_4061_ = 3;
v___x_4062_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4062_, 0, v___x_4060_);
lean_ctor_set_uint8(v___x_4062_, sizeof(void*)*1, v___x_4061_);
v___x_4063_ = lean_array_get_size(v_log_3963_);
v___x_4064_ = lean_array_push(v_log_3963_, v___x_4062_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v___x_4064_);
v___x_4066_ = v___x_3983_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v___x_4064_);
lean_ctor_set(v_reuseFailAlloc_4068_, 1, v_trace_3966_);
lean_ctor_set(v_reuseFailAlloc_4068_, 2, v_buildTime_3967_);
lean_ctor_set_uint8(v_reuseFailAlloc_4068_, sizeof(void*)*3, v_action_3964_);
lean_ctor_set_uint8(v_reuseFailAlloc_4068_, sizeof(void*)*3 + 1, v_wantsRebuild_3965_);
v___x_4066_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
lean_object* v___x_4067_; 
v___x_4067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4067_, 0, v___x_4063_);
lean_ctor_set(v___x_4067_, 1, v___x_4066_);
return v___x_4067_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___boxed(lean_object* v_descr_4081_, lean_object* v_service_x3f_4082_, lean_object* v_scope_x3f_4083_, lean_object* v_exe_4084_, lean_object* v_a_4085_, lean_object* v_a_4086_, lean_object* v_a_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_, lean_object* v_a_4091_){
_start:
{
uint8_t v_exe_boxed_4092_; lean_object* v_res_4093_; 
v_exe_boxed_4092_ = lean_unbox(v_exe_4084_);
v_res_4093_ = l_Lake_resolveArtifact(v_descr_4081_, v_service_x3f_4082_, v_scope_x3f_4083_, v_exe_boxed_4092_, v_a_4085_, v_a_4086_, v_a_4087_, v_a_4088_, v_a_4089_, v_a_4090_);
return v_res_4093_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput(lean_object* v_out_4096_, uint8_t v_exe_4097_, lean_object* v_a_4098_, lean_object* v_a_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_){
_start:
{
lean_object* v_data_4105_; lean_object* v_service_x3f_4106_; lean_object* v_scope_x3f_4107_; lean_object* v___x_4108_; 
v_data_4105_ = lean_ctor_get(v_out_4096_, 0);
lean_inc(v_data_4105_);
v_service_x3f_4106_ = lean_ctor_get(v_out_4096_, 1);
lean_inc(v_service_x3f_4106_);
v_scope_x3f_4107_ = lean_ctor_get(v_out_4096_, 2);
lean_inc(v_scope_x3f_4107_);
lean_dec_ref(v_out_4096_);
lean_inc(v_data_4105_);
v___x_4108_ = l_Lake_ArtifactDescr_fromJson_x3f(v_data_4105_);
if (lean_obj_tag(v___x_4108_) == 0)
{
lean_object* v_a_4109_; lean_object* v_log_4110_; uint8_t v_action_4111_; uint8_t v_wantsRebuild_4112_; lean_object* v_trace_4113_; lean_object* v_buildTime_4114_; lean_object* v___x_4116_; uint8_t v_isShared_4117_; uint8_t v_isSharedCheck_4136_; 
lean_dec(v_scope_x3f_4107_);
lean_dec(v_service_x3f_4106_);
lean_dec_ref(v_a_4102_);
lean_dec(v_a_4101_);
lean_dec(v_a_4100_);
lean_dec(v_a_4099_);
lean_dec_ref(v_a_4098_);
v_a_4109_ = lean_ctor_get(v___x_4108_, 0);
lean_inc(v_a_4109_);
lean_dec_ref(v___x_4108_);
v_log_4110_ = lean_ctor_get(v_a_4103_, 0);
v_action_4111_ = lean_ctor_get_uint8(v_a_4103_, sizeof(void*)*3);
v_wantsRebuild_4112_ = lean_ctor_get_uint8(v_a_4103_, sizeof(void*)*3 + 1);
v_trace_4113_ = lean_ctor_get(v_a_4103_, 1);
v_buildTime_4114_ = lean_ctor_get(v_a_4103_, 2);
v_isSharedCheck_4136_ = !lean_is_exclusive(v_a_4103_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4116_ = v_a_4103_;
v_isShared_4117_ = v_isSharedCheck_4136_;
goto v_resetjp_4115_;
}
else
{
lean_inc(v_buildTime_4114_);
lean_inc(v_trace_4113_);
lean_inc(v_log_4110_);
lean_dec(v_a_4103_);
v___x_4116_ = lean_box(0);
v_isShared_4117_ = v_isSharedCheck_4136_;
goto v_resetjp_4115_;
}
v_resetjp_4115_:
{
lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; uint8_t v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4133_; 
v___x_4118_ = ((lean_object*)(l_Lake_resolveArtifactOutput___closed__0));
v___x_4119_ = l_Lean_Json_render(v_data_4105_);
v___x_4120_ = lean_unsigned_to_nat(80u);
v___x_4121_ = lean_unsigned_to_nat(2u);
v___x_4122_ = lean_unsigned_to_nat(0u);
v___x_4123_ = l_Std_Format_pretty(v___x_4119_, v___x_4120_, v___x_4121_, v___x_4122_);
v___x_4124_ = lean_string_append(v___x_4118_, v___x_4123_);
lean_dec_ref(v___x_4123_);
v___x_4125_ = ((lean_object*)(l_Lake_resolveArtifactOutput___closed__1));
v___x_4126_ = lean_string_append(v___x_4124_, v___x_4125_);
v___x_4127_ = lean_string_append(v___x_4126_, v_a_4109_);
lean_dec(v_a_4109_);
v___x_4128_ = 3;
v___x_4129_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4129_, 0, v___x_4127_);
lean_ctor_set_uint8(v___x_4129_, sizeof(void*)*1, v___x_4128_);
v___x_4130_ = lean_array_get_size(v_log_4110_);
v___x_4131_ = lean_array_push(v_log_4110_, v___x_4129_);
if (v_isShared_4117_ == 0)
{
lean_ctor_set(v___x_4116_, 0, v___x_4131_);
v___x_4133_ = v___x_4116_;
goto v_reusejp_4132_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v___x_4131_);
lean_ctor_set(v_reuseFailAlloc_4135_, 1, v_trace_4113_);
lean_ctor_set(v_reuseFailAlloc_4135_, 2, v_buildTime_4114_);
lean_ctor_set_uint8(v_reuseFailAlloc_4135_, sizeof(void*)*3, v_action_4111_);
lean_ctor_set_uint8(v_reuseFailAlloc_4135_, sizeof(void*)*3 + 1, v_wantsRebuild_4112_);
v___x_4133_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4132_;
}
v_reusejp_4132_:
{
lean_object* v___x_4134_; 
v___x_4134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4134_, 0, v___x_4130_);
lean_ctor_set(v___x_4134_, 1, v___x_4133_);
return v___x_4134_;
}
}
}
else
{
lean_object* v_a_4137_; lean_object* v___x_4138_; 
lean_dec(v_data_4105_);
v_a_4137_ = lean_ctor_get(v___x_4108_, 0);
lean_inc(v_a_4137_);
lean_dec_ref(v___x_4108_);
v___x_4138_ = l_Lake_resolveArtifact(v_a_4137_, v_service_x3f_4106_, v_scope_x3f_4107_, v_exe_4097_, v_a_4098_, v_a_4099_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
return v___x_4138_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput___boxed(lean_object* v_out_4139_, lean_object* v_exe_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_){
_start:
{
uint8_t v_exe_boxed_4148_; lean_object* v_res_4149_; 
v_exe_boxed_4148_ = lean_unbox(v_exe_4140_);
v_res_4149_ = l_Lake_resolveArtifactOutput(v_out_4139_, v_exe_boxed_4148_, v_a_4141_, v_a_4142_, v_a_4143_, v_a_4144_, v_a_4145_, v_a_4146_);
return v_res_4149_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0(uint8_t v_exe_4150_, lean_object* v_out_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_){
_start:
{
lean_object* v___x_4159_; 
v___x_4159_ = l_Lake_resolveArtifactOutput(v_out_4151_, v_exe_4150_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_);
return v___x_4159_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0___boxed(lean_object* v_exe_4160_, lean_object* v_out_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_){
_start:
{
uint8_t v_exe_boxed_4169_; lean_object* v_res_4170_; 
v_exe_boxed_4169_ = lean_unbox(v_exe_4160_);
v_res_4170_ = l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0(v_exe_boxed_4169_, v_out_4161_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_, v___y_4167_);
return v_res_4170_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact(uint8_t v_exe_4171_){
_start:
{
lean_object* v___x_4172_; lean_object* v___f_4173_; 
v___x_4172_ = lean_box(v_exe_4171_);
v___f_4173_ = lean_alloc_closure((void*)(l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0___boxed), 9, 1);
lean_closure_set(v___f_4173_, 0, v___x_4172_);
return v___f_4173_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___boxed(lean_object* v_exe_4174_){
_start:
{
uint8_t v_exe_boxed_4175_; lean_object* v_res_4176_; 
v_exe_boxed_4175_ = lean_unbox(v_exe_4174_);
v_res_4176_ = l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact(v_exe_boxed_4175_);
return v_res_4176_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg(lean_object* v_path_4177_, lean_object* v_ext_4178_, uint8_t v_text_4179_, lean_object* v_a_4180_, lean_object* v_a_4181_){
_start:
{
lean_object* v___x_4183_; 
lean_inc_ref(v_path_4177_);
v___x_4183_ = l_Lake_fetchFileHash___redArg(v_path_4177_, v_text_4179_, v_a_4180_, v_a_4181_);
if (lean_obj_tag(v___x_4183_) == 0)
{
lean_object* v_a_4184_; lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4202_; 
v_a_4184_ = lean_ctor_get(v___x_4183_, 0);
v_a_4185_ = lean_ctor_get(v___x_4183_, 1);
v_isSharedCheck_4202_ = !lean_is_exclusive(v___x_4183_);
if (v_isSharedCheck_4202_ == 0)
{
v___x_4187_ = v___x_4183_;
v_isShared_4188_ = v_isSharedCheck_4202_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_inc(v_a_4184_);
lean_dec(v___x_4183_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4202_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___y_4190_; lean_object* v___y_4191_; lean_object* v___x_4198_; 
v___x_4198_ = lean_io_metadata(v_path_4177_);
if (lean_obj_tag(v___x_4198_) == 0)
{
lean_object* v_a_4199_; lean_object* v_modified_4200_; 
v_a_4199_ = lean_ctor_get(v___x_4198_, 0);
lean_inc(v_a_4199_);
lean_dec_ref(v___x_4198_);
v_modified_4200_ = lean_ctor_get(v_a_4199_, 1);
lean_inc_ref(v_modified_4200_);
lean_dec(v_a_4199_);
v___y_4190_ = v_a_4185_;
v___y_4191_ = v_modified_4200_;
goto v___jp_4189_;
}
else
{
lean_object* v___x_4201_; 
lean_dec_ref(v___x_4198_);
v___x_4201_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___y_4190_ = v_a_4185_;
v___y_4191_ = v___x_4201_;
goto v___jp_4189_;
}
v___jp_4189_:
{
lean_object* v___x_4192_; uint64_t v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4196_; 
v___x_4192_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4192_, 0, v_ext_4178_);
v___x_4193_ = lean_unbox_uint64(v_a_4184_);
lean_dec(v_a_4184_);
lean_ctor_set_uint64(v___x_4192_, sizeof(void*)*1, v___x_4193_);
lean_inc_ref(v_path_4177_);
v___x_4194_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4192_);
lean_ctor_set(v___x_4194_, 1, v_path_4177_);
lean_ctor_set(v___x_4194_, 2, v_path_4177_);
lean_ctor_set(v___x_4194_, 3, v___y_4191_);
if (v_isShared_4188_ == 0)
{
lean_ctor_set(v___x_4187_, 1, v___y_4190_);
lean_ctor_set(v___x_4187_, 0, v___x_4194_);
v___x_4196_ = v___x_4187_;
goto v_reusejp_4195_;
}
else
{
lean_object* v_reuseFailAlloc_4197_; 
v_reuseFailAlloc_4197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4197_, 0, v___x_4194_);
lean_ctor_set(v_reuseFailAlloc_4197_, 1, v___y_4190_);
v___x_4196_ = v_reuseFailAlloc_4197_;
goto v_reusejp_4195_;
}
v_reusejp_4195_:
{
return v___x_4196_;
}
}
}
}
else
{
lean_object* v_a_4203_; lean_object* v_a_4204_; lean_object* v___x_4206_; uint8_t v_isShared_4207_; uint8_t v_isSharedCheck_4211_; 
lean_dec_ref(v_ext_4178_);
lean_dec_ref(v_path_4177_);
v_a_4203_ = lean_ctor_get(v___x_4183_, 0);
v_a_4204_ = lean_ctor_get(v___x_4183_, 1);
v_isSharedCheck_4211_ = !lean_is_exclusive(v___x_4183_);
if (v_isSharedCheck_4211_ == 0)
{
v___x_4206_ = v___x_4183_;
v_isShared_4207_ = v_isSharedCheck_4211_;
goto v_resetjp_4205_;
}
else
{
lean_inc(v_a_4204_);
lean_inc(v_a_4203_);
lean_dec(v___x_4183_);
v___x_4206_ = lean_box(0);
v_isShared_4207_ = v_isSharedCheck_4211_;
goto v_resetjp_4205_;
}
v_resetjp_4205_:
{
lean_object* v___x_4209_; 
if (v_isShared_4207_ == 0)
{
v___x_4209_ = v___x_4206_;
goto v_reusejp_4208_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v_a_4203_);
lean_ctor_set(v_reuseFailAlloc_4210_, 1, v_a_4204_);
v___x_4209_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4208_;
}
v_reusejp_4208_:
{
return v___x_4209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg___boxed(lean_object* v_path_4212_, lean_object* v_ext_4213_, lean_object* v_text_4214_, lean_object* v_a_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_){
_start:
{
uint8_t v_text_boxed_4218_; lean_object* v_res_4219_; 
v_text_boxed_4218_ = lean_unbox(v_text_4214_);
v_res_4219_ = l_Lake_computeArtifact___redArg(v_path_4212_, v_ext_4213_, v_text_boxed_4218_, v_a_4215_, v_a_4216_);
lean_dec_ref(v_a_4215_);
return v_res_4219_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact(lean_object* v_path_4220_, lean_object* v_ext_4221_, uint8_t v_text_4222_, lean_object* v_a_4223_, lean_object* v_a_4224_, lean_object* v_a_4225_, lean_object* v_a_4226_, lean_object* v_a_4227_, lean_object* v_a_4228_){
_start:
{
lean_object* v___x_4230_; 
v___x_4230_ = l_Lake_computeArtifact___redArg(v_path_4220_, v_ext_4221_, v_text_4222_, v_a_4227_, v_a_4228_);
return v___x_4230_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___boxed(lean_object* v_path_4231_, lean_object* v_ext_4232_, lean_object* v_text_4233_, lean_object* v_a_4234_, lean_object* v_a_4235_, lean_object* v_a_4236_, lean_object* v_a_4237_, lean_object* v_a_4238_, lean_object* v_a_4239_, lean_object* v_a_4240_){
_start:
{
uint8_t v_text_boxed_4241_; lean_object* v_res_4242_; 
v_text_boxed_4241_ = lean_unbox(v_text_4233_);
v_res_4242_ = l_Lake_computeArtifact(v_path_4231_, v_ext_4232_, v_text_boxed_4241_, v_a_4234_, v_a_4235_, v_a_4236_, v_a_4237_, v_a_4238_, v_a_4239_);
lean_dec_ref(v_a_4238_);
lean_dec(v_a_4237_);
lean_dec(v_a_4236_);
lean_dec(v_a_4235_);
lean_dec_ref(v_a_4234_);
return v_res_4242_;
}
}
LEAN_EXPORT lean_object* l_Lake_restoreArtifact(lean_object* v_file_4246_, lean_object* v_art_4247_, uint8_t v_exe_4248_, lean_object* v_a_4249_){
_start:
{
lean_object* v___y_4252_; uint8_t v___x_4265_; 
v___x_4265_ = l_System_FilePath_pathExists(v_file_4246_);
if (v___x_4265_ == 0)
{
lean_object* v_descr_4266_; lean_object* v_path_4267_; lean_object* v___y_4269_; lean_object* v___x_4284_; lean_object* v___x_4285_; uint8_t v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; 
v_descr_4266_ = lean_ctor_get(v_art_4247_, 0);
v_path_4267_ = lean_ctor_get(v_art_4247_, 1);
v___x_4284_ = ((lean_object*)(l_Lake_restoreArtifact___closed__1));
v___x_4285_ = lean_string_append(v___x_4284_, v_path_4267_);
v___x_4286_ = 0;
v___x_4287_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4287_, 0, v___x_4285_);
lean_ctor_set_uint8(v___x_4287_, sizeof(void*)*1, v___x_4286_);
v___x_4288_ = lean_array_push(v_a_4249_, v___x_4287_);
lean_inc_ref(v_file_4246_);
v___x_4289_ = l_Lake_createParentDirs(v_file_4246_);
if (lean_obj_tag(v___x_4289_) == 0)
{
lean_object* v___x_4290_; 
lean_dec_ref(v___x_4289_);
v___x_4290_ = lean_io_hard_link(v_path_4267_, v_file_4246_);
if (lean_obj_tag(v___x_4290_) == 0)
{
lean_dec_ref(v___x_4290_);
v___y_4269_ = v___x_4288_;
goto v___jp_4268_;
}
else
{
lean_object* v_a_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; 
v_a_4291_ = lean_ctor_get(v___x_4290_, 0);
lean_inc(v_a_4291_);
lean_dec_ref(v___x_4290_);
v___x_4292_ = ((lean_object*)(l_Lake_restoreArtifact___closed__2));
v___x_4293_ = lean_io_error_to_string(v_a_4291_);
v___x_4294_ = lean_string_append(v___x_4292_, v___x_4293_);
lean_dec_ref(v___x_4293_);
v___x_4295_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4295_, 0, v___x_4294_);
lean_ctor_set_uint8(v___x_4295_, sizeof(void*)*1, v___x_4286_);
v___x_4296_ = lean_array_push(v___x_4288_, v___x_4295_);
v___x_4297_ = l_Lake_copyFile(v_path_4267_, v_file_4246_);
if (lean_obj_tag(v___x_4297_) == 0)
{
uint8_t v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; 
lean_dec_ref(v___x_4297_);
v___x_4298_ = 1;
v___x_4299_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_4299_, 0, v___x_4298_);
lean_ctor_set_uint8(v___x_4299_, 1, v___x_4265_);
lean_ctor_set_uint8(v___x_4299_, 2, v_exe_4248_);
lean_inc_ref_n(v___x_4299_, 2);
v___x_4300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4300_, 0, v___x_4299_);
lean_ctor_set(v___x_4300_, 1, v___x_4299_);
lean_ctor_set(v___x_4300_, 2, v___x_4299_);
v___x_4301_ = l_IO_setAccessRights(v_file_4246_, v___x_4300_);
lean_dec_ref(v___x_4300_);
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_dec_ref(v___x_4301_);
v___y_4269_ = v___x_4296_;
goto v___jp_4268_;
}
else
{
lean_object* v_a_4302_; lean_object* v___x_4303_; uint8_t v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; 
lean_dec_ref(v_art_4247_);
lean_dec_ref(v_file_4246_);
v_a_4302_ = lean_ctor_get(v___x_4301_, 0);
lean_inc(v_a_4302_);
lean_dec_ref(v___x_4301_);
v___x_4303_ = lean_io_error_to_string(v_a_4302_);
v___x_4304_ = 3;
v___x_4305_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4305_, 0, v___x_4303_);
lean_ctor_set_uint8(v___x_4305_, sizeof(void*)*1, v___x_4304_);
v___x_4306_ = lean_array_get_size(v___x_4296_);
v___x_4307_ = lean_array_push(v___x_4296_, v___x_4305_);
v___x_4308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4308_, 0, v___x_4306_);
lean_ctor_set(v___x_4308_, 1, v___x_4307_);
return v___x_4308_;
}
}
else
{
lean_object* v_a_4309_; lean_object* v___x_4310_; uint8_t v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; 
lean_dec_ref(v_art_4247_);
lean_dec_ref(v_file_4246_);
v_a_4309_ = lean_ctor_get(v___x_4297_, 0);
lean_inc(v_a_4309_);
lean_dec_ref(v___x_4297_);
v___x_4310_ = lean_io_error_to_string(v_a_4309_);
v___x_4311_ = 3;
v___x_4312_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4312_, 0, v___x_4310_);
lean_ctor_set_uint8(v___x_4312_, sizeof(void*)*1, v___x_4311_);
v___x_4313_ = lean_array_get_size(v___x_4296_);
v___x_4314_ = lean_array_push(v___x_4296_, v___x_4312_);
v___x_4315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4315_, 0, v___x_4313_);
lean_ctor_set(v___x_4315_, 1, v___x_4314_);
return v___x_4315_;
}
}
}
else
{
lean_object* v_a_4316_; lean_object* v___x_4317_; uint8_t v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; 
lean_dec_ref(v_art_4247_);
lean_dec_ref(v_file_4246_);
v_a_4316_ = lean_ctor_get(v___x_4289_, 0);
lean_inc(v_a_4316_);
lean_dec_ref(v___x_4289_);
v___x_4317_ = lean_io_error_to_string(v_a_4316_);
v___x_4318_ = 3;
v___x_4319_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4319_, 0, v___x_4317_);
lean_ctor_set_uint8(v___x_4319_, sizeof(void*)*1, v___x_4318_);
v___x_4320_ = lean_array_get_size(v___x_4288_);
v___x_4321_ = lean_array_push(v___x_4288_, v___x_4319_);
v___x_4322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4322_, 0, v___x_4320_);
lean_ctor_set(v___x_4322_, 1, v___x_4321_);
return v___x_4322_;
}
v___jp_4268_:
{
uint64_t v_hash_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; uint8_t v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; 
v_hash_4270_ = lean_ctor_get_uint64(v_descr_4266_, sizeof(void*)*1);
v___x_4271_ = ((lean_object*)(l_Lake_restoreArtifact___closed__0));
v___x_4272_ = lean_string_append(v___x_4271_, v_file_4246_);
v___x_4273_ = 0;
v___x_4274_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4274_, 0, v___x_4272_);
lean_ctor_set_uint8(v___x_4274_, sizeof(void*)*1, v___x_4273_);
v___x_4275_ = lean_array_push(v___y_4269_, v___x_4274_);
lean_inc_ref(v_file_4246_);
v___x_4276_ = l_Lake_writeFileHash(v_file_4246_, v_hash_4270_);
if (lean_obj_tag(v___x_4276_) == 0)
{
lean_dec_ref(v___x_4276_);
v___y_4252_ = v___x_4275_;
goto v___jp_4251_;
}
else
{
lean_object* v_a_4277_; lean_object* v___x_4278_; uint8_t v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; 
lean_dec_ref(v_art_4247_);
lean_dec_ref(v_file_4246_);
v_a_4277_ = lean_ctor_get(v___x_4276_, 0);
lean_inc(v_a_4277_);
lean_dec_ref(v___x_4276_);
v___x_4278_ = lean_io_error_to_string(v_a_4277_);
v___x_4279_ = 3;
v___x_4280_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4280_, 0, v___x_4278_);
lean_ctor_set_uint8(v___x_4280_, sizeof(void*)*1, v___x_4279_);
v___x_4281_ = lean_array_get_size(v___x_4275_);
v___x_4282_ = lean_array_push(v___x_4275_, v___x_4280_);
v___x_4283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4283_, 0, v___x_4281_);
lean_ctor_set(v___x_4283_, 1, v___x_4282_);
return v___x_4283_;
}
}
}
else
{
v___y_4252_ = v_a_4249_;
goto v___jp_4251_;
}
v___jp_4251_:
{
lean_object* v_descr_4253_; lean_object* v_mtime_4254_; lean_object* v___x_4256_; uint8_t v_isShared_4257_; uint8_t v_isSharedCheck_4262_; 
v_descr_4253_ = lean_ctor_get(v_art_4247_, 0);
v_mtime_4254_ = lean_ctor_get(v_art_4247_, 3);
v_isSharedCheck_4262_ = !lean_is_exclusive(v_art_4247_);
if (v_isSharedCheck_4262_ == 0)
{
lean_object* v_unused_4263_; lean_object* v_unused_4264_; 
v_unused_4263_ = lean_ctor_get(v_art_4247_, 2);
lean_dec(v_unused_4263_);
v_unused_4264_ = lean_ctor_get(v_art_4247_, 1);
lean_dec(v_unused_4264_);
v___x_4256_ = v_art_4247_;
v_isShared_4257_ = v_isSharedCheck_4262_;
goto v_resetjp_4255_;
}
else
{
lean_inc(v_mtime_4254_);
lean_inc(v_descr_4253_);
lean_dec(v_art_4247_);
v___x_4256_ = lean_box(0);
v_isShared_4257_ = v_isSharedCheck_4262_;
goto v_resetjp_4255_;
}
v_resetjp_4255_:
{
lean_object* v___x_4259_; 
lean_inc_ref(v_file_4246_);
if (v_isShared_4257_ == 0)
{
lean_ctor_set(v___x_4256_, 2, v_file_4246_);
lean_ctor_set(v___x_4256_, 1, v_file_4246_);
v___x_4259_ = v___x_4256_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v_descr_4253_);
lean_ctor_set(v_reuseFailAlloc_4261_, 1, v_file_4246_);
lean_ctor_set(v_reuseFailAlloc_4261_, 2, v_file_4246_);
lean_ctor_set(v_reuseFailAlloc_4261_, 3, v_mtime_4254_);
v___x_4259_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
lean_object* v___x_4260_; 
v___x_4260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4259_);
lean_ctor_set(v___x_4260_, 1, v___y_4252_);
return v___x_4260_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_restoreArtifact___boxed(lean_object* v_file_4323_, lean_object* v_art_4324_, lean_object* v_exe_4325_, lean_object* v_a_4326_, lean_object* v_a_4327_){
_start:
{
uint8_t v_exe_boxed_4328_; lean_object* v_res_4329_; 
v_exe_boxed_4328_ = lean_unbox(v_exe_4325_);
v_res_4329_ = l_Lake_restoreArtifact(v_file_4323_, v_art_4324_, v_exe_boxed_4328_, v_a_4326_);
return v_res_4329_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(lean_object* v_val_4330_, lean_object* v_a_x3f_4331_, lean_object* v___y_4332_){
_start:
{
lean_object* v___x_4334_; lean_object* v_log_4335_; uint8_t v_action_4336_; uint8_t v_wantsRebuild_4337_; lean_object* v_trace_4338_; lean_object* v_buildTime_4339_; lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4350_; 
v___x_4334_ = lean_io_mono_ms_now();
v_log_4335_ = lean_ctor_get(v___y_4332_, 0);
v_action_4336_ = lean_ctor_get_uint8(v___y_4332_, sizeof(void*)*3);
v_wantsRebuild_4337_ = lean_ctor_get_uint8(v___y_4332_, sizeof(void*)*3 + 1);
v_trace_4338_ = lean_ctor_get(v___y_4332_, 1);
v_buildTime_4339_ = lean_ctor_get(v___y_4332_, 2);
v_isSharedCheck_4350_ = !lean_is_exclusive(v___y_4332_);
if (v_isSharedCheck_4350_ == 0)
{
v___x_4341_ = v___y_4332_;
v_isShared_4342_ = v_isSharedCheck_4350_;
goto v_resetjp_4340_;
}
else
{
lean_inc(v_buildTime_4339_);
lean_inc(v_trace_4338_);
lean_inc(v_log_4335_);
lean_dec(v___y_4332_);
v___x_4341_ = lean_box(0);
v_isShared_4342_ = v_isSharedCheck_4350_;
goto v_resetjp_4340_;
}
v_resetjp_4340_:
{
lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4347_; 
v___x_4343_ = lean_nat_sub(v___x_4334_, v_val_4330_);
lean_dec(v___x_4334_);
v___x_4344_ = lean_box(0);
v___x_4345_ = lean_nat_add(v_buildTime_4339_, v___x_4343_);
lean_dec(v___x_4343_);
lean_dec(v_buildTime_4339_);
if (v_isShared_4342_ == 0)
{
lean_ctor_set(v___x_4341_, 2, v___x_4345_);
v___x_4347_ = v___x_4341_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4349_; 
v_reuseFailAlloc_4349_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4349_, 0, v_log_4335_);
lean_ctor_set(v_reuseFailAlloc_4349_, 1, v_trace_4338_);
lean_ctor_set(v_reuseFailAlloc_4349_, 2, v___x_4345_);
lean_ctor_set_uint8(v_reuseFailAlloc_4349_, sizeof(void*)*3, v_action_4336_);
lean_ctor_set_uint8(v_reuseFailAlloc_4349_, sizeof(void*)*3 + 1, v_wantsRebuild_4337_);
v___x_4347_ = v_reuseFailAlloc_4349_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
lean_object* v___x_4348_; 
v___x_4348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4348_, 0, v___x_4344_);
lean_ctor_set(v___x_4348_, 1, v___x_4347_);
return v___x_4348_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0___boxed(lean_object* v_val_4351_, lean_object* v_a_x3f_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(v_val_4351_, v_a_x3f_4352_, v___y_4353_);
lean_dec(v_a_x3f_4352_);
lean_dec(v_val_4351_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0(lean_object* v_file_4356_, lean_object* v_build_4357_, lean_object* v_traceFile_4358_, lean_object* v_ext_4359_, uint8_t v_text_4360_, lean_object* v_a_4361_, lean_object* v_depTrace_4362_, lean_object* v_traceFile_4363_, uint8_t v_action_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_, lean_object* v_a_4367_, lean_object* v_a_4368_, lean_object* v_a_4369_){
_start:
{
lean_object* v_a_4372_; lean_object* v_a_4373_; lean_object* v_log_4376_; uint8_t v_action_4377_; uint8_t v_wantsRebuild_4378_; lean_object* v_trace_4379_; lean_object* v_buildTime_4380_; lean_object* v_toBuildConfig_4386_; lean_object* v_log_4387_; uint8_t v_action_4388_; uint8_t v_wantsRebuild_4389_; lean_object* v_trace_4390_; lean_object* v_buildTime_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4570_; 
v_toBuildConfig_4386_ = lean_ctor_get(v_a_4368_, 0);
v_log_4387_ = lean_ctor_get(v_a_4369_, 0);
v_action_4388_ = lean_ctor_get_uint8(v_a_4369_, sizeof(void*)*3);
v_wantsRebuild_4389_ = lean_ctor_get_uint8(v_a_4369_, sizeof(void*)*3 + 1);
v_trace_4390_ = lean_ctor_get(v_a_4369_, 1);
v_buildTime_4391_ = lean_ctor_get(v_a_4369_, 2);
v_isSharedCheck_4570_ = !lean_is_exclusive(v_a_4369_);
if (v_isSharedCheck_4570_ == 0)
{
v___x_4393_ = v_a_4369_;
v_isShared_4394_ = v_isSharedCheck_4570_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_buildTime_4391_);
lean_inc(v_trace_4390_);
lean_inc(v_log_4387_);
lean_dec(v_a_4369_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4570_;
goto v_resetjp_4392_;
}
v___jp_4371_:
{
lean_object* v___x_4374_; 
v___x_4374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4374_, 0, v_a_4372_);
lean_ctor_set(v___x_4374_, 1, v_a_4373_);
return v___x_4374_;
}
v___jp_4375_:
{
lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; 
v___x_4381_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__1));
v___x_4382_ = lean_array_get_size(v_log_4376_);
v___x_4383_ = lean_array_push(v_log_4376_, v___x_4381_);
v___x_4384_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4384_, 0, v___x_4383_);
lean_ctor_set(v___x_4384_, 1, v_trace_4379_);
lean_ctor_set(v___x_4384_, 2, v_buildTime_4380_);
lean_ctor_set_uint8(v___x_4384_, sizeof(void*)*3, v_action_4377_);
lean_ctor_set_uint8(v___x_4384_, sizeof(void*)*3 + 1, v_wantsRebuild_4378_);
v___x_4385_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4385_, 0, v___x_4382_);
lean_ctor_set(v___x_4385_, 1, v___x_4384_);
return v___x_4385_;
}
v_resetjp_4392_:
{
uint8_t v_noBuild_4395_; uint8_t v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; 
v_noBuild_4395_ = lean_ctor_get_uint8(v_toBuildConfig_4386_, sizeof(void*)*2 + 2);
v___x_4396_ = l_Lake_JobAction_merge(v_action_4388_, v_action_4364_);
v___x_4397_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__2));
lean_inc_ref(v_traceFile_4363_);
v___x_4398_ = l_System_FilePath_addExtension(v_traceFile_4363_, v___x_4397_);
if (v_noBuild_4395_ == 0)
{
lean_object* v___x_4399_; lean_object* v_a_4401_; lean_object* v_a_4402_; lean_object* v___x_4406_; 
v___x_4399_ = lean_io_mono_ms_now();
v___x_4406_ = l_Lake_removeFileIfExists(v_file_4356_);
if (lean_obj_tag(v___x_4406_) == 0)
{
lean_object* v___x_4408_; 
lean_dec_ref(v___x_4406_);
lean_inc_ref(v_log_4387_);
if (v_isShared_4394_ == 0)
{
v___x_4408_ = v___x_4393_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v_log_4387_);
lean_ctor_set(v_reuseFailAlloc_4545_, 1, v_trace_4390_);
lean_ctor_set(v_reuseFailAlloc_4545_, 2, v_buildTime_4391_);
lean_ctor_set_uint8(v_reuseFailAlloc_4545_, sizeof(void*)*3 + 1, v_wantsRebuild_4389_);
v___x_4408_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
lean_object* v___x_4409_; 
lean_ctor_set_uint8(v___x_4408_, sizeof(void*)*3, v___x_4396_);
lean_inc_ref(v_a_4368_);
v___x_4409_ = lean_apply_7(v_build_4357_, v_a_4361_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_, v___x_4408_, lean_box(0));
if (lean_obj_tag(v___x_4409_) == 0)
{
lean_object* v_a_4410_; lean_object* v_log_4411_; uint8_t v_action_4412_; uint8_t v_wantsRebuild_4413_; lean_object* v_trace_4414_; lean_object* v_buildTime_4415_; lean_object* v___x_4416_; 
v_a_4410_ = lean_ctor_get(v___x_4409_, 1);
lean_inc(v_a_4410_);
lean_dec_ref(v___x_4409_);
v_log_4411_ = lean_ctor_get(v_a_4410_, 0);
v_action_4412_ = lean_ctor_get_uint8(v_a_4410_, sizeof(void*)*3);
v_wantsRebuild_4413_ = lean_ctor_get_uint8(v_a_4410_, sizeof(void*)*3 + 1);
v_trace_4414_ = lean_ctor_get(v_a_4410_, 1);
v_buildTime_4415_ = lean_ctor_get(v_a_4410_, 2);
lean_inc_ref(v_file_4356_);
v___x_4416_ = l_Lake_clearFileHash(v_file_4356_);
if (lean_obj_tag(v___x_4416_) == 0)
{
lean_object* v___x_4417_; 
lean_dec_ref(v___x_4416_);
v___x_4417_ = l_Lake_removeFileIfExists(v_traceFile_4358_);
if (lean_obj_tag(v___x_4417_) == 0)
{
lean_object* v___x_4419_; uint8_t v_isShared_4420_; uint8_t v_isSharedCheck_4509_; 
v_isSharedCheck_4509_ = !lean_is_exclusive(v___x_4417_);
if (v_isSharedCheck_4509_ == 0)
{
lean_object* v_unused_4510_; 
v_unused_4510_ = lean_ctor_get(v___x_4417_, 0);
lean_dec(v_unused_4510_);
v___x_4419_ = v___x_4417_;
v_isShared_4420_ = v_isSharedCheck_4509_;
goto v_resetjp_4418_;
}
else
{
lean_dec(v___x_4417_);
v___x_4419_ = lean_box(0);
v_isShared_4420_ = v_isSharedCheck_4509_;
goto v_resetjp_4418_;
}
v_resetjp_4418_:
{
lean_object* v___x_4421_; 
v___x_4421_ = l_Lake_computeArtifact___redArg(v_file_4356_, v_ext_4359_, v_text_4360_, v_a_4368_, v_a_4410_);
lean_dec_ref(v_a_4368_);
if (lean_obj_tag(v___x_4421_) == 0)
{
lean_object* v_a_4422_; lean_object* v_a_4423_; lean_object* v_descr_4424_; lean_object* v_log_4425_; uint8_t v_action_4426_; uint8_t v_wantsRebuild_4427_; lean_object* v_trace_4428_; lean_object* v_buildTime_4429_; uint64_t v_hash_4430_; lean_object* v_ext_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___y_4436_; lean_object* v___x_4499_; lean_object* v___x_4500_; uint8_t v___x_4501_; 
v_a_4422_ = lean_ctor_get(v___x_4421_, 1);
lean_inc(v_a_4422_);
v_a_4423_ = lean_ctor_get(v___x_4421_, 0);
lean_inc(v_a_4423_);
lean_dec_ref(v___x_4421_);
v_descr_4424_ = lean_ctor_get(v_a_4423_, 0);
v_log_4425_ = lean_ctor_get(v_a_4422_, 0);
v_action_4426_ = lean_ctor_get_uint8(v_a_4422_, sizeof(void*)*3);
v_wantsRebuild_4427_ = lean_ctor_get_uint8(v_a_4422_, sizeof(void*)*3 + 1);
v_trace_4428_ = lean_ctor_get(v_a_4422_, 1);
v_buildTime_4429_ = lean_ctor_get(v_a_4422_, 2);
v_hash_4430_ = lean_ctor_get_uint64(v_descr_4424_, sizeof(void*)*1);
v_ext_4431_ = lean_ctor_get(v_descr_4424_, 0);
v___x_4432_ = lean_array_get_size(v_log_4387_);
lean_dec_ref(v_log_4387_);
v___x_4433_ = lean_array_get_size(v_log_4425_);
v___x_4434_ = l_Array_extract___redArg(v_log_4425_, v___x_4432_, v___x_4433_);
v___x_4499_ = lean_string_utf8_byte_size(v_ext_4431_);
v___x_4500_ = lean_unsigned_to_nat(0u);
v___x_4501_ = lean_nat_dec_eq(v___x_4499_, v___x_4500_);
if (v___x_4501_ == 0)
{
lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; 
v___x_4502_ = l_Lake_Hash_hex(v_hash_4430_);
v___x_4503_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_4504_ = lean_string_append(v___x_4502_, v___x_4503_);
v___x_4505_ = lean_string_append(v___x_4504_, v_ext_4431_);
v___y_4436_ = v___x_4505_;
goto v___jp_4435_;
}
else
{
lean_object* v___x_4506_; 
v___x_4506_ = l_Lake_Hash_hex(v_hash_4430_);
v___y_4436_ = v___x_4506_;
goto v___jp_4435_;
}
v___jp_4435_:
{
lean_object* v___x_4438_; 
if (v_isShared_4420_ == 0)
{
lean_ctor_set_tag(v___x_4419_, 3);
lean_ctor_set(v___x_4419_, 0, v___y_4436_);
v___x_4438_ = v___x_4419_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4498_; 
v_reuseFailAlloc_4498_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4498_, 0, v___y_4436_);
v___x_4438_ = v_reuseFailAlloc_4498_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; 
v___x_4439_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_4362_, v___x_4438_, v___x_4434_);
v___x_4440_ = l_Lake_BuildMetadata_writeFile(v_traceFile_4363_, v___x_4439_);
if (lean_obj_tag(v___x_4440_) == 0)
{
lean_object* v___x_4442_; uint8_t v_isShared_4443_; uint8_t v_isSharedCheck_4481_; 
v_isSharedCheck_4481_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4481_ == 0)
{
lean_object* v_unused_4482_; 
v_unused_4482_ = lean_ctor_get(v___x_4440_, 0);
lean_dec(v_unused_4482_);
v___x_4442_ = v___x_4440_;
v_isShared_4443_ = v_isSharedCheck_4481_;
goto v_resetjp_4441_;
}
else
{
lean_dec(v___x_4440_);
v___x_4442_ = lean_box(0);
v_isShared_4443_ = v_isSharedCheck_4481_;
goto v_resetjp_4441_;
}
v_resetjp_4441_:
{
lean_object* v___x_4444_; 
v___x_4444_ = l_Lake_removeFileIfExists(v___x_4398_);
lean_dec_ref(v___x_4398_);
if (lean_obj_tag(v___x_4444_) == 0)
{
lean_object* v___x_4446_; uint8_t v_isShared_4447_; uint8_t v_isSharedCheck_4464_; 
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4444_);
if (v_isSharedCheck_4464_ == 0)
{
lean_object* v_unused_4465_; 
v_unused_4465_ = lean_ctor_get(v___x_4444_, 0);
lean_dec(v_unused_4465_);
v___x_4446_ = v___x_4444_;
v_isShared_4447_ = v_isSharedCheck_4464_;
goto v_resetjp_4445_;
}
else
{
lean_dec(v___x_4444_);
v___x_4446_ = lean_box(0);
v_isShared_4447_ = v_isSharedCheck_4464_;
goto v_resetjp_4445_;
}
v_resetjp_4445_:
{
lean_object* v___x_4449_; 
lean_inc(v_a_4423_);
if (v_isShared_4447_ == 0)
{
lean_ctor_set(v___x_4446_, 0, v_a_4423_);
v___x_4449_ = v___x_4446_;
goto v_reusejp_4448_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_a_4423_);
v___x_4449_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4448_;
}
v_reusejp_4448_:
{
lean_object* v___x_4451_; 
if (v_isShared_4443_ == 0)
{
lean_ctor_set_tag(v___x_4442_, 1);
lean_ctor_set(v___x_4442_, 0, v___x_4449_);
v___x_4451_ = v___x_4442_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v___x_4449_);
v___x_4451_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
lean_object* v___x_4452_; lean_object* v_a_4453_; lean_object* v___x_4455_; uint8_t v_isShared_4456_; uint8_t v_isSharedCheck_4460_; 
v___x_4452_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(v___x_4399_, v___x_4451_, v_a_4422_);
lean_dec_ref(v___x_4451_);
lean_dec(v___x_4399_);
v_a_4453_ = lean_ctor_get(v___x_4452_, 1);
v_isSharedCheck_4460_ = !lean_is_exclusive(v___x_4452_);
if (v_isSharedCheck_4460_ == 0)
{
lean_object* v_unused_4461_; 
v_unused_4461_ = lean_ctor_get(v___x_4452_, 0);
lean_dec(v_unused_4461_);
v___x_4455_ = v___x_4452_;
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
else
{
lean_inc(v_a_4453_);
lean_dec(v___x_4452_);
v___x_4455_ = lean_box(0);
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
v_resetjp_4454_:
{
lean_object* v___x_4458_; 
if (v_isShared_4456_ == 0)
{
lean_ctor_set(v___x_4455_, 0, v_a_4423_);
v___x_4458_ = v___x_4455_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v_a_4423_);
lean_ctor_set(v_reuseFailAlloc_4459_, 1, v_a_4453_);
v___x_4458_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
return v___x_4458_;
}
}
}
}
}
}
else
{
lean_object* v___x_4467_; uint8_t v_isShared_4468_; uint8_t v_isSharedCheck_4477_; 
lean_inc(v_buildTime_4429_);
lean_inc_ref(v_trace_4428_);
lean_inc_ref(v_log_4425_);
lean_del_object(v___x_4442_);
lean_dec(v_a_4423_);
v_isSharedCheck_4477_ = !lean_is_exclusive(v_a_4422_);
if (v_isSharedCheck_4477_ == 0)
{
lean_object* v_unused_4478_; lean_object* v_unused_4479_; lean_object* v_unused_4480_; 
v_unused_4478_ = lean_ctor_get(v_a_4422_, 2);
lean_dec(v_unused_4478_);
v_unused_4479_ = lean_ctor_get(v_a_4422_, 1);
lean_dec(v_unused_4479_);
v_unused_4480_ = lean_ctor_get(v_a_4422_, 0);
lean_dec(v_unused_4480_);
v___x_4467_ = v_a_4422_;
v_isShared_4468_ = v_isSharedCheck_4477_;
goto v_resetjp_4466_;
}
else
{
lean_dec(v_a_4422_);
v___x_4467_ = lean_box(0);
v_isShared_4468_ = v_isSharedCheck_4477_;
goto v_resetjp_4466_;
}
v_resetjp_4466_:
{
lean_object* v_a_4469_; lean_object* v___x_4470_; uint8_t v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4475_; 
v_a_4469_ = lean_ctor_get(v___x_4444_, 0);
lean_inc(v_a_4469_);
lean_dec_ref(v___x_4444_);
v___x_4470_ = lean_io_error_to_string(v_a_4469_);
v___x_4471_ = 3;
v___x_4472_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4472_, 0, v___x_4470_);
lean_ctor_set_uint8(v___x_4472_, sizeof(void*)*1, v___x_4471_);
v___x_4473_ = lean_array_push(v_log_4425_, v___x_4472_);
if (v_isShared_4468_ == 0)
{
lean_ctor_set(v___x_4467_, 0, v___x_4473_);
v___x_4475_ = v___x_4467_;
goto v_reusejp_4474_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v___x_4473_);
lean_ctor_set(v_reuseFailAlloc_4476_, 1, v_trace_4428_);
lean_ctor_set(v_reuseFailAlloc_4476_, 2, v_buildTime_4429_);
lean_ctor_set_uint8(v_reuseFailAlloc_4476_, sizeof(void*)*3, v_action_4426_);
lean_ctor_set_uint8(v_reuseFailAlloc_4476_, sizeof(void*)*3 + 1, v_wantsRebuild_4427_);
v___x_4475_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4474_;
}
v_reusejp_4474_:
{
v_a_4401_ = v___x_4433_;
v_a_4402_ = v___x_4475_;
goto v___jp_4400_;
}
}
}
}
}
else
{
lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4494_; 
lean_inc(v_buildTime_4429_);
lean_inc_ref(v_trace_4428_);
lean_inc_ref(v_log_4425_);
lean_dec(v_a_4423_);
lean_dec_ref(v___x_4398_);
v_isSharedCheck_4494_ = !lean_is_exclusive(v_a_4422_);
if (v_isSharedCheck_4494_ == 0)
{
lean_object* v_unused_4495_; lean_object* v_unused_4496_; lean_object* v_unused_4497_; 
v_unused_4495_ = lean_ctor_get(v_a_4422_, 2);
lean_dec(v_unused_4495_);
v_unused_4496_ = lean_ctor_get(v_a_4422_, 1);
lean_dec(v_unused_4496_);
v_unused_4497_ = lean_ctor_get(v_a_4422_, 0);
lean_dec(v_unused_4497_);
v___x_4484_ = v_a_4422_;
v_isShared_4485_ = v_isSharedCheck_4494_;
goto v_resetjp_4483_;
}
else
{
lean_dec(v_a_4422_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4494_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v_a_4486_; lean_object* v___x_4487_; uint8_t v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4492_; 
v_a_4486_ = lean_ctor_get(v___x_4440_, 0);
lean_inc(v_a_4486_);
lean_dec_ref(v___x_4440_);
v___x_4487_ = lean_io_error_to_string(v_a_4486_);
v___x_4488_ = 3;
v___x_4489_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4489_, 0, v___x_4487_);
lean_ctor_set_uint8(v___x_4489_, sizeof(void*)*1, v___x_4488_);
v___x_4490_ = lean_array_push(v_log_4425_, v___x_4489_);
if (v_isShared_4485_ == 0)
{
lean_ctor_set(v___x_4484_, 0, v___x_4490_);
v___x_4492_ = v___x_4484_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4493_; 
v_reuseFailAlloc_4493_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4493_, 0, v___x_4490_);
lean_ctor_set(v_reuseFailAlloc_4493_, 1, v_trace_4428_);
lean_ctor_set(v_reuseFailAlloc_4493_, 2, v_buildTime_4429_);
lean_ctor_set_uint8(v_reuseFailAlloc_4493_, sizeof(void*)*3, v_action_4426_);
lean_ctor_set_uint8(v_reuseFailAlloc_4493_, sizeof(void*)*3 + 1, v_wantsRebuild_4427_);
v___x_4492_ = v_reuseFailAlloc_4493_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
v_a_4401_ = v___x_4433_;
v_a_4402_ = v___x_4492_;
goto v___jp_4400_;
}
}
}
}
}
}
else
{
lean_object* v_a_4507_; lean_object* v_a_4508_; 
lean_del_object(v___x_4419_);
lean_dec_ref(v___x_4398_);
lean_dec_ref(v_log_4387_);
lean_dec_ref(v_traceFile_4363_);
v_a_4507_ = lean_ctor_get(v___x_4421_, 0);
lean_inc(v_a_4507_);
v_a_4508_ = lean_ctor_get(v___x_4421_, 1);
lean_inc(v_a_4508_);
lean_dec_ref(v___x_4421_);
v_a_4401_ = v_a_4507_;
v_a_4402_ = v_a_4508_;
goto v___jp_4400_;
}
}
}
else
{
lean_object* v___x_4512_; uint8_t v_isShared_4513_; uint8_t v_isSharedCheck_4523_; 
lean_inc(v_buildTime_4415_);
lean_inc_ref(v_trace_4414_);
lean_inc_ref(v_log_4411_);
lean_dec_ref(v___x_4398_);
lean_dec_ref(v_log_4387_);
lean_dec_ref(v_a_4368_);
lean_dec_ref(v_traceFile_4363_);
lean_dec_ref(v_ext_4359_);
lean_dec_ref(v_file_4356_);
v_isSharedCheck_4523_ = !lean_is_exclusive(v_a_4410_);
if (v_isSharedCheck_4523_ == 0)
{
lean_object* v_unused_4524_; lean_object* v_unused_4525_; lean_object* v_unused_4526_; 
v_unused_4524_ = lean_ctor_get(v_a_4410_, 2);
lean_dec(v_unused_4524_);
v_unused_4525_ = lean_ctor_get(v_a_4410_, 1);
lean_dec(v_unused_4525_);
v_unused_4526_ = lean_ctor_get(v_a_4410_, 0);
lean_dec(v_unused_4526_);
v___x_4512_ = v_a_4410_;
v_isShared_4513_ = v_isSharedCheck_4523_;
goto v_resetjp_4511_;
}
else
{
lean_dec(v_a_4410_);
v___x_4512_ = lean_box(0);
v_isShared_4513_ = v_isSharedCheck_4523_;
goto v_resetjp_4511_;
}
v_resetjp_4511_:
{
lean_object* v_a_4514_; lean_object* v___x_4515_; uint8_t v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4521_; 
v_a_4514_ = lean_ctor_get(v___x_4417_, 0);
lean_inc(v_a_4514_);
lean_dec_ref(v___x_4417_);
v___x_4515_ = lean_io_error_to_string(v_a_4514_);
v___x_4516_ = 3;
v___x_4517_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4517_, 0, v___x_4515_);
lean_ctor_set_uint8(v___x_4517_, sizeof(void*)*1, v___x_4516_);
v___x_4518_ = lean_array_get_size(v_log_4411_);
v___x_4519_ = lean_array_push(v_log_4411_, v___x_4517_);
if (v_isShared_4513_ == 0)
{
lean_ctor_set(v___x_4512_, 0, v___x_4519_);
v___x_4521_ = v___x_4512_;
goto v_reusejp_4520_;
}
else
{
lean_object* v_reuseFailAlloc_4522_; 
v_reuseFailAlloc_4522_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4522_, 0, v___x_4519_);
lean_ctor_set(v_reuseFailAlloc_4522_, 1, v_trace_4414_);
lean_ctor_set(v_reuseFailAlloc_4522_, 2, v_buildTime_4415_);
lean_ctor_set_uint8(v_reuseFailAlloc_4522_, sizeof(void*)*3, v_action_4412_);
lean_ctor_set_uint8(v_reuseFailAlloc_4522_, sizeof(void*)*3 + 1, v_wantsRebuild_4413_);
v___x_4521_ = v_reuseFailAlloc_4522_;
goto v_reusejp_4520_;
}
v_reusejp_4520_:
{
v_a_4401_ = v___x_4518_;
v_a_4402_ = v___x_4521_;
goto v___jp_4400_;
}
}
}
}
else
{
lean_object* v___x_4528_; uint8_t v_isShared_4529_; uint8_t v_isSharedCheck_4539_; 
lean_inc(v_buildTime_4415_);
lean_inc_ref(v_trace_4414_);
lean_inc_ref(v_log_4411_);
lean_dec_ref(v___x_4398_);
lean_dec_ref(v_log_4387_);
lean_dec_ref(v_a_4368_);
lean_dec_ref(v_traceFile_4363_);
lean_dec_ref(v_ext_4359_);
lean_dec_ref(v_file_4356_);
v_isSharedCheck_4539_ = !lean_is_exclusive(v_a_4410_);
if (v_isSharedCheck_4539_ == 0)
{
lean_object* v_unused_4540_; lean_object* v_unused_4541_; lean_object* v_unused_4542_; 
v_unused_4540_ = lean_ctor_get(v_a_4410_, 2);
lean_dec(v_unused_4540_);
v_unused_4541_ = lean_ctor_get(v_a_4410_, 1);
lean_dec(v_unused_4541_);
v_unused_4542_ = lean_ctor_get(v_a_4410_, 0);
lean_dec(v_unused_4542_);
v___x_4528_ = v_a_4410_;
v_isShared_4529_ = v_isSharedCheck_4539_;
goto v_resetjp_4527_;
}
else
{
lean_dec(v_a_4410_);
v___x_4528_ = lean_box(0);
v_isShared_4529_ = v_isSharedCheck_4539_;
goto v_resetjp_4527_;
}
v_resetjp_4527_:
{
lean_object* v_a_4530_; lean_object* v___x_4531_; uint8_t v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4537_; 
v_a_4530_ = lean_ctor_get(v___x_4416_, 0);
lean_inc(v_a_4530_);
lean_dec_ref(v___x_4416_);
v___x_4531_ = lean_io_error_to_string(v_a_4530_);
v___x_4532_ = 3;
v___x_4533_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4533_, 0, v___x_4531_);
lean_ctor_set_uint8(v___x_4533_, sizeof(void*)*1, v___x_4532_);
v___x_4534_ = lean_array_get_size(v_log_4411_);
v___x_4535_ = lean_array_push(v_log_4411_, v___x_4533_);
if (v_isShared_4529_ == 0)
{
lean_ctor_set(v___x_4528_, 0, v___x_4535_);
v___x_4537_ = v___x_4528_;
goto v_reusejp_4536_;
}
else
{
lean_object* v_reuseFailAlloc_4538_; 
v_reuseFailAlloc_4538_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4538_, 0, v___x_4535_);
lean_ctor_set(v_reuseFailAlloc_4538_, 1, v_trace_4414_);
lean_ctor_set(v_reuseFailAlloc_4538_, 2, v_buildTime_4415_);
lean_ctor_set_uint8(v_reuseFailAlloc_4538_, sizeof(void*)*3, v_action_4412_);
lean_ctor_set_uint8(v_reuseFailAlloc_4538_, sizeof(void*)*3 + 1, v_wantsRebuild_4413_);
v___x_4537_ = v_reuseFailAlloc_4538_;
goto v_reusejp_4536_;
}
v_reusejp_4536_:
{
v_a_4401_ = v___x_4534_;
v_a_4402_ = v___x_4537_;
goto v___jp_4400_;
}
}
}
}
else
{
lean_object* v_a_4543_; lean_object* v_a_4544_; 
lean_dec_ref(v___x_4398_);
lean_dec_ref(v_log_4387_);
lean_dec_ref(v_a_4368_);
lean_dec_ref(v_traceFile_4363_);
lean_dec_ref(v_ext_4359_);
lean_dec_ref(v_file_4356_);
v_a_4543_ = lean_ctor_get(v___x_4409_, 0);
lean_inc(v_a_4543_);
v_a_4544_ = lean_ctor_get(v___x_4409_, 1);
lean_inc(v_a_4544_);
lean_dec_ref(v___x_4409_);
v_a_4401_ = v_a_4543_;
v_a_4402_ = v_a_4544_;
goto v___jp_4400_;
}
}
}
else
{
lean_object* v_a_4546_; lean_object* v___x_4547_; uint8_t v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4553_; 
lean_dec_ref(v___x_4398_);
lean_dec_ref(v_a_4368_);
lean_dec(v_a_4367_);
lean_dec(v_a_4366_);
lean_dec(v_a_4365_);
lean_dec_ref(v_traceFile_4363_);
lean_dec_ref(v_a_4361_);
lean_dec_ref(v_ext_4359_);
lean_dec_ref(v_build_4357_);
lean_dec_ref(v_file_4356_);
v_a_4546_ = lean_ctor_get(v___x_4406_, 0);
lean_inc(v_a_4546_);
lean_dec_ref(v___x_4406_);
v___x_4547_ = lean_io_error_to_string(v_a_4546_);
v___x_4548_ = 3;
v___x_4549_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4549_, 0, v___x_4547_);
lean_ctor_set_uint8(v___x_4549_, sizeof(void*)*1, v___x_4548_);
v___x_4550_ = lean_array_get_size(v_log_4387_);
v___x_4551_ = lean_array_push(v_log_4387_, v___x_4549_);
if (v_isShared_4394_ == 0)
{
lean_ctor_set(v___x_4393_, 0, v___x_4551_);
v___x_4553_ = v___x_4393_;
goto v_reusejp_4552_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v___x_4551_);
lean_ctor_set(v_reuseFailAlloc_4554_, 1, v_trace_4390_);
lean_ctor_set(v_reuseFailAlloc_4554_, 2, v_buildTime_4391_);
lean_ctor_set_uint8(v_reuseFailAlloc_4554_, sizeof(void*)*3 + 1, v_wantsRebuild_4389_);
v___x_4553_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4552_;
}
v_reusejp_4552_:
{
lean_ctor_set_uint8(v___x_4553_, sizeof(void*)*3, v___x_4396_);
v_a_4401_ = v___x_4550_;
v_a_4402_ = v___x_4553_;
goto v___jp_4400_;
}
}
v___jp_4400_:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v_a_4405_; 
v___x_4403_ = lean_box(0);
v___x_4404_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(v___x_4399_, v___x_4403_, v_a_4402_);
lean_dec(v___x_4399_);
v_a_4405_ = lean_ctor_get(v___x_4404_, 1);
lean_inc(v_a_4405_);
lean_dec_ref(v___x_4404_);
v_a_4372_ = v_a_4401_;
v_a_4373_ = v_a_4405_;
goto v___jp_4371_;
}
}
else
{
uint8_t v___x_4555_; 
lean_dec_ref(v_a_4368_);
lean_dec(v_a_4367_);
lean_dec(v_a_4366_);
lean_dec(v_a_4365_);
lean_dec_ref(v_a_4361_);
lean_dec_ref(v_ext_4359_);
lean_dec_ref(v_build_4357_);
lean_dec_ref(v_file_4356_);
v___x_4555_ = l_System_FilePath_pathExists(v_traceFile_4363_);
lean_dec_ref(v_traceFile_4363_);
if (v___x_4555_ == 0)
{
lean_dec_ref(v___x_4398_);
lean_del_object(v___x_4393_);
v_log_4376_ = v_log_4387_;
v_action_4377_ = v___x_4396_;
v_wantsRebuild_4378_ = v_noBuild_4395_;
v_trace_4379_ = v_trace_4390_;
v_buildTime_4380_ = v_buildTime_4391_;
goto v___jp_4375_;
}
else
{
lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; 
v___x_4556_ = lean_box(0);
v___x_4557_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___x_4558_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_4362_, v___x_4556_, v___x_4557_);
v___x_4559_ = l_Lake_BuildMetadata_writeFile(v___x_4398_, v___x_4558_);
if (lean_obj_tag(v___x_4559_) == 0)
{
lean_dec_ref(v___x_4559_);
lean_del_object(v___x_4393_);
v_log_4376_ = v_log_4387_;
v_action_4377_ = v___x_4396_;
v_wantsRebuild_4378_ = v_noBuild_4395_;
v_trace_4379_ = v_trace_4390_;
v_buildTime_4380_ = v_buildTime_4391_;
goto v___jp_4375_;
}
else
{
lean_object* v_a_4560_; lean_object* v___x_4561_; uint8_t v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4567_; 
v_a_4560_ = lean_ctor_get(v___x_4559_, 0);
lean_inc(v_a_4560_);
lean_dec_ref(v___x_4559_);
v___x_4561_ = lean_io_error_to_string(v_a_4560_);
v___x_4562_ = 3;
v___x_4563_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4563_, 0, v___x_4561_);
lean_ctor_set_uint8(v___x_4563_, sizeof(void*)*1, v___x_4562_);
v___x_4564_ = lean_array_get_size(v_log_4387_);
v___x_4565_ = lean_array_push(v_log_4387_, v___x_4563_);
if (v_isShared_4394_ == 0)
{
lean_ctor_set(v___x_4393_, 0, v___x_4565_);
v___x_4567_ = v___x_4393_;
goto v_reusejp_4566_;
}
else
{
lean_object* v_reuseFailAlloc_4569_; 
v_reuseFailAlloc_4569_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4569_, 0, v___x_4565_);
lean_ctor_set(v_reuseFailAlloc_4569_, 1, v_trace_4390_);
lean_ctor_set(v_reuseFailAlloc_4569_, 2, v_buildTime_4391_);
v___x_4567_ = v_reuseFailAlloc_4569_;
goto v_reusejp_4566_;
}
v_reusejp_4566_:
{
lean_object* v___x_4568_; 
lean_ctor_set_uint8(v___x_4567_, sizeof(void*)*3, v___x_4396_);
lean_ctor_set_uint8(v___x_4567_, sizeof(void*)*3 + 1, v_noBuild_4395_);
v___x_4568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4568_, 0, v___x_4564_);
lean_ctor_set(v___x_4568_, 1, v___x_4567_);
return v___x_4568_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___boxed(lean_object* v_file_4571_, lean_object* v_build_4572_, lean_object* v_traceFile_4573_, lean_object* v_ext_4574_, lean_object* v_text_4575_, lean_object* v_a_4576_, lean_object* v_depTrace_4577_, lean_object* v_traceFile_4578_, lean_object* v_action_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_, lean_object* v_a_4585_){
_start:
{
uint8_t v_text_boxed_4586_; uint8_t v_action_boxed_4587_; lean_object* v_res_4588_; 
v_text_boxed_4586_ = lean_unbox(v_text_4575_);
v_action_boxed_4587_ = lean_unbox(v_action_4579_);
v_res_4588_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0(v_file_4571_, v_build_4572_, v_traceFile_4573_, v_ext_4574_, v_text_boxed_4586_, v_a_4576_, v_depTrace_4577_, v_traceFile_4578_, v_action_boxed_4587_, v_a_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
lean_dec_ref(v_depTrace_4577_);
lean_dec_ref(v_traceFile_4573_);
return v_res_4588_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(lean_object* v_file_4589_, lean_object* v_build_4590_, uint8_t v_text_4591_, lean_object* v_ext_4592_, lean_object* v_depTrace_4593_, lean_object* v_traceFile_4594_, lean_object* v_a_4595_, lean_object* v_a_4596_, lean_object* v_a_4597_, lean_object* v_a_4598_, lean_object* v_a_4599_, lean_object* v_a_4600_){
_start:
{
uint8_t v___x_4602_; lean_object* v___x_4603_; 
v___x_4602_ = 3;
lean_inc_ref(v_traceFile_4594_);
v___x_4603_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0(v_file_4589_, v_build_4590_, v_traceFile_4594_, v_ext_4592_, v_text_4591_, v_a_4595_, v_depTrace_4593_, v_traceFile_4594_, v___x_4602_, v_a_4596_, v_a_4597_, v_a_4598_, v_a_4599_, v_a_4600_);
lean_dec_ref(v_traceFile_4594_);
return v___x_4603_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___boxed(lean_object* v_file_4604_, lean_object* v_build_4605_, lean_object* v_text_4606_, lean_object* v_ext_4607_, lean_object* v_depTrace_4608_, lean_object* v_traceFile_4609_, lean_object* v_a_4610_, lean_object* v_a_4611_, lean_object* v_a_4612_, lean_object* v_a_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_){
_start:
{
uint8_t v_text_boxed_4617_; lean_object* v_res_4618_; 
v_text_boxed_4617_ = lean_unbox(v_text_4606_);
v_res_4618_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_4604_, v_build_4605_, v_text_boxed_4617_, v_ext_4607_, v_depTrace_4608_, v_traceFile_4609_, v_a_4610_, v_a_4611_, v_a_4612_, v_a_4613_, v_a_4614_, v_a_4615_);
lean_dec_ref(v_depTrace_4608_);
return v_res_4618_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(lean_object* v_art_4620_, lean_object* v_traceFile_4621_, lean_object* v_a_4622_){
_start:
{
lean_object* v_log_4624_; uint8_t v_action_4625_; uint8_t v_wantsRebuild_4626_; lean_object* v_trace_4627_; lean_object* v_buildTime_4628_; lean_object* v___x_4629_; 
v_log_4624_ = lean_ctor_get(v_a_4622_, 0);
v_action_4625_ = lean_ctor_get_uint8(v_a_4622_, sizeof(void*)*3);
v_wantsRebuild_4626_ = lean_ctor_get_uint8(v_a_4622_, sizeof(void*)*3 + 1);
v_trace_4627_ = lean_ctor_get(v_a_4622_, 1);
v_buildTime_4628_ = lean_ctor_get(v_a_4622_, 2);
v___x_4629_ = lean_io_metadata(v_traceFile_4621_);
if (lean_obj_tag(v___x_4629_) == 0)
{
lean_object* v_a_4630_; lean_object* v_modified_4631_; lean_object* v_descr_4632_; lean_object* v_path_4633_; lean_object* v_name_4634_; lean_object* v___x_4636_; uint8_t v_isShared_4637_; uint8_t v_isSharedCheck_4642_; 
v_a_4630_ = lean_ctor_get(v___x_4629_, 0);
lean_inc(v_a_4630_);
lean_dec_ref(v___x_4629_);
v_modified_4631_ = lean_ctor_get(v_a_4630_, 1);
lean_inc_ref(v_modified_4631_);
lean_dec(v_a_4630_);
v_descr_4632_ = lean_ctor_get(v_art_4620_, 0);
v_path_4633_ = lean_ctor_get(v_art_4620_, 1);
v_name_4634_ = lean_ctor_get(v_art_4620_, 2);
v_isSharedCheck_4642_ = !lean_is_exclusive(v_art_4620_);
if (v_isSharedCheck_4642_ == 0)
{
lean_object* v_unused_4643_; 
v_unused_4643_ = lean_ctor_get(v_art_4620_, 3);
lean_dec(v_unused_4643_);
v___x_4636_ = v_art_4620_;
v_isShared_4637_ = v_isSharedCheck_4642_;
goto v_resetjp_4635_;
}
else
{
lean_inc(v_name_4634_);
lean_inc(v_path_4633_);
lean_inc(v_descr_4632_);
lean_dec(v_art_4620_);
v___x_4636_ = lean_box(0);
v_isShared_4637_ = v_isSharedCheck_4642_;
goto v_resetjp_4635_;
}
v_resetjp_4635_:
{
lean_object* v___x_4639_; 
if (v_isShared_4637_ == 0)
{
lean_ctor_set(v___x_4636_, 3, v_modified_4631_);
v___x_4639_ = v___x_4636_;
goto v_reusejp_4638_;
}
else
{
lean_object* v_reuseFailAlloc_4641_; 
v_reuseFailAlloc_4641_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4641_, 0, v_descr_4632_);
lean_ctor_set(v_reuseFailAlloc_4641_, 1, v_path_4633_);
lean_ctor_set(v_reuseFailAlloc_4641_, 2, v_name_4634_);
lean_ctor_set(v_reuseFailAlloc_4641_, 3, v_modified_4631_);
v___x_4639_ = v_reuseFailAlloc_4641_;
goto v_reusejp_4638_;
}
v_reusejp_4638_:
{
lean_object* v___x_4640_; 
v___x_4640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4640_, 0, v___x_4639_);
lean_ctor_set(v___x_4640_, 1, v_a_4622_);
return v___x_4640_;
}
}
}
else
{
lean_object* v_a_4644_; 
v_a_4644_ = lean_ctor_get(v___x_4629_, 0);
lean_inc(v_a_4644_);
lean_dec_ref(v___x_4629_);
if (lean_obj_tag(v_a_4644_) == 11)
{
lean_object* v___x_4645_; 
lean_dec_ref(v_a_4644_);
v___x_4645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4645_, 0, v_art_4620_);
lean_ctor_set(v___x_4645_, 1, v_a_4622_);
return v___x_4645_;
}
else
{
lean_object* v___x_4647_; uint8_t v_isShared_4648_; uint8_t v_isSharedCheck_4660_; 
lean_inc(v_buildTime_4628_);
lean_inc_ref(v_trace_4627_);
lean_inc_ref(v_log_4624_);
lean_dec_ref(v_art_4620_);
v_isSharedCheck_4660_ = !lean_is_exclusive(v_a_4622_);
if (v_isSharedCheck_4660_ == 0)
{
lean_object* v_unused_4661_; lean_object* v_unused_4662_; lean_object* v_unused_4663_; 
v_unused_4661_ = lean_ctor_get(v_a_4622_, 2);
lean_dec(v_unused_4661_);
v_unused_4662_ = lean_ctor_get(v_a_4622_, 1);
lean_dec(v_unused_4662_);
v_unused_4663_ = lean_ctor_get(v_a_4622_, 0);
lean_dec(v_unused_4663_);
v___x_4647_ = v_a_4622_;
v_isShared_4648_ = v_isSharedCheck_4660_;
goto v_resetjp_4646_;
}
else
{
lean_dec(v_a_4622_);
v___x_4647_ = lean_box(0);
v_isShared_4648_ = v_isSharedCheck_4660_;
goto v_resetjp_4646_;
}
v_resetjp_4646_:
{
lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; uint8_t v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4657_; 
v___x_4649_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0));
v___x_4650_ = lean_io_error_to_string(v_a_4644_);
v___x_4651_ = lean_string_append(v___x_4649_, v___x_4650_);
lean_dec_ref(v___x_4650_);
v___x_4652_ = 3;
v___x_4653_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4653_, 0, v___x_4651_);
lean_ctor_set_uint8(v___x_4653_, sizeof(void*)*1, v___x_4652_);
v___x_4654_ = lean_array_get_size(v_log_4624_);
v___x_4655_ = lean_array_push(v_log_4624_, v___x_4653_);
if (v_isShared_4648_ == 0)
{
lean_ctor_set(v___x_4647_, 0, v___x_4655_);
v___x_4657_ = v___x_4647_;
goto v_reusejp_4656_;
}
else
{
lean_object* v_reuseFailAlloc_4659_; 
v_reuseFailAlloc_4659_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4659_, 0, v___x_4655_);
lean_ctor_set(v_reuseFailAlloc_4659_, 1, v_trace_4627_);
lean_ctor_set(v_reuseFailAlloc_4659_, 2, v_buildTime_4628_);
lean_ctor_set_uint8(v_reuseFailAlloc_4659_, sizeof(void*)*3, v_action_4625_);
lean_ctor_set_uint8(v_reuseFailAlloc_4659_, sizeof(void*)*3 + 1, v_wantsRebuild_4626_);
v___x_4657_ = v_reuseFailAlloc_4659_;
goto v_reusejp_4656_;
}
v_reusejp_4656_:
{
lean_object* v___x_4658_; 
v___x_4658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4658_, 0, v___x_4654_);
lean_ctor_set(v___x_4658_, 1, v___x_4657_);
return v___x_4658_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___boxed(lean_object* v_art_4664_, lean_object* v_traceFile_4665_, lean_object* v_a_4666_, lean_object* v_a_4667_){
_start:
{
lean_object* v_res_4668_; 
v_res_4668_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_4664_, v_traceFile_4665_, v_a_4666_);
lean_dec_ref(v_traceFile_4665_);
return v_res_4668_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime(lean_object* v_art_4669_, lean_object* v_traceFile_4670_, lean_object* v_a_4671_, lean_object* v_a_4672_, lean_object* v_a_4673_, lean_object* v_a_4674_, lean_object* v_a_4675_, lean_object* v_a_4676_){
_start:
{
lean_object* v___x_4678_; 
v___x_4678_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_4669_, v_traceFile_4670_, v_a_4676_);
return v___x_4678_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___boxed(lean_object* v_art_4679_, lean_object* v_traceFile_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_, lean_object* v_a_4685_, lean_object* v_a_4686_, lean_object* v_a_4687_){
_start:
{
lean_object* v_res_4688_; 
v_res_4688_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime(v_art_4679_, v_traceFile_4680_, v_a_4681_, v_a_4682_, v_a_4683_, v_a_4684_, v_a_4685_, v_a_4686_);
lean_dec_ref(v_a_4685_);
lean_dec(v_a_4684_);
lean_dec(v_a_4683_);
lean_dec(v_a_4682_);
lean_dec_ref(v_a_4681_);
lean_dec_ref(v_traceFile_4680_);
return v_res_4688_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(lean_object* v_a_4689_, lean_object* v_____r_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_, lean_object* v___y_4696_){
_start:
{
lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; 
v___x_4698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4698_, 0, v_a_4689_);
v___x_4699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4699_, 0, v___x_4698_);
v___x_4700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4700_, 0, v___x_4699_);
lean_ctor_set(v___x_4700_, 1, v___y_4696_);
return v___x_4700_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0___boxed(lean_object* v_a_4701_, lean_object* v_____r_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_){
_start:
{
lean_object* v_res_4710_; 
v_res_4710_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4701_, v_____r_4702_, v___y_4703_, v___y_4704_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_);
lean_dec_ref(v___y_4707_);
lean_dec(v___y_4706_);
lean_dec(v___y_4705_);
lean_dec(v___y_4704_);
lean_dec_ref(v___y_4703_);
return v_res_4710_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(uint8_t v_exe_4711_, lean_object* v___y_4712_, uint64_t v_inputHash_4713_, lean_object* v_savedTrace_4714_, lean_object* v_pkg_4715_, lean_object* v_a_4716_, lean_object* v_a_4717_, lean_object* v_a_4718_, lean_object* v_a_4719_, lean_object* v_a_4720_){
_start:
{
lean_object* v___y_4723_; lean_object* v_a_4727_; lean_object* v_a_4728_; lean_object* v___y_4743_; 
if (lean_obj_tag(v_savedTrace_4714_) == 2)
{
lean_object* v_data_4758_; uint64_t v_depHash_4759_; lean_object* v_outputs_x3f_4760_; uint8_t v___x_4761_; 
v_data_4758_ = lean_ctor_get(v_savedTrace_4714_, 0);
lean_inc_ref(v_data_4758_);
lean_dec_ref(v_savedTrace_4714_);
v_depHash_4759_ = lean_ctor_get_uint64(v_data_4758_, sizeof(void*)*3);
v_outputs_x3f_4760_ = lean_ctor_get(v_data_4758_, 1);
lean_inc(v_outputs_x3f_4760_);
lean_dec_ref(v_data_4758_);
v___x_4761_ = lean_uint64_dec_eq(v_depHash_4759_, v_inputHash_4713_);
if (v___x_4761_ == 0)
{
lean_dec(v_outputs_x3f_4760_);
lean_dec_ref(v_a_4719_);
lean_dec(v_a_4718_);
lean_dec(v_a_4717_);
lean_dec(v_a_4716_);
lean_dec_ref(v_pkg_4715_);
lean_dec_ref(v___y_4712_);
v___y_4723_ = v_a_4720_;
goto v___jp_4722_;
}
else
{
if (lean_obj_tag(v_outputs_x3f_4760_) == 1)
{
lean_object* v_val_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; 
v_val_4762_ = lean_ctor_get(v_outputs_x3f_4760_, 0);
lean_inc(v_val_4762_);
lean_dec_ref(v_outputs_x3f_4760_);
v___x_4763_ = lean_box(0);
lean_inc(v_val_4762_);
v___x_4764_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4764_, 0, v_val_4762_);
lean_ctor_set(v___x_4764_, 1, v___x_4763_);
lean_ctor_set(v___x_4764_, 2, v___x_4763_);
lean_inc_ref(v_a_4719_);
lean_inc(v_a_4718_);
lean_inc(v_a_4717_);
lean_inc(v_a_4716_);
lean_inc_ref(v___y_4712_);
v___x_4765_ = l_Lake_resolveArtifactOutput(v___x_4764_, v_exe_4711_, v___y_4712_, v_a_4716_, v_a_4717_, v_a_4718_, v_a_4719_, v_a_4720_);
if (lean_obj_tag(v___x_4765_) == 0)
{
lean_object* v_config_4766_; lean_object* v_a_4767_; lean_object* v_a_4768_; lean_object* v_enableArtifactCache_x3f_4769_; lean_object* v_a_4771_; uint8_t v_a_4775_; lean_object* v_a_4776_; 
v_config_4766_ = lean_ctor_get(v_pkg_4715_, 6);
v_a_4767_ = lean_ctor_get(v___x_4765_, 0);
lean_inc(v_a_4767_);
v_a_4768_ = lean_ctor_get(v___x_4765_, 1);
lean_inc(v_a_4768_);
lean_dec_ref(v___x_4765_);
v_enableArtifactCache_x3f_4769_ = lean_ctor_get(v_config_4766_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_4769_) == 0)
{
lean_object* v_toContext_4807_; lean_object* v_lakeEnv_4808_; lean_object* v_enableArtifactCache_x3f_4809_; 
v_toContext_4807_ = lean_ctor_get(v_a_4719_, 1);
v_lakeEnv_4808_ = lean_ctor_get(v_toContext_4807_, 1);
v_enableArtifactCache_x3f_4809_ = lean_ctor_get(v_lakeEnv_4808_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_4809_) == 0)
{
lean_object* v_root_4810_; lean_object* v_config_4811_; lean_object* v_enableArtifactCache_x3f_4812_; 
v_root_4810_ = lean_ctor_get(v_toContext_4807_, 0);
v_config_4811_ = lean_ctor_get(v_root_4810_, 6);
v_enableArtifactCache_x3f_4812_ = lean_ctor_get(v_config_4811_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_4812_) == 0)
{
lean_dec(v_val_4762_);
lean_dec_ref(v_pkg_4715_);
v_a_4771_ = v_a_4768_;
goto v___jp_4770_;
}
else
{
lean_object* v_val_4813_; uint8_t v___x_4814_; 
v_val_4813_ = lean_ctor_get(v_enableArtifactCache_x3f_4812_, 0);
v___x_4814_ = lean_unbox(v_val_4813_);
v_a_4775_ = v___x_4814_;
v_a_4776_ = v_a_4768_;
goto v___jp_4774_;
}
}
else
{
lean_object* v_val_4815_; uint8_t v___x_4816_; 
v_val_4815_ = lean_ctor_get(v_enableArtifactCache_x3f_4809_, 0);
v___x_4816_ = lean_unbox(v_val_4815_);
v_a_4775_ = v___x_4816_;
v_a_4776_ = v_a_4768_;
goto v___jp_4774_;
}
}
else
{
lean_object* v_val_4817_; uint8_t v___x_4818_; 
v_val_4817_ = lean_ctor_get(v_enableArtifactCache_x3f_4769_, 0);
v___x_4818_ = lean_unbox(v_val_4817_);
v_a_4775_ = v___x_4818_;
v_a_4776_ = v_a_4768_;
goto v___jp_4774_;
}
v___jp_4770_:
{
lean_object* v___x_4772_; lean_object* v___x_4773_; 
v___x_4772_ = lean_box(0);
v___x_4773_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4767_, v___x_4772_, v___y_4712_, v_a_4716_, v_a_4717_, v_a_4718_, v_a_4719_, v_a_4771_);
lean_dec_ref(v_a_4719_);
lean_dec(v_a_4718_);
lean_dec(v_a_4717_);
lean_dec(v_a_4716_);
lean_dec_ref(v___y_4712_);
v___y_4743_ = v___x_4773_;
goto v___jp_4742_;
}
v___jp_4774_:
{
if (v_a_4775_ == 0)
{
lean_dec(v_val_4762_);
lean_dec_ref(v_pkg_4715_);
v_a_4771_ = v_a_4776_;
goto v___jp_4770_;
}
else
{
lean_object* v_toContext_4777_; lean_object* v_log_4778_; uint8_t v_action_4779_; uint8_t v_wantsRebuild_4780_; lean_object* v_trace_4781_; lean_object* v_buildTime_4782_; lean_object* v_lakeCache_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; 
v_toContext_4777_ = lean_ctor_get(v_a_4719_, 1);
v_log_4778_ = lean_ctor_get(v_a_4776_, 0);
v_action_4779_ = lean_ctor_get_uint8(v_a_4776_, sizeof(void*)*3);
v_wantsRebuild_4780_ = lean_ctor_get_uint8(v_a_4776_, sizeof(void*)*3 + 1);
v_trace_4781_ = lean_ctor_get(v_a_4776_, 1);
v_buildTime_4782_ = lean_ctor_get(v_a_4776_, 2);
v_lakeCache_4783_ = lean_ctor_get(v_toContext_4777_, 3);
v___x_4784_ = l_Lake_Package_cacheScope(v_pkg_4715_);
lean_inc_ref(v_lakeCache_4783_);
v___x_4785_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_4783_, v___x_4784_, v_inputHash_4713_, v_val_4762_, v___x_4763_, v___x_4763_);
if (lean_obj_tag(v___x_4785_) == 0)
{
lean_object* v___x_4786_; lean_object* v___x_4787_; 
lean_dec_ref(v___x_4785_);
v___x_4786_ = lean_box(0);
v___x_4787_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4767_, v___x_4786_, v___y_4712_, v_a_4716_, v_a_4717_, v_a_4718_, v_a_4719_, v_a_4776_);
lean_dec_ref(v_a_4719_);
lean_dec(v_a_4718_);
lean_dec(v_a_4717_);
lean_dec(v_a_4716_);
lean_dec_ref(v___y_4712_);
v___y_4743_ = v___x_4787_;
goto v___jp_4742_;
}
else
{
lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4803_; 
lean_inc(v_buildTime_4782_);
lean_inc_ref(v_trace_4781_);
lean_inc_ref(v_log_4778_);
v_isSharedCheck_4803_ = !lean_is_exclusive(v_a_4776_);
if (v_isSharedCheck_4803_ == 0)
{
lean_object* v_unused_4804_; lean_object* v_unused_4805_; lean_object* v_unused_4806_; 
v_unused_4804_ = lean_ctor_get(v_a_4776_, 2);
lean_dec(v_unused_4804_);
v_unused_4805_ = lean_ctor_get(v_a_4776_, 1);
lean_dec(v_unused_4805_);
v_unused_4806_ = lean_ctor_get(v_a_4776_, 0);
lean_dec(v_unused_4806_);
v___x_4789_ = v_a_4776_;
v_isShared_4790_ = v_isSharedCheck_4803_;
goto v_resetjp_4788_;
}
else
{
lean_dec(v_a_4776_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4803_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
lean_object* v_a_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; uint8_t v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4800_; 
v_a_4791_ = lean_ctor_get(v___x_4785_, 0);
lean_inc(v_a_4791_);
lean_dec_ref(v___x_4785_);
v___x_4792_ = ((lean_object*)(l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0));
v___x_4793_ = lean_io_error_to_string(v_a_4791_);
v___x_4794_ = lean_string_append(v___x_4792_, v___x_4793_);
lean_dec_ref(v___x_4793_);
v___x_4795_ = 2;
v___x_4796_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4796_, 0, v___x_4794_);
lean_ctor_set_uint8(v___x_4796_, sizeof(void*)*1, v___x_4795_);
v___x_4797_ = lean_box(0);
v___x_4798_ = lean_array_push(v_log_4778_, v___x_4796_);
if (v_isShared_4790_ == 0)
{
lean_ctor_set(v___x_4789_, 0, v___x_4798_);
v___x_4800_ = v___x_4789_;
goto v_reusejp_4799_;
}
else
{
lean_object* v_reuseFailAlloc_4802_; 
v_reuseFailAlloc_4802_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4802_, 0, v___x_4798_);
lean_ctor_set(v_reuseFailAlloc_4802_, 1, v_trace_4781_);
lean_ctor_set(v_reuseFailAlloc_4802_, 2, v_buildTime_4782_);
lean_ctor_set_uint8(v_reuseFailAlloc_4802_, sizeof(void*)*3, v_action_4779_);
lean_ctor_set_uint8(v_reuseFailAlloc_4802_, sizeof(void*)*3 + 1, v_wantsRebuild_4780_);
v___x_4800_ = v_reuseFailAlloc_4802_;
goto v_reusejp_4799_;
}
v_reusejp_4799_:
{
lean_object* v___x_4801_; 
v___x_4801_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4767_, v___x_4797_, v___y_4712_, v_a_4716_, v_a_4717_, v_a_4718_, v_a_4719_, v___x_4800_);
lean_dec_ref(v_a_4719_);
lean_dec(v_a_4718_);
lean_dec(v_a_4717_);
lean_dec(v_a_4716_);
lean_dec_ref(v___y_4712_);
v___y_4743_ = v___x_4801_;
goto v___jp_4742_;
}
}
}
}
}
}
else
{
lean_object* v_a_4819_; lean_object* v_a_4820_; 
lean_dec(v_val_4762_);
lean_dec_ref(v_a_4719_);
lean_dec(v_a_4718_);
lean_dec(v_a_4717_);
lean_dec(v_a_4716_);
lean_dec_ref(v_pkg_4715_);
lean_dec_ref(v___y_4712_);
v_a_4819_ = lean_ctor_get(v___x_4765_, 0);
lean_inc(v_a_4819_);
v_a_4820_ = lean_ctor_get(v___x_4765_, 1);
lean_inc(v_a_4820_);
lean_dec_ref(v___x_4765_);
v_a_4727_ = v_a_4819_;
v_a_4728_ = v_a_4820_;
goto v___jp_4726_;
}
}
else
{
lean_dec(v_outputs_x3f_4760_);
lean_dec_ref(v_a_4719_);
lean_dec(v_a_4718_);
lean_dec(v_a_4717_);
lean_dec(v_a_4716_);
lean_dec_ref(v_pkg_4715_);
lean_dec_ref(v___y_4712_);
v___y_4723_ = v_a_4720_;
goto v___jp_4722_;
}
}
}
else
{
lean_dec_ref(v_a_4719_);
lean_dec(v_a_4718_);
lean_dec(v_a_4717_);
lean_dec(v_a_4716_);
lean_dec_ref(v_pkg_4715_);
lean_dec(v_savedTrace_4714_);
lean_dec_ref(v___y_4712_);
v___y_4723_ = v_a_4720_;
goto v___jp_4722_;
}
v___jp_4722_:
{
lean_object* v___x_4724_; lean_object* v___x_4725_; 
v___x_4724_ = lean_box(0);
v___x_4725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4725_, 0, v___x_4724_);
lean_ctor_set(v___x_4725_, 1, v___y_4723_);
return v___x_4725_;
}
v___jp_4726_:
{
lean_object* v_log_4729_; uint8_t v_action_4730_; uint8_t v_wantsRebuild_4731_; lean_object* v_trace_4732_; lean_object* v_buildTime_4733_; lean_object* v___x_4735_; uint8_t v_isShared_4736_; uint8_t v_isSharedCheck_4741_; 
v_log_4729_ = lean_ctor_get(v_a_4728_, 0);
v_action_4730_ = lean_ctor_get_uint8(v_a_4728_, sizeof(void*)*3);
v_wantsRebuild_4731_ = lean_ctor_get_uint8(v_a_4728_, sizeof(void*)*3 + 1);
v_trace_4732_ = lean_ctor_get(v_a_4728_, 1);
v_buildTime_4733_ = lean_ctor_get(v_a_4728_, 2);
v_isSharedCheck_4741_ = !lean_is_exclusive(v_a_4728_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4735_ = v_a_4728_;
v_isShared_4736_ = v_isSharedCheck_4741_;
goto v_resetjp_4734_;
}
else
{
lean_inc(v_buildTime_4733_);
lean_inc(v_trace_4732_);
lean_inc(v_log_4729_);
lean_dec(v_a_4728_);
v___x_4735_ = lean_box(0);
v_isShared_4736_ = v_isSharedCheck_4741_;
goto v_resetjp_4734_;
}
v_resetjp_4734_:
{
lean_object* v___x_4737_; lean_object* v___x_4739_; 
v___x_4737_ = l_Array_shrink___redArg(v_log_4729_, v_a_4727_);
lean_dec(v_a_4727_);
if (v_isShared_4736_ == 0)
{
lean_ctor_set(v___x_4735_, 0, v___x_4737_);
v___x_4739_ = v___x_4735_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v___x_4737_);
lean_ctor_set(v_reuseFailAlloc_4740_, 1, v_trace_4732_);
lean_ctor_set(v_reuseFailAlloc_4740_, 2, v_buildTime_4733_);
lean_ctor_set_uint8(v_reuseFailAlloc_4740_, sizeof(void*)*3, v_action_4730_);
lean_ctor_set_uint8(v_reuseFailAlloc_4740_, sizeof(void*)*3 + 1, v_wantsRebuild_4731_);
v___x_4739_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
v___y_4723_ = v___x_4739_;
goto v___jp_4722_;
}
}
}
v___jp_4742_:
{
if (lean_obj_tag(v___y_4743_) == 0)
{
lean_object* v_a_4744_; 
v_a_4744_ = lean_ctor_get(v___y_4743_, 0);
if (lean_obj_tag(v_a_4744_) == 0)
{
lean_object* v_a_4745_; lean_object* v___x_4747_; uint8_t v_isShared_4748_; uint8_t v_isSharedCheck_4753_; 
lean_inc_ref(v_a_4744_);
v_a_4745_ = lean_ctor_get(v___y_4743_, 1);
v_isSharedCheck_4753_ = !lean_is_exclusive(v___y_4743_);
if (v_isSharedCheck_4753_ == 0)
{
lean_object* v_unused_4754_; 
v_unused_4754_ = lean_ctor_get(v___y_4743_, 0);
lean_dec(v_unused_4754_);
v___x_4747_ = v___y_4743_;
v_isShared_4748_ = v_isSharedCheck_4753_;
goto v_resetjp_4746_;
}
else
{
lean_inc(v_a_4745_);
lean_dec(v___y_4743_);
v___x_4747_ = lean_box(0);
v_isShared_4748_ = v_isSharedCheck_4753_;
goto v_resetjp_4746_;
}
v_resetjp_4746_:
{
lean_object* v_a_4749_; lean_object* v___x_4751_; 
v_a_4749_ = lean_ctor_get(v_a_4744_, 0);
lean_inc(v_a_4749_);
lean_dec_ref(v_a_4744_);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 0, v_a_4749_);
v___x_4751_ = v___x_4747_;
goto v_reusejp_4750_;
}
else
{
lean_object* v_reuseFailAlloc_4752_; 
v_reuseFailAlloc_4752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4752_, 0, v_a_4749_);
lean_ctor_set(v_reuseFailAlloc_4752_, 1, v_a_4745_);
v___x_4751_ = v_reuseFailAlloc_4752_;
goto v_reusejp_4750_;
}
v_reusejp_4750_:
{
return v___x_4751_;
}
}
}
else
{
lean_object* v_a_4755_; 
v_a_4755_ = lean_ctor_get(v___y_4743_, 1);
lean_inc(v_a_4755_);
lean_dec_ref(v___y_4743_);
v___y_4723_ = v_a_4755_;
goto v___jp_4722_;
}
}
else
{
lean_object* v_a_4756_; lean_object* v_a_4757_; 
v_a_4756_ = lean_ctor_get(v___y_4743_, 0);
lean_inc(v_a_4756_);
v_a_4757_ = lean_ctor_get(v___y_4743_, 1);
lean_inc(v_a_4757_);
lean_dec_ref(v___y_4743_);
v_a_4727_ = v_a_4756_;
v_a_4728_ = v_a_4757_;
goto v___jp_4726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___boxed(lean_object* v_exe_4821_, lean_object* v___y_4822_, lean_object* v_inputHash_4823_, lean_object* v_savedTrace_4824_, lean_object* v_pkg_4825_, lean_object* v_a_4826_, lean_object* v_a_4827_, lean_object* v_a_4828_, lean_object* v_a_4829_, lean_object* v_a_4830_, lean_object* v_a_4831_){
_start:
{
uint8_t v_exe_boxed_4832_; uint64_t v_inputHash_boxed_4833_; lean_object* v_res_4834_; 
v_exe_boxed_4832_ = lean_unbox(v_exe_4821_);
v_inputHash_boxed_4833_ = lean_unbox_uint64(v_inputHash_4823_);
lean_dec_ref(v_inputHash_4823_);
v_res_4834_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(v_exe_boxed_4832_, v___y_4822_, v_inputHash_boxed_4833_, v_savedTrace_4824_, v_pkg_4825_, v_a_4826_, v_a_4827_, v_a_4828_, v_a_4829_, v_a_4830_);
return v_res_4834_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(lean_object* v_as_4835_, size_t v_i_4836_, size_t v_stop_4837_, lean_object* v_b_4838_){
_start:
{
uint8_t v___x_4839_; 
v___x_4839_ = lean_usize_dec_eq(v_i_4836_, v_stop_4837_);
if (v___x_4839_ == 0)
{
lean_object* v___x_4840_; lean_object* v_message_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; size_t v___x_4845_; size_t v___x_4846_; 
v___x_4840_ = lean_array_uget_borrowed(v_as_4835_, v_i_4836_);
v_message_4841_ = lean_ctor_get(v___x_4840_, 0);
v___x_4842_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0));
v___x_4843_ = lean_string_append(v_b_4838_, v___x_4842_);
v___x_4844_ = lean_string_append(v___x_4843_, v_message_4841_);
v___x_4845_ = ((size_t)1ULL);
v___x_4846_ = lean_usize_add(v_i_4836_, v___x_4845_);
v_i_4836_ = v___x_4846_;
v_b_4838_ = v___x_4844_;
goto _start;
}
else
{
return v_b_4838_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0___boxed(lean_object* v_as_4848_, lean_object* v_i_4849_, lean_object* v_stop_4850_, lean_object* v_b_4851_){
_start:
{
size_t v_i_boxed_4852_; size_t v_stop_boxed_4853_; lean_object* v_res_4854_; 
v_i_boxed_4852_ = lean_unbox_usize(v_i_4849_);
lean_dec(v_i_4849_);
v_stop_boxed_4853_ = lean_unbox_usize(v_stop_4850_);
lean_dec(v_stop_4850_);
v_res_4854_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(v_as_4848_, v_i_boxed_4852_, v_stop_boxed_4853_, v_b_4851_);
lean_dec_ref(v_as_4848_);
return v_res_4854_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(uint8_t v_exe_4855_, lean_object* v___y_4856_, uint64_t v_inputHash_4857_, lean_object* v_pkg_4858_, lean_object* v_a_4859_, lean_object* v_a_4860_, lean_object* v_a_4861_, lean_object* v_a_4862_, lean_object* v_a_4863_){
_start:
{
lean_object* v_toContext_4865_; lean_object* v_log_4866_; uint8_t v_action_4867_; uint8_t v_wantsRebuild_4868_; lean_object* v_trace_4869_; lean_object* v_buildTime_4870_; lean_object* v___x_4872_; uint8_t v_isShared_4873_; uint8_t v_isSharedCheck_4963_; 
v_toContext_4865_ = lean_ctor_get(v_a_4862_, 1);
v_log_4866_ = lean_ctor_get(v_a_4863_, 0);
v_action_4867_ = lean_ctor_get_uint8(v_a_4863_, sizeof(void*)*3);
v_wantsRebuild_4868_ = lean_ctor_get_uint8(v_a_4863_, sizeof(void*)*3 + 1);
v_trace_4869_ = lean_ctor_get(v_a_4863_, 1);
v_buildTime_4870_ = lean_ctor_get(v_a_4863_, 2);
v_isSharedCheck_4963_ = !lean_is_exclusive(v_a_4863_);
if (v_isSharedCheck_4963_ == 0)
{
v___x_4872_ = v_a_4863_;
v_isShared_4873_ = v_isSharedCheck_4963_;
goto v_resetjp_4871_;
}
else
{
lean_inc(v_buildTime_4870_);
lean_inc(v_trace_4869_);
lean_inc(v_log_4866_);
lean_dec(v_a_4863_);
v___x_4872_ = lean_box(0);
v_isShared_4873_ = v_isSharedCheck_4963_;
goto v_resetjp_4871_;
}
v_resetjp_4871_:
{
lean_object* v_lakeCache_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; 
v_lakeCache_4874_ = lean_ctor_get(v_toContext_4865_, 3);
v___x_4875_ = l_Lake_Package_cacheScope(v_pkg_4858_);
lean_inc_ref(v_lakeCache_4874_);
v___x_4876_ = l_Lake_Cache_readOutputs_x3f(v_lakeCache_4874_, v___x_4875_, v_inputHash_4857_, v_log_4866_);
if (lean_obj_tag(v___x_4876_) == 0)
{
lean_object* v_a_4877_; lean_object* v_a_4878_; lean_object* v___x_4880_; uint8_t v_isShared_4881_; uint8_t v_isSharedCheck_4950_; 
v_a_4877_ = lean_ctor_get(v___x_4876_, 0);
v_a_4878_ = lean_ctor_get(v___x_4876_, 1);
v_isSharedCheck_4950_ = !lean_is_exclusive(v___x_4876_);
if (v_isSharedCheck_4950_ == 0)
{
v___x_4880_ = v___x_4876_;
v_isShared_4881_ = v_isSharedCheck_4950_;
goto v_resetjp_4879_;
}
else
{
lean_inc(v_a_4878_);
lean_inc(v_a_4877_);
lean_dec(v___x_4876_);
v___x_4880_ = lean_box(0);
v_isShared_4881_ = v_isSharedCheck_4950_;
goto v_resetjp_4879_;
}
v_resetjp_4879_:
{
lean_object* v___x_4883_; 
if (v_isShared_4873_ == 0)
{
lean_ctor_set(v___x_4872_, 0, v_a_4878_);
v___x_4883_ = v___x_4872_;
goto v_reusejp_4882_;
}
else
{
lean_object* v_reuseFailAlloc_4949_; 
v_reuseFailAlloc_4949_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4949_, 0, v_a_4878_);
lean_ctor_set(v_reuseFailAlloc_4949_, 1, v_trace_4869_);
lean_ctor_set(v_reuseFailAlloc_4949_, 2, v_buildTime_4870_);
lean_ctor_set_uint8(v_reuseFailAlloc_4949_, sizeof(void*)*3, v_action_4867_);
lean_ctor_set_uint8(v_reuseFailAlloc_4949_, sizeof(void*)*3 + 1, v_wantsRebuild_4868_);
v___x_4883_ = v_reuseFailAlloc_4949_;
goto v_reusejp_4882_;
}
v_reusejp_4882_:
{
if (lean_obj_tag(v_a_4877_) == 1)
{
lean_object* v_val_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4944_; 
v_val_4884_ = lean_ctor_get(v_a_4877_, 0);
v_isSharedCheck_4944_ = !lean_is_exclusive(v_a_4877_);
if (v_isSharedCheck_4944_ == 0)
{
v___x_4886_ = v_a_4877_;
v_isShared_4887_ = v_isSharedCheck_4944_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_val_4884_);
lean_dec(v_a_4877_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4944_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
lean_object* v___x_4888_; lean_object* v_r_4890_; lean_object* v___y_4891_; 
v___x_4888_ = l_Lake_resolveArtifactOutput(v_val_4884_, v_exe_4855_, v___y_4856_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v___x_4883_);
if (lean_obj_tag(v___x_4888_) == 0)
{
lean_object* v_a_4895_; lean_object* v_a_4896_; lean_object* v___x_4898_; 
v_a_4895_ = lean_ctor_get(v___x_4888_, 0);
lean_inc(v_a_4895_);
v_a_4896_ = lean_ctor_get(v___x_4888_, 1);
lean_inc(v_a_4896_);
lean_dec_ref(v___x_4888_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 0, v_a_4895_);
v___x_4898_ = v___x_4886_;
goto v_reusejp_4897_;
}
else
{
lean_object* v_reuseFailAlloc_4899_; 
v_reuseFailAlloc_4899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4899_, 0, v_a_4895_);
v___x_4898_ = v_reuseFailAlloc_4899_;
goto v_reusejp_4897_;
}
v_reusejp_4897_:
{
v_r_4890_ = v___x_4898_;
v___y_4891_ = v_a_4896_;
goto v___jp_4889_;
}
}
else
{
lean_object* v_a_4900_; lean_object* v_a_4901_; lean_object* v_log_4902_; uint8_t v_action_4903_; uint8_t v_wantsRebuild_4904_; lean_object* v_trace_4905_; lean_object* v_buildTime_4906_; lean_object* v___x_4908_; uint8_t v_isShared_4909_; uint8_t v_isSharedCheck_4943_; 
lean_del_object(v___x_4886_);
v_a_4900_ = lean_ctor_get(v___x_4888_, 1);
lean_inc(v_a_4900_);
v_a_4901_ = lean_ctor_get(v___x_4888_, 0);
lean_inc(v_a_4901_);
lean_dec_ref(v___x_4888_);
v_log_4902_ = lean_ctor_get(v_a_4900_, 0);
v_action_4903_ = lean_ctor_get_uint8(v_a_4900_, sizeof(void*)*3);
v_wantsRebuild_4904_ = lean_ctor_get_uint8(v_a_4900_, sizeof(void*)*3 + 1);
v_trace_4905_ = lean_ctor_get(v_a_4900_, 1);
v_buildTime_4906_ = lean_ctor_get(v_a_4900_, 2);
v_isSharedCheck_4943_ = !lean_is_exclusive(v_a_4900_);
if (v_isSharedCheck_4943_ == 0)
{
v___x_4908_ = v_a_4900_;
v_isShared_4909_ = v_isSharedCheck_4943_;
goto v_resetjp_4907_;
}
else
{
lean_inc(v_buildTime_4906_);
lean_inc(v_trace_4905_);
lean_inc(v_log_4902_);
lean_dec(v_a_4900_);
v___x_4908_ = lean_box(0);
v_isShared_4909_ = v_isSharedCheck_4943_;
goto v_resetjp_4907_;
}
v_resetjp_4907_:
{
lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___y_4914_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; uint8_t v___x_4935_; 
v___x_4910_ = lean_array_get_size(v_log_4902_);
lean_inc(v_a_4901_);
v___x_4911_ = l_Array_extract___redArg(v_log_4902_, v_a_4901_, v___x_4910_);
v___x_4912_ = l_Array_shrink___redArg(v_log_4902_, v_a_4901_);
lean_dec(v_a_4901_);
v___x_4922_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0));
v___x_4923_ = l_Lake_Hash_hex(v_inputHash_4857_);
v___x_4924_ = lean_unsigned_to_nat(7u);
v___x_4925_ = lean_unsigned_to_nat(0u);
v___x_4926_ = lean_string_utf8_byte_size(v___x_4923_);
lean_inc_ref(v___x_4923_);
v___x_4927_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4927_, 0, v___x_4923_);
lean_ctor_set(v___x_4927_, 1, v___x_4925_);
lean_ctor_set(v___x_4927_, 2, v___x_4926_);
v___x_4928_ = l_String_Slice_Pos_nextn(v___x_4927_, v___x_4925_, v___x_4924_);
lean_dec_ref(v___x_4927_);
v___x_4929_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4929_, 0, v___x_4923_);
lean_ctor_set(v___x_4929_, 1, v___x_4925_);
lean_ctor_set(v___x_4929_, 2, v___x_4928_);
v___x_4930_ = l_String_Slice_toString(v___x_4929_);
lean_dec_ref(v___x_4929_);
v___x_4931_ = lean_string_append(v___x_4922_, v___x_4930_);
lean_dec_ref(v___x_4930_);
v___x_4932_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1));
v___x_4933_ = lean_string_append(v___x_4931_, v___x_4932_);
v___x_4934_ = lean_array_get_size(v___x_4911_);
v___x_4935_ = lean_nat_dec_lt(v___x_4925_, v___x_4934_);
if (v___x_4935_ == 0)
{
lean_dec_ref(v___x_4911_);
v___y_4914_ = v___x_4933_;
goto v___jp_4913_;
}
else
{
uint8_t v___x_4936_; 
v___x_4936_ = lean_nat_dec_le(v___x_4934_, v___x_4934_);
if (v___x_4936_ == 0)
{
if (v___x_4935_ == 0)
{
lean_dec_ref(v___x_4911_);
v___y_4914_ = v___x_4933_;
goto v___jp_4913_;
}
else
{
size_t v___x_4937_; size_t v___x_4938_; lean_object* v___x_4939_; 
v___x_4937_ = ((size_t)0ULL);
v___x_4938_ = lean_usize_of_nat(v___x_4934_);
v___x_4939_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(v___x_4911_, v___x_4937_, v___x_4938_, v___x_4933_);
lean_dec_ref(v___x_4911_);
v___y_4914_ = v___x_4939_;
goto v___jp_4913_;
}
}
else
{
size_t v___x_4940_; size_t v___x_4941_; lean_object* v___x_4942_; 
v___x_4940_ = ((size_t)0ULL);
v___x_4941_ = lean_usize_of_nat(v___x_4934_);
v___x_4942_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(v___x_4911_, v___x_4940_, v___x_4941_, v___x_4933_);
lean_dec_ref(v___x_4911_);
v___y_4914_ = v___x_4942_;
goto v___jp_4913_;
}
}
v___jp_4913_:
{
uint8_t v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4919_; 
v___x_4915_ = 2;
v___x_4916_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4916_, 0, v___y_4914_);
lean_ctor_set_uint8(v___x_4916_, sizeof(void*)*1, v___x_4915_);
v___x_4917_ = lean_array_push(v___x_4912_, v___x_4916_);
if (v_isShared_4909_ == 0)
{
lean_ctor_set(v___x_4908_, 0, v___x_4917_);
v___x_4919_ = v___x_4908_;
goto v_reusejp_4918_;
}
else
{
lean_object* v_reuseFailAlloc_4921_; 
v_reuseFailAlloc_4921_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4921_, 0, v___x_4917_);
lean_ctor_set(v_reuseFailAlloc_4921_, 1, v_trace_4905_);
lean_ctor_set(v_reuseFailAlloc_4921_, 2, v_buildTime_4906_);
lean_ctor_set_uint8(v_reuseFailAlloc_4921_, sizeof(void*)*3, v_action_4903_);
lean_ctor_set_uint8(v_reuseFailAlloc_4921_, sizeof(void*)*3 + 1, v_wantsRebuild_4904_);
v___x_4919_ = v_reuseFailAlloc_4921_;
goto v_reusejp_4918_;
}
v_reusejp_4918_:
{
lean_object* v___x_4920_; 
v___x_4920_ = lean_box(0);
v_r_4890_ = v___x_4920_;
v___y_4891_ = v___x_4919_;
goto v___jp_4889_;
}
}
}
}
v___jp_4889_:
{
lean_object* v___x_4893_; 
if (v_isShared_4881_ == 0)
{
lean_ctor_set(v___x_4880_, 1, v___y_4891_);
lean_ctor_set(v___x_4880_, 0, v_r_4890_);
v___x_4893_ = v___x_4880_;
goto v_reusejp_4892_;
}
else
{
lean_object* v_reuseFailAlloc_4894_; 
v_reuseFailAlloc_4894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4894_, 0, v_r_4890_);
lean_ctor_set(v_reuseFailAlloc_4894_, 1, v___y_4891_);
v___x_4893_ = v_reuseFailAlloc_4894_;
goto v_reusejp_4892_;
}
v_reusejp_4892_:
{
return v___x_4893_;
}
}
}
}
else
{
lean_object* v___x_4945_; lean_object* v___x_4947_; 
lean_dec(v_a_4877_);
lean_dec_ref(v_a_4862_);
lean_dec(v_a_4861_);
lean_dec(v_a_4860_);
lean_dec(v_a_4859_);
lean_dec_ref(v___y_4856_);
v___x_4945_ = lean_box(0);
if (v_isShared_4881_ == 0)
{
lean_ctor_set(v___x_4880_, 1, v___x_4883_);
lean_ctor_set(v___x_4880_, 0, v___x_4945_);
v___x_4947_ = v___x_4880_;
goto v_reusejp_4946_;
}
else
{
lean_object* v_reuseFailAlloc_4948_; 
v_reuseFailAlloc_4948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4948_, 0, v___x_4945_);
lean_ctor_set(v_reuseFailAlloc_4948_, 1, v___x_4883_);
v___x_4947_ = v_reuseFailAlloc_4948_;
goto v_reusejp_4946_;
}
v_reusejp_4946_:
{
return v___x_4947_;
}
}
}
}
}
else
{
lean_object* v_a_4951_; lean_object* v_a_4952_; lean_object* v___x_4954_; uint8_t v_isShared_4955_; uint8_t v_isSharedCheck_4962_; 
lean_dec_ref(v_a_4862_);
lean_dec(v_a_4861_);
lean_dec(v_a_4860_);
lean_dec(v_a_4859_);
lean_dec_ref(v___y_4856_);
v_a_4951_ = lean_ctor_get(v___x_4876_, 0);
v_a_4952_ = lean_ctor_get(v___x_4876_, 1);
v_isSharedCheck_4962_ = !lean_is_exclusive(v___x_4876_);
if (v_isSharedCheck_4962_ == 0)
{
v___x_4954_ = v___x_4876_;
v_isShared_4955_ = v_isSharedCheck_4962_;
goto v_resetjp_4953_;
}
else
{
lean_inc(v_a_4952_);
lean_inc(v_a_4951_);
lean_dec(v___x_4876_);
v___x_4954_ = lean_box(0);
v_isShared_4955_ = v_isSharedCheck_4962_;
goto v_resetjp_4953_;
}
v_resetjp_4953_:
{
lean_object* v___x_4957_; 
if (v_isShared_4873_ == 0)
{
lean_ctor_set(v___x_4872_, 0, v_a_4952_);
v___x_4957_ = v___x_4872_;
goto v_reusejp_4956_;
}
else
{
lean_object* v_reuseFailAlloc_4961_; 
v_reuseFailAlloc_4961_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4961_, 0, v_a_4952_);
lean_ctor_set(v_reuseFailAlloc_4961_, 1, v_trace_4869_);
lean_ctor_set(v_reuseFailAlloc_4961_, 2, v_buildTime_4870_);
lean_ctor_set_uint8(v_reuseFailAlloc_4961_, sizeof(void*)*3, v_action_4867_);
lean_ctor_set_uint8(v_reuseFailAlloc_4961_, sizeof(void*)*3 + 1, v_wantsRebuild_4868_);
v___x_4957_ = v_reuseFailAlloc_4961_;
goto v_reusejp_4956_;
}
v_reusejp_4956_:
{
lean_object* v___x_4959_; 
if (v_isShared_4955_ == 0)
{
lean_ctor_set(v___x_4954_, 1, v___x_4957_);
v___x_4959_ = v___x_4954_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4960_; 
v_reuseFailAlloc_4960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4960_, 0, v_a_4951_);
lean_ctor_set(v_reuseFailAlloc_4960_, 1, v___x_4957_);
v___x_4959_ = v_reuseFailAlloc_4960_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
return v___x_4959_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___boxed(lean_object* v_exe_4964_, lean_object* v___y_4965_, lean_object* v_inputHash_4966_, lean_object* v_pkg_4967_, lean_object* v_a_4968_, lean_object* v_a_4969_, lean_object* v_a_4970_, lean_object* v_a_4971_, lean_object* v_a_4972_, lean_object* v_a_4973_){
_start:
{
uint8_t v_exe_boxed_4974_; uint64_t v_inputHash_boxed_4975_; lean_object* v_res_4976_; 
v_exe_boxed_4974_ = lean_unbox(v_exe_4964_);
v_inputHash_boxed_4975_ = lean_unbox_uint64(v_inputHash_4966_);
lean_dec_ref(v_inputHash_4966_);
v_res_4976_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(v_exe_boxed_4974_, v___y_4965_, v_inputHash_boxed_4975_, v_pkg_4967_, v_a_4968_, v_a_4969_, v_a_4970_, v_a_4971_, v_a_4972_);
return v_res_4976_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0(uint8_t v_exe_4977_, uint64_t v_hash_4978_, lean_object* v_val_4979_, lean_object* v_file_4980_, lean_object* v___x_4981_, lean_object* v_a_4982_, uint8_t v_restore_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_){
_start:
{
lean_object* v_a_4992_; lean_object* v___y_4996_; lean_object* v___y_4997_; lean_object* v___y_4998_; uint8_t v___y_5036_; lean_object* v___y_5037_; lean_object* v___y_5038_; uint8_t v___y_5039_; lean_object* v___y_5040_; lean_object* v___y_5041_; lean_object* v___y_5042_; lean_object* v___y_5043_; lean_object* v___y_5057_; lean_object* v___x_5114_; 
lean_inc_ref(v___y_4988_);
lean_inc(v___y_4987_);
lean_inc(v___y_4986_);
lean_inc(v___y_4985_);
lean_inc_ref(v_val_4979_);
lean_inc_ref(v___y_4984_);
v___x_5114_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(v_exe_4977_, v___y_4984_, v_hash_4978_, v_val_4979_, v___y_4985_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_);
if (lean_obj_tag(v___x_5114_) == 0)
{
lean_object* v_a_5115_; 
v_a_5115_ = lean_ctor_get(v___x_5114_, 0);
lean_inc(v_a_5115_);
if (lean_obj_tag(v_a_5115_) == 1)
{
lean_dec_ref(v_a_5115_);
lean_dec_ref(v___y_4988_);
lean_dec(v___y_4987_);
lean_dec(v___y_4986_);
lean_dec(v___y_4985_);
lean_dec_ref(v___y_4984_);
lean_dec_ref(v_val_4979_);
v___y_5057_ = v___x_5114_;
goto v___jp_5056_;
}
else
{
lean_object* v_a_5116_; lean_object* v___x_5117_; lean_object* v_a_5118_; 
lean_dec(v_a_5115_);
v_a_5116_ = lean_ctor_get(v___x_5114_, 1);
lean_inc(v_a_5116_);
lean_dec_ref(v___x_5114_);
lean_inc(v_a_4982_);
v___x_5117_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(v_exe_4977_, v___y_4984_, v_hash_4978_, v_a_4982_, v_val_4979_, v___y_4985_, v___y_4986_, v___y_4987_, v___y_4988_, v_a_5116_);
v_a_5118_ = lean_ctor_get(v___x_5117_, 0);
lean_inc(v_a_5118_);
if (lean_obj_tag(v_a_5118_) == 1)
{
lean_dec_ref(v_a_5118_);
v___y_5057_ = v___x_5117_;
goto v___jp_5056_;
}
else
{
lean_object* v_a_5119_; 
lean_dec(v_a_5118_);
lean_dec(v_a_4982_);
lean_dec_ref(v___x_4981_);
lean_dec_ref(v_file_4980_);
v_a_5119_ = lean_ctor_get(v___x_5117_, 1);
lean_inc(v_a_5119_);
lean_dec_ref(v___x_5117_);
v_a_4992_ = v_a_5119_;
goto v___jp_4991_;
}
}
}
else
{
lean_dec_ref(v___y_4988_);
lean_dec(v___y_4987_);
lean_dec(v___y_4986_);
lean_dec(v___y_4985_);
lean_dec_ref(v___y_4984_);
lean_dec_ref(v_val_4979_);
v___y_5057_ = v___x_5114_;
goto v___jp_5056_;
}
v___jp_4991_:
{
lean_object* v___x_4993_; lean_object* v___x_4994_; 
v___x_4993_ = lean_box(0);
v___x_4994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4994_, 0, v___x_4993_);
lean_ctor_set(v___x_4994_, 1, v_a_4992_);
return v___x_4994_;
}
v___jp_4995_:
{
if (v_restore_4983_ == 0)
{
lean_object* v___x_4999_; 
lean_dec_ref(v___y_4997_);
lean_dec_ref(v_file_4980_);
v___x_4999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4999_, 0, v___y_4996_);
lean_ctor_set(v___x_4999_, 1, v___y_4998_);
return v___x_4999_;
}
else
{
lean_object* v_log_5000_; uint8_t v_action_5001_; uint8_t v_wantsRebuild_5002_; lean_object* v_trace_5003_; lean_object* v_buildTime_5004_; lean_object* v___x_5006_; uint8_t v_isShared_5007_; uint8_t v_isSharedCheck_5034_; 
lean_dec(v___y_4996_);
v_log_5000_ = lean_ctor_get(v___y_4998_, 0);
v_action_5001_ = lean_ctor_get_uint8(v___y_4998_, sizeof(void*)*3);
v_wantsRebuild_5002_ = lean_ctor_get_uint8(v___y_4998_, sizeof(void*)*3 + 1);
v_trace_5003_ = lean_ctor_get(v___y_4998_, 1);
v_buildTime_5004_ = lean_ctor_get(v___y_4998_, 2);
v_isSharedCheck_5034_ = !lean_is_exclusive(v___y_4998_);
if (v_isSharedCheck_5034_ == 0)
{
v___x_5006_ = v___y_4998_;
v_isShared_5007_ = v_isSharedCheck_5034_;
goto v_resetjp_5005_;
}
else
{
lean_inc(v_buildTime_5004_);
lean_inc(v_trace_5003_);
lean_inc(v_log_5000_);
lean_dec(v___y_4998_);
v___x_5006_ = lean_box(0);
v_isShared_5007_ = v_isSharedCheck_5034_;
goto v_resetjp_5005_;
}
v_resetjp_5005_:
{
lean_object* v___x_5008_; 
v___x_5008_ = l_Lake_restoreArtifact(v_file_4980_, v___y_4997_, v_exe_4977_, v_log_5000_);
if (lean_obj_tag(v___x_5008_) == 0)
{
lean_object* v_a_5009_; lean_object* v_a_5010_; lean_object* v___x_5012_; uint8_t v_isShared_5013_; uint8_t v_isSharedCheck_5021_; 
v_a_5009_ = lean_ctor_get(v___x_5008_, 0);
v_a_5010_ = lean_ctor_get(v___x_5008_, 1);
v_isSharedCheck_5021_ = !lean_is_exclusive(v___x_5008_);
if (v_isSharedCheck_5021_ == 0)
{
v___x_5012_ = v___x_5008_;
v_isShared_5013_ = v_isSharedCheck_5021_;
goto v_resetjp_5011_;
}
else
{
lean_inc(v_a_5010_);
lean_inc(v_a_5009_);
lean_dec(v___x_5008_);
v___x_5012_ = lean_box(0);
v_isShared_5013_ = v_isSharedCheck_5021_;
goto v_resetjp_5011_;
}
v_resetjp_5011_:
{
lean_object* v___x_5015_; 
if (v_isShared_5007_ == 0)
{
lean_ctor_set(v___x_5006_, 0, v_a_5010_);
v___x_5015_ = v___x_5006_;
goto v_reusejp_5014_;
}
else
{
lean_object* v_reuseFailAlloc_5020_; 
v_reuseFailAlloc_5020_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5020_, 0, v_a_5010_);
lean_ctor_set(v_reuseFailAlloc_5020_, 1, v_trace_5003_);
lean_ctor_set(v_reuseFailAlloc_5020_, 2, v_buildTime_5004_);
lean_ctor_set_uint8(v_reuseFailAlloc_5020_, sizeof(void*)*3, v_action_5001_);
lean_ctor_set_uint8(v_reuseFailAlloc_5020_, sizeof(void*)*3 + 1, v_wantsRebuild_5002_);
v___x_5015_ = v_reuseFailAlloc_5020_;
goto v_reusejp_5014_;
}
v_reusejp_5014_:
{
lean_object* v___x_5016_; lean_object* v___x_5018_; 
v___x_5016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5016_, 0, v_a_5009_);
if (v_isShared_5013_ == 0)
{
lean_ctor_set(v___x_5012_, 1, v___x_5015_);
lean_ctor_set(v___x_5012_, 0, v___x_5016_);
v___x_5018_ = v___x_5012_;
goto v_reusejp_5017_;
}
else
{
lean_object* v_reuseFailAlloc_5019_; 
v_reuseFailAlloc_5019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5019_, 0, v___x_5016_);
lean_ctor_set(v_reuseFailAlloc_5019_, 1, v___x_5015_);
v___x_5018_ = v_reuseFailAlloc_5019_;
goto v_reusejp_5017_;
}
v_reusejp_5017_:
{
return v___x_5018_;
}
}
}
}
else
{
lean_object* v_a_5022_; lean_object* v_a_5023_; lean_object* v___x_5025_; uint8_t v_isShared_5026_; uint8_t v_isSharedCheck_5033_; 
v_a_5022_ = lean_ctor_get(v___x_5008_, 0);
v_a_5023_ = lean_ctor_get(v___x_5008_, 1);
v_isSharedCheck_5033_ = !lean_is_exclusive(v___x_5008_);
if (v_isSharedCheck_5033_ == 0)
{
v___x_5025_ = v___x_5008_;
v_isShared_5026_ = v_isSharedCheck_5033_;
goto v_resetjp_5024_;
}
else
{
lean_inc(v_a_5023_);
lean_inc(v_a_5022_);
lean_dec(v___x_5008_);
v___x_5025_ = lean_box(0);
v_isShared_5026_ = v_isSharedCheck_5033_;
goto v_resetjp_5024_;
}
v_resetjp_5024_:
{
lean_object* v___x_5028_; 
if (v_isShared_5007_ == 0)
{
lean_ctor_set(v___x_5006_, 0, v_a_5023_);
v___x_5028_ = v___x_5006_;
goto v_reusejp_5027_;
}
else
{
lean_object* v_reuseFailAlloc_5032_; 
v_reuseFailAlloc_5032_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5032_, 0, v_a_5023_);
lean_ctor_set(v_reuseFailAlloc_5032_, 1, v_trace_5003_);
lean_ctor_set(v_reuseFailAlloc_5032_, 2, v_buildTime_5004_);
lean_ctor_set_uint8(v_reuseFailAlloc_5032_, sizeof(void*)*3, v_action_5001_);
lean_ctor_set_uint8(v_reuseFailAlloc_5032_, sizeof(void*)*3 + 1, v_wantsRebuild_5002_);
v___x_5028_ = v_reuseFailAlloc_5032_;
goto v_reusejp_5027_;
}
v_reusejp_5027_:
{
lean_object* v___x_5030_; 
if (v_isShared_5026_ == 0)
{
lean_ctor_set(v___x_5025_, 1, v___x_5028_);
v___x_5030_ = v___x_5025_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5031_; 
v_reuseFailAlloc_5031_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5031_, 0, v_a_5022_);
lean_ctor_set(v_reuseFailAlloc_5031_, 1, v___x_5028_);
v___x_5030_ = v_reuseFailAlloc_5031_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
return v___x_5030_;
}
}
}
}
}
}
}
v___jp_5035_:
{
lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; 
v___x_5044_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5044_, 0, v___y_5043_);
v___x_5045_ = l_Lake_BuildMetadata_ofFetch(v_hash_4978_, v___x_5044_);
v___x_5046_ = l_Lake_BuildMetadata_writeFile(v___x_4981_, v___x_5045_);
if (lean_obj_tag(v___x_5046_) == 0)
{
lean_object* v___x_5047_; 
lean_dec_ref(v___x_5046_);
v___x_5047_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5047_, 0, v___y_5042_);
lean_ctor_set(v___x_5047_, 1, v___y_5038_);
lean_ctor_set(v___x_5047_, 2, v___y_5037_);
lean_ctor_set_uint8(v___x_5047_, sizeof(void*)*3, v___y_5036_);
lean_ctor_set_uint8(v___x_5047_, sizeof(void*)*3 + 1, v___y_5039_);
v___y_4996_ = v___y_5040_;
v___y_4997_ = v___y_5041_;
v___y_4998_ = v___x_5047_;
goto v___jp_4995_;
}
else
{
lean_object* v_a_5048_; lean_object* v___x_5049_; uint8_t v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; lean_object* v___x_5055_; 
lean_dec_ref(v___y_5041_);
lean_dec(v___y_5040_);
lean_dec_ref(v_file_4980_);
v_a_5048_ = lean_ctor_get(v___x_5046_, 0);
lean_inc(v_a_5048_);
lean_dec_ref(v___x_5046_);
v___x_5049_ = lean_io_error_to_string(v_a_5048_);
v___x_5050_ = 3;
v___x_5051_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5051_, 0, v___x_5049_);
lean_ctor_set_uint8(v___x_5051_, sizeof(void*)*1, v___x_5050_);
v___x_5052_ = lean_array_get_size(v___y_5042_);
v___x_5053_ = lean_array_push(v___y_5042_, v___x_5051_);
v___x_5054_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5054_, 0, v___x_5053_);
lean_ctor_set(v___x_5054_, 1, v___y_5038_);
lean_ctor_set(v___x_5054_, 2, v___y_5037_);
lean_ctor_set_uint8(v___x_5054_, sizeof(void*)*3, v___y_5036_);
lean_ctor_set_uint8(v___x_5054_, sizeof(void*)*3 + 1, v___y_5039_);
v___x_5055_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5055_, 0, v___x_5052_);
lean_ctor_set(v___x_5055_, 1, v___x_5054_);
return v___x_5055_;
}
}
v___jp_5056_:
{
if (lean_obj_tag(v___y_5057_) == 0)
{
lean_object* v_a_5058_; 
v_a_5058_ = lean_ctor_get(v___y_5057_, 0);
if (lean_obj_tag(v_a_5058_) == 1)
{
lean_object* v_a_5059_; lean_object* v_val_5060_; lean_object* v___x_5061_; 
lean_inc_ref(v_a_5058_);
v_a_5059_ = lean_ctor_get(v___y_5057_, 1);
lean_inc(v_a_5059_);
lean_dec_ref(v___y_5057_);
v_val_5060_ = lean_ctor_get(v_a_5058_, 0);
lean_inc(v_val_5060_);
v___x_5061_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(v_hash_4978_, v_a_4982_, v_a_5059_);
lean_dec(v_a_4982_);
if (lean_obj_tag(v___x_5061_) == 0)
{
lean_object* v_a_5062_; uint8_t v___x_5063_; 
v_a_5062_ = lean_ctor_get(v___x_5061_, 0);
lean_inc(v_a_5062_);
v___x_5063_ = lean_unbox(v_a_5062_);
lean_dec(v_a_5062_);
if (v___x_5063_ == 0)
{
lean_object* v_a_5064_; lean_object* v___x_5066_; uint8_t v_isShared_5067_; uint8_t v_isSharedCheck_5101_; 
v_a_5064_ = lean_ctor_get(v___x_5061_, 1);
v_isSharedCheck_5101_ = !lean_is_exclusive(v___x_5061_);
if (v_isSharedCheck_5101_ == 0)
{
lean_object* v_unused_5102_; 
v_unused_5102_ = lean_ctor_get(v___x_5061_, 0);
lean_dec(v_unused_5102_);
v___x_5066_ = v___x_5061_;
v_isShared_5067_ = v_isSharedCheck_5101_;
goto v_resetjp_5065_;
}
else
{
lean_inc(v_a_5064_);
lean_dec(v___x_5061_);
v___x_5066_ = lean_box(0);
v_isShared_5067_ = v_isSharedCheck_5101_;
goto v_resetjp_5065_;
}
v_resetjp_5065_:
{
lean_object* v_log_5068_; uint8_t v_action_5069_; uint8_t v_wantsRebuild_5070_; lean_object* v_trace_5071_; lean_object* v_buildTime_5072_; lean_object* v___x_5074_; uint8_t v_isShared_5075_; uint8_t v_isSharedCheck_5100_; 
v_log_5068_ = lean_ctor_get(v_a_5064_, 0);
v_action_5069_ = lean_ctor_get_uint8(v_a_5064_, sizeof(void*)*3);
v_wantsRebuild_5070_ = lean_ctor_get_uint8(v_a_5064_, sizeof(void*)*3 + 1);
v_trace_5071_ = lean_ctor_get(v_a_5064_, 1);
v_buildTime_5072_ = lean_ctor_get(v_a_5064_, 2);
v_isSharedCheck_5100_ = !lean_is_exclusive(v_a_5064_);
if (v_isSharedCheck_5100_ == 0)
{
v___x_5074_ = v_a_5064_;
v_isShared_5075_ = v_isSharedCheck_5100_;
goto v_resetjp_5073_;
}
else
{
lean_inc(v_buildTime_5072_);
lean_inc(v_trace_5071_);
lean_inc(v_log_5068_);
lean_dec(v_a_5064_);
v___x_5074_ = lean_box(0);
v_isShared_5075_ = v_isSharedCheck_5100_;
goto v_resetjp_5073_;
}
v_resetjp_5073_:
{
lean_object* v___x_5076_; 
v___x_5076_ = l_Lake_removeFileIfExists(v_file_4980_);
if (lean_obj_tag(v___x_5076_) == 0)
{
lean_object* v_descr_5077_; uint64_t v_hash_5078_; lean_object* v_ext_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; uint8_t v___x_5082_; 
lean_dec_ref(v___x_5076_);
lean_del_object(v___x_5074_);
lean_del_object(v___x_5066_);
v_descr_5077_ = lean_ctor_get(v_val_5060_, 0);
v_hash_5078_ = lean_ctor_get_uint64(v_descr_5077_, sizeof(void*)*1);
v_ext_5079_ = lean_ctor_get(v_descr_5077_, 0);
v___x_5080_ = lean_string_utf8_byte_size(v_ext_5079_);
v___x_5081_ = lean_unsigned_to_nat(0u);
v___x_5082_ = lean_nat_dec_eq(v___x_5080_, v___x_5081_);
if (v___x_5082_ == 0)
{
lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; 
v___x_5083_ = l_Lake_Hash_hex(v_hash_5078_);
v___x_5084_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_5085_ = lean_string_append(v___x_5083_, v___x_5084_);
v___x_5086_ = lean_string_append(v___x_5085_, v_ext_5079_);
v___y_5036_ = v_action_5069_;
v___y_5037_ = v_buildTime_5072_;
v___y_5038_ = v_trace_5071_;
v___y_5039_ = v_wantsRebuild_5070_;
v___y_5040_ = v_a_5058_;
v___y_5041_ = v_val_5060_;
v___y_5042_ = v_log_5068_;
v___y_5043_ = v___x_5086_;
goto v___jp_5035_;
}
else
{
lean_object* v___x_5087_; 
v___x_5087_ = l_Lake_Hash_hex(v_hash_5078_);
v___y_5036_ = v_action_5069_;
v___y_5037_ = v_buildTime_5072_;
v___y_5038_ = v_trace_5071_;
v___y_5039_ = v_wantsRebuild_5070_;
v___y_5040_ = v_a_5058_;
v___y_5041_ = v_val_5060_;
v___y_5042_ = v_log_5068_;
v___y_5043_ = v___x_5087_;
goto v___jp_5035_;
}
}
else
{
lean_object* v_a_5088_; lean_object* v___x_5089_; uint8_t v___x_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5095_; 
lean_dec(v_val_5060_);
lean_dec_ref(v_a_5058_);
lean_dec_ref(v___x_4981_);
lean_dec_ref(v_file_4980_);
v_a_5088_ = lean_ctor_get(v___x_5076_, 0);
lean_inc(v_a_5088_);
lean_dec_ref(v___x_5076_);
v___x_5089_ = lean_io_error_to_string(v_a_5088_);
v___x_5090_ = 3;
v___x_5091_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5091_, 0, v___x_5089_);
lean_ctor_set_uint8(v___x_5091_, sizeof(void*)*1, v___x_5090_);
v___x_5092_ = lean_array_get_size(v_log_5068_);
v___x_5093_ = lean_array_push(v_log_5068_, v___x_5091_);
if (v_isShared_5075_ == 0)
{
lean_ctor_set(v___x_5074_, 0, v___x_5093_);
v___x_5095_ = v___x_5074_;
goto v_reusejp_5094_;
}
else
{
lean_object* v_reuseFailAlloc_5099_; 
v_reuseFailAlloc_5099_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5099_, 0, v___x_5093_);
lean_ctor_set(v_reuseFailAlloc_5099_, 1, v_trace_5071_);
lean_ctor_set(v_reuseFailAlloc_5099_, 2, v_buildTime_5072_);
lean_ctor_set_uint8(v_reuseFailAlloc_5099_, sizeof(void*)*3, v_action_5069_);
lean_ctor_set_uint8(v_reuseFailAlloc_5099_, sizeof(void*)*3 + 1, v_wantsRebuild_5070_);
v___x_5095_ = v_reuseFailAlloc_5099_;
goto v_reusejp_5094_;
}
v_reusejp_5094_:
{
lean_object* v___x_5097_; 
if (v_isShared_5067_ == 0)
{
lean_ctor_set_tag(v___x_5066_, 1);
lean_ctor_set(v___x_5066_, 1, v___x_5095_);
lean_ctor_set(v___x_5066_, 0, v___x_5092_);
v___x_5097_ = v___x_5066_;
goto v_reusejp_5096_;
}
else
{
lean_object* v_reuseFailAlloc_5098_; 
v_reuseFailAlloc_5098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5098_, 0, v___x_5092_);
lean_ctor_set(v_reuseFailAlloc_5098_, 1, v___x_5095_);
v___x_5097_ = v_reuseFailAlloc_5098_;
goto v_reusejp_5096_;
}
v_reusejp_5096_:
{
return v___x_5097_;
}
}
}
}
}
}
else
{
lean_object* v_a_5103_; 
lean_dec_ref(v___x_4981_);
v_a_5103_ = lean_ctor_get(v___x_5061_, 1);
lean_inc(v_a_5103_);
lean_dec_ref(v___x_5061_);
v___y_4996_ = v_a_5058_;
v___y_4997_ = v_val_5060_;
v___y_4998_ = v_a_5103_;
goto v___jp_4995_;
}
}
else
{
lean_object* v_a_5104_; lean_object* v_a_5105_; lean_object* v___x_5107_; uint8_t v_isShared_5108_; uint8_t v_isSharedCheck_5112_; 
lean_dec(v_val_5060_);
lean_dec_ref(v_a_5058_);
lean_dec_ref(v___x_4981_);
lean_dec_ref(v_file_4980_);
v_a_5104_ = lean_ctor_get(v___x_5061_, 0);
v_a_5105_ = lean_ctor_get(v___x_5061_, 1);
v_isSharedCheck_5112_ = !lean_is_exclusive(v___x_5061_);
if (v_isSharedCheck_5112_ == 0)
{
v___x_5107_ = v___x_5061_;
v_isShared_5108_ = v_isSharedCheck_5112_;
goto v_resetjp_5106_;
}
else
{
lean_inc(v_a_5105_);
lean_inc(v_a_5104_);
lean_dec(v___x_5061_);
v___x_5107_ = lean_box(0);
v_isShared_5108_ = v_isSharedCheck_5112_;
goto v_resetjp_5106_;
}
v_resetjp_5106_:
{
lean_object* v___x_5110_; 
if (v_isShared_5108_ == 0)
{
v___x_5110_ = v___x_5107_;
goto v_reusejp_5109_;
}
else
{
lean_object* v_reuseFailAlloc_5111_; 
v_reuseFailAlloc_5111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5111_, 0, v_a_5104_);
lean_ctor_set(v_reuseFailAlloc_5111_, 1, v_a_5105_);
v___x_5110_ = v_reuseFailAlloc_5111_;
goto v_reusejp_5109_;
}
v_reusejp_5109_:
{
return v___x_5110_;
}
}
}
}
else
{
lean_object* v_a_5113_; 
lean_dec(v_a_4982_);
lean_dec_ref(v___x_4981_);
lean_dec_ref(v_file_4980_);
v_a_5113_ = lean_ctor_get(v___y_5057_, 1);
lean_inc(v_a_5113_);
lean_dec_ref(v___y_5057_);
v_a_4992_ = v_a_5113_;
goto v___jp_4991_;
}
}
else
{
lean_dec(v_a_4982_);
lean_dec_ref(v___x_4981_);
lean_dec_ref(v_file_4980_);
return v___y_5057_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0___boxed(lean_object* v_exe_5120_, lean_object* v_hash_5121_, lean_object* v_val_5122_, lean_object* v_file_5123_, lean_object* v___x_5124_, lean_object* v_a_5125_, lean_object* v_restore_5126_, lean_object* v___y_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_){
_start:
{
uint8_t v_exe_boxed_5134_; uint64_t v_hash_boxed_5135_; uint8_t v_restore_boxed_5136_; lean_object* v_res_5137_; 
v_exe_boxed_5134_ = lean_unbox(v_exe_5120_);
v_hash_boxed_5135_ = lean_unbox_uint64(v_hash_5121_);
lean_dec_ref(v_hash_5121_);
v_restore_boxed_5136_ = lean_unbox(v_restore_5126_);
v_res_5137_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_exe_boxed_5134_, v_hash_boxed_5135_, v_val_5122_, v_file_5123_, v___x_5124_, v_a_5125_, v_restore_boxed_5136_, v___y_5127_, v___y_5128_, v___y_5129_, v___y_5130_, v___y_5131_, v___y_5132_);
return v_res_5137_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1(uint8_t v_a_5138_, lean_object* v_file_5139_, lean_object* v_ext_5140_, uint8_t v_text_5141_, uint8_t v_exe_5142_, uint8_t v___y_5143_, lean_object* v_val_5144_, uint64_t v_hash_5145_, lean_object* v_____r_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_){
_start:
{
uint8_t v___x_5154_; uint8_t v___x_5155_; 
v___x_5154_ = 1;
v___x_5155_ = l_Lake_instDecidableEqOutputStatus(v_a_5138_, v___x_5154_);
if (v___x_5155_ == 0)
{
lean_object* v_toContext_5156_; lean_object* v_log_5157_; uint8_t v_action_5158_; uint8_t v_wantsRebuild_5159_; lean_object* v_trace_5160_; lean_object* v_buildTime_5161_; lean_object* v_lakeCache_5162_; lean_object* v___x_5163_; 
v_toContext_5156_ = lean_ctor_get(v___y_5151_, 1);
lean_inc(v_toContext_5156_);
lean_dec_ref(v___y_5151_);
v_log_5157_ = lean_ctor_get(v___y_5152_, 0);
v_action_5158_ = lean_ctor_get_uint8(v___y_5152_, sizeof(void*)*3);
v_wantsRebuild_5159_ = lean_ctor_get_uint8(v___y_5152_, sizeof(void*)*3 + 1);
v_trace_5160_ = lean_ctor_get(v___y_5152_, 1);
v_buildTime_5161_ = lean_ctor_get(v___y_5152_, 2);
v_lakeCache_5162_ = lean_ctor_get(v_toContext_5156_, 3);
lean_inc_ref(v_lakeCache_5162_);
lean_dec(v_toContext_5156_);
lean_inc_ref(v_lakeCache_5162_);
v___x_5163_ = l_Lake_Cache_saveArtifact(v_lakeCache_5162_, v_file_5139_, v_ext_5140_, v_text_5141_, v_exe_5142_, v___y_5143_);
if (lean_obj_tag(v___x_5163_) == 0)
{
lean_object* v_a_5164_; lean_object* v___x_5166_; uint8_t v_isShared_5167_; uint8_t v_isSharedCheck_5205_; 
v_a_5164_ = lean_ctor_get(v___x_5163_, 0);
v_isSharedCheck_5205_ = !lean_is_exclusive(v___x_5163_);
if (v_isSharedCheck_5205_ == 0)
{
v___x_5166_ = v___x_5163_;
v_isShared_5167_ = v_isSharedCheck_5205_;
goto v_resetjp_5165_;
}
else
{
lean_inc(v_a_5164_);
lean_dec(v___x_5163_);
v___x_5166_ = lean_box(0);
v_isShared_5167_ = v_isSharedCheck_5205_;
goto v_resetjp_5165_;
}
v_resetjp_5165_:
{
lean_object* v_descr_5168_; uint64_t v_hash_5169_; lean_object* v_ext_5170_; lean_object* v___x_5171_; lean_object* v___y_5173_; lean_object* v___x_5197_; lean_object* v___x_5198_; uint8_t v___x_5199_; 
v_descr_5168_ = lean_ctor_get(v_a_5164_, 0);
v_hash_5169_ = lean_ctor_get_uint64(v_descr_5168_, sizeof(void*)*1);
v_ext_5170_ = lean_ctor_get(v_descr_5168_, 0);
v___x_5171_ = l_Lake_Package_cacheScope(v_val_5144_);
v___x_5197_ = lean_string_utf8_byte_size(v_ext_5170_);
v___x_5198_ = lean_unsigned_to_nat(0u);
v___x_5199_ = lean_nat_dec_eq(v___x_5197_, v___x_5198_);
if (v___x_5199_ == 0)
{
lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; 
v___x_5200_ = l_Lake_Hash_hex(v_hash_5169_);
v___x_5201_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_5202_ = lean_string_append(v___x_5200_, v___x_5201_);
v___x_5203_ = lean_string_append(v___x_5202_, v_ext_5170_);
v___y_5173_ = v___x_5203_;
goto v___jp_5172_;
}
else
{
lean_object* v___x_5204_; 
v___x_5204_ = l_Lake_Hash_hex(v_hash_5169_);
v___y_5173_ = v___x_5204_;
goto v___jp_5172_;
}
v___jp_5172_:
{
lean_object* v___x_5175_; 
if (v_isShared_5167_ == 0)
{
lean_ctor_set_tag(v___x_5166_, 3);
lean_ctor_set(v___x_5166_, 0, v___y_5173_);
v___x_5175_ = v___x_5166_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5196_; 
v_reuseFailAlloc_5196_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5196_, 0, v___y_5173_);
v___x_5175_ = v_reuseFailAlloc_5196_;
goto v_reusejp_5174_;
}
v_reusejp_5174_:
{
lean_object* v___x_5176_; lean_object* v___x_5177_; 
v___x_5176_ = lean_box(0);
v___x_5177_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_5162_, v___x_5171_, v_hash_5145_, v___x_5175_, v___x_5176_, v___x_5176_);
if (lean_obj_tag(v___x_5177_) == 0)
{
lean_object* v___x_5178_; 
lean_dec_ref(v___x_5177_);
v___x_5178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5178_, 0, v_a_5164_);
lean_ctor_set(v___x_5178_, 1, v___y_5152_);
return v___x_5178_;
}
else
{
lean_object* v___x_5180_; uint8_t v_isShared_5181_; uint8_t v_isSharedCheck_5192_; 
lean_inc(v_buildTime_5161_);
lean_inc_ref(v_trace_5160_);
lean_inc_ref(v_log_5157_);
lean_dec(v_a_5164_);
v_isSharedCheck_5192_ = !lean_is_exclusive(v___y_5152_);
if (v_isSharedCheck_5192_ == 0)
{
lean_object* v_unused_5193_; lean_object* v_unused_5194_; lean_object* v_unused_5195_; 
v_unused_5193_ = lean_ctor_get(v___y_5152_, 2);
lean_dec(v_unused_5193_);
v_unused_5194_ = lean_ctor_get(v___y_5152_, 1);
lean_dec(v_unused_5194_);
v_unused_5195_ = lean_ctor_get(v___y_5152_, 0);
lean_dec(v_unused_5195_);
v___x_5180_ = v___y_5152_;
v_isShared_5181_ = v_isSharedCheck_5192_;
goto v_resetjp_5179_;
}
else
{
lean_dec(v___y_5152_);
v___x_5180_ = lean_box(0);
v_isShared_5181_ = v_isSharedCheck_5192_;
goto v_resetjp_5179_;
}
v_resetjp_5179_:
{
lean_object* v_a_5182_; lean_object* v___x_5183_; uint8_t v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5189_; 
v_a_5182_ = lean_ctor_get(v___x_5177_, 0);
lean_inc(v_a_5182_);
lean_dec_ref(v___x_5177_);
v___x_5183_ = lean_io_error_to_string(v_a_5182_);
v___x_5184_ = 3;
v___x_5185_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5185_, 0, v___x_5183_);
lean_ctor_set_uint8(v___x_5185_, sizeof(void*)*1, v___x_5184_);
v___x_5186_ = lean_array_get_size(v_log_5157_);
v___x_5187_ = lean_array_push(v_log_5157_, v___x_5185_);
if (v_isShared_5181_ == 0)
{
lean_ctor_set(v___x_5180_, 0, v___x_5187_);
v___x_5189_ = v___x_5180_;
goto v_reusejp_5188_;
}
else
{
lean_object* v_reuseFailAlloc_5191_; 
v_reuseFailAlloc_5191_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5191_, 0, v___x_5187_);
lean_ctor_set(v_reuseFailAlloc_5191_, 1, v_trace_5160_);
lean_ctor_set(v_reuseFailAlloc_5191_, 2, v_buildTime_5161_);
lean_ctor_set_uint8(v_reuseFailAlloc_5191_, sizeof(void*)*3, v_action_5158_);
lean_ctor_set_uint8(v_reuseFailAlloc_5191_, sizeof(void*)*3 + 1, v_wantsRebuild_5159_);
v___x_5189_ = v_reuseFailAlloc_5191_;
goto v_reusejp_5188_;
}
v_reusejp_5188_:
{
lean_object* v___x_5190_; 
v___x_5190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5190_, 0, v___x_5186_);
lean_ctor_set(v___x_5190_, 1, v___x_5189_);
return v___x_5190_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5207_; uint8_t v_isShared_5208_; uint8_t v_isSharedCheck_5219_; 
lean_inc(v_buildTime_5161_);
lean_inc_ref(v_trace_5160_);
lean_inc_ref(v_log_5157_);
lean_dec_ref(v_lakeCache_5162_);
lean_dec_ref(v_val_5144_);
v_isSharedCheck_5219_ = !lean_is_exclusive(v___y_5152_);
if (v_isSharedCheck_5219_ == 0)
{
lean_object* v_unused_5220_; lean_object* v_unused_5221_; lean_object* v_unused_5222_; 
v_unused_5220_ = lean_ctor_get(v___y_5152_, 2);
lean_dec(v_unused_5220_);
v_unused_5221_ = lean_ctor_get(v___y_5152_, 1);
lean_dec(v_unused_5221_);
v_unused_5222_ = lean_ctor_get(v___y_5152_, 0);
lean_dec(v_unused_5222_);
v___x_5207_ = v___y_5152_;
v_isShared_5208_ = v_isSharedCheck_5219_;
goto v_resetjp_5206_;
}
else
{
lean_dec(v___y_5152_);
v___x_5207_ = lean_box(0);
v_isShared_5208_ = v_isSharedCheck_5219_;
goto v_resetjp_5206_;
}
v_resetjp_5206_:
{
lean_object* v_a_5209_; lean_object* v___x_5210_; uint8_t v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5216_; 
v_a_5209_ = lean_ctor_get(v___x_5163_, 0);
lean_inc(v_a_5209_);
lean_dec_ref(v___x_5163_);
v___x_5210_ = lean_io_error_to_string(v_a_5209_);
v___x_5211_ = 3;
v___x_5212_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5212_, 0, v___x_5210_);
lean_ctor_set_uint8(v___x_5212_, sizeof(void*)*1, v___x_5211_);
v___x_5213_ = lean_array_get_size(v_log_5157_);
v___x_5214_ = lean_array_push(v_log_5157_, v___x_5212_);
if (v_isShared_5208_ == 0)
{
lean_ctor_set(v___x_5207_, 0, v___x_5214_);
v___x_5216_ = v___x_5207_;
goto v_reusejp_5215_;
}
else
{
lean_object* v_reuseFailAlloc_5218_; 
v_reuseFailAlloc_5218_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5218_, 0, v___x_5214_);
lean_ctor_set(v_reuseFailAlloc_5218_, 1, v_trace_5160_);
lean_ctor_set(v_reuseFailAlloc_5218_, 2, v_buildTime_5161_);
lean_ctor_set_uint8(v_reuseFailAlloc_5218_, sizeof(void*)*3, v_action_5158_);
lean_ctor_set_uint8(v_reuseFailAlloc_5218_, sizeof(void*)*3 + 1, v_wantsRebuild_5159_);
v___x_5216_ = v_reuseFailAlloc_5218_;
goto v_reusejp_5215_;
}
v_reusejp_5215_:
{
lean_object* v___x_5217_; 
v___x_5217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5217_, 0, v___x_5213_);
lean_ctor_set(v___x_5217_, 1, v___x_5216_);
return v___x_5217_;
}
}
}
}
else
{
lean_object* v___x_5223_; 
lean_dec_ref(v_val_5144_);
v___x_5223_ = l_Lake_computeArtifact___redArg(v_file_5139_, v_ext_5140_, v_text_5141_, v___y_5151_, v___y_5152_);
lean_dec_ref(v___y_5151_);
return v___x_5223_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1___boxed(lean_object* v_a_5224_, lean_object* v_file_5225_, lean_object* v_ext_5226_, lean_object* v_text_5227_, lean_object* v_exe_5228_, lean_object* v___y_5229_, lean_object* v_val_5230_, lean_object* v_hash_5231_, lean_object* v_____r_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_, lean_object* v___y_5235_, lean_object* v___y_5236_, lean_object* v___y_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_){
_start:
{
uint8_t v_a_320502__boxed_5240_; uint8_t v_text_boxed_5241_; uint8_t v_exe_boxed_5242_; uint8_t v___y_320503__boxed_5243_; uint64_t v_hash_boxed_5244_; lean_object* v_res_5245_; 
v_a_320502__boxed_5240_ = lean_unbox(v_a_5224_);
v_text_boxed_5241_ = lean_unbox(v_text_5227_);
v_exe_boxed_5242_ = lean_unbox(v_exe_5228_);
v___y_320503__boxed_5243_ = lean_unbox(v___y_5229_);
v_hash_boxed_5244_ = lean_unbox_uint64(v_hash_5231_);
lean_dec_ref(v_hash_5231_);
v_res_5245_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v_a_320502__boxed_5240_, v_file_5225_, v_ext_5226_, v_text_boxed_5241_, v_exe_boxed_5242_, v___y_320503__boxed_5243_, v_val_5230_, v_hash_boxed_5244_, v_____r_5232_, v___y_5233_, v___y_5234_, v___y_5235_, v___y_5236_, v___y_5237_, v___y_5238_);
lean_dec(v___y_5236_);
lean_dec(v___y_5235_);
lean_dec(v___y_5234_);
lean_dec_ref(v___y_5233_);
return v_res_5245_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate(lean_object* v_file_5246_, lean_object* v_build_5247_, uint8_t v_text_5248_, lean_object* v_ext_5249_, uint8_t v_restore_5250_, uint8_t v_exe_5251_, uint8_t v_platformIndependent_5252_, lean_object* v_a_5253_, lean_object* v_a_5254_, lean_object* v_a_5255_, lean_object* v_a_5256_, lean_object* v_a_5257_, lean_object* v_a_5258_){
_start:
{
lean_object* v_log_5260_; uint8_t v_action_5261_; uint8_t v_wantsRebuild_5262_; lean_object* v_trace_5263_; lean_object* v_buildTime_5264_; lean_object* v___x_5266_; uint8_t v_isShared_5267_; uint8_t v_isSharedCheck_5513_; 
v_log_5260_ = lean_ctor_get(v_a_5258_, 0);
v_action_5261_ = lean_ctor_get_uint8(v_a_5258_, sizeof(void*)*3);
v_wantsRebuild_5262_ = lean_ctor_get_uint8(v_a_5258_, sizeof(void*)*3 + 1);
v_trace_5263_ = lean_ctor_get(v_a_5258_, 1);
v_buildTime_5264_ = lean_ctor_get(v_a_5258_, 2);
v_isSharedCheck_5513_ = !lean_is_exclusive(v_a_5258_);
if (v_isSharedCheck_5513_ == 0)
{
v___x_5266_ = v_a_5258_;
v_isShared_5267_ = v_isSharedCheck_5513_;
goto v_resetjp_5265_;
}
else
{
lean_inc(v_buildTime_5264_);
lean_inc(v_trace_5263_);
lean_inc(v_log_5260_);
lean_dec(v_a_5258_);
v___x_5266_ = lean_box(0);
v_isShared_5267_ = v_isSharedCheck_5513_;
goto v_resetjp_5265_;
}
v_resetjp_5265_:
{
lean_object* v___x_5268_; lean_object* v___x_5269_; lean_object* v_art_5271_; lean_object* v___y_5272_; lean_object* v___y_5288_; lean_object* v_log_5289_; uint8_t v_action_5290_; uint8_t v_wantsRebuild_5291_; lean_object* v_buildTime_5292_; lean_object* v___x_5298_; 
v___x_5268_ = ((lean_object*)(l_Lake_buildFileUnlessUpToDate_x27___closed__0));
lean_inc_ref(v_file_5246_);
v___x_5269_ = lean_string_append(v_file_5246_, v___x_5268_);
lean_inc_ref(v___x_5269_);
v___x_5298_ = l_Lake_readTraceFile(v___x_5269_, v_log_5260_);
if (lean_obj_tag(v___x_5298_) == 0)
{
if (lean_obj_tag(v_a_5254_) == 1)
{
lean_object* v_a_5299_; lean_object* v_a_5300_; lean_object* v_val_5301_; uint64_t v_hash_5302_; lean_object* v_mtime_5303_; uint8_t v___y_5305_; lean_object* v___y_5306_; uint8_t v___y_5307_; lean_object* v___y_5308_; lean_object* v___y_5309_; lean_object* v___y_5310_; lean_object* v___y_5311_; lean_object* v___y_5312_; lean_object* v___y_5313_; lean_object* v_wsIdx_5317_; lean_object* v_config_5318_; lean_object* v_a_5320_; lean_object* v_a_5321_; lean_object* v___y_5351_; lean_object* v_enableArtifactCache_x3f_5354_; lean_object* v_restoreAllArtifacts_x3f_5355_; uint8_t v___y_5357_; lean_object* v_a_5358_; uint8_t v___y_5375_; uint8_t v_a_5376_; lean_object* v_a_5377_; lean_object* v_a_5380_; lean_object* v___y_5410_; uint8_t v___y_5411_; uint8_t v___y_5450_; uint8_t v_a_5451_; lean_object* v_a_5452_; uint8_t v_a_5454_; lean_object* v_a_5455_; lean_object* v___x_5465_; 
v_a_5299_ = lean_ctor_get(v___x_5298_, 0);
lean_inc(v_a_5299_);
v_a_5300_ = lean_ctor_get(v___x_5298_, 1);
lean_inc(v_a_5300_);
lean_dec_ref(v___x_5298_);
v_val_5301_ = lean_ctor_get(v_a_5254_, 0);
v_hash_5302_ = lean_ctor_get_uint64(v_trace_5263_, sizeof(void*)*3);
v_mtime_5303_ = lean_ctor_get(v_trace_5263_, 2);
v_wsIdx_5317_ = lean_ctor_get(v_val_5301_, 0);
lean_inc(v_wsIdx_5317_);
v_config_5318_ = lean_ctor_get(v_val_5301_, 6);
v_enableArtifactCache_x3f_5354_ = lean_ctor_get(v_config_5318_, 24);
v_restoreAllArtifacts_x3f_5355_ = lean_ctor_get(v_config_5318_, 25);
lean_inc_ref(v_trace_5263_);
v___x_5465_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5465_, 0, v_a_5300_);
lean_ctor_set(v___x_5465_, 1, v_trace_5263_);
lean_ctor_set(v___x_5465_, 2, v_buildTime_5264_);
lean_ctor_set_uint8(v___x_5465_, sizeof(void*)*3, v_action_5261_);
lean_ctor_set_uint8(v___x_5465_, sizeof(void*)*3 + 1, v_wantsRebuild_5262_);
if (lean_obj_tag(v_enableArtifactCache_x3f_5354_) == 0)
{
lean_object* v_toContext_5466_; lean_object* v_lakeEnv_5467_; lean_object* v_enableArtifactCache_x3f_5468_; 
v_toContext_5466_ = lean_ctor_get(v_a_5257_, 1);
v_lakeEnv_5467_ = lean_ctor_get(v_toContext_5466_, 1);
v_enableArtifactCache_x3f_5468_ = lean_ctor_get(v_lakeEnv_5467_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_5468_) == 0)
{
lean_object* v_root_5469_; lean_object* v_config_5470_; lean_object* v_enableArtifactCache_x3f_5471_; 
v_root_5469_ = lean_ctor_get(v_toContext_5466_, 0);
v_config_5470_ = lean_ctor_get(v_root_5469_, 6);
v_enableArtifactCache_x3f_5471_ = lean_ctor_get(v_config_5470_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_5471_) == 0)
{
v_a_5380_ = v___x_5465_;
goto v___jp_5379_;
}
else
{
lean_object* v_val_5472_; uint8_t v___x_5473_; 
v_val_5472_ = lean_ctor_get(v_enableArtifactCache_x3f_5471_, 0);
v___x_5473_ = lean_unbox(v_val_5472_);
v_a_5454_ = v___x_5473_;
v_a_5455_ = v___x_5465_;
goto v___jp_5453_;
}
}
else
{
lean_object* v_val_5474_; uint8_t v___x_5475_; 
v_val_5474_ = lean_ctor_get(v_enableArtifactCache_x3f_5468_, 0);
v___x_5475_ = lean_unbox(v_val_5474_);
v_a_5454_ = v___x_5475_;
v_a_5455_ = v___x_5465_;
goto v___jp_5453_;
}
}
else
{
lean_object* v_val_5476_; uint8_t v___x_5477_; 
v_val_5476_ = lean_ctor_get(v_enableArtifactCache_x3f_5354_, 0);
v___x_5477_ = lean_unbox(v_val_5476_);
v_a_5454_ = v___x_5477_;
v_a_5455_ = v___x_5465_;
goto v___jp_5453_;
}
v___jp_5304_:
{
lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; 
lean_dec_ref(v___y_5306_);
v___x_5314_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5314_, 0, v___y_5313_);
v___x_5315_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_hash_5302_, v___x_5314_, v___y_5308_, v_platformIndependent_5252_);
v___x_5316_ = lean_st_ref_set(v___y_5309_, v___x_5315_);
lean_dec(v___y_5309_);
v___y_5288_ = v___y_5311_;
v_log_5289_ = v___y_5312_;
v_action_5290_ = v___y_5305_;
v_wantsRebuild_5291_ = v___y_5307_;
v_buildTime_5292_ = v___y_5310_;
goto v___jp_5287_;
}
v___jp_5319_:
{
lean_object* v___x_5322_; uint8_t v___x_5323_; 
v___x_5322_ = lean_unsigned_to_nat(0u);
v___x_5323_ = lean_nat_dec_eq(v_wsIdx_5317_, v___x_5322_);
lean_dec(v_wsIdx_5317_);
if (v___x_5323_ == 0)
{
lean_object* v_log_5324_; uint8_t v_action_5325_; uint8_t v_wantsRebuild_5326_; lean_object* v_buildTime_5327_; 
lean_dec_ref(v_a_5257_);
v_log_5324_ = lean_ctor_get(v_a_5321_, 0);
lean_inc_ref(v_log_5324_);
v_action_5325_ = lean_ctor_get_uint8(v_a_5321_, sizeof(void*)*3);
v_wantsRebuild_5326_ = lean_ctor_get_uint8(v_a_5321_, sizeof(void*)*3 + 1);
v_buildTime_5327_ = lean_ctor_get(v_a_5321_, 2);
lean_inc(v_buildTime_5327_);
lean_dec_ref(v_a_5321_);
v___y_5288_ = v_a_5320_;
v_log_5289_ = v_log_5324_;
v_action_5290_ = v_action_5325_;
v_wantsRebuild_5291_ = v_wantsRebuild_5326_;
v_buildTime_5292_ = v_buildTime_5327_;
goto v___jp_5287_;
}
else
{
lean_object* v_outputsRef_x3f_5328_; 
v_outputsRef_x3f_5328_ = lean_ctor_get(v_a_5257_, 4);
lean_inc(v_outputsRef_x3f_5328_);
lean_dec_ref(v_a_5257_);
if (lean_obj_tag(v_outputsRef_x3f_5328_) == 1)
{
lean_object* v_log_5329_; uint8_t v_action_5330_; uint8_t v_wantsRebuild_5331_; lean_object* v_trace_5332_; lean_object* v_buildTime_5333_; lean_object* v_val_5334_; lean_object* v___x_5335_; lean_object* v_descr_5336_; uint64_t v_hash_5337_; lean_object* v_ext_5338_; lean_object* v___x_5339_; uint8_t v___x_5340_; 
v_log_5329_ = lean_ctor_get(v_a_5321_, 0);
lean_inc_ref(v_log_5329_);
v_action_5330_ = lean_ctor_get_uint8(v_a_5321_, sizeof(void*)*3);
v_wantsRebuild_5331_ = lean_ctor_get_uint8(v_a_5321_, sizeof(void*)*3 + 1);
v_trace_5332_ = lean_ctor_get(v_a_5321_, 1);
lean_inc_ref(v_trace_5332_);
v_buildTime_5333_ = lean_ctor_get(v_a_5321_, 2);
lean_inc(v_buildTime_5333_);
lean_dec_ref(v_a_5321_);
v_val_5334_ = lean_ctor_get(v_outputsRef_x3f_5328_, 0);
lean_inc(v_val_5334_);
lean_dec_ref(v_outputsRef_x3f_5328_);
v___x_5335_ = lean_st_ref_take(v_val_5334_);
v_descr_5336_ = lean_ctor_get(v_a_5320_, 0);
v_hash_5337_ = lean_ctor_get_uint64(v_descr_5336_, sizeof(void*)*1);
v_ext_5338_ = lean_ctor_get(v_descr_5336_, 0);
v___x_5339_ = lean_string_utf8_byte_size(v_ext_5338_);
v___x_5340_ = lean_nat_dec_eq(v___x_5339_, v___x_5322_);
if (v___x_5340_ == 0)
{
lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; 
v___x_5341_ = l_Lake_Hash_hex(v_hash_5337_);
v___x_5342_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_5343_ = lean_string_append(v___x_5341_, v___x_5342_);
v___x_5344_ = lean_string_append(v___x_5343_, v_ext_5338_);
v___y_5305_ = v_action_5330_;
v___y_5306_ = v_trace_5332_;
v___y_5307_ = v_wantsRebuild_5331_;
v___y_5308_ = v___x_5335_;
v___y_5309_ = v_val_5334_;
v___y_5310_ = v_buildTime_5333_;
v___y_5311_ = v_a_5320_;
v___y_5312_ = v_log_5329_;
v___y_5313_ = v___x_5344_;
goto v___jp_5304_;
}
else
{
lean_object* v___x_5345_; 
v___x_5345_ = l_Lake_Hash_hex(v_hash_5337_);
v___y_5305_ = v_action_5330_;
v___y_5306_ = v_trace_5332_;
v___y_5307_ = v_wantsRebuild_5331_;
v___y_5308_ = v___x_5335_;
v___y_5309_ = v_val_5334_;
v___y_5310_ = v_buildTime_5333_;
v___y_5311_ = v_a_5320_;
v___y_5312_ = v_log_5329_;
v___y_5313_ = v___x_5345_;
goto v___jp_5304_;
}
}
else
{
lean_object* v_log_5346_; uint8_t v_action_5347_; uint8_t v_wantsRebuild_5348_; lean_object* v_buildTime_5349_; 
lean_dec(v_outputsRef_x3f_5328_);
v_log_5346_ = lean_ctor_get(v_a_5321_, 0);
lean_inc_ref(v_log_5346_);
v_action_5347_ = lean_ctor_get_uint8(v_a_5321_, sizeof(void*)*3);
v_wantsRebuild_5348_ = lean_ctor_get_uint8(v_a_5321_, sizeof(void*)*3 + 1);
v_buildTime_5349_ = lean_ctor_get(v_a_5321_, 2);
lean_inc(v_buildTime_5349_);
lean_dec_ref(v_a_5321_);
v___y_5288_ = v_a_5320_;
v_log_5289_ = v_log_5346_;
v_action_5290_ = v_action_5347_;
v_wantsRebuild_5291_ = v_wantsRebuild_5348_;
v_buildTime_5292_ = v_buildTime_5349_;
goto v___jp_5287_;
}
}
}
v___jp_5350_:
{
if (lean_obj_tag(v___y_5351_) == 0)
{
lean_object* v_a_5352_; lean_object* v_a_5353_; 
v_a_5352_ = lean_ctor_get(v___y_5351_, 0);
lean_inc(v_a_5352_);
v_a_5353_ = lean_ctor_get(v___y_5351_, 1);
lean_inc(v_a_5353_);
lean_dec_ref(v___y_5351_);
v_a_5320_ = v_a_5352_;
v_a_5321_ = v_a_5353_;
goto v___jp_5319_;
}
else
{
lean_dec(v_wsIdx_5317_);
lean_dec_ref(v___x_5269_);
lean_del_object(v___x_5266_);
lean_dec_ref(v_a_5257_);
return v___y_5351_;
}
}
v___jp_5356_:
{
lean_object* v___x_5359_; 
lean_inc_ref(v_a_5257_);
lean_inc(v_a_5256_);
lean_inc(v_a_5255_);
lean_inc_ref(v_a_5254_);
lean_inc_ref(v_a_5253_);
lean_inc_ref(v___x_5269_);
lean_inc_ref(v_file_5246_);
lean_inc(v_val_5301_);
v___x_5359_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_exe_5251_, v_hash_5302_, v_val_5301_, v_file_5246_, v___x_5269_, v_a_5299_, v___y_5357_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v_a_5358_);
if (lean_obj_tag(v___x_5359_) == 0)
{
lean_object* v_a_5360_; 
v_a_5360_ = lean_ctor_get(v___x_5359_, 0);
lean_inc(v_a_5360_);
if (lean_obj_tag(v_a_5360_) == 1)
{
lean_object* v_a_5361_; lean_object* v_val_5362_; 
lean_dec_ref(v_a_5254_);
lean_dec_ref(v_trace_5263_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec_ref(v_a_5253_);
lean_dec_ref(v_ext_5249_);
lean_dec_ref(v_build_5247_);
lean_dec_ref(v_file_5246_);
v_a_5361_ = lean_ctor_get(v___x_5359_, 1);
lean_inc(v_a_5361_);
lean_dec_ref(v___x_5359_);
v_val_5362_ = lean_ctor_get(v_a_5360_, 0);
lean_inc(v_val_5362_);
lean_dec_ref(v_a_5360_);
v_a_5320_ = v_val_5362_;
v_a_5321_ = v_a_5361_;
goto v___jp_5319_;
}
else
{
lean_object* v_a_5363_; lean_object* v___x_5364_; 
lean_dec(v_a_5360_);
v_a_5363_ = lean_ctor_get(v___x_5359_, 1);
lean_inc(v_a_5363_);
lean_dec_ref(v___x_5359_);
lean_inc_ref(v_a_5257_);
lean_inc_ref(v___x_5269_);
v___x_5364_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5246_, v_build_5247_, v_text_5248_, v_ext_5249_, v_trace_5263_, v___x_5269_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v_a_5363_);
lean_dec_ref(v_trace_5263_);
v___y_5351_ = v___x_5364_;
goto v___jp_5350_;
}
}
else
{
lean_object* v_a_5365_; lean_object* v_a_5366_; lean_object* v___x_5368_; uint8_t v_isShared_5369_; uint8_t v_isSharedCheck_5373_; 
lean_dec(v_wsIdx_5317_);
lean_dec_ref(v_a_5254_);
lean_dec_ref(v___x_5269_);
lean_del_object(v___x_5266_);
lean_dec_ref(v_trace_5263_);
lean_dec_ref(v_a_5257_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec_ref(v_a_5253_);
lean_dec_ref(v_ext_5249_);
lean_dec_ref(v_build_5247_);
lean_dec_ref(v_file_5246_);
v_a_5365_ = lean_ctor_get(v___x_5359_, 0);
v_a_5366_ = lean_ctor_get(v___x_5359_, 1);
v_isSharedCheck_5373_ = !lean_is_exclusive(v___x_5359_);
if (v_isSharedCheck_5373_ == 0)
{
v___x_5368_ = v___x_5359_;
v_isShared_5369_ = v_isSharedCheck_5373_;
goto v_resetjp_5367_;
}
else
{
lean_inc(v_a_5366_);
lean_inc(v_a_5365_);
lean_dec(v___x_5359_);
v___x_5368_ = lean_box(0);
v_isShared_5369_ = v_isSharedCheck_5373_;
goto v_resetjp_5367_;
}
v_resetjp_5367_:
{
lean_object* v___x_5371_; 
if (v_isShared_5369_ == 0)
{
v___x_5371_ = v___x_5368_;
goto v_reusejp_5370_;
}
else
{
lean_object* v_reuseFailAlloc_5372_; 
v_reuseFailAlloc_5372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5372_, 0, v_a_5365_);
lean_ctor_set(v_reuseFailAlloc_5372_, 1, v_a_5366_);
v___x_5371_ = v_reuseFailAlloc_5372_;
goto v_reusejp_5370_;
}
v_reusejp_5370_:
{
return v___x_5371_;
}
}
}
}
v___jp_5374_:
{
if (v_a_5376_ == 0)
{
lean_object* v___x_5378_; 
lean_dec(v_a_5299_);
lean_inc_ref(v_a_5257_);
lean_inc_ref(v___x_5269_);
v___x_5378_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5246_, v_build_5247_, v_text_5248_, v_ext_5249_, v_trace_5263_, v___x_5269_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v_a_5377_);
lean_dec_ref(v_trace_5263_);
v___y_5351_ = v___x_5378_;
goto v___jp_5350_;
}
else
{
v___y_5357_ = v___y_5375_;
v_a_5358_ = v_a_5377_;
goto v___jp_5356_;
}
}
v___jp_5379_:
{
lean_object* v___x_5381_; 
lean_inc(v_a_5299_);
v___x_5381_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_5253_, v_file_5246_, v_trace_5263_, v_a_5299_, v_mtime_5303_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v_a_5380_);
if (lean_obj_tag(v___x_5381_) == 0)
{
lean_object* v_a_5382_; lean_object* v_a_5383_; uint8_t v___x_5384_; uint8_t v___x_5385_; uint8_t v___x_5386_; 
v_a_5382_ = lean_ctor_get(v___x_5381_, 0);
lean_inc(v_a_5382_);
v_a_5383_ = lean_ctor_get(v___x_5381_, 1);
lean_inc(v_a_5383_);
lean_dec_ref(v___x_5381_);
v___x_5384_ = 0;
v___x_5385_ = lean_unbox(v_a_5382_);
lean_dec(v_a_5382_);
v___x_5386_ = l_Lake_instDecidableEqOutputStatus(v___x_5385_, v___x_5384_);
if (v___x_5386_ == 0)
{
lean_object* v___x_5387_; 
lean_dec(v_a_5299_);
lean_dec_ref(v_a_5254_);
lean_dec_ref(v_trace_5263_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec_ref(v_a_5253_);
lean_dec_ref(v_build_5247_);
v___x_5387_ = l_Lake_computeArtifact___redArg(v_file_5246_, v_ext_5249_, v_text_5248_, v_a_5257_, v_a_5383_);
v___y_5351_ = v___x_5387_;
goto v___jp_5350_;
}
else
{
if (lean_obj_tag(v_enableArtifactCache_x3f_5354_) == 0)
{
lean_object* v_toContext_5388_; lean_object* v_lakeEnv_5389_; lean_object* v_enableArtifactCache_x3f_5390_; 
v_toContext_5388_ = lean_ctor_get(v_a_5257_, 1);
v_lakeEnv_5389_ = lean_ctor_get(v_toContext_5388_, 1);
v_enableArtifactCache_x3f_5390_ = lean_ctor_get(v_lakeEnv_5389_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_5390_) == 0)
{
lean_object* v_root_5391_; lean_object* v_config_5392_; lean_object* v_enableArtifactCache_x3f_5393_; 
v_root_5391_ = lean_ctor_get(v_toContext_5388_, 0);
v_config_5392_ = lean_ctor_get(v_root_5391_, 6);
v_enableArtifactCache_x3f_5393_ = lean_ctor_get(v_config_5392_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_5393_) == 0)
{
v___y_5357_ = v___x_5386_;
v_a_5358_ = v_a_5383_;
goto v___jp_5356_;
}
else
{
lean_object* v_val_5394_; uint8_t v___x_5395_; 
v_val_5394_ = lean_ctor_get(v_enableArtifactCache_x3f_5393_, 0);
v___x_5395_ = lean_unbox(v_val_5394_);
v___y_5375_ = v___x_5386_;
v_a_5376_ = v___x_5395_;
v_a_5377_ = v_a_5383_;
goto v___jp_5374_;
}
}
else
{
lean_object* v_val_5396_; uint8_t v___x_5397_; 
v_val_5396_ = lean_ctor_get(v_enableArtifactCache_x3f_5390_, 0);
v___x_5397_ = lean_unbox(v_val_5396_);
v___y_5375_ = v___x_5386_;
v_a_5376_ = v___x_5397_;
v_a_5377_ = v_a_5383_;
goto v___jp_5374_;
}
}
else
{
lean_object* v_val_5398_; uint8_t v___x_5399_; 
v_val_5398_ = lean_ctor_get(v_enableArtifactCache_x3f_5354_, 0);
v___x_5399_ = lean_unbox(v_val_5398_);
v___y_5375_ = v___x_5386_;
v_a_5376_ = v___x_5399_;
v_a_5377_ = v_a_5383_;
goto v___jp_5374_;
}
}
}
else
{
lean_object* v_a_5400_; lean_object* v_a_5401_; lean_object* v___x_5403_; uint8_t v_isShared_5404_; uint8_t v_isSharedCheck_5408_; 
lean_dec(v_wsIdx_5317_);
lean_dec_ref(v_a_5254_);
lean_dec(v_a_5299_);
lean_dec_ref(v___x_5269_);
lean_del_object(v___x_5266_);
lean_dec_ref(v_trace_5263_);
lean_dec_ref(v_a_5257_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec_ref(v_a_5253_);
lean_dec_ref(v_ext_5249_);
lean_dec_ref(v_build_5247_);
lean_dec_ref(v_file_5246_);
v_a_5400_ = lean_ctor_get(v___x_5381_, 0);
v_a_5401_ = lean_ctor_get(v___x_5381_, 1);
v_isSharedCheck_5408_ = !lean_is_exclusive(v___x_5381_);
if (v_isSharedCheck_5408_ == 0)
{
v___x_5403_ = v___x_5381_;
v_isShared_5404_ = v_isSharedCheck_5408_;
goto v_resetjp_5402_;
}
else
{
lean_inc(v_a_5401_);
lean_inc(v_a_5400_);
lean_dec(v___x_5381_);
v___x_5403_ = lean_box(0);
v_isShared_5404_ = v_isSharedCheck_5408_;
goto v_resetjp_5402_;
}
v_resetjp_5402_:
{
lean_object* v___x_5406_; 
if (v_isShared_5404_ == 0)
{
v___x_5406_ = v___x_5403_;
goto v_reusejp_5405_;
}
else
{
lean_object* v_reuseFailAlloc_5407_; 
v_reuseFailAlloc_5407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5407_, 0, v_a_5400_);
lean_ctor_set(v_reuseFailAlloc_5407_, 1, v_a_5401_);
v___x_5406_ = v_reuseFailAlloc_5407_;
goto v_reusejp_5405_;
}
v_reusejp_5405_:
{
return v___x_5406_;
}
}
}
}
v___jp_5409_:
{
lean_object* v___x_5412_; 
lean_inc_ref(v_a_5257_);
lean_inc(v_a_5256_);
lean_inc(v_a_5255_);
lean_inc_ref(v_a_5254_);
lean_inc_ref(v_a_5253_);
lean_inc(v_a_5299_);
lean_inc_ref(v___x_5269_);
lean_inc_ref(v_file_5246_);
lean_inc(v_val_5301_);
v___x_5412_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_exe_5251_, v_hash_5302_, v_val_5301_, v_file_5246_, v___x_5269_, v_a_5299_, v___y_5411_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v___y_5410_);
if (lean_obj_tag(v___x_5412_) == 0)
{
lean_object* v_a_5413_; 
v_a_5413_ = lean_ctor_get(v___x_5412_, 0);
lean_inc(v_a_5413_);
if (lean_obj_tag(v_a_5413_) == 1)
{
lean_object* v_a_5414_; lean_object* v_val_5415_; 
lean_dec(v_val_5301_);
lean_dec_ref(v_a_5254_);
lean_dec(v_a_5299_);
lean_dec_ref(v_trace_5263_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec_ref(v_a_5253_);
lean_dec_ref(v_ext_5249_);
lean_dec_ref(v_build_5247_);
lean_dec_ref(v_file_5246_);
v_a_5414_ = lean_ctor_get(v___x_5412_, 1);
lean_inc(v_a_5414_);
lean_dec_ref(v___x_5412_);
v_val_5415_ = lean_ctor_get(v_a_5413_, 0);
lean_inc(v_val_5415_);
lean_dec_ref(v_a_5413_);
v_a_5320_ = v_val_5415_;
v_a_5321_ = v_a_5414_;
goto v___jp_5319_;
}
else
{
lean_object* v_a_5416_; lean_object* v___x_5417_; 
lean_dec(v_a_5413_);
v_a_5416_ = lean_ctor_get(v___x_5412_, 1);
lean_inc(v_a_5416_);
lean_dec_ref(v___x_5412_);
v___x_5417_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_5253_, v_file_5246_, v_trace_5263_, v_a_5299_, v_mtime_5303_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v_a_5416_);
if (lean_obj_tag(v___x_5417_) == 0)
{
lean_object* v_a_5418_; lean_object* v_a_5419_; uint8_t v___x_5420_; uint8_t v___x_5421_; uint8_t v___x_5422_; 
v_a_5418_ = lean_ctor_get(v___x_5417_, 0);
lean_inc(v_a_5418_);
v_a_5419_ = lean_ctor_get(v___x_5417_, 1);
lean_inc(v_a_5419_);
lean_dec_ref(v___x_5417_);
v___x_5420_ = 0;
v___x_5421_ = lean_unbox(v_a_5418_);
v___x_5422_ = l_Lake_instDecidableEqOutputStatus(v___x_5421_, v___x_5420_);
if (v___x_5422_ == 0)
{
lean_object* v___x_5423_; uint8_t v___x_5424_; lean_object* v___x_5425_; 
lean_dec_ref(v_trace_5263_);
lean_dec_ref(v_build_5247_);
v___x_5423_ = lean_box(0);
v___x_5424_ = lean_unbox(v_a_5418_);
lean_dec(v_a_5418_);
lean_inc_ref(v_a_5257_);
v___x_5425_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v___x_5424_, v_file_5246_, v_ext_5249_, v_text_5248_, v_exe_5251_, v___y_5411_, v_val_5301_, v_hash_5302_, v___x_5423_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v_a_5419_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec_ref(v_a_5254_);
lean_dec_ref(v_a_5253_);
v___y_5351_ = v___x_5425_;
goto v___jp_5350_;
}
else
{
lean_object* v___x_5426_; 
lean_inc_ref(v_a_5257_);
lean_inc(v_a_5256_);
lean_inc(v_a_5255_);
lean_inc_ref(v_a_5254_);
lean_inc_ref(v_a_5253_);
lean_inc_ref(v___x_5269_);
lean_inc_ref(v_ext_5249_);
lean_inc_ref(v_file_5246_);
v___x_5426_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5246_, v_build_5247_, v_text_5248_, v_ext_5249_, v_trace_5263_, v___x_5269_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v_a_5419_);
lean_dec_ref(v_trace_5263_);
if (lean_obj_tag(v___x_5426_) == 0)
{
lean_object* v_a_5427_; lean_object* v___x_5428_; uint8_t v___x_5429_; lean_object* v___x_5430_; 
v_a_5427_ = lean_ctor_get(v___x_5426_, 1);
lean_inc(v_a_5427_);
lean_dec_ref(v___x_5426_);
v___x_5428_ = lean_box(0);
v___x_5429_ = lean_unbox(v_a_5418_);
lean_dec(v_a_5418_);
lean_inc_ref(v_a_5257_);
v___x_5430_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v___x_5429_, v_file_5246_, v_ext_5249_, v_text_5248_, v_exe_5251_, v___y_5411_, v_val_5301_, v_hash_5302_, v___x_5428_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v_a_5427_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec_ref(v_a_5254_);
lean_dec_ref(v_a_5253_);
v___y_5351_ = v___x_5430_;
goto v___jp_5350_;
}
else
{
lean_dec(v_a_5418_);
lean_dec(v_wsIdx_5317_);
lean_dec(v_val_5301_);
lean_dec_ref(v_a_5254_);
lean_dec_ref(v___x_5269_);
lean_del_object(v___x_5266_);
lean_dec_ref(v_a_5257_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec_ref(v_a_5253_);
lean_dec_ref(v_ext_5249_);
lean_dec_ref(v_file_5246_);
return v___x_5426_;
}
}
}
else
{
lean_object* v_a_5431_; lean_object* v_a_5432_; lean_object* v___x_5434_; uint8_t v_isShared_5435_; uint8_t v_isSharedCheck_5439_; 
lean_dec(v_wsIdx_5317_);
lean_dec(v_val_5301_);
lean_dec_ref(v_a_5254_);
lean_dec_ref(v___x_5269_);
lean_del_object(v___x_5266_);
lean_dec_ref(v_trace_5263_);
lean_dec_ref(v_a_5257_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec_ref(v_a_5253_);
lean_dec_ref(v_ext_5249_);
lean_dec_ref(v_build_5247_);
lean_dec_ref(v_file_5246_);
v_a_5431_ = lean_ctor_get(v___x_5417_, 0);
v_a_5432_ = lean_ctor_get(v___x_5417_, 1);
v_isSharedCheck_5439_ = !lean_is_exclusive(v___x_5417_);
if (v_isSharedCheck_5439_ == 0)
{
v___x_5434_ = v___x_5417_;
v_isShared_5435_ = v_isSharedCheck_5439_;
goto v_resetjp_5433_;
}
else
{
lean_inc(v_a_5432_);
lean_inc(v_a_5431_);
lean_dec(v___x_5417_);
v___x_5434_ = lean_box(0);
v_isShared_5435_ = v_isSharedCheck_5439_;
goto v_resetjp_5433_;
}
v_resetjp_5433_:
{
lean_object* v___x_5437_; 
if (v_isShared_5435_ == 0)
{
v___x_5437_ = v___x_5434_;
goto v_reusejp_5436_;
}
else
{
lean_object* v_reuseFailAlloc_5438_; 
v_reuseFailAlloc_5438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5438_, 0, v_a_5431_);
lean_ctor_set(v_reuseFailAlloc_5438_, 1, v_a_5432_);
v___x_5437_ = v_reuseFailAlloc_5438_;
goto v_reusejp_5436_;
}
v_reusejp_5436_:
{
return v___x_5437_;
}
}
}
}
}
else
{
lean_object* v_a_5440_; lean_object* v_a_5441_; lean_object* v___x_5443_; uint8_t v_isShared_5444_; uint8_t v_isSharedCheck_5448_; 
lean_dec(v_wsIdx_5317_);
lean_dec(v_val_5301_);
lean_dec_ref(v_a_5254_);
lean_dec(v_a_5299_);
lean_dec_ref(v___x_5269_);
lean_del_object(v___x_5266_);
lean_dec_ref(v_trace_5263_);
lean_dec_ref(v_a_5257_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec_ref(v_a_5253_);
lean_dec_ref(v_ext_5249_);
lean_dec_ref(v_build_5247_);
lean_dec_ref(v_file_5246_);
v_a_5440_ = lean_ctor_get(v___x_5412_, 0);
v_a_5441_ = lean_ctor_get(v___x_5412_, 1);
v_isSharedCheck_5448_ = !lean_is_exclusive(v___x_5412_);
if (v_isSharedCheck_5448_ == 0)
{
v___x_5443_ = v___x_5412_;
v_isShared_5444_ = v_isSharedCheck_5448_;
goto v_resetjp_5442_;
}
else
{
lean_inc(v_a_5441_);
lean_inc(v_a_5440_);
lean_dec(v___x_5412_);
v___x_5443_ = lean_box(0);
v_isShared_5444_ = v_isSharedCheck_5448_;
goto v_resetjp_5442_;
}
v_resetjp_5442_:
{
lean_object* v___x_5446_; 
if (v_isShared_5444_ == 0)
{
v___x_5446_ = v___x_5443_;
goto v_reusejp_5445_;
}
else
{
lean_object* v_reuseFailAlloc_5447_; 
v_reuseFailAlloc_5447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5447_, 0, v_a_5440_);
lean_ctor_set(v_reuseFailAlloc_5447_, 1, v_a_5441_);
v___x_5446_ = v_reuseFailAlloc_5447_;
goto v_reusejp_5445_;
}
v_reusejp_5445_:
{
return v___x_5446_;
}
}
}
}
v___jp_5449_:
{
if (v_restore_5250_ == 0)
{
v___y_5410_ = v_a_5452_;
v___y_5411_ = v_a_5451_;
goto v___jp_5409_;
}
else
{
v___y_5410_ = v_a_5452_;
v___y_5411_ = v___y_5450_;
goto v___jp_5409_;
}
}
v___jp_5453_:
{
if (v_a_5454_ == 0)
{
v_a_5380_ = v_a_5455_;
goto v___jp_5379_;
}
else
{
lean_inc(v_val_5301_);
if (lean_obj_tag(v_restoreAllArtifacts_x3f_5355_) == 0)
{
lean_object* v_toContext_5456_; lean_object* v_root_5457_; lean_object* v_config_5458_; lean_object* v_restoreAllArtifacts_x3f_5459_; 
v_toContext_5456_ = lean_ctor_get(v_a_5257_, 1);
v_root_5457_ = lean_ctor_get(v_toContext_5456_, 0);
v_config_5458_ = lean_ctor_get(v_root_5457_, 6);
v_restoreAllArtifacts_x3f_5459_ = lean_ctor_get(v_config_5458_, 25);
if (lean_obj_tag(v_restoreAllArtifacts_x3f_5459_) == 0)
{
uint8_t v___x_5460_; 
v___x_5460_ = 0;
v___y_5450_ = v_a_5454_;
v_a_5451_ = v___x_5460_;
v_a_5452_ = v_a_5455_;
goto v___jp_5449_;
}
else
{
lean_object* v_val_5461_; uint8_t v___x_5462_; 
v_val_5461_ = lean_ctor_get(v_restoreAllArtifacts_x3f_5459_, 0);
v___x_5462_ = lean_unbox(v_val_5461_);
v___y_5450_ = v_a_5454_;
v_a_5451_ = v___x_5462_;
v_a_5452_ = v_a_5455_;
goto v___jp_5449_;
}
}
else
{
lean_object* v_val_5463_; uint8_t v___x_5464_; 
v_val_5463_ = lean_ctor_get(v_restoreAllArtifacts_x3f_5355_, 0);
v___x_5464_ = lean_unbox(v_val_5463_);
v___y_5450_ = v_a_5454_;
v_a_5451_ = v___x_5464_;
v_a_5452_ = v_a_5455_;
goto v___jp_5449_;
}
}
}
}
else
{
lean_object* v_a_5478_; lean_object* v_a_5479_; lean_object* v_mtime_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; 
lean_del_object(v___x_5266_);
v_a_5478_ = lean_ctor_get(v___x_5298_, 0);
lean_inc(v_a_5478_);
v_a_5479_ = lean_ctor_get(v___x_5298_, 1);
lean_inc(v_a_5479_);
lean_dec_ref(v___x_5298_);
v_mtime_5480_ = lean_ctor_get(v_trace_5263_, 2);
lean_inc_ref(v_trace_5263_);
v___x_5481_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5481_, 0, v_a_5479_);
lean_ctor_set(v___x_5481_, 1, v_trace_5263_);
lean_ctor_set(v___x_5481_, 2, v_buildTime_5264_);
lean_ctor_set_uint8(v___x_5481_, sizeof(void*)*3, v_action_5261_);
lean_ctor_set_uint8(v___x_5481_, sizeof(void*)*3 + 1, v_wantsRebuild_5262_);
v___x_5482_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_5253_, v_file_5246_, v_trace_5263_, v_a_5478_, v_mtime_5480_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v___x_5481_);
if (lean_obj_tag(v___x_5482_) == 0)
{
lean_object* v_a_5483_; lean_object* v_a_5484_; uint8_t v___x_5485_; uint8_t v___x_5486_; uint8_t v___x_5487_; 
v_a_5483_ = lean_ctor_get(v___x_5482_, 0);
lean_inc(v_a_5483_);
v_a_5484_ = lean_ctor_get(v___x_5482_, 1);
lean_inc(v_a_5484_);
lean_dec_ref(v___x_5482_);
v___x_5485_ = 0;
v___x_5486_ = lean_unbox(v_a_5483_);
lean_dec(v_a_5483_);
v___x_5487_ = l_Lake_instDecidableEqOutputStatus(v___x_5486_, v___x_5485_);
if (v___x_5487_ == 0)
{
lean_object* v___x_5488_; 
lean_dec_ref(v_trace_5263_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec(v_a_5254_);
lean_dec_ref(v_a_5253_);
lean_dec_ref(v_build_5247_);
v___x_5488_ = l_Lake_computeArtifact___redArg(v_file_5246_, v_ext_5249_, v_text_5248_, v_a_5257_, v_a_5484_);
lean_dec_ref(v_a_5257_);
if (lean_obj_tag(v___x_5488_) == 0)
{
lean_object* v_a_5489_; lean_object* v_a_5490_; 
v_a_5489_ = lean_ctor_get(v___x_5488_, 0);
lean_inc(v_a_5489_);
v_a_5490_ = lean_ctor_get(v___x_5488_, 1);
lean_inc(v_a_5490_);
lean_dec_ref(v___x_5488_);
v_art_5271_ = v_a_5489_;
v___y_5272_ = v_a_5490_;
goto v___jp_5270_;
}
else
{
lean_dec_ref(v___x_5269_);
return v___x_5488_;
}
}
else
{
lean_object* v___x_5491_; 
lean_inc_ref(v___x_5269_);
v___x_5491_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5246_, v_build_5247_, v_text_5248_, v_ext_5249_, v_trace_5263_, v___x_5269_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v_a_5484_);
lean_dec_ref(v_trace_5263_);
if (lean_obj_tag(v___x_5491_) == 0)
{
lean_object* v_a_5492_; lean_object* v_a_5493_; 
v_a_5492_ = lean_ctor_get(v___x_5491_, 0);
lean_inc(v_a_5492_);
v_a_5493_ = lean_ctor_get(v___x_5491_, 1);
lean_inc(v_a_5493_);
lean_dec_ref(v___x_5491_);
v_art_5271_ = v_a_5492_;
v___y_5272_ = v_a_5493_;
goto v___jp_5270_;
}
else
{
lean_dec_ref(v___x_5269_);
return v___x_5491_;
}
}
}
else
{
lean_object* v_a_5494_; lean_object* v_a_5495_; lean_object* v___x_5497_; uint8_t v_isShared_5498_; uint8_t v_isSharedCheck_5502_; 
lean_dec_ref(v___x_5269_);
lean_dec_ref(v_trace_5263_);
lean_dec_ref(v_a_5257_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec(v_a_5254_);
lean_dec_ref(v_a_5253_);
lean_dec_ref(v_ext_5249_);
lean_dec_ref(v_build_5247_);
lean_dec_ref(v_file_5246_);
v_a_5494_ = lean_ctor_get(v___x_5482_, 0);
v_a_5495_ = lean_ctor_get(v___x_5482_, 1);
v_isSharedCheck_5502_ = !lean_is_exclusive(v___x_5482_);
if (v_isSharedCheck_5502_ == 0)
{
v___x_5497_ = v___x_5482_;
v_isShared_5498_ = v_isSharedCheck_5502_;
goto v_resetjp_5496_;
}
else
{
lean_inc(v_a_5495_);
lean_inc(v_a_5494_);
lean_dec(v___x_5482_);
v___x_5497_ = lean_box(0);
v_isShared_5498_ = v_isSharedCheck_5502_;
goto v_resetjp_5496_;
}
v_resetjp_5496_:
{
lean_object* v___x_5500_; 
if (v_isShared_5498_ == 0)
{
v___x_5500_ = v___x_5497_;
goto v_reusejp_5499_;
}
else
{
lean_object* v_reuseFailAlloc_5501_; 
v_reuseFailAlloc_5501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5501_, 0, v_a_5494_);
lean_ctor_set(v_reuseFailAlloc_5501_, 1, v_a_5495_);
v___x_5500_ = v_reuseFailAlloc_5501_;
goto v_reusejp_5499_;
}
v_reusejp_5499_:
{
return v___x_5500_;
}
}
}
}
}
else
{
lean_object* v_a_5503_; lean_object* v_a_5504_; lean_object* v___x_5506_; uint8_t v_isShared_5507_; uint8_t v_isSharedCheck_5512_; 
lean_dec_ref(v___x_5269_);
lean_del_object(v___x_5266_);
lean_dec_ref(v_a_5257_);
lean_dec(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec(v_a_5254_);
lean_dec_ref(v_a_5253_);
lean_dec_ref(v_ext_5249_);
lean_dec_ref(v_build_5247_);
lean_dec_ref(v_file_5246_);
v_a_5503_ = lean_ctor_get(v___x_5298_, 0);
v_a_5504_ = lean_ctor_get(v___x_5298_, 1);
v_isSharedCheck_5512_ = !lean_is_exclusive(v___x_5298_);
if (v_isSharedCheck_5512_ == 0)
{
v___x_5506_ = v___x_5298_;
v_isShared_5507_ = v_isSharedCheck_5512_;
goto v_resetjp_5505_;
}
else
{
lean_inc(v_a_5504_);
lean_inc(v_a_5503_);
lean_dec(v___x_5298_);
v___x_5506_ = lean_box(0);
v_isShared_5507_ = v_isSharedCheck_5512_;
goto v_resetjp_5505_;
}
v_resetjp_5505_:
{
lean_object* v___x_5508_; lean_object* v___x_5510_; 
v___x_5508_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5508_, 0, v_a_5504_);
lean_ctor_set(v___x_5508_, 1, v_trace_5263_);
lean_ctor_set(v___x_5508_, 2, v_buildTime_5264_);
lean_ctor_set_uint8(v___x_5508_, sizeof(void*)*3, v_action_5261_);
lean_ctor_set_uint8(v___x_5508_, sizeof(void*)*3 + 1, v_wantsRebuild_5262_);
if (v_isShared_5507_ == 0)
{
lean_ctor_set(v___x_5506_, 1, v___x_5508_);
v___x_5510_ = v___x_5506_;
goto v_reusejp_5509_;
}
else
{
lean_object* v_reuseFailAlloc_5511_; 
v_reuseFailAlloc_5511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5511_, 0, v_a_5503_);
lean_ctor_set(v_reuseFailAlloc_5511_, 1, v___x_5508_);
v___x_5510_ = v_reuseFailAlloc_5511_;
goto v_reusejp_5509_;
}
v_reusejp_5509_:
{
return v___x_5510_;
}
}
}
v___jp_5270_:
{
lean_object* v_log_5273_; uint8_t v_action_5274_; uint8_t v_wantsRebuild_5275_; lean_object* v_buildTime_5276_; lean_object* v___x_5278_; uint8_t v_isShared_5279_; uint8_t v_isSharedCheck_5285_; 
v_log_5273_ = lean_ctor_get(v___y_5272_, 0);
v_action_5274_ = lean_ctor_get_uint8(v___y_5272_, sizeof(void*)*3);
v_wantsRebuild_5275_ = lean_ctor_get_uint8(v___y_5272_, sizeof(void*)*3 + 1);
v_buildTime_5276_ = lean_ctor_get(v___y_5272_, 2);
v_isSharedCheck_5285_ = !lean_is_exclusive(v___y_5272_);
if (v_isSharedCheck_5285_ == 0)
{
lean_object* v_unused_5286_; 
v_unused_5286_ = lean_ctor_get(v___y_5272_, 1);
lean_dec(v_unused_5286_);
v___x_5278_ = v___y_5272_;
v_isShared_5279_ = v_isSharedCheck_5285_;
goto v_resetjp_5277_;
}
else
{
lean_inc(v_buildTime_5276_);
lean_inc(v_log_5273_);
lean_dec(v___y_5272_);
v___x_5278_ = lean_box(0);
v_isShared_5279_ = v_isSharedCheck_5285_;
goto v_resetjp_5277_;
}
v_resetjp_5277_:
{
lean_object* v___x_5280_; lean_object* v___x_5282_; 
v___x_5280_ = l_Lake_Artifact_trace(v_art_5271_);
if (v_isShared_5279_ == 0)
{
lean_ctor_set(v___x_5278_, 1, v___x_5280_);
v___x_5282_ = v___x_5278_;
goto v_reusejp_5281_;
}
else
{
lean_object* v_reuseFailAlloc_5284_; 
v_reuseFailAlloc_5284_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5284_, 0, v_log_5273_);
lean_ctor_set(v_reuseFailAlloc_5284_, 1, v___x_5280_);
lean_ctor_set(v_reuseFailAlloc_5284_, 2, v_buildTime_5276_);
lean_ctor_set_uint8(v_reuseFailAlloc_5284_, sizeof(void*)*3, v_action_5274_);
lean_ctor_set_uint8(v_reuseFailAlloc_5284_, sizeof(void*)*3 + 1, v_wantsRebuild_5275_);
v___x_5282_ = v_reuseFailAlloc_5284_;
goto v_reusejp_5281_;
}
v_reusejp_5281_:
{
lean_object* v___x_5283_; 
v___x_5283_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_5271_, v___x_5269_, v___x_5282_);
lean_dec_ref(v___x_5269_);
return v___x_5283_;
}
}
}
v___jp_5287_:
{
lean_object* v___x_5293_; lean_object* v___x_5295_; 
v___x_5293_ = l_Lake_Artifact_trace(v___y_5288_);
if (v_isShared_5267_ == 0)
{
lean_ctor_set(v___x_5266_, 2, v_buildTime_5292_);
lean_ctor_set(v___x_5266_, 1, v___x_5293_);
lean_ctor_set(v___x_5266_, 0, v_log_5289_);
v___x_5295_ = v___x_5266_;
goto v_reusejp_5294_;
}
else
{
lean_object* v_reuseFailAlloc_5297_; 
v_reuseFailAlloc_5297_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5297_, 0, v_log_5289_);
lean_ctor_set(v_reuseFailAlloc_5297_, 1, v___x_5293_);
lean_ctor_set(v_reuseFailAlloc_5297_, 2, v_buildTime_5292_);
v___x_5295_ = v_reuseFailAlloc_5297_;
goto v_reusejp_5294_;
}
v_reusejp_5294_:
{
lean_object* v___x_5296_; 
lean_ctor_set_uint8(v___x_5295_, sizeof(void*)*3, v_action_5290_);
lean_ctor_set_uint8(v___x_5295_, sizeof(void*)*3 + 1, v_wantsRebuild_5291_);
v___x_5296_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v___y_5288_, v___x_5269_, v___x_5295_);
lean_dec_ref(v___x_5269_);
return v___x_5296_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___boxed(lean_object* v_file_5514_, lean_object* v_build_5515_, lean_object* v_text_5516_, lean_object* v_ext_5517_, lean_object* v_restore_5518_, lean_object* v_exe_5519_, lean_object* v_platformIndependent_5520_, lean_object* v_a_5521_, lean_object* v_a_5522_, lean_object* v_a_5523_, lean_object* v_a_5524_, lean_object* v_a_5525_, lean_object* v_a_5526_, lean_object* v_a_5527_){
_start:
{
uint8_t v_text_boxed_5528_; uint8_t v_restore_boxed_5529_; uint8_t v_exe_boxed_5530_; uint8_t v_platformIndependent_boxed_5531_; lean_object* v_res_5532_; 
v_text_boxed_5528_ = lean_unbox(v_text_5516_);
v_restore_boxed_5529_ = lean_unbox(v_restore_5518_);
v_exe_boxed_5530_ = lean_unbox(v_exe_5519_);
v_platformIndependent_boxed_5531_ = lean_unbox(v_platformIndependent_5520_);
v_res_5532_ = l_Lake_buildArtifactUnlessUpToDate(v_file_5514_, v_build_5515_, v_text_boxed_5528_, v_ext_5517_, v_restore_boxed_5529_, v_exe_boxed_5530_, v_platformIndependent_boxed_5531_, v_a_5521_, v_a_5522_, v_a_5523_, v_a_5524_, v_a_5525_, v_a_5526_);
return v_res_5532_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0(lean_object* v_extraDepTrace_5534_, lean_object* v_build_5535_, lean_object* v_file_5536_, uint8_t v_text_5537_, lean_object* v_depInfo_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_, lean_object* v___y_5541_, lean_object* v___y_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_){
_start:
{
lean_object* v___x_5546_; 
lean_inc_ref(v___y_5543_);
lean_inc(v___y_5542_);
lean_inc(v___y_5541_);
lean_inc(v___y_5540_);
lean_inc_ref(v___y_5539_);
v___x_5546_ = lean_apply_7(v_extraDepTrace_5534_, v___y_5539_, v___y_5540_, v___y_5541_, v___y_5542_, v___y_5543_, v___y_5544_, lean_box(0));
if (lean_obj_tag(v___x_5546_) == 0)
{
lean_object* v_a_5547_; lean_object* v_a_5548_; lean_object* v_log_5549_; uint8_t v_action_5550_; uint8_t v_wantsRebuild_5551_; lean_object* v_trace_5552_; lean_object* v_buildTime_5553_; lean_object* v___x_5555_; uint8_t v_isShared_5556_; uint8_t v_isSharedCheck_5584_; 
v_a_5547_ = lean_ctor_get(v___x_5546_, 1);
lean_inc(v_a_5547_);
v_a_5548_ = lean_ctor_get(v___x_5546_, 0);
lean_inc(v_a_5548_);
lean_dec_ref(v___x_5546_);
v_log_5549_ = lean_ctor_get(v_a_5547_, 0);
v_action_5550_ = lean_ctor_get_uint8(v_a_5547_, sizeof(void*)*3);
v_wantsRebuild_5551_ = lean_ctor_get_uint8(v_a_5547_, sizeof(void*)*3 + 1);
v_trace_5552_ = lean_ctor_get(v_a_5547_, 1);
v_buildTime_5553_ = lean_ctor_get(v_a_5547_, 2);
v_isSharedCheck_5584_ = !lean_is_exclusive(v_a_5547_);
if (v_isSharedCheck_5584_ == 0)
{
v___x_5555_ = v_a_5547_;
v_isShared_5556_ = v_isSharedCheck_5584_;
goto v_resetjp_5554_;
}
else
{
lean_inc(v_buildTime_5553_);
lean_inc(v_trace_5552_);
lean_inc(v_log_5549_);
lean_dec(v_a_5547_);
v___x_5555_ = lean_box(0);
v_isShared_5556_ = v_isSharedCheck_5584_;
goto v_resetjp_5554_;
}
v_resetjp_5554_:
{
lean_object* v___x_5557_; lean_object* v___x_5559_; 
v___x_5557_ = l_Lake_BuildTrace_mix(v_trace_5552_, v_a_5548_);
if (v_isShared_5556_ == 0)
{
lean_ctor_set(v___x_5555_, 1, v___x_5557_);
v___x_5559_ = v___x_5555_;
goto v_reusejp_5558_;
}
else
{
lean_object* v_reuseFailAlloc_5583_; 
v_reuseFailAlloc_5583_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5583_, 0, v_log_5549_);
lean_ctor_set(v_reuseFailAlloc_5583_, 1, v___x_5557_);
lean_ctor_set(v_reuseFailAlloc_5583_, 2, v_buildTime_5553_);
lean_ctor_set_uint8(v_reuseFailAlloc_5583_, sizeof(void*)*3, v_action_5550_);
lean_ctor_set_uint8(v_reuseFailAlloc_5583_, sizeof(void*)*3 + 1, v_wantsRebuild_5551_);
v___x_5559_ = v_reuseFailAlloc_5583_;
goto v_reusejp_5558_;
}
v_reusejp_5558_:
{
lean_object* v___x_5560_; lean_object* v___x_5561_; uint8_t v___x_5562_; lean_object* v___x_5563_; 
v___x_5560_ = lean_apply_1(v_build_5535_, v_depInfo_5538_);
v___x_5561_ = ((lean_object*)(l_Lake_buildFileAfterDep___redArg___lam__0___closed__0));
v___x_5562_ = 0;
v___x_5563_ = l_Lake_buildArtifactUnlessUpToDate(v_file_5536_, v___x_5560_, v_text_5537_, v___x_5561_, v___x_5562_, v___x_5562_, v___x_5562_, v___y_5539_, v___y_5540_, v___y_5541_, v___y_5542_, v___y_5543_, v___x_5559_);
if (lean_obj_tag(v___x_5563_) == 0)
{
lean_object* v_a_5564_; lean_object* v_a_5565_; lean_object* v___x_5567_; uint8_t v_isShared_5568_; uint8_t v_isSharedCheck_5573_; 
v_a_5564_ = lean_ctor_get(v___x_5563_, 0);
v_a_5565_ = lean_ctor_get(v___x_5563_, 1);
v_isSharedCheck_5573_ = !lean_is_exclusive(v___x_5563_);
if (v_isSharedCheck_5573_ == 0)
{
v___x_5567_ = v___x_5563_;
v_isShared_5568_ = v_isSharedCheck_5573_;
goto v_resetjp_5566_;
}
else
{
lean_inc(v_a_5565_);
lean_inc(v_a_5564_);
lean_dec(v___x_5563_);
v___x_5567_ = lean_box(0);
v_isShared_5568_ = v_isSharedCheck_5573_;
goto v_resetjp_5566_;
}
v_resetjp_5566_:
{
lean_object* v_path_5569_; lean_object* v___x_5571_; 
v_path_5569_ = lean_ctor_get(v_a_5564_, 1);
lean_inc_ref(v_path_5569_);
lean_dec(v_a_5564_);
if (v_isShared_5568_ == 0)
{
lean_ctor_set(v___x_5567_, 0, v_path_5569_);
v___x_5571_ = v___x_5567_;
goto v_reusejp_5570_;
}
else
{
lean_object* v_reuseFailAlloc_5572_; 
v_reuseFailAlloc_5572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5572_, 0, v_path_5569_);
lean_ctor_set(v_reuseFailAlloc_5572_, 1, v_a_5565_);
v___x_5571_ = v_reuseFailAlloc_5572_;
goto v_reusejp_5570_;
}
v_reusejp_5570_:
{
return v___x_5571_;
}
}
}
else
{
lean_object* v_a_5574_; lean_object* v_a_5575_; lean_object* v___x_5577_; uint8_t v_isShared_5578_; uint8_t v_isSharedCheck_5582_; 
v_a_5574_ = lean_ctor_get(v___x_5563_, 0);
v_a_5575_ = lean_ctor_get(v___x_5563_, 1);
v_isSharedCheck_5582_ = !lean_is_exclusive(v___x_5563_);
if (v_isSharedCheck_5582_ == 0)
{
v___x_5577_ = v___x_5563_;
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
else
{
lean_inc(v_a_5575_);
lean_inc(v_a_5574_);
lean_dec(v___x_5563_);
v___x_5577_ = lean_box(0);
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
v_resetjp_5576_:
{
lean_object* v___x_5580_; 
if (v_isShared_5578_ == 0)
{
v___x_5580_ = v___x_5577_;
goto v_reusejp_5579_;
}
else
{
lean_object* v_reuseFailAlloc_5581_; 
v_reuseFailAlloc_5581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5581_, 0, v_a_5574_);
lean_ctor_set(v_reuseFailAlloc_5581_, 1, v_a_5575_);
v___x_5580_ = v_reuseFailAlloc_5581_;
goto v_reusejp_5579_;
}
v_reusejp_5579_:
{
return v___x_5580_;
}
}
}
}
}
}
else
{
lean_object* v_a_5585_; lean_object* v_a_5586_; lean_object* v___x_5588_; uint8_t v_isShared_5589_; uint8_t v_isSharedCheck_5593_; 
lean_dec_ref(v___y_5543_);
lean_dec(v___y_5542_);
lean_dec(v___y_5541_);
lean_dec(v___y_5540_);
lean_dec_ref(v___y_5539_);
lean_dec(v_depInfo_5538_);
lean_dec_ref(v_file_5536_);
lean_dec_ref(v_build_5535_);
v_a_5585_ = lean_ctor_get(v___x_5546_, 0);
v_a_5586_ = lean_ctor_get(v___x_5546_, 1);
v_isSharedCheck_5593_ = !lean_is_exclusive(v___x_5546_);
if (v_isSharedCheck_5593_ == 0)
{
v___x_5588_ = v___x_5546_;
v_isShared_5589_ = v_isSharedCheck_5593_;
goto v_resetjp_5587_;
}
else
{
lean_inc(v_a_5586_);
lean_inc(v_a_5585_);
lean_dec(v___x_5546_);
v___x_5588_ = lean_box(0);
v_isShared_5589_ = v_isSharedCheck_5593_;
goto v_resetjp_5587_;
}
v_resetjp_5587_:
{
lean_object* v___x_5591_; 
if (v_isShared_5589_ == 0)
{
v___x_5591_ = v___x_5588_;
goto v_reusejp_5590_;
}
else
{
lean_object* v_reuseFailAlloc_5592_; 
v_reuseFailAlloc_5592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5592_, 0, v_a_5585_);
lean_ctor_set(v_reuseFailAlloc_5592_, 1, v_a_5586_);
v___x_5591_ = v_reuseFailAlloc_5592_;
goto v_reusejp_5590_;
}
v_reusejp_5590_:
{
return v___x_5591_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0___boxed(lean_object* v_extraDepTrace_5594_, lean_object* v_build_5595_, lean_object* v_file_5596_, lean_object* v_text_5597_, lean_object* v_depInfo_5598_, lean_object* v___y_5599_, lean_object* v___y_5600_, lean_object* v___y_5601_, lean_object* v___y_5602_, lean_object* v___y_5603_, lean_object* v___y_5604_, lean_object* v___y_5605_){
_start:
{
uint8_t v_text_boxed_5606_; lean_object* v_res_5607_; 
v_text_boxed_5606_ = lean_unbox(v_text_5597_);
v_res_5607_ = l_Lake_buildFileAfterDep___redArg___lam__0(v_extraDepTrace_5594_, v_build_5595_, v_file_5596_, v_text_boxed_5606_, v_depInfo_5598_, v___y_5599_, v___y_5600_, v___y_5601_, v___y_5602_, v___y_5603_, v___y_5604_);
return v_res_5607_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg(lean_object* v_file_5608_, lean_object* v_dep_5609_, lean_object* v_build_5610_, lean_object* v_extraDepTrace_5611_, uint8_t v_text_5612_, lean_object* v_a_5613_, lean_object* v_a_5614_, lean_object* v_a_5615_, lean_object* v_a_5616_, lean_object* v_a_5617_, lean_object* v_a_5618_){
_start:
{
lean_object* v___x_5620_; lean_object* v___f_5621_; lean_object* v___x_5622_; lean_object* v___x_5623_; uint8_t v___x_5624_; lean_object* v___x_5625_; 
v___x_5620_ = lean_box(v_text_5612_);
v___f_5621_ = lean_alloc_closure((void*)(l_Lake_buildFileAfterDep___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_5621_, 0, v_extraDepTrace_5611_);
lean_closure_set(v___f_5621_, 1, v_build_5610_);
lean_closure_set(v___f_5621_, 2, v_file_5608_);
lean_closure_set(v___f_5621_, 3, v___x_5620_);
v___x_5622_ = l_Lake_instDataKindFilePath;
v___x_5623_ = lean_unsigned_to_nat(0u);
v___x_5624_ = 0;
v___x_5625_ = l_Lake_Job_mapM___redArg(v___x_5622_, v_dep_5609_, v___f_5621_, v___x_5623_, v___x_5624_, v_a_5613_, v_a_5614_, v_a_5615_, v_a_5616_, v_a_5617_, v_a_5618_);
return v___x_5625_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___boxed(lean_object* v_file_5626_, lean_object* v_dep_5627_, lean_object* v_build_5628_, lean_object* v_extraDepTrace_5629_, lean_object* v_text_5630_, lean_object* v_a_5631_, lean_object* v_a_5632_, lean_object* v_a_5633_, lean_object* v_a_5634_, lean_object* v_a_5635_, lean_object* v_a_5636_, lean_object* v_a_5637_){
_start:
{
uint8_t v_text_boxed_5638_; lean_object* v_res_5639_; 
v_text_boxed_5638_ = lean_unbox(v_text_5630_);
v_res_5639_ = l_Lake_buildFileAfterDep___redArg(v_file_5626_, v_dep_5627_, v_build_5628_, v_extraDepTrace_5629_, v_text_boxed_5638_, v_a_5631_, v_a_5632_, v_a_5633_, v_a_5634_, v_a_5635_, v_a_5636_);
return v_res_5639_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep(lean_object* v_00_u03b1_5640_, lean_object* v_file_5641_, lean_object* v_dep_5642_, lean_object* v_build_5643_, lean_object* v_extraDepTrace_5644_, uint8_t v_text_5645_, lean_object* v_a_5646_, lean_object* v_a_5647_, lean_object* v_a_5648_, lean_object* v_a_5649_, lean_object* v_a_5650_, lean_object* v_a_5651_){
_start:
{
lean_object* v___x_5653_; lean_object* v___f_5654_; lean_object* v___x_5655_; lean_object* v___x_5656_; uint8_t v___x_5657_; lean_object* v___x_5658_; 
v___x_5653_ = lean_box(v_text_5645_);
v___f_5654_ = lean_alloc_closure((void*)(l_Lake_buildFileAfterDep___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_5654_, 0, v_extraDepTrace_5644_);
lean_closure_set(v___f_5654_, 1, v_build_5643_);
lean_closure_set(v___f_5654_, 2, v_file_5641_);
lean_closure_set(v___f_5654_, 3, v___x_5653_);
v___x_5655_ = l_Lake_instDataKindFilePath;
v___x_5656_ = lean_unsigned_to_nat(0u);
v___x_5657_ = 0;
v___x_5658_ = l_Lake_Job_mapM___redArg(v___x_5655_, v_dep_5642_, v___f_5654_, v___x_5656_, v___x_5657_, v_a_5646_, v_a_5647_, v_a_5648_, v_a_5649_, v_a_5650_, v_a_5651_);
return v___x_5658_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___boxed(lean_object* v_00_u03b1_5659_, lean_object* v_file_5660_, lean_object* v_dep_5661_, lean_object* v_build_5662_, lean_object* v_extraDepTrace_5663_, lean_object* v_text_5664_, lean_object* v_a_5665_, lean_object* v_a_5666_, lean_object* v_a_5667_, lean_object* v_a_5668_, lean_object* v_a_5669_, lean_object* v_a_5670_, lean_object* v_a_5671_){
_start:
{
uint8_t v_text_boxed_5672_; lean_object* v_res_5673_; 
v_text_boxed_5672_ = lean_unbox(v_text_5664_);
v_res_5673_ = l_Lake_buildFileAfterDep(v_00_u03b1_5659_, v_file_5660_, v_dep_5661_, v_build_5662_, v_extraDepTrace_5663_, v_text_boxed_5672_, v_a_5665_, v_a_5666_, v_a_5667_, v_a_5668_, v_a_5669_, v_a_5670_);
return v_res_5673_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(lean_object* v_info_5674_){
_start:
{
lean_object* v___x_5676_; 
v___x_5676_ = l_Lake_computeBinFileHash(v_info_5674_);
if (lean_obj_tag(v___x_5676_) == 0)
{
lean_object* v_a_5677_; lean_object* v___x_5678_; 
v_a_5677_ = lean_ctor_get(v___x_5676_, 0);
lean_inc(v_a_5677_);
lean_dec_ref(v___x_5676_);
v___x_5678_ = lean_io_metadata(v_info_5674_);
if (lean_obj_tag(v___x_5678_) == 0)
{
lean_object* v_a_5679_; lean_object* v___x_5681_; uint8_t v_isShared_5682_; uint8_t v_isSharedCheck_5690_; 
v_a_5679_ = lean_ctor_get(v___x_5678_, 0);
v_isSharedCheck_5690_ = !lean_is_exclusive(v___x_5678_);
if (v_isSharedCheck_5690_ == 0)
{
v___x_5681_ = v___x_5678_;
v_isShared_5682_ = v_isSharedCheck_5690_;
goto v_resetjp_5680_;
}
else
{
lean_inc(v_a_5679_);
lean_dec(v___x_5678_);
v___x_5681_ = lean_box(0);
v_isShared_5682_ = v_isSharedCheck_5690_;
goto v_resetjp_5680_;
}
v_resetjp_5680_:
{
lean_object* v_modified_5683_; lean_object* v___x_5684_; lean_object* v___x_5685_; uint64_t v___x_5686_; lean_object* v___x_5688_; 
v_modified_5683_ = lean_ctor_get(v_a_5679_, 1);
lean_inc_ref(v_modified_5683_);
lean_dec(v_a_5679_);
v___x_5684_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_5685_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5685_, 0, v_info_5674_);
lean_ctor_set(v___x_5685_, 1, v___x_5684_);
lean_ctor_set(v___x_5685_, 2, v_modified_5683_);
v___x_5686_ = lean_unbox_uint64(v_a_5677_);
lean_dec(v_a_5677_);
lean_ctor_set_uint64(v___x_5685_, sizeof(void*)*3, v___x_5686_);
if (v_isShared_5682_ == 0)
{
lean_ctor_set(v___x_5681_, 0, v___x_5685_);
v___x_5688_ = v___x_5681_;
goto v_reusejp_5687_;
}
else
{
lean_object* v_reuseFailAlloc_5689_; 
v_reuseFailAlloc_5689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5689_, 0, v___x_5685_);
v___x_5688_ = v_reuseFailAlloc_5689_;
goto v_reusejp_5687_;
}
v_reusejp_5687_:
{
return v___x_5688_;
}
}
}
else
{
lean_object* v_a_5691_; lean_object* v___x_5693_; uint8_t v_isShared_5694_; uint8_t v_isSharedCheck_5698_; 
lean_dec(v_a_5677_);
lean_dec_ref(v_info_5674_);
v_a_5691_ = lean_ctor_get(v___x_5678_, 0);
v_isSharedCheck_5698_ = !lean_is_exclusive(v___x_5678_);
if (v_isSharedCheck_5698_ == 0)
{
v___x_5693_ = v___x_5678_;
v_isShared_5694_ = v_isSharedCheck_5698_;
goto v_resetjp_5692_;
}
else
{
lean_inc(v_a_5691_);
lean_dec(v___x_5678_);
v___x_5693_ = lean_box(0);
v_isShared_5694_ = v_isSharedCheck_5698_;
goto v_resetjp_5692_;
}
v_resetjp_5692_:
{
lean_object* v___x_5696_; 
if (v_isShared_5694_ == 0)
{
v___x_5696_ = v___x_5693_;
goto v_reusejp_5695_;
}
else
{
lean_object* v_reuseFailAlloc_5697_; 
v_reuseFailAlloc_5697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5697_, 0, v_a_5691_);
v___x_5696_ = v_reuseFailAlloc_5697_;
goto v_reusejp_5695_;
}
v_reusejp_5695_:
{
return v___x_5696_;
}
}
}
}
else
{
lean_object* v_a_5699_; lean_object* v___x_5701_; uint8_t v_isShared_5702_; uint8_t v_isSharedCheck_5706_; 
lean_dec_ref(v_info_5674_);
v_a_5699_ = lean_ctor_get(v___x_5676_, 0);
v_isSharedCheck_5706_ = !lean_is_exclusive(v___x_5676_);
if (v_isSharedCheck_5706_ == 0)
{
v___x_5701_ = v___x_5676_;
v_isShared_5702_ = v_isSharedCheck_5706_;
goto v_resetjp_5700_;
}
else
{
lean_inc(v_a_5699_);
lean_dec(v___x_5676_);
v___x_5701_ = lean_box(0);
v_isShared_5702_ = v_isSharedCheck_5706_;
goto v_resetjp_5700_;
}
v_resetjp_5700_:
{
lean_object* v___x_5704_; 
if (v_isShared_5702_ == 0)
{
v___x_5704_ = v___x_5701_;
goto v_reusejp_5703_;
}
else
{
lean_object* v_reuseFailAlloc_5705_; 
v_reuseFailAlloc_5705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5705_, 0, v_a_5699_);
v___x_5704_ = v_reuseFailAlloc_5705_;
goto v_reusejp_5703_;
}
v_reusejp_5703_:
{
return v___x_5704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0___boxed(lean_object* v_info_5707_, lean_object* v_a_5708_){
_start:
{
lean_object* v_res_5709_; 
v_res_5709_ = l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(v_info_5707_);
return v_res_5709_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0(lean_object* v_path_5710_, lean_object* v___y_5711_, lean_object* v___y_5712_, lean_object* v___y_5713_, lean_object* v___y_5714_, lean_object* v___y_5715_, lean_object* v___y_5716_){
_start:
{
lean_object* v_log_5718_; uint8_t v_action_5719_; uint8_t v_wantsRebuild_5720_; lean_object* v_trace_5721_; lean_object* v_buildTime_5722_; lean_object* v___x_5724_; uint8_t v_isShared_5725_; uint8_t v_isSharedCheck_5742_; 
v_log_5718_ = lean_ctor_get(v___y_5716_, 0);
v_action_5719_ = lean_ctor_get_uint8(v___y_5716_, sizeof(void*)*3);
v_wantsRebuild_5720_ = lean_ctor_get_uint8(v___y_5716_, sizeof(void*)*3 + 1);
v_trace_5721_ = lean_ctor_get(v___y_5716_, 1);
v_buildTime_5722_ = lean_ctor_get(v___y_5716_, 2);
v_isSharedCheck_5742_ = !lean_is_exclusive(v___y_5716_);
if (v_isSharedCheck_5742_ == 0)
{
v___x_5724_ = v___y_5716_;
v_isShared_5725_ = v_isSharedCheck_5742_;
goto v_resetjp_5723_;
}
else
{
lean_inc(v_buildTime_5722_);
lean_inc(v_trace_5721_);
lean_inc(v_log_5718_);
lean_dec(v___y_5716_);
v___x_5724_ = lean_box(0);
v_isShared_5725_ = v_isSharedCheck_5742_;
goto v_resetjp_5723_;
}
v_resetjp_5723_:
{
lean_object* v___x_5726_; 
lean_inc_ref(v_path_5710_);
v___x_5726_ = l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(v_path_5710_);
if (lean_obj_tag(v___x_5726_) == 0)
{
lean_object* v_a_5727_; lean_object* v___x_5729_; 
lean_dec_ref(v_trace_5721_);
v_a_5727_ = lean_ctor_get(v___x_5726_, 0);
lean_inc(v_a_5727_);
lean_dec_ref(v___x_5726_);
if (v_isShared_5725_ == 0)
{
lean_ctor_set(v___x_5724_, 1, v_a_5727_);
v___x_5729_ = v___x_5724_;
goto v_reusejp_5728_;
}
else
{
lean_object* v_reuseFailAlloc_5731_; 
v_reuseFailAlloc_5731_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5731_, 0, v_log_5718_);
lean_ctor_set(v_reuseFailAlloc_5731_, 1, v_a_5727_);
lean_ctor_set(v_reuseFailAlloc_5731_, 2, v_buildTime_5722_);
lean_ctor_set_uint8(v_reuseFailAlloc_5731_, sizeof(void*)*3, v_action_5719_);
lean_ctor_set_uint8(v_reuseFailAlloc_5731_, sizeof(void*)*3 + 1, v_wantsRebuild_5720_);
v___x_5729_ = v_reuseFailAlloc_5731_;
goto v_reusejp_5728_;
}
v_reusejp_5728_:
{
lean_object* v___x_5730_; 
v___x_5730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5730_, 0, v_path_5710_);
lean_ctor_set(v___x_5730_, 1, v___x_5729_);
return v___x_5730_;
}
}
else
{
lean_object* v_a_5732_; lean_object* v___x_5733_; uint8_t v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; lean_object* v___x_5737_; lean_object* v___x_5739_; 
lean_dec_ref(v_path_5710_);
v_a_5732_ = lean_ctor_get(v___x_5726_, 0);
lean_inc(v_a_5732_);
lean_dec_ref(v___x_5726_);
v___x_5733_ = lean_io_error_to_string(v_a_5732_);
v___x_5734_ = 3;
v___x_5735_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5735_, 0, v___x_5733_);
lean_ctor_set_uint8(v___x_5735_, sizeof(void*)*1, v___x_5734_);
v___x_5736_ = lean_array_get_size(v_log_5718_);
v___x_5737_ = lean_array_push(v_log_5718_, v___x_5735_);
if (v_isShared_5725_ == 0)
{
lean_ctor_set(v___x_5724_, 0, v___x_5737_);
v___x_5739_ = v___x_5724_;
goto v_reusejp_5738_;
}
else
{
lean_object* v_reuseFailAlloc_5741_; 
v_reuseFailAlloc_5741_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5741_, 0, v___x_5737_);
lean_ctor_set(v_reuseFailAlloc_5741_, 1, v_trace_5721_);
lean_ctor_set(v_reuseFailAlloc_5741_, 2, v_buildTime_5722_);
lean_ctor_set_uint8(v_reuseFailAlloc_5741_, sizeof(void*)*3, v_action_5719_);
lean_ctor_set_uint8(v_reuseFailAlloc_5741_, sizeof(void*)*3 + 1, v_wantsRebuild_5720_);
v___x_5739_ = v_reuseFailAlloc_5741_;
goto v_reusejp_5738_;
}
v_reusejp_5738_:
{
lean_object* v___x_5740_; 
v___x_5740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5740_, 0, v___x_5736_);
lean_ctor_set(v___x_5740_, 1, v___x_5739_);
return v___x_5740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0___boxed(lean_object* v_path_5743_, lean_object* v___y_5744_, lean_object* v___y_5745_, lean_object* v___y_5746_, lean_object* v___y_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_){
_start:
{
lean_object* v_res_5751_; 
v_res_5751_ = l_Lake_inputBinFile___redArg___lam__0(v_path_5743_, v___y_5744_, v___y_5745_, v___y_5746_, v___y_5747_, v___y_5748_, v___y_5749_);
lean_dec_ref(v___y_5748_);
lean_dec(v___y_5747_);
lean_dec(v___y_5746_);
lean_dec(v___y_5745_);
lean_dec_ref(v___y_5744_);
return v_res_5751_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg(lean_object* v_path_5753_, lean_object* v_a_5754_, lean_object* v_a_5755_, lean_object* v_a_5756_, lean_object* v_a_5757_, lean_object* v_a_5758_){
_start:
{
lean_object* v___f_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5764_; 
v___f_5760_ = lean_alloc_closure((void*)(l_Lake_inputBinFile___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5760_, 0, v_path_5753_);
v___x_5761_ = l_Lake_instDataKindFilePath;
v___x_5762_ = lean_unsigned_to_nat(0u);
v___x_5763_ = ((lean_object*)(l_Lake_inputBinFile___redArg___closed__0));
v___x_5764_ = l_Lake_Job_async___redArg(v___x_5761_, v___f_5760_, v___x_5762_, v___x_5763_, v_a_5754_, v_a_5755_, v_a_5756_, v_a_5757_, v_a_5758_);
return v___x_5764_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___boxed(lean_object* v_path_5765_, lean_object* v_a_5766_, lean_object* v_a_5767_, lean_object* v_a_5768_, lean_object* v_a_5769_, lean_object* v_a_5770_, lean_object* v_a_5771_){
_start:
{
lean_object* v_res_5772_; 
v_res_5772_ = l_Lake_inputBinFile___redArg(v_path_5765_, v_a_5766_, v_a_5767_, v_a_5768_, v_a_5769_, v_a_5770_);
return v_res_5772_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile(lean_object* v_path_5773_, lean_object* v_a_5774_, lean_object* v_a_5775_, lean_object* v_a_5776_, lean_object* v_a_5777_, lean_object* v_a_5778_, lean_object* v_a_5779_){
_start:
{
lean_object* v___x_5781_; 
v___x_5781_ = l_Lake_inputBinFile___redArg(v_path_5773_, v_a_5774_, v_a_5775_, v_a_5776_, v_a_5777_, v_a_5778_);
return v___x_5781_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___boxed(lean_object* v_path_5782_, lean_object* v_a_5783_, lean_object* v_a_5784_, lean_object* v_a_5785_, lean_object* v_a_5786_, lean_object* v_a_5787_, lean_object* v_a_5788_, lean_object* v_a_5789_){
_start:
{
lean_object* v_res_5790_; 
v_res_5790_ = l_Lake_inputBinFile(v_path_5782_, v_a_5783_, v_a_5784_, v_a_5785_, v_a_5786_, v_a_5787_, v_a_5788_);
lean_dec_ref(v_a_5788_);
return v_res_5790_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(lean_object* v_info_5791_){
_start:
{
lean_object* v___x_5793_; 
v___x_5793_ = l_Lake_computeTextFileHash(v_info_5791_);
if (lean_obj_tag(v___x_5793_) == 0)
{
lean_object* v_a_5794_; lean_object* v___x_5795_; 
v_a_5794_ = lean_ctor_get(v___x_5793_, 0);
lean_inc(v_a_5794_);
lean_dec_ref(v___x_5793_);
v___x_5795_ = lean_io_metadata(v_info_5791_);
if (lean_obj_tag(v___x_5795_) == 0)
{
lean_object* v_a_5796_; lean_object* v___x_5798_; uint8_t v_isShared_5799_; uint8_t v_isSharedCheck_5807_; 
v_a_5796_ = lean_ctor_get(v___x_5795_, 0);
v_isSharedCheck_5807_ = !lean_is_exclusive(v___x_5795_);
if (v_isSharedCheck_5807_ == 0)
{
v___x_5798_ = v___x_5795_;
v_isShared_5799_ = v_isSharedCheck_5807_;
goto v_resetjp_5797_;
}
else
{
lean_inc(v_a_5796_);
lean_dec(v___x_5795_);
v___x_5798_ = lean_box(0);
v_isShared_5799_ = v_isSharedCheck_5807_;
goto v_resetjp_5797_;
}
v_resetjp_5797_:
{
lean_object* v_modified_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; uint64_t v___x_5803_; lean_object* v___x_5805_; 
v_modified_5800_ = lean_ctor_get(v_a_5796_, 1);
lean_inc_ref(v_modified_5800_);
lean_dec(v_a_5796_);
v___x_5801_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_5802_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5802_, 0, v_info_5791_);
lean_ctor_set(v___x_5802_, 1, v___x_5801_);
lean_ctor_set(v___x_5802_, 2, v_modified_5800_);
v___x_5803_ = lean_unbox_uint64(v_a_5794_);
lean_dec(v_a_5794_);
lean_ctor_set_uint64(v___x_5802_, sizeof(void*)*3, v___x_5803_);
if (v_isShared_5799_ == 0)
{
lean_ctor_set(v___x_5798_, 0, v___x_5802_);
v___x_5805_ = v___x_5798_;
goto v_reusejp_5804_;
}
else
{
lean_object* v_reuseFailAlloc_5806_; 
v_reuseFailAlloc_5806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5806_, 0, v___x_5802_);
v___x_5805_ = v_reuseFailAlloc_5806_;
goto v_reusejp_5804_;
}
v_reusejp_5804_:
{
return v___x_5805_;
}
}
}
else
{
lean_object* v_a_5808_; lean_object* v___x_5810_; uint8_t v_isShared_5811_; uint8_t v_isSharedCheck_5815_; 
lean_dec(v_a_5794_);
lean_dec_ref(v_info_5791_);
v_a_5808_ = lean_ctor_get(v___x_5795_, 0);
v_isSharedCheck_5815_ = !lean_is_exclusive(v___x_5795_);
if (v_isSharedCheck_5815_ == 0)
{
v___x_5810_ = v___x_5795_;
v_isShared_5811_ = v_isSharedCheck_5815_;
goto v_resetjp_5809_;
}
else
{
lean_inc(v_a_5808_);
lean_dec(v___x_5795_);
v___x_5810_ = lean_box(0);
v_isShared_5811_ = v_isSharedCheck_5815_;
goto v_resetjp_5809_;
}
v_resetjp_5809_:
{
lean_object* v___x_5813_; 
if (v_isShared_5811_ == 0)
{
v___x_5813_ = v___x_5810_;
goto v_reusejp_5812_;
}
else
{
lean_object* v_reuseFailAlloc_5814_; 
v_reuseFailAlloc_5814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5814_, 0, v_a_5808_);
v___x_5813_ = v_reuseFailAlloc_5814_;
goto v_reusejp_5812_;
}
v_reusejp_5812_:
{
return v___x_5813_;
}
}
}
}
else
{
lean_object* v_a_5816_; lean_object* v___x_5818_; uint8_t v_isShared_5819_; uint8_t v_isSharedCheck_5823_; 
lean_dec_ref(v_info_5791_);
v_a_5816_ = lean_ctor_get(v___x_5793_, 0);
v_isSharedCheck_5823_ = !lean_is_exclusive(v___x_5793_);
if (v_isSharedCheck_5823_ == 0)
{
v___x_5818_ = v___x_5793_;
v_isShared_5819_ = v_isSharedCheck_5823_;
goto v_resetjp_5817_;
}
else
{
lean_inc(v_a_5816_);
lean_dec(v___x_5793_);
v___x_5818_ = lean_box(0);
v_isShared_5819_ = v_isSharedCheck_5823_;
goto v_resetjp_5817_;
}
v_resetjp_5817_:
{
lean_object* v___x_5821_; 
if (v_isShared_5819_ == 0)
{
v___x_5821_ = v___x_5818_;
goto v_reusejp_5820_;
}
else
{
lean_object* v_reuseFailAlloc_5822_; 
v_reuseFailAlloc_5822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5822_, 0, v_a_5816_);
v___x_5821_ = v_reuseFailAlloc_5822_;
goto v_reusejp_5820_;
}
v_reusejp_5820_:
{
return v___x_5821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0___boxed(lean_object* v_info_5824_, lean_object* v_a_5825_){
_start:
{
lean_object* v_res_5826_; 
v_res_5826_ = l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(v_info_5824_);
return v_res_5826_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0(lean_object* v_path_5827_, lean_object* v___y_5828_, lean_object* v___y_5829_, lean_object* v___y_5830_, lean_object* v___y_5831_, lean_object* v___y_5832_, lean_object* v___y_5833_){
_start:
{
lean_object* v_log_5835_; uint8_t v_action_5836_; uint8_t v_wantsRebuild_5837_; lean_object* v_trace_5838_; lean_object* v_buildTime_5839_; lean_object* v___x_5841_; uint8_t v_isShared_5842_; uint8_t v_isSharedCheck_5859_; 
v_log_5835_ = lean_ctor_get(v___y_5833_, 0);
v_action_5836_ = lean_ctor_get_uint8(v___y_5833_, sizeof(void*)*3);
v_wantsRebuild_5837_ = lean_ctor_get_uint8(v___y_5833_, sizeof(void*)*3 + 1);
v_trace_5838_ = lean_ctor_get(v___y_5833_, 1);
v_buildTime_5839_ = lean_ctor_get(v___y_5833_, 2);
v_isSharedCheck_5859_ = !lean_is_exclusive(v___y_5833_);
if (v_isSharedCheck_5859_ == 0)
{
v___x_5841_ = v___y_5833_;
v_isShared_5842_ = v_isSharedCheck_5859_;
goto v_resetjp_5840_;
}
else
{
lean_inc(v_buildTime_5839_);
lean_inc(v_trace_5838_);
lean_inc(v_log_5835_);
lean_dec(v___y_5833_);
v___x_5841_ = lean_box(0);
v_isShared_5842_ = v_isSharedCheck_5859_;
goto v_resetjp_5840_;
}
v_resetjp_5840_:
{
lean_object* v___x_5843_; 
lean_inc_ref(v_path_5827_);
v___x_5843_ = l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(v_path_5827_);
if (lean_obj_tag(v___x_5843_) == 0)
{
lean_object* v_a_5844_; lean_object* v___x_5846_; 
lean_dec_ref(v_trace_5838_);
v_a_5844_ = lean_ctor_get(v___x_5843_, 0);
lean_inc(v_a_5844_);
lean_dec_ref(v___x_5843_);
if (v_isShared_5842_ == 0)
{
lean_ctor_set(v___x_5841_, 1, v_a_5844_);
v___x_5846_ = v___x_5841_;
goto v_reusejp_5845_;
}
else
{
lean_object* v_reuseFailAlloc_5848_; 
v_reuseFailAlloc_5848_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5848_, 0, v_log_5835_);
lean_ctor_set(v_reuseFailAlloc_5848_, 1, v_a_5844_);
lean_ctor_set(v_reuseFailAlloc_5848_, 2, v_buildTime_5839_);
lean_ctor_set_uint8(v_reuseFailAlloc_5848_, sizeof(void*)*3, v_action_5836_);
lean_ctor_set_uint8(v_reuseFailAlloc_5848_, sizeof(void*)*3 + 1, v_wantsRebuild_5837_);
v___x_5846_ = v_reuseFailAlloc_5848_;
goto v_reusejp_5845_;
}
v_reusejp_5845_:
{
lean_object* v___x_5847_; 
v___x_5847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5847_, 0, v_path_5827_);
lean_ctor_set(v___x_5847_, 1, v___x_5846_);
return v___x_5847_;
}
}
else
{
lean_object* v_a_5849_; lean_object* v___x_5850_; uint8_t v___x_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; lean_object* v___x_5854_; lean_object* v___x_5856_; 
lean_dec_ref(v_path_5827_);
v_a_5849_ = lean_ctor_get(v___x_5843_, 0);
lean_inc(v_a_5849_);
lean_dec_ref(v___x_5843_);
v___x_5850_ = lean_io_error_to_string(v_a_5849_);
v___x_5851_ = 3;
v___x_5852_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5852_, 0, v___x_5850_);
lean_ctor_set_uint8(v___x_5852_, sizeof(void*)*1, v___x_5851_);
v___x_5853_ = lean_array_get_size(v_log_5835_);
v___x_5854_ = lean_array_push(v_log_5835_, v___x_5852_);
if (v_isShared_5842_ == 0)
{
lean_ctor_set(v___x_5841_, 0, v___x_5854_);
v___x_5856_ = v___x_5841_;
goto v_reusejp_5855_;
}
else
{
lean_object* v_reuseFailAlloc_5858_; 
v_reuseFailAlloc_5858_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5858_, 0, v___x_5854_);
lean_ctor_set(v_reuseFailAlloc_5858_, 1, v_trace_5838_);
lean_ctor_set(v_reuseFailAlloc_5858_, 2, v_buildTime_5839_);
lean_ctor_set_uint8(v_reuseFailAlloc_5858_, sizeof(void*)*3, v_action_5836_);
lean_ctor_set_uint8(v_reuseFailAlloc_5858_, sizeof(void*)*3 + 1, v_wantsRebuild_5837_);
v___x_5856_ = v_reuseFailAlloc_5858_;
goto v_reusejp_5855_;
}
v_reusejp_5855_:
{
lean_object* v___x_5857_; 
v___x_5857_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5857_, 0, v___x_5853_);
lean_ctor_set(v___x_5857_, 1, v___x_5856_);
return v___x_5857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0___boxed(lean_object* v_path_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_, lean_object* v___y_5863_, lean_object* v___y_5864_, lean_object* v___y_5865_, lean_object* v___y_5866_, lean_object* v___y_5867_){
_start:
{
lean_object* v_res_5868_; 
v_res_5868_ = l_Lake_inputTextFile___redArg___lam__0(v_path_5860_, v___y_5861_, v___y_5862_, v___y_5863_, v___y_5864_, v___y_5865_, v___y_5866_);
lean_dec_ref(v___y_5865_);
lean_dec(v___y_5864_);
lean_dec(v___y_5863_);
lean_dec(v___y_5862_);
lean_dec_ref(v___y_5861_);
return v_res_5868_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg(lean_object* v_path_5869_, lean_object* v_a_5870_, lean_object* v_a_5871_, lean_object* v_a_5872_, lean_object* v_a_5873_, lean_object* v_a_5874_){
_start:
{
lean_object* v___f_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; 
v___f_5876_ = lean_alloc_closure((void*)(l_Lake_inputTextFile___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5876_, 0, v_path_5869_);
v___x_5877_ = l_Lake_instDataKindFilePath;
v___x_5878_ = lean_unsigned_to_nat(0u);
v___x_5879_ = ((lean_object*)(l_Lake_inputBinFile___redArg___closed__0));
v___x_5880_ = l_Lake_Job_async___redArg(v___x_5877_, v___f_5876_, v___x_5878_, v___x_5879_, v_a_5870_, v_a_5871_, v_a_5872_, v_a_5873_, v_a_5874_);
return v___x_5880_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___boxed(lean_object* v_path_5881_, lean_object* v_a_5882_, lean_object* v_a_5883_, lean_object* v_a_5884_, lean_object* v_a_5885_, lean_object* v_a_5886_, lean_object* v_a_5887_){
_start:
{
lean_object* v_res_5888_; 
v_res_5888_ = l_Lake_inputTextFile___redArg(v_path_5881_, v_a_5882_, v_a_5883_, v_a_5884_, v_a_5885_, v_a_5886_);
return v_res_5888_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile(lean_object* v_path_5889_, lean_object* v_a_5890_, lean_object* v_a_5891_, lean_object* v_a_5892_, lean_object* v_a_5893_, lean_object* v_a_5894_, lean_object* v_a_5895_){
_start:
{
lean_object* v___x_5897_; 
v___x_5897_ = l_Lake_inputTextFile___redArg(v_path_5889_, v_a_5890_, v_a_5891_, v_a_5892_, v_a_5893_, v_a_5894_);
return v___x_5897_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___boxed(lean_object* v_path_5898_, lean_object* v_a_5899_, lean_object* v_a_5900_, lean_object* v_a_5901_, lean_object* v_a_5902_, lean_object* v_a_5903_, lean_object* v_a_5904_, lean_object* v_a_5905_){
_start:
{
lean_object* v_res_5906_; 
v_res_5906_ = l_Lake_inputTextFile(v_path_5898_, v_a_5899_, v_a_5900_, v_a_5901_, v_a_5902_, v_a_5903_, v_a_5904_);
lean_dec_ref(v_a_5904_);
return v_res_5906_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg(lean_object* v_path_5907_, uint8_t v_text_5908_, lean_object* v_a_5909_, lean_object* v_a_5910_, lean_object* v_a_5911_, lean_object* v_a_5912_, lean_object* v_a_5913_){
_start:
{
if (v_text_5908_ == 0)
{
lean_object* v___x_5915_; 
v___x_5915_ = l_Lake_inputBinFile___redArg(v_path_5907_, v_a_5909_, v_a_5910_, v_a_5911_, v_a_5912_, v_a_5913_);
return v___x_5915_;
}
else
{
lean_object* v___x_5916_; 
v___x_5916_ = l_Lake_inputTextFile___redArg(v_path_5907_, v_a_5909_, v_a_5910_, v_a_5911_, v_a_5912_, v_a_5913_);
return v___x_5916_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg___boxed(lean_object* v_path_5917_, lean_object* v_text_5918_, lean_object* v_a_5919_, lean_object* v_a_5920_, lean_object* v_a_5921_, lean_object* v_a_5922_, lean_object* v_a_5923_, lean_object* v_a_5924_){
_start:
{
uint8_t v_text_boxed_5925_; lean_object* v_res_5926_; 
v_text_boxed_5925_ = lean_unbox(v_text_5918_);
v_res_5926_ = l_Lake_inputFile___redArg(v_path_5917_, v_text_boxed_5925_, v_a_5919_, v_a_5920_, v_a_5921_, v_a_5922_, v_a_5923_);
return v_res_5926_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile(lean_object* v_path_5927_, uint8_t v_text_5928_, lean_object* v_a_5929_, lean_object* v_a_5930_, lean_object* v_a_5931_, lean_object* v_a_5932_, lean_object* v_a_5933_, lean_object* v_a_5934_){
_start:
{
if (v_text_5928_ == 0)
{
lean_object* v___x_5936_; 
v___x_5936_ = l_Lake_inputBinFile___redArg(v_path_5927_, v_a_5929_, v_a_5930_, v_a_5931_, v_a_5932_, v_a_5933_);
return v___x_5936_;
}
else
{
lean_object* v___x_5937_; 
v___x_5937_ = l_Lake_inputTextFile___redArg(v_path_5927_, v_a_5929_, v_a_5930_, v_a_5931_, v_a_5932_, v_a_5933_);
return v___x_5937_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___boxed(lean_object* v_path_5938_, lean_object* v_text_5939_, lean_object* v_a_5940_, lean_object* v_a_5941_, lean_object* v_a_5942_, lean_object* v_a_5943_, lean_object* v_a_5944_, lean_object* v_a_5945_, lean_object* v_a_5946_){
_start:
{
uint8_t v_text_boxed_5947_; lean_object* v_res_5948_; 
v_text_boxed_5947_ = lean_unbox(v_text_5939_);
v_res_5948_ = l_Lake_inputFile(v_path_5938_, v_text_boxed_5947_, v_a_5940_, v_a_5941_, v_a_5942_, v_a_5943_, v_a_5944_, v_a_5945_);
lean_dec_ref(v_a_5945_);
return v_res_5948_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0(lean_object* v_x_5949_){
_start:
{
uint8_t v___x_5951_; lean_object* v___x_5952_; lean_object* v___x_5953_; 
v___x_5951_ = 1;
v___x_5952_ = lean_box(v___x_5951_);
v___x_5953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5953_, 0, v___x_5952_);
return v___x_5953_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0___boxed(lean_object* v_x_5954_, lean_object* v___y_5955_){
_start:
{
lean_object* v_res_5956_; 
v_res_5956_ = l_Lake_inputDir___lam__0(v_x_5954_);
lean_dec_ref(v_x_5954_);
return v_res_5956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(lean_object* v_filter_5957_, lean_object* v_as_5958_, size_t v_i_5959_, size_t v_stop_5960_, lean_object* v_b_5961_, lean_object* v___y_5962_){
_start:
{
lean_object* v_a_5965_; lean_object* v_a_5966_; uint8_t v___x_5970_; 
v___x_5970_ = lean_usize_dec_eq(v_i_5959_, v_stop_5960_);
if (v___x_5970_ == 0)
{
lean_object* v___x_5971_; uint8_t v___x_5972_; 
v___x_5971_ = lean_array_uget_borrowed(v_as_5958_, v_i_5959_);
v___x_5972_ = l_System_FilePath_isDir(v___x_5971_);
if (v___x_5972_ == 0)
{
lean_object* v___x_5973_; uint8_t v___x_5974_; 
lean_inc_ref(v_filter_5957_);
lean_inc(v___x_5971_);
v___x_5973_ = lean_apply_1(v_filter_5957_, v___x_5971_);
v___x_5974_ = lean_unbox(v___x_5973_);
if (v___x_5974_ == 0)
{
v_a_5965_ = v_b_5961_;
v_a_5966_ = v___y_5962_;
goto v___jp_5964_;
}
else
{
lean_object* v___x_5975_; 
lean_inc(v___x_5971_);
v___x_5975_ = lean_array_push(v_b_5961_, v___x_5971_);
v_a_5965_ = v___x_5975_;
v_a_5966_ = v___y_5962_;
goto v___jp_5964_;
}
}
else
{
v_a_5965_ = v_b_5961_;
v_a_5966_ = v___y_5962_;
goto v___jp_5964_;
}
}
else
{
lean_object* v___x_5976_; 
lean_dec_ref(v_filter_5957_);
v___x_5976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5976_, 0, v_b_5961_);
lean_ctor_set(v___x_5976_, 1, v___y_5962_);
return v___x_5976_;
}
v___jp_5964_:
{
size_t v___x_5967_; size_t v___x_5968_; 
v___x_5967_ = ((size_t)1ULL);
v___x_5968_ = lean_usize_add(v_i_5959_, v___x_5967_);
v_i_5959_ = v___x_5968_;
v_b_5961_ = v_a_5965_;
v___y_5962_ = v_a_5966_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg___boxed(lean_object* v_filter_5977_, lean_object* v_as_5978_, lean_object* v_i_5979_, lean_object* v_stop_5980_, lean_object* v_b_5981_, lean_object* v___y_5982_, lean_object* v___y_5983_){
_start:
{
size_t v_i_boxed_5984_; size_t v_stop_boxed_5985_; lean_object* v_res_5986_; 
v_i_boxed_5984_ = lean_unbox_usize(v_i_5979_);
lean_dec(v_i_5979_);
v_stop_boxed_5985_ = lean_unbox_usize(v_stop_5980_);
lean_dec(v_stop_5980_);
v_res_5986_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_5977_, v_as_5978_, v_i_boxed_5984_, v_stop_boxed_5985_, v_b_5981_, v___y_5982_);
lean_dec_ref(v_as_5978_);
return v_res_5986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(lean_object* v_as_5988_, lean_object* v_lo_5989_, lean_object* v_hi_5990_){
_start:
{
uint8_t v___x_5991_; 
v___x_5991_ = lean_nat_dec_lt(v_lo_5989_, v_hi_5990_);
if (v___x_5991_ == 0)
{
lean_dec(v_lo_5989_);
return v_as_5988_;
}
else
{
lean_object* v___f_5992_; lean_object* v___x_5993_; lean_object* v_fst_5994_; lean_object* v_snd_5995_; uint8_t v___x_5996_; 
v___f_5992_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___closed__0));
lean_inc(v_lo_5989_);
v___x_5993_ = l_Array_qpartition___redArg(v_as_5988_, v___f_5992_, v_lo_5989_, v_hi_5990_);
v_fst_5994_ = lean_ctor_get(v___x_5993_, 0);
lean_inc(v_fst_5994_);
v_snd_5995_ = lean_ctor_get(v___x_5993_, 1);
lean_inc(v_snd_5995_);
lean_dec_ref(v___x_5993_);
v___x_5996_ = lean_nat_dec_le(v_hi_5990_, v_fst_5994_);
if (v___x_5996_ == 0)
{
lean_object* v___x_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; 
v___x_5997_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_snd_5995_, v_lo_5989_, v_fst_5994_);
v___x_5998_ = lean_unsigned_to_nat(1u);
v___x_5999_ = lean_nat_add(v_fst_5994_, v___x_5998_);
lean_dec(v_fst_5994_);
v_as_5988_ = v___x_5997_;
v_lo_5989_ = v___x_5999_;
goto _start;
}
else
{
lean_dec(v_fst_5994_);
lean_dec(v_lo_5989_);
return v_snd_5995_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___boxed(lean_object* v_as_6001_, lean_object* v_lo_6002_, lean_object* v_hi_6003_){
_start:
{
lean_object* v_res_6004_; 
v_res_6004_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_as_6001_, v_lo_6002_, v_hi_6003_);
lean_dec(v_hi_6003_);
return v_res_6004_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1(lean_object* v_path_6007_, lean_object* v___f_6008_, lean_object* v_filter_6009_, lean_object* v___y_6010_, lean_object* v___y_6011_, lean_object* v___y_6012_, lean_object* v___y_6013_, lean_object* v___y_6014_, lean_object* v___y_6015_){
_start:
{
lean_object* v___y_6018_; lean_object* v___y_6019_; lean_object* v___y_6022_; lean_object* v___y_6023_; lean_object* v___y_6024_; lean_object* v___y_6025_; lean_object* v___y_6026_; lean_object* v___y_6029_; lean_object* v___y_6030_; lean_object* v___y_6031_; lean_object* v___y_6032_; lean_object* v___y_6033_; lean_object* v_log_6035_; uint8_t v_action_6036_; uint8_t v_wantsRebuild_6037_; lean_object* v_trace_6038_; lean_object* v_buildTime_6039_; lean_object* v___x_6040_; 
v_log_6035_ = lean_ctor_get(v___y_6015_, 0);
v_action_6036_ = lean_ctor_get_uint8(v___y_6015_, sizeof(void*)*3);
v_wantsRebuild_6037_ = lean_ctor_get_uint8(v___y_6015_, sizeof(void*)*3 + 1);
v_trace_6038_ = lean_ctor_get(v___y_6015_, 1);
v_buildTime_6039_ = lean_ctor_get(v___y_6015_, 2);
v___x_6040_ = l_System_FilePath_walkDir(v_path_6007_, v___f_6008_);
if (lean_obj_tag(v___x_6040_) == 0)
{
lean_object* v_a_6041_; lean_object* v___x_6042_; lean_object* v_a_6044_; lean_object* v_a_6045_; lean_object* v___y_6052_; lean_object* v___x_6055_; lean_object* v___x_6056_; uint8_t v___x_6057_; 
v_a_6041_ = lean_ctor_get(v___x_6040_, 0);
lean_inc(v_a_6041_);
lean_dec_ref(v___x_6040_);
v___x_6042_ = lean_unsigned_to_nat(0u);
v___x_6055_ = lean_array_get_size(v_a_6041_);
v___x_6056_ = ((lean_object*)(l_Lake_inputDir___lam__1___closed__0));
v___x_6057_ = lean_nat_dec_lt(v___x_6042_, v___x_6055_);
if (v___x_6057_ == 0)
{
lean_dec(v_a_6041_);
lean_dec_ref(v_filter_6009_);
v_a_6044_ = v___x_6056_;
v_a_6045_ = v___y_6015_;
goto v___jp_6043_;
}
else
{
uint8_t v___x_6058_; 
v___x_6058_ = lean_nat_dec_le(v___x_6055_, v___x_6055_);
if (v___x_6058_ == 0)
{
if (v___x_6057_ == 0)
{
lean_dec(v_a_6041_);
lean_dec_ref(v_filter_6009_);
v_a_6044_ = v___x_6056_;
v_a_6045_ = v___y_6015_;
goto v___jp_6043_;
}
else
{
size_t v___x_6059_; size_t v___x_6060_; lean_object* v___x_6061_; 
v___x_6059_ = ((size_t)0ULL);
v___x_6060_ = lean_usize_of_nat(v___x_6055_);
v___x_6061_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6009_, v_a_6041_, v___x_6059_, v___x_6060_, v___x_6056_, v___y_6015_);
lean_dec(v_a_6041_);
v___y_6052_ = v___x_6061_;
goto v___jp_6051_;
}
}
else
{
size_t v___x_6062_; size_t v___x_6063_; lean_object* v___x_6064_; 
v___x_6062_ = ((size_t)0ULL);
v___x_6063_ = lean_usize_of_nat(v___x_6055_);
v___x_6064_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6009_, v_a_6041_, v___x_6062_, v___x_6063_, v___x_6056_, v___y_6015_);
lean_dec(v_a_6041_);
v___y_6052_ = v___x_6064_;
goto v___jp_6051_;
}
}
v___jp_6043_:
{
lean_object* v___x_6046_; uint8_t v___x_6047_; 
v___x_6046_ = lean_array_get_size(v_a_6044_);
v___x_6047_ = lean_nat_dec_eq(v___x_6046_, v___x_6042_);
if (v___x_6047_ == 0)
{
lean_object* v___x_6048_; lean_object* v___x_6049_; uint8_t v___x_6050_; 
v___x_6048_ = lean_unsigned_to_nat(1u);
v___x_6049_ = lean_nat_sub(v___x_6046_, v___x_6048_);
v___x_6050_ = lean_nat_dec_le(v___x_6042_, v___x_6049_);
if (v___x_6050_ == 0)
{
lean_inc(v___x_6049_);
v___y_6029_ = v_a_6044_;
v___y_6030_ = v_a_6045_;
v___y_6031_ = v___x_6049_;
v___y_6032_ = v___x_6046_;
v___y_6033_ = v___x_6049_;
goto v___jp_6028_;
}
else
{
v___y_6029_ = v_a_6044_;
v___y_6030_ = v_a_6045_;
v___y_6031_ = v___x_6049_;
v___y_6032_ = v___x_6046_;
v___y_6033_ = v___x_6042_;
goto v___jp_6028_;
}
}
else
{
v___y_6018_ = v_a_6045_;
v___y_6019_ = v_a_6044_;
goto v___jp_6017_;
}
}
v___jp_6051_:
{
if (lean_obj_tag(v___y_6052_) == 0)
{
lean_object* v_a_6053_; lean_object* v_a_6054_; 
v_a_6053_ = lean_ctor_get(v___y_6052_, 0);
lean_inc(v_a_6053_);
v_a_6054_ = lean_ctor_get(v___y_6052_, 1);
lean_inc(v_a_6054_);
lean_dec_ref(v___y_6052_);
v_a_6044_ = v_a_6053_;
v_a_6045_ = v_a_6054_;
goto v___jp_6043_;
}
else
{
return v___y_6052_;
}
}
}
else
{
lean_object* v___x_6066_; uint8_t v_isShared_6067_; uint8_t v_isSharedCheck_6078_; 
lean_inc(v_buildTime_6039_);
lean_inc_ref(v_trace_6038_);
lean_inc_ref(v_log_6035_);
lean_dec_ref(v_filter_6009_);
v_isSharedCheck_6078_ = !lean_is_exclusive(v___y_6015_);
if (v_isSharedCheck_6078_ == 0)
{
lean_object* v_unused_6079_; lean_object* v_unused_6080_; lean_object* v_unused_6081_; 
v_unused_6079_ = lean_ctor_get(v___y_6015_, 2);
lean_dec(v_unused_6079_);
v_unused_6080_ = lean_ctor_get(v___y_6015_, 1);
lean_dec(v_unused_6080_);
v_unused_6081_ = lean_ctor_get(v___y_6015_, 0);
lean_dec(v_unused_6081_);
v___x_6066_ = v___y_6015_;
v_isShared_6067_ = v_isSharedCheck_6078_;
goto v_resetjp_6065_;
}
else
{
lean_dec(v___y_6015_);
v___x_6066_ = lean_box(0);
v_isShared_6067_ = v_isSharedCheck_6078_;
goto v_resetjp_6065_;
}
v_resetjp_6065_:
{
lean_object* v_a_6068_; lean_object* v___x_6069_; uint8_t v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6075_; 
v_a_6068_ = lean_ctor_get(v___x_6040_, 0);
lean_inc(v_a_6068_);
lean_dec_ref(v___x_6040_);
v___x_6069_ = lean_io_error_to_string(v_a_6068_);
v___x_6070_ = 3;
v___x_6071_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6071_, 0, v___x_6069_);
lean_ctor_set_uint8(v___x_6071_, sizeof(void*)*1, v___x_6070_);
v___x_6072_ = lean_array_get_size(v_log_6035_);
v___x_6073_ = lean_array_push(v_log_6035_, v___x_6071_);
if (v_isShared_6067_ == 0)
{
lean_ctor_set(v___x_6066_, 0, v___x_6073_);
v___x_6075_ = v___x_6066_;
goto v_reusejp_6074_;
}
else
{
lean_object* v_reuseFailAlloc_6077_; 
v_reuseFailAlloc_6077_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6077_, 0, v___x_6073_);
lean_ctor_set(v_reuseFailAlloc_6077_, 1, v_trace_6038_);
lean_ctor_set(v_reuseFailAlloc_6077_, 2, v_buildTime_6039_);
lean_ctor_set_uint8(v_reuseFailAlloc_6077_, sizeof(void*)*3, v_action_6036_);
lean_ctor_set_uint8(v_reuseFailAlloc_6077_, sizeof(void*)*3 + 1, v_wantsRebuild_6037_);
v___x_6075_ = v_reuseFailAlloc_6077_;
goto v_reusejp_6074_;
}
v_reusejp_6074_:
{
lean_object* v___x_6076_; 
v___x_6076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6076_, 0, v___x_6072_);
lean_ctor_set(v___x_6076_, 1, v___x_6075_);
return v___x_6076_;
}
}
}
v___jp_6017_:
{
lean_object* v___x_6020_; 
v___x_6020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6020_, 0, v___y_6019_);
lean_ctor_set(v___x_6020_, 1, v___y_6018_);
return v___x_6020_;
}
v___jp_6021_:
{
lean_object* v___x_6027_; 
lean_dec(v___y_6024_);
v___x_6027_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v___y_6023_, v___y_6025_, v___y_6026_);
lean_dec(v___y_6026_);
v___y_6018_ = v___y_6022_;
v___y_6019_ = v___x_6027_;
goto v___jp_6017_;
}
v___jp_6028_:
{
uint8_t v___x_6034_; 
v___x_6034_ = lean_nat_dec_le(v___y_6033_, v___y_6031_);
if (v___x_6034_ == 0)
{
lean_dec(v___y_6031_);
lean_inc(v___y_6033_);
v___y_6022_ = v___y_6030_;
v___y_6023_ = v___y_6029_;
v___y_6024_ = v___y_6032_;
v___y_6025_ = v___y_6033_;
v___y_6026_ = v___y_6033_;
goto v___jp_6021_;
}
else
{
v___y_6022_ = v___y_6030_;
v___y_6023_ = v___y_6029_;
v___y_6024_ = v___y_6032_;
v___y_6025_ = v___y_6033_;
v___y_6026_ = v___y_6031_;
goto v___jp_6021_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1___boxed(lean_object* v_path_6082_, lean_object* v___f_6083_, lean_object* v_filter_6084_, lean_object* v___y_6085_, lean_object* v___y_6086_, lean_object* v___y_6087_, lean_object* v___y_6088_, lean_object* v___y_6089_, lean_object* v___y_6090_, lean_object* v___y_6091_){
_start:
{
lean_object* v_res_6092_; 
v_res_6092_ = l_Lake_inputDir___lam__1(v_path_6082_, v___f_6083_, v_filter_6084_, v___y_6085_, v___y_6086_, v___y_6087_, v___y_6088_, v___y_6089_, v___y_6090_);
lean_dec_ref(v___y_6089_);
lean_dec(v___y_6088_);
lean_dec(v___y_6087_);
lean_dec(v___y_6086_);
lean_dec_ref(v___y_6085_);
return v_res_6092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(uint8_t v_text_6093_, size_t v_sz_6094_, size_t v_i_6095_, lean_object* v_bs_6096_, lean_object* v___y_6097_, lean_object* v___y_6098_, lean_object* v___y_6099_, lean_object* v___y_6100_, lean_object* v___y_6101_, lean_object* v___y_6102_){
_start:
{
uint8_t v___x_6104_; 
v___x_6104_ = lean_usize_dec_lt(v_i_6095_, v_sz_6094_);
if (v___x_6104_ == 0)
{
lean_object* v___x_6105_; 
lean_dec_ref(v___y_6101_);
lean_dec(v___y_6100_);
lean_dec(v___y_6099_);
lean_dec(v___y_6098_);
lean_dec_ref(v___y_6097_);
v___x_6105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6105_, 0, v_bs_6096_);
lean_ctor_set(v___x_6105_, 1, v___y_6102_);
return v___x_6105_;
}
else
{
lean_object* v_v_6106_; lean_object* v___x_6107_; lean_object* v_bs_x27_6108_; lean_object* v___y_6110_; 
v_v_6106_ = lean_array_uget(v_bs_6096_, v_i_6095_);
v___x_6107_ = lean_unsigned_to_nat(0u);
v_bs_x27_6108_ = lean_array_uset(v_bs_6096_, v_i_6095_, v___x_6107_);
if (v_text_6093_ == 0)
{
lean_object* v___x_6115_; 
lean_inc_ref(v___y_6101_);
lean_inc(v___y_6100_);
lean_inc(v___y_6099_);
lean_inc(v___y_6098_);
lean_inc_ref(v___y_6097_);
v___x_6115_ = l_Lake_inputBinFile___redArg(v_v_6106_, v___y_6097_, v___y_6098_, v___y_6099_, v___y_6100_, v___y_6101_);
v___y_6110_ = v___x_6115_;
goto v___jp_6109_;
}
else
{
lean_object* v___x_6116_; 
lean_inc_ref(v___y_6101_);
lean_inc(v___y_6100_);
lean_inc(v___y_6099_);
lean_inc(v___y_6098_);
lean_inc_ref(v___y_6097_);
v___x_6116_ = l_Lake_inputTextFile___redArg(v_v_6106_, v___y_6097_, v___y_6098_, v___y_6099_, v___y_6100_, v___y_6101_);
v___y_6110_ = v___x_6116_;
goto v___jp_6109_;
}
v___jp_6109_:
{
size_t v___x_6111_; size_t v___x_6112_; lean_object* v___x_6113_; 
v___x_6111_ = ((size_t)1ULL);
v___x_6112_ = lean_usize_add(v_i_6095_, v___x_6111_);
v___x_6113_ = lean_array_uset(v_bs_x27_6108_, v_i_6095_, v___y_6110_);
v_i_6095_ = v___x_6112_;
v_bs_6096_ = v___x_6113_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0___boxed(lean_object* v_text_6117_, lean_object* v_sz_6118_, lean_object* v_i_6119_, lean_object* v_bs_6120_, lean_object* v___y_6121_, lean_object* v___y_6122_, lean_object* v___y_6123_, lean_object* v___y_6124_, lean_object* v___y_6125_, lean_object* v___y_6126_, lean_object* v___y_6127_){
_start:
{
uint8_t v_text_boxed_6128_; size_t v_sz_boxed_6129_; size_t v_i_boxed_6130_; lean_object* v_res_6131_; 
v_text_boxed_6128_ = lean_unbox(v_text_6117_);
v_sz_boxed_6129_ = lean_unbox_usize(v_sz_6118_);
lean_dec(v_sz_6118_);
v_i_boxed_6130_ = lean_unbox_usize(v_i_6119_);
lean_dec(v_i_6119_);
v_res_6131_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(v_text_boxed_6128_, v_sz_boxed_6129_, v_i_boxed_6130_, v_bs_6120_, v___y_6121_, v___y_6122_, v___y_6123_, v___y_6124_, v___y_6125_, v___y_6126_);
return v_res_6131_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2(uint8_t v_text_6132_, lean_object* v_path_6133_, lean_object* v_ps_6134_, lean_object* v___y_6135_, lean_object* v___y_6136_, lean_object* v___y_6137_, lean_object* v___y_6138_, lean_object* v___y_6139_, lean_object* v___y_6140_){
_start:
{
size_t v_sz_6142_; size_t v___x_6143_; lean_object* v___x_6144_; 
v_sz_6142_ = lean_array_size(v_ps_6134_);
v___x_6143_ = ((size_t)0ULL);
v___x_6144_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(v_text_6132_, v_sz_6142_, v___x_6143_, v_ps_6134_, v___y_6135_, v___y_6136_, v___y_6137_, v___y_6138_, v___y_6139_, v___y_6140_);
if (lean_obj_tag(v___x_6144_) == 0)
{
lean_object* v_a_6145_; lean_object* v_a_6146_; lean_object* v___x_6148_; uint8_t v_isShared_6149_; uint8_t v_isSharedCheck_6154_; 
v_a_6145_ = lean_ctor_get(v___x_6144_, 0);
v_a_6146_ = lean_ctor_get(v___x_6144_, 1);
v_isSharedCheck_6154_ = !lean_is_exclusive(v___x_6144_);
if (v_isSharedCheck_6154_ == 0)
{
v___x_6148_ = v___x_6144_;
v_isShared_6149_ = v_isSharedCheck_6154_;
goto v_resetjp_6147_;
}
else
{
lean_inc(v_a_6146_);
lean_inc(v_a_6145_);
lean_dec(v___x_6144_);
v___x_6148_ = lean_box(0);
v_isShared_6149_ = v_isSharedCheck_6154_;
goto v_resetjp_6147_;
}
v_resetjp_6147_:
{
lean_object* v___x_6150_; lean_object* v___x_6152_; 
v___x_6150_ = l_Lake_Job_collectArray___redArg(v_a_6145_, v_path_6133_);
lean_dec(v_a_6145_);
if (v_isShared_6149_ == 0)
{
lean_ctor_set(v___x_6148_, 0, v___x_6150_);
v___x_6152_ = v___x_6148_;
goto v_reusejp_6151_;
}
else
{
lean_object* v_reuseFailAlloc_6153_; 
v_reuseFailAlloc_6153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6153_, 0, v___x_6150_);
lean_ctor_set(v_reuseFailAlloc_6153_, 1, v_a_6146_);
v___x_6152_ = v_reuseFailAlloc_6153_;
goto v_reusejp_6151_;
}
v_reusejp_6151_:
{
return v___x_6152_;
}
}
}
else
{
lean_object* v_a_6155_; lean_object* v_a_6156_; lean_object* v___x_6158_; uint8_t v_isShared_6159_; uint8_t v_isSharedCheck_6163_; 
lean_dec_ref(v_path_6133_);
v_a_6155_ = lean_ctor_get(v___x_6144_, 0);
v_a_6156_ = lean_ctor_get(v___x_6144_, 1);
v_isSharedCheck_6163_ = !lean_is_exclusive(v___x_6144_);
if (v_isSharedCheck_6163_ == 0)
{
v___x_6158_ = v___x_6144_;
v_isShared_6159_ = v_isSharedCheck_6163_;
goto v_resetjp_6157_;
}
else
{
lean_inc(v_a_6156_);
lean_inc(v_a_6155_);
lean_dec(v___x_6144_);
v___x_6158_ = lean_box(0);
v_isShared_6159_ = v_isSharedCheck_6163_;
goto v_resetjp_6157_;
}
v_resetjp_6157_:
{
lean_object* v___x_6161_; 
if (v_isShared_6159_ == 0)
{
v___x_6161_ = v___x_6158_;
goto v_reusejp_6160_;
}
else
{
lean_object* v_reuseFailAlloc_6162_; 
v_reuseFailAlloc_6162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6162_, 0, v_a_6155_);
lean_ctor_set(v_reuseFailAlloc_6162_, 1, v_a_6156_);
v___x_6161_ = v_reuseFailAlloc_6162_;
goto v_reusejp_6160_;
}
v_reusejp_6160_:
{
return v___x_6161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2___boxed(lean_object* v_text_6164_, lean_object* v_path_6165_, lean_object* v_ps_6166_, lean_object* v___y_6167_, lean_object* v___y_6168_, lean_object* v___y_6169_, lean_object* v___y_6170_, lean_object* v___y_6171_, lean_object* v___y_6172_, lean_object* v___y_6173_){
_start:
{
uint8_t v_text_boxed_6174_; lean_object* v_res_6175_; 
v_text_boxed_6174_ = lean_unbox(v_text_6164_);
v_res_6175_ = l_Lake_inputDir___lam__2(v_text_boxed_6174_, v_path_6165_, v_ps_6166_, v___y_6167_, v___y_6168_, v___y_6169_, v___y_6170_, v___y_6171_, v___y_6172_);
return v_res_6175_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir(lean_object* v_path_6177_, uint8_t v_text_6178_, lean_object* v_filter_6179_, lean_object* v_a_6180_, lean_object* v_a_6181_, lean_object* v_a_6182_, lean_object* v_a_6183_, lean_object* v_a_6184_, lean_object* v_a_6185_){
_start:
{
lean_object* v___f_6187_; lean_object* v___f_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___f_6194_; uint8_t v___x_6195_; lean_object* v___x_6196_; 
v___f_6187_ = ((lean_object*)(l_Lake_inputDir___closed__0));
lean_inc_ref(v_path_6177_);
v___f_6188_ = lean_alloc_closure((void*)(l_Lake_inputDir___lam__1___boxed), 10, 3);
lean_closure_set(v___f_6188_, 0, v_path_6177_);
lean_closure_set(v___f_6188_, 1, v___f_6187_);
lean_closure_set(v___f_6188_, 2, v_filter_6179_);
v___x_6189_ = lean_box(0);
v___x_6190_ = lean_unsigned_to_nat(0u);
v___x_6191_ = ((lean_object*)(l_Lake_inputBinFile___redArg___closed__0));
lean_inc_ref(v_a_6184_);
lean_inc(v_a_6183_);
lean_inc(v_a_6182_);
lean_inc(v_a_6181_);
lean_inc_ref(v_a_6180_);
v___x_6192_ = l_Lake_Job_async___redArg(v___x_6189_, v___f_6188_, v___x_6190_, v___x_6191_, v_a_6180_, v_a_6181_, v_a_6182_, v_a_6183_, v_a_6184_);
v___x_6193_ = lean_box(v_text_6178_);
v___f_6194_ = lean_alloc_closure((void*)(l_Lake_inputDir___lam__2___boxed), 10, 2);
lean_closure_set(v___f_6194_, 0, v___x_6193_);
lean_closure_set(v___f_6194_, 1, v_path_6177_);
v___x_6195_ = 0;
v___x_6196_ = l_Lake_Job_bindM___redArg(v___x_6189_, v___x_6192_, v___f_6194_, v___x_6190_, v___x_6195_, v_a_6180_, v_a_6181_, v_a_6182_, v_a_6183_, v_a_6184_, v_a_6185_);
return v___x_6196_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___boxed(lean_object* v_path_6197_, lean_object* v_text_6198_, lean_object* v_filter_6199_, lean_object* v_a_6200_, lean_object* v_a_6201_, lean_object* v_a_6202_, lean_object* v_a_6203_, lean_object* v_a_6204_, lean_object* v_a_6205_, lean_object* v_a_6206_){
_start:
{
uint8_t v_text_boxed_6207_; lean_object* v_res_6208_; 
v_text_boxed_6207_ = lean_unbox(v_text_6198_);
v_res_6208_ = l_Lake_inputDir(v_path_6197_, v_text_boxed_6207_, v_filter_6199_, v_a_6200_, v_a_6201_, v_a_6202_, v_a_6203_, v_a_6204_, v_a_6205_);
return v_res_6208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1(lean_object* v_n_6209_, lean_object* v_as_6210_, lean_object* v_lo_6211_, lean_object* v_hi_6212_, lean_object* v_w_6213_, lean_object* v_hlo_6214_, lean_object* v_hhi_6215_){
_start:
{
lean_object* v___x_6216_; 
v___x_6216_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_as_6210_, v_lo_6211_, v_hi_6212_);
return v___x_6216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___boxed(lean_object* v_n_6217_, lean_object* v_as_6218_, lean_object* v_lo_6219_, lean_object* v_hi_6220_, lean_object* v_w_6221_, lean_object* v_hlo_6222_, lean_object* v_hhi_6223_){
_start:
{
lean_object* v_res_6224_; 
v_res_6224_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1(v_n_6217_, v_as_6218_, v_lo_6219_, v_hi_6220_, v_w_6221_, v_hlo_6222_, v_hhi_6223_);
lean_dec(v_hi_6220_);
lean_dec(v_n_6217_);
return v_res_6224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2(lean_object* v_filter_6225_, lean_object* v_as_6226_, size_t v_i_6227_, size_t v_stop_6228_, lean_object* v_b_6229_, lean_object* v___y_6230_, lean_object* v___y_6231_, lean_object* v___y_6232_, lean_object* v___y_6233_, lean_object* v___y_6234_, lean_object* v___y_6235_){
_start:
{
lean_object* v___x_6237_; 
v___x_6237_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6225_, v_as_6226_, v_i_6227_, v_stop_6228_, v_b_6229_, v___y_6235_);
return v___x_6237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___boxed(lean_object* v_filter_6238_, lean_object* v_as_6239_, lean_object* v_i_6240_, lean_object* v_stop_6241_, lean_object* v_b_6242_, lean_object* v___y_6243_, lean_object* v___y_6244_, lean_object* v___y_6245_, lean_object* v___y_6246_, lean_object* v___y_6247_, lean_object* v___y_6248_, lean_object* v___y_6249_){
_start:
{
size_t v_i_boxed_6250_; size_t v_stop_boxed_6251_; lean_object* v_res_6252_; 
v_i_boxed_6250_ = lean_unbox_usize(v_i_6240_);
lean_dec(v_i_6240_);
v_stop_boxed_6251_ = lean_unbox_usize(v_stop_6241_);
lean_dec(v_stop_6241_);
v_res_6252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2(v_filter_6238_, v_as_6239_, v_i_boxed_6250_, v_stop_boxed_6251_, v_b_6242_, v___y_6243_, v___y_6244_, v___y_6245_, v___y_6246_, v___y_6247_, v___y_6248_);
lean_dec_ref(v___y_6247_);
lean_dec(v___y_6246_);
lean_dec(v___y_6245_);
lean_dec(v___y_6244_);
lean_dec_ref(v___y_6243_);
lean_dec_ref(v_as_6239_);
return v_res_6252_;
}
}
LEAN_EXPORT uint64_t l_Lake_buildO___lam__0(uint64_t v_ts_6253_, lean_object* v_t_6254_){
_start:
{
uint64_t v___x_6255_; uint64_t v___x_6256_; uint64_t v___x_6257_; uint64_t v___x_6258_; 
v___x_6255_ = l_Lake_Hash_nil;
v___x_6256_ = lean_string_hash(v_t_6254_);
v___x_6257_ = lean_uint64_mix_hash(v___x_6255_, v___x_6256_);
v___x_6258_ = lean_uint64_mix_hash(v_ts_6253_, v___x_6257_);
return v___x_6258_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__0___boxed(lean_object* v_ts_6259_, lean_object* v_t_6260_){
_start:
{
uint64_t v_ts_boxed_6261_; uint64_t v_res_6262_; lean_object* v_r_6263_; 
v_ts_boxed_6261_ = lean_unbox_uint64(v_ts_6259_);
lean_dec_ref(v_ts_6259_);
v_res_6262_ = l_Lake_buildO___lam__0(v_ts_boxed_6261_, v_t_6260_);
lean_dec_ref(v_t_6260_);
v_r_6263_ = lean_box_uint64(v_res_6262_);
return v_r_6263_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1(lean_object* v_oFile_6264_, lean_object* v_srcFile_6265_, lean_object* v___x_6266_, lean_object* v_compiler_6267_, lean_object* v___y_6268_, lean_object* v___y_6269_, lean_object* v___y_6270_, lean_object* v___y_6271_, lean_object* v___y_6272_, lean_object* v___y_6273_){
_start:
{
lean_object* v_log_6275_; uint8_t v_action_6276_; uint8_t v_wantsRebuild_6277_; lean_object* v_trace_6278_; lean_object* v_buildTime_6279_; lean_object* v___x_6281_; uint8_t v_isShared_6282_; uint8_t v_isSharedCheck_6308_; 
v_log_6275_ = lean_ctor_get(v___y_6273_, 0);
v_action_6276_ = lean_ctor_get_uint8(v___y_6273_, sizeof(void*)*3);
v_wantsRebuild_6277_ = lean_ctor_get_uint8(v___y_6273_, sizeof(void*)*3 + 1);
v_trace_6278_ = lean_ctor_get(v___y_6273_, 1);
v_buildTime_6279_ = lean_ctor_get(v___y_6273_, 2);
v_isSharedCheck_6308_ = !lean_is_exclusive(v___y_6273_);
if (v_isSharedCheck_6308_ == 0)
{
v___x_6281_ = v___y_6273_;
v_isShared_6282_ = v_isSharedCheck_6308_;
goto v_resetjp_6280_;
}
else
{
lean_inc(v_buildTime_6279_);
lean_inc(v_trace_6278_);
lean_inc(v_log_6275_);
lean_dec(v___y_6273_);
v___x_6281_ = lean_box(0);
v_isShared_6282_ = v_isSharedCheck_6308_;
goto v_resetjp_6280_;
}
v_resetjp_6280_:
{
lean_object* v___x_6283_; 
v___x_6283_ = l_Lake_compileO(v_oFile_6264_, v_srcFile_6265_, v___x_6266_, v_compiler_6267_, v_log_6275_);
if (lean_obj_tag(v___x_6283_) == 0)
{
lean_object* v_a_6284_; lean_object* v_a_6285_; lean_object* v___x_6287_; uint8_t v_isShared_6288_; uint8_t v_isSharedCheck_6295_; 
v_a_6284_ = lean_ctor_get(v___x_6283_, 0);
v_a_6285_ = lean_ctor_get(v___x_6283_, 1);
v_isSharedCheck_6295_ = !lean_is_exclusive(v___x_6283_);
if (v_isSharedCheck_6295_ == 0)
{
v___x_6287_ = v___x_6283_;
v_isShared_6288_ = v_isSharedCheck_6295_;
goto v_resetjp_6286_;
}
else
{
lean_inc(v_a_6285_);
lean_inc(v_a_6284_);
lean_dec(v___x_6283_);
v___x_6287_ = lean_box(0);
v_isShared_6288_ = v_isSharedCheck_6295_;
goto v_resetjp_6286_;
}
v_resetjp_6286_:
{
lean_object* v___x_6290_; 
if (v_isShared_6282_ == 0)
{
lean_ctor_set(v___x_6281_, 0, v_a_6285_);
v___x_6290_ = v___x_6281_;
goto v_reusejp_6289_;
}
else
{
lean_object* v_reuseFailAlloc_6294_; 
v_reuseFailAlloc_6294_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6294_, 0, v_a_6285_);
lean_ctor_set(v_reuseFailAlloc_6294_, 1, v_trace_6278_);
lean_ctor_set(v_reuseFailAlloc_6294_, 2, v_buildTime_6279_);
lean_ctor_set_uint8(v_reuseFailAlloc_6294_, sizeof(void*)*3, v_action_6276_);
lean_ctor_set_uint8(v_reuseFailAlloc_6294_, sizeof(void*)*3 + 1, v_wantsRebuild_6277_);
v___x_6290_ = v_reuseFailAlloc_6294_;
goto v_reusejp_6289_;
}
v_reusejp_6289_:
{
lean_object* v___x_6292_; 
if (v_isShared_6288_ == 0)
{
lean_ctor_set(v___x_6287_, 1, v___x_6290_);
v___x_6292_ = v___x_6287_;
goto v_reusejp_6291_;
}
else
{
lean_object* v_reuseFailAlloc_6293_; 
v_reuseFailAlloc_6293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6293_, 0, v_a_6284_);
lean_ctor_set(v_reuseFailAlloc_6293_, 1, v___x_6290_);
v___x_6292_ = v_reuseFailAlloc_6293_;
goto v_reusejp_6291_;
}
v_reusejp_6291_:
{
return v___x_6292_;
}
}
}
}
else
{
lean_object* v_a_6296_; lean_object* v_a_6297_; lean_object* v___x_6299_; uint8_t v_isShared_6300_; uint8_t v_isSharedCheck_6307_; 
v_a_6296_ = lean_ctor_get(v___x_6283_, 0);
v_a_6297_ = lean_ctor_get(v___x_6283_, 1);
v_isSharedCheck_6307_ = !lean_is_exclusive(v___x_6283_);
if (v_isSharedCheck_6307_ == 0)
{
v___x_6299_ = v___x_6283_;
v_isShared_6300_ = v_isSharedCheck_6307_;
goto v_resetjp_6298_;
}
else
{
lean_inc(v_a_6297_);
lean_inc(v_a_6296_);
lean_dec(v___x_6283_);
v___x_6299_ = lean_box(0);
v_isShared_6300_ = v_isSharedCheck_6307_;
goto v_resetjp_6298_;
}
v_resetjp_6298_:
{
lean_object* v___x_6302_; 
if (v_isShared_6282_ == 0)
{
lean_ctor_set(v___x_6281_, 0, v_a_6297_);
v___x_6302_ = v___x_6281_;
goto v_reusejp_6301_;
}
else
{
lean_object* v_reuseFailAlloc_6306_; 
v_reuseFailAlloc_6306_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6306_, 0, v_a_6297_);
lean_ctor_set(v_reuseFailAlloc_6306_, 1, v_trace_6278_);
lean_ctor_set(v_reuseFailAlloc_6306_, 2, v_buildTime_6279_);
lean_ctor_set_uint8(v_reuseFailAlloc_6306_, sizeof(void*)*3, v_action_6276_);
lean_ctor_set_uint8(v_reuseFailAlloc_6306_, sizeof(void*)*3 + 1, v_wantsRebuild_6277_);
v___x_6302_ = v_reuseFailAlloc_6306_;
goto v_reusejp_6301_;
}
v_reusejp_6301_:
{
lean_object* v___x_6304_; 
if (v_isShared_6300_ == 0)
{
lean_ctor_set(v___x_6299_, 1, v___x_6302_);
v___x_6304_ = v___x_6299_;
goto v_reusejp_6303_;
}
else
{
lean_object* v_reuseFailAlloc_6305_; 
v_reuseFailAlloc_6305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6305_, 0, v_a_6296_);
lean_ctor_set(v_reuseFailAlloc_6305_, 1, v___x_6302_);
v___x_6304_ = v_reuseFailAlloc_6305_;
goto v_reusejp_6303_;
}
v_reusejp_6303_:
{
return v___x_6304_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1___boxed(lean_object* v_oFile_6309_, lean_object* v_srcFile_6310_, lean_object* v___x_6311_, lean_object* v_compiler_6312_, lean_object* v___y_6313_, lean_object* v___y_6314_, lean_object* v___y_6315_, lean_object* v___y_6316_, lean_object* v___y_6317_, lean_object* v___y_6318_, lean_object* v___y_6319_){
_start:
{
lean_object* v_res_6320_; 
v_res_6320_ = l_Lake_buildO___lam__1(v_oFile_6309_, v_srcFile_6310_, v___x_6311_, v_compiler_6312_, v___y_6313_, v___y_6314_, v___y_6315_, v___y_6316_, v___y_6317_, v___y_6318_);
lean_dec_ref(v___y_6317_);
lean_dec(v___y_6316_);
lean_dec(v___y_6315_);
lean_dec(v___y_6314_);
lean_dec_ref(v___y_6313_);
lean_dec_ref(v___x_6311_);
return v_res_6320_;
}
}
static lean_object* _init_l_Lake_buildO___lam__2___boxed__const__1(void){
_start:
{
uint64_t v___x_6324_; lean_object* v___x_6325_; 
v___x_6324_ = l_Lake_Hash_nil;
v___x_6325_ = lean_box_uint64(v___x_6324_);
return v___x_6325_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2(lean_object* v_traceArgs_6326_, lean_object* v___f_6327_, lean_object* v_extraDepTrace_6328_, lean_object* v_weakArgs_6329_, lean_object* v_oFile_6330_, lean_object* v_compiler_6331_, lean_object* v___x_6332_, lean_object* v___f_6333_, lean_object* v_srcFile_6334_, lean_object* v___y_6335_, lean_object* v___y_6336_, lean_object* v___y_6337_, lean_object* v___y_6338_, lean_object* v___y_6339_, lean_object* v___y_6340_){
_start:
{
lean_object* v_log_6342_; uint8_t v_action_6343_; uint8_t v_wantsRebuild_6344_; lean_object* v_trace_6345_; lean_object* v_buildTime_6346_; lean_object* v___x_6348_; uint8_t v_isShared_6349_; uint8_t v_isSharedCheck_6431_; 
v_log_6342_ = lean_ctor_get(v___y_6340_, 0);
v_action_6343_ = lean_ctor_get_uint8(v___y_6340_, sizeof(void*)*3);
v_wantsRebuild_6344_ = lean_ctor_get_uint8(v___y_6340_, sizeof(void*)*3 + 1);
v_trace_6345_ = lean_ctor_get(v___y_6340_, 1);
v_buildTime_6346_ = lean_ctor_get(v___y_6340_, 2);
v_isSharedCheck_6431_ = !lean_is_exclusive(v___y_6340_);
if (v_isSharedCheck_6431_ == 0)
{
v___x_6348_ = v___y_6340_;
v_isShared_6349_ = v_isSharedCheck_6431_;
goto v_resetjp_6347_;
}
else
{
lean_inc(v_buildTime_6346_);
lean_inc(v_trace_6345_);
lean_inc(v_log_6342_);
lean_dec(v___y_6340_);
v___x_6348_ = lean_box(0);
v_isShared_6349_ = v_isSharedCheck_6431_;
goto v_resetjp_6347_;
}
v_resetjp_6347_:
{
lean_object* v___x_6350_; lean_object* v___x_6351_; uint64_t v___y_6353_; uint64_t v___x_6416_; lean_object* v___x_6417_; lean_object* v___x_6418_; uint8_t v___x_6419_; 
v___x_6350_ = l_Lake_platformTrace;
v___x_6351_ = l_Lake_BuildTrace_mix(v_trace_6345_, v___x_6350_);
v___x_6416_ = l_Lake_Hash_nil;
v___x_6417_ = lean_unsigned_to_nat(0u);
v___x_6418_ = lean_array_get_size(v_traceArgs_6326_);
v___x_6419_ = lean_nat_dec_lt(v___x_6417_, v___x_6418_);
if (v___x_6419_ == 0)
{
lean_dec_ref(v___f_6333_);
lean_dec_ref(v___x_6332_);
v___y_6353_ = v___x_6416_;
goto v___jp_6352_;
}
else
{
uint8_t v___x_6420_; 
v___x_6420_ = lean_nat_dec_le(v___x_6418_, v___x_6418_);
if (v___x_6420_ == 0)
{
if (v___x_6419_ == 0)
{
lean_dec_ref(v___f_6333_);
lean_dec_ref(v___x_6332_);
v___y_6353_ = v___x_6416_;
goto v___jp_6352_;
}
else
{
size_t v___x_6421_; size_t v___x_6422_; lean_object* v___x_6423_; lean_object* v___x_6424_; uint64_t v___x_6425_; 
v___x_6421_ = ((size_t)0ULL);
v___x_6422_ = lean_usize_of_nat(v___x_6418_);
v___x_6423_ = l_Lake_buildO___lam__2___boxed__const__1;
lean_inc_ref(v_traceArgs_6326_);
v___x_6424_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_6332_, v___f_6333_, v_traceArgs_6326_, v___x_6421_, v___x_6422_, v___x_6423_);
v___x_6425_ = lean_unbox_uint64(v___x_6424_);
lean_dec(v___x_6424_);
v___y_6353_ = v___x_6425_;
goto v___jp_6352_;
}
}
else
{
size_t v___x_6426_; size_t v___x_6427_; lean_object* v___x_6428_; lean_object* v___x_6429_; uint64_t v___x_6430_; 
v___x_6426_ = ((size_t)0ULL);
v___x_6427_ = lean_usize_of_nat(v___x_6418_);
v___x_6428_ = l_Lake_buildO___lam__2___boxed__const__1;
lean_inc_ref(v_traceArgs_6326_);
v___x_6429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_6332_, v___f_6333_, v_traceArgs_6326_, v___x_6426_, v___x_6427_, v___x_6428_);
v___x_6430_ = lean_unbox_uint64(v___x_6429_);
lean_dec(v___x_6429_);
v___y_6353_ = v___x_6430_;
goto v___jp_6352_;
}
}
v___jp_6352_:
{
lean_object* v___x_6354_; lean_object* v___x_6355_; lean_object* v___x_6356_; lean_object* v___x_6357_; lean_object* v___x_6358_; lean_object* v___x_6359_; lean_object* v___x_6360_; lean_object* v___x_6361_; lean_object* v___x_6362_; lean_object* v___x_6363_; lean_object* v___x_6365_; 
v___x_6354_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_6355_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
lean_inc_ref(v_traceArgs_6326_);
v___x_6356_ = lean_array_to_list(v_traceArgs_6326_);
v___x_6357_ = l_List_toString___redArg(v___f_6327_, v___x_6356_);
v___x_6358_ = lean_string_append(v___x_6355_, v___x_6357_);
lean_dec_ref(v___x_6357_);
v___x_6359_ = lean_string_append(v___x_6354_, v___x_6358_);
lean_dec_ref(v___x_6358_);
v___x_6360_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_6361_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_6362_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6362_, 0, v___x_6359_);
lean_ctor_set(v___x_6362_, 1, v___x_6360_);
lean_ctor_set(v___x_6362_, 2, v___x_6361_);
lean_ctor_set_uint64(v___x_6362_, sizeof(void*)*3, v___y_6353_);
v___x_6363_ = l_Lake_BuildTrace_mix(v___x_6351_, v___x_6362_);
if (v_isShared_6349_ == 0)
{
lean_ctor_set(v___x_6348_, 1, v___x_6363_);
v___x_6365_ = v___x_6348_;
goto v_reusejp_6364_;
}
else
{
lean_object* v_reuseFailAlloc_6415_; 
v_reuseFailAlloc_6415_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6415_, 0, v_log_6342_);
lean_ctor_set(v_reuseFailAlloc_6415_, 1, v___x_6363_);
lean_ctor_set(v_reuseFailAlloc_6415_, 2, v_buildTime_6346_);
lean_ctor_set_uint8(v_reuseFailAlloc_6415_, sizeof(void*)*3, v_action_6343_);
lean_ctor_set_uint8(v_reuseFailAlloc_6415_, sizeof(void*)*3 + 1, v_wantsRebuild_6344_);
v___x_6365_ = v_reuseFailAlloc_6415_;
goto v_reusejp_6364_;
}
v_reusejp_6364_:
{
lean_object* v___x_6366_; 
lean_inc_ref(v___y_6339_);
lean_inc(v___y_6338_);
lean_inc(v___y_6337_);
lean_inc(v___y_6336_);
lean_inc_ref(v___y_6335_);
v___x_6366_ = lean_apply_7(v_extraDepTrace_6328_, v___y_6335_, v___y_6336_, v___y_6337_, v___y_6338_, v___y_6339_, v___x_6365_, lean_box(0));
if (lean_obj_tag(v___x_6366_) == 0)
{
lean_object* v_a_6367_; lean_object* v_a_6368_; lean_object* v_log_6369_; uint8_t v_action_6370_; uint8_t v_wantsRebuild_6371_; lean_object* v_trace_6372_; lean_object* v_buildTime_6373_; lean_object* v___x_6375_; uint8_t v_isShared_6376_; uint8_t v_isSharedCheck_6405_; 
v_a_6367_ = lean_ctor_get(v___x_6366_, 1);
lean_inc(v_a_6367_);
v_a_6368_ = lean_ctor_get(v___x_6366_, 0);
lean_inc(v_a_6368_);
lean_dec_ref(v___x_6366_);
v_log_6369_ = lean_ctor_get(v_a_6367_, 0);
v_action_6370_ = lean_ctor_get_uint8(v_a_6367_, sizeof(void*)*3);
v_wantsRebuild_6371_ = lean_ctor_get_uint8(v_a_6367_, sizeof(void*)*3 + 1);
v_trace_6372_ = lean_ctor_get(v_a_6367_, 1);
v_buildTime_6373_ = lean_ctor_get(v_a_6367_, 2);
v_isSharedCheck_6405_ = !lean_is_exclusive(v_a_6367_);
if (v_isSharedCheck_6405_ == 0)
{
v___x_6375_ = v_a_6367_;
v_isShared_6376_ = v_isSharedCheck_6405_;
goto v_resetjp_6374_;
}
else
{
lean_inc(v_buildTime_6373_);
lean_inc(v_trace_6372_);
lean_inc(v_log_6369_);
lean_dec(v_a_6367_);
v___x_6375_ = lean_box(0);
v_isShared_6376_ = v_isSharedCheck_6405_;
goto v_resetjp_6374_;
}
v_resetjp_6374_:
{
lean_object* v___x_6377_; lean_object* v___x_6379_; 
v___x_6377_ = l_Lake_BuildTrace_mix(v_trace_6372_, v_a_6368_);
if (v_isShared_6376_ == 0)
{
lean_ctor_set(v___x_6375_, 1, v___x_6377_);
v___x_6379_ = v___x_6375_;
goto v_reusejp_6378_;
}
else
{
lean_object* v_reuseFailAlloc_6404_; 
v_reuseFailAlloc_6404_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6404_, 0, v_log_6369_);
lean_ctor_set(v_reuseFailAlloc_6404_, 1, v___x_6377_);
lean_ctor_set(v_reuseFailAlloc_6404_, 2, v_buildTime_6373_);
lean_ctor_set_uint8(v_reuseFailAlloc_6404_, sizeof(void*)*3, v_action_6370_);
lean_ctor_set_uint8(v_reuseFailAlloc_6404_, sizeof(void*)*3 + 1, v_wantsRebuild_6371_);
v___x_6379_ = v_reuseFailAlloc_6404_;
goto v_reusejp_6378_;
}
v_reusejp_6378_:
{
lean_object* v___x_6380_; lean_object* v___f_6381_; uint8_t v___x_6382_; lean_object* v___x_6383_; lean_object* v___x_6384_; 
v___x_6380_ = l_Array_append___redArg(v_weakArgs_6329_, v_traceArgs_6326_);
lean_dec_ref(v_traceArgs_6326_);
lean_inc_ref(v_oFile_6330_);
v___f_6381_ = lean_alloc_closure((void*)(l_Lake_buildO___lam__1___boxed), 11, 4);
lean_closure_set(v___f_6381_, 0, v_oFile_6330_);
lean_closure_set(v___f_6381_, 1, v_srcFile_6334_);
lean_closure_set(v___f_6381_, 2, v___x_6380_);
lean_closure_set(v___f_6381_, 3, v_compiler_6331_);
v___x_6382_ = 0;
v___x_6383_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__2));
v___x_6384_ = l_Lake_buildArtifactUnlessUpToDate(v_oFile_6330_, v___f_6381_, v___x_6382_, v___x_6383_, v___x_6382_, v___x_6382_, v___x_6382_, v___y_6335_, v___y_6336_, v___y_6337_, v___y_6338_, v___y_6339_, v___x_6379_);
if (lean_obj_tag(v___x_6384_) == 0)
{
lean_object* v_a_6385_; lean_object* v_a_6386_; lean_object* v___x_6388_; uint8_t v_isShared_6389_; uint8_t v_isSharedCheck_6394_; 
v_a_6385_ = lean_ctor_get(v___x_6384_, 0);
v_a_6386_ = lean_ctor_get(v___x_6384_, 1);
v_isSharedCheck_6394_ = !lean_is_exclusive(v___x_6384_);
if (v_isSharedCheck_6394_ == 0)
{
v___x_6388_ = v___x_6384_;
v_isShared_6389_ = v_isSharedCheck_6394_;
goto v_resetjp_6387_;
}
else
{
lean_inc(v_a_6386_);
lean_inc(v_a_6385_);
lean_dec(v___x_6384_);
v___x_6388_ = lean_box(0);
v_isShared_6389_ = v_isSharedCheck_6394_;
goto v_resetjp_6387_;
}
v_resetjp_6387_:
{
lean_object* v_path_6390_; lean_object* v___x_6392_; 
v_path_6390_ = lean_ctor_get(v_a_6385_, 1);
lean_inc_ref(v_path_6390_);
lean_dec(v_a_6385_);
if (v_isShared_6389_ == 0)
{
lean_ctor_set(v___x_6388_, 0, v_path_6390_);
v___x_6392_ = v___x_6388_;
goto v_reusejp_6391_;
}
else
{
lean_object* v_reuseFailAlloc_6393_; 
v_reuseFailAlloc_6393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6393_, 0, v_path_6390_);
lean_ctor_set(v_reuseFailAlloc_6393_, 1, v_a_6386_);
v___x_6392_ = v_reuseFailAlloc_6393_;
goto v_reusejp_6391_;
}
v_reusejp_6391_:
{
return v___x_6392_;
}
}
}
else
{
lean_object* v_a_6395_; lean_object* v_a_6396_; lean_object* v___x_6398_; uint8_t v_isShared_6399_; uint8_t v_isSharedCheck_6403_; 
v_a_6395_ = lean_ctor_get(v___x_6384_, 0);
v_a_6396_ = lean_ctor_get(v___x_6384_, 1);
v_isSharedCheck_6403_ = !lean_is_exclusive(v___x_6384_);
if (v_isSharedCheck_6403_ == 0)
{
v___x_6398_ = v___x_6384_;
v_isShared_6399_ = v_isSharedCheck_6403_;
goto v_resetjp_6397_;
}
else
{
lean_inc(v_a_6396_);
lean_inc(v_a_6395_);
lean_dec(v___x_6384_);
v___x_6398_ = lean_box(0);
v_isShared_6399_ = v_isSharedCheck_6403_;
goto v_resetjp_6397_;
}
v_resetjp_6397_:
{
lean_object* v___x_6401_; 
if (v_isShared_6399_ == 0)
{
v___x_6401_ = v___x_6398_;
goto v_reusejp_6400_;
}
else
{
lean_object* v_reuseFailAlloc_6402_; 
v_reuseFailAlloc_6402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6402_, 0, v_a_6395_);
lean_ctor_set(v_reuseFailAlloc_6402_, 1, v_a_6396_);
v___x_6401_ = v_reuseFailAlloc_6402_;
goto v_reusejp_6400_;
}
v_reusejp_6400_:
{
return v___x_6401_;
}
}
}
}
}
}
else
{
lean_object* v_a_6406_; lean_object* v_a_6407_; lean_object* v___x_6409_; uint8_t v_isShared_6410_; uint8_t v_isSharedCheck_6414_; 
lean_dec_ref(v___y_6339_);
lean_dec(v___y_6338_);
lean_dec(v___y_6337_);
lean_dec(v___y_6336_);
lean_dec_ref(v___y_6335_);
lean_dec_ref(v_srcFile_6334_);
lean_dec_ref(v_compiler_6331_);
lean_dec_ref(v_oFile_6330_);
lean_dec_ref(v_weakArgs_6329_);
lean_dec_ref(v_traceArgs_6326_);
v_a_6406_ = lean_ctor_get(v___x_6366_, 0);
v_a_6407_ = lean_ctor_get(v___x_6366_, 1);
v_isSharedCheck_6414_ = !lean_is_exclusive(v___x_6366_);
if (v_isSharedCheck_6414_ == 0)
{
v___x_6409_ = v___x_6366_;
v_isShared_6410_ = v_isSharedCheck_6414_;
goto v_resetjp_6408_;
}
else
{
lean_inc(v_a_6407_);
lean_inc(v_a_6406_);
lean_dec(v___x_6366_);
v___x_6409_ = lean_box(0);
v_isShared_6410_ = v_isSharedCheck_6414_;
goto v_resetjp_6408_;
}
v_resetjp_6408_:
{
lean_object* v___x_6412_; 
if (v_isShared_6410_ == 0)
{
v___x_6412_ = v___x_6409_;
goto v_reusejp_6411_;
}
else
{
lean_object* v_reuseFailAlloc_6413_; 
v_reuseFailAlloc_6413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6413_, 0, v_a_6406_);
lean_ctor_set(v_reuseFailAlloc_6413_, 1, v_a_6407_);
v___x_6412_ = v_reuseFailAlloc_6413_;
goto v_reusejp_6411_;
}
v_reusejp_6411_:
{
return v___x_6412_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2___boxed(lean_object* v_traceArgs_6432_, lean_object* v___f_6433_, lean_object* v_extraDepTrace_6434_, lean_object* v_weakArgs_6435_, lean_object* v_oFile_6436_, lean_object* v_compiler_6437_, lean_object* v___x_6438_, lean_object* v___f_6439_, lean_object* v_srcFile_6440_, lean_object* v___y_6441_, lean_object* v___y_6442_, lean_object* v___y_6443_, lean_object* v___y_6444_, lean_object* v___y_6445_, lean_object* v___y_6446_, lean_object* v___y_6447_){
_start:
{
lean_object* v_res_6448_; 
v_res_6448_ = l_Lake_buildO___lam__2(v_traceArgs_6432_, v___f_6433_, v_extraDepTrace_6434_, v_weakArgs_6435_, v_oFile_6436_, v_compiler_6437_, v___x_6438_, v___f_6439_, v_srcFile_6440_, v___y_6441_, v___y_6442_, v___y_6443_, v___y_6444_, v___y_6445_, v___y_6446_);
return v_res_6448_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO(lean_object* v_oFile_6451_, lean_object* v_srcJob_6452_, lean_object* v_weakArgs_6453_, lean_object* v_traceArgs_6454_, lean_object* v_compiler_6455_, lean_object* v_extraDepTrace_6456_, lean_object* v_a_6457_, lean_object* v_a_6458_, lean_object* v_a_6459_, lean_object* v_a_6460_, lean_object* v_a_6461_, lean_object* v_a_6462_){
_start:
{
lean_object* v___f_6464_; lean_object* v___x_6465_; lean_object* v___f_6466_; lean_object* v___x_6467_; lean_object* v___f_6468_; lean_object* v___x_6469_; uint8_t v___x_6470_; lean_object* v___x_6471_; 
v___f_6464_ = ((lean_object*)(l_Lake_buildO___closed__0));
v___x_6465_ = l_Lake_instDataKindFilePath;
v___f_6466_ = ((lean_object*)(l_Lake_buildO___closed__1));
v___x_6467_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__10));
v___f_6468_ = lean_alloc_closure((void*)(l_Lake_buildO___lam__2___boxed), 16, 8);
lean_closure_set(v___f_6468_, 0, v_traceArgs_6454_);
lean_closure_set(v___f_6468_, 1, v___f_6466_);
lean_closure_set(v___f_6468_, 2, v_extraDepTrace_6456_);
lean_closure_set(v___f_6468_, 3, v_weakArgs_6453_);
lean_closure_set(v___f_6468_, 4, v_oFile_6451_);
lean_closure_set(v___f_6468_, 5, v_compiler_6455_);
lean_closure_set(v___f_6468_, 6, v___x_6467_);
lean_closure_set(v___f_6468_, 7, v___f_6464_);
v___x_6469_ = lean_unsigned_to_nat(0u);
v___x_6470_ = 0;
v___x_6471_ = l_Lake_Job_mapM___redArg(v___x_6465_, v_srcJob_6452_, v___f_6468_, v___x_6469_, v___x_6470_, v_a_6457_, v_a_6458_, v_a_6459_, v_a_6460_, v_a_6461_, v_a_6462_);
return v___x_6471_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___boxed(lean_object* v_oFile_6472_, lean_object* v_srcJob_6473_, lean_object* v_weakArgs_6474_, lean_object* v_traceArgs_6475_, lean_object* v_compiler_6476_, lean_object* v_extraDepTrace_6477_, lean_object* v_a_6478_, lean_object* v_a_6479_, lean_object* v_a_6480_, lean_object* v_a_6481_, lean_object* v_a_6482_, lean_object* v_a_6483_, lean_object* v_a_6484_){
_start:
{
lean_object* v_res_6485_; 
v_res_6485_ = l_Lake_buildO(v_oFile_6472_, v_srcJob_6473_, v_weakArgs_6474_, v_traceArgs_6475_, v_compiler_6476_, v_extraDepTrace_6477_, v_a_6478_, v_a_6479_, v_a_6480_, v_a_6481_, v_a_6482_, v_a_6483_);
return v_res_6485_;
}
}
static lean_object* _init_l_Lake_buildLeanO___lam__0___closed__1(void){
_start:
{
lean_object* v___x_6487_; lean_object* v___x_6488_; lean_object* v___x_6489_; lean_object* v___x_6490_; 
v___x_6487_ = ((lean_object*)(l_Lake_buildLeanO___lam__0___closed__0));
v___x_6488_ = lean_unsigned_to_nat(2u);
v___x_6489_ = lean_mk_empty_array_with_capacity(v___x_6488_);
v___x_6490_ = lean_array_push(v___x_6489_, v___x_6487_);
return v___x_6490_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__0(lean_object* v_weakArgs_6491_, lean_object* v_traceArgs_6492_, lean_object* v_oFile_6493_, lean_object* v_srcFile_6494_, lean_object* v_leanIncludeDir_x3f_6495_, lean_object* v___y_6496_, lean_object* v___y_6497_, lean_object* v___y_6498_, lean_object* v___y_6499_, lean_object* v___y_6500_, lean_object* v___y_6501_){
_start:
{
lean_object* v_toContext_6503_; lean_object* v_lakeEnv_6504_; lean_object* v_log_6505_; uint8_t v_action_6506_; uint8_t v_wantsRebuild_6507_; lean_object* v_trace_6508_; lean_object* v_buildTime_6509_; lean_object* v___x_6511_; uint8_t v_isShared_6512_; uint8_t v_isSharedCheck_6550_; 
v_toContext_6503_ = lean_ctor_get(v___y_6500_, 1);
lean_inc(v_toContext_6503_);
lean_dec_ref(v___y_6500_);
v_lakeEnv_6504_ = lean_ctor_get(v_toContext_6503_, 1);
lean_inc_ref(v_lakeEnv_6504_);
lean_dec(v_toContext_6503_);
v_log_6505_ = lean_ctor_get(v___y_6501_, 0);
v_action_6506_ = lean_ctor_get_uint8(v___y_6501_, sizeof(void*)*3);
v_wantsRebuild_6507_ = lean_ctor_get_uint8(v___y_6501_, sizeof(void*)*3 + 1);
v_trace_6508_ = lean_ctor_get(v___y_6501_, 1);
v_buildTime_6509_ = lean_ctor_get(v___y_6501_, 2);
v_isSharedCheck_6550_ = !lean_is_exclusive(v___y_6501_);
if (v_isSharedCheck_6550_ == 0)
{
v___x_6511_ = v___y_6501_;
v_isShared_6512_ = v_isSharedCheck_6550_;
goto v_resetjp_6510_;
}
else
{
lean_inc(v_buildTime_6509_);
lean_inc(v_trace_6508_);
lean_inc(v_log_6505_);
lean_dec(v___y_6501_);
v___x_6511_ = lean_box(0);
v_isShared_6512_ = v_isSharedCheck_6550_;
goto v_resetjp_6510_;
}
v_resetjp_6510_:
{
lean_object* v_lean_6513_; lean_object* v___y_6515_; 
v_lean_6513_ = lean_ctor_get(v_lakeEnv_6504_, 1);
lean_inc_ref(v_lean_6513_);
lean_dec_ref(v_lakeEnv_6504_);
if (lean_obj_tag(v_leanIncludeDir_x3f_6495_) == 0)
{
lean_object* v_includeDir_6548_; 
v_includeDir_6548_ = lean_ctor_get(v_lean_6513_, 4);
lean_inc_ref(v_includeDir_6548_);
v___y_6515_ = v_includeDir_6548_;
goto v___jp_6514_;
}
else
{
lean_object* v_val_6549_; 
v_val_6549_ = lean_ctor_get(v_leanIncludeDir_x3f_6495_, 0);
lean_inc(v_val_6549_);
lean_dec_ref(v_leanIncludeDir_x3f_6495_);
v___y_6515_ = v_val_6549_;
goto v___jp_6514_;
}
v___jp_6514_:
{
lean_object* v_cc_6516_; lean_object* v_ccFlags_6517_; lean_object* v___x_6518_; lean_object* v___x_6519_; lean_object* v___x_6520_; lean_object* v___x_6521_; lean_object* v___x_6522_; lean_object* v___x_6523_; 
v_cc_6516_ = lean_ctor_get(v_lean_6513_, 14);
lean_inc_ref(v_cc_6516_);
v_ccFlags_6517_ = lean_ctor_get(v_lean_6513_, 18);
lean_inc_ref(v_ccFlags_6517_);
lean_dec_ref(v_lean_6513_);
v___x_6518_ = lean_obj_once(&l_Lake_buildLeanO___lam__0___closed__1, &l_Lake_buildLeanO___lam__0___closed__1_once, _init_l_Lake_buildLeanO___lam__0___closed__1);
v___x_6519_ = lean_array_push(v___x_6518_, v___y_6515_);
v___x_6520_ = l_Array_append___redArg(v___x_6519_, v_ccFlags_6517_);
lean_dec_ref(v_ccFlags_6517_);
v___x_6521_ = l_Array_append___redArg(v___x_6520_, v_weakArgs_6491_);
v___x_6522_ = l_Array_append___redArg(v___x_6521_, v_traceArgs_6492_);
v___x_6523_ = l_Lake_compileO(v_oFile_6493_, v_srcFile_6494_, v___x_6522_, v_cc_6516_, v_log_6505_);
lean_dec_ref(v___x_6522_);
if (lean_obj_tag(v___x_6523_) == 0)
{
lean_object* v_a_6524_; lean_object* v_a_6525_; lean_object* v___x_6527_; uint8_t v_isShared_6528_; uint8_t v_isSharedCheck_6535_; 
v_a_6524_ = lean_ctor_get(v___x_6523_, 0);
v_a_6525_ = lean_ctor_get(v___x_6523_, 1);
v_isSharedCheck_6535_ = !lean_is_exclusive(v___x_6523_);
if (v_isSharedCheck_6535_ == 0)
{
v___x_6527_ = v___x_6523_;
v_isShared_6528_ = v_isSharedCheck_6535_;
goto v_resetjp_6526_;
}
else
{
lean_inc(v_a_6525_);
lean_inc(v_a_6524_);
lean_dec(v___x_6523_);
v___x_6527_ = lean_box(0);
v_isShared_6528_ = v_isSharedCheck_6535_;
goto v_resetjp_6526_;
}
v_resetjp_6526_:
{
lean_object* v___x_6530_; 
if (v_isShared_6512_ == 0)
{
lean_ctor_set(v___x_6511_, 0, v_a_6525_);
v___x_6530_ = v___x_6511_;
goto v_reusejp_6529_;
}
else
{
lean_object* v_reuseFailAlloc_6534_; 
v_reuseFailAlloc_6534_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6534_, 0, v_a_6525_);
lean_ctor_set(v_reuseFailAlloc_6534_, 1, v_trace_6508_);
lean_ctor_set(v_reuseFailAlloc_6534_, 2, v_buildTime_6509_);
lean_ctor_set_uint8(v_reuseFailAlloc_6534_, sizeof(void*)*3, v_action_6506_);
lean_ctor_set_uint8(v_reuseFailAlloc_6534_, sizeof(void*)*3 + 1, v_wantsRebuild_6507_);
v___x_6530_ = v_reuseFailAlloc_6534_;
goto v_reusejp_6529_;
}
v_reusejp_6529_:
{
lean_object* v___x_6532_; 
if (v_isShared_6528_ == 0)
{
lean_ctor_set(v___x_6527_, 1, v___x_6530_);
v___x_6532_ = v___x_6527_;
goto v_reusejp_6531_;
}
else
{
lean_object* v_reuseFailAlloc_6533_; 
v_reuseFailAlloc_6533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6533_, 0, v_a_6524_);
lean_ctor_set(v_reuseFailAlloc_6533_, 1, v___x_6530_);
v___x_6532_ = v_reuseFailAlloc_6533_;
goto v_reusejp_6531_;
}
v_reusejp_6531_:
{
return v___x_6532_;
}
}
}
}
else
{
lean_object* v_a_6536_; lean_object* v_a_6537_; lean_object* v___x_6539_; uint8_t v_isShared_6540_; uint8_t v_isSharedCheck_6547_; 
v_a_6536_ = lean_ctor_get(v___x_6523_, 0);
v_a_6537_ = lean_ctor_get(v___x_6523_, 1);
v_isSharedCheck_6547_ = !lean_is_exclusive(v___x_6523_);
if (v_isSharedCheck_6547_ == 0)
{
v___x_6539_ = v___x_6523_;
v_isShared_6540_ = v_isSharedCheck_6547_;
goto v_resetjp_6538_;
}
else
{
lean_inc(v_a_6537_);
lean_inc(v_a_6536_);
lean_dec(v___x_6523_);
v___x_6539_ = lean_box(0);
v_isShared_6540_ = v_isSharedCheck_6547_;
goto v_resetjp_6538_;
}
v_resetjp_6538_:
{
lean_object* v___x_6542_; 
if (v_isShared_6512_ == 0)
{
lean_ctor_set(v___x_6511_, 0, v_a_6537_);
v___x_6542_ = v___x_6511_;
goto v_reusejp_6541_;
}
else
{
lean_object* v_reuseFailAlloc_6546_; 
v_reuseFailAlloc_6546_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6546_, 0, v_a_6537_);
lean_ctor_set(v_reuseFailAlloc_6546_, 1, v_trace_6508_);
lean_ctor_set(v_reuseFailAlloc_6546_, 2, v_buildTime_6509_);
lean_ctor_set_uint8(v_reuseFailAlloc_6546_, sizeof(void*)*3, v_action_6506_);
lean_ctor_set_uint8(v_reuseFailAlloc_6546_, sizeof(void*)*3 + 1, v_wantsRebuild_6507_);
v___x_6542_ = v_reuseFailAlloc_6546_;
goto v_reusejp_6541_;
}
v_reusejp_6541_:
{
lean_object* v___x_6544_; 
if (v_isShared_6540_ == 0)
{
lean_ctor_set(v___x_6539_, 1, v___x_6542_);
v___x_6544_ = v___x_6539_;
goto v_reusejp_6543_;
}
else
{
lean_object* v_reuseFailAlloc_6545_; 
v_reuseFailAlloc_6545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6545_, 0, v_a_6536_);
lean_ctor_set(v_reuseFailAlloc_6545_, 1, v___x_6542_);
v___x_6544_ = v_reuseFailAlloc_6545_;
goto v_reusejp_6543_;
}
v_reusejp_6543_:
{
return v___x_6544_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__0___boxed(lean_object* v_weakArgs_6551_, lean_object* v_traceArgs_6552_, lean_object* v_oFile_6553_, lean_object* v_srcFile_6554_, lean_object* v_leanIncludeDir_x3f_6555_, lean_object* v___y_6556_, lean_object* v___y_6557_, lean_object* v___y_6558_, lean_object* v___y_6559_, lean_object* v___y_6560_, lean_object* v___y_6561_, lean_object* v___y_6562_){
_start:
{
lean_object* v_res_6563_; 
v_res_6563_ = l_Lake_buildLeanO___lam__0(v_weakArgs_6551_, v_traceArgs_6552_, v_oFile_6553_, v_srcFile_6554_, v_leanIncludeDir_x3f_6555_, v___y_6556_, v___y_6557_, v___y_6558_, v___y_6559_, v___y_6560_, v___y_6561_);
lean_dec(v___y_6559_);
lean_dec(v___y_6558_);
lean_dec(v___y_6557_);
lean_dec_ref(v___y_6556_);
lean_dec_ref(v_traceArgs_6552_);
lean_dec_ref(v_weakArgs_6551_);
return v_res_6563_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(lean_object* v_as_6564_, size_t v_i_6565_, size_t v_stop_6566_, uint64_t v_b_6567_){
_start:
{
uint8_t v___x_6568_; 
v___x_6568_ = lean_usize_dec_eq(v_i_6565_, v_stop_6566_);
if (v___x_6568_ == 0)
{
lean_object* v___x_6569_; uint64_t v___x_6570_; uint64_t v___x_6571_; uint64_t v___x_6572_; uint64_t v___x_6573_; size_t v___x_6574_; size_t v___x_6575_; 
v___x_6569_ = lean_array_uget_borrowed(v_as_6564_, v_i_6565_);
v___x_6570_ = l_Lake_Hash_nil;
v___x_6571_ = lean_string_hash(v___x_6569_);
v___x_6572_ = lean_uint64_mix_hash(v___x_6570_, v___x_6571_);
v___x_6573_ = lean_uint64_mix_hash(v_b_6567_, v___x_6572_);
v___x_6574_ = ((size_t)1ULL);
v___x_6575_ = lean_usize_add(v_i_6565_, v___x_6574_);
v_i_6565_ = v___x_6575_;
v_b_6567_ = v___x_6573_;
goto _start;
}
else
{
return v_b_6567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1___boxed(lean_object* v_as_6577_, lean_object* v_i_6578_, lean_object* v_stop_6579_, lean_object* v_b_6580_){
_start:
{
size_t v_i_boxed_6581_; size_t v_stop_boxed_6582_; uint64_t v_b_boxed_6583_; uint64_t v_res_6584_; lean_object* v_r_6585_; 
v_i_boxed_6581_ = lean_unbox_usize(v_i_6578_);
lean_dec(v_i_6578_);
v_stop_boxed_6582_ = lean_unbox_usize(v_stop_6579_);
lean_dec(v_stop_6579_);
v_b_boxed_6583_ = lean_unbox_uint64(v_b_6580_);
lean_dec_ref(v_b_6580_);
v_res_6584_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_as_6577_, v_i_boxed_6581_, v_stop_boxed_6582_, v_b_boxed_6583_);
lean_dec_ref(v_as_6577_);
v_r_6585_ = lean_box_uint64(v_res_6584_);
return v_r_6585_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0(lean_object* v_x_6587_, lean_object* v_x_6588_){
_start:
{
if (lean_obj_tag(v_x_6588_) == 0)
{
return v_x_6587_;
}
else
{
lean_object* v_head_6589_; lean_object* v_tail_6590_; lean_object* v___x_6591_; lean_object* v___x_6592_; lean_object* v___x_6593_; 
v_head_6589_ = lean_ctor_get(v_x_6588_, 0);
v_tail_6590_ = lean_ctor_get(v_x_6588_, 1);
v___x_6591_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___closed__0));
v___x_6592_ = lean_string_append(v_x_6587_, v___x_6591_);
v___x_6593_ = lean_string_append(v___x_6592_, v_head_6589_);
v_x_6587_ = v___x_6593_;
v_x_6588_ = v_tail_6590_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___boxed(lean_object* v_x_6595_, lean_object* v_x_6596_){
_start:
{
lean_object* v_res_6597_; 
v_res_6597_ = l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0(v_x_6595_, v_x_6596_);
lean_dec(v_x_6596_);
return v_res_6597_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0(lean_object* v_x_6601_){
_start:
{
if (lean_obj_tag(v_x_6601_) == 0)
{
lean_object* v___x_6602_; 
v___x_6602_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanO_spec__0___closed__0));
return v___x_6602_;
}
else
{
lean_object* v_tail_6603_; 
v_tail_6603_ = lean_ctor_get(v_x_6601_, 1);
if (lean_obj_tag(v_tail_6603_) == 0)
{
lean_object* v_head_6604_; lean_object* v___x_6605_; lean_object* v___x_6606_; lean_object* v___x_6607_; lean_object* v___x_6608_; 
v_head_6604_ = lean_ctor_get(v_x_6601_, 0);
v___x_6605_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1));
v___x_6606_ = lean_string_append(v___x_6605_, v_head_6604_);
v___x_6607_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanO_spec__0___closed__2));
v___x_6608_ = lean_string_append(v___x_6606_, v___x_6607_);
return v___x_6608_;
}
else
{
lean_object* v_head_6609_; lean_object* v___x_6610_; lean_object* v___x_6611_; lean_object* v___x_6612_; uint32_t v___x_6613_; lean_object* v___x_6614_; 
v_head_6609_ = lean_ctor_get(v_x_6601_, 0);
v___x_6610_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1));
v___x_6611_ = lean_string_append(v___x_6610_, v_head_6609_);
v___x_6612_ = l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0(v___x_6611_, v_tail_6603_);
v___x_6613_ = 93;
v___x_6614_ = lean_string_push(v___x_6612_, v___x_6613_);
return v___x_6614_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0___boxed(lean_object* v_x_6615_){
_start:
{
lean_object* v_res_6616_; 
v_res_6616_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v_x_6615_);
lean_dec(v_x_6615_);
return v_res_6616_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__1(lean_object* v_weakArgs_6617_, lean_object* v_traceArgs_6618_, lean_object* v_oFile_6619_, lean_object* v_leanIncludeDir_x3f_6620_, lean_object* v_srcFile_6621_, lean_object* v___y_6622_, lean_object* v___y_6623_, lean_object* v___y_6624_, lean_object* v___y_6625_, lean_object* v___y_6626_, lean_object* v___y_6627_){
_start:
{
lean_object* v_log_6629_; uint8_t v_action_6630_; uint8_t v_wantsRebuild_6631_; lean_object* v_trace_6632_; lean_object* v_buildTime_6633_; lean_object* v___x_6635_; uint8_t v_isShared_6636_; uint8_t v_isSharedCheck_6690_; 
v_log_6629_ = lean_ctor_get(v___y_6627_, 0);
v_action_6630_ = lean_ctor_get_uint8(v___y_6627_, sizeof(void*)*3);
v_wantsRebuild_6631_ = lean_ctor_get_uint8(v___y_6627_, sizeof(void*)*3 + 1);
v_trace_6632_ = lean_ctor_get(v___y_6627_, 1);
v_buildTime_6633_ = lean_ctor_get(v___y_6627_, 2);
v_isSharedCheck_6690_ = !lean_is_exclusive(v___y_6627_);
if (v_isSharedCheck_6690_ == 0)
{
v___x_6635_ = v___y_6627_;
v_isShared_6636_ = v_isSharedCheck_6690_;
goto v_resetjp_6634_;
}
else
{
lean_inc(v_buildTime_6633_);
lean_inc(v_trace_6632_);
lean_inc(v_log_6629_);
lean_dec(v___y_6627_);
v___x_6635_ = lean_box(0);
v_isShared_6636_ = v_isSharedCheck_6690_;
goto v_resetjp_6634_;
}
v_resetjp_6634_:
{
lean_object* v_leanTrace_6637_; lean_object* v___f_6638_; lean_object* v___x_6639_; uint64_t v___y_6641_; uint64_t v___x_6679_; lean_object* v___x_6680_; lean_object* v___x_6681_; uint8_t v___x_6682_; 
v_leanTrace_6637_ = lean_ctor_get(v___y_6626_, 2);
lean_inc_ref(v_oFile_6619_);
lean_inc_ref(v_traceArgs_6618_);
v___f_6638_ = lean_alloc_closure((void*)(l_Lake_buildLeanO___lam__0___boxed), 12, 5);
lean_closure_set(v___f_6638_, 0, v_weakArgs_6617_);
lean_closure_set(v___f_6638_, 1, v_traceArgs_6618_);
lean_closure_set(v___f_6638_, 2, v_oFile_6619_);
lean_closure_set(v___f_6638_, 3, v_srcFile_6621_);
lean_closure_set(v___f_6638_, 4, v_leanIncludeDir_x3f_6620_);
lean_inc_ref(v_leanTrace_6637_);
v___x_6639_ = l_Lake_BuildTrace_mix(v_trace_6632_, v_leanTrace_6637_);
v___x_6679_ = l_Lake_Hash_nil;
v___x_6680_ = lean_unsigned_to_nat(0u);
v___x_6681_ = lean_array_get_size(v_traceArgs_6618_);
v___x_6682_ = lean_nat_dec_lt(v___x_6680_, v___x_6681_);
if (v___x_6682_ == 0)
{
v___y_6641_ = v___x_6679_;
goto v___jp_6640_;
}
else
{
uint8_t v___x_6683_; 
v___x_6683_ = lean_nat_dec_le(v___x_6681_, v___x_6681_);
if (v___x_6683_ == 0)
{
if (v___x_6682_ == 0)
{
v___y_6641_ = v___x_6679_;
goto v___jp_6640_;
}
else
{
size_t v___x_6684_; size_t v___x_6685_; uint64_t v___x_6686_; 
v___x_6684_ = ((size_t)0ULL);
v___x_6685_ = lean_usize_of_nat(v___x_6681_);
v___x_6686_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_6618_, v___x_6684_, v___x_6685_, v___x_6679_);
v___y_6641_ = v___x_6686_;
goto v___jp_6640_;
}
}
else
{
size_t v___x_6687_; size_t v___x_6688_; uint64_t v___x_6689_; 
v___x_6687_ = ((size_t)0ULL);
v___x_6688_ = lean_usize_of_nat(v___x_6681_);
v___x_6689_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_6618_, v___x_6687_, v___x_6688_, v___x_6679_);
v___y_6641_ = v___x_6689_;
goto v___jp_6640_;
}
}
v___jp_6640_:
{
lean_object* v___x_6642_; lean_object* v___x_6643_; lean_object* v___x_6644_; lean_object* v___x_6645_; lean_object* v___x_6646_; lean_object* v___x_6647_; lean_object* v___x_6648_; lean_object* v___x_6649_; lean_object* v___x_6650_; lean_object* v___x_6651_; lean_object* v___x_6652_; lean_object* v___x_6653_; lean_object* v___x_6655_; 
v___x_6642_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_6643_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
v___x_6644_ = lean_array_to_list(v_traceArgs_6618_);
v___x_6645_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_6644_);
lean_dec(v___x_6644_);
v___x_6646_ = lean_string_append(v___x_6643_, v___x_6645_);
lean_dec_ref(v___x_6645_);
v___x_6647_ = lean_string_append(v___x_6642_, v___x_6646_);
lean_dec_ref(v___x_6646_);
v___x_6648_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_6649_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_6650_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6650_, 0, v___x_6647_);
lean_ctor_set(v___x_6650_, 1, v___x_6648_);
lean_ctor_set(v___x_6650_, 2, v___x_6649_);
lean_ctor_set_uint64(v___x_6650_, sizeof(void*)*3, v___y_6641_);
v___x_6651_ = l_Lake_BuildTrace_mix(v___x_6639_, v___x_6650_);
v___x_6652_ = l_Lake_platformTrace;
v___x_6653_ = l_Lake_BuildTrace_mix(v___x_6651_, v___x_6652_);
if (v_isShared_6636_ == 0)
{
lean_ctor_set(v___x_6635_, 1, v___x_6653_);
v___x_6655_ = v___x_6635_;
goto v_reusejp_6654_;
}
else
{
lean_object* v_reuseFailAlloc_6678_; 
v_reuseFailAlloc_6678_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6678_, 0, v_log_6629_);
lean_ctor_set(v_reuseFailAlloc_6678_, 1, v___x_6653_);
lean_ctor_set(v_reuseFailAlloc_6678_, 2, v_buildTime_6633_);
lean_ctor_set_uint8(v_reuseFailAlloc_6678_, sizeof(void*)*3, v_action_6630_);
lean_ctor_set_uint8(v_reuseFailAlloc_6678_, sizeof(void*)*3 + 1, v_wantsRebuild_6631_);
v___x_6655_ = v_reuseFailAlloc_6678_;
goto v_reusejp_6654_;
}
v_reusejp_6654_:
{
uint8_t v___x_6656_; lean_object* v___x_6657_; lean_object* v___x_6658_; 
v___x_6656_ = 0;
v___x_6657_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__2));
v___x_6658_ = l_Lake_buildArtifactUnlessUpToDate(v_oFile_6619_, v___f_6638_, v___x_6656_, v___x_6657_, v___x_6656_, v___x_6656_, v___x_6656_, v___y_6622_, v___y_6623_, v___y_6624_, v___y_6625_, v___y_6626_, v___x_6655_);
if (lean_obj_tag(v___x_6658_) == 0)
{
lean_object* v_a_6659_; lean_object* v_a_6660_; lean_object* v___x_6662_; uint8_t v_isShared_6663_; uint8_t v_isSharedCheck_6668_; 
v_a_6659_ = lean_ctor_get(v___x_6658_, 0);
v_a_6660_ = lean_ctor_get(v___x_6658_, 1);
v_isSharedCheck_6668_ = !lean_is_exclusive(v___x_6658_);
if (v_isSharedCheck_6668_ == 0)
{
v___x_6662_ = v___x_6658_;
v_isShared_6663_ = v_isSharedCheck_6668_;
goto v_resetjp_6661_;
}
else
{
lean_inc(v_a_6660_);
lean_inc(v_a_6659_);
lean_dec(v___x_6658_);
v___x_6662_ = lean_box(0);
v_isShared_6663_ = v_isSharedCheck_6668_;
goto v_resetjp_6661_;
}
v_resetjp_6661_:
{
lean_object* v_path_6664_; lean_object* v___x_6666_; 
v_path_6664_ = lean_ctor_get(v_a_6659_, 1);
lean_inc_ref(v_path_6664_);
lean_dec(v_a_6659_);
if (v_isShared_6663_ == 0)
{
lean_ctor_set(v___x_6662_, 0, v_path_6664_);
v___x_6666_ = v___x_6662_;
goto v_reusejp_6665_;
}
else
{
lean_object* v_reuseFailAlloc_6667_; 
v_reuseFailAlloc_6667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6667_, 0, v_path_6664_);
lean_ctor_set(v_reuseFailAlloc_6667_, 1, v_a_6660_);
v___x_6666_ = v_reuseFailAlloc_6667_;
goto v_reusejp_6665_;
}
v_reusejp_6665_:
{
return v___x_6666_;
}
}
}
else
{
lean_object* v_a_6669_; lean_object* v_a_6670_; lean_object* v___x_6672_; uint8_t v_isShared_6673_; uint8_t v_isSharedCheck_6677_; 
v_a_6669_ = lean_ctor_get(v___x_6658_, 0);
v_a_6670_ = lean_ctor_get(v___x_6658_, 1);
v_isSharedCheck_6677_ = !lean_is_exclusive(v___x_6658_);
if (v_isSharedCheck_6677_ == 0)
{
v___x_6672_ = v___x_6658_;
v_isShared_6673_ = v_isSharedCheck_6677_;
goto v_resetjp_6671_;
}
else
{
lean_inc(v_a_6670_);
lean_inc(v_a_6669_);
lean_dec(v___x_6658_);
v___x_6672_ = lean_box(0);
v_isShared_6673_ = v_isSharedCheck_6677_;
goto v_resetjp_6671_;
}
v_resetjp_6671_:
{
lean_object* v___x_6675_; 
if (v_isShared_6673_ == 0)
{
v___x_6675_ = v___x_6672_;
goto v_reusejp_6674_;
}
else
{
lean_object* v_reuseFailAlloc_6676_; 
v_reuseFailAlloc_6676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6676_, 0, v_a_6669_);
lean_ctor_set(v_reuseFailAlloc_6676_, 1, v_a_6670_);
v___x_6675_ = v_reuseFailAlloc_6676_;
goto v_reusejp_6674_;
}
v_reusejp_6674_:
{
return v___x_6675_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__1___boxed(lean_object* v_weakArgs_6691_, lean_object* v_traceArgs_6692_, lean_object* v_oFile_6693_, lean_object* v_leanIncludeDir_x3f_6694_, lean_object* v_srcFile_6695_, lean_object* v___y_6696_, lean_object* v___y_6697_, lean_object* v___y_6698_, lean_object* v___y_6699_, lean_object* v___y_6700_, lean_object* v___y_6701_, lean_object* v___y_6702_){
_start:
{
lean_object* v_res_6703_; 
v_res_6703_ = l_Lake_buildLeanO___lam__1(v_weakArgs_6691_, v_traceArgs_6692_, v_oFile_6693_, v_leanIncludeDir_x3f_6694_, v_srcFile_6695_, v___y_6696_, v___y_6697_, v___y_6698_, v___y_6699_, v___y_6700_, v___y_6701_);
return v_res_6703_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO(lean_object* v_oFile_6704_, lean_object* v_srcJob_6705_, lean_object* v_weakArgs_6706_, lean_object* v_traceArgs_6707_, lean_object* v_leanIncludeDir_x3f_6708_, lean_object* v_a_6709_, lean_object* v_a_6710_, lean_object* v_a_6711_, lean_object* v_a_6712_, lean_object* v_a_6713_, lean_object* v_a_6714_){
_start:
{
lean_object* v___f_6716_; lean_object* v___x_6717_; lean_object* v___x_6718_; uint8_t v___x_6719_; lean_object* v___x_6720_; 
v___f_6716_ = lean_alloc_closure((void*)(l_Lake_buildLeanO___lam__1___boxed), 12, 4);
lean_closure_set(v___f_6716_, 0, v_weakArgs_6706_);
lean_closure_set(v___f_6716_, 1, v_traceArgs_6707_);
lean_closure_set(v___f_6716_, 2, v_oFile_6704_);
lean_closure_set(v___f_6716_, 3, v_leanIncludeDir_x3f_6708_);
v___x_6717_ = l_Lake_instDataKindFilePath;
v___x_6718_ = lean_unsigned_to_nat(0u);
v___x_6719_ = 0;
v___x_6720_ = l_Lake_Job_mapM___redArg(v___x_6717_, v_srcJob_6705_, v___f_6716_, v___x_6718_, v___x_6719_, v_a_6709_, v_a_6710_, v_a_6711_, v_a_6712_, v_a_6713_, v_a_6714_);
return v___x_6720_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___boxed(lean_object* v_oFile_6721_, lean_object* v_srcJob_6722_, lean_object* v_weakArgs_6723_, lean_object* v_traceArgs_6724_, lean_object* v_leanIncludeDir_x3f_6725_, lean_object* v_a_6726_, lean_object* v_a_6727_, lean_object* v_a_6728_, lean_object* v_a_6729_, lean_object* v_a_6730_, lean_object* v_a_6731_, lean_object* v_a_6732_){
_start:
{
lean_object* v_res_6733_; 
v_res_6733_ = l_Lake_buildLeanO(v_oFile_6721_, v_srcJob_6722_, v_weakArgs_6723_, v_traceArgs_6724_, v_leanIncludeDir_x3f_6725_, v_a_6726_, v_a_6727_, v_a_6728_, v_a_6729_, v_a_6730_, v_a_6731_);
return v_res_6733_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0(lean_object* v_libFile_6734_, lean_object* v_oFiles_6735_, uint8_t v_thin_6736_, lean_object* v___y_6737_, lean_object* v___y_6738_, lean_object* v___y_6739_, lean_object* v___y_6740_, lean_object* v___y_6741_, lean_object* v___y_6742_){
_start:
{
lean_object* v_toContext_6744_; lean_object* v_lakeEnv_6745_; lean_object* v_lean_6746_; lean_object* v_log_6747_; uint8_t v_action_6748_; uint8_t v_wantsRebuild_6749_; lean_object* v_trace_6750_; lean_object* v_buildTime_6751_; lean_object* v___x_6753_; uint8_t v_isShared_6754_; uint8_t v_isSharedCheck_6781_; 
v_toContext_6744_ = lean_ctor_get(v___y_6741_, 1);
lean_inc(v_toContext_6744_);
lean_dec_ref(v___y_6741_);
v_lakeEnv_6745_ = lean_ctor_get(v_toContext_6744_, 1);
lean_inc_ref(v_lakeEnv_6745_);
lean_dec(v_toContext_6744_);
v_lean_6746_ = lean_ctor_get(v_lakeEnv_6745_, 1);
lean_inc_ref(v_lean_6746_);
lean_dec_ref(v_lakeEnv_6745_);
v_log_6747_ = lean_ctor_get(v___y_6742_, 0);
v_action_6748_ = lean_ctor_get_uint8(v___y_6742_, sizeof(void*)*3);
v_wantsRebuild_6749_ = lean_ctor_get_uint8(v___y_6742_, sizeof(void*)*3 + 1);
v_trace_6750_ = lean_ctor_get(v___y_6742_, 1);
v_buildTime_6751_ = lean_ctor_get(v___y_6742_, 2);
v_isSharedCheck_6781_ = !lean_is_exclusive(v___y_6742_);
if (v_isSharedCheck_6781_ == 0)
{
v___x_6753_ = v___y_6742_;
v_isShared_6754_ = v_isSharedCheck_6781_;
goto v_resetjp_6752_;
}
else
{
lean_inc(v_buildTime_6751_);
lean_inc(v_trace_6750_);
lean_inc(v_log_6747_);
lean_dec(v___y_6742_);
v___x_6753_ = lean_box(0);
v_isShared_6754_ = v_isSharedCheck_6781_;
goto v_resetjp_6752_;
}
v_resetjp_6752_:
{
lean_object* v_ar_6755_; lean_object* v___x_6756_; 
v_ar_6755_ = lean_ctor_get(v_lean_6746_, 13);
lean_inc_ref(v_ar_6755_);
lean_dec_ref(v_lean_6746_);
v___x_6756_ = l_Lake_compileStaticLib(v_libFile_6734_, v_oFiles_6735_, v_ar_6755_, v_thin_6736_, v_log_6747_);
if (lean_obj_tag(v___x_6756_) == 0)
{
lean_object* v_a_6757_; lean_object* v_a_6758_; lean_object* v___x_6760_; uint8_t v_isShared_6761_; uint8_t v_isSharedCheck_6768_; 
v_a_6757_ = lean_ctor_get(v___x_6756_, 0);
v_a_6758_ = lean_ctor_get(v___x_6756_, 1);
v_isSharedCheck_6768_ = !lean_is_exclusive(v___x_6756_);
if (v_isSharedCheck_6768_ == 0)
{
v___x_6760_ = v___x_6756_;
v_isShared_6761_ = v_isSharedCheck_6768_;
goto v_resetjp_6759_;
}
else
{
lean_inc(v_a_6758_);
lean_inc(v_a_6757_);
lean_dec(v___x_6756_);
v___x_6760_ = lean_box(0);
v_isShared_6761_ = v_isSharedCheck_6768_;
goto v_resetjp_6759_;
}
v_resetjp_6759_:
{
lean_object* v___x_6763_; 
if (v_isShared_6754_ == 0)
{
lean_ctor_set(v___x_6753_, 0, v_a_6758_);
v___x_6763_ = v___x_6753_;
goto v_reusejp_6762_;
}
else
{
lean_object* v_reuseFailAlloc_6767_; 
v_reuseFailAlloc_6767_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6767_, 0, v_a_6758_);
lean_ctor_set(v_reuseFailAlloc_6767_, 1, v_trace_6750_);
lean_ctor_set(v_reuseFailAlloc_6767_, 2, v_buildTime_6751_);
lean_ctor_set_uint8(v_reuseFailAlloc_6767_, sizeof(void*)*3, v_action_6748_);
lean_ctor_set_uint8(v_reuseFailAlloc_6767_, sizeof(void*)*3 + 1, v_wantsRebuild_6749_);
v___x_6763_ = v_reuseFailAlloc_6767_;
goto v_reusejp_6762_;
}
v_reusejp_6762_:
{
lean_object* v___x_6765_; 
if (v_isShared_6761_ == 0)
{
lean_ctor_set(v___x_6760_, 1, v___x_6763_);
v___x_6765_ = v___x_6760_;
goto v_reusejp_6764_;
}
else
{
lean_object* v_reuseFailAlloc_6766_; 
v_reuseFailAlloc_6766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6766_, 0, v_a_6757_);
lean_ctor_set(v_reuseFailAlloc_6766_, 1, v___x_6763_);
v___x_6765_ = v_reuseFailAlloc_6766_;
goto v_reusejp_6764_;
}
v_reusejp_6764_:
{
return v___x_6765_;
}
}
}
}
else
{
lean_object* v_a_6769_; lean_object* v_a_6770_; lean_object* v___x_6772_; uint8_t v_isShared_6773_; uint8_t v_isSharedCheck_6780_; 
v_a_6769_ = lean_ctor_get(v___x_6756_, 0);
v_a_6770_ = lean_ctor_get(v___x_6756_, 1);
v_isSharedCheck_6780_ = !lean_is_exclusive(v___x_6756_);
if (v_isSharedCheck_6780_ == 0)
{
v___x_6772_ = v___x_6756_;
v_isShared_6773_ = v_isSharedCheck_6780_;
goto v_resetjp_6771_;
}
else
{
lean_inc(v_a_6770_);
lean_inc(v_a_6769_);
lean_dec(v___x_6756_);
v___x_6772_ = lean_box(0);
v_isShared_6773_ = v_isSharedCheck_6780_;
goto v_resetjp_6771_;
}
v_resetjp_6771_:
{
lean_object* v___x_6775_; 
if (v_isShared_6754_ == 0)
{
lean_ctor_set(v___x_6753_, 0, v_a_6770_);
v___x_6775_ = v___x_6753_;
goto v_reusejp_6774_;
}
else
{
lean_object* v_reuseFailAlloc_6779_; 
v_reuseFailAlloc_6779_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6779_, 0, v_a_6770_);
lean_ctor_set(v_reuseFailAlloc_6779_, 1, v_trace_6750_);
lean_ctor_set(v_reuseFailAlloc_6779_, 2, v_buildTime_6751_);
lean_ctor_set_uint8(v_reuseFailAlloc_6779_, sizeof(void*)*3, v_action_6748_);
lean_ctor_set_uint8(v_reuseFailAlloc_6779_, sizeof(void*)*3 + 1, v_wantsRebuild_6749_);
v___x_6775_ = v_reuseFailAlloc_6779_;
goto v_reusejp_6774_;
}
v_reusejp_6774_:
{
lean_object* v___x_6777_; 
if (v_isShared_6773_ == 0)
{
lean_ctor_set(v___x_6772_, 1, v___x_6775_);
v___x_6777_ = v___x_6772_;
goto v_reusejp_6776_;
}
else
{
lean_object* v_reuseFailAlloc_6778_; 
v_reuseFailAlloc_6778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6778_, 0, v_a_6769_);
lean_ctor_set(v_reuseFailAlloc_6778_, 1, v___x_6775_);
v___x_6777_ = v_reuseFailAlloc_6778_;
goto v_reusejp_6776_;
}
v_reusejp_6776_:
{
return v___x_6777_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0___boxed(lean_object* v_libFile_6782_, lean_object* v_oFiles_6783_, lean_object* v_thin_6784_, lean_object* v___y_6785_, lean_object* v___y_6786_, lean_object* v___y_6787_, lean_object* v___y_6788_, lean_object* v___y_6789_, lean_object* v___y_6790_, lean_object* v___y_6791_){
_start:
{
uint8_t v_thin_boxed_6792_; lean_object* v_res_6793_; 
v_thin_boxed_6792_ = lean_unbox(v_thin_6784_);
v_res_6793_ = l_Lake_buildStaticLib___lam__0(v_libFile_6782_, v_oFiles_6783_, v_thin_boxed_6792_, v___y_6785_, v___y_6786_, v___y_6787_, v___y_6788_, v___y_6789_, v___y_6790_);
lean_dec(v___y_6788_);
lean_dec(v___y_6787_);
lean_dec(v___y_6786_);
lean_dec_ref(v___y_6785_);
return v_res_6793_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1(lean_object* v_libFile_6795_, uint8_t v_thin_6796_, lean_object* v_oFiles_6797_, lean_object* v___y_6798_, lean_object* v___y_6799_, lean_object* v___y_6800_, lean_object* v___y_6801_, lean_object* v___y_6802_, lean_object* v___y_6803_){
_start:
{
lean_object* v___x_6805_; lean_object* v___f_6806_; uint8_t v___x_6807_; lean_object* v___x_6808_; uint8_t v___x_6809_; lean_object* v___x_6810_; 
v___x_6805_ = lean_box(v_thin_6796_);
lean_inc_ref(v_libFile_6795_);
v___f_6806_ = lean_alloc_closure((void*)(l_Lake_buildStaticLib___lam__0___boxed), 10, 3);
lean_closure_set(v___f_6806_, 0, v_libFile_6795_);
lean_closure_set(v___f_6806_, 1, v_oFiles_6797_);
lean_closure_set(v___f_6806_, 2, v___x_6805_);
v___x_6807_ = 0;
v___x_6808_ = ((lean_object*)(l_Lake_buildStaticLib___lam__1___closed__0));
v___x_6809_ = 1;
v___x_6810_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_6795_, v___f_6806_, v___x_6807_, v___x_6808_, v___x_6809_, v___x_6807_, v___x_6807_, v___y_6798_, v___y_6799_, v___y_6800_, v___y_6801_, v___y_6802_, v___y_6803_);
if (lean_obj_tag(v___x_6810_) == 0)
{
lean_object* v_a_6811_; lean_object* v_a_6812_; lean_object* v___x_6814_; uint8_t v_isShared_6815_; uint8_t v_isSharedCheck_6820_; 
v_a_6811_ = lean_ctor_get(v___x_6810_, 0);
v_a_6812_ = lean_ctor_get(v___x_6810_, 1);
v_isSharedCheck_6820_ = !lean_is_exclusive(v___x_6810_);
if (v_isSharedCheck_6820_ == 0)
{
v___x_6814_ = v___x_6810_;
v_isShared_6815_ = v_isSharedCheck_6820_;
goto v_resetjp_6813_;
}
else
{
lean_inc(v_a_6812_);
lean_inc(v_a_6811_);
lean_dec(v___x_6810_);
v___x_6814_ = lean_box(0);
v_isShared_6815_ = v_isSharedCheck_6820_;
goto v_resetjp_6813_;
}
v_resetjp_6813_:
{
lean_object* v_path_6816_; lean_object* v___x_6818_; 
v_path_6816_ = lean_ctor_get(v_a_6811_, 1);
lean_inc_ref(v_path_6816_);
lean_dec(v_a_6811_);
if (v_isShared_6815_ == 0)
{
lean_ctor_set(v___x_6814_, 0, v_path_6816_);
v___x_6818_ = v___x_6814_;
goto v_reusejp_6817_;
}
else
{
lean_object* v_reuseFailAlloc_6819_; 
v_reuseFailAlloc_6819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6819_, 0, v_path_6816_);
lean_ctor_set(v_reuseFailAlloc_6819_, 1, v_a_6812_);
v___x_6818_ = v_reuseFailAlloc_6819_;
goto v_reusejp_6817_;
}
v_reusejp_6817_:
{
return v___x_6818_;
}
}
}
else
{
lean_object* v_a_6821_; lean_object* v_a_6822_; lean_object* v___x_6824_; uint8_t v_isShared_6825_; uint8_t v_isSharedCheck_6829_; 
v_a_6821_ = lean_ctor_get(v___x_6810_, 0);
v_a_6822_ = lean_ctor_get(v___x_6810_, 1);
v_isSharedCheck_6829_ = !lean_is_exclusive(v___x_6810_);
if (v_isSharedCheck_6829_ == 0)
{
v___x_6824_ = v___x_6810_;
v_isShared_6825_ = v_isSharedCheck_6829_;
goto v_resetjp_6823_;
}
else
{
lean_inc(v_a_6822_);
lean_inc(v_a_6821_);
lean_dec(v___x_6810_);
v___x_6824_ = lean_box(0);
v_isShared_6825_ = v_isSharedCheck_6829_;
goto v_resetjp_6823_;
}
v_resetjp_6823_:
{
lean_object* v___x_6827_; 
if (v_isShared_6825_ == 0)
{
v___x_6827_ = v___x_6824_;
goto v_reusejp_6826_;
}
else
{
lean_object* v_reuseFailAlloc_6828_; 
v_reuseFailAlloc_6828_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6828_, 0, v_a_6821_);
lean_ctor_set(v_reuseFailAlloc_6828_, 1, v_a_6822_);
v___x_6827_ = v_reuseFailAlloc_6828_;
goto v_reusejp_6826_;
}
v_reusejp_6826_:
{
return v___x_6827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1___boxed(lean_object* v_libFile_6830_, lean_object* v_thin_6831_, lean_object* v_oFiles_6832_, lean_object* v___y_6833_, lean_object* v___y_6834_, lean_object* v___y_6835_, lean_object* v___y_6836_, lean_object* v___y_6837_, lean_object* v___y_6838_, lean_object* v___y_6839_){
_start:
{
uint8_t v_thin_boxed_6840_; lean_object* v_res_6841_; 
v_thin_boxed_6840_ = lean_unbox(v_thin_6831_);
v_res_6841_ = l_Lake_buildStaticLib___lam__1(v_libFile_6830_, v_thin_boxed_6840_, v_oFiles_6832_, v___y_6833_, v___y_6834_, v___y_6835_, v___y_6836_, v___y_6837_, v___y_6838_);
return v_res_6841_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib(lean_object* v_libFile_6843_, lean_object* v_oFileJobs_6844_, uint8_t v_thin_6845_, lean_object* v_a_6846_, lean_object* v_a_6847_, lean_object* v_a_6848_, lean_object* v_a_6849_, lean_object* v_a_6850_, lean_object* v_a_6851_){
_start:
{
lean_object* v___x_6853_; lean_object* v___f_6854_; lean_object* v___x_6855_; lean_object* v___x_6856_; lean_object* v___x_6857_; lean_object* v___x_6858_; uint8_t v___x_6859_; lean_object* v___x_6860_; 
v___x_6853_ = lean_box(v_thin_6845_);
v___f_6854_ = lean_alloc_closure((void*)(l_Lake_buildStaticLib___lam__1___boxed), 10, 2);
lean_closure_set(v___f_6854_, 0, v_libFile_6843_);
lean_closure_set(v___f_6854_, 1, v___x_6853_);
v___x_6855_ = l_Lake_instDataKindFilePath;
v___x_6856_ = ((lean_object*)(l_Lake_buildStaticLib___closed__0));
v___x_6857_ = l_Lake_Job_collectArray___redArg(v_oFileJobs_6844_, v___x_6856_);
v___x_6858_ = lean_unsigned_to_nat(0u);
v___x_6859_ = 0;
v___x_6860_ = l_Lake_Job_mapM___redArg(v___x_6855_, v___x_6857_, v___f_6854_, v___x_6858_, v___x_6859_, v_a_6846_, v_a_6847_, v_a_6848_, v_a_6849_, v_a_6850_, v_a_6851_);
return v___x_6860_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___boxed(lean_object* v_libFile_6861_, lean_object* v_oFileJobs_6862_, lean_object* v_thin_6863_, lean_object* v_a_6864_, lean_object* v_a_6865_, lean_object* v_a_6866_, lean_object* v_a_6867_, lean_object* v_a_6868_, lean_object* v_a_6869_, lean_object* v_a_6870_){
_start:
{
uint8_t v_thin_boxed_6871_; lean_object* v_res_6872_; 
v_thin_boxed_6871_ = lean_unbox(v_thin_6863_);
v_res_6872_ = l_Lake_buildStaticLib(v_libFile_6861_, v_oFileJobs_6862_, v_thin_boxed_6871_, v_a_6864_, v_a_6865_, v_a_6866_, v_a_6867_, v_a_6868_, v_a_6869_);
lean_dec_ref(v_oFileJobs_6862_);
return v_res_6872_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(lean_object* v_as_6873_, size_t v_sz_6874_, size_t v_i_6875_, lean_object* v_b_6876_){
_start:
{
uint8_t v___x_6877_; 
v___x_6877_ = lean_usize_dec_lt(v_i_6875_, v_sz_6874_);
if (v___x_6877_ == 0)
{
return v_b_6876_;
}
else
{
lean_object* v_a_6878_; lean_object* v___x_6879_; size_t v___x_6880_; size_t v___x_6881_; 
v_a_6878_ = lean_array_uget_borrowed(v_as_6873_, v_i_6875_);
lean_inc(v_a_6878_);
v___x_6879_ = lean_array_push(v_b_6876_, v_a_6878_);
v___x_6880_ = ((size_t)1ULL);
v___x_6881_ = lean_usize_add(v_i_6875_, v___x_6880_);
v_i_6875_ = v___x_6881_;
v_b_6876_ = v___x_6879_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0___boxed(lean_object* v_as_6883_, lean_object* v_sz_6884_, lean_object* v_i_6885_, lean_object* v_b_6886_){
_start:
{
size_t v_sz_boxed_6887_; size_t v_i_boxed_6888_; lean_object* v_res_6889_; 
v_sz_boxed_6887_ = lean_unbox_usize(v_sz_6884_);
lean_dec(v_sz_6884_);
v_i_boxed_6888_ = lean_unbox_usize(v_i_6885_);
lean_dec(v_i_6885_);
v_res_6889_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(v_as_6883_, v_sz_boxed_6887_, v_i_boxed_6888_, v_b_6886_);
lean_dec_ref(v_as_6883_);
return v_res_6889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(lean_object* v_as_6892_, size_t v_sz_6893_, size_t v_i_6894_, lean_object* v_b_6895_){
_start:
{
uint8_t v___x_6896_; 
v___x_6896_ = lean_usize_dec_lt(v_i_6894_, v_sz_6893_);
if (v___x_6896_ == 0)
{
return v_b_6895_;
}
else
{
lean_object* v_a_6897_; lean_object* v_args_6899_; lean_object* v___x_6907_; 
v_a_6897_ = lean_array_uget_borrowed(v_as_6892_, v_i_6894_);
lean_inc(v_a_6897_);
v___x_6907_ = l_Lake_Dynlib_dir_x3f(v_a_6897_);
if (lean_obj_tag(v___x_6907_) == 1)
{
lean_object* v_val_6908_; lean_object* v___x_6909_; lean_object* v___x_6910_; lean_object* v___x_6911_; 
v_val_6908_ = lean_ctor_get(v___x_6907_, 0);
lean_inc(v_val_6908_);
lean_dec_ref(v___x_6907_);
v___x_6909_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1));
v___x_6910_ = lean_string_append(v___x_6909_, v_val_6908_);
lean_dec(v_val_6908_);
v___x_6911_ = lean_array_push(v_b_6895_, v___x_6910_);
v_args_6899_ = v___x_6911_;
goto v___jp_6898_;
}
else
{
lean_dec(v___x_6907_);
v_args_6899_ = v_b_6895_;
goto v___jp_6898_;
}
v___jp_6898_:
{
lean_object* v_name_6900_; lean_object* v___x_6901_; lean_object* v___x_6902_; lean_object* v___x_6903_; size_t v___x_6904_; size_t v___x_6905_; 
v_name_6900_ = lean_ctor_get(v_a_6897_, 1);
v___x_6901_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0));
v___x_6902_ = lean_string_append(v___x_6901_, v_name_6900_);
v___x_6903_ = lean_array_push(v_args_6899_, v___x_6902_);
v___x_6904_ = ((size_t)1ULL);
v___x_6905_ = lean_usize_add(v_i_6894_, v___x_6904_);
v_i_6894_ = v___x_6905_;
v_b_6895_ = v___x_6903_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___boxed(lean_object* v_as_6912_, lean_object* v_sz_6913_, lean_object* v_i_6914_, lean_object* v_b_6915_){
_start:
{
size_t v_sz_boxed_6916_; size_t v_i_boxed_6917_; lean_object* v_res_6918_; 
v_sz_boxed_6916_ = lean_unbox_usize(v_sz_6913_);
lean_dec(v_sz_6913_);
v_i_boxed_6917_ = lean_unbox_usize(v_i_6914_);
lean_dec(v_i_6914_);
v_res_6918_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(v_as_6912_, v_sz_boxed_6916_, v_i_boxed_6917_, v_b_6915_);
lean_dec_ref(v_as_6912_);
return v_res_6918_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(lean_object* v_objs_6919_, lean_object* v_libs_6920_){
_start:
{
lean_object* v_args_6921_; size_t v_sz_6922_; size_t v___x_6923_; lean_object* v___x_6924_; size_t v_sz_6925_; lean_object* v___x_6926_; 
v_args_6921_ = ((lean_object*)(l_Lake_inputDir___lam__1___closed__0));
v_sz_6922_ = lean_array_size(v_objs_6919_);
v___x_6923_ = ((size_t)0ULL);
v___x_6924_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(v_objs_6919_, v_sz_6922_, v___x_6923_, v_args_6921_);
v_sz_6925_ = lean_array_size(v_libs_6920_);
v___x_6926_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(v_libs_6920_, v_sz_6925_, v___x_6923_, v___x_6924_);
return v___x_6926_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs___boxed(lean_object* v_objs_6927_, lean_object* v_libs_6928_){
_start:
{
lean_object* v_res_6929_; 
v_res_6929_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_6927_, v_libs_6928_);
lean_dec_ref(v_libs_6928_);
lean_dec_ref(v_objs_6927_);
return v_res_6929_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(lean_object* v_k_6930_, lean_object* v_t_6931_){
_start:
{
if (lean_obj_tag(v_t_6931_) == 0)
{
lean_object* v_k_6932_; lean_object* v_l_6933_; lean_object* v_r_6934_; uint8_t v___x_6935_; 
v_k_6932_ = lean_ctor_get(v_t_6931_, 1);
v_l_6933_ = lean_ctor_get(v_t_6931_, 3);
v_r_6934_ = lean_ctor_get(v_t_6931_, 4);
v___x_6935_ = lean_string_dec_lt(v_k_6930_, v_k_6932_);
if (v___x_6935_ == 0)
{
uint8_t v___x_6936_; 
v___x_6936_ = lean_string_dec_eq(v_k_6930_, v_k_6932_);
if (v___x_6936_ == 0)
{
v_t_6931_ = v_r_6934_;
goto _start;
}
else
{
return v___x_6936_;
}
}
else
{
v_t_6931_ = v_l_6933_;
goto _start;
}
}
else
{
uint8_t v___x_6939_; 
v___x_6939_ = 0;
return v___x_6939_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg___boxed(lean_object* v_k_6940_, lean_object* v_t_6941_){
_start:
{
uint8_t v_res_6942_; lean_object* v_r_6943_; 
v_res_6942_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_k_6940_, v_t_6941_);
lean_dec(v_t_6941_);
lean_dec_ref(v_k_6940_);
v_r_6943_ = lean_box(v_res_6942_);
return v_r_6943_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(lean_object* v_a_6944_, lean_object* v_x_6945_){
_start:
{
if (lean_obj_tag(v_x_6945_) == 0)
{
uint8_t v___x_6946_; 
v___x_6946_ = 0;
return v___x_6946_;
}
else
{
lean_object* v_head_6947_; lean_object* v_tail_6948_; uint8_t v___x_6949_; 
v_head_6947_ = lean_ctor_get(v_x_6945_, 0);
v_tail_6948_ = lean_ctor_get(v_x_6945_, 1);
v___x_6949_ = lean_string_dec_eq(v_a_6944_, v_head_6947_);
if (v___x_6949_ == 0)
{
v_x_6945_ = v_tail_6948_;
goto _start;
}
else
{
return v___x_6949_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1___boxed(lean_object* v_a_6951_, lean_object* v_x_6952_){
_start:
{
uint8_t v_res_6953_; lean_object* v_r_6954_; 
v_res_6953_ = l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(v_a_6951_, v_x_6952_);
lean_dec(v_x_6952_);
lean_dec_ref(v_a_6951_);
v_r_6954_ = lean_box(v_res_6953_);
return v_r_6954_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(lean_object* v_k_6955_, lean_object* v_v_6956_, lean_object* v_t_6957_){
_start:
{
if (lean_obj_tag(v_t_6957_) == 0)
{
lean_object* v_size_6958_; lean_object* v_k_6959_; lean_object* v_v_6960_; lean_object* v_l_6961_; lean_object* v_r_6962_; lean_object* v___x_6964_; uint8_t v_isShared_6965_; uint8_t v_isSharedCheck_7243_; 
v_size_6958_ = lean_ctor_get(v_t_6957_, 0);
v_k_6959_ = lean_ctor_get(v_t_6957_, 1);
v_v_6960_ = lean_ctor_get(v_t_6957_, 2);
v_l_6961_ = lean_ctor_get(v_t_6957_, 3);
v_r_6962_ = lean_ctor_get(v_t_6957_, 4);
v_isSharedCheck_7243_ = !lean_is_exclusive(v_t_6957_);
if (v_isSharedCheck_7243_ == 0)
{
v___x_6964_ = v_t_6957_;
v_isShared_6965_ = v_isSharedCheck_7243_;
goto v_resetjp_6963_;
}
else
{
lean_inc(v_r_6962_);
lean_inc(v_l_6961_);
lean_inc(v_v_6960_);
lean_inc(v_k_6959_);
lean_inc(v_size_6958_);
lean_dec(v_t_6957_);
v___x_6964_ = lean_box(0);
v_isShared_6965_ = v_isSharedCheck_7243_;
goto v_resetjp_6963_;
}
v_resetjp_6963_:
{
uint8_t v___x_6966_; 
v___x_6966_ = lean_string_dec_lt(v_k_6955_, v_k_6959_);
if (v___x_6966_ == 0)
{
uint8_t v___x_6967_; 
v___x_6967_ = lean_string_dec_eq(v_k_6955_, v_k_6959_);
if (v___x_6967_ == 0)
{
lean_object* v_impl_6968_; lean_object* v___x_6969_; 
lean_dec(v_size_6958_);
v_impl_6968_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_6955_, v_v_6956_, v_r_6962_);
v___x_6969_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_6961_) == 0)
{
lean_object* v_size_6970_; lean_object* v_size_6971_; lean_object* v_k_6972_; lean_object* v_v_6973_; lean_object* v_l_6974_; lean_object* v_r_6975_; lean_object* v___x_6976_; lean_object* v___x_6977_; uint8_t v___x_6978_; 
v_size_6970_ = lean_ctor_get(v_l_6961_, 0);
v_size_6971_ = lean_ctor_get(v_impl_6968_, 0);
lean_inc(v_size_6971_);
v_k_6972_ = lean_ctor_get(v_impl_6968_, 1);
lean_inc(v_k_6972_);
v_v_6973_ = lean_ctor_get(v_impl_6968_, 2);
lean_inc(v_v_6973_);
v_l_6974_ = lean_ctor_get(v_impl_6968_, 3);
lean_inc(v_l_6974_);
v_r_6975_ = lean_ctor_get(v_impl_6968_, 4);
lean_inc(v_r_6975_);
v___x_6976_ = lean_unsigned_to_nat(3u);
v___x_6977_ = lean_nat_mul(v___x_6976_, v_size_6970_);
v___x_6978_ = lean_nat_dec_lt(v___x_6977_, v_size_6971_);
lean_dec(v___x_6977_);
if (v___x_6978_ == 0)
{
lean_object* v___x_6979_; lean_object* v___x_6980_; lean_object* v___x_6982_; 
lean_dec(v_r_6975_);
lean_dec(v_l_6974_);
lean_dec(v_v_6973_);
lean_dec(v_k_6972_);
v___x_6979_ = lean_nat_add(v___x_6969_, v_size_6970_);
v___x_6980_ = lean_nat_add(v___x_6979_, v_size_6971_);
lean_dec(v_size_6971_);
lean_dec(v___x_6979_);
if (v_isShared_6965_ == 0)
{
lean_ctor_set(v___x_6964_, 4, v_impl_6968_);
lean_ctor_set(v___x_6964_, 0, v___x_6980_);
v___x_6982_ = v___x_6964_;
goto v_reusejp_6981_;
}
else
{
lean_object* v_reuseFailAlloc_6983_; 
v_reuseFailAlloc_6983_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6983_, 0, v___x_6980_);
lean_ctor_set(v_reuseFailAlloc_6983_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_6983_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_6983_, 3, v_l_6961_);
lean_ctor_set(v_reuseFailAlloc_6983_, 4, v_impl_6968_);
v___x_6982_ = v_reuseFailAlloc_6983_;
goto v_reusejp_6981_;
}
v_reusejp_6981_:
{
return v___x_6982_;
}
}
else
{
lean_object* v___x_6985_; uint8_t v_isShared_6986_; uint8_t v_isSharedCheck_7047_; 
v_isSharedCheck_7047_ = !lean_is_exclusive(v_impl_6968_);
if (v_isSharedCheck_7047_ == 0)
{
lean_object* v_unused_7048_; lean_object* v_unused_7049_; lean_object* v_unused_7050_; lean_object* v_unused_7051_; lean_object* v_unused_7052_; 
v_unused_7048_ = lean_ctor_get(v_impl_6968_, 4);
lean_dec(v_unused_7048_);
v_unused_7049_ = lean_ctor_get(v_impl_6968_, 3);
lean_dec(v_unused_7049_);
v_unused_7050_ = lean_ctor_get(v_impl_6968_, 2);
lean_dec(v_unused_7050_);
v_unused_7051_ = lean_ctor_get(v_impl_6968_, 1);
lean_dec(v_unused_7051_);
v_unused_7052_ = lean_ctor_get(v_impl_6968_, 0);
lean_dec(v_unused_7052_);
v___x_6985_ = v_impl_6968_;
v_isShared_6986_ = v_isSharedCheck_7047_;
goto v_resetjp_6984_;
}
else
{
lean_dec(v_impl_6968_);
v___x_6985_ = lean_box(0);
v_isShared_6986_ = v_isSharedCheck_7047_;
goto v_resetjp_6984_;
}
v_resetjp_6984_:
{
lean_object* v_size_6987_; lean_object* v_k_6988_; lean_object* v_v_6989_; lean_object* v_l_6990_; lean_object* v_r_6991_; lean_object* v_size_6992_; lean_object* v___x_6993_; lean_object* v___x_6994_; uint8_t v___x_6995_; 
v_size_6987_ = lean_ctor_get(v_l_6974_, 0);
v_k_6988_ = lean_ctor_get(v_l_6974_, 1);
v_v_6989_ = lean_ctor_get(v_l_6974_, 2);
v_l_6990_ = lean_ctor_get(v_l_6974_, 3);
v_r_6991_ = lean_ctor_get(v_l_6974_, 4);
v_size_6992_ = lean_ctor_get(v_r_6975_, 0);
v___x_6993_ = lean_unsigned_to_nat(2u);
v___x_6994_ = lean_nat_mul(v___x_6993_, v_size_6992_);
v___x_6995_ = lean_nat_dec_lt(v_size_6987_, v___x_6994_);
lean_dec(v___x_6994_);
if (v___x_6995_ == 0)
{
lean_object* v___x_6997_; uint8_t v_isShared_6998_; uint8_t v_isSharedCheck_7023_; 
lean_inc(v_r_6991_);
lean_inc(v_l_6990_);
lean_inc(v_v_6989_);
lean_inc(v_k_6988_);
v_isSharedCheck_7023_ = !lean_is_exclusive(v_l_6974_);
if (v_isSharedCheck_7023_ == 0)
{
lean_object* v_unused_7024_; lean_object* v_unused_7025_; lean_object* v_unused_7026_; lean_object* v_unused_7027_; lean_object* v_unused_7028_; 
v_unused_7024_ = lean_ctor_get(v_l_6974_, 4);
lean_dec(v_unused_7024_);
v_unused_7025_ = lean_ctor_get(v_l_6974_, 3);
lean_dec(v_unused_7025_);
v_unused_7026_ = lean_ctor_get(v_l_6974_, 2);
lean_dec(v_unused_7026_);
v_unused_7027_ = lean_ctor_get(v_l_6974_, 1);
lean_dec(v_unused_7027_);
v_unused_7028_ = lean_ctor_get(v_l_6974_, 0);
lean_dec(v_unused_7028_);
v___x_6997_ = v_l_6974_;
v_isShared_6998_ = v_isSharedCheck_7023_;
goto v_resetjp_6996_;
}
else
{
lean_dec(v_l_6974_);
v___x_6997_ = lean_box(0);
v_isShared_6998_ = v_isSharedCheck_7023_;
goto v_resetjp_6996_;
}
v_resetjp_6996_:
{
lean_object* v___x_6999_; lean_object* v___x_7000_; lean_object* v___y_7002_; lean_object* v___y_7003_; lean_object* v___y_7004_; lean_object* v___y_7013_; 
v___x_6999_ = lean_nat_add(v___x_6969_, v_size_6970_);
v___x_7000_ = lean_nat_add(v___x_6999_, v_size_6971_);
lean_dec(v_size_6971_);
if (lean_obj_tag(v_l_6990_) == 0)
{
lean_object* v_size_7021_; 
v_size_7021_ = lean_ctor_get(v_l_6990_, 0);
lean_inc(v_size_7021_);
v___y_7013_ = v_size_7021_;
goto v___jp_7012_;
}
else
{
lean_object* v___x_7022_; 
v___x_7022_ = lean_unsigned_to_nat(0u);
v___y_7013_ = v___x_7022_;
goto v___jp_7012_;
}
v___jp_7001_:
{
lean_object* v___x_7005_; lean_object* v___x_7007_; 
v___x_7005_ = lean_nat_add(v___y_7003_, v___y_7004_);
lean_dec(v___y_7004_);
lean_dec(v___y_7003_);
if (v_isShared_6998_ == 0)
{
lean_ctor_set(v___x_6997_, 4, v_r_6975_);
lean_ctor_set(v___x_6997_, 3, v_r_6991_);
lean_ctor_set(v___x_6997_, 2, v_v_6973_);
lean_ctor_set(v___x_6997_, 1, v_k_6972_);
lean_ctor_set(v___x_6997_, 0, v___x_7005_);
v___x_7007_ = v___x_6997_;
goto v_reusejp_7006_;
}
else
{
lean_object* v_reuseFailAlloc_7011_; 
v_reuseFailAlloc_7011_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7011_, 0, v___x_7005_);
lean_ctor_set(v_reuseFailAlloc_7011_, 1, v_k_6972_);
lean_ctor_set(v_reuseFailAlloc_7011_, 2, v_v_6973_);
lean_ctor_set(v_reuseFailAlloc_7011_, 3, v_r_6991_);
lean_ctor_set(v_reuseFailAlloc_7011_, 4, v_r_6975_);
v___x_7007_ = v_reuseFailAlloc_7011_;
goto v_reusejp_7006_;
}
v_reusejp_7006_:
{
lean_object* v___x_7009_; 
if (v_isShared_6986_ == 0)
{
lean_ctor_set(v___x_6985_, 4, v___x_7007_);
lean_ctor_set(v___x_6985_, 3, v___y_7002_);
lean_ctor_set(v___x_6985_, 2, v_v_6989_);
lean_ctor_set(v___x_6985_, 1, v_k_6988_);
lean_ctor_set(v___x_6985_, 0, v___x_7000_);
v___x_7009_ = v___x_6985_;
goto v_reusejp_7008_;
}
else
{
lean_object* v_reuseFailAlloc_7010_; 
v_reuseFailAlloc_7010_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7010_, 0, v___x_7000_);
lean_ctor_set(v_reuseFailAlloc_7010_, 1, v_k_6988_);
lean_ctor_set(v_reuseFailAlloc_7010_, 2, v_v_6989_);
lean_ctor_set(v_reuseFailAlloc_7010_, 3, v___y_7002_);
lean_ctor_set(v_reuseFailAlloc_7010_, 4, v___x_7007_);
v___x_7009_ = v_reuseFailAlloc_7010_;
goto v_reusejp_7008_;
}
v_reusejp_7008_:
{
return v___x_7009_;
}
}
}
v___jp_7012_:
{
lean_object* v___x_7014_; lean_object* v___x_7016_; 
v___x_7014_ = lean_nat_add(v___x_6999_, v___y_7013_);
lean_dec(v___y_7013_);
lean_dec(v___x_6999_);
if (v_isShared_6965_ == 0)
{
lean_ctor_set(v___x_6964_, 4, v_l_6990_);
lean_ctor_set(v___x_6964_, 0, v___x_7014_);
v___x_7016_ = v___x_6964_;
goto v_reusejp_7015_;
}
else
{
lean_object* v_reuseFailAlloc_7020_; 
v_reuseFailAlloc_7020_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7020_, 0, v___x_7014_);
lean_ctor_set(v_reuseFailAlloc_7020_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_7020_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_7020_, 3, v_l_6961_);
lean_ctor_set(v_reuseFailAlloc_7020_, 4, v_l_6990_);
v___x_7016_ = v_reuseFailAlloc_7020_;
goto v_reusejp_7015_;
}
v_reusejp_7015_:
{
lean_object* v___x_7017_; 
v___x_7017_ = lean_nat_add(v___x_6969_, v_size_6992_);
if (lean_obj_tag(v_r_6991_) == 0)
{
lean_object* v_size_7018_; 
v_size_7018_ = lean_ctor_get(v_r_6991_, 0);
lean_inc(v_size_7018_);
v___y_7002_ = v___x_7016_;
v___y_7003_ = v___x_7017_;
v___y_7004_ = v_size_7018_;
goto v___jp_7001_;
}
else
{
lean_object* v___x_7019_; 
v___x_7019_ = lean_unsigned_to_nat(0u);
v___y_7002_ = v___x_7016_;
v___y_7003_ = v___x_7017_;
v___y_7004_ = v___x_7019_;
goto v___jp_7001_;
}
}
}
}
}
else
{
lean_object* v___x_7029_; lean_object* v___x_7030_; lean_object* v___x_7031_; lean_object* v___x_7033_; 
lean_del_object(v___x_6964_);
v___x_7029_ = lean_nat_add(v___x_6969_, v_size_6970_);
v___x_7030_ = lean_nat_add(v___x_7029_, v_size_6971_);
lean_dec(v_size_6971_);
v___x_7031_ = lean_nat_add(v___x_7029_, v_size_6987_);
lean_dec(v___x_7029_);
lean_inc_ref(v_l_6961_);
if (v_isShared_6986_ == 0)
{
lean_ctor_set(v___x_6985_, 4, v_l_6974_);
lean_ctor_set(v___x_6985_, 3, v_l_6961_);
lean_ctor_set(v___x_6985_, 2, v_v_6960_);
lean_ctor_set(v___x_6985_, 1, v_k_6959_);
lean_ctor_set(v___x_6985_, 0, v___x_7031_);
v___x_7033_ = v___x_6985_;
goto v_reusejp_7032_;
}
else
{
lean_object* v_reuseFailAlloc_7046_; 
v_reuseFailAlloc_7046_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7046_, 0, v___x_7031_);
lean_ctor_set(v_reuseFailAlloc_7046_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_7046_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_7046_, 3, v_l_6961_);
lean_ctor_set(v_reuseFailAlloc_7046_, 4, v_l_6974_);
v___x_7033_ = v_reuseFailAlloc_7046_;
goto v_reusejp_7032_;
}
v_reusejp_7032_:
{
lean_object* v___x_7035_; uint8_t v_isShared_7036_; uint8_t v_isSharedCheck_7040_; 
v_isSharedCheck_7040_ = !lean_is_exclusive(v_l_6961_);
if (v_isSharedCheck_7040_ == 0)
{
lean_object* v_unused_7041_; lean_object* v_unused_7042_; lean_object* v_unused_7043_; lean_object* v_unused_7044_; lean_object* v_unused_7045_; 
v_unused_7041_ = lean_ctor_get(v_l_6961_, 4);
lean_dec(v_unused_7041_);
v_unused_7042_ = lean_ctor_get(v_l_6961_, 3);
lean_dec(v_unused_7042_);
v_unused_7043_ = lean_ctor_get(v_l_6961_, 2);
lean_dec(v_unused_7043_);
v_unused_7044_ = lean_ctor_get(v_l_6961_, 1);
lean_dec(v_unused_7044_);
v_unused_7045_ = lean_ctor_get(v_l_6961_, 0);
lean_dec(v_unused_7045_);
v___x_7035_ = v_l_6961_;
v_isShared_7036_ = v_isSharedCheck_7040_;
goto v_resetjp_7034_;
}
else
{
lean_dec(v_l_6961_);
v___x_7035_ = lean_box(0);
v_isShared_7036_ = v_isSharedCheck_7040_;
goto v_resetjp_7034_;
}
v_resetjp_7034_:
{
lean_object* v___x_7038_; 
if (v_isShared_7036_ == 0)
{
lean_ctor_set(v___x_7035_, 4, v_r_6975_);
lean_ctor_set(v___x_7035_, 3, v___x_7033_);
lean_ctor_set(v___x_7035_, 2, v_v_6973_);
lean_ctor_set(v___x_7035_, 1, v_k_6972_);
lean_ctor_set(v___x_7035_, 0, v___x_7030_);
v___x_7038_ = v___x_7035_;
goto v_reusejp_7037_;
}
else
{
lean_object* v_reuseFailAlloc_7039_; 
v_reuseFailAlloc_7039_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7039_, 0, v___x_7030_);
lean_ctor_set(v_reuseFailAlloc_7039_, 1, v_k_6972_);
lean_ctor_set(v_reuseFailAlloc_7039_, 2, v_v_6973_);
lean_ctor_set(v_reuseFailAlloc_7039_, 3, v___x_7033_);
lean_ctor_set(v_reuseFailAlloc_7039_, 4, v_r_6975_);
v___x_7038_ = v_reuseFailAlloc_7039_;
goto v_reusejp_7037_;
}
v_reusejp_7037_:
{
return v___x_7038_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_7053_; 
v_l_7053_ = lean_ctor_get(v_impl_6968_, 3);
lean_inc(v_l_7053_);
if (lean_obj_tag(v_l_7053_) == 0)
{
lean_object* v_r_7054_; lean_object* v_k_7055_; lean_object* v_v_7056_; lean_object* v___x_7058_; uint8_t v_isShared_7059_; uint8_t v_isSharedCheck_7079_; 
v_r_7054_ = lean_ctor_get(v_impl_6968_, 4);
v_k_7055_ = lean_ctor_get(v_impl_6968_, 1);
v_v_7056_ = lean_ctor_get(v_impl_6968_, 2);
v_isSharedCheck_7079_ = !lean_is_exclusive(v_impl_6968_);
if (v_isSharedCheck_7079_ == 0)
{
lean_object* v_unused_7080_; lean_object* v_unused_7081_; 
v_unused_7080_ = lean_ctor_get(v_impl_6968_, 3);
lean_dec(v_unused_7080_);
v_unused_7081_ = lean_ctor_get(v_impl_6968_, 0);
lean_dec(v_unused_7081_);
v___x_7058_ = v_impl_6968_;
v_isShared_7059_ = v_isSharedCheck_7079_;
goto v_resetjp_7057_;
}
else
{
lean_inc(v_r_7054_);
lean_inc(v_v_7056_);
lean_inc(v_k_7055_);
lean_dec(v_impl_6968_);
v___x_7058_ = lean_box(0);
v_isShared_7059_ = v_isSharedCheck_7079_;
goto v_resetjp_7057_;
}
v_resetjp_7057_:
{
lean_object* v_k_7060_; lean_object* v_v_7061_; lean_object* v___x_7063_; uint8_t v_isShared_7064_; uint8_t v_isSharedCheck_7075_; 
v_k_7060_ = lean_ctor_get(v_l_7053_, 1);
v_v_7061_ = lean_ctor_get(v_l_7053_, 2);
v_isSharedCheck_7075_ = !lean_is_exclusive(v_l_7053_);
if (v_isSharedCheck_7075_ == 0)
{
lean_object* v_unused_7076_; lean_object* v_unused_7077_; lean_object* v_unused_7078_; 
v_unused_7076_ = lean_ctor_get(v_l_7053_, 4);
lean_dec(v_unused_7076_);
v_unused_7077_ = lean_ctor_get(v_l_7053_, 3);
lean_dec(v_unused_7077_);
v_unused_7078_ = lean_ctor_get(v_l_7053_, 0);
lean_dec(v_unused_7078_);
v___x_7063_ = v_l_7053_;
v_isShared_7064_ = v_isSharedCheck_7075_;
goto v_resetjp_7062_;
}
else
{
lean_inc(v_v_7061_);
lean_inc(v_k_7060_);
lean_dec(v_l_7053_);
v___x_7063_ = lean_box(0);
v_isShared_7064_ = v_isSharedCheck_7075_;
goto v_resetjp_7062_;
}
v_resetjp_7062_:
{
lean_object* v___x_7065_; lean_object* v___x_7067_; 
v___x_7065_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_7054_, 2);
if (v_isShared_7064_ == 0)
{
lean_ctor_set(v___x_7063_, 4, v_r_7054_);
lean_ctor_set(v___x_7063_, 3, v_r_7054_);
lean_ctor_set(v___x_7063_, 2, v_v_6960_);
lean_ctor_set(v___x_7063_, 1, v_k_6959_);
lean_ctor_set(v___x_7063_, 0, v___x_6969_);
v___x_7067_ = v___x_7063_;
goto v_reusejp_7066_;
}
else
{
lean_object* v_reuseFailAlloc_7074_; 
v_reuseFailAlloc_7074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7074_, 0, v___x_6969_);
lean_ctor_set(v_reuseFailAlloc_7074_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_7074_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_7074_, 3, v_r_7054_);
lean_ctor_set(v_reuseFailAlloc_7074_, 4, v_r_7054_);
v___x_7067_ = v_reuseFailAlloc_7074_;
goto v_reusejp_7066_;
}
v_reusejp_7066_:
{
lean_object* v___x_7069_; 
lean_inc(v_r_7054_);
if (v_isShared_7059_ == 0)
{
lean_ctor_set(v___x_7058_, 3, v_r_7054_);
lean_ctor_set(v___x_7058_, 0, v___x_6969_);
v___x_7069_ = v___x_7058_;
goto v_reusejp_7068_;
}
else
{
lean_object* v_reuseFailAlloc_7073_; 
v_reuseFailAlloc_7073_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7073_, 0, v___x_6969_);
lean_ctor_set(v_reuseFailAlloc_7073_, 1, v_k_7055_);
lean_ctor_set(v_reuseFailAlloc_7073_, 2, v_v_7056_);
lean_ctor_set(v_reuseFailAlloc_7073_, 3, v_r_7054_);
lean_ctor_set(v_reuseFailAlloc_7073_, 4, v_r_7054_);
v___x_7069_ = v_reuseFailAlloc_7073_;
goto v_reusejp_7068_;
}
v_reusejp_7068_:
{
lean_object* v___x_7071_; 
if (v_isShared_6965_ == 0)
{
lean_ctor_set(v___x_6964_, 4, v___x_7069_);
lean_ctor_set(v___x_6964_, 3, v___x_7067_);
lean_ctor_set(v___x_6964_, 2, v_v_7061_);
lean_ctor_set(v___x_6964_, 1, v_k_7060_);
lean_ctor_set(v___x_6964_, 0, v___x_7065_);
v___x_7071_ = v___x_6964_;
goto v_reusejp_7070_;
}
else
{
lean_object* v_reuseFailAlloc_7072_; 
v_reuseFailAlloc_7072_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7072_, 0, v___x_7065_);
lean_ctor_set(v_reuseFailAlloc_7072_, 1, v_k_7060_);
lean_ctor_set(v_reuseFailAlloc_7072_, 2, v_v_7061_);
lean_ctor_set(v_reuseFailAlloc_7072_, 3, v___x_7067_);
lean_ctor_set(v_reuseFailAlloc_7072_, 4, v___x_7069_);
v___x_7071_ = v_reuseFailAlloc_7072_;
goto v_reusejp_7070_;
}
v_reusejp_7070_:
{
return v___x_7071_;
}
}
}
}
}
}
else
{
lean_object* v_r_7082_; 
v_r_7082_ = lean_ctor_get(v_impl_6968_, 4);
lean_inc(v_r_7082_);
if (lean_obj_tag(v_r_7082_) == 0)
{
lean_object* v_k_7083_; lean_object* v_v_7084_; lean_object* v___x_7086_; uint8_t v_isShared_7087_; uint8_t v_isSharedCheck_7095_; 
v_k_7083_ = lean_ctor_get(v_impl_6968_, 1);
v_v_7084_ = lean_ctor_get(v_impl_6968_, 2);
v_isSharedCheck_7095_ = !lean_is_exclusive(v_impl_6968_);
if (v_isSharedCheck_7095_ == 0)
{
lean_object* v_unused_7096_; lean_object* v_unused_7097_; lean_object* v_unused_7098_; 
v_unused_7096_ = lean_ctor_get(v_impl_6968_, 4);
lean_dec(v_unused_7096_);
v_unused_7097_ = lean_ctor_get(v_impl_6968_, 3);
lean_dec(v_unused_7097_);
v_unused_7098_ = lean_ctor_get(v_impl_6968_, 0);
lean_dec(v_unused_7098_);
v___x_7086_ = v_impl_6968_;
v_isShared_7087_ = v_isSharedCheck_7095_;
goto v_resetjp_7085_;
}
else
{
lean_inc(v_v_7084_);
lean_inc(v_k_7083_);
lean_dec(v_impl_6968_);
v___x_7086_ = lean_box(0);
v_isShared_7087_ = v_isSharedCheck_7095_;
goto v_resetjp_7085_;
}
v_resetjp_7085_:
{
lean_object* v___x_7088_; lean_object* v___x_7090_; 
v___x_7088_ = lean_unsigned_to_nat(3u);
if (v_isShared_7087_ == 0)
{
lean_ctor_set(v___x_7086_, 4, v_l_7053_);
lean_ctor_set(v___x_7086_, 2, v_v_6960_);
lean_ctor_set(v___x_7086_, 1, v_k_6959_);
lean_ctor_set(v___x_7086_, 0, v___x_6969_);
v___x_7090_ = v___x_7086_;
goto v_reusejp_7089_;
}
else
{
lean_object* v_reuseFailAlloc_7094_; 
v_reuseFailAlloc_7094_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7094_, 0, v___x_6969_);
lean_ctor_set(v_reuseFailAlloc_7094_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_7094_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_7094_, 3, v_l_7053_);
lean_ctor_set(v_reuseFailAlloc_7094_, 4, v_l_7053_);
v___x_7090_ = v_reuseFailAlloc_7094_;
goto v_reusejp_7089_;
}
v_reusejp_7089_:
{
lean_object* v___x_7092_; 
if (v_isShared_6965_ == 0)
{
lean_ctor_set(v___x_6964_, 4, v_r_7082_);
lean_ctor_set(v___x_6964_, 3, v___x_7090_);
lean_ctor_set(v___x_6964_, 2, v_v_7084_);
lean_ctor_set(v___x_6964_, 1, v_k_7083_);
lean_ctor_set(v___x_6964_, 0, v___x_7088_);
v___x_7092_ = v___x_6964_;
goto v_reusejp_7091_;
}
else
{
lean_object* v_reuseFailAlloc_7093_; 
v_reuseFailAlloc_7093_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7093_, 0, v___x_7088_);
lean_ctor_set(v_reuseFailAlloc_7093_, 1, v_k_7083_);
lean_ctor_set(v_reuseFailAlloc_7093_, 2, v_v_7084_);
lean_ctor_set(v_reuseFailAlloc_7093_, 3, v___x_7090_);
lean_ctor_set(v_reuseFailAlloc_7093_, 4, v_r_7082_);
v___x_7092_ = v_reuseFailAlloc_7093_;
goto v_reusejp_7091_;
}
v_reusejp_7091_:
{
return v___x_7092_;
}
}
}
}
else
{
lean_object* v___x_7099_; lean_object* v___x_7101_; 
v___x_7099_ = lean_unsigned_to_nat(2u);
if (v_isShared_6965_ == 0)
{
lean_ctor_set(v___x_6964_, 4, v_impl_6968_);
lean_ctor_set(v___x_6964_, 3, v_r_7082_);
lean_ctor_set(v___x_6964_, 0, v___x_7099_);
v___x_7101_ = v___x_6964_;
goto v_reusejp_7100_;
}
else
{
lean_object* v_reuseFailAlloc_7102_; 
v_reuseFailAlloc_7102_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7102_, 0, v___x_7099_);
lean_ctor_set(v_reuseFailAlloc_7102_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_7102_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_7102_, 3, v_r_7082_);
lean_ctor_set(v_reuseFailAlloc_7102_, 4, v_impl_6968_);
v___x_7101_ = v_reuseFailAlloc_7102_;
goto v_reusejp_7100_;
}
v_reusejp_7100_:
{
return v___x_7101_;
}
}
}
}
}
else
{
lean_object* v___x_7104_; 
lean_dec(v_v_6960_);
lean_dec(v_k_6959_);
if (v_isShared_6965_ == 0)
{
lean_ctor_set(v___x_6964_, 2, v_v_6956_);
lean_ctor_set(v___x_6964_, 1, v_k_6955_);
v___x_7104_ = v___x_6964_;
goto v_reusejp_7103_;
}
else
{
lean_object* v_reuseFailAlloc_7105_; 
v_reuseFailAlloc_7105_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7105_, 0, v_size_6958_);
lean_ctor_set(v_reuseFailAlloc_7105_, 1, v_k_6955_);
lean_ctor_set(v_reuseFailAlloc_7105_, 2, v_v_6956_);
lean_ctor_set(v_reuseFailAlloc_7105_, 3, v_l_6961_);
lean_ctor_set(v_reuseFailAlloc_7105_, 4, v_r_6962_);
v___x_7104_ = v_reuseFailAlloc_7105_;
goto v_reusejp_7103_;
}
v_reusejp_7103_:
{
return v___x_7104_;
}
}
}
else
{
lean_object* v_impl_7106_; lean_object* v___x_7107_; 
lean_dec(v_size_6958_);
v_impl_7106_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_6955_, v_v_6956_, v_l_6961_);
v___x_7107_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_6962_) == 0)
{
lean_object* v_size_7108_; lean_object* v_size_7109_; lean_object* v_k_7110_; lean_object* v_v_7111_; lean_object* v_l_7112_; lean_object* v_r_7113_; lean_object* v___x_7114_; lean_object* v___x_7115_; uint8_t v___x_7116_; 
v_size_7108_ = lean_ctor_get(v_r_6962_, 0);
v_size_7109_ = lean_ctor_get(v_impl_7106_, 0);
lean_inc(v_size_7109_);
v_k_7110_ = lean_ctor_get(v_impl_7106_, 1);
lean_inc(v_k_7110_);
v_v_7111_ = lean_ctor_get(v_impl_7106_, 2);
lean_inc(v_v_7111_);
v_l_7112_ = lean_ctor_get(v_impl_7106_, 3);
lean_inc(v_l_7112_);
v_r_7113_ = lean_ctor_get(v_impl_7106_, 4);
lean_inc(v_r_7113_);
v___x_7114_ = lean_unsigned_to_nat(3u);
v___x_7115_ = lean_nat_mul(v___x_7114_, v_size_7108_);
v___x_7116_ = lean_nat_dec_lt(v___x_7115_, v_size_7109_);
lean_dec(v___x_7115_);
if (v___x_7116_ == 0)
{
lean_object* v___x_7117_; lean_object* v___x_7118_; lean_object* v___x_7120_; 
lean_dec(v_r_7113_);
lean_dec(v_l_7112_);
lean_dec(v_v_7111_);
lean_dec(v_k_7110_);
v___x_7117_ = lean_nat_add(v___x_7107_, v_size_7109_);
lean_dec(v_size_7109_);
v___x_7118_ = lean_nat_add(v___x_7117_, v_size_7108_);
lean_dec(v___x_7117_);
if (v_isShared_6965_ == 0)
{
lean_ctor_set(v___x_6964_, 3, v_impl_7106_);
lean_ctor_set(v___x_6964_, 0, v___x_7118_);
v___x_7120_ = v___x_6964_;
goto v_reusejp_7119_;
}
else
{
lean_object* v_reuseFailAlloc_7121_; 
v_reuseFailAlloc_7121_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7121_, 0, v___x_7118_);
lean_ctor_set(v_reuseFailAlloc_7121_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_7121_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_7121_, 3, v_impl_7106_);
lean_ctor_set(v_reuseFailAlloc_7121_, 4, v_r_6962_);
v___x_7120_ = v_reuseFailAlloc_7121_;
goto v_reusejp_7119_;
}
v_reusejp_7119_:
{
return v___x_7120_;
}
}
else
{
lean_object* v___x_7123_; uint8_t v_isShared_7124_; uint8_t v_isSharedCheck_7187_; 
v_isSharedCheck_7187_ = !lean_is_exclusive(v_impl_7106_);
if (v_isSharedCheck_7187_ == 0)
{
lean_object* v_unused_7188_; lean_object* v_unused_7189_; lean_object* v_unused_7190_; lean_object* v_unused_7191_; lean_object* v_unused_7192_; 
v_unused_7188_ = lean_ctor_get(v_impl_7106_, 4);
lean_dec(v_unused_7188_);
v_unused_7189_ = lean_ctor_get(v_impl_7106_, 3);
lean_dec(v_unused_7189_);
v_unused_7190_ = lean_ctor_get(v_impl_7106_, 2);
lean_dec(v_unused_7190_);
v_unused_7191_ = lean_ctor_get(v_impl_7106_, 1);
lean_dec(v_unused_7191_);
v_unused_7192_ = lean_ctor_get(v_impl_7106_, 0);
lean_dec(v_unused_7192_);
v___x_7123_ = v_impl_7106_;
v_isShared_7124_ = v_isSharedCheck_7187_;
goto v_resetjp_7122_;
}
else
{
lean_dec(v_impl_7106_);
v___x_7123_ = lean_box(0);
v_isShared_7124_ = v_isSharedCheck_7187_;
goto v_resetjp_7122_;
}
v_resetjp_7122_:
{
lean_object* v_size_7125_; lean_object* v_size_7126_; lean_object* v_k_7127_; lean_object* v_v_7128_; lean_object* v_l_7129_; lean_object* v_r_7130_; lean_object* v___x_7131_; lean_object* v___x_7132_; uint8_t v___x_7133_; 
v_size_7125_ = lean_ctor_get(v_l_7112_, 0);
v_size_7126_ = lean_ctor_get(v_r_7113_, 0);
v_k_7127_ = lean_ctor_get(v_r_7113_, 1);
v_v_7128_ = lean_ctor_get(v_r_7113_, 2);
v_l_7129_ = lean_ctor_get(v_r_7113_, 3);
v_r_7130_ = lean_ctor_get(v_r_7113_, 4);
v___x_7131_ = lean_unsigned_to_nat(2u);
v___x_7132_ = lean_nat_mul(v___x_7131_, v_size_7125_);
v___x_7133_ = lean_nat_dec_lt(v_size_7126_, v___x_7132_);
lean_dec(v___x_7132_);
if (v___x_7133_ == 0)
{
lean_object* v___x_7135_; uint8_t v_isShared_7136_; uint8_t v_isSharedCheck_7162_; 
lean_inc(v_r_7130_);
lean_inc(v_l_7129_);
lean_inc(v_v_7128_);
lean_inc(v_k_7127_);
v_isSharedCheck_7162_ = !lean_is_exclusive(v_r_7113_);
if (v_isSharedCheck_7162_ == 0)
{
lean_object* v_unused_7163_; lean_object* v_unused_7164_; lean_object* v_unused_7165_; lean_object* v_unused_7166_; lean_object* v_unused_7167_; 
v_unused_7163_ = lean_ctor_get(v_r_7113_, 4);
lean_dec(v_unused_7163_);
v_unused_7164_ = lean_ctor_get(v_r_7113_, 3);
lean_dec(v_unused_7164_);
v_unused_7165_ = lean_ctor_get(v_r_7113_, 2);
lean_dec(v_unused_7165_);
v_unused_7166_ = lean_ctor_get(v_r_7113_, 1);
lean_dec(v_unused_7166_);
v_unused_7167_ = lean_ctor_get(v_r_7113_, 0);
lean_dec(v_unused_7167_);
v___x_7135_ = v_r_7113_;
v_isShared_7136_ = v_isSharedCheck_7162_;
goto v_resetjp_7134_;
}
else
{
lean_dec(v_r_7113_);
v___x_7135_ = lean_box(0);
v_isShared_7136_ = v_isSharedCheck_7162_;
goto v_resetjp_7134_;
}
v_resetjp_7134_:
{
lean_object* v___x_7137_; lean_object* v___x_7138_; lean_object* v___y_7140_; lean_object* v___y_7141_; lean_object* v___y_7142_; lean_object* v___x_7150_; lean_object* v___y_7152_; 
v___x_7137_ = lean_nat_add(v___x_7107_, v_size_7109_);
lean_dec(v_size_7109_);
v___x_7138_ = lean_nat_add(v___x_7137_, v_size_7108_);
lean_dec(v___x_7137_);
v___x_7150_ = lean_nat_add(v___x_7107_, v_size_7125_);
if (lean_obj_tag(v_l_7129_) == 0)
{
lean_object* v_size_7160_; 
v_size_7160_ = lean_ctor_get(v_l_7129_, 0);
lean_inc(v_size_7160_);
v___y_7152_ = v_size_7160_;
goto v___jp_7151_;
}
else
{
lean_object* v___x_7161_; 
v___x_7161_ = lean_unsigned_to_nat(0u);
v___y_7152_ = v___x_7161_;
goto v___jp_7151_;
}
v___jp_7139_:
{
lean_object* v___x_7143_; lean_object* v___x_7145_; 
v___x_7143_ = lean_nat_add(v___y_7141_, v___y_7142_);
lean_dec(v___y_7142_);
lean_dec(v___y_7141_);
if (v_isShared_7136_ == 0)
{
lean_ctor_set(v___x_7135_, 4, v_r_6962_);
lean_ctor_set(v___x_7135_, 3, v_r_7130_);
lean_ctor_set(v___x_7135_, 2, v_v_6960_);
lean_ctor_set(v___x_7135_, 1, v_k_6959_);
lean_ctor_set(v___x_7135_, 0, v___x_7143_);
v___x_7145_ = v___x_7135_;
goto v_reusejp_7144_;
}
else
{
lean_object* v_reuseFailAlloc_7149_; 
v_reuseFailAlloc_7149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7149_, 0, v___x_7143_);
lean_ctor_set(v_reuseFailAlloc_7149_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_7149_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_7149_, 3, v_r_7130_);
lean_ctor_set(v_reuseFailAlloc_7149_, 4, v_r_6962_);
v___x_7145_ = v_reuseFailAlloc_7149_;
goto v_reusejp_7144_;
}
v_reusejp_7144_:
{
lean_object* v___x_7147_; 
if (v_isShared_7124_ == 0)
{
lean_ctor_set(v___x_7123_, 4, v___x_7145_);
lean_ctor_set(v___x_7123_, 3, v___y_7140_);
lean_ctor_set(v___x_7123_, 2, v_v_7128_);
lean_ctor_set(v___x_7123_, 1, v_k_7127_);
lean_ctor_set(v___x_7123_, 0, v___x_7138_);
v___x_7147_ = v___x_7123_;
goto v_reusejp_7146_;
}
else
{
lean_object* v_reuseFailAlloc_7148_; 
v_reuseFailAlloc_7148_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7148_, 0, v___x_7138_);
lean_ctor_set(v_reuseFailAlloc_7148_, 1, v_k_7127_);
lean_ctor_set(v_reuseFailAlloc_7148_, 2, v_v_7128_);
lean_ctor_set(v_reuseFailAlloc_7148_, 3, v___y_7140_);
lean_ctor_set(v_reuseFailAlloc_7148_, 4, v___x_7145_);
v___x_7147_ = v_reuseFailAlloc_7148_;
goto v_reusejp_7146_;
}
v_reusejp_7146_:
{
return v___x_7147_;
}
}
}
v___jp_7151_:
{
lean_object* v___x_7153_; lean_object* v___x_7155_; 
v___x_7153_ = lean_nat_add(v___x_7150_, v___y_7152_);
lean_dec(v___y_7152_);
lean_dec(v___x_7150_);
if (v_isShared_6965_ == 0)
{
lean_ctor_set(v___x_6964_, 4, v_l_7129_);
lean_ctor_set(v___x_6964_, 3, v_l_7112_);
lean_ctor_set(v___x_6964_, 2, v_v_7111_);
lean_ctor_set(v___x_6964_, 1, v_k_7110_);
lean_ctor_set(v___x_6964_, 0, v___x_7153_);
v___x_7155_ = v___x_6964_;
goto v_reusejp_7154_;
}
else
{
lean_object* v_reuseFailAlloc_7159_; 
v_reuseFailAlloc_7159_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7159_, 0, v___x_7153_);
lean_ctor_set(v_reuseFailAlloc_7159_, 1, v_k_7110_);
lean_ctor_set(v_reuseFailAlloc_7159_, 2, v_v_7111_);
lean_ctor_set(v_reuseFailAlloc_7159_, 3, v_l_7112_);
lean_ctor_set(v_reuseFailAlloc_7159_, 4, v_l_7129_);
v___x_7155_ = v_reuseFailAlloc_7159_;
goto v_reusejp_7154_;
}
v_reusejp_7154_:
{
lean_object* v___x_7156_; 
v___x_7156_ = lean_nat_add(v___x_7107_, v_size_7108_);
if (lean_obj_tag(v_r_7130_) == 0)
{
lean_object* v_size_7157_; 
v_size_7157_ = lean_ctor_get(v_r_7130_, 0);
lean_inc(v_size_7157_);
v___y_7140_ = v___x_7155_;
v___y_7141_ = v___x_7156_;
v___y_7142_ = v_size_7157_;
goto v___jp_7139_;
}
else
{
lean_object* v___x_7158_; 
v___x_7158_ = lean_unsigned_to_nat(0u);
v___y_7140_ = v___x_7155_;
v___y_7141_ = v___x_7156_;
v___y_7142_ = v___x_7158_;
goto v___jp_7139_;
}
}
}
}
}
else
{
lean_object* v___x_7168_; lean_object* v___x_7169_; lean_object* v___x_7170_; lean_object* v___x_7171_; lean_object* v___x_7173_; 
lean_del_object(v___x_6964_);
v___x_7168_ = lean_nat_add(v___x_7107_, v_size_7109_);
lean_dec(v_size_7109_);
v___x_7169_ = lean_nat_add(v___x_7168_, v_size_7108_);
lean_dec(v___x_7168_);
v___x_7170_ = lean_nat_add(v___x_7107_, v_size_7108_);
v___x_7171_ = lean_nat_add(v___x_7170_, v_size_7126_);
lean_dec(v___x_7170_);
lean_inc_ref(v_r_6962_);
if (v_isShared_7124_ == 0)
{
lean_ctor_set(v___x_7123_, 4, v_r_6962_);
lean_ctor_set(v___x_7123_, 3, v_r_7113_);
lean_ctor_set(v___x_7123_, 2, v_v_6960_);
lean_ctor_set(v___x_7123_, 1, v_k_6959_);
lean_ctor_set(v___x_7123_, 0, v___x_7171_);
v___x_7173_ = v___x_7123_;
goto v_reusejp_7172_;
}
else
{
lean_object* v_reuseFailAlloc_7186_; 
v_reuseFailAlloc_7186_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7186_, 0, v___x_7171_);
lean_ctor_set(v_reuseFailAlloc_7186_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_7186_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_7186_, 3, v_r_7113_);
lean_ctor_set(v_reuseFailAlloc_7186_, 4, v_r_6962_);
v___x_7173_ = v_reuseFailAlloc_7186_;
goto v_reusejp_7172_;
}
v_reusejp_7172_:
{
lean_object* v___x_7175_; uint8_t v_isShared_7176_; uint8_t v_isSharedCheck_7180_; 
v_isSharedCheck_7180_ = !lean_is_exclusive(v_r_6962_);
if (v_isSharedCheck_7180_ == 0)
{
lean_object* v_unused_7181_; lean_object* v_unused_7182_; lean_object* v_unused_7183_; lean_object* v_unused_7184_; lean_object* v_unused_7185_; 
v_unused_7181_ = lean_ctor_get(v_r_6962_, 4);
lean_dec(v_unused_7181_);
v_unused_7182_ = lean_ctor_get(v_r_6962_, 3);
lean_dec(v_unused_7182_);
v_unused_7183_ = lean_ctor_get(v_r_6962_, 2);
lean_dec(v_unused_7183_);
v_unused_7184_ = lean_ctor_get(v_r_6962_, 1);
lean_dec(v_unused_7184_);
v_unused_7185_ = lean_ctor_get(v_r_6962_, 0);
lean_dec(v_unused_7185_);
v___x_7175_ = v_r_6962_;
v_isShared_7176_ = v_isSharedCheck_7180_;
goto v_resetjp_7174_;
}
else
{
lean_dec(v_r_6962_);
v___x_7175_ = lean_box(0);
v_isShared_7176_ = v_isSharedCheck_7180_;
goto v_resetjp_7174_;
}
v_resetjp_7174_:
{
lean_object* v___x_7178_; 
if (v_isShared_7176_ == 0)
{
lean_ctor_set(v___x_7175_, 4, v___x_7173_);
lean_ctor_set(v___x_7175_, 3, v_l_7112_);
lean_ctor_set(v___x_7175_, 2, v_v_7111_);
lean_ctor_set(v___x_7175_, 1, v_k_7110_);
lean_ctor_set(v___x_7175_, 0, v___x_7169_);
v___x_7178_ = v___x_7175_;
goto v_reusejp_7177_;
}
else
{
lean_object* v_reuseFailAlloc_7179_; 
v_reuseFailAlloc_7179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7179_, 0, v___x_7169_);
lean_ctor_set(v_reuseFailAlloc_7179_, 1, v_k_7110_);
lean_ctor_set(v_reuseFailAlloc_7179_, 2, v_v_7111_);
lean_ctor_set(v_reuseFailAlloc_7179_, 3, v_l_7112_);
lean_ctor_set(v_reuseFailAlloc_7179_, 4, v___x_7173_);
v___x_7178_ = v_reuseFailAlloc_7179_;
goto v_reusejp_7177_;
}
v_reusejp_7177_:
{
return v___x_7178_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_7193_; 
v_l_7193_ = lean_ctor_get(v_impl_7106_, 3);
lean_inc(v_l_7193_);
if (lean_obj_tag(v_l_7193_) == 0)
{
lean_object* v_r_7194_; lean_object* v_k_7195_; lean_object* v_v_7196_; lean_object* v___x_7198_; uint8_t v_isShared_7199_; uint8_t v_isSharedCheck_7207_; 
v_r_7194_ = lean_ctor_get(v_impl_7106_, 4);
v_k_7195_ = lean_ctor_get(v_impl_7106_, 1);
v_v_7196_ = lean_ctor_get(v_impl_7106_, 2);
v_isSharedCheck_7207_ = !lean_is_exclusive(v_impl_7106_);
if (v_isSharedCheck_7207_ == 0)
{
lean_object* v_unused_7208_; lean_object* v_unused_7209_; 
v_unused_7208_ = lean_ctor_get(v_impl_7106_, 3);
lean_dec(v_unused_7208_);
v_unused_7209_ = lean_ctor_get(v_impl_7106_, 0);
lean_dec(v_unused_7209_);
v___x_7198_ = v_impl_7106_;
v_isShared_7199_ = v_isSharedCheck_7207_;
goto v_resetjp_7197_;
}
else
{
lean_inc(v_r_7194_);
lean_inc(v_v_7196_);
lean_inc(v_k_7195_);
lean_dec(v_impl_7106_);
v___x_7198_ = lean_box(0);
v_isShared_7199_ = v_isSharedCheck_7207_;
goto v_resetjp_7197_;
}
v_resetjp_7197_:
{
lean_object* v___x_7200_; lean_object* v___x_7202_; 
v___x_7200_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_7194_);
if (v_isShared_7199_ == 0)
{
lean_ctor_set(v___x_7198_, 3, v_r_7194_);
lean_ctor_set(v___x_7198_, 2, v_v_6960_);
lean_ctor_set(v___x_7198_, 1, v_k_6959_);
lean_ctor_set(v___x_7198_, 0, v___x_7107_);
v___x_7202_ = v___x_7198_;
goto v_reusejp_7201_;
}
else
{
lean_object* v_reuseFailAlloc_7206_; 
v_reuseFailAlloc_7206_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7206_, 0, v___x_7107_);
lean_ctor_set(v_reuseFailAlloc_7206_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_7206_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_7206_, 3, v_r_7194_);
lean_ctor_set(v_reuseFailAlloc_7206_, 4, v_r_7194_);
v___x_7202_ = v_reuseFailAlloc_7206_;
goto v_reusejp_7201_;
}
v_reusejp_7201_:
{
lean_object* v___x_7204_; 
if (v_isShared_6965_ == 0)
{
lean_ctor_set(v___x_6964_, 4, v___x_7202_);
lean_ctor_set(v___x_6964_, 3, v_l_7193_);
lean_ctor_set(v___x_6964_, 2, v_v_7196_);
lean_ctor_set(v___x_6964_, 1, v_k_7195_);
lean_ctor_set(v___x_6964_, 0, v___x_7200_);
v___x_7204_ = v___x_6964_;
goto v_reusejp_7203_;
}
else
{
lean_object* v_reuseFailAlloc_7205_; 
v_reuseFailAlloc_7205_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7205_, 0, v___x_7200_);
lean_ctor_set(v_reuseFailAlloc_7205_, 1, v_k_7195_);
lean_ctor_set(v_reuseFailAlloc_7205_, 2, v_v_7196_);
lean_ctor_set(v_reuseFailAlloc_7205_, 3, v_l_7193_);
lean_ctor_set(v_reuseFailAlloc_7205_, 4, v___x_7202_);
v___x_7204_ = v_reuseFailAlloc_7205_;
goto v_reusejp_7203_;
}
v_reusejp_7203_:
{
return v___x_7204_;
}
}
}
}
else
{
lean_object* v_r_7210_; 
v_r_7210_ = lean_ctor_get(v_impl_7106_, 4);
lean_inc(v_r_7210_);
if (lean_obj_tag(v_r_7210_) == 0)
{
lean_object* v_k_7211_; lean_object* v_v_7212_; lean_object* v___x_7214_; uint8_t v_isShared_7215_; uint8_t v_isSharedCheck_7235_; 
v_k_7211_ = lean_ctor_get(v_impl_7106_, 1);
v_v_7212_ = lean_ctor_get(v_impl_7106_, 2);
v_isSharedCheck_7235_ = !lean_is_exclusive(v_impl_7106_);
if (v_isSharedCheck_7235_ == 0)
{
lean_object* v_unused_7236_; lean_object* v_unused_7237_; lean_object* v_unused_7238_; 
v_unused_7236_ = lean_ctor_get(v_impl_7106_, 4);
lean_dec(v_unused_7236_);
v_unused_7237_ = lean_ctor_get(v_impl_7106_, 3);
lean_dec(v_unused_7237_);
v_unused_7238_ = lean_ctor_get(v_impl_7106_, 0);
lean_dec(v_unused_7238_);
v___x_7214_ = v_impl_7106_;
v_isShared_7215_ = v_isSharedCheck_7235_;
goto v_resetjp_7213_;
}
else
{
lean_inc(v_v_7212_);
lean_inc(v_k_7211_);
lean_dec(v_impl_7106_);
v___x_7214_ = lean_box(0);
v_isShared_7215_ = v_isSharedCheck_7235_;
goto v_resetjp_7213_;
}
v_resetjp_7213_:
{
lean_object* v_k_7216_; lean_object* v_v_7217_; lean_object* v___x_7219_; uint8_t v_isShared_7220_; uint8_t v_isSharedCheck_7231_; 
v_k_7216_ = lean_ctor_get(v_r_7210_, 1);
v_v_7217_ = lean_ctor_get(v_r_7210_, 2);
v_isSharedCheck_7231_ = !lean_is_exclusive(v_r_7210_);
if (v_isSharedCheck_7231_ == 0)
{
lean_object* v_unused_7232_; lean_object* v_unused_7233_; lean_object* v_unused_7234_; 
v_unused_7232_ = lean_ctor_get(v_r_7210_, 4);
lean_dec(v_unused_7232_);
v_unused_7233_ = lean_ctor_get(v_r_7210_, 3);
lean_dec(v_unused_7233_);
v_unused_7234_ = lean_ctor_get(v_r_7210_, 0);
lean_dec(v_unused_7234_);
v___x_7219_ = v_r_7210_;
v_isShared_7220_ = v_isSharedCheck_7231_;
goto v_resetjp_7218_;
}
else
{
lean_inc(v_v_7217_);
lean_inc(v_k_7216_);
lean_dec(v_r_7210_);
v___x_7219_ = lean_box(0);
v_isShared_7220_ = v_isSharedCheck_7231_;
goto v_resetjp_7218_;
}
v_resetjp_7218_:
{
lean_object* v___x_7221_; lean_object* v___x_7223_; 
v___x_7221_ = lean_unsigned_to_nat(3u);
if (v_isShared_7220_ == 0)
{
lean_ctor_set(v___x_7219_, 4, v_l_7193_);
lean_ctor_set(v___x_7219_, 3, v_l_7193_);
lean_ctor_set(v___x_7219_, 2, v_v_7212_);
lean_ctor_set(v___x_7219_, 1, v_k_7211_);
lean_ctor_set(v___x_7219_, 0, v___x_7107_);
v___x_7223_ = v___x_7219_;
goto v_reusejp_7222_;
}
else
{
lean_object* v_reuseFailAlloc_7230_; 
v_reuseFailAlloc_7230_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7230_, 0, v___x_7107_);
lean_ctor_set(v_reuseFailAlloc_7230_, 1, v_k_7211_);
lean_ctor_set(v_reuseFailAlloc_7230_, 2, v_v_7212_);
lean_ctor_set(v_reuseFailAlloc_7230_, 3, v_l_7193_);
lean_ctor_set(v_reuseFailAlloc_7230_, 4, v_l_7193_);
v___x_7223_ = v_reuseFailAlloc_7230_;
goto v_reusejp_7222_;
}
v_reusejp_7222_:
{
lean_object* v___x_7225_; 
if (v_isShared_7215_ == 0)
{
lean_ctor_set(v___x_7214_, 4, v_l_7193_);
lean_ctor_set(v___x_7214_, 2, v_v_6960_);
lean_ctor_set(v___x_7214_, 1, v_k_6959_);
lean_ctor_set(v___x_7214_, 0, v___x_7107_);
v___x_7225_ = v___x_7214_;
goto v_reusejp_7224_;
}
else
{
lean_object* v_reuseFailAlloc_7229_; 
v_reuseFailAlloc_7229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7229_, 0, v___x_7107_);
lean_ctor_set(v_reuseFailAlloc_7229_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_7229_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_7229_, 3, v_l_7193_);
lean_ctor_set(v_reuseFailAlloc_7229_, 4, v_l_7193_);
v___x_7225_ = v_reuseFailAlloc_7229_;
goto v_reusejp_7224_;
}
v_reusejp_7224_:
{
lean_object* v___x_7227_; 
if (v_isShared_6965_ == 0)
{
lean_ctor_set(v___x_6964_, 4, v___x_7225_);
lean_ctor_set(v___x_6964_, 3, v___x_7223_);
lean_ctor_set(v___x_6964_, 2, v_v_7217_);
lean_ctor_set(v___x_6964_, 1, v_k_7216_);
lean_ctor_set(v___x_6964_, 0, v___x_7221_);
v___x_7227_ = v___x_6964_;
goto v_reusejp_7226_;
}
else
{
lean_object* v_reuseFailAlloc_7228_; 
v_reuseFailAlloc_7228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7228_, 0, v___x_7221_);
lean_ctor_set(v_reuseFailAlloc_7228_, 1, v_k_7216_);
lean_ctor_set(v_reuseFailAlloc_7228_, 2, v_v_7217_);
lean_ctor_set(v_reuseFailAlloc_7228_, 3, v___x_7223_);
lean_ctor_set(v_reuseFailAlloc_7228_, 4, v___x_7225_);
v___x_7227_ = v_reuseFailAlloc_7228_;
goto v_reusejp_7226_;
}
v_reusejp_7226_:
{
return v___x_7227_;
}
}
}
}
}
}
else
{
lean_object* v___x_7239_; lean_object* v___x_7241_; 
v___x_7239_ = lean_unsigned_to_nat(2u);
if (v_isShared_6965_ == 0)
{
lean_ctor_set(v___x_6964_, 4, v_r_7210_);
lean_ctor_set(v___x_6964_, 3, v_impl_7106_);
lean_ctor_set(v___x_6964_, 0, v___x_7239_);
v___x_7241_ = v___x_6964_;
goto v_reusejp_7240_;
}
else
{
lean_object* v_reuseFailAlloc_7242_; 
v_reuseFailAlloc_7242_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7242_, 0, v___x_7239_);
lean_ctor_set(v_reuseFailAlloc_7242_, 1, v_k_6959_);
lean_ctor_set(v_reuseFailAlloc_7242_, 2, v_v_6960_);
lean_ctor_set(v_reuseFailAlloc_7242_, 3, v_impl_7106_);
lean_ctor_set(v_reuseFailAlloc_7242_, 4, v_r_7210_);
v___x_7241_ = v_reuseFailAlloc_7242_;
goto v_reusejp_7240_;
}
v_reusejp_7240_:
{
return v___x_7241_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_7244_; lean_object* v___x_7245_; 
v___x_7244_ = lean_unsigned_to_nat(1u);
v___x_7245_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_7245_, 0, v___x_7244_);
lean_ctor_set(v___x_7245_, 1, v_k_6955_);
lean_ctor_set(v___x_7245_, 2, v_v_6956_);
lean_ctor_set(v___x_7245_, 3, v_t_6957_);
lean_ctor_set(v___x_7245_, 4, v_t_6957_);
return v___x_7245_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(lean_object* v_lib_7246_, lean_object* v_ps_7247_, lean_object* v_v_7248_, lean_object* v_o_7249_){
_start:
{
lean_object* v_name_7250_; lean_object* v_deps_7251_; lean_object* v_o_7252_; uint8_t v___x_7253_; 
v_name_7250_ = lean_ctor_get(v_lib_7246_, 1);
lean_inc_ref(v_name_7250_);
v_deps_7251_ = lean_ctor_get(v_lib_7246_, 2);
lean_inc_ref(v_deps_7251_);
v_o_7252_ = lean_array_push(v_o_7249_, v_lib_7246_);
v___x_7253_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_name_7250_, v_v_7248_);
if (v___x_7253_ == 0)
{
uint8_t v___x_7254_; 
v___x_7254_ = l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(v_name_7250_, v_ps_7247_);
if (v___x_7254_ == 0)
{
lean_object* v_ps_7255_; lean_object* v___y_7257_; 
lean_inc_ref(v_name_7250_);
v_ps_7255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_ps_7255_, 0, v_name_7250_);
lean_ctor_set(v_ps_7255_, 1, v_ps_7247_);
if (v___x_7253_ == 0)
{
lean_object* v___x_7271_; lean_object* v___x_7272_; 
v___x_7271_ = lean_box(0);
v___x_7272_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_name_7250_, v___x_7271_, v_v_7248_);
v___y_7257_ = v___x_7272_;
goto v___jp_7256_;
}
else
{
lean_dec_ref(v_name_7250_);
v___y_7257_ = v_v_7248_;
goto v___jp_7256_;
}
v___jp_7256_:
{
lean_object* v___x_7258_; lean_object* v___x_7259_; lean_object* v___x_7260_; uint8_t v___x_7261_; 
v___x_7258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7258_, 0, v___y_7257_);
lean_ctor_set(v___x_7258_, 1, v_o_7252_);
v___x_7259_ = lean_unsigned_to_nat(0u);
v___x_7260_ = lean_array_get_size(v_deps_7251_);
v___x_7261_ = lean_nat_dec_lt(v___x_7259_, v___x_7260_);
if (v___x_7261_ == 0)
{
lean_object* v___x_7262_; 
lean_dec_ref(v_ps_7255_);
lean_dec_ref(v_deps_7251_);
v___x_7262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7262_, 0, v___x_7258_);
return v___x_7262_;
}
else
{
uint8_t v___x_7263_; 
v___x_7263_ = lean_nat_dec_le(v___x_7260_, v___x_7260_);
if (v___x_7263_ == 0)
{
if (v___x_7261_ == 0)
{
lean_object* v___x_7264_; 
lean_dec_ref(v_ps_7255_);
lean_dec_ref(v_deps_7251_);
v___x_7264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7264_, 0, v___x_7258_);
return v___x_7264_;
}
else
{
size_t v___x_7265_; size_t v___x_7266_; lean_object* v___x_7267_; 
v___x_7265_ = ((size_t)0ULL);
v___x_7266_ = lean_usize_of_nat(v___x_7260_);
v___x_7267_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7255_, v_deps_7251_, v___x_7265_, v___x_7266_, v___x_7258_);
lean_dec_ref(v_deps_7251_);
return v___x_7267_;
}
}
else
{
size_t v___x_7268_; size_t v___x_7269_; lean_object* v___x_7270_; 
v___x_7268_ = ((size_t)0ULL);
v___x_7269_ = lean_usize_of_nat(v___x_7260_);
v___x_7270_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7255_, v_deps_7251_, v___x_7268_, v___x_7269_, v___x_7258_);
lean_dec_ref(v_deps_7251_);
return v___x_7270_;
}
}
}
}
else
{
lean_object* v___x_7273_; lean_object* v___x_7274_; 
lean_dec_ref(v_o_7252_);
lean_dec_ref(v_deps_7251_);
lean_dec(v_v_7248_);
v___x_7273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_7273_, 0, v_name_7250_);
lean_ctor_set(v___x_7273_, 1, v_ps_7247_);
v___x_7274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7274_, 0, v___x_7273_);
return v___x_7274_;
}
}
else
{
lean_object* v___x_7275_; lean_object* v___x_7276_; 
lean_dec_ref(v_deps_7251_);
lean_dec_ref(v_name_7250_);
lean_dec(v_ps_7247_);
v___x_7275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7275_, 0, v_v_7248_);
lean_ctor_set(v___x_7275_, 1, v_o_7252_);
v___x_7276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7276_, 0, v___x_7275_);
return v___x_7276_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(lean_object* v_ps_7277_, lean_object* v_as_7278_, size_t v_i_7279_, size_t v_stop_7280_, lean_object* v_b_7281_){
_start:
{
uint8_t v___x_7282_; 
v___x_7282_ = lean_usize_dec_eq(v_i_7279_, v_stop_7280_);
if (v___x_7282_ == 0)
{
lean_object* v_fst_7283_; lean_object* v_snd_7284_; lean_object* v___x_7285_; lean_object* v___x_7286_; 
v_fst_7283_ = lean_ctor_get(v_b_7281_, 0);
lean_inc(v_fst_7283_);
v_snd_7284_ = lean_ctor_get(v_b_7281_, 1);
lean_inc(v_snd_7284_);
lean_dec_ref(v_b_7281_);
v___x_7285_ = lean_array_uget_borrowed(v_as_7278_, v_i_7279_);
lean_inc(v_ps_7277_);
lean_inc(v___x_7285_);
v___x_7286_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(v___x_7285_, v_ps_7277_, v_fst_7283_, v_snd_7284_);
if (lean_obj_tag(v___x_7286_) == 0)
{
lean_dec(v_ps_7277_);
return v___x_7286_;
}
else
{
lean_object* v_a_7287_; size_t v___x_7288_; size_t v___x_7289_; 
v_a_7287_ = lean_ctor_get(v___x_7286_, 0);
lean_inc(v_a_7287_);
lean_dec_ref(v___x_7286_);
v___x_7288_ = ((size_t)1ULL);
v___x_7289_ = lean_usize_add(v_i_7279_, v___x_7288_);
v_i_7279_ = v___x_7289_;
v_b_7281_ = v_a_7287_;
goto _start;
}
}
else
{
lean_object* v___x_7291_; 
lean_dec(v_ps_7277_);
v___x_7291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7291_, 0, v_b_7281_);
return v___x_7291_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2___boxed(lean_object* v_ps_7292_, lean_object* v_as_7293_, lean_object* v_i_7294_, lean_object* v_stop_7295_, lean_object* v_b_7296_){
_start:
{
size_t v_i_boxed_7297_; size_t v_stop_boxed_7298_; lean_object* v_res_7299_; 
v_i_boxed_7297_ = lean_unbox_usize(v_i_7294_);
lean_dec(v_i_7294_);
v_stop_boxed_7298_ = lean_unbox_usize(v_stop_7295_);
lean_dec(v_stop_7295_);
v_res_7299_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7292_, v_as_7293_, v_i_boxed_7297_, v_stop_boxed_7298_, v_b_7296_);
lean_dec_ref(v_as_7293_);
return v_res_7299_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0(lean_object* v_00_u03b2_7300_, lean_object* v_k_7301_, lean_object* v_t_7302_){
_start:
{
uint8_t v___x_7303_; 
v___x_7303_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_k_7301_, v_t_7302_);
return v___x_7303_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___boxed(lean_object* v_00_u03b2_7304_, lean_object* v_k_7305_, lean_object* v_t_7306_){
_start:
{
uint8_t v_res_7307_; lean_object* v_r_7308_; 
v_res_7307_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0(v_00_u03b2_7304_, v_k_7305_, v_t_7306_);
lean_dec(v_t_7306_);
lean_dec_ref(v_k_7305_);
v_r_7308_ = lean_box(v_res_7307_);
return v_r_7308_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3(lean_object* v_00_u03b2_7309_, lean_object* v_k_7310_, lean_object* v_v_7311_, lean_object* v_t_7312_, lean_object* v_hl_7313_){
_start:
{
lean_object* v___x_7314_; 
v___x_7314_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_7310_, v_v_7311_, v_t_7312_);
return v___x_7314_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0(lean_object* v_a_7316_, lean_object* v_a_7317_){
_start:
{
if (lean_obj_tag(v_a_7316_) == 0)
{
lean_object* v___x_7318_; 
v___x_7318_ = l_List_reverse___redArg(v_a_7317_);
return v___x_7318_;
}
else
{
lean_object* v_head_7319_; lean_object* v_tail_7320_; lean_object* v___x_7322_; uint8_t v_isShared_7323_; uint8_t v_isSharedCheck_7330_; 
v_head_7319_ = lean_ctor_get(v_a_7316_, 0);
v_tail_7320_ = lean_ctor_get(v_a_7316_, 1);
v_isSharedCheck_7330_ = !lean_is_exclusive(v_a_7316_);
if (v_isSharedCheck_7330_ == 0)
{
v___x_7322_ = v_a_7316_;
v_isShared_7323_ = v_isSharedCheck_7330_;
goto v_resetjp_7321_;
}
else
{
lean_inc(v_tail_7320_);
lean_inc(v_head_7319_);
lean_dec(v_a_7316_);
v___x_7322_ = lean_box(0);
v_isShared_7323_ = v_isSharedCheck_7330_;
goto v_resetjp_7321_;
}
v_resetjp_7321_:
{
lean_object* v___x_7324_; lean_object* v___x_7325_; lean_object* v___x_7327_; 
v___x_7324_ = ((lean_object*)(l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0___closed__0));
v___x_7325_ = lean_string_append(v___x_7324_, v_head_7319_);
lean_dec(v_head_7319_);
if (v_isShared_7323_ == 0)
{
lean_ctor_set(v___x_7322_, 1, v_a_7317_);
lean_ctor_set(v___x_7322_, 0, v___x_7325_);
v___x_7327_ = v___x_7322_;
goto v_reusejp_7326_;
}
else
{
lean_object* v_reuseFailAlloc_7329_; 
v_reuseFailAlloc_7329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7329_, 0, v___x_7325_);
lean_ctor_set(v_reuseFailAlloc_7329_, 1, v_a_7317_);
v___x_7327_ = v_reuseFailAlloc_7329_;
goto v_reusejp_7326_;
}
v_reusejp_7326_:
{
v_a_7316_ = v_tail_7320_;
v_a_7317_ = v___x_7327_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0(lean_object* v_cycle_7331_){
_start:
{
lean_object* v___x_7332_; lean_object* v___x_7333_; lean_object* v___x_7334_; lean_object* v___x_7335_; 
v___x_7332_ = ((lean_object*)(l_Lake_resolveArtifactOutput___closed__1));
v___x_7333_ = lean_box(0);
v___x_7334_ = l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0(v_cycle_7331_, v___x_7333_);
v___x_7335_ = l_String_intercalate(v___x_7332_, v___x_7334_);
return v___x_7335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(lean_object* v_as_7336_, size_t v_i_7337_, size_t v_stop_7338_, lean_object* v_b_7339_){
_start:
{
uint8_t v___x_7340_; 
v___x_7340_ = lean_usize_dec_eq(v_i_7337_, v_stop_7338_);
if (v___x_7340_ == 0)
{
lean_object* v_fst_7341_; lean_object* v_snd_7342_; lean_object* v___x_7343_; lean_object* v___x_7344_; lean_object* v___x_7345_; 
v_fst_7341_ = lean_ctor_get(v_b_7339_, 0);
lean_inc(v_fst_7341_);
v_snd_7342_ = lean_ctor_get(v_b_7339_, 1);
lean_inc(v_snd_7342_);
lean_dec_ref(v_b_7339_);
v___x_7343_ = lean_array_uget_borrowed(v_as_7336_, v_i_7337_);
v___x_7344_ = lean_box(0);
lean_inc(v___x_7343_);
v___x_7345_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(v___x_7343_, v___x_7344_, v_fst_7341_, v_snd_7342_);
if (lean_obj_tag(v___x_7345_) == 0)
{
return v___x_7345_;
}
else
{
lean_object* v_a_7346_; size_t v___x_7347_; size_t v___x_7348_; 
v_a_7346_ = lean_ctor_get(v___x_7345_, 0);
lean_inc(v_a_7346_);
lean_dec_ref(v___x_7345_);
v___x_7347_ = ((size_t)1ULL);
v___x_7348_ = lean_usize_add(v_i_7337_, v___x_7347_);
v_i_7337_ = v___x_7348_;
v_b_7339_ = v_a_7346_;
goto _start;
}
}
else
{
lean_object* v___x_7350_; 
v___x_7350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7350_, 0, v_b_7339_);
return v___x_7350_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1___boxed(lean_object* v_as_7351_, lean_object* v_i_7352_, lean_object* v_stop_7353_, lean_object* v_b_7354_){
_start:
{
size_t v_i_boxed_7355_; size_t v_stop_boxed_7356_; lean_object* v_res_7357_; 
v_i_boxed_7355_ = lean_unbox_usize(v_i_7352_);
lean_dec(v_i_7352_);
v_stop_boxed_7356_ = lean_unbox_usize(v_stop_7353_);
lean_dec(v_stop_7353_);
v_res_7357_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(v_as_7351_, v_i_boxed_7355_, v_stop_boxed_7356_, v_b_7354_);
lean_dec_ref(v_as_7351_);
return v_res_7357_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(lean_object* v_libs_7364_, lean_object* v_a_7365_){
_start:
{
lean_object* v_snd_7368_; lean_object* v___y_7371_; lean_object* v___x_7395_; lean_object* v___x_7396_; lean_object* v___x_7397_; uint8_t v___x_7398_; 
v___x_7395_ = lean_unsigned_to_nat(0u);
v___x_7396_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1));
v___x_7397_ = lean_array_get_size(v_libs_7364_);
v___x_7398_ = lean_nat_dec_lt(v___x_7395_, v___x_7397_);
if (v___x_7398_ == 0)
{
v_snd_7368_ = v___x_7396_;
goto v___jp_7367_;
}
else
{
lean_object* v___x_7399_; uint8_t v___x_7400_; 
v___x_7399_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__2));
v___x_7400_ = lean_nat_dec_le(v___x_7397_, v___x_7397_);
if (v___x_7400_ == 0)
{
if (v___x_7398_ == 0)
{
v_snd_7368_ = v___x_7396_;
goto v___jp_7367_;
}
else
{
size_t v___x_7401_; size_t v___x_7402_; lean_object* v___x_7403_; 
v___x_7401_ = ((size_t)0ULL);
v___x_7402_ = lean_usize_of_nat(v___x_7397_);
v___x_7403_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(v_libs_7364_, v___x_7401_, v___x_7402_, v___x_7399_);
v___y_7371_ = v___x_7403_;
goto v___jp_7370_;
}
}
else
{
size_t v___x_7404_; size_t v___x_7405_; lean_object* v___x_7406_; 
v___x_7404_ = ((size_t)0ULL);
v___x_7405_ = lean_usize_of_nat(v___x_7397_);
v___x_7406_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(v_libs_7364_, v___x_7404_, v___x_7405_, v___x_7399_);
v___y_7371_ = v___x_7406_;
goto v___jp_7370_;
}
}
v___jp_7367_:
{
lean_object* v___x_7369_; 
v___x_7369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7369_, 0, v_snd_7368_);
lean_ctor_set(v___x_7369_, 1, v_a_7365_);
return v___x_7369_;
}
v___jp_7370_:
{
if (lean_obj_tag(v___y_7371_) == 0)
{
lean_object* v_a_7372_; lean_object* v_log_7373_; uint8_t v_action_7374_; uint8_t v_wantsRebuild_7375_; lean_object* v_trace_7376_; lean_object* v_buildTime_7377_; lean_object* v___x_7379_; uint8_t v_isShared_7380_; uint8_t v_isSharedCheck_7392_; 
v_a_7372_ = lean_ctor_get(v___y_7371_, 0);
lean_inc(v_a_7372_);
lean_dec_ref(v___y_7371_);
v_log_7373_ = lean_ctor_get(v_a_7365_, 0);
v_action_7374_ = lean_ctor_get_uint8(v_a_7365_, sizeof(void*)*3);
v_wantsRebuild_7375_ = lean_ctor_get_uint8(v_a_7365_, sizeof(void*)*3 + 1);
v_trace_7376_ = lean_ctor_get(v_a_7365_, 1);
v_buildTime_7377_ = lean_ctor_get(v_a_7365_, 2);
v_isSharedCheck_7392_ = !lean_is_exclusive(v_a_7365_);
if (v_isSharedCheck_7392_ == 0)
{
v___x_7379_ = v_a_7365_;
v_isShared_7380_ = v_isSharedCheck_7392_;
goto v_resetjp_7378_;
}
else
{
lean_inc(v_buildTime_7377_);
lean_inc(v_trace_7376_);
lean_inc(v_log_7373_);
lean_dec(v_a_7365_);
v___x_7379_ = lean_box(0);
v_isShared_7380_ = v_isSharedCheck_7392_;
goto v_resetjp_7378_;
}
v_resetjp_7378_:
{
lean_object* v___x_7381_; lean_object* v___x_7382_; lean_object* v___x_7383_; uint8_t v___x_7384_; lean_object* v___x_7385_; lean_object* v___x_7386_; lean_object* v___x_7387_; lean_object* v___x_7389_; 
v___x_7381_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__0));
v___x_7382_ = l_Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0(v_a_7372_);
v___x_7383_ = lean_string_append(v___x_7381_, v___x_7382_);
lean_dec_ref(v___x_7382_);
v___x_7384_ = 3;
v___x_7385_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_7385_, 0, v___x_7383_);
lean_ctor_set_uint8(v___x_7385_, sizeof(void*)*1, v___x_7384_);
v___x_7386_ = lean_array_get_size(v_log_7373_);
v___x_7387_ = lean_array_push(v_log_7373_, v___x_7385_);
if (v_isShared_7380_ == 0)
{
lean_ctor_set(v___x_7379_, 0, v___x_7387_);
v___x_7389_ = v___x_7379_;
goto v_reusejp_7388_;
}
else
{
lean_object* v_reuseFailAlloc_7391_; 
v_reuseFailAlloc_7391_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7391_, 0, v___x_7387_);
lean_ctor_set(v_reuseFailAlloc_7391_, 1, v_trace_7376_);
lean_ctor_set(v_reuseFailAlloc_7391_, 2, v_buildTime_7377_);
lean_ctor_set_uint8(v_reuseFailAlloc_7391_, sizeof(void*)*3, v_action_7374_);
lean_ctor_set_uint8(v_reuseFailAlloc_7391_, sizeof(void*)*3 + 1, v_wantsRebuild_7375_);
v___x_7389_ = v_reuseFailAlloc_7391_;
goto v_reusejp_7388_;
}
v_reusejp_7388_:
{
lean_object* v___x_7390_; 
v___x_7390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_7390_, 0, v___x_7386_);
lean_ctor_set(v___x_7390_, 1, v___x_7389_);
return v___x_7390_;
}
}
}
else
{
lean_object* v_a_7393_; lean_object* v_snd_7394_; 
v_a_7393_ = lean_ctor_get(v___y_7371_, 0);
lean_inc(v_a_7393_);
lean_dec_ref(v___y_7371_);
v_snd_7394_ = lean_ctor_get(v_a_7393_, 1);
lean_inc(v_snd_7394_);
lean_dec(v_a_7393_);
v_snd_7368_ = v_snd_7394_;
goto v___jp_7367_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___boxed(lean_object* v_libs_7407_, lean_object* v_a_7408_, lean_object* v_a_7409_){
_start:
{
lean_object* v_res_7410_; 
v_res_7410_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7407_, v_a_7408_);
lean_dec_ref(v_libs_7407_);
return v_res_7410_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder(lean_object* v_libs_7411_, lean_object* v_a_7412_, lean_object* v_a_7413_, lean_object* v_a_7414_, lean_object* v_a_7415_, lean_object* v_a_7416_, lean_object* v_a_7417_){
_start:
{
lean_object* v___x_7419_; 
v___x_7419_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7411_, v_a_7417_);
return v___x_7419_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___boxed(lean_object* v_libs_7420_, lean_object* v_a_7421_, lean_object* v_a_7422_, lean_object* v_a_7423_, lean_object* v_a_7424_, lean_object* v_a_7425_, lean_object* v_a_7426_, lean_object* v_a_7427_){
_start:
{
lean_object* v_res_7428_; 
v_res_7428_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder(v_libs_7420_, v_a_7421_, v_a_7422_, v_a_7423_, v_a_7424_, v_a_7425_, v_a_7426_);
lean_dec_ref(v_a_7425_);
lean_dec(v_a_7424_);
lean_dec(v_a_7423_);
lean_dec(v_a_7422_);
lean_dec_ref(v_a_7421_);
lean_dec_ref(v_libs_7420_);
return v_res_7428_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0(lean_object* v_objs_7429_, lean_object* v_weakArgs_7430_, lean_object* v_traceArgs_7431_, lean_object* v_libFile_7432_, lean_object* v_linker_7433_, lean_object* v_libs_7434_, lean_object* v___y_7435_, lean_object* v___y_7436_, lean_object* v___y_7437_, lean_object* v___y_7438_, lean_object* v___y_7439_, lean_object* v___y_7440_){
_start:
{
lean_object* v_log_7442_; uint8_t v_action_7443_; uint8_t v_wantsRebuild_7444_; lean_object* v_trace_7445_; lean_object* v_buildTime_7446_; lean_object* v___x_7448_; uint8_t v_isShared_7449_; uint8_t v_isSharedCheck_7478_; 
v_log_7442_ = lean_ctor_get(v___y_7440_, 0);
v_action_7443_ = lean_ctor_get_uint8(v___y_7440_, sizeof(void*)*3);
v_wantsRebuild_7444_ = lean_ctor_get_uint8(v___y_7440_, sizeof(void*)*3 + 1);
v_trace_7445_ = lean_ctor_get(v___y_7440_, 1);
v_buildTime_7446_ = lean_ctor_get(v___y_7440_, 2);
v_isSharedCheck_7478_ = !lean_is_exclusive(v___y_7440_);
if (v_isSharedCheck_7478_ == 0)
{
v___x_7448_ = v___y_7440_;
v_isShared_7449_ = v_isSharedCheck_7478_;
goto v_resetjp_7447_;
}
else
{
lean_inc(v_buildTime_7446_);
lean_inc(v_trace_7445_);
lean_inc(v_log_7442_);
lean_dec(v___y_7440_);
v___x_7448_ = lean_box(0);
v_isShared_7449_ = v_isSharedCheck_7478_;
goto v_resetjp_7447_;
}
v_resetjp_7447_:
{
lean_object* v___x_7450_; lean_object* v___x_7451_; lean_object* v___x_7452_; lean_object* v___x_7453_; 
v___x_7450_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7429_, v_libs_7434_);
v___x_7451_ = l_Array_append___redArg(v___x_7450_, v_weakArgs_7430_);
v___x_7452_ = l_Array_append___redArg(v___x_7451_, v_traceArgs_7431_);
v___x_7453_ = l_Lake_compileSharedLib(v_libFile_7432_, v___x_7452_, v_linker_7433_, v_log_7442_);
lean_dec_ref(v___x_7452_);
if (lean_obj_tag(v___x_7453_) == 0)
{
lean_object* v_a_7454_; lean_object* v_a_7455_; lean_object* v___x_7457_; uint8_t v_isShared_7458_; uint8_t v_isSharedCheck_7465_; 
v_a_7454_ = lean_ctor_get(v___x_7453_, 0);
v_a_7455_ = lean_ctor_get(v___x_7453_, 1);
v_isSharedCheck_7465_ = !lean_is_exclusive(v___x_7453_);
if (v_isSharedCheck_7465_ == 0)
{
v___x_7457_ = v___x_7453_;
v_isShared_7458_ = v_isSharedCheck_7465_;
goto v_resetjp_7456_;
}
else
{
lean_inc(v_a_7455_);
lean_inc(v_a_7454_);
lean_dec(v___x_7453_);
v___x_7457_ = lean_box(0);
v_isShared_7458_ = v_isSharedCheck_7465_;
goto v_resetjp_7456_;
}
v_resetjp_7456_:
{
lean_object* v___x_7460_; 
if (v_isShared_7449_ == 0)
{
lean_ctor_set(v___x_7448_, 0, v_a_7455_);
v___x_7460_ = v___x_7448_;
goto v_reusejp_7459_;
}
else
{
lean_object* v_reuseFailAlloc_7464_; 
v_reuseFailAlloc_7464_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7464_, 0, v_a_7455_);
lean_ctor_set(v_reuseFailAlloc_7464_, 1, v_trace_7445_);
lean_ctor_set(v_reuseFailAlloc_7464_, 2, v_buildTime_7446_);
lean_ctor_set_uint8(v_reuseFailAlloc_7464_, sizeof(void*)*3, v_action_7443_);
lean_ctor_set_uint8(v_reuseFailAlloc_7464_, sizeof(void*)*3 + 1, v_wantsRebuild_7444_);
v___x_7460_ = v_reuseFailAlloc_7464_;
goto v_reusejp_7459_;
}
v_reusejp_7459_:
{
lean_object* v___x_7462_; 
if (v_isShared_7458_ == 0)
{
lean_ctor_set(v___x_7457_, 1, v___x_7460_);
v___x_7462_ = v___x_7457_;
goto v_reusejp_7461_;
}
else
{
lean_object* v_reuseFailAlloc_7463_; 
v_reuseFailAlloc_7463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7463_, 0, v_a_7454_);
lean_ctor_set(v_reuseFailAlloc_7463_, 1, v___x_7460_);
v___x_7462_ = v_reuseFailAlloc_7463_;
goto v_reusejp_7461_;
}
v_reusejp_7461_:
{
return v___x_7462_;
}
}
}
}
else
{
lean_object* v_a_7466_; lean_object* v_a_7467_; lean_object* v___x_7469_; uint8_t v_isShared_7470_; uint8_t v_isSharedCheck_7477_; 
v_a_7466_ = lean_ctor_get(v___x_7453_, 0);
v_a_7467_ = lean_ctor_get(v___x_7453_, 1);
v_isSharedCheck_7477_ = !lean_is_exclusive(v___x_7453_);
if (v_isSharedCheck_7477_ == 0)
{
v___x_7469_ = v___x_7453_;
v_isShared_7470_ = v_isSharedCheck_7477_;
goto v_resetjp_7468_;
}
else
{
lean_inc(v_a_7467_);
lean_inc(v_a_7466_);
lean_dec(v___x_7453_);
v___x_7469_ = lean_box(0);
v_isShared_7470_ = v_isSharedCheck_7477_;
goto v_resetjp_7468_;
}
v_resetjp_7468_:
{
lean_object* v___x_7472_; 
if (v_isShared_7449_ == 0)
{
lean_ctor_set(v___x_7448_, 0, v_a_7467_);
v___x_7472_ = v___x_7448_;
goto v_reusejp_7471_;
}
else
{
lean_object* v_reuseFailAlloc_7476_; 
v_reuseFailAlloc_7476_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7476_, 0, v_a_7467_);
lean_ctor_set(v_reuseFailAlloc_7476_, 1, v_trace_7445_);
lean_ctor_set(v_reuseFailAlloc_7476_, 2, v_buildTime_7446_);
lean_ctor_set_uint8(v_reuseFailAlloc_7476_, sizeof(void*)*3, v_action_7443_);
lean_ctor_set_uint8(v_reuseFailAlloc_7476_, sizeof(void*)*3 + 1, v_wantsRebuild_7444_);
v___x_7472_ = v_reuseFailAlloc_7476_;
goto v_reusejp_7471_;
}
v_reusejp_7471_:
{
lean_object* v___x_7474_; 
if (v_isShared_7470_ == 0)
{
lean_ctor_set(v___x_7469_, 1, v___x_7472_);
v___x_7474_ = v___x_7469_;
goto v_reusejp_7473_;
}
else
{
lean_object* v_reuseFailAlloc_7475_; 
v_reuseFailAlloc_7475_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7475_, 0, v_a_7466_);
lean_ctor_set(v_reuseFailAlloc_7475_, 1, v___x_7472_);
v___x_7474_ = v_reuseFailAlloc_7475_;
goto v_reusejp_7473_;
}
v_reusejp_7473_:
{
return v___x_7474_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0___boxed(lean_object* v_objs_7479_, lean_object* v_weakArgs_7480_, lean_object* v_traceArgs_7481_, lean_object* v_libFile_7482_, lean_object* v_linker_7483_, lean_object* v_libs_7484_, lean_object* v___y_7485_, lean_object* v___y_7486_, lean_object* v___y_7487_, lean_object* v___y_7488_, lean_object* v___y_7489_, lean_object* v___y_7490_, lean_object* v___y_7491_){
_start:
{
lean_object* v_res_7492_; 
v_res_7492_ = l_Lake_buildSharedLib___lam__0(v_objs_7479_, v_weakArgs_7480_, v_traceArgs_7481_, v_libFile_7482_, v_linker_7483_, v_libs_7484_, v___y_7485_, v___y_7486_, v___y_7487_, v___y_7488_, v___y_7489_, v___y_7490_);
lean_dec_ref(v___y_7489_);
lean_dec(v___y_7488_);
lean_dec(v___y_7487_);
lean_dec(v___y_7486_);
lean_dec_ref(v___y_7485_);
lean_dec_ref(v_libs_7484_);
lean_dec_ref(v_traceArgs_7481_);
lean_dec_ref(v_weakArgs_7480_);
lean_dec_ref(v_objs_7479_);
return v_res_7492_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1(uint8_t v_linkDeps_7493_, lean_object* v___x_7494_, lean_object* v___f_7495_, lean_object* v_libs_7496_, lean_object* v___y_7497_, lean_object* v___y_7498_, lean_object* v___y_7499_, lean_object* v___y_7500_, lean_object* v___y_7501_, lean_object* v___y_7502_){
_start:
{
if (v_linkDeps_7493_ == 0)
{
lean_object* v___x_7504_; lean_object* v___x_7505_; 
v___x_7504_ = lean_mk_empty_array_with_capacity(v___x_7494_);
v___x_7505_ = lean_apply_8(v___f_7495_, v___x_7504_, v___y_7497_, v___y_7498_, v___y_7499_, v___y_7500_, v___y_7501_, v___y_7502_, lean_box(0));
return v___x_7505_;
}
else
{
lean_object* v___x_7506_; 
v___x_7506_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7496_, v___y_7502_);
if (lean_obj_tag(v___x_7506_) == 0)
{
lean_object* v_a_7507_; lean_object* v_a_7508_; lean_object* v___x_7509_; 
v_a_7507_ = lean_ctor_get(v___x_7506_, 0);
lean_inc(v_a_7507_);
v_a_7508_ = lean_ctor_get(v___x_7506_, 1);
lean_inc(v_a_7508_);
lean_dec_ref(v___x_7506_);
v___x_7509_ = lean_apply_8(v___f_7495_, v_a_7507_, v___y_7497_, v___y_7498_, v___y_7499_, v___y_7500_, v___y_7501_, v_a_7508_, lean_box(0));
return v___x_7509_;
}
else
{
lean_object* v_a_7510_; lean_object* v_a_7511_; lean_object* v___x_7513_; uint8_t v_isShared_7514_; uint8_t v_isSharedCheck_7518_; 
lean_dec_ref(v___y_7501_);
lean_dec(v___y_7500_);
lean_dec(v___y_7499_);
lean_dec(v___y_7498_);
lean_dec_ref(v___y_7497_);
lean_dec_ref(v___f_7495_);
v_a_7510_ = lean_ctor_get(v___x_7506_, 0);
v_a_7511_ = lean_ctor_get(v___x_7506_, 1);
v_isSharedCheck_7518_ = !lean_is_exclusive(v___x_7506_);
if (v_isSharedCheck_7518_ == 0)
{
v___x_7513_ = v___x_7506_;
v_isShared_7514_ = v_isSharedCheck_7518_;
goto v_resetjp_7512_;
}
else
{
lean_inc(v_a_7511_);
lean_inc(v_a_7510_);
lean_dec(v___x_7506_);
v___x_7513_ = lean_box(0);
v_isShared_7514_ = v_isSharedCheck_7518_;
goto v_resetjp_7512_;
}
v_resetjp_7512_:
{
lean_object* v___x_7516_; 
if (v_isShared_7514_ == 0)
{
v___x_7516_ = v___x_7513_;
goto v_reusejp_7515_;
}
else
{
lean_object* v_reuseFailAlloc_7517_; 
v_reuseFailAlloc_7517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7517_, 0, v_a_7510_);
lean_ctor_set(v_reuseFailAlloc_7517_, 1, v_a_7511_);
v___x_7516_ = v_reuseFailAlloc_7517_;
goto v_reusejp_7515_;
}
v_reusejp_7515_:
{
return v___x_7516_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1___boxed(lean_object* v_linkDeps_7519_, lean_object* v___x_7520_, lean_object* v___f_7521_, lean_object* v_libs_7522_, lean_object* v___y_7523_, lean_object* v___y_7524_, lean_object* v___y_7525_, lean_object* v___y_7526_, lean_object* v___y_7527_, lean_object* v___y_7528_, lean_object* v___y_7529_){
_start:
{
uint8_t v_linkDeps_boxed_7530_; lean_object* v_res_7531_; 
v_linkDeps_boxed_7530_ = lean_unbox(v_linkDeps_7519_);
v_res_7531_ = l_Lake_buildSharedLib___lam__1(v_linkDeps_boxed_7530_, v___x_7520_, v___f_7521_, v_libs_7522_, v___y_7523_, v___y_7524_, v___y_7525_, v___y_7526_, v___y_7527_, v___y_7528_);
lean_dec_ref(v_libs_7522_);
lean_dec(v___x_7520_);
return v_res_7531_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__2(lean_object* v_traceArgs_7532_, lean_object* v_extraDepTrace_7533_, uint8_t v_linkDeps_7534_, lean_object* v___f_7535_, lean_object* v_libFile_7536_, lean_object* v_libName_7537_, uint8_t v_plugin_7538_, lean_object* v_libs_7539_, lean_object* v___y_7540_, lean_object* v___y_7541_, lean_object* v___y_7542_, lean_object* v___y_7543_, lean_object* v___y_7544_, lean_object* v___y_7545_){
_start:
{
uint64_t v___y_7548_; uint64_t v___x_7625_; lean_object* v___x_7626_; lean_object* v___x_7627_; uint8_t v___x_7628_; 
v___x_7625_ = l_Lake_Hash_nil;
v___x_7626_ = lean_unsigned_to_nat(0u);
v___x_7627_ = lean_array_get_size(v_traceArgs_7532_);
v___x_7628_ = lean_nat_dec_lt(v___x_7626_, v___x_7627_);
if (v___x_7628_ == 0)
{
v___y_7548_ = v___x_7625_;
goto v___jp_7547_;
}
else
{
uint8_t v___x_7629_; 
v___x_7629_ = lean_nat_dec_le(v___x_7627_, v___x_7627_);
if (v___x_7629_ == 0)
{
if (v___x_7628_ == 0)
{
v___y_7548_ = v___x_7625_;
goto v___jp_7547_;
}
else
{
size_t v___x_7630_; size_t v___x_7631_; uint64_t v___x_7632_; 
v___x_7630_ = ((size_t)0ULL);
v___x_7631_ = lean_usize_of_nat(v___x_7627_);
v___x_7632_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_7532_, v___x_7630_, v___x_7631_, v___x_7625_);
v___y_7548_ = v___x_7632_;
goto v___jp_7547_;
}
}
else
{
size_t v___x_7633_; size_t v___x_7634_; uint64_t v___x_7635_; 
v___x_7633_ = ((size_t)0ULL);
v___x_7634_ = lean_usize_of_nat(v___x_7627_);
v___x_7635_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_7532_, v___x_7633_, v___x_7634_, v___x_7625_);
v___y_7548_ = v___x_7635_;
goto v___jp_7547_;
}
}
v___jp_7547_:
{
lean_object* v_log_7549_; uint8_t v_action_7550_; uint8_t v_wantsRebuild_7551_; lean_object* v_trace_7552_; lean_object* v_buildTime_7553_; lean_object* v___x_7555_; uint8_t v_isShared_7556_; uint8_t v_isSharedCheck_7624_; 
v_log_7549_ = lean_ctor_get(v___y_7545_, 0);
v_action_7550_ = lean_ctor_get_uint8(v___y_7545_, sizeof(void*)*3);
v_wantsRebuild_7551_ = lean_ctor_get_uint8(v___y_7545_, sizeof(void*)*3 + 1);
v_trace_7552_ = lean_ctor_get(v___y_7545_, 1);
v_buildTime_7553_ = lean_ctor_get(v___y_7545_, 2);
v_isSharedCheck_7624_ = !lean_is_exclusive(v___y_7545_);
if (v_isSharedCheck_7624_ == 0)
{
v___x_7555_ = v___y_7545_;
v_isShared_7556_ = v_isSharedCheck_7624_;
goto v_resetjp_7554_;
}
else
{
lean_inc(v_buildTime_7553_);
lean_inc(v_trace_7552_);
lean_inc(v_log_7549_);
lean_dec(v___y_7545_);
v___x_7555_ = lean_box(0);
v_isShared_7556_ = v_isSharedCheck_7624_;
goto v_resetjp_7554_;
}
v_resetjp_7554_:
{
lean_object* v___x_7557_; lean_object* v___x_7558_; lean_object* v___x_7559_; lean_object* v___x_7560_; lean_object* v___x_7561_; lean_object* v___x_7562_; lean_object* v___x_7563_; lean_object* v___x_7564_; lean_object* v___x_7565_; lean_object* v___x_7566_; lean_object* v___x_7567_; lean_object* v___x_7568_; lean_object* v___x_7569_; lean_object* v___x_7571_; 
v___x_7557_ = lean_unsigned_to_nat(0u);
v___x_7558_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_7559_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_7560_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
v___x_7561_ = lean_array_to_list(v_traceArgs_7532_);
v___x_7562_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_7561_);
lean_dec(v___x_7561_);
v___x_7563_ = lean_string_append(v___x_7560_, v___x_7562_);
lean_dec_ref(v___x_7562_);
v___x_7564_ = lean_string_append(v___x_7559_, v___x_7563_);
lean_dec_ref(v___x_7563_);
v___x_7565_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_7566_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_7566_, 0, v___x_7564_);
lean_ctor_set(v___x_7566_, 1, v___x_7558_);
lean_ctor_set(v___x_7566_, 2, v___x_7565_);
lean_ctor_set_uint64(v___x_7566_, sizeof(void*)*3, v___y_7548_);
v___x_7567_ = l_Lake_BuildTrace_mix(v_trace_7552_, v___x_7566_);
v___x_7568_ = l_Lake_platformTrace;
v___x_7569_ = l_Lake_BuildTrace_mix(v___x_7567_, v___x_7568_);
if (v_isShared_7556_ == 0)
{
lean_ctor_set(v___x_7555_, 1, v___x_7569_);
v___x_7571_ = v___x_7555_;
goto v_reusejp_7570_;
}
else
{
lean_object* v_reuseFailAlloc_7623_; 
v_reuseFailAlloc_7623_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7623_, 0, v_log_7549_);
lean_ctor_set(v_reuseFailAlloc_7623_, 1, v___x_7569_);
lean_ctor_set(v_reuseFailAlloc_7623_, 2, v_buildTime_7553_);
lean_ctor_set_uint8(v_reuseFailAlloc_7623_, sizeof(void*)*3, v_action_7550_);
lean_ctor_set_uint8(v_reuseFailAlloc_7623_, sizeof(void*)*3 + 1, v_wantsRebuild_7551_);
v___x_7571_ = v_reuseFailAlloc_7623_;
goto v_reusejp_7570_;
}
v_reusejp_7570_:
{
lean_object* v___x_7572_; 
lean_inc_ref(v___y_7544_);
lean_inc(v___y_7543_);
lean_inc(v___y_7542_);
lean_inc(v___y_7541_);
lean_inc_ref(v___y_7540_);
v___x_7572_ = lean_apply_7(v_extraDepTrace_7533_, v___y_7540_, v___y_7541_, v___y_7542_, v___y_7543_, v___y_7544_, v___x_7571_, lean_box(0));
if (lean_obj_tag(v___x_7572_) == 0)
{
lean_object* v_a_7573_; lean_object* v_a_7574_; lean_object* v_log_7575_; uint8_t v_action_7576_; uint8_t v_wantsRebuild_7577_; lean_object* v_trace_7578_; lean_object* v_buildTime_7579_; lean_object* v___x_7581_; uint8_t v_isShared_7582_; uint8_t v_isSharedCheck_7613_; 
v_a_7573_ = lean_ctor_get(v___x_7572_, 1);
lean_inc(v_a_7573_);
v_a_7574_ = lean_ctor_get(v___x_7572_, 0);
lean_inc(v_a_7574_);
lean_dec_ref(v___x_7572_);
v_log_7575_ = lean_ctor_get(v_a_7573_, 0);
v_action_7576_ = lean_ctor_get_uint8(v_a_7573_, sizeof(void*)*3);
v_wantsRebuild_7577_ = lean_ctor_get_uint8(v_a_7573_, sizeof(void*)*3 + 1);
v_trace_7578_ = lean_ctor_get(v_a_7573_, 1);
v_buildTime_7579_ = lean_ctor_get(v_a_7573_, 2);
v_isSharedCheck_7613_ = !lean_is_exclusive(v_a_7573_);
if (v_isSharedCheck_7613_ == 0)
{
v___x_7581_ = v_a_7573_;
v_isShared_7582_ = v_isSharedCheck_7613_;
goto v_resetjp_7580_;
}
else
{
lean_inc(v_buildTime_7579_);
lean_inc(v_trace_7578_);
lean_inc(v_log_7575_);
lean_dec(v_a_7573_);
v___x_7581_ = lean_box(0);
v_isShared_7582_ = v_isSharedCheck_7613_;
goto v_resetjp_7580_;
}
v_resetjp_7580_:
{
lean_object* v___x_7583_; lean_object* v___y_7584_; lean_object* v___x_7585_; lean_object* v___x_7587_; 
v___x_7583_ = lean_box(v_linkDeps_7534_);
lean_inc_ref(v_libs_7539_);
v___y_7584_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__1___boxed), 11, 4);
lean_closure_set(v___y_7584_, 0, v___x_7583_);
lean_closure_set(v___y_7584_, 1, v___x_7557_);
lean_closure_set(v___y_7584_, 2, v___f_7535_);
lean_closure_set(v___y_7584_, 3, v_libs_7539_);
v___x_7585_ = l_Lake_BuildTrace_mix(v_trace_7578_, v_a_7574_);
if (v_isShared_7582_ == 0)
{
lean_ctor_set(v___x_7581_, 1, v___x_7585_);
v___x_7587_ = v___x_7581_;
goto v_reusejp_7586_;
}
else
{
lean_object* v_reuseFailAlloc_7612_; 
v_reuseFailAlloc_7612_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7612_, 0, v_log_7575_);
lean_ctor_set(v_reuseFailAlloc_7612_, 1, v___x_7585_);
lean_ctor_set(v_reuseFailAlloc_7612_, 2, v_buildTime_7579_);
lean_ctor_set_uint8(v_reuseFailAlloc_7612_, sizeof(void*)*3, v_action_7576_);
lean_ctor_set_uint8(v_reuseFailAlloc_7612_, sizeof(void*)*3 + 1, v_wantsRebuild_7577_);
v___x_7587_ = v_reuseFailAlloc_7612_;
goto v_reusejp_7586_;
}
v_reusejp_7586_:
{
uint8_t v___x_7588_; uint8_t v___x_7589_; lean_object* v___x_7590_; lean_object* v___x_7591_; 
v___x_7588_ = 1;
v___x_7589_ = 0;
v___x_7590_ = l_Lake_sharedLibExt;
v___x_7591_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_7536_, v___y_7584_, v___x_7589_, v___x_7590_, v___x_7588_, v___x_7589_, v___x_7589_, v___y_7540_, v___y_7541_, v___y_7542_, v___y_7543_, v___y_7544_, v___x_7587_);
if (lean_obj_tag(v___x_7591_) == 0)
{
lean_object* v_a_7592_; lean_object* v_a_7593_; lean_object* v___x_7595_; uint8_t v_isShared_7596_; uint8_t v_isSharedCheck_7602_; 
v_a_7592_ = lean_ctor_get(v___x_7591_, 0);
v_a_7593_ = lean_ctor_get(v___x_7591_, 1);
v_isSharedCheck_7602_ = !lean_is_exclusive(v___x_7591_);
if (v_isSharedCheck_7602_ == 0)
{
v___x_7595_ = v___x_7591_;
v_isShared_7596_ = v_isSharedCheck_7602_;
goto v_resetjp_7594_;
}
else
{
lean_inc(v_a_7593_);
lean_inc(v_a_7592_);
lean_dec(v___x_7591_);
v___x_7595_ = lean_box(0);
v_isShared_7596_ = v_isSharedCheck_7602_;
goto v_resetjp_7594_;
}
v_resetjp_7594_:
{
lean_object* v_path_7597_; lean_object* v___x_7598_; lean_object* v___x_7600_; 
v_path_7597_ = lean_ctor_get(v_a_7592_, 1);
lean_inc_ref(v_path_7597_);
lean_dec(v_a_7592_);
v___x_7598_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_7598_, 0, v_path_7597_);
lean_ctor_set(v___x_7598_, 1, v_libName_7537_);
lean_ctor_set(v___x_7598_, 2, v_libs_7539_);
lean_ctor_set_uint8(v___x_7598_, sizeof(void*)*3, v_plugin_7538_);
if (v_isShared_7596_ == 0)
{
lean_ctor_set(v___x_7595_, 0, v___x_7598_);
v___x_7600_ = v___x_7595_;
goto v_reusejp_7599_;
}
else
{
lean_object* v_reuseFailAlloc_7601_; 
v_reuseFailAlloc_7601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7601_, 0, v___x_7598_);
lean_ctor_set(v_reuseFailAlloc_7601_, 1, v_a_7593_);
v___x_7600_ = v_reuseFailAlloc_7601_;
goto v_reusejp_7599_;
}
v_reusejp_7599_:
{
return v___x_7600_;
}
}
}
else
{
lean_object* v_a_7603_; lean_object* v_a_7604_; lean_object* v___x_7606_; uint8_t v_isShared_7607_; uint8_t v_isSharedCheck_7611_; 
lean_dec_ref(v_libs_7539_);
lean_dec_ref(v_libName_7537_);
v_a_7603_ = lean_ctor_get(v___x_7591_, 0);
v_a_7604_ = lean_ctor_get(v___x_7591_, 1);
v_isSharedCheck_7611_ = !lean_is_exclusive(v___x_7591_);
if (v_isSharedCheck_7611_ == 0)
{
v___x_7606_ = v___x_7591_;
v_isShared_7607_ = v_isSharedCheck_7611_;
goto v_resetjp_7605_;
}
else
{
lean_inc(v_a_7604_);
lean_inc(v_a_7603_);
lean_dec(v___x_7591_);
v___x_7606_ = lean_box(0);
v_isShared_7607_ = v_isSharedCheck_7611_;
goto v_resetjp_7605_;
}
v_resetjp_7605_:
{
lean_object* v___x_7609_; 
if (v_isShared_7607_ == 0)
{
v___x_7609_ = v___x_7606_;
goto v_reusejp_7608_;
}
else
{
lean_object* v_reuseFailAlloc_7610_; 
v_reuseFailAlloc_7610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7610_, 0, v_a_7603_);
lean_ctor_set(v_reuseFailAlloc_7610_, 1, v_a_7604_);
v___x_7609_ = v_reuseFailAlloc_7610_;
goto v_reusejp_7608_;
}
v_reusejp_7608_:
{
return v___x_7609_;
}
}
}
}
}
}
else
{
lean_object* v_a_7614_; lean_object* v_a_7615_; lean_object* v___x_7617_; uint8_t v_isShared_7618_; uint8_t v_isSharedCheck_7622_; 
lean_dec_ref(v___y_7544_);
lean_dec(v___y_7543_);
lean_dec(v___y_7542_);
lean_dec(v___y_7541_);
lean_dec_ref(v___y_7540_);
lean_dec_ref(v_libs_7539_);
lean_dec_ref(v_libName_7537_);
lean_dec_ref(v_libFile_7536_);
lean_dec_ref(v___f_7535_);
v_a_7614_ = lean_ctor_get(v___x_7572_, 0);
v_a_7615_ = lean_ctor_get(v___x_7572_, 1);
v_isSharedCheck_7622_ = !lean_is_exclusive(v___x_7572_);
if (v_isSharedCheck_7622_ == 0)
{
v___x_7617_ = v___x_7572_;
v_isShared_7618_ = v_isSharedCheck_7622_;
goto v_resetjp_7616_;
}
else
{
lean_inc(v_a_7615_);
lean_inc(v_a_7614_);
lean_dec(v___x_7572_);
v___x_7617_ = lean_box(0);
v_isShared_7618_ = v_isSharedCheck_7622_;
goto v_resetjp_7616_;
}
v_resetjp_7616_:
{
lean_object* v___x_7620_; 
if (v_isShared_7618_ == 0)
{
v___x_7620_ = v___x_7617_;
goto v_reusejp_7619_;
}
else
{
lean_object* v_reuseFailAlloc_7621_; 
v_reuseFailAlloc_7621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7621_, 0, v_a_7614_);
lean_ctor_set(v_reuseFailAlloc_7621_, 1, v_a_7615_);
v___x_7620_ = v_reuseFailAlloc_7621_;
goto v_reusejp_7619_;
}
v_reusejp_7619_:
{
return v___x_7620_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__2___boxed(lean_object* v_traceArgs_7636_, lean_object* v_extraDepTrace_7637_, lean_object* v_linkDeps_7638_, lean_object* v___f_7639_, lean_object* v_libFile_7640_, lean_object* v_libName_7641_, lean_object* v_plugin_7642_, lean_object* v_libs_7643_, lean_object* v___y_7644_, lean_object* v___y_7645_, lean_object* v___y_7646_, lean_object* v___y_7647_, lean_object* v___y_7648_, lean_object* v___y_7649_, lean_object* v___y_7650_){
_start:
{
uint8_t v_linkDeps_boxed_7651_; uint8_t v_plugin_boxed_7652_; lean_object* v_res_7653_; 
v_linkDeps_boxed_7651_ = lean_unbox(v_linkDeps_7638_);
v_plugin_boxed_7652_ = lean_unbox(v_plugin_7642_);
v_res_7653_ = l_Lake_buildSharedLib___lam__2(v_traceArgs_7636_, v_extraDepTrace_7637_, v_linkDeps_boxed_7651_, v___f_7639_, v_libFile_7640_, v_libName_7641_, v_plugin_boxed_7652_, v_libs_7643_, v___y_7644_, v___y_7645_, v___y_7646_, v___y_7647_, v___y_7648_, v___y_7649_);
return v_res_7653_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__3(lean_object* v_weakArgs_7655_, lean_object* v_traceArgs_7656_, lean_object* v_libFile_7657_, lean_object* v_linker_7658_, lean_object* v_extraDepTrace_7659_, uint8_t v_linkDeps_7660_, lean_object* v_libName_7661_, uint8_t v_plugin_7662_, lean_object* v_linkLibs_7663_, lean_object* v___x_7664_, lean_object* v_objs_7665_, lean_object* v___y_7666_, lean_object* v___y_7667_, lean_object* v___y_7668_, lean_object* v___y_7669_, lean_object* v___y_7670_, lean_object* v___y_7671_){
_start:
{
lean_object* v_trace_7673_; lean_object* v___f_7674_; lean_object* v___x_7675_; lean_object* v___x_7676_; lean_object* v___f_7677_; lean_object* v___x_7678_; lean_object* v___x_7679_; lean_object* v___x_7680_; uint8_t v___x_7681_; lean_object* v___x_7682_; lean_object* v___x_7683_; 
v_trace_7673_ = lean_ctor_get(v___y_7671_, 1);
lean_inc_ref(v_libFile_7657_);
lean_inc_ref(v_traceArgs_7656_);
v___f_7674_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__0___boxed), 13, 5);
lean_closure_set(v___f_7674_, 0, v_objs_7665_);
lean_closure_set(v___f_7674_, 1, v_weakArgs_7655_);
lean_closure_set(v___f_7674_, 2, v_traceArgs_7656_);
lean_closure_set(v___f_7674_, 3, v_libFile_7657_);
lean_closure_set(v___f_7674_, 4, v_linker_7658_);
v___x_7675_ = lean_box(v_linkDeps_7660_);
v___x_7676_ = lean_box(v_plugin_7662_);
v___f_7677_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__2___boxed), 15, 7);
lean_closure_set(v___f_7677_, 0, v_traceArgs_7656_);
lean_closure_set(v___f_7677_, 1, v_extraDepTrace_7659_);
lean_closure_set(v___f_7677_, 2, v___x_7675_);
lean_closure_set(v___f_7677_, 3, v___f_7674_);
lean_closure_set(v___f_7677_, 4, v_libFile_7657_);
lean_closure_set(v___f_7677_, 5, v_libName_7661_);
lean_closure_set(v___f_7677_, 6, v___x_7676_);
v___x_7678_ = ((lean_object*)(l_Lake_buildSharedLib___lam__3___closed__0));
v___x_7679_ = l_Lake_Job_collectArray___redArg(v_linkLibs_7663_, v___x_7678_);
v___x_7680_ = lean_unsigned_to_nat(0u);
v___x_7681_ = 0;
lean_inc_ref(v_trace_7673_);
v___x_7682_ = l_Lake_Job_mapM___redArg(v___x_7664_, v___x_7679_, v___f_7677_, v___x_7680_, v___x_7681_, v___y_7666_, v___y_7667_, v___y_7668_, v___y_7669_, v___y_7670_, v_trace_7673_);
v___x_7683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7683_, 0, v___x_7682_);
lean_ctor_set(v___x_7683_, 1, v___y_7671_);
return v___x_7683_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__3___boxed(lean_object** _args){
lean_object* v_weakArgs_7684_ = _args[0];
lean_object* v_traceArgs_7685_ = _args[1];
lean_object* v_libFile_7686_ = _args[2];
lean_object* v_linker_7687_ = _args[3];
lean_object* v_extraDepTrace_7688_ = _args[4];
lean_object* v_linkDeps_7689_ = _args[5];
lean_object* v_libName_7690_ = _args[6];
lean_object* v_plugin_7691_ = _args[7];
lean_object* v_linkLibs_7692_ = _args[8];
lean_object* v___x_7693_ = _args[9];
lean_object* v_objs_7694_ = _args[10];
lean_object* v___y_7695_ = _args[11];
lean_object* v___y_7696_ = _args[12];
lean_object* v___y_7697_ = _args[13];
lean_object* v___y_7698_ = _args[14];
lean_object* v___y_7699_ = _args[15];
lean_object* v___y_7700_ = _args[16];
lean_object* v___y_7701_ = _args[17];
_start:
{
uint8_t v_linkDeps_boxed_7702_; uint8_t v_plugin_boxed_7703_; lean_object* v_res_7704_; 
v_linkDeps_boxed_7702_ = lean_unbox(v_linkDeps_7689_);
v_plugin_boxed_7703_ = lean_unbox(v_plugin_7691_);
v_res_7704_ = l_Lake_buildSharedLib___lam__3(v_weakArgs_7684_, v_traceArgs_7685_, v_libFile_7686_, v_linker_7687_, v_extraDepTrace_7688_, v_linkDeps_boxed_7702_, v_libName_7690_, v_plugin_boxed_7703_, v_linkLibs_7692_, v___x_7693_, v_objs_7694_, v___y_7695_, v___y_7696_, v___y_7697_, v___y_7698_, v___y_7699_, v___y_7700_);
lean_dec_ref(v_linkLibs_7692_);
return v_res_7704_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib(lean_object* v_libName_7706_, lean_object* v_libFile_7707_, lean_object* v_linkObjs_7708_, lean_object* v_linkLibs_7709_, lean_object* v_weakArgs_7710_, lean_object* v_traceArgs_7711_, lean_object* v_linker_7712_, lean_object* v_extraDepTrace_7713_, uint8_t v_plugin_7714_, uint8_t v_linkDeps_7715_, lean_object* v_a_7716_, lean_object* v_a_7717_, lean_object* v_a_7718_, lean_object* v_a_7719_, lean_object* v_a_7720_, lean_object* v_a_7721_){
_start:
{
lean_object* v___x_7723_; lean_object* v___x_7724_; lean_object* v___x_7725_; lean_object* v___f_7726_; lean_object* v___x_7727_; lean_object* v___x_7728_; lean_object* v___x_7729_; uint8_t v___x_7730_; lean_object* v___x_7731_; 
v___x_7723_ = l_Lake_instDataKindDynlib;
v___x_7724_ = lean_box(v_linkDeps_7715_);
v___x_7725_ = lean_box(v_plugin_7714_);
v___f_7726_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__3___boxed), 18, 10);
lean_closure_set(v___f_7726_, 0, v_weakArgs_7710_);
lean_closure_set(v___f_7726_, 1, v_traceArgs_7711_);
lean_closure_set(v___f_7726_, 2, v_libFile_7707_);
lean_closure_set(v___f_7726_, 3, v_linker_7712_);
lean_closure_set(v___f_7726_, 4, v_extraDepTrace_7713_);
lean_closure_set(v___f_7726_, 5, v___x_7724_);
lean_closure_set(v___f_7726_, 6, v_libName_7706_);
lean_closure_set(v___f_7726_, 7, v___x_7725_);
lean_closure_set(v___f_7726_, 8, v_linkLibs_7709_);
lean_closure_set(v___f_7726_, 9, v___x_7723_);
v___x_7727_ = ((lean_object*)(l_Lake_buildSharedLib___closed__0));
v___x_7728_ = l_Lake_Job_collectArray___redArg(v_linkObjs_7708_, v___x_7727_);
v___x_7729_ = lean_unsigned_to_nat(0u);
v___x_7730_ = 1;
v___x_7731_ = l_Lake_Job_bindM___redArg(v___x_7723_, v___x_7728_, v___f_7726_, v___x_7729_, v___x_7730_, v_a_7716_, v_a_7717_, v_a_7718_, v_a_7719_, v_a_7720_, v_a_7721_);
return v___x_7731_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___boxed(lean_object** _args){
lean_object* v_libName_7732_ = _args[0];
lean_object* v_libFile_7733_ = _args[1];
lean_object* v_linkObjs_7734_ = _args[2];
lean_object* v_linkLibs_7735_ = _args[3];
lean_object* v_weakArgs_7736_ = _args[4];
lean_object* v_traceArgs_7737_ = _args[5];
lean_object* v_linker_7738_ = _args[6];
lean_object* v_extraDepTrace_7739_ = _args[7];
lean_object* v_plugin_7740_ = _args[8];
lean_object* v_linkDeps_7741_ = _args[9];
lean_object* v_a_7742_ = _args[10];
lean_object* v_a_7743_ = _args[11];
lean_object* v_a_7744_ = _args[12];
lean_object* v_a_7745_ = _args[13];
lean_object* v_a_7746_ = _args[14];
lean_object* v_a_7747_ = _args[15];
lean_object* v_a_7748_ = _args[16];
_start:
{
uint8_t v_plugin_boxed_7749_; uint8_t v_linkDeps_boxed_7750_; lean_object* v_res_7751_; 
v_plugin_boxed_7749_ = lean_unbox(v_plugin_7740_);
v_linkDeps_boxed_7750_ = lean_unbox(v_linkDeps_7741_);
v_res_7751_ = l_Lake_buildSharedLib(v_libName_7732_, v_libFile_7733_, v_linkObjs_7734_, v_linkLibs_7735_, v_weakArgs_7736_, v_traceArgs_7737_, v_linker_7738_, v_extraDepTrace_7739_, v_plugin_boxed_7749_, v_linkDeps_boxed_7750_, v_a_7742_, v_a_7743_, v_a_7744_, v_a_7745_, v_a_7746_, v_a_7747_);
lean_dec_ref(v_linkObjs_7734_);
return v_res_7751_;
}
}
static lean_object* _init_l_Lake_buildLeanSharedLib___lam__0___closed__0(void){
_start:
{
lean_object* v___x_7752_; lean_object* v___x_7753_; lean_object* v___x_7754_; lean_object* v___x_7755_; 
v___x_7752_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1));
v___x_7753_ = lean_unsigned_to_nat(2u);
v___x_7754_ = lean_mk_empty_array_with_capacity(v___x_7753_);
v___x_7755_ = lean_array_push(v___x_7754_, v___x_7752_);
return v___x_7755_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0(lean_object* v_objs_7756_, lean_object* v_weakArgs_7757_, lean_object* v_traceArgs_7758_, lean_object* v_libFile_7759_, uint8_t v_linkDeps_7760_, lean_object* v_libs_7761_, lean_object* v___y_7762_, lean_object* v___y_7763_, lean_object* v___y_7764_, lean_object* v___y_7765_, lean_object* v___y_7766_, lean_object* v___y_7767_){
_start:
{
lean_object* v_toContext_7769_; lean_object* v_lakeEnv_7770_; lean_object* v_lean_7771_; lean_object* v_libs_7773_; lean_object* v___y_7774_; 
v_toContext_7769_ = lean_ctor_get(v___y_7766_, 1);
lean_inc(v_toContext_7769_);
lean_dec_ref(v___y_7766_);
v_lakeEnv_7770_ = lean_ctor_get(v_toContext_7769_, 1);
lean_inc_ref(v_lakeEnv_7770_);
lean_dec(v_toContext_7769_);
v_lean_7771_ = lean_ctor_get(v_lakeEnv_7770_, 1);
lean_inc_ref(v_lean_7771_);
lean_dec_ref(v_lakeEnv_7770_);
if (v_linkDeps_7760_ == 0)
{
lean_object* v___x_7819_; 
v___x_7819_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1));
v_libs_7773_ = v___x_7819_;
v___y_7774_ = v___y_7767_;
goto v___jp_7772_;
}
else
{
lean_object* v___x_7820_; 
v___x_7820_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7761_, v___y_7767_);
if (lean_obj_tag(v___x_7820_) == 0)
{
lean_object* v_a_7821_; lean_object* v_a_7822_; 
v_a_7821_ = lean_ctor_get(v___x_7820_, 0);
lean_inc(v_a_7821_);
v_a_7822_ = lean_ctor_get(v___x_7820_, 1);
lean_inc(v_a_7822_);
lean_dec_ref(v___x_7820_);
v_libs_7773_ = v_a_7821_;
v___y_7774_ = v_a_7822_;
goto v___jp_7772_;
}
else
{
lean_object* v_a_7823_; lean_object* v_a_7824_; lean_object* v___x_7826_; uint8_t v_isShared_7827_; uint8_t v_isSharedCheck_7831_; 
lean_dec_ref(v_lean_7771_);
lean_dec_ref(v_libFile_7759_);
v_a_7823_ = lean_ctor_get(v___x_7820_, 0);
v_a_7824_ = lean_ctor_get(v___x_7820_, 1);
v_isSharedCheck_7831_ = !lean_is_exclusive(v___x_7820_);
if (v_isSharedCheck_7831_ == 0)
{
v___x_7826_ = v___x_7820_;
v_isShared_7827_ = v_isSharedCheck_7831_;
goto v_resetjp_7825_;
}
else
{
lean_inc(v_a_7824_);
lean_inc(v_a_7823_);
lean_dec(v___x_7820_);
v___x_7826_ = lean_box(0);
v_isShared_7827_ = v_isSharedCheck_7831_;
goto v_resetjp_7825_;
}
v_resetjp_7825_:
{
lean_object* v___x_7829_; 
if (v_isShared_7827_ == 0)
{
v___x_7829_ = v___x_7826_;
goto v_reusejp_7828_;
}
else
{
lean_object* v_reuseFailAlloc_7830_; 
v_reuseFailAlloc_7830_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7830_, 0, v_a_7823_);
lean_ctor_set(v_reuseFailAlloc_7830_, 1, v_a_7824_);
v___x_7829_ = v_reuseFailAlloc_7830_;
goto v_reusejp_7828_;
}
v_reusejp_7828_:
{
return v___x_7829_;
}
}
}
}
v___jp_7772_:
{
lean_object* v_leanLibDir_7775_; lean_object* v_cc_7776_; lean_object* v_ccLinkSharedFlags_7777_; lean_object* v_log_7778_; uint8_t v_action_7779_; uint8_t v_wantsRebuild_7780_; lean_object* v_trace_7781_; lean_object* v_buildTime_7782_; lean_object* v___x_7784_; uint8_t v_isShared_7785_; uint8_t v_isSharedCheck_7818_; 
v_leanLibDir_7775_ = lean_ctor_get(v_lean_7771_, 3);
lean_inc_ref(v_leanLibDir_7775_);
v_cc_7776_ = lean_ctor_get(v_lean_7771_, 14);
lean_inc_ref(v_cc_7776_);
v_ccLinkSharedFlags_7777_ = lean_ctor_get(v_lean_7771_, 20);
lean_inc_ref(v_ccLinkSharedFlags_7777_);
lean_dec_ref(v_lean_7771_);
v_log_7778_ = lean_ctor_get(v___y_7774_, 0);
v_action_7779_ = lean_ctor_get_uint8(v___y_7774_, sizeof(void*)*3);
v_wantsRebuild_7780_ = lean_ctor_get_uint8(v___y_7774_, sizeof(void*)*3 + 1);
v_trace_7781_ = lean_ctor_get(v___y_7774_, 1);
v_buildTime_7782_ = lean_ctor_get(v___y_7774_, 2);
v_isSharedCheck_7818_ = !lean_is_exclusive(v___y_7774_);
if (v_isSharedCheck_7818_ == 0)
{
v___x_7784_ = v___y_7774_;
v_isShared_7785_ = v_isSharedCheck_7818_;
goto v_resetjp_7783_;
}
else
{
lean_inc(v_buildTime_7782_);
lean_inc(v_trace_7781_);
lean_inc(v_log_7778_);
lean_dec(v___y_7774_);
v___x_7784_ = lean_box(0);
v_isShared_7785_ = v_isSharedCheck_7818_;
goto v_resetjp_7783_;
}
v_resetjp_7783_:
{
lean_object* v___x_7786_; lean_object* v___x_7787_; lean_object* v___x_7788_; lean_object* v___x_7789_; lean_object* v___x_7790_; lean_object* v___x_7791_; lean_object* v___x_7792_; lean_object* v___x_7793_; 
v___x_7786_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7756_, v_libs_7773_);
lean_dec_ref(v_libs_7773_);
v___x_7787_ = l_Array_append___redArg(v___x_7786_, v_weakArgs_7757_);
v___x_7788_ = l_Array_append___redArg(v___x_7787_, v_traceArgs_7758_);
v___x_7789_ = lean_obj_once(&l_Lake_buildLeanSharedLib___lam__0___closed__0, &l_Lake_buildLeanSharedLib___lam__0___closed__0_once, _init_l_Lake_buildLeanSharedLib___lam__0___closed__0);
v___x_7790_ = lean_array_push(v___x_7789_, v_leanLibDir_7775_);
v___x_7791_ = l_Array_append___redArg(v___x_7788_, v___x_7790_);
lean_dec_ref(v___x_7790_);
v___x_7792_ = l_Array_append___redArg(v___x_7791_, v_ccLinkSharedFlags_7777_);
lean_dec_ref(v_ccLinkSharedFlags_7777_);
v___x_7793_ = l_Lake_compileSharedLib(v_libFile_7759_, v___x_7792_, v_cc_7776_, v_log_7778_);
lean_dec_ref(v___x_7792_);
if (lean_obj_tag(v___x_7793_) == 0)
{
lean_object* v_a_7794_; lean_object* v_a_7795_; lean_object* v___x_7797_; uint8_t v_isShared_7798_; uint8_t v_isSharedCheck_7805_; 
v_a_7794_ = lean_ctor_get(v___x_7793_, 0);
v_a_7795_ = lean_ctor_get(v___x_7793_, 1);
v_isSharedCheck_7805_ = !lean_is_exclusive(v___x_7793_);
if (v_isSharedCheck_7805_ == 0)
{
v___x_7797_ = v___x_7793_;
v_isShared_7798_ = v_isSharedCheck_7805_;
goto v_resetjp_7796_;
}
else
{
lean_inc(v_a_7795_);
lean_inc(v_a_7794_);
lean_dec(v___x_7793_);
v___x_7797_ = lean_box(0);
v_isShared_7798_ = v_isSharedCheck_7805_;
goto v_resetjp_7796_;
}
v_resetjp_7796_:
{
lean_object* v___x_7800_; 
if (v_isShared_7785_ == 0)
{
lean_ctor_set(v___x_7784_, 0, v_a_7795_);
v___x_7800_ = v___x_7784_;
goto v_reusejp_7799_;
}
else
{
lean_object* v_reuseFailAlloc_7804_; 
v_reuseFailAlloc_7804_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7804_, 0, v_a_7795_);
lean_ctor_set(v_reuseFailAlloc_7804_, 1, v_trace_7781_);
lean_ctor_set(v_reuseFailAlloc_7804_, 2, v_buildTime_7782_);
lean_ctor_set_uint8(v_reuseFailAlloc_7804_, sizeof(void*)*3, v_action_7779_);
lean_ctor_set_uint8(v_reuseFailAlloc_7804_, sizeof(void*)*3 + 1, v_wantsRebuild_7780_);
v___x_7800_ = v_reuseFailAlloc_7804_;
goto v_reusejp_7799_;
}
v_reusejp_7799_:
{
lean_object* v___x_7802_; 
if (v_isShared_7798_ == 0)
{
lean_ctor_set(v___x_7797_, 1, v___x_7800_);
v___x_7802_ = v___x_7797_;
goto v_reusejp_7801_;
}
else
{
lean_object* v_reuseFailAlloc_7803_; 
v_reuseFailAlloc_7803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7803_, 0, v_a_7794_);
lean_ctor_set(v_reuseFailAlloc_7803_, 1, v___x_7800_);
v___x_7802_ = v_reuseFailAlloc_7803_;
goto v_reusejp_7801_;
}
v_reusejp_7801_:
{
return v___x_7802_;
}
}
}
}
else
{
lean_object* v_a_7806_; lean_object* v_a_7807_; lean_object* v___x_7809_; uint8_t v_isShared_7810_; uint8_t v_isSharedCheck_7817_; 
v_a_7806_ = lean_ctor_get(v___x_7793_, 0);
v_a_7807_ = lean_ctor_get(v___x_7793_, 1);
v_isSharedCheck_7817_ = !lean_is_exclusive(v___x_7793_);
if (v_isSharedCheck_7817_ == 0)
{
v___x_7809_ = v___x_7793_;
v_isShared_7810_ = v_isSharedCheck_7817_;
goto v_resetjp_7808_;
}
else
{
lean_inc(v_a_7807_);
lean_inc(v_a_7806_);
lean_dec(v___x_7793_);
v___x_7809_ = lean_box(0);
v_isShared_7810_ = v_isSharedCheck_7817_;
goto v_resetjp_7808_;
}
v_resetjp_7808_:
{
lean_object* v___x_7812_; 
if (v_isShared_7785_ == 0)
{
lean_ctor_set(v___x_7784_, 0, v_a_7807_);
v___x_7812_ = v___x_7784_;
goto v_reusejp_7811_;
}
else
{
lean_object* v_reuseFailAlloc_7816_; 
v_reuseFailAlloc_7816_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7816_, 0, v_a_7807_);
lean_ctor_set(v_reuseFailAlloc_7816_, 1, v_trace_7781_);
lean_ctor_set(v_reuseFailAlloc_7816_, 2, v_buildTime_7782_);
lean_ctor_set_uint8(v_reuseFailAlloc_7816_, sizeof(void*)*3, v_action_7779_);
lean_ctor_set_uint8(v_reuseFailAlloc_7816_, sizeof(void*)*3 + 1, v_wantsRebuild_7780_);
v___x_7812_ = v_reuseFailAlloc_7816_;
goto v_reusejp_7811_;
}
v_reusejp_7811_:
{
lean_object* v___x_7814_; 
if (v_isShared_7810_ == 0)
{
lean_ctor_set(v___x_7809_, 1, v___x_7812_);
v___x_7814_ = v___x_7809_;
goto v_reusejp_7813_;
}
else
{
lean_object* v_reuseFailAlloc_7815_; 
v_reuseFailAlloc_7815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7815_, 0, v_a_7806_);
lean_ctor_set(v_reuseFailAlloc_7815_, 1, v___x_7812_);
v___x_7814_ = v_reuseFailAlloc_7815_;
goto v_reusejp_7813_;
}
v_reusejp_7813_:
{
return v___x_7814_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0___boxed(lean_object* v_objs_7832_, lean_object* v_weakArgs_7833_, lean_object* v_traceArgs_7834_, lean_object* v_libFile_7835_, lean_object* v_linkDeps_7836_, lean_object* v_libs_7837_, lean_object* v___y_7838_, lean_object* v___y_7839_, lean_object* v___y_7840_, lean_object* v___y_7841_, lean_object* v___y_7842_, lean_object* v___y_7843_, lean_object* v___y_7844_){
_start:
{
uint8_t v_linkDeps_boxed_7845_; lean_object* v_res_7846_; 
v_linkDeps_boxed_7845_ = lean_unbox(v_linkDeps_7836_);
v_res_7846_ = l_Lake_buildLeanSharedLib___lam__0(v_objs_7832_, v_weakArgs_7833_, v_traceArgs_7834_, v_libFile_7835_, v_linkDeps_boxed_7845_, v_libs_7837_, v___y_7838_, v___y_7839_, v___y_7840_, v___y_7841_, v___y_7842_, v___y_7843_);
lean_dec(v___y_7841_);
lean_dec(v___y_7840_);
lean_dec(v___y_7839_);
lean_dec_ref(v___y_7838_);
lean_dec_ref(v_libs_7837_);
lean_dec_ref(v_traceArgs_7834_);
lean_dec_ref(v_weakArgs_7833_);
lean_dec_ref(v_objs_7832_);
return v_res_7846_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1(lean_object* v_objs_7847_, lean_object* v_weakArgs_7848_, lean_object* v_traceArgs_7849_, lean_object* v_libFile_7850_, uint8_t v_linkDeps_7851_, lean_object* v_libName_7852_, uint8_t v_plugin_7853_, lean_object* v_libs_7854_, lean_object* v___y_7855_, lean_object* v___y_7856_, lean_object* v___y_7857_, lean_object* v___y_7858_, lean_object* v___y_7859_, lean_object* v___y_7860_){
_start:
{
lean_object* v_log_7862_; uint8_t v_action_7863_; uint8_t v_wantsRebuild_7864_; lean_object* v_trace_7865_; lean_object* v_buildTime_7866_; lean_object* v___x_7868_; uint8_t v_isShared_7869_; uint8_t v_isSharedCheck_7926_; 
v_log_7862_ = lean_ctor_get(v___y_7860_, 0);
v_action_7863_ = lean_ctor_get_uint8(v___y_7860_, sizeof(void*)*3);
v_wantsRebuild_7864_ = lean_ctor_get_uint8(v___y_7860_, sizeof(void*)*3 + 1);
v_trace_7865_ = lean_ctor_get(v___y_7860_, 1);
v_buildTime_7866_ = lean_ctor_get(v___y_7860_, 2);
v_isSharedCheck_7926_ = !lean_is_exclusive(v___y_7860_);
if (v_isSharedCheck_7926_ == 0)
{
v___x_7868_ = v___y_7860_;
v_isShared_7869_ = v_isSharedCheck_7926_;
goto v_resetjp_7867_;
}
else
{
lean_inc(v_buildTime_7866_);
lean_inc(v_trace_7865_);
lean_inc(v_log_7862_);
lean_dec(v___y_7860_);
v___x_7868_ = lean_box(0);
v_isShared_7869_ = v_isSharedCheck_7926_;
goto v_resetjp_7867_;
}
v_resetjp_7867_:
{
lean_object* v_leanTrace_7870_; lean_object* v___x_7871_; lean_object* v___f_7872_; lean_object* v___x_7873_; uint64_t v___y_7875_; uint64_t v___x_7915_; lean_object* v___x_7916_; lean_object* v___x_7917_; uint8_t v___x_7918_; 
v_leanTrace_7870_ = lean_ctor_get(v___y_7859_, 2);
v___x_7871_ = lean_box(v_linkDeps_7851_);
lean_inc_ref(v_libs_7854_);
lean_inc_ref(v_libFile_7850_);
lean_inc_ref(v_traceArgs_7849_);
v___f_7872_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLib___lam__0___boxed), 13, 6);
lean_closure_set(v___f_7872_, 0, v_objs_7847_);
lean_closure_set(v___f_7872_, 1, v_weakArgs_7848_);
lean_closure_set(v___f_7872_, 2, v_traceArgs_7849_);
lean_closure_set(v___f_7872_, 3, v_libFile_7850_);
lean_closure_set(v___f_7872_, 4, v___x_7871_);
lean_closure_set(v___f_7872_, 5, v_libs_7854_);
lean_inc_ref(v_leanTrace_7870_);
v___x_7873_ = l_Lake_BuildTrace_mix(v_trace_7865_, v_leanTrace_7870_);
v___x_7915_ = l_Lake_Hash_nil;
v___x_7916_ = lean_unsigned_to_nat(0u);
v___x_7917_ = lean_array_get_size(v_traceArgs_7849_);
v___x_7918_ = lean_nat_dec_lt(v___x_7916_, v___x_7917_);
if (v___x_7918_ == 0)
{
v___y_7875_ = v___x_7915_;
goto v___jp_7874_;
}
else
{
uint8_t v___x_7919_; 
v___x_7919_ = lean_nat_dec_le(v___x_7917_, v___x_7917_);
if (v___x_7919_ == 0)
{
if (v___x_7918_ == 0)
{
v___y_7875_ = v___x_7915_;
goto v___jp_7874_;
}
else
{
size_t v___x_7920_; size_t v___x_7921_; uint64_t v___x_7922_; 
v___x_7920_ = ((size_t)0ULL);
v___x_7921_ = lean_usize_of_nat(v___x_7917_);
v___x_7922_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_7849_, v___x_7920_, v___x_7921_, v___x_7915_);
v___y_7875_ = v___x_7922_;
goto v___jp_7874_;
}
}
else
{
size_t v___x_7923_; size_t v___x_7924_; uint64_t v___x_7925_; 
v___x_7923_ = ((size_t)0ULL);
v___x_7924_ = lean_usize_of_nat(v___x_7917_);
v___x_7925_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_7849_, v___x_7923_, v___x_7924_, v___x_7915_);
v___y_7875_ = v___x_7925_;
goto v___jp_7874_;
}
}
v___jp_7874_:
{
lean_object* v___x_7876_; lean_object* v___x_7877_; lean_object* v___x_7878_; lean_object* v___x_7879_; lean_object* v___x_7880_; lean_object* v___x_7881_; lean_object* v___x_7882_; lean_object* v___x_7883_; lean_object* v___x_7884_; lean_object* v___x_7885_; lean_object* v___x_7886_; lean_object* v___x_7887_; lean_object* v___x_7889_; 
v___x_7876_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_7877_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
v___x_7878_ = lean_array_to_list(v_traceArgs_7849_);
v___x_7879_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_7878_);
lean_dec(v___x_7878_);
v___x_7880_ = lean_string_append(v___x_7877_, v___x_7879_);
lean_dec_ref(v___x_7879_);
v___x_7881_ = lean_string_append(v___x_7876_, v___x_7880_);
lean_dec_ref(v___x_7880_);
v___x_7882_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_7883_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_7884_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_7884_, 0, v___x_7881_);
lean_ctor_set(v___x_7884_, 1, v___x_7882_);
lean_ctor_set(v___x_7884_, 2, v___x_7883_);
lean_ctor_set_uint64(v___x_7884_, sizeof(void*)*3, v___y_7875_);
v___x_7885_ = l_Lake_BuildTrace_mix(v___x_7873_, v___x_7884_);
v___x_7886_ = l_Lake_platformTrace;
v___x_7887_ = l_Lake_BuildTrace_mix(v___x_7885_, v___x_7886_);
if (v_isShared_7869_ == 0)
{
lean_ctor_set(v___x_7868_, 1, v___x_7887_);
v___x_7889_ = v___x_7868_;
goto v_reusejp_7888_;
}
else
{
lean_object* v_reuseFailAlloc_7914_; 
v_reuseFailAlloc_7914_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7914_, 0, v_log_7862_);
lean_ctor_set(v_reuseFailAlloc_7914_, 1, v___x_7887_);
lean_ctor_set(v_reuseFailAlloc_7914_, 2, v_buildTime_7866_);
lean_ctor_set_uint8(v_reuseFailAlloc_7914_, sizeof(void*)*3, v_action_7863_);
lean_ctor_set_uint8(v_reuseFailAlloc_7914_, sizeof(void*)*3 + 1, v_wantsRebuild_7864_);
v___x_7889_ = v_reuseFailAlloc_7914_;
goto v_reusejp_7888_;
}
v_reusejp_7888_:
{
uint8_t v___x_7890_; lean_object* v___x_7891_; uint8_t v___x_7892_; lean_object* v___x_7893_; 
v___x_7890_ = 0;
v___x_7891_ = l_Lake_sharedLibExt;
v___x_7892_ = 1;
v___x_7893_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_7850_, v___f_7872_, v___x_7890_, v___x_7891_, v___x_7892_, v___x_7890_, v___x_7890_, v___y_7855_, v___y_7856_, v___y_7857_, v___y_7858_, v___y_7859_, v___x_7889_);
if (lean_obj_tag(v___x_7893_) == 0)
{
lean_object* v_a_7894_; lean_object* v_a_7895_; lean_object* v___x_7897_; uint8_t v_isShared_7898_; uint8_t v_isSharedCheck_7904_; 
v_a_7894_ = lean_ctor_get(v___x_7893_, 0);
v_a_7895_ = lean_ctor_get(v___x_7893_, 1);
v_isSharedCheck_7904_ = !lean_is_exclusive(v___x_7893_);
if (v_isSharedCheck_7904_ == 0)
{
v___x_7897_ = v___x_7893_;
v_isShared_7898_ = v_isSharedCheck_7904_;
goto v_resetjp_7896_;
}
else
{
lean_inc(v_a_7895_);
lean_inc(v_a_7894_);
lean_dec(v___x_7893_);
v___x_7897_ = lean_box(0);
v_isShared_7898_ = v_isSharedCheck_7904_;
goto v_resetjp_7896_;
}
v_resetjp_7896_:
{
lean_object* v_path_7899_; lean_object* v___x_7900_; lean_object* v___x_7902_; 
v_path_7899_ = lean_ctor_get(v_a_7894_, 1);
lean_inc_ref(v_path_7899_);
lean_dec(v_a_7894_);
v___x_7900_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_7900_, 0, v_path_7899_);
lean_ctor_set(v___x_7900_, 1, v_libName_7852_);
lean_ctor_set(v___x_7900_, 2, v_libs_7854_);
lean_ctor_set_uint8(v___x_7900_, sizeof(void*)*3, v_plugin_7853_);
if (v_isShared_7898_ == 0)
{
lean_ctor_set(v___x_7897_, 0, v___x_7900_);
v___x_7902_ = v___x_7897_;
goto v_reusejp_7901_;
}
else
{
lean_object* v_reuseFailAlloc_7903_; 
v_reuseFailAlloc_7903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7903_, 0, v___x_7900_);
lean_ctor_set(v_reuseFailAlloc_7903_, 1, v_a_7895_);
v___x_7902_ = v_reuseFailAlloc_7903_;
goto v_reusejp_7901_;
}
v_reusejp_7901_:
{
return v___x_7902_;
}
}
}
else
{
lean_object* v_a_7905_; lean_object* v_a_7906_; lean_object* v___x_7908_; uint8_t v_isShared_7909_; uint8_t v_isSharedCheck_7913_; 
lean_dec_ref(v_libs_7854_);
lean_dec_ref(v_libName_7852_);
v_a_7905_ = lean_ctor_get(v___x_7893_, 0);
v_a_7906_ = lean_ctor_get(v___x_7893_, 1);
v_isSharedCheck_7913_ = !lean_is_exclusive(v___x_7893_);
if (v_isSharedCheck_7913_ == 0)
{
v___x_7908_ = v___x_7893_;
v_isShared_7909_ = v_isSharedCheck_7913_;
goto v_resetjp_7907_;
}
else
{
lean_inc(v_a_7906_);
lean_inc(v_a_7905_);
lean_dec(v___x_7893_);
v___x_7908_ = lean_box(0);
v_isShared_7909_ = v_isSharedCheck_7913_;
goto v_resetjp_7907_;
}
v_resetjp_7907_:
{
lean_object* v___x_7911_; 
if (v_isShared_7909_ == 0)
{
v___x_7911_ = v___x_7908_;
goto v_reusejp_7910_;
}
else
{
lean_object* v_reuseFailAlloc_7912_; 
v_reuseFailAlloc_7912_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7912_, 0, v_a_7905_);
lean_ctor_set(v_reuseFailAlloc_7912_, 1, v_a_7906_);
v___x_7911_ = v_reuseFailAlloc_7912_;
goto v_reusejp_7910_;
}
v_reusejp_7910_:
{
return v___x_7911_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1___boxed(lean_object* v_objs_7927_, lean_object* v_weakArgs_7928_, lean_object* v_traceArgs_7929_, lean_object* v_libFile_7930_, lean_object* v_linkDeps_7931_, lean_object* v_libName_7932_, lean_object* v_plugin_7933_, lean_object* v_libs_7934_, lean_object* v___y_7935_, lean_object* v___y_7936_, lean_object* v___y_7937_, lean_object* v___y_7938_, lean_object* v___y_7939_, lean_object* v___y_7940_, lean_object* v___y_7941_){
_start:
{
uint8_t v_linkDeps_boxed_7942_; uint8_t v_plugin_boxed_7943_; lean_object* v_res_7944_; 
v_linkDeps_boxed_7942_ = lean_unbox(v_linkDeps_7931_);
v_plugin_boxed_7943_ = lean_unbox(v_plugin_7933_);
v_res_7944_ = l_Lake_buildLeanSharedLib___lam__1(v_objs_7927_, v_weakArgs_7928_, v_traceArgs_7929_, v_libFile_7930_, v_linkDeps_boxed_7942_, v_libName_7932_, v_plugin_boxed_7943_, v_libs_7934_, v___y_7935_, v___y_7936_, v___y_7937_, v___y_7938_, v___y_7939_, v___y_7940_);
return v_res_7944_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__2(lean_object* v_weakArgs_7945_, lean_object* v_traceArgs_7946_, lean_object* v_libFile_7947_, uint8_t v_linkDeps_7948_, lean_object* v_libName_7949_, uint8_t v_plugin_7950_, lean_object* v_linkLibs_7951_, lean_object* v___x_7952_, lean_object* v_objs_7953_, lean_object* v___y_7954_, lean_object* v___y_7955_, lean_object* v___y_7956_, lean_object* v___y_7957_, lean_object* v___y_7958_, lean_object* v___y_7959_){
_start:
{
lean_object* v_trace_7961_; lean_object* v___x_7962_; lean_object* v___x_7963_; lean_object* v___f_7964_; lean_object* v___x_7965_; lean_object* v___x_7966_; lean_object* v___x_7967_; uint8_t v___x_7968_; lean_object* v___x_7969_; lean_object* v___x_7970_; 
v_trace_7961_ = lean_ctor_get(v___y_7959_, 1);
v___x_7962_ = lean_box(v_linkDeps_7948_);
v___x_7963_ = lean_box(v_plugin_7950_);
v___f_7964_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLib___lam__1___boxed), 15, 7);
lean_closure_set(v___f_7964_, 0, v_objs_7953_);
lean_closure_set(v___f_7964_, 1, v_weakArgs_7945_);
lean_closure_set(v___f_7964_, 2, v_traceArgs_7946_);
lean_closure_set(v___f_7964_, 3, v_libFile_7947_);
lean_closure_set(v___f_7964_, 4, v___x_7962_);
lean_closure_set(v___f_7964_, 5, v_libName_7949_);
lean_closure_set(v___f_7964_, 6, v___x_7963_);
v___x_7965_ = ((lean_object*)(l_Lake_buildSharedLib___lam__3___closed__0));
v___x_7966_ = l_Lake_Job_collectArray___redArg(v_linkLibs_7951_, v___x_7965_);
v___x_7967_ = lean_unsigned_to_nat(0u);
v___x_7968_ = 0;
lean_inc_ref(v_trace_7961_);
v___x_7969_ = l_Lake_Job_mapM___redArg(v___x_7952_, v___x_7966_, v___f_7964_, v___x_7967_, v___x_7968_, v___y_7954_, v___y_7955_, v___y_7956_, v___y_7957_, v___y_7958_, v_trace_7961_);
v___x_7970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7970_, 0, v___x_7969_);
lean_ctor_set(v___x_7970_, 1, v___y_7959_);
return v___x_7970_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__2___boxed(lean_object* v_weakArgs_7971_, lean_object* v_traceArgs_7972_, lean_object* v_libFile_7973_, lean_object* v_linkDeps_7974_, lean_object* v_libName_7975_, lean_object* v_plugin_7976_, lean_object* v_linkLibs_7977_, lean_object* v___x_7978_, lean_object* v_objs_7979_, lean_object* v___y_7980_, lean_object* v___y_7981_, lean_object* v___y_7982_, lean_object* v___y_7983_, lean_object* v___y_7984_, lean_object* v___y_7985_, lean_object* v___y_7986_){
_start:
{
uint8_t v_linkDeps_boxed_7987_; uint8_t v_plugin_boxed_7988_; lean_object* v_res_7989_; 
v_linkDeps_boxed_7987_ = lean_unbox(v_linkDeps_7974_);
v_plugin_boxed_7988_ = lean_unbox(v_plugin_7976_);
v_res_7989_ = l_Lake_buildLeanSharedLib___lam__2(v_weakArgs_7971_, v_traceArgs_7972_, v_libFile_7973_, v_linkDeps_boxed_7987_, v_libName_7975_, v_plugin_boxed_7988_, v_linkLibs_7977_, v___x_7978_, v_objs_7979_, v___y_7980_, v___y_7981_, v___y_7982_, v___y_7983_, v___y_7984_, v___y_7985_);
lean_dec_ref(v_linkLibs_7977_);
return v_res_7989_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib(lean_object* v_libName_7990_, lean_object* v_libFile_7991_, lean_object* v_linkObjs_7992_, lean_object* v_linkLibs_7993_, lean_object* v_weakArgs_7994_, lean_object* v_traceArgs_7995_, uint8_t v_plugin_7996_, uint8_t v_linkDeps_7997_, lean_object* v_a_7998_, lean_object* v_a_7999_, lean_object* v_a_8000_, lean_object* v_a_8001_, lean_object* v_a_8002_, lean_object* v_a_8003_){
_start:
{
lean_object* v___x_8005_; lean_object* v___x_8006_; lean_object* v___x_8007_; lean_object* v___f_8008_; lean_object* v___x_8009_; lean_object* v___x_8010_; lean_object* v___x_8011_; uint8_t v___x_8012_; lean_object* v___x_8013_; 
v___x_8005_ = l_Lake_instDataKindDynlib;
v___x_8006_ = lean_box(v_linkDeps_7997_);
v___x_8007_ = lean_box(v_plugin_7996_);
v___f_8008_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLib___lam__2___boxed), 16, 8);
lean_closure_set(v___f_8008_, 0, v_weakArgs_7994_);
lean_closure_set(v___f_8008_, 1, v_traceArgs_7995_);
lean_closure_set(v___f_8008_, 2, v_libFile_7991_);
lean_closure_set(v___f_8008_, 3, v___x_8006_);
lean_closure_set(v___f_8008_, 4, v_libName_7990_);
lean_closure_set(v___f_8008_, 5, v___x_8007_);
lean_closure_set(v___f_8008_, 6, v_linkLibs_7993_);
lean_closure_set(v___f_8008_, 7, v___x_8005_);
v___x_8009_ = ((lean_object*)(l_Lake_buildSharedLib___closed__0));
v___x_8010_ = l_Lake_Job_collectArray___redArg(v_linkObjs_7992_, v___x_8009_);
v___x_8011_ = lean_unsigned_to_nat(0u);
v___x_8012_ = 1;
v___x_8013_ = l_Lake_Job_bindM___redArg(v___x_8005_, v___x_8010_, v___f_8008_, v___x_8011_, v___x_8012_, v_a_7998_, v_a_7999_, v_a_8000_, v_a_8001_, v_a_8002_, v_a_8003_);
return v___x_8013_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___boxed(lean_object* v_libName_8014_, lean_object* v_libFile_8015_, lean_object* v_linkObjs_8016_, lean_object* v_linkLibs_8017_, lean_object* v_weakArgs_8018_, lean_object* v_traceArgs_8019_, lean_object* v_plugin_8020_, lean_object* v_linkDeps_8021_, lean_object* v_a_8022_, lean_object* v_a_8023_, lean_object* v_a_8024_, lean_object* v_a_8025_, lean_object* v_a_8026_, lean_object* v_a_8027_, lean_object* v_a_8028_){
_start:
{
uint8_t v_plugin_boxed_8029_; uint8_t v_linkDeps_boxed_8030_; lean_object* v_res_8031_; 
v_plugin_boxed_8029_ = lean_unbox(v_plugin_8020_);
v_linkDeps_boxed_8030_ = lean_unbox(v_linkDeps_8021_);
v_res_8031_ = l_Lake_buildLeanSharedLib(v_libName_8014_, v_libFile_8015_, v_linkObjs_8016_, v_linkLibs_8017_, v_weakArgs_8018_, v_traceArgs_8019_, v_plugin_boxed_8029_, v_linkDeps_boxed_8030_, v_a_8022_, v_a_8023_, v_a_8024_, v_a_8025_, v_a_8026_, v_a_8027_);
lean_dec_ref(v_linkObjs_8016_);
return v_res_8031_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0(lean_object* v_libs_8032_, lean_object* v_objs_8033_, lean_object* v_weakArgs_8034_, lean_object* v_traceArgs_8035_, uint8_t v_sharedLean_8036_, lean_object* v_exeFile_8037_, lean_object* v___y_8038_, lean_object* v___y_8039_, lean_object* v___y_8040_, lean_object* v___y_8041_, lean_object* v___y_8042_, lean_object* v___y_8043_){
_start:
{
lean_object* v___x_8045_; 
v___x_8045_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_8032_, v___y_8043_);
if (lean_obj_tag(v___x_8045_) == 0)
{
lean_object* v_toContext_8046_; lean_object* v_lakeEnv_8047_; lean_object* v_lean_8048_; lean_object* v_a_8049_; lean_object* v_a_8050_; lean_object* v_leanLibDir_8051_; lean_object* v_cc_8052_; lean_object* v_log_8053_; uint8_t v_action_8054_; uint8_t v_wantsRebuild_8055_; lean_object* v_trace_8056_; lean_object* v_buildTime_8057_; lean_object* v___x_8059_; uint8_t v_isShared_8060_; uint8_t v_isSharedCheck_8096_; 
v_toContext_8046_ = lean_ctor_get(v___y_8042_, 1);
lean_inc(v_toContext_8046_);
lean_dec_ref(v___y_8042_);
v_lakeEnv_8047_ = lean_ctor_get(v_toContext_8046_, 1);
lean_inc_ref(v_lakeEnv_8047_);
lean_dec(v_toContext_8046_);
v_lean_8048_ = lean_ctor_get(v_lakeEnv_8047_, 1);
lean_inc_ref(v_lean_8048_);
lean_dec_ref(v_lakeEnv_8047_);
v_a_8049_ = lean_ctor_get(v___x_8045_, 1);
lean_inc(v_a_8049_);
v_a_8050_ = lean_ctor_get(v___x_8045_, 0);
lean_inc(v_a_8050_);
lean_dec_ref(v___x_8045_);
v_leanLibDir_8051_ = lean_ctor_get(v_lean_8048_, 3);
v_cc_8052_ = lean_ctor_get(v_lean_8048_, 14);
lean_inc_ref(v_cc_8052_);
v_log_8053_ = lean_ctor_get(v_a_8049_, 0);
v_action_8054_ = lean_ctor_get_uint8(v_a_8049_, sizeof(void*)*3);
v_wantsRebuild_8055_ = lean_ctor_get_uint8(v_a_8049_, sizeof(void*)*3 + 1);
v_trace_8056_ = lean_ctor_get(v_a_8049_, 1);
v_buildTime_8057_ = lean_ctor_get(v_a_8049_, 2);
v_isSharedCheck_8096_ = !lean_is_exclusive(v_a_8049_);
if (v_isSharedCheck_8096_ == 0)
{
v___x_8059_ = v_a_8049_;
v_isShared_8060_ = v_isSharedCheck_8096_;
goto v_resetjp_8058_;
}
else
{
lean_inc(v_buildTime_8057_);
lean_inc(v_trace_8056_);
lean_inc(v_log_8053_);
lean_dec(v_a_8049_);
v___x_8059_ = lean_box(0);
v_isShared_8060_ = v_isSharedCheck_8096_;
goto v_resetjp_8058_;
}
v_resetjp_8058_:
{
lean_object* v___x_8061_; lean_object* v___x_8062_; lean_object* v___x_8063_; lean_object* v___x_8064_; lean_object* v___x_8065_; lean_object* v___x_8066_; lean_object* v___x_8067_; lean_object* v___x_8068_; lean_object* v___x_8069_; lean_object* v___x_8070_; lean_object* v___x_8071_; 
v___x_8061_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_8033_, v_a_8050_);
lean_dec(v_a_8050_);
v___x_8062_ = l_Array_append___redArg(v___x_8061_, v_weakArgs_8034_);
v___x_8063_ = l_Array_append___redArg(v___x_8062_, v_traceArgs_8035_);
v___x_8064_ = lean_unsigned_to_nat(2u);
v___x_8065_ = lean_mk_empty_array_with_capacity(v___x_8064_);
lean_dec_ref(v___x_8065_);
v___x_8066_ = lean_obj_once(&l_Lake_buildLeanSharedLib___lam__0___closed__0, &l_Lake_buildLeanSharedLib___lam__0___closed__0_once, _init_l_Lake_buildLeanSharedLib___lam__0___closed__0);
lean_inc_ref(v_leanLibDir_8051_);
v___x_8067_ = lean_array_push(v___x_8066_, v_leanLibDir_8051_);
v___x_8068_ = l_Array_append___redArg(v___x_8063_, v___x_8067_);
lean_dec_ref(v___x_8067_);
v___x_8069_ = l_Lake_LeanInstall_ccLinkFlags(v_sharedLean_8036_, v_lean_8048_);
lean_dec_ref(v_lean_8048_);
v___x_8070_ = l_Array_append___redArg(v___x_8068_, v___x_8069_);
lean_dec_ref(v___x_8069_);
v___x_8071_ = l_Lake_compileExe(v_exeFile_8037_, v___x_8070_, v_cc_8052_, v_log_8053_);
lean_dec_ref(v___x_8070_);
if (lean_obj_tag(v___x_8071_) == 0)
{
lean_object* v_a_8072_; lean_object* v_a_8073_; lean_object* v___x_8075_; uint8_t v_isShared_8076_; uint8_t v_isSharedCheck_8083_; 
v_a_8072_ = lean_ctor_get(v___x_8071_, 0);
v_a_8073_ = lean_ctor_get(v___x_8071_, 1);
v_isSharedCheck_8083_ = !lean_is_exclusive(v___x_8071_);
if (v_isSharedCheck_8083_ == 0)
{
v___x_8075_ = v___x_8071_;
v_isShared_8076_ = v_isSharedCheck_8083_;
goto v_resetjp_8074_;
}
else
{
lean_inc(v_a_8073_);
lean_inc(v_a_8072_);
lean_dec(v___x_8071_);
v___x_8075_ = lean_box(0);
v_isShared_8076_ = v_isSharedCheck_8083_;
goto v_resetjp_8074_;
}
v_resetjp_8074_:
{
lean_object* v___x_8078_; 
if (v_isShared_8060_ == 0)
{
lean_ctor_set(v___x_8059_, 0, v_a_8073_);
v___x_8078_ = v___x_8059_;
goto v_reusejp_8077_;
}
else
{
lean_object* v_reuseFailAlloc_8082_; 
v_reuseFailAlloc_8082_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8082_, 0, v_a_8073_);
lean_ctor_set(v_reuseFailAlloc_8082_, 1, v_trace_8056_);
lean_ctor_set(v_reuseFailAlloc_8082_, 2, v_buildTime_8057_);
lean_ctor_set_uint8(v_reuseFailAlloc_8082_, sizeof(void*)*3, v_action_8054_);
lean_ctor_set_uint8(v_reuseFailAlloc_8082_, sizeof(void*)*3 + 1, v_wantsRebuild_8055_);
v___x_8078_ = v_reuseFailAlloc_8082_;
goto v_reusejp_8077_;
}
v_reusejp_8077_:
{
lean_object* v___x_8080_; 
if (v_isShared_8076_ == 0)
{
lean_ctor_set(v___x_8075_, 1, v___x_8078_);
v___x_8080_ = v___x_8075_;
goto v_reusejp_8079_;
}
else
{
lean_object* v_reuseFailAlloc_8081_; 
v_reuseFailAlloc_8081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8081_, 0, v_a_8072_);
lean_ctor_set(v_reuseFailAlloc_8081_, 1, v___x_8078_);
v___x_8080_ = v_reuseFailAlloc_8081_;
goto v_reusejp_8079_;
}
v_reusejp_8079_:
{
return v___x_8080_;
}
}
}
}
else
{
lean_object* v_a_8084_; lean_object* v_a_8085_; lean_object* v___x_8087_; uint8_t v_isShared_8088_; uint8_t v_isSharedCheck_8095_; 
v_a_8084_ = lean_ctor_get(v___x_8071_, 0);
v_a_8085_ = lean_ctor_get(v___x_8071_, 1);
v_isSharedCheck_8095_ = !lean_is_exclusive(v___x_8071_);
if (v_isSharedCheck_8095_ == 0)
{
v___x_8087_ = v___x_8071_;
v_isShared_8088_ = v_isSharedCheck_8095_;
goto v_resetjp_8086_;
}
else
{
lean_inc(v_a_8085_);
lean_inc(v_a_8084_);
lean_dec(v___x_8071_);
v___x_8087_ = lean_box(0);
v_isShared_8088_ = v_isSharedCheck_8095_;
goto v_resetjp_8086_;
}
v_resetjp_8086_:
{
lean_object* v___x_8090_; 
if (v_isShared_8060_ == 0)
{
lean_ctor_set(v___x_8059_, 0, v_a_8085_);
v___x_8090_ = v___x_8059_;
goto v_reusejp_8089_;
}
else
{
lean_object* v_reuseFailAlloc_8094_; 
v_reuseFailAlloc_8094_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8094_, 0, v_a_8085_);
lean_ctor_set(v_reuseFailAlloc_8094_, 1, v_trace_8056_);
lean_ctor_set(v_reuseFailAlloc_8094_, 2, v_buildTime_8057_);
lean_ctor_set_uint8(v_reuseFailAlloc_8094_, sizeof(void*)*3, v_action_8054_);
lean_ctor_set_uint8(v_reuseFailAlloc_8094_, sizeof(void*)*3 + 1, v_wantsRebuild_8055_);
v___x_8090_ = v_reuseFailAlloc_8094_;
goto v_reusejp_8089_;
}
v_reusejp_8089_:
{
lean_object* v___x_8092_; 
if (v_isShared_8088_ == 0)
{
lean_ctor_set(v___x_8087_, 1, v___x_8090_);
v___x_8092_ = v___x_8087_;
goto v_reusejp_8091_;
}
else
{
lean_object* v_reuseFailAlloc_8093_; 
v_reuseFailAlloc_8093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8093_, 0, v_a_8084_);
lean_ctor_set(v_reuseFailAlloc_8093_, 1, v___x_8090_);
v___x_8092_ = v_reuseFailAlloc_8093_;
goto v_reusejp_8091_;
}
v_reusejp_8091_:
{
return v___x_8092_;
}
}
}
}
}
}
else
{
lean_object* v_a_8097_; lean_object* v_a_8098_; lean_object* v___x_8100_; uint8_t v_isShared_8101_; uint8_t v_isSharedCheck_8105_; 
lean_dec_ref(v___y_8042_);
lean_dec_ref(v_exeFile_8037_);
v_a_8097_ = lean_ctor_get(v___x_8045_, 0);
v_a_8098_ = lean_ctor_get(v___x_8045_, 1);
v_isSharedCheck_8105_ = !lean_is_exclusive(v___x_8045_);
if (v_isSharedCheck_8105_ == 0)
{
v___x_8100_ = v___x_8045_;
v_isShared_8101_ = v_isSharedCheck_8105_;
goto v_resetjp_8099_;
}
else
{
lean_inc(v_a_8098_);
lean_inc(v_a_8097_);
lean_dec(v___x_8045_);
v___x_8100_ = lean_box(0);
v_isShared_8101_ = v_isSharedCheck_8105_;
goto v_resetjp_8099_;
}
v_resetjp_8099_:
{
lean_object* v___x_8103_; 
if (v_isShared_8101_ == 0)
{
v___x_8103_ = v___x_8100_;
goto v_reusejp_8102_;
}
else
{
lean_object* v_reuseFailAlloc_8104_; 
v_reuseFailAlloc_8104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8104_, 0, v_a_8097_);
lean_ctor_set(v_reuseFailAlloc_8104_, 1, v_a_8098_);
v___x_8103_ = v_reuseFailAlloc_8104_;
goto v_reusejp_8102_;
}
v_reusejp_8102_:
{
return v___x_8103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0___boxed(lean_object* v_libs_8106_, lean_object* v_objs_8107_, lean_object* v_weakArgs_8108_, lean_object* v_traceArgs_8109_, lean_object* v_sharedLean_8110_, lean_object* v_exeFile_8111_, lean_object* v___y_8112_, lean_object* v___y_8113_, lean_object* v___y_8114_, lean_object* v___y_8115_, lean_object* v___y_8116_, lean_object* v___y_8117_, lean_object* v___y_8118_){
_start:
{
uint8_t v_sharedLean_boxed_8119_; lean_object* v_res_8120_; 
v_sharedLean_boxed_8119_ = lean_unbox(v_sharedLean_8110_);
v_res_8120_ = l_Lake_buildLeanExe___lam__0(v_libs_8106_, v_objs_8107_, v_weakArgs_8108_, v_traceArgs_8109_, v_sharedLean_boxed_8119_, v_exeFile_8111_, v___y_8112_, v___y_8113_, v___y_8114_, v___y_8115_, v___y_8116_, v___y_8117_);
lean_dec(v___y_8115_);
lean_dec(v___y_8114_);
lean_dec(v___y_8113_);
lean_dec_ref(v___y_8112_);
lean_dec_ref(v_traceArgs_8109_);
lean_dec_ref(v_weakArgs_8108_);
lean_dec_ref(v_objs_8107_);
lean_dec_ref(v_libs_8106_);
return v_res_8120_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1(lean_object* v_objs_8121_, lean_object* v_weakArgs_8122_, lean_object* v_traceArgs_8123_, uint8_t v_sharedLean_8124_, lean_object* v_exeFile_8125_, lean_object* v_libs_8126_, lean_object* v___y_8127_, lean_object* v___y_8128_, lean_object* v___y_8129_, lean_object* v___y_8130_, lean_object* v___y_8131_, lean_object* v___y_8132_){
_start:
{
lean_object* v_log_8134_; uint8_t v_action_8135_; uint8_t v_wantsRebuild_8136_; lean_object* v_trace_8137_; lean_object* v_buildTime_8138_; lean_object* v___x_8140_; uint8_t v_isShared_8141_; uint8_t v_isSharedCheck_8197_; 
v_log_8134_ = lean_ctor_get(v___y_8132_, 0);
v_action_8135_ = lean_ctor_get_uint8(v___y_8132_, sizeof(void*)*3);
v_wantsRebuild_8136_ = lean_ctor_get_uint8(v___y_8132_, sizeof(void*)*3 + 1);
v_trace_8137_ = lean_ctor_get(v___y_8132_, 1);
v_buildTime_8138_ = lean_ctor_get(v___y_8132_, 2);
v_isSharedCheck_8197_ = !lean_is_exclusive(v___y_8132_);
if (v_isSharedCheck_8197_ == 0)
{
v___x_8140_ = v___y_8132_;
v_isShared_8141_ = v_isSharedCheck_8197_;
goto v_resetjp_8139_;
}
else
{
lean_inc(v_buildTime_8138_);
lean_inc(v_trace_8137_);
lean_inc(v_log_8134_);
lean_dec(v___y_8132_);
v___x_8140_ = lean_box(0);
v_isShared_8141_ = v_isSharedCheck_8197_;
goto v_resetjp_8139_;
}
v_resetjp_8139_:
{
lean_object* v_leanTrace_8142_; lean_object* v___x_8143_; lean_object* v___f_8144_; lean_object* v___x_8145_; uint64_t v___y_8147_; uint64_t v___x_8186_; lean_object* v___x_8187_; lean_object* v___x_8188_; uint8_t v___x_8189_; 
v_leanTrace_8142_ = lean_ctor_get(v___y_8131_, 2);
v___x_8143_ = lean_box(v_sharedLean_8124_);
lean_inc_ref(v_exeFile_8125_);
lean_inc_ref(v_traceArgs_8123_);
v___f_8144_ = lean_alloc_closure((void*)(l_Lake_buildLeanExe___lam__0___boxed), 13, 6);
lean_closure_set(v___f_8144_, 0, v_libs_8126_);
lean_closure_set(v___f_8144_, 1, v_objs_8121_);
lean_closure_set(v___f_8144_, 2, v_weakArgs_8122_);
lean_closure_set(v___f_8144_, 3, v_traceArgs_8123_);
lean_closure_set(v___f_8144_, 4, v___x_8143_);
lean_closure_set(v___f_8144_, 5, v_exeFile_8125_);
lean_inc_ref(v_leanTrace_8142_);
v___x_8145_ = l_Lake_BuildTrace_mix(v_trace_8137_, v_leanTrace_8142_);
v___x_8186_ = l_Lake_Hash_nil;
v___x_8187_ = lean_unsigned_to_nat(0u);
v___x_8188_ = lean_array_get_size(v_traceArgs_8123_);
v___x_8189_ = lean_nat_dec_lt(v___x_8187_, v___x_8188_);
if (v___x_8189_ == 0)
{
v___y_8147_ = v___x_8186_;
goto v___jp_8146_;
}
else
{
uint8_t v___x_8190_; 
v___x_8190_ = lean_nat_dec_le(v___x_8188_, v___x_8188_);
if (v___x_8190_ == 0)
{
if (v___x_8189_ == 0)
{
v___y_8147_ = v___x_8186_;
goto v___jp_8146_;
}
else
{
size_t v___x_8191_; size_t v___x_8192_; uint64_t v___x_8193_; 
v___x_8191_ = ((size_t)0ULL);
v___x_8192_ = lean_usize_of_nat(v___x_8188_);
v___x_8193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_8123_, v___x_8191_, v___x_8192_, v___x_8186_);
v___y_8147_ = v___x_8193_;
goto v___jp_8146_;
}
}
else
{
size_t v___x_8194_; size_t v___x_8195_; uint64_t v___x_8196_; 
v___x_8194_ = ((size_t)0ULL);
v___x_8195_ = lean_usize_of_nat(v___x_8188_);
v___x_8196_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_8123_, v___x_8194_, v___x_8195_, v___x_8186_);
v___y_8147_ = v___x_8196_;
goto v___jp_8146_;
}
}
v___jp_8146_:
{
lean_object* v___x_8148_; lean_object* v___x_8149_; lean_object* v___x_8150_; lean_object* v___x_8151_; lean_object* v___x_8152_; lean_object* v___x_8153_; lean_object* v___x_8154_; lean_object* v___x_8155_; lean_object* v___x_8156_; lean_object* v___x_8157_; lean_object* v___x_8158_; lean_object* v___x_8159_; lean_object* v___x_8161_; 
v___x_8148_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_8149_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
v___x_8150_ = lean_array_to_list(v_traceArgs_8123_);
v___x_8151_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_8150_);
lean_dec(v___x_8150_);
v___x_8152_ = lean_string_append(v___x_8149_, v___x_8151_);
lean_dec_ref(v___x_8151_);
v___x_8153_ = lean_string_append(v___x_8148_, v___x_8152_);
lean_dec_ref(v___x_8152_);
v___x_8154_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_8155_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_8156_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_8156_, 0, v___x_8153_);
lean_ctor_set(v___x_8156_, 1, v___x_8154_);
lean_ctor_set(v___x_8156_, 2, v___x_8155_);
lean_ctor_set_uint64(v___x_8156_, sizeof(void*)*3, v___y_8147_);
v___x_8157_ = l_Lake_BuildTrace_mix(v___x_8145_, v___x_8156_);
v___x_8158_ = l_Lake_platformTrace;
v___x_8159_ = l_Lake_BuildTrace_mix(v___x_8157_, v___x_8158_);
if (v_isShared_8141_ == 0)
{
lean_ctor_set(v___x_8140_, 1, v___x_8159_);
v___x_8161_ = v___x_8140_;
goto v_reusejp_8160_;
}
else
{
lean_object* v_reuseFailAlloc_8185_; 
v_reuseFailAlloc_8185_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8185_, 0, v_log_8134_);
lean_ctor_set(v_reuseFailAlloc_8185_, 1, v___x_8159_);
lean_ctor_set(v_reuseFailAlloc_8185_, 2, v_buildTime_8138_);
lean_ctor_set_uint8(v_reuseFailAlloc_8185_, sizeof(void*)*3, v_action_8135_);
lean_ctor_set_uint8(v_reuseFailAlloc_8185_, sizeof(void*)*3 + 1, v_wantsRebuild_8136_);
v___x_8161_ = v_reuseFailAlloc_8185_;
goto v_reusejp_8160_;
}
v_reusejp_8160_:
{
uint8_t v___x_8162_; lean_object* v___x_8163_; uint8_t v___x_8164_; lean_object* v___x_8165_; 
v___x_8162_ = 0;
v___x_8163_ = l_System_FilePath_exeExtension;
v___x_8164_ = 1;
v___x_8165_ = l_Lake_buildArtifactUnlessUpToDate(v_exeFile_8125_, v___f_8144_, v___x_8162_, v___x_8163_, v___x_8164_, v___x_8164_, v___x_8162_, v___y_8127_, v___y_8128_, v___y_8129_, v___y_8130_, v___y_8131_, v___x_8161_);
if (lean_obj_tag(v___x_8165_) == 0)
{
lean_object* v_a_8166_; lean_object* v_a_8167_; lean_object* v___x_8169_; uint8_t v_isShared_8170_; uint8_t v_isSharedCheck_8175_; 
v_a_8166_ = lean_ctor_get(v___x_8165_, 0);
v_a_8167_ = lean_ctor_get(v___x_8165_, 1);
v_isSharedCheck_8175_ = !lean_is_exclusive(v___x_8165_);
if (v_isSharedCheck_8175_ == 0)
{
v___x_8169_ = v___x_8165_;
v_isShared_8170_ = v_isSharedCheck_8175_;
goto v_resetjp_8168_;
}
else
{
lean_inc(v_a_8167_);
lean_inc(v_a_8166_);
lean_dec(v___x_8165_);
v___x_8169_ = lean_box(0);
v_isShared_8170_ = v_isSharedCheck_8175_;
goto v_resetjp_8168_;
}
v_resetjp_8168_:
{
lean_object* v_path_8171_; lean_object* v___x_8173_; 
v_path_8171_ = lean_ctor_get(v_a_8166_, 1);
lean_inc_ref(v_path_8171_);
lean_dec(v_a_8166_);
if (v_isShared_8170_ == 0)
{
lean_ctor_set(v___x_8169_, 0, v_path_8171_);
v___x_8173_ = v___x_8169_;
goto v_reusejp_8172_;
}
else
{
lean_object* v_reuseFailAlloc_8174_; 
v_reuseFailAlloc_8174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8174_, 0, v_path_8171_);
lean_ctor_set(v_reuseFailAlloc_8174_, 1, v_a_8167_);
v___x_8173_ = v_reuseFailAlloc_8174_;
goto v_reusejp_8172_;
}
v_reusejp_8172_:
{
return v___x_8173_;
}
}
}
else
{
lean_object* v_a_8176_; lean_object* v_a_8177_; lean_object* v___x_8179_; uint8_t v_isShared_8180_; uint8_t v_isSharedCheck_8184_; 
v_a_8176_ = lean_ctor_get(v___x_8165_, 0);
v_a_8177_ = lean_ctor_get(v___x_8165_, 1);
v_isSharedCheck_8184_ = !lean_is_exclusive(v___x_8165_);
if (v_isSharedCheck_8184_ == 0)
{
v___x_8179_ = v___x_8165_;
v_isShared_8180_ = v_isSharedCheck_8184_;
goto v_resetjp_8178_;
}
else
{
lean_inc(v_a_8177_);
lean_inc(v_a_8176_);
lean_dec(v___x_8165_);
v___x_8179_ = lean_box(0);
v_isShared_8180_ = v_isSharedCheck_8184_;
goto v_resetjp_8178_;
}
v_resetjp_8178_:
{
lean_object* v___x_8182_; 
if (v_isShared_8180_ == 0)
{
v___x_8182_ = v___x_8179_;
goto v_reusejp_8181_;
}
else
{
lean_object* v_reuseFailAlloc_8183_; 
v_reuseFailAlloc_8183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8183_, 0, v_a_8176_);
lean_ctor_set(v_reuseFailAlloc_8183_, 1, v_a_8177_);
v___x_8182_ = v_reuseFailAlloc_8183_;
goto v_reusejp_8181_;
}
v_reusejp_8181_:
{
return v___x_8182_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1___boxed(lean_object* v_objs_8198_, lean_object* v_weakArgs_8199_, lean_object* v_traceArgs_8200_, lean_object* v_sharedLean_8201_, lean_object* v_exeFile_8202_, lean_object* v_libs_8203_, lean_object* v___y_8204_, lean_object* v___y_8205_, lean_object* v___y_8206_, lean_object* v___y_8207_, lean_object* v___y_8208_, lean_object* v___y_8209_, lean_object* v___y_8210_){
_start:
{
uint8_t v_sharedLean_boxed_8211_; lean_object* v_res_8212_; 
v_sharedLean_boxed_8211_ = lean_unbox(v_sharedLean_8201_);
v_res_8212_ = l_Lake_buildLeanExe___lam__1(v_objs_8198_, v_weakArgs_8199_, v_traceArgs_8200_, v_sharedLean_boxed_8211_, v_exeFile_8202_, v_libs_8203_, v___y_8204_, v___y_8205_, v___y_8206_, v___y_8207_, v___y_8208_, v___y_8209_);
return v_res_8212_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__2(lean_object* v_weakArgs_8213_, lean_object* v_traceArgs_8214_, uint8_t v_sharedLean_8215_, lean_object* v_exeFile_8216_, lean_object* v_linkLibs_8217_, lean_object* v___x_8218_, lean_object* v_objs_8219_, lean_object* v___y_8220_, lean_object* v___y_8221_, lean_object* v___y_8222_, lean_object* v___y_8223_, lean_object* v___y_8224_, lean_object* v___y_8225_){
_start:
{
lean_object* v_trace_8227_; lean_object* v___x_8228_; lean_object* v___f_8229_; lean_object* v___x_8230_; lean_object* v___x_8231_; lean_object* v___x_8232_; uint8_t v___x_8233_; lean_object* v___x_8234_; lean_object* v___x_8235_; 
v_trace_8227_ = lean_ctor_get(v___y_8225_, 1);
v___x_8228_ = lean_box(v_sharedLean_8215_);
v___f_8229_ = lean_alloc_closure((void*)(l_Lake_buildLeanExe___lam__1___boxed), 13, 5);
lean_closure_set(v___f_8229_, 0, v_objs_8219_);
lean_closure_set(v___f_8229_, 1, v_weakArgs_8213_);
lean_closure_set(v___f_8229_, 2, v_traceArgs_8214_);
lean_closure_set(v___f_8229_, 3, v___x_8228_);
lean_closure_set(v___f_8229_, 4, v_exeFile_8216_);
v___x_8230_ = ((lean_object*)(l_Lake_buildSharedLib___lam__3___closed__0));
v___x_8231_ = l_Lake_Job_collectArray___redArg(v_linkLibs_8217_, v___x_8230_);
v___x_8232_ = lean_unsigned_to_nat(0u);
v___x_8233_ = 0;
lean_inc_ref(v_trace_8227_);
v___x_8234_ = l_Lake_Job_mapM___redArg(v___x_8218_, v___x_8231_, v___f_8229_, v___x_8232_, v___x_8233_, v___y_8220_, v___y_8221_, v___y_8222_, v___y_8223_, v___y_8224_, v_trace_8227_);
v___x_8235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8235_, 0, v___x_8234_);
lean_ctor_set(v___x_8235_, 1, v___y_8225_);
return v___x_8235_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__2___boxed(lean_object* v_weakArgs_8236_, lean_object* v_traceArgs_8237_, lean_object* v_sharedLean_8238_, lean_object* v_exeFile_8239_, lean_object* v_linkLibs_8240_, lean_object* v___x_8241_, lean_object* v_objs_8242_, lean_object* v___y_8243_, lean_object* v___y_8244_, lean_object* v___y_8245_, lean_object* v___y_8246_, lean_object* v___y_8247_, lean_object* v___y_8248_, lean_object* v___y_8249_){
_start:
{
uint8_t v_sharedLean_boxed_8250_; lean_object* v_res_8251_; 
v_sharedLean_boxed_8250_ = lean_unbox(v_sharedLean_8238_);
v_res_8251_ = l_Lake_buildLeanExe___lam__2(v_weakArgs_8236_, v_traceArgs_8237_, v_sharedLean_boxed_8250_, v_exeFile_8239_, v_linkLibs_8240_, v___x_8241_, v_objs_8242_, v___y_8243_, v___y_8244_, v___y_8245_, v___y_8246_, v___y_8247_, v___y_8248_);
lean_dec_ref(v_linkLibs_8240_);
return v_res_8251_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe(lean_object* v_exeFile_8252_, lean_object* v_linkObjs_8253_, lean_object* v_linkLibs_8254_, lean_object* v_weakArgs_8255_, lean_object* v_traceArgs_8256_, uint8_t v_sharedLean_8257_, lean_object* v_a_8258_, lean_object* v_a_8259_, lean_object* v_a_8260_, lean_object* v_a_8261_, lean_object* v_a_8262_, lean_object* v_a_8263_){
_start:
{
lean_object* v___x_8265_; lean_object* v___x_8266_; lean_object* v___f_8267_; lean_object* v___x_8268_; lean_object* v___x_8269_; lean_object* v___x_8270_; uint8_t v___x_8271_; lean_object* v___x_8272_; 
v___x_8265_ = l_Lake_instDataKindFilePath;
v___x_8266_ = lean_box(v_sharedLean_8257_);
v___f_8267_ = lean_alloc_closure((void*)(l_Lake_buildLeanExe___lam__2___boxed), 14, 6);
lean_closure_set(v___f_8267_, 0, v_weakArgs_8255_);
lean_closure_set(v___f_8267_, 1, v_traceArgs_8256_);
lean_closure_set(v___f_8267_, 2, v___x_8266_);
lean_closure_set(v___f_8267_, 3, v_exeFile_8252_);
lean_closure_set(v___f_8267_, 4, v_linkLibs_8254_);
lean_closure_set(v___f_8267_, 5, v___x_8265_);
v___x_8268_ = ((lean_object*)(l_Lake_buildSharedLib___closed__0));
v___x_8269_ = l_Lake_Job_collectArray___redArg(v_linkObjs_8253_, v___x_8268_);
v___x_8270_ = lean_unsigned_to_nat(0u);
v___x_8271_ = 1;
v___x_8272_ = l_Lake_Job_bindM___redArg(v___x_8265_, v___x_8269_, v___f_8267_, v___x_8270_, v___x_8271_, v_a_8258_, v_a_8259_, v_a_8260_, v_a_8261_, v_a_8262_, v_a_8263_);
return v___x_8272_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___boxed(lean_object* v_exeFile_8273_, lean_object* v_linkObjs_8274_, lean_object* v_linkLibs_8275_, lean_object* v_weakArgs_8276_, lean_object* v_traceArgs_8277_, lean_object* v_sharedLean_8278_, lean_object* v_a_8279_, lean_object* v_a_8280_, lean_object* v_a_8281_, lean_object* v_a_8282_, lean_object* v_a_8283_, lean_object* v_a_8284_, lean_object* v_a_8285_){
_start:
{
uint8_t v_sharedLean_boxed_8286_; lean_object* v_res_8287_; 
v_sharedLean_boxed_8286_ = lean_unbox(v_sharedLean_8278_);
v_res_8287_ = l_Lake_buildLeanExe(v_exeFile_8273_, v_linkObjs_8274_, v_linkLibs_8275_, v_weakArgs_8276_, v_traceArgs_8277_, v_sharedLean_boxed_8286_, v_a_8279_, v_a_8280_, v_a_8281_, v_a_8282_, v_a_8283_, v_a_8284_);
lean_dec_ref(v_linkObjs_8274_);
return v_res_8287_;
}
}
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Actions(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Common(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instMonadWorkspaceJobM = _init_l_Lake_instMonadWorkspaceJobM();
lean_mark_persistent(l_Lake_instMonadWorkspaceJobM);
l_Lake_platformTrace = _init_l_Lake_platformTrace();
lean_mark_persistent(l_Lake_platformTrace);
l_Lake_buildO___lam__2___boxed__const__1 = _init_l_Lake_buildO___lam__2___boxed__const__1();
lean_mark_persistent(l_Lake_buildO___lam__2___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Common(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Lake_Build_Actions(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Common(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Common(builtin);
}
#ifdef __cplusplus
}
#endif
