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
extern lean_object* l_instMonadBaseIO;
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
lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_ReaderT_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(lean_object*, lean_object*);
lean_object* l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___aux__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
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
lean_object* l_Lake_writeBinFileIfNew(lean_object*, lean_object*);
lean_object* l_String_crlfToLf(lean_object*);
lean_object* l_Lake_writeFileIfNew(lean_object*, lean_object*);
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
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__0 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__0_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__1 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__1_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__2 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__2_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__3 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__3_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__4 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__4_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__5 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__5_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__6 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__6_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__0_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__1_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__7 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__7_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__7_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__2_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__3_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__4_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__5_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__8 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__8_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__8_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__6_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__9 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__9_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instFunctorOfMonad___redArg___lam__0, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__7_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__10 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__10_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instFunctorOfMonad___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__7_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__11 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__11_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__10_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__11_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__12 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__12_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_read___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__9_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__13 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__13_value;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__14;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__15;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___aux__5___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__16 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__16_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instPure___redArg___lam__0, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__16_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__17 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__17_value;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__18;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__19;
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
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__14(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__12));
v___x_30_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__13));
v___x_31_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__15(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = l_instMonadBaseIO;
v___x_33_ = l_Lake_instAlternativeELogTOfMonad___redArg(v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__18(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__12));
v___x_38_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__14, &l_Lake_instMonadWorkspaceJobM___closed__14_once, _init_l_Lake_instMonadWorkspaceJobM___closed__14);
v___x_39_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_38_, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__19(void){
_start:
{
lean_object* v___x_40_; lean_object* v___f_41_; lean_object* v___x_42_; 
v___x_40_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__18, &l_Lake_instMonadWorkspaceJobM___closed__18_once, _init_l_Lake_instMonadWorkspaceJobM___closed__18);
v___f_41_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__17));
v___x_42_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0), 4, 3);
lean_closure_set(v___x_42_, 0, v___f_41_);
lean_closure_set(v___x_42_, 1, lean_box(0));
lean_closure_set(v___x_42_, 2, v___x_40_);
return v___x_42_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM(void){
_start:
{
lean_object* v___x_43_; lean_object* v_toApplicative_44_; lean_object* v_toBind_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_122_; 
v___x_43_ = l_instMonadBaseIO;
v_toApplicative_44_ = lean_ctor_get(v___x_43_, 0);
v_toBind_45_ = lean_ctor_get(v___x_43_, 1);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_122_ == 0)
{
v___x_47_ = v___x_43_;
v_isShared_48_ = v_isSharedCheck_122_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_toBind_45_);
lean_inc(v_toApplicative_44_);
lean_dec(v___x_43_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_122_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v_toFunctor_49_; lean_object* v_toPure_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_118_; 
v_toFunctor_49_ = lean_ctor_get(v_toApplicative_44_, 0);
v_toPure_50_ = lean_ctor_get(v_toApplicative_44_, 1);
v_isSharedCheck_118_ = !lean_is_exclusive(v_toApplicative_44_);
if (v_isSharedCheck_118_ == 0)
{
lean_object* v_unused_119_; lean_object* v_unused_120_; lean_object* v_unused_121_; 
v_unused_119_ = lean_ctor_get(v_toApplicative_44_, 4);
lean_dec(v_unused_119_);
v_unused_120_ = lean_ctor_get(v_toApplicative_44_, 3);
lean_dec(v_unused_120_);
v_unused_121_ = lean_ctor_get(v_toApplicative_44_, 2);
lean_dec(v_unused_121_);
v___x_52_ = v_toApplicative_44_;
v_isShared_53_ = v_isSharedCheck_118_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_toPure_50_);
lean_inc(v_toFunctor_49_);
lean_dec(v_toApplicative_44_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_118_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___f_54_; lean_object* v___f_55_; lean_object* v___f_56_; lean_object* v___f_57_; lean_object* v___x_58_; lean_object* v___f_59_; lean_object* v___x_61_; 
lean_inc(v_toBind_45_);
lean_inc(v_toPure_50_);
v___f_54_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_54_, 0, v_toPure_50_);
lean_closure_set(v___f_54_, 1, v_toBind_45_);
lean_inc(v_toBind_45_);
lean_inc(v_toPure_50_);
v___f_55_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_55_, 0, v_toPure_50_);
lean_closure_set(v___f_55_, 1, v_toBind_45_);
lean_inc_ref(v___f_54_);
lean_inc(v_toPure_50_);
v___f_56_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_56_, 0, v_toPure_50_);
lean_closure_set(v___f_56_, 1, v___f_54_);
lean_inc(v_toPure_50_);
lean_inc_ref(v_toFunctor_49_);
v___f_57_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_57_, 0, v_toFunctor_49_);
lean_closure_set(v___f_57_, 1, v_toPure_50_);
lean_closure_set(v___f_57_, 2, v_toBind_45_);
v___x_58_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_49_);
v___f_59_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_59_, 0, v_toPure_50_);
lean_inc_ref(v___x_58_);
if (v_isShared_53_ == 0)
{
lean_ctor_set(v___x_52_, 4, v___f_55_);
lean_ctor_set(v___x_52_, 3, v___f_56_);
lean_ctor_set(v___x_52_, 2, v___f_57_);
lean_ctor_set(v___x_52_, 1, v___f_59_);
lean_ctor_set(v___x_52_, 0, v___x_58_);
v___x_61_ = v___x_52_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_58_);
lean_ctor_set(v_reuseFailAlloc_117_, 1, v___f_59_);
lean_ctor_set(v_reuseFailAlloc_117_, 2, v___f_57_);
lean_ctor_set(v_reuseFailAlloc_117_, 3, v___f_56_);
lean_ctor_set(v_reuseFailAlloc_117_, 4, v___f_55_);
v___x_61_ = v_reuseFailAlloc_117_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
lean_object* v___x_63_; 
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 1, v___f_54_);
lean_ctor_set(v___x_47_, 0, v___x_61_);
v___x_63_ = v___x_47_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v___x_61_);
lean_ctor_set(v_reuseFailAlloc_116_, 1, v___f_54_);
v___x_63_ = v_reuseFailAlloc_116_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
lean_object* v___f_64_; lean_object* v___f_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v_toApplicative_71_; lean_object* v_toFunctor_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v_toApplicative_76_; lean_object* v_toFunctor_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___f_81_; lean_object* v___f_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v_toApplicative_85_; lean_object* v_toFunctor_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___f_92_; lean_object* v___f_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v_toApplicative_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_114_; 
lean_inc_ref(v___x_58_);
v___f_64_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_64_, 0, v___x_58_);
v___f_65_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_65_, 0, v___x_58_);
v___x_66_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_66_, 0, v___f_64_);
lean_ctor_set(v___x_66_, 1, v___f_65_);
v___x_67_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__15, &l_Lake_instMonadWorkspaceJobM___closed__15_once, _init_l_Lake_instMonadWorkspaceJobM___closed__15);
lean_inc_ref(v___x_63_);
v___x_68_ = l_ReaderT_instAlternativeOfMonad___redArg(v___x_67_, v___x_63_);
v___x_69_ = l_ReaderT_instMonad___redArg(v___x_63_);
lean_inc_ref(v___x_69_);
v___x_70_ = l_StateRefT_x27_instAlternativeOfMonad___redArg(v___x_68_, v___x_69_);
v_toApplicative_71_ = lean_ctor_get(v___x_70_, 0);
lean_inc_ref(v_toApplicative_71_);
lean_dec_ref(v___x_70_);
v_toFunctor_72_ = lean_ctor_get(v_toApplicative_71_, 0);
lean_inc_ref(v_toFunctor_72_);
lean_dec_ref(v_toApplicative_71_);
v___x_73_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__19, &l_Lake_instMonadWorkspaceJobM___closed__19_once, _init_l_Lake_instMonadWorkspaceJobM___closed__19);
lean_inc_ref(v___x_66_);
v___x_74_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_73_, v___x_66_);
v___x_75_ = l_StateRefT_x27_instMonad___redArg(v___x_69_);
v_toApplicative_76_ = lean_ctor_get(v___x_75_, 0);
lean_inc_ref(v_toApplicative_76_);
v_toFunctor_77_ = lean_ctor_get(v_toApplicative_76_, 0);
lean_inc_ref(v_toFunctor_77_);
lean_dec_ref(v_toApplicative_76_);
v___x_78_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_74_, v___x_66_);
v___x_79_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_79_, 0, lean_box(0));
lean_closure_set(v___x_79_, 1, lean_box(0));
lean_closure_set(v___x_79_, 2, lean_box(0));
lean_closure_set(v___x_79_, 3, lean_box(0));
lean_closure_set(v___x_79_, 4, v___x_78_);
lean_inc_ref(v_toFunctor_72_);
v___x_80_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_79_, v_toFunctor_72_);
lean_inc_ref(v_toFunctor_77_);
v___f_81_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_81_, 0, v_toFunctor_77_);
v___f_82_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_82_, 0, v_toFunctor_77_);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v___f_81_);
lean_ctor_set(v___x_83_, 1, v___f_82_);
v___x_84_ = l_ReaderT_instMonad___redArg(v___x_75_);
v_toApplicative_85_ = lean_ctor_get(v___x_84_, 0);
lean_inc_ref(v_toApplicative_85_);
v_toFunctor_86_ = lean_ctor_get(v_toApplicative_85_, 0);
lean_inc_ref(v_toFunctor_86_);
lean_dec_ref(v_toApplicative_85_);
v___x_87_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_80_, v_toFunctor_72_);
v___x_88_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 2);
lean_closure_set(v___x_88_, 0, lean_box(0));
lean_closure_set(v___x_88_, 1, v___x_87_);
lean_inc_ref(v___x_83_);
v___x_89_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_88_, v___x_83_);
v___x_90_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_89_, v___x_83_);
v___x_91_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 2);
lean_closure_set(v___x_91_, 0, lean_box(0));
lean_closure_set(v___x_91_, 1, v___x_90_);
lean_inc_ref(v_toFunctor_86_);
v___f_92_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_92_, 0, v_toFunctor_86_);
v___f_93_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_93_, 0, v_toFunctor_86_);
v___x_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_94_, 0, v___f_92_);
lean_ctor_set(v___x_94_, 1, v___f_93_);
lean_inc_ref(v___x_94_);
v___x_95_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_91_, v___x_94_);
lean_inc_ref(v___x_94_);
v___x_96_ = l_Lake_EquipT_instFunctor___redArg(v___x_94_);
v_toApplicative_97_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_114_ == 0)
{
lean_object* v_unused_115_; 
v_unused_115_ = lean_ctor_get(v___x_84_, 1);
lean_dec(v_unused_115_);
v___x_99_ = v___x_84_;
v_isShared_100_ = v_isSharedCheck_114_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_toApplicative_97_);
lean_dec(v___x_84_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_114_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v_toFunctor_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___f_107_; lean_object* v___f_108_; lean_object* v___x_110_; 
v_toFunctor_101_ = lean_ctor_get(v_toApplicative_97_, 0);
lean_inc_ref(v_toFunctor_101_);
lean_dec_ref(v_toApplicative_97_);
v___x_102_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_95_, v___x_94_);
v___x_103_ = lean_alloc_closure((void*)(l_Lake_EquipT_lift___boxed), 5, 4);
lean_closure_set(v___x_103_, 0, lean_box(0));
lean_closure_set(v___x_103_, 1, lean_box(0));
lean_closure_set(v___x_103_, 2, lean_box(0));
lean_closure_set(v___x_103_, 3, v___x_102_);
lean_inc_ref(v___x_96_);
v___x_104_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_103_, v___x_96_);
v___x_105_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_104_, v___x_96_);
v___x_106_ = lean_alloc_closure((void*)(l_Lake_JobM_runFetchM___boxed), 9, 2);
lean_closure_set(v___x_106_, 0, lean_box(0));
lean_closure_set(v___x_106_, 1, v___x_105_);
lean_inc_ref(v_toFunctor_101_);
v___f_107_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_107_, 0, v_toFunctor_101_);
v___f_108_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_108_, 0, v_toFunctor_101_);
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 1, v___f_108_);
lean_ctor_set(v___x_99_, 0, v___f_107_);
v___x_110_ = v___x_99_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v___f_107_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v___f_108_);
v___x_110_ = v_reuseFailAlloc_113_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = l_Lake_EquipT_instFunctor___redArg(v___x_110_);
v___x_112_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_106_, v___x_111_);
return v___x_112_;
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
lean_object* v___x_123_; uint64_t v___x_124_; 
v___x_123_ = l_System_Platform_target;
v___x_124_ = lean_string_hash(v___x_123_);
return v___x_124_;
}
}
static uint64_t _init_l_Lake_platformTrace___closed__1(void){
_start:
{
uint64_t v___x_125_; uint64_t v___x_126_; uint64_t v___x_127_; 
v___x_125_ = lean_uint64_once(&l_Lake_platformTrace___closed__0, &l_Lake_platformTrace___closed__0_once, _init_l_Lake_platformTrace___closed__0);
v___x_126_ = l_Lake_Hash_nil;
v___x_127_ = lean_uint64_mix_hash(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__3(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_unsigned_to_nat(0u);
v___x_131_ = lean_nat_to_int(v___x_130_);
return v___x_131_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__4(void){
_start:
{
uint32_t v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_132_ = 0;
v___x_133_ = lean_obj_once(&l_Lake_platformTrace___closed__3, &l_Lake_platformTrace___closed__3_once, _init_l_Lake_platformTrace___closed__3);
v___x_134_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set_uint32(v___x_134_, sizeof(void*)*1, v___x_132_);
return v___x_134_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__5(void){
_start:
{
lean_object* v___x_135_; uint64_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_135_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_136_ = lean_uint64_once(&l_Lake_platformTrace___closed__1, &l_Lake_platformTrace___closed__1_once, _init_l_Lake_platformTrace___closed__1);
v___x_137_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_138_ = l_System_Platform_target;
v___x_139_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_139_, 0, v___x_138_);
lean_ctor_set(v___x_139_, 1, v___x_137_);
lean_ctor_set(v___x_139_, 2, v___x_135_);
lean_ctor_set_uint64(v___x_139_, sizeof(void*)*3, v___x_136_);
return v___x_139_;
}
}
static lean_object* _init_l_Lake_platformTrace(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lean_obj_once(&l_Lake_platformTrace___closed__5, &l_Lake_platformTrace___closed__5_once, _init_l_Lake_platformTrace___closed__5);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg(lean_object* v_a_141_){
_start:
{
lean_object* v_log_143_; uint8_t v_action_144_; uint8_t v_wantsRebuild_145_; lean_object* v_trace_146_; lean_object* v_buildTime_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_158_; 
v_log_143_ = lean_ctor_get(v_a_141_, 0);
v_action_144_ = lean_ctor_get_uint8(v_a_141_, sizeof(void*)*3);
v_wantsRebuild_145_ = lean_ctor_get_uint8(v_a_141_, sizeof(void*)*3 + 1);
v_trace_146_ = lean_ctor_get(v_a_141_, 1);
v_buildTime_147_ = lean_ctor_get(v_a_141_, 2);
v_isSharedCheck_158_ = !lean_is_exclusive(v_a_141_);
if (v_isSharedCheck_158_ == 0)
{
v___x_149_ = v_a_141_;
v_isShared_150_ = v_isSharedCheck_158_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_buildTime_147_);
lean_inc(v_trace_146_);
lean_inc(v_log_143_);
lean_dec(v_a_141_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_158_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_155_; 
v___x_151_ = l_Lake_platformTrace;
v___x_152_ = lean_box(0);
v___x_153_ = l_Lake_BuildTrace_mix(v_trace_146_, v___x_151_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 1, v___x_153_);
v___x_155_ = v___x_149_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_log_143_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v___x_153_);
lean_ctor_set(v_reuseFailAlloc_157_, 2, v_buildTime_147_);
lean_ctor_set_uint8(v_reuseFailAlloc_157_, sizeof(void*)*3, v_action_144_);
lean_ctor_set_uint8(v_reuseFailAlloc_157_, sizeof(void*)*3 + 1, v_wantsRebuild_145_);
v___x_155_ = v_reuseFailAlloc_157_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
lean_object* v___x_156_; 
v___x_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_152_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
return v___x_156_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg___boxed(lean_object* v_a_159_, lean_object* v_a_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lake_addPlatformTrace___redArg(v_a_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace(lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_log_169_; uint8_t v_action_170_; uint8_t v_wantsRebuild_171_; lean_object* v_trace_172_; lean_object* v_buildTime_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_184_; 
v_log_169_ = lean_ctor_get(v_a_167_, 0);
v_action_170_ = lean_ctor_get_uint8(v_a_167_, sizeof(void*)*3);
v_wantsRebuild_171_ = lean_ctor_get_uint8(v_a_167_, sizeof(void*)*3 + 1);
v_trace_172_ = lean_ctor_get(v_a_167_, 1);
v_buildTime_173_ = lean_ctor_get(v_a_167_, 2);
v_isSharedCheck_184_ = !lean_is_exclusive(v_a_167_);
if (v_isSharedCheck_184_ == 0)
{
v___x_175_ = v_a_167_;
v_isShared_176_ = v_isSharedCheck_184_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_buildTime_173_);
lean_inc(v_trace_172_);
lean_inc(v_log_169_);
lean_dec(v_a_167_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_184_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_177_ = l_Lake_platformTrace;
v___x_178_ = lean_box(0);
v___x_179_ = l_Lake_BuildTrace_mix(v_trace_172_, v___x_177_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 1, v___x_179_);
v___x_181_ = v___x_175_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_log_169_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v___x_179_);
lean_ctor_set(v_reuseFailAlloc_183_, 2, v_buildTime_173_);
lean_ctor_set_uint8(v_reuseFailAlloc_183_, sizeof(void*)*3, v_action_170_);
lean_ctor_set_uint8(v_reuseFailAlloc_183_, sizeof(void*)*3 + 1, v_wantsRebuild_171_);
v___x_181_ = v_reuseFailAlloc_183_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
lean_object* v___x_182_; 
v___x_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_178_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
return v___x_182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___boxed(lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lake_addPlatformTrace(v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_);
lean_dec_ref(v_a_189_);
lean_dec(v_a_188_);
lean_dec(v_a_187_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg(lean_object* v_a_193_, lean_object* v_a_194_){
_start:
{
lean_object* v_log_196_; uint8_t v_action_197_; uint8_t v_wantsRebuild_198_; lean_object* v_trace_199_; lean_object* v_buildTime_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_211_; 
v_log_196_ = lean_ctor_get(v_a_194_, 0);
v_action_197_ = lean_ctor_get_uint8(v_a_194_, sizeof(void*)*3);
v_wantsRebuild_198_ = lean_ctor_get_uint8(v_a_194_, sizeof(void*)*3 + 1);
v_trace_199_ = lean_ctor_get(v_a_194_, 1);
v_buildTime_200_ = lean_ctor_get(v_a_194_, 2);
v_isSharedCheck_211_ = !lean_is_exclusive(v_a_194_);
if (v_isSharedCheck_211_ == 0)
{
v___x_202_ = v_a_194_;
v_isShared_203_ = v_isSharedCheck_211_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_buildTime_200_);
lean_inc(v_trace_199_);
lean_inc(v_log_196_);
lean_dec(v_a_194_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_211_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v_leanTrace_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_208_; 
v_leanTrace_204_ = lean_ctor_get(v_a_193_, 2);
v___x_205_ = lean_box(0);
lean_inc_ref(v_leanTrace_204_);
v___x_206_ = l_Lake_BuildTrace_mix(v_trace_199_, v_leanTrace_204_);
if (v_isShared_203_ == 0)
{
lean_ctor_set(v___x_202_, 1, v___x_206_);
v___x_208_ = v___x_202_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_log_196_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v___x_206_);
lean_ctor_set(v_reuseFailAlloc_210_, 2, v_buildTime_200_);
lean_ctor_set_uint8(v_reuseFailAlloc_210_, sizeof(void*)*3, v_action_197_);
lean_ctor_set_uint8(v_reuseFailAlloc_210_, sizeof(void*)*3 + 1, v_wantsRebuild_198_);
v___x_208_ = v_reuseFailAlloc_210_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
lean_object* v___x_209_; 
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_205_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
return v___x_209_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg___boxed(lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lake_addLeanTrace___redArg(v_a_212_, v_a_213_);
lean_dec_ref(v_a_212_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace(lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_){
_start:
{
lean_object* v_log_223_; uint8_t v_action_224_; uint8_t v_wantsRebuild_225_; lean_object* v_trace_226_; lean_object* v_buildTime_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_238_; 
v_log_223_ = lean_ctor_get(v_a_221_, 0);
v_action_224_ = lean_ctor_get_uint8(v_a_221_, sizeof(void*)*3);
v_wantsRebuild_225_ = lean_ctor_get_uint8(v_a_221_, sizeof(void*)*3 + 1);
v_trace_226_ = lean_ctor_get(v_a_221_, 1);
v_buildTime_227_ = lean_ctor_get(v_a_221_, 2);
v_isSharedCheck_238_ = !lean_is_exclusive(v_a_221_);
if (v_isSharedCheck_238_ == 0)
{
v___x_229_ = v_a_221_;
v_isShared_230_ = v_isSharedCheck_238_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_buildTime_227_);
lean_inc(v_trace_226_);
lean_inc(v_log_223_);
lean_dec(v_a_221_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_238_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v_leanTrace_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_235_; 
v_leanTrace_231_ = lean_ctor_get(v_a_220_, 2);
v___x_232_ = lean_box(0);
lean_inc_ref(v_leanTrace_231_);
v___x_233_ = l_Lake_BuildTrace_mix(v_trace_226_, v_leanTrace_231_);
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 1, v___x_233_);
v___x_235_ = v___x_229_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_log_223_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v___x_233_);
lean_ctor_set(v_reuseFailAlloc_237_, 2, v_buildTime_227_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, sizeof(void*)*3, v_action_224_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, sizeof(void*)*3 + 1, v_wantsRebuild_225_);
v___x_235_ = v_reuseFailAlloc_237_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
lean_object* v___x_236_; 
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_232_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
return v___x_236_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___boxed(lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lake_addLeanTrace(v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_a_242_);
lean_dec(v_a_241_);
lean_dec(v_a_240_);
lean_dec_ref(v_a_239_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg(lean_object* v_inst_248_, lean_object* v_inst_249_, lean_object* v_a_250_, lean_object* v_caption_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_log_254_; uint8_t v_action_255_; uint8_t v_wantsRebuild_256_; lean_object* v_trace_257_; lean_object* v_buildTime_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_277_; 
v_log_254_ = lean_ctor_get(v_a_252_, 0);
v_action_255_ = lean_ctor_get_uint8(v_a_252_, sizeof(void*)*3);
v_wantsRebuild_256_ = lean_ctor_get_uint8(v_a_252_, sizeof(void*)*3 + 1);
v_trace_257_ = lean_ctor_get(v_a_252_, 1);
v_buildTime_258_ = lean_ctor_get(v_a_252_, 2);
v_isSharedCheck_277_ = !lean_is_exclusive(v_a_252_);
if (v_isSharedCheck_277_ == 0)
{
v___x_260_ = v_a_252_;
v_isShared_261_ = v_isSharedCheck_277_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_buildTime_258_);
lean_inc(v_trace_257_);
lean_inc(v_log_254_);
lean_dec(v_a_252_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_277_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; uint64_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
lean_inc(v_a_250_);
v___x_262_ = lean_apply_1(v_inst_249_, v_a_250_);
v___x_263_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_264_ = ((lean_object*)(l_Lake_addPureTrace___redArg___closed__0));
v___x_265_ = lean_string_append(v_caption_251_, v___x_264_);
v___x_266_ = lean_apply_1(v_inst_248_, v_a_250_);
v___x_267_ = lean_string_append(v___x_265_, v___x_266_);
lean_dec_ref(v___x_266_);
v___x_268_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_269_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_269_, 0, v___x_267_);
lean_ctor_set(v___x_269_, 1, v___x_263_);
lean_ctor_set(v___x_269_, 2, v___x_268_);
v___x_270_ = lean_unbox_uint64(v___x_262_);
lean_dec_ref(v___x_262_);
lean_ctor_set_uint64(v___x_269_, sizeof(void*)*3, v___x_270_);
v___x_271_ = lean_box(0);
v___x_272_ = l_Lake_BuildTrace_mix(v_trace_257_, v___x_269_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 1, v___x_272_);
v___x_274_ = v___x_260_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v_log_254_);
lean_ctor_set(v_reuseFailAlloc_276_, 1, v___x_272_);
lean_ctor_set(v_reuseFailAlloc_276_, 2, v_buildTime_258_);
lean_ctor_set_uint8(v_reuseFailAlloc_276_, sizeof(void*)*3, v_action_255_);
lean_ctor_set_uint8(v_reuseFailAlloc_276_, sizeof(void*)*3 + 1, v_wantsRebuild_256_);
v___x_274_ = v_reuseFailAlloc_276_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_275_; 
v___x_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_271_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
return v___x_275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg___boxed(lean_object* v_inst_278_, lean_object* v_inst_279_, lean_object* v_a_280_, lean_object* v_caption_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lake_addPureTrace___redArg(v_inst_278_, v_inst_279_, v_a_280_, v_caption_281_, v_a_282_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace(lean_object* v_00_u03b1_285_, lean_object* v_inst_286_, lean_object* v_inst_287_, lean_object* v_a_288_, lean_object* v_caption_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_){
_start:
{
lean_object* v_log_297_; uint8_t v_action_298_; uint8_t v_wantsRebuild_299_; lean_object* v_trace_300_; lean_object* v_buildTime_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_320_; 
v_log_297_ = lean_ctor_get(v_a_295_, 0);
v_action_298_ = lean_ctor_get_uint8(v_a_295_, sizeof(void*)*3);
v_wantsRebuild_299_ = lean_ctor_get_uint8(v_a_295_, sizeof(void*)*3 + 1);
v_trace_300_ = lean_ctor_get(v_a_295_, 1);
v_buildTime_301_ = lean_ctor_get(v_a_295_, 2);
v_isSharedCheck_320_ = !lean_is_exclusive(v_a_295_);
if (v_isSharedCheck_320_ == 0)
{
v___x_303_ = v_a_295_;
v_isShared_304_ = v_isSharedCheck_320_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_buildTime_301_);
lean_inc(v_trace_300_);
lean_inc(v_log_297_);
lean_dec(v_a_295_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_320_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; uint64_t v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_317_; 
lean_inc(v_a_288_);
v___x_305_ = lean_apply_1(v_inst_287_, v_a_288_);
v___x_306_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_307_ = ((lean_object*)(l_Lake_addPureTrace___redArg___closed__0));
v___x_308_ = lean_string_append(v_caption_289_, v___x_307_);
v___x_309_ = lean_apply_1(v_inst_286_, v_a_288_);
v___x_310_ = lean_string_append(v___x_308_, v___x_309_);
lean_dec_ref(v___x_309_);
v___x_311_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_312_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_312_, 0, v___x_310_);
lean_ctor_set(v___x_312_, 1, v___x_306_);
lean_ctor_set(v___x_312_, 2, v___x_311_);
v___x_313_ = lean_unbox_uint64(v___x_305_);
lean_dec_ref(v___x_305_);
lean_ctor_set_uint64(v___x_312_, sizeof(void*)*3, v___x_313_);
v___x_314_ = lean_box(0);
v___x_315_ = l_Lake_BuildTrace_mix(v_trace_300_, v___x_312_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 1, v___x_315_);
v___x_317_ = v___x_303_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_log_297_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v___x_315_);
lean_ctor_set(v_reuseFailAlloc_319_, 2, v_buildTime_301_);
lean_ctor_set_uint8(v_reuseFailAlloc_319_, sizeof(void*)*3, v_action_298_);
lean_ctor_set_uint8(v_reuseFailAlloc_319_, sizeof(void*)*3 + 1, v_wantsRebuild_299_);
v___x_317_ = v_reuseFailAlloc_319_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_318_; 
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_314_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
return v___x_318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___boxed(lean_object* v_00_u03b1_321_, lean_object* v_inst_322_, lean_object* v_inst_323_, lean_object* v_a_324_, lean_object* v_caption_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lake_addPureTrace(v_00_u03b1_321_, v_inst_322_, v_inst_323_, v_a_324_, v_caption_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_);
lean_dec_ref(v_a_330_);
lean_dec(v_a_329_);
lean_dec(v_a_328_);
lean_dec(v_a_327_);
lean_dec_ref(v_a_326_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(lean_object* v_x_336_){
_start:
{
if (lean_obj_tag(v_x_336_) == 0)
{
lean_object* v___x_337_; 
v___x_337_ = lean_box(0);
return v___x_337_;
}
else
{
lean_object* v_val_338_; 
v_val_338_ = lean_ctor_get(v_x_336_, 0);
lean_inc(v_val_338_);
return v_val_338_;
}
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1___boxed(lean_object* v_x_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(v_x_339_);
lean_dec(v_x_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Prod_toJson___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__0(lean_object* v_x_341_){
_start:
{
lean_object* v_fst_342_; lean_object* v_snd_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v_fst_342_ = lean_ctor_get(v_x_341_, 0);
lean_inc(v_fst_342_);
v_snd_343_ = lean_ctor_get(v_x_341_, 1);
lean_inc(v_snd_343_);
lean_dec_ref(v_x_341_);
v___x_344_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_344_, 0, v_fst_342_);
v___x_345_ = lean_unsigned_to_nat(2u);
v___x_346_ = lean_mk_empty_array_with_capacity(v___x_345_);
v___x_347_ = lean_array_push(v___x_346_, v___x_344_);
v___x_348_ = lean_array_push(v___x_347_, v_snd_343_);
v___x_349_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(size_t v_sz_350_, size_t v_i_351_, lean_object* v_bs_352_){
_start:
{
uint8_t v___x_353_; 
v___x_353_ = lean_usize_dec_lt(v_i_351_, v_sz_350_);
if (v___x_353_ == 0)
{
return v_bs_352_;
}
else
{
lean_object* v_v_354_; lean_object* v___x_355_; lean_object* v_bs_x27_356_; lean_object* v___x_357_; size_t v___x_358_; size_t v___x_359_; lean_object* v___x_360_; 
v_v_354_ = lean_array_uget(v_bs_352_, v_i_351_);
v___x_355_ = lean_unsigned_to_nat(0u);
v_bs_x27_356_ = lean_array_uset(v_bs_352_, v_i_351_, v___x_355_);
v___x_357_ = l_Prod_toJson___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__0(v_v_354_);
v___x_358_ = ((size_t)1ULL);
v___x_359_ = lean_usize_add(v_i_351_, v___x_358_);
v___x_360_ = lean_array_uset(v_bs_x27_356_, v_i_351_, v___x_357_);
v_i_351_ = v___x_359_;
v_bs_352_ = v___x_360_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1___boxed(lean_object* v_sz_362_, lean_object* v_i_363_, lean_object* v_bs_364_){
_start:
{
size_t v_sz_boxed_365_; size_t v_i_boxed_366_; lean_object* v_res_367_; 
v_sz_boxed_365_ = lean_unbox_usize(v_sz_362_);
lean_dec(v_sz_362_);
v_i_boxed_366_ = lean_unbox_usize(v_i_363_);
lean_dec(v_i_363_);
v_res_367_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(v_sz_boxed_365_, v_i_boxed_366_, v_bs_364_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(lean_object* v_a_368_){
_start:
{
size_t v_sz_369_; size_t v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v_sz_369_ = lean_array_size(v_a_368_);
v___x_370_ = ((size_t)0ULL);
v___x_371_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(v_sz_369_, v___x_370_, v_a_368_);
v___x_372_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(size_t v_sz_373_, size_t v_i_374_, lean_object* v_bs_375_){
_start:
{
uint8_t v___x_376_; 
v___x_376_ = lean_usize_dec_lt(v_i_374_, v_sz_373_);
if (v___x_376_ == 0)
{
return v_bs_375_;
}
else
{
lean_object* v_v_377_; lean_object* v___x_378_; lean_object* v_bs_x27_379_; lean_object* v___x_380_; size_t v___x_381_; size_t v___x_382_; lean_object* v___x_383_; 
v_v_377_ = lean_array_uget(v_bs_375_, v_i_374_);
v___x_378_ = lean_unsigned_to_nat(0u);
v_bs_x27_379_ = lean_array_uset(v_bs_375_, v_i_374_, v___x_378_);
v___x_380_ = l_Lake_instToJsonLogEntry_toJson(v_v_377_);
lean_dec(v_v_377_);
v___x_381_ = ((size_t)1ULL);
v___x_382_ = lean_usize_add(v_i_374_, v___x_381_);
v___x_383_ = lean_array_uset(v_bs_x27_379_, v_i_374_, v___x_380_);
v_i_374_ = v___x_382_;
v_bs_375_ = v___x_383_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4___boxed(lean_object* v_sz_385_, lean_object* v_i_386_, lean_object* v_bs_387_){
_start:
{
size_t v_sz_boxed_388_; size_t v_i_boxed_389_; lean_object* v_res_390_; 
v_sz_boxed_388_ = lean_unbox_usize(v_sz_385_);
lean_dec(v_sz_385_);
v_i_boxed_389_ = lean_unbox_usize(v_i_386_);
lean_dec(v_i_386_);
v_res_390_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(v_sz_boxed_388_, v_i_boxed_389_, v_bs_387_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2(lean_object* v_a_391_){
_start:
{
size_t v_sz_392_; size_t v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v_sz_392_ = lean_array_size(v_a_391_);
v___x_393_ = ((size_t)0ULL);
v___x_394_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(v_sz_392_, v___x_393_, v_a_391_);
v___x_395_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_toJson___closed__2(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_399_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__1));
v___x_400_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__0));
v___x_401_ = lean_box(1);
v___x_402_ = l_Lake_JsonObject_insertJson(v___x_401_, v___x_400_, v___x_399_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_toJson(lean_object* v_self_408_){
_start:
{
uint64_t v_depHash_409_; lean_object* v_inputs_410_; lean_object* v_outputs_x3f_411_; lean_object* v_log_412_; uint8_t v_synthetic_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v_depHash_409_ = lean_ctor_get_uint64(v_self_408_, sizeof(void*)*3);
v_inputs_410_ = lean_ctor_get(v_self_408_, 0);
lean_inc_ref(v_inputs_410_);
v_outputs_x3f_411_ = lean_ctor_get(v_self_408_, 1);
lean_inc(v_outputs_x3f_411_);
v_log_412_ = lean_ctor_get(v_self_408_, 2);
lean_inc_ref(v_log_412_);
v_synthetic_413_ = lean_ctor_get_uint8(v_self_408_, sizeof(void*)*3 + 8);
lean_dec_ref(v_self_408_);
v___x_414_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__2, &l_Lake_BuildMetadata_toJson___closed__2_once, _init_l_Lake_BuildMetadata_toJson___closed__2);
v___x_415_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__3));
v___x_416_ = l_Lake_Hash_hex(v_depHash_409_);
v___x_417_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
v___x_418_ = l_Lake_JsonObject_insertJson(v___x_414_, v___x_415_, v___x_417_);
v___x_419_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__4));
v___x_420_ = l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(v_inputs_410_);
v___x_421_ = l_Lake_JsonObject_insertJson(v___x_418_, v___x_419_, v___x_420_);
v___x_422_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__5));
v___x_423_ = l_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(v_outputs_x3f_411_);
lean_dec(v_outputs_x3f_411_);
v___x_424_ = l_Lake_JsonObject_insertJson(v___x_421_, v___x_422_, v___x_423_);
v___x_425_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__6));
v___x_426_ = l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2(v_log_412_);
v___x_427_ = l_Lake_JsonObject_insertJson(v___x_424_, v___x_425_, v___x_426_);
v___x_428_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__7));
v___x_429_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_429_, 0, v_synthetic_413_);
v___x_430_ = l_Lake_JsonObject_insertJson(v___x_427_, v___x_428_, v___x_429_);
v___x_431_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub(uint64_t v_hash_436_){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; uint8_t v___x_439_; lean_object* v___x_440_; 
v___x_437_ = ((lean_object*)(l_Lake_BuildMetadata_ofStub___closed__0));
v___x_438_ = lean_box(0);
v___x_439_ = 0;
v___x_440_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_440_, 0, v___x_437_);
lean_ctor_set(v___x_440_, 1, v___x_438_);
lean_ctor_set(v___x_440_, 2, v___x_437_);
lean_ctor_set_uint64(v___x_440_, sizeof(void*)*3, v_hash_436_);
lean_ctor_set_uint8(v___x_440_, sizeof(void*)*3 + 8, v___x_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub___boxed(lean_object* v_hash_441_){
_start:
{
uint64_t v_hash_boxed_442_; lean_object* v_res_443_; 
v_hash_boxed_442_ = lean_unbox_uint64(v_hash_441_);
lean_dec_ref(v_hash_441_);
v_res_443_ = l_Lake_BuildMetadata_ofStub(v_hash_boxed_442_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(lean_object* v_x_446_){
_start:
{
if (lean_obj_tag(v_x_446_) == 0)
{
lean_object* v___x_447_; 
v___x_447_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0));
return v___x_447_;
}
else
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_Json_getBool_x3f(v_x_446_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_456_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_456_ == 0)
{
v___x_451_ = v___x_448_;
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_448_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_449_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_465_; 
v_a_457_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_465_ == 0)
{
v___x_459_ = v___x_448_;
v_isShared_460_ = v_isSharedCheck_465_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_448_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_465_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_461_; lean_object* v___x_463_; 
v___x_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_461_, 0, v_a_457_);
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 0, v___x_461_);
v___x_463_ = v___x_459_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v___x_461_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___boxed(lean_object* v_x_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(v_x_466_);
lean_dec(v_x_466_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3(lean_object* v_x_470_){
_start:
{
if (lean_obj_tag(v_x_470_) == 0)
{
lean_object* v___x_471_; 
v___x_471_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0));
return v___x_471_;
}
else
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_472_, 0, v_x_470_);
v___x_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
return v___x_473_;
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2(lean_object* v_x_476_){
_start:
{
if (lean_obj_tag(v_x_476_) == 0)
{
lean_object* v___x_477_; 
v___x_477_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0));
return v___x_477_;
}
else
{
lean_object* v___x_478_; lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_487_; 
v___x_478_ = l_Option_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3(v_x_476_);
v_a_479_ = lean_ctor_get(v___x_478_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_487_ == 0)
{
v___x_481_ = v___x_478_;
v_isShared_482_ = v_isSharedCheck_487_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_478_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_487_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_483_; lean_object* v___x_485_; 
v___x_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_483_, 0, v_a_479_);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 0, v___x_483_);
v___x_485_ = v___x_481_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(size_t v_sz_488_, size_t v_i_489_, lean_object* v_bs_490_){
_start:
{
uint8_t v___x_491_; 
v___x_491_ = lean_usize_dec_lt(v_i_489_, v_sz_488_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; 
v___x_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_492_, 0, v_bs_490_);
return v___x_492_;
}
else
{
lean_object* v_v_493_; lean_object* v___x_494_; 
v_v_493_ = lean_array_uget_borrowed(v_bs_490_, v_i_489_);
lean_inc(v_v_493_);
v___x_494_ = l_Lake_instFromJsonLogEntry_fromJson(v_v_493_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
lean_dec_ref(v_bs_490_);
v_a_495_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___x_494_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___x_494_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
else
{
lean_object* v_a_503_; lean_object* v___x_504_; lean_object* v_bs_x27_505_; size_t v___x_506_; size_t v___x_507_; lean_object* v___x_508_; 
v_a_503_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_a_503_);
lean_dec_ref(v___x_494_);
v___x_504_ = lean_unsigned_to_nat(0u);
v_bs_x27_505_ = lean_array_uset(v_bs_490_, v_i_489_, v___x_504_);
v___x_506_ = ((size_t)1ULL);
v___x_507_ = lean_usize_add(v_i_489_, v___x_506_);
v___x_508_ = lean_array_uset(v_bs_x27_505_, v_i_489_, v_a_503_);
v_i_489_ = v___x_507_;
v_bs_490_ = v___x_508_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_510_, lean_object* v_i_511_, lean_object* v_bs_512_){
_start:
{
size_t v_sz_boxed_513_; size_t v_i_boxed_514_; lean_object* v_res_515_; 
v_sz_boxed_513_ = lean_unbox_usize(v_sz_510_);
lean_dec(v_sz_510_);
v_i_boxed_514_ = lean_unbox_usize(v_i_511_);
lean_dec(v_i_511_);
v_res_515_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(v_sz_boxed_513_, v_i_boxed_514_, v_bs_512_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1(lean_object* v_x_518_){
_start:
{
if (lean_obj_tag(v_x_518_) == 4)
{
lean_object* v_elems_519_; size_t v_sz_520_; size_t v___x_521_; lean_object* v___x_522_; 
v_elems_519_ = lean_ctor_get(v_x_518_, 0);
lean_inc_ref(v_elems_519_);
lean_dec_ref(v_x_518_);
v_sz_520_ = lean_array_size(v_elems_519_);
v___x_521_ = ((size_t)0ULL);
v___x_522_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(v_sz_520_, v___x_521_, v_elems_519_);
return v___x_522_;
}
else
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_523_ = ((lean_object*)(l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0));
v___x_524_ = lean_unsigned_to_nat(80u);
v___x_525_ = l_Lean_Json_pretty(v_x_518_, v___x_524_);
v___x_526_ = lean_string_append(v___x_523_, v___x_525_);
lean_dec_ref(v___x_525_);
v___x_527_ = ((lean_object*)(l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1));
v___x_528_ = lean_string_append(v___x_526_, v___x_527_);
v___x_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1(lean_object* v_x_532_){
_start:
{
if (lean_obj_tag(v_x_532_) == 0)
{
lean_object* v___x_533_; 
v___x_533_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0));
return v___x_533_;
}
else
{
lean_object* v___x_534_; 
v___x_534_ = l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1(v_x_532_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
v_a_535_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_534_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_534_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_551_; 
v_a_543_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_551_ == 0)
{
v___x_545_ = v___x_534_;
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_534_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_547_, 0, v_a_543_);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 0, v___x_547_);
v___x_549_ = v___x_545_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7(lean_object* v_x_553_){
_start:
{
lean_object* v_j_555_; 
if (lean_obj_tag(v_x_553_) == 4)
{
lean_object* v_elems_563_; lean_object* v___x_564_; lean_object* v___x_565_; uint8_t v___x_566_; 
v_elems_563_ = lean_ctor_get(v_x_553_, 0);
v___x_564_ = lean_array_get_size(v_elems_563_);
v___x_565_ = lean_unsigned_to_nat(2u);
v___x_566_ = lean_nat_dec_eq(v___x_564_, v___x_565_);
if (v___x_566_ == 0)
{
v_j_555_ = v_x_553_;
goto v___jp_554_;
}
else
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
lean_inc_ref(v_elems_563_);
lean_dec_ref(v_x_553_);
v___x_567_ = lean_unsigned_to_nat(0u);
v___x_568_ = lean_array_fget_borrowed(v_elems_563_, v___x_567_);
lean_inc(v___x_568_);
v___x_569_ = l_Lean_Json_getStr_x3f(v___x_568_);
if (lean_obj_tag(v___x_569_) == 0)
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec_ref(v_elems_563_);
v_a_570_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_569_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_569_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
else
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_588_; 
v_a_578_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_588_ == 0)
{
v___x_580_ = v___x_569_;
v_isShared_581_ = v_isSharedCheck_588_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_569_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_588_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_582_ = lean_unsigned_to_nat(1u);
v___x_583_ = lean_array_fget(v_elems_563_, v___x_582_);
lean_dec_ref(v_elems_563_);
v___x_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_584_, 0, v_a_578_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v___x_584_);
v___x_586_ = v___x_580_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_584_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
}
else
{
v_j_555_ = v_x_553_;
goto v___jp_554_;
}
v___jp_554_:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_556_ = ((lean_object*)(l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0));
v___x_557_ = lean_unsigned_to_nat(80u);
v___x_558_ = l_Lean_Json_pretty(v_j_555_, v___x_557_);
v___x_559_ = lean_string_append(v___x_556_, v___x_558_);
lean_dec_ref(v___x_558_);
v___x_560_ = ((lean_object*)(l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1));
v___x_561_ = lean_string_append(v___x_559_, v___x_560_);
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(size_t v_sz_589_, size_t v_i_590_, lean_object* v_bs_591_){
_start:
{
uint8_t v___x_592_; 
v___x_592_ = lean_usize_dec_lt(v_i_590_, v_sz_589_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; 
v___x_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_593_, 0, v_bs_591_);
return v___x_593_;
}
else
{
lean_object* v_v_594_; lean_object* v___x_595_; 
v_v_594_ = lean_array_uget_borrowed(v_bs_591_, v_i_590_);
lean_inc(v_v_594_);
v___x_595_ = l_Prod_fromJson_x3f___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7(v_v_594_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_603_; 
lean_dec_ref(v_bs_591_);
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_603_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_596_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
else
{
lean_object* v_a_604_; lean_object* v___x_605_; lean_object* v_bs_x27_606_; size_t v___x_607_; size_t v___x_608_; lean_object* v___x_609_; 
v_a_604_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_604_);
lean_dec_ref(v___x_595_);
v___x_605_ = lean_unsigned_to_nat(0u);
v_bs_x27_606_ = lean_array_uset(v_bs_591_, v_i_590_, v___x_605_);
v___x_607_ = ((size_t)1ULL);
v___x_608_ = lean_usize_add(v_i_590_, v___x_607_);
v___x_609_ = lean_array_uset(v_bs_x27_606_, v_i_590_, v_a_604_);
v_i_590_ = v___x_608_;
v_bs_591_ = v___x_609_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8___boxed(lean_object* v_sz_611_, lean_object* v_i_612_, lean_object* v_bs_613_){
_start:
{
size_t v_sz_boxed_614_; size_t v_i_boxed_615_; lean_object* v_res_616_; 
v_sz_boxed_614_ = lean_unbox_usize(v_sz_611_);
lean_dec(v_sz_611_);
v_i_boxed_615_ = lean_unbox_usize(v_i_612_);
lean_dec(v_i_612_);
v_res_616_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(v_sz_boxed_614_, v_i_boxed_615_, v_bs_613_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5(lean_object* v_x_617_){
_start:
{
if (lean_obj_tag(v_x_617_) == 4)
{
lean_object* v_elems_618_; size_t v_sz_619_; size_t v___x_620_; lean_object* v___x_621_; 
v_elems_618_ = lean_ctor_get(v_x_617_, 0);
lean_inc_ref(v_elems_618_);
lean_dec_ref(v_x_617_);
v_sz_619_ = lean_array_size(v_elems_618_);
v___x_620_ = ((size_t)0ULL);
v___x_621_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(v_sz_619_, v___x_620_, v_elems_618_);
return v___x_621_;
}
else
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_622_ = ((lean_object*)(l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__0));
v___x_623_ = lean_unsigned_to_nat(80u);
v___x_624_ = l_Lean_Json_pretty(v_x_617_, v___x_623_);
v___x_625_ = lean_string_append(v___x_622_, v___x_624_);
lean_dec_ref(v___x_624_);
v___x_626_ = ((lean_object*)(l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1___closed__1));
v___x_627_ = lean_string_append(v___x_625_, v___x_626_);
v___x_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
return v___x_628_;
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3(lean_object* v_x_631_){
_start:
{
if (lean_obj_tag(v_x_631_) == 0)
{
lean_object* v___x_632_; 
v___x_632_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0));
return v___x_632_;
}
else
{
lean_object* v___x_633_; 
v___x_633_ = l_Array_fromJson_x3f___at___00Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5(v_x_631_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_633_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_633_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_650_; 
v_a_642_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_650_ == 0)
{
v___x_644_ = v___x_633_;
v_isShared_645_ = v_isSharedCheck_650_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_633_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_650_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_646_; lean_object* v___x_648_; 
v___x_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_646_, 0, v_a_642_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v___x_646_);
v___x_648_ = v___x_644_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v___x_646_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f(lean_object* v_obj_666_){
_start:
{
lean_object* v___y_668_; uint64_t v___y_669_; lean_object* v___y_670_; lean_object* v___y_671_; uint8_t v_a_672_; lean_object* v___y_676_; uint64_t v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; uint64_t v___y_682_; lean_object* v___y_683_; lean_object* v___y_684_; lean_object* v_a_685_; uint64_t v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; uint64_t v___y_717_; lean_object* v___y_718_; lean_object* v_a_719_; uint64_t v___y_745_; lean_object* v___y_746_; uint64_t v___y_749_; lean_object* v_a_750_; uint64_t v___y_776_; uint64_t v_depHash_779_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__0));
v___x_805_ = l_Lake_JsonObject_getJson_x3f(v_obj_666_, v___x_804_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_806_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__3));
v___x_807_ = l_Lake_JsonObject_getJson_x3f(v_obj_666_, v___x_806_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v___x_808_; 
v___x_808_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7));
return v___x_808_;
}
else
{
lean_object* v_val_809_; lean_object* v___x_810_; 
v_val_809_ = lean_ctor_get(v___x_807_, 0);
lean_inc(v_val_809_);
lean_dec_ref(v___x_807_);
v___x_810_ = l_Lean_Json_getStr_x3f(v_val_809_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_820_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_820_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_820_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_820_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_818_; 
v___x_815_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8));
v___x_816_ = lean_string_append(v___x_815_, v_a_811_);
lean_dec(v_a_811_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v___x_816_);
v___x_818_ = v___x_813_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
else
{
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_828_; 
v_a_821_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_828_ == 0)
{
v___x_823_ = v___x_810_;
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_810_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_826_; 
if (v_isShared_824_ == 0)
{
lean_ctor_set_tag(v___x_823_, 0);
v___x_826_ = v___x_823_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_821_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
else
{
lean_object* v_a_829_; lean_object* v___x_830_; 
v_a_829_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_a_829_);
lean_dec_ref(v___x_810_);
v___x_830_ = l_Lake_Hash_ofDecimal_x3f(v_a_829_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v___x_831_; 
v___x_831_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10));
return v___x_831_;
}
else
{
lean_object* v_val_832_; uint64_t v___x_833_; 
v_val_832_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_val_832_);
lean_dec_ref(v___x_830_);
v___x_833_ = lean_unbox_uint64(v_val_832_);
lean_dec(v_val_832_);
v_depHash_779_ = v___x_833_;
goto v___jp_778_;
}
}
}
}
}
else
{
lean_object* v___x_834_; lean_object* v___x_835_; 
lean_dec_ref(v___x_805_);
v___x_834_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__3));
v___x_835_ = l_Lake_JsonObject_getJson_x3f(v_obj_666_, v___x_834_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v___x_836_; 
v___x_836_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7));
return v___x_836_;
}
else
{
lean_object* v_val_837_; lean_object* v___x_838_; 
v_val_837_ = lean_ctor_get(v___x_835_, 0);
lean_inc(v_val_837_);
lean_dec_ref(v___x_835_);
v___x_838_ = l_Lake_Hash_fromJson_x3f(v_val_837_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_848_; 
v_a_839_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_848_ == 0)
{
v___x_841_ = v___x_838_;
v_isShared_842_ = v_isSharedCheck_848_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_838_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_848_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_846_; 
v___x_843_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8));
v___x_844_ = lean_string_append(v___x_843_, v_a_839_);
lean_dec(v_a_839_);
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 0, v___x_844_);
v___x_846_ = v___x_841_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_844_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
else
{
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_856_; 
v_a_849_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_856_ == 0)
{
v___x_851_ = v___x_838_;
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_838_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_854_; 
if (v_isShared_852_ == 0)
{
lean_ctor_set_tag(v___x_851_, 0);
v___x_854_ = v___x_851_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_849_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
else
{
lean_object* v_a_857_; uint64_t v___x_858_; 
v_a_857_ = lean_ctor_get(v___x_838_, 0);
lean_inc(v_a_857_);
lean_dec_ref(v___x_838_);
v___x_858_ = lean_unbox_uint64(v_a_857_);
lean_dec(v_a_857_);
v_depHash_779_ = v___x_858_;
goto v___jp_778_;
}
}
}
}
v___jp_667_:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_673_, 0, v___y_671_);
lean_ctor_set(v___x_673_, 1, v___y_670_);
lean_ctor_set(v___x_673_, 2, v___y_668_);
lean_ctor_set_uint64(v___x_673_, sizeof(void*)*3, v___y_669_);
lean_ctor_set_uint8(v___x_673_, sizeof(void*)*3 + 8, v_a_672_);
v___x_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
return v___x_674_;
}
v___jp_675_:
{
uint8_t v___x_680_; 
v___x_680_ = 0;
v___y_668_ = v___y_676_;
v___y_669_ = v___y_677_;
v___y_670_ = v___y_679_;
v___y_671_ = v___y_678_;
v_a_672_ = v___x_680_;
goto v___jp_667_;
}
v___jp_681_:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__7));
v___x_687_ = l_Lake_JsonObject_getJson_x3f(v_obj_666_, v___x_686_);
if (lean_obj_tag(v___x_687_) == 0)
{
v___y_676_ = v_a_685_;
v___y_677_ = v___y_682_;
v___y_678_ = v___y_683_;
v___y_679_ = v___y_684_;
goto v___jp_675_;
}
else
{
lean_object* v_val_688_; lean_object* v___x_689_; 
v_val_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_val_688_);
lean_dec_ref(v___x_687_);
v___x_689_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(v_val_688_);
lean_dec(v_val_688_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_699_; 
lean_dec_ref(v_a_685_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
v_a_690_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_699_ == 0)
{
v___x_692_ = v___x_689_;
v_isShared_693_ = v_isSharedCheck_699_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_699_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_697_; 
v___x_694_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0));
v___x_695_ = lean_string_append(v___x_694_, v_a_690_);
lean_dec(v_a_690_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_695_);
v___x_697_ = v___x_692_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_695_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
else
{
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
lean_dec_ref(v_a_685_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
v_a_700_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_707_ == 0)
{
v___x_702_ = v___x_689_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_689_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
lean_ctor_set_tag(v___x_702_, 0);
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_a_700_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
else
{
lean_object* v_a_708_; 
v_a_708_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_a_708_);
lean_dec_ref(v___x_689_);
if (lean_obj_tag(v_a_708_) == 0)
{
v___y_676_ = v_a_685_;
v___y_677_ = v___y_682_;
v___y_678_ = v___y_683_;
v___y_679_ = v___y_684_;
goto v___jp_675_;
}
else
{
lean_object* v_val_709_; uint8_t v___x_710_; 
v_val_709_ = lean_ctor_get(v_a_708_, 0);
lean_inc(v_val_709_);
lean_dec_ref(v_a_708_);
v___x_710_ = lean_unbox(v_val_709_);
lean_dec(v_val_709_);
v___y_668_ = v_a_685_;
v___y_669_ = v___y_682_;
v___y_670_ = v___y_684_;
v___y_671_ = v___y_683_;
v_a_672_ = v___x_710_;
goto v___jp_667_;
}
}
}
}
}
v___jp_711_:
{
lean_object* v___x_715_; 
v___x_715_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___y_682_ = v___y_712_;
v___y_683_ = v___y_714_;
v___y_684_ = v___y_713_;
v_a_685_ = v___x_715_;
goto v___jp_681_;
}
v___jp_716_:
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__6));
v___x_721_ = l_Lake_JsonObject_getJson_x3f(v_obj_666_, v___x_720_);
if (lean_obj_tag(v___x_721_) == 0)
{
v___y_712_ = v___y_717_;
v___y_713_ = v_a_719_;
v___y_714_ = v___y_718_;
goto v___jp_711_;
}
else
{
lean_object* v_val_722_; lean_object* v___x_723_; 
v_val_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_val_722_);
lean_dec_ref(v___x_721_);
v___x_723_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1(v_val_722_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_733_; 
lean_dec(v_a_719_);
lean_dec_ref(v___y_718_);
v_a_724_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_733_ == 0)
{
v___x_726_ = v___x_723_;
v_isShared_727_ = v_isSharedCheck_733_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_723_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_733_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_731_; 
v___x_728_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2));
v___x_729_ = lean_string_append(v___x_728_, v_a_724_);
lean_dec(v_a_724_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v___x_729_);
v___x_731_ = v___x_726_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_729_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
else
{
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_741_; 
lean_dec(v_a_719_);
lean_dec_ref(v___y_718_);
v_a_734_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_741_ == 0)
{
v___x_736_ = v___x_723_;
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_723_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_739_; 
if (v_isShared_737_ == 0)
{
lean_ctor_set_tag(v___x_736_, 0);
v___x_739_ = v___x_736_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_a_734_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
else
{
lean_object* v_a_742_; 
v_a_742_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_742_);
lean_dec_ref(v___x_723_);
if (lean_obj_tag(v_a_742_) == 0)
{
v___y_712_ = v___y_717_;
v___y_713_ = v_a_719_;
v___y_714_ = v___y_718_;
goto v___jp_711_;
}
else
{
lean_object* v_val_743_; 
v_val_743_ = lean_ctor_get(v_a_742_, 0);
lean_inc(v_val_743_);
lean_dec_ref(v_a_742_);
v___y_682_ = v___y_717_;
v___y_683_ = v___y_718_;
v___y_684_ = v_a_719_;
v_a_685_ = v_val_743_;
goto v___jp_681_;
}
}
}
}
}
v___jp_744_:
{
lean_object* v___x_747_; 
v___x_747_ = lean_box(0);
v___y_717_ = v___y_745_;
v___y_718_ = v___y_746_;
v_a_719_ = v___x_747_;
goto v___jp_716_;
}
v___jp_748_:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__5));
v___x_752_ = l_Lake_JsonObject_getJson_x3f(v_obj_666_, v___x_751_);
if (lean_obj_tag(v___x_752_) == 0)
{
v___y_745_ = v___y_749_;
v___y_746_ = v_a_750_;
goto v___jp_744_;
}
else
{
lean_object* v_val_753_; lean_object* v___x_754_; 
v_val_753_ = lean_ctor_get(v___x_752_, 0);
lean_inc(v_val_753_);
lean_dec_ref(v___x_752_);
v___x_754_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2(v_val_753_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_764_; 
lean_dec_ref(v_a_750_);
v_a_755_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_764_ == 0)
{
v___x_757_ = v___x_754_;
v_isShared_758_ = v_isSharedCheck_764_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_754_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_764_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_762_; 
v___x_759_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3));
v___x_760_ = lean_string_append(v___x_759_, v_a_755_);
lean_dec(v_a_755_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v___x_760_);
v___x_762_ = v___x_757_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_760_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
else
{
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
lean_dec_ref(v_a_750_);
v_a_765_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_754_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_754_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set_tag(v___x_767_, 0);
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
else
{
lean_object* v_a_773_; 
v_a_773_ = lean_ctor_get(v___x_754_, 0);
lean_inc(v_a_773_);
lean_dec_ref(v___x_754_);
if (lean_obj_tag(v_a_773_) == 0)
{
v___y_745_ = v___y_749_;
v___y_746_ = v_a_750_;
goto v___jp_744_;
}
else
{
lean_object* v_val_774_; 
v_val_774_ = lean_ctor_get(v_a_773_, 0);
lean_inc(v_val_774_);
lean_dec_ref(v_a_773_);
v___y_717_ = v___y_749_;
v___y_718_ = v_a_750_;
v_a_719_ = v_val_774_;
goto v___jp_716_;
}
}
}
}
}
v___jp_775_:
{
lean_object* v___x_777_; 
v___x_777_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4));
v___y_749_ = v___y_776_;
v_a_750_ = v___x_777_;
goto v___jp_748_;
}
v___jp_778_:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__4));
v___x_781_ = l_Lake_JsonObject_getJson_x3f(v_obj_666_, v___x_780_);
if (lean_obj_tag(v___x_781_) == 0)
{
v___y_776_ = v_depHash_779_;
goto v___jp_775_;
}
else
{
lean_object* v_val_782_; lean_object* v___x_783_; 
v_val_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_val_782_);
lean_dec_ref(v___x_781_);
v___x_783_ = l_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3(v_val_782_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_793_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_793_ == 0)
{
v___x_786_ = v___x_783_;
v_isShared_787_ = v_isSharedCheck_793_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_783_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_793_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_788_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5));
v___x_789_ = lean_string_append(v___x_788_, v_a_784_);
lean_dec(v_a_784_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 0, v___x_789_);
v___x_791_ = v___x_786_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
else
{
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
v_a_794_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_783_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_783_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
lean_ctor_set_tag(v___x_796_, 0);
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
else
{
lean_object* v_a_802_; 
v_a_802_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_802_);
lean_dec_ref(v___x_783_);
if (lean_obj_tag(v_a_802_) == 0)
{
v___y_776_ = v_depHash_779_;
goto v___jp_775_;
}
else
{
lean_object* v_val_803_; 
v_val_803_ = lean_ctor_get(v_a_802_, 0);
lean_inc(v_val_803_);
lean_dec_ref(v_a_802_);
v___y_749_ = v_depHash_779_;
v_a_750_ = v_val_803_;
goto v___jp_748_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___boxed(lean_object* v_obj_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Lake_BuildMetadata_fromJsonObject_x3f(v_obj_859_);
lean_dec(v_obj_859_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f(lean_object* v_json_867_){
_start:
{
switch(lean_obj_tag(v_json_867_))
{
case 2:
{
lean_object* v_n_868_; lean_object* v___x_869_; 
v_n_868_ = lean_ctor_get(v_json_867_, 0);
v___x_869_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_868_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_879_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_879_ == 0)
{
v___x_872_ = v___x_869_;
v_isShared_873_ = v_isSharedCheck_879_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_869_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_879_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_877_; 
v___x_874_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__0));
v___x_875_ = lean_string_append(v___x_874_, v_a_870_);
lean_dec(v_a_870_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 0, v___x_875_);
v___x_877_ = v___x_872_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_875_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_889_; 
v_a_880_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_889_ == 0)
{
v___x_882_ = v___x_869_;
v_isShared_883_ = v_isSharedCheck_889_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_869_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_889_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
uint64_t v___x_884_; lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_884_ = lean_unbox_uint64(v_a_880_);
lean_dec(v_a_880_);
v___x_885_ = l_Lake_BuildMetadata_ofStub(v___x_884_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 0, v___x_885_);
v___x_887_ = v___x_882_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_885_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
case 5:
{
lean_object* v_kvPairs_890_; lean_object* v___x_891_; 
v_kvPairs_890_ = lean_ctor_get(v_json_867_, 0);
v___x_891_ = l_Lake_BuildMetadata_fromJsonObject_x3f(v_kvPairs_890_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_917_; 
v_a_892_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_917_ == 0)
{
v___x_894_ = v___x_891_;
v_isShared_895_ = v_isSharedCheck_917_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_891_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_917_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__0));
v___x_903_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_890_, v___x_902_);
if (lean_obj_tag(v___x_903_) == 1)
{
lean_object* v_val_904_; 
v_val_904_ = lean_ctor_get(v___x_903_, 0);
lean_inc(v_val_904_);
lean_dec_ref(v___x_903_);
if (lean_obj_tag(v_val_904_) == 3)
{
lean_object* v_s_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_916_; 
v_s_905_ = lean_ctor_get(v_val_904_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v_val_904_);
if (v_isSharedCheck_916_ == 0)
{
v___x_907_ = v_val_904_;
v_isShared_908_ = v_isSharedCheck_916_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_s_905_);
lean_dec(v_val_904_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_916_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_909_; uint8_t v___x_910_; 
v___x_909_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0));
v___x_910_ = lean_string_dec_eq(v_s_905_, v___x_909_);
lean_dec_ref(v_s_905_);
if (v___x_910_ == 0)
{
lean_del_object(v___x_907_);
goto v___jp_896_;
}
else
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_914_; 
lean_del_object(v___x_894_);
v___x_911_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__2));
v___x_912_ = lean_string_append(v___x_911_, v_a_892_);
lean_dec(v_a_892_);
if (v_isShared_908_ == 0)
{
lean_ctor_set_tag(v___x_907_, 0);
lean_ctor_set(v___x_907_, 0, v___x_912_);
v___x_914_ = v___x_907_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v___x_912_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
else
{
lean_dec(v_val_904_);
goto v___jp_896_;
}
}
else
{
lean_dec(v___x_903_);
goto v___jp_896_;
}
v___jp_896_:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_900_; 
v___x_897_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__1));
v___x_898_ = lean_string_append(v___x_897_, v_a_892_);
lean_dec(v_a_892_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 0, v___x_898_);
v___x_900_ = v___x_894_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v___x_898_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
else
{
return v___x_891_;
}
}
default: 
{
lean_object* v___x_918_; 
v___x_918_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__4));
return v___x_918_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f___boxed(lean_object* v_json_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lake_BuildMetadata_fromJson_x3f(v_json_919_);
lean_dec(v_json_919_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_parse(lean_object* v_contents_923_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_Lean_Json_parse(v_contents_923_);
if (lean_obj_tag(v___x_924_) == 0)
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
v_a_925_ = lean_ctor_get(v___x_924_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_924_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_924_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
else
{
lean_object* v_a_933_; lean_object* v___x_934_; 
v_a_933_ = lean_ctor_get(v___x_924_, 0);
lean_inc(v_a_933_);
lean_dec_ref(v___x_924_);
v___x_934_ = l_Lake_BuildMetadata_fromJson_x3f(v_a_933_);
lean_dec(v_a_933_);
return v___x_934_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch(uint64_t v_inputHash_935_, lean_object* v_outputs_936_){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; uint8_t v___x_939_; lean_object* v___x_940_; 
v___x_937_ = ((lean_object*)(l_Lake_BuildMetadata_ofStub___closed__0));
v___x_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_938_, 0, v_outputs_936_);
v___x_939_ = 1;
v___x_940_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_940_, 0, v___x_937_);
lean_ctor_set(v___x_940_, 1, v___x_938_);
lean_ctor_set(v___x_940_, 2, v___x_937_);
lean_ctor_set_uint64(v___x_940_, sizeof(void*)*3, v_inputHash_935_);
lean_ctor_set_uint8(v___x_940_, sizeof(void*)*3 + 8, v___x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch___boxed(lean_object* v_inputHash_941_, lean_object* v_outputs_942_){
_start:
{
uint64_t v_inputHash_boxed_943_; lean_object* v_res_944_; 
v_inputHash_boxed_943_ = lean_unbox_uint64(v_inputHash_941_);
lean_dec_ref(v_inputHash_941_);
v_res_944_ = l_Lake_BuildMetadata_ofFetch(v_inputHash_boxed_943_, v_outputs_942_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(lean_object* v_as_945_, size_t v_i_946_, size_t v_stop_947_, lean_object* v_b_948_){
_start:
{
uint8_t v___x_949_; 
v___x_949_ = lean_usize_dec_eq(v_i_946_, v_stop_947_);
if (v___x_949_ == 0)
{
lean_object* v___x_950_; lean_object* v___y_952_; lean_object* v_inputs_959_; uint64_t v_hash_960_; lean_object* v___x_961_; lean_object* v___x_962_; uint8_t v___x_963_; 
v___x_950_ = lean_array_uget_borrowed(v_as_945_, v_i_946_);
v_inputs_959_ = lean_ctor_get(v___x_950_, 1);
v_hash_960_ = lean_ctor_get_uint64(v___x_950_, sizeof(void*)*3);
v___x_961_ = lean_array_get_size(v_inputs_959_);
v___x_962_ = lean_unsigned_to_nat(0u);
v___x_963_ = lean_nat_dec_eq(v___x_961_, v___x_962_);
if (v___x_963_ == 0)
{
lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_964_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_959_);
v___x_965_ = l_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(v___x_964_);
v___y_952_ = v___x_965_;
goto v___jp_951_;
}
else
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = l_Lake_Hash_hex(v_hash_960_);
v___x_967_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
v___y_952_ = v___x_967_;
goto v___jp_951_;
}
v___jp_951_:
{
lean_object* v_caption_953_; lean_object* v___x_954_; lean_object* v___x_955_; size_t v___x_956_; size_t v___x_957_; 
v_caption_953_ = lean_ctor_get(v___x_950_, 0);
lean_inc_ref(v_caption_953_);
v___x_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_954_, 0, v_caption_953_);
lean_ctor_set(v___x_954_, 1, v___y_952_);
v___x_955_ = lean_array_push(v_b_948_, v___x_954_);
v___x_956_ = ((size_t)1ULL);
v___x_957_ = lean_usize_add(v_i_946_, v___x_956_);
v_i_946_ = v___x_957_;
v_b_948_ = v___x_955_;
goto _start;
}
}
else
{
return v_b_948_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs(lean_object* v_inputs_968_){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_969_ = lean_unsigned_to_nat(0u);
v___x_970_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4));
v___x_971_ = lean_array_get_size(v_inputs_968_);
v___x_972_ = lean_nat_dec_lt(v___x_969_, v___x_971_);
if (v___x_972_ == 0)
{
return v___x_970_;
}
else
{
uint8_t v___x_973_; 
v___x_973_ = lean_nat_dec_le(v___x_971_, v___x_971_);
if (v___x_973_ == 0)
{
if (v___x_972_ == 0)
{
return v___x_970_;
}
else
{
size_t v___x_974_; size_t v___x_975_; lean_object* v___x_976_; 
v___x_974_ = ((size_t)0ULL);
v___x_975_ = lean_usize_of_nat(v___x_971_);
v___x_976_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_inputs_968_, v___x_974_, v___x_975_, v___x_970_);
return v___x_976_;
}
}
else
{
size_t v___x_977_; size_t v___x_978_; lean_object* v___x_979_; 
v___x_977_ = ((size_t)0ULL);
v___x_978_ = lean_usize_of_nat(v___x_971_);
v___x_979_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_inputs_968_, v___x_977_, v___x_978_, v___x_970_);
return v___x_979_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs___boxed(lean_object* v_inputs_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_980_);
lean_dec_ref(v_inputs_980_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0___boxed(lean_object* v_as_982_, lean_object* v_i_983_, lean_object* v_stop_984_, lean_object* v_b_985_){
_start:
{
size_t v_i_boxed_986_; size_t v_stop_boxed_987_; lean_object* v_res_988_; 
v_i_boxed_986_ = lean_unbox_usize(v_i_983_);
lean_dec(v_i_983_);
v_stop_boxed_987_ = lean_unbox_usize(v_stop_984_);
lean_dec(v_stop_984_);
v_res_988_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_as_982_, v_i_boxed_986_, v_stop_boxed_987_, v_b_985_);
lean_dec_ref(v_as_982_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(lean_object* v_depTrace_989_, lean_object* v_outputs_990_, lean_object* v_log_991_){
_start:
{
lean_object* v_inputs_992_; uint64_t v_hash_993_; lean_object* v___x_994_; lean_object* v___x_995_; uint8_t v___x_996_; lean_object* v___x_997_; 
v_inputs_992_ = lean_ctor_get(v_depTrace_989_, 1);
v_hash_993_ = lean_ctor_get_uint64(v_depTrace_989_, sizeof(void*)*3);
v___x_994_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_992_);
v___x_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_995_, 0, v_outputs_990_);
v___x_996_ = 0;
v___x_997_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_997_, 0, v___x_994_);
lean_ctor_set(v___x_997_, 1, v___x_995_);
lean_ctor_set(v___x_997_, 2, v_log_991_);
lean_ctor_set_uint64(v___x_997_, sizeof(void*)*3, v_hash_993_);
lean_ctor_set_uint8(v___x_997_, sizeof(void*)*3 + 8, v___x_996_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore___boxed(lean_object* v_depTrace_998_, lean_object* v_outputs_999_, lean_object* v_log_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_998_, v_outputs_999_, v_log_1000_);
lean_dec_ref(v_depTrace_998_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg(lean_object* v_inst_1002_, lean_object* v_depTrace_1003_, lean_object* v_outputs_1004_, lean_object* v_log_1005_){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = lean_apply_1(v_inst_1002_, v_outputs_1004_);
v___x_1007_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1003_, v___x_1006_, v_log_1005_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg___boxed(lean_object* v_inst_1008_, lean_object* v_depTrace_1009_, lean_object* v_outputs_1010_, lean_object* v_log_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_Lake_BuildMetadata_ofBuild___redArg(v_inst_1008_, v_depTrace_1009_, v_outputs_1010_, v_log_1011_);
lean_dec_ref(v_depTrace_1009_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild(lean_object* v_00_u03b1_1013_, lean_object* v_inst_1014_, lean_object* v_depTrace_1015_, lean_object* v_outputs_1016_, lean_object* v_log_1017_){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = lean_apply_1(v_inst_1014_, v_outputs_1016_);
v___x_1019_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1015_, v___x_1018_, v_log_1017_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___boxed(lean_object* v_00_u03b1_1020_, lean_object* v_inst_1021_, lean_object* v_depTrace_1022_, lean_object* v_outputs_1023_, lean_object* v_log_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lake_BuildMetadata_ofBuild(v_00_u03b1_1020_, v_inst_1021_, v_depTrace_1022_, v_outputs_1023_, v_log_1024_);
lean_dec_ref(v_depTrace_1022_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx(lean_object* v_x_1026_){
_start:
{
switch(lean_obj_tag(v_x_1026_))
{
case 0:
{
lean_object* v___x_1027_; 
v___x_1027_ = lean_unsigned_to_nat(0u);
return v___x_1027_;
}
case 1:
{
lean_object* v___x_1028_; 
v___x_1028_ = lean_unsigned_to_nat(1u);
return v___x_1028_;
}
default: 
{
lean_object* v___x_1029_; 
v___x_1029_ = lean_unsigned_to_nat(2u);
return v___x_1029_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx___boxed(lean_object* v_x_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Lake_SavedTrace_ctorIdx(v_x_1030_);
lean_dec(v_x_1030_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___redArg(lean_object* v_t_1032_, lean_object* v_k_1033_){
_start:
{
if (lean_obj_tag(v_t_1032_) == 2)
{
lean_object* v_data_1034_; lean_object* v___x_1035_; 
v_data_1034_ = lean_ctor_get(v_t_1032_, 0);
lean_inc_ref(v_data_1034_);
lean_dec_ref(v_t_1032_);
v___x_1035_ = lean_apply_1(v_k_1033_, v_data_1034_);
return v___x_1035_;
}
else
{
lean_dec(v_t_1032_);
return v_k_1033_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim(lean_object* v_motive_1036_, lean_object* v_ctorIdx_1037_, lean_object* v_t_1038_, lean_object* v_h_1039_, lean_object* v_k_1040_){
_start:
{
lean_object* v___x_1041_; 
v___x_1041_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1038_, v_k_1040_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___boxed(lean_object* v_motive_1042_, lean_object* v_ctorIdx_1043_, lean_object* v_t_1044_, lean_object* v_h_1045_, lean_object* v_k_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_Lake_SavedTrace_ctorElim(v_motive_1042_, v_ctorIdx_1043_, v_t_1044_, v_h_1045_, v_k_1046_);
lean_dec(v_ctorIdx_1043_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim___redArg(lean_object* v_t_1048_, lean_object* v_missing_1049_){
_start:
{
lean_object* v___x_1050_; 
v___x_1050_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1048_, v_missing_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim(lean_object* v_motive_1051_, lean_object* v_t_1052_, lean_object* v_h_1053_, lean_object* v_missing_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1052_, v_missing_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim___redArg(lean_object* v_t_1056_, lean_object* v_invalid_1057_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1056_, v_invalid_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim(lean_object* v_motive_1059_, lean_object* v_t_1060_, lean_object* v_h_1061_, lean_object* v_invalid_1062_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1060_, v_invalid_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim___redArg(lean_object* v_t_1064_, lean_object* v_ok_1065_){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1064_, v_ok_1065_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim(lean_object* v_motive_1067_, lean_object* v_t_1068_, lean_object* v_h_1069_, lean_object* v_ok_1070_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1068_, v_ok_1070_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lake_readTraceFile(lean_object* v_path_1073_, lean_object* v_a_1074_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_IO_FS_readFile(v_path_1073_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1077_; lean_object* v_a_1079_; lean_object* v___x_1088_; 
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_a_1077_);
lean_dec_ref(v___x_1076_);
v___x_1088_ = l_Lean_Json_parse(v_a_1077_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1089_);
lean_dec_ref(v___x_1088_);
v_a_1079_ = v_a_1089_;
goto v___jp_1078_;
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1091_; 
v_a_1090_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1090_);
lean_dec_ref(v___x_1088_);
v___x_1091_ = l_Lake_BuildMetadata_fromJson_x3f(v_a_1090_);
lean_dec(v_a_1090_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v_a_1092_; 
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc(v_a_1092_);
lean_dec_ref(v___x_1091_);
v_a_1079_ = v_a_1092_;
goto v___jp_1078_;
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1101_; 
lean_dec_ref(v_path_1073_);
v_a_1093_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1095_ = v___x_1091_;
v_isShared_1096_ = v_isSharedCheck_1101_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1091_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1101_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
lean_ctor_set_tag(v___x_1095_, 2);
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_a_1093_);
v___x_1098_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
lean_object* v___x_1099_; 
v___x_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1098_);
lean_ctor_set(v___x_1099_, 1, v_a_1074_);
return v___x_1099_;
}
}
}
}
v___jp_1078_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1080_ = ((lean_object*)(l_Lake_addPureTrace___redArg___closed__0));
v___x_1081_ = lean_string_append(v_path_1073_, v___x_1080_);
v___x_1082_ = lean_string_append(v___x_1081_, v_a_1079_);
lean_dec_ref(v_a_1079_);
v___x_1083_ = 2;
v___x_1084_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1084_, 0, v___x_1082_);
lean_ctor_set_uint8(v___x_1084_, sizeof(void*)*1, v___x_1083_);
v___x_1085_ = lean_array_push(v_a_1074_, v___x_1084_);
v___x_1086_ = lean_box(1);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
lean_ctor_set(v___x_1087_, 1, v___x_1085_);
return v___x_1087_;
}
}
else
{
lean_object* v_a_1102_; 
v_a_1102_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_a_1102_);
lean_dec_ref(v___x_1076_);
if (lean_obj_tag(v_a_1102_) == 11)
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
lean_dec_ref(v_a_1102_);
lean_dec_ref(v_path_1073_);
v___x_1103_ = lean_box(0);
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
lean_ctor_set(v___x_1104_, 1, v_a_1074_);
return v___x_1104_;
}
else
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1105_ = ((lean_object*)(l_Lake_readTraceFile___closed__0));
v___x_1106_ = lean_string_append(v_path_1073_, v___x_1105_);
v___x_1107_ = lean_io_error_to_string(v_a_1102_);
v___x_1108_ = lean_string_append(v___x_1106_, v___x_1107_);
lean_dec_ref(v___x_1107_);
v___x_1109_ = 3;
v___x_1110_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1110_, 0, v___x_1108_);
lean_ctor_set_uint8(v___x_1110_, sizeof(void*)*1, v___x_1109_);
v___x_1111_ = lean_array_get_size(v_a_1074_);
v___x_1112_ = lean_array_push(v_a_1074_, v___x_1110_);
v___x_1113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1111_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
return v___x_1113_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_readTraceFile___boxed(lean_object* v_path_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lake_readTraceFile(v_path_1114_, v_a_1115_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile(lean_object* v_path_1118_, lean_object* v_data_1119_){
_start:
{
lean_object* v___x_1121_; 
lean_inc_ref(v_path_1118_);
v___x_1121_ = l_Lake_createParentDirs(v_path_1118_);
if (lean_obj_tag(v___x_1121_) == 0)
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
lean_dec_ref(v___x_1121_);
v___x_1122_ = l_Lake_BuildMetadata_toJson(v_data_1119_);
v___x_1123_ = lean_unsigned_to_nat(80u);
v___x_1124_ = l_Lean_Json_pretty(v___x_1122_, v___x_1123_);
v___x_1125_ = l_IO_FS_writeFile(v_path_1118_, v___x_1124_);
lean_dec_ref(v___x_1124_);
lean_dec_ref(v_path_1118_);
return v___x_1125_;
}
else
{
lean_dec_ref(v_data_1119_);
lean_dec_ref(v_path_1118_);
return v___x_1121_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile___boxed(lean_object* v_path_1126_, lean_object* v_data_1127_, lean_object* v_a_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lake_BuildMetadata_writeFile(v_path_1126_, v_data_1127_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace(lean_object* v_path_1130_, uint64_t v_inputHash_1131_, lean_object* v_outputs_1132_){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = l_Lake_BuildMetadata_ofFetch(v_inputHash_1131_, v_outputs_1132_);
v___x_1135_ = l_Lake_BuildMetadata_writeFile(v_path_1130_, v___x_1134_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace___boxed(lean_object* v_path_1136_, lean_object* v_inputHash_1137_, lean_object* v_outputs_1138_, lean_object* v_a_1139_){
_start:
{
uint64_t v_inputHash_boxed_1140_; lean_object* v_res_1141_; 
v_inputHash_boxed_1140_ = lean_unbox_uint64(v_inputHash_1137_);
lean_dec_ref(v_inputHash_1137_);
v_res_1141_ = l_Lake_writeFetchTrace(v_path_1136_, v_inputHash_boxed_1140_, v_outputs_1138_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg(lean_object* v_inst_1142_, lean_object* v_path_1143_, lean_object* v_depTrace_1144_, lean_object* v_outputs_1145_, lean_object* v_log_1146_){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1148_ = lean_apply_1(v_inst_1142_, v_outputs_1145_);
v___x_1149_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1144_, v___x_1148_, v_log_1146_);
v___x_1150_ = l_Lake_BuildMetadata_writeFile(v_path_1143_, v___x_1149_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg___boxed(lean_object* v_inst_1151_, lean_object* v_path_1152_, lean_object* v_depTrace_1153_, lean_object* v_outputs_1154_, lean_object* v_log_1155_, lean_object* v_a_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lake_writeBuildTrace___redArg(v_inst_1151_, v_path_1152_, v_depTrace_1153_, v_outputs_1154_, v_log_1155_);
lean_dec_ref(v_depTrace_1153_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace(lean_object* v_00_u03b1_1158_, lean_object* v_inst_1159_, lean_object* v_path_1160_, lean_object* v_depTrace_1161_, lean_object* v_outputs_1162_, lean_object* v_log_1163_){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1165_ = lean_apply_1(v_inst_1159_, v_outputs_1162_);
v___x_1166_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1161_, v___x_1165_, v_log_1163_);
v___x_1167_ = l_Lake_BuildMetadata_writeFile(v_path_1160_, v___x_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___boxed(lean_object* v_00_u03b1_1168_, lean_object* v_inst_1169_, lean_object* v_path_1170_, lean_object* v_depTrace_1171_, lean_object* v_outputs_1172_, lean_object* v_log_1173_, lean_object* v_a_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Lake_writeBuildTrace(v_00_u03b1_1168_, v_inst_1169_, v_path_1170_, v_depTrace_1171_, v_outputs_1172_, v_log_1173_);
lean_dec_ref(v_depTrace_1171_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx(uint8_t v_x_1176_){
_start:
{
switch(v_x_1176_)
{
case 0:
{
lean_object* v___x_1177_; 
v___x_1177_ = lean_unsigned_to_nat(0u);
return v___x_1177_;
}
case 1:
{
lean_object* v___x_1178_; 
v___x_1178_ = lean_unsigned_to_nat(1u);
return v___x_1178_;
}
default: 
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_unsigned_to_nat(2u);
return v___x_1179_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx___boxed(lean_object* v_x_1180_){
_start:
{
uint8_t v_x_boxed_1181_; lean_object* v_res_1182_; 
v_x_boxed_1181_ = lean_unbox(v_x_1180_);
v_res_1182_ = l_Lake_OutputStatus_ctorIdx(v_x_boxed_1181_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_toCtorIdx(uint8_t v_x_1183_){
_start:
{
lean_object* v___x_1184_; 
v___x_1184_ = l_Lake_OutputStatus_ctorIdx(v_x_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_toCtorIdx___boxed(lean_object* v_x_1185_){
_start:
{
uint8_t v_x_4__boxed_1186_; lean_object* v_res_1187_; 
v_x_4__boxed_1186_ = lean_unbox(v_x_1185_);
v_res_1187_ = l_Lake_OutputStatus_toCtorIdx(v_x_4__boxed_1186_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg(lean_object* v_k_1188_){
_start:
{
lean_inc(v_k_1188_);
return v_k_1188_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg___boxed(lean_object* v_k_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lake_OutputStatus_ctorElim___redArg(v_k_1189_);
lean_dec(v_k_1189_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim(lean_object* v_motive_1191_, lean_object* v_ctorIdx_1192_, uint8_t v_t_1193_, lean_object* v_h_1194_, lean_object* v_k_1195_){
_start:
{
lean_inc(v_k_1195_);
return v_k_1195_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___boxed(lean_object* v_motive_1196_, lean_object* v_ctorIdx_1197_, lean_object* v_t_1198_, lean_object* v_h_1199_, lean_object* v_k_1200_){
_start:
{
uint8_t v_t_boxed_1201_; lean_object* v_res_1202_; 
v_t_boxed_1201_ = lean_unbox(v_t_1198_);
v_res_1202_ = l_Lake_OutputStatus_ctorElim(v_motive_1196_, v_ctorIdx_1197_, v_t_boxed_1201_, v_h_1199_, v_k_1200_);
lean_dec(v_k_1200_);
lean_dec(v_ctorIdx_1197_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg(lean_object* v_outOfDate_1203_){
_start:
{
lean_inc(v_outOfDate_1203_);
return v_outOfDate_1203_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg___boxed(lean_object* v_outOfDate_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lake_OutputStatus_outOfDate_elim___redArg(v_outOfDate_1204_);
lean_dec(v_outOfDate_1204_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim(lean_object* v_motive_1206_, uint8_t v_t_1207_, lean_object* v_h_1208_, lean_object* v_outOfDate_1209_){
_start:
{
lean_inc(v_outOfDate_1209_);
return v_outOfDate_1209_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___boxed(lean_object* v_motive_1210_, lean_object* v_t_1211_, lean_object* v_h_1212_, lean_object* v_outOfDate_1213_){
_start:
{
uint8_t v_t_boxed_1214_; lean_object* v_res_1215_; 
v_t_boxed_1214_ = lean_unbox(v_t_1211_);
v_res_1215_ = l_Lake_OutputStatus_outOfDate_elim(v_motive_1210_, v_t_boxed_1214_, v_h_1212_, v_outOfDate_1213_);
lean_dec(v_outOfDate_1213_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg(lean_object* v_mtimeUpToDate_1216_){
_start:
{
lean_inc(v_mtimeUpToDate_1216_);
return v_mtimeUpToDate_1216_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg___boxed(lean_object* v_mtimeUpToDate_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l_Lake_OutputStatus_mtimeUpToDate_elim___redArg(v_mtimeUpToDate_1217_);
lean_dec(v_mtimeUpToDate_1217_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim(lean_object* v_motive_1219_, uint8_t v_t_1220_, lean_object* v_h_1221_, lean_object* v_mtimeUpToDate_1222_){
_start:
{
lean_inc(v_mtimeUpToDate_1222_);
return v_mtimeUpToDate_1222_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___boxed(lean_object* v_motive_1223_, lean_object* v_t_1224_, lean_object* v_h_1225_, lean_object* v_mtimeUpToDate_1226_){
_start:
{
uint8_t v_t_boxed_1227_; lean_object* v_res_1228_; 
v_t_boxed_1227_ = lean_unbox(v_t_1224_);
v_res_1228_ = l_Lake_OutputStatus_mtimeUpToDate_elim(v_motive_1223_, v_t_boxed_1227_, v_h_1225_, v_mtimeUpToDate_1226_);
lean_dec(v_mtimeUpToDate_1226_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg(lean_object* v_hashUpToDate_1229_){
_start:
{
lean_inc(v_hashUpToDate_1229_);
return v_hashUpToDate_1229_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg___boxed(lean_object* v_hashUpToDate_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lake_OutputStatus_hashUpToDate_elim___redArg(v_hashUpToDate_1230_);
lean_dec(v_hashUpToDate_1230_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim(lean_object* v_motive_1232_, uint8_t v_t_1233_, lean_object* v_h_1234_, lean_object* v_hashUpToDate_1235_){
_start:
{
lean_inc(v_hashUpToDate_1235_);
return v_hashUpToDate_1235_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___boxed(lean_object* v_motive_1236_, lean_object* v_t_1237_, lean_object* v_h_1238_, lean_object* v_hashUpToDate_1239_){
_start:
{
uint8_t v_t_boxed_1240_; lean_object* v_res_1241_; 
v_t_boxed_1240_ = lean_unbox(v_t_1237_);
v_res_1241_ = l_Lake_OutputStatus_hashUpToDate_elim(v_motive_1236_, v_t_boxed_1240_, v_h_1238_, v_hashUpToDate_1239_);
lean_dec(v_hashUpToDate_1239_);
return v_res_1241_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofNat(lean_object* v_n_1242_){
_start:
{
lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1243_ = lean_unsigned_to_nat(0u);
v___x_1244_ = lean_nat_dec_le(v_n_1242_, v___x_1243_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; uint8_t v___x_1246_; 
v___x_1245_ = lean_unsigned_to_nat(1u);
v___x_1246_ = lean_nat_dec_le(v_n_1242_, v___x_1245_);
if (v___x_1246_ == 0)
{
uint8_t v___x_1247_; 
v___x_1247_ = 2;
return v___x_1247_;
}
else
{
uint8_t v___x_1248_; 
v___x_1248_ = 1;
return v___x_1248_;
}
}
else
{
uint8_t v___x_1249_; 
v___x_1249_ = 0;
return v___x_1249_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofNat___boxed(lean_object* v_n_1250_){
_start:
{
uint8_t v_res_1251_; lean_object* v_r_1252_; 
v_res_1251_ = l_Lake_OutputStatus_ofNat(v_n_1250_);
lean_dec(v_n_1250_);
v_r_1252_ = lean_box(v_res_1251_);
return v_r_1252_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqOutputStatus(uint8_t v_x_1253_, uint8_t v_y_1254_){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; uint8_t v___x_1257_; 
v___x_1255_ = l_Lake_OutputStatus_ctorIdx(v_x_1253_);
v___x_1256_ = l_Lake_OutputStatus_ctorIdx(v_y_1254_);
v___x_1257_ = lean_nat_dec_eq(v___x_1255_, v___x_1256_);
lean_dec(v___x_1256_);
lean_dec(v___x_1255_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqOutputStatus___boxed(lean_object* v_x_1258_, lean_object* v_y_1259_){
_start:
{
uint8_t v_x_13__boxed_1260_; uint8_t v_y_14__boxed_1261_; uint8_t v_res_1262_; lean_object* v_r_1263_; 
v_x_13__boxed_1260_ = lean_unbox(v_x_1258_);
v_y_14__boxed_1261_ = lean_unbox(v_y_1259_);
v_res_1262_ = l_Lake_instDecidableEqOutputStatus(v_x_13__boxed_1260_, v_y_14__boxed_1261_);
v_r_1263_ = lean_box(v_res_1262_);
return v_r_1263_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofHashCheck(uint8_t v_upToDate_1264_){
_start:
{
if (v_upToDate_1264_ == 0)
{
uint8_t v___x_1265_; 
v___x_1265_ = 0;
return v___x_1265_;
}
else
{
uint8_t v___x_1266_; 
v___x_1266_ = 2;
return v___x_1266_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofHashCheck___boxed(lean_object* v_upToDate_1267_){
_start:
{
uint8_t v_upToDate_boxed_1268_; uint8_t v_res_1269_; lean_object* v_r_1270_; 
v_upToDate_boxed_1268_ = lean_unbox(v_upToDate_1267_);
v_res_1269_ = l_Lake_OutputStatus_ofHashCheck(v_upToDate_boxed_1268_);
v_r_1270_ = lean_box(v_res_1269_);
return v_r_1270_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofMTimeCheck(uint8_t v_upToDate_1271_){
_start:
{
if (v_upToDate_1271_ == 0)
{
uint8_t v___x_1272_; 
v___x_1272_ = 0;
return v___x_1272_;
}
else
{
uint8_t v___x_1273_; 
v___x_1273_ = 1;
return v___x_1273_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofMTimeCheck___boxed(lean_object* v_upToDate_1274_){
_start:
{
uint8_t v_upToDate_boxed_1275_; uint8_t v_res_1276_; lean_object* v_r_1277_; 
v_upToDate_boxed_1275_ = lean_unbox(v_upToDate_1274_);
v_res_1276_ = l_Lake_OutputStatus_ofMTimeCheck(v_upToDate_boxed_1275_);
v_r_1277_ = lean_box(v_res_1276_);
return v_r_1277_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isUpToDate(uint8_t v_status_1278_){
_start:
{
uint8_t v___x_1279_; uint8_t v___x_1280_; 
v___x_1279_ = 0;
v___x_1280_ = l_Lake_instDecidableEqOutputStatus(v_status_1278_, v___x_1279_);
if (v___x_1280_ == 0)
{
uint8_t v___x_1281_; 
v___x_1281_ = 1;
return v___x_1281_;
}
else
{
uint8_t v___x_1282_; 
v___x_1282_ = 0;
return v___x_1282_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isUpToDate___boxed(lean_object* v_status_1283_){
_start:
{
uint8_t v_status_boxed_1284_; uint8_t v_res_1285_; lean_object* v_r_1286_; 
v_status_boxed_1284_ = lean_unbox(v_status_1283_);
v_res_1285_ = l_Lake_OutputStatus_isUpToDate(v_status_boxed_1284_);
v_r_1286_ = lean_box(v_res_1285_);
return v_r_1286_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isCacheable(uint8_t v_status_1287_){
_start:
{
uint8_t v___x_1288_; uint8_t v___x_1289_; 
v___x_1288_ = 1;
v___x_1289_ = l_Lake_instDecidableEqOutputStatus(v_status_1287_, v___x_1288_);
if (v___x_1289_ == 0)
{
uint8_t v___x_1290_; 
v___x_1290_ = 1;
return v___x_1290_;
}
else
{
uint8_t v___x_1291_; 
v___x_1291_ = 0;
return v___x_1291_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isCacheable___boxed(lean_object* v_status_1292_){
_start:
{
uint8_t v_status_boxed_1293_; uint8_t v_res_1294_; lean_object* v_r_1295_; 
v_status_boxed_1293_ = lean_unbox(v_status_1292_);
v_res_1294_ = l_Lake_OutputStatus_isCacheable(v_status_boxed_1293_);
v_r_1295_ = lean_box(v_res_1294_);
return v_r_1295_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_1296_; lean_object* v___f_1297_; 
v___x_1296_ = lean_alloc_closure((void*)(l_Lake_instDecidableEqHash___boxed), 2, 0);
v___f_1297_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1297_, 0, v___x_1296_);
return v___f_1297_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(lean_object* v_inst_1298_, lean_object* v_inst_1299_, lean_object* v_info_1300_, lean_object* v_depTrace_1301_, lean_object* v_depHash_1302_, lean_object* v_oldTrace_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_){
_start:
{
uint64_t v_hash_1307_; lean_object* v___f_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; uint8_t v___x_1311_; 
v_hash_1307_ = lean_ctor_get_uint64(v_depTrace_1301_, sizeof(void*)*3);
v___f_1308_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0);
v___x_1309_ = lean_box_uint64(v_hash_1307_);
v___x_1310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
v___x_1311_ = l_Option_instBEq_beq___redArg(v___f_1308_, v___x_1310_, v_depHash_1302_);
if (v___x_1311_ == 0)
{
lean_object* v_toBuildConfig_1312_; uint8_t v_oldMode_1313_; 
lean_dec_ref(v_inst_1298_);
v_toBuildConfig_1312_ = lean_ctor_get(v_a_1304_, 0);
v_oldMode_1313_ = lean_ctor_get_uint8(v_toBuildConfig_1312_, sizeof(void*)*2);
if (v_oldMode_1313_ == 0)
{
uint8_t v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
lean_dec(v_info_1300_);
lean_dec_ref(v_inst_1299_);
v___x_1314_ = 0;
v___x_1315_ = lean_box(v___x_1314_);
v___x_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
lean_ctor_set(v___x_1316_, 1, v_a_1305_);
return v___x_1316_;
}
else
{
uint8_t v___x_1317_; 
v___x_1317_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1299_, v_info_1300_, v_oldTrace_1303_);
if (v___x_1317_ == 0)
{
uint8_t v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1318_ = 0;
v___x_1319_ = lean_box(v___x_1318_);
v___x_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
lean_ctor_set(v___x_1320_, 1, v_a_1305_);
return v___x_1320_;
}
else
{
uint8_t v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1321_ = 1;
v___x_1322_ = lean_box(v___x_1321_);
v___x_1323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
lean_ctor_set(v___x_1323_, 1, v_a_1305_);
return v___x_1323_;
}
}
}
else
{
lean_object* v___x_1324_; uint8_t v___x_1325_; 
lean_dec_ref(v_inst_1299_);
v___x_1324_ = lean_apply_2(v_inst_1298_, v_info_1300_, lean_box(0));
v___x_1325_ = lean_unbox(v___x_1324_);
if (v___x_1325_ == 0)
{
uint8_t v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1326_ = 0;
v___x_1327_ = lean_box(v___x_1326_);
v___x_1328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
lean_ctor_set(v___x_1328_, 1, v_a_1305_);
return v___x_1328_;
}
else
{
uint8_t v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1329_ = 2;
v___x_1330_ = lean_box(v___x_1329_);
v___x_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
lean_ctor_set(v___x_1331_, 1, v_a_1305_);
return v___x_1331_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___boxed(lean_object* v_inst_1332_, lean_object* v_inst_1333_, lean_object* v_info_1334_, lean_object* v_depTrace_1335_, lean_object* v_depHash_1336_, lean_object* v_oldTrace_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1332_, v_inst_1333_, v_info_1334_, v_depTrace_1335_, v_depHash_1336_, v_oldTrace_1337_, v_a_1338_, v_a_1339_);
lean_dec_ref(v_a_1338_);
lean_dec_ref(v_oldTrace_1337_);
lean_dec_ref(v_depTrace_1335_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27(lean_object* v_00_u03b9_1342_, lean_object* v_inst_1343_, lean_object* v_inst_1344_, lean_object* v_info_1345_, lean_object* v_depTrace_1346_, lean_object* v_depHash_1347_, lean_object* v_oldTrace_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_){
_start:
{
lean_object* v___x_1356_; 
v___x_1356_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1343_, v_inst_1344_, v_info_1345_, v_depTrace_1346_, v_depHash_1347_, v_oldTrace_1348_, v_a_1353_, v_a_1354_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___boxed(lean_object* v_00_u03b9_1357_, lean_object* v_inst_1358_, lean_object* v_inst_1359_, lean_object* v_info_1360_, lean_object* v_depTrace_1361_, lean_object* v_depHash_1362_, lean_object* v_oldTrace_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27(v_00_u03b9_1357_, v_inst_1358_, v_inst_1359_, v_info_1360_, v_depTrace_1361_, v_depHash_1362_, v_oldTrace_1363_, v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
lean_dec_ref(v_a_1368_);
lean_dec(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec(v_a_1365_);
lean_dec_ref(v_a_1364_);
lean_dec_ref(v_oldTrace_1363_);
lean_dec_ref(v_depTrace_1361_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg(lean_object* v_inst_1372_, lean_object* v_inst_1373_, lean_object* v_info_1374_, lean_object* v_depTrace_1375_, lean_object* v_depHash_1376_, lean_object* v_oldTrace_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_){
_start:
{
lean_object* v___x_1381_; lean_object* v_a_1382_; lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1400_; 
v___x_1381_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1372_, v_inst_1373_, v_info_1374_, v_depTrace_1375_, v_depHash_1376_, v_oldTrace_1377_, v_a_1378_, v_a_1379_);
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
v_a_1383_ = lean_ctor_get(v___x_1381_, 1);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1385_ = v___x_1381_;
v_isShared_1386_ = v_isSharedCheck_1400_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_inc(v_a_1382_);
lean_dec(v___x_1381_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1400_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
uint8_t v___x_1387_; uint8_t v___x_1388_; uint8_t v___x_1389_; 
v___x_1387_ = 0;
v___x_1388_ = lean_unbox(v_a_1382_);
lean_dec(v_a_1382_);
v___x_1389_ = l_Lake_instDecidableEqOutputStatus(v___x_1388_, v___x_1387_);
if (v___x_1389_ == 0)
{
uint8_t v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1393_; 
v___x_1390_ = 1;
v___x_1391_ = lean_box(v___x_1390_);
if (v_isShared_1386_ == 0)
{
lean_ctor_set(v___x_1385_, 0, v___x_1391_);
v___x_1393_ = v___x_1385_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1391_);
lean_ctor_set(v_reuseFailAlloc_1394_, 1, v_a_1383_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
else
{
uint8_t v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1398_; 
v___x_1395_ = 0;
v___x_1396_ = lean_box(v___x_1395_);
if (v_isShared_1386_ == 0)
{
lean_ctor_set(v___x_1385_, 0, v___x_1396_);
v___x_1398_ = v___x_1385_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v___x_1396_);
lean_ctor_set(v_reuseFailAlloc_1399_, 1, v_a_1383_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg___boxed(lean_object* v_inst_1401_, lean_object* v_inst_1402_, lean_object* v_info_1403_, lean_object* v_depTrace_1404_, lean_object* v_depHash_1405_, lean_object* v_oldTrace_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_Lake_checkHashUpToDate___redArg(v_inst_1401_, v_inst_1402_, v_info_1403_, v_depTrace_1404_, v_depHash_1405_, v_oldTrace_1406_, v_a_1407_, v_a_1408_);
lean_dec_ref(v_a_1407_);
lean_dec_ref(v_oldTrace_1406_);
lean_dec_ref(v_depTrace_1404_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate(lean_object* v_00_u03b9_1411_, lean_object* v_inst_1412_, lean_object* v_inst_1413_, lean_object* v_info_1414_, lean_object* v_depTrace_1415_, lean_object* v_depHash_1416_, lean_object* v_oldTrace_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_){
_start:
{
lean_object* v___x_1425_; lean_object* v_a_1426_; lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1444_; 
v___x_1425_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1412_, v_inst_1413_, v_info_1414_, v_depTrace_1415_, v_depHash_1416_, v_oldTrace_1417_, v_a_1422_, v_a_1423_);
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
v_a_1427_ = lean_ctor_get(v___x_1425_, 1);
v_isSharedCheck_1444_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1429_ = v___x_1425_;
v_isShared_1430_ = v_isSharedCheck_1444_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_inc(v_a_1426_);
lean_dec(v___x_1425_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1444_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
uint8_t v___x_1431_; uint8_t v___x_1432_; uint8_t v___x_1433_; 
v___x_1431_ = 0;
v___x_1432_ = lean_unbox(v_a_1426_);
lean_dec(v_a_1426_);
v___x_1433_ = l_Lake_instDecidableEqOutputStatus(v___x_1432_, v___x_1431_);
if (v___x_1433_ == 0)
{
uint8_t v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1437_; 
v___x_1434_ = 1;
v___x_1435_ = lean_box(v___x_1434_);
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 0, v___x_1435_);
v___x_1437_ = v___x_1429_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1435_);
lean_ctor_set(v_reuseFailAlloc_1438_, 1, v_a_1427_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
else
{
uint8_t v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
v___x_1439_ = 0;
v___x_1440_ = lean_box(v___x_1439_);
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 0, v___x_1440_);
v___x_1442_ = v___x_1429_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v_a_1427_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___boxed(lean_object* v_00_u03b9_1445_, lean_object* v_inst_1446_, lean_object* v_inst_1447_, lean_object* v_info_1448_, lean_object* v_depTrace_1449_, lean_object* v_depHash_1450_, lean_object* v_oldTrace_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_Lake_checkHashUpToDate(v_00_u03b9_1445_, v_inst_1446_, v_inst_1447_, v_info_1448_, v_depTrace_1449_, v_depHash_1450_, v_oldTrace_1451_, v_a_1452_, v_a_1453_, v_a_1454_, v_a_1455_, v_a_1456_, v_a_1457_);
lean_dec_ref(v_a_1456_);
lean_dec(v_a_1455_);
lean_dec(v_a_1454_);
lean_dec(v_a_1453_);
lean_dec_ref(v_a_1452_);
lean_dec_ref(v_oldTrace_1451_);
lean_dec_ref(v_depTrace_1449_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(lean_object* v_as_1460_, size_t v_i_1461_, size_t v_stop_1462_, lean_object* v_b_1463_, lean_object* v___y_1464_){
_start:
{
uint8_t v___x_1466_; 
v___x_1466_ = lean_usize_dec_eq(v_i_1461_, v_stop_1462_);
if (v___x_1466_ == 0)
{
lean_object* v_log_1467_; uint8_t v_action_1468_; uint8_t v_wantsRebuild_1469_; lean_object* v_trace_1470_; lean_object* v_buildTime_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1484_; 
v_log_1467_ = lean_ctor_get(v___y_1464_, 0);
v_action_1468_ = lean_ctor_get_uint8(v___y_1464_, sizeof(void*)*3);
v_wantsRebuild_1469_ = lean_ctor_get_uint8(v___y_1464_, sizeof(void*)*3 + 1);
v_trace_1470_ = lean_ctor_get(v___y_1464_, 1);
v_buildTime_1471_ = lean_ctor_get(v___y_1464_, 2);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___y_1464_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1473_ = v___y_1464_;
v_isShared_1474_ = v_isSharedCheck_1484_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_buildTime_1471_);
lean_inc(v_trace_1470_);
lean_inc(v_log_1467_);
lean_dec(v___y_1464_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1484_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1479_; 
v___x_1475_ = lean_array_uget_borrowed(v_as_1460_, v_i_1461_);
v___x_1476_ = lean_box(0);
lean_inc(v___x_1475_);
v___x_1477_ = lean_array_push(v_log_1467_, v___x_1475_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v___x_1477_);
v___x_1479_ = v___x_1473_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1477_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v_trace_1470_);
lean_ctor_set(v_reuseFailAlloc_1483_, 2, v_buildTime_1471_);
lean_ctor_set_uint8(v_reuseFailAlloc_1483_, sizeof(void*)*3, v_action_1468_);
lean_ctor_set_uint8(v_reuseFailAlloc_1483_, sizeof(void*)*3 + 1, v_wantsRebuild_1469_);
v___x_1479_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
size_t v___x_1480_; size_t v___x_1481_; 
v___x_1480_ = ((size_t)1ULL);
v___x_1481_ = lean_usize_add(v_i_1461_, v___x_1480_);
v_i_1461_ = v___x_1481_;
v_b_1463_ = v___x_1476_;
v___y_1464_ = v___x_1479_;
goto _start;
}
}
}
else
{
lean_object* v___x_1485_; 
v___x_1485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1485_, 0, v_b_1463_);
lean_ctor_set(v___x_1485_, 1, v___y_1464_);
return v___x_1485_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg___boxed(lean_object* v_as_1486_, lean_object* v_i_1487_, lean_object* v_stop_1488_, lean_object* v_b_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
size_t v_i_boxed_1492_; size_t v_stop_boxed_1493_; lean_object* v_res_1494_; 
v_i_boxed_1492_ = lean_unbox_usize(v_i_1487_);
lean_dec(v_i_1487_);
v_stop_boxed_1493_ = lean_unbox_usize(v_stop_1488_);
lean_dec(v_stop_1488_);
v_res_1494_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_as_1486_, v_i_boxed_1492_, v_stop_boxed_1493_, v_b_1489_, v___y_1490_);
lean_dec_ref(v_as_1486_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(lean_object* v_log_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_){
_start:
{
lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; 
v___x_1503_ = lean_unsigned_to_nat(0u);
v___x_1504_ = lean_array_get_size(v_log_1495_);
v___x_1505_ = lean_box(0);
v___x_1506_ = lean_nat_dec_lt(v___x_1503_, v___x_1504_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; 
v___x_1507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1505_);
lean_ctor_set(v___x_1507_, 1, v_a_1501_);
return v___x_1507_;
}
else
{
uint8_t v___x_1508_; 
v___x_1508_ = lean_nat_dec_le(v___x_1504_, v___x_1504_);
if (v___x_1508_ == 0)
{
if (v___x_1506_ == 0)
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1505_);
lean_ctor_set(v___x_1509_, 1, v_a_1501_);
return v___x_1509_;
}
else
{
size_t v___x_1510_; size_t v___x_1511_; lean_object* v___x_1512_; 
v___x_1510_ = ((size_t)0ULL);
v___x_1511_ = lean_usize_of_nat(v___x_1504_);
v___x_1512_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1495_, v___x_1510_, v___x_1511_, v___x_1505_, v_a_1501_);
return v___x_1512_;
}
}
else
{
size_t v___x_1513_; size_t v___x_1514_; lean_object* v___x_1515_; 
v___x_1513_ = ((size_t)0ULL);
v___x_1514_ = lean_usize_of_nat(v___x_1504_);
v___x_1515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1495_, v___x_1513_, v___x_1514_, v___x_1505_, v_a_1501_);
return v___x_1515_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay___boxed(lean_object* v_log_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_);
lean_dec_ref(v_a_1521_);
lean_dec(v_a_1520_);
lean_dec(v_a_1519_);
lean_dec(v_a_1518_);
lean_dec_ref(v_a_1517_);
lean_dec_ref(v_log_1516_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0(lean_object* v_as_1525_, size_t v_i_1526_, size_t v_stop_1527_, lean_object* v_b_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_as_1525_, v_i_1526_, v_stop_1527_, v_b_1528_, v___y_1534_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___boxed(lean_object* v_as_1537_, lean_object* v_i_1538_, lean_object* v_stop_1539_, lean_object* v_b_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
size_t v_i_boxed_1548_; size_t v_stop_boxed_1549_; lean_object* v_res_1550_; 
v_i_boxed_1548_ = lean_unbox_usize(v_i_1538_);
lean_dec(v_i_1538_);
v_stop_boxed_1549_ = lean_unbox_usize(v_stop_1539_);
lean_dec(v_stop_1539_);
v_res_1550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0(v_as_1537_, v_i_boxed_1548_, v_stop_boxed_1549_, v_b_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec(v___y_1544_);
lean_dec(v___y_1543_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
lean_dec_ref(v_as_1537_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(lean_object* v_inst_1551_, lean_object* v_inst_1552_, lean_object* v_info_1553_, lean_object* v_depTrace_1554_, lean_object* v_savedTrace_1555_, lean_object* v_oldTrace_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_){
_start:
{
if (lean_obj_tag(v_savedTrace_1555_) == 2)
{
lean_object* v_data_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1614_; 
v_data_1564_ = lean_ctor_get(v_savedTrace_1555_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v_savedTrace_1555_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1566_ = v_savedTrace_1555_;
v_isShared_1567_ = v_isSharedCheck_1614_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_data_1564_);
lean_dec(v_savedTrace_1555_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1614_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
uint64_t v_depHash_1568_; lean_object* v_log_1569_; lean_object* v___x_1570_; lean_object* v___x_1572_; 
v_depHash_1568_ = lean_ctor_get_uint64(v_data_1564_, sizeof(void*)*3);
v_log_1569_ = lean_ctor_get(v_data_1564_, 2);
lean_inc_ref(v_log_1569_);
lean_dec_ref(v_data_1564_);
v___x_1570_ = lean_box_uint64(v_depHash_1568_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set_tag(v___x_1566_, 1);
lean_ctor_set(v___x_1566_, 0, v___x_1570_);
v___x_1572_ = v___x_1566_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1570_);
v___x_1572_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
lean_object* v___x_1573_; lean_object* v_a_1574_; lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1612_; 
v___x_1573_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1551_, v_inst_1552_, v_info_1553_, v_depTrace_1554_, v___x_1572_, v_oldTrace_1556_, v_a_1561_, v_a_1562_);
v_a_1574_ = lean_ctor_get(v___x_1573_, 0);
v_a_1575_ = lean_ctor_get(v___x_1573_, 1);
v_isSharedCheck_1612_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1577_ = v___x_1573_;
v_isShared_1578_ = v_isSharedCheck_1612_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_inc(v_a_1574_);
lean_dec(v___x_1573_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1612_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___y_1580_; uint8_t v___x_1584_; uint8_t v___x_1585_; uint8_t v___x_1586_; 
v___x_1584_ = 0;
v___x_1585_ = lean_unbox(v_a_1574_);
v___x_1586_ = l_Lake_instDecidableEqOutputStatus(v___x_1585_, v___x_1584_);
if (v___x_1586_ == 0)
{
lean_object* v_log_1587_; uint8_t v_action_1588_; uint8_t v_wantsRebuild_1589_; lean_object* v_trace_1590_; lean_object* v_buildTime_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1611_; 
v_log_1587_ = lean_ctor_get(v_a_1575_, 0);
v_action_1588_ = lean_ctor_get_uint8(v_a_1575_, sizeof(void*)*3);
v_wantsRebuild_1589_ = lean_ctor_get_uint8(v_a_1575_, sizeof(void*)*3 + 1);
v_trace_1590_ = lean_ctor_get(v_a_1575_, 1);
v_buildTime_1591_ = lean_ctor_get(v_a_1575_, 2);
v_isSharedCheck_1611_ = !lean_is_exclusive(v_a_1575_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1593_ = v_a_1575_;
v_isShared_1594_ = v_isSharedCheck_1611_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_buildTime_1591_);
lean_inc(v_trace_1590_);
lean_inc(v_log_1587_);
lean_dec(v_a_1575_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1611_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
uint8_t v___x_1595_; uint8_t v___x_1596_; lean_object* v___x_1598_; 
v___x_1595_ = 1;
v___x_1596_ = l_Lake_JobAction_merge(v_action_1588_, v___x_1595_);
if (v_isShared_1594_ == 0)
{
v___x_1598_ = v___x_1593_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_log_1587_);
lean_ctor_set(v_reuseFailAlloc_1610_, 1, v_trace_1590_);
lean_ctor_set(v_reuseFailAlloc_1610_, 2, v_buildTime_1591_);
lean_ctor_set_uint8(v_reuseFailAlloc_1610_, sizeof(void*)*3 + 1, v_wantsRebuild_1589_);
v___x_1598_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
lean_object* v___x_1599_; 
lean_ctor_set_uint8(v___x_1598_, sizeof(void*)*3, v___x_1596_);
v___x_1599_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_1569_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v___x_1598_);
lean_dec_ref(v_log_1569_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v_a_1600_; 
v_a_1600_ = lean_ctor_get(v___x_1599_, 1);
lean_inc(v_a_1600_);
lean_dec_ref(v___x_1599_);
v___y_1580_ = v_a_1600_;
goto v___jp_1579_;
}
else
{
lean_object* v_a_1601_; lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
lean_del_object(v___x_1577_);
lean_dec(v_a_1574_);
v_a_1601_ = lean_ctor_get(v___x_1599_, 0);
v_a_1602_ = lean_ctor_get(v___x_1599_, 1);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1599_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_inc(v_a_1601_);
lean_dec(v___x_1599_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1601_);
lean_ctor_set(v_reuseFailAlloc_1608_, 1, v_a_1602_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_log_1569_);
v___y_1580_ = v_a_1575_;
goto v___jp_1579_;
}
v___jp_1579_:
{
lean_object* v___x_1582_; 
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 1, v___y_1580_);
v___x_1582_ = v___x_1577_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v_a_1574_);
lean_ctor_set(v_reuseFailAlloc_1583_, 1, v___y_1580_);
v___x_1582_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
return v___x_1582_;
}
}
}
}
}
}
else
{
lean_object* v_toBuildConfig_1615_; uint8_t v_oldMode_1616_; 
lean_dec(v_savedTrace_1555_);
lean_dec_ref(v_inst_1551_);
v_toBuildConfig_1615_ = lean_ctor_get(v_a_1561_, 0);
v_oldMode_1616_ = lean_ctor_get_uint8(v_toBuildConfig_1615_, sizeof(void*)*2);
if (v_oldMode_1616_ == 0)
{
uint8_t v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
lean_dec(v_info_1553_);
lean_dec_ref(v_inst_1552_);
v___x_1617_ = 0;
v___x_1618_ = lean_box(v___x_1617_);
v___x_1619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1618_);
lean_ctor_set(v___x_1619_, 1, v_a_1562_);
return v___x_1619_;
}
else
{
uint8_t v___x_1620_; 
v___x_1620_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1552_, v_info_1553_, v_oldTrace_1556_);
if (v___x_1620_ == 0)
{
uint8_t v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1621_ = 0;
v___x_1622_ = lean_box(v___x_1621_);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1622_);
lean_ctor_set(v___x_1623_, 1, v_a_1562_);
return v___x_1623_;
}
else
{
uint8_t v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1624_ = 1;
v___x_1625_ = lean_box(v___x_1624_);
v___x_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1625_);
lean_ctor_set(v___x_1626_, 1, v_a_1562_);
return v___x_1626_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg___boxed(lean_object* v_inst_1627_, lean_object* v_inst_1628_, lean_object* v_info_1629_, lean_object* v_depTrace_1630_, lean_object* v_savedTrace_1631_, lean_object* v_oldTrace_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1627_, v_inst_1628_, v_info_1629_, v_depTrace_1630_, v_savedTrace_1631_, v_oldTrace_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_);
lean_dec_ref(v_a_1637_);
lean_dec(v_a_1636_);
lean_dec(v_a_1635_);
lean_dec(v_a_1634_);
lean_dec_ref(v_a_1633_);
lean_dec_ref(v_oldTrace_1632_);
lean_dec_ref(v_depTrace_1630_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27(lean_object* v_00_u03b9_1641_, lean_object* v_inst_1642_, lean_object* v_inst_1643_, lean_object* v_info_1644_, lean_object* v_depTrace_1645_, lean_object* v_savedTrace_1646_, lean_object* v_oldTrace_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1642_, v_inst_1643_, v_info_1644_, v_depTrace_1645_, v_savedTrace_1646_, v_oldTrace_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___boxed(lean_object* v_00_u03b9_1656_, lean_object* v_inst_1657_, lean_object* v_inst_1658_, lean_object* v_info_1659_, lean_object* v_depTrace_1660_, lean_object* v_savedTrace_1661_, lean_object* v_oldTrace_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l_Lake_SavedTrace_replayIfUpToDate_x27(v_00_u03b9_1656_, v_inst_1657_, v_inst_1658_, v_info_1659_, v_depTrace_1660_, v_savedTrace_1661_, v_oldTrace_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_);
lean_dec_ref(v_a_1667_);
lean_dec(v_a_1666_);
lean_dec(v_a_1665_);
lean_dec(v_a_1664_);
lean_dec_ref(v_a_1663_);
lean_dec_ref(v_oldTrace_1662_);
lean_dec_ref(v_depTrace_1660_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg(lean_object* v_inst_1671_, lean_object* v_inst_1672_, lean_object* v_info_1673_, lean_object* v_depTrace_1674_, lean_object* v_savedTrace_1675_, lean_object* v_oldTrace_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v___x_1684_; 
v___x_1684_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1671_, v_inst_1672_, v_info_1673_, v_depTrace_1674_, v_savedTrace_1675_, v_oldTrace_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_);
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_object* v_a_1685_; lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1703_; 
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
v_a_1686_ = lean_ctor_get(v___x_1684_, 1);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1688_ = v___x_1684_;
v_isShared_1689_ = v_isSharedCheck_1703_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_inc(v_a_1685_);
lean_dec(v___x_1684_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1703_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
uint8_t v___x_1690_; uint8_t v___x_1691_; uint8_t v___x_1692_; 
v___x_1690_ = 0;
v___x_1691_ = lean_unbox(v_a_1685_);
lean_dec(v_a_1685_);
v___x_1692_ = l_Lake_instDecidableEqOutputStatus(v___x_1691_, v___x_1690_);
if (v___x_1692_ == 0)
{
uint8_t v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1696_; 
v___x_1693_ = 1;
v___x_1694_ = lean_box(v___x_1693_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 0, v___x_1694_);
v___x_1696_ = v___x_1688_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v___x_1694_);
lean_ctor_set(v_reuseFailAlloc_1697_, 1, v_a_1686_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
else
{
uint8_t v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1701_; 
v___x_1698_ = 0;
v___x_1699_ = lean_box(v___x_1698_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 0, v___x_1699_);
v___x_1701_ = v___x_1688_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v___x_1699_);
lean_ctor_set(v_reuseFailAlloc_1702_, 1, v_a_1686_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
}
else
{
lean_object* v_a_1704_; lean_object* v_a_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1712_; 
v_a_1704_ = lean_ctor_get(v___x_1684_, 0);
v_a_1705_ = lean_ctor_get(v___x_1684_, 1);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1707_ = v___x_1684_;
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_a_1705_);
lean_inc(v_a_1704_);
lean_dec(v___x_1684_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1710_; 
if (v_isShared_1708_ == 0)
{
v___x_1710_ = v___x_1707_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_a_1704_);
lean_ctor_set(v_reuseFailAlloc_1711_, 1, v_a_1705_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg___boxed(lean_object* v_inst_1713_, lean_object* v_inst_1714_, lean_object* v_info_1715_, lean_object* v_depTrace_1716_, lean_object* v_savedTrace_1717_, lean_object* v_oldTrace_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lake_SavedTrace_replayIfUpToDate___redArg(v_inst_1713_, v_inst_1714_, v_info_1715_, v_depTrace_1716_, v_savedTrace_1717_, v_oldTrace_1718_, v_a_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
lean_dec_ref(v_a_1723_);
lean_dec(v_a_1722_);
lean_dec(v_a_1721_);
lean_dec(v_a_1720_);
lean_dec_ref(v_a_1719_);
lean_dec_ref(v_oldTrace_1718_);
lean_dec_ref(v_depTrace_1716_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate(lean_object* v_00_u03b9_1727_, lean_object* v_inst_1728_, lean_object* v_inst_1729_, lean_object* v_info_1730_, lean_object* v_depTrace_1731_, lean_object* v_savedTrace_1732_, lean_object* v_oldTrace_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
lean_object* v___x_1741_; 
v___x_1741_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1728_, v_inst_1729_, v_info_1730_, v_depTrace_1731_, v_savedTrace_1732_, v_oldTrace_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_, v_a_1739_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_a_1742_; lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1760_; 
v_a_1742_ = lean_ctor_get(v___x_1741_, 0);
v_a_1743_ = lean_ctor_get(v___x_1741_, 1);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1745_ = v___x_1741_;
v_isShared_1746_ = v_isSharedCheck_1760_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_inc(v_a_1742_);
lean_dec(v___x_1741_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1760_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
uint8_t v___x_1747_; uint8_t v___x_1748_; uint8_t v___x_1749_; 
v___x_1747_ = 0;
v___x_1748_ = lean_unbox(v_a_1742_);
lean_dec(v_a_1742_);
v___x_1749_ = l_Lake_instDecidableEqOutputStatus(v___x_1748_, v___x_1747_);
if (v___x_1749_ == 0)
{
uint8_t v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1753_; 
v___x_1750_ = 1;
v___x_1751_ = lean_box(v___x_1750_);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v___x_1751_);
v___x_1753_ = v___x_1745_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v___x_1751_);
lean_ctor_set(v_reuseFailAlloc_1754_, 1, v_a_1743_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
else
{
uint8_t v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1758_; 
v___x_1755_ = 0;
v___x_1756_ = lean_box(v___x_1755_);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v___x_1756_);
v___x_1758_ = v___x_1745_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1756_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v_a_1743_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
else
{
lean_object* v_a_1761_; lean_object* v_a_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1769_; 
v_a_1761_ = lean_ctor_get(v___x_1741_, 0);
v_a_1762_ = lean_ctor_get(v___x_1741_, 1);
v_isSharedCheck_1769_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1764_ = v___x_1741_;
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_a_1762_);
lean_inc(v_a_1761_);
lean_dec(v___x_1741_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1767_; 
if (v_isShared_1765_ == 0)
{
v___x_1767_ = v___x_1764_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1761_);
lean_ctor_set(v_reuseFailAlloc_1768_, 1, v_a_1762_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___boxed(lean_object* v_00_u03b9_1770_, lean_object* v_inst_1771_, lean_object* v_inst_1772_, lean_object* v_info_1773_, lean_object* v_depTrace_1774_, lean_object* v_savedTrace_1775_, lean_object* v_oldTrace_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Lake_SavedTrace_replayIfUpToDate(v_00_u03b9_1770_, v_inst_1771_, v_inst_1772_, v_info_1773_, v_depTrace_1774_, v_savedTrace_1775_, v_oldTrace_1776_, v_a_1777_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_);
lean_dec_ref(v_a_1781_);
lean_dec(v_a_1780_);
lean_dec(v_a_1779_);
lean_dec(v_a_1778_);
lean_dec_ref(v_a_1777_);
lean_dec_ref(v_oldTrace_1776_);
lean_dec_ref(v_depTrace_1774_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(uint64_t v_inputHash_1785_, lean_object* v_self_1786_, lean_object* v_a_1787_){
_start:
{
lean_object* v___y_1790_; 
if (lean_obj_tag(v_self_1786_) == 2)
{
lean_object* v_data_1808_; uint64_t v_depHash_1809_; lean_object* v_log_1810_; uint8_t v_synthetic_1811_; uint8_t v___x_1812_; lean_object* v___y_1814_; lean_object* v___y_1818_; 
v_data_1808_ = lean_ctor_get(v_self_1786_, 0);
v_depHash_1809_ = lean_ctor_get_uint64(v_data_1808_, sizeof(void*)*3);
v_log_1810_ = lean_ctor_get(v_data_1808_, 2);
v_synthetic_1811_ = lean_ctor_get_uint8(v_data_1808_, sizeof(void*)*3 + 8);
v___x_1812_ = lean_uint64_dec_eq(v_depHash_1809_, v_inputHash_1785_);
if (v___x_1812_ == 0)
{
v___y_1790_ = v_a_1787_;
goto v___jp_1789_;
}
else
{
if (v_synthetic_1811_ == 0)
{
goto v___jp_1829_;
}
else
{
lean_object* v___x_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; 
v___x_1855_ = lean_array_get_size(v_log_1810_);
v___x_1856_ = lean_unsigned_to_nat(0u);
v___x_1857_ = lean_nat_dec_eq(v___x_1855_, v___x_1856_);
if (v___x_1857_ == 0)
{
goto v___jp_1829_;
}
else
{
lean_object* v_log_1858_; uint8_t v_action_1859_; uint8_t v_wantsRebuild_1860_; lean_object* v_trace_1861_; lean_object* v_buildTime_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1871_; 
v_log_1858_ = lean_ctor_get(v_a_1787_, 0);
v_action_1859_ = lean_ctor_get_uint8(v_a_1787_, sizeof(void*)*3);
v_wantsRebuild_1860_ = lean_ctor_get_uint8(v_a_1787_, sizeof(void*)*3 + 1);
v_trace_1861_ = lean_ctor_get(v_a_1787_, 1);
v_buildTime_1862_ = lean_ctor_get(v_a_1787_, 2);
v_isSharedCheck_1871_ = !lean_is_exclusive(v_a_1787_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1864_ = v_a_1787_;
v_isShared_1865_ = v_isSharedCheck_1871_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_buildTime_1862_);
lean_inc(v_trace_1861_);
lean_inc(v_log_1858_);
lean_dec(v_a_1787_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1871_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
uint8_t v___x_1866_; uint8_t v___x_1867_; lean_object* v___x_1869_; 
v___x_1866_ = 2;
v___x_1867_ = l_Lake_JobAction_merge(v_action_1859_, v___x_1866_);
if (v_isShared_1865_ == 0)
{
v___x_1869_ = v___x_1864_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_log_1858_);
lean_ctor_set(v_reuseFailAlloc_1870_, 1, v_trace_1861_);
lean_ctor_set(v_reuseFailAlloc_1870_, 2, v_buildTime_1862_);
lean_ctor_set_uint8(v_reuseFailAlloc_1870_, sizeof(void*)*3 + 1, v_wantsRebuild_1860_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
lean_ctor_set_uint8(v___x_1869_, sizeof(void*)*3, v___x_1867_);
v___y_1814_ = v___x_1869_;
goto v___jp_1813_;
}
}
}
}
}
v___jp_1813_:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = lean_box(v___x_1812_);
v___x_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1815_);
lean_ctor_set(v___x_1816_, 1, v___y_1814_);
return v___x_1816_;
}
v___jp_1817_:
{
if (lean_obj_tag(v___y_1818_) == 0)
{
lean_object* v_a_1819_; 
v_a_1819_ = lean_ctor_get(v___y_1818_, 1);
lean_inc(v_a_1819_);
lean_dec_ref(v___y_1818_);
v___y_1814_ = v_a_1819_;
goto v___jp_1813_;
}
else
{
lean_object* v_a_1820_; lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
v_a_1820_ = lean_ctor_get(v___y_1818_, 0);
v_a_1821_ = lean_ctor_get(v___y_1818_, 1);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___y_1818_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___y_1818_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_inc(v_a_1820_);
lean_dec(v___y_1818_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1820_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
}
v___jp_1829_:
{
lean_object* v_log_1830_; uint8_t v_action_1831_; uint8_t v_wantsRebuild_1832_; lean_object* v_trace_1833_; lean_object* v_buildTime_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1854_; 
v_log_1830_ = lean_ctor_get(v_a_1787_, 0);
v_action_1831_ = lean_ctor_get_uint8(v_a_1787_, sizeof(void*)*3);
v_wantsRebuild_1832_ = lean_ctor_get_uint8(v_a_1787_, sizeof(void*)*3 + 1);
v_trace_1833_ = lean_ctor_get(v_a_1787_, 1);
v_buildTime_1834_ = lean_ctor_get(v_a_1787_, 2);
v_isSharedCheck_1854_ = !lean_is_exclusive(v_a_1787_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1836_ = v_a_1787_;
v_isShared_1837_ = v_isSharedCheck_1854_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_buildTime_1834_);
lean_inc(v_trace_1833_);
lean_inc(v_log_1830_);
lean_dec(v_a_1787_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1854_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
uint8_t v___x_1838_; uint8_t v___x_1839_; lean_object* v___x_1841_; 
v___x_1838_ = 1;
v___x_1839_ = l_Lake_JobAction_merge(v_action_1831_, v___x_1838_);
if (v_isShared_1837_ == 0)
{
v___x_1841_ = v___x_1836_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_log_1830_);
lean_ctor_set(v_reuseFailAlloc_1853_, 1, v_trace_1833_);
lean_ctor_set(v_reuseFailAlloc_1853_, 2, v_buildTime_1834_);
lean_ctor_set_uint8(v_reuseFailAlloc_1853_, sizeof(void*)*3 + 1, v_wantsRebuild_1832_);
v___x_1841_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; uint8_t v___x_1844_; 
lean_ctor_set_uint8(v___x_1841_, sizeof(void*)*3, v___x_1839_);
v___x_1842_ = lean_unsigned_to_nat(0u);
v___x_1843_ = lean_array_get_size(v_log_1810_);
v___x_1844_ = lean_nat_dec_lt(v___x_1842_, v___x_1843_);
if (v___x_1844_ == 0)
{
v___y_1814_ = v___x_1841_;
goto v___jp_1813_;
}
else
{
lean_object* v___x_1845_; uint8_t v___x_1846_; 
v___x_1845_ = lean_box(0);
v___x_1846_ = lean_nat_dec_le(v___x_1843_, v___x_1843_);
if (v___x_1846_ == 0)
{
if (v___x_1844_ == 0)
{
v___y_1814_ = v___x_1841_;
goto v___jp_1813_;
}
else
{
size_t v___x_1847_; size_t v___x_1848_; lean_object* v___x_1849_; 
v___x_1847_ = ((size_t)0ULL);
v___x_1848_ = lean_usize_of_nat(v___x_1843_);
v___x_1849_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1810_, v___x_1847_, v___x_1848_, v___x_1845_, v___x_1841_);
v___y_1818_ = v___x_1849_;
goto v___jp_1817_;
}
}
else
{
size_t v___x_1850_; size_t v___x_1851_; lean_object* v___x_1852_; 
v___x_1850_ = ((size_t)0ULL);
v___x_1851_ = lean_usize_of_nat(v___x_1843_);
v___x_1852_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1810_, v___x_1850_, v___x_1851_, v___x_1845_, v___x_1841_);
v___y_1818_ = v___x_1852_;
goto v___jp_1817_;
}
}
}
}
}
}
else
{
v___y_1790_ = v_a_1787_;
goto v___jp_1789_;
}
v___jp_1789_:
{
lean_object* v_log_1791_; uint8_t v_action_1792_; uint8_t v_wantsRebuild_1793_; lean_object* v_trace_1794_; lean_object* v_buildTime_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1807_; 
v_log_1791_ = lean_ctor_get(v___y_1790_, 0);
v_action_1792_ = lean_ctor_get_uint8(v___y_1790_, sizeof(void*)*3);
v_wantsRebuild_1793_ = lean_ctor_get_uint8(v___y_1790_, sizeof(void*)*3 + 1);
v_trace_1794_ = lean_ctor_get(v___y_1790_, 1);
v_buildTime_1795_ = lean_ctor_get(v___y_1790_, 2);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___y_1790_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1797_ = v___y_1790_;
v_isShared_1798_ = v_isSharedCheck_1807_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_buildTime_1795_);
lean_inc(v_trace_1794_);
lean_inc(v_log_1791_);
lean_dec(v___y_1790_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1807_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
uint8_t v___x_1799_; uint8_t v___x_1800_; lean_object* v___x_1802_; 
v___x_1799_ = 2;
v___x_1800_ = l_Lake_JobAction_merge(v_action_1792_, v___x_1799_);
if (v_isShared_1798_ == 0)
{
v___x_1802_ = v___x_1797_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_log_1791_);
lean_ctor_set(v_reuseFailAlloc_1806_, 1, v_trace_1794_);
lean_ctor_set(v_reuseFailAlloc_1806_, 2, v_buildTime_1795_);
lean_ctor_set_uint8(v_reuseFailAlloc_1806_, sizeof(void*)*3 + 1, v_wantsRebuild_1793_);
v___x_1802_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
uint8_t v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
lean_ctor_set_uint8(v___x_1802_, sizeof(void*)*3, v___x_1800_);
v___x_1803_ = 0;
v___x_1804_ = lean_box(v___x_1803_);
v___x_1805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1804_);
lean_ctor_set(v___x_1805_, 1, v___x_1802_);
return v___x_1805_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg___boxed(lean_object* v_inputHash_1872_, lean_object* v_self_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_){
_start:
{
uint64_t v_inputHash_boxed_1876_; lean_object* v_res_1877_; 
v_inputHash_boxed_1876_ = lean_unbox_uint64(v_inputHash_1872_);
lean_dec_ref(v_inputHash_1872_);
v_res_1877_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(v_inputHash_boxed_1876_, v_self_1873_, v_a_1874_);
lean_dec(v_self_1873_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate(uint64_t v_inputHash_1878_, lean_object* v_self_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_){
_start:
{
lean_object* v___x_1887_; 
v___x_1887_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(v_inputHash_1878_, v_self_1879_, v_a_1885_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___boxed(lean_object* v_inputHash_1888_, lean_object* v_self_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_){
_start:
{
uint64_t v_inputHash_boxed_1897_; lean_object* v_res_1898_; 
v_inputHash_boxed_1897_ = lean_unbox_uint64(v_inputHash_1888_);
lean_dec_ref(v_inputHash_1888_);
v_res_1898_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate(v_inputHash_boxed_1897_, v_self_1889_, v_a_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_);
lean_dec_ref(v_a_1894_);
lean_dec(v_a_1893_);
lean_dec(v_a_1892_);
lean_dec(v_a_1891_);
lean_dec_ref(v_a_1890_);
lean_dec(v_self_1889_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonPUnit___lam__0(lean_object* v_x_1899_){
_start:
{
lean_object* v___x_1900_; 
v___x_1900_ = lean_box(0);
return v___x_1900_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0(lean_object* v_x_1904_){
_start:
{
lean_object* v_descr_1905_; uint64_t v_hash_1906_; lean_object* v_ext_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; uint8_t v___x_1910_; 
v_descr_1905_ = lean_ctor_get(v_x_1904_, 0);
v_hash_1906_ = lean_ctor_get_uint64(v_descr_1905_, sizeof(void*)*1);
v_ext_1907_ = lean_ctor_get(v_descr_1905_, 0);
v___x_1908_ = lean_string_utf8_byte_size(v_ext_1907_);
v___x_1909_ = lean_unsigned_to_nat(0u);
v___x_1910_ = lean_nat_dec_eq(v___x_1908_, v___x_1909_);
if (v___x_1910_ == 0)
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1911_ = l_Lake_Hash_hex(v_hash_1906_);
v___x_1912_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_1913_ = lean_string_append(v___x_1911_, v___x_1912_);
v___x_1914_ = lean_string_append(v___x_1913_, v_ext_1907_);
v___x_1915_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1914_);
return v___x_1915_;
}
else
{
lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1916_ = l_Lake_Hash_hex(v_hash_1906_);
v___x_1917_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
return v___x_1917_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0___boxed(lean_object* v_x_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Lake_instToOutputJsonArtifact___lam__0(v_x_1918_);
lean_dec_ref(v_x_1918_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0(lean_object* v_val_1922_, lean_object* v_a_x3f_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v___x_1926_; lean_object* v_log_1927_; uint8_t v_action_1928_; uint8_t v_wantsRebuild_1929_; lean_object* v_trace_1930_; lean_object* v_buildTime_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1942_; 
v___x_1926_ = lean_io_mono_ms_now();
v_log_1927_ = lean_ctor_get(v___y_1924_, 0);
v_action_1928_ = lean_ctor_get_uint8(v___y_1924_, sizeof(void*)*3);
v_wantsRebuild_1929_ = lean_ctor_get_uint8(v___y_1924_, sizeof(void*)*3 + 1);
v_trace_1930_ = lean_ctor_get(v___y_1924_, 1);
v_buildTime_1931_ = lean_ctor_get(v___y_1924_, 2);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___y_1924_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1933_ = v___y_1924_;
v_isShared_1934_ = v_isSharedCheck_1942_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_buildTime_1931_);
lean_inc(v_trace_1930_);
lean_inc(v_log_1927_);
lean_dec(v___y_1924_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1942_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1939_; 
v___x_1935_ = lean_nat_sub(v___x_1926_, v_val_1922_);
lean_dec(v___x_1926_);
v___x_1936_ = lean_box(0);
v___x_1937_ = lean_nat_add(v_buildTime_1931_, v___x_1935_);
lean_dec(v___x_1935_);
lean_dec(v_buildTime_1931_);
if (v_isShared_1934_ == 0)
{
lean_ctor_set(v___x_1933_, 2, v___x_1937_);
v___x_1939_ = v___x_1933_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_log_1927_);
lean_ctor_set(v_reuseFailAlloc_1941_, 1, v_trace_1930_);
lean_ctor_set(v_reuseFailAlloc_1941_, 2, v___x_1937_);
lean_ctor_set_uint8(v_reuseFailAlloc_1941_, sizeof(void*)*3, v_action_1928_);
lean_ctor_set_uint8(v_reuseFailAlloc_1941_, sizeof(void*)*3 + 1, v_wantsRebuild_1929_);
v___x_1939_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
lean_object* v___x_1940_; 
v___x_1940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1936_);
lean_ctor_set(v___x_1940_, 1, v___x_1939_);
return v___x_1940_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0___boxed(lean_object* v_val_1943_, lean_object* v_a_x3f_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l_Lake_buildAction___redArg___lam__0(v_val_1943_, v_a_x3f_1944_, v___y_1945_);
lean_dec(v_a_x3f_1944_);
lean_dec(v_val_1943_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg(lean_object* v_inst_1953_, lean_object* v_depTrace_1954_, lean_object* v_traceFile_1955_, lean_object* v_build_1956_, uint8_t v_action_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_){
_start:
{
lean_object* v_a_1966_; lean_object* v_a_1967_; lean_object* v_log_1970_; uint8_t v_action_1971_; uint8_t v_wantsRebuild_1972_; lean_object* v_trace_1973_; lean_object* v_buildTime_1974_; lean_object* v_toBuildConfig_1980_; lean_object* v_log_1981_; uint8_t v_action_1982_; uint8_t v_wantsRebuild_1983_; lean_object* v_trace_1984_; lean_object* v_buildTime_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2091_; 
v_toBuildConfig_1980_ = lean_ctor_get(v_a_1962_, 0);
v_log_1981_ = lean_ctor_get(v_a_1963_, 0);
v_action_1982_ = lean_ctor_get_uint8(v_a_1963_, sizeof(void*)*3);
v_wantsRebuild_1983_ = lean_ctor_get_uint8(v_a_1963_, sizeof(void*)*3 + 1);
v_trace_1984_ = lean_ctor_get(v_a_1963_, 1);
v_buildTime_1985_ = lean_ctor_get(v_a_1963_, 2);
v_isSharedCheck_2091_ = !lean_is_exclusive(v_a_1963_);
if (v_isSharedCheck_2091_ == 0)
{
v___x_1987_ = v_a_1963_;
v_isShared_1988_ = v_isSharedCheck_2091_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_buildTime_1985_);
lean_inc(v_trace_1984_);
lean_inc(v_log_1981_);
lean_dec(v_a_1963_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2091_;
goto v_resetjp_1986_;
}
v___jp_1965_:
{
lean_object* v___x_1968_; 
v___x_1968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1968_, 0, v_a_1966_);
lean_ctor_set(v___x_1968_, 1, v_a_1967_);
return v___x_1968_;
}
v___jp_1969_:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v___x_1975_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__1));
v___x_1976_ = lean_array_get_size(v_log_1970_);
v___x_1977_ = lean_array_push(v_log_1970_, v___x_1975_);
v___x_1978_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1978_, 0, v___x_1977_);
lean_ctor_set(v___x_1978_, 1, v_trace_1973_);
lean_ctor_set(v___x_1978_, 2, v_buildTime_1974_);
lean_ctor_set_uint8(v___x_1978_, sizeof(void*)*3, v_action_1971_);
lean_ctor_set_uint8(v___x_1978_, sizeof(void*)*3 + 1, v_wantsRebuild_1972_);
v___x_1979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1976_);
lean_ctor_set(v___x_1979_, 1, v___x_1978_);
return v___x_1979_;
}
v_resetjp_1986_:
{
uint8_t v_noBuild_1989_; uint8_t v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v_noBuild_1989_ = lean_ctor_get_uint8(v_toBuildConfig_1980_, sizeof(void*)*2 + 2);
v___x_1990_ = l_Lake_JobAction_merge(v_action_1982_, v_action_1957_);
v___x_1991_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__2));
lean_inc_ref(v_traceFile_1955_);
v___x_1992_ = l_System_FilePath_addExtension(v_traceFile_1955_, v___x_1991_);
if (v_noBuild_1989_ == 0)
{
lean_object* v___x_1993_; lean_object* v___x_1995_; 
v___x_1993_ = lean_io_mono_ms_now();
lean_inc_ref(v_log_1981_);
if (v_isShared_1988_ == 0)
{
v___x_1995_ = v___x_1987_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_log_1981_);
lean_ctor_set(v_reuseFailAlloc_2075_, 1, v_trace_1984_);
lean_ctor_set(v_reuseFailAlloc_2075_, 2, v_buildTime_1985_);
lean_ctor_set_uint8(v_reuseFailAlloc_2075_, sizeof(void*)*3 + 1, v_wantsRebuild_1983_);
v___x_1995_ = v_reuseFailAlloc_2075_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
lean_object* v___x_1996_; lean_object* v_a_1998_; lean_object* v_a_1999_; 
lean_ctor_set_uint8(v___x_1995_, sizeof(void*)*3, v___x_1990_);
lean_inc_ref(v_a_1962_);
lean_inc(v_a_1961_);
lean_inc(v_a_1960_);
lean_inc(v_a_1959_);
v___x_1996_ = lean_apply_7(v_build_1956_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v___x_1995_, lean_box(0));
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_2003_; lean_object* v_a_2004_; lean_object* v_log_2005_; uint8_t v_action_2006_; uint8_t v_wantsRebuild_2007_; lean_object* v_trace_2008_; lean_object* v_buildTime_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
v_a_2003_ = lean_ctor_get(v___x_1996_, 1);
lean_inc(v_a_2003_);
v_a_2004_ = lean_ctor_get(v___x_1996_, 0);
lean_inc(v_a_2004_);
lean_dec_ref(v___x_1996_);
v_log_2005_ = lean_ctor_get(v_a_2003_, 0);
v_action_2006_ = lean_ctor_get_uint8(v_a_2003_, sizeof(void*)*3);
v_wantsRebuild_2007_ = lean_ctor_get_uint8(v_a_2003_, sizeof(void*)*3 + 1);
v_trace_2008_ = lean_ctor_get(v_a_2003_, 1);
v_buildTime_2009_ = lean_ctor_get(v_a_2003_, 2);
v___x_2010_ = lean_array_get_size(v_log_1981_);
lean_dec_ref(v_log_1981_);
v___x_2011_ = lean_array_get_size(v_log_2005_);
v___x_2012_ = l_Array_extract___redArg(v_log_2005_, v___x_2010_, v___x_2011_);
lean_inc(v_a_2004_);
v___x_2013_ = lean_apply_1(v_inst_1953_, v_a_2004_);
v___x_2014_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1954_, v___x_2013_, v___x_2012_);
v___x_2015_ = l_Lake_BuildMetadata_writeFile(v_traceFile_1955_, v___x_2014_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2056_; 
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2056_ == 0)
{
lean_object* v_unused_2057_; 
v_unused_2057_ = lean_ctor_get(v___x_2015_, 0);
lean_dec(v_unused_2057_);
v___x_2017_ = v___x_2015_;
v_isShared_2018_ = v_isSharedCheck_2056_;
goto v_resetjp_2016_;
}
else
{
lean_dec(v___x_2015_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2056_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2019_; 
v___x_2019_ = l_Lake_removeFileIfExists(v___x_1992_);
lean_dec_ref(v___x_1992_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2039_; 
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2039_ == 0)
{
lean_object* v_unused_2040_; 
v_unused_2040_ = lean_ctor_get(v___x_2019_, 0);
lean_dec(v_unused_2040_);
v___x_2021_ = v___x_2019_;
v_isShared_2022_ = v_isSharedCheck_2039_;
goto v_resetjp_2020_;
}
else
{
lean_dec(v___x_2019_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2039_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2024_; 
lean_inc(v_a_2004_);
if (v_isShared_2022_ == 0)
{
lean_ctor_set(v___x_2021_, 0, v_a_2004_);
v___x_2024_ = v___x_2021_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v_a_2004_);
v___x_2024_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
lean_object* v___x_2026_; 
if (v_isShared_2018_ == 0)
{
lean_ctor_set_tag(v___x_2017_, 1);
lean_ctor_set(v___x_2017_, 0, v___x_2024_);
v___x_2026_ = v___x_2017_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2024_);
v___x_2026_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
lean_object* v___x_2027_; lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2035_; 
v___x_2027_ = l_Lake_buildAction___redArg___lam__0(v___x_1993_, v___x_2026_, v_a_2003_);
lean_dec_ref(v___x_2026_);
lean_dec(v___x_1993_);
v_a_2028_ = lean_ctor_get(v___x_2027_, 1);
v_isSharedCheck_2035_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2035_ == 0)
{
lean_object* v_unused_2036_; 
v_unused_2036_ = lean_ctor_get(v___x_2027_, 0);
lean_dec(v_unused_2036_);
v___x_2030_ = v___x_2027_;
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v___x_2027_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2033_; 
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v_a_2004_);
v___x_2033_ = v___x_2030_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v_a_2004_);
lean_ctor_set(v_reuseFailAlloc_2034_, 1, v_a_2028_);
v___x_2033_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
return v___x_2033_;
}
}
}
}
}
}
else
{
lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2052_; 
lean_inc(v_buildTime_2009_);
lean_inc_ref(v_trace_2008_);
lean_inc_ref(v_log_2005_);
lean_del_object(v___x_2017_);
lean_dec(v_a_2004_);
v_isSharedCheck_2052_ = !lean_is_exclusive(v_a_2003_);
if (v_isSharedCheck_2052_ == 0)
{
lean_object* v_unused_2053_; lean_object* v_unused_2054_; lean_object* v_unused_2055_; 
v_unused_2053_ = lean_ctor_get(v_a_2003_, 2);
lean_dec(v_unused_2053_);
v_unused_2054_ = lean_ctor_get(v_a_2003_, 1);
lean_dec(v_unused_2054_);
v_unused_2055_ = lean_ctor_get(v_a_2003_, 0);
lean_dec(v_unused_2055_);
v___x_2042_ = v_a_2003_;
v_isShared_2043_ = v_isSharedCheck_2052_;
goto v_resetjp_2041_;
}
else
{
lean_dec(v_a_2003_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2052_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v_a_2044_; lean_object* v___x_2045_; uint8_t v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2050_; 
v_a_2044_ = lean_ctor_get(v___x_2019_, 0);
lean_inc(v_a_2044_);
lean_dec_ref(v___x_2019_);
v___x_2045_ = lean_io_error_to_string(v_a_2044_);
v___x_2046_ = 3;
v___x_2047_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2047_, 0, v___x_2045_);
lean_ctor_set_uint8(v___x_2047_, sizeof(void*)*1, v___x_2046_);
v___x_2048_ = lean_array_push(v_log_2005_, v___x_2047_);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 0, v___x_2048_);
v___x_2050_ = v___x_2042_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_2048_);
lean_ctor_set(v_reuseFailAlloc_2051_, 1, v_trace_2008_);
lean_ctor_set(v_reuseFailAlloc_2051_, 2, v_buildTime_2009_);
lean_ctor_set_uint8(v_reuseFailAlloc_2051_, sizeof(void*)*3, v_action_2006_);
lean_ctor_set_uint8(v_reuseFailAlloc_2051_, sizeof(void*)*3 + 1, v_wantsRebuild_2007_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
v_a_1998_ = v___x_2011_;
v_a_1999_ = v___x_2050_;
goto v___jp_1997_;
}
}
}
}
}
else
{
lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2069_; 
lean_inc(v_buildTime_2009_);
lean_inc_ref(v_trace_2008_);
lean_inc_ref(v_log_2005_);
lean_dec(v_a_2004_);
lean_dec_ref(v___x_1992_);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_a_2003_);
if (v_isSharedCheck_2069_ == 0)
{
lean_object* v_unused_2070_; lean_object* v_unused_2071_; lean_object* v_unused_2072_; 
v_unused_2070_ = lean_ctor_get(v_a_2003_, 2);
lean_dec(v_unused_2070_);
v_unused_2071_ = lean_ctor_get(v_a_2003_, 1);
lean_dec(v_unused_2071_);
v_unused_2072_ = lean_ctor_get(v_a_2003_, 0);
lean_dec(v_unused_2072_);
v___x_2059_ = v_a_2003_;
v_isShared_2060_ = v_isSharedCheck_2069_;
goto v_resetjp_2058_;
}
else
{
lean_dec(v_a_2003_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2069_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v_a_2061_; lean_object* v___x_2062_; uint8_t v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2067_; 
v_a_2061_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2061_);
lean_dec_ref(v___x_2015_);
v___x_2062_ = lean_io_error_to_string(v_a_2061_);
v___x_2063_ = 3;
v___x_2064_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2064_, 0, v___x_2062_);
lean_ctor_set_uint8(v___x_2064_, sizeof(void*)*1, v___x_2063_);
v___x_2065_ = lean_array_push(v_log_2005_, v___x_2064_);
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 0, v___x_2065_);
v___x_2067_ = v___x_2059_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2065_);
lean_ctor_set(v_reuseFailAlloc_2068_, 1, v_trace_2008_);
lean_ctor_set(v_reuseFailAlloc_2068_, 2, v_buildTime_2009_);
lean_ctor_set_uint8(v_reuseFailAlloc_2068_, sizeof(void*)*3, v_action_2006_);
lean_ctor_set_uint8(v_reuseFailAlloc_2068_, sizeof(void*)*3 + 1, v_wantsRebuild_2007_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
v_a_1998_ = v___x_2011_;
v_a_1999_ = v___x_2067_;
goto v___jp_1997_;
}
}
}
}
else
{
lean_object* v_a_2073_; lean_object* v_a_2074_; 
lean_dec_ref(v___x_1992_);
lean_dec_ref(v_log_1981_);
lean_dec_ref(v_traceFile_1955_);
lean_dec_ref(v_inst_1953_);
v_a_2073_ = lean_ctor_get(v___x_1996_, 0);
lean_inc(v_a_2073_);
v_a_2074_ = lean_ctor_get(v___x_1996_, 1);
lean_inc(v_a_2074_);
lean_dec_ref(v___x_1996_);
v_a_1998_ = v_a_2073_;
v_a_1999_ = v_a_2074_;
goto v___jp_1997_;
}
v___jp_1997_:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v_a_2002_; 
v___x_2000_ = lean_box(0);
v___x_2001_ = l_Lake_buildAction___redArg___lam__0(v___x_1993_, v___x_2000_, v_a_1999_);
lean_dec(v___x_1993_);
v_a_2002_ = lean_ctor_get(v___x_2001_, 1);
lean_inc(v_a_2002_);
lean_dec_ref(v___x_2001_);
v_a_1966_ = v_a_1998_;
v_a_1967_ = v_a_2002_;
goto v___jp_1965_;
}
}
}
else
{
uint8_t v___x_2076_; 
lean_dec_ref(v_a_1958_);
lean_dec_ref(v_build_1956_);
lean_dec_ref(v_inst_1953_);
v___x_2076_ = l_System_FilePath_pathExists(v_traceFile_1955_);
lean_dec_ref(v_traceFile_1955_);
if (v___x_2076_ == 0)
{
lean_dec_ref(v___x_1992_);
lean_del_object(v___x_1987_);
v_log_1970_ = v_log_1981_;
v_action_1971_ = v___x_1990_;
v_wantsRebuild_1972_ = v_noBuild_1989_;
v_trace_1973_ = v_trace_1984_;
v_buildTime_1974_ = v_buildTime_1985_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2077_ = lean_box(0);
v___x_2078_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___x_2079_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1954_, v___x_2077_, v___x_2078_);
v___x_2080_ = l_Lake_BuildMetadata_writeFile(v___x_1992_, v___x_2079_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_dec_ref(v___x_2080_);
lean_del_object(v___x_1987_);
v_log_1970_ = v_log_1981_;
v_action_1971_ = v___x_1990_;
v_wantsRebuild_1972_ = v_noBuild_1989_;
v_trace_1973_ = v_trace_1984_;
v_buildTime_1974_ = v_buildTime_1985_;
goto v___jp_1969_;
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2082_; uint8_t v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2088_; 
v_a_2081_ = lean_ctor_get(v___x_2080_, 0);
lean_inc(v_a_2081_);
lean_dec_ref(v___x_2080_);
v___x_2082_ = lean_io_error_to_string(v_a_2081_);
v___x_2083_ = 3;
v___x_2084_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2084_, 0, v___x_2082_);
lean_ctor_set_uint8(v___x_2084_, sizeof(void*)*1, v___x_2083_);
v___x_2085_ = lean_array_get_size(v_log_1981_);
v___x_2086_ = lean_array_push(v_log_1981_, v___x_2084_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_2086_);
v___x_2088_ = v___x_1987_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v___x_2086_);
lean_ctor_set(v_reuseFailAlloc_2090_, 1, v_trace_1984_);
lean_ctor_set(v_reuseFailAlloc_2090_, 2, v_buildTime_1985_);
v___x_2088_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
lean_object* v___x_2089_; 
lean_ctor_set_uint8(v___x_2088_, sizeof(void*)*3, v___x_1990_);
lean_ctor_set_uint8(v___x_2088_, sizeof(void*)*3 + 1, v_noBuild_1989_);
v___x_2089_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2085_);
lean_ctor_set(v___x_2089_, 1, v___x_2088_);
return v___x_2089_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___boxed(lean_object* v_inst_2092_, lean_object* v_depTrace_2093_, lean_object* v_traceFile_2094_, lean_object* v_build_2095_, lean_object* v_action_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_){
_start:
{
uint8_t v_action_boxed_2104_; lean_object* v_res_2105_; 
v_action_boxed_2104_ = lean_unbox(v_action_2096_);
v_res_2105_ = l_Lake_buildAction___redArg(v_inst_2092_, v_depTrace_2093_, v_traceFile_2094_, v_build_2095_, v_action_boxed_2104_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_);
lean_dec_ref(v_a_2101_);
lean_dec(v_a_2100_);
lean_dec(v_a_2099_);
lean_dec(v_a_2098_);
lean_dec_ref(v_depTrace_2093_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction(lean_object* v_00_u03b1_2106_, lean_object* v_inst_2107_, lean_object* v_depTrace_2108_, lean_object* v_traceFile_2109_, lean_object* v_build_2110_, uint8_t v_action_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_){
_start:
{
lean_object* v___x_2119_; 
v___x_2119_ = l_Lake_buildAction___redArg(v_inst_2107_, v_depTrace_2108_, v_traceFile_2109_, v_build_2110_, v_action_2111_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_, v_a_2116_, v_a_2117_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___boxed(lean_object* v_00_u03b1_2120_, lean_object* v_inst_2121_, lean_object* v_depTrace_2122_, lean_object* v_traceFile_2123_, lean_object* v_build_2124_, lean_object* v_action_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_){
_start:
{
uint8_t v_action_boxed_2133_; lean_object* v_res_2134_; 
v_action_boxed_2133_ = lean_unbox(v_action_2125_);
v_res_2134_ = l_Lake_buildAction(v_00_u03b1_2120_, v_inst_2121_, v_depTrace_2122_, v_traceFile_2123_, v_build_2124_, v_action_boxed_2133_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_);
lean_dec_ref(v_a_2130_);
lean_dec(v_a_2129_);
lean_dec(v_a_2128_);
lean_dec(v_a_2127_);
lean_dec_ref(v_depTrace_2122_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg(lean_object* v_inst_2135_, lean_object* v_inst_2136_, lean_object* v_info_2137_, lean_object* v_depTrace_2138_, lean_object* v_traceFile_2139_, lean_object* v_build_2140_, uint8_t v_action_2141_, lean_object* v_oldTrace_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_){
_start:
{
lean_object* v_log_2150_; uint8_t v_action_2151_; uint8_t v_wantsRebuild_2152_; lean_object* v_trace_2153_; lean_object* v_buildTime_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2222_; 
v_log_2150_ = lean_ctor_get(v_a_2148_, 0);
v_action_2151_ = lean_ctor_get_uint8(v_a_2148_, sizeof(void*)*3);
v_wantsRebuild_2152_ = lean_ctor_get_uint8(v_a_2148_, sizeof(void*)*3 + 1);
v_trace_2153_ = lean_ctor_get(v_a_2148_, 1);
v_buildTime_2154_ = lean_ctor_get(v_a_2148_, 2);
v_isSharedCheck_2222_ = !lean_is_exclusive(v_a_2148_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2156_ = v_a_2148_;
v_isShared_2157_ = v_isSharedCheck_2222_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_buildTime_2154_);
lean_inc(v_trace_2153_);
lean_inc(v_log_2150_);
lean_dec(v_a_2148_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2222_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2158_; 
lean_inc_ref(v_traceFile_2139_);
v___x_2158_ = l_Lake_readTraceFile(v_traceFile_2139_, v_log_2150_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v_a_2160_; lean_object* v___x_2162_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2159_);
v_a_2160_ = lean_ctor_get(v___x_2158_, 1);
lean_inc(v_a_2160_);
lean_dec_ref(v___x_2158_);
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 0, v_a_2160_);
v___x_2162_ = v___x_2156_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2160_);
lean_ctor_set(v_reuseFailAlloc_2209_, 1, v_trace_2153_);
lean_ctor_set(v_reuseFailAlloc_2209_, 2, v_buildTime_2154_);
lean_ctor_set_uint8(v_reuseFailAlloc_2209_, sizeof(void*)*3, v_action_2151_);
lean_ctor_set_uint8(v_reuseFailAlloc_2209_, sizeof(void*)*3 + 1, v_wantsRebuild_2152_);
v___x_2162_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
lean_object* v___x_2163_; 
v___x_2163_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2135_, v_inst_2136_, v_info_2137_, v_depTrace_2138_, v_a_2159_, v_oldTrace_2142_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v___x_2162_);
if (lean_obj_tag(v___x_2163_) == 0)
{
lean_object* v_a_2164_; lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2199_; 
v_a_2164_ = lean_ctor_get(v___x_2163_, 0);
v_a_2165_ = lean_ctor_get(v___x_2163_, 1);
v_isSharedCheck_2199_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2199_ == 0)
{
v___x_2167_ = v___x_2163_;
v_isShared_2168_ = v_isSharedCheck_2199_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_inc(v_a_2164_);
lean_dec(v___x_2163_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2199_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
uint8_t v___x_2169_; uint8_t v___x_2170_; uint8_t v___x_2171_; 
v___x_2169_ = 0;
v___x_2170_ = lean_unbox(v_a_2164_);
lean_dec(v_a_2164_);
v___x_2171_ = l_Lake_instDecidableEqOutputStatus(v___x_2170_, v___x_2169_);
if (v___x_2171_ == 0)
{
uint8_t v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2175_; 
lean_dec_ref(v_a_2143_);
lean_dec_ref(v_build_2140_);
lean_dec_ref(v_traceFile_2139_);
v___x_2172_ = 1;
v___x_2173_ = lean_box(v___x_2172_);
if (v_isShared_2168_ == 0)
{
lean_ctor_set(v___x_2167_, 0, v___x_2173_);
v___x_2175_ = v___x_2167_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2173_);
lean_ctor_set(v_reuseFailAlloc_2176_, 1, v_a_2165_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
else
{
lean_object* v___f_2177_; lean_object* v___x_2178_; 
lean_del_object(v___x_2167_);
v___f_2177_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
v___x_2178_ = l_Lake_buildAction___redArg(v___f_2177_, v_depTrace_2138_, v_traceFile_2139_, v_build_2140_, v_action_2141_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2165_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2188_; 
v_a_2179_ = lean_ctor_get(v___x_2178_, 1);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2188_ == 0)
{
lean_object* v_unused_2189_; 
v_unused_2189_ = lean_ctor_get(v___x_2178_, 0);
lean_dec(v_unused_2189_);
v___x_2181_ = v___x_2178_;
v_isShared_2182_ = v_isSharedCheck_2188_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v___x_2178_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2188_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
uint8_t v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2186_; 
v___x_2183_ = 0;
v___x_2184_ = lean_box(v___x_2183_);
if (v_isShared_2182_ == 0)
{
lean_ctor_set(v___x_2181_, 0, v___x_2184_);
v___x_2186_ = v___x_2181_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v___x_2184_);
lean_ctor_set(v_reuseFailAlloc_2187_, 1, v_a_2179_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
else
{
lean_object* v_a_2190_; lean_object* v_a_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2198_; 
v_a_2190_ = lean_ctor_get(v___x_2178_, 0);
v_a_2191_ = lean_ctor_get(v___x_2178_, 1);
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2193_ = v___x_2178_;
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_a_2191_);
lean_inc(v_a_2190_);
lean_dec(v___x_2178_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2196_; 
if (v_isShared_2194_ == 0)
{
v___x_2196_ = v___x_2193_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v_a_2190_);
lean_ctor_set(v_reuseFailAlloc_2197_, 1, v_a_2191_);
v___x_2196_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
return v___x_2196_;
}
}
}
}
}
}
else
{
lean_object* v_a_2200_; lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
lean_dec_ref(v_a_2143_);
lean_dec_ref(v_build_2140_);
lean_dec_ref(v_traceFile_2139_);
v_a_2200_ = lean_ctor_get(v___x_2163_, 0);
v_a_2201_ = lean_ctor_get(v___x_2163_, 1);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2203_ = v___x_2163_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_inc(v_a_2200_);
lean_dec(v___x_2163_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_a_2200_);
lean_ctor_set(v_reuseFailAlloc_2207_, 1, v_a_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
}
}
else
{
lean_object* v_a_2210_; lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2221_; 
lean_dec_ref(v_a_2143_);
lean_dec_ref(v_build_2140_);
lean_dec_ref(v_traceFile_2139_);
lean_dec(v_info_2137_);
lean_dec_ref(v_inst_2136_);
lean_dec_ref(v_inst_2135_);
v_a_2210_ = lean_ctor_get(v___x_2158_, 0);
v_a_2211_ = lean_ctor_get(v___x_2158_, 1);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2213_ = v___x_2158_;
v_isShared_2214_ = v_isSharedCheck_2221_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_inc(v_a_2210_);
lean_dec(v___x_2158_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2221_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2216_; 
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 0, v_a_2211_);
v___x_2216_ = v___x_2156_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2211_);
lean_ctor_set(v_reuseFailAlloc_2220_, 1, v_trace_2153_);
lean_ctor_set(v_reuseFailAlloc_2220_, 2, v_buildTime_2154_);
lean_ctor_set_uint8(v_reuseFailAlloc_2220_, sizeof(void*)*3, v_action_2151_);
lean_ctor_set_uint8(v_reuseFailAlloc_2220_, sizeof(void*)*3 + 1, v_wantsRebuild_2152_);
v___x_2216_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
lean_object* v___x_2218_; 
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 1, v___x_2216_);
v___x_2218_ = v___x_2213_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_a_2210_);
lean_ctor_set(v_reuseFailAlloc_2219_, 1, v___x_2216_);
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
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg___boxed(lean_object* v_inst_2223_, lean_object* v_inst_2224_, lean_object* v_info_2225_, lean_object* v_depTrace_2226_, lean_object* v_traceFile_2227_, lean_object* v_build_2228_, lean_object* v_action_2229_, lean_object* v_oldTrace_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_){
_start:
{
uint8_t v_action_boxed_2238_; lean_object* v_res_2239_; 
v_action_boxed_2238_ = lean_unbox(v_action_2229_);
v_res_2239_ = l_Lake_buildUnlessUpToDate_x3f___redArg(v_inst_2223_, v_inst_2224_, v_info_2225_, v_depTrace_2226_, v_traceFile_2227_, v_build_2228_, v_action_boxed_2238_, v_oldTrace_2230_, v_a_2231_, v_a_2232_, v_a_2233_, v_a_2234_, v_a_2235_, v_a_2236_);
lean_dec_ref(v_a_2235_);
lean_dec(v_a_2234_);
lean_dec(v_a_2233_);
lean_dec(v_a_2232_);
lean_dec_ref(v_oldTrace_2230_);
lean_dec_ref(v_depTrace_2226_);
return v_res_2239_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f(lean_object* v_00_u03b9_2240_, lean_object* v_inst_2241_, lean_object* v_inst_2242_, lean_object* v_info_2243_, lean_object* v_depTrace_2244_, lean_object* v_traceFile_2245_, lean_object* v_build_2246_, uint8_t v_action_2247_, lean_object* v_oldTrace_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_){
_start:
{
lean_object* v_log_2256_; uint8_t v_action_2257_; uint8_t v_wantsRebuild_2258_; lean_object* v_trace_2259_; lean_object* v_buildTime_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2328_; 
v_log_2256_ = lean_ctor_get(v_a_2254_, 0);
v_action_2257_ = lean_ctor_get_uint8(v_a_2254_, sizeof(void*)*3);
v_wantsRebuild_2258_ = lean_ctor_get_uint8(v_a_2254_, sizeof(void*)*3 + 1);
v_trace_2259_ = lean_ctor_get(v_a_2254_, 1);
v_buildTime_2260_ = lean_ctor_get(v_a_2254_, 2);
v_isSharedCheck_2328_ = !lean_is_exclusive(v_a_2254_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2262_ = v_a_2254_;
v_isShared_2263_ = v_isSharedCheck_2328_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_buildTime_2260_);
lean_inc(v_trace_2259_);
lean_inc(v_log_2256_);
lean_dec(v_a_2254_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2328_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2264_; 
lean_inc_ref(v_traceFile_2245_);
v___x_2264_ = l_Lake_readTraceFile(v_traceFile_2245_, v_log_2256_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; lean_object* v_a_2266_; lean_object* v___x_2268_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
lean_inc(v_a_2265_);
v_a_2266_ = lean_ctor_get(v___x_2264_, 1);
lean_inc(v_a_2266_);
lean_dec_ref(v___x_2264_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 0, v_a_2266_);
v___x_2268_ = v___x_2262_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_a_2266_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v_trace_2259_);
lean_ctor_set(v_reuseFailAlloc_2315_, 2, v_buildTime_2260_);
lean_ctor_set_uint8(v_reuseFailAlloc_2315_, sizeof(void*)*3, v_action_2257_);
lean_ctor_set_uint8(v_reuseFailAlloc_2315_, sizeof(void*)*3 + 1, v_wantsRebuild_2258_);
v___x_2268_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
lean_object* v___x_2269_; 
v___x_2269_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2241_, v_inst_2242_, v_info_2243_, v_depTrace_2244_, v_a_2265_, v_oldTrace_2248_, v_a_2249_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_, v___x_2268_);
if (lean_obj_tag(v___x_2269_) == 0)
{
lean_object* v_a_2270_; lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2305_; 
v_a_2270_ = lean_ctor_get(v___x_2269_, 0);
v_a_2271_ = lean_ctor_get(v___x_2269_, 1);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2273_ = v___x_2269_;
v_isShared_2274_ = v_isSharedCheck_2305_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_inc(v_a_2270_);
lean_dec(v___x_2269_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2305_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
uint8_t v___x_2275_; uint8_t v___x_2276_; uint8_t v___x_2277_; 
v___x_2275_ = 0;
v___x_2276_ = lean_unbox(v_a_2270_);
lean_dec(v_a_2270_);
v___x_2277_ = l_Lake_instDecidableEqOutputStatus(v___x_2276_, v___x_2275_);
if (v___x_2277_ == 0)
{
uint8_t v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2281_; 
lean_dec_ref(v_a_2249_);
lean_dec_ref(v_build_2246_);
lean_dec_ref(v_traceFile_2245_);
v___x_2278_ = 1;
v___x_2279_ = lean_box(v___x_2278_);
if (v_isShared_2274_ == 0)
{
lean_ctor_set(v___x_2273_, 0, v___x_2279_);
v___x_2281_ = v___x_2273_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v___x_2279_);
lean_ctor_set(v_reuseFailAlloc_2282_, 1, v_a_2271_);
v___x_2281_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
return v___x_2281_;
}
}
else
{
lean_object* v___f_2283_; lean_object* v___x_2284_; 
lean_del_object(v___x_2273_);
v___f_2283_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
v___x_2284_ = l_Lake_buildAction___redArg(v___f_2283_, v_depTrace_2244_, v_traceFile_2245_, v_build_2246_, v_action_2247_, v_a_2249_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_, v_a_2271_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2294_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 1);
v_isSharedCheck_2294_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2294_ == 0)
{
lean_object* v_unused_2295_; 
v_unused_2295_ = lean_ctor_get(v___x_2284_, 0);
lean_dec(v_unused_2295_);
v___x_2287_ = v___x_2284_;
v_isShared_2288_ = v_isSharedCheck_2294_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2294_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
uint8_t v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2292_; 
v___x_2289_ = 0;
v___x_2290_ = lean_box(v___x_2289_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 0, v___x_2290_);
v___x_2292_ = v___x_2287_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v___x_2290_);
lean_ctor_set(v_reuseFailAlloc_2293_, 1, v_a_2285_);
v___x_2292_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
return v___x_2292_;
}
}
}
else
{
lean_object* v_a_2296_; lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
v_a_2296_ = lean_ctor_get(v___x_2284_, 0);
v_a_2297_ = lean_ctor_get(v___x_2284_, 1);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2284_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_inc(v_a_2296_);
lean_dec(v___x_2284_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2296_);
lean_ctor_set(v_reuseFailAlloc_2303_, 1, v_a_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
}
}
else
{
lean_object* v_a_2306_; lean_object* v_a_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2314_; 
lean_dec_ref(v_a_2249_);
lean_dec_ref(v_build_2246_);
lean_dec_ref(v_traceFile_2245_);
v_a_2306_ = lean_ctor_get(v___x_2269_, 0);
v_a_2307_ = lean_ctor_get(v___x_2269_, 1);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2309_ = v___x_2269_;
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_a_2307_);
lean_inc(v_a_2306_);
lean_dec(v___x_2269_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_a_2306_);
lean_ctor_set(v_reuseFailAlloc_2313_, 1, v_a_2307_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
}
else
{
lean_object* v_a_2316_; lean_object* v_a_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2327_; 
lean_dec_ref(v_a_2249_);
lean_dec_ref(v_build_2246_);
lean_dec_ref(v_traceFile_2245_);
lean_dec(v_info_2243_);
lean_dec_ref(v_inst_2242_);
lean_dec_ref(v_inst_2241_);
v_a_2316_ = lean_ctor_get(v___x_2264_, 0);
v_a_2317_ = lean_ctor_get(v___x_2264_, 1);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2319_ = v___x_2264_;
v_isShared_2320_ = v_isSharedCheck_2327_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_a_2317_);
lean_inc(v_a_2316_);
lean_dec(v___x_2264_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2327_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v___x_2322_; 
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 0, v_a_2317_);
v___x_2322_ = v___x_2262_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2317_);
lean_ctor_set(v_reuseFailAlloc_2326_, 1, v_trace_2259_);
lean_ctor_set(v_reuseFailAlloc_2326_, 2, v_buildTime_2260_);
lean_ctor_set_uint8(v_reuseFailAlloc_2326_, sizeof(void*)*3, v_action_2257_);
lean_ctor_set_uint8(v_reuseFailAlloc_2326_, sizeof(void*)*3 + 1, v_wantsRebuild_2258_);
v___x_2322_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
lean_object* v___x_2324_; 
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 1, v___x_2322_);
v___x_2324_ = v___x_2319_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2316_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v___x_2322_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___boxed(lean_object* v_00_u03b9_2329_, lean_object* v_inst_2330_, lean_object* v_inst_2331_, lean_object* v_info_2332_, lean_object* v_depTrace_2333_, lean_object* v_traceFile_2334_, lean_object* v_build_2335_, lean_object* v_action_2336_, lean_object* v_oldTrace_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_){
_start:
{
uint8_t v_action_boxed_2345_; lean_object* v_res_2346_; 
v_action_boxed_2345_ = lean_unbox(v_action_2336_);
v_res_2346_ = l_Lake_buildUnlessUpToDate_x3f(v_00_u03b9_2329_, v_inst_2330_, v_inst_2331_, v_info_2332_, v_depTrace_2333_, v_traceFile_2334_, v_build_2335_, v_action_boxed_2345_, v_oldTrace_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_);
lean_dec_ref(v_a_2342_);
lean_dec(v_a_2341_);
lean_dec(v_a_2340_);
lean_dec(v_a_2339_);
lean_dec_ref(v_oldTrace_2337_);
lean_dec_ref(v_depTrace_2333_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg(lean_object* v_inst_2347_, lean_object* v_inst_2348_, lean_object* v_info_2349_, lean_object* v_depTrace_2350_, lean_object* v_traceFile_2351_, lean_object* v_build_2352_, uint8_t v_action_2353_, lean_object* v_oldTrace_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_){
_start:
{
lean_object* v_a_2363_; lean_object* v_a_2364_; lean_object* v_log_2366_; uint8_t v_action_2367_; uint8_t v_wantsRebuild_2368_; lean_object* v_trace_2369_; lean_object* v_buildTime_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2408_; 
v_log_2366_ = lean_ctor_get(v_a_2360_, 0);
v_action_2367_ = lean_ctor_get_uint8(v_a_2360_, sizeof(void*)*3);
v_wantsRebuild_2368_ = lean_ctor_get_uint8(v_a_2360_, sizeof(void*)*3 + 1);
v_trace_2369_ = lean_ctor_get(v_a_2360_, 1);
v_buildTime_2370_ = lean_ctor_get(v_a_2360_, 2);
v_isSharedCheck_2408_ = !lean_is_exclusive(v_a_2360_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2372_ = v_a_2360_;
v_isShared_2373_ = v_isSharedCheck_2408_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_buildTime_2370_);
lean_inc(v_trace_2369_);
lean_inc(v_log_2366_);
lean_dec(v_a_2360_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2408_;
goto v_resetjp_2371_;
}
v___jp_2362_:
{
lean_object* v___x_2365_; 
v___x_2365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2365_, 0, v_a_2363_);
lean_ctor_set(v___x_2365_, 1, v_a_2364_);
return v___x_2365_;
}
v_resetjp_2371_:
{
lean_object* v___x_2374_; 
lean_inc_ref(v_traceFile_2351_);
v___x_2374_ = l_Lake_readTraceFile(v_traceFile_2351_, v_log_2366_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v_a_2376_; lean_object* v___x_2378_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
lean_inc(v_a_2375_);
v_a_2376_ = lean_ctor_get(v___x_2374_, 1);
lean_inc(v_a_2376_);
lean_dec_ref(v___x_2374_);
if (v_isShared_2373_ == 0)
{
lean_ctor_set(v___x_2372_, 0, v_a_2376_);
v___x_2378_ = v___x_2372_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v_a_2376_);
lean_ctor_set(v_reuseFailAlloc_2402_, 1, v_trace_2369_);
lean_ctor_set(v_reuseFailAlloc_2402_, 2, v_buildTime_2370_);
lean_ctor_set_uint8(v_reuseFailAlloc_2402_, sizeof(void*)*3, v_action_2367_);
lean_ctor_set_uint8(v_reuseFailAlloc_2402_, sizeof(void*)*3 + 1, v_wantsRebuild_2368_);
v___x_2378_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
lean_object* v___x_2379_; 
v___x_2379_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2347_, v_inst_2348_, v_info_2349_, v_depTrace_2350_, v_a_2375_, v_oldTrace_2354_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v___x_2378_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2399_; 
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
v_a_2381_ = lean_ctor_get(v___x_2379_, 1);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2383_ = v___x_2379_;
v_isShared_2384_ = v_isSharedCheck_2399_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_inc(v_a_2380_);
lean_dec(v___x_2379_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2399_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2385_; lean_object* v_a_2387_; uint8_t v___x_2391_; uint8_t v___x_2392_; uint8_t v___x_2393_; 
v___x_2385_ = lean_box(0);
v___x_2391_ = 0;
v___x_2392_ = lean_unbox(v_a_2380_);
lean_dec(v_a_2380_);
v___x_2393_ = l_Lake_instDecidableEqOutputStatus(v___x_2392_, v___x_2391_);
if (v___x_2393_ == 0)
{
lean_dec_ref(v_a_2355_);
lean_dec_ref(v_build_2352_);
lean_dec_ref(v_traceFile_2351_);
v_a_2387_ = v_a_2381_;
goto v___jp_2386_;
}
else
{
lean_object* v___f_2394_; lean_object* v___x_2395_; 
v___f_2394_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
v___x_2395_ = l_Lake_buildAction___redArg(v___f_2394_, v_depTrace_2350_, v_traceFile_2351_, v_build_2352_, v_action_2353_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v_a_2381_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 1);
lean_inc(v_a_2396_);
lean_dec_ref(v___x_2395_);
v_a_2387_ = v_a_2396_;
goto v___jp_2386_;
}
else
{
lean_object* v_a_2397_; lean_object* v_a_2398_; 
lean_del_object(v___x_2383_);
v_a_2397_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2397_);
v_a_2398_ = lean_ctor_get(v___x_2395_, 1);
lean_inc(v_a_2398_);
lean_dec_ref(v___x_2395_);
v_a_2363_ = v_a_2397_;
v_a_2364_ = v_a_2398_;
goto v___jp_2362_;
}
}
v___jp_2386_:
{
lean_object* v___x_2389_; 
if (v_isShared_2384_ == 0)
{
lean_ctor_set(v___x_2383_, 1, v_a_2387_);
lean_ctor_set(v___x_2383_, 0, v___x_2385_);
v___x_2389_ = v___x_2383_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2385_);
lean_ctor_set(v_reuseFailAlloc_2390_, 1, v_a_2387_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
else
{
lean_object* v_a_2400_; lean_object* v_a_2401_; 
lean_dec_ref(v_a_2355_);
lean_dec_ref(v_build_2352_);
lean_dec_ref(v_traceFile_2351_);
v_a_2400_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2400_);
v_a_2401_ = lean_ctor_get(v___x_2379_, 1);
lean_inc(v_a_2401_);
lean_dec_ref(v___x_2379_);
v_a_2363_ = v_a_2400_;
v_a_2364_ = v_a_2401_;
goto v___jp_2362_;
}
}
}
else
{
lean_object* v_a_2403_; lean_object* v_a_2404_; lean_object* v___x_2406_; 
lean_dec_ref(v_a_2355_);
lean_dec_ref(v_build_2352_);
lean_dec_ref(v_traceFile_2351_);
lean_dec(v_info_2349_);
lean_dec_ref(v_inst_2348_);
lean_dec_ref(v_inst_2347_);
v_a_2403_ = lean_ctor_get(v___x_2374_, 0);
lean_inc(v_a_2403_);
v_a_2404_ = lean_ctor_get(v___x_2374_, 1);
lean_inc(v_a_2404_);
lean_dec_ref(v___x_2374_);
if (v_isShared_2373_ == 0)
{
lean_ctor_set(v___x_2372_, 0, v_a_2404_);
v___x_2406_ = v___x_2372_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_a_2404_);
lean_ctor_set(v_reuseFailAlloc_2407_, 1, v_trace_2369_);
lean_ctor_set(v_reuseFailAlloc_2407_, 2, v_buildTime_2370_);
lean_ctor_set_uint8(v_reuseFailAlloc_2407_, sizeof(void*)*3, v_action_2367_);
lean_ctor_set_uint8(v_reuseFailAlloc_2407_, sizeof(void*)*3 + 1, v_wantsRebuild_2368_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
v_a_2363_ = v_a_2403_;
v_a_2364_ = v___x_2406_;
goto v___jp_2362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg___boxed(lean_object* v_inst_2409_, lean_object* v_inst_2410_, lean_object* v_info_2411_, lean_object* v_depTrace_2412_, lean_object* v_traceFile_2413_, lean_object* v_build_2414_, lean_object* v_action_2415_, lean_object* v_oldTrace_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_){
_start:
{
uint8_t v_action_boxed_2424_; lean_object* v_res_2425_; 
v_action_boxed_2424_ = lean_unbox(v_action_2415_);
v_res_2425_ = l_Lake_buildUnlessUpToDate___redArg(v_inst_2409_, v_inst_2410_, v_info_2411_, v_depTrace_2412_, v_traceFile_2413_, v_build_2414_, v_action_boxed_2424_, v_oldTrace_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_);
lean_dec_ref(v_a_2421_);
lean_dec(v_a_2420_);
lean_dec(v_a_2419_);
lean_dec(v_a_2418_);
lean_dec_ref(v_oldTrace_2416_);
lean_dec_ref(v_depTrace_2412_);
return v_res_2425_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate(lean_object* v_00_u03b9_2426_, lean_object* v_inst_2427_, lean_object* v_inst_2428_, lean_object* v_info_2429_, lean_object* v_depTrace_2430_, lean_object* v_traceFile_2431_, lean_object* v_build_2432_, uint8_t v_action_2433_, lean_object* v_oldTrace_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_){
_start:
{
lean_object* v_a_2443_; lean_object* v_a_2444_; lean_object* v_log_2446_; uint8_t v_action_2447_; uint8_t v_wantsRebuild_2448_; lean_object* v_trace_2449_; lean_object* v_buildTime_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2488_; 
v_log_2446_ = lean_ctor_get(v_a_2440_, 0);
v_action_2447_ = lean_ctor_get_uint8(v_a_2440_, sizeof(void*)*3);
v_wantsRebuild_2448_ = lean_ctor_get_uint8(v_a_2440_, sizeof(void*)*3 + 1);
v_trace_2449_ = lean_ctor_get(v_a_2440_, 1);
v_buildTime_2450_ = lean_ctor_get(v_a_2440_, 2);
v_isSharedCheck_2488_ = !lean_is_exclusive(v_a_2440_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2452_ = v_a_2440_;
v_isShared_2453_ = v_isSharedCheck_2488_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_buildTime_2450_);
lean_inc(v_trace_2449_);
lean_inc(v_log_2446_);
lean_dec(v_a_2440_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2488_;
goto v_resetjp_2451_;
}
v___jp_2442_:
{
lean_object* v___x_2445_; 
v___x_2445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2445_, 0, v_a_2443_);
lean_ctor_set(v___x_2445_, 1, v_a_2444_);
return v___x_2445_;
}
v_resetjp_2451_:
{
lean_object* v___x_2454_; 
lean_inc_ref(v_traceFile_2431_);
v___x_2454_ = l_Lake_readTraceFile(v_traceFile_2431_, v_log_2446_);
if (lean_obj_tag(v___x_2454_) == 0)
{
lean_object* v_a_2455_; lean_object* v_a_2456_; lean_object* v___x_2458_; 
v_a_2455_ = lean_ctor_get(v___x_2454_, 0);
lean_inc(v_a_2455_);
v_a_2456_ = lean_ctor_get(v___x_2454_, 1);
lean_inc(v_a_2456_);
lean_dec_ref(v___x_2454_);
if (v_isShared_2453_ == 0)
{
lean_ctor_set(v___x_2452_, 0, v_a_2456_);
v___x_2458_ = v___x_2452_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_a_2456_);
lean_ctor_set(v_reuseFailAlloc_2482_, 1, v_trace_2449_);
lean_ctor_set(v_reuseFailAlloc_2482_, 2, v_buildTime_2450_);
lean_ctor_set_uint8(v_reuseFailAlloc_2482_, sizeof(void*)*3, v_action_2447_);
lean_ctor_set_uint8(v_reuseFailAlloc_2482_, sizeof(void*)*3 + 1, v_wantsRebuild_2448_);
v___x_2458_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
lean_object* v___x_2459_; 
v___x_2459_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2427_, v_inst_2428_, v_info_2429_, v_depTrace_2430_, v_a_2455_, v_oldTrace_2434_, v_a_2435_, v_a_2436_, v_a_2437_, v_a_2438_, v_a_2439_, v___x_2458_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v_a_2460_; lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2479_; 
v_a_2460_ = lean_ctor_get(v___x_2459_, 0);
v_a_2461_ = lean_ctor_get(v___x_2459_, 1);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2463_ = v___x_2459_;
v_isShared_2464_ = v_isSharedCheck_2479_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_inc(v_a_2460_);
lean_dec(v___x_2459_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2479_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2465_; lean_object* v_a_2467_; uint8_t v___x_2471_; uint8_t v___x_2472_; uint8_t v___x_2473_; 
v___x_2465_ = lean_box(0);
v___x_2471_ = 0;
v___x_2472_ = lean_unbox(v_a_2460_);
lean_dec(v_a_2460_);
v___x_2473_ = l_Lake_instDecidableEqOutputStatus(v___x_2472_, v___x_2471_);
if (v___x_2473_ == 0)
{
lean_dec_ref(v_a_2435_);
lean_dec_ref(v_build_2432_);
lean_dec_ref(v_traceFile_2431_);
v_a_2467_ = v_a_2461_;
goto v___jp_2466_;
}
else
{
lean_object* v___f_2474_; lean_object* v___x_2475_; 
v___f_2474_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
v___x_2475_ = l_Lake_buildAction___redArg(v___f_2474_, v_depTrace_2430_, v_traceFile_2431_, v_build_2432_, v_action_2433_, v_a_2435_, v_a_2436_, v_a_2437_, v_a_2438_, v_a_2439_, v_a_2461_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; 
v_a_2476_ = lean_ctor_get(v___x_2475_, 1);
lean_inc(v_a_2476_);
lean_dec_ref(v___x_2475_);
v_a_2467_ = v_a_2476_;
goto v___jp_2466_;
}
else
{
lean_object* v_a_2477_; lean_object* v_a_2478_; 
lean_del_object(v___x_2463_);
v_a_2477_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2477_);
v_a_2478_ = lean_ctor_get(v___x_2475_, 1);
lean_inc(v_a_2478_);
lean_dec_ref(v___x_2475_);
v_a_2443_ = v_a_2477_;
v_a_2444_ = v_a_2478_;
goto v___jp_2442_;
}
}
v___jp_2466_:
{
lean_object* v___x_2469_; 
if (v_isShared_2464_ == 0)
{
lean_ctor_set(v___x_2463_, 1, v_a_2467_);
lean_ctor_set(v___x_2463_, 0, v___x_2465_);
v___x_2469_ = v___x_2463_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v___x_2465_);
lean_ctor_set(v_reuseFailAlloc_2470_, 1, v_a_2467_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
else
{
lean_object* v_a_2480_; lean_object* v_a_2481_; 
lean_dec_ref(v_a_2435_);
lean_dec_ref(v_build_2432_);
lean_dec_ref(v_traceFile_2431_);
v_a_2480_ = lean_ctor_get(v___x_2459_, 0);
lean_inc(v_a_2480_);
v_a_2481_ = lean_ctor_get(v___x_2459_, 1);
lean_inc(v_a_2481_);
lean_dec_ref(v___x_2459_);
v_a_2443_ = v_a_2480_;
v_a_2444_ = v_a_2481_;
goto v___jp_2442_;
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v_a_2484_; lean_object* v___x_2486_; 
lean_dec_ref(v_a_2435_);
lean_dec_ref(v_build_2432_);
lean_dec_ref(v_traceFile_2431_);
lean_dec(v_info_2429_);
lean_dec_ref(v_inst_2428_);
lean_dec_ref(v_inst_2427_);
v_a_2483_ = lean_ctor_get(v___x_2454_, 0);
lean_inc(v_a_2483_);
v_a_2484_ = lean_ctor_get(v___x_2454_, 1);
lean_inc(v_a_2484_);
lean_dec_ref(v___x_2454_);
if (v_isShared_2453_ == 0)
{
lean_ctor_set(v___x_2452_, 0, v_a_2484_);
v___x_2486_ = v___x_2452_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2484_);
lean_ctor_set(v_reuseFailAlloc_2487_, 1, v_trace_2449_);
lean_ctor_set(v_reuseFailAlloc_2487_, 2, v_buildTime_2450_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, sizeof(void*)*3, v_action_2447_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, sizeof(void*)*3 + 1, v_wantsRebuild_2448_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
v_a_2443_ = v_a_2483_;
v_a_2444_ = v___x_2486_;
goto v___jp_2442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___boxed(lean_object* v_00_u03b9_2489_, lean_object* v_inst_2490_, lean_object* v_inst_2491_, lean_object* v_info_2492_, lean_object* v_depTrace_2493_, lean_object* v_traceFile_2494_, lean_object* v_build_2495_, lean_object* v_action_2496_, lean_object* v_oldTrace_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_){
_start:
{
uint8_t v_action_boxed_2505_; lean_object* v_res_2506_; 
v_action_boxed_2505_ = lean_unbox(v_action_2496_);
v_res_2506_ = l_Lake_buildUnlessUpToDate(v_00_u03b9_2489_, v_inst_2490_, v_inst_2491_, v_info_2492_, v_depTrace_2493_, v_traceFile_2494_, v_build_2495_, v_action_boxed_2505_, v_oldTrace_2497_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
lean_dec_ref(v_a_2502_);
lean_dec(v_a_2501_);
lean_dec(v_a_2500_);
lean_dec(v_a_2499_);
lean_dec_ref(v_oldTrace_2497_);
lean_dec_ref(v_depTrace_2493_);
return v_res_2506_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFileHash(lean_object* v_file_2508_, uint64_t v_hash_2509_){
_start:
{
lean_object* v___x_2511_; lean_object* v_hashFile_2512_; lean_object* v___x_2513_; 
v___x_2511_ = ((lean_object*)(l_Lake_writeFileHash___closed__0));
v_hashFile_2512_ = lean_string_append(v_file_2508_, v___x_2511_);
lean_inc_ref(v_hashFile_2512_);
v___x_2513_ = l_Lake_createParentDirs(v_hashFile_2512_);
if (lean_obj_tag(v___x_2513_) == 0)
{
lean_object* v___x_2514_; lean_object* v___x_2515_; 
lean_dec_ref(v___x_2513_);
v___x_2514_ = l_Lake_Hash_hex(v_hash_2509_);
v___x_2515_ = l_IO_FS_writeFile(v_hashFile_2512_, v___x_2514_);
lean_dec_ref(v___x_2514_);
lean_dec_ref(v_hashFile_2512_);
return v___x_2515_;
}
else
{
lean_dec_ref(v_hashFile_2512_);
return v___x_2513_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_writeFileHash___boxed(lean_object* v_file_2516_, lean_object* v_hash_2517_, lean_object* v_a_2518_){
_start:
{
uint64_t v_hash_boxed_2519_; lean_object* v_res_2520_; 
v_hash_boxed_2519_ = lean_unbox_uint64(v_hash_2517_);
lean_dec_ref(v_hash_2517_);
v_res_2520_ = l_Lake_writeFileHash(v_file_2516_, v_hash_boxed_2519_);
return v_res_2520_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheFileHash(lean_object* v_file_2521_, uint8_t v_text_2522_){
_start:
{
lean_object* v___y_2525_; 
if (v_text_2522_ == 0)
{
lean_object* v___x_2537_; 
v___x_2537_ = l_Lake_computeBinFileHash(v_file_2521_);
v___y_2525_ = v___x_2537_;
goto v___jp_2524_;
}
else
{
lean_object* v___x_2538_; 
v___x_2538_ = l_Lake_computeTextFileHash(v_file_2521_);
v___y_2525_ = v___x_2538_;
goto v___jp_2524_;
}
v___jp_2524_:
{
if (lean_obj_tag(v___y_2525_) == 0)
{
lean_object* v_a_2526_; uint64_t v___x_2527_; lean_object* v___x_2528_; 
v_a_2526_ = lean_ctor_get(v___y_2525_, 0);
lean_inc(v_a_2526_);
lean_dec_ref(v___y_2525_);
v___x_2527_ = lean_unbox_uint64(v_a_2526_);
lean_dec(v_a_2526_);
v___x_2528_ = l_Lake_writeFileHash(v_file_2521_, v___x_2527_);
return v___x_2528_;
}
else
{
lean_object* v_a_2529_; lean_object* v___x_2531_; uint8_t v_isShared_2532_; uint8_t v_isSharedCheck_2536_; 
lean_dec_ref(v_file_2521_);
v_a_2529_ = lean_ctor_get(v___y_2525_, 0);
v_isSharedCheck_2536_ = !lean_is_exclusive(v___y_2525_);
if (v_isSharedCheck_2536_ == 0)
{
v___x_2531_ = v___y_2525_;
v_isShared_2532_ = v_isSharedCheck_2536_;
goto v_resetjp_2530_;
}
else
{
lean_inc(v_a_2529_);
lean_dec(v___y_2525_);
v___x_2531_ = lean_box(0);
v_isShared_2532_ = v_isSharedCheck_2536_;
goto v_resetjp_2530_;
}
v_resetjp_2530_:
{
lean_object* v___x_2534_; 
if (v_isShared_2532_ == 0)
{
v___x_2534_ = v___x_2531_;
goto v_reusejp_2533_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v_a_2529_);
v___x_2534_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2533_;
}
v_reusejp_2533_:
{
return v___x_2534_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_cacheFileHash___boxed(lean_object* v_file_2539_, lean_object* v_text_2540_, lean_object* v_a_2541_){
_start:
{
uint8_t v_text_boxed_2542_; lean_object* v_res_2543_; 
v_text_boxed_2542_ = lean_unbox(v_text_2540_);
v_res_2543_ = l_Lake_cacheFileHash(v_file_2539_, v_text_boxed_2542_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l_Lake_clearFileHash(lean_object* v_file_2544_){
_start:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; 
v___x_2546_ = ((lean_object*)(l_Lake_writeFileHash___closed__0));
v___x_2547_ = lean_string_append(v_file_2544_, v___x_2546_);
v___x_2548_ = l_Lake_removeFileIfExists(v___x_2547_);
lean_dec_ref(v___x_2547_);
return v___x_2548_;
}
}
LEAN_EXPORT lean_object* l_Lake_clearFileHash___boxed(lean_object* v_file_2549_, lean_object* v_a_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l_Lake_clearFileHash(v_file_2549_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg(lean_object* v_file_2552_, uint8_t v_text_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_){
_start:
{
lean_object* v_toBuildConfig_2557_; uint8_t v_trustHash_2558_; lean_object* v___x_2559_; lean_object* v_hashFile_2560_; lean_object* v___y_2562_; lean_object* v___y_2563_; uint8_t v___y_2564_; lean_object* v___y_2565_; uint8_t v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2600_; 
v_toBuildConfig_2557_ = lean_ctor_get(v_a_2554_, 0);
v_trustHash_2558_ = lean_ctor_get_uint8(v_toBuildConfig_2557_, sizeof(void*)*2 + 1);
v___x_2559_ = ((lean_object*)(l_Lake_writeFileHash___closed__0));
lean_inc_ref(v_file_2552_);
v_hashFile_2560_ = lean_string_append(v_file_2552_, v___x_2559_);
if (v_trustHash_2558_ == 0)
{
v___y_2600_ = v_a_2555_;
goto v___jp_2599_;
}
else
{
lean_object* v___x_2613_; 
v___x_2613_ = l_Lake_Hash_load_x3f(v_hashFile_2560_);
if (lean_obj_tag(v___x_2613_) == 1)
{
lean_object* v_val_2614_; lean_object* v___x_2615_; 
lean_dec_ref(v_hashFile_2560_);
lean_dec_ref(v_file_2552_);
v_val_2614_ = lean_ctor_get(v___x_2613_, 0);
lean_inc(v_val_2614_);
lean_dec_ref(v___x_2613_);
v___x_2615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2615_, 0, v_val_2614_);
lean_ctor_set(v___x_2615_, 1, v_a_2555_);
return v___x_2615_;
}
else
{
lean_dec(v___x_2613_);
v___y_2600_ = v_a_2555_;
goto v___jp_2599_;
}
}
v___jp_2561_:
{
if (lean_obj_tag(v___y_2567_) == 0)
{
lean_object* v_a_2568_; lean_object* v___x_2569_; 
v_a_2568_ = lean_ctor_get(v___y_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref(v___y_2567_);
lean_inc_ref(v_hashFile_2560_);
v___x_2569_ = l_Lake_createParentDirs(v_hashFile_2560_);
if (lean_obj_tag(v___x_2569_) == 0)
{
uint64_t v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
lean_dec_ref(v___x_2569_);
v___x_2570_ = lean_unbox_uint64(v_a_2568_);
v___x_2571_ = l_Lake_Hash_hex(v___x_2570_);
v___x_2572_ = l_IO_FS_writeFile(v_hashFile_2560_, v___x_2571_);
lean_dec_ref(v___x_2571_);
lean_dec_ref(v_hashFile_2560_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v___x_2573_; lean_object* v___x_2574_; 
lean_dec_ref(v___x_2572_);
v___x_2573_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2573_, 0, v___y_2563_);
lean_ctor_set(v___x_2573_, 1, v___y_2562_);
lean_ctor_set(v___x_2573_, 2, v___y_2565_);
lean_ctor_set_uint8(v___x_2573_, sizeof(void*)*3, v___y_2564_);
lean_ctor_set_uint8(v___x_2573_, sizeof(void*)*3 + 1, v___y_2566_);
v___x_2574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2574_, 0, v_a_2568_);
lean_ctor_set(v___x_2574_, 1, v___x_2573_);
return v___x_2574_;
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2576_; uint8_t v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
lean_dec(v_a_2568_);
v_a_2575_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_a_2575_);
lean_dec_ref(v___x_2572_);
v___x_2576_ = lean_io_error_to_string(v_a_2575_);
v___x_2577_ = 3;
v___x_2578_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2578_, 0, v___x_2576_);
lean_ctor_set_uint8(v___x_2578_, sizeof(void*)*1, v___x_2577_);
v___x_2579_ = lean_array_get_size(v___y_2563_);
v___x_2580_ = lean_array_push(v___y_2563_, v___x_2578_);
v___x_2581_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2581_, 0, v___x_2580_);
lean_ctor_set(v___x_2581_, 1, v___y_2562_);
lean_ctor_set(v___x_2581_, 2, v___y_2565_);
lean_ctor_set_uint8(v___x_2581_, sizeof(void*)*3, v___y_2564_);
lean_ctor_set_uint8(v___x_2581_, sizeof(void*)*3 + 1, v___y_2566_);
v___x_2582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2579_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
return v___x_2582_;
}
}
else
{
lean_object* v_a_2583_; lean_object* v___x_2584_; uint8_t v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
lean_dec(v_a_2568_);
lean_dec_ref(v_hashFile_2560_);
v_a_2583_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_a_2583_);
lean_dec_ref(v___x_2569_);
v___x_2584_ = lean_io_error_to_string(v_a_2583_);
v___x_2585_ = 3;
v___x_2586_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2586_, 0, v___x_2584_);
lean_ctor_set_uint8(v___x_2586_, sizeof(void*)*1, v___x_2585_);
v___x_2587_ = lean_array_get_size(v___y_2563_);
v___x_2588_ = lean_array_push(v___y_2563_, v___x_2586_);
v___x_2589_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2589_, 0, v___x_2588_);
lean_ctor_set(v___x_2589_, 1, v___y_2562_);
lean_ctor_set(v___x_2589_, 2, v___y_2565_);
lean_ctor_set_uint8(v___x_2589_, sizeof(void*)*3, v___y_2564_);
lean_ctor_set_uint8(v___x_2589_, sizeof(void*)*3 + 1, v___y_2566_);
v___x_2590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2587_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
return v___x_2590_;
}
}
else
{
lean_object* v_a_2591_; lean_object* v___x_2592_; uint8_t v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
lean_dec_ref(v_hashFile_2560_);
v_a_2591_ = lean_ctor_get(v___y_2567_, 0);
lean_inc(v_a_2591_);
lean_dec_ref(v___y_2567_);
v___x_2592_ = lean_io_error_to_string(v_a_2591_);
v___x_2593_ = 3;
v___x_2594_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2594_, 0, v___x_2592_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*1, v___x_2593_);
v___x_2595_ = lean_array_get_size(v___y_2563_);
v___x_2596_ = lean_array_push(v___y_2563_, v___x_2594_);
v___x_2597_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2597_, 0, v___x_2596_);
lean_ctor_set(v___x_2597_, 1, v___y_2562_);
lean_ctor_set(v___x_2597_, 2, v___y_2565_);
lean_ctor_set_uint8(v___x_2597_, sizeof(void*)*3, v___y_2564_);
lean_ctor_set_uint8(v___x_2597_, sizeof(void*)*3 + 1, v___y_2566_);
v___x_2598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2595_);
lean_ctor_set(v___x_2598_, 1, v___x_2597_);
return v___x_2598_;
}
}
v___jp_2599_:
{
if (v_text_2553_ == 0)
{
lean_object* v_log_2601_; uint8_t v_action_2602_; uint8_t v_wantsRebuild_2603_; lean_object* v_trace_2604_; lean_object* v_buildTime_2605_; lean_object* v___x_2606_; 
v_log_2601_ = lean_ctor_get(v___y_2600_, 0);
lean_inc_ref(v_log_2601_);
v_action_2602_ = lean_ctor_get_uint8(v___y_2600_, sizeof(void*)*3);
v_wantsRebuild_2603_ = lean_ctor_get_uint8(v___y_2600_, sizeof(void*)*3 + 1);
v_trace_2604_ = lean_ctor_get(v___y_2600_, 1);
lean_inc_ref(v_trace_2604_);
v_buildTime_2605_ = lean_ctor_get(v___y_2600_, 2);
lean_inc(v_buildTime_2605_);
lean_dec_ref(v___y_2600_);
v___x_2606_ = l_Lake_computeBinFileHash(v_file_2552_);
lean_dec_ref(v_file_2552_);
v___y_2562_ = v_trace_2604_;
v___y_2563_ = v_log_2601_;
v___y_2564_ = v_action_2602_;
v___y_2565_ = v_buildTime_2605_;
v___y_2566_ = v_wantsRebuild_2603_;
v___y_2567_ = v___x_2606_;
goto v___jp_2561_;
}
else
{
lean_object* v_log_2607_; uint8_t v_action_2608_; uint8_t v_wantsRebuild_2609_; lean_object* v_trace_2610_; lean_object* v_buildTime_2611_; lean_object* v___x_2612_; 
v_log_2607_ = lean_ctor_get(v___y_2600_, 0);
lean_inc_ref(v_log_2607_);
v_action_2608_ = lean_ctor_get_uint8(v___y_2600_, sizeof(void*)*3);
v_wantsRebuild_2609_ = lean_ctor_get_uint8(v___y_2600_, sizeof(void*)*3 + 1);
v_trace_2610_ = lean_ctor_get(v___y_2600_, 1);
lean_inc_ref(v_trace_2610_);
v_buildTime_2611_ = lean_ctor_get(v___y_2600_, 2);
lean_inc(v_buildTime_2611_);
lean_dec_ref(v___y_2600_);
v___x_2612_ = l_Lake_computeTextFileHash(v_file_2552_);
lean_dec_ref(v_file_2552_);
v___y_2562_ = v_trace_2610_;
v___y_2563_ = v_log_2607_;
v___y_2564_ = v_action_2608_;
v___y_2565_ = v_buildTime_2611_;
v___y_2566_ = v_wantsRebuild_2609_;
v___y_2567_ = v___x_2612_;
goto v___jp_2561_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg___boxed(lean_object* v_file_2616_, lean_object* v_text_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_){
_start:
{
uint8_t v_text_boxed_2621_; lean_object* v_res_2622_; 
v_text_boxed_2621_ = lean_unbox(v_text_2617_);
v_res_2622_ = l_Lake_fetchFileHash___redArg(v_file_2616_, v_text_boxed_2621_, v_a_2618_, v_a_2619_);
lean_dec_ref(v_a_2618_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash(lean_object* v_file_2623_, uint8_t v_text_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_){
_start:
{
lean_object* v___x_2632_; 
v___x_2632_ = l_Lake_fetchFileHash___redArg(v_file_2623_, v_text_2624_, v_a_2629_, v_a_2630_);
return v___x_2632_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___boxed(lean_object* v_file_2633_, lean_object* v_text_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_a_2639_, lean_object* v_a_2640_, lean_object* v_a_2641_){
_start:
{
uint8_t v_text_boxed_2642_; lean_object* v_res_2643_; 
v_text_boxed_2642_ = lean_unbox(v_text_2634_);
v_res_2643_ = l_Lake_fetchFileHash(v_file_2633_, v_text_boxed_2642_, v_a_2635_, v_a_2636_, v_a_2637_, v_a_2638_, v_a_2639_, v_a_2640_);
lean_dec_ref(v_a_2639_);
lean_dec(v_a_2638_);
lean_dec(v_a_2637_);
lean_dec(v_a_2636_);
lean_dec_ref(v_a_2635_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg(lean_object* v_file_2644_, uint8_t v_text_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_){
_start:
{
lean_object* v___x_2649_; 
lean_inc_ref(v_file_2644_);
v___x_2649_ = l_Lake_fetchFileHash___redArg(v_file_2644_, v_text_2645_, v_a_2646_, v_a_2647_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2688_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 1);
v_a_2651_ = lean_ctor_get(v___x_2649_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2653_ = v___x_2649_;
v_isShared_2654_ = v_isSharedCheck_2688_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2650_);
lean_inc(v_a_2651_);
lean_dec(v___x_2649_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2688_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v_log_2655_; uint8_t v_action_2656_; uint8_t v_wantsRebuild_2657_; lean_object* v_trace_2658_; lean_object* v_buildTime_2659_; lean_object* v___x_2660_; 
v_log_2655_ = lean_ctor_get(v_a_2650_, 0);
v_action_2656_ = lean_ctor_get_uint8(v_a_2650_, sizeof(void*)*3);
v_wantsRebuild_2657_ = lean_ctor_get_uint8(v_a_2650_, sizeof(void*)*3 + 1);
v_trace_2658_ = lean_ctor_get(v_a_2650_, 1);
v_buildTime_2659_ = lean_ctor_get(v_a_2650_, 2);
v___x_2660_ = lean_io_metadata(v_file_2644_);
if (lean_obj_tag(v___x_2660_) == 0)
{
lean_object* v_a_2661_; lean_object* v_modified_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; uint64_t v___x_2665_; lean_object* v___x_2667_; 
v_a_2661_ = lean_ctor_get(v___x_2660_, 0);
lean_inc(v_a_2661_);
lean_dec_ref(v___x_2660_);
v_modified_2662_ = lean_ctor_get(v_a_2661_, 1);
lean_inc_ref(v_modified_2662_);
lean_dec(v_a_2661_);
v___x_2663_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_2664_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_2664_, 0, v_file_2644_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
lean_ctor_set(v___x_2664_, 2, v_modified_2662_);
v___x_2665_ = lean_unbox_uint64(v_a_2651_);
lean_dec(v_a_2651_);
lean_ctor_set_uint64(v___x_2664_, sizeof(void*)*3, v___x_2665_);
if (v_isShared_2654_ == 0)
{
lean_ctor_set(v___x_2653_, 0, v___x_2664_);
v___x_2667_ = v___x_2653_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v___x_2664_);
lean_ctor_set(v_reuseFailAlloc_2668_, 1, v_a_2650_);
v___x_2667_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
return v___x_2667_;
}
}
else
{
lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2684_; 
lean_inc(v_buildTime_2659_);
lean_inc_ref(v_trace_2658_);
lean_inc_ref(v_log_2655_);
lean_dec(v_a_2651_);
lean_dec_ref(v_file_2644_);
v_isSharedCheck_2684_ = !lean_is_exclusive(v_a_2650_);
if (v_isSharedCheck_2684_ == 0)
{
lean_object* v_unused_2685_; lean_object* v_unused_2686_; lean_object* v_unused_2687_; 
v_unused_2685_ = lean_ctor_get(v_a_2650_, 2);
lean_dec(v_unused_2685_);
v_unused_2686_ = lean_ctor_get(v_a_2650_, 1);
lean_dec(v_unused_2686_);
v_unused_2687_ = lean_ctor_get(v_a_2650_, 0);
lean_dec(v_unused_2687_);
v___x_2670_ = v_a_2650_;
v_isShared_2671_ = v_isSharedCheck_2684_;
goto v_resetjp_2669_;
}
else
{
lean_dec(v_a_2650_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2684_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v_a_2672_; lean_object* v___x_2673_; uint8_t v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2679_; 
v_a_2672_ = lean_ctor_get(v___x_2660_, 0);
lean_inc(v_a_2672_);
lean_dec_ref(v___x_2660_);
v___x_2673_ = lean_io_error_to_string(v_a_2672_);
v___x_2674_ = 3;
v___x_2675_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2675_, 0, v___x_2673_);
lean_ctor_set_uint8(v___x_2675_, sizeof(void*)*1, v___x_2674_);
v___x_2676_ = lean_array_get_size(v_log_2655_);
v___x_2677_ = lean_array_push(v_log_2655_, v___x_2675_);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 0, v___x_2677_);
v___x_2679_ = v___x_2670_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___x_2677_);
lean_ctor_set(v_reuseFailAlloc_2683_, 1, v_trace_2658_);
lean_ctor_set(v_reuseFailAlloc_2683_, 2, v_buildTime_2659_);
lean_ctor_set_uint8(v_reuseFailAlloc_2683_, sizeof(void*)*3, v_action_2656_);
lean_ctor_set_uint8(v_reuseFailAlloc_2683_, sizeof(void*)*3 + 1, v_wantsRebuild_2657_);
v___x_2679_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
lean_object* v___x_2681_; 
if (v_isShared_2654_ == 0)
{
lean_ctor_set_tag(v___x_2653_, 1);
lean_ctor_set(v___x_2653_, 1, v___x_2679_);
lean_ctor_set(v___x_2653_, 0, v___x_2676_);
v___x_2681_ = v___x_2653_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2676_);
lean_ctor_set(v_reuseFailAlloc_2682_, 1, v___x_2679_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
return v___x_2681_;
}
}
}
}
}
}
else
{
lean_object* v_a_2689_; lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2697_; 
lean_dec_ref(v_file_2644_);
v_a_2689_ = lean_ctor_get(v___x_2649_, 0);
v_a_2690_ = lean_ctor_get(v___x_2649_, 1);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2692_ = v___x_2649_;
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_inc(v_a_2689_);
lean_dec(v___x_2649_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2695_; 
if (v_isShared_2693_ == 0)
{
v___x_2695_ = v___x_2692_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_a_2689_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v_a_2690_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg___boxed(lean_object* v_file_2698_, lean_object* v_text_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_){
_start:
{
uint8_t v_text_boxed_2703_; lean_object* v_res_2704_; 
v_text_boxed_2703_ = lean_unbox(v_text_2699_);
v_res_2704_ = l_Lake_fetchFileTrace___redArg(v_file_2698_, v_text_boxed_2703_, v_a_2700_, v_a_2701_);
lean_dec_ref(v_a_2700_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace(lean_object* v_file_2705_, uint8_t v_text_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_){
_start:
{
lean_object* v___x_2714_; 
v___x_2714_ = l_Lake_fetchFileTrace___redArg(v_file_2705_, v_text_2706_, v_a_2711_, v_a_2712_);
return v___x_2714_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___boxed(lean_object* v_file_2715_, lean_object* v_text_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_){
_start:
{
uint8_t v_text_boxed_2724_; lean_object* v_res_2725_; 
v_text_boxed_2724_ = lean_unbox(v_text_2716_);
v_res_2725_ = l_Lake_fetchFileTrace(v_file_2715_, v_text_boxed_2724_, v_a_2717_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_, v_a_2722_);
lean_dec_ref(v_a_2721_);
lean_dec(v_a_2720_);
lean_dec(v_a_2719_);
lean_dec(v_a_2718_);
lean_dec_ref(v_a_2717_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(lean_object* v_val_2726_, lean_object* v_a_x3f_2727_, lean_object* v___y_2728_){
_start:
{
lean_object* v___x_2730_; lean_object* v_log_2731_; uint8_t v_action_2732_; uint8_t v_wantsRebuild_2733_; lean_object* v_trace_2734_; lean_object* v_buildTime_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2746_; 
v___x_2730_ = lean_io_mono_ms_now();
v_log_2731_ = lean_ctor_get(v___y_2728_, 0);
v_action_2732_ = lean_ctor_get_uint8(v___y_2728_, sizeof(void*)*3);
v_wantsRebuild_2733_ = lean_ctor_get_uint8(v___y_2728_, sizeof(void*)*3 + 1);
v_trace_2734_ = lean_ctor_get(v___y_2728_, 1);
v_buildTime_2735_ = lean_ctor_get(v___y_2728_, 2);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___y_2728_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2737_ = v___y_2728_;
v_isShared_2738_ = v_isSharedCheck_2746_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_buildTime_2735_);
lean_inc(v_trace_2734_);
lean_inc(v_log_2731_);
lean_dec(v___y_2728_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2746_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2743_; 
v___x_2739_ = lean_nat_sub(v___x_2730_, v_val_2726_);
lean_dec(v___x_2730_);
v___x_2740_ = lean_box(0);
v___x_2741_ = lean_nat_add(v_buildTime_2735_, v___x_2739_);
lean_dec(v___x_2739_);
lean_dec(v_buildTime_2735_);
if (v_isShared_2738_ == 0)
{
lean_ctor_set(v___x_2737_, 2, v___x_2741_);
v___x_2743_ = v___x_2737_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_log_2731_);
lean_ctor_set(v_reuseFailAlloc_2745_, 1, v_trace_2734_);
lean_ctor_set(v_reuseFailAlloc_2745_, 2, v___x_2741_);
lean_ctor_set_uint8(v_reuseFailAlloc_2745_, sizeof(void*)*3, v_action_2732_);
lean_ctor_set_uint8(v_reuseFailAlloc_2745_, sizeof(void*)*3 + 1, v_wantsRebuild_2733_);
v___x_2743_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
lean_object* v___x_2744_; 
v___x_2744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2740_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
return v___x_2744_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0___boxed(lean_object* v_val_2747_, lean_object* v_a_x3f_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_){
_start:
{
lean_object* v_res_2751_; 
v_res_2751_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v_val_2747_, v_a_x3f_2748_, v___y_2749_);
lean_dec(v_a_x3f_2748_);
lean_dec(v_val_2747_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(lean_object* v_build_2752_, lean_object* v_file_2753_, lean_object* v_a_2754_, lean_object* v_depTrace_2755_, lean_object* v_traceFile_2756_, uint8_t v_action_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_){
_start:
{
lean_object* v_a_2765_; lean_object* v_a_2766_; lean_object* v_log_2769_; uint8_t v_action_2770_; uint8_t v_wantsRebuild_2771_; lean_object* v_trace_2772_; lean_object* v_buildTime_2773_; lean_object* v_toBuildConfig_2779_; lean_object* v_log_2780_; uint8_t v_action_2781_; uint8_t v_wantsRebuild_2782_; lean_object* v_trace_2783_; lean_object* v_buildTime_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2907_; 
v_toBuildConfig_2779_ = lean_ctor_get(v_a_2761_, 0);
v_log_2780_ = lean_ctor_get(v_a_2762_, 0);
v_action_2781_ = lean_ctor_get_uint8(v_a_2762_, sizeof(void*)*3);
v_wantsRebuild_2782_ = lean_ctor_get_uint8(v_a_2762_, sizeof(void*)*3 + 1);
v_trace_2783_ = lean_ctor_get(v_a_2762_, 1);
v_buildTime_2784_ = lean_ctor_get(v_a_2762_, 2);
v_isSharedCheck_2907_ = !lean_is_exclusive(v_a_2762_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2786_ = v_a_2762_;
v_isShared_2787_ = v_isSharedCheck_2907_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_buildTime_2784_);
lean_inc(v_trace_2783_);
lean_inc(v_log_2780_);
lean_dec(v_a_2762_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2907_;
goto v_resetjp_2785_;
}
v___jp_2764_:
{
lean_object* v___x_2767_; 
v___x_2767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2767_, 0, v_a_2765_);
lean_ctor_set(v___x_2767_, 1, v_a_2766_);
return v___x_2767_;
}
v___jp_2768_:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2774_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__1));
v___x_2775_ = lean_array_get_size(v_log_2769_);
v___x_2776_ = lean_array_push(v_log_2769_, v___x_2774_);
v___x_2777_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2777_, 0, v___x_2776_);
lean_ctor_set(v___x_2777_, 1, v_trace_2772_);
lean_ctor_set(v___x_2777_, 2, v_buildTime_2773_);
lean_ctor_set_uint8(v___x_2777_, sizeof(void*)*3, v_action_2770_);
lean_ctor_set_uint8(v___x_2777_, sizeof(void*)*3 + 1, v_wantsRebuild_2771_);
v___x_2778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2775_);
lean_ctor_set(v___x_2778_, 1, v___x_2777_);
return v___x_2778_;
}
v_resetjp_2785_:
{
uint8_t v_noBuild_2788_; uint8_t v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v_noBuild_2788_ = lean_ctor_get_uint8(v_toBuildConfig_2779_, sizeof(void*)*2 + 2);
v___x_2789_ = l_Lake_JobAction_merge(v_action_2781_, v_action_2757_);
v___x_2790_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__2));
lean_inc_ref(v_traceFile_2756_);
v___x_2791_ = l_System_FilePath_addExtension(v_traceFile_2756_, v___x_2790_);
if (v_noBuild_2788_ == 0)
{
lean_object* v___x_2792_; lean_object* v___x_2794_; 
v___x_2792_ = lean_io_mono_ms_now();
lean_inc_ref(v_log_2780_);
if (v_isShared_2787_ == 0)
{
v___x_2794_ = v___x_2786_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_log_2780_);
lean_ctor_set(v_reuseFailAlloc_2891_, 1, v_trace_2783_);
lean_ctor_set(v_reuseFailAlloc_2891_, 2, v_buildTime_2784_);
lean_ctor_set_uint8(v_reuseFailAlloc_2891_, sizeof(void*)*3 + 1, v_wantsRebuild_2782_);
v___x_2794_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
lean_object* v___x_2795_; lean_object* v_a_2797_; lean_object* v_a_2798_; 
lean_ctor_set_uint8(v___x_2794_, sizeof(void*)*3, v___x_2789_);
lean_inc_ref(v_a_2761_);
lean_inc(v_a_2760_);
lean_inc(v_a_2759_);
lean_inc(v_a_2758_);
v___x_2795_ = lean_apply_7(v_build_2752_, v_a_2754_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_, v___x_2794_, lean_box(0));
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2802_; lean_object* v_log_2803_; uint8_t v_action_2804_; uint8_t v_wantsRebuild_2805_; lean_object* v_trace_2806_; lean_object* v_buildTime_2807_; lean_object* v___x_2808_; 
v_a_2802_ = lean_ctor_get(v___x_2795_, 1);
lean_inc(v_a_2802_);
lean_dec_ref(v___x_2795_);
v_log_2803_ = lean_ctor_get(v_a_2802_, 0);
v_action_2804_ = lean_ctor_get_uint8(v_a_2802_, sizeof(void*)*3);
v_wantsRebuild_2805_ = lean_ctor_get_uint8(v_a_2802_, sizeof(void*)*3 + 1);
v_trace_2806_ = lean_ctor_get(v_a_2802_, 1);
v_buildTime_2807_ = lean_ctor_get(v_a_2802_, 2);
v___x_2808_ = l_Lake_clearFileHash(v_file_2753_);
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v_a_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v_a_2809_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_a_2809_);
lean_dec_ref(v___x_2808_);
v___x_2810_ = lean_array_get_size(v_log_2780_);
lean_dec_ref(v_log_2780_);
v___x_2811_ = lean_array_get_size(v_log_2803_);
v___x_2812_ = l_Array_extract___redArg(v_log_2803_, v___x_2810_, v___x_2811_);
v___x_2813_ = lean_box(0);
v___x_2814_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_2755_, v___x_2813_, v___x_2812_);
v___x_2815_ = l_Lake_BuildMetadata_writeFile(v_traceFile_2756_, v___x_2814_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2856_; 
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2856_ == 0)
{
lean_object* v_unused_2857_; 
v_unused_2857_ = lean_ctor_get(v___x_2815_, 0);
lean_dec(v_unused_2857_);
v___x_2817_ = v___x_2815_;
v_isShared_2818_ = v_isSharedCheck_2856_;
goto v_resetjp_2816_;
}
else
{
lean_dec(v___x_2815_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2856_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2819_; 
v___x_2819_ = l_Lake_removeFileIfExists(v___x_2791_);
lean_dec_ref(v___x_2791_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2839_; 
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2819_);
if (v_isSharedCheck_2839_ == 0)
{
lean_object* v_unused_2840_; 
v_unused_2840_ = lean_ctor_get(v___x_2819_, 0);
lean_dec(v_unused_2840_);
v___x_2821_ = v___x_2819_;
v_isShared_2822_ = v_isSharedCheck_2839_;
goto v_resetjp_2820_;
}
else
{
lean_dec(v___x_2819_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2839_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
lean_inc(v_a_2809_);
if (v_isShared_2822_ == 0)
{
lean_ctor_set(v___x_2821_, 0, v_a_2809_);
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_a_2809_);
v___x_2824_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
lean_object* v___x_2826_; 
if (v_isShared_2818_ == 0)
{
lean_ctor_set_tag(v___x_2817_, 1);
lean_ctor_set(v___x_2817_, 0, v___x_2824_);
v___x_2826_ = v___x_2817_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v___x_2824_);
v___x_2826_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
lean_object* v___x_2827_; lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
v___x_2827_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v___x_2792_, v___x_2826_, v_a_2802_);
lean_dec_ref(v___x_2826_);
lean_dec(v___x_2792_);
v_a_2828_ = lean_ctor_get(v___x_2827_, 1);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2835_ == 0)
{
lean_object* v_unused_2836_; 
v_unused_2836_ = lean_ctor_get(v___x_2827_, 0);
lean_dec(v_unused_2836_);
v___x_2830_ = v___x_2827_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2827_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
lean_ctor_set(v___x_2830_, 0, v_a_2809_);
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_a_2809_);
lean_ctor_set(v_reuseFailAlloc_2834_, 1, v_a_2828_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
}
}
else
{
lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2852_; 
lean_inc(v_buildTime_2807_);
lean_inc_ref(v_trace_2806_);
lean_inc_ref(v_log_2803_);
lean_del_object(v___x_2817_);
lean_dec(v_a_2809_);
v_isSharedCheck_2852_ = !lean_is_exclusive(v_a_2802_);
if (v_isSharedCheck_2852_ == 0)
{
lean_object* v_unused_2853_; lean_object* v_unused_2854_; lean_object* v_unused_2855_; 
v_unused_2853_ = lean_ctor_get(v_a_2802_, 2);
lean_dec(v_unused_2853_);
v_unused_2854_ = lean_ctor_get(v_a_2802_, 1);
lean_dec(v_unused_2854_);
v_unused_2855_ = lean_ctor_get(v_a_2802_, 0);
lean_dec(v_unused_2855_);
v___x_2842_ = v_a_2802_;
v_isShared_2843_ = v_isSharedCheck_2852_;
goto v_resetjp_2841_;
}
else
{
lean_dec(v_a_2802_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2852_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v_a_2844_; lean_object* v___x_2845_; uint8_t v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2850_; 
v_a_2844_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_a_2844_);
lean_dec_ref(v___x_2819_);
v___x_2845_ = lean_io_error_to_string(v_a_2844_);
v___x_2846_ = 3;
v___x_2847_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2847_, 0, v___x_2845_);
lean_ctor_set_uint8(v___x_2847_, sizeof(void*)*1, v___x_2846_);
v___x_2848_ = lean_array_push(v_log_2803_, v___x_2847_);
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 0, v___x_2848_);
v___x_2850_ = v___x_2842_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v___x_2848_);
lean_ctor_set(v_reuseFailAlloc_2851_, 1, v_trace_2806_);
lean_ctor_set(v_reuseFailAlloc_2851_, 2, v_buildTime_2807_);
lean_ctor_set_uint8(v_reuseFailAlloc_2851_, sizeof(void*)*3, v_action_2804_);
lean_ctor_set_uint8(v_reuseFailAlloc_2851_, sizeof(void*)*3 + 1, v_wantsRebuild_2805_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
v_a_2797_ = v___x_2811_;
v_a_2798_ = v___x_2850_;
goto v___jp_2796_;
}
}
}
}
}
else
{
lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2869_; 
lean_inc(v_buildTime_2807_);
lean_inc_ref(v_trace_2806_);
lean_inc_ref(v_log_2803_);
lean_dec(v_a_2809_);
lean_dec_ref(v___x_2791_);
v_isSharedCheck_2869_ = !lean_is_exclusive(v_a_2802_);
if (v_isSharedCheck_2869_ == 0)
{
lean_object* v_unused_2870_; lean_object* v_unused_2871_; lean_object* v_unused_2872_; 
v_unused_2870_ = lean_ctor_get(v_a_2802_, 2);
lean_dec(v_unused_2870_);
v_unused_2871_ = lean_ctor_get(v_a_2802_, 1);
lean_dec(v_unused_2871_);
v_unused_2872_ = lean_ctor_get(v_a_2802_, 0);
lean_dec(v_unused_2872_);
v___x_2859_ = v_a_2802_;
v_isShared_2860_ = v_isSharedCheck_2869_;
goto v_resetjp_2858_;
}
else
{
lean_dec(v_a_2802_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2869_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v_a_2861_; lean_object* v___x_2862_; uint8_t v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2867_; 
v_a_2861_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_a_2861_);
lean_dec_ref(v___x_2815_);
v___x_2862_ = lean_io_error_to_string(v_a_2861_);
v___x_2863_ = 3;
v___x_2864_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2864_, 0, v___x_2862_);
lean_ctor_set_uint8(v___x_2864_, sizeof(void*)*1, v___x_2863_);
v___x_2865_ = lean_array_push(v_log_2803_, v___x_2864_);
if (v_isShared_2860_ == 0)
{
lean_ctor_set(v___x_2859_, 0, v___x_2865_);
v___x_2867_ = v___x_2859_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v___x_2865_);
lean_ctor_set(v_reuseFailAlloc_2868_, 1, v_trace_2806_);
lean_ctor_set(v_reuseFailAlloc_2868_, 2, v_buildTime_2807_);
lean_ctor_set_uint8(v_reuseFailAlloc_2868_, sizeof(void*)*3, v_action_2804_);
lean_ctor_set_uint8(v_reuseFailAlloc_2868_, sizeof(void*)*3 + 1, v_wantsRebuild_2805_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
v_a_2797_ = v___x_2811_;
v_a_2798_ = v___x_2867_;
goto v___jp_2796_;
}
}
}
}
else
{
lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2885_; 
lean_inc(v_buildTime_2807_);
lean_inc_ref(v_trace_2806_);
lean_inc_ref(v_log_2803_);
lean_dec_ref(v___x_2791_);
lean_dec_ref(v_log_2780_);
lean_dec_ref(v_traceFile_2756_);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_a_2802_);
if (v_isSharedCheck_2885_ == 0)
{
lean_object* v_unused_2886_; lean_object* v_unused_2887_; lean_object* v_unused_2888_; 
v_unused_2886_ = lean_ctor_get(v_a_2802_, 2);
lean_dec(v_unused_2886_);
v_unused_2887_ = lean_ctor_get(v_a_2802_, 1);
lean_dec(v_unused_2887_);
v_unused_2888_ = lean_ctor_get(v_a_2802_, 0);
lean_dec(v_unused_2888_);
v___x_2874_ = v_a_2802_;
v_isShared_2875_ = v_isSharedCheck_2885_;
goto v_resetjp_2873_;
}
else
{
lean_dec(v_a_2802_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2885_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v_a_2876_; lean_object* v___x_2877_; uint8_t v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2883_; 
v_a_2876_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_a_2876_);
lean_dec_ref(v___x_2808_);
v___x_2877_ = lean_io_error_to_string(v_a_2876_);
v___x_2878_ = 3;
v___x_2879_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2879_, 0, v___x_2877_);
lean_ctor_set_uint8(v___x_2879_, sizeof(void*)*1, v___x_2878_);
v___x_2880_ = lean_array_get_size(v_log_2803_);
v___x_2881_ = lean_array_push(v_log_2803_, v___x_2879_);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 0, v___x_2881_);
v___x_2883_ = v___x_2874_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v___x_2881_);
lean_ctor_set(v_reuseFailAlloc_2884_, 1, v_trace_2806_);
lean_ctor_set(v_reuseFailAlloc_2884_, 2, v_buildTime_2807_);
lean_ctor_set_uint8(v_reuseFailAlloc_2884_, sizeof(void*)*3, v_action_2804_);
lean_ctor_set_uint8(v_reuseFailAlloc_2884_, sizeof(void*)*3 + 1, v_wantsRebuild_2805_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
v_a_2797_ = v___x_2880_;
v_a_2798_ = v___x_2883_;
goto v___jp_2796_;
}
}
}
}
else
{
lean_object* v_a_2889_; lean_object* v_a_2890_; 
lean_dec_ref(v___x_2791_);
lean_dec_ref(v_log_2780_);
lean_dec_ref(v_traceFile_2756_);
lean_dec_ref(v_file_2753_);
v_a_2889_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2889_);
v_a_2890_ = lean_ctor_get(v___x_2795_, 1);
lean_inc(v_a_2890_);
lean_dec_ref(v___x_2795_);
v_a_2797_ = v_a_2889_;
v_a_2798_ = v_a_2890_;
goto v___jp_2796_;
}
v___jp_2796_:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v_a_2801_; 
v___x_2799_ = lean_box(0);
v___x_2800_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v___x_2792_, v___x_2799_, v_a_2798_);
lean_dec(v___x_2792_);
v_a_2801_ = lean_ctor_get(v___x_2800_, 1);
lean_inc(v_a_2801_);
lean_dec_ref(v___x_2800_);
v_a_2765_ = v_a_2797_;
v_a_2766_ = v_a_2801_;
goto v___jp_2764_;
}
}
}
else
{
uint8_t v___x_2892_; 
lean_dec_ref(v_a_2754_);
lean_dec_ref(v_file_2753_);
lean_dec_ref(v_build_2752_);
v___x_2892_ = l_System_FilePath_pathExists(v_traceFile_2756_);
lean_dec_ref(v_traceFile_2756_);
if (v___x_2892_ == 0)
{
lean_dec_ref(v___x_2791_);
lean_del_object(v___x_2786_);
v_log_2769_ = v_log_2780_;
v_action_2770_ = v___x_2789_;
v_wantsRebuild_2771_ = v_noBuild_2788_;
v_trace_2772_ = v_trace_2783_;
v_buildTime_2773_ = v_buildTime_2784_;
goto v___jp_2768_;
}
else
{
lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2893_ = lean_box(0);
v___x_2894_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___x_2895_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_2755_, v___x_2893_, v___x_2894_);
v___x_2896_ = l_Lake_BuildMetadata_writeFile(v___x_2791_, v___x_2895_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_dec_ref(v___x_2896_);
lean_del_object(v___x_2786_);
v_log_2769_ = v_log_2780_;
v_action_2770_ = v___x_2789_;
v_wantsRebuild_2771_ = v_noBuild_2788_;
v_trace_2772_ = v_trace_2783_;
v_buildTime_2773_ = v_buildTime_2784_;
goto v___jp_2768_;
}
else
{
lean_object* v_a_2897_; lean_object* v___x_2898_; uint8_t v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2904_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref(v___x_2896_);
v___x_2898_ = lean_io_error_to_string(v_a_2897_);
v___x_2899_ = 3;
v___x_2900_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2900_, 0, v___x_2898_);
lean_ctor_set_uint8(v___x_2900_, sizeof(void*)*1, v___x_2899_);
v___x_2901_ = lean_array_get_size(v_log_2780_);
v___x_2902_ = lean_array_push(v_log_2780_, v___x_2900_);
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 0, v___x_2902_);
v___x_2904_ = v___x_2786_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v___x_2902_);
lean_ctor_set(v_reuseFailAlloc_2906_, 1, v_trace_2783_);
lean_ctor_set(v_reuseFailAlloc_2906_, 2, v_buildTime_2784_);
v___x_2904_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
lean_object* v___x_2905_; 
lean_ctor_set_uint8(v___x_2904_, sizeof(void*)*3, v___x_2789_);
lean_ctor_set_uint8(v___x_2904_, sizeof(void*)*3 + 1, v_noBuild_2788_);
v___x_2905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2901_);
lean_ctor_set(v___x_2905_, 1, v___x_2904_);
return v___x_2905_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___boxed(lean_object* v_build_2908_, lean_object* v_file_2909_, lean_object* v_a_2910_, lean_object* v_depTrace_2911_, lean_object* v_traceFile_2912_, lean_object* v_action_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_){
_start:
{
uint8_t v_action_boxed_2920_; lean_object* v_res_2921_; 
v_action_boxed_2920_ = lean_unbox(v_action_2913_);
v_res_2921_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(v_build_2908_, v_file_2909_, v_a_2910_, v_depTrace_2911_, v_traceFile_2912_, v_action_boxed_2920_, v_a_2914_, v_a_2915_, v_a_2916_, v_a_2917_, v_a_2918_);
lean_dec_ref(v_a_2917_);
lean_dec(v_a_2916_);
lean_dec(v_a_2915_);
lean_dec(v_a_2914_);
lean_dec_ref(v_depTrace_2911_);
return v_res_2921_;
}
}
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(lean_object* v_info_2922_, lean_object* v_self_2923_){
_start:
{
lean_object* v___x_2925_; 
v___x_2925_ = lean_io_metadata(v_info_2922_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_object* v_a_2926_; lean_object* v_modified_2927_; uint8_t v___x_2928_; 
v_a_2926_ = lean_ctor_get(v___x_2925_, 0);
lean_inc(v_a_2926_);
lean_dec_ref(v___x_2925_);
v_modified_2927_ = lean_ctor_get(v_a_2926_, 1);
lean_inc_ref(v_modified_2927_);
lean_dec(v_a_2926_);
v___x_2928_ = l_IO_FS_instOrdSystemTime_ord(v_self_2923_, v_modified_2927_);
lean_dec_ref(v_modified_2927_);
if (v___x_2928_ == 0)
{
uint8_t v___x_2929_; 
v___x_2929_ = 1;
return v___x_2929_;
}
else
{
uint8_t v___x_2930_; 
v___x_2930_ = 0;
return v___x_2930_;
}
}
else
{
uint8_t v___x_2931_; 
lean_dec_ref(v___x_2925_);
v___x_2931_ = 0;
return v___x_2931_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1___boxed(lean_object* v_info_2932_, lean_object* v_self_2933_, lean_object* v_a_2934_){
_start:
{
uint8_t v_res_2935_; lean_object* v_r_2936_; 
v_res_2935_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_2932_, v_self_2933_);
lean_dec_ref(v_self_2933_);
lean_dec_ref(v_info_2932_);
v_r_2936_ = lean_box(v_res_2935_);
return v_r_2936_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(lean_object* v_x_2937_, lean_object* v_x_2938_){
_start:
{
if (lean_obj_tag(v_x_2937_) == 0)
{
if (lean_obj_tag(v_x_2938_) == 0)
{
uint8_t v___x_2939_; 
v___x_2939_ = 1;
return v___x_2939_;
}
else
{
uint8_t v___x_2940_; 
v___x_2940_ = 0;
return v___x_2940_;
}
}
else
{
if (lean_obj_tag(v_x_2938_) == 0)
{
uint8_t v___x_2941_; 
v___x_2941_ = 0;
return v___x_2941_;
}
else
{
lean_object* v_val_2942_; lean_object* v_val_2943_; uint64_t v___x_2944_; uint64_t v___x_2945_; uint8_t v___x_2946_; 
v_val_2942_ = lean_ctor_get(v_x_2937_, 0);
v_val_2943_ = lean_ctor_get(v_x_2938_, 0);
v___x_2944_ = lean_unbox_uint64(v_val_2942_);
v___x_2945_ = lean_unbox_uint64(v_val_2943_);
v___x_2946_ = lean_uint64_dec_eq(v___x_2944_, v___x_2945_);
return v___x_2946_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2___boxed(lean_object* v_x_2947_, lean_object* v_x_2948_){
_start:
{
uint8_t v_res_2949_; lean_object* v_r_2950_; 
v_res_2949_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(v_x_2947_, v_x_2948_);
lean_dec(v_x_2948_);
lean_dec(v_x_2947_);
v_r_2950_ = lean_box(v_res_2949_);
return v_r_2950_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(lean_object* v_info_2951_, lean_object* v_depTrace_2952_, lean_object* v_depHash_2953_, lean_object* v_oldTrace_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_){
_start:
{
uint64_t v_hash_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; uint8_t v___x_2961_; 
v_hash_2958_ = lean_ctor_get_uint64(v_depTrace_2952_, sizeof(void*)*3);
v___x_2959_ = lean_box_uint64(v_hash_2958_);
v___x_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2960_, 0, v___x_2959_);
v___x_2961_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(v___x_2960_, v_depHash_2953_);
lean_dec_ref(v___x_2960_);
if (v___x_2961_ == 0)
{
lean_object* v_toBuildConfig_2962_; uint8_t v_oldMode_2963_; 
v_toBuildConfig_2962_ = lean_ctor_get(v_a_2955_, 0);
v_oldMode_2963_ = lean_ctor_get_uint8(v_toBuildConfig_2962_, sizeof(void*)*2);
if (v_oldMode_2963_ == 0)
{
uint8_t v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2964_ = 0;
v___x_2965_ = lean_box(v___x_2964_);
v___x_2966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2966_, 0, v___x_2965_);
lean_ctor_set(v___x_2966_, 1, v_a_2956_);
return v___x_2966_;
}
else
{
uint8_t v___x_2967_; 
v___x_2967_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_2951_, v_oldTrace_2954_);
if (v___x_2967_ == 0)
{
uint8_t v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2968_ = 0;
v___x_2969_ = lean_box(v___x_2968_);
v___x_2970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2969_);
lean_ctor_set(v___x_2970_, 1, v_a_2956_);
return v___x_2970_;
}
else
{
uint8_t v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2971_ = 1;
v___x_2972_ = lean_box(v___x_2971_);
v___x_2973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2973_, 0, v___x_2972_);
lean_ctor_set(v___x_2973_, 1, v_a_2956_);
return v___x_2973_;
}
}
}
else
{
uint8_t v___x_2974_; 
v___x_2974_ = l_System_FilePath_pathExists(v_info_2951_);
if (v___x_2974_ == 0)
{
uint8_t v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; 
v___x_2975_ = 0;
v___x_2976_ = lean_box(v___x_2975_);
v___x_2977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2976_);
lean_ctor_set(v___x_2977_, 1, v_a_2956_);
return v___x_2977_;
}
else
{
uint8_t v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2978_ = 2;
v___x_2979_ = lean_box(v___x_2978_);
v___x_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
lean_ctor_set(v___x_2980_, 1, v_a_2956_);
return v___x_2980_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg___boxed(lean_object* v_info_2981_, lean_object* v_depTrace_2982_, lean_object* v_depHash_2983_, lean_object* v_oldTrace_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_){
_start:
{
lean_object* v_res_2988_; 
v_res_2988_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_2981_, v_depTrace_2982_, v_depHash_2983_, v_oldTrace_2984_, v_a_2985_, v_a_2986_);
lean_dec_ref(v_a_2985_);
lean_dec_ref(v_oldTrace_2984_);
lean_dec(v_depHash_2983_);
lean_dec_ref(v_depTrace_2982_);
lean_dec_ref(v_info_2981_);
return v_res_2988_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(lean_object* v_a_2989_, lean_object* v_info_2990_, lean_object* v_depTrace_2991_, lean_object* v_savedTrace_2992_, lean_object* v_oldTrace_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_){
_start:
{
if (lean_obj_tag(v_savedTrace_2992_) == 2)
{
lean_object* v_data_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3050_; 
v_data_3000_ = lean_ctor_get(v_savedTrace_2992_, 0);
v_isSharedCheck_3050_ = !lean_is_exclusive(v_savedTrace_2992_);
if (v_isSharedCheck_3050_ == 0)
{
v___x_3002_ = v_savedTrace_2992_;
v_isShared_3003_ = v_isSharedCheck_3050_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_data_3000_);
lean_dec(v_savedTrace_2992_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3050_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
uint64_t v_depHash_3004_; lean_object* v_log_3005_; lean_object* v___x_3006_; lean_object* v___x_3008_; 
v_depHash_3004_ = lean_ctor_get_uint64(v_data_3000_, sizeof(void*)*3);
v_log_3005_ = lean_ctor_get(v_data_3000_, 2);
lean_inc_ref(v_log_3005_);
lean_dec_ref(v_data_3000_);
v___x_3006_ = lean_box_uint64(v_depHash_3004_);
if (v_isShared_3003_ == 0)
{
lean_ctor_set_tag(v___x_3002_, 1);
lean_ctor_set(v___x_3002_, 0, v___x_3006_);
v___x_3008_ = v___x_3002_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v___x_3006_);
v___x_3008_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
lean_object* v___x_3009_; lean_object* v_a_3010_; lean_object* v_a_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3048_; 
v___x_3009_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_2990_, v_depTrace_2991_, v___x_3008_, v_oldTrace_2993_, v_a_2997_, v_a_2998_);
lean_dec_ref(v___x_3008_);
v_a_3010_ = lean_ctor_get(v___x_3009_, 0);
v_a_3011_ = lean_ctor_get(v___x_3009_, 1);
v_isSharedCheck_3048_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_3013_ = v___x_3009_;
v_isShared_3014_ = v_isSharedCheck_3048_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_a_3011_);
lean_inc(v_a_3010_);
lean_dec(v___x_3009_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3048_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v___y_3016_; uint8_t v___x_3020_; uint8_t v___x_3021_; uint8_t v___x_3022_; 
v___x_3020_ = 0;
v___x_3021_ = lean_unbox(v_a_3010_);
v___x_3022_ = l_Lake_instDecidableEqOutputStatus(v___x_3021_, v___x_3020_);
if (v___x_3022_ == 0)
{
lean_object* v_log_3023_; uint8_t v_action_3024_; uint8_t v_wantsRebuild_3025_; lean_object* v_trace_3026_; lean_object* v_buildTime_3027_; lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3047_; 
v_log_3023_ = lean_ctor_get(v_a_3011_, 0);
v_action_3024_ = lean_ctor_get_uint8(v_a_3011_, sizeof(void*)*3);
v_wantsRebuild_3025_ = lean_ctor_get_uint8(v_a_3011_, sizeof(void*)*3 + 1);
v_trace_3026_ = lean_ctor_get(v_a_3011_, 1);
v_buildTime_3027_ = lean_ctor_get(v_a_3011_, 2);
v_isSharedCheck_3047_ = !lean_is_exclusive(v_a_3011_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3029_ = v_a_3011_;
v_isShared_3030_ = v_isSharedCheck_3047_;
goto v_resetjp_3028_;
}
else
{
lean_inc(v_buildTime_3027_);
lean_inc(v_trace_3026_);
lean_inc(v_log_3023_);
lean_dec(v_a_3011_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3047_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
uint8_t v___x_3031_; uint8_t v___x_3032_; lean_object* v___x_3034_; 
v___x_3031_ = 1;
v___x_3032_ = l_Lake_JobAction_merge(v_action_3024_, v___x_3031_);
if (v_isShared_3030_ == 0)
{
v___x_3034_ = v___x_3029_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_log_3023_);
lean_ctor_set(v_reuseFailAlloc_3046_, 1, v_trace_3026_);
lean_ctor_set(v_reuseFailAlloc_3046_, 2, v_buildTime_3027_);
lean_ctor_set_uint8(v_reuseFailAlloc_3046_, sizeof(void*)*3 + 1, v_wantsRebuild_3025_);
v___x_3034_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
lean_object* v___x_3035_; 
lean_ctor_set_uint8(v___x_3034_, sizeof(void*)*3, v___x_3032_);
v___x_3035_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_3005_, v_a_2989_, v_a_2994_, v_a_2995_, v_a_2996_, v_a_2997_, v___x_3034_);
lean_dec_ref(v_log_3005_);
if (lean_obj_tag(v___x_3035_) == 0)
{
lean_object* v_a_3036_; 
v_a_3036_ = lean_ctor_get(v___x_3035_, 1);
lean_inc(v_a_3036_);
lean_dec_ref(v___x_3035_);
v___y_3016_ = v_a_3036_;
goto v___jp_3015_;
}
else
{
lean_object* v_a_3037_; lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3045_; 
lean_del_object(v___x_3013_);
lean_dec(v_a_3010_);
v_a_3037_ = lean_ctor_get(v___x_3035_, 0);
v_a_3038_ = lean_ctor_get(v___x_3035_, 1);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3035_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3040_ = v___x_3035_;
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_inc(v_a_3037_);
lean_dec(v___x_3035_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3037_);
lean_ctor_set(v_reuseFailAlloc_3044_, 1, v_a_3038_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_log_3005_);
v___y_3016_ = v_a_3011_;
goto v___jp_3015_;
}
v___jp_3015_:
{
lean_object* v___x_3018_; 
if (v_isShared_3014_ == 0)
{
lean_ctor_set(v___x_3013_, 1, v___y_3016_);
v___x_3018_ = v___x_3013_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_a_3010_);
lean_ctor_set(v_reuseFailAlloc_3019_, 1, v___y_3016_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
}
}
}
}
else
{
lean_object* v_toBuildConfig_3051_; uint8_t v_oldMode_3052_; 
lean_dec(v_savedTrace_2992_);
v_toBuildConfig_3051_ = lean_ctor_get(v_a_2997_, 0);
v_oldMode_3052_ = lean_ctor_get_uint8(v_toBuildConfig_3051_, sizeof(void*)*2);
if (v_oldMode_3052_ == 0)
{
uint8_t v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3053_ = 0;
v___x_3054_ = lean_box(v___x_3053_);
v___x_3055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3054_);
lean_ctor_set(v___x_3055_, 1, v_a_2998_);
return v___x_3055_;
}
else
{
uint8_t v___x_3056_; 
v___x_3056_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_2990_, v_oldTrace_2993_);
if (v___x_3056_ == 0)
{
uint8_t v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3057_ = 0;
v___x_3058_ = lean_box(v___x_3057_);
v___x_3059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3058_);
lean_ctor_set(v___x_3059_, 1, v_a_2998_);
return v___x_3059_;
}
else
{
uint8_t v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; 
v___x_3060_ = 1;
v___x_3061_ = lean_box(v___x_3060_);
v___x_3062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3061_);
lean_ctor_set(v___x_3062_, 1, v_a_2998_);
return v___x_3062_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0___boxed(lean_object* v_a_3063_, lean_object* v_info_3064_, lean_object* v_depTrace_3065_, lean_object* v_savedTrace_3066_, lean_object* v_oldTrace_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_, lean_object* v_a_3073_){
_start:
{
lean_object* v_res_3074_; 
v_res_3074_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_3063_, v_info_3064_, v_depTrace_3065_, v_savedTrace_3066_, v_oldTrace_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
lean_dec_ref(v_a_3071_);
lean_dec(v_a_3070_);
lean_dec(v_a_3069_);
lean_dec(v_a_3068_);
lean_dec_ref(v_oldTrace_3067_);
lean_dec_ref(v_depTrace_3065_);
lean_dec_ref(v_info_3064_);
lean_dec_ref(v_a_3063_);
return v_res_3074_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27(lean_object* v_file_3076_, lean_object* v_build_3077_, uint8_t v_text_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_){
_start:
{
lean_object* v_a_3087_; lean_object* v_a_3088_; lean_object* v_a_3091_; lean_object* v_log_3124_; uint8_t v_action_3125_; uint8_t v_wantsRebuild_3126_; lean_object* v_trace_3127_; lean_object* v_buildTime_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3159_; 
v_log_3124_ = lean_ctor_get(v_a_3084_, 0);
v_action_3125_ = lean_ctor_get_uint8(v_a_3084_, sizeof(void*)*3);
v_wantsRebuild_3126_ = lean_ctor_get_uint8(v_a_3084_, sizeof(void*)*3 + 1);
v_trace_3127_ = lean_ctor_get(v_a_3084_, 1);
v_buildTime_3128_ = lean_ctor_get(v_a_3084_, 2);
v_isSharedCheck_3159_ = !lean_is_exclusive(v_a_3084_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3130_ = v_a_3084_;
v_isShared_3131_ = v_isSharedCheck_3159_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_buildTime_3128_);
lean_inc(v_trace_3127_);
lean_inc(v_log_3124_);
lean_dec(v_a_3084_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3159_;
goto v_resetjp_3129_;
}
v___jp_3086_:
{
lean_object* v___x_3089_; 
v___x_3089_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3089_, 0, v_a_3087_);
lean_ctor_set(v___x_3089_, 1, v_a_3088_);
return v___x_3089_;
}
v___jp_3090_:
{
lean_object* v___x_3092_; 
v___x_3092_ = l_Lake_fetchFileTrace___redArg(v_file_3076_, v_text_3078_, v_a_3083_, v_a_3091_);
if (lean_obj_tag(v___x_3092_) == 0)
{
lean_object* v_a_3093_; lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3114_; 
v_a_3093_ = lean_ctor_get(v___x_3092_, 1);
v_a_3094_ = lean_ctor_get(v___x_3092_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3092_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3096_ = v___x_3092_;
v_isShared_3097_ = v_isSharedCheck_3114_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3093_);
lean_inc(v_a_3094_);
lean_dec(v___x_3092_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3114_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v_log_3098_; uint8_t v_action_3099_; uint8_t v_wantsRebuild_3100_; lean_object* v_buildTime_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3112_; 
v_log_3098_ = lean_ctor_get(v_a_3093_, 0);
v_action_3099_ = lean_ctor_get_uint8(v_a_3093_, sizeof(void*)*3);
v_wantsRebuild_3100_ = lean_ctor_get_uint8(v_a_3093_, sizeof(void*)*3 + 1);
v_buildTime_3101_ = lean_ctor_get(v_a_3093_, 2);
v_isSharedCheck_3112_ = !lean_is_exclusive(v_a_3093_);
if (v_isSharedCheck_3112_ == 0)
{
lean_object* v_unused_3113_; 
v_unused_3113_ = lean_ctor_get(v_a_3093_, 1);
lean_dec(v_unused_3113_);
v___x_3103_ = v_a_3093_;
v_isShared_3104_ = v_isSharedCheck_3112_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_buildTime_3101_);
lean_inc(v_log_3098_);
lean_dec(v_a_3093_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3112_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3105_; lean_object* v___x_3107_; 
v___x_3105_ = lean_box(0);
if (v_isShared_3104_ == 0)
{
lean_ctor_set(v___x_3103_, 1, v_a_3094_);
v___x_3107_ = v___x_3103_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_log_3098_);
lean_ctor_set(v_reuseFailAlloc_3111_, 1, v_a_3094_);
lean_ctor_set(v_reuseFailAlloc_3111_, 2, v_buildTime_3101_);
lean_ctor_set_uint8(v_reuseFailAlloc_3111_, sizeof(void*)*3, v_action_3099_);
lean_ctor_set_uint8(v_reuseFailAlloc_3111_, sizeof(void*)*3 + 1, v_wantsRebuild_3100_);
v___x_3107_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
lean_object* v___x_3109_; 
if (v_isShared_3097_ == 0)
{
lean_ctor_set(v___x_3096_, 1, v___x_3107_);
lean_ctor_set(v___x_3096_, 0, v___x_3105_);
v___x_3109_ = v___x_3096_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v___x_3105_);
lean_ctor_set(v_reuseFailAlloc_3110_, 1, v___x_3107_);
v___x_3109_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
return v___x_3109_;
}
}
}
}
}
else
{
lean_object* v_a_3115_; lean_object* v_a_3116_; lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3123_; 
v_a_3115_ = lean_ctor_get(v___x_3092_, 0);
v_a_3116_ = lean_ctor_get(v___x_3092_, 1);
v_isSharedCheck_3123_ = !lean_is_exclusive(v___x_3092_);
if (v_isSharedCheck_3123_ == 0)
{
v___x_3118_ = v___x_3092_;
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
else
{
lean_inc(v_a_3116_);
lean_inc(v_a_3115_);
lean_dec(v___x_3092_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3121_; 
if (v_isShared_3119_ == 0)
{
v___x_3121_ = v___x_3118_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3122_; 
v_reuseFailAlloc_3122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3122_, 0, v_a_3115_);
lean_ctor_set(v_reuseFailAlloc_3122_, 1, v_a_3116_);
v___x_3121_ = v_reuseFailAlloc_3122_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
return v___x_3121_;
}
}
}
}
v_resetjp_3129_:
{
lean_object* v___x_3132_; lean_object* v_traceFile_3133_; lean_object* v___x_3134_; 
v___x_3132_ = ((lean_object*)(l_Lake_buildFileUnlessUpToDate_x27___closed__0));
lean_inc_ref(v_file_3076_);
v_traceFile_3133_ = lean_string_append(v_file_3076_, v___x_3132_);
lean_inc_ref(v_traceFile_3133_);
v___x_3134_ = l_Lake_readTraceFile(v_traceFile_3133_, v_log_3124_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v_a_3136_; lean_object* v_mtime_3137_; lean_object* v___x_3139_; 
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3135_);
v_a_3136_ = lean_ctor_get(v___x_3134_, 1);
lean_inc(v_a_3136_);
lean_dec_ref(v___x_3134_);
v_mtime_3137_ = lean_ctor_get(v_trace_3127_, 2);
lean_inc_ref(v_trace_3127_);
if (v_isShared_3131_ == 0)
{
lean_ctor_set(v___x_3130_, 0, v_a_3136_);
v___x_3139_ = v___x_3130_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_a_3136_);
lean_ctor_set(v_reuseFailAlloc_3153_, 1, v_trace_3127_);
lean_ctor_set(v_reuseFailAlloc_3153_, 2, v_buildTime_3128_);
lean_ctor_set_uint8(v_reuseFailAlloc_3153_, sizeof(void*)*3, v_action_3125_);
lean_ctor_set_uint8(v_reuseFailAlloc_3153_, sizeof(void*)*3 + 1, v_wantsRebuild_3126_);
v___x_3139_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
lean_object* v___x_3140_; 
v___x_3140_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_3079_, v_file_3076_, v_trace_3127_, v_a_3135_, v_mtime_3137_, v_a_3080_, v_a_3081_, v_a_3082_, v_a_3083_, v___x_3139_);
if (lean_obj_tag(v___x_3140_) == 0)
{
lean_object* v_a_3141_; lean_object* v_a_3142_; uint8_t v___x_3143_; uint8_t v___x_3144_; uint8_t v___x_3145_; 
v_a_3141_ = lean_ctor_get(v___x_3140_, 0);
lean_inc(v_a_3141_);
v_a_3142_ = lean_ctor_get(v___x_3140_, 1);
lean_inc(v_a_3142_);
lean_dec_ref(v___x_3140_);
v___x_3143_ = 0;
v___x_3144_ = lean_unbox(v_a_3141_);
lean_dec(v_a_3141_);
v___x_3145_ = l_Lake_instDecidableEqOutputStatus(v___x_3144_, v___x_3143_);
if (v___x_3145_ == 0)
{
lean_dec_ref(v_traceFile_3133_);
lean_dec_ref(v_trace_3127_);
lean_dec_ref(v_a_3079_);
lean_dec_ref(v_build_3077_);
v_a_3091_ = v_a_3142_;
goto v___jp_3090_;
}
else
{
uint8_t v___x_3146_; lean_object* v___x_3147_; 
v___x_3146_ = 3;
lean_inc_ref(v_file_3076_);
v___x_3147_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(v_build_3077_, v_file_3076_, v_a_3079_, v_trace_3127_, v_traceFile_3133_, v___x_3146_, v_a_3080_, v_a_3081_, v_a_3082_, v_a_3083_, v_a_3142_);
lean_dec_ref(v_trace_3127_);
if (lean_obj_tag(v___x_3147_) == 0)
{
lean_object* v_a_3148_; 
v_a_3148_ = lean_ctor_get(v___x_3147_, 1);
lean_inc(v_a_3148_);
lean_dec_ref(v___x_3147_);
v_a_3091_ = v_a_3148_;
goto v___jp_3090_;
}
else
{
lean_object* v_a_3149_; lean_object* v_a_3150_; 
lean_dec_ref(v_file_3076_);
v_a_3149_ = lean_ctor_get(v___x_3147_, 0);
lean_inc(v_a_3149_);
v_a_3150_ = lean_ctor_get(v___x_3147_, 1);
lean_inc(v_a_3150_);
lean_dec_ref(v___x_3147_);
v_a_3087_ = v_a_3149_;
v_a_3088_ = v_a_3150_;
goto v___jp_3086_;
}
}
}
else
{
lean_object* v_a_3151_; lean_object* v_a_3152_; 
lean_dec_ref(v_traceFile_3133_);
lean_dec_ref(v_trace_3127_);
lean_dec_ref(v_a_3079_);
lean_dec_ref(v_build_3077_);
lean_dec_ref(v_file_3076_);
v_a_3151_ = lean_ctor_get(v___x_3140_, 0);
lean_inc(v_a_3151_);
v_a_3152_ = lean_ctor_get(v___x_3140_, 1);
lean_inc(v_a_3152_);
lean_dec_ref(v___x_3140_);
v_a_3087_ = v_a_3151_;
v_a_3088_ = v_a_3152_;
goto v___jp_3086_;
}
}
}
else
{
lean_object* v_a_3154_; lean_object* v_a_3155_; lean_object* v___x_3157_; 
lean_dec_ref(v_traceFile_3133_);
lean_dec_ref(v_a_3079_);
lean_dec_ref(v_build_3077_);
lean_dec_ref(v_file_3076_);
v_a_3154_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3154_);
v_a_3155_ = lean_ctor_get(v___x_3134_, 1);
lean_inc(v_a_3155_);
lean_dec_ref(v___x_3134_);
if (v_isShared_3131_ == 0)
{
lean_ctor_set(v___x_3130_, 0, v_a_3155_);
v___x_3157_ = v___x_3130_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3155_);
lean_ctor_set(v_reuseFailAlloc_3158_, 1, v_trace_3127_);
lean_ctor_set(v_reuseFailAlloc_3158_, 2, v_buildTime_3128_);
lean_ctor_set_uint8(v_reuseFailAlloc_3158_, sizeof(void*)*3, v_action_3125_);
lean_ctor_set_uint8(v_reuseFailAlloc_3158_, sizeof(void*)*3 + 1, v_wantsRebuild_3126_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
v_a_3087_ = v_a_3154_;
v_a_3088_ = v___x_3157_;
goto v___jp_3086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27___boxed(lean_object* v_file_3160_, lean_object* v_build_3161_, lean_object* v_text_3162_, lean_object* v_a_3163_, lean_object* v_a_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_){
_start:
{
uint8_t v_text_boxed_3170_; lean_object* v_res_3171_; 
v_text_boxed_3170_ = lean_unbox(v_text_3162_);
v_res_3171_ = l_Lake_buildFileUnlessUpToDate_x27(v_file_3160_, v_build_3161_, v_text_boxed_3170_, v_a_3163_, v_a_3164_, v_a_3165_, v_a_3166_, v_a_3167_, v_a_3168_);
lean_dec_ref(v_a_3167_);
lean_dec(v_a_3166_);
lean_dec(v_a_3165_);
lean_dec(v_a_3164_);
return v_res_3171_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0(lean_object* v_a_3172_, lean_object* v_info_3173_, lean_object* v_depTrace_3174_, lean_object* v_depHash_3175_, lean_object* v_oldTrace_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_){
_start:
{
lean_object* v___x_3183_; 
v___x_3183_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_3173_, v_depTrace_3174_, v_depHash_3175_, v_oldTrace_3176_, v_a_3180_, v_a_3181_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___boxed(lean_object* v_a_3184_, lean_object* v_info_3185_, lean_object* v_depTrace_3186_, lean_object* v_depHash_3187_, lean_object* v_oldTrace_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_, lean_object* v_a_3194_){
_start:
{
lean_object* v_res_3195_; 
v_res_3195_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0(v_a_3184_, v_info_3185_, v_depTrace_3186_, v_depHash_3187_, v_oldTrace_3188_, v_a_3189_, v_a_3190_, v_a_3191_, v_a_3192_, v_a_3193_);
lean_dec_ref(v_a_3192_);
lean_dec(v_a_3191_);
lean_dec(v_a_3190_);
lean_dec(v_a_3189_);
lean_dec_ref(v_oldTrace_3188_);
lean_dec(v_depHash_3187_);
lean_dec_ref(v_depTrace_3186_);
lean_dec_ref(v_info_3185_);
lean_dec_ref(v_a_3184_);
return v_res_3195_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0(lean_object* v___x_3196_, lean_object* v___x_3197_, lean_object* v_file_3198_, uint64_t v___x_3199_, lean_object* v___x_3200_, uint8_t v_useLocalFile_3201_, lean_object* v_____r_3202_){
_start:
{
lean_object* v___x_3204_; 
v___x_3204_ = l_IO_setAccessRights(v___x_3196_, v___x_3197_);
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v___x_3205_; 
lean_dec_ref(v___x_3204_);
lean_inc_ref(v_file_3198_);
v___x_3205_ = l_Lake_writeFileHash(v_file_3198_, v___x_3199_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v___x_3206_; 
lean_dec_ref(v___x_3205_);
v___x_3206_ = lean_io_metadata(v___x_3196_);
if (lean_obj_tag(v___x_3206_) == 0)
{
lean_object* v_a_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3219_; 
v_a_3207_ = lean_ctor_get(v___x_3206_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3209_ = v___x_3206_;
v_isShared_3210_ = v_isSharedCheck_3219_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_a_3207_);
lean_dec(v___x_3206_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3219_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v_modified_3211_; lean_object* v___y_3213_; 
v_modified_3211_ = lean_ctor_get(v_a_3207_, 1);
lean_inc_ref(v_modified_3211_);
lean_dec(v_a_3207_);
if (v_useLocalFile_3201_ == 0)
{
v___y_3213_ = v___x_3196_;
goto v___jp_3212_;
}
else
{
lean_dec_ref(v___x_3196_);
lean_inc_ref(v_file_3198_);
v___y_3213_ = v_file_3198_;
goto v___jp_3212_;
}
v___jp_3212_:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3217_; 
v___x_3214_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3214_, 0, v___x_3200_);
lean_ctor_set(v___x_3214_, 1, v___y_3213_);
lean_ctor_set(v___x_3214_, 2, v_file_3198_);
lean_ctor_set(v___x_3214_, 3, v_modified_3211_);
v___x_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3214_);
if (v_isShared_3210_ == 0)
{
lean_ctor_set(v___x_3209_, 0, v___x_3215_);
v___x_3217_ = v___x_3209_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v___x_3215_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
}
else
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3227_; 
lean_dec_ref(v___x_3200_);
lean_dec_ref(v_file_3198_);
lean_dec_ref(v___x_3196_);
v_a_3220_ = lean_ctor_get(v___x_3206_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3222_ = v___x_3206_;
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3206_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3225_; 
if (v_isShared_3223_ == 0)
{
v___x_3225_ = v___x_3222_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_a_3220_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
}
}
else
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3235_; 
lean_dec_ref(v___x_3200_);
lean_dec_ref(v_file_3198_);
lean_dec_ref(v___x_3196_);
v_a_3228_ = lean_ctor_get(v___x_3205_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3230_ = v___x_3205_;
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3205_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3233_; 
if (v_isShared_3231_ == 0)
{
v___x_3233_ = v___x_3230_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_a_3228_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
}
}
else
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
lean_dec_ref(v___x_3200_);
lean_dec_ref(v_file_3198_);
lean_dec_ref(v___x_3196_);
v_a_3236_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3204_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v___x_3204_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0___boxed(lean_object* v___x_3244_, lean_object* v___x_3245_, lean_object* v_file_3246_, lean_object* v___x_3247_, lean_object* v___x_3248_, lean_object* v_useLocalFile_3249_, lean_object* v_____r_3250_, lean_object* v___y_3251_){
_start:
{
uint64_t v___x_2961__boxed_3252_; uint8_t v_useLocalFile_boxed_3253_; lean_object* v_res_3254_; 
v___x_2961__boxed_3252_ = lean_unbox_uint64(v___x_3247_);
lean_dec_ref(v___x_3247_);
v_useLocalFile_boxed_3253_ = lean_unbox(v_useLocalFile_3249_);
v_res_3254_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3244_, v___x_3245_, v_file_3246_, v___x_2961__boxed_3252_, v___x_3248_, v_useLocalFile_boxed_3253_, v_____r_3250_);
lean_dec_ref(v___x_3245_);
return v_res_3254_;
}
}
static lean_object* _init_l_Lake_Cache_saveArtifact___closed__3(void){
_start:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3260_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__2));
v___x_3261_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3260_);
lean_ctor_set(v___x_3261_, 1, v___x_3260_);
lean_ctor_set(v___x_3261_, 2, v___x_3260_);
return v___x_3261_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact(lean_object* v_cache_3262_, lean_object* v_file_3263_, lean_object* v_ext_3264_, uint8_t v_text_3265_, uint8_t v_exe_3266_, uint8_t v_useLocalFile_3267_){
_start:
{
lean_object* v_a_3270_; lean_object* v___y_3277_; uint8_t v___x_3288_; 
v___x_3288_ = 1;
if (v_text_3265_ == 0)
{
lean_object* v___x_3289_; 
v___x_3289_ = l_IO_FS_readBinFile(v_file_3263_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v_a_3290_; uint64_t v___x_3291_; uint64_t v___x_3292_; uint64_t v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___y_3298_; lean_object* v___x_3319_; lean_object* v___x_3320_; uint8_t v___x_3321_; 
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
lean_inc(v_a_3290_);
lean_dec_ref(v___x_3289_);
v___x_3291_ = l_Lake_Hash_nil;
v___x_3292_ = lean_byte_array_hash(v_a_3290_);
v___x_3293_ = lean_uint64_mix_hash(v___x_3291_, v___x_3292_);
lean_inc_ref(v_ext_3264_);
v___x_3294_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3294_, 0, v_ext_3264_);
lean_ctor_set_uint64(v___x_3294_, sizeof(void*)*1, v___x_3293_);
v___x_3295_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__1));
v___x_3296_ = l_System_FilePath_join(v_cache_3262_, v___x_3295_);
v___x_3319_ = lean_string_utf8_byte_size(v_ext_3264_);
v___x_3320_ = lean_unsigned_to_nat(0u);
v___x_3321_ = lean_nat_dec_eq(v___x_3319_, v___x_3320_);
if (v___x_3321_ == 0)
{
lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v___x_3322_ = l_Lake_Hash_hex(v___x_3293_);
v___x_3323_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_3324_ = lean_string_append(v___x_3322_, v___x_3323_);
v___x_3325_ = lean_string_append(v___x_3324_, v_ext_3264_);
lean_dec_ref(v_ext_3264_);
v___y_3298_ = v___x_3325_;
goto v___jp_3297_;
}
else
{
lean_object* v___x_3326_; 
lean_dec_ref(v_ext_3264_);
v___x_3326_ = l_Lake_Hash_hex(v___x_3293_);
v___y_3298_ = v___x_3326_;
goto v___jp_3297_;
}
v___jp_3297_:
{
lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; 
v___x_3299_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_3299_, 0, v___x_3288_);
lean_ctor_set_uint8(v___x_3299_, 1, v_text_3265_);
lean_ctor_set_uint8(v___x_3299_, 2, v_exe_3266_);
lean_inc_ref_n(v___x_3299_, 2);
v___x_3300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3299_);
lean_ctor_set(v___x_3300_, 1, v___x_3299_);
lean_ctor_set(v___x_3300_, 2, v___x_3299_);
v___x_3301_ = l_IO_setAccessRights(v_file_3263_, v___x_3300_);
if (lean_obj_tag(v___x_3301_) == 0)
{
lean_object* v___x_3302_; uint8_t v___x_3303_; 
lean_dec_ref(v___x_3301_);
v___x_3302_ = l_Lake_joinRelative(v___x_3296_, v___y_3298_);
v___x_3303_ = l_System_FilePath_pathExists(v___x_3302_);
if (v___x_3303_ == 0)
{
lean_object* v___x_3304_; 
lean_inc_ref(v___x_3302_);
v___x_3304_ = l_Lake_createParentDirs(v___x_3302_);
if (lean_obj_tag(v___x_3304_) == 0)
{
lean_object* v___x_3305_; 
lean_dec_ref(v___x_3304_);
v___x_3305_ = lean_io_hard_link(v_file_3263_, v___x_3302_);
if (lean_obj_tag(v___x_3305_) == 0)
{
lean_object* v___x_3306_; lean_object* v___x_3307_; 
lean_dec_ref(v___x_3305_);
lean_dec(v_a_3290_);
v___x_3306_ = lean_box(0);
v___x_3307_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3302_, v___x_3300_, v_file_3263_, v___x_3293_, v___x_3294_, v_useLocalFile_3267_, v___x_3306_);
lean_dec_ref(v___x_3300_);
v___y_3277_ = v___x_3307_;
goto v___jp_3276_;
}
else
{
lean_object* v_a_3308_; 
v_a_3308_ = lean_ctor_get(v___x_3305_, 0);
lean_inc(v_a_3308_);
lean_dec_ref(v___x_3305_);
if (lean_obj_tag(v_a_3308_) == 0)
{
lean_object* v___x_3309_; lean_object* v___x_3310_; 
lean_dec_ref(v_a_3308_);
lean_dec(v_a_3290_);
v___x_3309_ = lean_box(0);
v___x_3310_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3302_, v___x_3300_, v_file_3263_, v___x_3293_, v___x_3294_, v_useLocalFile_3267_, v___x_3309_);
lean_dec_ref(v___x_3300_);
v___y_3277_ = v___x_3310_;
goto v___jp_3276_;
}
else
{
lean_object* v___x_3311_; 
lean_dec(v_a_3308_);
v___x_3311_ = l_Lake_writeBinFileIfNew(v___x_3302_, v_a_3290_);
lean_dec(v_a_3290_);
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v_a_3312_; lean_object* v___x_3313_; 
v_a_3312_ = lean_ctor_get(v___x_3311_, 0);
lean_inc(v_a_3312_);
lean_dec_ref(v___x_3311_);
v___x_3313_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3302_, v___x_3300_, v_file_3263_, v___x_3293_, v___x_3294_, v_useLocalFile_3267_, v_a_3312_);
lean_dec_ref(v___x_3300_);
v___y_3277_ = v___x_3313_;
goto v___jp_3276_;
}
else
{
lean_object* v_a_3314_; 
lean_dec_ref(v___x_3302_);
lean_dec_ref(v___x_3300_);
lean_dec_ref(v___x_3294_);
lean_dec_ref(v_file_3263_);
v_a_3314_ = lean_ctor_get(v___x_3311_, 0);
lean_inc(v_a_3314_);
lean_dec_ref(v___x_3311_);
v_a_3270_ = v_a_3314_;
goto v___jp_3269_;
}
}
}
}
else
{
lean_object* v_a_3315_; 
lean_dec_ref(v___x_3302_);
lean_dec_ref(v___x_3300_);
lean_dec_ref(v___x_3294_);
lean_dec(v_a_3290_);
lean_dec_ref(v_file_3263_);
v_a_3315_ = lean_ctor_get(v___x_3304_, 0);
lean_inc(v_a_3315_);
lean_dec_ref(v___x_3304_);
v_a_3270_ = v_a_3315_;
goto v___jp_3269_;
}
}
else
{
lean_object* v___x_3316_; lean_object* v___x_3317_; 
lean_dec(v_a_3290_);
v___x_3316_ = lean_box(0);
v___x_3317_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3302_, v___x_3300_, v_file_3263_, v___x_3293_, v___x_3294_, v_useLocalFile_3267_, v___x_3316_);
lean_dec_ref(v___x_3300_);
v___y_3277_ = v___x_3317_;
goto v___jp_3276_;
}
}
else
{
lean_object* v_a_3318_; 
lean_dec_ref(v___x_3300_);
lean_dec_ref(v___y_3298_);
lean_dec_ref(v___x_3296_);
lean_dec_ref(v___x_3294_);
lean_dec(v_a_3290_);
lean_dec_ref(v_file_3263_);
v_a_3318_ = lean_ctor_get(v___x_3301_, 0);
lean_inc(v_a_3318_);
lean_dec_ref(v___x_3301_);
v_a_3270_ = v_a_3318_;
goto v___jp_3269_;
}
}
}
else
{
lean_object* v_a_3327_; 
lean_dec_ref(v_ext_3264_);
lean_dec_ref(v_file_3263_);
lean_dec_ref(v_cache_3262_);
v_a_3327_ = lean_ctor_get(v___x_3289_, 0);
lean_inc(v_a_3327_);
lean_dec_ref(v___x_3289_);
v_a_3270_ = v_a_3327_;
goto v___jp_3269_;
}
}
else
{
lean_object* v___x_3328_; 
v___x_3328_ = l_IO_FS_readFile(v_file_3263_);
if (lean_obj_tag(v___x_3328_) == 0)
{
lean_object* v_a_3329_; lean_object* v___x_3330_; uint64_t v___x_3331_; uint64_t v___x_3332_; uint64_t v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___y_3338_; lean_object* v___x_3352_; lean_object* v___x_3353_; uint8_t v___x_3354_; 
v_a_3329_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_a_3329_);
lean_dec_ref(v___x_3328_);
v___x_3330_ = l_String_crlfToLf(v_a_3329_);
lean_dec(v_a_3329_);
v___x_3331_ = l_Lake_Hash_nil;
v___x_3332_ = lean_string_hash(v___x_3330_);
v___x_3333_ = lean_uint64_mix_hash(v___x_3331_, v___x_3332_);
lean_inc_ref(v_ext_3264_);
v___x_3334_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3334_, 0, v_ext_3264_);
lean_ctor_set_uint64(v___x_3334_, sizeof(void*)*1, v___x_3333_);
v___x_3335_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__1));
v___x_3336_ = l_System_FilePath_join(v_cache_3262_, v___x_3335_);
v___x_3352_ = lean_string_utf8_byte_size(v_ext_3264_);
v___x_3353_ = lean_unsigned_to_nat(0u);
v___x_3354_ = lean_nat_dec_eq(v___x_3352_, v___x_3353_);
if (v___x_3354_ == 0)
{
lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v___x_3355_ = l_Lake_Hash_hex(v___x_3333_);
v___x_3356_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_3357_ = lean_string_append(v___x_3355_, v___x_3356_);
v___x_3358_ = lean_string_append(v___x_3357_, v_ext_3264_);
lean_dec_ref(v_ext_3264_);
v___y_3338_ = v___x_3358_;
goto v___jp_3337_;
}
else
{
lean_object* v___x_3359_; 
lean_dec_ref(v_ext_3264_);
v___x_3359_ = l_Lake_Hash_hex(v___x_3333_);
v___y_3338_ = v___x_3359_;
goto v___jp_3337_;
}
v___jp_3337_:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3339_ = lean_obj_once(&l_Lake_Cache_saveArtifact___closed__3, &l_Lake_Cache_saveArtifact___closed__3_once, _init_l_Lake_Cache_saveArtifact___closed__3);
v___x_3340_ = l_IO_setAccessRights(v_file_3263_, v___x_3339_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v___x_3341_; uint8_t v___x_3342_; 
lean_dec_ref(v___x_3340_);
v___x_3341_ = l_Lake_joinRelative(v___x_3336_, v___y_3338_);
v___x_3342_ = l_System_FilePath_pathExists(v___x_3341_);
if (v___x_3342_ == 0)
{
lean_object* v___x_3343_; 
lean_inc_ref(v___x_3341_);
v___x_3343_ = l_Lake_createParentDirs(v___x_3341_);
if (lean_obj_tag(v___x_3343_) == 0)
{
lean_object* v___x_3344_; 
lean_dec_ref(v___x_3343_);
v___x_3344_ = l_Lake_writeFileIfNew(v___x_3341_, v___x_3330_);
lean_dec_ref(v___x_3330_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v_a_3345_; lean_object* v___x_3346_; 
v_a_3345_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_a_3345_);
lean_dec_ref(v___x_3344_);
v___x_3346_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3341_, v___x_3339_, v_file_3263_, v___x_3333_, v___x_3334_, v_useLocalFile_3267_, v_a_3345_);
v___y_3277_ = v___x_3346_;
goto v___jp_3276_;
}
else
{
lean_object* v_a_3347_; 
lean_dec_ref(v___x_3341_);
lean_dec_ref(v___x_3334_);
lean_dec_ref(v_file_3263_);
v_a_3347_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_a_3347_);
lean_dec_ref(v___x_3344_);
v_a_3270_ = v_a_3347_;
goto v___jp_3269_;
}
}
else
{
lean_object* v_a_3348_; 
lean_dec_ref(v___x_3341_);
lean_dec_ref(v___x_3334_);
lean_dec_ref(v___x_3330_);
lean_dec_ref(v_file_3263_);
v_a_3348_ = lean_ctor_get(v___x_3343_, 0);
lean_inc(v_a_3348_);
lean_dec_ref(v___x_3343_);
v_a_3270_ = v_a_3348_;
goto v___jp_3269_;
}
}
else
{
lean_object* v___x_3349_; lean_object* v___x_3350_; 
lean_dec_ref(v___x_3330_);
v___x_3349_ = lean_box(0);
v___x_3350_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3341_, v___x_3339_, v_file_3263_, v___x_3333_, v___x_3334_, v_useLocalFile_3267_, v___x_3349_);
v___y_3277_ = v___x_3350_;
goto v___jp_3276_;
}
}
else
{
lean_object* v_a_3351_; 
lean_dec_ref(v___y_3338_);
lean_dec_ref(v___x_3336_);
lean_dec_ref(v___x_3334_);
lean_dec_ref(v___x_3330_);
lean_dec_ref(v_file_3263_);
v_a_3351_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_a_3351_);
lean_dec_ref(v___x_3340_);
v_a_3270_ = v_a_3351_;
goto v___jp_3269_;
}
}
}
else
{
lean_object* v_a_3360_; 
lean_dec_ref(v_ext_3264_);
lean_dec_ref(v_file_3263_);
lean_dec_ref(v_cache_3262_);
v_a_3360_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_a_3360_);
lean_dec_ref(v___x_3328_);
v_a_3270_ = v_a_3360_;
goto v___jp_3269_;
}
}
v___jp_3269_:
{
lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; 
v___x_3271_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__0));
v___x_3272_ = lean_io_error_to_string(v_a_3270_);
v___x_3273_ = lean_string_append(v___x_3271_, v___x_3272_);
lean_dec_ref(v___x_3272_);
v___x_3274_ = lean_mk_io_user_error(v___x_3273_);
v___x_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
return v___x_3275_;
}
v___jp_3276_:
{
if (lean_obj_tag(v___y_3277_) == 0)
{
lean_object* v_a_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3286_; 
v_a_3278_ = lean_ctor_get(v___y_3277_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___y_3277_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3280_ = v___y_3277_;
v_isShared_3281_ = v_isSharedCheck_3286_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_a_3278_);
lean_dec(v___y_3277_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3286_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v_a_3282_; lean_object* v___x_3284_; 
v_a_3282_ = lean_ctor_get(v_a_3278_, 0);
lean_inc(v_a_3282_);
lean_dec(v_a_3278_);
if (v_isShared_3281_ == 0)
{
lean_ctor_set(v___x_3280_, 0, v_a_3282_);
v___x_3284_ = v___x_3280_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_a_3282_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
return v___x_3284_;
}
}
}
else
{
lean_object* v_a_3287_; 
v_a_3287_ = lean_ctor_get(v___y_3277_, 0);
lean_inc(v_a_3287_);
lean_dec_ref(v___y_3277_);
v_a_3270_ = v_a_3287_;
goto v___jp_3269_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___boxed(lean_object* v_cache_3361_, lean_object* v_file_3362_, lean_object* v_ext_3363_, lean_object* v_text_3364_, lean_object* v_exe_3365_, lean_object* v_useLocalFile_3366_, lean_object* v_a_3367_){
_start:
{
uint8_t v_text_boxed_3368_; uint8_t v_exe_boxed_3369_; uint8_t v_useLocalFile_boxed_3370_; lean_object* v_res_3371_; 
v_text_boxed_3368_ = lean_unbox(v_text_3364_);
v_exe_boxed_3369_ = lean_unbox(v_exe_3365_);
v_useLocalFile_boxed_3370_ = lean_unbox(v_useLocalFile_3366_);
v_res_3371_ = l_Lake_Cache_saveArtifact(v_cache_3361_, v_file_3362_, v_ext_3363_, v_text_boxed_3368_, v_exe_boxed_3369_, v_useLocalFile_boxed_3370_);
return v_res_3371_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0(lean_object* v_x_3372_){
_start:
{
lean_object* v_lakeCache_3373_; 
v_lakeCache_3373_ = lean_ctor_get(v_x_3372_, 3);
lean_inc_ref(v_lakeCache_3373_);
return v_lakeCache_3373_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0___boxed(lean_object* v_x_3374_){
_start:
{
lean_object* v_res_3375_; 
v_res_3375_ = l_Lake_cacheArtifact___redArg___lam__0(v_x_3374_);
lean_dec_ref(v_x_3374_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1(lean_object* v_file_3376_, lean_object* v_ext_3377_, uint8_t v_text_3378_, uint8_t v_exe_3379_, uint8_t v_useLocalFile_3380_, lean_object* v_inst_3381_, lean_object* v_____do__lift_3382_){
_start:
{
lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; 
v___x_3383_ = lean_box(v_text_3378_);
v___x_3384_ = lean_box(v_exe_3379_);
v___x_3385_ = lean_box(v_useLocalFile_3380_);
v___x_3386_ = lean_alloc_closure((void*)(l_Lake_Cache_saveArtifact___boxed), 7, 6);
lean_closure_set(v___x_3386_, 0, v_____do__lift_3382_);
lean_closure_set(v___x_3386_, 1, v_file_3376_);
lean_closure_set(v___x_3386_, 2, v_ext_3377_);
lean_closure_set(v___x_3386_, 3, v___x_3383_);
lean_closure_set(v___x_3386_, 4, v___x_3384_);
lean_closure_set(v___x_3386_, 5, v___x_3385_);
v___x_3387_ = lean_apply_2(v_inst_3381_, lean_box(0), v___x_3386_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1___boxed(lean_object* v_file_3388_, lean_object* v_ext_3389_, lean_object* v_text_3390_, lean_object* v_exe_3391_, lean_object* v_useLocalFile_3392_, lean_object* v_inst_3393_, lean_object* v_____do__lift_3394_){
_start:
{
uint8_t v_text_boxed_3395_; uint8_t v_exe_boxed_3396_; uint8_t v_useLocalFile_boxed_3397_; lean_object* v_res_3398_; 
v_text_boxed_3395_ = lean_unbox(v_text_3390_);
v_exe_boxed_3396_ = lean_unbox(v_exe_3391_);
v_useLocalFile_boxed_3397_ = lean_unbox(v_useLocalFile_3392_);
v_res_3398_ = l_Lake_cacheArtifact___redArg___lam__1(v_file_3388_, v_ext_3389_, v_text_boxed_3395_, v_exe_boxed_3396_, v_useLocalFile_boxed_3397_, v_inst_3393_, v_____do__lift_3394_);
return v_res_3398_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg(lean_object* v_inst_3400_, lean_object* v_inst_3401_, lean_object* v_inst_3402_, lean_object* v_file_3403_, lean_object* v_ext_3404_, uint8_t v_text_3405_, uint8_t v_exe_3406_, uint8_t v_useLocalFile_3407_){
_start:
{
lean_object* v_toApplicative_3408_; lean_object* v_toFunctor_3409_; lean_object* v_toBind_3410_; lean_object* v_map_3411_; lean_object* v___f_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___f_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; 
v_toApplicative_3408_ = lean_ctor_get(v_inst_3402_, 0);
v_toFunctor_3409_ = lean_ctor_get(v_toApplicative_3408_, 0);
lean_inc_ref(v_toFunctor_3409_);
v_toBind_3410_ = lean_ctor_get(v_inst_3402_, 1);
lean_inc(v_toBind_3410_);
lean_dec_ref(v_inst_3402_);
v_map_3411_ = lean_ctor_get(v_toFunctor_3409_, 0);
lean_inc(v_map_3411_);
lean_dec_ref(v_toFunctor_3409_);
v___f_3412_ = ((lean_object*)(l_Lake_cacheArtifact___redArg___closed__0));
v___x_3413_ = lean_box(v_text_3405_);
v___x_3414_ = lean_box(v_exe_3406_);
v___x_3415_ = lean_box(v_useLocalFile_3407_);
v___f_3416_ = lean_alloc_closure((void*)(l_Lake_cacheArtifact___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_3416_, 0, v_file_3403_);
lean_closure_set(v___f_3416_, 1, v_ext_3404_);
lean_closure_set(v___f_3416_, 2, v___x_3413_);
lean_closure_set(v___f_3416_, 3, v___x_3414_);
lean_closure_set(v___f_3416_, 4, v___x_3415_);
lean_closure_set(v___f_3416_, 5, v_inst_3401_);
v___x_3417_ = lean_apply_4(v_map_3411_, lean_box(0), lean_box(0), v___f_3412_, v_inst_3400_);
v___x_3418_ = lean_apply_4(v_toBind_3410_, lean_box(0), lean_box(0), v___x_3417_, v___f_3416_);
return v___x_3418_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___boxed(lean_object* v_inst_3419_, lean_object* v_inst_3420_, lean_object* v_inst_3421_, lean_object* v_file_3422_, lean_object* v_ext_3423_, lean_object* v_text_3424_, lean_object* v_exe_3425_, lean_object* v_useLocalFile_3426_){
_start:
{
uint8_t v_text_boxed_3427_; uint8_t v_exe_boxed_3428_; uint8_t v_useLocalFile_boxed_3429_; lean_object* v_res_3430_; 
v_text_boxed_3427_ = lean_unbox(v_text_3424_);
v_exe_boxed_3428_ = lean_unbox(v_exe_3425_);
v_useLocalFile_boxed_3429_ = lean_unbox(v_useLocalFile_3426_);
v_res_3430_ = l_Lake_cacheArtifact___redArg(v_inst_3419_, v_inst_3420_, v_inst_3421_, v_file_3422_, v_ext_3423_, v_text_boxed_3427_, v_exe_boxed_3428_, v_useLocalFile_boxed_3429_);
return v_res_3430_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact(lean_object* v_m_3431_, lean_object* v_inst_3432_, lean_object* v_inst_3433_, lean_object* v_inst_3434_, lean_object* v_file_3435_, lean_object* v_ext_3436_, uint8_t v_text_3437_, uint8_t v_exe_3438_, uint8_t v_useLocalFile_3439_){
_start:
{
lean_object* v_toApplicative_3440_; lean_object* v_toFunctor_3441_; lean_object* v_toBind_3442_; lean_object* v_map_3443_; lean_object* v___f_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___f_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; 
v_toApplicative_3440_ = lean_ctor_get(v_inst_3434_, 0);
v_toFunctor_3441_ = lean_ctor_get(v_toApplicative_3440_, 0);
lean_inc_ref(v_toFunctor_3441_);
v_toBind_3442_ = lean_ctor_get(v_inst_3434_, 1);
lean_inc(v_toBind_3442_);
lean_dec_ref(v_inst_3434_);
v_map_3443_ = lean_ctor_get(v_toFunctor_3441_, 0);
lean_inc(v_map_3443_);
lean_dec_ref(v_toFunctor_3441_);
v___f_3444_ = ((lean_object*)(l_Lake_cacheArtifact___redArg___closed__0));
v___x_3445_ = lean_box(v_text_3437_);
v___x_3446_ = lean_box(v_exe_3438_);
v___x_3447_ = lean_box(v_useLocalFile_3439_);
v___f_3448_ = lean_alloc_closure((void*)(l_Lake_cacheArtifact___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_3448_, 0, v_file_3435_);
lean_closure_set(v___f_3448_, 1, v_ext_3436_);
lean_closure_set(v___f_3448_, 2, v___x_3445_);
lean_closure_set(v___f_3448_, 3, v___x_3446_);
lean_closure_set(v___f_3448_, 4, v___x_3447_);
lean_closure_set(v___f_3448_, 5, v_inst_3433_);
v___x_3449_ = lean_apply_4(v_map_3443_, lean_box(0), lean_box(0), v___f_3444_, v_inst_3432_);
v___x_3450_ = lean_apply_4(v_toBind_3442_, lean_box(0), lean_box(0), v___x_3449_, v___f_3448_);
return v___x_3450_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___boxed(lean_object* v_m_3451_, lean_object* v_inst_3452_, lean_object* v_inst_3453_, lean_object* v_inst_3454_, lean_object* v_file_3455_, lean_object* v_ext_3456_, lean_object* v_text_3457_, lean_object* v_exe_3458_, lean_object* v_useLocalFile_3459_){
_start:
{
uint8_t v_text_boxed_3460_; uint8_t v_exe_boxed_3461_; uint8_t v_useLocalFile_boxed_3462_; lean_object* v_res_3463_; 
v_text_boxed_3460_ = lean_unbox(v_text_3457_);
v_exe_boxed_3461_ = lean_unbox(v_exe_3458_);
v_useLocalFile_boxed_3462_ = lean_unbox(v_useLocalFile_3459_);
v_res_3463_ = l_Lake_cacheArtifact(v_m_3451_, v_inst_3452_, v_inst_3453_, v_inst_3454_, v_file_3455_, v_ext_3456_, v_text_boxed_3460_, v_exe_boxed_3461_, v_useLocalFile_boxed_3462_);
return v_res_3463_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0(lean_object* v_x1_3465_, lean_object* v_x2_3466_){
_start:
{
lean_object* v_message_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v_message_3467_ = lean_ctor_get(v_x2_3466_, 0);
v___x_3468_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0));
v___x_3469_ = lean_string_append(v_x1_3465_, v___x_3468_);
v___x_3470_ = lean_string_append(v___x_3469_, v_message_3467_);
return v___x_3470_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___boxed(lean_object* v_x1_3471_, lean_object* v_x2_3472_){
_start:
{
lean_object* v_res_3473_; 
v_res_3473_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0(v_x1_3471_, v_x2_3472_);
lean_dec_ref(v_x2_3472_);
return v_res_3473_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(lean_object* v_inst_3477_, uint64_t v_inputHash_3478_, lean_object* v_pkg_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_){
_start:
{
lean_object* v_toContext_3487_; lean_object* v_log_3488_; uint8_t v_action_3489_; uint8_t v_wantsRebuild_3490_; lean_object* v_trace_3491_; lean_object* v_buildTime_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3587_; 
v_toContext_3487_ = lean_ctor_get(v_a_3484_, 1);
v_log_3488_ = lean_ctor_get(v_a_3485_, 0);
v_action_3489_ = lean_ctor_get_uint8(v_a_3485_, sizeof(void*)*3);
v_wantsRebuild_3490_ = lean_ctor_get_uint8(v_a_3485_, sizeof(void*)*3 + 1);
v_trace_3491_ = lean_ctor_get(v_a_3485_, 1);
v_buildTime_3492_ = lean_ctor_get(v_a_3485_, 2);
v_isSharedCheck_3587_ = !lean_is_exclusive(v_a_3485_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3494_ = v_a_3485_;
v_isShared_3495_ = v_isSharedCheck_3587_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_buildTime_3492_);
lean_inc(v_trace_3491_);
lean_inc(v_log_3488_);
lean_dec(v_a_3485_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3587_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
lean_object* v_lakeCache_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; 
v_lakeCache_3496_ = lean_ctor_get(v_toContext_3487_, 3);
v___x_3497_ = l_Lake_Package_cacheScope(v_pkg_3479_);
lean_inc_ref(v_lakeCache_3496_);
v___x_3498_ = l_Lake_Cache_readOutputs_x3f(v_lakeCache_3496_, v___x_3497_, v_inputHash_3478_, v_log_3488_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v_a_3499_; lean_object* v_a_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3574_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
v_a_3500_ = lean_ctor_get(v___x_3498_, 1);
v_isSharedCheck_3574_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3502_ = v___x_3498_;
v_isShared_3503_ = v_isSharedCheck_3574_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_a_3500_);
lean_inc(v_a_3499_);
lean_dec(v___x_3498_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3574_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3505_; 
if (v_isShared_3495_ == 0)
{
lean_ctor_set(v___x_3494_, 0, v_a_3500_);
v___x_3505_ = v___x_3494_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_a_3500_);
lean_ctor_set(v_reuseFailAlloc_3573_, 1, v_trace_3491_);
lean_ctor_set(v_reuseFailAlloc_3573_, 2, v_buildTime_3492_);
lean_ctor_set_uint8(v_reuseFailAlloc_3573_, sizeof(void*)*3, v_action_3489_);
lean_ctor_set_uint8(v_reuseFailAlloc_3573_, sizeof(void*)*3 + 1, v_wantsRebuild_3490_);
v___x_3505_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
if (lean_obj_tag(v_a_3499_) == 1)
{
lean_object* v_val_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3568_; 
v_val_3506_ = lean_ctor_get(v_a_3499_, 0);
v_isSharedCheck_3568_ = !lean_is_exclusive(v_a_3499_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3508_ = v_a_3499_;
v_isShared_3509_ = v_isSharedCheck_3568_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_val_3506_);
lean_dec(v_a_3499_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3568_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3510_; lean_object* v_r_3512_; lean_object* v___y_3513_; 
lean_inc_ref(v_a_3484_);
lean_inc(v_a_3483_);
lean_inc(v_a_3482_);
lean_inc(v_a_3481_);
v___x_3510_ = lean_apply_8(v_inst_3477_, v_val_3506_, v_a_3480_, v_a_3481_, v_a_3482_, v_a_3483_, v_a_3484_, v___x_3505_, lean_box(0));
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3517_; lean_object* v_a_3518_; lean_object* v___x_3520_; 
v_a_3517_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3517_);
v_a_3518_ = lean_ctor_get(v___x_3510_, 1);
lean_inc(v_a_3518_);
lean_dec_ref(v___x_3510_);
if (v_isShared_3509_ == 0)
{
lean_ctor_set(v___x_3508_, 0, v_a_3517_);
v___x_3520_ = v___x_3508_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_a_3517_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
v_r_3512_ = v___x_3520_;
v___y_3513_ = v_a_3518_;
goto v___jp_3511_;
}
}
else
{
lean_object* v_a_3522_; lean_object* v_a_3523_; lean_object* v_log_3524_; uint8_t v_action_3525_; uint8_t v_wantsRebuild_3526_; lean_object* v_trace_3527_; lean_object* v_buildTime_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3567_; 
lean_del_object(v___x_3508_);
v_a_3522_ = lean_ctor_get(v___x_3510_, 1);
lean_inc(v_a_3522_);
v_a_3523_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3523_);
lean_dec_ref(v___x_3510_);
v_log_3524_ = lean_ctor_get(v_a_3522_, 0);
v_action_3525_ = lean_ctor_get_uint8(v_a_3522_, sizeof(void*)*3);
v_wantsRebuild_3526_ = lean_ctor_get_uint8(v_a_3522_, sizeof(void*)*3 + 1);
v_trace_3527_ = lean_ctor_get(v_a_3522_, 1);
v_buildTime_3528_ = lean_ctor_get(v_a_3522_, 2);
v_isSharedCheck_3567_ = !lean_is_exclusive(v_a_3522_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3530_ = v_a_3522_;
v_isShared_3531_ = v_isSharedCheck_3567_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_buildTime_3528_);
lean_inc(v_trace_3527_);
lean_inc(v_log_3524_);
lean_dec(v_a_3522_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3567_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___y_3536_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; uint8_t v___x_3558_; 
v___x_3532_ = lean_array_get_size(v_log_3524_);
lean_inc(v_a_3523_);
v___x_3533_ = l_Array_extract___redArg(v_log_3524_, v_a_3523_, v___x_3532_);
v___x_3534_ = l_Array_shrink___redArg(v_log_3524_, v_a_3523_);
lean_dec(v_a_3523_);
v___x_3544_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0));
v___x_3545_ = l_Lake_Hash_hex(v_inputHash_3478_);
v___x_3546_ = lean_unsigned_to_nat(7u);
v___x_3547_ = lean_unsigned_to_nat(0u);
v___x_3548_ = lean_string_utf8_byte_size(v___x_3545_);
lean_inc_ref(v___x_3545_);
v___x_3549_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3545_);
lean_ctor_set(v___x_3549_, 1, v___x_3547_);
lean_ctor_set(v___x_3549_, 2, v___x_3548_);
v___x_3550_ = l_String_Slice_Pos_nextn(v___x_3549_, v___x_3547_, v___x_3546_);
lean_dec_ref(v___x_3549_);
v___x_3551_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3545_);
lean_ctor_set(v___x_3551_, 1, v___x_3547_);
lean_ctor_set(v___x_3551_, 2, v___x_3550_);
v___x_3552_ = l_String_Slice_toString(v___x_3551_);
lean_dec_ref(v___x_3551_);
v___x_3553_ = lean_string_append(v___x_3544_, v___x_3552_);
lean_dec_ref(v___x_3552_);
v___x_3554_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1));
v___x_3555_ = lean_string_append(v___x_3553_, v___x_3554_);
v___x_3556_ = lean_array_get_size(v___x_3533_);
v___x_3557_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__9));
v___x_3558_ = lean_nat_dec_lt(v___x_3547_, v___x_3556_);
if (v___x_3558_ == 0)
{
lean_dec_ref(v___x_3533_);
v___y_3536_ = v___x_3555_;
goto v___jp_3535_;
}
else
{
lean_object* v___f_3559_; uint8_t v___x_3560_; 
v___f_3559_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2));
v___x_3560_ = lean_nat_dec_le(v___x_3556_, v___x_3556_);
if (v___x_3560_ == 0)
{
if (v___x_3558_ == 0)
{
lean_dec_ref(v___x_3533_);
v___y_3536_ = v___x_3555_;
goto v___jp_3535_;
}
else
{
size_t v___x_3561_; size_t v___x_3562_; lean_object* v___x_3563_; 
v___x_3561_ = ((size_t)0ULL);
v___x_3562_ = lean_usize_of_nat(v___x_3556_);
v___x_3563_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3557_, v___f_3559_, v___x_3533_, v___x_3561_, v___x_3562_, v___x_3555_);
v___y_3536_ = v___x_3563_;
goto v___jp_3535_;
}
}
else
{
size_t v___x_3564_; size_t v___x_3565_; lean_object* v___x_3566_; 
v___x_3564_ = ((size_t)0ULL);
v___x_3565_ = lean_usize_of_nat(v___x_3556_);
v___x_3566_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3557_, v___f_3559_, v___x_3533_, v___x_3564_, v___x_3565_, v___x_3555_);
v___y_3536_ = v___x_3566_;
goto v___jp_3535_;
}
}
v___jp_3535_:
{
uint8_t v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3541_; 
v___x_3537_ = 2;
v___x_3538_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3538_, 0, v___y_3536_);
lean_ctor_set_uint8(v___x_3538_, sizeof(void*)*1, v___x_3537_);
v___x_3539_ = lean_array_push(v___x_3534_, v___x_3538_);
if (v_isShared_3531_ == 0)
{
lean_ctor_set(v___x_3530_, 0, v___x_3539_);
v___x_3541_ = v___x_3530_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v___x_3539_);
lean_ctor_set(v_reuseFailAlloc_3543_, 1, v_trace_3527_);
lean_ctor_set(v_reuseFailAlloc_3543_, 2, v_buildTime_3528_);
lean_ctor_set_uint8(v_reuseFailAlloc_3543_, sizeof(void*)*3, v_action_3525_);
lean_ctor_set_uint8(v_reuseFailAlloc_3543_, sizeof(void*)*3 + 1, v_wantsRebuild_3526_);
v___x_3541_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
lean_object* v___x_3542_; 
v___x_3542_ = lean_box(0);
v_r_3512_ = v___x_3542_;
v___y_3513_ = v___x_3541_;
goto v___jp_3511_;
}
}
}
}
v___jp_3511_:
{
lean_object* v___x_3515_; 
if (v_isShared_3503_ == 0)
{
lean_ctor_set(v___x_3502_, 1, v___y_3513_);
lean_ctor_set(v___x_3502_, 0, v_r_3512_);
v___x_3515_ = v___x_3502_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v_r_3512_);
lean_ctor_set(v_reuseFailAlloc_3516_, 1, v___y_3513_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
return v___x_3515_;
}
}
}
}
else
{
lean_object* v___x_3569_; lean_object* v___x_3571_; 
lean_dec(v_a_3499_);
lean_dec_ref(v_a_3480_);
lean_dec_ref(v_inst_3477_);
v___x_3569_ = lean_box(0);
if (v_isShared_3503_ == 0)
{
lean_ctor_set(v___x_3502_, 1, v___x_3505_);
lean_ctor_set(v___x_3502_, 0, v___x_3569_);
v___x_3571_ = v___x_3502_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v___x_3569_);
lean_ctor_set(v_reuseFailAlloc_3572_, 1, v___x_3505_);
v___x_3571_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
return v___x_3571_;
}
}
}
}
}
else
{
lean_object* v_a_3575_; lean_object* v_a_3576_; lean_object* v___x_3578_; uint8_t v_isShared_3579_; uint8_t v_isSharedCheck_3586_; 
lean_dec_ref(v_a_3480_);
lean_dec_ref(v_inst_3477_);
v_a_3575_ = lean_ctor_get(v___x_3498_, 0);
v_a_3576_ = lean_ctor_get(v___x_3498_, 1);
v_isSharedCheck_3586_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3578_ = v___x_3498_;
v_isShared_3579_ = v_isSharedCheck_3586_;
goto v_resetjp_3577_;
}
else
{
lean_inc(v_a_3576_);
lean_inc(v_a_3575_);
lean_dec(v___x_3498_);
v___x_3578_ = lean_box(0);
v_isShared_3579_ = v_isSharedCheck_3586_;
goto v_resetjp_3577_;
}
v_resetjp_3577_:
{
lean_object* v___x_3581_; 
if (v_isShared_3495_ == 0)
{
lean_ctor_set(v___x_3494_, 0, v_a_3576_);
v___x_3581_ = v___x_3494_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v_a_3576_);
lean_ctor_set(v_reuseFailAlloc_3585_, 1, v_trace_3491_);
lean_ctor_set(v_reuseFailAlloc_3585_, 2, v_buildTime_3492_);
lean_ctor_set_uint8(v_reuseFailAlloc_3585_, sizeof(void*)*3, v_action_3489_);
lean_ctor_set_uint8(v_reuseFailAlloc_3585_, sizeof(void*)*3 + 1, v_wantsRebuild_3490_);
v___x_3581_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
lean_object* v___x_3583_; 
if (v_isShared_3579_ == 0)
{
lean_ctor_set(v___x_3578_, 1, v___x_3581_);
v___x_3583_ = v___x_3578_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3575_);
lean_ctor_set(v_reuseFailAlloc_3584_, 1, v___x_3581_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___boxed(lean_object* v_inst_3588_, lean_object* v_inputHash_3589_, lean_object* v_pkg_3590_, lean_object* v_a_3591_, lean_object* v_a_3592_, lean_object* v_a_3593_, lean_object* v_a_3594_, lean_object* v_a_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_){
_start:
{
uint64_t v_inputHash_boxed_3598_; lean_object* v_res_3599_; 
v_inputHash_boxed_3598_ = lean_unbox_uint64(v_inputHash_3589_);
lean_dec_ref(v_inputHash_3589_);
v_res_3599_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3588_, v_inputHash_boxed_3598_, v_pkg_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_);
lean_dec_ref(v_a_3595_);
lean_dec(v_a_3594_);
lean_dec(v_a_3593_);
lean_dec(v_a_3592_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f(lean_object* v_00_u03b1_3600_, lean_object* v_inst_3601_, uint64_t v_inputHash_3602_, lean_object* v_pkg_3603_, lean_object* v_a_3604_, lean_object* v_a_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_){
_start:
{
lean_object* v___x_3611_; 
v___x_3611_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3601_, v_inputHash_3602_, v_pkg_3603_, v_a_3604_, v_a_3605_, v_a_3606_, v_a_3607_, v_a_3608_, v_a_3609_);
return v___x_3611_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___boxed(lean_object* v_00_u03b1_3612_, lean_object* v_inst_3613_, lean_object* v_inputHash_3614_, lean_object* v_pkg_3615_, lean_object* v_a_3616_, lean_object* v_a_3617_, lean_object* v_a_3618_, lean_object* v_a_3619_, lean_object* v_a_3620_, lean_object* v_a_3621_, lean_object* v_a_3622_){
_start:
{
uint64_t v_inputHash_boxed_3623_; lean_object* v_res_3624_; 
v_inputHash_boxed_3623_ = lean_unbox_uint64(v_inputHash_3614_);
lean_dec_ref(v_inputHash_3614_);
v_res_3624_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f(v_00_u03b1_3612_, v_inst_3613_, v_inputHash_boxed_3623_, v_pkg_3615_, v_a_3616_, v_a_3617_, v_a_3618_, v_a_3619_, v_a_3620_, v_a_3621_);
lean_dec_ref(v_a_3620_);
lean_dec(v_a_3619_);
lean_dec(v_a_3618_);
lean_dec(v_a_3617_);
return v_res_3624_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(lean_object* v_a_3625_, lean_object* v_____r_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_){
_start:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v___x_3634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3634_, 0, v_a_3625_);
v___x_3635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3635_, 0, v___x_3634_);
v___x_3636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3635_);
lean_ctor_set(v___x_3636_, 1, v___y_3632_);
return v___x_3636_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0___boxed(lean_object* v_a_3637_, lean_object* v_____r_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_){
_start:
{
lean_object* v_res_3646_; 
v_res_3646_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3637_, v_____r_3638_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_);
lean_dec_ref(v___y_3643_);
lean_dec(v___y_3642_);
lean_dec(v___y_3641_);
lean_dec(v___y_3640_);
lean_dec_ref(v___y_3639_);
return v_res_3646_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg(lean_object* v_inst_3648_, uint64_t v_inputHash_3649_, lean_object* v_savedTrace_3650_, lean_object* v_pkg_3651_, lean_object* v_a_3652_, lean_object* v_a_3653_, lean_object* v_a_3654_, lean_object* v_a_3655_, lean_object* v_a_3656_, lean_object* v_a_3657_){
_start:
{
lean_object* v___y_3660_; lean_object* v_a_3664_; lean_object* v_a_3665_; lean_object* v___y_3680_; 
if (lean_obj_tag(v_savedTrace_3650_) == 2)
{
lean_object* v_data_3695_; uint64_t v_depHash_3696_; lean_object* v_outputs_x3f_3697_; uint8_t v___x_3698_; 
v_data_3695_ = lean_ctor_get(v_savedTrace_3650_, 0);
lean_inc_ref(v_data_3695_);
lean_dec_ref(v_savedTrace_3650_);
v_depHash_3696_ = lean_ctor_get_uint64(v_data_3695_, sizeof(void*)*3);
v_outputs_x3f_3697_ = lean_ctor_get(v_data_3695_, 1);
lean_inc(v_outputs_x3f_3697_);
lean_dec_ref(v_data_3695_);
v___x_3698_ = lean_uint64_dec_eq(v_depHash_3696_, v_inputHash_3649_);
if (v___x_3698_ == 0)
{
lean_dec(v_outputs_x3f_3697_);
lean_dec_ref(v_a_3652_);
lean_dec_ref(v_pkg_3651_);
lean_dec_ref(v_inst_3648_);
v___y_3660_ = v_a_3657_;
goto v___jp_3659_;
}
else
{
if (lean_obj_tag(v_outputs_x3f_3697_) == 1)
{
lean_object* v_val_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; 
v_val_3699_ = lean_ctor_get(v_outputs_x3f_3697_, 0);
lean_inc(v_val_3699_);
lean_dec_ref(v_outputs_x3f_3697_);
v___x_3700_ = lean_box(0);
lean_inc(v_val_3699_);
v___x_3701_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3701_, 0, v_val_3699_);
lean_ctor_set(v___x_3701_, 1, v___x_3700_);
lean_ctor_set(v___x_3701_, 2, v___x_3700_);
lean_inc_ref(v_a_3656_);
lean_inc(v_a_3655_);
lean_inc(v_a_3654_);
lean_inc(v_a_3653_);
lean_inc_ref(v_a_3652_);
v___x_3702_ = lean_apply_8(v_inst_3648_, v___x_3701_, v_a_3652_, v_a_3653_, v_a_3654_, v_a_3655_, v_a_3656_, v_a_3657_, lean_box(0));
if (lean_obj_tag(v___x_3702_) == 0)
{
lean_object* v_config_3703_; lean_object* v_a_3704_; lean_object* v_a_3705_; lean_object* v_enableArtifactCache_x3f_3706_; lean_object* v_a_3708_; uint8_t v_a_3712_; lean_object* v_a_3713_; 
v_config_3703_ = lean_ctor_get(v_pkg_3651_, 6);
v_a_3704_ = lean_ctor_get(v___x_3702_, 0);
lean_inc(v_a_3704_);
v_a_3705_ = lean_ctor_get(v___x_3702_, 1);
lean_inc(v_a_3705_);
lean_dec_ref(v___x_3702_);
v_enableArtifactCache_x3f_3706_ = lean_ctor_get(v_config_3703_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_3706_) == 0)
{
lean_object* v_toContext_3744_; lean_object* v_lakeEnv_3745_; lean_object* v_enableArtifactCache_x3f_3746_; 
v_toContext_3744_ = lean_ctor_get(v_a_3656_, 1);
v_lakeEnv_3745_ = lean_ctor_get(v_toContext_3744_, 1);
v_enableArtifactCache_x3f_3746_ = lean_ctor_get(v_lakeEnv_3745_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_3746_) == 0)
{
lean_object* v_root_3747_; lean_object* v_config_3748_; lean_object* v_enableArtifactCache_x3f_3749_; 
v_root_3747_ = lean_ctor_get(v_toContext_3744_, 0);
v_config_3748_ = lean_ctor_get(v_root_3747_, 6);
v_enableArtifactCache_x3f_3749_ = lean_ctor_get(v_config_3748_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_3749_) == 0)
{
lean_dec(v_val_3699_);
lean_dec_ref(v_pkg_3651_);
v_a_3708_ = v_a_3705_;
goto v___jp_3707_;
}
else
{
lean_object* v_val_3750_; uint8_t v___x_3751_; 
v_val_3750_ = lean_ctor_get(v_enableArtifactCache_x3f_3749_, 0);
v___x_3751_ = lean_unbox(v_val_3750_);
v_a_3712_ = v___x_3751_;
v_a_3713_ = v_a_3705_;
goto v___jp_3711_;
}
}
else
{
lean_object* v_val_3752_; uint8_t v___x_3753_; 
v_val_3752_ = lean_ctor_get(v_enableArtifactCache_x3f_3746_, 0);
v___x_3753_ = lean_unbox(v_val_3752_);
v_a_3712_ = v___x_3753_;
v_a_3713_ = v_a_3705_;
goto v___jp_3711_;
}
}
else
{
lean_object* v_val_3754_; uint8_t v___x_3755_; 
v_val_3754_ = lean_ctor_get(v_enableArtifactCache_x3f_3706_, 0);
v___x_3755_ = lean_unbox(v_val_3754_);
v_a_3712_ = v___x_3755_;
v_a_3713_ = v_a_3705_;
goto v___jp_3711_;
}
v___jp_3707_:
{
lean_object* v___x_3709_; lean_object* v___x_3710_; 
v___x_3709_ = lean_box(0);
v___x_3710_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3704_, v___x_3709_, v_a_3652_, v_a_3653_, v_a_3654_, v_a_3655_, v_a_3656_, v_a_3708_);
lean_dec_ref(v_a_3652_);
v___y_3680_ = v___x_3710_;
goto v___jp_3679_;
}
v___jp_3711_:
{
if (v_a_3712_ == 0)
{
lean_dec(v_val_3699_);
lean_dec_ref(v_pkg_3651_);
v_a_3708_ = v_a_3713_;
goto v___jp_3707_;
}
else
{
lean_object* v_toContext_3714_; lean_object* v_log_3715_; uint8_t v_action_3716_; uint8_t v_wantsRebuild_3717_; lean_object* v_trace_3718_; lean_object* v_buildTime_3719_; lean_object* v_lakeCache_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; 
v_toContext_3714_ = lean_ctor_get(v_a_3656_, 1);
v_log_3715_ = lean_ctor_get(v_a_3713_, 0);
v_action_3716_ = lean_ctor_get_uint8(v_a_3713_, sizeof(void*)*3);
v_wantsRebuild_3717_ = lean_ctor_get_uint8(v_a_3713_, sizeof(void*)*3 + 1);
v_trace_3718_ = lean_ctor_get(v_a_3713_, 1);
v_buildTime_3719_ = lean_ctor_get(v_a_3713_, 2);
v_lakeCache_3720_ = lean_ctor_get(v_toContext_3714_, 3);
v___x_3721_ = l_Lake_Package_cacheScope(v_pkg_3651_);
lean_inc_ref(v_lakeCache_3720_);
v___x_3722_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_3720_, v___x_3721_, v_inputHash_3649_, v_val_3699_, v___x_3700_, v___x_3700_);
if (lean_obj_tag(v___x_3722_) == 0)
{
lean_object* v___x_3723_; lean_object* v___x_3724_; 
lean_dec_ref(v___x_3722_);
v___x_3723_ = lean_box(0);
v___x_3724_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3704_, v___x_3723_, v_a_3652_, v_a_3653_, v_a_3654_, v_a_3655_, v_a_3656_, v_a_3713_);
lean_dec_ref(v_a_3652_);
v___y_3680_ = v___x_3724_;
goto v___jp_3679_;
}
else
{
lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3740_; 
lean_inc(v_buildTime_3719_);
lean_inc_ref(v_trace_3718_);
lean_inc_ref(v_log_3715_);
v_isSharedCheck_3740_ = !lean_is_exclusive(v_a_3713_);
if (v_isSharedCheck_3740_ == 0)
{
lean_object* v_unused_3741_; lean_object* v_unused_3742_; lean_object* v_unused_3743_; 
v_unused_3741_ = lean_ctor_get(v_a_3713_, 2);
lean_dec(v_unused_3741_);
v_unused_3742_ = lean_ctor_get(v_a_3713_, 1);
lean_dec(v_unused_3742_);
v_unused_3743_ = lean_ctor_get(v_a_3713_, 0);
lean_dec(v_unused_3743_);
v___x_3726_ = v_a_3713_;
v_isShared_3727_ = v_isSharedCheck_3740_;
goto v_resetjp_3725_;
}
else
{
lean_dec(v_a_3713_);
v___x_3726_ = lean_box(0);
v_isShared_3727_ = v_isSharedCheck_3740_;
goto v_resetjp_3725_;
}
v_resetjp_3725_:
{
lean_object* v_a_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; uint8_t v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3737_; 
v_a_3728_ = lean_ctor_get(v___x_3722_, 0);
lean_inc(v_a_3728_);
lean_dec_ref(v___x_3722_);
v___x_3729_ = ((lean_object*)(l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0));
v___x_3730_ = lean_io_error_to_string(v_a_3728_);
v___x_3731_ = lean_string_append(v___x_3729_, v___x_3730_);
lean_dec_ref(v___x_3730_);
v___x_3732_ = 2;
v___x_3733_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3733_, 0, v___x_3731_);
lean_ctor_set_uint8(v___x_3733_, sizeof(void*)*1, v___x_3732_);
v___x_3734_ = lean_box(0);
v___x_3735_ = lean_array_push(v_log_3715_, v___x_3733_);
if (v_isShared_3727_ == 0)
{
lean_ctor_set(v___x_3726_, 0, v___x_3735_);
v___x_3737_ = v___x_3726_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v___x_3735_);
lean_ctor_set(v_reuseFailAlloc_3739_, 1, v_trace_3718_);
lean_ctor_set(v_reuseFailAlloc_3739_, 2, v_buildTime_3719_);
lean_ctor_set_uint8(v_reuseFailAlloc_3739_, sizeof(void*)*3, v_action_3716_);
lean_ctor_set_uint8(v_reuseFailAlloc_3739_, sizeof(void*)*3 + 1, v_wantsRebuild_3717_);
v___x_3737_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
lean_object* v___x_3738_; 
v___x_3738_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3704_, v___x_3734_, v_a_3652_, v_a_3653_, v_a_3654_, v_a_3655_, v_a_3656_, v___x_3737_);
lean_dec_ref(v_a_3652_);
v___y_3680_ = v___x_3738_;
goto v___jp_3679_;
}
}
}
}
}
}
else
{
lean_object* v_a_3756_; lean_object* v_a_3757_; 
lean_dec(v_val_3699_);
lean_dec_ref(v_a_3652_);
lean_dec_ref(v_pkg_3651_);
v_a_3756_ = lean_ctor_get(v___x_3702_, 0);
lean_inc(v_a_3756_);
v_a_3757_ = lean_ctor_get(v___x_3702_, 1);
lean_inc(v_a_3757_);
lean_dec_ref(v___x_3702_);
v_a_3664_ = v_a_3756_;
v_a_3665_ = v_a_3757_;
goto v___jp_3663_;
}
}
else
{
lean_dec(v_outputs_x3f_3697_);
lean_dec_ref(v_a_3652_);
lean_dec_ref(v_pkg_3651_);
lean_dec_ref(v_inst_3648_);
v___y_3660_ = v_a_3657_;
goto v___jp_3659_;
}
}
}
else
{
lean_dec_ref(v_a_3652_);
lean_dec_ref(v_pkg_3651_);
lean_dec(v_savedTrace_3650_);
lean_dec_ref(v_inst_3648_);
v___y_3660_ = v_a_3657_;
goto v___jp_3659_;
}
v___jp_3659_:
{
lean_object* v___x_3661_; lean_object* v___x_3662_; 
v___x_3661_ = lean_box(0);
v___x_3662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3661_);
lean_ctor_set(v___x_3662_, 1, v___y_3660_);
return v___x_3662_;
}
v___jp_3663_:
{
lean_object* v_log_3666_; uint8_t v_action_3667_; uint8_t v_wantsRebuild_3668_; lean_object* v_trace_3669_; lean_object* v_buildTime_3670_; lean_object* v___x_3672_; uint8_t v_isShared_3673_; uint8_t v_isSharedCheck_3678_; 
v_log_3666_ = lean_ctor_get(v_a_3665_, 0);
v_action_3667_ = lean_ctor_get_uint8(v_a_3665_, sizeof(void*)*3);
v_wantsRebuild_3668_ = lean_ctor_get_uint8(v_a_3665_, sizeof(void*)*3 + 1);
v_trace_3669_ = lean_ctor_get(v_a_3665_, 1);
v_buildTime_3670_ = lean_ctor_get(v_a_3665_, 2);
v_isSharedCheck_3678_ = !lean_is_exclusive(v_a_3665_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3672_ = v_a_3665_;
v_isShared_3673_ = v_isSharedCheck_3678_;
goto v_resetjp_3671_;
}
else
{
lean_inc(v_buildTime_3670_);
lean_inc(v_trace_3669_);
lean_inc(v_log_3666_);
lean_dec(v_a_3665_);
v___x_3672_ = lean_box(0);
v_isShared_3673_ = v_isSharedCheck_3678_;
goto v_resetjp_3671_;
}
v_resetjp_3671_:
{
lean_object* v___x_3674_; lean_object* v___x_3676_; 
v___x_3674_ = l_Array_shrink___redArg(v_log_3666_, v_a_3664_);
lean_dec(v_a_3664_);
if (v_isShared_3673_ == 0)
{
lean_ctor_set(v___x_3672_, 0, v___x_3674_);
v___x_3676_ = v___x_3672_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v___x_3674_);
lean_ctor_set(v_reuseFailAlloc_3677_, 1, v_trace_3669_);
lean_ctor_set(v_reuseFailAlloc_3677_, 2, v_buildTime_3670_);
lean_ctor_set_uint8(v_reuseFailAlloc_3677_, sizeof(void*)*3, v_action_3667_);
lean_ctor_set_uint8(v_reuseFailAlloc_3677_, sizeof(void*)*3 + 1, v_wantsRebuild_3668_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
v___y_3660_ = v___x_3676_;
goto v___jp_3659_;
}
}
}
v___jp_3679_:
{
if (lean_obj_tag(v___y_3680_) == 0)
{
lean_object* v_a_3681_; 
v_a_3681_ = lean_ctor_get(v___y_3680_, 0);
if (lean_obj_tag(v_a_3681_) == 0)
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3690_; 
lean_inc_ref(v_a_3681_);
v_a_3682_ = lean_ctor_get(v___y_3680_, 1);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___y_3680_);
if (v_isSharedCheck_3690_ == 0)
{
lean_object* v_unused_3691_; 
v_unused_3691_ = lean_ctor_get(v___y_3680_, 0);
lean_dec(v_unused_3691_);
v___x_3684_ = v___y_3680_;
v_isShared_3685_ = v_isSharedCheck_3690_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___y_3680_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3690_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v_a_3686_; lean_object* v___x_3688_; 
v_a_3686_ = lean_ctor_get(v_a_3681_, 0);
lean_inc(v_a_3686_);
lean_dec_ref(v_a_3681_);
if (v_isShared_3685_ == 0)
{
lean_ctor_set(v___x_3684_, 0, v_a_3686_);
v___x_3688_ = v___x_3684_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3686_);
lean_ctor_set(v_reuseFailAlloc_3689_, 1, v_a_3682_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
else
{
lean_object* v_a_3692_; 
v_a_3692_ = lean_ctor_get(v___y_3680_, 1);
lean_inc(v_a_3692_);
lean_dec_ref(v___y_3680_);
v___y_3660_ = v_a_3692_;
goto v___jp_3659_;
}
}
else
{
lean_object* v_a_3693_; lean_object* v_a_3694_; 
v_a_3693_ = lean_ctor_get(v___y_3680_, 0);
lean_inc(v_a_3693_);
v_a_3694_ = lean_ctor_get(v___y_3680_, 1);
lean_inc(v_a_3694_);
lean_dec_ref(v___y_3680_);
v_a_3664_ = v_a_3693_;
v_a_3665_ = v_a_3694_;
goto v___jp_3663_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___boxed(lean_object* v_inst_3758_, lean_object* v_inputHash_3759_, lean_object* v_savedTrace_3760_, lean_object* v_pkg_3761_, lean_object* v_a_3762_, lean_object* v_a_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_){
_start:
{
uint64_t v_inputHash_boxed_3769_; lean_object* v_res_3770_; 
v_inputHash_boxed_3769_ = lean_unbox_uint64(v_inputHash_3759_);
lean_dec_ref(v_inputHash_3759_);
v_res_3770_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3758_, v_inputHash_boxed_3769_, v_savedTrace_3760_, v_pkg_3761_, v_a_3762_, v_a_3763_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_);
lean_dec_ref(v_a_3766_);
lean_dec(v_a_3765_);
lean_dec(v_a_3764_);
lean_dec(v_a_3763_);
return v_res_3770_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f(lean_object* v_00_u03b1_3771_, lean_object* v_inst_3772_, uint64_t v_inputHash_3773_, lean_object* v_savedTrace_3774_, lean_object* v_pkg_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_, lean_object* v_a_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_){
_start:
{
lean_object* v___x_3783_; 
v___x_3783_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3772_, v_inputHash_3773_, v_savedTrace_3774_, v_pkg_3775_, v_a_3776_, v_a_3777_, v_a_3778_, v_a_3779_, v_a_3780_, v_a_3781_);
return v___x_3783_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___boxed(lean_object* v_00_u03b1_3784_, lean_object* v_inst_3785_, lean_object* v_inputHash_3786_, lean_object* v_savedTrace_3787_, lean_object* v_pkg_3788_, lean_object* v_a_3789_, lean_object* v_a_3790_, lean_object* v_a_3791_, lean_object* v_a_3792_, lean_object* v_a_3793_, lean_object* v_a_3794_, lean_object* v_a_3795_){
_start:
{
uint64_t v_inputHash_boxed_3796_; lean_object* v_res_3797_; 
v_inputHash_boxed_3796_ = lean_unbox_uint64(v_inputHash_3786_);
lean_dec_ref(v_inputHash_3786_);
v_res_3797_ = l_Lake_getArtifactsUsingTrace_x3f(v_00_u03b1_3784_, v_inst_3785_, v_inputHash_boxed_3796_, v_savedTrace_3787_, v_pkg_3788_, v_a_3789_, v_a_3790_, v_a_3791_, v_a_3792_, v_a_3793_, v_a_3794_);
lean_dec_ref(v_a_3793_);
lean_dec(v_a_3792_);
lean_dec(v_a_3791_);
lean_dec(v_a_3790_);
return v_res_3797_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg(lean_object* v_inst_3798_, uint64_t v_inputHash_3799_, lean_object* v_savedTrace_3800_, lean_object* v_pkg_3801_, lean_object* v_a_3802_, lean_object* v_a_3803_, lean_object* v_a_3804_, lean_object* v_a_3805_, lean_object* v_a_3806_, lean_object* v_a_3807_){
_start:
{
lean_object* v___x_3809_; 
lean_inc_ref(v_a_3802_);
lean_inc_ref(v_pkg_3801_);
lean_inc_ref(v_inst_3798_);
v___x_3809_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3798_, v_inputHash_3799_, v_pkg_3801_, v_a_3802_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_, v_a_3807_);
if (lean_obj_tag(v___x_3809_) == 0)
{
lean_object* v_a_3810_; 
v_a_3810_ = lean_ctor_get(v___x_3809_, 0);
lean_inc(v_a_3810_);
if (lean_obj_tag(v_a_3810_) == 1)
{
lean_dec_ref(v_a_3810_);
lean_dec_ref(v_a_3802_);
lean_dec_ref(v_pkg_3801_);
lean_dec(v_savedTrace_3800_);
lean_dec_ref(v_inst_3798_);
return v___x_3809_;
}
else
{
lean_object* v_a_3811_; lean_object* v___x_3812_; lean_object* v_a_3813_; 
lean_dec(v_a_3810_);
v_a_3811_ = lean_ctor_get(v___x_3809_, 1);
lean_inc(v_a_3811_);
lean_dec_ref(v___x_3809_);
v___x_3812_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3798_, v_inputHash_3799_, v_savedTrace_3800_, v_pkg_3801_, v_a_3802_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_, v_a_3811_);
v_a_3813_ = lean_ctor_get(v___x_3812_, 0);
lean_inc(v_a_3813_);
if (lean_obj_tag(v_a_3813_) == 1)
{
lean_dec_ref(v_a_3813_);
return v___x_3812_;
}
else
{
lean_object* v_a_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3822_; 
lean_dec(v_a_3813_);
v_a_3814_ = lean_ctor_get(v___x_3812_, 1);
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3812_);
if (v_isSharedCheck_3822_ == 0)
{
lean_object* v_unused_3823_; 
v_unused_3823_ = lean_ctor_get(v___x_3812_, 0);
lean_dec(v_unused_3823_);
v___x_3816_ = v___x_3812_;
v_isShared_3817_ = v_isSharedCheck_3822_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_a_3814_);
lean_dec(v___x_3812_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3822_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3818_; lean_object* v___x_3820_; 
v___x_3818_ = lean_box(0);
if (v_isShared_3817_ == 0)
{
lean_ctor_set(v___x_3816_, 0, v___x_3818_);
v___x_3820_ = v___x_3816_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v___x_3818_);
lean_ctor_set(v_reuseFailAlloc_3821_, 1, v_a_3814_);
v___x_3820_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
return v___x_3820_;
}
}
}
}
}
else
{
lean_dec_ref(v_a_3802_);
lean_dec_ref(v_pkg_3801_);
lean_dec(v_savedTrace_3800_);
lean_dec_ref(v_inst_3798_);
return v___x_3809_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg___boxed(lean_object* v_inst_3824_, lean_object* v_inputHash_3825_, lean_object* v_savedTrace_3826_, lean_object* v_pkg_3827_, lean_object* v_a_3828_, lean_object* v_a_3829_, lean_object* v_a_3830_, lean_object* v_a_3831_, lean_object* v_a_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_){
_start:
{
uint64_t v_inputHash_boxed_3835_; lean_object* v_res_3836_; 
v_inputHash_boxed_3835_ = lean_unbox_uint64(v_inputHash_3825_);
lean_dec_ref(v_inputHash_3825_);
v_res_3836_ = l_Lake_getArtifacts_x3f___redArg(v_inst_3824_, v_inputHash_boxed_3835_, v_savedTrace_3826_, v_pkg_3827_, v_a_3828_, v_a_3829_, v_a_3830_, v_a_3831_, v_a_3832_, v_a_3833_);
lean_dec_ref(v_a_3832_);
lean_dec(v_a_3831_);
lean_dec(v_a_3830_);
lean_dec(v_a_3829_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f(lean_object* v_00_u03b1_3837_, lean_object* v_inst_3838_, uint64_t v_inputHash_3839_, lean_object* v_savedTrace_3840_, lean_object* v_pkg_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_, lean_object* v_a_3846_, lean_object* v_a_3847_){
_start:
{
lean_object* v___x_3849_; 
lean_inc_ref(v_a_3842_);
lean_inc_ref(v_pkg_3841_);
lean_inc_ref(v_inst_3838_);
v___x_3849_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3838_, v_inputHash_3839_, v_pkg_3841_, v_a_3842_, v_a_3843_, v_a_3844_, v_a_3845_, v_a_3846_, v_a_3847_);
if (lean_obj_tag(v___x_3849_) == 0)
{
lean_object* v_a_3850_; 
v_a_3850_ = lean_ctor_get(v___x_3849_, 0);
lean_inc(v_a_3850_);
if (lean_obj_tag(v_a_3850_) == 1)
{
lean_dec_ref(v_a_3850_);
lean_dec_ref(v_a_3842_);
lean_dec_ref(v_pkg_3841_);
lean_dec(v_savedTrace_3840_);
lean_dec_ref(v_inst_3838_);
return v___x_3849_;
}
else
{
lean_object* v_a_3851_; lean_object* v___x_3852_; lean_object* v_a_3853_; 
lean_dec(v_a_3850_);
v_a_3851_ = lean_ctor_get(v___x_3849_, 1);
lean_inc(v_a_3851_);
lean_dec_ref(v___x_3849_);
v___x_3852_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3838_, v_inputHash_3839_, v_savedTrace_3840_, v_pkg_3841_, v_a_3842_, v_a_3843_, v_a_3844_, v_a_3845_, v_a_3846_, v_a_3851_);
v_a_3853_ = lean_ctor_get(v___x_3852_, 0);
lean_inc(v_a_3853_);
if (lean_obj_tag(v_a_3853_) == 1)
{
lean_dec_ref(v_a_3853_);
return v___x_3852_;
}
else
{
lean_object* v_a_3854_; lean_object* v___x_3856_; uint8_t v_isShared_3857_; uint8_t v_isSharedCheck_3862_; 
lean_dec(v_a_3853_);
v_a_3854_ = lean_ctor_get(v___x_3852_, 1);
v_isSharedCheck_3862_ = !lean_is_exclusive(v___x_3852_);
if (v_isSharedCheck_3862_ == 0)
{
lean_object* v_unused_3863_; 
v_unused_3863_ = lean_ctor_get(v___x_3852_, 0);
lean_dec(v_unused_3863_);
v___x_3856_ = v___x_3852_;
v_isShared_3857_ = v_isSharedCheck_3862_;
goto v_resetjp_3855_;
}
else
{
lean_inc(v_a_3854_);
lean_dec(v___x_3852_);
v___x_3856_ = lean_box(0);
v_isShared_3857_ = v_isSharedCheck_3862_;
goto v_resetjp_3855_;
}
v_resetjp_3855_:
{
lean_object* v___x_3858_; lean_object* v___x_3860_; 
v___x_3858_ = lean_box(0);
if (v_isShared_3857_ == 0)
{
lean_ctor_set(v___x_3856_, 0, v___x_3858_);
v___x_3860_ = v___x_3856_;
goto v_reusejp_3859_;
}
else
{
lean_object* v_reuseFailAlloc_3861_; 
v_reuseFailAlloc_3861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3861_, 0, v___x_3858_);
lean_ctor_set(v_reuseFailAlloc_3861_, 1, v_a_3854_);
v___x_3860_ = v_reuseFailAlloc_3861_;
goto v_reusejp_3859_;
}
v_reusejp_3859_:
{
return v___x_3860_;
}
}
}
}
}
else
{
lean_dec_ref(v_a_3842_);
lean_dec_ref(v_pkg_3841_);
lean_dec(v_savedTrace_3840_);
lean_dec_ref(v_inst_3838_);
return v___x_3849_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___boxed(lean_object* v_00_u03b1_3864_, lean_object* v_inst_3865_, lean_object* v_inputHash_3866_, lean_object* v_savedTrace_3867_, lean_object* v_pkg_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_, lean_object* v_a_3874_, lean_object* v_a_3875_){
_start:
{
uint64_t v_inputHash_boxed_3876_; lean_object* v_res_3877_; 
v_inputHash_boxed_3876_ = lean_unbox_uint64(v_inputHash_3866_);
lean_dec_ref(v_inputHash_3866_);
v_res_3877_ = l_Lake_getArtifacts_x3f(v_00_u03b1_3864_, v_inst_3865_, v_inputHash_boxed_3876_, v_savedTrace_3867_, v_pkg_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_);
lean_dec_ref(v_a_3873_);
lean_dec(v_a_3872_);
lean_dec(v_a_3871_);
lean_dec(v_a_3870_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0(lean_object* v_descr_3878_, lean_object* v___x_3879_, lean_object* v_mtime_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_){
_start:
{
lean_object* v___x_3888_; lean_object* v___x_3889_; 
lean_inc_ref(v___x_3879_);
v___x_3888_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3888_, 0, v_descr_3878_);
lean_ctor_set(v___x_3888_, 1, v___x_3879_);
lean_ctor_set(v___x_3888_, 2, v___x_3879_);
lean_ctor_set(v___x_3888_, 3, v_mtime_3880_);
v___x_3889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3888_);
lean_ctor_set(v___x_3889_, 1, v___y_3886_);
return v___x_3889_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0___boxed(lean_object* v_descr_3890_, lean_object* v___x_3891_, lean_object* v_mtime_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_){
_start:
{
lean_object* v_res_3900_; 
v_res_3900_ = l_Lake_resolveArtifact___lam__0(v_descr_3890_, v___x_3891_, v_mtime_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_);
lean_dec_ref(v___y_3897_);
lean_dec(v___y_3896_);
lean_dec(v___y_3895_);
lean_dec(v___y_3894_);
lean_dec_ref(v___y_3893_);
return v_res_3900_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1(lean_object* v___x_3902_, lean_object* v___f_3903_, lean_object* v_____r_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_){
_start:
{
lean_object* v_log_3912_; uint8_t v_action_3913_; uint8_t v_wantsRebuild_3914_; lean_object* v_trace_3915_; lean_object* v_buildTime_3916_; lean_object* v___x_3917_; 
v_log_3912_ = lean_ctor_get(v___y_3910_, 0);
v_action_3913_ = lean_ctor_get_uint8(v___y_3910_, sizeof(void*)*3);
v_wantsRebuild_3914_ = lean_ctor_get_uint8(v___y_3910_, sizeof(void*)*3 + 1);
v_trace_3915_ = lean_ctor_get(v___y_3910_, 1);
v_buildTime_3916_ = lean_ctor_get(v___y_3910_, 2);
v___x_3917_ = lean_io_metadata(v___x_3902_);
if (lean_obj_tag(v___x_3917_) == 0)
{
lean_object* v_a_3918_; lean_object* v_modified_3919_; lean_object* v___x_3920_; 
v_a_3918_ = lean_ctor_get(v___x_3917_, 0);
lean_inc(v_a_3918_);
lean_dec_ref(v___x_3917_);
v_modified_3919_ = lean_ctor_get(v_a_3918_, 1);
lean_inc_ref(v_modified_3919_);
lean_dec(v_a_3918_);
lean_inc_ref(v___y_3909_);
lean_inc(v___y_3908_);
lean_inc(v___y_3907_);
lean_inc(v___y_3906_);
v___x_3920_ = lean_apply_8(v___f_3903_, v_modified_3919_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_, v___y_3910_, lean_box(0));
return v___x_3920_;
}
else
{
lean_object* v___x_3922_; uint8_t v_isShared_3923_; uint8_t v_isSharedCheck_3936_; 
lean_inc(v_buildTime_3916_);
lean_inc_ref(v_trace_3915_);
lean_inc_ref(v_log_3912_);
lean_dec_ref(v___y_3905_);
lean_dec_ref(v___f_3903_);
v_isSharedCheck_3936_ = !lean_is_exclusive(v___y_3910_);
if (v_isSharedCheck_3936_ == 0)
{
lean_object* v_unused_3937_; lean_object* v_unused_3938_; lean_object* v_unused_3939_; 
v_unused_3937_ = lean_ctor_get(v___y_3910_, 2);
lean_dec(v_unused_3937_);
v_unused_3938_ = lean_ctor_get(v___y_3910_, 1);
lean_dec(v_unused_3938_);
v_unused_3939_ = lean_ctor_get(v___y_3910_, 0);
lean_dec(v_unused_3939_);
v___x_3922_ = v___y_3910_;
v_isShared_3923_ = v_isSharedCheck_3936_;
goto v_resetjp_3921_;
}
else
{
lean_dec(v___y_3910_);
v___x_3922_ = lean_box(0);
v_isShared_3923_ = v_isSharedCheck_3936_;
goto v_resetjp_3921_;
}
v_resetjp_3921_:
{
lean_object* v_a_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; uint8_t v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3933_; 
v_a_3924_ = lean_ctor_get(v___x_3917_, 0);
lean_inc(v_a_3924_);
lean_dec_ref(v___x_3917_);
v___x_3925_ = ((lean_object*)(l_Lake_resolveArtifact___lam__1___closed__0));
v___x_3926_ = lean_io_error_to_string(v_a_3924_);
v___x_3927_ = lean_string_append(v___x_3925_, v___x_3926_);
lean_dec_ref(v___x_3926_);
v___x_3928_ = 3;
v___x_3929_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3929_, 0, v___x_3927_);
lean_ctor_set_uint8(v___x_3929_, sizeof(void*)*1, v___x_3928_);
v___x_3930_ = lean_array_get_size(v_log_3912_);
v___x_3931_ = lean_array_push(v_log_3912_, v___x_3929_);
if (v_isShared_3923_ == 0)
{
lean_ctor_set(v___x_3922_, 0, v___x_3931_);
v___x_3933_ = v___x_3922_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v___x_3931_);
lean_ctor_set(v_reuseFailAlloc_3935_, 1, v_trace_3915_);
lean_ctor_set(v_reuseFailAlloc_3935_, 2, v_buildTime_3916_);
lean_ctor_set_uint8(v_reuseFailAlloc_3935_, sizeof(void*)*3, v_action_3913_);
lean_ctor_set_uint8(v_reuseFailAlloc_3935_, sizeof(void*)*3 + 1, v_wantsRebuild_3914_);
v___x_3933_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
lean_object* v___x_3934_; 
v___x_3934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3930_);
lean_ctor_set(v___x_3934_, 1, v___x_3933_);
return v___x_3934_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1___boxed(lean_object* v___x_3940_, lean_object* v___f_3941_, lean_object* v_____r_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_){
_start:
{
lean_object* v_res_3950_; 
v_res_3950_ = l_Lake_resolveArtifact___lam__1(v___x_3940_, v___f_3941_, v_____r_3942_, v___y_3943_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
lean_dec_ref(v___y_3947_);
lean_dec(v___y_3946_);
lean_dec(v___y_3945_);
lean_dec(v___y_3944_);
lean_dec_ref(v___x_3940_);
return v_res_3950_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact(lean_object* v_descr_3962_, lean_object* v_service_x3f_3963_, lean_object* v_scope_x3f_3964_, uint8_t v_exe_3965_, lean_object* v_a_3966_, lean_object* v_a_3967_, lean_object* v_a_3968_, lean_object* v_a_3969_, lean_object* v_a_3970_, lean_object* v_a_3971_){
_start:
{
lean_object* v___y_3974_; lean_object* v_a_3975_; lean_object* v___y_3978_; lean_object* v___y_3979_; lean_object* v_toContext_3981_; lean_object* v_log_3982_; uint8_t v_action_3983_; uint8_t v_wantsRebuild_3984_; lean_object* v_trace_3985_; lean_object* v_buildTime_3986_; lean_object* v_lakeConfig_3987_; lean_object* v_lakeCache_3988_; uint64_t v_hash_3989_; lean_object* v_ext_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___y_3994_; lean_object* v___x_4092_; lean_object* v___x_4093_; uint8_t v___x_4094_; 
v_toContext_3981_ = lean_ctor_get(v_a_3970_, 1);
v_log_3982_ = lean_ctor_get(v_a_3971_, 0);
v_action_3983_ = lean_ctor_get_uint8(v_a_3971_, sizeof(void*)*3);
v_wantsRebuild_3984_ = lean_ctor_get_uint8(v_a_3971_, sizeof(void*)*3 + 1);
v_trace_3985_ = lean_ctor_get(v_a_3971_, 1);
v_buildTime_3986_ = lean_ctor_get(v_a_3971_, 2);
v_lakeConfig_3987_ = lean_ctor_get(v_toContext_3981_, 2);
v_lakeCache_3988_ = lean_ctor_get(v_toContext_3981_, 3);
v_hash_3989_ = lean_ctor_get_uint64(v_descr_3962_, sizeof(void*)*1);
v_ext_3990_ = lean_ctor_get(v_descr_3962_, 0);
v___x_3991_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__1));
lean_inc_ref(v_lakeCache_3988_);
v___x_3992_ = l_System_FilePath_join(v_lakeCache_3988_, v___x_3991_);
v___x_4092_ = lean_string_utf8_byte_size(v_ext_3990_);
v___x_4093_ = lean_unsigned_to_nat(0u);
v___x_4094_ = lean_nat_dec_eq(v___x_4092_, v___x_4093_);
if (v___x_4094_ == 0)
{
lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; 
v___x_4095_ = l_Lake_Hash_hex(v_hash_3989_);
v___x_4096_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_4097_ = lean_string_append(v___x_4095_, v___x_4096_);
v___x_4098_ = lean_string_append(v___x_4097_, v_ext_3990_);
v___y_3994_ = v___x_4098_;
goto v___jp_3993_;
}
else
{
lean_object* v___x_4099_; 
v___x_4099_ = l_Lake_Hash_hex(v_hash_3989_);
v___y_3994_ = v___x_4099_;
goto v___jp_3993_;
}
v___jp_3973_:
{
lean_object* v___x_3976_; 
v___x_3976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3976_, 0, v___y_3974_);
lean_ctor_set(v___x_3976_, 1, v_a_3975_);
return v___x_3976_;
}
v___jp_3977_:
{
if (lean_obj_tag(v___y_3979_) == 0)
{
lean_dec(v___y_3978_);
return v___y_3979_;
}
else
{
lean_object* v_a_3980_; 
v_a_3980_ = lean_ctor_get(v___y_3979_, 1);
lean_inc(v_a_3980_);
lean_dec_ref(v___y_3979_);
v___y_3974_ = v___y_3978_;
v_a_3975_ = v_a_3980_;
goto v___jp_3973_;
}
}
v___jp_3993_:
{
lean_object* v___x_3995_; lean_object* v___f_3996_; lean_object* v___x_3997_; 
v___x_3995_ = l_Lake_joinRelative(v___x_3992_, v___y_3994_);
lean_inc_ref(v___x_3995_);
lean_inc_ref(v_descr_3962_);
v___f_3996_ = lean_alloc_closure((void*)(l_Lake_resolveArtifact___lam__0___boxed), 10, 2);
lean_closure_set(v___f_3996_, 0, v_descr_3962_);
lean_closure_set(v___f_3996_, 1, v___x_3995_);
v___x_3997_ = lean_io_metadata(v___x_3995_);
if (lean_obj_tag(v___x_3997_) == 0)
{
lean_object* v_a_3998_; lean_object* v_modified_3999_; lean_object* v___x_4000_; 
lean_dec_ref(v___f_3996_);
lean_dec(v_scope_x3f_3964_);
lean_dec(v_service_x3f_3963_);
v_a_3998_ = lean_ctor_get(v___x_3997_, 0);
lean_inc(v_a_3998_);
lean_dec_ref(v___x_3997_);
v_modified_3999_ = lean_ctor_get(v_a_3998_, 1);
lean_inc_ref(v_modified_3999_);
lean_dec(v_a_3998_);
v___x_4000_ = l_Lake_resolveArtifact___lam__0(v_descr_3962_, v___x_3995_, v_modified_3999_, v_a_3966_, v_a_3967_, v_a_3968_, v_a_3969_, v_a_3970_, v_a_3971_);
lean_dec_ref(v_a_3966_);
return v___x_4000_;
}
else
{
lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4088_; 
lean_inc(v_buildTime_3986_);
lean_inc_ref(v_trace_3985_);
lean_inc_ref(v_log_3982_);
lean_dec_ref(v_descr_3962_);
v_isSharedCheck_4088_ = !lean_is_exclusive(v_a_3971_);
if (v_isSharedCheck_4088_ == 0)
{
lean_object* v_unused_4089_; lean_object* v_unused_4090_; lean_object* v_unused_4091_; 
v_unused_4089_ = lean_ctor_get(v_a_3971_, 2);
lean_dec(v_unused_4089_);
v_unused_4090_ = lean_ctor_get(v_a_3971_, 1);
lean_dec(v_unused_4090_);
v_unused_4091_ = lean_ctor_get(v_a_3971_, 0);
lean_dec(v_unused_4091_);
v___x_4002_ = v_a_3971_;
v_isShared_4003_ = v_isSharedCheck_4088_;
goto v_resetjp_4001_;
}
else
{
lean_dec(v_a_3971_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4088_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
lean_object* v_a_4004_; 
v_a_4004_ = lean_ctor_get(v___x_3997_, 0);
lean_inc(v_a_4004_);
lean_dec_ref(v___x_3997_);
if (lean_obj_tag(v_a_4004_) == 11)
{
lean_object* v___x_4005_; 
lean_dec_ref(v_a_4004_);
v___x_4005_ = lean_array_get_size(v_log_3982_);
if (lean_obj_tag(v_service_x3f_3963_) == 1)
{
lean_object* v_val_4006_; lean_object* v_cacheServices_4007_; uint8_t v___x_4008_; uint8_t v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; 
v_val_4006_ = lean_ctor_get(v_service_x3f_3963_, 0);
lean_inc(v_val_4006_);
lean_dec_ref(v_service_x3f_3963_);
v_cacheServices_4007_ = lean_ctor_get(v_lakeConfig_3987_, 3);
v___x_4008_ = 2;
v___x_4009_ = l_Lake_JobAction_merge(v_action_3983_, v___x_4008_);
v___x_4010_ = lean_box(0);
lean_inc(v_val_4006_);
v___x_4011_ = l_Lean_Name_str___override(v___x_4010_, v_val_4006_);
v___x_4012_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_cacheServices_4007_, v___x_4011_);
lean_dec(v___x_4011_);
if (lean_obj_tag(v___x_4012_) == 1)
{
lean_dec(v_val_4006_);
if (lean_obj_tag(v_scope_x3f_3964_) == 1)
{
lean_object* v_val_4013_; lean_object* v_val_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; uint8_t v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; 
v_val_4013_ = lean_ctor_get(v___x_4012_, 0);
lean_inc(v_val_4013_);
lean_dec_ref(v___x_4012_);
v_val_4014_ = lean_ctor_get(v_scope_x3f_3964_, 0);
lean_inc(v_val_4014_);
lean_dec_ref(v_scope_x3f_3964_);
v___x_4015_ = l_Lake_CacheService_artifactUrl(v_hash_3989_, v_val_4013_, v_val_4014_);
v___x_4016_ = ((lean_object*)(l_Lake_resolveArtifact___closed__0));
v___x_4017_ = l_Lake_Hash_hex(v_hash_3989_);
v___x_4018_ = lean_string_append(v___x_4016_, v___x_4017_);
lean_dec_ref(v___x_4017_);
v___x_4019_ = ((lean_object*)(l_Lake_resolveArtifact___closed__1));
v___x_4020_ = lean_string_append(v___x_4018_, v___x_4019_);
v___x_4021_ = lean_string_append(v___x_4020_, v___x_3995_);
v___x_4022_ = ((lean_object*)(l_Lake_resolveArtifact___closed__2));
v___x_4023_ = lean_string_append(v___x_4021_, v___x_4022_);
v___x_4024_ = lean_string_append(v___x_4023_, v___x_4015_);
v___x_4025_ = 0;
v___x_4026_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4026_, 0, v___x_4024_);
lean_ctor_set_uint8(v___x_4026_, sizeof(void*)*1, v___x_4025_);
v___x_4027_ = lean_array_push(v_log_3982_, v___x_4026_);
lean_inc_ref(v___x_3995_);
v___x_4028_ = l_Lake_downloadArtifactCore(v_hash_3989_, v___x_4015_, v___x_3995_, v___x_4027_);
if (lean_obj_tag(v___x_4028_) == 0)
{
lean_object* v_a_4029_; uint8_t v___x_4030_; uint8_t v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; 
v_a_4029_ = lean_ctor_get(v___x_4028_, 1);
lean_inc(v_a_4029_);
lean_dec_ref(v___x_4028_);
v___x_4030_ = 1;
v___x_4031_ = 0;
v___x_4032_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_4032_, 0, v___x_4030_);
lean_ctor_set_uint8(v___x_4032_, 1, v___x_4031_);
lean_ctor_set_uint8(v___x_4032_, 2, v_exe_3965_);
lean_inc_ref_n(v___x_4032_, 2);
v___x_4033_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4032_);
lean_ctor_set(v___x_4033_, 1, v___x_4032_);
lean_ctor_set(v___x_4033_, 2, v___x_4032_);
v___x_4034_ = l_IO_setAccessRights(v___x_3995_, v___x_4033_);
lean_dec_ref(v___x_4033_);
if (lean_obj_tag(v___x_4034_) == 0)
{
lean_object* v___x_4036_; 
lean_dec_ref(v___x_4034_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v_a_4029_);
v___x_4036_ = v___x_4002_;
goto v_reusejp_4035_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v_a_4029_);
lean_ctor_set(v_reuseFailAlloc_4039_, 1, v_trace_3985_);
lean_ctor_set(v_reuseFailAlloc_4039_, 2, v_buildTime_3986_);
lean_ctor_set_uint8(v_reuseFailAlloc_4039_, sizeof(void*)*3 + 1, v_wantsRebuild_3984_);
v___x_4036_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4035_;
}
v_reusejp_4035_:
{
lean_object* v___x_4037_; lean_object* v___x_4038_; 
lean_ctor_set_uint8(v___x_4036_, sizeof(void*)*3, v___x_4009_);
v___x_4037_ = lean_box(0);
v___x_4038_ = l_Lake_resolveArtifact___lam__1(v___x_3995_, v___f_3996_, v___x_4037_, v_a_3966_, v_a_3967_, v_a_3968_, v_a_3969_, v_a_3970_, v___x_4036_);
lean_dec_ref(v___x_3995_);
v___y_3978_ = v___x_4005_;
v___y_3979_ = v___x_4038_;
goto v___jp_3977_;
}
}
else
{
lean_object* v_a_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; uint8_t v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4049_; 
v_a_4040_ = lean_ctor_get(v___x_4034_, 0);
lean_inc(v_a_4040_);
lean_dec_ref(v___x_4034_);
v___x_4041_ = ((lean_object*)(l_Lake_resolveArtifact___closed__3));
v___x_4042_ = lean_io_error_to_string(v_a_4040_);
v___x_4043_ = lean_string_append(v___x_4041_, v___x_4042_);
lean_dec_ref(v___x_4042_);
v___x_4044_ = 2;
v___x_4045_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4045_, 0, v___x_4043_);
lean_ctor_set_uint8(v___x_4045_, sizeof(void*)*1, v___x_4044_);
v___x_4046_ = lean_box(0);
v___x_4047_ = lean_array_push(v_a_4029_, v___x_4045_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v___x_4047_);
v___x_4049_ = v___x_4002_;
goto v_reusejp_4048_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v___x_4047_);
lean_ctor_set(v_reuseFailAlloc_4051_, 1, v_trace_3985_);
lean_ctor_set(v_reuseFailAlloc_4051_, 2, v_buildTime_3986_);
lean_ctor_set_uint8(v_reuseFailAlloc_4051_, sizeof(void*)*3 + 1, v_wantsRebuild_3984_);
v___x_4049_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4048_;
}
v_reusejp_4048_:
{
lean_object* v___x_4050_; 
lean_ctor_set_uint8(v___x_4049_, sizeof(void*)*3, v___x_4009_);
v___x_4050_ = l_Lake_resolveArtifact___lam__1(v___x_3995_, v___f_3996_, v___x_4046_, v_a_3966_, v_a_3967_, v_a_3968_, v_a_3969_, v_a_3970_, v___x_4049_);
lean_dec_ref(v___x_3995_);
v___y_3978_ = v___x_4005_;
v___y_3979_ = v___x_4050_;
goto v___jp_3977_;
}
}
}
else
{
lean_object* v_a_4052_; lean_object* v___x_4054_; 
lean_dec_ref(v___f_3996_);
lean_dec_ref(v___x_3995_);
lean_dec_ref(v_a_3966_);
v_a_4052_ = lean_ctor_get(v___x_4028_, 1);
lean_inc(v_a_4052_);
lean_dec_ref(v___x_4028_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v_a_4052_);
v___x_4054_ = v___x_4002_;
goto v_reusejp_4053_;
}
else
{
lean_object* v_reuseFailAlloc_4055_; 
v_reuseFailAlloc_4055_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4055_, 0, v_a_4052_);
lean_ctor_set(v_reuseFailAlloc_4055_, 1, v_trace_3985_);
lean_ctor_set(v_reuseFailAlloc_4055_, 2, v_buildTime_3986_);
lean_ctor_set_uint8(v_reuseFailAlloc_4055_, sizeof(void*)*3 + 1, v_wantsRebuild_3984_);
v___x_4054_ = v_reuseFailAlloc_4055_;
goto v_reusejp_4053_;
}
v_reusejp_4053_:
{
lean_ctor_set_uint8(v___x_4054_, sizeof(void*)*3, v___x_4009_);
v___y_3974_ = v___x_4005_;
v_a_3975_ = v___x_4054_;
goto v___jp_3973_;
}
}
}
else
{
lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4059_; 
lean_dec_ref(v___x_4012_);
lean_dec_ref(v___f_3996_);
lean_dec_ref(v___x_3995_);
lean_dec_ref(v_a_3966_);
lean_dec(v_scope_x3f_3964_);
v___x_4056_ = ((lean_object*)(l_Lake_resolveArtifact___closed__5));
v___x_4057_ = lean_array_push(v_log_3982_, v___x_4056_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v___x_4057_);
v___x_4059_ = v___x_4002_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v___x_4057_);
lean_ctor_set(v_reuseFailAlloc_4060_, 1, v_trace_3985_);
lean_ctor_set(v_reuseFailAlloc_4060_, 2, v_buildTime_3986_);
lean_ctor_set_uint8(v_reuseFailAlloc_4060_, sizeof(void*)*3 + 1, v_wantsRebuild_3984_);
v___x_4059_ = v_reuseFailAlloc_4060_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
lean_ctor_set_uint8(v___x_4059_, sizeof(void*)*3, v___x_4009_);
v___y_3974_ = v___x_4005_;
v_a_3975_ = v___x_4059_;
goto v___jp_3973_;
}
}
}
else
{
lean_object* v___x_4061_; lean_object* v___x_4062_; uint8_t v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4067_; 
lean_dec(v___x_4012_);
lean_dec_ref(v___f_3996_);
lean_dec_ref(v___x_3995_);
lean_dec_ref(v_a_3966_);
lean_dec(v_scope_x3f_3964_);
v___x_4061_ = ((lean_object*)(l_Lake_resolveArtifact___closed__6));
v___x_4062_ = lean_string_append(v___x_4061_, v_val_4006_);
lean_dec(v_val_4006_);
v___x_4063_ = 3;
v___x_4064_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4064_, 0, v___x_4062_);
lean_ctor_set_uint8(v___x_4064_, sizeof(void*)*1, v___x_4063_);
v___x_4065_ = lean_array_push(v_log_3982_, v___x_4064_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v___x_4065_);
v___x_4067_ = v___x_4002_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v___x_4065_);
lean_ctor_set(v_reuseFailAlloc_4068_, 1, v_trace_3985_);
lean_ctor_set(v_reuseFailAlloc_4068_, 2, v_buildTime_3986_);
lean_ctor_set_uint8(v_reuseFailAlloc_4068_, sizeof(void*)*3 + 1, v_wantsRebuild_3984_);
v___x_4067_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
lean_ctor_set_uint8(v___x_4067_, sizeof(void*)*3, v___x_4009_);
v___y_3974_ = v___x_4005_;
v_a_3975_ = v___x_4067_;
goto v___jp_3973_;
}
}
}
else
{
lean_object* v___x_4069_; lean_object* v___x_4070_; uint8_t v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4075_; 
lean_dec_ref(v___f_3996_);
lean_dec_ref(v_a_3966_);
lean_dec(v_scope_x3f_3964_);
lean_dec(v_service_x3f_3963_);
v___x_4069_ = ((lean_object*)(l_Lake_resolveArtifact___closed__7));
v___x_4070_ = lean_string_append(v___x_4069_, v___x_3995_);
lean_dec_ref(v___x_3995_);
v___x_4071_ = 3;
v___x_4072_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4072_, 0, v___x_4070_);
lean_ctor_set_uint8(v___x_4072_, sizeof(void*)*1, v___x_4071_);
v___x_4073_ = lean_array_push(v_log_3982_, v___x_4072_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v___x_4073_);
v___x_4075_ = v___x_4002_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v___x_4073_);
lean_ctor_set(v_reuseFailAlloc_4076_, 1, v_trace_3985_);
lean_ctor_set(v_reuseFailAlloc_4076_, 2, v_buildTime_3986_);
lean_ctor_set_uint8(v_reuseFailAlloc_4076_, sizeof(void*)*3, v_action_3983_);
lean_ctor_set_uint8(v_reuseFailAlloc_4076_, sizeof(void*)*3 + 1, v_wantsRebuild_3984_);
v___x_4075_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
v___y_3974_ = v___x_4005_;
v_a_3975_ = v___x_4075_;
goto v___jp_3973_;
}
}
}
else
{
lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; uint8_t v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4085_; 
lean_dec_ref(v___f_3996_);
lean_dec_ref(v___x_3995_);
lean_dec_ref(v_a_3966_);
lean_dec(v_scope_x3f_3964_);
lean_dec(v_service_x3f_3963_);
v___x_4077_ = ((lean_object*)(l_Lake_resolveArtifact___closed__8));
v___x_4078_ = lean_io_error_to_string(v_a_4004_);
v___x_4079_ = lean_string_append(v___x_4077_, v___x_4078_);
lean_dec_ref(v___x_4078_);
v___x_4080_ = 3;
v___x_4081_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4081_, 0, v___x_4079_);
lean_ctor_set_uint8(v___x_4081_, sizeof(void*)*1, v___x_4080_);
v___x_4082_ = lean_array_get_size(v_log_3982_);
v___x_4083_ = lean_array_push(v_log_3982_, v___x_4081_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v___x_4083_);
v___x_4085_ = v___x_4002_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v___x_4083_);
lean_ctor_set(v_reuseFailAlloc_4087_, 1, v_trace_3985_);
lean_ctor_set(v_reuseFailAlloc_4087_, 2, v_buildTime_3986_);
lean_ctor_set_uint8(v_reuseFailAlloc_4087_, sizeof(void*)*3, v_action_3983_);
lean_ctor_set_uint8(v_reuseFailAlloc_4087_, sizeof(void*)*3 + 1, v_wantsRebuild_3984_);
v___x_4085_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
lean_object* v___x_4086_; 
v___x_4086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4086_, 0, v___x_4082_);
lean_ctor_set(v___x_4086_, 1, v___x_4085_);
return v___x_4086_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___boxed(lean_object* v_descr_4100_, lean_object* v_service_x3f_4101_, lean_object* v_scope_x3f_4102_, lean_object* v_exe_4103_, lean_object* v_a_4104_, lean_object* v_a_4105_, lean_object* v_a_4106_, lean_object* v_a_4107_, lean_object* v_a_4108_, lean_object* v_a_4109_, lean_object* v_a_4110_){
_start:
{
uint8_t v_exe_boxed_4111_; lean_object* v_res_4112_; 
v_exe_boxed_4111_ = lean_unbox(v_exe_4103_);
v_res_4112_ = l_Lake_resolveArtifact(v_descr_4100_, v_service_x3f_4101_, v_scope_x3f_4102_, v_exe_boxed_4111_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec(v_a_4106_);
lean_dec(v_a_4105_);
return v_res_4112_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput(lean_object* v_out_4115_, uint8_t v_exe_4116_, lean_object* v_a_4117_, lean_object* v_a_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_){
_start:
{
lean_object* v_data_4124_; lean_object* v_service_x3f_4125_; lean_object* v_scope_x3f_4126_; lean_object* v___x_4127_; 
v_data_4124_ = lean_ctor_get(v_out_4115_, 0);
lean_inc(v_data_4124_);
v_service_x3f_4125_ = lean_ctor_get(v_out_4115_, 1);
lean_inc(v_service_x3f_4125_);
v_scope_x3f_4126_ = lean_ctor_get(v_out_4115_, 2);
lean_inc(v_scope_x3f_4126_);
lean_dec_ref(v_out_4115_);
lean_inc(v_data_4124_);
v___x_4127_ = l_Lake_ArtifactDescr_fromJson_x3f(v_data_4124_);
if (lean_obj_tag(v___x_4127_) == 0)
{
lean_object* v_a_4128_; lean_object* v_log_4129_; uint8_t v_action_4130_; uint8_t v_wantsRebuild_4131_; lean_object* v_trace_4132_; lean_object* v_buildTime_4133_; lean_object* v___x_4135_; uint8_t v_isShared_4136_; uint8_t v_isSharedCheck_4155_; 
lean_dec(v_scope_x3f_4126_);
lean_dec(v_service_x3f_4125_);
lean_dec_ref(v_a_4117_);
v_a_4128_ = lean_ctor_get(v___x_4127_, 0);
lean_inc(v_a_4128_);
lean_dec_ref(v___x_4127_);
v_log_4129_ = lean_ctor_get(v_a_4122_, 0);
v_action_4130_ = lean_ctor_get_uint8(v_a_4122_, sizeof(void*)*3);
v_wantsRebuild_4131_ = lean_ctor_get_uint8(v_a_4122_, sizeof(void*)*3 + 1);
v_trace_4132_ = lean_ctor_get(v_a_4122_, 1);
v_buildTime_4133_ = lean_ctor_get(v_a_4122_, 2);
v_isSharedCheck_4155_ = !lean_is_exclusive(v_a_4122_);
if (v_isSharedCheck_4155_ == 0)
{
v___x_4135_ = v_a_4122_;
v_isShared_4136_ = v_isSharedCheck_4155_;
goto v_resetjp_4134_;
}
else
{
lean_inc(v_buildTime_4133_);
lean_inc(v_trace_4132_);
lean_inc(v_log_4129_);
lean_dec(v_a_4122_);
v___x_4135_ = lean_box(0);
v_isShared_4136_ = v_isSharedCheck_4155_;
goto v_resetjp_4134_;
}
v_resetjp_4134_:
{
lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; uint8_t v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4152_; 
v___x_4137_ = ((lean_object*)(l_Lake_resolveArtifactOutput___closed__0));
v___x_4138_ = l_Lean_Json_render(v_data_4124_);
v___x_4139_ = lean_unsigned_to_nat(80u);
v___x_4140_ = lean_unsigned_to_nat(2u);
v___x_4141_ = lean_unsigned_to_nat(0u);
v___x_4142_ = l_Std_Format_pretty(v___x_4138_, v___x_4139_, v___x_4140_, v___x_4141_);
v___x_4143_ = lean_string_append(v___x_4137_, v___x_4142_);
lean_dec_ref(v___x_4142_);
v___x_4144_ = ((lean_object*)(l_Lake_resolveArtifactOutput___closed__1));
v___x_4145_ = lean_string_append(v___x_4143_, v___x_4144_);
v___x_4146_ = lean_string_append(v___x_4145_, v_a_4128_);
lean_dec(v_a_4128_);
v___x_4147_ = 3;
v___x_4148_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4148_, 0, v___x_4146_);
lean_ctor_set_uint8(v___x_4148_, sizeof(void*)*1, v___x_4147_);
v___x_4149_ = lean_array_get_size(v_log_4129_);
v___x_4150_ = lean_array_push(v_log_4129_, v___x_4148_);
if (v_isShared_4136_ == 0)
{
lean_ctor_set(v___x_4135_, 0, v___x_4150_);
v___x_4152_ = v___x_4135_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4154_; 
v_reuseFailAlloc_4154_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4154_, 0, v___x_4150_);
lean_ctor_set(v_reuseFailAlloc_4154_, 1, v_trace_4132_);
lean_ctor_set(v_reuseFailAlloc_4154_, 2, v_buildTime_4133_);
lean_ctor_set_uint8(v_reuseFailAlloc_4154_, sizeof(void*)*3, v_action_4130_);
lean_ctor_set_uint8(v_reuseFailAlloc_4154_, sizeof(void*)*3 + 1, v_wantsRebuild_4131_);
v___x_4152_ = v_reuseFailAlloc_4154_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
lean_object* v___x_4153_; 
v___x_4153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4149_);
lean_ctor_set(v___x_4153_, 1, v___x_4152_);
return v___x_4153_;
}
}
}
else
{
lean_object* v_a_4156_; lean_object* v___x_4157_; 
lean_dec(v_data_4124_);
v_a_4156_ = lean_ctor_get(v___x_4127_, 0);
lean_inc(v_a_4156_);
lean_dec_ref(v___x_4127_);
v___x_4157_ = l_Lake_resolveArtifact(v_a_4156_, v_service_x3f_4125_, v_scope_x3f_4126_, v_exe_4116_, v_a_4117_, v_a_4118_, v_a_4119_, v_a_4120_, v_a_4121_, v_a_4122_);
return v___x_4157_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput___boxed(lean_object* v_out_4158_, lean_object* v_exe_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_, lean_object* v_a_4164_, lean_object* v_a_4165_, lean_object* v_a_4166_){
_start:
{
uint8_t v_exe_boxed_4167_; lean_object* v_res_4168_; 
v_exe_boxed_4167_ = lean_unbox(v_exe_4159_);
v_res_4168_ = l_Lake_resolveArtifactOutput(v_out_4158_, v_exe_boxed_4167_, v_a_4160_, v_a_4161_, v_a_4162_, v_a_4163_, v_a_4164_, v_a_4165_);
lean_dec_ref(v_a_4164_);
lean_dec(v_a_4163_);
lean_dec(v_a_4162_);
lean_dec(v_a_4161_);
return v_res_4168_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0(uint8_t v_exe_4169_, lean_object* v_out_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_){
_start:
{
lean_object* v___x_4178_; 
v___x_4178_ = l_Lake_resolveArtifactOutput(v_out_4170_, v_exe_4169_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_, v___y_4176_);
return v___x_4178_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0___boxed(lean_object* v_exe_4179_, lean_object* v_out_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_){
_start:
{
uint8_t v_exe_boxed_4188_; lean_object* v_res_4189_; 
v_exe_boxed_4188_ = lean_unbox(v_exe_4179_);
v_res_4189_ = l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0(v_exe_boxed_4188_, v_out_4180_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
lean_dec_ref(v___y_4185_);
lean_dec(v___y_4184_);
lean_dec(v___y_4183_);
lean_dec(v___y_4182_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact(uint8_t v_exe_4190_){
_start:
{
lean_object* v___x_4191_; lean_object* v___f_4192_; 
v___x_4191_ = lean_box(v_exe_4190_);
v___f_4192_ = lean_alloc_closure((void*)(l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0___boxed), 9, 1);
lean_closure_set(v___f_4192_, 0, v___x_4191_);
return v___f_4192_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___boxed(lean_object* v_exe_4193_){
_start:
{
uint8_t v_exe_boxed_4194_; lean_object* v_res_4195_; 
v_exe_boxed_4194_ = lean_unbox(v_exe_4193_);
v_res_4195_ = l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact(v_exe_boxed_4194_);
return v_res_4195_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg(lean_object* v_path_4196_, lean_object* v_ext_4197_, uint8_t v_text_4198_, lean_object* v_a_4199_, lean_object* v_a_4200_){
_start:
{
lean_object* v___x_4202_; 
lean_inc_ref(v_path_4196_);
v___x_4202_ = l_Lake_fetchFileHash___redArg(v_path_4196_, v_text_4198_, v_a_4199_, v_a_4200_);
if (lean_obj_tag(v___x_4202_) == 0)
{
lean_object* v_a_4203_; lean_object* v_a_4204_; lean_object* v___x_4206_; uint8_t v_isShared_4207_; uint8_t v_isSharedCheck_4221_; 
v_a_4203_ = lean_ctor_get(v___x_4202_, 0);
v_a_4204_ = lean_ctor_get(v___x_4202_, 1);
v_isSharedCheck_4221_ = !lean_is_exclusive(v___x_4202_);
if (v_isSharedCheck_4221_ == 0)
{
v___x_4206_ = v___x_4202_;
v_isShared_4207_ = v_isSharedCheck_4221_;
goto v_resetjp_4205_;
}
else
{
lean_inc(v_a_4204_);
lean_inc(v_a_4203_);
lean_dec(v___x_4202_);
v___x_4206_ = lean_box(0);
v_isShared_4207_ = v_isSharedCheck_4221_;
goto v_resetjp_4205_;
}
v_resetjp_4205_:
{
lean_object* v___y_4209_; lean_object* v___y_4210_; lean_object* v___x_4217_; 
v___x_4217_ = lean_io_metadata(v_path_4196_);
if (lean_obj_tag(v___x_4217_) == 0)
{
lean_object* v_a_4218_; lean_object* v_modified_4219_; 
v_a_4218_ = lean_ctor_get(v___x_4217_, 0);
lean_inc(v_a_4218_);
lean_dec_ref(v___x_4217_);
v_modified_4219_ = lean_ctor_get(v_a_4218_, 1);
lean_inc_ref(v_modified_4219_);
lean_dec(v_a_4218_);
v___y_4209_ = v_a_4204_;
v___y_4210_ = v_modified_4219_;
goto v___jp_4208_;
}
else
{
lean_object* v___x_4220_; 
lean_dec_ref(v___x_4217_);
v___x_4220_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___y_4209_ = v_a_4204_;
v___y_4210_ = v___x_4220_;
goto v___jp_4208_;
}
v___jp_4208_:
{
lean_object* v___x_4211_; uint64_t v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4215_; 
v___x_4211_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4211_, 0, v_ext_4197_);
v___x_4212_ = lean_unbox_uint64(v_a_4203_);
lean_dec(v_a_4203_);
lean_ctor_set_uint64(v___x_4211_, sizeof(void*)*1, v___x_4212_);
lean_inc_ref(v_path_4196_);
v___x_4213_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4213_, 0, v___x_4211_);
lean_ctor_set(v___x_4213_, 1, v_path_4196_);
lean_ctor_set(v___x_4213_, 2, v_path_4196_);
lean_ctor_set(v___x_4213_, 3, v___y_4210_);
if (v_isShared_4207_ == 0)
{
lean_ctor_set(v___x_4206_, 1, v___y_4209_);
lean_ctor_set(v___x_4206_, 0, v___x_4213_);
v___x_4215_ = v___x_4206_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v___x_4213_);
lean_ctor_set(v_reuseFailAlloc_4216_, 1, v___y_4209_);
v___x_4215_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
return v___x_4215_;
}
}
}
}
else
{
lean_object* v_a_4222_; lean_object* v_a_4223_; lean_object* v___x_4225_; uint8_t v_isShared_4226_; uint8_t v_isSharedCheck_4230_; 
lean_dec_ref(v_ext_4197_);
lean_dec_ref(v_path_4196_);
v_a_4222_ = lean_ctor_get(v___x_4202_, 0);
v_a_4223_ = lean_ctor_get(v___x_4202_, 1);
v_isSharedCheck_4230_ = !lean_is_exclusive(v___x_4202_);
if (v_isSharedCheck_4230_ == 0)
{
v___x_4225_ = v___x_4202_;
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
else
{
lean_inc(v_a_4223_);
lean_inc(v_a_4222_);
lean_dec(v___x_4202_);
v___x_4225_ = lean_box(0);
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
v_resetjp_4224_:
{
lean_object* v___x_4228_; 
if (v_isShared_4226_ == 0)
{
v___x_4228_ = v___x_4225_;
goto v_reusejp_4227_;
}
else
{
lean_object* v_reuseFailAlloc_4229_; 
v_reuseFailAlloc_4229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4229_, 0, v_a_4222_);
lean_ctor_set(v_reuseFailAlloc_4229_, 1, v_a_4223_);
v___x_4228_ = v_reuseFailAlloc_4229_;
goto v_reusejp_4227_;
}
v_reusejp_4227_:
{
return v___x_4228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg___boxed(lean_object* v_path_4231_, lean_object* v_ext_4232_, lean_object* v_text_4233_, lean_object* v_a_4234_, lean_object* v_a_4235_, lean_object* v_a_4236_){
_start:
{
uint8_t v_text_boxed_4237_; lean_object* v_res_4238_; 
v_text_boxed_4237_ = lean_unbox(v_text_4233_);
v_res_4238_ = l_Lake_computeArtifact___redArg(v_path_4231_, v_ext_4232_, v_text_boxed_4237_, v_a_4234_, v_a_4235_);
lean_dec_ref(v_a_4234_);
return v_res_4238_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact(lean_object* v_path_4239_, lean_object* v_ext_4240_, uint8_t v_text_4241_, lean_object* v_a_4242_, lean_object* v_a_4243_, lean_object* v_a_4244_, lean_object* v_a_4245_, lean_object* v_a_4246_, lean_object* v_a_4247_){
_start:
{
lean_object* v___x_4249_; 
v___x_4249_ = l_Lake_computeArtifact___redArg(v_path_4239_, v_ext_4240_, v_text_4241_, v_a_4246_, v_a_4247_);
return v___x_4249_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___boxed(lean_object* v_path_4250_, lean_object* v_ext_4251_, lean_object* v_text_4252_, lean_object* v_a_4253_, lean_object* v_a_4254_, lean_object* v_a_4255_, lean_object* v_a_4256_, lean_object* v_a_4257_, lean_object* v_a_4258_, lean_object* v_a_4259_){
_start:
{
uint8_t v_text_boxed_4260_; lean_object* v_res_4261_; 
v_text_boxed_4260_ = lean_unbox(v_text_4252_);
v_res_4261_ = l_Lake_computeArtifact(v_path_4250_, v_ext_4251_, v_text_boxed_4260_, v_a_4253_, v_a_4254_, v_a_4255_, v_a_4256_, v_a_4257_, v_a_4258_);
lean_dec_ref(v_a_4257_);
lean_dec(v_a_4256_);
lean_dec(v_a_4255_);
lean_dec(v_a_4254_);
lean_dec_ref(v_a_4253_);
return v_res_4261_;
}
}
LEAN_EXPORT lean_object* l_Lake_restoreArtifact(lean_object* v_file_4265_, lean_object* v_art_4266_, uint8_t v_exe_4267_, lean_object* v_a_4268_){
_start:
{
lean_object* v___y_4271_; uint8_t v___x_4284_; 
v___x_4284_ = l_System_FilePath_pathExists(v_file_4265_);
if (v___x_4284_ == 0)
{
lean_object* v_descr_4285_; lean_object* v_path_4286_; lean_object* v___y_4288_; lean_object* v___x_4303_; lean_object* v___x_4304_; uint8_t v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; 
v_descr_4285_ = lean_ctor_get(v_art_4266_, 0);
v_path_4286_ = lean_ctor_get(v_art_4266_, 1);
v___x_4303_ = ((lean_object*)(l_Lake_restoreArtifact___closed__1));
v___x_4304_ = lean_string_append(v___x_4303_, v_path_4286_);
v___x_4305_ = 0;
v___x_4306_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4306_, 0, v___x_4304_);
lean_ctor_set_uint8(v___x_4306_, sizeof(void*)*1, v___x_4305_);
v___x_4307_ = lean_array_push(v_a_4268_, v___x_4306_);
lean_inc_ref(v_file_4265_);
v___x_4308_ = l_Lake_createParentDirs(v_file_4265_);
if (lean_obj_tag(v___x_4308_) == 0)
{
lean_object* v___x_4309_; 
lean_dec_ref(v___x_4308_);
v___x_4309_ = lean_io_hard_link(v_path_4286_, v_file_4265_);
if (lean_obj_tag(v___x_4309_) == 0)
{
lean_dec_ref(v___x_4309_);
v___y_4288_ = v___x_4307_;
goto v___jp_4287_;
}
else
{
lean_object* v_a_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; 
v_a_4310_ = lean_ctor_get(v___x_4309_, 0);
lean_inc(v_a_4310_);
lean_dec_ref(v___x_4309_);
v___x_4311_ = ((lean_object*)(l_Lake_restoreArtifact___closed__2));
v___x_4312_ = lean_io_error_to_string(v_a_4310_);
v___x_4313_ = lean_string_append(v___x_4311_, v___x_4312_);
lean_dec_ref(v___x_4312_);
v___x_4314_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4314_, 0, v___x_4313_);
lean_ctor_set_uint8(v___x_4314_, sizeof(void*)*1, v___x_4305_);
v___x_4315_ = lean_array_push(v___x_4307_, v___x_4314_);
v___x_4316_ = l_Lake_copyFile(v_path_4286_, v_file_4265_);
if (lean_obj_tag(v___x_4316_) == 0)
{
uint8_t v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; 
lean_dec_ref(v___x_4316_);
v___x_4317_ = 1;
v___x_4318_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_4318_, 0, v___x_4317_);
lean_ctor_set_uint8(v___x_4318_, 1, v___x_4284_);
lean_ctor_set_uint8(v___x_4318_, 2, v_exe_4267_);
lean_inc_ref_n(v___x_4318_, 2);
v___x_4319_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4319_, 0, v___x_4318_);
lean_ctor_set(v___x_4319_, 1, v___x_4318_);
lean_ctor_set(v___x_4319_, 2, v___x_4318_);
v___x_4320_ = l_IO_setAccessRights(v_file_4265_, v___x_4319_);
lean_dec_ref(v___x_4319_);
if (lean_obj_tag(v___x_4320_) == 0)
{
lean_dec_ref(v___x_4320_);
v___y_4288_ = v___x_4315_;
goto v___jp_4287_;
}
else
{
lean_object* v_a_4321_; lean_object* v___x_4322_; uint8_t v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; 
lean_dec_ref(v_art_4266_);
lean_dec_ref(v_file_4265_);
v_a_4321_ = lean_ctor_get(v___x_4320_, 0);
lean_inc(v_a_4321_);
lean_dec_ref(v___x_4320_);
v___x_4322_ = lean_io_error_to_string(v_a_4321_);
v___x_4323_ = 3;
v___x_4324_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4324_, 0, v___x_4322_);
lean_ctor_set_uint8(v___x_4324_, sizeof(void*)*1, v___x_4323_);
v___x_4325_ = lean_array_get_size(v___x_4315_);
v___x_4326_ = lean_array_push(v___x_4315_, v___x_4324_);
v___x_4327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4327_, 0, v___x_4325_);
lean_ctor_set(v___x_4327_, 1, v___x_4326_);
return v___x_4327_;
}
}
else
{
lean_object* v_a_4328_; lean_object* v___x_4329_; uint8_t v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; 
lean_dec_ref(v_art_4266_);
lean_dec_ref(v_file_4265_);
v_a_4328_ = lean_ctor_get(v___x_4316_, 0);
lean_inc(v_a_4328_);
lean_dec_ref(v___x_4316_);
v___x_4329_ = lean_io_error_to_string(v_a_4328_);
v___x_4330_ = 3;
v___x_4331_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4331_, 0, v___x_4329_);
lean_ctor_set_uint8(v___x_4331_, sizeof(void*)*1, v___x_4330_);
v___x_4332_ = lean_array_get_size(v___x_4315_);
v___x_4333_ = lean_array_push(v___x_4315_, v___x_4331_);
v___x_4334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4334_, 0, v___x_4332_);
lean_ctor_set(v___x_4334_, 1, v___x_4333_);
return v___x_4334_;
}
}
}
else
{
lean_object* v_a_4335_; lean_object* v___x_4336_; uint8_t v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; 
lean_dec_ref(v_art_4266_);
lean_dec_ref(v_file_4265_);
v_a_4335_ = lean_ctor_get(v___x_4308_, 0);
lean_inc(v_a_4335_);
lean_dec_ref(v___x_4308_);
v___x_4336_ = lean_io_error_to_string(v_a_4335_);
v___x_4337_ = 3;
v___x_4338_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4338_, 0, v___x_4336_);
lean_ctor_set_uint8(v___x_4338_, sizeof(void*)*1, v___x_4337_);
v___x_4339_ = lean_array_get_size(v___x_4307_);
v___x_4340_ = lean_array_push(v___x_4307_, v___x_4338_);
v___x_4341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4341_, 0, v___x_4339_);
lean_ctor_set(v___x_4341_, 1, v___x_4340_);
return v___x_4341_;
}
v___jp_4287_:
{
uint64_t v_hash_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; uint8_t v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; 
v_hash_4289_ = lean_ctor_get_uint64(v_descr_4285_, sizeof(void*)*1);
v___x_4290_ = ((lean_object*)(l_Lake_restoreArtifact___closed__0));
v___x_4291_ = lean_string_append(v___x_4290_, v_file_4265_);
v___x_4292_ = 0;
v___x_4293_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4293_, 0, v___x_4291_);
lean_ctor_set_uint8(v___x_4293_, sizeof(void*)*1, v___x_4292_);
v___x_4294_ = lean_array_push(v___y_4288_, v___x_4293_);
lean_inc_ref(v_file_4265_);
v___x_4295_ = l_Lake_writeFileHash(v_file_4265_, v_hash_4289_);
if (lean_obj_tag(v___x_4295_) == 0)
{
lean_dec_ref(v___x_4295_);
v___y_4271_ = v___x_4294_;
goto v___jp_4270_;
}
else
{
lean_object* v_a_4296_; lean_object* v___x_4297_; uint8_t v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; 
lean_dec_ref(v_art_4266_);
lean_dec_ref(v_file_4265_);
v_a_4296_ = lean_ctor_get(v___x_4295_, 0);
lean_inc(v_a_4296_);
lean_dec_ref(v___x_4295_);
v___x_4297_ = lean_io_error_to_string(v_a_4296_);
v___x_4298_ = 3;
v___x_4299_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4299_, 0, v___x_4297_);
lean_ctor_set_uint8(v___x_4299_, sizeof(void*)*1, v___x_4298_);
v___x_4300_ = lean_array_get_size(v___x_4294_);
v___x_4301_ = lean_array_push(v___x_4294_, v___x_4299_);
v___x_4302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4302_, 0, v___x_4300_);
lean_ctor_set(v___x_4302_, 1, v___x_4301_);
return v___x_4302_;
}
}
}
else
{
v___y_4271_ = v_a_4268_;
goto v___jp_4270_;
}
v___jp_4270_:
{
lean_object* v_descr_4272_; lean_object* v_mtime_4273_; lean_object* v___x_4275_; uint8_t v_isShared_4276_; uint8_t v_isSharedCheck_4281_; 
v_descr_4272_ = lean_ctor_get(v_art_4266_, 0);
v_mtime_4273_ = lean_ctor_get(v_art_4266_, 3);
v_isSharedCheck_4281_ = !lean_is_exclusive(v_art_4266_);
if (v_isSharedCheck_4281_ == 0)
{
lean_object* v_unused_4282_; lean_object* v_unused_4283_; 
v_unused_4282_ = lean_ctor_get(v_art_4266_, 2);
lean_dec(v_unused_4282_);
v_unused_4283_ = lean_ctor_get(v_art_4266_, 1);
lean_dec(v_unused_4283_);
v___x_4275_ = v_art_4266_;
v_isShared_4276_ = v_isSharedCheck_4281_;
goto v_resetjp_4274_;
}
else
{
lean_inc(v_mtime_4273_);
lean_inc(v_descr_4272_);
lean_dec(v_art_4266_);
v___x_4275_ = lean_box(0);
v_isShared_4276_ = v_isSharedCheck_4281_;
goto v_resetjp_4274_;
}
v_resetjp_4274_:
{
lean_object* v___x_4278_; 
lean_inc_ref(v_file_4265_);
if (v_isShared_4276_ == 0)
{
lean_ctor_set(v___x_4275_, 2, v_file_4265_);
lean_ctor_set(v___x_4275_, 1, v_file_4265_);
v___x_4278_ = v___x_4275_;
goto v_reusejp_4277_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4280_, 0, v_descr_4272_);
lean_ctor_set(v_reuseFailAlloc_4280_, 1, v_file_4265_);
lean_ctor_set(v_reuseFailAlloc_4280_, 2, v_file_4265_);
lean_ctor_set(v_reuseFailAlloc_4280_, 3, v_mtime_4273_);
v___x_4278_ = v_reuseFailAlloc_4280_;
goto v_reusejp_4277_;
}
v_reusejp_4277_:
{
lean_object* v___x_4279_; 
v___x_4279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4279_, 0, v___x_4278_);
lean_ctor_set(v___x_4279_, 1, v___y_4271_);
return v___x_4279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_restoreArtifact___boxed(lean_object* v_file_4342_, lean_object* v_art_4343_, lean_object* v_exe_4344_, lean_object* v_a_4345_, lean_object* v_a_4346_){
_start:
{
uint8_t v_exe_boxed_4347_; lean_object* v_res_4348_; 
v_exe_boxed_4347_ = lean_unbox(v_exe_4344_);
v_res_4348_ = l_Lake_restoreArtifact(v_file_4342_, v_art_4343_, v_exe_boxed_4347_, v_a_4345_);
return v_res_4348_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(lean_object* v_val_4349_, lean_object* v_a_x3f_4350_, lean_object* v___y_4351_){
_start:
{
lean_object* v___x_4353_; lean_object* v_log_4354_; uint8_t v_action_4355_; uint8_t v_wantsRebuild_4356_; lean_object* v_trace_4357_; lean_object* v_buildTime_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4369_; 
v___x_4353_ = lean_io_mono_ms_now();
v_log_4354_ = lean_ctor_get(v___y_4351_, 0);
v_action_4355_ = lean_ctor_get_uint8(v___y_4351_, sizeof(void*)*3);
v_wantsRebuild_4356_ = lean_ctor_get_uint8(v___y_4351_, sizeof(void*)*3 + 1);
v_trace_4357_ = lean_ctor_get(v___y_4351_, 1);
v_buildTime_4358_ = lean_ctor_get(v___y_4351_, 2);
v_isSharedCheck_4369_ = !lean_is_exclusive(v___y_4351_);
if (v_isSharedCheck_4369_ == 0)
{
v___x_4360_ = v___y_4351_;
v_isShared_4361_ = v_isSharedCheck_4369_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_buildTime_4358_);
lean_inc(v_trace_4357_);
lean_inc(v_log_4354_);
lean_dec(v___y_4351_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4369_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4366_; 
v___x_4362_ = lean_nat_sub(v___x_4353_, v_val_4349_);
lean_dec(v___x_4353_);
v___x_4363_ = lean_box(0);
v___x_4364_ = lean_nat_add(v_buildTime_4358_, v___x_4362_);
lean_dec(v___x_4362_);
lean_dec(v_buildTime_4358_);
if (v_isShared_4361_ == 0)
{
lean_ctor_set(v___x_4360_, 2, v___x_4364_);
v___x_4366_ = v___x_4360_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4368_; 
v_reuseFailAlloc_4368_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4368_, 0, v_log_4354_);
lean_ctor_set(v_reuseFailAlloc_4368_, 1, v_trace_4357_);
lean_ctor_set(v_reuseFailAlloc_4368_, 2, v___x_4364_);
lean_ctor_set_uint8(v_reuseFailAlloc_4368_, sizeof(void*)*3, v_action_4355_);
lean_ctor_set_uint8(v_reuseFailAlloc_4368_, sizeof(void*)*3 + 1, v_wantsRebuild_4356_);
v___x_4366_ = v_reuseFailAlloc_4368_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
lean_object* v___x_4367_; 
v___x_4367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4367_, 0, v___x_4363_);
lean_ctor_set(v___x_4367_, 1, v___x_4366_);
return v___x_4367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0___boxed(lean_object* v_val_4370_, lean_object* v_a_x3f_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_){
_start:
{
lean_object* v_res_4374_; 
v_res_4374_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(v_val_4370_, v_a_x3f_4371_, v___y_4372_);
lean_dec(v_a_x3f_4371_);
lean_dec(v_val_4370_);
return v_res_4374_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0(lean_object* v_file_4375_, lean_object* v_build_4376_, lean_object* v_traceFile_4377_, lean_object* v_ext_4378_, uint8_t v_text_4379_, lean_object* v_a_4380_, lean_object* v_depTrace_4381_, lean_object* v_traceFile_4382_, uint8_t v_action_4383_, lean_object* v_a_4384_, lean_object* v_a_4385_, lean_object* v_a_4386_, lean_object* v_a_4387_, lean_object* v_a_4388_){
_start:
{
lean_object* v_a_4391_; lean_object* v_a_4392_; lean_object* v_log_4395_; uint8_t v_action_4396_; uint8_t v_wantsRebuild_4397_; lean_object* v_trace_4398_; lean_object* v_buildTime_4399_; lean_object* v_toBuildConfig_4405_; lean_object* v_log_4406_; uint8_t v_action_4407_; uint8_t v_wantsRebuild_4408_; lean_object* v_trace_4409_; lean_object* v_buildTime_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4589_; 
v_toBuildConfig_4405_ = lean_ctor_get(v_a_4387_, 0);
v_log_4406_ = lean_ctor_get(v_a_4388_, 0);
v_action_4407_ = lean_ctor_get_uint8(v_a_4388_, sizeof(void*)*3);
v_wantsRebuild_4408_ = lean_ctor_get_uint8(v_a_4388_, sizeof(void*)*3 + 1);
v_trace_4409_ = lean_ctor_get(v_a_4388_, 1);
v_buildTime_4410_ = lean_ctor_get(v_a_4388_, 2);
v_isSharedCheck_4589_ = !lean_is_exclusive(v_a_4388_);
if (v_isSharedCheck_4589_ == 0)
{
v___x_4412_ = v_a_4388_;
v_isShared_4413_ = v_isSharedCheck_4589_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_buildTime_4410_);
lean_inc(v_trace_4409_);
lean_inc(v_log_4406_);
lean_dec(v_a_4388_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4589_;
goto v_resetjp_4411_;
}
v___jp_4390_:
{
lean_object* v___x_4393_; 
v___x_4393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4393_, 0, v_a_4391_);
lean_ctor_set(v___x_4393_, 1, v_a_4392_);
return v___x_4393_;
}
v___jp_4394_:
{
lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; 
v___x_4400_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__1));
v___x_4401_ = lean_array_get_size(v_log_4395_);
v___x_4402_ = lean_array_push(v_log_4395_, v___x_4400_);
v___x_4403_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4403_, 0, v___x_4402_);
lean_ctor_set(v___x_4403_, 1, v_trace_4398_);
lean_ctor_set(v___x_4403_, 2, v_buildTime_4399_);
lean_ctor_set_uint8(v___x_4403_, sizeof(void*)*3, v_action_4396_);
lean_ctor_set_uint8(v___x_4403_, sizeof(void*)*3 + 1, v_wantsRebuild_4397_);
v___x_4404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4404_, 0, v___x_4401_);
lean_ctor_set(v___x_4404_, 1, v___x_4403_);
return v___x_4404_;
}
v_resetjp_4411_:
{
uint8_t v_noBuild_4414_; uint8_t v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; 
v_noBuild_4414_ = lean_ctor_get_uint8(v_toBuildConfig_4405_, sizeof(void*)*2 + 2);
v___x_4415_ = l_Lake_JobAction_merge(v_action_4407_, v_action_4383_);
v___x_4416_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__2));
lean_inc_ref(v_traceFile_4382_);
v___x_4417_ = l_System_FilePath_addExtension(v_traceFile_4382_, v___x_4416_);
if (v_noBuild_4414_ == 0)
{
lean_object* v___x_4418_; lean_object* v_a_4420_; lean_object* v_a_4421_; lean_object* v___x_4425_; 
v___x_4418_ = lean_io_mono_ms_now();
v___x_4425_ = l_Lake_removeFileIfExists(v_file_4375_);
if (lean_obj_tag(v___x_4425_) == 0)
{
lean_object* v___x_4427_; 
lean_dec_ref(v___x_4425_);
lean_inc_ref(v_log_4406_);
if (v_isShared_4413_ == 0)
{
v___x_4427_ = v___x_4412_;
goto v_reusejp_4426_;
}
else
{
lean_object* v_reuseFailAlloc_4564_; 
v_reuseFailAlloc_4564_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4564_, 0, v_log_4406_);
lean_ctor_set(v_reuseFailAlloc_4564_, 1, v_trace_4409_);
lean_ctor_set(v_reuseFailAlloc_4564_, 2, v_buildTime_4410_);
lean_ctor_set_uint8(v_reuseFailAlloc_4564_, sizeof(void*)*3 + 1, v_wantsRebuild_4408_);
v___x_4427_ = v_reuseFailAlloc_4564_;
goto v_reusejp_4426_;
}
v_reusejp_4426_:
{
lean_object* v___x_4428_; 
lean_ctor_set_uint8(v___x_4427_, sizeof(void*)*3, v___x_4415_);
lean_inc_ref(v_a_4387_);
lean_inc(v_a_4386_);
lean_inc(v_a_4385_);
lean_inc(v_a_4384_);
v___x_4428_ = lean_apply_7(v_build_4376_, v_a_4380_, v_a_4384_, v_a_4385_, v_a_4386_, v_a_4387_, v___x_4427_, lean_box(0));
if (lean_obj_tag(v___x_4428_) == 0)
{
lean_object* v_a_4429_; lean_object* v_log_4430_; uint8_t v_action_4431_; uint8_t v_wantsRebuild_4432_; lean_object* v_trace_4433_; lean_object* v_buildTime_4434_; lean_object* v___x_4435_; 
v_a_4429_ = lean_ctor_get(v___x_4428_, 1);
lean_inc(v_a_4429_);
lean_dec_ref(v___x_4428_);
v_log_4430_ = lean_ctor_get(v_a_4429_, 0);
v_action_4431_ = lean_ctor_get_uint8(v_a_4429_, sizeof(void*)*3);
v_wantsRebuild_4432_ = lean_ctor_get_uint8(v_a_4429_, sizeof(void*)*3 + 1);
v_trace_4433_ = lean_ctor_get(v_a_4429_, 1);
v_buildTime_4434_ = lean_ctor_get(v_a_4429_, 2);
lean_inc_ref(v_file_4375_);
v___x_4435_ = l_Lake_clearFileHash(v_file_4375_);
if (lean_obj_tag(v___x_4435_) == 0)
{
lean_object* v___x_4436_; 
lean_dec_ref(v___x_4435_);
v___x_4436_ = l_Lake_removeFileIfExists(v_traceFile_4377_);
if (lean_obj_tag(v___x_4436_) == 0)
{
lean_object* v___x_4438_; uint8_t v_isShared_4439_; uint8_t v_isSharedCheck_4528_; 
v_isSharedCheck_4528_ = !lean_is_exclusive(v___x_4436_);
if (v_isSharedCheck_4528_ == 0)
{
lean_object* v_unused_4529_; 
v_unused_4529_ = lean_ctor_get(v___x_4436_, 0);
lean_dec(v_unused_4529_);
v___x_4438_ = v___x_4436_;
v_isShared_4439_ = v_isSharedCheck_4528_;
goto v_resetjp_4437_;
}
else
{
lean_dec(v___x_4436_);
v___x_4438_ = lean_box(0);
v_isShared_4439_ = v_isSharedCheck_4528_;
goto v_resetjp_4437_;
}
v_resetjp_4437_:
{
lean_object* v___x_4440_; 
v___x_4440_ = l_Lake_computeArtifact___redArg(v_file_4375_, v_ext_4378_, v_text_4379_, v_a_4387_, v_a_4429_);
if (lean_obj_tag(v___x_4440_) == 0)
{
lean_object* v_a_4441_; lean_object* v_a_4442_; lean_object* v_descr_4443_; lean_object* v_log_4444_; uint8_t v_action_4445_; uint8_t v_wantsRebuild_4446_; lean_object* v_trace_4447_; lean_object* v_buildTime_4448_; uint64_t v_hash_4449_; lean_object* v_ext_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___y_4455_; lean_object* v___x_4518_; lean_object* v___x_4519_; uint8_t v___x_4520_; 
v_a_4441_ = lean_ctor_get(v___x_4440_, 1);
lean_inc(v_a_4441_);
v_a_4442_ = lean_ctor_get(v___x_4440_, 0);
lean_inc(v_a_4442_);
lean_dec_ref(v___x_4440_);
v_descr_4443_ = lean_ctor_get(v_a_4442_, 0);
v_log_4444_ = lean_ctor_get(v_a_4441_, 0);
v_action_4445_ = lean_ctor_get_uint8(v_a_4441_, sizeof(void*)*3);
v_wantsRebuild_4446_ = lean_ctor_get_uint8(v_a_4441_, sizeof(void*)*3 + 1);
v_trace_4447_ = lean_ctor_get(v_a_4441_, 1);
v_buildTime_4448_ = lean_ctor_get(v_a_4441_, 2);
v_hash_4449_ = lean_ctor_get_uint64(v_descr_4443_, sizeof(void*)*1);
v_ext_4450_ = lean_ctor_get(v_descr_4443_, 0);
v___x_4451_ = lean_array_get_size(v_log_4406_);
lean_dec_ref(v_log_4406_);
v___x_4452_ = lean_array_get_size(v_log_4444_);
v___x_4453_ = l_Array_extract___redArg(v_log_4444_, v___x_4451_, v___x_4452_);
v___x_4518_ = lean_string_utf8_byte_size(v_ext_4450_);
v___x_4519_ = lean_unsigned_to_nat(0u);
v___x_4520_ = lean_nat_dec_eq(v___x_4518_, v___x_4519_);
if (v___x_4520_ == 0)
{
lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; 
v___x_4521_ = l_Lake_Hash_hex(v_hash_4449_);
v___x_4522_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_4523_ = lean_string_append(v___x_4521_, v___x_4522_);
v___x_4524_ = lean_string_append(v___x_4523_, v_ext_4450_);
v___y_4455_ = v___x_4524_;
goto v___jp_4454_;
}
else
{
lean_object* v___x_4525_; 
v___x_4525_ = l_Lake_Hash_hex(v_hash_4449_);
v___y_4455_ = v___x_4525_;
goto v___jp_4454_;
}
v___jp_4454_:
{
lean_object* v___x_4457_; 
if (v_isShared_4439_ == 0)
{
lean_ctor_set_tag(v___x_4438_, 3);
lean_ctor_set(v___x_4438_, 0, v___y_4455_);
v___x_4457_ = v___x_4438_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4517_; 
v_reuseFailAlloc_4517_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4517_, 0, v___y_4455_);
v___x_4457_ = v_reuseFailAlloc_4517_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
lean_object* v___x_4458_; lean_object* v___x_4459_; 
v___x_4458_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_4381_, v___x_4457_, v___x_4453_);
v___x_4459_ = l_Lake_BuildMetadata_writeFile(v_traceFile_4382_, v___x_4458_);
if (lean_obj_tag(v___x_4459_) == 0)
{
lean_object* v___x_4461_; uint8_t v_isShared_4462_; uint8_t v_isSharedCheck_4500_; 
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4459_);
if (v_isSharedCheck_4500_ == 0)
{
lean_object* v_unused_4501_; 
v_unused_4501_ = lean_ctor_get(v___x_4459_, 0);
lean_dec(v_unused_4501_);
v___x_4461_ = v___x_4459_;
v_isShared_4462_ = v_isSharedCheck_4500_;
goto v_resetjp_4460_;
}
else
{
lean_dec(v___x_4459_);
v___x_4461_ = lean_box(0);
v_isShared_4462_ = v_isSharedCheck_4500_;
goto v_resetjp_4460_;
}
v_resetjp_4460_:
{
lean_object* v___x_4463_; 
v___x_4463_ = l_Lake_removeFileIfExists(v___x_4417_);
lean_dec_ref(v___x_4417_);
if (lean_obj_tag(v___x_4463_) == 0)
{
lean_object* v___x_4465_; uint8_t v_isShared_4466_; uint8_t v_isSharedCheck_4483_; 
v_isSharedCheck_4483_ = !lean_is_exclusive(v___x_4463_);
if (v_isSharedCheck_4483_ == 0)
{
lean_object* v_unused_4484_; 
v_unused_4484_ = lean_ctor_get(v___x_4463_, 0);
lean_dec(v_unused_4484_);
v___x_4465_ = v___x_4463_;
v_isShared_4466_ = v_isSharedCheck_4483_;
goto v_resetjp_4464_;
}
else
{
lean_dec(v___x_4463_);
v___x_4465_ = lean_box(0);
v_isShared_4466_ = v_isSharedCheck_4483_;
goto v_resetjp_4464_;
}
v_resetjp_4464_:
{
lean_object* v___x_4468_; 
lean_inc(v_a_4442_);
if (v_isShared_4466_ == 0)
{
lean_ctor_set(v___x_4465_, 0, v_a_4442_);
v___x_4468_ = v___x_4465_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v_a_4442_);
v___x_4468_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
lean_object* v___x_4470_; 
if (v_isShared_4462_ == 0)
{
lean_ctor_set_tag(v___x_4461_, 1);
lean_ctor_set(v___x_4461_, 0, v___x_4468_);
v___x_4470_ = v___x_4461_;
goto v_reusejp_4469_;
}
else
{
lean_object* v_reuseFailAlloc_4481_; 
v_reuseFailAlloc_4481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4481_, 0, v___x_4468_);
v___x_4470_ = v_reuseFailAlloc_4481_;
goto v_reusejp_4469_;
}
v_reusejp_4469_:
{
lean_object* v___x_4471_; lean_object* v_a_4472_; lean_object* v___x_4474_; uint8_t v_isShared_4475_; uint8_t v_isSharedCheck_4479_; 
v___x_4471_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(v___x_4418_, v___x_4470_, v_a_4441_);
lean_dec_ref(v___x_4470_);
lean_dec(v___x_4418_);
v_a_4472_ = lean_ctor_get(v___x_4471_, 1);
v_isSharedCheck_4479_ = !lean_is_exclusive(v___x_4471_);
if (v_isSharedCheck_4479_ == 0)
{
lean_object* v_unused_4480_; 
v_unused_4480_ = lean_ctor_get(v___x_4471_, 0);
lean_dec(v_unused_4480_);
v___x_4474_ = v___x_4471_;
v_isShared_4475_ = v_isSharedCheck_4479_;
goto v_resetjp_4473_;
}
else
{
lean_inc(v_a_4472_);
lean_dec(v___x_4471_);
v___x_4474_ = lean_box(0);
v_isShared_4475_ = v_isSharedCheck_4479_;
goto v_resetjp_4473_;
}
v_resetjp_4473_:
{
lean_object* v___x_4477_; 
if (v_isShared_4475_ == 0)
{
lean_ctor_set(v___x_4474_, 0, v_a_4442_);
v___x_4477_ = v___x_4474_;
goto v_reusejp_4476_;
}
else
{
lean_object* v_reuseFailAlloc_4478_; 
v_reuseFailAlloc_4478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4478_, 0, v_a_4442_);
lean_ctor_set(v_reuseFailAlloc_4478_, 1, v_a_4472_);
v___x_4477_ = v_reuseFailAlloc_4478_;
goto v_reusejp_4476_;
}
v_reusejp_4476_:
{
return v___x_4477_;
}
}
}
}
}
}
else
{
lean_object* v___x_4486_; uint8_t v_isShared_4487_; uint8_t v_isSharedCheck_4496_; 
lean_inc(v_buildTime_4448_);
lean_inc_ref(v_trace_4447_);
lean_inc_ref(v_log_4444_);
lean_del_object(v___x_4461_);
lean_dec(v_a_4442_);
v_isSharedCheck_4496_ = !lean_is_exclusive(v_a_4441_);
if (v_isSharedCheck_4496_ == 0)
{
lean_object* v_unused_4497_; lean_object* v_unused_4498_; lean_object* v_unused_4499_; 
v_unused_4497_ = lean_ctor_get(v_a_4441_, 2);
lean_dec(v_unused_4497_);
v_unused_4498_ = lean_ctor_get(v_a_4441_, 1);
lean_dec(v_unused_4498_);
v_unused_4499_ = lean_ctor_get(v_a_4441_, 0);
lean_dec(v_unused_4499_);
v___x_4486_ = v_a_4441_;
v_isShared_4487_ = v_isSharedCheck_4496_;
goto v_resetjp_4485_;
}
else
{
lean_dec(v_a_4441_);
v___x_4486_ = lean_box(0);
v_isShared_4487_ = v_isSharedCheck_4496_;
goto v_resetjp_4485_;
}
v_resetjp_4485_:
{
lean_object* v_a_4488_; lean_object* v___x_4489_; uint8_t v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4494_; 
v_a_4488_ = lean_ctor_get(v___x_4463_, 0);
lean_inc(v_a_4488_);
lean_dec_ref(v___x_4463_);
v___x_4489_ = lean_io_error_to_string(v_a_4488_);
v___x_4490_ = 3;
v___x_4491_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4491_, 0, v___x_4489_);
lean_ctor_set_uint8(v___x_4491_, sizeof(void*)*1, v___x_4490_);
v___x_4492_ = lean_array_push(v_log_4444_, v___x_4491_);
if (v_isShared_4487_ == 0)
{
lean_ctor_set(v___x_4486_, 0, v___x_4492_);
v___x_4494_ = v___x_4486_;
goto v_reusejp_4493_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v___x_4492_);
lean_ctor_set(v_reuseFailAlloc_4495_, 1, v_trace_4447_);
lean_ctor_set(v_reuseFailAlloc_4495_, 2, v_buildTime_4448_);
lean_ctor_set_uint8(v_reuseFailAlloc_4495_, sizeof(void*)*3, v_action_4445_);
lean_ctor_set_uint8(v_reuseFailAlloc_4495_, sizeof(void*)*3 + 1, v_wantsRebuild_4446_);
v___x_4494_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4493_;
}
v_reusejp_4493_:
{
v_a_4420_ = v___x_4452_;
v_a_4421_ = v___x_4494_;
goto v___jp_4419_;
}
}
}
}
}
else
{
lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4513_; 
lean_inc(v_buildTime_4448_);
lean_inc_ref(v_trace_4447_);
lean_inc_ref(v_log_4444_);
lean_dec(v_a_4442_);
lean_dec_ref(v___x_4417_);
v_isSharedCheck_4513_ = !lean_is_exclusive(v_a_4441_);
if (v_isSharedCheck_4513_ == 0)
{
lean_object* v_unused_4514_; lean_object* v_unused_4515_; lean_object* v_unused_4516_; 
v_unused_4514_ = lean_ctor_get(v_a_4441_, 2);
lean_dec(v_unused_4514_);
v_unused_4515_ = lean_ctor_get(v_a_4441_, 1);
lean_dec(v_unused_4515_);
v_unused_4516_ = lean_ctor_get(v_a_4441_, 0);
lean_dec(v_unused_4516_);
v___x_4503_ = v_a_4441_;
v_isShared_4504_ = v_isSharedCheck_4513_;
goto v_resetjp_4502_;
}
else
{
lean_dec(v_a_4441_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4513_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v_a_4505_; lean_object* v___x_4506_; uint8_t v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4511_; 
v_a_4505_ = lean_ctor_get(v___x_4459_, 0);
lean_inc(v_a_4505_);
lean_dec_ref(v___x_4459_);
v___x_4506_ = lean_io_error_to_string(v_a_4505_);
v___x_4507_ = 3;
v___x_4508_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4508_, 0, v___x_4506_);
lean_ctor_set_uint8(v___x_4508_, sizeof(void*)*1, v___x_4507_);
v___x_4509_ = lean_array_push(v_log_4444_, v___x_4508_);
if (v_isShared_4504_ == 0)
{
lean_ctor_set(v___x_4503_, 0, v___x_4509_);
v___x_4511_ = v___x_4503_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v___x_4509_);
lean_ctor_set(v_reuseFailAlloc_4512_, 1, v_trace_4447_);
lean_ctor_set(v_reuseFailAlloc_4512_, 2, v_buildTime_4448_);
lean_ctor_set_uint8(v_reuseFailAlloc_4512_, sizeof(void*)*3, v_action_4445_);
lean_ctor_set_uint8(v_reuseFailAlloc_4512_, sizeof(void*)*3 + 1, v_wantsRebuild_4446_);
v___x_4511_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
v_a_4420_ = v___x_4452_;
v_a_4421_ = v___x_4511_;
goto v___jp_4419_;
}
}
}
}
}
}
else
{
lean_object* v_a_4526_; lean_object* v_a_4527_; 
lean_del_object(v___x_4438_);
lean_dec_ref(v___x_4417_);
lean_dec_ref(v_log_4406_);
lean_dec_ref(v_traceFile_4382_);
v_a_4526_ = lean_ctor_get(v___x_4440_, 0);
lean_inc(v_a_4526_);
v_a_4527_ = lean_ctor_get(v___x_4440_, 1);
lean_inc(v_a_4527_);
lean_dec_ref(v___x_4440_);
v_a_4420_ = v_a_4526_;
v_a_4421_ = v_a_4527_;
goto v___jp_4419_;
}
}
}
else
{
lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4542_; 
lean_inc(v_buildTime_4434_);
lean_inc_ref(v_trace_4433_);
lean_inc_ref(v_log_4430_);
lean_dec_ref(v___x_4417_);
lean_dec_ref(v_log_4406_);
lean_dec_ref(v_traceFile_4382_);
lean_dec_ref(v_ext_4378_);
lean_dec_ref(v_file_4375_);
v_isSharedCheck_4542_ = !lean_is_exclusive(v_a_4429_);
if (v_isSharedCheck_4542_ == 0)
{
lean_object* v_unused_4543_; lean_object* v_unused_4544_; lean_object* v_unused_4545_; 
v_unused_4543_ = lean_ctor_get(v_a_4429_, 2);
lean_dec(v_unused_4543_);
v_unused_4544_ = lean_ctor_get(v_a_4429_, 1);
lean_dec(v_unused_4544_);
v_unused_4545_ = lean_ctor_get(v_a_4429_, 0);
lean_dec(v_unused_4545_);
v___x_4531_ = v_a_4429_;
v_isShared_4532_ = v_isSharedCheck_4542_;
goto v_resetjp_4530_;
}
else
{
lean_dec(v_a_4429_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4542_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v_a_4533_; lean_object* v___x_4534_; uint8_t v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4540_; 
v_a_4533_ = lean_ctor_get(v___x_4436_, 0);
lean_inc(v_a_4533_);
lean_dec_ref(v___x_4436_);
v___x_4534_ = lean_io_error_to_string(v_a_4533_);
v___x_4535_ = 3;
v___x_4536_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4536_, 0, v___x_4534_);
lean_ctor_set_uint8(v___x_4536_, sizeof(void*)*1, v___x_4535_);
v___x_4537_ = lean_array_get_size(v_log_4430_);
v___x_4538_ = lean_array_push(v_log_4430_, v___x_4536_);
if (v_isShared_4532_ == 0)
{
lean_ctor_set(v___x_4531_, 0, v___x_4538_);
v___x_4540_ = v___x_4531_;
goto v_reusejp_4539_;
}
else
{
lean_object* v_reuseFailAlloc_4541_; 
v_reuseFailAlloc_4541_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4541_, 0, v___x_4538_);
lean_ctor_set(v_reuseFailAlloc_4541_, 1, v_trace_4433_);
lean_ctor_set(v_reuseFailAlloc_4541_, 2, v_buildTime_4434_);
lean_ctor_set_uint8(v_reuseFailAlloc_4541_, sizeof(void*)*3, v_action_4431_);
lean_ctor_set_uint8(v_reuseFailAlloc_4541_, sizeof(void*)*3 + 1, v_wantsRebuild_4432_);
v___x_4540_ = v_reuseFailAlloc_4541_;
goto v_reusejp_4539_;
}
v_reusejp_4539_:
{
v_a_4420_ = v___x_4537_;
v_a_4421_ = v___x_4540_;
goto v___jp_4419_;
}
}
}
}
else
{
lean_object* v___x_4547_; uint8_t v_isShared_4548_; uint8_t v_isSharedCheck_4558_; 
lean_inc(v_buildTime_4434_);
lean_inc_ref(v_trace_4433_);
lean_inc_ref(v_log_4430_);
lean_dec_ref(v___x_4417_);
lean_dec_ref(v_log_4406_);
lean_dec_ref(v_traceFile_4382_);
lean_dec_ref(v_ext_4378_);
lean_dec_ref(v_file_4375_);
v_isSharedCheck_4558_ = !lean_is_exclusive(v_a_4429_);
if (v_isSharedCheck_4558_ == 0)
{
lean_object* v_unused_4559_; lean_object* v_unused_4560_; lean_object* v_unused_4561_; 
v_unused_4559_ = lean_ctor_get(v_a_4429_, 2);
lean_dec(v_unused_4559_);
v_unused_4560_ = lean_ctor_get(v_a_4429_, 1);
lean_dec(v_unused_4560_);
v_unused_4561_ = lean_ctor_get(v_a_4429_, 0);
lean_dec(v_unused_4561_);
v___x_4547_ = v_a_4429_;
v_isShared_4548_ = v_isSharedCheck_4558_;
goto v_resetjp_4546_;
}
else
{
lean_dec(v_a_4429_);
v___x_4547_ = lean_box(0);
v_isShared_4548_ = v_isSharedCheck_4558_;
goto v_resetjp_4546_;
}
v_resetjp_4546_:
{
lean_object* v_a_4549_; lean_object* v___x_4550_; uint8_t v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4556_; 
v_a_4549_ = lean_ctor_get(v___x_4435_, 0);
lean_inc(v_a_4549_);
lean_dec_ref(v___x_4435_);
v___x_4550_ = lean_io_error_to_string(v_a_4549_);
v___x_4551_ = 3;
v___x_4552_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4552_, 0, v___x_4550_);
lean_ctor_set_uint8(v___x_4552_, sizeof(void*)*1, v___x_4551_);
v___x_4553_ = lean_array_get_size(v_log_4430_);
v___x_4554_ = lean_array_push(v_log_4430_, v___x_4552_);
if (v_isShared_4548_ == 0)
{
lean_ctor_set(v___x_4547_, 0, v___x_4554_);
v___x_4556_ = v___x_4547_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v___x_4554_);
lean_ctor_set(v_reuseFailAlloc_4557_, 1, v_trace_4433_);
lean_ctor_set(v_reuseFailAlloc_4557_, 2, v_buildTime_4434_);
lean_ctor_set_uint8(v_reuseFailAlloc_4557_, sizeof(void*)*3, v_action_4431_);
lean_ctor_set_uint8(v_reuseFailAlloc_4557_, sizeof(void*)*3 + 1, v_wantsRebuild_4432_);
v___x_4556_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
v_a_4420_ = v___x_4553_;
v_a_4421_ = v___x_4556_;
goto v___jp_4419_;
}
}
}
}
else
{
lean_object* v_a_4562_; lean_object* v_a_4563_; 
lean_dec_ref(v___x_4417_);
lean_dec_ref(v_log_4406_);
lean_dec_ref(v_traceFile_4382_);
lean_dec_ref(v_ext_4378_);
lean_dec_ref(v_file_4375_);
v_a_4562_ = lean_ctor_get(v___x_4428_, 0);
lean_inc(v_a_4562_);
v_a_4563_ = lean_ctor_get(v___x_4428_, 1);
lean_inc(v_a_4563_);
lean_dec_ref(v___x_4428_);
v_a_4420_ = v_a_4562_;
v_a_4421_ = v_a_4563_;
goto v___jp_4419_;
}
}
}
else
{
lean_object* v_a_4565_; lean_object* v___x_4566_; uint8_t v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4572_; 
lean_dec_ref(v___x_4417_);
lean_dec_ref(v_traceFile_4382_);
lean_dec_ref(v_a_4380_);
lean_dec_ref(v_ext_4378_);
lean_dec_ref(v_build_4376_);
lean_dec_ref(v_file_4375_);
v_a_4565_ = lean_ctor_get(v___x_4425_, 0);
lean_inc(v_a_4565_);
lean_dec_ref(v___x_4425_);
v___x_4566_ = lean_io_error_to_string(v_a_4565_);
v___x_4567_ = 3;
v___x_4568_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4568_, 0, v___x_4566_);
lean_ctor_set_uint8(v___x_4568_, sizeof(void*)*1, v___x_4567_);
v___x_4569_ = lean_array_get_size(v_log_4406_);
v___x_4570_ = lean_array_push(v_log_4406_, v___x_4568_);
if (v_isShared_4413_ == 0)
{
lean_ctor_set(v___x_4412_, 0, v___x_4570_);
v___x_4572_ = v___x_4412_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v___x_4570_);
lean_ctor_set(v_reuseFailAlloc_4573_, 1, v_trace_4409_);
lean_ctor_set(v_reuseFailAlloc_4573_, 2, v_buildTime_4410_);
lean_ctor_set_uint8(v_reuseFailAlloc_4573_, sizeof(void*)*3 + 1, v_wantsRebuild_4408_);
v___x_4572_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
lean_ctor_set_uint8(v___x_4572_, sizeof(void*)*3, v___x_4415_);
v_a_4420_ = v___x_4569_;
v_a_4421_ = v___x_4572_;
goto v___jp_4419_;
}
}
v___jp_4419_:
{
lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v_a_4424_; 
v___x_4422_ = lean_box(0);
v___x_4423_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___lam__0(v___x_4418_, v___x_4422_, v_a_4421_);
lean_dec(v___x_4418_);
v_a_4424_ = lean_ctor_get(v___x_4423_, 1);
lean_inc(v_a_4424_);
lean_dec_ref(v___x_4423_);
v_a_4391_ = v_a_4420_;
v_a_4392_ = v_a_4424_;
goto v___jp_4390_;
}
}
else
{
uint8_t v___x_4574_; 
lean_dec_ref(v_a_4380_);
lean_dec_ref(v_ext_4378_);
lean_dec_ref(v_build_4376_);
lean_dec_ref(v_file_4375_);
v___x_4574_ = l_System_FilePath_pathExists(v_traceFile_4382_);
lean_dec_ref(v_traceFile_4382_);
if (v___x_4574_ == 0)
{
lean_dec_ref(v___x_4417_);
lean_del_object(v___x_4412_);
v_log_4395_ = v_log_4406_;
v_action_4396_ = v___x_4415_;
v_wantsRebuild_4397_ = v_noBuild_4414_;
v_trace_4398_ = v_trace_4409_;
v_buildTime_4399_ = v_buildTime_4410_;
goto v___jp_4394_;
}
else
{
lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; 
v___x_4575_ = lean_box(0);
v___x_4576_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___x_4577_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_4381_, v___x_4575_, v___x_4576_);
v___x_4578_ = l_Lake_BuildMetadata_writeFile(v___x_4417_, v___x_4577_);
if (lean_obj_tag(v___x_4578_) == 0)
{
lean_dec_ref(v___x_4578_);
lean_del_object(v___x_4412_);
v_log_4395_ = v_log_4406_;
v_action_4396_ = v___x_4415_;
v_wantsRebuild_4397_ = v_noBuild_4414_;
v_trace_4398_ = v_trace_4409_;
v_buildTime_4399_ = v_buildTime_4410_;
goto v___jp_4394_;
}
else
{
lean_object* v_a_4579_; lean_object* v___x_4580_; uint8_t v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4586_; 
v_a_4579_ = lean_ctor_get(v___x_4578_, 0);
lean_inc(v_a_4579_);
lean_dec_ref(v___x_4578_);
v___x_4580_ = lean_io_error_to_string(v_a_4579_);
v___x_4581_ = 3;
v___x_4582_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4582_, 0, v___x_4580_);
lean_ctor_set_uint8(v___x_4582_, sizeof(void*)*1, v___x_4581_);
v___x_4583_ = lean_array_get_size(v_log_4406_);
v___x_4584_ = lean_array_push(v_log_4406_, v___x_4582_);
if (v_isShared_4413_ == 0)
{
lean_ctor_set(v___x_4412_, 0, v___x_4584_);
v___x_4586_ = v___x_4412_;
goto v_reusejp_4585_;
}
else
{
lean_object* v_reuseFailAlloc_4588_; 
v_reuseFailAlloc_4588_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4588_, 0, v___x_4584_);
lean_ctor_set(v_reuseFailAlloc_4588_, 1, v_trace_4409_);
lean_ctor_set(v_reuseFailAlloc_4588_, 2, v_buildTime_4410_);
v___x_4586_ = v_reuseFailAlloc_4588_;
goto v_reusejp_4585_;
}
v_reusejp_4585_:
{
lean_object* v___x_4587_; 
lean_ctor_set_uint8(v___x_4586_, sizeof(void*)*3, v___x_4415_);
lean_ctor_set_uint8(v___x_4586_, sizeof(void*)*3 + 1, v_noBuild_4414_);
v___x_4587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4587_, 0, v___x_4583_);
lean_ctor_set(v___x_4587_, 1, v___x_4586_);
return v___x_4587_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0___boxed(lean_object* v_file_4590_, lean_object* v_build_4591_, lean_object* v_traceFile_4592_, lean_object* v_ext_4593_, lean_object* v_text_4594_, lean_object* v_a_4595_, lean_object* v_depTrace_4596_, lean_object* v_traceFile_4597_, lean_object* v_action_4598_, lean_object* v_a_4599_, lean_object* v_a_4600_, lean_object* v_a_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_){
_start:
{
uint8_t v_text_boxed_4605_; uint8_t v_action_boxed_4606_; lean_object* v_res_4607_; 
v_text_boxed_4605_ = lean_unbox(v_text_4594_);
v_action_boxed_4606_ = lean_unbox(v_action_4598_);
v_res_4607_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0(v_file_4590_, v_build_4591_, v_traceFile_4592_, v_ext_4593_, v_text_boxed_4605_, v_a_4595_, v_depTrace_4596_, v_traceFile_4597_, v_action_boxed_4606_, v_a_4599_, v_a_4600_, v_a_4601_, v_a_4602_, v_a_4603_);
lean_dec_ref(v_a_4602_);
lean_dec(v_a_4601_);
lean_dec(v_a_4600_);
lean_dec(v_a_4599_);
lean_dec_ref(v_depTrace_4596_);
lean_dec_ref(v_traceFile_4592_);
return v_res_4607_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(lean_object* v_file_4608_, lean_object* v_build_4609_, uint8_t v_text_4610_, lean_object* v_ext_4611_, lean_object* v_depTrace_4612_, lean_object* v_traceFile_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_, lean_object* v_a_4619_){
_start:
{
uint8_t v___x_4621_; lean_object* v___x_4622_; 
v___x_4621_ = 3;
lean_inc_ref(v_traceFile_4613_);
v___x_4622_ = l_Lake_buildAction___at___00__private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild_spec__0(v_file_4608_, v_build_4609_, v_traceFile_4613_, v_ext_4611_, v_text_4610_, v_a_4614_, v_depTrace_4612_, v_traceFile_4613_, v___x_4621_, v_a_4615_, v_a_4616_, v_a_4617_, v_a_4618_, v_a_4619_);
lean_dec_ref(v_traceFile_4613_);
return v___x_4622_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___boxed(lean_object* v_file_4623_, lean_object* v_build_4624_, lean_object* v_text_4625_, lean_object* v_ext_4626_, lean_object* v_depTrace_4627_, lean_object* v_traceFile_4628_, lean_object* v_a_4629_, lean_object* v_a_4630_, lean_object* v_a_4631_, lean_object* v_a_4632_, lean_object* v_a_4633_, lean_object* v_a_4634_, lean_object* v_a_4635_){
_start:
{
uint8_t v_text_boxed_4636_; lean_object* v_res_4637_; 
v_text_boxed_4636_ = lean_unbox(v_text_4625_);
v_res_4637_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_4623_, v_build_4624_, v_text_boxed_4636_, v_ext_4626_, v_depTrace_4627_, v_traceFile_4628_, v_a_4629_, v_a_4630_, v_a_4631_, v_a_4632_, v_a_4633_, v_a_4634_);
lean_dec_ref(v_a_4633_);
lean_dec(v_a_4632_);
lean_dec(v_a_4631_);
lean_dec(v_a_4630_);
lean_dec_ref(v_depTrace_4627_);
return v_res_4637_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(lean_object* v_art_4639_, lean_object* v_traceFile_4640_, lean_object* v_a_4641_){
_start:
{
lean_object* v_log_4643_; uint8_t v_action_4644_; uint8_t v_wantsRebuild_4645_; lean_object* v_trace_4646_; lean_object* v_buildTime_4647_; lean_object* v___x_4648_; 
v_log_4643_ = lean_ctor_get(v_a_4641_, 0);
v_action_4644_ = lean_ctor_get_uint8(v_a_4641_, sizeof(void*)*3);
v_wantsRebuild_4645_ = lean_ctor_get_uint8(v_a_4641_, sizeof(void*)*3 + 1);
v_trace_4646_ = lean_ctor_get(v_a_4641_, 1);
v_buildTime_4647_ = lean_ctor_get(v_a_4641_, 2);
v___x_4648_ = lean_io_metadata(v_traceFile_4640_);
if (lean_obj_tag(v___x_4648_) == 0)
{
lean_object* v_a_4649_; lean_object* v_modified_4650_; lean_object* v_descr_4651_; lean_object* v_path_4652_; lean_object* v_name_4653_; lean_object* v___x_4655_; uint8_t v_isShared_4656_; uint8_t v_isSharedCheck_4661_; 
v_a_4649_ = lean_ctor_get(v___x_4648_, 0);
lean_inc(v_a_4649_);
lean_dec_ref(v___x_4648_);
v_modified_4650_ = lean_ctor_get(v_a_4649_, 1);
lean_inc_ref(v_modified_4650_);
lean_dec(v_a_4649_);
v_descr_4651_ = lean_ctor_get(v_art_4639_, 0);
v_path_4652_ = lean_ctor_get(v_art_4639_, 1);
v_name_4653_ = lean_ctor_get(v_art_4639_, 2);
v_isSharedCheck_4661_ = !lean_is_exclusive(v_art_4639_);
if (v_isSharedCheck_4661_ == 0)
{
lean_object* v_unused_4662_; 
v_unused_4662_ = lean_ctor_get(v_art_4639_, 3);
lean_dec(v_unused_4662_);
v___x_4655_ = v_art_4639_;
v_isShared_4656_ = v_isSharedCheck_4661_;
goto v_resetjp_4654_;
}
else
{
lean_inc(v_name_4653_);
lean_inc(v_path_4652_);
lean_inc(v_descr_4651_);
lean_dec(v_art_4639_);
v___x_4655_ = lean_box(0);
v_isShared_4656_ = v_isSharedCheck_4661_;
goto v_resetjp_4654_;
}
v_resetjp_4654_:
{
lean_object* v___x_4658_; 
if (v_isShared_4656_ == 0)
{
lean_ctor_set(v___x_4655_, 3, v_modified_4650_);
v___x_4658_ = v___x_4655_;
goto v_reusejp_4657_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v_descr_4651_);
lean_ctor_set(v_reuseFailAlloc_4660_, 1, v_path_4652_);
lean_ctor_set(v_reuseFailAlloc_4660_, 2, v_name_4653_);
lean_ctor_set(v_reuseFailAlloc_4660_, 3, v_modified_4650_);
v___x_4658_ = v_reuseFailAlloc_4660_;
goto v_reusejp_4657_;
}
v_reusejp_4657_:
{
lean_object* v___x_4659_; 
v___x_4659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4659_, 0, v___x_4658_);
lean_ctor_set(v___x_4659_, 1, v_a_4641_);
return v___x_4659_;
}
}
}
else
{
lean_object* v_a_4663_; 
v_a_4663_ = lean_ctor_get(v___x_4648_, 0);
lean_inc(v_a_4663_);
lean_dec_ref(v___x_4648_);
if (lean_obj_tag(v_a_4663_) == 11)
{
lean_object* v___x_4664_; 
lean_dec_ref(v_a_4663_);
v___x_4664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4664_, 0, v_art_4639_);
lean_ctor_set(v___x_4664_, 1, v_a_4641_);
return v___x_4664_;
}
else
{
lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4679_; 
lean_inc(v_buildTime_4647_);
lean_inc_ref(v_trace_4646_);
lean_inc_ref(v_log_4643_);
lean_dec_ref(v_art_4639_);
v_isSharedCheck_4679_ = !lean_is_exclusive(v_a_4641_);
if (v_isSharedCheck_4679_ == 0)
{
lean_object* v_unused_4680_; lean_object* v_unused_4681_; lean_object* v_unused_4682_; 
v_unused_4680_ = lean_ctor_get(v_a_4641_, 2);
lean_dec(v_unused_4680_);
v_unused_4681_ = lean_ctor_get(v_a_4641_, 1);
lean_dec(v_unused_4681_);
v_unused_4682_ = lean_ctor_get(v_a_4641_, 0);
lean_dec(v_unused_4682_);
v___x_4666_ = v_a_4641_;
v_isShared_4667_ = v_isSharedCheck_4679_;
goto v_resetjp_4665_;
}
else
{
lean_dec(v_a_4641_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4679_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; uint8_t v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4676_; 
v___x_4668_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0));
v___x_4669_ = lean_io_error_to_string(v_a_4663_);
v___x_4670_ = lean_string_append(v___x_4668_, v___x_4669_);
lean_dec_ref(v___x_4669_);
v___x_4671_ = 3;
v___x_4672_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4672_, 0, v___x_4670_);
lean_ctor_set_uint8(v___x_4672_, sizeof(void*)*1, v___x_4671_);
v___x_4673_ = lean_array_get_size(v_log_4643_);
v___x_4674_ = lean_array_push(v_log_4643_, v___x_4672_);
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 0, v___x_4674_);
v___x_4676_ = v___x_4666_;
goto v_reusejp_4675_;
}
else
{
lean_object* v_reuseFailAlloc_4678_; 
v_reuseFailAlloc_4678_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4678_, 0, v___x_4674_);
lean_ctor_set(v_reuseFailAlloc_4678_, 1, v_trace_4646_);
lean_ctor_set(v_reuseFailAlloc_4678_, 2, v_buildTime_4647_);
lean_ctor_set_uint8(v_reuseFailAlloc_4678_, sizeof(void*)*3, v_action_4644_);
lean_ctor_set_uint8(v_reuseFailAlloc_4678_, sizeof(void*)*3 + 1, v_wantsRebuild_4645_);
v___x_4676_ = v_reuseFailAlloc_4678_;
goto v_reusejp_4675_;
}
v_reusejp_4675_:
{
lean_object* v___x_4677_; 
v___x_4677_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4677_, 0, v___x_4673_);
lean_ctor_set(v___x_4677_, 1, v___x_4676_);
return v___x_4677_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___boxed(lean_object* v_art_4683_, lean_object* v_traceFile_4684_, lean_object* v_a_4685_, lean_object* v_a_4686_){
_start:
{
lean_object* v_res_4687_; 
v_res_4687_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_4683_, v_traceFile_4684_, v_a_4685_);
lean_dec_ref(v_traceFile_4684_);
return v_res_4687_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime(lean_object* v_art_4688_, lean_object* v_traceFile_4689_, lean_object* v_a_4690_, lean_object* v_a_4691_, lean_object* v_a_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_){
_start:
{
lean_object* v___x_4697_; 
v___x_4697_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_4688_, v_traceFile_4689_, v_a_4695_);
return v___x_4697_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___boxed(lean_object* v_art_4698_, lean_object* v_traceFile_4699_, lean_object* v_a_4700_, lean_object* v_a_4701_, lean_object* v_a_4702_, lean_object* v_a_4703_, lean_object* v_a_4704_, lean_object* v_a_4705_, lean_object* v_a_4706_){
_start:
{
lean_object* v_res_4707_; 
v_res_4707_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime(v_art_4698_, v_traceFile_4699_, v_a_4700_, v_a_4701_, v_a_4702_, v_a_4703_, v_a_4704_, v_a_4705_);
lean_dec_ref(v_a_4704_);
lean_dec(v_a_4703_);
lean_dec(v_a_4702_);
lean_dec(v_a_4701_);
lean_dec_ref(v_a_4700_);
lean_dec_ref(v_traceFile_4699_);
return v_res_4707_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(lean_object* v_a_4708_, lean_object* v_____r_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_){
_start:
{
lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4717_, 0, v_a_4708_);
v___x_4718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4718_, 0, v___x_4717_);
v___x_4719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4719_, 0, v___x_4718_);
lean_ctor_set(v___x_4719_, 1, v___y_4715_);
return v___x_4719_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0___boxed(lean_object* v_a_4720_, lean_object* v_____r_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_){
_start:
{
lean_object* v_res_4729_; 
v_res_4729_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4720_, v_____r_4721_, v___y_4722_, v___y_4723_, v___y_4724_, v___y_4725_, v___y_4726_, v___y_4727_);
lean_dec_ref(v___y_4726_);
lean_dec(v___y_4725_);
lean_dec(v___y_4724_);
lean_dec(v___y_4723_);
lean_dec_ref(v___y_4722_);
return v_res_4729_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(uint8_t v_exe_4730_, lean_object* v___y_4731_, uint64_t v_inputHash_4732_, lean_object* v_savedTrace_4733_, lean_object* v_pkg_4734_, lean_object* v_a_4735_, lean_object* v_a_4736_, lean_object* v_a_4737_, lean_object* v_a_4738_, lean_object* v_a_4739_){
_start:
{
lean_object* v___y_4742_; lean_object* v_a_4746_; lean_object* v_a_4747_; lean_object* v___y_4762_; 
if (lean_obj_tag(v_savedTrace_4733_) == 2)
{
lean_object* v_data_4777_; uint64_t v_depHash_4778_; lean_object* v_outputs_x3f_4779_; uint8_t v___x_4780_; 
v_data_4777_ = lean_ctor_get(v_savedTrace_4733_, 0);
lean_inc_ref(v_data_4777_);
lean_dec_ref(v_savedTrace_4733_);
v_depHash_4778_ = lean_ctor_get_uint64(v_data_4777_, sizeof(void*)*3);
v_outputs_x3f_4779_ = lean_ctor_get(v_data_4777_, 1);
lean_inc(v_outputs_x3f_4779_);
lean_dec_ref(v_data_4777_);
v___x_4780_ = lean_uint64_dec_eq(v_depHash_4778_, v_inputHash_4732_);
if (v___x_4780_ == 0)
{
lean_dec(v_outputs_x3f_4779_);
lean_dec_ref(v_pkg_4734_);
lean_dec_ref(v___y_4731_);
v___y_4742_ = v_a_4739_;
goto v___jp_4741_;
}
else
{
if (lean_obj_tag(v_outputs_x3f_4779_) == 1)
{
lean_object* v_val_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; 
v_val_4781_ = lean_ctor_get(v_outputs_x3f_4779_, 0);
lean_inc(v_val_4781_);
lean_dec_ref(v_outputs_x3f_4779_);
v___x_4782_ = lean_box(0);
lean_inc(v_val_4781_);
v___x_4783_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4783_, 0, v_val_4781_);
lean_ctor_set(v___x_4783_, 1, v___x_4782_);
lean_ctor_set(v___x_4783_, 2, v___x_4782_);
lean_inc_ref(v___y_4731_);
v___x_4784_ = l_Lake_resolveArtifactOutput(v___x_4783_, v_exe_4730_, v___y_4731_, v_a_4735_, v_a_4736_, v_a_4737_, v_a_4738_, v_a_4739_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v_config_4785_; lean_object* v_a_4786_; lean_object* v_a_4787_; lean_object* v_enableArtifactCache_x3f_4788_; lean_object* v_a_4790_; uint8_t v_a_4794_; lean_object* v_a_4795_; 
v_config_4785_ = lean_ctor_get(v_pkg_4734_, 6);
v_a_4786_ = lean_ctor_get(v___x_4784_, 0);
lean_inc(v_a_4786_);
v_a_4787_ = lean_ctor_get(v___x_4784_, 1);
lean_inc(v_a_4787_);
lean_dec_ref(v___x_4784_);
v_enableArtifactCache_x3f_4788_ = lean_ctor_get(v_config_4785_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_4788_) == 0)
{
lean_object* v_toContext_4826_; lean_object* v_lakeEnv_4827_; lean_object* v_enableArtifactCache_x3f_4828_; 
v_toContext_4826_ = lean_ctor_get(v_a_4738_, 1);
v_lakeEnv_4827_ = lean_ctor_get(v_toContext_4826_, 1);
v_enableArtifactCache_x3f_4828_ = lean_ctor_get(v_lakeEnv_4827_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_4828_) == 0)
{
lean_object* v_root_4829_; lean_object* v_config_4830_; lean_object* v_enableArtifactCache_x3f_4831_; 
v_root_4829_ = lean_ctor_get(v_toContext_4826_, 0);
v_config_4830_ = lean_ctor_get(v_root_4829_, 6);
v_enableArtifactCache_x3f_4831_ = lean_ctor_get(v_config_4830_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_4831_) == 0)
{
lean_dec(v_val_4781_);
lean_dec_ref(v_pkg_4734_);
v_a_4790_ = v_a_4787_;
goto v___jp_4789_;
}
else
{
lean_object* v_val_4832_; uint8_t v___x_4833_; 
v_val_4832_ = lean_ctor_get(v_enableArtifactCache_x3f_4831_, 0);
v___x_4833_ = lean_unbox(v_val_4832_);
v_a_4794_ = v___x_4833_;
v_a_4795_ = v_a_4787_;
goto v___jp_4793_;
}
}
else
{
lean_object* v_val_4834_; uint8_t v___x_4835_; 
v_val_4834_ = lean_ctor_get(v_enableArtifactCache_x3f_4828_, 0);
v___x_4835_ = lean_unbox(v_val_4834_);
v_a_4794_ = v___x_4835_;
v_a_4795_ = v_a_4787_;
goto v___jp_4793_;
}
}
else
{
lean_object* v_val_4836_; uint8_t v___x_4837_; 
v_val_4836_ = lean_ctor_get(v_enableArtifactCache_x3f_4788_, 0);
v___x_4837_ = lean_unbox(v_val_4836_);
v_a_4794_ = v___x_4837_;
v_a_4795_ = v_a_4787_;
goto v___jp_4793_;
}
v___jp_4789_:
{
lean_object* v___x_4791_; lean_object* v___x_4792_; 
v___x_4791_ = lean_box(0);
v___x_4792_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4786_, v___x_4791_, v___y_4731_, v_a_4735_, v_a_4736_, v_a_4737_, v_a_4738_, v_a_4790_);
lean_dec_ref(v___y_4731_);
v___y_4762_ = v___x_4792_;
goto v___jp_4761_;
}
v___jp_4793_:
{
if (v_a_4794_ == 0)
{
lean_dec(v_val_4781_);
lean_dec_ref(v_pkg_4734_);
v_a_4790_ = v_a_4795_;
goto v___jp_4789_;
}
else
{
lean_object* v_toContext_4796_; lean_object* v_log_4797_; uint8_t v_action_4798_; uint8_t v_wantsRebuild_4799_; lean_object* v_trace_4800_; lean_object* v_buildTime_4801_; lean_object* v_lakeCache_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; 
v_toContext_4796_ = lean_ctor_get(v_a_4738_, 1);
v_log_4797_ = lean_ctor_get(v_a_4795_, 0);
v_action_4798_ = lean_ctor_get_uint8(v_a_4795_, sizeof(void*)*3);
v_wantsRebuild_4799_ = lean_ctor_get_uint8(v_a_4795_, sizeof(void*)*3 + 1);
v_trace_4800_ = lean_ctor_get(v_a_4795_, 1);
v_buildTime_4801_ = lean_ctor_get(v_a_4795_, 2);
v_lakeCache_4802_ = lean_ctor_get(v_toContext_4796_, 3);
v___x_4803_ = l_Lake_Package_cacheScope(v_pkg_4734_);
lean_inc_ref(v_lakeCache_4802_);
v___x_4804_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_4802_, v___x_4803_, v_inputHash_4732_, v_val_4781_, v___x_4782_, v___x_4782_);
if (lean_obj_tag(v___x_4804_) == 0)
{
lean_object* v___x_4805_; lean_object* v___x_4806_; 
lean_dec_ref(v___x_4804_);
v___x_4805_ = lean_box(0);
v___x_4806_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4786_, v___x_4805_, v___y_4731_, v_a_4735_, v_a_4736_, v_a_4737_, v_a_4738_, v_a_4795_);
lean_dec_ref(v___y_4731_);
v___y_4762_ = v___x_4806_;
goto v___jp_4761_;
}
else
{
lean_object* v___x_4808_; uint8_t v_isShared_4809_; uint8_t v_isSharedCheck_4822_; 
lean_inc(v_buildTime_4801_);
lean_inc_ref(v_trace_4800_);
lean_inc_ref(v_log_4797_);
v_isSharedCheck_4822_ = !lean_is_exclusive(v_a_4795_);
if (v_isSharedCheck_4822_ == 0)
{
lean_object* v_unused_4823_; lean_object* v_unused_4824_; lean_object* v_unused_4825_; 
v_unused_4823_ = lean_ctor_get(v_a_4795_, 2);
lean_dec(v_unused_4823_);
v_unused_4824_ = lean_ctor_get(v_a_4795_, 1);
lean_dec(v_unused_4824_);
v_unused_4825_ = lean_ctor_get(v_a_4795_, 0);
lean_dec(v_unused_4825_);
v___x_4808_ = v_a_4795_;
v_isShared_4809_ = v_isSharedCheck_4822_;
goto v_resetjp_4807_;
}
else
{
lean_dec(v_a_4795_);
v___x_4808_ = lean_box(0);
v_isShared_4809_ = v_isSharedCheck_4822_;
goto v_resetjp_4807_;
}
v_resetjp_4807_:
{
lean_object* v_a_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; uint8_t v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4819_; 
v_a_4810_ = lean_ctor_get(v___x_4804_, 0);
lean_inc(v_a_4810_);
lean_dec_ref(v___x_4804_);
v___x_4811_ = ((lean_object*)(l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0));
v___x_4812_ = lean_io_error_to_string(v_a_4810_);
v___x_4813_ = lean_string_append(v___x_4811_, v___x_4812_);
lean_dec_ref(v___x_4812_);
v___x_4814_ = 2;
v___x_4815_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4815_, 0, v___x_4813_);
lean_ctor_set_uint8(v___x_4815_, sizeof(void*)*1, v___x_4814_);
v___x_4816_ = lean_box(0);
v___x_4817_ = lean_array_push(v_log_4797_, v___x_4815_);
if (v_isShared_4809_ == 0)
{
lean_ctor_set(v___x_4808_, 0, v___x_4817_);
v___x_4819_ = v___x_4808_;
goto v_reusejp_4818_;
}
else
{
lean_object* v_reuseFailAlloc_4821_; 
v_reuseFailAlloc_4821_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4821_, 0, v___x_4817_);
lean_ctor_set(v_reuseFailAlloc_4821_, 1, v_trace_4800_);
lean_ctor_set(v_reuseFailAlloc_4821_, 2, v_buildTime_4801_);
lean_ctor_set_uint8(v_reuseFailAlloc_4821_, sizeof(void*)*3, v_action_4798_);
lean_ctor_set_uint8(v_reuseFailAlloc_4821_, sizeof(void*)*3 + 1, v_wantsRebuild_4799_);
v___x_4819_ = v_reuseFailAlloc_4821_;
goto v_reusejp_4818_;
}
v_reusejp_4818_:
{
lean_object* v___x_4820_; 
v___x_4820_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___lam__0(v_a_4786_, v___x_4816_, v___y_4731_, v_a_4735_, v_a_4736_, v_a_4737_, v_a_4738_, v___x_4819_);
lean_dec_ref(v___y_4731_);
v___y_4762_ = v___x_4820_;
goto v___jp_4761_;
}
}
}
}
}
}
else
{
lean_object* v_a_4838_; lean_object* v_a_4839_; 
lean_dec(v_val_4781_);
lean_dec_ref(v_pkg_4734_);
lean_dec_ref(v___y_4731_);
v_a_4838_ = lean_ctor_get(v___x_4784_, 0);
lean_inc(v_a_4838_);
v_a_4839_ = lean_ctor_get(v___x_4784_, 1);
lean_inc(v_a_4839_);
lean_dec_ref(v___x_4784_);
v_a_4746_ = v_a_4838_;
v_a_4747_ = v_a_4839_;
goto v___jp_4745_;
}
}
else
{
lean_dec(v_outputs_x3f_4779_);
lean_dec_ref(v_pkg_4734_);
lean_dec_ref(v___y_4731_);
v___y_4742_ = v_a_4739_;
goto v___jp_4741_;
}
}
}
else
{
lean_dec_ref(v_pkg_4734_);
lean_dec(v_savedTrace_4733_);
lean_dec_ref(v___y_4731_);
v___y_4742_ = v_a_4739_;
goto v___jp_4741_;
}
v___jp_4741_:
{
lean_object* v___x_4743_; lean_object* v___x_4744_; 
v___x_4743_ = lean_box(0);
v___x_4744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4744_, 0, v___x_4743_);
lean_ctor_set(v___x_4744_, 1, v___y_4742_);
return v___x_4744_;
}
v___jp_4745_:
{
lean_object* v_log_4748_; uint8_t v_action_4749_; uint8_t v_wantsRebuild_4750_; lean_object* v_trace_4751_; lean_object* v_buildTime_4752_; lean_object* v___x_4754_; uint8_t v_isShared_4755_; uint8_t v_isSharedCheck_4760_; 
v_log_4748_ = lean_ctor_get(v_a_4747_, 0);
v_action_4749_ = lean_ctor_get_uint8(v_a_4747_, sizeof(void*)*3);
v_wantsRebuild_4750_ = lean_ctor_get_uint8(v_a_4747_, sizeof(void*)*3 + 1);
v_trace_4751_ = lean_ctor_get(v_a_4747_, 1);
v_buildTime_4752_ = lean_ctor_get(v_a_4747_, 2);
v_isSharedCheck_4760_ = !lean_is_exclusive(v_a_4747_);
if (v_isSharedCheck_4760_ == 0)
{
v___x_4754_ = v_a_4747_;
v_isShared_4755_ = v_isSharedCheck_4760_;
goto v_resetjp_4753_;
}
else
{
lean_inc(v_buildTime_4752_);
lean_inc(v_trace_4751_);
lean_inc(v_log_4748_);
lean_dec(v_a_4747_);
v___x_4754_ = lean_box(0);
v_isShared_4755_ = v_isSharedCheck_4760_;
goto v_resetjp_4753_;
}
v_resetjp_4753_:
{
lean_object* v___x_4756_; lean_object* v___x_4758_; 
v___x_4756_ = l_Array_shrink___redArg(v_log_4748_, v_a_4746_);
lean_dec(v_a_4746_);
if (v_isShared_4755_ == 0)
{
lean_ctor_set(v___x_4754_, 0, v___x_4756_);
v___x_4758_ = v___x_4754_;
goto v_reusejp_4757_;
}
else
{
lean_object* v_reuseFailAlloc_4759_; 
v_reuseFailAlloc_4759_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4759_, 0, v___x_4756_);
lean_ctor_set(v_reuseFailAlloc_4759_, 1, v_trace_4751_);
lean_ctor_set(v_reuseFailAlloc_4759_, 2, v_buildTime_4752_);
lean_ctor_set_uint8(v_reuseFailAlloc_4759_, sizeof(void*)*3, v_action_4749_);
lean_ctor_set_uint8(v_reuseFailAlloc_4759_, sizeof(void*)*3 + 1, v_wantsRebuild_4750_);
v___x_4758_ = v_reuseFailAlloc_4759_;
goto v_reusejp_4757_;
}
v_reusejp_4757_:
{
v___y_4742_ = v___x_4758_;
goto v___jp_4741_;
}
}
}
v___jp_4761_:
{
if (lean_obj_tag(v___y_4762_) == 0)
{
lean_object* v_a_4763_; 
v_a_4763_ = lean_ctor_get(v___y_4762_, 0);
if (lean_obj_tag(v_a_4763_) == 0)
{
lean_object* v_a_4764_; lean_object* v___x_4766_; uint8_t v_isShared_4767_; uint8_t v_isSharedCheck_4772_; 
lean_inc_ref(v_a_4763_);
v_a_4764_ = lean_ctor_get(v___y_4762_, 1);
v_isSharedCheck_4772_ = !lean_is_exclusive(v___y_4762_);
if (v_isSharedCheck_4772_ == 0)
{
lean_object* v_unused_4773_; 
v_unused_4773_ = lean_ctor_get(v___y_4762_, 0);
lean_dec(v_unused_4773_);
v___x_4766_ = v___y_4762_;
v_isShared_4767_ = v_isSharedCheck_4772_;
goto v_resetjp_4765_;
}
else
{
lean_inc(v_a_4764_);
lean_dec(v___y_4762_);
v___x_4766_ = lean_box(0);
v_isShared_4767_ = v_isSharedCheck_4772_;
goto v_resetjp_4765_;
}
v_resetjp_4765_:
{
lean_object* v_a_4768_; lean_object* v___x_4770_; 
v_a_4768_ = lean_ctor_get(v_a_4763_, 0);
lean_inc(v_a_4768_);
lean_dec_ref(v_a_4763_);
if (v_isShared_4767_ == 0)
{
lean_ctor_set(v___x_4766_, 0, v_a_4768_);
v___x_4770_ = v___x_4766_;
goto v_reusejp_4769_;
}
else
{
lean_object* v_reuseFailAlloc_4771_; 
v_reuseFailAlloc_4771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4771_, 0, v_a_4768_);
lean_ctor_set(v_reuseFailAlloc_4771_, 1, v_a_4764_);
v___x_4770_ = v_reuseFailAlloc_4771_;
goto v_reusejp_4769_;
}
v_reusejp_4769_:
{
return v___x_4770_;
}
}
}
else
{
lean_object* v_a_4774_; 
v_a_4774_ = lean_ctor_get(v___y_4762_, 1);
lean_inc(v_a_4774_);
lean_dec_ref(v___y_4762_);
v___y_4742_ = v_a_4774_;
goto v___jp_4741_;
}
}
else
{
lean_object* v_a_4775_; lean_object* v_a_4776_; 
v_a_4775_ = lean_ctor_get(v___y_4762_, 0);
lean_inc(v_a_4775_);
v_a_4776_ = lean_ctor_get(v___y_4762_, 1);
lean_inc(v_a_4776_);
lean_dec_ref(v___y_4762_);
v_a_4746_ = v_a_4775_;
v_a_4747_ = v_a_4776_;
goto v___jp_4745_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___boxed(lean_object* v_exe_4840_, lean_object* v___y_4841_, lean_object* v_inputHash_4842_, lean_object* v_savedTrace_4843_, lean_object* v_pkg_4844_, lean_object* v_a_4845_, lean_object* v_a_4846_, lean_object* v_a_4847_, lean_object* v_a_4848_, lean_object* v_a_4849_, lean_object* v_a_4850_){
_start:
{
uint8_t v_exe_boxed_4851_; uint64_t v_inputHash_boxed_4852_; lean_object* v_res_4853_; 
v_exe_boxed_4851_ = lean_unbox(v_exe_4840_);
v_inputHash_boxed_4852_ = lean_unbox_uint64(v_inputHash_4842_);
lean_dec_ref(v_inputHash_4842_);
v_res_4853_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(v_exe_boxed_4851_, v___y_4841_, v_inputHash_boxed_4852_, v_savedTrace_4843_, v_pkg_4844_, v_a_4845_, v_a_4846_, v_a_4847_, v_a_4848_, v_a_4849_);
lean_dec_ref(v_a_4848_);
lean_dec(v_a_4847_);
lean_dec(v_a_4846_);
lean_dec(v_a_4845_);
return v_res_4853_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(lean_object* v_as_4854_, size_t v_i_4855_, size_t v_stop_4856_, lean_object* v_b_4857_){
_start:
{
uint8_t v___x_4858_; 
v___x_4858_ = lean_usize_dec_eq(v_i_4855_, v_stop_4856_);
if (v___x_4858_ == 0)
{
lean_object* v___x_4859_; lean_object* v_message_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; size_t v___x_4864_; size_t v___x_4865_; 
v___x_4859_ = lean_array_uget_borrowed(v_as_4854_, v_i_4855_);
v_message_4860_ = lean_ctor_get(v___x_4859_, 0);
v___x_4861_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0));
v___x_4862_ = lean_string_append(v_b_4857_, v___x_4861_);
v___x_4863_ = lean_string_append(v___x_4862_, v_message_4860_);
v___x_4864_ = ((size_t)1ULL);
v___x_4865_ = lean_usize_add(v_i_4855_, v___x_4864_);
v_i_4855_ = v___x_4865_;
v_b_4857_ = v___x_4863_;
goto _start;
}
else
{
return v_b_4857_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0___boxed(lean_object* v_as_4867_, lean_object* v_i_4868_, lean_object* v_stop_4869_, lean_object* v_b_4870_){
_start:
{
size_t v_i_boxed_4871_; size_t v_stop_boxed_4872_; lean_object* v_res_4873_; 
v_i_boxed_4871_ = lean_unbox_usize(v_i_4868_);
lean_dec(v_i_4868_);
v_stop_boxed_4872_ = lean_unbox_usize(v_stop_4869_);
lean_dec(v_stop_4869_);
v_res_4873_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(v_as_4867_, v_i_boxed_4871_, v_stop_boxed_4872_, v_b_4870_);
lean_dec_ref(v_as_4867_);
return v_res_4873_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(uint8_t v_exe_4874_, lean_object* v___y_4875_, uint64_t v_inputHash_4876_, lean_object* v_pkg_4877_, lean_object* v_a_4878_, lean_object* v_a_4879_, lean_object* v_a_4880_, lean_object* v_a_4881_, lean_object* v_a_4882_){
_start:
{
lean_object* v_toContext_4884_; lean_object* v_log_4885_; uint8_t v_action_4886_; uint8_t v_wantsRebuild_4887_; lean_object* v_trace_4888_; lean_object* v_buildTime_4889_; lean_object* v___x_4891_; uint8_t v_isShared_4892_; uint8_t v_isSharedCheck_4982_; 
v_toContext_4884_ = lean_ctor_get(v_a_4881_, 1);
v_log_4885_ = lean_ctor_get(v_a_4882_, 0);
v_action_4886_ = lean_ctor_get_uint8(v_a_4882_, sizeof(void*)*3);
v_wantsRebuild_4887_ = lean_ctor_get_uint8(v_a_4882_, sizeof(void*)*3 + 1);
v_trace_4888_ = lean_ctor_get(v_a_4882_, 1);
v_buildTime_4889_ = lean_ctor_get(v_a_4882_, 2);
v_isSharedCheck_4982_ = !lean_is_exclusive(v_a_4882_);
if (v_isSharedCheck_4982_ == 0)
{
v___x_4891_ = v_a_4882_;
v_isShared_4892_ = v_isSharedCheck_4982_;
goto v_resetjp_4890_;
}
else
{
lean_inc(v_buildTime_4889_);
lean_inc(v_trace_4888_);
lean_inc(v_log_4885_);
lean_dec(v_a_4882_);
v___x_4891_ = lean_box(0);
v_isShared_4892_ = v_isSharedCheck_4982_;
goto v_resetjp_4890_;
}
v_resetjp_4890_:
{
lean_object* v_lakeCache_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; 
v_lakeCache_4893_ = lean_ctor_get(v_toContext_4884_, 3);
v___x_4894_ = l_Lake_Package_cacheScope(v_pkg_4877_);
lean_inc_ref(v_lakeCache_4893_);
v___x_4895_ = l_Lake_Cache_readOutputs_x3f(v_lakeCache_4893_, v___x_4894_, v_inputHash_4876_, v_log_4885_);
if (lean_obj_tag(v___x_4895_) == 0)
{
lean_object* v_a_4896_; lean_object* v_a_4897_; lean_object* v___x_4899_; uint8_t v_isShared_4900_; uint8_t v_isSharedCheck_4969_; 
v_a_4896_ = lean_ctor_get(v___x_4895_, 0);
v_a_4897_ = lean_ctor_get(v___x_4895_, 1);
v_isSharedCheck_4969_ = !lean_is_exclusive(v___x_4895_);
if (v_isSharedCheck_4969_ == 0)
{
v___x_4899_ = v___x_4895_;
v_isShared_4900_ = v_isSharedCheck_4969_;
goto v_resetjp_4898_;
}
else
{
lean_inc(v_a_4897_);
lean_inc(v_a_4896_);
lean_dec(v___x_4895_);
v___x_4899_ = lean_box(0);
v_isShared_4900_ = v_isSharedCheck_4969_;
goto v_resetjp_4898_;
}
v_resetjp_4898_:
{
lean_object* v___x_4902_; 
if (v_isShared_4892_ == 0)
{
lean_ctor_set(v___x_4891_, 0, v_a_4897_);
v___x_4902_ = v___x_4891_;
goto v_reusejp_4901_;
}
else
{
lean_object* v_reuseFailAlloc_4968_; 
v_reuseFailAlloc_4968_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4968_, 0, v_a_4897_);
lean_ctor_set(v_reuseFailAlloc_4968_, 1, v_trace_4888_);
lean_ctor_set(v_reuseFailAlloc_4968_, 2, v_buildTime_4889_);
lean_ctor_set_uint8(v_reuseFailAlloc_4968_, sizeof(void*)*3, v_action_4886_);
lean_ctor_set_uint8(v_reuseFailAlloc_4968_, sizeof(void*)*3 + 1, v_wantsRebuild_4887_);
v___x_4902_ = v_reuseFailAlloc_4968_;
goto v_reusejp_4901_;
}
v_reusejp_4901_:
{
if (lean_obj_tag(v_a_4896_) == 1)
{
lean_object* v_val_4903_; lean_object* v___x_4905_; uint8_t v_isShared_4906_; uint8_t v_isSharedCheck_4963_; 
v_val_4903_ = lean_ctor_get(v_a_4896_, 0);
v_isSharedCheck_4963_ = !lean_is_exclusive(v_a_4896_);
if (v_isSharedCheck_4963_ == 0)
{
v___x_4905_ = v_a_4896_;
v_isShared_4906_ = v_isSharedCheck_4963_;
goto v_resetjp_4904_;
}
else
{
lean_inc(v_val_4903_);
lean_dec(v_a_4896_);
v___x_4905_ = lean_box(0);
v_isShared_4906_ = v_isSharedCheck_4963_;
goto v_resetjp_4904_;
}
v_resetjp_4904_:
{
lean_object* v___x_4907_; lean_object* v_r_4909_; lean_object* v___y_4910_; 
v___x_4907_ = l_Lake_resolveArtifactOutput(v_val_4903_, v_exe_4874_, v___y_4875_, v_a_4878_, v_a_4879_, v_a_4880_, v_a_4881_, v___x_4902_);
if (lean_obj_tag(v___x_4907_) == 0)
{
lean_object* v_a_4914_; lean_object* v_a_4915_; lean_object* v___x_4917_; 
v_a_4914_ = lean_ctor_get(v___x_4907_, 0);
lean_inc(v_a_4914_);
v_a_4915_ = lean_ctor_get(v___x_4907_, 1);
lean_inc(v_a_4915_);
lean_dec_ref(v___x_4907_);
if (v_isShared_4906_ == 0)
{
lean_ctor_set(v___x_4905_, 0, v_a_4914_);
v___x_4917_ = v___x_4905_;
goto v_reusejp_4916_;
}
else
{
lean_object* v_reuseFailAlloc_4918_; 
v_reuseFailAlloc_4918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4918_, 0, v_a_4914_);
v___x_4917_ = v_reuseFailAlloc_4918_;
goto v_reusejp_4916_;
}
v_reusejp_4916_:
{
v_r_4909_ = v___x_4917_;
v___y_4910_ = v_a_4915_;
goto v___jp_4908_;
}
}
else
{
lean_object* v_a_4919_; lean_object* v_a_4920_; lean_object* v_log_4921_; uint8_t v_action_4922_; uint8_t v_wantsRebuild_4923_; lean_object* v_trace_4924_; lean_object* v_buildTime_4925_; lean_object* v___x_4927_; uint8_t v_isShared_4928_; uint8_t v_isSharedCheck_4962_; 
lean_del_object(v___x_4905_);
v_a_4919_ = lean_ctor_get(v___x_4907_, 1);
lean_inc(v_a_4919_);
v_a_4920_ = lean_ctor_get(v___x_4907_, 0);
lean_inc(v_a_4920_);
lean_dec_ref(v___x_4907_);
v_log_4921_ = lean_ctor_get(v_a_4919_, 0);
v_action_4922_ = lean_ctor_get_uint8(v_a_4919_, sizeof(void*)*3);
v_wantsRebuild_4923_ = lean_ctor_get_uint8(v_a_4919_, sizeof(void*)*3 + 1);
v_trace_4924_ = lean_ctor_get(v_a_4919_, 1);
v_buildTime_4925_ = lean_ctor_get(v_a_4919_, 2);
v_isSharedCheck_4962_ = !lean_is_exclusive(v_a_4919_);
if (v_isSharedCheck_4962_ == 0)
{
v___x_4927_ = v_a_4919_;
v_isShared_4928_ = v_isSharedCheck_4962_;
goto v_resetjp_4926_;
}
else
{
lean_inc(v_buildTime_4925_);
lean_inc(v_trace_4924_);
lean_inc(v_log_4921_);
lean_dec(v_a_4919_);
v___x_4927_ = lean_box(0);
v_isShared_4928_ = v_isSharedCheck_4962_;
goto v_resetjp_4926_;
}
v_resetjp_4926_:
{
lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___y_4933_; lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; uint8_t v___x_4954_; 
v___x_4929_ = lean_array_get_size(v_log_4921_);
lean_inc(v_a_4920_);
v___x_4930_ = l_Array_extract___redArg(v_log_4921_, v_a_4920_, v___x_4929_);
v___x_4931_ = l_Array_shrink___redArg(v_log_4921_, v_a_4920_);
lean_dec(v_a_4920_);
v___x_4941_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0));
v___x_4942_ = l_Lake_Hash_hex(v_inputHash_4876_);
v___x_4943_ = lean_unsigned_to_nat(7u);
v___x_4944_ = lean_unsigned_to_nat(0u);
v___x_4945_ = lean_string_utf8_byte_size(v___x_4942_);
lean_inc_ref(v___x_4942_);
v___x_4946_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4946_, 0, v___x_4942_);
lean_ctor_set(v___x_4946_, 1, v___x_4944_);
lean_ctor_set(v___x_4946_, 2, v___x_4945_);
v___x_4947_ = l_String_Slice_Pos_nextn(v___x_4946_, v___x_4944_, v___x_4943_);
lean_dec_ref(v___x_4946_);
v___x_4948_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4948_, 0, v___x_4942_);
lean_ctor_set(v___x_4948_, 1, v___x_4944_);
lean_ctor_set(v___x_4948_, 2, v___x_4947_);
v___x_4949_ = l_String_Slice_toString(v___x_4948_);
lean_dec_ref(v___x_4948_);
v___x_4950_ = lean_string_append(v___x_4941_, v___x_4949_);
lean_dec_ref(v___x_4949_);
v___x_4951_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1));
v___x_4952_ = lean_string_append(v___x_4950_, v___x_4951_);
v___x_4953_ = lean_array_get_size(v___x_4930_);
v___x_4954_ = lean_nat_dec_lt(v___x_4944_, v___x_4953_);
if (v___x_4954_ == 0)
{
lean_dec_ref(v___x_4930_);
v___y_4933_ = v___x_4952_;
goto v___jp_4932_;
}
else
{
uint8_t v___x_4955_; 
v___x_4955_ = lean_nat_dec_le(v___x_4953_, v___x_4953_);
if (v___x_4955_ == 0)
{
if (v___x_4954_ == 0)
{
lean_dec_ref(v___x_4930_);
v___y_4933_ = v___x_4952_;
goto v___jp_4932_;
}
else
{
size_t v___x_4956_; size_t v___x_4957_; lean_object* v___x_4958_; 
v___x_4956_ = ((size_t)0ULL);
v___x_4957_ = lean_usize_of_nat(v___x_4953_);
v___x_4958_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(v___x_4930_, v___x_4956_, v___x_4957_, v___x_4952_);
lean_dec_ref(v___x_4930_);
v___y_4933_ = v___x_4958_;
goto v___jp_4932_;
}
}
else
{
size_t v___x_4959_; size_t v___x_4960_; lean_object* v___x_4961_; 
v___x_4959_ = ((size_t)0ULL);
v___x_4960_ = lean_usize_of_nat(v___x_4953_);
v___x_4961_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0_spec__0(v___x_4930_, v___x_4959_, v___x_4960_, v___x_4952_);
lean_dec_ref(v___x_4930_);
v___y_4933_ = v___x_4961_;
goto v___jp_4932_;
}
}
v___jp_4932_:
{
uint8_t v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4938_; 
v___x_4934_ = 2;
v___x_4935_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4935_, 0, v___y_4933_);
lean_ctor_set_uint8(v___x_4935_, sizeof(void*)*1, v___x_4934_);
v___x_4936_ = lean_array_push(v___x_4931_, v___x_4935_);
if (v_isShared_4928_ == 0)
{
lean_ctor_set(v___x_4927_, 0, v___x_4936_);
v___x_4938_ = v___x_4927_;
goto v_reusejp_4937_;
}
else
{
lean_object* v_reuseFailAlloc_4940_; 
v_reuseFailAlloc_4940_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4940_, 0, v___x_4936_);
lean_ctor_set(v_reuseFailAlloc_4940_, 1, v_trace_4924_);
lean_ctor_set(v_reuseFailAlloc_4940_, 2, v_buildTime_4925_);
lean_ctor_set_uint8(v_reuseFailAlloc_4940_, sizeof(void*)*3, v_action_4922_);
lean_ctor_set_uint8(v_reuseFailAlloc_4940_, sizeof(void*)*3 + 1, v_wantsRebuild_4923_);
v___x_4938_ = v_reuseFailAlloc_4940_;
goto v_reusejp_4937_;
}
v_reusejp_4937_:
{
lean_object* v___x_4939_; 
v___x_4939_ = lean_box(0);
v_r_4909_ = v___x_4939_;
v___y_4910_ = v___x_4938_;
goto v___jp_4908_;
}
}
}
}
v___jp_4908_:
{
lean_object* v___x_4912_; 
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 1, v___y_4910_);
lean_ctor_set(v___x_4899_, 0, v_r_4909_);
v___x_4912_ = v___x_4899_;
goto v_reusejp_4911_;
}
else
{
lean_object* v_reuseFailAlloc_4913_; 
v_reuseFailAlloc_4913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4913_, 0, v_r_4909_);
lean_ctor_set(v_reuseFailAlloc_4913_, 1, v___y_4910_);
v___x_4912_ = v_reuseFailAlloc_4913_;
goto v_reusejp_4911_;
}
v_reusejp_4911_:
{
return v___x_4912_;
}
}
}
}
else
{
lean_object* v___x_4964_; lean_object* v___x_4966_; 
lean_dec(v_a_4896_);
lean_dec_ref(v___y_4875_);
v___x_4964_ = lean_box(0);
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 1, v___x_4902_);
lean_ctor_set(v___x_4899_, 0, v___x_4964_);
v___x_4966_ = v___x_4899_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4967_; 
v_reuseFailAlloc_4967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4967_, 0, v___x_4964_);
lean_ctor_set(v_reuseFailAlloc_4967_, 1, v___x_4902_);
v___x_4966_ = v_reuseFailAlloc_4967_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
return v___x_4966_;
}
}
}
}
}
else
{
lean_object* v_a_4970_; lean_object* v_a_4971_; lean_object* v___x_4973_; uint8_t v_isShared_4974_; uint8_t v_isSharedCheck_4981_; 
lean_dec_ref(v___y_4875_);
v_a_4970_ = lean_ctor_get(v___x_4895_, 0);
v_a_4971_ = lean_ctor_get(v___x_4895_, 1);
v_isSharedCheck_4981_ = !lean_is_exclusive(v___x_4895_);
if (v_isSharedCheck_4981_ == 0)
{
v___x_4973_ = v___x_4895_;
v_isShared_4974_ = v_isSharedCheck_4981_;
goto v_resetjp_4972_;
}
else
{
lean_inc(v_a_4971_);
lean_inc(v_a_4970_);
lean_dec(v___x_4895_);
v___x_4973_ = lean_box(0);
v_isShared_4974_ = v_isSharedCheck_4981_;
goto v_resetjp_4972_;
}
v_resetjp_4972_:
{
lean_object* v___x_4976_; 
if (v_isShared_4892_ == 0)
{
lean_ctor_set(v___x_4891_, 0, v_a_4971_);
v___x_4976_ = v___x_4891_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4980_; 
v_reuseFailAlloc_4980_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4980_, 0, v_a_4971_);
lean_ctor_set(v_reuseFailAlloc_4980_, 1, v_trace_4888_);
lean_ctor_set(v_reuseFailAlloc_4980_, 2, v_buildTime_4889_);
lean_ctor_set_uint8(v_reuseFailAlloc_4980_, sizeof(void*)*3, v_action_4886_);
lean_ctor_set_uint8(v_reuseFailAlloc_4980_, sizeof(void*)*3 + 1, v_wantsRebuild_4887_);
v___x_4976_ = v_reuseFailAlloc_4980_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
lean_object* v___x_4978_; 
if (v_isShared_4974_ == 0)
{
lean_ctor_set(v___x_4973_, 1, v___x_4976_);
v___x_4978_ = v___x_4973_;
goto v_reusejp_4977_;
}
else
{
lean_object* v_reuseFailAlloc_4979_; 
v_reuseFailAlloc_4979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4979_, 0, v_a_4970_);
lean_ctor_set(v_reuseFailAlloc_4979_, 1, v___x_4976_);
v___x_4978_ = v_reuseFailAlloc_4979_;
goto v_reusejp_4977_;
}
v_reusejp_4977_:
{
return v___x_4978_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___boxed(lean_object* v_exe_4983_, lean_object* v___y_4984_, lean_object* v_inputHash_4985_, lean_object* v_pkg_4986_, lean_object* v_a_4987_, lean_object* v_a_4988_, lean_object* v_a_4989_, lean_object* v_a_4990_, lean_object* v_a_4991_, lean_object* v_a_4992_){
_start:
{
uint8_t v_exe_boxed_4993_; uint64_t v_inputHash_boxed_4994_; lean_object* v_res_4995_; 
v_exe_boxed_4993_ = lean_unbox(v_exe_4983_);
v_inputHash_boxed_4994_ = lean_unbox_uint64(v_inputHash_4985_);
lean_dec_ref(v_inputHash_4985_);
v_res_4995_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(v_exe_boxed_4993_, v___y_4984_, v_inputHash_boxed_4994_, v_pkg_4986_, v_a_4987_, v_a_4988_, v_a_4989_, v_a_4990_, v_a_4991_);
lean_dec_ref(v_a_4990_);
lean_dec(v_a_4989_);
lean_dec(v_a_4988_);
lean_dec(v_a_4987_);
return v_res_4995_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0(uint8_t v_exe_4996_, uint64_t v_hash_4997_, lean_object* v_val_4998_, lean_object* v_file_4999_, lean_object* v___x_5000_, lean_object* v_a_5001_, uint8_t v_restore_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_){
_start:
{
lean_object* v_a_5011_; lean_object* v___y_5015_; lean_object* v___y_5016_; lean_object* v___y_5017_; lean_object* v___y_5055_; uint8_t v___y_5056_; uint8_t v___y_5057_; lean_object* v___y_5058_; lean_object* v___y_5059_; lean_object* v___y_5060_; lean_object* v___y_5061_; lean_object* v___y_5062_; lean_object* v___y_5076_; lean_object* v___x_5133_; 
lean_inc_ref(v_val_4998_);
lean_inc_ref(v___y_5003_);
v___x_5133_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(v_exe_4996_, v___y_5003_, v_hash_4997_, v_val_4998_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_);
if (lean_obj_tag(v___x_5133_) == 0)
{
lean_object* v_a_5134_; 
v_a_5134_ = lean_ctor_get(v___x_5133_, 0);
lean_inc(v_a_5134_);
if (lean_obj_tag(v_a_5134_) == 1)
{
lean_dec_ref(v_a_5134_);
lean_dec_ref(v___y_5003_);
lean_dec_ref(v_val_4998_);
v___y_5076_ = v___x_5133_;
goto v___jp_5075_;
}
else
{
lean_object* v_a_5135_; lean_object* v___x_5136_; lean_object* v_a_5137_; 
lean_dec(v_a_5134_);
v_a_5135_ = lean_ctor_get(v___x_5133_, 1);
lean_inc(v_a_5135_);
lean_dec_ref(v___x_5133_);
lean_inc(v_a_5001_);
v___x_5136_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(v_exe_4996_, v___y_5003_, v_hash_4997_, v_a_5001_, v_val_4998_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v_a_5135_);
v_a_5137_ = lean_ctor_get(v___x_5136_, 0);
lean_inc(v_a_5137_);
if (lean_obj_tag(v_a_5137_) == 1)
{
lean_dec_ref(v_a_5137_);
v___y_5076_ = v___x_5136_;
goto v___jp_5075_;
}
else
{
lean_object* v_a_5138_; 
lean_dec(v_a_5137_);
lean_dec(v_a_5001_);
lean_dec_ref(v___x_5000_);
lean_dec_ref(v_file_4999_);
v_a_5138_ = lean_ctor_get(v___x_5136_, 1);
lean_inc(v_a_5138_);
lean_dec_ref(v___x_5136_);
v_a_5011_ = v_a_5138_;
goto v___jp_5010_;
}
}
}
else
{
lean_dec_ref(v___y_5003_);
lean_dec_ref(v_val_4998_);
v___y_5076_ = v___x_5133_;
goto v___jp_5075_;
}
v___jp_5010_:
{
lean_object* v___x_5012_; lean_object* v___x_5013_; 
v___x_5012_ = lean_box(0);
v___x_5013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5013_, 0, v___x_5012_);
lean_ctor_set(v___x_5013_, 1, v_a_5011_);
return v___x_5013_;
}
v___jp_5014_:
{
if (v_restore_5002_ == 0)
{
lean_object* v___x_5018_; 
lean_dec_ref(v___y_5016_);
lean_dec_ref(v_file_4999_);
v___x_5018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5018_, 0, v___y_5015_);
lean_ctor_set(v___x_5018_, 1, v___y_5017_);
return v___x_5018_;
}
else
{
lean_object* v_log_5019_; uint8_t v_action_5020_; uint8_t v_wantsRebuild_5021_; lean_object* v_trace_5022_; lean_object* v_buildTime_5023_; lean_object* v___x_5025_; uint8_t v_isShared_5026_; uint8_t v_isSharedCheck_5053_; 
lean_dec(v___y_5015_);
v_log_5019_ = lean_ctor_get(v___y_5017_, 0);
v_action_5020_ = lean_ctor_get_uint8(v___y_5017_, sizeof(void*)*3);
v_wantsRebuild_5021_ = lean_ctor_get_uint8(v___y_5017_, sizeof(void*)*3 + 1);
v_trace_5022_ = lean_ctor_get(v___y_5017_, 1);
v_buildTime_5023_ = lean_ctor_get(v___y_5017_, 2);
v_isSharedCheck_5053_ = !lean_is_exclusive(v___y_5017_);
if (v_isSharedCheck_5053_ == 0)
{
v___x_5025_ = v___y_5017_;
v_isShared_5026_ = v_isSharedCheck_5053_;
goto v_resetjp_5024_;
}
else
{
lean_inc(v_buildTime_5023_);
lean_inc(v_trace_5022_);
lean_inc(v_log_5019_);
lean_dec(v___y_5017_);
v___x_5025_ = lean_box(0);
v_isShared_5026_ = v_isSharedCheck_5053_;
goto v_resetjp_5024_;
}
v_resetjp_5024_:
{
lean_object* v___x_5027_; 
v___x_5027_ = l_Lake_restoreArtifact(v_file_4999_, v___y_5016_, v_exe_4996_, v_log_5019_);
if (lean_obj_tag(v___x_5027_) == 0)
{
lean_object* v_a_5028_; lean_object* v_a_5029_; lean_object* v___x_5031_; uint8_t v_isShared_5032_; uint8_t v_isSharedCheck_5040_; 
v_a_5028_ = lean_ctor_get(v___x_5027_, 0);
v_a_5029_ = lean_ctor_get(v___x_5027_, 1);
v_isSharedCheck_5040_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5040_ == 0)
{
v___x_5031_ = v___x_5027_;
v_isShared_5032_ = v_isSharedCheck_5040_;
goto v_resetjp_5030_;
}
else
{
lean_inc(v_a_5029_);
lean_inc(v_a_5028_);
lean_dec(v___x_5027_);
v___x_5031_ = lean_box(0);
v_isShared_5032_ = v_isSharedCheck_5040_;
goto v_resetjp_5030_;
}
v_resetjp_5030_:
{
lean_object* v___x_5034_; 
if (v_isShared_5026_ == 0)
{
lean_ctor_set(v___x_5025_, 0, v_a_5029_);
v___x_5034_ = v___x_5025_;
goto v_reusejp_5033_;
}
else
{
lean_object* v_reuseFailAlloc_5039_; 
v_reuseFailAlloc_5039_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5039_, 0, v_a_5029_);
lean_ctor_set(v_reuseFailAlloc_5039_, 1, v_trace_5022_);
lean_ctor_set(v_reuseFailAlloc_5039_, 2, v_buildTime_5023_);
lean_ctor_set_uint8(v_reuseFailAlloc_5039_, sizeof(void*)*3, v_action_5020_);
lean_ctor_set_uint8(v_reuseFailAlloc_5039_, sizeof(void*)*3 + 1, v_wantsRebuild_5021_);
v___x_5034_ = v_reuseFailAlloc_5039_;
goto v_reusejp_5033_;
}
v_reusejp_5033_:
{
lean_object* v___x_5035_; lean_object* v___x_5037_; 
v___x_5035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5035_, 0, v_a_5028_);
if (v_isShared_5032_ == 0)
{
lean_ctor_set(v___x_5031_, 1, v___x_5034_);
lean_ctor_set(v___x_5031_, 0, v___x_5035_);
v___x_5037_ = v___x_5031_;
goto v_reusejp_5036_;
}
else
{
lean_object* v_reuseFailAlloc_5038_; 
v_reuseFailAlloc_5038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5038_, 0, v___x_5035_);
lean_ctor_set(v_reuseFailAlloc_5038_, 1, v___x_5034_);
v___x_5037_ = v_reuseFailAlloc_5038_;
goto v_reusejp_5036_;
}
v_reusejp_5036_:
{
return v___x_5037_;
}
}
}
}
else
{
lean_object* v_a_5041_; lean_object* v_a_5042_; lean_object* v___x_5044_; uint8_t v_isShared_5045_; uint8_t v_isSharedCheck_5052_; 
v_a_5041_ = lean_ctor_get(v___x_5027_, 0);
v_a_5042_ = lean_ctor_get(v___x_5027_, 1);
v_isSharedCheck_5052_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5052_ == 0)
{
v___x_5044_ = v___x_5027_;
v_isShared_5045_ = v_isSharedCheck_5052_;
goto v_resetjp_5043_;
}
else
{
lean_inc(v_a_5042_);
lean_inc(v_a_5041_);
lean_dec(v___x_5027_);
v___x_5044_ = lean_box(0);
v_isShared_5045_ = v_isSharedCheck_5052_;
goto v_resetjp_5043_;
}
v_resetjp_5043_:
{
lean_object* v___x_5047_; 
if (v_isShared_5026_ == 0)
{
lean_ctor_set(v___x_5025_, 0, v_a_5042_);
v___x_5047_ = v___x_5025_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5051_; 
v_reuseFailAlloc_5051_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5051_, 0, v_a_5042_);
lean_ctor_set(v_reuseFailAlloc_5051_, 1, v_trace_5022_);
lean_ctor_set(v_reuseFailAlloc_5051_, 2, v_buildTime_5023_);
lean_ctor_set_uint8(v_reuseFailAlloc_5051_, sizeof(void*)*3, v_action_5020_);
lean_ctor_set_uint8(v_reuseFailAlloc_5051_, sizeof(void*)*3 + 1, v_wantsRebuild_5021_);
v___x_5047_ = v_reuseFailAlloc_5051_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
lean_object* v___x_5049_; 
if (v_isShared_5045_ == 0)
{
lean_ctor_set(v___x_5044_, 1, v___x_5047_);
v___x_5049_ = v___x_5044_;
goto v_reusejp_5048_;
}
else
{
lean_object* v_reuseFailAlloc_5050_; 
v_reuseFailAlloc_5050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5050_, 0, v_a_5041_);
lean_ctor_set(v_reuseFailAlloc_5050_, 1, v___x_5047_);
v___x_5049_ = v_reuseFailAlloc_5050_;
goto v_reusejp_5048_;
}
v_reusejp_5048_:
{
return v___x_5049_;
}
}
}
}
}
}
}
v___jp_5054_:
{
lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v___x_5065_; 
v___x_5063_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5063_, 0, v___y_5062_);
v___x_5064_ = l_Lake_BuildMetadata_ofFetch(v_hash_4997_, v___x_5063_);
v___x_5065_ = l_Lake_BuildMetadata_writeFile(v___x_5000_, v___x_5064_);
if (lean_obj_tag(v___x_5065_) == 0)
{
lean_object* v___x_5066_; 
lean_dec_ref(v___x_5065_);
v___x_5066_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5066_, 0, v___y_5055_);
lean_ctor_set(v___x_5066_, 1, v___y_5061_);
lean_ctor_set(v___x_5066_, 2, v___y_5059_);
lean_ctor_set_uint8(v___x_5066_, sizeof(void*)*3, v___y_5057_);
lean_ctor_set_uint8(v___x_5066_, sizeof(void*)*3 + 1, v___y_5056_);
v___y_5015_ = v___y_5058_;
v___y_5016_ = v___y_5060_;
v___y_5017_ = v___x_5066_;
goto v___jp_5014_;
}
else
{
lean_object* v_a_5067_; lean_object* v___x_5068_; uint8_t v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; 
lean_dec_ref(v___y_5060_);
lean_dec(v___y_5058_);
lean_dec_ref(v_file_4999_);
v_a_5067_ = lean_ctor_get(v___x_5065_, 0);
lean_inc(v_a_5067_);
lean_dec_ref(v___x_5065_);
v___x_5068_ = lean_io_error_to_string(v_a_5067_);
v___x_5069_ = 3;
v___x_5070_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5070_, 0, v___x_5068_);
lean_ctor_set_uint8(v___x_5070_, sizeof(void*)*1, v___x_5069_);
v___x_5071_ = lean_array_get_size(v___y_5055_);
v___x_5072_ = lean_array_push(v___y_5055_, v___x_5070_);
v___x_5073_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5073_, 0, v___x_5072_);
lean_ctor_set(v___x_5073_, 1, v___y_5061_);
lean_ctor_set(v___x_5073_, 2, v___y_5059_);
lean_ctor_set_uint8(v___x_5073_, sizeof(void*)*3, v___y_5057_);
lean_ctor_set_uint8(v___x_5073_, sizeof(void*)*3 + 1, v___y_5056_);
v___x_5074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5074_, 0, v___x_5071_);
lean_ctor_set(v___x_5074_, 1, v___x_5073_);
return v___x_5074_;
}
}
v___jp_5075_:
{
if (lean_obj_tag(v___y_5076_) == 0)
{
lean_object* v_a_5077_; 
v_a_5077_ = lean_ctor_get(v___y_5076_, 0);
if (lean_obj_tag(v_a_5077_) == 1)
{
lean_object* v_a_5078_; lean_object* v_val_5079_; lean_object* v___x_5080_; 
lean_inc_ref(v_a_5077_);
v_a_5078_ = lean_ctor_get(v___y_5076_, 1);
lean_inc(v_a_5078_);
lean_dec_ref(v___y_5076_);
v_val_5079_ = lean_ctor_get(v_a_5077_, 0);
lean_inc(v_val_5079_);
v___x_5080_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(v_hash_4997_, v_a_5001_, v_a_5078_);
lean_dec(v_a_5001_);
if (lean_obj_tag(v___x_5080_) == 0)
{
lean_object* v_a_5081_; uint8_t v___x_5082_; 
v_a_5081_ = lean_ctor_get(v___x_5080_, 0);
lean_inc(v_a_5081_);
v___x_5082_ = lean_unbox(v_a_5081_);
lean_dec(v_a_5081_);
if (v___x_5082_ == 0)
{
lean_object* v_a_5083_; lean_object* v___x_5085_; uint8_t v_isShared_5086_; uint8_t v_isSharedCheck_5120_; 
v_a_5083_ = lean_ctor_get(v___x_5080_, 1);
v_isSharedCheck_5120_ = !lean_is_exclusive(v___x_5080_);
if (v_isSharedCheck_5120_ == 0)
{
lean_object* v_unused_5121_; 
v_unused_5121_ = lean_ctor_get(v___x_5080_, 0);
lean_dec(v_unused_5121_);
v___x_5085_ = v___x_5080_;
v_isShared_5086_ = v_isSharedCheck_5120_;
goto v_resetjp_5084_;
}
else
{
lean_inc(v_a_5083_);
lean_dec(v___x_5080_);
v___x_5085_ = lean_box(0);
v_isShared_5086_ = v_isSharedCheck_5120_;
goto v_resetjp_5084_;
}
v_resetjp_5084_:
{
lean_object* v_log_5087_; uint8_t v_action_5088_; uint8_t v_wantsRebuild_5089_; lean_object* v_trace_5090_; lean_object* v_buildTime_5091_; lean_object* v___x_5093_; uint8_t v_isShared_5094_; uint8_t v_isSharedCheck_5119_; 
v_log_5087_ = lean_ctor_get(v_a_5083_, 0);
v_action_5088_ = lean_ctor_get_uint8(v_a_5083_, sizeof(void*)*3);
v_wantsRebuild_5089_ = lean_ctor_get_uint8(v_a_5083_, sizeof(void*)*3 + 1);
v_trace_5090_ = lean_ctor_get(v_a_5083_, 1);
v_buildTime_5091_ = lean_ctor_get(v_a_5083_, 2);
v_isSharedCheck_5119_ = !lean_is_exclusive(v_a_5083_);
if (v_isSharedCheck_5119_ == 0)
{
v___x_5093_ = v_a_5083_;
v_isShared_5094_ = v_isSharedCheck_5119_;
goto v_resetjp_5092_;
}
else
{
lean_inc(v_buildTime_5091_);
lean_inc(v_trace_5090_);
lean_inc(v_log_5087_);
lean_dec(v_a_5083_);
v___x_5093_ = lean_box(0);
v_isShared_5094_ = v_isSharedCheck_5119_;
goto v_resetjp_5092_;
}
v_resetjp_5092_:
{
lean_object* v___x_5095_; 
v___x_5095_ = l_Lake_removeFileIfExists(v_file_4999_);
if (lean_obj_tag(v___x_5095_) == 0)
{
lean_object* v_descr_5096_; uint64_t v_hash_5097_; lean_object* v_ext_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; uint8_t v___x_5101_; 
lean_dec_ref(v___x_5095_);
lean_del_object(v___x_5093_);
lean_del_object(v___x_5085_);
v_descr_5096_ = lean_ctor_get(v_val_5079_, 0);
v_hash_5097_ = lean_ctor_get_uint64(v_descr_5096_, sizeof(void*)*1);
v_ext_5098_ = lean_ctor_get(v_descr_5096_, 0);
v___x_5099_ = lean_string_utf8_byte_size(v_ext_5098_);
v___x_5100_ = lean_unsigned_to_nat(0u);
v___x_5101_ = lean_nat_dec_eq(v___x_5099_, v___x_5100_);
if (v___x_5101_ == 0)
{
lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; 
v___x_5102_ = l_Lake_Hash_hex(v_hash_5097_);
v___x_5103_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_5104_ = lean_string_append(v___x_5102_, v___x_5103_);
v___x_5105_ = lean_string_append(v___x_5104_, v_ext_5098_);
v___y_5055_ = v_log_5087_;
v___y_5056_ = v_wantsRebuild_5089_;
v___y_5057_ = v_action_5088_;
v___y_5058_ = v_a_5077_;
v___y_5059_ = v_buildTime_5091_;
v___y_5060_ = v_val_5079_;
v___y_5061_ = v_trace_5090_;
v___y_5062_ = v___x_5105_;
goto v___jp_5054_;
}
else
{
lean_object* v___x_5106_; 
v___x_5106_ = l_Lake_Hash_hex(v_hash_5097_);
v___y_5055_ = v_log_5087_;
v___y_5056_ = v_wantsRebuild_5089_;
v___y_5057_ = v_action_5088_;
v___y_5058_ = v_a_5077_;
v___y_5059_ = v_buildTime_5091_;
v___y_5060_ = v_val_5079_;
v___y_5061_ = v_trace_5090_;
v___y_5062_ = v___x_5106_;
goto v___jp_5054_;
}
}
else
{
lean_object* v_a_5107_; lean_object* v___x_5108_; uint8_t v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5114_; 
lean_dec(v_val_5079_);
lean_dec_ref(v_a_5077_);
lean_dec_ref(v___x_5000_);
lean_dec_ref(v_file_4999_);
v_a_5107_ = lean_ctor_get(v___x_5095_, 0);
lean_inc(v_a_5107_);
lean_dec_ref(v___x_5095_);
v___x_5108_ = lean_io_error_to_string(v_a_5107_);
v___x_5109_ = 3;
v___x_5110_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5110_, 0, v___x_5108_);
lean_ctor_set_uint8(v___x_5110_, sizeof(void*)*1, v___x_5109_);
v___x_5111_ = lean_array_get_size(v_log_5087_);
v___x_5112_ = lean_array_push(v_log_5087_, v___x_5110_);
if (v_isShared_5094_ == 0)
{
lean_ctor_set(v___x_5093_, 0, v___x_5112_);
v___x_5114_ = v___x_5093_;
goto v_reusejp_5113_;
}
else
{
lean_object* v_reuseFailAlloc_5118_; 
v_reuseFailAlloc_5118_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5118_, 0, v___x_5112_);
lean_ctor_set(v_reuseFailAlloc_5118_, 1, v_trace_5090_);
lean_ctor_set(v_reuseFailAlloc_5118_, 2, v_buildTime_5091_);
lean_ctor_set_uint8(v_reuseFailAlloc_5118_, sizeof(void*)*3, v_action_5088_);
lean_ctor_set_uint8(v_reuseFailAlloc_5118_, sizeof(void*)*3 + 1, v_wantsRebuild_5089_);
v___x_5114_ = v_reuseFailAlloc_5118_;
goto v_reusejp_5113_;
}
v_reusejp_5113_:
{
lean_object* v___x_5116_; 
if (v_isShared_5086_ == 0)
{
lean_ctor_set_tag(v___x_5085_, 1);
lean_ctor_set(v___x_5085_, 1, v___x_5114_);
lean_ctor_set(v___x_5085_, 0, v___x_5111_);
v___x_5116_ = v___x_5085_;
goto v_reusejp_5115_;
}
else
{
lean_object* v_reuseFailAlloc_5117_; 
v_reuseFailAlloc_5117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5117_, 0, v___x_5111_);
lean_ctor_set(v_reuseFailAlloc_5117_, 1, v___x_5114_);
v___x_5116_ = v_reuseFailAlloc_5117_;
goto v_reusejp_5115_;
}
v_reusejp_5115_:
{
return v___x_5116_;
}
}
}
}
}
}
else
{
lean_object* v_a_5122_; 
lean_dec_ref(v___x_5000_);
v_a_5122_ = lean_ctor_get(v___x_5080_, 1);
lean_inc(v_a_5122_);
lean_dec_ref(v___x_5080_);
v___y_5015_ = v_a_5077_;
v___y_5016_ = v_val_5079_;
v___y_5017_ = v_a_5122_;
goto v___jp_5014_;
}
}
else
{
lean_object* v_a_5123_; lean_object* v_a_5124_; lean_object* v___x_5126_; uint8_t v_isShared_5127_; uint8_t v_isSharedCheck_5131_; 
lean_dec(v_val_5079_);
lean_dec_ref(v_a_5077_);
lean_dec_ref(v___x_5000_);
lean_dec_ref(v_file_4999_);
v_a_5123_ = lean_ctor_get(v___x_5080_, 0);
v_a_5124_ = lean_ctor_get(v___x_5080_, 1);
v_isSharedCheck_5131_ = !lean_is_exclusive(v___x_5080_);
if (v_isSharedCheck_5131_ == 0)
{
v___x_5126_ = v___x_5080_;
v_isShared_5127_ = v_isSharedCheck_5131_;
goto v_resetjp_5125_;
}
else
{
lean_inc(v_a_5124_);
lean_inc(v_a_5123_);
lean_dec(v___x_5080_);
v___x_5126_ = lean_box(0);
v_isShared_5127_ = v_isSharedCheck_5131_;
goto v_resetjp_5125_;
}
v_resetjp_5125_:
{
lean_object* v___x_5129_; 
if (v_isShared_5127_ == 0)
{
v___x_5129_ = v___x_5126_;
goto v_reusejp_5128_;
}
else
{
lean_object* v_reuseFailAlloc_5130_; 
v_reuseFailAlloc_5130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5130_, 0, v_a_5123_);
lean_ctor_set(v_reuseFailAlloc_5130_, 1, v_a_5124_);
v___x_5129_ = v_reuseFailAlloc_5130_;
goto v_reusejp_5128_;
}
v_reusejp_5128_:
{
return v___x_5129_;
}
}
}
}
else
{
lean_object* v_a_5132_; 
lean_dec(v_a_5001_);
lean_dec_ref(v___x_5000_);
lean_dec_ref(v_file_4999_);
v_a_5132_ = lean_ctor_get(v___y_5076_, 1);
lean_inc(v_a_5132_);
lean_dec_ref(v___y_5076_);
v_a_5011_ = v_a_5132_;
goto v___jp_5010_;
}
}
else
{
lean_dec(v_a_5001_);
lean_dec_ref(v___x_5000_);
lean_dec_ref(v_file_4999_);
return v___y_5076_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0___boxed(lean_object* v_exe_5139_, lean_object* v_hash_5140_, lean_object* v_val_5141_, lean_object* v_file_5142_, lean_object* v___x_5143_, lean_object* v_a_5144_, lean_object* v_restore_5145_, lean_object* v___y_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_){
_start:
{
uint8_t v_exe_boxed_5153_; uint64_t v_hash_boxed_5154_; uint8_t v_restore_boxed_5155_; lean_object* v_res_5156_; 
v_exe_boxed_5153_ = lean_unbox(v_exe_5139_);
v_hash_boxed_5154_ = lean_unbox_uint64(v_hash_5140_);
lean_dec_ref(v_hash_5140_);
v_restore_boxed_5155_ = lean_unbox(v_restore_5145_);
v_res_5156_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_exe_boxed_5153_, v_hash_boxed_5154_, v_val_5141_, v_file_5142_, v___x_5143_, v_a_5144_, v_restore_boxed_5155_, v___y_5146_, v___y_5147_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_);
lean_dec_ref(v___y_5150_);
lean_dec(v___y_5149_);
lean_dec(v___y_5148_);
lean_dec(v___y_5147_);
return v_res_5156_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1(uint8_t v_a_5157_, lean_object* v_file_5158_, lean_object* v_ext_5159_, uint8_t v_text_5160_, uint8_t v_exe_5161_, uint8_t v___y_5162_, lean_object* v_val_5163_, uint64_t v_hash_5164_, lean_object* v_____r_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_){
_start:
{
uint8_t v___x_5173_; uint8_t v___x_5174_; 
v___x_5173_ = 1;
v___x_5174_ = l_Lake_instDecidableEqOutputStatus(v_a_5157_, v___x_5173_);
if (v___x_5174_ == 0)
{
lean_object* v_toContext_5175_; lean_object* v_log_5176_; uint8_t v_action_5177_; uint8_t v_wantsRebuild_5178_; lean_object* v_trace_5179_; lean_object* v_buildTime_5180_; lean_object* v_lakeCache_5181_; lean_object* v___x_5182_; 
v_toContext_5175_ = lean_ctor_get(v___y_5170_, 1);
v_log_5176_ = lean_ctor_get(v___y_5171_, 0);
v_action_5177_ = lean_ctor_get_uint8(v___y_5171_, sizeof(void*)*3);
v_wantsRebuild_5178_ = lean_ctor_get_uint8(v___y_5171_, sizeof(void*)*3 + 1);
v_trace_5179_ = lean_ctor_get(v___y_5171_, 1);
v_buildTime_5180_ = lean_ctor_get(v___y_5171_, 2);
v_lakeCache_5181_ = lean_ctor_get(v_toContext_5175_, 3);
lean_inc_ref(v_lakeCache_5181_);
v___x_5182_ = l_Lake_Cache_saveArtifact(v_lakeCache_5181_, v_file_5158_, v_ext_5159_, v_text_5160_, v_exe_5161_, v___y_5162_);
if (lean_obj_tag(v___x_5182_) == 0)
{
lean_object* v_a_5183_; lean_object* v___x_5185_; uint8_t v_isShared_5186_; uint8_t v_isSharedCheck_5224_; 
v_a_5183_ = lean_ctor_get(v___x_5182_, 0);
v_isSharedCheck_5224_ = !lean_is_exclusive(v___x_5182_);
if (v_isSharedCheck_5224_ == 0)
{
v___x_5185_ = v___x_5182_;
v_isShared_5186_ = v_isSharedCheck_5224_;
goto v_resetjp_5184_;
}
else
{
lean_inc(v_a_5183_);
lean_dec(v___x_5182_);
v___x_5185_ = lean_box(0);
v_isShared_5186_ = v_isSharedCheck_5224_;
goto v_resetjp_5184_;
}
v_resetjp_5184_:
{
lean_object* v_descr_5187_; uint64_t v_hash_5188_; lean_object* v_ext_5189_; lean_object* v___x_5190_; lean_object* v___y_5192_; lean_object* v___x_5216_; lean_object* v___x_5217_; uint8_t v___x_5218_; 
v_descr_5187_ = lean_ctor_get(v_a_5183_, 0);
v_hash_5188_ = lean_ctor_get_uint64(v_descr_5187_, sizeof(void*)*1);
v_ext_5189_ = lean_ctor_get(v_descr_5187_, 0);
v___x_5190_ = l_Lake_Package_cacheScope(v_val_5163_);
v___x_5216_ = lean_string_utf8_byte_size(v_ext_5189_);
v___x_5217_ = lean_unsigned_to_nat(0u);
v___x_5218_ = lean_nat_dec_eq(v___x_5216_, v___x_5217_);
if (v___x_5218_ == 0)
{
lean_object* v___x_5219_; lean_object* v___x_5220_; lean_object* v___x_5221_; lean_object* v___x_5222_; 
v___x_5219_ = l_Lake_Hash_hex(v_hash_5188_);
v___x_5220_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_5221_ = lean_string_append(v___x_5219_, v___x_5220_);
v___x_5222_ = lean_string_append(v___x_5221_, v_ext_5189_);
v___y_5192_ = v___x_5222_;
goto v___jp_5191_;
}
else
{
lean_object* v___x_5223_; 
v___x_5223_ = l_Lake_Hash_hex(v_hash_5188_);
v___y_5192_ = v___x_5223_;
goto v___jp_5191_;
}
v___jp_5191_:
{
lean_object* v___x_5194_; 
if (v_isShared_5186_ == 0)
{
lean_ctor_set_tag(v___x_5185_, 3);
lean_ctor_set(v___x_5185_, 0, v___y_5192_);
v___x_5194_ = v___x_5185_;
goto v_reusejp_5193_;
}
else
{
lean_object* v_reuseFailAlloc_5215_; 
v_reuseFailAlloc_5215_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5215_, 0, v___y_5192_);
v___x_5194_ = v_reuseFailAlloc_5215_;
goto v_reusejp_5193_;
}
v_reusejp_5193_:
{
lean_object* v___x_5195_; lean_object* v___x_5196_; 
v___x_5195_ = lean_box(0);
lean_inc_ref(v_lakeCache_5181_);
v___x_5196_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_5181_, v___x_5190_, v_hash_5164_, v___x_5194_, v___x_5195_, v___x_5195_);
if (lean_obj_tag(v___x_5196_) == 0)
{
lean_object* v___x_5197_; 
lean_dec_ref(v___x_5196_);
v___x_5197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5197_, 0, v_a_5183_);
lean_ctor_set(v___x_5197_, 1, v___y_5171_);
return v___x_5197_;
}
else
{
lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5211_; 
lean_inc(v_buildTime_5180_);
lean_inc_ref(v_trace_5179_);
lean_inc_ref(v_log_5176_);
lean_dec(v_a_5183_);
v_isSharedCheck_5211_ = !lean_is_exclusive(v___y_5171_);
if (v_isSharedCheck_5211_ == 0)
{
lean_object* v_unused_5212_; lean_object* v_unused_5213_; lean_object* v_unused_5214_; 
v_unused_5212_ = lean_ctor_get(v___y_5171_, 2);
lean_dec(v_unused_5212_);
v_unused_5213_ = lean_ctor_get(v___y_5171_, 1);
lean_dec(v_unused_5213_);
v_unused_5214_ = lean_ctor_get(v___y_5171_, 0);
lean_dec(v_unused_5214_);
v___x_5199_ = v___y_5171_;
v_isShared_5200_ = v_isSharedCheck_5211_;
goto v_resetjp_5198_;
}
else
{
lean_dec(v___y_5171_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5211_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v_a_5201_; lean_object* v___x_5202_; uint8_t v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5208_; 
v_a_5201_ = lean_ctor_get(v___x_5196_, 0);
lean_inc(v_a_5201_);
lean_dec_ref(v___x_5196_);
v___x_5202_ = lean_io_error_to_string(v_a_5201_);
v___x_5203_ = 3;
v___x_5204_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5204_, 0, v___x_5202_);
lean_ctor_set_uint8(v___x_5204_, sizeof(void*)*1, v___x_5203_);
v___x_5205_ = lean_array_get_size(v_log_5176_);
v___x_5206_ = lean_array_push(v_log_5176_, v___x_5204_);
if (v_isShared_5200_ == 0)
{
lean_ctor_set(v___x_5199_, 0, v___x_5206_);
v___x_5208_ = v___x_5199_;
goto v_reusejp_5207_;
}
else
{
lean_object* v_reuseFailAlloc_5210_; 
v_reuseFailAlloc_5210_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5210_, 0, v___x_5206_);
lean_ctor_set(v_reuseFailAlloc_5210_, 1, v_trace_5179_);
lean_ctor_set(v_reuseFailAlloc_5210_, 2, v_buildTime_5180_);
lean_ctor_set_uint8(v_reuseFailAlloc_5210_, sizeof(void*)*3, v_action_5177_);
lean_ctor_set_uint8(v_reuseFailAlloc_5210_, sizeof(void*)*3 + 1, v_wantsRebuild_5178_);
v___x_5208_ = v_reuseFailAlloc_5210_;
goto v_reusejp_5207_;
}
v_reusejp_5207_:
{
lean_object* v___x_5209_; 
v___x_5209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5209_, 0, v___x_5205_);
lean_ctor_set(v___x_5209_, 1, v___x_5208_);
return v___x_5209_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5226_; uint8_t v_isShared_5227_; uint8_t v_isSharedCheck_5238_; 
lean_inc(v_buildTime_5180_);
lean_inc_ref(v_trace_5179_);
lean_inc_ref(v_log_5176_);
lean_dec_ref(v_val_5163_);
v_isSharedCheck_5238_ = !lean_is_exclusive(v___y_5171_);
if (v_isSharedCheck_5238_ == 0)
{
lean_object* v_unused_5239_; lean_object* v_unused_5240_; lean_object* v_unused_5241_; 
v_unused_5239_ = lean_ctor_get(v___y_5171_, 2);
lean_dec(v_unused_5239_);
v_unused_5240_ = lean_ctor_get(v___y_5171_, 1);
lean_dec(v_unused_5240_);
v_unused_5241_ = lean_ctor_get(v___y_5171_, 0);
lean_dec(v_unused_5241_);
v___x_5226_ = v___y_5171_;
v_isShared_5227_ = v_isSharedCheck_5238_;
goto v_resetjp_5225_;
}
else
{
lean_dec(v___y_5171_);
v___x_5226_ = lean_box(0);
v_isShared_5227_ = v_isSharedCheck_5238_;
goto v_resetjp_5225_;
}
v_resetjp_5225_:
{
lean_object* v_a_5228_; lean_object* v___x_5229_; uint8_t v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5235_; 
v_a_5228_ = lean_ctor_get(v___x_5182_, 0);
lean_inc(v_a_5228_);
lean_dec_ref(v___x_5182_);
v___x_5229_ = lean_io_error_to_string(v_a_5228_);
v___x_5230_ = 3;
v___x_5231_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5231_, 0, v___x_5229_);
lean_ctor_set_uint8(v___x_5231_, sizeof(void*)*1, v___x_5230_);
v___x_5232_ = lean_array_get_size(v_log_5176_);
v___x_5233_ = lean_array_push(v_log_5176_, v___x_5231_);
if (v_isShared_5227_ == 0)
{
lean_ctor_set(v___x_5226_, 0, v___x_5233_);
v___x_5235_ = v___x_5226_;
goto v_reusejp_5234_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v___x_5233_);
lean_ctor_set(v_reuseFailAlloc_5237_, 1, v_trace_5179_);
lean_ctor_set(v_reuseFailAlloc_5237_, 2, v_buildTime_5180_);
lean_ctor_set_uint8(v_reuseFailAlloc_5237_, sizeof(void*)*3, v_action_5177_);
lean_ctor_set_uint8(v_reuseFailAlloc_5237_, sizeof(void*)*3 + 1, v_wantsRebuild_5178_);
v___x_5235_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5234_;
}
v_reusejp_5234_:
{
lean_object* v___x_5236_; 
v___x_5236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5236_, 0, v___x_5232_);
lean_ctor_set(v___x_5236_, 1, v___x_5235_);
return v___x_5236_;
}
}
}
}
else
{
lean_object* v___x_5242_; 
lean_dec_ref(v_val_5163_);
v___x_5242_ = l_Lake_computeArtifact___redArg(v_file_5158_, v_ext_5159_, v_text_5160_, v___y_5170_, v___y_5171_);
return v___x_5242_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1___boxed(lean_object* v_a_5243_, lean_object* v_file_5244_, lean_object* v_ext_5245_, lean_object* v_text_5246_, lean_object* v_exe_5247_, lean_object* v___y_5248_, lean_object* v_val_5249_, lean_object* v_hash_5250_, lean_object* v_____r_5251_, lean_object* v___y_5252_, lean_object* v___y_5253_, lean_object* v___y_5254_, lean_object* v___y_5255_, lean_object* v___y_5256_, lean_object* v___y_5257_, lean_object* v___y_5258_){
_start:
{
uint8_t v_a_294484__boxed_5259_; uint8_t v_text_boxed_5260_; uint8_t v_exe_boxed_5261_; uint8_t v___y_294485__boxed_5262_; uint64_t v_hash_boxed_5263_; lean_object* v_res_5264_; 
v_a_294484__boxed_5259_ = lean_unbox(v_a_5243_);
v_text_boxed_5260_ = lean_unbox(v_text_5246_);
v_exe_boxed_5261_ = lean_unbox(v_exe_5247_);
v___y_294485__boxed_5262_ = lean_unbox(v___y_5248_);
v_hash_boxed_5263_ = lean_unbox_uint64(v_hash_5250_);
lean_dec_ref(v_hash_5250_);
v_res_5264_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v_a_294484__boxed_5259_, v_file_5244_, v_ext_5245_, v_text_boxed_5260_, v_exe_boxed_5261_, v___y_294485__boxed_5262_, v_val_5249_, v_hash_boxed_5263_, v_____r_5251_, v___y_5252_, v___y_5253_, v___y_5254_, v___y_5255_, v___y_5256_, v___y_5257_);
lean_dec_ref(v___y_5256_);
lean_dec(v___y_5255_);
lean_dec(v___y_5254_);
lean_dec(v___y_5253_);
lean_dec_ref(v___y_5252_);
return v_res_5264_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate(lean_object* v_file_5265_, lean_object* v_build_5266_, uint8_t v_text_5267_, lean_object* v_ext_5268_, uint8_t v_restore_5269_, uint8_t v_exe_5270_, uint8_t v_platformIndependent_5271_, lean_object* v_a_5272_, lean_object* v_a_5273_, lean_object* v_a_5274_, lean_object* v_a_5275_, lean_object* v_a_5276_, lean_object* v_a_5277_){
_start:
{
lean_object* v_log_5279_; uint8_t v_action_5280_; uint8_t v_wantsRebuild_5281_; lean_object* v_trace_5282_; lean_object* v_buildTime_5283_; lean_object* v___x_5285_; uint8_t v_isShared_5286_; uint8_t v_isSharedCheck_5532_; 
v_log_5279_ = lean_ctor_get(v_a_5277_, 0);
v_action_5280_ = lean_ctor_get_uint8(v_a_5277_, sizeof(void*)*3);
v_wantsRebuild_5281_ = lean_ctor_get_uint8(v_a_5277_, sizeof(void*)*3 + 1);
v_trace_5282_ = lean_ctor_get(v_a_5277_, 1);
v_buildTime_5283_ = lean_ctor_get(v_a_5277_, 2);
v_isSharedCheck_5532_ = !lean_is_exclusive(v_a_5277_);
if (v_isSharedCheck_5532_ == 0)
{
v___x_5285_ = v_a_5277_;
v_isShared_5286_ = v_isSharedCheck_5532_;
goto v_resetjp_5284_;
}
else
{
lean_inc(v_buildTime_5283_);
lean_inc(v_trace_5282_);
lean_inc(v_log_5279_);
lean_dec(v_a_5277_);
v___x_5285_ = lean_box(0);
v_isShared_5286_ = v_isSharedCheck_5532_;
goto v_resetjp_5284_;
}
v_resetjp_5284_:
{
lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v_art_5290_; lean_object* v___y_5291_; lean_object* v___y_5307_; lean_object* v_log_5308_; uint8_t v_action_5309_; uint8_t v_wantsRebuild_5310_; lean_object* v_buildTime_5311_; lean_object* v___x_5317_; 
v___x_5287_ = ((lean_object*)(l_Lake_buildFileUnlessUpToDate_x27___closed__0));
lean_inc_ref(v_file_5265_);
v___x_5288_ = lean_string_append(v_file_5265_, v___x_5287_);
lean_inc_ref(v___x_5288_);
v___x_5317_ = l_Lake_readTraceFile(v___x_5288_, v_log_5279_);
if (lean_obj_tag(v___x_5317_) == 0)
{
if (lean_obj_tag(v_a_5273_) == 1)
{
lean_object* v_a_5318_; lean_object* v_a_5319_; lean_object* v_val_5320_; uint64_t v_hash_5321_; lean_object* v_mtime_5322_; uint8_t v___y_5324_; lean_object* v___y_5325_; lean_object* v___y_5326_; lean_object* v___y_5327_; uint8_t v___y_5328_; lean_object* v___y_5329_; lean_object* v___y_5330_; lean_object* v___y_5331_; lean_object* v___y_5332_; lean_object* v_wsIdx_5336_; lean_object* v_config_5337_; lean_object* v_a_5339_; lean_object* v_a_5340_; lean_object* v___y_5370_; lean_object* v_enableArtifactCache_x3f_5373_; lean_object* v_restoreAllArtifacts_x3f_5374_; uint8_t v___y_5376_; lean_object* v_a_5377_; uint8_t v___y_5394_; uint8_t v_a_5395_; lean_object* v_a_5396_; lean_object* v_a_5399_; lean_object* v___y_5429_; uint8_t v___y_5430_; uint8_t v___y_5469_; uint8_t v_a_5470_; lean_object* v_a_5471_; uint8_t v_a_5473_; lean_object* v_a_5474_; lean_object* v___x_5484_; 
v_a_5318_ = lean_ctor_get(v___x_5317_, 0);
lean_inc(v_a_5318_);
v_a_5319_ = lean_ctor_get(v___x_5317_, 1);
lean_inc(v_a_5319_);
lean_dec_ref(v___x_5317_);
v_val_5320_ = lean_ctor_get(v_a_5273_, 0);
v_hash_5321_ = lean_ctor_get_uint64(v_trace_5282_, sizeof(void*)*3);
v_mtime_5322_ = lean_ctor_get(v_trace_5282_, 2);
v_wsIdx_5336_ = lean_ctor_get(v_val_5320_, 0);
v_config_5337_ = lean_ctor_get(v_val_5320_, 6);
v_enableArtifactCache_x3f_5373_ = lean_ctor_get(v_config_5337_, 24);
v_restoreAllArtifacts_x3f_5374_ = lean_ctor_get(v_config_5337_, 25);
lean_inc_ref(v_trace_5282_);
v___x_5484_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5484_, 0, v_a_5319_);
lean_ctor_set(v___x_5484_, 1, v_trace_5282_);
lean_ctor_set(v___x_5484_, 2, v_buildTime_5283_);
lean_ctor_set_uint8(v___x_5484_, sizeof(void*)*3, v_action_5280_);
lean_ctor_set_uint8(v___x_5484_, sizeof(void*)*3 + 1, v_wantsRebuild_5281_);
if (lean_obj_tag(v_enableArtifactCache_x3f_5373_) == 0)
{
lean_object* v_toContext_5485_; lean_object* v_lakeEnv_5486_; lean_object* v_enableArtifactCache_x3f_5487_; 
v_toContext_5485_ = lean_ctor_get(v_a_5276_, 1);
v_lakeEnv_5486_ = lean_ctor_get(v_toContext_5485_, 1);
v_enableArtifactCache_x3f_5487_ = lean_ctor_get(v_lakeEnv_5486_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_5487_) == 0)
{
lean_object* v_root_5488_; lean_object* v_config_5489_; lean_object* v_enableArtifactCache_x3f_5490_; 
v_root_5488_ = lean_ctor_get(v_toContext_5485_, 0);
v_config_5489_ = lean_ctor_get(v_root_5488_, 6);
v_enableArtifactCache_x3f_5490_ = lean_ctor_get(v_config_5489_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_5490_) == 0)
{
v_a_5399_ = v___x_5484_;
goto v___jp_5398_;
}
else
{
lean_object* v_val_5491_; uint8_t v___x_5492_; 
v_val_5491_ = lean_ctor_get(v_enableArtifactCache_x3f_5490_, 0);
v___x_5492_ = lean_unbox(v_val_5491_);
v_a_5473_ = v___x_5492_;
v_a_5474_ = v___x_5484_;
goto v___jp_5472_;
}
}
else
{
lean_object* v_val_5493_; uint8_t v___x_5494_; 
v_val_5493_ = lean_ctor_get(v_enableArtifactCache_x3f_5487_, 0);
v___x_5494_ = lean_unbox(v_val_5493_);
v_a_5473_ = v___x_5494_;
v_a_5474_ = v___x_5484_;
goto v___jp_5472_;
}
}
else
{
lean_object* v_val_5495_; uint8_t v___x_5496_; 
v_val_5495_ = lean_ctor_get(v_enableArtifactCache_x3f_5373_, 0);
v___x_5496_ = lean_unbox(v_val_5495_);
v_a_5473_ = v___x_5496_;
v_a_5474_ = v___x_5484_;
goto v___jp_5472_;
}
v___jp_5323_:
{
lean_object* v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; 
lean_dec_ref(v___y_5330_);
v___x_5333_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5333_, 0, v___y_5332_);
v___x_5334_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_hash_5321_, v___x_5333_, v___y_5325_, v_platformIndependent_5271_);
v___x_5335_ = lean_st_ref_set(v___y_5331_, v___x_5334_);
v___y_5307_ = v___y_5326_;
v_log_5308_ = v___y_5327_;
v_action_5309_ = v___y_5328_;
v_wantsRebuild_5310_ = v___y_5324_;
v_buildTime_5311_ = v___y_5329_;
goto v___jp_5306_;
}
v___jp_5338_:
{
lean_object* v___x_5341_; uint8_t v___x_5342_; 
v___x_5341_ = lean_unsigned_to_nat(0u);
v___x_5342_ = lean_nat_dec_eq(v_wsIdx_5336_, v___x_5341_);
if (v___x_5342_ == 0)
{
lean_object* v_log_5343_; uint8_t v_action_5344_; uint8_t v_wantsRebuild_5345_; lean_object* v_buildTime_5346_; 
v_log_5343_ = lean_ctor_get(v_a_5340_, 0);
lean_inc_ref(v_log_5343_);
v_action_5344_ = lean_ctor_get_uint8(v_a_5340_, sizeof(void*)*3);
v_wantsRebuild_5345_ = lean_ctor_get_uint8(v_a_5340_, sizeof(void*)*3 + 1);
v_buildTime_5346_ = lean_ctor_get(v_a_5340_, 2);
lean_inc(v_buildTime_5346_);
lean_dec_ref(v_a_5340_);
v___y_5307_ = v_a_5339_;
v_log_5308_ = v_log_5343_;
v_action_5309_ = v_action_5344_;
v_wantsRebuild_5310_ = v_wantsRebuild_5345_;
v_buildTime_5311_ = v_buildTime_5346_;
goto v___jp_5306_;
}
else
{
lean_object* v_outputsRef_x3f_5347_; 
v_outputsRef_x3f_5347_ = lean_ctor_get(v_a_5276_, 4);
if (lean_obj_tag(v_outputsRef_x3f_5347_) == 1)
{
lean_object* v_log_5348_; uint8_t v_action_5349_; uint8_t v_wantsRebuild_5350_; lean_object* v_trace_5351_; lean_object* v_buildTime_5352_; lean_object* v_val_5353_; lean_object* v___x_5354_; lean_object* v_descr_5355_; uint64_t v_hash_5356_; lean_object* v_ext_5357_; lean_object* v___x_5358_; uint8_t v___x_5359_; 
v_log_5348_ = lean_ctor_get(v_a_5340_, 0);
lean_inc_ref(v_log_5348_);
v_action_5349_ = lean_ctor_get_uint8(v_a_5340_, sizeof(void*)*3);
v_wantsRebuild_5350_ = lean_ctor_get_uint8(v_a_5340_, sizeof(void*)*3 + 1);
v_trace_5351_ = lean_ctor_get(v_a_5340_, 1);
lean_inc_ref(v_trace_5351_);
v_buildTime_5352_ = lean_ctor_get(v_a_5340_, 2);
lean_inc(v_buildTime_5352_);
lean_dec_ref(v_a_5340_);
v_val_5353_ = lean_ctor_get(v_outputsRef_x3f_5347_, 0);
v___x_5354_ = lean_st_ref_take(v_val_5353_);
v_descr_5355_ = lean_ctor_get(v_a_5339_, 0);
v_hash_5356_ = lean_ctor_get_uint64(v_descr_5355_, sizeof(void*)*1);
v_ext_5357_ = lean_ctor_get(v_descr_5355_, 0);
v___x_5358_ = lean_string_utf8_byte_size(v_ext_5357_);
v___x_5359_ = lean_nat_dec_eq(v___x_5358_, v___x_5341_);
if (v___x_5359_ == 0)
{
lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; 
v___x_5360_ = l_Lake_Hash_hex(v_hash_5356_);
v___x_5361_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_5362_ = lean_string_append(v___x_5360_, v___x_5361_);
v___x_5363_ = lean_string_append(v___x_5362_, v_ext_5357_);
v___y_5324_ = v_wantsRebuild_5350_;
v___y_5325_ = v___x_5354_;
v___y_5326_ = v_a_5339_;
v___y_5327_ = v_log_5348_;
v___y_5328_ = v_action_5349_;
v___y_5329_ = v_buildTime_5352_;
v___y_5330_ = v_trace_5351_;
v___y_5331_ = v_val_5353_;
v___y_5332_ = v___x_5363_;
goto v___jp_5323_;
}
else
{
lean_object* v___x_5364_; 
v___x_5364_ = l_Lake_Hash_hex(v_hash_5356_);
v___y_5324_ = v_wantsRebuild_5350_;
v___y_5325_ = v___x_5354_;
v___y_5326_ = v_a_5339_;
v___y_5327_ = v_log_5348_;
v___y_5328_ = v_action_5349_;
v___y_5329_ = v_buildTime_5352_;
v___y_5330_ = v_trace_5351_;
v___y_5331_ = v_val_5353_;
v___y_5332_ = v___x_5364_;
goto v___jp_5323_;
}
}
else
{
lean_object* v_log_5365_; uint8_t v_action_5366_; uint8_t v_wantsRebuild_5367_; lean_object* v_buildTime_5368_; 
v_log_5365_ = lean_ctor_get(v_a_5340_, 0);
lean_inc_ref(v_log_5365_);
v_action_5366_ = lean_ctor_get_uint8(v_a_5340_, sizeof(void*)*3);
v_wantsRebuild_5367_ = lean_ctor_get_uint8(v_a_5340_, sizeof(void*)*3 + 1);
v_buildTime_5368_ = lean_ctor_get(v_a_5340_, 2);
lean_inc(v_buildTime_5368_);
lean_dec_ref(v_a_5340_);
v___y_5307_ = v_a_5339_;
v_log_5308_ = v_log_5365_;
v_action_5309_ = v_action_5366_;
v_wantsRebuild_5310_ = v_wantsRebuild_5367_;
v_buildTime_5311_ = v_buildTime_5368_;
goto v___jp_5306_;
}
}
}
v___jp_5369_:
{
if (lean_obj_tag(v___y_5370_) == 0)
{
lean_object* v_a_5371_; lean_object* v_a_5372_; 
v_a_5371_ = lean_ctor_get(v___y_5370_, 0);
lean_inc(v_a_5371_);
v_a_5372_ = lean_ctor_get(v___y_5370_, 1);
lean_inc(v_a_5372_);
lean_dec_ref(v___y_5370_);
v_a_5339_ = v_a_5371_;
v_a_5340_ = v_a_5372_;
goto v___jp_5338_;
}
else
{
lean_dec_ref(v___x_5288_);
lean_del_object(v___x_5285_);
return v___y_5370_;
}
}
v___jp_5375_:
{
lean_object* v___x_5378_; 
lean_inc_ref(v_a_5272_);
lean_inc_ref(v___x_5288_);
lean_inc_ref(v_file_5265_);
lean_inc(v_val_5320_);
v___x_5378_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_exe_5270_, v_hash_5321_, v_val_5320_, v_file_5265_, v___x_5288_, v_a_5318_, v___y_5376_, v_a_5272_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v_a_5377_);
if (lean_obj_tag(v___x_5378_) == 0)
{
lean_object* v_a_5379_; 
v_a_5379_ = lean_ctor_get(v___x_5378_, 0);
lean_inc(v_a_5379_);
if (lean_obj_tag(v_a_5379_) == 1)
{
lean_object* v_a_5380_; lean_object* v_val_5381_; 
lean_dec_ref(v_trace_5282_);
lean_dec_ref(v_a_5272_);
lean_dec_ref(v_ext_5268_);
lean_dec_ref(v_build_5266_);
lean_dec_ref(v_file_5265_);
v_a_5380_ = lean_ctor_get(v___x_5378_, 1);
lean_inc(v_a_5380_);
lean_dec_ref(v___x_5378_);
v_val_5381_ = lean_ctor_get(v_a_5379_, 0);
lean_inc(v_val_5381_);
lean_dec_ref(v_a_5379_);
v_a_5339_ = v_val_5381_;
v_a_5340_ = v_a_5380_;
goto v___jp_5338_;
}
else
{
lean_object* v_a_5382_; lean_object* v___x_5383_; 
lean_dec(v_a_5379_);
v_a_5382_ = lean_ctor_get(v___x_5378_, 1);
lean_inc(v_a_5382_);
lean_dec_ref(v___x_5378_);
lean_inc_ref(v___x_5288_);
v___x_5383_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5265_, v_build_5266_, v_text_5267_, v_ext_5268_, v_trace_5282_, v___x_5288_, v_a_5272_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v_a_5382_);
lean_dec_ref(v_trace_5282_);
v___y_5370_ = v___x_5383_;
goto v___jp_5369_;
}
}
else
{
lean_object* v_a_5384_; lean_object* v_a_5385_; lean_object* v___x_5387_; uint8_t v_isShared_5388_; uint8_t v_isSharedCheck_5392_; 
lean_dec_ref(v___x_5288_);
lean_del_object(v___x_5285_);
lean_dec_ref(v_trace_5282_);
lean_dec_ref(v_a_5272_);
lean_dec_ref(v_ext_5268_);
lean_dec_ref(v_build_5266_);
lean_dec_ref(v_file_5265_);
v_a_5384_ = lean_ctor_get(v___x_5378_, 0);
v_a_5385_ = lean_ctor_get(v___x_5378_, 1);
v_isSharedCheck_5392_ = !lean_is_exclusive(v___x_5378_);
if (v_isSharedCheck_5392_ == 0)
{
v___x_5387_ = v___x_5378_;
v_isShared_5388_ = v_isSharedCheck_5392_;
goto v_resetjp_5386_;
}
else
{
lean_inc(v_a_5385_);
lean_inc(v_a_5384_);
lean_dec(v___x_5378_);
v___x_5387_ = lean_box(0);
v_isShared_5388_ = v_isSharedCheck_5392_;
goto v_resetjp_5386_;
}
v_resetjp_5386_:
{
lean_object* v___x_5390_; 
if (v_isShared_5388_ == 0)
{
v___x_5390_ = v___x_5387_;
goto v_reusejp_5389_;
}
else
{
lean_object* v_reuseFailAlloc_5391_; 
v_reuseFailAlloc_5391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5391_, 0, v_a_5384_);
lean_ctor_set(v_reuseFailAlloc_5391_, 1, v_a_5385_);
v___x_5390_ = v_reuseFailAlloc_5391_;
goto v_reusejp_5389_;
}
v_reusejp_5389_:
{
return v___x_5390_;
}
}
}
}
v___jp_5393_:
{
if (v_a_5395_ == 0)
{
lean_object* v___x_5397_; 
lean_dec(v_a_5318_);
lean_inc_ref(v___x_5288_);
v___x_5397_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5265_, v_build_5266_, v_text_5267_, v_ext_5268_, v_trace_5282_, v___x_5288_, v_a_5272_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v_a_5396_);
lean_dec_ref(v_trace_5282_);
v___y_5370_ = v___x_5397_;
goto v___jp_5369_;
}
else
{
v___y_5376_ = v___y_5394_;
v_a_5377_ = v_a_5396_;
goto v___jp_5375_;
}
}
v___jp_5398_:
{
lean_object* v___x_5400_; 
lean_inc(v_a_5318_);
v___x_5400_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_5272_, v_file_5265_, v_trace_5282_, v_a_5318_, v_mtime_5322_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v_a_5399_);
if (lean_obj_tag(v___x_5400_) == 0)
{
lean_object* v_a_5401_; lean_object* v_a_5402_; uint8_t v___x_5403_; uint8_t v___x_5404_; uint8_t v___x_5405_; 
v_a_5401_ = lean_ctor_get(v___x_5400_, 0);
lean_inc(v_a_5401_);
v_a_5402_ = lean_ctor_get(v___x_5400_, 1);
lean_inc(v_a_5402_);
lean_dec_ref(v___x_5400_);
v___x_5403_ = 0;
v___x_5404_ = lean_unbox(v_a_5401_);
lean_dec(v_a_5401_);
v___x_5405_ = l_Lake_instDecidableEqOutputStatus(v___x_5404_, v___x_5403_);
if (v___x_5405_ == 0)
{
lean_object* v___x_5406_; 
lean_dec(v_a_5318_);
lean_dec_ref(v_trace_5282_);
lean_dec_ref(v_a_5272_);
lean_dec_ref(v_build_5266_);
v___x_5406_ = l_Lake_computeArtifact___redArg(v_file_5265_, v_ext_5268_, v_text_5267_, v_a_5276_, v_a_5402_);
v___y_5370_ = v___x_5406_;
goto v___jp_5369_;
}
else
{
if (lean_obj_tag(v_enableArtifactCache_x3f_5373_) == 0)
{
lean_object* v_toContext_5407_; lean_object* v_lakeEnv_5408_; lean_object* v_enableArtifactCache_x3f_5409_; 
v_toContext_5407_ = lean_ctor_get(v_a_5276_, 1);
v_lakeEnv_5408_ = lean_ctor_get(v_toContext_5407_, 1);
v_enableArtifactCache_x3f_5409_ = lean_ctor_get(v_lakeEnv_5408_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_5409_) == 0)
{
lean_object* v_root_5410_; lean_object* v_config_5411_; lean_object* v_enableArtifactCache_x3f_5412_; 
v_root_5410_ = lean_ctor_get(v_toContext_5407_, 0);
v_config_5411_ = lean_ctor_get(v_root_5410_, 6);
v_enableArtifactCache_x3f_5412_ = lean_ctor_get(v_config_5411_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_5412_) == 0)
{
v___y_5376_ = v___x_5405_;
v_a_5377_ = v_a_5402_;
goto v___jp_5375_;
}
else
{
lean_object* v_val_5413_; uint8_t v___x_5414_; 
v_val_5413_ = lean_ctor_get(v_enableArtifactCache_x3f_5412_, 0);
v___x_5414_ = lean_unbox(v_val_5413_);
v___y_5394_ = v___x_5405_;
v_a_5395_ = v___x_5414_;
v_a_5396_ = v_a_5402_;
goto v___jp_5393_;
}
}
else
{
lean_object* v_val_5415_; uint8_t v___x_5416_; 
v_val_5415_ = lean_ctor_get(v_enableArtifactCache_x3f_5409_, 0);
v___x_5416_ = lean_unbox(v_val_5415_);
v___y_5394_ = v___x_5405_;
v_a_5395_ = v___x_5416_;
v_a_5396_ = v_a_5402_;
goto v___jp_5393_;
}
}
else
{
lean_object* v_val_5417_; uint8_t v___x_5418_; 
v_val_5417_ = lean_ctor_get(v_enableArtifactCache_x3f_5373_, 0);
v___x_5418_ = lean_unbox(v_val_5417_);
v___y_5394_ = v___x_5405_;
v_a_5395_ = v___x_5418_;
v_a_5396_ = v_a_5402_;
goto v___jp_5393_;
}
}
}
else
{
lean_object* v_a_5419_; lean_object* v_a_5420_; lean_object* v___x_5422_; uint8_t v_isShared_5423_; uint8_t v_isSharedCheck_5427_; 
lean_dec(v_a_5318_);
lean_dec_ref(v___x_5288_);
lean_del_object(v___x_5285_);
lean_dec_ref(v_trace_5282_);
lean_dec_ref(v_a_5272_);
lean_dec_ref(v_ext_5268_);
lean_dec_ref(v_build_5266_);
lean_dec_ref(v_file_5265_);
v_a_5419_ = lean_ctor_get(v___x_5400_, 0);
v_a_5420_ = lean_ctor_get(v___x_5400_, 1);
v_isSharedCheck_5427_ = !lean_is_exclusive(v___x_5400_);
if (v_isSharedCheck_5427_ == 0)
{
v___x_5422_ = v___x_5400_;
v_isShared_5423_ = v_isSharedCheck_5427_;
goto v_resetjp_5421_;
}
else
{
lean_inc(v_a_5420_);
lean_inc(v_a_5419_);
lean_dec(v___x_5400_);
v___x_5422_ = lean_box(0);
v_isShared_5423_ = v_isSharedCheck_5427_;
goto v_resetjp_5421_;
}
v_resetjp_5421_:
{
lean_object* v___x_5425_; 
if (v_isShared_5423_ == 0)
{
v___x_5425_ = v___x_5422_;
goto v_reusejp_5424_;
}
else
{
lean_object* v_reuseFailAlloc_5426_; 
v_reuseFailAlloc_5426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5426_, 0, v_a_5419_);
lean_ctor_set(v_reuseFailAlloc_5426_, 1, v_a_5420_);
v___x_5425_ = v_reuseFailAlloc_5426_;
goto v_reusejp_5424_;
}
v_reusejp_5424_:
{
return v___x_5425_;
}
}
}
}
v___jp_5428_:
{
lean_object* v___x_5431_; 
lean_inc_ref(v_a_5272_);
lean_inc(v_a_5318_);
lean_inc_ref(v___x_5288_);
lean_inc_ref(v_file_5265_);
lean_inc(v_val_5320_);
v___x_5431_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_exe_5270_, v_hash_5321_, v_val_5320_, v_file_5265_, v___x_5288_, v_a_5318_, v___y_5430_, v_a_5272_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v___y_5429_);
if (lean_obj_tag(v___x_5431_) == 0)
{
lean_object* v_a_5432_; 
v_a_5432_ = lean_ctor_get(v___x_5431_, 0);
lean_inc(v_a_5432_);
if (lean_obj_tag(v_a_5432_) == 1)
{
lean_object* v_a_5433_; lean_object* v_val_5434_; 
lean_dec(v_a_5318_);
lean_dec_ref(v_trace_5282_);
lean_dec_ref(v_a_5272_);
lean_dec_ref(v_ext_5268_);
lean_dec_ref(v_build_5266_);
lean_dec_ref(v_file_5265_);
v_a_5433_ = lean_ctor_get(v___x_5431_, 1);
lean_inc(v_a_5433_);
lean_dec_ref(v___x_5431_);
v_val_5434_ = lean_ctor_get(v_a_5432_, 0);
lean_inc(v_val_5434_);
lean_dec_ref(v_a_5432_);
v_a_5339_ = v_val_5434_;
v_a_5340_ = v_a_5433_;
goto v___jp_5338_;
}
else
{
lean_object* v_a_5435_; lean_object* v___x_5436_; 
lean_dec(v_a_5432_);
v_a_5435_ = lean_ctor_get(v___x_5431_, 1);
lean_inc(v_a_5435_);
lean_dec_ref(v___x_5431_);
v___x_5436_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_5272_, v_file_5265_, v_trace_5282_, v_a_5318_, v_mtime_5322_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v_a_5435_);
if (lean_obj_tag(v___x_5436_) == 0)
{
lean_object* v_a_5437_; lean_object* v_a_5438_; uint8_t v___x_5439_; uint8_t v___x_5440_; uint8_t v___x_5441_; 
v_a_5437_ = lean_ctor_get(v___x_5436_, 0);
lean_inc(v_a_5437_);
v_a_5438_ = lean_ctor_get(v___x_5436_, 1);
lean_inc(v_a_5438_);
lean_dec_ref(v___x_5436_);
v___x_5439_ = 0;
v___x_5440_ = lean_unbox(v_a_5437_);
v___x_5441_ = l_Lake_instDecidableEqOutputStatus(v___x_5440_, v___x_5439_);
if (v___x_5441_ == 0)
{
lean_object* v___x_5442_; uint8_t v___x_5443_; lean_object* v___x_5444_; 
lean_dec_ref(v_trace_5282_);
lean_dec_ref(v_build_5266_);
v___x_5442_ = lean_box(0);
v___x_5443_ = lean_unbox(v_a_5437_);
lean_dec(v_a_5437_);
lean_inc(v_val_5320_);
v___x_5444_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v___x_5443_, v_file_5265_, v_ext_5268_, v_text_5267_, v_exe_5270_, v___y_5430_, v_val_5320_, v_hash_5321_, v___x_5442_, v_a_5272_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v_a_5438_);
lean_dec_ref(v_a_5272_);
v___y_5370_ = v___x_5444_;
goto v___jp_5369_;
}
else
{
lean_object* v___x_5445_; 
lean_inc_ref(v_a_5272_);
lean_inc_ref(v___x_5288_);
lean_inc_ref(v_ext_5268_);
lean_inc_ref(v_file_5265_);
v___x_5445_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5265_, v_build_5266_, v_text_5267_, v_ext_5268_, v_trace_5282_, v___x_5288_, v_a_5272_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v_a_5438_);
lean_dec_ref(v_trace_5282_);
if (lean_obj_tag(v___x_5445_) == 0)
{
lean_object* v_a_5446_; lean_object* v___x_5447_; uint8_t v___x_5448_; lean_object* v___x_5449_; 
v_a_5446_ = lean_ctor_get(v___x_5445_, 1);
lean_inc(v_a_5446_);
lean_dec_ref(v___x_5445_);
v___x_5447_ = lean_box(0);
v___x_5448_ = lean_unbox(v_a_5437_);
lean_dec(v_a_5437_);
lean_inc(v_val_5320_);
v___x_5449_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v___x_5448_, v_file_5265_, v_ext_5268_, v_text_5267_, v_exe_5270_, v___y_5430_, v_val_5320_, v_hash_5321_, v___x_5447_, v_a_5272_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v_a_5446_);
lean_dec_ref(v_a_5272_);
v___y_5370_ = v___x_5449_;
goto v___jp_5369_;
}
else
{
lean_dec(v_a_5437_);
lean_dec_ref(v___x_5288_);
lean_del_object(v___x_5285_);
lean_dec_ref(v_a_5272_);
lean_dec_ref(v_ext_5268_);
lean_dec_ref(v_file_5265_);
return v___x_5445_;
}
}
}
else
{
lean_object* v_a_5450_; lean_object* v_a_5451_; lean_object* v___x_5453_; uint8_t v_isShared_5454_; uint8_t v_isSharedCheck_5458_; 
lean_dec_ref(v___x_5288_);
lean_del_object(v___x_5285_);
lean_dec_ref(v_trace_5282_);
lean_dec_ref(v_a_5272_);
lean_dec_ref(v_ext_5268_);
lean_dec_ref(v_build_5266_);
lean_dec_ref(v_file_5265_);
v_a_5450_ = lean_ctor_get(v___x_5436_, 0);
v_a_5451_ = lean_ctor_get(v___x_5436_, 1);
v_isSharedCheck_5458_ = !lean_is_exclusive(v___x_5436_);
if (v_isSharedCheck_5458_ == 0)
{
v___x_5453_ = v___x_5436_;
v_isShared_5454_ = v_isSharedCheck_5458_;
goto v_resetjp_5452_;
}
else
{
lean_inc(v_a_5451_);
lean_inc(v_a_5450_);
lean_dec(v___x_5436_);
v___x_5453_ = lean_box(0);
v_isShared_5454_ = v_isSharedCheck_5458_;
goto v_resetjp_5452_;
}
v_resetjp_5452_:
{
lean_object* v___x_5456_; 
if (v_isShared_5454_ == 0)
{
v___x_5456_ = v___x_5453_;
goto v_reusejp_5455_;
}
else
{
lean_object* v_reuseFailAlloc_5457_; 
v_reuseFailAlloc_5457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5457_, 0, v_a_5450_);
lean_ctor_set(v_reuseFailAlloc_5457_, 1, v_a_5451_);
v___x_5456_ = v_reuseFailAlloc_5457_;
goto v_reusejp_5455_;
}
v_reusejp_5455_:
{
return v___x_5456_;
}
}
}
}
}
else
{
lean_object* v_a_5459_; lean_object* v_a_5460_; lean_object* v___x_5462_; uint8_t v_isShared_5463_; uint8_t v_isSharedCheck_5467_; 
lean_dec(v_a_5318_);
lean_dec_ref(v___x_5288_);
lean_del_object(v___x_5285_);
lean_dec_ref(v_trace_5282_);
lean_dec_ref(v_a_5272_);
lean_dec_ref(v_ext_5268_);
lean_dec_ref(v_build_5266_);
lean_dec_ref(v_file_5265_);
v_a_5459_ = lean_ctor_get(v___x_5431_, 0);
v_a_5460_ = lean_ctor_get(v___x_5431_, 1);
v_isSharedCheck_5467_ = !lean_is_exclusive(v___x_5431_);
if (v_isSharedCheck_5467_ == 0)
{
v___x_5462_ = v___x_5431_;
v_isShared_5463_ = v_isSharedCheck_5467_;
goto v_resetjp_5461_;
}
else
{
lean_inc(v_a_5460_);
lean_inc(v_a_5459_);
lean_dec(v___x_5431_);
v___x_5462_ = lean_box(0);
v_isShared_5463_ = v_isSharedCheck_5467_;
goto v_resetjp_5461_;
}
v_resetjp_5461_:
{
lean_object* v___x_5465_; 
if (v_isShared_5463_ == 0)
{
v___x_5465_ = v___x_5462_;
goto v_reusejp_5464_;
}
else
{
lean_object* v_reuseFailAlloc_5466_; 
v_reuseFailAlloc_5466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5466_, 0, v_a_5459_);
lean_ctor_set(v_reuseFailAlloc_5466_, 1, v_a_5460_);
v___x_5465_ = v_reuseFailAlloc_5466_;
goto v_reusejp_5464_;
}
v_reusejp_5464_:
{
return v___x_5465_;
}
}
}
}
v___jp_5468_:
{
if (v_restore_5269_ == 0)
{
v___y_5429_ = v_a_5471_;
v___y_5430_ = v_a_5470_;
goto v___jp_5428_;
}
else
{
v___y_5429_ = v_a_5471_;
v___y_5430_ = v___y_5469_;
goto v___jp_5428_;
}
}
v___jp_5472_:
{
if (v_a_5473_ == 0)
{
v_a_5399_ = v_a_5474_;
goto v___jp_5398_;
}
else
{
if (lean_obj_tag(v_restoreAllArtifacts_x3f_5374_) == 0)
{
lean_object* v_toContext_5475_; lean_object* v_root_5476_; lean_object* v_config_5477_; lean_object* v_restoreAllArtifacts_x3f_5478_; 
v_toContext_5475_ = lean_ctor_get(v_a_5276_, 1);
v_root_5476_ = lean_ctor_get(v_toContext_5475_, 0);
v_config_5477_ = lean_ctor_get(v_root_5476_, 6);
v_restoreAllArtifacts_x3f_5478_ = lean_ctor_get(v_config_5477_, 25);
if (lean_obj_tag(v_restoreAllArtifacts_x3f_5478_) == 0)
{
uint8_t v___x_5479_; 
v___x_5479_ = 0;
v___y_5469_ = v_a_5473_;
v_a_5470_ = v___x_5479_;
v_a_5471_ = v_a_5474_;
goto v___jp_5468_;
}
else
{
lean_object* v_val_5480_; uint8_t v___x_5481_; 
v_val_5480_ = lean_ctor_get(v_restoreAllArtifacts_x3f_5478_, 0);
v___x_5481_ = lean_unbox(v_val_5480_);
v___y_5469_ = v_a_5473_;
v_a_5470_ = v___x_5481_;
v_a_5471_ = v_a_5474_;
goto v___jp_5468_;
}
}
else
{
lean_object* v_val_5482_; uint8_t v___x_5483_; 
v_val_5482_ = lean_ctor_get(v_restoreAllArtifacts_x3f_5374_, 0);
v___x_5483_ = lean_unbox(v_val_5482_);
v___y_5469_ = v_a_5473_;
v_a_5470_ = v___x_5483_;
v_a_5471_ = v_a_5474_;
goto v___jp_5468_;
}
}
}
}
else
{
lean_object* v_a_5497_; lean_object* v_a_5498_; lean_object* v_mtime_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; 
lean_del_object(v___x_5285_);
v_a_5497_ = lean_ctor_get(v___x_5317_, 0);
lean_inc(v_a_5497_);
v_a_5498_ = lean_ctor_get(v___x_5317_, 1);
lean_inc(v_a_5498_);
lean_dec_ref(v___x_5317_);
v_mtime_5499_ = lean_ctor_get(v_trace_5282_, 2);
lean_inc_ref(v_trace_5282_);
v___x_5500_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5500_, 0, v_a_5498_);
lean_ctor_set(v___x_5500_, 1, v_trace_5282_);
lean_ctor_set(v___x_5500_, 2, v_buildTime_5283_);
lean_ctor_set_uint8(v___x_5500_, sizeof(void*)*3, v_action_5280_);
lean_ctor_set_uint8(v___x_5500_, sizeof(void*)*3 + 1, v_wantsRebuild_5281_);
v___x_5501_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v_a_5272_, v_file_5265_, v_trace_5282_, v_a_5497_, v_mtime_5499_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v___x_5500_);
if (lean_obj_tag(v___x_5501_) == 0)
{
lean_object* v_a_5502_; lean_object* v_a_5503_; uint8_t v___x_5504_; uint8_t v___x_5505_; uint8_t v___x_5506_; 
v_a_5502_ = lean_ctor_get(v___x_5501_, 0);
lean_inc(v_a_5502_);
v_a_5503_ = lean_ctor_get(v___x_5501_, 1);
lean_inc(v_a_5503_);
lean_dec_ref(v___x_5501_);
v___x_5504_ = 0;
v___x_5505_ = lean_unbox(v_a_5502_);
lean_dec(v_a_5502_);
v___x_5506_ = l_Lake_instDecidableEqOutputStatus(v___x_5505_, v___x_5504_);
if (v___x_5506_ == 0)
{
lean_object* v___x_5507_; 
lean_dec_ref(v_trace_5282_);
lean_dec_ref(v_a_5272_);
lean_dec_ref(v_build_5266_);
v___x_5507_ = l_Lake_computeArtifact___redArg(v_file_5265_, v_ext_5268_, v_text_5267_, v_a_5276_, v_a_5503_);
if (lean_obj_tag(v___x_5507_) == 0)
{
lean_object* v_a_5508_; lean_object* v_a_5509_; 
v_a_5508_ = lean_ctor_get(v___x_5507_, 0);
lean_inc(v_a_5508_);
v_a_5509_ = lean_ctor_get(v___x_5507_, 1);
lean_inc(v_a_5509_);
lean_dec_ref(v___x_5507_);
v_art_5290_ = v_a_5508_;
v___y_5291_ = v_a_5509_;
goto v___jp_5289_;
}
else
{
lean_dec_ref(v___x_5288_);
return v___x_5507_;
}
}
else
{
lean_object* v___x_5510_; 
lean_inc_ref(v___x_5288_);
v___x_5510_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5265_, v_build_5266_, v_text_5267_, v_ext_5268_, v_trace_5282_, v___x_5288_, v_a_5272_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v_a_5503_);
lean_dec_ref(v_trace_5282_);
if (lean_obj_tag(v___x_5510_) == 0)
{
lean_object* v_a_5511_; lean_object* v_a_5512_; 
v_a_5511_ = lean_ctor_get(v___x_5510_, 0);
lean_inc(v_a_5511_);
v_a_5512_ = lean_ctor_get(v___x_5510_, 1);
lean_inc(v_a_5512_);
lean_dec_ref(v___x_5510_);
v_art_5290_ = v_a_5511_;
v___y_5291_ = v_a_5512_;
goto v___jp_5289_;
}
else
{
lean_dec_ref(v___x_5288_);
return v___x_5510_;
}
}
}
else
{
lean_object* v_a_5513_; lean_object* v_a_5514_; lean_object* v___x_5516_; uint8_t v_isShared_5517_; uint8_t v_isSharedCheck_5521_; 
lean_dec_ref(v___x_5288_);
lean_dec_ref(v_trace_5282_);
lean_dec_ref(v_a_5272_);
lean_dec_ref(v_ext_5268_);
lean_dec_ref(v_build_5266_);
lean_dec_ref(v_file_5265_);
v_a_5513_ = lean_ctor_get(v___x_5501_, 0);
v_a_5514_ = lean_ctor_get(v___x_5501_, 1);
v_isSharedCheck_5521_ = !lean_is_exclusive(v___x_5501_);
if (v_isSharedCheck_5521_ == 0)
{
v___x_5516_ = v___x_5501_;
v_isShared_5517_ = v_isSharedCheck_5521_;
goto v_resetjp_5515_;
}
else
{
lean_inc(v_a_5514_);
lean_inc(v_a_5513_);
lean_dec(v___x_5501_);
v___x_5516_ = lean_box(0);
v_isShared_5517_ = v_isSharedCheck_5521_;
goto v_resetjp_5515_;
}
v_resetjp_5515_:
{
lean_object* v___x_5519_; 
if (v_isShared_5517_ == 0)
{
v___x_5519_ = v___x_5516_;
goto v_reusejp_5518_;
}
else
{
lean_object* v_reuseFailAlloc_5520_; 
v_reuseFailAlloc_5520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5520_, 0, v_a_5513_);
lean_ctor_set(v_reuseFailAlloc_5520_, 1, v_a_5514_);
v___x_5519_ = v_reuseFailAlloc_5520_;
goto v_reusejp_5518_;
}
v_reusejp_5518_:
{
return v___x_5519_;
}
}
}
}
}
else
{
lean_object* v_a_5522_; lean_object* v_a_5523_; lean_object* v___x_5525_; uint8_t v_isShared_5526_; uint8_t v_isSharedCheck_5531_; 
lean_dec_ref(v___x_5288_);
lean_del_object(v___x_5285_);
lean_dec_ref(v_a_5272_);
lean_dec_ref(v_ext_5268_);
lean_dec_ref(v_build_5266_);
lean_dec_ref(v_file_5265_);
v_a_5522_ = lean_ctor_get(v___x_5317_, 0);
v_a_5523_ = lean_ctor_get(v___x_5317_, 1);
v_isSharedCheck_5531_ = !lean_is_exclusive(v___x_5317_);
if (v_isSharedCheck_5531_ == 0)
{
v___x_5525_ = v___x_5317_;
v_isShared_5526_ = v_isSharedCheck_5531_;
goto v_resetjp_5524_;
}
else
{
lean_inc(v_a_5523_);
lean_inc(v_a_5522_);
lean_dec(v___x_5317_);
v___x_5525_ = lean_box(0);
v_isShared_5526_ = v_isSharedCheck_5531_;
goto v_resetjp_5524_;
}
v_resetjp_5524_:
{
lean_object* v___x_5527_; lean_object* v___x_5529_; 
v___x_5527_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5527_, 0, v_a_5523_);
lean_ctor_set(v___x_5527_, 1, v_trace_5282_);
lean_ctor_set(v___x_5527_, 2, v_buildTime_5283_);
lean_ctor_set_uint8(v___x_5527_, sizeof(void*)*3, v_action_5280_);
lean_ctor_set_uint8(v___x_5527_, sizeof(void*)*3 + 1, v_wantsRebuild_5281_);
if (v_isShared_5526_ == 0)
{
lean_ctor_set(v___x_5525_, 1, v___x_5527_);
v___x_5529_ = v___x_5525_;
goto v_reusejp_5528_;
}
else
{
lean_object* v_reuseFailAlloc_5530_; 
v_reuseFailAlloc_5530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5530_, 0, v_a_5522_);
lean_ctor_set(v_reuseFailAlloc_5530_, 1, v___x_5527_);
v___x_5529_ = v_reuseFailAlloc_5530_;
goto v_reusejp_5528_;
}
v_reusejp_5528_:
{
return v___x_5529_;
}
}
}
v___jp_5289_:
{
lean_object* v_log_5292_; uint8_t v_action_5293_; uint8_t v_wantsRebuild_5294_; lean_object* v_buildTime_5295_; lean_object* v___x_5297_; uint8_t v_isShared_5298_; uint8_t v_isSharedCheck_5304_; 
v_log_5292_ = lean_ctor_get(v___y_5291_, 0);
v_action_5293_ = lean_ctor_get_uint8(v___y_5291_, sizeof(void*)*3);
v_wantsRebuild_5294_ = lean_ctor_get_uint8(v___y_5291_, sizeof(void*)*3 + 1);
v_buildTime_5295_ = lean_ctor_get(v___y_5291_, 2);
v_isSharedCheck_5304_ = !lean_is_exclusive(v___y_5291_);
if (v_isSharedCheck_5304_ == 0)
{
lean_object* v_unused_5305_; 
v_unused_5305_ = lean_ctor_get(v___y_5291_, 1);
lean_dec(v_unused_5305_);
v___x_5297_ = v___y_5291_;
v_isShared_5298_ = v_isSharedCheck_5304_;
goto v_resetjp_5296_;
}
else
{
lean_inc(v_buildTime_5295_);
lean_inc(v_log_5292_);
lean_dec(v___y_5291_);
v___x_5297_ = lean_box(0);
v_isShared_5298_ = v_isSharedCheck_5304_;
goto v_resetjp_5296_;
}
v_resetjp_5296_:
{
lean_object* v___x_5299_; lean_object* v___x_5301_; 
v___x_5299_ = l_Lake_Artifact_trace(v_art_5290_);
if (v_isShared_5298_ == 0)
{
lean_ctor_set(v___x_5297_, 1, v___x_5299_);
v___x_5301_ = v___x_5297_;
goto v_reusejp_5300_;
}
else
{
lean_object* v_reuseFailAlloc_5303_; 
v_reuseFailAlloc_5303_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5303_, 0, v_log_5292_);
lean_ctor_set(v_reuseFailAlloc_5303_, 1, v___x_5299_);
lean_ctor_set(v_reuseFailAlloc_5303_, 2, v_buildTime_5295_);
lean_ctor_set_uint8(v_reuseFailAlloc_5303_, sizeof(void*)*3, v_action_5293_);
lean_ctor_set_uint8(v_reuseFailAlloc_5303_, sizeof(void*)*3 + 1, v_wantsRebuild_5294_);
v___x_5301_ = v_reuseFailAlloc_5303_;
goto v_reusejp_5300_;
}
v_reusejp_5300_:
{
lean_object* v___x_5302_; 
v___x_5302_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_5290_, v___x_5288_, v___x_5301_);
lean_dec_ref(v___x_5288_);
return v___x_5302_;
}
}
}
v___jp_5306_:
{
lean_object* v___x_5312_; lean_object* v___x_5314_; 
v___x_5312_ = l_Lake_Artifact_trace(v___y_5307_);
if (v_isShared_5286_ == 0)
{
lean_ctor_set(v___x_5285_, 2, v_buildTime_5311_);
lean_ctor_set(v___x_5285_, 1, v___x_5312_);
lean_ctor_set(v___x_5285_, 0, v_log_5308_);
v___x_5314_ = v___x_5285_;
goto v_reusejp_5313_;
}
else
{
lean_object* v_reuseFailAlloc_5316_; 
v_reuseFailAlloc_5316_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5316_, 0, v_log_5308_);
lean_ctor_set(v_reuseFailAlloc_5316_, 1, v___x_5312_);
lean_ctor_set(v_reuseFailAlloc_5316_, 2, v_buildTime_5311_);
v___x_5314_ = v_reuseFailAlloc_5316_;
goto v_reusejp_5313_;
}
v_reusejp_5313_:
{
lean_object* v___x_5315_; 
lean_ctor_set_uint8(v___x_5314_, sizeof(void*)*3, v_action_5309_);
lean_ctor_set_uint8(v___x_5314_, sizeof(void*)*3 + 1, v_wantsRebuild_5310_);
v___x_5315_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v___y_5307_, v___x_5288_, v___x_5314_);
lean_dec_ref(v___x_5288_);
return v___x_5315_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___boxed(lean_object* v_file_5533_, lean_object* v_build_5534_, lean_object* v_text_5535_, lean_object* v_ext_5536_, lean_object* v_restore_5537_, lean_object* v_exe_5538_, lean_object* v_platformIndependent_5539_, lean_object* v_a_5540_, lean_object* v_a_5541_, lean_object* v_a_5542_, lean_object* v_a_5543_, lean_object* v_a_5544_, lean_object* v_a_5545_, lean_object* v_a_5546_){
_start:
{
uint8_t v_text_boxed_5547_; uint8_t v_restore_boxed_5548_; uint8_t v_exe_boxed_5549_; uint8_t v_platformIndependent_boxed_5550_; lean_object* v_res_5551_; 
v_text_boxed_5547_ = lean_unbox(v_text_5535_);
v_restore_boxed_5548_ = lean_unbox(v_restore_5537_);
v_exe_boxed_5549_ = lean_unbox(v_exe_5538_);
v_platformIndependent_boxed_5550_ = lean_unbox(v_platformIndependent_5539_);
v_res_5551_ = l_Lake_buildArtifactUnlessUpToDate(v_file_5533_, v_build_5534_, v_text_boxed_5547_, v_ext_5536_, v_restore_boxed_5548_, v_exe_boxed_5549_, v_platformIndependent_boxed_5550_, v_a_5540_, v_a_5541_, v_a_5542_, v_a_5543_, v_a_5544_, v_a_5545_);
lean_dec_ref(v_a_5544_);
lean_dec(v_a_5543_);
lean_dec(v_a_5542_);
lean_dec(v_a_5541_);
return v_res_5551_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0(lean_object* v_extraDepTrace_5553_, lean_object* v_build_5554_, lean_object* v_file_5555_, uint8_t v_text_5556_, lean_object* v_depInfo_5557_, lean_object* v___y_5558_, lean_object* v___y_5559_, lean_object* v___y_5560_, lean_object* v___y_5561_, lean_object* v___y_5562_, lean_object* v___y_5563_){
_start:
{
lean_object* v___x_5565_; 
lean_inc_ref(v___y_5562_);
lean_inc(v___y_5561_);
lean_inc(v___y_5560_);
lean_inc(v___y_5559_);
lean_inc_ref(v___y_5558_);
v___x_5565_ = lean_apply_7(v_extraDepTrace_5553_, v___y_5558_, v___y_5559_, v___y_5560_, v___y_5561_, v___y_5562_, v___y_5563_, lean_box(0));
if (lean_obj_tag(v___x_5565_) == 0)
{
lean_object* v_a_5566_; lean_object* v_a_5567_; lean_object* v_log_5568_; uint8_t v_action_5569_; uint8_t v_wantsRebuild_5570_; lean_object* v_trace_5571_; lean_object* v_buildTime_5572_; lean_object* v___x_5574_; uint8_t v_isShared_5575_; uint8_t v_isSharedCheck_5603_; 
v_a_5566_ = lean_ctor_get(v___x_5565_, 1);
lean_inc(v_a_5566_);
v_a_5567_ = lean_ctor_get(v___x_5565_, 0);
lean_inc(v_a_5567_);
lean_dec_ref(v___x_5565_);
v_log_5568_ = lean_ctor_get(v_a_5566_, 0);
v_action_5569_ = lean_ctor_get_uint8(v_a_5566_, sizeof(void*)*3);
v_wantsRebuild_5570_ = lean_ctor_get_uint8(v_a_5566_, sizeof(void*)*3 + 1);
v_trace_5571_ = lean_ctor_get(v_a_5566_, 1);
v_buildTime_5572_ = lean_ctor_get(v_a_5566_, 2);
v_isSharedCheck_5603_ = !lean_is_exclusive(v_a_5566_);
if (v_isSharedCheck_5603_ == 0)
{
v___x_5574_ = v_a_5566_;
v_isShared_5575_ = v_isSharedCheck_5603_;
goto v_resetjp_5573_;
}
else
{
lean_inc(v_buildTime_5572_);
lean_inc(v_trace_5571_);
lean_inc(v_log_5568_);
lean_dec(v_a_5566_);
v___x_5574_ = lean_box(0);
v_isShared_5575_ = v_isSharedCheck_5603_;
goto v_resetjp_5573_;
}
v_resetjp_5573_:
{
lean_object* v___x_5576_; lean_object* v___x_5578_; 
v___x_5576_ = l_Lake_BuildTrace_mix(v_trace_5571_, v_a_5567_);
if (v_isShared_5575_ == 0)
{
lean_ctor_set(v___x_5574_, 1, v___x_5576_);
v___x_5578_ = v___x_5574_;
goto v_reusejp_5577_;
}
else
{
lean_object* v_reuseFailAlloc_5602_; 
v_reuseFailAlloc_5602_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5602_, 0, v_log_5568_);
lean_ctor_set(v_reuseFailAlloc_5602_, 1, v___x_5576_);
lean_ctor_set(v_reuseFailAlloc_5602_, 2, v_buildTime_5572_);
lean_ctor_set_uint8(v_reuseFailAlloc_5602_, sizeof(void*)*3, v_action_5569_);
lean_ctor_set_uint8(v_reuseFailAlloc_5602_, sizeof(void*)*3 + 1, v_wantsRebuild_5570_);
v___x_5578_ = v_reuseFailAlloc_5602_;
goto v_reusejp_5577_;
}
v_reusejp_5577_:
{
lean_object* v___x_5579_; lean_object* v___x_5580_; uint8_t v___x_5581_; lean_object* v___x_5582_; 
v___x_5579_ = lean_apply_1(v_build_5554_, v_depInfo_5557_);
v___x_5580_ = ((lean_object*)(l_Lake_buildFileAfterDep___redArg___lam__0___closed__0));
v___x_5581_ = 0;
v___x_5582_ = l_Lake_buildArtifactUnlessUpToDate(v_file_5555_, v___x_5579_, v_text_5556_, v___x_5580_, v___x_5581_, v___x_5581_, v___x_5581_, v___y_5558_, v___y_5559_, v___y_5560_, v___y_5561_, v___y_5562_, v___x_5578_);
if (lean_obj_tag(v___x_5582_) == 0)
{
lean_object* v_a_5583_; lean_object* v_a_5584_; lean_object* v___x_5586_; uint8_t v_isShared_5587_; uint8_t v_isSharedCheck_5592_; 
v_a_5583_ = lean_ctor_get(v___x_5582_, 0);
v_a_5584_ = lean_ctor_get(v___x_5582_, 1);
v_isSharedCheck_5592_ = !lean_is_exclusive(v___x_5582_);
if (v_isSharedCheck_5592_ == 0)
{
v___x_5586_ = v___x_5582_;
v_isShared_5587_ = v_isSharedCheck_5592_;
goto v_resetjp_5585_;
}
else
{
lean_inc(v_a_5584_);
lean_inc(v_a_5583_);
lean_dec(v___x_5582_);
v___x_5586_ = lean_box(0);
v_isShared_5587_ = v_isSharedCheck_5592_;
goto v_resetjp_5585_;
}
v_resetjp_5585_:
{
lean_object* v_path_5588_; lean_object* v___x_5590_; 
v_path_5588_ = lean_ctor_get(v_a_5583_, 1);
lean_inc_ref(v_path_5588_);
lean_dec(v_a_5583_);
if (v_isShared_5587_ == 0)
{
lean_ctor_set(v___x_5586_, 0, v_path_5588_);
v___x_5590_ = v___x_5586_;
goto v_reusejp_5589_;
}
else
{
lean_object* v_reuseFailAlloc_5591_; 
v_reuseFailAlloc_5591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5591_, 0, v_path_5588_);
lean_ctor_set(v_reuseFailAlloc_5591_, 1, v_a_5584_);
v___x_5590_ = v_reuseFailAlloc_5591_;
goto v_reusejp_5589_;
}
v_reusejp_5589_:
{
return v___x_5590_;
}
}
}
else
{
lean_object* v_a_5593_; lean_object* v_a_5594_; lean_object* v___x_5596_; uint8_t v_isShared_5597_; uint8_t v_isSharedCheck_5601_; 
v_a_5593_ = lean_ctor_get(v___x_5582_, 0);
v_a_5594_ = lean_ctor_get(v___x_5582_, 1);
v_isSharedCheck_5601_ = !lean_is_exclusive(v___x_5582_);
if (v_isSharedCheck_5601_ == 0)
{
v___x_5596_ = v___x_5582_;
v_isShared_5597_ = v_isSharedCheck_5601_;
goto v_resetjp_5595_;
}
else
{
lean_inc(v_a_5594_);
lean_inc(v_a_5593_);
lean_dec(v___x_5582_);
v___x_5596_ = lean_box(0);
v_isShared_5597_ = v_isSharedCheck_5601_;
goto v_resetjp_5595_;
}
v_resetjp_5595_:
{
lean_object* v___x_5599_; 
if (v_isShared_5597_ == 0)
{
v___x_5599_ = v___x_5596_;
goto v_reusejp_5598_;
}
else
{
lean_object* v_reuseFailAlloc_5600_; 
v_reuseFailAlloc_5600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5600_, 0, v_a_5593_);
lean_ctor_set(v_reuseFailAlloc_5600_, 1, v_a_5594_);
v___x_5599_ = v_reuseFailAlloc_5600_;
goto v_reusejp_5598_;
}
v_reusejp_5598_:
{
return v___x_5599_;
}
}
}
}
}
}
else
{
lean_object* v_a_5604_; lean_object* v_a_5605_; lean_object* v___x_5607_; uint8_t v_isShared_5608_; uint8_t v_isSharedCheck_5612_; 
lean_dec_ref(v___y_5558_);
lean_dec(v_depInfo_5557_);
lean_dec_ref(v_file_5555_);
lean_dec_ref(v_build_5554_);
v_a_5604_ = lean_ctor_get(v___x_5565_, 0);
v_a_5605_ = lean_ctor_get(v___x_5565_, 1);
v_isSharedCheck_5612_ = !lean_is_exclusive(v___x_5565_);
if (v_isSharedCheck_5612_ == 0)
{
v___x_5607_ = v___x_5565_;
v_isShared_5608_ = v_isSharedCheck_5612_;
goto v_resetjp_5606_;
}
else
{
lean_inc(v_a_5605_);
lean_inc(v_a_5604_);
lean_dec(v___x_5565_);
v___x_5607_ = lean_box(0);
v_isShared_5608_ = v_isSharedCheck_5612_;
goto v_resetjp_5606_;
}
v_resetjp_5606_:
{
lean_object* v___x_5610_; 
if (v_isShared_5608_ == 0)
{
v___x_5610_ = v___x_5607_;
goto v_reusejp_5609_;
}
else
{
lean_object* v_reuseFailAlloc_5611_; 
v_reuseFailAlloc_5611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5611_, 0, v_a_5604_);
lean_ctor_set(v_reuseFailAlloc_5611_, 1, v_a_5605_);
v___x_5610_ = v_reuseFailAlloc_5611_;
goto v_reusejp_5609_;
}
v_reusejp_5609_:
{
return v___x_5610_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0___boxed(lean_object* v_extraDepTrace_5613_, lean_object* v_build_5614_, lean_object* v_file_5615_, lean_object* v_text_5616_, lean_object* v_depInfo_5617_, lean_object* v___y_5618_, lean_object* v___y_5619_, lean_object* v___y_5620_, lean_object* v___y_5621_, lean_object* v___y_5622_, lean_object* v___y_5623_, lean_object* v___y_5624_){
_start:
{
uint8_t v_text_boxed_5625_; lean_object* v_res_5626_; 
v_text_boxed_5625_ = lean_unbox(v_text_5616_);
v_res_5626_ = l_Lake_buildFileAfterDep___redArg___lam__0(v_extraDepTrace_5613_, v_build_5614_, v_file_5615_, v_text_boxed_5625_, v_depInfo_5617_, v___y_5618_, v___y_5619_, v___y_5620_, v___y_5621_, v___y_5622_, v___y_5623_);
lean_dec_ref(v___y_5622_);
lean_dec(v___y_5621_);
lean_dec(v___y_5620_);
lean_dec(v___y_5619_);
return v_res_5626_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg(lean_object* v_file_5627_, lean_object* v_dep_5628_, lean_object* v_build_5629_, lean_object* v_extraDepTrace_5630_, uint8_t v_text_5631_, lean_object* v_a_5632_, lean_object* v_a_5633_, lean_object* v_a_5634_, lean_object* v_a_5635_, lean_object* v_a_5636_, lean_object* v_a_5637_){
_start:
{
lean_object* v___x_5639_; lean_object* v___f_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; uint8_t v___x_5643_; lean_object* v___x_5644_; 
v___x_5639_ = lean_box(v_text_5631_);
v___f_5640_ = lean_alloc_closure((void*)(l_Lake_buildFileAfterDep___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_5640_, 0, v_extraDepTrace_5630_);
lean_closure_set(v___f_5640_, 1, v_build_5629_);
lean_closure_set(v___f_5640_, 2, v_file_5627_);
lean_closure_set(v___f_5640_, 3, v___x_5639_);
v___x_5641_ = l_Lake_instDataKindFilePath;
v___x_5642_ = lean_unsigned_to_nat(0u);
v___x_5643_ = 0;
v___x_5644_ = l_Lake_Job_mapM___redArg(v___x_5641_, v_dep_5628_, v___f_5640_, v___x_5642_, v___x_5643_, v_a_5632_, v_a_5633_, v_a_5634_, v_a_5635_, v_a_5636_, v_a_5637_);
return v___x_5644_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___boxed(lean_object* v_file_5645_, lean_object* v_dep_5646_, lean_object* v_build_5647_, lean_object* v_extraDepTrace_5648_, lean_object* v_text_5649_, lean_object* v_a_5650_, lean_object* v_a_5651_, lean_object* v_a_5652_, lean_object* v_a_5653_, lean_object* v_a_5654_, lean_object* v_a_5655_, lean_object* v_a_5656_){
_start:
{
uint8_t v_text_boxed_5657_; lean_object* v_res_5658_; 
v_text_boxed_5657_ = lean_unbox(v_text_5649_);
v_res_5658_ = l_Lake_buildFileAfterDep___redArg(v_file_5645_, v_dep_5646_, v_build_5647_, v_extraDepTrace_5648_, v_text_boxed_5657_, v_a_5650_, v_a_5651_, v_a_5652_, v_a_5653_, v_a_5654_, v_a_5655_);
lean_dec_ref(v_a_5655_);
lean_dec_ref(v_a_5654_);
lean_dec(v_a_5653_);
lean_dec(v_a_5652_);
lean_dec(v_a_5651_);
return v_res_5658_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep(lean_object* v_00_u03b1_5659_, lean_object* v_file_5660_, lean_object* v_dep_5661_, lean_object* v_build_5662_, lean_object* v_extraDepTrace_5663_, uint8_t v_text_5664_, lean_object* v_a_5665_, lean_object* v_a_5666_, lean_object* v_a_5667_, lean_object* v_a_5668_, lean_object* v_a_5669_, lean_object* v_a_5670_){
_start:
{
lean_object* v___x_5672_; lean_object* v___f_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; uint8_t v___x_5676_; lean_object* v___x_5677_; 
v___x_5672_ = lean_box(v_text_5664_);
v___f_5673_ = lean_alloc_closure((void*)(l_Lake_buildFileAfterDep___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_5673_, 0, v_extraDepTrace_5663_);
lean_closure_set(v___f_5673_, 1, v_build_5662_);
lean_closure_set(v___f_5673_, 2, v_file_5660_);
lean_closure_set(v___f_5673_, 3, v___x_5672_);
v___x_5674_ = l_Lake_instDataKindFilePath;
v___x_5675_ = lean_unsigned_to_nat(0u);
v___x_5676_ = 0;
v___x_5677_ = l_Lake_Job_mapM___redArg(v___x_5674_, v_dep_5661_, v___f_5673_, v___x_5675_, v___x_5676_, v_a_5665_, v_a_5666_, v_a_5667_, v_a_5668_, v_a_5669_, v_a_5670_);
return v___x_5677_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___boxed(lean_object* v_00_u03b1_5678_, lean_object* v_file_5679_, lean_object* v_dep_5680_, lean_object* v_build_5681_, lean_object* v_extraDepTrace_5682_, lean_object* v_text_5683_, lean_object* v_a_5684_, lean_object* v_a_5685_, lean_object* v_a_5686_, lean_object* v_a_5687_, lean_object* v_a_5688_, lean_object* v_a_5689_, lean_object* v_a_5690_){
_start:
{
uint8_t v_text_boxed_5691_; lean_object* v_res_5692_; 
v_text_boxed_5691_ = lean_unbox(v_text_5683_);
v_res_5692_ = l_Lake_buildFileAfterDep(v_00_u03b1_5678_, v_file_5679_, v_dep_5680_, v_build_5681_, v_extraDepTrace_5682_, v_text_boxed_5691_, v_a_5684_, v_a_5685_, v_a_5686_, v_a_5687_, v_a_5688_, v_a_5689_);
lean_dec_ref(v_a_5689_);
lean_dec_ref(v_a_5688_);
lean_dec(v_a_5687_);
lean_dec(v_a_5686_);
lean_dec(v_a_5685_);
return v_res_5692_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(lean_object* v_info_5693_){
_start:
{
lean_object* v___x_5695_; 
v___x_5695_ = l_Lake_computeBinFileHash(v_info_5693_);
if (lean_obj_tag(v___x_5695_) == 0)
{
lean_object* v_a_5696_; lean_object* v___x_5697_; 
v_a_5696_ = lean_ctor_get(v___x_5695_, 0);
lean_inc(v_a_5696_);
lean_dec_ref(v___x_5695_);
v___x_5697_ = lean_io_metadata(v_info_5693_);
if (lean_obj_tag(v___x_5697_) == 0)
{
lean_object* v_a_5698_; lean_object* v___x_5700_; uint8_t v_isShared_5701_; uint8_t v_isSharedCheck_5709_; 
v_a_5698_ = lean_ctor_get(v___x_5697_, 0);
v_isSharedCheck_5709_ = !lean_is_exclusive(v___x_5697_);
if (v_isSharedCheck_5709_ == 0)
{
v___x_5700_ = v___x_5697_;
v_isShared_5701_ = v_isSharedCheck_5709_;
goto v_resetjp_5699_;
}
else
{
lean_inc(v_a_5698_);
lean_dec(v___x_5697_);
v___x_5700_ = lean_box(0);
v_isShared_5701_ = v_isSharedCheck_5709_;
goto v_resetjp_5699_;
}
v_resetjp_5699_:
{
lean_object* v_modified_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; uint64_t v___x_5705_; lean_object* v___x_5707_; 
v_modified_5702_ = lean_ctor_get(v_a_5698_, 1);
lean_inc_ref(v_modified_5702_);
lean_dec(v_a_5698_);
v___x_5703_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_5704_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5704_, 0, v_info_5693_);
lean_ctor_set(v___x_5704_, 1, v___x_5703_);
lean_ctor_set(v___x_5704_, 2, v_modified_5702_);
v___x_5705_ = lean_unbox_uint64(v_a_5696_);
lean_dec(v_a_5696_);
lean_ctor_set_uint64(v___x_5704_, sizeof(void*)*3, v___x_5705_);
if (v_isShared_5701_ == 0)
{
lean_ctor_set(v___x_5700_, 0, v___x_5704_);
v___x_5707_ = v___x_5700_;
goto v_reusejp_5706_;
}
else
{
lean_object* v_reuseFailAlloc_5708_; 
v_reuseFailAlloc_5708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5708_, 0, v___x_5704_);
v___x_5707_ = v_reuseFailAlloc_5708_;
goto v_reusejp_5706_;
}
v_reusejp_5706_:
{
return v___x_5707_;
}
}
}
else
{
lean_object* v_a_5710_; lean_object* v___x_5712_; uint8_t v_isShared_5713_; uint8_t v_isSharedCheck_5717_; 
lean_dec(v_a_5696_);
lean_dec_ref(v_info_5693_);
v_a_5710_ = lean_ctor_get(v___x_5697_, 0);
v_isSharedCheck_5717_ = !lean_is_exclusive(v___x_5697_);
if (v_isSharedCheck_5717_ == 0)
{
v___x_5712_ = v___x_5697_;
v_isShared_5713_ = v_isSharedCheck_5717_;
goto v_resetjp_5711_;
}
else
{
lean_inc(v_a_5710_);
lean_dec(v___x_5697_);
v___x_5712_ = lean_box(0);
v_isShared_5713_ = v_isSharedCheck_5717_;
goto v_resetjp_5711_;
}
v_resetjp_5711_:
{
lean_object* v___x_5715_; 
if (v_isShared_5713_ == 0)
{
v___x_5715_ = v___x_5712_;
goto v_reusejp_5714_;
}
else
{
lean_object* v_reuseFailAlloc_5716_; 
v_reuseFailAlloc_5716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5716_, 0, v_a_5710_);
v___x_5715_ = v_reuseFailAlloc_5716_;
goto v_reusejp_5714_;
}
v_reusejp_5714_:
{
return v___x_5715_;
}
}
}
}
else
{
lean_object* v_a_5718_; lean_object* v___x_5720_; uint8_t v_isShared_5721_; uint8_t v_isSharedCheck_5725_; 
lean_dec_ref(v_info_5693_);
v_a_5718_ = lean_ctor_get(v___x_5695_, 0);
v_isSharedCheck_5725_ = !lean_is_exclusive(v___x_5695_);
if (v_isSharedCheck_5725_ == 0)
{
v___x_5720_ = v___x_5695_;
v_isShared_5721_ = v_isSharedCheck_5725_;
goto v_resetjp_5719_;
}
else
{
lean_inc(v_a_5718_);
lean_dec(v___x_5695_);
v___x_5720_ = lean_box(0);
v_isShared_5721_ = v_isSharedCheck_5725_;
goto v_resetjp_5719_;
}
v_resetjp_5719_:
{
lean_object* v___x_5723_; 
if (v_isShared_5721_ == 0)
{
v___x_5723_ = v___x_5720_;
goto v_reusejp_5722_;
}
else
{
lean_object* v_reuseFailAlloc_5724_; 
v_reuseFailAlloc_5724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5724_, 0, v_a_5718_);
v___x_5723_ = v_reuseFailAlloc_5724_;
goto v_reusejp_5722_;
}
v_reusejp_5722_:
{
return v___x_5723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0___boxed(lean_object* v_info_5726_, lean_object* v_a_5727_){
_start:
{
lean_object* v_res_5728_; 
v_res_5728_ = l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(v_info_5726_);
return v_res_5728_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0(lean_object* v_path_5729_, lean_object* v___y_5730_, lean_object* v___y_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_, lean_object* v___y_5734_, lean_object* v___y_5735_){
_start:
{
lean_object* v_log_5737_; uint8_t v_action_5738_; uint8_t v_wantsRebuild_5739_; lean_object* v_trace_5740_; lean_object* v_buildTime_5741_; lean_object* v___x_5743_; uint8_t v_isShared_5744_; uint8_t v_isSharedCheck_5761_; 
v_log_5737_ = lean_ctor_get(v___y_5735_, 0);
v_action_5738_ = lean_ctor_get_uint8(v___y_5735_, sizeof(void*)*3);
v_wantsRebuild_5739_ = lean_ctor_get_uint8(v___y_5735_, sizeof(void*)*3 + 1);
v_trace_5740_ = lean_ctor_get(v___y_5735_, 1);
v_buildTime_5741_ = lean_ctor_get(v___y_5735_, 2);
v_isSharedCheck_5761_ = !lean_is_exclusive(v___y_5735_);
if (v_isSharedCheck_5761_ == 0)
{
v___x_5743_ = v___y_5735_;
v_isShared_5744_ = v_isSharedCheck_5761_;
goto v_resetjp_5742_;
}
else
{
lean_inc(v_buildTime_5741_);
lean_inc(v_trace_5740_);
lean_inc(v_log_5737_);
lean_dec(v___y_5735_);
v___x_5743_ = lean_box(0);
v_isShared_5744_ = v_isSharedCheck_5761_;
goto v_resetjp_5742_;
}
v_resetjp_5742_:
{
lean_object* v___x_5745_; 
lean_inc_ref(v_path_5729_);
v___x_5745_ = l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(v_path_5729_);
if (lean_obj_tag(v___x_5745_) == 0)
{
lean_object* v_a_5746_; lean_object* v___x_5748_; 
lean_dec_ref(v_trace_5740_);
v_a_5746_ = lean_ctor_get(v___x_5745_, 0);
lean_inc(v_a_5746_);
lean_dec_ref(v___x_5745_);
if (v_isShared_5744_ == 0)
{
lean_ctor_set(v___x_5743_, 1, v_a_5746_);
v___x_5748_ = v___x_5743_;
goto v_reusejp_5747_;
}
else
{
lean_object* v_reuseFailAlloc_5750_; 
v_reuseFailAlloc_5750_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5750_, 0, v_log_5737_);
lean_ctor_set(v_reuseFailAlloc_5750_, 1, v_a_5746_);
lean_ctor_set(v_reuseFailAlloc_5750_, 2, v_buildTime_5741_);
lean_ctor_set_uint8(v_reuseFailAlloc_5750_, sizeof(void*)*3, v_action_5738_);
lean_ctor_set_uint8(v_reuseFailAlloc_5750_, sizeof(void*)*3 + 1, v_wantsRebuild_5739_);
v___x_5748_ = v_reuseFailAlloc_5750_;
goto v_reusejp_5747_;
}
v_reusejp_5747_:
{
lean_object* v___x_5749_; 
v___x_5749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5749_, 0, v_path_5729_);
lean_ctor_set(v___x_5749_, 1, v___x_5748_);
return v___x_5749_;
}
}
else
{
lean_object* v_a_5751_; lean_object* v___x_5752_; uint8_t v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5758_; 
lean_dec_ref(v_path_5729_);
v_a_5751_ = lean_ctor_get(v___x_5745_, 0);
lean_inc(v_a_5751_);
lean_dec_ref(v___x_5745_);
v___x_5752_ = lean_io_error_to_string(v_a_5751_);
v___x_5753_ = 3;
v___x_5754_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5754_, 0, v___x_5752_);
lean_ctor_set_uint8(v___x_5754_, sizeof(void*)*1, v___x_5753_);
v___x_5755_ = lean_array_get_size(v_log_5737_);
v___x_5756_ = lean_array_push(v_log_5737_, v___x_5754_);
if (v_isShared_5744_ == 0)
{
lean_ctor_set(v___x_5743_, 0, v___x_5756_);
v___x_5758_ = v___x_5743_;
goto v_reusejp_5757_;
}
else
{
lean_object* v_reuseFailAlloc_5760_; 
v_reuseFailAlloc_5760_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5760_, 0, v___x_5756_);
lean_ctor_set(v_reuseFailAlloc_5760_, 1, v_trace_5740_);
lean_ctor_set(v_reuseFailAlloc_5760_, 2, v_buildTime_5741_);
lean_ctor_set_uint8(v_reuseFailAlloc_5760_, sizeof(void*)*3, v_action_5738_);
lean_ctor_set_uint8(v_reuseFailAlloc_5760_, sizeof(void*)*3 + 1, v_wantsRebuild_5739_);
v___x_5758_ = v_reuseFailAlloc_5760_;
goto v_reusejp_5757_;
}
v_reusejp_5757_:
{
lean_object* v___x_5759_; 
v___x_5759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5759_, 0, v___x_5755_);
lean_ctor_set(v___x_5759_, 1, v___x_5758_);
return v___x_5759_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0___boxed(lean_object* v_path_5762_, lean_object* v___y_5763_, lean_object* v___y_5764_, lean_object* v___y_5765_, lean_object* v___y_5766_, lean_object* v___y_5767_, lean_object* v___y_5768_, lean_object* v___y_5769_){
_start:
{
lean_object* v_res_5770_; 
v_res_5770_ = l_Lake_inputBinFile___redArg___lam__0(v_path_5762_, v___y_5763_, v___y_5764_, v___y_5765_, v___y_5766_, v___y_5767_, v___y_5768_);
lean_dec_ref(v___y_5767_);
lean_dec(v___y_5766_);
lean_dec(v___y_5765_);
lean_dec(v___y_5764_);
lean_dec_ref(v___y_5763_);
return v_res_5770_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg(lean_object* v_path_5772_, lean_object* v_a_5773_, lean_object* v_a_5774_, lean_object* v_a_5775_, lean_object* v_a_5776_, lean_object* v_a_5777_){
_start:
{
lean_object* v___f_5779_; lean_object* v___x_5780_; lean_object* v___x_5781_; lean_object* v___x_5782_; lean_object* v___x_5783_; 
v___f_5779_ = lean_alloc_closure((void*)(l_Lake_inputBinFile___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5779_, 0, v_path_5772_);
v___x_5780_ = l_Lake_instDataKindFilePath;
v___x_5781_ = lean_unsigned_to_nat(0u);
v___x_5782_ = ((lean_object*)(l_Lake_inputBinFile___redArg___closed__0));
v___x_5783_ = l_Lake_Job_async___redArg(v___x_5780_, v___f_5779_, v___x_5781_, v___x_5782_, v_a_5773_, v_a_5774_, v_a_5775_, v_a_5776_, v_a_5777_);
return v___x_5783_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___boxed(lean_object* v_path_5784_, lean_object* v_a_5785_, lean_object* v_a_5786_, lean_object* v_a_5787_, lean_object* v_a_5788_, lean_object* v_a_5789_, lean_object* v_a_5790_){
_start:
{
lean_object* v_res_5791_; 
v_res_5791_ = l_Lake_inputBinFile___redArg(v_path_5784_, v_a_5785_, v_a_5786_, v_a_5787_, v_a_5788_, v_a_5789_);
lean_dec_ref(v_a_5789_);
lean_dec(v_a_5788_);
lean_dec(v_a_5787_);
lean_dec(v_a_5786_);
return v_res_5791_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile(lean_object* v_path_5792_, lean_object* v_a_5793_, lean_object* v_a_5794_, lean_object* v_a_5795_, lean_object* v_a_5796_, lean_object* v_a_5797_, lean_object* v_a_5798_){
_start:
{
lean_object* v___x_5800_; 
v___x_5800_ = l_Lake_inputBinFile___redArg(v_path_5792_, v_a_5793_, v_a_5794_, v_a_5795_, v_a_5796_, v_a_5797_);
return v___x_5800_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___boxed(lean_object* v_path_5801_, lean_object* v_a_5802_, lean_object* v_a_5803_, lean_object* v_a_5804_, lean_object* v_a_5805_, lean_object* v_a_5806_, lean_object* v_a_5807_, lean_object* v_a_5808_){
_start:
{
lean_object* v_res_5809_; 
v_res_5809_ = l_Lake_inputBinFile(v_path_5801_, v_a_5802_, v_a_5803_, v_a_5804_, v_a_5805_, v_a_5806_, v_a_5807_);
lean_dec_ref(v_a_5807_);
lean_dec_ref(v_a_5806_);
lean_dec(v_a_5805_);
lean_dec(v_a_5804_);
lean_dec(v_a_5803_);
return v_res_5809_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(lean_object* v_info_5810_){
_start:
{
lean_object* v___x_5812_; 
v___x_5812_ = l_Lake_computeTextFileHash(v_info_5810_);
if (lean_obj_tag(v___x_5812_) == 0)
{
lean_object* v_a_5813_; lean_object* v___x_5814_; 
v_a_5813_ = lean_ctor_get(v___x_5812_, 0);
lean_inc(v_a_5813_);
lean_dec_ref(v___x_5812_);
v___x_5814_ = lean_io_metadata(v_info_5810_);
if (lean_obj_tag(v___x_5814_) == 0)
{
lean_object* v_a_5815_; lean_object* v___x_5817_; uint8_t v_isShared_5818_; uint8_t v_isSharedCheck_5826_; 
v_a_5815_ = lean_ctor_get(v___x_5814_, 0);
v_isSharedCheck_5826_ = !lean_is_exclusive(v___x_5814_);
if (v_isSharedCheck_5826_ == 0)
{
v___x_5817_ = v___x_5814_;
v_isShared_5818_ = v_isSharedCheck_5826_;
goto v_resetjp_5816_;
}
else
{
lean_inc(v_a_5815_);
lean_dec(v___x_5814_);
v___x_5817_ = lean_box(0);
v_isShared_5818_ = v_isSharedCheck_5826_;
goto v_resetjp_5816_;
}
v_resetjp_5816_:
{
lean_object* v_modified_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; uint64_t v___x_5822_; lean_object* v___x_5824_; 
v_modified_5819_ = lean_ctor_get(v_a_5815_, 1);
lean_inc_ref(v_modified_5819_);
lean_dec(v_a_5815_);
v___x_5820_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_5821_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5821_, 0, v_info_5810_);
lean_ctor_set(v___x_5821_, 1, v___x_5820_);
lean_ctor_set(v___x_5821_, 2, v_modified_5819_);
v___x_5822_ = lean_unbox_uint64(v_a_5813_);
lean_dec(v_a_5813_);
lean_ctor_set_uint64(v___x_5821_, sizeof(void*)*3, v___x_5822_);
if (v_isShared_5818_ == 0)
{
lean_ctor_set(v___x_5817_, 0, v___x_5821_);
v___x_5824_ = v___x_5817_;
goto v_reusejp_5823_;
}
else
{
lean_object* v_reuseFailAlloc_5825_; 
v_reuseFailAlloc_5825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5825_, 0, v___x_5821_);
v___x_5824_ = v_reuseFailAlloc_5825_;
goto v_reusejp_5823_;
}
v_reusejp_5823_:
{
return v___x_5824_;
}
}
}
else
{
lean_object* v_a_5827_; lean_object* v___x_5829_; uint8_t v_isShared_5830_; uint8_t v_isSharedCheck_5834_; 
lean_dec(v_a_5813_);
lean_dec_ref(v_info_5810_);
v_a_5827_ = lean_ctor_get(v___x_5814_, 0);
v_isSharedCheck_5834_ = !lean_is_exclusive(v___x_5814_);
if (v_isSharedCheck_5834_ == 0)
{
v___x_5829_ = v___x_5814_;
v_isShared_5830_ = v_isSharedCheck_5834_;
goto v_resetjp_5828_;
}
else
{
lean_inc(v_a_5827_);
lean_dec(v___x_5814_);
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
else
{
lean_object* v_a_5835_; lean_object* v___x_5837_; uint8_t v_isShared_5838_; uint8_t v_isSharedCheck_5842_; 
lean_dec_ref(v_info_5810_);
v_a_5835_ = lean_ctor_get(v___x_5812_, 0);
v_isSharedCheck_5842_ = !lean_is_exclusive(v___x_5812_);
if (v_isSharedCheck_5842_ == 0)
{
v___x_5837_ = v___x_5812_;
v_isShared_5838_ = v_isSharedCheck_5842_;
goto v_resetjp_5836_;
}
else
{
lean_inc(v_a_5835_);
lean_dec(v___x_5812_);
v___x_5837_ = lean_box(0);
v_isShared_5838_ = v_isSharedCheck_5842_;
goto v_resetjp_5836_;
}
v_resetjp_5836_:
{
lean_object* v___x_5840_; 
if (v_isShared_5838_ == 0)
{
v___x_5840_ = v___x_5837_;
goto v_reusejp_5839_;
}
else
{
lean_object* v_reuseFailAlloc_5841_; 
v_reuseFailAlloc_5841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5841_, 0, v_a_5835_);
v___x_5840_ = v_reuseFailAlloc_5841_;
goto v_reusejp_5839_;
}
v_reusejp_5839_:
{
return v___x_5840_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0___boxed(lean_object* v_info_5843_, lean_object* v_a_5844_){
_start:
{
lean_object* v_res_5845_; 
v_res_5845_ = l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(v_info_5843_);
return v_res_5845_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0(lean_object* v_path_5846_, lean_object* v___y_5847_, lean_object* v___y_5848_, lean_object* v___y_5849_, lean_object* v___y_5850_, lean_object* v___y_5851_, lean_object* v___y_5852_){
_start:
{
lean_object* v_log_5854_; uint8_t v_action_5855_; uint8_t v_wantsRebuild_5856_; lean_object* v_trace_5857_; lean_object* v_buildTime_5858_; lean_object* v___x_5860_; uint8_t v_isShared_5861_; uint8_t v_isSharedCheck_5878_; 
v_log_5854_ = lean_ctor_get(v___y_5852_, 0);
v_action_5855_ = lean_ctor_get_uint8(v___y_5852_, sizeof(void*)*3);
v_wantsRebuild_5856_ = lean_ctor_get_uint8(v___y_5852_, sizeof(void*)*3 + 1);
v_trace_5857_ = lean_ctor_get(v___y_5852_, 1);
v_buildTime_5858_ = lean_ctor_get(v___y_5852_, 2);
v_isSharedCheck_5878_ = !lean_is_exclusive(v___y_5852_);
if (v_isSharedCheck_5878_ == 0)
{
v___x_5860_ = v___y_5852_;
v_isShared_5861_ = v_isSharedCheck_5878_;
goto v_resetjp_5859_;
}
else
{
lean_inc(v_buildTime_5858_);
lean_inc(v_trace_5857_);
lean_inc(v_log_5854_);
lean_dec(v___y_5852_);
v___x_5860_ = lean_box(0);
v_isShared_5861_ = v_isSharedCheck_5878_;
goto v_resetjp_5859_;
}
v_resetjp_5859_:
{
lean_object* v___x_5862_; 
lean_inc_ref(v_path_5846_);
v___x_5862_ = l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(v_path_5846_);
if (lean_obj_tag(v___x_5862_) == 0)
{
lean_object* v_a_5863_; lean_object* v___x_5865_; 
lean_dec_ref(v_trace_5857_);
v_a_5863_ = lean_ctor_get(v___x_5862_, 0);
lean_inc(v_a_5863_);
lean_dec_ref(v___x_5862_);
if (v_isShared_5861_ == 0)
{
lean_ctor_set(v___x_5860_, 1, v_a_5863_);
v___x_5865_ = v___x_5860_;
goto v_reusejp_5864_;
}
else
{
lean_object* v_reuseFailAlloc_5867_; 
v_reuseFailAlloc_5867_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5867_, 0, v_log_5854_);
lean_ctor_set(v_reuseFailAlloc_5867_, 1, v_a_5863_);
lean_ctor_set(v_reuseFailAlloc_5867_, 2, v_buildTime_5858_);
lean_ctor_set_uint8(v_reuseFailAlloc_5867_, sizeof(void*)*3, v_action_5855_);
lean_ctor_set_uint8(v_reuseFailAlloc_5867_, sizeof(void*)*3 + 1, v_wantsRebuild_5856_);
v___x_5865_ = v_reuseFailAlloc_5867_;
goto v_reusejp_5864_;
}
v_reusejp_5864_:
{
lean_object* v___x_5866_; 
v___x_5866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5866_, 0, v_path_5846_);
lean_ctor_set(v___x_5866_, 1, v___x_5865_);
return v___x_5866_;
}
}
else
{
lean_object* v_a_5868_; lean_object* v___x_5869_; uint8_t v___x_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___x_5875_; 
lean_dec_ref(v_path_5846_);
v_a_5868_ = lean_ctor_get(v___x_5862_, 0);
lean_inc(v_a_5868_);
lean_dec_ref(v___x_5862_);
v___x_5869_ = lean_io_error_to_string(v_a_5868_);
v___x_5870_ = 3;
v___x_5871_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5871_, 0, v___x_5869_);
lean_ctor_set_uint8(v___x_5871_, sizeof(void*)*1, v___x_5870_);
v___x_5872_ = lean_array_get_size(v_log_5854_);
v___x_5873_ = lean_array_push(v_log_5854_, v___x_5871_);
if (v_isShared_5861_ == 0)
{
lean_ctor_set(v___x_5860_, 0, v___x_5873_);
v___x_5875_ = v___x_5860_;
goto v_reusejp_5874_;
}
else
{
lean_object* v_reuseFailAlloc_5877_; 
v_reuseFailAlloc_5877_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5877_, 0, v___x_5873_);
lean_ctor_set(v_reuseFailAlloc_5877_, 1, v_trace_5857_);
lean_ctor_set(v_reuseFailAlloc_5877_, 2, v_buildTime_5858_);
lean_ctor_set_uint8(v_reuseFailAlloc_5877_, sizeof(void*)*3, v_action_5855_);
lean_ctor_set_uint8(v_reuseFailAlloc_5877_, sizeof(void*)*3 + 1, v_wantsRebuild_5856_);
v___x_5875_ = v_reuseFailAlloc_5877_;
goto v_reusejp_5874_;
}
v_reusejp_5874_:
{
lean_object* v___x_5876_; 
v___x_5876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5876_, 0, v___x_5872_);
lean_ctor_set(v___x_5876_, 1, v___x_5875_);
return v___x_5876_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0___boxed(lean_object* v_path_5879_, lean_object* v___y_5880_, lean_object* v___y_5881_, lean_object* v___y_5882_, lean_object* v___y_5883_, lean_object* v___y_5884_, lean_object* v___y_5885_, lean_object* v___y_5886_){
_start:
{
lean_object* v_res_5887_; 
v_res_5887_ = l_Lake_inputTextFile___redArg___lam__0(v_path_5879_, v___y_5880_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_, v___y_5885_);
lean_dec_ref(v___y_5884_);
lean_dec(v___y_5883_);
lean_dec(v___y_5882_);
lean_dec(v___y_5881_);
lean_dec_ref(v___y_5880_);
return v_res_5887_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg(lean_object* v_path_5888_, lean_object* v_a_5889_, lean_object* v_a_5890_, lean_object* v_a_5891_, lean_object* v_a_5892_, lean_object* v_a_5893_){
_start:
{
lean_object* v___f_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___x_5899_; 
v___f_5895_ = lean_alloc_closure((void*)(l_Lake_inputTextFile___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5895_, 0, v_path_5888_);
v___x_5896_ = l_Lake_instDataKindFilePath;
v___x_5897_ = lean_unsigned_to_nat(0u);
v___x_5898_ = ((lean_object*)(l_Lake_inputBinFile___redArg___closed__0));
v___x_5899_ = l_Lake_Job_async___redArg(v___x_5896_, v___f_5895_, v___x_5897_, v___x_5898_, v_a_5889_, v_a_5890_, v_a_5891_, v_a_5892_, v_a_5893_);
return v___x_5899_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___boxed(lean_object* v_path_5900_, lean_object* v_a_5901_, lean_object* v_a_5902_, lean_object* v_a_5903_, lean_object* v_a_5904_, lean_object* v_a_5905_, lean_object* v_a_5906_){
_start:
{
lean_object* v_res_5907_; 
v_res_5907_ = l_Lake_inputTextFile___redArg(v_path_5900_, v_a_5901_, v_a_5902_, v_a_5903_, v_a_5904_, v_a_5905_);
lean_dec_ref(v_a_5905_);
lean_dec(v_a_5904_);
lean_dec(v_a_5903_);
lean_dec(v_a_5902_);
return v_res_5907_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile(lean_object* v_path_5908_, lean_object* v_a_5909_, lean_object* v_a_5910_, lean_object* v_a_5911_, lean_object* v_a_5912_, lean_object* v_a_5913_, lean_object* v_a_5914_){
_start:
{
lean_object* v___x_5916_; 
v___x_5916_ = l_Lake_inputTextFile___redArg(v_path_5908_, v_a_5909_, v_a_5910_, v_a_5911_, v_a_5912_, v_a_5913_);
return v___x_5916_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___boxed(lean_object* v_path_5917_, lean_object* v_a_5918_, lean_object* v_a_5919_, lean_object* v_a_5920_, lean_object* v_a_5921_, lean_object* v_a_5922_, lean_object* v_a_5923_, lean_object* v_a_5924_){
_start:
{
lean_object* v_res_5925_; 
v_res_5925_ = l_Lake_inputTextFile(v_path_5917_, v_a_5918_, v_a_5919_, v_a_5920_, v_a_5921_, v_a_5922_, v_a_5923_);
lean_dec_ref(v_a_5923_);
lean_dec_ref(v_a_5922_);
lean_dec(v_a_5921_);
lean_dec(v_a_5920_);
lean_dec(v_a_5919_);
return v_res_5925_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg(lean_object* v_path_5926_, uint8_t v_text_5927_, lean_object* v_a_5928_, lean_object* v_a_5929_, lean_object* v_a_5930_, lean_object* v_a_5931_, lean_object* v_a_5932_){
_start:
{
if (v_text_5927_ == 0)
{
lean_object* v___x_5934_; 
v___x_5934_ = l_Lake_inputBinFile___redArg(v_path_5926_, v_a_5928_, v_a_5929_, v_a_5930_, v_a_5931_, v_a_5932_);
return v___x_5934_;
}
else
{
lean_object* v___x_5935_; 
v___x_5935_ = l_Lake_inputTextFile___redArg(v_path_5926_, v_a_5928_, v_a_5929_, v_a_5930_, v_a_5931_, v_a_5932_);
return v___x_5935_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg___boxed(lean_object* v_path_5936_, lean_object* v_text_5937_, lean_object* v_a_5938_, lean_object* v_a_5939_, lean_object* v_a_5940_, lean_object* v_a_5941_, lean_object* v_a_5942_, lean_object* v_a_5943_){
_start:
{
uint8_t v_text_boxed_5944_; lean_object* v_res_5945_; 
v_text_boxed_5944_ = lean_unbox(v_text_5937_);
v_res_5945_ = l_Lake_inputFile___redArg(v_path_5936_, v_text_boxed_5944_, v_a_5938_, v_a_5939_, v_a_5940_, v_a_5941_, v_a_5942_);
lean_dec_ref(v_a_5942_);
lean_dec(v_a_5941_);
lean_dec(v_a_5940_);
lean_dec(v_a_5939_);
return v_res_5945_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile(lean_object* v_path_5946_, uint8_t v_text_5947_, lean_object* v_a_5948_, lean_object* v_a_5949_, lean_object* v_a_5950_, lean_object* v_a_5951_, lean_object* v_a_5952_, lean_object* v_a_5953_){
_start:
{
if (v_text_5947_ == 0)
{
lean_object* v___x_5955_; 
v___x_5955_ = l_Lake_inputBinFile___redArg(v_path_5946_, v_a_5948_, v_a_5949_, v_a_5950_, v_a_5951_, v_a_5952_);
return v___x_5955_;
}
else
{
lean_object* v___x_5956_; 
v___x_5956_ = l_Lake_inputTextFile___redArg(v_path_5946_, v_a_5948_, v_a_5949_, v_a_5950_, v_a_5951_, v_a_5952_);
return v___x_5956_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___boxed(lean_object* v_path_5957_, lean_object* v_text_5958_, lean_object* v_a_5959_, lean_object* v_a_5960_, lean_object* v_a_5961_, lean_object* v_a_5962_, lean_object* v_a_5963_, lean_object* v_a_5964_, lean_object* v_a_5965_){
_start:
{
uint8_t v_text_boxed_5966_; lean_object* v_res_5967_; 
v_text_boxed_5966_ = lean_unbox(v_text_5958_);
v_res_5967_ = l_Lake_inputFile(v_path_5957_, v_text_boxed_5966_, v_a_5959_, v_a_5960_, v_a_5961_, v_a_5962_, v_a_5963_, v_a_5964_);
lean_dec_ref(v_a_5964_);
lean_dec_ref(v_a_5963_);
lean_dec(v_a_5962_);
lean_dec(v_a_5961_);
lean_dec(v_a_5960_);
return v_res_5967_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0(lean_object* v_x_5968_){
_start:
{
uint8_t v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; 
v___x_5970_ = 1;
v___x_5971_ = lean_box(v___x_5970_);
v___x_5972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5972_, 0, v___x_5971_);
return v___x_5972_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0___boxed(lean_object* v_x_5973_, lean_object* v___y_5974_){
_start:
{
lean_object* v_res_5975_; 
v_res_5975_ = l_Lake_inputDir___lam__0(v_x_5973_);
lean_dec_ref(v_x_5973_);
return v_res_5975_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(lean_object* v_filter_5976_, lean_object* v_as_5977_, size_t v_i_5978_, size_t v_stop_5979_, lean_object* v_b_5980_, lean_object* v___y_5981_){
_start:
{
lean_object* v_a_5984_; lean_object* v_a_5985_; uint8_t v___x_5989_; 
v___x_5989_ = lean_usize_dec_eq(v_i_5978_, v_stop_5979_);
if (v___x_5989_ == 0)
{
lean_object* v___x_5990_; uint8_t v___x_5991_; 
v___x_5990_ = lean_array_uget_borrowed(v_as_5977_, v_i_5978_);
v___x_5991_ = l_System_FilePath_isDir(v___x_5990_);
if (v___x_5991_ == 0)
{
lean_object* v___x_5992_; uint8_t v___x_5993_; 
lean_inc_ref(v_filter_5976_);
lean_inc(v___x_5990_);
v___x_5992_ = lean_apply_1(v_filter_5976_, v___x_5990_);
v___x_5993_ = lean_unbox(v___x_5992_);
if (v___x_5993_ == 0)
{
v_a_5984_ = v_b_5980_;
v_a_5985_ = v___y_5981_;
goto v___jp_5983_;
}
else
{
lean_object* v___x_5994_; 
lean_inc(v___x_5990_);
v___x_5994_ = lean_array_push(v_b_5980_, v___x_5990_);
v_a_5984_ = v___x_5994_;
v_a_5985_ = v___y_5981_;
goto v___jp_5983_;
}
}
else
{
v_a_5984_ = v_b_5980_;
v_a_5985_ = v___y_5981_;
goto v___jp_5983_;
}
}
else
{
lean_object* v___x_5995_; 
lean_dec_ref(v_filter_5976_);
v___x_5995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5995_, 0, v_b_5980_);
lean_ctor_set(v___x_5995_, 1, v___y_5981_);
return v___x_5995_;
}
v___jp_5983_:
{
size_t v___x_5986_; size_t v___x_5987_; 
v___x_5986_ = ((size_t)1ULL);
v___x_5987_ = lean_usize_add(v_i_5978_, v___x_5986_);
v_i_5978_ = v___x_5987_;
v_b_5980_ = v_a_5984_;
v___y_5981_ = v_a_5985_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg___boxed(lean_object* v_filter_5996_, lean_object* v_as_5997_, lean_object* v_i_5998_, lean_object* v_stop_5999_, lean_object* v_b_6000_, lean_object* v___y_6001_, lean_object* v___y_6002_){
_start:
{
size_t v_i_boxed_6003_; size_t v_stop_boxed_6004_; lean_object* v_res_6005_; 
v_i_boxed_6003_ = lean_unbox_usize(v_i_5998_);
lean_dec(v_i_5998_);
v_stop_boxed_6004_ = lean_unbox_usize(v_stop_5999_);
lean_dec(v_stop_5999_);
v_res_6005_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_5996_, v_as_5997_, v_i_boxed_6003_, v_stop_boxed_6004_, v_b_6000_, v___y_6001_);
lean_dec_ref(v_as_5997_);
return v_res_6005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(lean_object* v_as_6007_, lean_object* v_lo_6008_, lean_object* v_hi_6009_){
_start:
{
uint8_t v___x_6010_; 
v___x_6010_ = lean_nat_dec_lt(v_lo_6008_, v_hi_6009_);
if (v___x_6010_ == 0)
{
lean_dec(v_lo_6008_);
return v_as_6007_;
}
else
{
lean_object* v___f_6011_; lean_object* v___x_6012_; lean_object* v_fst_6013_; lean_object* v_snd_6014_; uint8_t v___x_6015_; 
v___f_6011_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___closed__0));
lean_inc(v_lo_6008_);
v___x_6012_ = l_Array_qpartition___redArg(v_as_6007_, v___f_6011_, v_lo_6008_, v_hi_6009_);
v_fst_6013_ = lean_ctor_get(v___x_6012_, 0);
lean_inc(v_fst_6013_);
v_snd_6014_ = lean_ctor_get(v___x_6012_, 1);
lean_inc(v_snd_6014_);
lean_dec_ref(v___x_6012_);
v___x_6015_ = lean_nat_dec_le(v_hi_6009_, v_fst_6013_);
if (v___x_6015_ == 0)
{
lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; 
v___x_6016_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_snd_6014_, v_lo_6008_, v_fst_6013_);
v___x_6017_ = lean_unsigned_to_nat(1u);
v___x_6018_ = lean_nat_add(v_fst_6013_, v___x_6017_);
lean_dec(v_fst_6013_);
v_as_6007_ = v___x_6016_;
v_lo_6008_ = v___x_6018_;
goto _start;
}
else
{
lean_dec(v_fst_6013_);
lean_dec(v_lo_6008_);
return v_snd_6014_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___boxed(lean_object* v_as_6020_, lean_object* v_lo_6021_, lean_object* v_hi_6022_){
_start:
{
lean_object* v_res_6023_; 
v_res_6023_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_as_6020_, v_lo_6021_, v_hi_6022_);
lean_dec(v_hi_6022_);
return v_res_6023_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1(lean_object* v_path_6026_, lean_object* v___f_6027_, lean_object* v_filter_6028_, lean_object* v___y_6029_, lean_object* v___y_6030_, lean_object* v___y_6031_, lean_object* v___y_6032_, lean_object* v___y_6033_, lean_object* v___y_6034_){
_start:
{
lean_object* v___y_6037_; lean_object* v___y_6038_; lean_object* v___y_6041_; lean_object* v___y_6042_; lean_object* v___y_6043_; lean_object* v___y_6044_; lean_object* v___y_6045_; lean_object* v___y_6048_; lean_object* v___y_6049_; lean_object* v___y_6050_; lean_object* v___y_6051_; lean_object* v___y_6052_; lean_object* v_log_6054_; uint8_t v_action_6055_; uint8_t v_wantsRebuild_6056_; lean_object* v_trace_6057_; lean_object* v_buildTime_6058_; lean_object* v___x_6059_; 
v_log_6054_ = lean_ctor_get(v___y_6034_, 0);
v_action_6055_ = lean_ctor_get_uint8(v___y_6034_, sizeof(void*)*3);
v_wantsRebuild_6056_ = lean_ctor_get_uint8(v___y_6034_, sizeof(void*)*3 + 1);
v_trace_6057_ = lean_ctor_get(v___y_6034_, 1);
v_buildTime_6058_ = lean_ctor_get(v___y_6034_, 2);
v___x_6059_ = l_System_FilePath_walkDir(v_path_6026_, v___f_6027_);
if (lean_obj_tag(v___x_6059_) == 0)
{
lean_object* v_a_6060_; lean_object* v___x_6061_; lean_object* v_a_6063_; lean_object* v_a_6064_; lean_object* v___y_6071_; lean_object* v___x_6074_; lean_object* v___x_6075_; uint8_t v___x_6076_; 
v_a_6060_ = lean_ctor_get(v___x_6059_, 0);
lean_inc(v_a_6060_);
lean_dec_ref(v___x_6059_);
v___x_6061_ = lean_unsigned_to_nat(0u);
v___x_6074_ = lean_array_get_size(v_a_6060_);
v___x_6075_ = ((lean_object*)(l_Lake_inputDir___lam__1___closed__0));
v___x_6076_ = lean_nat_dec_lt(v___x_6061_, v___x_6074_);
if (v___x_6076_ == 0)
{
lean_dec(v_a_6060_);
lean_dec_ref(v_filter_6028_);
v_a_6063_ = v___x_6075_;
v_a_6064_ = v___y_6034_;
goto v___jp_6062_;
}
else
{
uint8_t v___x_6077_; 
v___x_6077_ = lean_nat_dec_le(v___x_6074_, v___x_6074_);
if (v___x_6077_ == 0)
{
if (v___x_6076_ == 0)
{
lean_dec(v_a_6060_);
lean_dec_ref(v_filter_6028_);
v_a_6063_ = v___x_6075_;
v_a_6064_ = v___y_6034_;
goto v___jp_6062_;
}
else
{
size_t v___x_6078_; size_t v___x_6079_; lean_object* v___x_6080_; 
v___x_6078_ = ((size_t)0ULL);
v___x_6079_ = lean_usize_of_nat(v___x_6074_);
v___x_6080_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6028_, v_a_6060_, v___x_6078_, v___x_6079_, v___x_6075_, v___y_6034_);
lean_dec(v_a_6060_);
v___y_6071_ = v___x_6080_;
goto v___jp_6070_;
}
}
else
{
size_t v___x_6081_; size_t v___x_6082_; lean_object* v___x_6083_; 
v___x_6081_ = ((size_t)0ULL);
v___x_6082_ = lean_usize_of_nat(v___x_6074_);
v___x_6083_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6028_, v_a_6060_, v___x_6081_, v___x_6082_, v___x_6075_, v___y_6034_);
lean_dec(v_a_6060_);
v___y_6071_ = v___x_6083_;
goto v___jp_6070_;
}
}
v___jp_6062_:
{
lean_object* v___x_6065_; uint8_t v___x_6066_; 
v___x_6065_ = lean_array_get_size(v_a_6063_);
v___x_6066_ = lean_nat_dec_eq(v___x_6065_, v___x_6061_);
if (v___x_6066_ == 0)
{
lean_object* v___x_6067_; lean_object* v___x_6068_; uint8_t v___x_6069_; 
v___x_6067_ = lean_unsigned_to_nat(1u);
v___x_6068_ = lean_nat_sub(v___x_6065_, v___x_6067_);
v___x_6069_ = lean_nat_dec_le(v___x_6061_, v___x_6068_);
if (v___x_6069_ == 0)
{
lean_inc(v___x_6068_);
v___y_6048_ = v_a_6063_;
v___y_6049_ = v___x_6065_;
v___y_6050_ = v___x_6068_;
v___y_6051_ = v_a_6064_;
v___y_6052_ = v___x_6068_;
goto v___jp_6047_;
}
else
{
v___y_6048_ = v_a_6063_;
v___y_6049_ = v___x_6065_;
v___y_6050_ = v___x_6068_;
v___y_6051_ = v_a_6064_;
v___y_6052_ = v___x_6061_;
goto v___jp_6047_;
}
}
else
{
v___y_6037_ = v_a_6064_;
v___y_6038_ = v_a_6063_;
goto v___jp_6036_;
}
}
v___jp_6070_:
{
if (lean_obj_tag(v___y_6071_) == 0)
{
lean_object* v_a_6072_; lean_object* v_a_6073_; 
v_a_6072_ = lean_ctor_get(v___y_6071_, 0);
lean_inc(v_a_6072_);
v_a_6073_ = lean_ctor_get(v___y_6071_, 1);
lean_inc(v_a_6073_);
lean_dec_ref(v___y_6071_);
v_a_6063_ = v_a_6072_;
v_a_6064_ = v_a_6073_;
goto v___jp_6062_;
}
else
{
return v___y_6071_;
}
}
}
else
{
lean_object* v___x_6085_; uint8_t v_isShared_6086_; uint8_t v_isSharedCheck_6097_; 
lean_inc(v_buildTime_6058_);
lean_inc_ref(v_trace_6057_);
lean_inc_ref(v_log_6054_);
lean_dec_ref(v_filter_6028_);
v_isSharedCheck_6097_ = !lean_is_exclusive(v___y_6034_);
if (v_isSharedCheck_6097_ == 0)
{
lean_object* v_unused_6098_; lean_object* v_unused_6099_; lean_object* v_unused_6100_; 
v_unused_6098_ = lean_ctor_get(v___y_6034_, 2);
lean_dec(v_unused_6098_);
v_unused_6099_ = lean_ctor_get(v___y_6034_, 1);
lean_dec(v_unused_6099_);
v_unused_6100_ = lean_ctor_get(v___y_6034_, 0);
lean_dec(v_unused_6100_);
v___x_6085_ = v___y_6034_;
v_isShared_6086_ = v_isSharedCheck_6097_;
goto v_resetjp_6084_;
}
else
{
lean_dec(v___y_6034_);
v___x_6085_ = lean_box(0);
v_isShared_6086_ = v_isSharedCheck_6097_;
goto v_resetjp_6084_;
}
v_resetjp_6084_:
{
lean_object* v_a_6087_; lean_object* v___x_6088_; uint8_t v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6094_; 
v_a_6087_ = lean_ctor_get(v___x_6059_, 0);
lean_inc(v_a_6087_);
lean_dec_ref(v___x_6059_);
v___x_6088_ = lean_io_error_to_string(v_a_6087_);
v___x_6089_ = 3;
v___x_6090_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6090_, 0, v___x_6088_);
lean_ctor_set_uint8(v___x_6090_, sizeof(void*)*1, v___x_6089_);
v___x_6091_ = lean_array_get_size(v_log_6054_);
v___x_6092_ = lean_array_push(v_log_6054_, v___x_6090_);
if (v_isShared_6086_ == 0)
{
lean_ctor_set(v___x_6085_, 0, v___x_6092_);
v___x_6094_ = v___x_6085_;
goto v_reusejp_6093_;
}
else
{
lean_object* v_reuseFailAlloc_6096_; 
v_reuseFailAlloc_6096_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6096_, 0, v___x_6092_);
lean_ctor_set(v_reuseFailAlloc_6096_, 1, v_trace_6057_);
lean_ctor_set(v_reuseFailAlloc_6096_, 2, v_buildTime_6058_);
lean_ctor_set_uint8(v_reuseFailAlloc_6096_, sizeof(void*)*3, v_action_6055_);
lean_ctor_set_uint8(v_reuseFailAlloc_6096_, sizeof(void*)*3 + 1, v_wantsRebuild_6056_);
v___x_6094_ = v_reuseFailAlloc_6096_;
goto v_reusejp_6093_;
}
v_reusejp_6093_:
{
lean_object* v___x_6095_; 
v___x_6095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6095_, 0, v___x_6091_);
lean_ctor_set(v___x_6095_, 1, v___x_6094_);
return v___x_6095_;
}
}
}
v___jp_6036_:
{
lean_object* v___x_6039_; 
v___x_6039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6039_, 0, v___y_6038_);
lean_ctor_set(v___x_6039_, 1, v___y_6037_);
return v___x_6039_;
}
v___jp_6040_:
{
lean_object* v___x_6046_; 
lean_dec(v___y_6042_);
v___x_6046_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v___y_6041_, v___y_6043_, v___y_6045_);
lean_dec(v___y_6045_);
v___y_6037_ = v___y_6044_;
v___y_6038_ = v___x_6046_;
goto v___jp_6036_;
}
v___jp_6047_:
{
uint8_t v___x_6053_; 
v___x_6053_ = lean_nat_dec_le(v___y_6052_, v___y_6050_);
if (v___x_6053_ == 0)
{
lean_dec(v___y_6050_);
lean_inc(v___y_6052_);
v___y_6041_ = v___y_6048_;
v___y_6042_ = v___y_6049_;
v___y_6043_ = v___y_6052_;
v___y_6044_ = v___y_6051_;
v___y_6045_ = v___y_6052_;
goto v___jp_6040_;
}
else
{
v___y_6041_ = v___y_6048_;
v___y_6042_ = v___y_6049_;
v___y_6043_ = v___y_6052_;
v___y_6044_ = v___y_6051_;
v___y_6045_ = v___y_6050_;
goto v___jp_6040_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1___boxed(lean_object* v_path_6101_, lean_object* v___f_6102_, lean_object* v_filter_6103_, lean_object* v___y_6104_, lean_object* v___y_6105_, lean_object* v___y_6106_, lean_object* v___y_6107_, lean_object* v___y_6108_, lean_object* v___y_6109_, lean_object* v___y_6110_){
_start:
{
lean_object* v_res_6111_; 
v_res_6111_ = l_Lake_inputDir___lam__1(v_path_6101_, v___f_6102_, v_filter_6103_, v___y_6104_, v___y_6105_, v___y_6106_, v___y_6107_, v___y_6108_, v___y_6109_);
lean_dec_ref(v___y_6108_);
lean_dec(v___y_6107_);
lean_dec(v___y_6106_);
lean_dec(v___y_6105_);
lean_dec_ref(v___y_6104_);
return v_res_6111_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(uint8_t v_text_6112_, size_t v_sz_6113_, size_t v_i_6114_, lean_object* v_bs_6115_, lean_object* v___y_6116_, lean_object* v___y_6117_, lean_object* v___y_6118_, lean_object* v___y_6119_, lean_object* v___y_6120_, lean_object* v___y_6121_){
_start:
{
uint8_t v___x_6123_; 
v___x_6123_ = lean_usize_dec_lt(v_i_6114_, v_sz_6113_);
if (v___x_6123_ == 0)
{
lean_object* v___x_6124_; 
lean_dec_ref(v___y_6116_);
v___x_6124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6124_, 0, v_bs_6115_);
lean_ctor_set(v___x_6124_, 1, v___y_6121_);
return v___x_6124_;
}
else
{
lean_object* v_v_6125_; lean_object* v___x_6126_; lean_object* v_bs_x27_6127_; lean_object* v___y_6129_; 
v_v_6125_ = lean_array_uget(v_bs_6115_, v_i_6114_);
v___x_6126_ = lean_unsigned_to_nat(0u);
v_bs_x27_6127_ = lean_array_uset(v_bs_6115_, v_i_6114_, v___x_6126_);
if (v_text_6112_ == 0)
{
lean_object* v___x_6134_; 
lean_inc_ref(v___y_6116_);
v___x_6134_ = l_Lake_inputBinFile___redArg(v_v_6125_, v___y_6116_, v___y_6117_, v___y_6118_, v___y_6119_, v___y_6120_);
v___y_6129_ = v___x_6134_;
goto v___jp_6128_;
}
else
{
lean_object* v___x_6135_; 
lean_inc_ref(v___y_6116_);
v___x_6135_ = l_Lake_inputTextFile___redArg(v_v_6125_, v___y_6116_, v___y_6117_, v___y_6118_, v___y_6119_, v___y_6120_);
v___y_6129_ = v___x_6135_;
goto v___jp_6128_;
}
v___jp_6128_:
{
size_t v___x_6130_; size_t v___x_6131_; lean_object* v___x_6132_; 
v___x_6130_ = ((size_t)1ULL);
v___x_6131_ = lean_usize_add(v_i_6114_, v___x_6130_);
v___x_6132_ = lean_array_uset(v_bs_x27_6127_, v_i_6114_, v___y_6129_);
v_i_6114_ = v___x_6131_;
v_bs_6115_ = v___x_6132_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0___boxed(lean_object* v_text_6136_, lean_object* v_sz_6137_, lean_object* v_i_6138_, lean_object* v_bs_6139_, lean_object* v___y_6140_, lean_object* v___y_6141_, lean_object* v___y_6142_, lean_object* v___y_6143_, lean_object* v___y_6144_, lean_object* v___y_6145_, lean_object* v___y_6146_){
_start:
{
uint8_t v_text_boxed_6147_; size_t v_sz_boxed_6148_; size_t v_i_boxed_6149_; lean_object* v_res_6150_; 
v_text_boxed_6147_ = lean_unbox(v_text_6136_);
v_sz_boxed_6148_ = lean_unbox_usize(v_sz_6137_);
lean_dec(v_sz_6137_);
v_i_boxed_6149_ = lean_unbox_usize(v_i_6138_);
lean_dec(v_i_6138_);
v_res_6150_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(v_text_boxed_6147_, v_sz_boxed_6148_, v_i_boxed_6149_, v_bs_6139_, v___y_6140_, v___y_6141_, v___y_6142_, v___y_6143_, v___y_6144_, v___y_6145_);
lean_dec_ref(v___y_6144_);
lean_dec(v___y_6143_);
lean_dec(v___y_6142_);
lean_dec(v___y_6141_);
return v_res_6150_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2(uint8_t v_text_6151_, lean_object* v_path_6152_, lean_object* v_ps_6153_, lean_object* v___y_6154_, lean_object* v___y_6155_, lean_object* v___y_6156_, lean_object* v___y_6157_, lean_object* v___y_6158_, lean_object* v___y_6159_){
_start:
{
size_t v_sz_6161_; size_t v___x_6162_; lean_object* v___x_6163_; 
v_sz_6161_ = lean_array_size(v_ps_6153_);
v___x_6162_ = ((size_t)0ULL);
v___x_6163_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(v_text_6151_, v_sz_6161_, v___x_6162_, v_ps_6153_, v___y_6154_, v___y_6155_, v___y_6156_, v___y_6157_, v___y_6158_, v___y_6159_);
if (lean_obj_tag(v___x_6163_) == 0)
{
lean_object* v_a_6164_; lean_object* v_a_6165_; lean_object* v___x_6167_; uint8_t v_isShared_6168_; uint8_t v_isSharedCheck_6173_; 
v_a_6164_ = lean_ctor_get(v___x_6163_, 0);
v_a_6165_ = lean_ctor_get(v___x_6163_, 1);
v_isSharedCheck_6173_ = !lean_is_exclusive(v___x_6163_);
if (v_isSharedCheck_6173_ == 0)
{
v___x_6167_ = v___x_6163_;
v_isShared_6168_ = v_isSharedCheck_6173_;
goto v_resetjp_6166_;
}
else
{
lean_inc(v_a_6165_);
lean_inc(v_a_6164_);
lean_dec(v___x_6163_);
v___x_6167_ = lean_box(0);
v_isShared_6168_ = v_isSharedCheck_6173_;
goto v_resetjp_6166_;
}
v_resetjp_6166_:
{
lean_object* v___x_6169_; lean_object* v___x_6171_; 
v___x_6169_ = l_Lake_Job_collectArray___redArg(v_a_6164_, v_path_6152_);
lean_dec(v_a_6164_);
if (v_isShared_6168_ == 0)
{
lean_ctor_set(v___x_6167_, 0, v___x_6169_);
v___x_6171_ = v___x_6167_;
goto v_reusejp_6170_;
}
else
{
lean_object* v_reuseFailAlloc_6172_; 
v_reuseFailAlloc_6172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6172_, 0, v___x_6169_);
lean_ctor_set(v_reuseFailAlloc_6172_, 1, v_a_6165_);
v___x_6171_ = v_reuseFailAlloc_6172_;
goto v_reusejp_6170_;
}
v_reusejp_6170_:
{
return v___x_6171_;
}
}
}
else
{
lean_object* v_a_6174_; lean_object* v_a_6175_; lean_object* v___x_6177_; uint8_t v_isShared_6178_; uint8_t v_isSharedCheck_6182_; 
lean_dec_ref(v_path_6152_);
v_a_6174_ = lean_ctor_get(v___x_6163_, 0);
v_a_6175_ = lean_ctor_get(v___x_6163_, 1);
v_isSharedCheck_6182_ = !lean_is_exclusive(v___x_6163_);
if (v_isSharedCheck_6182_ == 0)
{
v___x_6177_ = v___x_6163_;
v_isShared_6178_ = v_isSharedCheck_6182_;
goto v_resetjp_6176_;
}
else
{
lean_inc(v_a_6175_);
lean_inc(v_a_6174_);
lean_dec(v___x_6163_);
v___x_6177_ = lean_box(0);
v_isShared_6178_ = v_isSharedCheck_6182_;
goto v_resetjp_6176_;
}
v_resetjp_6176_:
{
lean_object* v___x_6180_; 
if (v_isShared_6178_ == 0)
{
v___x_6180_ = v___x_6177_;
goto v_reusejp_6179_;
}
else
{
lean_object* v_reuseFailAlloc_6181_; 
v_reuseFailAlloc_6181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6181_, 0, v_a_6174_);
lean_ctor_set(v_reuseFailAlloc_6181_, 1, v_a_6175_);
v___x_6180_ = v_reuseFailAlloc_6181_;
goto v_reusejp_6179_;
}
v_reusejp_6179_:
{
return v___x_6180_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2___boxed(lean_object* v_text_6183_, lean_object* v_path_6184_, lean_object* v_ps_6185_, lean_object* v___y_6186_, lean_object* v___y_6187_, lean_object* v___y_6188_, lean_object* v___y_6189_, lean_object* v___y_6190_, lean_object* v___y_6191_, lean_object* v___y_6192_){
_start:
{
uint8_t v_text_boxed_6193_; lean_object* v_res_6194_; 
v_text_boxed_6193_ = lean_unbox(v_text_6183_);
v_res_6194_ = l_Lake_inputDir___lam__2(v_text_boxed_6193_, v_path_6184_, v_ps_6185_, v___y_6186_, v___y_6187_, v___y_6188_, v___y_6189_, v___y_6190_, v___y_6191_);
lean_dec_ref(v___y_6190_);
lean_dec(v___y_6189_);
lean_dec(v___y_6188_);
lean_dec(v___y_6187_);
return v_res_6194_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir(lean_object* v_path_6196_, uint8_t v_text_6197_, lean_object* v_filter_6198_, lean_object* v_a_6199_, lean_object* v_a_6200_, lean_object* v_a_6201_, lean_object* v_a_6202_, lean_object* v_a_6203_, lean_object* v_a_6204_){
_start:
{
lean_object* v___f_6206_; lean_object* v___f_6207_; lean_object* v___x_6208_; lean_object* v___x_6209_; lean_object* v___x_6210_; lean_object* v___x_6211_; lean_object* v___x_6212_; lean_object* v___f_6213_; uint8_t v___x_6214_; lean_object* v___x_6215_; 
v___f_6206_ = ((lean_object*)(l_Lake_inputDir___closed__0));
lean_inc_ref(v_path_6196_);
v___f_6207_ = lean_alloc_closure((void*)(l_Lake_inputDir___lam__1___boxed), 10, 3);
lean_closure_set(v___f_6207_, 0, v_path_6196_);
lean_closure_set(v___f_6207_, 1, v___f_6206_);
lean_closure_set(v___f_6207_, 2, v_filter_6198_);
v___x_6208_ = lean_box(0);
v___x_6209_ = lean_unsigned_to_nat(0u);
v___x_6210_ = ((lean_object*)(l_Lake_inputBinFile___redArg___closed__0));
lean_inc_ref(v_a_6199_);
v___x_6211_ = l_Lake_Job_async___redArg(v___x_6208_, v___f_6207_, v___x_6209_, v___x_6210_, v_a_6199_, v_a_6200_, v_a_6201_, v_a_6202_, v_a_6203_);
v___x_6212_ = lean_box(v_text_6197_);
v___f_6213_ = lean_alloc_closure((void*)(l_Lake_inputDir___lam__2___boxed), 10, 2);
lean_closure_set(v___f_6213_, 0, v___x_6212_);
lean_closure_set(v___f_6213_, 1, v_path_6196_);
v___x_6214_ = 0;
v___x_6215_ = l_Lake_Job_bindM___redArg(v___x_6208_, v___x_6211_, v___f_6213_, v___x_6209_, v___x_6214_, v_a_6199_, v_a_6200_, v_a_6201_, v_a_6202_, v_a_6203_, v_a_6204_);
return v___x_6215_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___boxed(lean_object* v_path_6216_, lean_object* v_text_6217_, lean_object* v_filter_6218_, lean_object* v_a_6219_, lean_object* v_a_6220_, lean_object* v_a_6221_, lean_object* v_a_6222_, lean_object* v_a_6223_, lean_object* v_a_6224_, lean_object* v_a_6225_){
_start:
{
uint8_t v_text_boxed_6226_; lean_object* v_res_6227_; 
v_text_boxed_6226_ = lean_unbox(v_text_6217_);
v_res_6227_ = l_Lake_inputDir(v_path_6216_, v_text_boxed_6226_, v_filter_6218_, v_a_6219_, v_a_6220_, v_a_6221_, v_a_6222_, v_a_6223_, v_a_6224_);
lean_dec_ref(v_a_6224_);
lean_dec_ref(v_a_6223_);
lean_dec(v_a_6222_);
lean_dec(v_a_6221_);
lean_dec(v_a_6220_);
return v_res_6227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1(lean_object* v_n_6228_, lean_object* v_as_6229_, lean_object* v_lo_6230_, lean_object* v_hi_6231_, lean_object* v_w_6232_, lean_object* v_hlo_6233_, lean_object* v_hhi_6234_){
_start:
{
lean_object* v___x_6235_; 
v___x_6235_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_as_6229_, v_lo_6230_, v_hi_6231_);
return v___x_6235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___boxed(lean_object* v_n_6236_, lean_object* v_as_6237_, lean_object* v_lo_6238_, lean_object* v_hi_6239_, lean_object* v_w_6240_, lean_object* v_hlo_6241_, lean_object* v_hhi_6242_){
_start:
{
lean_object* v_res_6243_; 
v_res_6243_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1(v_n_6236_, v_as_6237_, v_lo_6238_, v_hi_6239_, v_w_6240_, v_hlo_6241_, v_hhi_6242_);
lean_dec(v_hi_6239_);
lean_dec(v_n_6236_);
return v_res_6243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2(lean_object* v_filter_6244_, lean_object* v_as_6245_, size_t v_i_6246_, size_t v_stop_6247_, lean_object* v_b_6248_, lean_object* v___y_6249_, lean_object* v___y_6250_, lean_object* v___y_6251_, lean_object* v___y_6252_, lean_object* v___y_6253_, lean_object* v___y_6254_){
_start:
{
lean_object* v___x_6256_; 
v___x_6256_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6244_, v_as_6245_, v_i_6246_, v_stop_6247_, v_b_6248_, v___y_6254_);
return v___x_6256_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___boxed(lean_object* v_filter_6257_, lean_object* v_as_6258_, lean_object* v_i_6259_, lean_object* v_stop_6260_, lean_object* v_b_6261_, lean_object* v___y_6262_, lean_object* v___y_6263_, lean_object* v___y_6264_, lean_object* v___y_6265_, lean_object* v___y_6266_, lean_object* v___y_6267_, lean_object* v___y_6268_){
_start:
{
size_t v_i_boxed_6269_; size_t v_stop_boxed_6270_; lean_object* v_res_6271_; 
v_i_boxed_6269_ = lean_unbox_usize(v_i_6259_);
lean_dec(v_i_6259_);
v_stop_boxed_6270_ = lean_unbox_usize(v_stop_6260_);
lean_dec(v_stop_6260_);
v_res_6271_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2(v_filter_6257_, v_as_6258_, v_i_boxed_6269_, v_stop_boxed_6270_, v_b_6261_, v___y_6262_, v___y_6263_, v___y_6264_, v___y_6265_, v___y_6266_, v___y_6267_);
lean_dec_ref(v___y_6266_);
lean_dec(v___y_6265_);
lean_dec(v___y_6264_);
lean_dec(v___y_6263_);
lean_dec_ref(v___y_6262_);
lean_dec_ref(v_as_6258_);
return v_res_6271_;
}
}
LEAN_EXPORT uint64_t l_Lake_buildO___lam__0(uint64_t v_ts_6272_, lean_object* v_t_6273_){
_start:
{
uint64_t v___x_6274_; uint64_t v___x_6275_; uint64_t v___x_6276_; uint64_t v___x_6277_; 
v___x_6274_ = l_Lake_Hash_nil;
v___x_6275_ = lean_string_hash(v_t_6273_);
v___x_6276_ = lean_uint64_mix_hash(v___x_6274_, v___x_6275_);
v___x_6277_ = lean_uint64_mix_hash(v_ts_6272_, v___x_6276_);
return v___x_6277_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__0___boxed(lean_object* v_ts_6278_, lean_object* v_t_6279_){
_start:
{
uint64_t v_ts_boxed_6280_; uint64_t v_res_6281_; lean_object* v_r_6282_; 
v_ts_boxed_6280_ = lean_unbox_uint64(v_ts_6278_);
lean_dec_ref(v_ts_6278_);
v_res_6281_ = l_Lake_buildO___lam__0(v_ts_boxed_6280_, v_t_6279_);
lean_dec_ref(v_t_6279_);
v_r_6282_ = lean_box_uint64(v_res_6281_);
return v_r_6282_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1(lean_object* v_oFile_6283_, lean_object* v_srcFile_6284_, lean_object* v___x_6285_, lean_object* v_compiler_6286_, lean_object* v___y_6287_, lean_object* v___y_6288_, lean_object* v___y_6289_, lean_object* v___y_6290_, lean_object* v___y_6291_, lean_object* v___y_6292_){
_start:
{
lean_object* v_log_6294_; uint8_t v_action_6295_; uint8_t v_wantsRebuild_6296_; lean_object* v_trace_6297_; lean_object* v_buildTime_6298_; lean_object* v___x_6300_; uint8_t v_isShared_6301_; uint8_t v_isSharedCheck_6327_; 
v_log_6294_ = lean_ctor_get(v___y_6292_, 0);
v_action_6295_ = lean_ctor_get_uint8(v___y_6292_, sizeof(void*)*3);
v_wantsRebuild_6296_ = lean_ctor_get_uint8(v___y_6292_, sizeof(void*)*3 + 1);
v_trace_6297_ = lean_ctor_get(v___y_6292_, 1);
v_buildTime_6298_ = lean_ctor_get(v___y_6292_, 2);
v_isSharedCheck_6327_ = !lean_is_exclusive(v___y_6292_);
if (v_isSharedCheck_6327_ == 0)
{
v___x_6300_ = v___y_6292_;
v_isShared_6301_ = v_isSharedCheck_6327_;
goto v_resetjp_6299_;
}
else
{
lean_inc(v_buildTime_6298_);
lean_inc(v_trace_6297_);
lean_inc(v_log_6294_);
lean_dec(v___y_6292_);
v___x_6300_ = lean_box(0);
v_isShared_6301_ = v_isSharedCheck_6327_;
goto v_resetjp_6299_;
}
v_resetjp_6299_:
{
lean_object* v___x_6302_; 
v___x_6302_ = l_Lake_compileO(v_oFile_6283_, v_srcFile_6284_, v___x_6285_, v_compiler_6286_, v_log_6294_);
if (lean_obj_tag(v___x_6302_) == 0)
{
lean_object* v_a_6303_; lean_object* v_a_6304_; lean_object* v___x_6306_; uint8_t v_isShared_6307_; uint8_t v_isSharedCheck_6314_; 
v_a_6303_ = lean_ctor_get(v___x_6302_, 0);
v_a_6304_ = lean_ctor_get(v___x_6302_, 1);
v_isSharedCheck_6314_ = !lean_is_exclusive(v___x_6302_);
if (v_isSharedCheck_6314_ == 0)
{
v___x_6306_ = v___x_6302_;
v_isShared_6307_ = v_isSharedCheck_6314_;
goto v_resetjp_6305_;
}
else
{
lean_inc(v_a_6304_);
lean_inc(v_a_6303_);
lean_dec(v___x_6302_);
v___x_6306_ = lean_box(0);
v_isShared_6307_ = v_isSharedCheck_6314_;
goto v_resetjp_6305_;
}
v_resetjp_6305_:
{
lean_object* v___x_6309_; 
if (v_isShared_6301_ == 0)
{
lean_ctor_set(v___x_6300_, 0, v_a_6304_);
v___x_6309_ = v___x_6300_;
goto v_reusejp_6308_;
}
else
{
lean_object* v_reuseFailAlloc_6313_; 
v_reuseFailAlloc_6313_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6313_, 0, v_a_6304_);
lean_ctor_set(v_reuseFailAlloc_6313_, 1, v_trace_6297_);
lean_ctor_set(v_reuseFailAlloc_6313_, 2, v_buildTime_6298_);
lean_ctor_set_uint8(v_reuseFailAlloc_6313_, sizeof(void*)*3, v_action_6295_);
lean_ctor_set_uint8(v_reuseFailAlloc_6313_, sizeof(void*)*3 + 1, v_wantsRebuild_6296_);
v___x_6309_ = v_reuseFailAlloc_6313_;
goto v_reusejp_6308_;
}
v_reusejp_6308_:
{
lean_object* v___x_6311_; 
if (v_isShared_6307_ == 0)
{
lean_ctor_set(v___x_6306_, 1, v___x_6309_);
v___x_6311_ = v___x_6306_;
goto v_reusejp_6310_;
}
else
{
lean_object* v_reuseFailAlloc_6312_; 
v_reuseFailAlloc_6312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6312_, 0, v_a_6303_);
lean_ctor_set(v_reuseFailAlloc_6312_, 1, v___x_6309_);
v___x_6311_ = v_reuseFailAlloc_6312_;
goto v_reusejp_6310_;
}
v_reusejp_6310_:
{
return v___x_6311_;
}
}
}
}
else
{
lean_object* v_a_6315_; lean_object* v_a_6316_; lean_object* v___x_6318_; uint8_t v_isShared_6319_; uint8_t v_isSharedCheck_6326_; 
v_a_6315_ = lean_ctor_get(v___x_6302_, 0);
v_a_6316_ = lean_ctor_get(v___x_6302_, 1);
v_isSharedCheck_6326_ = !lean_is_exclusive(v___x_6302_);
if (v_isSharedCheck_6326_ == 0)
{
v___x_6318_ = v___x_6302_;
v_isShared_6319_ = v_isSharedCheck_6326_;
goto v_resetjp_6317_;
}
else
{
lean_inc(v_a_6316_);
lean_inc(v_a_6315_);
lean_dec(v___x_6302_);
v___x_6318_ = lean_box(0);
v_isShared_6319_ = v_isSharedCheck_6326_;
goto v_resetjp_6317_;
}
v_resetjp_6317_:
{
lean_object* v___x_6321_; 
if (v_isShared_6301_ == 0)
{
lean_ctor_set(v___x_6300_, 0, v_a_6316_);
v___x_6321_ = v___x_6300_;
goto v_reusejp_6320_;
}
else
{
lean_object* v_reuseFailAlloc_6325_; 
v_reuseFailAlloc_6325_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6325_, 0, v_a_6316_);
lean_ctor_set(v_reuseFailAlloc_6325_, 1, v_trace_6297_);
lean_ctor_set(v_reuseFailAlloc_6325_, 2, v_buildTime_6298_);
lean_ctor_set_uint8(v_reuseFailAlloc_6325_, sizeof(void*)*3, v_action_6295_);
lean_ctor_set_uint8(v_reuseFailAlloc_6325_, sizeof(void*)*3 + 1, v_wantsRebuild_6296_);
v___x_6321_ = v_reuseFailAlloc_6325_;
goto v_reusejp_6320_;
}
v_reusejp_6320_:
{
lean_object* v___x_6323_; 
if (v_isShared_6319_ == 0)
{
lean_ctor_set(v___x_6318_, 1, v___x_6321_);
v___x_6323_ = v___x_6318_;
goto v_reusejp_6322_;
}
else
{
lean_object* v_reuseFailAlloc_6324_; 
v_reuseFailAlloc_6324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6324_, 0, v_a_6315_);
lean_ctor_set(v_reuseFailAlloc_6324_, 1, v___x_6321_);
v___x_6323_ = v_reuseFailAlloc_6324_;
goto v_reusejp_6322_;
}
v_reusejp_6322_:
{
return v___x_6323_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1___boxed(lean_object* v_oFile_6328_, lean_object* v_srcFile_6329_, lean_object* v___x_6330_, lean_object* v_compiler_6331_, lean_object* v___y_6332_, lean_object* v___y_6333_, lean_object* v___y_6334_, lean_object* v___y_6335_, lean_object* v___y_6336_, lean_object* v___y_6337_, lean_object* v___y_6338_){
_start:
{
lean_object* v_res_6339_; 
v_res_6339_ = l_Lake_buildO___lam__1(v_oFile_6328_, v_srcFile_6329_, v___x_6330_, v_compiler_6331_, v___y_6332_, v___y_6333_, v___y_6334_, v___y_6335_, v___y_6336_, v___y_6337_);
lean_dec_ref(v___y_6336_);
lean_dec(v___y_6335_);
lean_dec(v___y_6334_);
lean_dec(v___y_6333_);
lean_dec_ref(v___y_6332_);
lean_dec_ref(v___x_6330_);
return v_res_6339_;
}
}
static lean_object* _init_l_Lake_buildO___lam__2___boxed__const__1(void){
_start:
{
uint64_t v___x_6343_; lean_object* v___x_6344_; 
v___x_6343_ = l_Lake_Hash_nil;
v___x_6344_ = lean_box_uint64(v___x_6343_);
return v___x_6344_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2(lean_object* v_traceArgs_6345_, lean_object* v___f_6346_, lean_object* v_extraDepTrace_6347_, lean_object* v_weakArgs_6348_, lean_object* v_oFile_6349_, lean_object* v_compiler_6350_, lean_object* v___x_6351_, lean_object* v___f_6352_, lean_object* v_srcFile_6353_, lean_object* v___y_6354_, lean_object* v___y_6355_, lean_object* v___y_6356_, lean_object* v___y_6357_, lean_object* v___y_6358_, lean_object* v___y_6359_){
_start:
{
lean_object* v_log_6361_; uint8_t v_action_6362_; uint8_t v_wantsRebuild_6363_; lean_object* v_trace_6364_; lean_object* v_buildTime_6365_; lean_object* v___x_6367_; uint8_t v_isShared_6368_; uint8_t v_isSharedCheck_6450_; 
v_log_6361_ = lean_ctor_get(v___y_6359_, 0);
v_action_6362_ = lean_ctor_get_uint8(v___y_6359_, sizeof(void*)*3);
v_wantsRebuild_6363_ = lean_ctor_get_uint8(v___y_6359_, sizeof(void*)*3 + 1);
v_trace_6364_ = lean_ctor_get(v___y_6359_, 1);
v_buildTime_6365_ = lean_ctor_get(v___y_6359_, 2);
v_isSharedCheck_6450_ = !lean_is_exclusive(v___y_6359_);
if (v_isSharedCheck_6450_ == 0)
{
v___x_6367_ = v___y_6359_;
v_isShared_6368_ = v_isSharedCheck_6450_;
goto v_resetjp_6366_;
}
else
{
lean_inc(v_buildTime_6365_);
lean_inc(v_trace_6364_);
lean_inc(v_log_6361_);
lean_dec(v___y_6359_);
v___x_6367_ = lean_box(0);
v_isShared_6368_ = v_isSharedCheck_6450_;
goto v_resetjp_6366_;
}
v_resetjp_6366_:
{
lean_object* v___x_6369_; lean_object* v___x_6370_; uint64_t v___y_6372_; uint64_t v___x_6435_; lean_object* v___x_6436_; lean_object* v___x_6437_; uint8_t v___x_6438_; 
v___x_6369_ = l_Lake_platformTrace;
v___x_6370_ = l_Lake_BuildTrace_mix(v_trace_6364_, v___x_6369_);
v___x_6435_ = l_Lake_Hash_nil;
v___x_6436_ = lean_unsigned_to_nat(0u);
v___x_6437_ = lean_array_get_size(v_traceArgs_6345_);
v___x_6438_ = lean_nat_dec_lt(v___x_6436_, v___x_6437_);
if (v___x_6438_ == 0)
{
lean_dec_ref(v___f_6352_);
lean_dec_ref(v___x_6351_);
v___y_6372_ = v___x_6435_;
goto v___jp_6371_;
}
else
{
uint8_t v___x_6439_; 
v___x_6439_ = lean_nat_dec_le(v___x_6437_, v___x_6437_);
if (v___x_6439_ == 0)
{
if (v___x_6438_ == 0)
{
lean_dec_ref(v___f_6352_);
lean_dec_ref(v___x_6351_);
v___y_6372_ = v___x_6435_;
goto v___jp_6371_;
}
else
{
size_t v___x_6440_; size_t v___x_6441_; lean_object* v___x_6442_; lean_object* v___x_6443_; uint64_t v___x_6444_; 
v___x_6440_ = ((size_t)0ULL);
v___x_6441_ = lean_usize_of_nat(v___x_6437_);
v___x_6442_ = l_Lake_buildO___lam__2___boxed__const__1;
lean_inc_ref(v_traceArgs_6345_);
v___x_6443_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_6351_, v___f_6352_, v_traceArgs_6345_, v___x_6440_, v___x_6441_, v___x_6442_);
v___x_6444_ = lean_unbox_uint64(v___x_6443_);
lean_dec(v___x_6443_);
v___y_6372_ = v___x_6444_;
goto v___jp_6371_;
}
}
else
{
size_t v___x_6445_; size_t v___x_6446_; lean_object* v___x_6447_; lean_object* v___x_6448_; uint64_t v___x_6449_; 
v___x_6445_ = ((size_t)0ULL);
v___x_6446_ = lean_usize_of_nat(v___x_6437_);
v___x_6447_ = l_Lake_buildO___lam__2___boxed__const__1;
lean_inc_ref(v_traceArgs_6345_);
v___x_6448_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_6351_, v___f_6352_, v_traceArgs_6345_, v___x_6445_, v___x_6446_, v___x_6447_);
v___x_6449_ = lean_unbox_uint64(v___x_6448_);
lean_dec(v___x_6448_);
v___y_6372_ = v___x_6449_;
goto v___jp_6371_;
}
}
v___jp_6371_:
{
lean_object* v___x_6373_; lean_object* v___x_6374_; lean_object* v___x_6375_; lean_object* v___x_6376_; lean_object* v___x_6377_; lean_object* v___x_6378_; lean_object* v___x_6379_; lean_object* v___x_6380_; lean_object* v___x_6381_; lean_object* v___x_6382_; lean_object* v___x_6384_; 
v___x_6373_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_6374_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
lean_inc_ref(v_traceArgs_6345_);
v___x_6375_ = lean_array_to_list(v_traceArgs_6345_);
v___x_6376_ = l_List_toString___redArg(v___f_6346_, v___x_6375_);
v___x_6377_ = lean_string_append(v___x_6374_, v___x_6376_);
lean_dec_ref(v___x_6376_);
v___x_6378_ = lean_string_append(v___x_6373_, v___x_6377_);
lean_dec_ref(v___x_6377_);
v___x_6379_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_6380_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_6381_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6381_, 0, v___x_6378_);
lean_ctor_set(v___x_6381_, 1, v___x_6379_);
lean_ctor_set(v___x_6381_, 2, v___x_6380_);
lean_ctor_set_uint64(v___x_6381_, sizeof(void*)*3, v___y_6372_);
v___x_6382_ = l_Lake_BuildTrace_mix(v___x_6370_, v___x_6381_);
if (v_isShared_6368_ == 0)
{
lean_ctor_set(v___x_6367_, 1, v___x_6382_);
v___x_6384_ = v___x_6367_;
goto v_reusejp_6383_;
}
else
{
lean_object* v_reuseFailAlloc_6434_; 
v_reuseFailAlloc_6434_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6434_, 0, v_log_6361_);
lean_ctor_set(v_reuseFailAlloc_6434_, 1, v___x_6382_);
lean_ctor_set(v_reuseFailAlloc_6434_, 2, v_buildTime_6365_);
lean_ctor_set_uint8(v_reuseFailAlloc_6434_, sizeof(void*)*3, v_action_6362_);
lean_ctor_set_uint8(v_reuseFailAlloc_6434_, sizeof(void*)*3 + 1, v_wantsRebuild_6363_);
v___x_6384_ = v_reuseFailAlloc_6434_;
goto v_reusejp_6383_;
}
v_reusejp_6383_:
{
lean_object* v___x_6385_; 
lean_inc_ref(v___y_6358_);
lean_inc(v___y_6357_);
lean_inc(v___y_6356_);
lean_inc(v___y_6355_);
lean_inc_ref(v___y_6354_);
v___x_6385_ = lean_apply_7(v_extraDepTrace_6347_, v___y_6354_, v___y_6355_, v___y_6356_, v___y_6357_, v___y_6358_, v___x_6384_, lean_box(0));
if (lean_obj_tag(v___x_6385_) == 0)
{
lean_object* v_a_6386_; lean_object* v_a_6387_; lean_object* v_log_6388_; uint8_t v_action_6389_; uint8_t v_wantsRebuild_6390_; lean_object* v_trace_6391_; lean_object* v_buildTime_6392_; lean_object* v___x_6394_; uint8_t v_isShared_6395_; uint8_t v_isSharedCheck_6424_; 
v_a_6386_ = lean_ctor_get(v___x_6385_, 1);
lean_inc(v_a_6386_);
v_a_6387_ = lean_ctor_get(v___x_6385_, 0);
lean_inc(v_a_6387_);
lean_dec_ref(v___x_6385_);
v_log_6388_ = lean_ctor_get(v_a_6386_, 0);
v_action_6389_ = lean_ctor_get_uint8(v_a_6386_, sizeof(void*)*3);
v_wantsRebuild_6390_ = lean_ctor_get_uint8(v_a_6386_, sizeof(void*)*3 + 1);
v_trace_6391_ = lean_ctor_get(v_a_6386_, 1);
v_buildTime_6392_ = lean_ctor_get(v_a_6386_, 2);
v_isSharedCheck_6424_ = !lean_is_exclusive(v_a_6386_);
if (v_isSharedCheck_6424_ == 0)
{
v___x_6394_ = v_a_6386_;
v_isShared_6395_ = v_isSharedCheck_6424_;
goto v_resetjp_6393_;
}
else
{
lean_inc(v_buildTime_6392_);
lean_inc(v_trace_6391_);
lean_inc(v_log_6388_);
lean_dec(v_a_6386_);
v___x_6394_ = lean_box(0);
v_isShared_6395_ = v_isSharedCheck_6424_;
goto v_resetjp_6393_;
}
v_resetjp_6393_:
{
lean_object* v___x_6396_; lean_object* v___x_6398_; 
v___x_6396_ = l_Lake_BuildTrace_mix(v_trace_6391_, v_a_6387_);
if (v_isShared_6395_ == 0)
{
lean_ctor_set(v___x_6394_, 1, v___x_6396_);
v___x_6398_ = v___x_6394_;
goto v_reusejp_6397_;
}
else
{
lean_object* v_reuseFailAlloc_6423_; 
v_reuseFailAlloc_6423_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6423_, 0, v_log_6388_);
lean_ctor_set(v_reuseFailAlloc_6423_, 1, v___x_6396_);
lean_ctor_set(v_reuseFailAlloc_6423_, 2, v_buildTime_6392_);
lean_ctor_set_uint8(v_reuseFailAlloc_6423_, sizeof(void*)*3, v_action_6389_);
lean_ctor_set_uint8(v_reuseFailAlloc_6423_, sizeof(void*)*3 + 1, v_wantsRebuild_6390_);
v___x_6398_ = v_reuseFailAlloc_6423_;
goto v_reusejp_6397_;
}
v_reusejp_6397_:
{
lean_object* v___x_6399_; lean_object* v___f_6400_; uint8_t v___x_6401_; lean_object* v___x_6402_; lean_object* v___x_6403_; 
v___x_6399_ = l_Array_append___redArg(v_weakArgs_6348_, v_traceArgs_6345_);
lean_dec_ref(v_traceArgs_6345_);
lean_inc_ref(v_oFile_6349_);
v___f_6400_ = lean_alloc_closure((void*)(l_Lake_buildO___lam__1___boxed), 11, 4);
lean_closure_set(v___f_6400_, 0, v_oFile_6349_);
lean_closure_set(v___f_6400_, 1, v_srcFile_6353_);
lean_closure_set(v___f_6400_, 2, v___x_6399_);
lean_closure_set(v___f_6400_, 3, v_compiler_6350_);
v___x_6401_ = 0;
v___x_6402_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__2));
v___x_6403_ = l_Lake_buildArtifactUnlessUpToDate(v_oFile_6349_, v___f_6400_, v___x_6401_, v___x_6402_, v___x_6401_, v___x_6401_, v___x_6401_, v___y_6354_, v___y_6355_, v___y_6356_, v___y_6357_, v___y_6358_, v___x_6398_);
if (lean_obj_tag(v___x_6403_) == 0)
{
lean_object* v_a_6404_; lean_object* v_a_6405_; lean_object* v___x_6407_; uint8_t v_isShared_6408_; uint8_t v_isSharedCheck_6413_; 
v_a_6404_ = lean_ctor_get(v___x_6403_, 0);
v_a_6405_ = lean_ctor_get(v___x_6403_, 1);
v_isSharedCheck_6413_ = !lean_is_exclusive(v___x_6403_);
if (v_isSharedCheck_6413_ == 0)
{
v___x_6407_ = v___x_6403_;
v_isShared_6408_ = v_isSharedCheck_6413_;
goto v_resetjp_6406_;
}
else
{
lean_inc(v_a_6405_);
lean_inc(v_a_6404_);
lean_dec(v___x_6403_);
v___x_6407_ = lean_box(0);
v_isShared_6408_ = v_isSharedCheck_6413_;
goto v_resetjp_6406_;
}
v_resetjp_6406_:
{
lean_object* v_path_6409_; lean_object* v___x_6411_; 
v_path_6409_ = lean_ctor_get(v_a_6404_, 1);
lean_inc_ref(v_path_6409_);
lean_dec(v_a_6404_);
if (v_isShared_6408_ == 0)
{
lean_ctor_set(v___x_6407_, 0, v_path_6409_);
v___x_6411_ = v___x_6407_;
goto v_reusejp_6410_;
}
else
{
lean_object* v_reuseFailAlloc_6412_; 
v_reuseFailAlloc_6412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6412_, 0, v_path_6409_);
lean_ctor_set(v_reuseFailAlloc_6412_, 1, v_a_6405_);
v___x_6411_ = v_reuseFailAlloc_6412_;
goto v_reusejp_6410_;
}
v_reusejp_6410_:
{
return v___x_6411_;
}
}
}
else
{
lean_object* v_a_6414_; lean_object* v_a_6415_; lean_object* v___x_6417_; uint8_t v_isShared_6418_; uint8_t v_isSharedCheck_6422_; 
v_a_6414_ = lean_ctor_get(v___x_6403_, 0);
v_a_6415_ = lean_ctor_get(v___x_6403_, 1);
v_isSharedCheck_6422_ = !lean_is_exclusive(v___x_6403_);
if (v_isSharedCheck_6422_ == 0)
{
v___x_6417_ = v___x_6403_;
v_isShared_6418_ = v_isSharedCheck_6422_;
goto v_resetjp_6416_;
}
else
{
lean_inc(v_a_6415_);
lean_inc(v_a_6414_);
lean_dec(v___x_6403_);
v___x_6417_ = lean_box(0);
v_isShared_6418_ = v_isSharedCheck_6422_;
goto v_resetjp_6416_;
}
v_resetjp_6416_:
{
lean_object* v___x_6420_; 
if (v_isShared_6418_ == 0)
{
v___x_6420_ = v___x_6417_;
goto v_reusejp_6419_;
}
else
{
lean_object* v_reuseFailAlloc_6421_; 
v_reuseFailAlloc_6421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6421_, 0, v_a_6414_);
lean_ctor_set(v_reuseFailAlloc_6421_, 1, v_a_6415_);
v___x_6420_ = v_reuseFailAlloc_6421_;
goto v_reusejp_6419_;
}
v_reusejp_6419_:
{
return v___x_6420_;
}
}
}
}
}
}
else
{
lean_object* v_a_6425_; lean_object* v_a_6426_; lean_object* v___x_6428_; uint8_t v_isShared_6429_; uint8_t v_isSharedCheck_6433_; 
lean_dec_ref(v___y_6354_);
lean_dec_ref(v_srcFile_6353_);
lean_dec_ref(v_compiler_6350_);
lean_dec_ref(v_oFile_6349_);
lean_dec_ref(v_weakArgs_6348_);
lean_dec_ref(v_traceArgs_6345_);
v_a_6425_ = lean_ctor_get(v___x_6385_, 0);
v_a_6426_ = lean_ctor_get(v___x_6385_, 1);
v_isSharedCheck_6433_ = !lean_is_exclusive(v___x_6385_);
if (v_isSharedCheck_6433_ == 0)
{
v___x_6428_ = v___x_6385_;
v_isShared_6429_ = v_isSharedCheck_6433_;
goto v_resetjp_6427_;
}
else
{
lean_inc(v_a_6426_);
lean_inc(v_a_6425_);
lean_dec(v___x_6385_);
v___x_6428_ = lean_box(0);
v_isShared_6429_ = v_isSharedCheck_6433_;
goto v_resetjp_6427_;
}
v_resetjp_6427_:
{
lean_object* v___x_6431_; 
if (v_isShared_6429_ == 0)
{
v___x_6431_ = v___x_6428_;
goto v_reusejp_6430_;
}
else
{
lean_object* v_reuseFailAlloc_6432_; 
v_reuseFailAlloc_6432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6432_, 0, v_a_6425_);
lean_ctor_set(v_reuseFailAlloc_6432_, 1, v_a_6426_);
v___x_6431_ = v_reuseFailAlloc_6432_;
goto v_reusejp_6430_;
}
v_reusejp_6430_:
{
return v___x_6431_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2___boxed(lean_object* v_traceArgs_6451_, lean_object* v___f_6452_, lean_object* v_extraDepTrace_6453_, lean_object* v_weakArgs_6454_, lean_object* v_oFile_6455_, lean_object* v_compiler_6456_, lean_object* v___x_6457_, lean_object* v___f_6458_, lean_object* v_srcFile_6459_, lean_object* v___y_6460_, lean_object* v___y_6461_, lean_object* v___y_6462_, lean_object* v___y_6463_, lean_object* v___y_6464_, lean_object* v___y_6465_, lean_object* v___y_6466_){
_start:
{
lean_object* v_res_6467_; 
v_res_6467_ = l_Lake_buildO___lam__2(v_traceArgs_6451_, v___f_6452_, v_extraDepTrace_6453_, v_weakArgs_6454_, v_oFile_6455_, v_compiler_6456_, v___x_6457_, v___f_6458_, v_srcFile_6459_, v___y_6460_, v___y_6461_, v___y_6462_, v___y_6463_, v___y_6464_, v___y_6465_);
lean_dec_ref(v___y_6464_);
lean_dec(v___y_6463_);
lean_dec(v___y_6462_);
lean_dec(v___y_6461_);
return v_res_6467_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO(lean_object* v_oFile_6470_, lean_object* v_srcJob_6471_, lean_object* v_weakArgs_6472_, lean_object* v_traceArgs_6473_, lean_object* v_compiler_6474_, lean_object* v_extraDepTrace_6475_, lean_object* v_a_6476_, lean_object* v_a_6477_, lean_object* v_a_6478_, lean_object* v_a_6479_, lean_object* v_a_6480_, lean_object* v_a_6481_){
_start:
{
lean_object* v___f_6483_; lean_object* v___x_6484_; lean_object* v___f_6485_; lean_object* v___x_6486_; lean_object* v___f_6487_; lean_object* v___x_6488_; uint8_t v___x_6489_; lean_object* v___x_6490_; 
v___f_6483_ = ((lean_object*)(l_Lake_buildO___closed__0));
v___x_6484_ = l_Lake_instDataKindFilePath;
v___f_6485_ = ((lean_object*)(l_Lake_buildO___closed__1));
v___x_6486_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__9));
v___f_6487_ = lean_alloc_closure((void*)(l_Lake_buildO___lam__2___boxed), 16, 8);
lean_closure_set(v___f_6487_, 0, v_traceArgs_6473_);
lean_closure_set(v___f_6487_, 1, v___f_6485_);
lean_closure_set(v___f_6487_, 2, v_extraDepTrace_6475_);
lean_closure_set(v___f_6487_, 3, v_weakArgs_6472_);
lean_closure_set(v___f_6487_, 4, v_oFile_6470_);
lean_closure_set(v___f_6487_, 5, v_compiler_6474_);
lean_closure_set(v___f_6487_, 6, v___x_6486_);
lean_closure_set(v___f_6487_, 7, v___f_6483_);
v___x_6488_ = lean_unsigned_to_nat(0u);
v___x_6489_ = 0;
v___x_6490_ = l_Lake_Job_mapM___redArg(v___x_6484_, v_srcJob_6471_, v___f_6487_, v___x_6488_, v___x_6489_, v_a_6476_, v_a_6477_, v_a_6478_, v_a_6479_, v_a_6480_, v_a_6481_);
return v___x_6490_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___boxed(lean_object* v_oFile_6491_, lean_object* v_srcJob_6492_, lean_object* v_weakArgs_6493_, lean_object* v_traceArgs_6494_, lean_object* v_compiler_6495_, lean_object* v_extraDepTrace_6496_, lean_object* v_a_6497_, lean_object* v_a_6498_, lean_object* v_a_6499_, lean_object* v_a_6500_, lean_object* v_a_6501_, lean_object* v_a_6502_, lean_object* v_a_6503_){
_start:
{
lean_object* v_res_6504_; 
v_res_6504_ = l_Lake_buildO(v_oFile_6491_, v_srcJob_6492_, v_weakArgs_6493_, v_traceArgs_6494_, v_compiler_6495_, v_extraDepTrace_6496_, v_a_6497_, v_a_6498_, v_a_6499_, v_a_6500_, v_a_6501_, v_a_6502_);
lean_dec_ref(v_a_6502_);
lean_dec_ref(v_a_6501_);
lean_dec(v_a_6500_);
lean_dec(v_a_6499_);
lean_dec(v_a_6498_);
return v_res_6504_;
}
}
static lean_object* _init_l_Lake_buildLeanO___lam__0___closed__1(void){
_start:
{
lean_object* v___x_6506_; lean_object* v___x_6507_; lean_object* v___x_6508_; lean_object* v___x_6509_; 
v___x_6506_ = ((lean_object*)(l_Lake_buildLeanO___lam__0___closed__0));
v___x_6507_ = lean_unsigned_to_nat(2u);
v___x_6508_ = lean_mk_empty_array_with_capacity(v___x_6507_);
v___x_6509_ = lean_array_push(v___x_6508_, v___x_6506_);
return v___x_6509_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__0(lean_object* v_weakArgs_6510_, lean_object* v_traceArgs_6511_, lean_object* v_oFile_6512_, lean_object* v_srcFile_6513_, lean_object* v_leanIncludeDir_x3f_6514_, lean_object* v___y_6515_, lean_object* v___y_6516_, lean_object* v___y_6517_, lean_object* v___y_6518_, lean_object* v___y_6519_, lean_object* v___y_6520_){
_start:
{
lean_object* v_toContext_6522_; lean_object* v_lakeEnv_6523_; lean_object* v_log_6524_; uint8_t v_action_6525_; uint8_t v_wantsRebuild_6526_; lean_object* v_trace_6527_; lean_object* v_buildTime_6528_; lean_object* v___x_6530_; uint8_t v_isShared_6531_; uint8_t v_isSharedCheck_6569_; 
v_toContext_6522_ = lean_ctor_get(v___y_6519_, 1);
v_lakeEnv_6523_ = lean_ctor_get(v_toContext_6522_, 1);
v_log_6524_ = lean_ctor_get(v___y_6520_, 0);
v_action_6525_ = lean_ctor_get_uint8(v___y_6520_, sizeof(void*)*3);
v_wantsRebuild_6526_ = lean_ctor_get_uint8(v___y_6520_, sizeof(void*)*3 + 1);
v_trace_6527_ = lean_ctor_get(v___y_6520_, 1);
v_buildTime_6528_ = lean_ctor_get(v___y_6520_, 2);
v_isSharedCheck_6569_ = !lean_is_exclusive(v___y_6520_);
if (v_isSharedCheck_6569_ == 0)
{
v___x_6530_ = v___y_6520_;
v_isShared_6531_ = v_isSharedCheck_6569_;
goto v_resetjp_6529_;
}
else
{
lean_inc(v_buildTime_6528_);
lean_inc(v_trace_6527_);
lean_inc(v_log_6524_);
lean_dec(v___y_6520_);
v___x_6530_ = lean_box(0);
v_isShared_6531_ = v_isSharedCheck_6569_;
goto v_resetjp_6529_;
}
v_resetjp_6529_:
{
lean_object* v_lean_6532_; lean_object* v___y_6534_; 
v_lean_6532_ = lean_ctor_get(v_lakeEnv_6523_, 1);
if (lean_obj_tag(v_leanIncludeDir_x3f_6514_) == 0)
{
lean_object* v_includeDir_6567_; 
v_includeDir_6567_ = lean_ctor_get(v_lean_6532_, 4);
lean_inc_ref(v_includeDir_6567_);
v___y_6534_ = v_includeDir_6567_;
goto v___jp_6533_;
}
else
{
lean_object* v_val_6568_; 
v_val_6568_ = lean_ctor_get(v_leanIncludeDir_x3f_6514_, 0);
lean_inc(v_val_6568_);
lean_dec_ref(v_leanIncludeDir_x3f_6514_);
v___y_6534_ = v_val_6568_;
goto v___jp_6533_;
}
v___jp_6533_:
{
lean_object* v_cc_6535_; lean_object* v_ccFlags_6536_; lean_object* v___x_6537_; lean_object* v___x_6538_; lean_object* v___x_6539_; lean_object* v___x_6540_; lean_object* v___x_6541_; lean_object* v___x_6542_; 
v_cc_6535_ = lean_ctor_get(v_lean_6532_, 14);
v_ccFlags_6536_ = lean_ctor_get(v_lean_6532_, 18);
v___x_6537_ = lean_obj_once(&l_Lake_buildLeanO___lam__0___closed__1, &l_Lake_buildLeanO___lam__0___closed__1_once, _init_l_Lake_buildLeanO___lam__0___closed__1);
v___x_6538_ = lean_array_push(v___x_6537_, v___y_6534_);
v___x_6539_ = l_Array_append___redArg(v___x_6538_, v_ccFlags_6536_);
v___x_6540_ = l_Array_append___redArg(v___x_6539_, v_weakArgs_6510_);
v___x_6541_ = l_Array_append___redArg(v___x_6540_, v_traceArgs_6511_);
lean_inc_ref(v_cc_6535_);
v___x_6542_ = l_Lake_compileO(v_oFile_6512_, v_srcFile_6513_, v___x_6541_, v_cc_6535_, v_log_6524_);
lean_dec_ref(v___x_6541_);
if (lean_obj_tag(v___x_6542_) == 0)
{
lean_object* v_a_6543_; lean_object* v_a_6544_; lean_object* v___x_6546_; uint8_t v_isShared_6547_; uint8_t v_isSharedCheck_6554_; 
v_a_6543_ = lean_ctor_get(v___x_6542_, 0);
v_a_6544_ = lean_ctor_get(v___x_6542_, 1);
v_isSharedCheck_6554_ = !lean_is_exclusive(v___x_6542_);
if (v_isSharedCheck_6554_ == 0)
{
v___x_6546_ = v___x_6542_;
v_isShared_6547_ = v_isSharedCheck_6554_;
goto v_resetjp_6545_;
}
else
{
lean_inc(v_a_6544_);
lean_inc(v_a_6543_);
lean_dec(v___x_6542_);
v___x_6546_ = lean_box(0);
v_isShared_6547_ = v_isSharedCheck_6554_;
goto v_resetjp_6545_;
}
v_resetjp_6545_:
{
lean_object* v___x_6549_; 
if (v_isShared_6531_ == 0)
{
lean_ctor_set(v___x_6530_, 0, v_a_6544_);
v___x_6549_ = v___x_6530_;
goto v_reusejp_6548_;
}
else
{
lean_object* v_reuseFailAlloc_6553_; 
v_reuseFailAlloc_6553_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6553_, 0, v_a_6544_);
lean_ctor_set(v_reuseFailAlloc_6553_, 1, v_trace_6527_);
lean_ctor_set(v_reuseFailAlloc_6553_, 2, v_buildTime_6528_);
lean_ctor_set_uint8(v_reuseFailAlloc_6553_, sizeof(void*)*3, v_action_6525_);
lean_ctor_set_uint8(v_reuseFailAlloc_6553_, sizeof(void*)*3 + 1, v_wantsRebuild_6526_);
v___x_6549_ = v_reuseFailAlloc_6553_;
goto v_reusejp_6548_;
}
v_reusejp_6548_:
{
lean_object* v___x_6551_; 
if (v_isShared_6547_ == 0)
{
lean_ctor_set(v___x_6546_, 1, v___x_6549_);
v___x_6551_ = v___x_6546_;
goto v_reusejp_6550_;
}
else
{
lean_object* v_reuseFailAlloc_6552_; 
v_reuseFailAlloc_6552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6552_, 0, v_a_6543_);
lean_ctor_set(v_reuseFailAlloc_6552_, 1, v___x_6549_);
v___x_6551_ = v_reuseFailAlloc_6552_;
goto v_reusejp_6550_;
}
v_reusejp_6550_:
{
return v___x_6551_;
}
}
}
}
else
{
lean_object* v_a_6555_; lean_object* v_a_6556_; lean_object* v___x_6558_; uint8_t v_isShared_6559_; uint8_t v_isSharedCheck_6566_; 
v_a_6555_ = lean_ctor_get(v___x_6542_, 0);
v_a_6556_ = lean_ctor_get(v___x_6542_, 1);
v_isSharedCheck_6566_ = !lean_is_exclusive(v___x_6542_);
if (v_isSharedCheck_6566_ == 0)
{
v___x_6558_ = v___x_6542_;
v_isShared_6559_ = v_isSharedCheck_6566_;
goto v_resetjp_6557_;
}
else
{
lean_inc(v_a_6556_);
lean_inc(v_a_6555_);
lean_dec(v___x_6542_);
v___x_6558_ = lean_box(0);
v_isShared_6559_ = v_isSharedCheck_6566_;
goto v_resetjp_6557_;
}
v_resetjp_6557_:
{
lean_object* v___x_6561_; 
if (v_isShared_6531_ == 0)
{
lean_ctor_set(v___x_6530_, 0, v_a_6556_);
v___x_6561_ = v___x_6530_;
goto v_reusejp_6560_;
}
else
{
lean_object* v_reuseFailAlloc_6565_; 
v_reuseFailAlloc_6565_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6565_, 0, v_a_6556_);
lean_ctor_set(v_reuseFailAlloc_6565_, 1, v_trace_6527_);
lean_ctor_set(v_reuseFailAlloc_6565_, 2, v_buildTime_6528_);
lean_ctor_set_uint8(v_reuseFailAlloc_6565_, sizeof(void*)*3, v_action_6525_);
lean_ctor_set_uint8(v_reuseFailAlloc_6565_, sizeof(void*)*3 + 1, v_wantsRebuild_6526_);
v___x_6561_ = v_reuseFailAlloc_6565_;
goto v_reusejp_6560_;
}
v_reusejp_6560_:
{
lean_object* v___x_6563_; 
if (v_isShared_6559_ == 0)
{
lean_ctor_set(v___x_6558_, 1, v___x_6561_);
v___x_6563_ = v___x_6558_;
goto v_reusejp_6562_;
}
else
{
lean_object* v_reuseFailAlloc_6564_; 
v_reuseFailAlloc_6564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6564_, 0, v_a_6555_);
lean_ctor_set(v_reuseFailAlloc_6564_, 1, v___x_6561_);
v___x_6563_ = v_reuseFailAlloc_6564_;
goto v_reusejp_6562_;
}
v_reusejp_6562_:
{
return v___x_6563_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__0___boxed(lean_object* v_weakArgs_6570_, lean_object* v_traceArgs_6571_, lean_object* v_oFile_6572_, lean_object* v_srcFile_6573_, lean_object* v_leanIncludeDir_x3f_6574_, lean_object* v___y_6575_, lean_object* v___y_6576_, lean_object* v___y_6577_, lean_object* v___y_6578_, lean_object* v___y_6579_, lean_object* v___y_6580_, lean_object* v___y_6581_){
_start:
{
lean_object* v_res_6582_; 
v_res_6582_ = l_Lake_buildLeanO___lam__0(v_weakArgs_6570_, v_traceArgs_6571_, v_oFile_6572_, v_srcFile_6573_, v_leanIncludeDir_x3f_6574_, v___y_6575_, v___y_6576_, v___y_6577_, v___y_6578_, v___y_6579_, v___y_6580_);
lean_dec_ref(v___y_6579_);
lean_dec(v___y_6578_);
lean_dec(v___y_6577_);
lean_dec(v___y_6576_);
lean_dec_ref(v___y_6575_);
lean_dec_ref(v_traceArgs_6571_);
lean_dec_ref(v_weakArgs_6570_);
return v_res_6582_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(lean_object* v_as_6583_, size_t v_i_6584_, size_t v_stop_6585_, uint64_t v_b_6586_){
_start:
{
uint8_t v___x_6587_; 
v___x_6587_ = lean_usize_dec_eq(v_i_6584_, v_stop_6585_);
if (v___x_6587_ == 0)
{
lean_object* v___x_6588_; uint64_t v___x_6589_; uint64_t v___x_6590_; uint64_t v___x_6591_; uint64_t v___x_6592_; size_t v___x_6593_; size_t v___x_6594_; 
v___x_6588_ = lean_array_uget_borrowed(v_as_6583_, v_i_6584_);
v___x_6589_ = l_Lake_Hash_nil;
v___x_6590_ = lean_string_hash(v___x_6588_);
v___x_6591_ = lean_uint64_mix_hash(v___x_6589_, v___x_6590_);
v___x_6592_ = lean_uint64_mix_hash(v_b_6586_, v___x_6591_);
v___x_6593_ = ((size_t)1ULL);
v___x_6594_ = lean_usize_add(v_i_6584_, v___x_6593_);
v_i_6584_ = v___x_6594_;
v_b_6586_ = v___x_6592_;
goto _start;
}
else
{
return v_b_6586_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1___boxed(lean_object* v_as_6596_, lean_object* v_i_6597_, lean_object* v_stop_6598_, lean_object* v_b_6599_){
_start:
{
size_t v_i_boxed_6600_; size_t v_stop_boxed_6601_; uint64_t v_b_boxed_6602_; uint64_t v_res_6603_; lean_object* v_r_6604_; 
v_i_boxed_6600_ = lean_unbox_usize(v_i_6597_);
lean_dec(v_i_6597_);
v_stop_boxed_6601_ = lean_unbox_usize(v_stop_6598_);
lean_dec(v_stop_6598_);
v_b_boxed_6602_ = lean_unbox_uint64(v_b_6599_);
lean_dec_ref(v_b_6599_);
v_res_6603_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_as_6596_, v_i_boxed_6600_, v_stop_boxed_6601_, v_b_boxed_6602_);
lean_dec_ref(v_as_6596_);
v_r_6604_ = lean_box_uint64(v_res_6603_);
return v_r_6604_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0(lean_object* v_x_6606_, lean_object* v_x_6607_){
_start:
{
if (lean_obj_tag(v_x_6607_) == 0)
{
return v_x_6606_;
}
else
{
lean_object* v_head_6608_; lean_object* v_tail_6609_; lean_object* v___x_6610_; lean_object* v___x_6611_; lean_object* v___x_6612_; 
v_head_6608_ = lean_ctor_get(v_x_6607_, 0);
v_tail_6609_ = lean_ctor_get(v_x_6607_, 1);
v___x_6610_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___closed__0));
v___x_6611_ = lean_string_append(v_x_6606_, v___x_6610_);
v___x_6612_ = lean_string_append(v___x_6611_, v_head_6608_);
v_x_6606_ = v___x_6612_;
v_x_6607_ = v_tail_6609_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0___boxed(lean_object* v_x_6614_, lean_object* v_x_6615_){
_start:
{
lean_object* v_res_6616_; 
v_res_6616_ = l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0(v_x_6614_, v_x_6615_);
lean_dec(v_x_6615_);
return v_res_6616_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0(lean_object* v_x_6620_){
_start:
{
if (lean_obj_tag(v_x_6620_) == 0)
{
lean_object* v___x_6621_; 
v___x_6621_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanO_spec__0___closed__0));
return v___x_6621_;
}
else
{
lean_object* v_tail_6622_; 
v_tail_6622_ = lean_ctor_get(v_x_6620_, 1);
if (lean_obj_tag(v_tail_6622_) == 0)
{
lean_object* v_head_6623_; lean_object* v___x_6624_; lean_object* v___x_6625_; lean_object* v___x_6626_; lean_object* v___x_6627_; 
v_head_6623_ = lean_ctor_get(v_x_6620_, 0);
v___x_6624_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1));
v___x_6625_ = lean_string_append(v___x_6624_, v_head_6623_);
v___x_6626_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanO_spec__0___closed__2));
v___x_6627_ = lean_string_append(v___x_6625_, v___x_6626_);
return v___x_6627_;
}
else
{
lean_object* v_head_6628_; lean_object* v___x_6629_; lean_object* v___x_6630_; lean_object* v___x_6631_; uint32_t v___x_6632_; lean_object* v___x_6633_; 
v_head_6628_ = lean_ctor_get(v_x_6620_, 0);
v___x_6629_ = ((lean_object*)(l_List_toString___at___00Lake_buildLeanO_spec__0___closed__1));
v___x_6630_ = lean_string_append(v___x_6629_, v_head_6628_);
v___x_6631_ = l_List_foldl___at___00List_toString___at___00Lake_buildLeanO_spec__0_spec__0(v___x_6630_, v_tail_6622_);
v___x_6632_ = 93;
v___x_6633_ = lean_string_push(v___x_6631_, v___x_6632_);
return v___x_6633_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_buildLeanO_spec__0___boxed(lean_object* v_x_6634_){
_start:
{
lean_object* v_res_6635_; 
v_res_6635_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v_x_6634_);
lean_dec(v_x_6634_);
return v_res_6635_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__1(lean_object* v_weakArgs_6636_, lean_object* v_traceArgs_6637_, lean_object* v_oFile_6638_, lean_object* v_leanIncludeDir_x3f_6639_, lean_object* v_srcFile_6640_, lean_object* v___y_6641_, lean_object* v___y_6642_, lean_object* v___y_6643_, lean_object* v___y_6644_, lean_object* v___y_6645_, lean_object* v___y_6646_){
_start:
{
lean_object* v_log_6648_; uint8_t v_action_6649_; uint8_t v_wantsRebuild_6650_; lean_object* v_trace_6651_; lean_object* v_buildTime_6652_; lean_object* v___x_6654_; uint8_t v_isShared_6655_; uint8_t v_isSharedCheck_6709_; 
v_log_6648_ = lean_ctor_get(v___y_6646_, 0);
v_action_6649_ = lean_ctor_get_uint8(v___y_6646_, sizeof(void*)*3);
v_wantsRebuild_6650_ = lean_ctor_get_uint8(v___y_6646_, sizeof(void*)*3 + 1);
v_trace_6651_ = lean_ctor_get(v___y_6646_, 1);
v_buildTime_6652_ = lean_ctor_get(v___y_6646_, 2);
v_isSharedCheck_6709_ = !lean_is_exclusive(v___y_6646_);
if (v_isSharedCheck_6709_ == 0)
{
v___x_6654_ = v___y_6646_;
v_isShared_6655_ = v_isSharedCheck_6709_;
goto v_resetjp_6653_;
}
else
{
lean_inc(v_buildTime_6652_);
lean_inc(v_trace_6651_);
lean_inc(v_log_6648_);
lean_dec(v___y_6646_);
v___x_6654_ = lean_box(0);
v_isShared_6655_ = v_isSharedCheck_6709_;
goto v_resetjp_6653_;
}
v_resetjp_6653_:
{
lean_object* v_leanTrace_6656_; lean_object* v___f_6657_; lean_object* v___x_6658_; uint64_t v___y_6660_; uint64_t v___x_6698_; lean_object* v___x_6699_; lean_object* v___x_6700_; uint8_t v___x_6701_; 
v_leanTrace_6656_ = lean_ctor_get(v___y_6645_, 2);
lean_inc_ref(v_oFile_6638_);
lean_inc_ref(v_traceArgs_6637_);
v___f_6657_ = lean_alloc_closure((void*)(l_Lake_buildLeanO___lam__0___boxed), 12, 5);
lean_closure_set(v___f_6657_, 0, v_weakArgs_6636_);
lean_closure_set(v___f_6657_, 1, v_traceArgs_6637_);
lean_closure_set(v___f_6657_, 2, v_oFile_6638_);
lean_closure_set(v___f_6657_, 3, v_srcFile_6640_);
lean_closure_set(v___f_6657_, 4, v_leanIncludeDir_x3f_6639_);
lean_inc_ref(v_leanTrace_6656_);
v___x_6658_ = l_Lake_BuildTrace_mix(v_trace_6651_, v_leanTrace_6656_);
v___x_6698_ = l_Lake_Hash_nil;
v___x_6699_ = lean_unsigned_to_nat(0u);
v___x_6700_ = lean_array_get_size(v_traceArgs_6637_);
v___x_6701_ = lean_nat_dec_lt(v___x_6699_, v___x_6700_);
if (v___x_6701_ == 0)
{
v___y_6660_ = v___x_6698_;
goto v___jp_6659_;
}
else
{
uint8_t v___x_6702_; 
v___x_6702_ = lean_nat_dec_le(v___x_6700_, v___x_6700_);
if (v___x_6702_ == 0)
{
if (v___x_6701_ == 0)
{
v___y_6660_ = v___x_6698_;
goto v___jp_6659_;
}
else
{
size_t v___x_6703_; size_t v___x_6704_; uint64_t v___x_6705_; 
v___x_6703_ = ((size_t)0ULL);
v___x_6704_ = lean_usize_of_nat(v___x_6700_);
v___x_6705_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_6637_, v___x_6703_, v___x_6704_, v___x_6698_);
v___y_6660_ = v___x_6705_;
goto v___jp_6659_;
}
}
else
{
size_t v___x_6706_; size_t v___x_6707_; uint64_t v___x_6708_; 
v___x_6706_ = ((size_t)0ULL);
v___x_6707_ = lean_usize_of_nat(v___x_6700_);
v___x_6708_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_6637_, v___x_6706_, v___x_6707_, v___x_6698_);
v___y_6660_ = v___x_6708_;
goto v___jp_6659_;
}
}
v___jp_6659_:
{
lean_object* v___x_6661_; lean_object* v___x_6662_; lean_object* v___x_6663_; lean_object* v___x_6664_; lean_object* v___x_6665_; lean_object* v___x_6666_; lean_object* v___x_6667_; lean_object* v___x_6668_; lean_object* v___x_6669_; lean_object* v___x_6670_; lean_object* v___x_6671_; lean_object* v___x_6672_; lean_object* v___x_6674_; 
v___x_6661_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_6662_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
v___x_6663_ = lean_array_to_list(v_traceArgs_6637_);
v___x_6664_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_6663_);
lean_dec(v___x_6663_);
v___x_6665_ = lean_string_append(v___x_6662_, v___x_6664_);
lean_dec_ref(v___x_6664_);
v___x_6666_ = lean_string_append(v___x_6661_, v___x_6665_);
lean_dec_ref(v___x_6665_);
v___x_6667_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_6668_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_6669_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6669_, 0, v___x_6666_);
lean_ctor_set(v___x_6669_, 1, v___x_6667_);
lean_ctor_set(v___x_6669_, 2, v___x_6668_);
lean_ctor_set_uint64(v___x_6669_, sizeof(void*)*3, v___y_6660_);
v___x_6670_ = l_Lake_BuildTrace_mix(v___x_6658_, v___x_6669_);
v___x_6671_ = l_Lake_platformTrace;
v___x_6672_ = l_Lake_BuildTrace_mix(v___x_6670_, v___x_6671_);
if (v_isShared_6655_ == 0)
{
lean_ctor_set(v___x_6654_, 1, v___x_6672_);
v___x_6674_ = v___x_6654_;
goto v_reusejp_6673_;
}
else
{
lean_object* v_reuseFailAlloc_6697_; 
v_reuseFailAlloc_6697_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6697_, 0, v_log_6648_);
lean_ctor_set(v_reuseFailAlloc_6697_, 1, v___x_6672_);
lean_ctor_set(v_reuseFailAlloc_6697_, 2, v_buildTime_6652_);
lean_ctor_set_uint8(v_reuseFailAlloc_6697_, sizeof(void*)*3, v_action_6649_);
lean_ctor_set_uint8(v_reuseFailAlloc_6697_, sizeof(void*)*3 + 1, v_wantsRebuild_6650_);
v___x_6674_ = v_reuseFailAlloc_6697_;
goto v_reusejp_6673_;
}
v_reusejp_6673_:
{
uint8_t v___x_6675_; lean_object* v___x_6676_; lean_object* v___x_6677_; 
v___x_6675_ = 0;
v___x_6676_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__2));
v___x_6677_ = l_Lake_buildArtifactUnlessUpToDate(v_oFile_6638_, v___f_6657_, v___x_6675_, v___x_6676_, v___x_6675_, v___x_6675_, v___x_6675_, v___y_6641_, v___y_6642_, v___y_6643_, v___y_6644_, v___y_6645_, v___x_6674_);
if (lean_obj_tag(v___x_6677_) == 0)
{
lean_object* v_a_6678_; lean_object* v_a_6679_; lean_object* v___x_6681_; uint8_t v_isShared_6682_; uint8_t v_isSharedCheck_6687_; 
v_a_6678_ = lean_ctor_get(v___x_6677_, 0);
v_a_6679_ = lean_ctor_get(v___x_6677_, 1);
v_isSharedCheck_6687_ = !lean_is_exclusive(v___x_6677_);
if (v_isSharedCheck_6687_ == 0)
{
v___x_6681_ = v___x_6677_;
v_isShared_6682_ = v_isSharedCheck_6687_;
goto v_resetjp_6680_;
}
else
{
lean_inc(v_a_6679_);
lean_inc(v_a_6678_);
lean_dec(v___x_6677_);
v___x_6681_ = lean_box(0);
v_isShared_6682_ = v_isSharedCheck_6687_;
goto v_resetjp_6680_;
}
v_resetjp_6680_:
{
lean_object* v_path_6683_; lean_object* v___x_6685_; 
v_path_6683_ = lean_ctor_get(v_a_6678_, 1);
lean_inc_ref(v_path_6683_);
lean_dec(v_a_6678_);
if (v_isShared_6682_ == 0)
{
lean_ctor_set(v___x_6681_, 0, v_path_6683_);
v___x_6685_ = v___x_6681_;
goto v_reusejp_6684_;
}
else
{
lean_object* v_reuseFailAlloc_6686_; 
v_reuseFailAlloc_6686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6686_, 0, v_path_6683_);
lean_ctor_set(v_reuseFailAlloc_6686_, 1, v_a_6679_);
v___x_6685_ = v_reuseFailAlloc_6686_;
goto v_reusejp_6684_;
}
v_reusejp_6684_:
{
return v___x_6685_;
}
}
}
else
{
lean_object* v_a_6688_; lean_object* v_a_6689_; lean_object* v___x_6691_; uint8_t v_isShared_6692_; uint8_t v_isSharedCheck_6696_; 
v_a_6688_ = lean_ctor_get(v___x_6677_, 0);
v_a_6689_ = lean_ctor_get(v___x_6677_, 1);
v_isSharedCheck_6696_ = !lean_is_exclusive(v___x_6677_);
if (v_isSharedCheck_6696_ == 0)
{
v___x_6691_ = v___x_6677_;
v_isShared_6692_ = v_isSharedCheck_6696_;
goto v_resetjp_6690_;
}
else
{
lean_inc(v_a_6689_);
lean_inc(v_a_6688_);
lean_dec(v___x_6677_);
v___x_6691_ = lean_box(0);
v_isShared_6692_ = v_isSharedCheck_6696_;
goto v_resetjp_6690_;
}
v_resetjp_6690_:
{
lean_object* v___x_6694_; 
if (v_isShared_6692_ == 0)
{
v___x_6694_ = v___x_6691_;
goto v_reusejp_6693_;
}
else
{
lean_object* v_reuseFailAlloc_6695_; 
v_reuseFailAlloc_6695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6695_, 0, v_a_6688_);
lean_ctor_set(v_reuseFailAlloc_6695_, 1, v_a_6689_);
v___x_6694_ = v_reuseFailAlloc_6695_;
goto v_reusejp_6693_;
}
v_reusejp_6693_:
{
return v___x_6694_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___lam__1___boxed(lean_object* v_weakArgs_6710_, lean_object* v_traceArgs_6711_, lean_object* v_oFile_6712_, lean_object* v_leanIncludeDir_x3f_6713_, lean_object* v_srcFile_6714_, lean_object* v___y_6715_, lean_object* v___y_6716_, lean_object* v___y_6717_, lean_object* v___y_6718_, lean_object* v___y_6719_, lean_object* v___y_6720_, lean_object* v___y_6721_){
_start:
{
lean_object* v_res_6722_; 
v_res_6722_ = l_Lake_buildLeanO___lam__1(v_weakArgs_6710_, v_traceArgs_6711_, v_oFile_6712_, v_leanIncludeDir_x3f_6713_, v_srcFile_6714_, v___y_6715_, v___y_6716_, v___y_6717_, v___y_6718_, v___y_6719_, v___y_6720_);
lean_dec_ref(v___y_6719_);
lean_dec(v___y_6718_);
lean_dec(v___y_6717_);
lean_dec(v___y_6716_);
return v_res_6722_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO(lean_object* v_oFile_6723_, lean_object* v_srcJob_6724_, lean_object* v_weakArgs_6725_, lean_object* v_traceArgs_6726_, lean_object* v_leanIncludeDir_x3f_6727_, lean_object* v_a_6728_, lean_object* v_a_6729_, lean_object* v_a_6730_, lean_object* v_a_6731_, lean_object* v_a_6732_, lean_object* v_a_6733_){
_start:
{
lean_object* v___f_6735_; lean_object* v___x_6736_; lean_object* v___x_6737_; uint8_t v___x_6738_; lean_object* v___x_6739_; 
v___f_6735_ = lean_alloc_closure((void*)(l_Lake_buildLeanO___lam__1___boxed), 12, 4);
lean_closure_set(v___f_6735_, 0, v_weakArgs_6725_);
lean_closure_set(v___f_6735_, 1, v_traceArgs_6726_);
lean_closure_set(v___f_6735_, 2, v_oFile_6723_);
lean_closure_set(v___f_6735_, 3, v_leanIncludeDir_x3f_6727_);
v___x_6736_ = l_Lake_instDataKindFilePath;
v___x_6737_ = lean_unsigned_to_nat(0u);
v___x_6738_ = 0;
v___x_6739_ = l_Lake_Job_mapM___redArg(v___x_6736_, v_srcJob_6724_, v___f_6735_, v___x_6737_, v___x_6738_, v_a_6728_, v_a_6729_, v_a_6730_, v_a_6731_, v_a_6732_, v_a_6733_);
return v___x_6739_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___boxed(lean_object* v_oFile_6740_, lean_object* v_srcJob_6741_, lean_object* v_weakArgs_6742_, lean_object* v_traceArgs_6743_, lean_object* v_leanIncludeDir_x3f_6744_, lean_object* v_a_6745_, lean_object* v_a_6746_, lean_object* v_a_6747_, lean_object* v_a_6748_, lean_object* v_a_6749_, lean_object* v_a_6750_, lean_object* v_a_6751_){
_start:
{
lean_object* v_res_6752_; 
v_res_6752_ = l_Lake_buildLeanO(v_oFile_6740_, v_srcJob_6741_, v_weakArgs_6742_, v_traceArgs_6743_, v_leanIncludeDir_x3f_6744_, v_a_6745_, v_a_6746_, v_a_6747_, v_a_6748_, v_a_6749_, v_a_6750_);
lean_dec_ref(v_a_6750_);
lean_dec_ref(v_a_6749_);
lean_dec(v_a_6748_);
lean_dec(v_a_6747_);
lean_dec(v_a_6746_);
return v_res_6752_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0(lean_object* v_libFile_6753_, lean_object* v_oFiles_6754_, uint8_t v_thin_6755_, lean_object* v___y_6756_, lean_object* v___y_6757_, lean_object* v___y_6758_, lean_object* v___y_6759_, lean_object* v___y_6760_, lean_object* v___y_6761_){
_start:
{
lean_object* v_toContext_6763_; lean_object* v_lakeEnv_6764_; lean_object* v_lean_6765_; lean_object* v_log_6766_; uint8_t v_action_6767_; uint8_t v_wantsRebuild_6768_; lean_object* v_trace_6769_; lean_object* v_buildTime_6770_; lean_object* v___x_6772_; uint8_t v_isShared_6773_; uint8_t v_isSharedCheck_6800_; 
v_toContext_6763_ = lean_ctor_get(v___y_6760_, 1);
v_lakeEnv_6764_ = lean_ctor_get(v_toContext_6763_, 1);
v_lean_6765_ = lean_ctor_get(v_lakeEnv_6764_, 1);
v_log_6766_ = lean_ctor_get(v___y_6761_, 0);
v_action_6767_ = lean_ctor_get_uint8(v___y_6761_, sizeof(void*)*3);
v_wantsRebuild_6768_ = lean_ctor_get_uint8(v___y_6761_, sizeof(void*)*3 + 1);
v_trace_6769_ = lean_ctor_get(v___y_6761_, 1);
v_buildTime_6770_ = lean_ctor_get(v___y_6761_, 2);
v_isSharedCheck_6800_ = !lean_is_exclusive(v___y_6761_);
if (v_isSharedCheck_6800_ == 0)
{
v___x_6772_ = v___y_6761_;
v_isShared_6773_ = v_isSharedCheck_6800_;
goto v_resetjp_6771_;
}
else
{
lean_inc(v_buildTime_6770_);
lean_inc(v_trace_6769_);
lean_inc(v_log_6766_);
lean_dec(v___y_6761_);
v___x_6772_ = lean_box(0);
v_isShared_6773_ = v_isSharedCheck_6800_;
goto v_resetjp_6771_;
}
v_resetjp_6771_:
{
lean_object* v_ar_6774_; lean_object* v___x_6775_; 
v_ar_6774_ = lean_ctor_get(v_lean_6765_, 13);
lean_inc_ref(v_ar_6774_);
v___x_6775_ = l_Lake_compileStaticLib(v_libFile_6753_, v_oFiles_6754_, v_ar_6774_, v_thin_6755_, v_log_6766_);
if (lean_obj_tag(v___x_6775_) == 0)
{
lean_object* v_a_6776_; lean_object* v_a_6777_; lean_object* v___x_6779_; uint8_t v_isShared_6780_; uint8_t v_isSharedCheck_6787_; 
v_a_6776_ = lean_ctor_get(v___x_6775_, 0);
v_a_6777_ = lean_ctor_get(v___x_6775_, 1);
v_isSharedCheck_6787_ = !lean_is_exclusive(v___x_6775_);
if (v_isSharedCheck_6787_ == 0)
{
v___x_6779_ = v___x_6775_;
v_isShared_6780_ = v_isSharedCheck_6787_;
goto v_resetjp_6778_;
}
else
{
lean_inc(v_a_6777_);
lean_inc(v_a_6776_);
lean_dec(v___x_6775_);
v___x_6779_ = lean_box(0);
v_isShared_6780_ = v_isSharedCheck_6787_;
goto v_resetjp_6778_;
}
v_resetjp_6778_:
{
lean_object* v___x_6782_; 
if (v_isShared_6773_ == 0)
{
lean_ctor_set(v___x_6772_, 0, v_a_6777_);
v___x_6782_ = v___x_6772_;
goto v_reusejp_6781_;
}
else
{
lean_object* v_reuseFailAlloc_6786_; 
v_reuseFailAlloc_6786_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6786_, 0, v_a_6777_);
lean_ctor_set(v_reuseFailAlloc_6786_, 1, v_trace_6769_);
lean_ctor_set(v_reuseFailAlloc_6786_, 2, v_buildTime_6770_);
lean_ctor_set_uint8(v_reuseFailAlloc_6786_, sizeof(void*)*3, v_action_6767_);
lean_ctor_set_uint8(v_reuseFailAlloc_6786_, sizeof(void*)*3 + 1, v_wantsRebuild_6768_);
v___x_6782_ = v_reuseFailAlloc_6786_;
goto v_reusejp_6781_;
}
v_reusejp_6781_:
{
lean_object* v___x_6784_; 
if (v_isShared_6780_ == 0)
{
lean_ctor_set(v___x_6779_, 1, v___x_6782_);
v___x_6784_ = v___x_6779_;
goto v_reusejp_6783_;
}
else
{
lean_object* v_reuseFailAlloc_6785_; 
v_reuseFailAlloc_6785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6785_, 0, v_a_6776_);
lean_ctor_set(v_reuseFailAlloc_6785_, 1, v___x_6782_);
v___x_6784_ = v_reuseFailAlloc_6785_;
goto v_reusejp_6783_;
}
v_reusejp_6783_:
{
return v___x_6784_;
}
}
}
}
else
{
lean_object* v_a_6788_; lean_object* v_a_6789_; lean_object* v___x_6791_; uint8_t v_isShared_6792_; uint8_t v_isSharedCheck_6799_; 
v_a_6788_ = lean_ctor_get(v___x_6775_, 0);
v_a_6789_ = lean_ctor_get(v___x_6775_, 1);
v_isSharedCheck_6799_ = !lean_is_exclusive(v___x_6775_);
if (v_isSharedCheck_6799_ == 0)
{
v___x_6791_ = v___x_6775_;
v_isShared_6792_ = v_isSharedCheck_6799_;
goto v_resetjp_6790_;
}
else
{
lean_inc(v_a_6789_);
lean_inc(v_a_6788_);
lean_dec(v___x_6775_);
v___x_6791_ = lean_box(0);
v_isShared_6792_ = v_isSharedCheck_6799_;
goto v_resetjp_6790_;
}
v_resetjp_6790_:
{
lean_object* v___x_6794_; 
if (v_isShared_6773_ == 0)
{
lean_ctor_set(v___x_6772_, 0, v_a_6789_);
v___x_6794_ = v___x_6772_;
goto v_reusejp_6793_;
}
else
{
lean_object* v_reuseFailAlloc_6798_; 
v_reuseFailAlloc_6798_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6798_, 0, v_a_6789_);
lean_ctor_set(v_reuseFailAlloc_6798_, 1, v_trace_6769_);
lean_ctor_set(v_reuseFailAlloc_6798_, 2, v_buildTime_6770_);
lean_ctor_set_uint8(v_reuseFailAlloc_6798_, sizeof(void*)*3, v_action_6767_);
lean_ctor_set_uint8(v_reuseFailAlloc_6798_, sizeof(void*)*3 + 1, v_wantsRebuild_6768_);
v___x_6794_ = v_reuseFailAlloc_6798_;
goto v_reusejp_6793_;
}
v_reusejp_6793_:
{
lean_object* v___x_6796_; 
if (v_isShared_6792_ == 0)
{
lean_ctor_set(v___x_6791_, 1, v___x_6794_);
v___x_6796_ = v___x_6791_;
goto v_reusejp_6795_;
}
else
{
lean_object* v_reuseFailAlloc_6797_; 
v_reuseFailAlloc_6797_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6797_, 0, v_a_6788_);
lean_ctor_set(v_reuseFailAlloc_6797_, 1, v___x_6794_);
v___x_6796_ = v_reuseFailAlloc_6797_;
goto v_reusejp_6795_;
}
v_reusejp_6795_:
{
return v___x_6796_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0___boxed(lean_object* v_libFile_6801_, lean_object* v_oFiles_6802_, lean_object* v_thin_6803_, lean_object* v___y_6804_, lean_object* v___y_6805_, lean_object* v___y_6806_, lean_object* v___y_6807_, lean_object* v___y_6808_, lean_object* v___y_6809_, lean_object* v___y_6810_){
_start:
{
uint8_t v_thin_boxed_6811_; lean_object* v_res_6812_; 
v_thin_boxed_6811_ = lean_unbox(v_thin_6803_);
v_res_6812_ = l_Lake_buildStaticLib___lam__0(v_libFile_6801_, v_oFiles_6802_, v_thin_boxed_6811_, v___y_6804_, v___y_6805_, v___y_6806_, v___y_6807_, v___y_6808_, v___y_6809_);
lean_dec_ref(v___y_6808_);
lean_dec(v___y_6807_);
lean_dec(v___y_6806_);
lean_dec(v___y_6805_);
lean_dec_ref(v___y_6804_);
return v_res_6812_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1(lean_object* v_libFile_6814_, uint8_t v_thin_6815_, lean_object* v_oFiles_6816_, lean_object* v___y_6817_, lean_object* v___y_6818_, lean_object* v___y_6819_, lean_object* v___y_6820_, lean_object* v___y_6821_, lean_object* v___y_6822_){
_start:
{
lean_object* v___x_6824_; lean_object* v___f_6825_; uint8_t v___x_6826_; lean_object* v___x_6827_; uint8_t v___x_6828_; lean_object* v___x_6829_; 
v___x_6824_ = lean_box(v_thin_6815_);
lean_inc_ref(v_libFile_6814_);
v___f_6825_ = lean_alloc_closure((void*)(l_Lake_buildStaticLib___lam__0___boxed), 10, 3);
lean_closure_set(v___f_6825_, 0, v_libFile_6814_);
lean_closure_set(v___f_6825_, 1, v_oFiles_6816_);
lean_closure_set(v___f_6825_, 2, v___x_6824_);
v___x_6826_ = 0;
v___x_6827_ = ((lean_object*)(l_Lake_buildStaticLib___lam__1___closed__0));
v___x_6828_ = 1;
v___x_6829_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_6814_, v___f_6825_, v___x_6826_, v___x_6827_, v___x_6828_, v___x_6826_, v___x_6826_, v___y_6817_, v___y_6818_, v___y_6819_, v___y_6820_, v___y_6821_, v___y_6822_);
if (lean_obj_tag(v___x_6829_) == 0)
{
lean_object* v_a_6830_; lean_object* v_a_6831_; lean_object* v___x_6833_; uint8_t v_isShared_6834_; uint8_t v_isSharedCheck_6839_; 
v_a_6830_ = lean_ctor_get(v___x_6829_, 0);
v_a_6831_ = lean_ctor_get(v___x_6829_, 1);
v_isSharedCheck_6839_ = !lean_is_exclusive(v___x_6829_);
if (v_isSharedCheck_6839_ == 0)
{
v___x_6833_ = v___x_6829_;
v_isShared_6834_ = v_isSharedCheck_6839_;
goto v_resetjp_6832_;
}
else
{
lean_inc(v_a_6831_);
lean_inc(v_a_6830_);
lean_dec(v___x_6829_);
v___x_6833_ = lean_box(0);
v_isShared_6834_ = v_isSharedCheck_6839_;
goto v_resetjp_6832_;
}
v_resetjp_6832_:
{
lean_object* v_path_6835_; lean_object* v___x_6837_; 
v_path_6835_ = lean_ctor_get(v_a_6830_, 1);
lean_inc_ref(v_path_6835_);
lean_dec(v_a_6830_);
if (v_isShared_6834_ == 0)
{
lean_ctor_set(v___x_6833_, 0, v_path_6835_);
v___x_6837_ = v___x_6833_;
goto v_reusejp_6836_;
}
else
{
lean_object* v_reuseFailAlloc_6838_; 
v_reuseFailAlloc_6838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6838_, 0, v_path_6835_);
lean_ctor_set(v_reuseFailAlloc_6838_, 1, v_a_6831_);
v___x_6837_ = v_reuseFailAlloc_6838_;
goto v_reusejp_6836_;
}
v_reusejp_6836_:
{
return v___x_6837_;
}
}
}
else
{
lean_object* v_a_6840_; lean_object* v_a_6841_; lean_object* v___x_6843_; uint8_t v_isShared_6844_; uint8_t v_isSharedCheck_6848_; 
v_a_6840_ = lean_ctor_get(v___x_6829_, 0);
v_a_6841_ = lean_ctor_get(v___x_6829_, 1);
v_isSharedCheck_6848_ = !lean_is_exclusive(v___x_6829_);
if (v_isSharedCheck_6848_ == 0)
{
v___x_6843_ = v___x_6829_;
v_isShared_6844_ = v_isSharedCheck_6848_;
goto v_resetjp_6842_;
}
else
{
lean_inc(v_a_6841_);
lean_inc(v_a_6840_);
lean_dec(v___x_6829_);
v___x_6843_ = lean_box(0);
v_isShared_6844_ = v_isSharedCheck_6848_;
goto v_resetjp_6842_;
}
v_resetjp_6842_:
{
lean_object* v___x_6846_; 
if (v_isShared_6844_ == 0)
{
v___x_6846_ = v___x_6843_;
goto v_reusejp_6845_;
}
else
{
lean_object* v_reuseFailAlloc_6847_; 
v_reuseFailAlloc_6847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6847_, 0, v_a_6840_);
lean_ctor_set(v_reuseFailAlloc_6847_, 1, v_a_6841_);
v___x_6846_ = v_reuseFailAlloc_6847_;
goto v_reusejp_6845_;
}
v_reusejp_6845_:
{
return v___x_6846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1___boxed(lean_object* v_libFile_6849_, lean_object* v_thin_6850_, lean_object* v_oFiles_6851_, lean_object* v___y_6852_, lean_object* v___y_6853_, lean_object* v___y_6854_, lean_object* v___y_6855_, lean_object* v___y_6856_, lean_object* v___y_6857_, lean_object* v___y_6858_){
_start:
{
uint8_t v_thin_boxed_6859_; lean_object* v_res_6860_; 
v_thin_boxed_6859_ = lean_unbox(v_thin_6850_);
v_res_6860_ = l_Lake_buildStaticLib___lam__1(v_libFile_6849_, v_thin_boxed_6859_, v_oFiles_6851_, v___y_6852_, v___y_6853_, v___y_6854_, v___y_6855_, v___y_6856_, v___y_6857_);
lean_dec_ref(v___y_6856_);
lean_dec(v___y_6855_);
lean_dec(v___y_6854_);
lean_dec(v___y_6853_);
return v_res_6860_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib(lean_object* v_libFile_6862_, lean_object* v_oFileJobs_6863_, uint8_t v_thin_6864_, lean_object* v_a_6865_, lean_object* v_a_6866_, lean_object* v_a_6867_, lean_object* v_a_6868_, lean_object* v_a_6869_, lean_object* v_a_6870_){
_start:
{
lean_object* v___x_6872_; lean_object* v___f_6873_; lean_object* v___x_6874_; lean_object* v___x_6875_; lean_object* v___x_6876_; lean_object* v___x_6877_; uint8_t v___x_6878_; lean_object* v___x_6879_; 
v___x_6872_ = lean_box(v_thin_6864_);
v___f_6873_ = lean_alloc_closure((void*)(l_Lake_buildStaticLib___lam__1___boxed), 10, 2);
lean_closure_set(v___f_6873_, 0, v_libFile_6862_);
lean_closure_set(v___f_6873_, 1, v___x_6872_);
v___x_6874_ = l_Lake_instDataKindFilePath;
v___x_6875_ = ((lean_object*)(l_Lake_buildStaticLib___closed__0));
v___x_6876_ = l_Lake_Job_collectArray___redArg(v_oFileJobs_6863_, v___x_6875_);
v___x_6877_ = lean_unsigned_to_nat(0u);
v___x_6878_ = 0;
v___x_6879_ = l_Lake_Job_mapM___redArg(v___x_6874_, v___x_6876_, v___f_6873_, v___x_6877_, v___x_6878_, v_a_6865_, v_a_6866_, v_a_6867_, v_a_6868_, v_a_6869_, v_a_6870_);
return v___x_6879_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___boxed(lean_object* v_libFile_6880_, lean_object* v_oFileJobs_6881_, lean_object* v_thin_6882_, lean_object* v_a_6883_, lean_object* v_a_6884_, lean_object* v_a_6885_, lean_object* v_a_6886_, lean_object* v_a_6887_, lean_object* v_a_6888_, lean_object* v_a_6889_){
_start:
{
uint8_t v_thin_boxed_6890_; lean_object* v_res_6891_; 
v_thin_boxed_6890_ = lean_unbox(v_thin_6882_);
v_res_6891_ = l_Lake_buildStaticLib(v_libFile_6880_, v_oFileJobs_6881_, v_thin_boxed_6890_, v_a_6883_, v_a_6884_, v_a_6885_, v_a_6886_, v_a_6887_, v_a_6888_);
lean_dec_ref(v_a_6888_);
lean_dec_ref(v_a_6887_);
lean_dec(v_a_6886_);
lean_dec(v_a_6885_);
lean_dec(v_a_6884_);
lean_dec_ref(v_oFileJobs_6881_);
return v_res_6891_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(lean_object* v_as_6892_, size_t v_sz_6893_, size_t v_i_6894_, lean_object* v_b_6895_){
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
lean_object* v_a_6897_; lean_object* v___x_6898_; size_t v___x_6899_; size_t v___x_6900_; 
v_a_6897_ = lean_array_uget_borrowed(v_as_6892_, v_i_6894_);
lean_inc(v_a_6897_);
v___x_6898_ = lean_array_push(v_b_6895_, v_a_6897_);
v___x_6899_ = ((size_t)1ULL);
v___x_6900_ = lean_usize_add(v_i_6894_, v___x_6899_);
v_i_6894_ = v___x_6900_;
v_b_6895_ = v___x_6898_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0___boxed(lean_object* v_as_6902_, lean_object* v_sz_6903_, lean_object* v_i_6904_, lean_object* v_b_6905_){
_start:
{
size_t v_sz_boxed_6906_; size_t v_i_boxed_6907_; lean_object* v_res_6908_; 
v_sz_boxed_6906_ = lean_unbox_usize(v_sz_6903_);
lean_dec(v_sz_6903_);
v_i_boxed_6907_ = lean_unbox_usize(v_i_6904_);
lean_dec(v_i_6904_);
v_res_6908_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(v_as_6902_, v_sz_boxed_6906_, v_i_boxed_6907_, v_b_6905_);
lean_dec_ref(v_as_6902_);
return v_res_6908_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(lean_object* v_as_6911_, size_t v_sz_6912_, size_t v_i_6913_, lean_object* v_b_6914_){
_start:
{
uint8_t v___x_6915_; 
v___x_6915_ = lean_usize_dec_lt(v_i_6913_, v_sz_6912_);
if (v___x_6915_ == 0)
{
return v_b_6914_;
}
else
{
lean_object* v_a_6916_; lean_object* v_args_6918_; lean_object* v___x_6926_; 
v_a_6916_ = lean_array_uget_borrowed(v_as_6911_, v_i_6913_);
lean_inc(v_a_6916_);
v___x_6926_ = l_Lake_Dynlib_dir_x3f(v_a_6916_);
if (lean_obj_tag(v___x_6926_) == 1)
{
lean_object* v_val_6927_; lean_object* v___x_6928_; lean_object* v___x_6929_; lean_object* v___x_6930_; 
v_val_6927_ = lean_ctor_get(v___x_6926_, 0);
lean_inc(v_val_6927_);
lean_dec_ref(v___x_6926_);
v___x_6928_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1));
v___x_6929_ = lean_string_append(v___x_6928_, v_val_6927_);
lean_dec(v_val_6927_);
v___x_6930_ = lean_array_push(v_b_6914_, v___x_6929_);
v_args_6918_ = v___x_6930_;
goto v___jp_6917_;
}
else
{
lean_dec(v___x_6926_);
v_args_6918_ = v_b_6914_;
goto v___jp_6917_;
}
v___jp_6917_:
{
lean_object* v_name_6919_; lean_object* v___x_6920_; lean_object* v___x_6921_; lean_object* v___x_6922_; size_t v___x_6923_; size_t v___x_6924_; 
v_name_6919_ = lean_ctor_get(v_a_6916_, 1);
v___x_6920_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0));
v___x_6921_ = lean_string_append(v___x_6920_, v_name_6919_);
v___x_6922_ = lean_array_push(v_args_6918_, v___x_6921_);
v___x_6923_ = ((size_t)1ULL);
v___x_6924_ = lean_usize_add(v_i_6913_, v___x_6923_);
v_i_6913_ = v___x_6924_;
v_b_6914_ = v___x_6922_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___boxed(lean_object* v_as_6931_, lean_object* v_sz_6932_, lean_object* v_i_6933_, lean_object* v_b_6934_){
_start:
{
size_t v_sz_boxed_6935_; size_t v_i_boxed_6936_; lean_object* v_res_6937_; 
v_sz_boxed_6935_ = lean_unbox_usize(v_sz_6932_);
lean_dec(v_sz_6932_);
v_i_boxed_6936_ = lean_unbox_usize(v_i_6933_);
lean_dec(v_i_6933_);
v_res_6937_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(v_as_6931_, v_sz_boxed_6935_, v_i_boxed_6936_, v_b_6934_);
lean_dec_ref(v_as_6931_);
return v_res_6937_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(lean_object* v_objs_6938_, lean_object* v_libs_6939_){
_start:
{
lean_object* v_args_6940_; size_t v_sz_6941_; size_t v___x_6942_; lean_object* v___x_6943_; size_t v_sz_6944_; lean_object* v___x_6945_; 
v_args_6940_ = ((lean_object*)(l_Lake_inputDir___lam__1___closed__0));
v_sz_6941_ = lean_array_size(v_objs_6938_);
v___x_6942_ = ((size_t)0ULL);
v___x_6943_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(v_objs_6938_, v_sz_6941_, v___x_6942_, v_args_6940_);
v_sz_6944_ = lean_array_size(v_libs_6939_);
v___x_6945_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(v_libs_6939_, v_sz_6944_, v___x_6942_, v___x_6943_);
return v___x_6945_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs___boxed(lean_object* v_objs_6946_, lean_object* v_libs_6947_){
_start:
{
lean_object* v_res_6948_; 
v_res_6948_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_6946_, v_libs_6947_);
lean_dec_ref(v_libs_6947_);
lean_dec_ref(v_objs_6946_);
return v_res_6948_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(lean_object* v_k_6949_, lean_object* v_t_6950_){
_start:
{
if (lean_obj_tag(v_t_6950_) == 0)
{
lean_object* v_k_6951_; lean_object* v_l_6952_; lean_object* v_r_6953_; uint8_t v___x_6954_; 
v_k_6951_ = lean_ctor_get(v_t_6950_, 1);
v_l_6952_ = lean_ctor_get(v_t_6950_, 3);
v_r_6953_ = lean_ctor_get(v_t_6950_, 4);
v___x_6954_ = lean_string_dec_lt(v_k_6949_, v_k_6951_);
if (v___x_6954_ == 0)
{
uint8_t v___x_6955_; 
v___x_6955_ = lean_string_dec_eq(v_k_6949_, v_k_6951_);
if (v___x_6955_ == 0)
{
v_t_6950_ = v_r_6953_;
goto _start;
}
else
{
return v___x_6955_;
}
}
else
{
v_t_6950_ = v_l_6952_;
goto _start;
}
}
else
{
uint8_t v___x_6958_; 
v___x_6958_ = 0;
return v___x_6958_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg___boxed(lean_object* v_k_6959_, lean_object* v_t_6960_){
_start:
{
uint8_t v_res_6961_; lean_object* v_r_6962_; 
v_res_6961_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_k_6959_, v_t_6960_);
lean_dec(v_t_6960_);
lean_dec_ref(v_k_6959_);
v_r_6962_ = lean_box(v_res_6961_);
return v_r_6962_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(lean_object* v_a_6963_, lean_object* v_x_6964_){
_start:
{
if (lean_obj_tag(v_x_6964_) == 0)
{
uint8_t v___x_6965_; 
v___x_6965_ = 0;
return v___x_6965_;
}
else
{
lean_object* v_head_6966_; lean_object* v_tail_6967_; uint8_t v___x_6968_; 
v_head_6966_ = lean_ctor_get(v_x_6964_, 0);
v_tail_6967_ = lean_ctor_get(v_x_6964_, 1);
v___x_6968_ = lean_string_dec_eq(v_a_6963_, v_head_6966_);
if (v___x_6968_ == 0)
{
v_x_6964_ = v_tail_6967_;
goto _start;
}
else
{
return v___x_6968_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1___boxed(lean_object* v_a_6970_, lean_object* v_x_6971_){
_start:
{
uint8_t v_res_6972_; lean_object* v_r_6973_; 
v_res_6972_ = l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(v_a_6970_, v_x_6971_);
lean_dec(v_x_6971_);
lean_dec_ref(v_a_6970_);
v_r_6973_ = lean_box(v_res_6972_);
return v_r_6973_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(lean_object* v_k_6974_, lean_object* v_v_6975_, lean_object* v_t_6976_){
_start:
{
if (lean_obj_tag(v_t_6976_) == 0)
{
lean_object* v_size_6977_; lean_object* v_k_6978_; lean_object* v_v_6979_; lean_object* v_l_6980_; lean_object* v_r_6981_; lean_object* v___x_6983_; uint8_t v_isShared_6984_; uint8_t v_isSharedCheck_7262_; 
v_size_6977_ = lean_ctor_get(v_t_6976_, 0);
v_k_6978_ = lean_ctor_get(v_t_6976_, 1);
v_v_6979_ = lean_ctor_get(v_t_6976_, 2);
v_l_6980_ = lean_ctor_get(v_t_6976_, 3);
v_r_6981_ = lean_ctor_get(v_t_6976_, 4);
v_isSharedCheck_7262_ = !lean_is_exclusive(v_t_6976_);
if (v_isSharedCheck_7262_ == 0)
{
v___x_6983_ = v_t_6976_;
v_isShared_6984_ = v_isSharedCheck_7262_;
goto v_resetjp_6982_;
}
else
{
lean_inc(v_r_6981_);
lean_inc(v_l_6980_);
lean_inc(v_v_6979_);
lean_inc(v_k_6978_);
lean_inc(v_size_6977_);
lean_dec(v_t_6976_);
v___x_6983_ = lean_box(0);
v_isShared_6984_ = v_isSharedCheck_7262_;
goto v_resetjp_6982_;
}
v_resetjp_6982_:
{
uint8_t v___x_6985_; 
v___x_6985_ = lean_string_dec_lt(v_k_6974_, v_k_6978_);
if (v___x_6985_ == 0)
{
uint8_t v___x_6986_; 
v___x_6986_ = lean_string_dec_eq(v_k_6974_, v_k_6978_);
if (v___x_6986_ == 0)
{
lean_object* v_impl_6987_; lean_object* v___x_6988_; 
lean_dec(v_size_6977_);
v_impl_6987_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_6974_, v_v_6975_, v_r_6981_);
v___x_6988_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_6980_) == 0)
{
lean_object* v_size_6989_; lean_object* v_size_6990_; lean_object* v_k_6991_; lean_object* v_v_6992_; lean_object* v_l_6993_; lean_object* v_r_6994_; lean_object* v___x_6995_; lean_object* v___x_6996_; uint8_t v___x_6997_; 
v_size_6989_ = lean_ctor_get(v_l_6980_, 0);
v_size_6990_ = lean_ctor_get(v_impl_6987_, 0);
lean_inc(v_size_6990_);
v_k_6991_ = lean_ctor_get(v_impl_6987_, 1);
lean_inc(v_k_6991_);
v_v_6992_ = lean_ctor_get(v_impl_6987_, 2);
lean_inc(v_v_6992_);
v_l_6993_ = lean_ctor_get(v_impl_6987_, 3);
lean_inc(v_l_6993_);
v_r_6994_ = lean_ctor_get(v_impl_6987_, 4);
lean_inc(v_r_6994_);
v___x_6995_ = lean_unsigned_to_nat(3u);
v___x_6996_ = lean_nat_mul(v___x_6995_, v_size_6989_);
v___x_6997_ = lean_nat_dec_lt(v___x_6996_, v_size_6990_);
lean_dec(v___x_6996_);
if (v___x_6997_ == 0)
{
lean_object* v___x_6998_; lean_object* v___x_6999_; lean_object* v___x_7001_; 
lean_dec(v_r_6994_);
lean_dec(v_l_6993_);
lean_dec(v_v_6992_);
lean_dec(v_k_6991_);
v___x_6998_ = lean_nat_add(v___x_6988_, v_size_6989_);
v___x_6999_ = lean_nat_add(v___x_6998_, v_size_6990_);
lean_dec(v_size_6990_);
lean_dec(v___x_6998_);
if (v_isShared_6984_ == 0)
{
lean_ctor_set(v___x_6983_, 4, v_impl_6987_);
lean_ctor_set(v___x_6983_, 0, v___x_6999_);
v___x_7001_ = v___x_6983_;
goto v_reusejp_7000_;
}
else
{
lean_object* v_reuseFailAlloc_7002_; 
v_reuseFailAlloc_7002_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7002_, 0, v___x_6999_);
lean_ctor_set(v_reuseFailAlloc_7002_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7002_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7002_, 3, v_l_6980_);
lean_ctor_set(v_reuseFailAlloc_7002_, 4, v_impl_6987_);
v___x_7001_ = v_reuseFailAlloc_7002_;
goto v_reusejp_7000_;
}
v_reusejp_7000_:
{
return v___x_7001_;
}
}
else
{
lean_object* v___x_7004_; uint8_t v_isShared_7005_; uint8_t v_isSharedCheck_7066_; 
v_isSharedCheck_7066_ = !lean_is_exclusive(v_impl_6987_);
if (v_isSharedCheck_7066_ == 0)
{
lean_object* v_unused_7067_; lean_object* v_unused_7068_; lean_object* v_unused_7069_; lean_object* v_unused_7070_; lean_object* v_unused_7071_; 
v_unused_7067_ = lean_ctor_get(v_impl_6987_, 4);
lean_dec(v_unused_7067_);
v_unused_7068_ = lean_ctor_get(v_impl_6987_, 3);
lean_dec(v_unused_7068_);
v_unused_7069_ = lean_ctor_get(v_impl_6987_, 2);
lean_dec(v_unused_7069_);
v_unused_7070_ = lean_ctor_get(v_impl_6987_, 1);
lean_dec(v_unused_7070_);
v_unused_7071_ = lean_ctor_get(v_impl_6987_, 0);
lean_dec(v_unused_7071_);
v___x_7004_ = v_impl_6987_;
v_isShared_7005_ = v_isSharedCheck_7066_;
goto v_resetjp_7003_;
}
else
{
lean_dec(v_impl_6987_);
v___x_7004_ = lean_box(0);
v_isShared_7005_ = v_isSharedCheck_7066_;
goto v_resetjp_7003_;
}
v_resetjp_7003_:
{
lean_object* v_size_7006_; lean_object* v_k_7007_; lean_object* v_v_7008_; lean_object* v_l_7009_; lean_object* v_r_7010_; lean_object* v_size_7011_; lean_object* v___x_7012_; lean_object* v___x_7013_; uint8_t v___x_7014_; 
v_size_7006_ = lean_ctor_get(v_l_6993_, 0);
v_k_7007_ = lean_ctor_get(v_l_6993_, 1);
v_v_7008_ = lean_ctor_get(v_l_6993_, 2);
v_l_7009_ = lean_ctor_get(v_l_6993_, 3);
v_r_7010_ = lean_ctor_get(v_l_6993_, 4);
v_size_7011_ = lean_ctor_get(v_r_6994_, 0);
v___x_7012_ = lean_unsigned_to_nat(2u);
v___x_7013_ = lean_nat_mul(v___x_7012_, v_size_7011_);
v___x_7014_ = lean_nat_dec_lt(v_size_7006_, v___x_7013_);
lean_dec(v___x_7013_);
if (v___x_7014_ == 0)
{
lean_object* v___x_7016_; uint8_t v_isShared_7017_; uint8_t v_isSharedCheck_7042_; 
lean_inc(v_r_7010_);
lean_inc(v_l_7009_);
lean_inc(v_v_7008_);
lean_inc(v_k_7007_);
v_isSharedCheck_7042_ = !lean_is_exclusive(v_l_6993_);
if (v_isSharedCheck_7042_ == 0)
{
lean_object* v_unused_7043_; lean_object* v_unused_7044_; lean_object* v_unused_7045_; lean_object* v_unused_7046_; lean_object* v_unused_7047_; 
v_unused_7043_ = lean_ctor_get(v_l_6993_, 4);
lean_dec(v_unused_7043_);
v_unused_7044_ = lean_ctor_get(v_l_6993_, 3);
lean_dec(v_unused_7044_);
v_unused_7045_ = lean_ctor_get(v_l_6993_, 2);
lean_dec(v_unused_7045_);
v_unused_7046_ = lean_ctor_get(v_l_6993_, 1);
lean_dec(v_unused_7046_);
v_unused_7047_ = lean_ctor_get(v_l_6993_, 0);
lean_dec(v_unused_7047_);
v___x_7016_ = v_l_6993_;
v_isShared_7017_ = v_isSharedCheck_7042_;
goto v_resetjp_7015_;
}
else
{
lean_dec(v_l_6993_);
v___x_7016_ = lean_box(0);
v_isShared_7017_ = v_isSharedCheck_7042_;
goto v_resetjp_7015_;
}
v_resetjp_7015_:
{
lean_object* v___x_7018_; lean_object* v___x_7019_; lean_object* v___y_7021_; lean_object* v___y_7022_; lean_object* v___y_7023_; lean_object* v___y_7032_; 
v___x_7018_ = lean_nat_add(v___x_6988_, v_size_6989_);
v___x_7019_ = lean_nat_add(v___x_7018_, v_size_6990_);
lean_dec(v_size_6990_);
if (lean_obj_tag(v_l_7009_) == 0)
{
lean_object* v_size_7040_; 
v_size_7040_ = lean_ctor_get(v_l_7009_, 0);
lean_inc(v_size_7040_);
v___y_7032_ = v_size_7040_;
goto v___jp_7031_;
}
else
{
lean_object* v___x_7041_; 
v___x_7041_ = lean_unsigned_to_nat(0u);
v___y_7032_ = v___x_7041_;
goto v___jp_7031_;
}
v___jp_7020_:
{
lean_object* v___x_7024_; lean_object* v___x_7026_; 
v___x_7024_ = lean_nat_add(v___y_7021_, v___y_7023_);
lean_dec(v___y_7023_);
lean_dec(v___y_7021_);
if (v_isShared_7017_ == 0)
{
lean_ctor_set(v___x_7016_, 4, v_r_6994_);
lean_ctor_set(v___x_7016_, 3, v_r_7010_);
lean_ctor_set(v___x_7016_, 2, v_v_6992_);
lean_ctor_set(v___x_7016_, 1, v_k_6991_);
lean_ctor_set(v___x_7016_, 0, v___x_7024_);
v___x_7026_ = v___x_7016_;
goto v_reusejp_7025_;
}
else
{
lean_object* v_reuseFailAlloc_7030_; 
v_reuseFailAlloc_7030_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7030_, 0, v___x_7024_);
lean_ctor_set(v_reuseFailAlloc_7030_, 1, v_k_6991_);
lean_ctor_set(v_reuseFailAlloc_7030_, 2, v_v_6992_);
lean_ctor_set(v_reuseFailAlloc_7030_, 3, v_r_7010_);
lean_ctor_set(v_reuseFailAlloc_7030_, 4, v_r_6994_);
v___x_7026_ = v_reuseFailAlloc_7030_;
goto v_reusejp_7025_;
}
v_reusejp_7025_:
{
lean_object* v___x_7028_; 
if (v_isShared_7005_ == 0)
{
lean_ctor_set(v___x_7004_, 4, v___x_7026_);
lean_ctor_set(v___x_7004_, 3, v___y_7022_);
lean_ctor_set(v___x_7004_, 2, v_v_7008_);
lean_ctor_set(v___x_7004_, 1, v_k_7007_);
lean_ctor_set(v___x_7004_, 0, v___x_7019_);
v___x_7028_ = v___x_7004_;
goto v_reusejp_7027_;
}
else
{
lean_object* v_reuseFailAlloc_7029_; 
v_reuseFailAlloc_7029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7029_, 0, v___x_7019_);
lean_ctor_set(v_reuseFailAlloc_7029_, 1, v_k_7007_);
lean_ctor_set(v_reuseFailAlloc_7029_, 2, v_v_7008_);
lean_ctor_set(v_reuseFailAlloc_7029_, 3, v___y_7022_);
lean_ctor_set(v_reuseFailAlloc_7029_, 4, v___x_7026_);
v___x_7028_ = v_reuseFailAlloc_7029_;
goto v_reusejp_7027_;
}
v_reusejp_7027_:
{
return v___x_7028_;
}
}
}
v___jp_7031_:
{
lean_object* v___x_7033_; lean_object* v___x_7035_; 
v___x_7033_ = lean_nat_add(v___x_7018_, v___y_7032_);
lean_dec(v___y_7032_);
lean_dec(v___x_7018_);
if (v_isShared_6984_ == 0)
{
lean_ctor_set(v___x_6983_, 4, v_l_7009_);
lean_ctor_set(v___x_6983_, 0, v___x_7033_);
v___x_7035_ = v___x_6983_;
goto v_reusejp_7034_;
}
else
{
lean_object* v_reuseFailAlloc_7039_; 
v_reuseFailAlloc_7039_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7039_, 0, v___x_7033_);
lean_ctor_set(v_reuseFailAlloc_7039_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7039_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7039_, 3, v_l_6980_);
lean_ctor_set(v_reuseFailAlloc_7039_, 4, v_l_7009_);
v___x_7035_ = v_reuseFailAlloc_7039_;
goto v_reusejp_7034_;
}
v_reusejp_7034_:
{
lean_object* v___x_7036_; 
v___x_7036_ = lean_nat_add(v___x_6988_, v_size_7011_);
if (lean_obj_tag(v_r_7010_) == 0)
{
lean_object* v_size_7037_; 
v_size_7037_ = lean_ctor_get(v_r_7010_, 0);
lean_inc(v_size_7037_);
v___y_7021_ = v___x_7036_;
v___y_7022_ = v___x_7035_;
v___y_7023_ = v_size_7037_;
goto v___jp_7020_;
}
else
{
lean_object* v___x_7038_; 
v___x_7038_ = lean_unsigned_to_nat(0u);
v___y_7021_ = v___x_7036_;
v___y_7022_ = v___x_7035_;
v___y_7023_ = v___x_7038_;
goto v___jp_7020_;
}
}
}
}
}
else
{
lean_object* v___x_7048_; lean_object* v___x_7049_; lean_object* v___x_7050_; lean_object* v___x_7052_; 
lean_del_object(v___x_6983_);
v___x_7048_ = lean_nat_add(v___x_6988_, v_size_6989_);
v___x_7049_ = lean_nat_add(v___x_7048_, v_size_6990_);
lean_dec(v_size_6990_);
v___x_7050_ = lean_nat_add(v___x_7048_, v_size_7006_);
lean_dec(v___x_7048_);
lean_inc_ref(v_l_6980_);
if (v_isShared_7005_ == 0)
{
lean_ctor_set(v___x_7004_, 4, v_l_6993_);
lean_ctor_set(v___x_7004_, 3, v_l_6980_);
lean_ctor_set(v___x_7004_, 2, v_v_6979_);
lean_ctor_set(v___x_7004_, 1, v_k_6978_);
lean_ctor_set(v___x_7004_, 0, v___x_7050_);
v___x_7052_ = v___x_7004_;
goto v_reusejp_7051_;
}
else
{
lean_object* v_reuseFailAlloc_7065_; 
v_reuseFailAlloc_7065_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7065_, 0, v___x_7050_);
lean_ctor_set(v_reuseFailAlloc_7065_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7065_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7065_, 3, v_l_6980_);
lean_ctor_set(v_reuseFailAlloc_7065_, 4, v_l_6993_);
v___x_7052_ = v_reuseFailAlloc_7065_;
goto v_reusejp_7051_;
}
v_reusejp_7051_:
{
lean_object* v___x_7054_; uint8_t v_isShared_7055_; uint8_t v_isSharedCheck_7059_; 
v_isSharedCheck_7059_ = !lean_is_exclusive(v_l_6980_);
if (v_isSharedCheck_7059_ == 0)
{
lean_object* v_unused_7060_; lean_object* v_unused_7061_; lean_object* v_unused_7062_; lean_object* v_unused_7063_; lean_object* v_unused_7064_; 
v_unused_7060_ = lean_ctor_get(v_l_6980_, 4);
lean_dec(v_unused_7060_);
v_unused_7061_ = lean_ctor_get(v_l_6980_, 3);
lean_dec(v_unused_7061_);
v_unused_7062_ = lean_ctor_get(v_l_6980_, 2);
lean_dec(v_unused_7062_);
v_unused_7063_ = lean_ctor_get(v_l_6980_, 1);
lean_dec(v_unused_7063_);
v_unused_7064_ = lean_ctor_get(v_l_6980_, 0);
lean_dec(v_unused_7064_);
v___x_7054_ = v_l_6980_;
v_isShared_7055_ = v_isSharedCheck_7059_;
goto v_resetjp_7053_;
}
else
{
lean_dec(v_l_6980_);
v___x_7054_ = lean_box(0);
v_isShared_7055_ = v_isSharedCheck_7059_;
goto v_resetjp_7053_;
}
v_resetjp_7053_:
{
lean_object* v___x_7057_; 
if (v_isShared_7055_ == 0)
{
lean_ctor_set(v___x_7054_, 4, v_r_6994_);
lean_ctor_set(v___x_7054_, 3, v___x_7052_);
lean_ctor_set(v___x_7054_, 2, v_v_6992_);
lean_ctor_set(v___x_7054_, 1, v_k_6991_);
lean_ctor_set(v___x_7054_, 0, v___x_7049_);
v___x_7057_ = v___x_7054_;
goto v_reusejp_7056_;
}
else
{
lean_object* v_reuseFailAlloc_7058_; 
v_reuseFailAlloc_7058_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7058_, 0, v___x_7049_);
lean_ctor_set(v_reuseFailAlloc_7058_, 1, v_k_6991_);
lean_ctor_set(v_reuseFailAlloc_7058_, 2, v_v_6992_);
lean_ctor_set(v_reuseFailAlloc_7058_, 3, v___x_7052_);
lean_ctor_set(v_reuseFailAlloc_7058_, 4, v_r_6994_);
v___x_7057_ = v_reuseFailAlloc_7058_;
goto v_reusejp_7056_;
}
v_reusejp_7056_:
{
return v___x_7057_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_7072_; 
v_l_7072_ = lean_ctor_get(v_impl_6987_, 3);
lean_inc(v_l_7072_);
if (lean_obj_tag(v_l_7072_) == 0)
{
lean_object* v_r_7073_; lean_object* v_k_7074_; lean_object* v_v_7075_; lean_object* v___x_7077_; uint8_t v_isShared_7078_; uint8_t v_isSharedCheck_7098_; 
v_r_7073_ = lean_ctor_get(v_impl_6987_, 4);
v_k_7074_ = lean_ctor_get(v_impl_6987_, 1);
v_v_7075_ = lean_ctor_get(v_impl_6987_, 2);
v_isSharedCheck_7098_ = !lean_is_exclusive(v_impl_6987_);
if (v_isSharedCheck_7098_ == 0)
{
lean_object* v_unused_7099_; lean_object* v_unused_7100_; 
v_unused_7099_ = lean_ctor_get(v_impl_6987_, 3);
lean_dec(v_unused_7099_);
v_unused_7100_ = lean_ctor_get(v_impl_6987_, 0);
lean_dec(v_unused_7100_);
v___x_7077_ = v_impl_6987_;
v_isShared_7078_ = v_isSharedCheck_7098_;
goto v_resetjp_7076_;
}
else
{
lean_inc(v_r_7073_);
lean_inc(v_v_7075_);
lean_inc(v_k_7074_);
lean_dec(v_impl_6987_);
v___x_7077_ = lean_box(0);
v_isShared_7078_ = v_isSharedCheck_7098_;
goto v_resetjp_7076_;
}
v_resetjp_7076_:
{
lean_object* v_k_7079_; lean_object* v_v_7080_; lean_object* v___x_7082_; uint8_t v_isShared_7083_; uint8_t v_isSharedCheck_7094_; 
v_k_7079_ = lean_ctor_get(v_l_7072_, 1);
v_v_7080_ = lean_ctor_get(v_l_7072_, 2);
v_isSharedCheck_7094_ = !lean_is_exclusive(v_l_7072_);
if (v_isSharedCheck_7094_ == 0)
{
lean_object* v_unused_7095_; lean_object* v_unused_7096_; lean_object* v_unused_7097_; 
v_unused_7095_ = lean_ctor_get(v_l_7072_, 4);
lean_dec(v_unused_7095_);
v_unused_7096_ = lean_ctor_get(v_l_7072_, 3);
lean_dec(v_unused_7096_);
v_unused_7097_ = lean_ctor_get(v_l_7072_, 0);
lean_dec(v_unused_7097_);
v___x_7082_ = v_l_7072_;
v_isShared_7083_ = v_isSharedCheck_7094_;
goto v_resetjp_7081_;
}
else
{
lean_inc(v_v_7080_);
lean_inc(v_k_7079_);
lean_dec(v_l_7072_);
v___x_7082_ = lean_box(0);
v_isShared_7083_ = v_isSharedCheck_7094_;
goto v_resetjp_7081_;
}
v_resetjp_7081_:
{
lean_object* v___x_7084_; lean_object* v___x_7086_; 
v___x_7084_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_7073_, 2);
if (v_isShared_7083_ == 0)
{
lean_ctor_set(v___x_7082_, 4, v_r_7073_);
lean_ctor_set(v___x_7082_, 3, v_r_7073_);
lean_ctor_set(v___x_7082_, 2, v_v_6979_);
lean_ctor_set(v___x_7082_, 1, v_k_6978_);
lean_ctor_set(v___x_7082_, 0, v___x_6988_);
v___x_7086_ = v___x_7082_;
goto v_reusejp_7085_;
}
else
{
lean_object* v_reuseFailAlloc_7093_; 
v_reuseFailAlloc_7093_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7093_, 0, v___x_6988_);
lean_ctor_set(v_reuseFailAlloc_7093_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7093_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7093_, 3, v_r_7073_);
lean_ctor_set(v_reuseFailAlloc_7093_, 4, v_r_7073_);
v___x_7086_ = v_reuseFailAlloc_7093_;
goto v_reusejp_7085_;
}
v_reusejp_7085_:
{
lean_object* v___x_7088_; 
lean_inc(v_r_7073_);
if (v_isShared_7078_ == 0)
{
lean_ctor_set(v___x_7077_, 3, v_r_7073_);
lean_ctor_set(v___x_7077_, 0, v___x_6988_);
v___x_7088_ = v___x_7077_;
goto v_reusejp_7087_;
}
else
{
lean_object* v_reuseFailAlloc_7092_; 
v_reuseFailAlloc_7092_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7092_, 0, v___x_6988_);
lean_ctor_set(v_reuseFailAlloc_7092_, 1, v_k_7074_);
lean_ctor_set(v_reuseFailAlloc_7092_, 2, v_v_7075_);
lean_ctor_set(v_reuseFailAlloc_7092_, 3, v_r_7073_);
lean_ctor_set(v_reuseFailAlloc_7092_, 4, v_r_7073_);
v___x_7088_ = v_reuseFailAlloc_7092_;
goto v_reusejp_7087_;
}
v_reusejp_7087_:
{
lean_object* v___x_7090_; 
if (v_isShared_6984_ == 0)
{
lean_ctor_set(v___x_6983_, 4, v___x_7088_);
lean_ctor_set(v___x_6983_, 3, v___x_7086_);
lean_ctor_set(v___x_6983_, 2, v_v_7080_);
lean_ctor_set(v___x_6983_, 1, v_k_7079_);
lean_ctor_set(v___x_6983_, 0, v___x_7084_);
v___x_7090_ = v___x_6983_;
goto v_reusejp_7089_;
}
else
{
lean_object* v_reuseFailAlloc_7091_; 
v_reuseFailAlloc_7091_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7091_, 0, v___x_7084_);
lean_ctor_set(v_reuseFailAlloc_7091_, 1, v_k_7079_);
lean_ctor_set(v_reuseFailAlloc_7091_, 2, v_v_7080_);
lean_ctor_set(v_reuseFailAlloc_7091_, 3, v___x_7086_);
lean_ctor_set(v_reuseFailAlloc_7091_, 4, v___x_7088_);
v___x_7090_ = v_reuseFailAlloc_7091_;
goto v_reusejp_7089_;
}
v_reusejp_7089_:
{
return v___x_7090_;
}
}
}
}
}
}
else
{
lean_object* v_r_7101_; 
v_r_7101_ = lean_ctor_get(v_impl_6987_, 4);
lean_inc(v_r_7101_);
if (lean_obj_tag(v_r_7101_) == 0)
{
lean_object* v_k_7102_; lean_object* v_v_7103_; lean_object* v___x_7105_; uint8_t v_isShared_7106_; uint8_t v_isSharedCheck_7114_; 
v_k_7102_ = lean_ctor_get(v_impl_6987_, 1);
v_v_7103_ = lean_ctor_get(v_impl_6987_, 2);
v_isSharedCheck_7114_ = !lean_is_exclusive(v_impl_6987_);
if (v_isSharedCheck_7114_ == 0)
{
lean_object* v_unused_7115_; lean_object* v_unused_7116_; lean_object* v_unused_7117_; 
v_unused_7115_ = lean_ctor_get(v_impl_6987_, 4);
lean_dec(v_unused_7115_);
v_unused_7116_ = lean_ctor_get(v_impl_6987_, 3);
lean_dec(v_unused_7116_);
v_unused_7117_ = lean_ctor_get(v_impl_6987_, 0);
lean_dec(v_unused_7117_);
v___x_7105_ = v_impl_6987_;
v_isShared_7106_ = v_isSharedCheck_7114_;
goto v_resetjp_7104_;
}
else
{
lean_inc(v_v_7103_);
lean_inc(v_k_7102_);
lean_dec(v_impl_6987_);
v___x_7105_ = lean_box(0);
v_isShared_7106_ = v_isSharedCheck_7114_;
goto v_resetjp_7104_;
}
v_resetjp_7104_:
{
lean_object* v___x_7107_; lean_object* v___x_7109_; 
v___x_7107_ = lean_unsigned_to_nat(3u);
if (v_isShared_7106_ == 0)
{
lean_ctor_set(v___x_7105_, 4, v_l_7072_);
lean_ctor_set(v___x_7105_, 2, v_v_6979_);
lean_ctor_set(v___x_7105_, 1, v_k_6978_);
lean_ctor_set(v___x_7105_, 0, v___x_6988_);
v___x_7109_ = v___x_7105_;
goto v_reusejp_7108_;
}
else
{
lean_object* v_reuseFailAlloc_7113_; 
v_reuseFailAlloc_7113_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7113_, 0, v___x_6988_);
lean_ctor_set(v_reuseFailAlloc_7113_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7113_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7113_, 3, v_l_7072_);
lean_ctor_set(v_reuseFailAlloc_7113_, 4, v_l_7072_);
v___x_7109_ = v_reuseFailAlloc_7113_;
goto v_reusejp_7108_;
}
v_reusejp_7108_:
{
lean_object* v___x_7111_; 
if (v_isShared_6984_ == 0)
{
lean_ctor_set(v___x_6983_, 4, v_r_7101_);
lean_ctor_set(v___x_6983_, 3, v___x_7109_);
lean_ctor_set(v___x_6983_, 2, v_v_7103_);
lean_ctor_set(v___x_6983_, 1, v_k_7102_);
lean_ctor_set(v___x_6983_, 0, v___x_7107_);
v___x_7111_ = v___x_6983_;
goto v_reusejp_7110_;
}
else
{
lean_object* v_reuseFailAlloc_7112_; 
v_reuseFailAlloc_7112_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7112_, 0, v___x_7107_);
lean_ctor_set(v_reuseFailAlloc_7112_, 1, v_k_7102_);
lean_ctor_set(v_reuseFailAlloc_7112_, 2, v_v_7103_);
lean_ctor_set(v_reuseFailAlloc_7112_, 3, v___x_7109_);
lean_ctor_set(v_reuseFailAlloc_7112_, 4, v_r_7101_);
v___x_7111_ = v_reuseFailAlloc_7112_;
goto v_reusejp_7110_;
}
v_reusejp_7110_:
{
return v___x_7111_;
}
}
}
}
else
{
lean_object* v___x_7118_; lean_object* v___x_7120_; 
v___x_7118_ = lean_unsigned_to_nat(2u);
if (v_isShared_6984_ == 0)
{
lean_ctor_set(v___x_6983_, 4, v_impl_6987_);
lean_ctor_set(v___x_6983_, 3, v_r_7101_);
lean_ctor_set(v___x_6983_, 0, v___x_7118_);
v___x_7120_ = v___x_6983_;
goto v_reusejp_7119_;
}
else
{
lean_object* v_reuseFailAlloc_7121_; 
v_reuseFailAlloc_7121_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7121_, 0, v___x_7118_);
lean_ctor_set(v_reuseFailAlloc_7121_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7121_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7121_, 3, v_r_7101_);
lean_ctor_set(v_reuseFailAlloc_7121_, 4, v_impl_6987_);
v___x_7120_ = v_reuseFailAlloc_7121_;
goto v_reusejp_7119_;
}
v_reusejp_7119_:
{
return v___x_7120_;
}
}
}
}
}
else
{
lean_object* v___x_7123_; 
lean_dec(v_v_6979_);
lean_dec(v_k_6978_);
if (v_isShared_6984_ == 0)
{
lean_ctor_set(v___x_6983_, 2, v_v_6975_);
lean_ctor_set(v___x_6983_, 1, v_k_6974_);
v___x_7123_ = v___x_6983_;
goto v_reusejp_7122_;
}
else
{
lean_object* v_reuseFailAlloc_7124_; 
v_reuseFailAlloc_7124_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7124_, 0, v_size_6977_);
lean_ctor_set(v_reuseFailAlloc_7124_, 1, v_k_6974_);
lean_ctor_set(v_reuseFailAlloc_7124_, 2, v_v_6975_);
lean_ctor_set(v_reuseFailAlloc_7124_, 3, v_l_6980_);
lean_ctor_set(v_reuseFailAlloc_7124_, 4, v_r_6981_);
v___x_7123_ = v_reuseFailAlloc_7124_;
goto v_reusejp_7122_;
}
v_reusejp_7122_:
{
return v___x_7123_;
}
}
}
else
{
lean_object* v_impl_7125_; lean_object* v___x_7126_; 
lean_dec(v_size_6977_);
v_impl_7125_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_6974_, v_v_6975_, v_l_6980_);
v___x_7126_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_6981_) == 0)
{
lean_object* v_size_7127_; lean_object* v_size_7128_; lean_object* v_k_7129_; lean_object* v_v_7130_; lean_object* v_l_7131_; lean_object* v_r_7132_; lean_object* v___x_7133_; lean_object* v___x_7134_; uint8_t v___x_7135_; 
v_size_7127_ = lean_ctor_get(v_r_6981_, 0);
v_size_7128_ = lean_ctor_get(v_impl_7125_, 0);
lean_inc(v_size_7128_);
v_k_7129_ = lean_ctor_get(v_impl_7125_, 1);
lean_inc(v_k_7129_);
v_v_7130_ = lean_ctor_get(v_impl_7125_, 2);
lean_inc(v_v_7130_);
v_l_7131_ = lean_ctor_get(v_impl_7125_, 3);
lean_inc(v_l_7131_);
v_r_7132_ = lean_ctor_get(v_impl_7125_, 4);
lean_inc(v_r_7132_);
v___x_7133_ = lean_unsigned_to_nat(3u);
v___x_7134_ = lean_nat_mul(v___x_7133_, v_size_7127_);
v___x_7135_ = lean_nat_dec_lt(v___x_7134_, v_size_7128_);
lean_dec(v___x_7134_);
if (v___x_7135_ == 0)
{
lean_object* v___x_7136_; lean_object* v___x_7137_; lean_object* v___x_7139_; 
lean_dec(v_r_7132_);
lean_dec(v_l_7131_);
lean_dec(v_v_7130_);
lean_dec(v_k_7129_);
v___x_7136_ = lean_nat_add(v___x_7126_, v_size_7128_);
lean_dec(v_size_7128_);
v___x_7137_ = lean_nat_add(v___x_7136_, v_size_7127_);
lean_dec(v___x_7136_);
if (v_isShared_6984_ == 0)
{
lean_ctor_set(v___x_6983_, 3, v_impl_7125_);
lean_ctor_set(v___x_6983_, 0, v___x_7137_);
v___x_7139_ = v___x_6983_;
goto v_reusejp_7138_;
}
else
{
lean_object* v_reuseFailAlloc_7140_; 
v_reuseFailAlloc_7140_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7140_, 0, v___x_7137_);
lean_ctor_set(v_reuseFailAlloc_7140_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7140_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7140_, 3, v_impl_7125_);
lean_ctor_set(v_reuseFailAlloc_7140_, 4, v_r_6981_);
v___x_7139_ = v_reuseFailAlloc_7140_;
goto v_reusejp_7138_;
}
v_reusejp_7138_:
{
return v___x_7139_;
}
}
else
{
lean_object* v___x_7142_; uint8_t v_isShared_7143_; uint8_t v_isSharedCheck_7206_; 
v_isSharedCheck_7206_ = !lean_is_exclusive(v_impl_7125_);
if (v_isSharedCheck_7206_ == 0)
{
lean_object* v_unused_7207_; lean_object* v_unused_7208_; lean_object* v_unused_7209_; lean_object* v_unused_7210_; lean_object* v_unused_7211_; 
v_unused_7207_ = lean_ctor_get(v_impl_7125_, 4);
lean_dec(v_unused_7207_);
v_unused_7208_ = lean_ctor_get(v_impl_7125_, 3);
lean_dec(v_unused_7208_);
v_unused_7209_ = lean_ctor_get(v_impl_7125_, 2);
lean_dec(v_unused_7209_);
v_unused_7210_ = lean_ctor_get(v_impl_7125_, 1);
lean_dec(v_unused_7210_);
v_unused_7211_ = lean_ctor_get(v_impl_7125_, 0);
lean_dec(v_unused_7211_);
v___x_7142_ = v_impl_7125_;
v_isShared_7143_ = v_isSharedCheck_7206_;
goto v_resetjp_7141_;
}
else
{
lean_dec(v_impl_7125_);
v___x_7142_ = lean_box(0);
v_isShared_7143_ = v_isSharedCheck_7206_;
goto v_resetjp_7141_;
}
v_resetjp_7141_:
{
lean_object* v_size_7144_; lean_object* v_size_7145_; lean_object* v_k_7146_; lean_object* v_v_7147_; lean_object* v_l_7148_; lean_object* v_r_7149_; lean_object* v___x_7150_; lean_object* v___x_7151_; uint8_t v___x_7152_; 
v_size_7144_ = lean_ctor_get(v_l_7131_, 0);
v_size_7145_ = lean_ctor_get(v_r_7132_, 0);
v_k_7146_ = lean_ctor_get(v_r_7132_, 1);
v_v_7147_ = lean_ctor_get(v_r_7132_, 2);
v_l_7148_ = lean_ctor_get(v_r_7132_, 3);
v_r_7149_ = lean_ctor_get(v_r_7132_, 4);
v___x_7150_ = lean_unsigned_to_nat(2u);
v___x_7151_ = lean_nat_mul(v___x_7150_, v_size_7144_);
v___x_7152_ = lean_nat_dec_lt(v_size_7145_, v___x_7151_);
lean_dec(v___x_7151_);
if (v___x_7152_ == 0)
{
lean_object* v___x_7154_; uint8_t v_isShared_7155_; uint8_t v_isSharedCheck_7181_; 
lean_inc(v_r_7149_);
lean_inc(v_l_7148_);
lean_inc(v_v_7147_);
lean_inc(v_k_7146_);
v_isSharedCheck_7181_ = !lean_is_exclusive(v_r_7132_);
if (v_isSharedCheck_7181_ == 0)
{
lean_object* v_unused_7182_; lean_object* v_unused_7183_; lean_object* v_unused_7184_; lean_object* v_unused_7185_; lean_object* v_unused_7186_; 
v_unused_7182_ = lean_ctor_get(v_r_7132_, 4);
lean_dec(v_unused_7182_);
v_unused_7183_ = lean_ctor_get(v_r_7132_, 3);
lean_dec(v_unused_7183_);
v_unused_7184_ = lean_ctor_get(v_r_7132_, 2);
lean_dec(v_unused_7184_);
v_unused_7185_ = lean_ctor_get(v_r_7132_, 1);
lean_dec(v_unused_7185_);
v_unused_7186_ = lean_ctor_get(v_r_7132_, 0);
lean_dec(v_unused_7186_);
v___x_7154_ = v_r_7132_;
v_isShared_7155_ = v_isSharedCheck_7181_;
goto v_resetjp_7153_;
}
else
{
lean_dec(v_r_7132_);
v___x_7154_ = lean_box(0);
v_isShared_7155_ = v_isSharedCheck_7181_;
goto v_resetjp_7153_;
}
v_resetjp_7153_:
{
lean_object* v___x_7156_; lean_object* v___x_7157_; lean_object* v___y_7159_; lean_object* v___y_7160_; lean_object* v___y_7161_; lean_object* v___x_7169_; lean_object* v___y_7171_; 
v___x_7156_ = lean_nat_add(v___x_7126_, v_size_7128_);
lean_dec(v_size_7128_);
v___x_7157_ = lean_nat_add(v___x_7156_, v_size_7127_);
lean_dec(v___x_7156_);
v___x_7169_ = lean_nat_add(v___x_7126_, v_size_7144_);
if (lean_obj_tag(v_l_7148_) == 0)
{
lean_object* v_size_7179_; 
v_size_7179_ = lean_ctor_get(v_l_7148_, 0);
lean_inc(v_size_7179_);
v___y_7171_ = v_size_7179_;
goto v___jp_7170_;
}
else
{
lean_object* v___x_7180_; 
v___x_7180_ = lean_unsigned_to_nat(0u);
v___y_7171_ = v___x_7180_;
goto v___jp_7170_;
}
v___jp_7158_:
{
lean_object* v___x_7162_; lean_object* v___x_7164_; 
v___x_7162_ = lean_nat_add(v___y_7160_, v___y_7161_);
lean_dec(v___y_7161_);
lean_dec(v___y_7160_);
if (v_isShared_7155_ == 0)
{
lean_ctor_set(v___x_7154_, 4, v_r_6981_);
lean_ctor_set(v___x_7154_, 3, v_r_7149_);
lean_ctor_set(v___x_7154_, 2, v_v_6979_);
lean_ctor_set(v___x_7154_, 1, v_k_6978_);
lean_ctor_set(v___x_7154_, 0, v___x_7162_);
v___x_7164_ = v___x_7154_;
goto v_reusejp_7163_;
}
else
{
lean_object* v_reuseFailAlloc_7168_; 
v_reuseFailAlloc_7168_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7168_, 0, v___x_7162_);
lean_ctor_set(v_reuseFailAlloc_7168_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7168_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7168_, 3, v_r_7149_);
lean_ctor_set(v_reuseFailAlloc_7168_, 4, v_r_6981_);
v___x_7164_ = v_reuseFailAlloc_7168_;
goto v_reusejp_7163_;
}
v_reusejp_7163_:
{
lean_object* v___x_7166_; 
if (v_isShared_7143_ == 0)
{
lean_ctor_set(v___x_7142_, 4, v___x_7164_);
lean_ctor_set(v___x_7142_, 3, v___y_7159_);
lean_ctor_set(v___x_7142_, 2, v_v_7147_);
lean_ctor_set(v___x_7142_, 1, v_k_7146_);
lean_ctor_set(v___x_7142_, 0, v___x_7157_);
v___x_7166_ = v___x_7142_;
goto v_reusejp_7165_;
}
else
{
lean_object* v_reuseFailAlloc_7167_; 
v_reuseFailAlloc_7167_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7167_, 0, v___x_7157_);
lean_ctor_set(v_reuseFailAlloc_7167_, 1, v_k_7146_);
lean_ctor_set(v_reuseFailAlloc_7167_, 2, v_v_7147_);
lean_ctor_set(v_reuseFailAlloc_7167_, 3, v___y_7159_);
lean_ctor_set(v_reuseFailAlloc_7167_, 4, v___x_7164_);
v___x_7166_ = v_reuseFailAlloc_7167_;
goto v_reusejp_7165_;
}
v_reusejp_7165_:
{
return v___x_7166_;
}
}
}
v___jp_7170_:
{
lean_object* v___x_7172_; lean_object* v___x_7174_; 
v___x_7172_ = lean_nat_add(v___x_7169_, v___y_7171_);
lean_dec(v___y_7171_);
lean_dec(v___x_7169_);
if (v_isShared_6984_ == 0)
{
lean_ctor_set(v___x_6983_, 4, v_l_7148_);
lean_ctor_set(v___x_6983_, 3, v_l_7131_);
lean_ctor_set(v___x_6983_, 2, v_v_7130_);
lean_ctor_set(v___x_6983_, 1, v_k_7129_);
lean_ctor_set(v___x_6983_, 0, v___x_7172_);
v___x_7174_ = v___x_6983_;
goto v_reusejp_7173_;
}
else
{
lean_object* v_reuseFailAlloc_7178_; 
v_reuseFailAlloc_7178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7178_, 0, v___x_7172_);
lean_ctor_set(v_reuseFailAlloc_7178_, 1, v_k_7129_);
lean_ctor_set(v_reuseFailAlloc_7178_, 2, v_v_7130_);
lean_ctor_set(v_reuseFailAlloc_7178_, 3, v_l_7131_);
lean_ctor_set(v_reuseFailAlloc_7178_, 4, v_l_7148_);
v___x_7174_ = v_reuseFailAlloc_7178_;
goto v_reusejp_7173_;
}
v_reusejp_7173_:
{
lean_object* v___x_7175_; 
v___x_7175_ = lean_nat_add(v___x_7126_, v_size_7127_);
if (lean_obj_tag(v_r_7149_) == 0)
{
lean_object* v_size_7176_; 
v_size_7176_ = lean_ctor_get(v_r_7149_, 0);
lean_inc(v_size_7176_);
v___y_7159_ = v___x_7174_;
v___y_7160_ = v___x_7175_;
v___y_7161_ = v_size_7176_;
goto v___jp_7158_;
}
else
{
lean_object* v___x_7177_; 
v___x_7177_ = lean_unsigned_to_nat(0u);
v___y_7159_ = v___x_7174_;
v___y_7160_ = v___x_7175_;
v___y_7161_ = v___x_7177_;
goto v___jp_7158_;
}
}
}
}
}
else
{
lean_object* v___x_7187_; lean_object* v___x_7188_; lean_object* v___x_7189_; lean_object* v___x_7190_; lean_object* v___x_7192_; 
lean_del_object(v___x_6983_);
v___x_7187_ = lean_nat_add(v___x_7126_, v_size_7128_);
lean_dec(v_size_7128_);
v___x_7188_ = lean_nat_add(v___x_7187_, v_size_7127_);
lean_dec(v___x_7187_);
v___x_7189_ = lean_nat_add(v___x_7126_, v_size_7127_);
v___x_7190_ = lean_nat_add(v___x_7189_, v_size_7145_);
lean_dec(v___x_7189_);
lean_inc_ref(v_r_6981_);
if (v_isShared_7143_ == 0)
{
lean_ctor_set(v___x_7142_, 4, v_r_6981_);
lean_ctor_set(v___x_7142_, 3, v_r_7132_);
lean_ctor_set(v___x_7142_, 2, v_v_6979_);
lean_ctor_set(v___x_7142_, 1, v_k_6978_);
lean_ctor_set(v___x_7142_, 0, v___x_7190_);
v___x_7192_ = v___x_7142_;
goto v_reusejp_7191_;
}
else
{
lean_object* v_reuseFailAlloc_7205_; 
v_reuseFailAlloc_7205_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7205_, 0, v___x_7190_);
lean_ctor_set(v_reuseFailAlloc_7205_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7205_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7205_, 3, v_r_7132_);
lean_ctor_set(v_reuseFailAlloc_7205_, 4, v_r_6981_);
v___x_7192_ = v_reuseFailAlloc_7205_;
goto v_reusejp_7191_;
}
v_reusejp_7191_:
{
lean_object* v___x_7194_; uint8_t v_isShared_7195_; uint8_t v_isSharedCheck_7199_; 
v_isSharedCheck_7199_ = !lean_is_exclusive(v_r_6981_);
if (v_isSharedCheck_7199_ == 0)
{
lean_object* v_unused_7200_; lean_object* v_unused_7201_; lean_object* v_unused_7202_; lean_object* v_unused_7203_; lean_object* v_unused_7204_; 
v_unused_7200_ = lean_ctor_get(v_r_6981_, 4);
lean_dec(v_unused_7200_);
v_unused_7201_ = lean_ctor_get(v_r_6981_, 3);
lean_dec(v_unused_7201_);
v_unused_7202_ = lean_ctor_get(v_r_6981_, 2);
lean_dec(v_unused_7202_);
v_unused_7203_ = lean_ctor_get(v_r_6981_, 1);
lean_dec(v_unused_7203_);
v_unused_7204_ = lean_ctor_get(v_r_6981_, 0);
lean_dec(v_unused_7204_);
v___x_7194_ = v_r_6981_;
v_isShared_7195_ = v_isSharedCheck_7199_;
goto v_resetjp_7193_;
}
else
{
lean_dec(v_r_6981_);
v___x_7194_ = lean_box(0);
v_isShared_7195_ = v_isSharedCheck_7199_;
goto v_resetjp_7193_;
}
v_resetjp_7193_:
{
lean_object* v___x_7197_; 
if (v_isShared_7195_ == 0)
{
lean_ctor_set(v___x_7194_, 4, v___x_7192_);
lean_ctor_set(v___x_7194_, 3, v_l_7131_);
lean_ctor_set(v___x_7194_, 2, v_v_7130_);
lean_ctor_set(v___x_7194_, 1, v_k_7129_);
lean_ctor_set(v___x_7194_, 0, v___x_7188_);
v___x_7197_ = v___x_7194_;
goto v_reusejp_7196_;
}
else
{
lean_object* v_reuseFailAlloc_7198_; 
v_reuseFailAlloc_7198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7198_, 0, v___x_7188_);
lean_ctor_set(v_reuseFailAlloc_7198_, 1, v_k_7129_);
lean_ctor_set(v_reuseFailAlloc_7198_, 2, v_v_7130_);
lean_ctor_set(v_reuseFailAlloc_7198_, 3, v_l_7131_);
lean_ctor_set(v_reuseFailAlloc_7198_, 4, v___x_7192_);
v___x_7197_ = v_reuseFailAlloc_7198_;
goto v_reusejp_7196_;
}
v_reusejp_7196_:
{
return v___x_7197_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_7212_; 
v_l_7212_ = lean_ctor_get(v_impl_7125_, 3);
lean_inc(v_l_7212_);
if (lean_obj_tag(v_l_7212_) == 0)
{
lean_object* v_r_7213_; lean_object* v_k_7214_; lean_object* v_v_7215_; lean_object* v___x_7217_; uint8_t v_isShared_7218_; uint8_t v_isSharedCheck_7226_; 
v_r_7213_ = lean_ctor_get(v_impl_7125_, 4);
v_k_7214_ = lean_ctor_get(v_impl_7125_, 1);
v_v_7215_ = lean_ctor_get(v_impl_7125_, 2);
v_isSharedCheck_7226_ = !lean_is_exclusive(v_impl_7125_);
if (v_isSharedCheck_7226_ == 0)
{
lean_object* v_unused_7227_; lean_object* v_unused_7228_; 
v_unused_7227_ = lean_ctor_get(v_impl_7125_, 3);
lean_dec(v_unused_7227_);
v_unused_7228_ = lean_ctor_get(v_impl_7125_, 0);
lean_dec(v_unused_7228_);
v___x_7217_ = v_impl_7125_;
v_isShared_7218_ = v_isSharedCheck_7226_;
goto v_resetjp_7216_;
}
else
{
lean_inc(v_r_7213_);
lean_inc(v_v_7215_);
lean_inc(v_k_7214_);
lean_dec(v_impl_7125_);
v___x_7217_ = lean_box(0);
v_isShared_7218_ = v_isSharedCheck_7226_;
goto v_resetjp_7216_;
}
v_resetjp_7216_:
{
lean_object* v___x_7219_; lean_object* v___x_7221_; 
v___x_7219_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_7213_);
if (v_isShared_7218_ == 0)
{
lean_ctor_set(v___x_7217_, 3, v_r_7213_);
lean_ctor_set(v___x_7217_, 2, v_v_6979_);
lean_ctor_set(v___x_7217_, 1, v_k_6978_);
lean_ctor_set(v___x_7217_, 0, v___x_7126_);
v___x_7221_ = v___x_7217_;
goto v_reusejp_7220_;
}
else
{
lean_object* v_reuseFailAlloc_7225_; 
v_reuseFailAlloc_7225_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7225_, 0, v___x_7126_);
lean_ctor_set(v_reuseFailAlloc_7225_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7225_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7225_, 3, v_r_7213_);
lean_ctor_set(v_reuseFailAlloc_7225_, 4, v_r_7213_);
v___x_7221_ = v_reuseFailAlloc_7225_;
goto v_reusejp_7220_;
}
v_reusejp_7220_:
{
lean_object* v___x_7223_; 
if (v_isShared_6984_ == 0)
{
lean_ctor_set(v___x_6983_, 4, v___x_7221_);
lean_ctor_set(v___x_6983_, 3, v_l_7212_);
lean_ctor_set(v___x_6983_, 2, v_v_7215_);
lean_ctor_set(v___x_6983_, 1, v_k_7214_);
lean_ctor_set(v___x_6983_, 0, v___x_7219_);
v___x_7223_ = v___x_6983_;
goto v_reusejp_7222_;
}
else
{
lean_object* v_reuseFailAlloc_7224_; 
v_reuseFailAlloc_7224_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7224_, 0, v___x_7219_);
lean_ctor_set(v_reuseFailAlloc_7224_, 1, v_k_7214_);
lean_ctor_set(v_reuseFailAlloc_7224_, 2, v_v_7215_);
lean_ctor_set(v_reuseFailAlloc_7224_, 3, v_l_7212_);
lean_ctor_set(v_reuseFailAlloc_7224_, 4, v___x_7221_);
v___x_7223_ = v_reuseFailAlloc_7224_;
goto v_reusejp_7222_;
}
v_reusejp_7222_:
{
return v___x_7223_;
}
}
}
}
else
{
lean_object* v_r_7229_; 
v_r_7229_ = lean_ctor_get(v_impl_7125_, 4);
lean_inc(v_r_7229_);
if (lean_obj_tag(v_r_7229_) == 0)
{
lean_object* v_k_7230_; lean_object* v_v_7231_; lean_object* v___x_7233_; uint8_t v_isShared_7234_; uint8_t v_isSharedCheck_7254_; 
v_k_7230_ = lean_ctor_get(v_impl_7125_, 1);
v_v_7231_ = lean_ctor_get(v_impl_7125_, 2);
v_isSharedCheck_7254_ = !lean_is_exclusive(v_impl_7125_);
if (v_isSharedCheck_7254_ == 0)
{
lean_object* v_unused_7255_; lean_object* v_unused_7256_; lean_object* v_unused_7257_; 
v_unused_7255_ = lean_ctor_get(v_impl_7125_, 4);
lean_dec(v_unused_7255_);
v_unused_7256_ = lean_ctor_get(v_impl_7125_, 3);
lean_dec(v_unused_7256_);
v_unused_7257_ = lean_ctor_get(v_impl_7125_, 0);
lean_dec(v_unused_7257_);
v___x_7233_ = v_impl_7125_;
v_isShared_7234_ = v_isSharedCheck_7254_;
goto v_resetjp_7232_;
}
else
{
lean_inc(v_v_7231_);
lean_inc(v_k_7230_);
lean_dec(v_impl_7125_);
v___x_7233_ = lean_box(0);
v_isShared_7234_ = v_isSharedCheck_7254_;
goto v_resetjp_7232_;
}
v_resetjp_7232_:
{
lean_object* v_k_7235_; lean_object* v_v_7236_; lean_object* v___x_7238_; uint8_t v_isShared_7239_; uint8_t v_isSharedCheck_7250_; 
v_k_7235_ = lean_ctor_get(v_r_7229_, 1);
v_v_7236_ = lean_ctor_get(v_r_7229_, 2);
v_isSharedCheck_7250_ = !lean_is_exclusive(v_r_7229_);
if (v_isSharedCheck_7250_ == 0)
{
lean_object* v_unused_7251_; lean_object* v_unused_7252_; lean_object* v_unused_7253_; 
v_unused_7251_ = lean_ctor_get(v_r_7229_, 4);
lean_dec(v_unused_7251_);
v_unused_7252_ = lean_ctor_get(v_r_7229_, 3);
lean_dec(v_unused_7252_);
v_unused_7253_ = lean_ctor_get(v_r_7229_, 0);
lean_dec(v_unused_7253_);
v___x_7238_ = v_r_7229_;
v_isShared_7239_ = v_isSharedCheck_7250_;
goto v_resetjp_7237_;
}
else
{
lean_inc(v_v_7236_);
lean_inc(v_k_7235_);
lean_dec(v_r_7229_);
v___x_7238_ = lean_box(0);
v_isShared_7239_ = v_isSharedCheck_7250_;
goto v_resetjp_7237_;
}
v_resetjp_7237_:
{
lean_object* v___x_7240_; lean_object* v___x_7242_; 
v___x_7240_ = lean_unsigned_to_nat(3u);
if (v_isShared_7239_ == 0)
{
lean_ctor_set(v___x_7238_, 4, v_l_7212_);
lean_ctor_set(v___x_7238_, 3, v_l_7212_);
lean_ctor_set(v___x_7238_, 2, v_v_7231_);
lean_ctor_set(v___x_7238_, 1, v_k_7230_);
lean_ctor_set(v___x_7238_, 0, v___x_7126_);
v___x_7242_ = v___x_7238_;
goto v_reusejp_7241_;
}
else
{
lean_object* v_reuseFailAlloc_7249_; 
v_reuseFailAlloc_7249_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7249_, 0, v___x_7126_);
lean_ctor_set(v_reuseFailAlloc_7249_, 1, v_k_7230_);
lean_ctor_set(v_reuseFailAlloc_7249_, 2, v_v_7231_);
lean_ctor_set(v_reuseFailAlloc_7249_, 3, v_l_7212_);
lean_ctor_set(v_reuseFailAlloc_7249_, 4, v_l_7212_);
v___x_7242_ = v_reuseFailAlloc_7249_;
goto v_reusejp_7241_;
}
v_reusejp_7241_:
{
lean_object* v___x_7244_; 
if (v_isShared_7234_ == 0)
{
lean_ctor_set(v___x_7233_, 4, v_l_7212_);
lean_ctor_set(v___x_7233_, 2, v_v_6979_);
lean_ctor_set(v___x_7233_, 1, v_k_6978_);
lean_ctor_set(v___x_7233_, 0, v___x_7126_);
v___x_7244_ = v___x_7233_;
goto v_reusejp_7243_;
}
else
{
lean_object* v_reuseFailAlloc_7248_; 
v_reuseFailAlloc_7248_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7248_, 0, v___x_7126_);
lean_ctor_set(v_reuseFailAlloc_7248_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7248_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7248_, 3, v_l_7212_);
lean_ctor_set(v_reuseFailAlloc_7248_, 4, v_l_7212_);
v___x_7244_ = v_reuseFailAlloc_7248_;
goto v_reusejp_7243_;
}
v_reusejp_7243_:
{
lean_object* v___x_7246_; 
if (v_isShared_6984_ == 0)
{
lean_ctor_set(v___x_6983_, 4, v___x_7244_);
lean_ctor_set(v___x_6983_, 3, v___x_7242_);
lean_ctor_set(v___x_6983_, 2, v_v_7236_);
lean_ctor_set(v___x_6983_, 1, v_k_7235_);
lean_ctor_set(v___x_6983_, 0, v___x_7240_);
v___x_7246_ = v___x_6983_;
goto v_reusejp_7245_;
}
else
{
lean_object* v_reuseFailAlloc_7247_; 
v_reuseFailAlloc_7247_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7247_, 0, v___x_7240_);
lean_ctor_set(v_reuseFailAlloc_7247_, 1, v_k_7235_);
lean_ctor_set(v_reuseFailAlloc_7247_, 2, v_v_7236_);
lean_ctor_set(v_reuseFailAlloc_7247_, 3, v___x_7242_);
lean_ctor_set(v_reuseFailAlloc_7247_, 4, v___x_7244_);
v___x_7246_ = v_reuseFailAlloc_7247_;
goto v_reusejp_7245_;
}
v_reusejp_7245_:
{
return v___x_7246_;
}
}
}
}
}
}
else
{
lean_object* v___x_7258_; lean_object* v___x_7260_; 
v___x_7258_ = lean_unsigned_to_nat(2u);
if (v_isShared_6984_ == 0)
{
lean_ctor_set(v___x_6983_, 4, v_r_7229_);
lean_ctor_set(v___x_6983_, 3, v_impl_7125_);
lean_ctor_set(v___x_6983_, 0, v___x_7258_);
v___x_7260_ = v___x_6983_;
goto v_reusejp_7259_;
}
else
{
lean_object* v_reuseFailAlloc_7261_; 
v_reuseFailAlloc_7261_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7261_, 0, v___x_7258_);
lean_ctor_set(v_reuseFailAlloc_7261_, 1, v_k_6978_);
lean_ctor_set(v_reuseFailAlloc_7261_, 2, v_v_6979_);
lean_ctor_set(v_reuseFailAlloc_7261_, 3, v_impl_7125_);
lean_ctor_set(v_reuseFailAlloc_7261_, 4, v_r_7229_);
v___x_7260_ = v_reuseFailAlloc_7261_;
goto v_reusejp_7259_;
}
v_reusejp_7259_:
{
return v___x_7260_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_7263_; lean_object* v___x_7264_; 
v___x_7263_ = lean_unsigned_to_nat(1u);
v___x_7264_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_7264_, 0, v___x_7263_);
lean_ctor_set(v___x_7264_, 1, v_k_6974_);
lean_ctor_set(v___x_7264_, 2, v_v_6975_);
lean_ctor_set(v___x_7264_, 3, v_t_6976_);
lean_ctor_set(v___x_7264_, 4, v_t_6976_);
return v___x_7264_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(lean_object* v_lib_7265_, lean_object* v_ps_7266_, lean_object* v_v_7267_, lean_object* v_o_7268_){
_start:
{
lean_object* v_name_7269_; lean_object* v_deps_7270_; lean_object* v_o_7271_; uint8_t v___x_7272_; 
v_name_7269_ = lean_ctor_get(v_lib_7265_, 1);
lean_inc_ref(v_name_7269_);
v_deps_7270_ = lean_ctor_get(v_lib_7265_, 2);
lean_inc_ref(v_deps_7270_);
v_o_7271_ = lean_array_push(v_o_7268_, v_lib_7265_);
v___x_7272_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_name_7269_, v_v_7267_);
if (v___x_7272_ == 0)
{
uint8_t v___x_7273_; 
v___x_7273_ = l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(v_name_7269_, v_ps_7266_);
if (v___x_7273_ == 0)
{
lean_object* v_ps_7274_; lean_object* v___y_7276_; 
lean_inc_ref(v_name_7269_);
v_ps_7274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_ps_7274_, 0, v_name_7269_);
lean_ctor_set(v_ps_7274_, 1, v_ps_7266_);
if (v___x_7272_ == 0)
{
lean_object* v___x_7290_; lean_object* v___x_7291_; 
v___x_7290_ = lean_box(0);
v___x_7291_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_name_7269_, v___x_7290_, v_v_7267_);
v___y_7276_ = v___x_7291_;
goto v___jp_7275_;
}
else
{
lean_dec_ref(v_name_7269_);
v___y_7276_ = v_v_7267_;
goto v___jp_7275_;
}
v___jp_7275_:
{
lean_object* v___x_7277_; lean_object* v___x_7278_; lean_object* v___x_7279_; uint8_t v___x_7280_; 
v___x_7277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7277_, 0, v___y_7276_);
lean_ctor_set(v___x_7277_, 1, v_o_7271_);
v___x_7278_ = lean_unsigned_to_nat(0u);
v___x_7279_ = lean_array_get_size(v_deps_7270_);
v___x_7280_ = lean_nat_dec_lt(v___x_7278_, v___x_7279_);
if (v___x_7280_ == 0)
{
lean_object* v___x_7281_; 
lean_dec_ref(v_ps_7274_);
lean_dec_ref(v_deps_7270_);
v___x_7281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7281_, 0, v___x_7277_);
return v___x_7281_;
}
else
{
uint8_t v___x_7282_; 
v___x_7282_ = lean_nat_dec_le(v___x_7279_, v___x_7279_);
if (v___x_7282_ == 0)
{
if (v___x_7280_ == 0)
{
lean_object* v___x_7283_; 
lean_dec_ref(v_ps_7274_);
lean_dec_ref(v_deps_7270_);
v___x_7283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7283_, 0, v___x_7277_);
return v___x_7283_;
}
else
{
size_t v___x_7284_; size_t v___x_7285_; lean_object* v___x_7286_; 
v___x_7284_ = ((size_t)0ULL);
v___x_7285_ = lean_usize_of_nat(v___x_7279_);
v___x_7286_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7274_, v_deps_7270_, v___x_7284_, v___x_7285_, v___x_7277_);
lean_dec_ref(v_deps_7270_);
return v___x_7286_;
}
}
else
{
size_t v___x_7287_; size_t v___x_7288_; lean_object* v___x_7289_; 
v___x_7287_ = ((size_t)0ULL);
v___x_7288_ = lean_usize_of_nat(v___x_7279_);
v___x_7289_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7274_, v_deps_7270_, v___x_7287_, v___x_7288_, v___x_7277_);
lean_dec_ref(v_deps_7270_);
return v___x_7289_;
}
}
}
}
else
{
lean_object* v___x_7292_; lean_object* v___x_7293_; 
lean_dec_ref(v_o_7271_);
lean_dec_ref(v_deps_7270_);
lean_dec(v_v_7267_);
v___x_7292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_7292_, 0, v_name_7269_);
lean_ctor_set(v___x_7292_, 1, v_ps_7266_);
v___x_7293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7293_, 0, v___x_7292_);
return v___x_7293_;
}
}
else
{
lean_object* v___x_7294_; lean_object* v___x_7295_; 
lean_dec_ref(v_deps_7270_);
lean_dec_ref(v_name_7269_);
lean_dec(v_ps_7266_);
v___x_7294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7294_, 0, v_v_7267_);
lean_ctor_set(v___x_7294_, 1, v_o_7271_);
v___x_7295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7295_, 0, v___x_7294_);
return v___x_7295_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(lean_object* v_ps_7296_, lean_object* v_as_7297_, size_t v_i_7298_, size_t v_stop_7299_, lean_object* v_b_7300_){
_start:
{
uint8_t v___x_7301_; 
v___x_7301_ = lean_usize_dec_eq(v_i_7298_, v_stop_7299_);
if (v___x_7301_ == 0)
{
lean_object* v_fst_7302_; lean_object* v_snd_7303_; lean_object* v___x_7304_; lean_object* v___x_7305_; 
v_fst_7302_ = lean_ctor_get(v_b_7300_, 0);
lean_inc(v_fst_7302_);
v_snd_7303_ = lean_ctor_get(v_b_7300_, 1);
lean_inc(v_snd_7303_);
lean_dec_ref(v_b_7300_);
v___x_7304_ = lean_array_uget_borrowed(v_as_7297_, v_i_7298_);
lean_inc(v_ps_7296_);
lean_inc(v___x_7304_);
v___x_7305_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(v___x_7304_, v_ps_7296_, v_fst_7302_, v_snd_7303_);
if (lean_obj_tag(v___x_7305_) == 0)
{
lean_dec(v_ps_7296_);
return v___x_7305_;
}
else
{
lean_object* v_a_7306_; size_t v___x_7307_; size_t v___x_7308_; 
v_a_7306_ = lean_ctor_get(v___x_7305_, 0);
lean_inc(v_a_7306_);
lean_dec_ref(v___x_7305_);
v___x_7307_ = ((size_t)1ULL);
v___x_7308_ = lean_usize_add(v_i_7298_, v___x_7307_);
v_i_7298_ = v___x_7308_;
v_b_7300_ = v_a_7306_;
goto _start;
}
}
else
{
lean_object* v___x_7310_; 
lean_dec(v_ps_7296_);
v___x_7310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7310_, 0, v_b_7300_);
return v___x_7310_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2___boxed(lean_object* v_ps_7311_, lean_object* v_as_7312_, lean_object* v_i_7313_, lean_object* v_stop_7314_, lean_object* v_b_7315_){
_start:
{
size_t v_i_boxed_7316_; size_t v_stop_boxed_7317_; lean_object* v_res_7318_; 
v_i_boxed_7316_ = lean_unbox_usize(v_i_7313_);
lean_dec(v_i_7313_);
v_stop_boxed_7317_ = lean_unbox_usize(v_stop_7314_);
lean_dec(v_stop_7314_);
v_res_7318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7311_, v_as_7312_, v_i_boxed_7316_, v_stop_boxed_7317_, v_b_7315_);
lean_dec_ref(v_as_7312_);
return v_res_7318_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0(lean_object* v_00_u03b2_7319_, lean_object* v_k_7320_, lean_object* v_t_7321_){
_start:
{
uint8_t v___x_7322_; 
v___x_7322_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_k_7320_, v_t_7321_);
return v___x_7322_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___boxed(lean_object* v_00_u03b2_7323_, lean_object* v_k_7324_, lean_object* v_t_7325_){
_start:
{
uint8_t v_res_7326_; lean_object* v_r_7327_; 
v_res_7326_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0(v_00_u03b2_7323_, v_k_7324_, v_t_7325_);
lean_dec(v_t_7325_);
lean_dec_ref(v_k_7324_);
v_r_7327_ = lean_box(v_res_7326_);
return v_r_7327_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3(lean_object* v_00_u03b2_7328_, lean_object* v_k_7329_, lean_object* v_v_7330_, lean_object* v_t_7331_, lean_object* v_hl_7332_){
_start:
{
lean_object* v___x_7333_; 
v___x_7333_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_7329_, v_v_7330_, v_t_7331_);
return v___x_7333_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0(lean_object* v_a_7335_, lean_object* v_a_7336_){
_start:
{
if (lean_obj_tag(v_a_7335_) == 0)
{
lean_object* v___x_7337_; 
v___x_7337_ = l_List_reverse___redArg(v_a_7336_);
return v___x_7337_;
}
else
{
lean_object* v_head_7338_; lean_object* v_tail_7339_; lean_object* v___x_7341_; uint8_t v_isShared_7342_; uint8_t v_isSharedCheck_7349_; 
v_head_7338_ = lean_ctor_get(v_a_7335_, 0);
v_tail_7339_ = lean_ctor_get(v_a_7335_, 1);
v_isSharedCheck_7349_ = !lean_is_exclusive(v_a_7335_);
if (v_isSharedCheck_7349_ == 0)
{
v___x_7341_ = v_a_7335_;
v_isShared_7342_ = v_isSharedCheck_7349_;
goto v_resetjp_7340_;
}
else
{
lean_inc(v_tail_7339_);
lean_inc(v_head_7338_);
lean_dec(v_a_7335_);
v___x_7341_ = lean_box(0);
v_isShared_7342_ = v_isSharedCheck_7349_;
goto v_resetjp_7340_;
}
v_resetjp_7340_:
{
lean_object* v___x_7343_; lean_object* v___x_7344_; lean_object* v___x_7346_; 
v___x_7343_ = ((lean_object*)(l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0___closed__0));
v___x_7344_ = lean_string_append(v___x_7343_, v_head_7338_);
lean_dec(v_head_7338_);
if (v_isShared_7342_ == 0)
{
lean_ctor_set(v___x_7341_, 1, v_a_7336_);
lean_ctor_set(v___x_7341_, 0, v___x_7344_);
v___x_7346_ = v___x_7341_;
goto v_reusejp_7345_;
}
else
{
lean_object* v_reuseFailAlloc_7348_; 
v_reuseFailAlloc_7348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7348_, 0, v___x_7344_);
lean_ctor_set(v_reuseFailAlloc_7348_, 1, v_a_7336_);
v___x_7346_ = v_reuseFailAlloc_7348_;
goto v_reusejp_7345_;
}
v_reusejp_7345_:
{
v_a_7335_ = v_tail_7339_;
v_a_7336_ = v___x_7346_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0(lean_object* v_cycle_7350_){
_start:
{
lean_object* v___x_7351_; lean_object* v___x_7352_; lean_object* v___x_7353_; lean_object* v___x_7354_; 
v___x_7351_ = ((lean_object*)(l_Lake_resolveArtifactOutput___closed__1));
v___x_7352_ = lean_box(0);
v___x_7353_ = l_List_mapTR_loop___at___00Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0_spec__0(v_cycle_7350_, v___x_7352_);
v___x_7354_ = l_String_intercalate(v___x_7351_, v___x_7353_);
return v___x_7354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(lean_object* v_as_7355_, size_t v_i_7356_, size_t v_stop_7357_, lean_object* v_b_7358_){
_start:
{
uint8_t v___x_7359_; 
v___x_7359_ = lean_usize_dec_eq(v_i_7356_, v_stop_7357_);
if (v___x_7359_ == 0)
{
lean_object* v_fst_7360_; lean_object* v_snd_7361_; lean_object* v___x_7362_; lean_object* v___x_7363_; lean_object* v___x_7364_; 
v_fst_7360_ = lean_ctor_get(v_b_7358_, 0);
lean_inc(v_fst_7360_);
v_snd_7361_ = lean_ctor_get(v_b_7358_, 1);
lean_inc(v_snd_7361_);
lean_dec_ref(v_b_7358_);
v___x_7362_ = lean_array_uget_borrowed(v_as_7355_, v_i_7356_);
v___x_7363_ = lean_box(0);
lean_inc(v___x_7362_);
v___x_7364_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(v___x_7362_, v___x_7363_, v_fst_7360_, v_snd_7361_);
if (lean_obj_tag(v___x_7364_) == 0)
{
return v___x_7364_;
}
else
{
lean_object* v_a_7365_; size_t v___x_7366_; size_t v___x_7367_; 
v_a_7365_ = lean_ctor_get(v___x_7364_, 0);
lean_inc(v_a_7365_);
lean_dec_ref(v___x_7364_);
v___x_7366_ = ((size_t)1ULL);
v___x_7367_ = lean_usize_add(v_i_7356_, v___x_7366_);
v_i_7356_ = v___x_7367_;
v_b_7358_ = v_a_7365_;
goto _start;
}
}
else
{
lean_object* v___x_7369_; 
v___x_7369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7369_, 0, v_b_7358_);
return v___x_7369_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1___boxed(lean_object* v_as_7370_, lean_object* v_i_7371_, lean_object* v_stop_7372_, lean_object* v_b_7373_){
_start:
{
size_t v_i_boxed_7374_; size_t v_stop_boxed_7375_; lean_object* v_res_7376_; 
v_i_boxed_7374_ = lean_unbox_usize(v_i_7371_);
lean_dec(v_i_7371_);
v_stop_boxed_7375_ = lean_unbox_usize(v_stop_7372_);
lean_dec(v_stop_7372_);
v_res_7376_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(v_as_7370_, v_i_boxed_7374_, v_stop_boxed_7375_, v_b_7373_);
lean_dec_ref(v_as_7370_);
return v_res_7376_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(lean_object* v_libs_7383_, lean_object* v_a_7384_){
_start:
{
lean_object* v_snd_7387_; lean_object* v___y_7390_; lean_object* v___x_7414_; lean_object* v___x_7415_; lean_object* v___x_7416_; uint8_t v___x_7417_; 
v___x_7414_ = lean_unsigned_to_nat(0u);
v___x_7415_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1));
v___x_7416_ = lean_array_get_size(v_libs_7383_);
v___x_7417_ = lean_nat_dec_lt(v___x_7414_, v___x_7416_);
if (v___x_7417_ == 0)
{
v_snd_7387_ = v___x_7415_;
goto v___jp_7386_;
}
else
{
lean_object* v___x_7418_; uint8_t v___x_7419_; 
v___x_7418_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__2));
v___x_7419_ = lean_nat_dec_le(v___x_7416_, v___x_7416_);
if (v___x_7419_ == 0)
{
if (v___x_7417_ == 0)
{
v_snd_7387_ = v___x_7415_;
goto v___jp_7386_;
}
else
{
size_t v___x_7420_; size_t v___x_7421_; lean_object* v___x_7422_; 
v___x_7420_ = ((size_t)0ULL);
v___x_7421_ = lean_usize_of_nat(v___x_7416_);
v___x_7422_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(v_libs_7383_, v___x_7420_, v___x_7421_, v___x_7418_);
v___y_7390_ = v___x_7422_;
goto v___jp_7389_;
}
}
else
{
size_t v___x_7423_; size_t v___x_7424_; lean_object* v___x_7425_; 
v___x_7423_ = ((size_t)0ULL);
v___x_7424_ = lean_usize_of_nat(v___x_7416_);
v___x_7425_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__1(v_libs_7383_, v___x_7423_, v___x_7424_, v___x_7418_);
v___y_7390_ = v___x_7425_;
goto v___jp_7389_;
}
}
v___jp_7386_:
{
lean_object* v___x_7388_; 
v___x_7388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7388_, 0, v_snd_7387_);
lean_ctor_set(v___x_7388_, 1, v_a_7384_);
return v___x_7388_;
}
v___jp_7389_:
{
if (lean_obj_tag(v___y_7390_) == 0)
{
lean_object* v_a_7391_; lean_object* v_log_7392_; uint8_t v_action_7393_; uint8_t v_wantsRebuild_7394_; lean_object* v_trace_7395_; lean_object* v_buildTime_7396_; lean_object* v___x_7398_; uint8_t v_isShared_7399_; uint8_t v_isSharedCheck_7411_; 
v_a_7391_ = lean_ctor_get(v___y_7390_, 0);
lean_inc(v_a_7391_);
lean_dec_ref(v___y_7390_);
v_log_7392_ = lean_ctor_get(v_a_7384_, 0);
v_action_7393_ = lean_ctor_get_uint8(v_a_7384_, sizeof(void*)*3);
v_wantsRebuild_7394_ = lean_ctor_get_uint8(v_a_7384_, sizeof(void*)*3 + 1);
v_trace_7395_ = lean_ctor_get(v_a_7384_, 1);
v_buildTime_7396_ = lean_ctor_get(v_a_7384_, 2);
v_isSharedCheck_7411_ = !lean_is_exclusive(v_a_7384_);
if (v_isSharedCheck_7411_ == 0)
{
v___x_7398_ = v_a_7384_;
v_isShared_7399_ = v_isSharedCheck_7411_;
goto v_resetjp_7397_;
}
else
{
lean_inc(v_buildTime_7396_);
lean_inc(v_trace_7395_);
lean_inc(v_log_7392_);
lean_dec(v_a_7384_);
v___x_7398_ = lean_box(0);
v_isShared_7399_ = v_isSharedCheck_7411_;
goto v_resetjp_7397_;
}
v_resetjp_7397_:
{
lean_object* v___x_7400_; lean_object* v___x_7401_; lean_object* v___x_7402_; uint8_t v___x_7403_; lean_object* v___x_7404_; lean_object* v___x_7405_; lean_object* v___x_7406_; lean_object* v___x_7408_; 
v___x_7400_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__0));
v___x_7401_ = l_Lake_formatCycle___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_spec__0(v_a_7391_);
v___x_7402_ = lean_string_append(v___x_7400_, v___x_7401_);
lean_dec_ref(v___x_7401_);
v___x_7403_ = 3;
v___x_7404_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_7404_, 0, v___x_7402_);
lean_ctor_set_uint8(v___x_7404_, sizeof(void*)*1, v___x_7403_);
v___x_7405_ = lean_array_get_size(v_log_7392_);
v___x_7406_ = lean_array_push(v_log_7392_, v___x_7404_);
if (v_isShared_7399_ == 0)
{
lean_ctor_set(v___x_7398_, 0, v___x_7406_);
v___x_7408_ = v___x_7398_;
goto v_reusejp_7407_;
}
else
{
lean_object* v_reuseFailAlloc_7410_; 
v_reuseFailAlloc_7410_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7410_, 0, v___x_7406_);
lean_ctor_set(v_reuseFailAlloc_7410_, 1, v_trace_7395_);
lean_ctor_set(v_reuseFailAlloc_7410_, 2, v_buildTime_7396_);
lean_ctor_set_uint8(v_reuseFailAlloc_7410_, sizeof(void*)*3, v_action_7393_);
lean_ctor_set_uint8(v_reuseFailAlloc_7410_, sizeof(void*)*3 + 1, v_wantsRebuild_7394_);
v___x_7408_ = v_reuseFailAlloc_7410_;
goto v_reusejp_7407_;
}
v_reusejp_7407_:
{
lean_object* v___x_7409_; 
v___x_7409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_7409_, 0, v___x_7405_);
lean_ctor_set(v___x_7409_, 1, v___x_7408_);
return v___x_7409_;
}
}
}
else
{
lean_object* v_a_7412_; lean_object* v_snd_7413_; 
v_a_7412_ = lean_ctor_get(v___y_7390_, 0);
lean_inc(v_a_7412_);
lean_dec_ref(v___y_7390_);
v_snd_7413_ = lean_ctor_get(v_a_7412_, 1);
lean_inc(v_snd_7413_);
lean_dec(v_a_7412_);
v_snd_7387_ = v_snd_7413_;
goto v___jp_7386_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___boxed(lean_object* v_libs_7426_, lean_object* v_a_7427_, lean_object* v_a_7428_){
_start:
{
lean_object* v_res_7429_; 
v_res_7429_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7426_, v_a_7427_);
lean_dec_ref(v_libs_7426_);
return v_res_7429_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder(lean_object* v_libs_7430_, lean_object* v_a_7431_, lean_object* v_a_7432_, lean_object* v_a_7433_, lean_object* v_a_7434_, lean_object* v_a_7435_, lean_object* v_a_7436_){
_start:
{
lean_object* v___x_7438_; 
v___x_7438_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7430_, v_a_7436_);
return v___x_7438_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder___boxed(lean_object* v_libs_7439_, lean_object* v_a_7440_, lean_object* v_a_7441_, lean_object* v_a_7442_, lean_object* v_a_7443_, lean_object* v_a_7444_, lean_object* v_a_7445_, lean_object* v_a_7446_){
_start:
{
lean_object* v_res_7447_; 
v_res_7447_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder(v_libs_7439_, v_a_7440_, v_a_7441_, v_a_7442_, v_a_7443_, v_a_7444_, v_a_7445_);
lean_dec_ref(v_a_7444_);
lean_dec(v_a_7443_);
lean_dec(v_a_7442_);
lean_dec(v_a_7441_);
lean_dec_ref(v_a_7440_);
lean_dec_ref(v_libs_7439_);
return v_res_7447_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0(lean_object* v_objs_7448_, lean_object* v_weakArgs_7449_, lean_object* v_traceArgs_7450_, lean_object* v_libFile_7451_, lean_object* v_linker_7452_, lean_object* v_libs_7453_, lean_object* v___y_7454_, lean_object* v___y_7455_, lean_object* v___y_7456_, lean_object* v___y_7457_, lean_object* v___y_7458_, lean_object* v___y_7459_){
_start:
{
lean_object* v_log_7461_; uint8_t v_action_7462_; uint8_t v_wantsRebuild_7463_; lean_object* v_trace_7464_; lean_object* v_buildTime_7465_; lean_object* v___x_7467_; uint8_t v_isShared_7468_; uint8_t v_isSharedCheck_7497_; 
v_log_7461_ = lean_ctor_get(v___y_7459_, 0);
v_action_7462_ = lean_ctor_get_uint8(v___y_7459_, sizeof(void*)*3);
v_wantsRebuild_7463_ = lean_ctor_get_uint8(v___y_7459_, sizeof(void*)*3 + 1);
v_trace_7464_ = lean_ctor_get(v___y_7459_, 1);
v_buildTime_7465_ = lean_ctor_get(v___y_7459_, 2);
v_isSharedCheck_7497_ = !lean_is_exclusive(v___y_7459_);
if (v_isSharedCheck_7497_ == 0)
{
v___x_7467_ = v___y_7459_;
v_isShared_7468_ = v_isSharedCheck_7497_;
goto v_resetjp_7466_;
}
else
{
lean_inc(v_buildTime_7465_);
lean_inc(v_trace_7464_);
lean_inc(v_log_7461_);
lean_dec(v___y_7459_);
v___x_7467_ = lean_box(0);
v_isShared_7468_ = v_isSharedCheck_7497_;
goto v_resetjp_7466_;
}
v_resetjp_7466_:
{
lean_object* v___x_7469_; lean_object* v___x_7470_; lean_object* v___x_7471_; lean_object* v___x_7472_; 
v___x_7469_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7448_, v_libs_7453_);
v___x_7470_ = l_Array_append___redArg(v___x_7469_, v_weakArgs_7449_);
v___x_7471_ = l_Array_append___redArg(v___x_7470_, v_traceArgs_7450_);
v___x_7472_ = l_Lake_compileSharedLib(v_libFile_7451_, v___x_7471_, v_linker_7452_, v_log_7461_);
lean_dec_ref(v___x_7471_);
if (lean_obj_tag(v___x_7472_) == 0)
{
lean_object* v_a_7473_; lean_object* v_a_7474_; lean_object* v___x_7476_; uint8_t v_isShared_7477_; uint8_t v_isSharedCheck_7484_; 
v_a_7473_ = lean_ctor_get(v___x_7472_, 0);
v_a_7474_ = lean_ctor_get(v___x_7472_, 1);
v_isSharedCheck_7484_ = !lean_is_exclusive(v___x_7472_);
if (v_isSharedCheck_7484_ == 0)
{
v___x_7476_ = v___x_7472_;
v_isShared_7477_ = v_isSharedCheck_7484_;
goto v_resetjp_7475_;
}
else
{
lean_inc(v_a_7474_);
lean_inc(v_a_7473_);
lean_dec(v___x_7472_);
v___x_7476_ = lean_box(0);
v_isShared_7477_ = v_isSharedCheck_7484_;
goto v_resetjp_7475_;
}
v_resetjp_7475_:
{
lean_object* v___x_7479_; 
if (v_isShared_7468_ == 0)
{
lean_ctor_set(v___x_7467_, 0, v_a_7474_);
v___x_7479_ = v___x_7467_;
goto v_reusejp_7478_;
}
else
{
lean_object* v_reuseFailAlloc_7483_; 
v_reuseFailAlloc_7483_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7483_, 0, v_a_7474_);
lean_ctor_set(v_reuseFailAlloc_7483_, 1, v_trace_7464_);
lean_ctor_set(v_reuseFailAlloc_7483_, 2, v_buildTime_7465_);
lean_ctor_set_uint8(v_reuseFailAlloc_7483_, sizeof(void*)*3, v_action_7462_);
lean_ctor_set_uint8(v_reuseFailAlloc_7483_, sizeof(void*)*3 + 1, v_wantsRebuild_7463_);
v___x_7479_ = v_reuseFailAlloc_7483_;
goto v_reusejp_7478_;
}
v_reusejp_7478_:
{
lean_object* v___x_7481_; 
if (v_isShared_7477_ == 0)
{
lean_ctor_set(v___x_7476_, 1, v___x_7479_);
v___x_7481_ = v___x_7476_;
goto v_reusejp_7480_;
}
else
{
lean_object* v_reuseFailAlloc_7482_; 
v_reuseFailAlloc_7482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7482_, 0, v_a_7473_);
lean_ctor_set(v_reuseFailAlloc_7482_, 1, v___x_7479_);
v___x_7481_ = v_reuseFailAlloc_7482_;
goto v_reusejp_7480_;
}
v_reusejp_7480_:
{
return v___x_7481_;
}
}
}
}
else
{
lean_object* v_a_7485_; lean_object* v_a_7486_; lean_object* v___x_7488_; uint8_t v_isShared_7489_; uint8_t v_isSharedCheck_7496_; 
v_a_7485_ = lean_ctor_get(v___x_7472_, 0);
v_a_7486_ = lean_ctor_get(v___x_7472_, 1);
v_isSharedCheck_7496_ = !lean_is_exclusive(v___x_7472_);
if (v_isSharedCheck_7496_ == 0)
{
v___x_7488_ = v___x_7472_;
v_isShared_7489_ = v_isSharedCheck_7496_;
goto v_resetjp_7487_;
}
else
{
lean_inc(v_a_7486_);
lean_inc(v_a_7485_);
lean_dec(v___x_7472_);
v___x_7488_ = lean_box(0);
v_isShared_7489_ = v_isSharedCheck_7496_;
goto v_resetjp_7487_;
}
v_resetjp_7487_:
{
lean_object* v___x_7491_; 
if (v_isShared_7468_ == 0)
{
lean_ctor_set(v___x_7467_, 0, v_a_7486_);
v___x_7491_ = v___x_7467_;
goto v_reusejp_7490_;
}
else
{
lean_object* v_reuseFailAlloc_7495_; 
v_reuseFailAlloc_7495_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7495_, 0, v_a_7486_);
lean_ctor_set(v_reuseFailAlloc_7495_, 1, v_trace_7464_);
lean_ctor_set(v_reuseFailAlloc_7495_, 2, v_buildTime_7465_);
lean_ctor_set_uint8(v_reuseFailAlloc_7495_, sizeof(void*)*3, v_action_7462_);
lean_ctor_set_uint8(v_reuseFailAlloc_7495_, sizeof(void*)*3 + 1, v_wantsRebuild_7463_);
v___x_7491_ = v_reuseFailAlloc_7495_;
goto v_reusejp_7490_;
}
v_reusejp_7490_:
{
lean_object* v___x_7493_; 
if (v_isShared_7489_ == 0)
{
lean_ctor_set(v___x_7488_, 1, v___x_7491_);
v___x_7493_ = v___x_7488_;
goto v_reusejp_7492_;
}
else
{
lean_object* v_reuseFailAlloc_7494_; 
v_reuseFailAlloc_7494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7494_, 0, v_a_7485_);
lean_ctor_set(v_reuseFailAlloc_7494_, 1, v___x_7491_);
v___x_7493_ = v_reuseFailAlloc_7494_;
goto v_reusejp_7492_;
}
v_reusejp_7492_:
{
return v___x_7493_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0___boxed(lean_object* v_objs_7498_, lean_object* v_weakArgs_7499_, lean_object* v_traceArgs_7500_, lean_object* v_libFile_7501_, lean_object* v_linker_7502_, lean_object* v_libs_7503_, lean_object* v___y_7504_, lean_object* v___y_7505_, lean_object* v___y_7506_, lean_object* v___y_7507_, lean_object* v___y_7508_, lean_object* v___y_7509_, lean_object* v___y_7510_){
_start:
{
lean_object* v_res_7511_; 
v_res_7511_ = l_Lake_buildSharedLib___lam__0(v_objs_7498_, v_weakArgs_7499_, v_traceArgs_7500_, v_libFile_7501_, v_linker_7502_, v_libs_7503_, v___y_7504_, v___y_7505_, v___y_7506_, v___y_7507_, v___y_7508_, v___y_7509_);
lean_dec_ref(v___y_7508_);
lean_dec(v___y_7507_);
lean_dec(v___y_7506_);
lean_dec(v___y_7505_);
lean_dec_ref(v___y_7504_);
lean_dec_ref(v_libs_7503_);
lean_dec_ref(v_traceArgs_7500_);
lean_dec_ref(v_weakArgs_7499_);
lean_dec_ref(v_objs_7498_);
return v_res_7511_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1(uint8_t v_linkDeps_7512_, lean_object* v___x_7513_, lean_object* v___f_7514_, lean_object* v_libs_7515_, lean_object* v___y_7516_, lean_object* v___y_7517_, lean_object* v___y_7518_, lean_object* v___y_7519_, lean_object* v___y_7520_, lean_object* v___y_7521_){
_start:
{
if (v_linkDeps_7512_ == 0)
{
lean_object* v___x_7523_; lean_object* v___x_7524_; 
v___x_7523_ = lean_mk_empty_array_with_capacity(v___x_7513_);
lean_inc_ref(v___y_7520_);
lean_inc(v___y_7519_);
lean_inc(v___y_7518_);
lean_inc(v___y_7517_);
v___x_7524_ = lean_apply_8(v___f_7514_, v___x_7523_, v___y_7516_, v___y_7517_, v___y_7518_, v___y_7519_, v___y_7520_, v___y_7521_, lean_box(0));
return v___x_7524_;
}
else
{
lean_object* v___x_7525_; 
v___x_7525_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7515_, v___y_7521_);
if (lean_obj_tag(v___x_7525_) == 0)
{
lean_object* v_a_7526_; lean_object* v_a_7527_; lean_object* v___x_7528_; 
v_a_7526_ = lean_ctor_get(v___x_7525_, 0);
lean_inc(v_a_7526_);
v_a_7527_ = lean_ctor_get(v___x_7525_, 1);
lean_inc(v_a_7527_);
lean_dec_ref(v___x_7525_);
lean_inc_ref(v___y_7520_);
lean_inc(v___y_7519_);
lean_inc(v___y_7518_);
lean_inc(v___y_7517_);
v___x_7528_ = lean_apply_8(v___f_7514_, v_a_7526_, v___y_7516_, v___y_7517_, v___y_7518_, v___y_7519_, v___y_7520_, v_a_7527_, lean_box(0));
return v___x_7528_;
}
else
{
lean_object* v_a_7529_; lean_object* v_a_7530_; lean_object* v___x_7532_; uint8_t v_isShared_7533_; uint8_t v_isSharedCheck_7537_; 
lean_dec_ref(v___y_7516_);
lean_dec_ref(v___f_7514_);
v_a_7529_ = lean_ctor_get(v___x_7525_, 0);
v_a_7530_ = lean_ctor_get(v___x_7525_, 1);
v_isSharedCheck_7537_ = !lean_is_exclusive(v___x_7525_);
if (v_isSharedCheck_7537_ == 0)
{
v___x_7532_ = v___x_7525_;
v_isShared_7533_ = v_isSharedCheck_7537_;
goto v_resetjp_7531_;
}
else
{
lean_inc(v_a_7530_);
lean_inc(v_a_7529_);
lean_dec(v___x_7525_);
v___x_7532_ = lean_box(0);
v_isShared_7533_ = v_isSharedCheck_7537_;
goto v_resetjp_7531_;
}
v_resetjp_7531_:
{
lean_object* v___x_7535_; 
if (v_isShared_7533_ == 0)
{
v___x_7535_ = v___x_7532_;
goto v_reusejp_7534_;
}
else
{
lean_object* v_reuseFailAlloc_7536_; 
v_reuseFailAlloc_7536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7536_, 0, v_a_7529_);
lean_ctor_set(v_reuseFailAlloc_7536_, 1, v_a_7530_);
v___x_7535_ = v_reuseFailAlloc_7536_;
goto v_reusejp_7534_;
}
v_reusejp_7534_:
{
return v___x_7535_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1___boxed(lean_object* v_linkDeps_7538_, lean_object* v___x_7539_, lean_object* v___f_7540_, lean_object* v_libs_7541_, lean_object* v___y_7542_, lean_object* v___y_7543_, lean_object* v___y_7544_, lean_object* v___y_7545_, lean_object* v___y_7546_, lean_object* v___y_7547_, lean_object* v___y_7548_){
_start:
{
uint8_t v_linkDeps_boxed_7549_; lean_object* v_res_7550_; 
v_linkDeps_boxed_7549_ = lean_unbox(v_linkDeps_7538_);
v_res_7550_ = l_Lake_buildSharedLib___lam__1(v_linkDeps_boxed_7549_, v___x_7539_, v___f_7540_, v_libs_7541_, v___y_7542_, v___y_7543_, v___y_7544_, v___y_7545_, v___y_7546_, v___y_7547_);
lean_dec_ref(v___y_7546_);
lean_dec(v___y_7545_);
lean_dec(v___y_7544_);
lean_dec(v___y_7543_);
lean_dec_ref(v_libs_7541_);
lean_dec(v___x_7539_);
return v_res_7550_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__2(lean_object* v_traceArgs_7551_, lean_object* v_extraDepTrace_7552_, uint8_t v_linkDeps_7553_, lean_object* v___f_7554_, lean_object* v_libFile_7555_, lean_object* v_libName_7556_, uint8_t v_plugin_7557_, lean_object* v_libs_7558_, lean_object* v___y_7559_, lean_object* v___y_7560_, lean_object* v___y_7561_, lean_object* v___y_7562_, lean_object* v___y_7563_, lean_object* v___y_7564_){
_start:
{
uint64_t v___y_7567_; uint64_t v___x_7644_; lean_object* v___x_7645_; lean_object* v___x_7646_; uint8_t v___x_7647_; 
v___x_7644_ = l_Lake_Hash_nil;
v___x_7645_ = lean_unsigned_to_nat(0u);
v___x_7646_ = lean_array_get_size(v_traceArgs_7551_);
v___x_7647_ = lean_nat_dec_lt(v___x_7645_, v___x_7646_);
if (v___x_7647_ == 0)
{
v___y_7567_ = v___x_7644_;
goto v___jp_7566_;
}
else
{
uint8_t v___x_7648_; 
v___x_7648_ = lean_nat_dec_le(v___x_7646_, v___x_7646_);
if (v___x_7648_ == 0)
{
if (v___x_7647_ == 0)
{
v___y_7567_ = v___x_7644_;
goto v___jp_7566_;
}
else
{
size_t v___x_7649_; size_t v___x_7650_; uint64_t v___x_7651_; 
v___x_7649_ = ((size_t)0ULL);
v___x_7650_ = lean_usize_of_nat(v___x_7646_);
v___x_7651_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_7551_, v___x_7649_, v___x_7650_, v___x_7644_);
v___y_7567_ = v___x_7651_;
goto v___jp_7566_;
}
}
else
{
size_t v___x_7652_; size_t v___x_7653_; uint64_t v___x_7654_; 
v___x_7652_ = ((size_t)0ULL);
v___x_7653_ = lean_usize_of_nat(v___x_7646_);
v___x_7654_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_7551_, v___x_7652_, v___x_7653_, v___x_7644_);
v___y_7567_ = v___x_7654_;
goto v___jp_7566_;
}
}
v___jp_7566_:
{
lean_object* v_log_7568_; uint8_t v_action_7569_; uint8_t v_wantsRebuild_7570_; lean_object* v_trace_7571_; lean_object* v_buildTime_7572_; lean_object* v___x_7574_; uint8_t v_isShared_7575_; uint8_t v_isSharedCheck_7643_; 
v_log_7568_ = lean_ctor_get(v___y_7564_, 0);
v_action_7569_ = lean_ctor_get_uint8(v___y_7564_, sizeof(void*)*3);
v_wantsRebuild_7570_ = lean_ctor_get_uint8(v___y_7564_, sizeof(void*)*3 + 1);
v_trace_7571_ = lean_ctor_get(v___y_7564_, 1);
v_buildTime_7572_ = lean_ctor_get(v___y_7564_, 2);
v_isSharedCheck_7643_ = !lean_is_exclusive(v___y_7564_);
if (v_isSharedCheck_7643_ == 0)
{
v___x_7574_ = v___y_7564_;
v_isShared_7575_ = v_isSharedCheck_7643_;
goto v_resetjp_7573_;
}
else
{
lean_inc(v_buildTime_7572_);
lean_inc(v_trace_7571_);
lean_inc(v_log_7568_);
lean_dec(v___y_7564_);
v___x_7574_ = lean_box(0);
v_isShared_7575_ = v_isSharedCheck_7643_;
goto v_resetjp_7573_;
}
v_resetjp_7573_:
{
lean_object* v___x_7576_; lean_object* v___x_7577_; lean_object* v___x_7578_; lean_object* v___x_7579_; lean_object* v___x_7580_; lean_object* v___x_7581_; lean_object* v___x_7582_; lean_object* v___x_7583_; lean_object* v___x_7584_; lean_object* v___x_7585_; lean_object* v___x_7586_; lean_object* v___x_7587_; lean_object* v___x_7588_; lean_object* v___x_7590_; 
v___x_7576_ = lean_unsigned_to_nat(0u);
v___x_7577_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_7578_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_7579_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
v___x_7580_ = lean_array_to_list(v_traceArgs_7551_);
v___x_7581_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_7580_);
lean_dec(v___x_7580_);
v___x_7582_ = lean_string_append(v___x_7579_, v___x_7581_);
lean_dec_ref(v___x_7581_);
v___x_7583_ = lean_string_append(v___x_7578_, v___x_7582_);
lean_dec_ref(v___x_7582_);
v___x_7584_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_7585_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_7585_, 0, v___x_7583_);
lean_ctor_set(v___x_7585_, 1, v___x_7577_);
lean_ctor_set(v___x_7585_, 2, v___x_7584_);
lean_ctor_set_uint64(v___x_7585_, sizeof(void*)*3, v___y_7567_);
v___x_7586_ = l_Lake_BuildTrace_mix(v_trace_7571_, v___x_7585_);
v___x_7587_ = l_Lake_platformTrace;
v___x_7588_ = l_Lake_BuildTrace_mix(v___x_7586_, v___x_7587_);
if (v_isShared_7575_ == 0)
{
lean_ctor_set(v___x_7574_, 1, v___x_7588_);
v___x_7590_ = v___x_7574_;
goto v_reusejp_7589_;
}
else
{
lean_object* v_reuseFailAlloc_7642_; 
v_reuseFailAlloc_7642_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7642_, 0, v_log_7568_);
lean_ctor_set(v_reuseFailAlloc_7642_, 1, v___x_7588_);
lean_ctor_set(v_reuseFailAlloc_7642_, 2, v_buildTime_7572_);
lean_ctor_set_uint8(v_reuseFailAlloc_7642_, sizeof(void*)*3, v_action_7569_);
lean_ctor_set_uint8(v_reuseFailAlloc_7642_, sizeof(void*)*3 + 1, v_wantsRebuild_7570_);
v___x_7590_ = v_reuseFailAlloc_7642_;
goto v_reusejp_7589_;
}
v_reusejp_7589_:
{
lean_object* v___x_7591_; 
lean_inc_ref(v___y_7563_);
lean_inc(v___y_7562_);
lean_inc(v___y_7561_);
lean_inc(v___y_7560_);
lean_inc_ref(v___y_7559_);
v___x_7591_ = lean_apply_7(v_extraDepTrace_7552_, v___y_7559_, v___y_7560_, v___y_7561_, v___y_7562_, v___y_7563_, v___x_7590_, lean_box(0));
if (lean_obj_tag(v___x_7591_) == 0)
{
lean_object* v_a_7592_; lean_object* v_a_7593_; lean_object* v_log_7594_; uint8_t v_action_7595_; uint8_t v_wantsRebuild_7596_; lean_object* v_trace_7597_; lean_object* v_buildTime_7598_; lean_object* v___x_7600_; uint8_t v_isShared_7601_; uint8_t v_isSharedCheck_7632_; 
v_a_7592_ = lean_ctor_get(v___x_7591_, 1);
lean_inc(v_a_7592_);
v_a_7593_ = lean_ctor_get(v___x_7591_, 0);
lean_inc(v_a_7593_);
lean_dec_ref(v___x_7591_);
v_log_7594_ = lean_ctor_get(v_a_7592_, 0);
v_action_7595_ = lean_ctor_get_uint8(v_a_7592_, sizeof(void*)*3);
v_wantsRebuild_7596_ = lean_ctor_get_uint8(v_a_7592_, sizeof(void*)*3 + 1);
v_trace_7597_ = lean_ctor_get(v_a_7592_, 1);
v_buildTime_7598_ = lean_ctor_get(v_a_7592_, 2);
v_isSharedCheck_7632_ = !lean_is_exclusive(v_a_7592_);
if (v_isSharedCheck_7632_ == 0)
{
v___x_7600_ = v_a_7592_;
v_isShared_7601_ = v_isSharedCheck_7632_;
goto v_resetjp_7599_;
}
else
{
lean_inc(v_buildTime_7598_);
lean_inc(v_trace_7597_);
lean_inc(v_log_7594_);
lean_dec(v_a_7592_);
v___x_7600_ = lean_box(0);
v_isShared_7601_ = v_isSharedCheck_7632_;
goto v_resetjp_7599_;
}
v_resetjp_7599_:
{
lean_object* v___x_7602_; lean_object* v___y_7603_; lean_object* v___x_7604_; lean_object* v___x_7606_; 
v___x_7602_ = lean_box(v_linkDeps_7553_);
lean_inc_ref(v_libs_7558_);
v___y_7603_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__1___boxed), 11, 4);
lean_closure_set(v___y_7603_, 0, v___x_7602_);
lean_closure_set(v___y_7603_, 1, v___x_7576_);
lean_closure_set(v___y_7603_, 2, v___f_7554_);
lean_closure_set(v___y_7603_, 3, v_libs_7558_);
v___x_7604_ = l_Lake_BuildTrace_mix(v_trace_7597_, v_a_7593_);
if (v_isShared_7601_ == 0)
{
lean_ctor_set(v___x_7600_, 1, v___x_7604_);
v___x_7606_ = v___x_7600_;
goto v_reusejp_7605_;
}
else
{
lean_object* v_reuseFailAlloc_7631_; 
v_reuseFailAlloc_7631_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7631_, 0, v_log_7594_);
lean_ctor_set(v_reuseFailAlloc_7631_, 1, v___x_7604_);
lean_ctor_set(v_reuseFailAlloc_7631_, 2, v_buildTime_7598_);
lean_ctor_set_uint8(v_reuseFailAlloc_7631_, sizeof(void*)*3, v_action_7595_);
lean_ctor_set_uint8(v_reuseFailAlloc_7631_, sizeof(void*)*3 + 1, v_wantsRebuild_7596_);
v___x_7606_ = v_reuseFailAlloc_7631_;
goto v_reusejp_7605_;
}
v_reusejp_7605_:
{
uint8_t v___x_7607_; uint8_t v___x_7608_; lean_object* v___x_7609_; lean_object* v___x_7610_; 
v___x_7607_ = 1;
v___x_7608_ = 0;
v___x_7609_ = l_Lake_sharedLibExt;
v___x_7610_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_7555_, v___y_7603_, v___x_7608_, v___x_7609_, v___x_7607_, v___x_7608_, v___x_7608_, v___y_7559_, v___y_7560_, v___y_7561_, v___y_7562_, v___y_7563_, v___x_7606_);
if (lean_obj_tag(v___x_7610_) == 0)
{
lean_object* v_a_7611_; lean_object* v_a_7612_; lean_object* v___x_7614_; uint8_t v_isShared_7615_; uint8_t v_isSharedCheck_7621_; 
v_a_7611_ = lean_ctor_get(v___x_7610_, 0);
v_a_7612_ = lean_ctor_get(v___x_7610_, 1);
v_isSharedCheck_7621_ = !lean_is_exclusive(v___x_7610_);
if (v_isSharedCheck_7621_ == 0)
{
v___x_7614_ = v___x_7610_;
v_isShared_7615_ = v_isSharedCheck_7621_;
goto v_resetjp_7613_;
}
else
{
lean_inc(v_a_7612_);
lean_inc(v_a_7611_);
lean_dec(v___x_7610_);
v___x_7614_ = lean_box(0);
v_isShared_7615_ = v_isSharedCheck_7621_;
goto v_resetjp_7613_;
}
v_resetjp_7613_:
{
lean_object* v_path_7616_; lean_object* v___x_7617_; lean_object* v___x_7619_; 
v_path_7616_ = lean_ctor_get(v_a_7611_, 1);
lean_inc_ref(v_path_7616_);
lean_dec(v_a_7611_);
v___x_7617_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_7617_, 0, v_path_7616_);
lean_ctor_set(v___x_7617_, 1, v_libName_7556_);
lean_ctor_set(v___x_7617_, 2, v_libs_7558_);
lean_ctor_set_uint8(v___x_7617_, sizeof(void*)*3, v_plugin_7557_);
if (v_isShared_7615_ == 0)
{
lean_ctor_set(v___x_7614_, 0, v___x_7617_);
v___x_7619_ = v___x_7614_;
goto v_reusejp_7618_;
}
else
{
lean_object* v_reuseFailAlloc_7620_; 
v_reuseFailAlloc_7620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7620_, 0, v___x_7617_);
lean_ctor_set(v_reuseFailAlloc_7620_, 1, v_a_7612_);
v___x_7619_ = v_reuseFailAlloc_7620_;
goto v_reusejp_7618_;
}
v_reusejp_7618_:
{
return v___x_7619_;
}
}
}
else
{
lean_object* v_a_7622_; lean_object* v_a_7623_; lean_object* v___x_7625_; uint8_t v_isShared_7626_; uint8_t v_isSharedCheck_7630_; 
lean_dec_ref(v_libs_7558_);
lean_dec_ref(v_libName_7556_);
v_a_7622_ = lean_ctor_get(v___x_7610_, 0);
v_a_7623_ = lean_ctor_get(v___x_7610_, 1);
v_isSharedCheck_7630_ = !lean_is_exclusive(v___x_7610_);
if (v_isSharedCheck_7630_ == 0)
{
v___x_7625_ = v___x_7610_;
v_isShared_7626_ = v_isSharedCheck_7630_;
goto v_resetjp_7624_;
}
else
{
lean_inc(v_a_7623_);
lean_inc(v_a_7622_);
lean_dec(v___x_7610_);
v___x_7625_ = lean_box(0);
v_isShared_7626_ = v_isSharedCheck_7630_;
goto v_resetjp_7624_;
}
v_resetjp_7624_:
{
lean_object* v___x_7628_; 
if (v_isShared_7626_ == 0)
{
v___x_7628_ = v___x_7625_;
goto v_reusejp_7627_;
}
else
{
lean_object* v_reuseFailAlloc_7629_; 
v_reuseFailAlloc_7629_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7629_, 0, v_a_7622_);
lean_ctor_set(v_reuseFailAlloc_7629_, 1, v_a_7623_);
v___x_7628_ = v_reuseFailAlloc_7629_;
goto v_reusejp_7627_;
}
v_reusejp_7627_:
{
return v___x_7628_;
}
}
}
}
}
}
else
{
lean_object* v_a_7633_; lean_object* v_a_7634_; lean_object* v___x_7636_; uint8_t v_isShared_7637_; uint8_t v_isSharedCheck_7641_; 
lean_dec_ref(v___y_7559_);
lean_dec_ref(v_libs_7558_);
lean_dec_ref(v_libName_7556_);
lean_dec_ref(v_libFile_7555_);
lean_dec_ref(v___f_7554_);
v_a_7633_ = lean_ctor_get(v___x_7591_, 0);
v_a_7634_ = lean_ctor_get(v___x_7591_, 1);
v_isSharedCheck_7641_ = !lean_is_exclusive(v___x_7591_);
if (v_isSharedCheck_7641_ == 0)
{
v___x_7636_ = v___x_7591_;
v_isShared_7637_ = v_isSharedCheck_7641_;
goto v_resetjp_7635_;
}
else
{
lean_inc(v_a_7634_);
lean_inc(v_a_7633_);
lean_dec(v___x_7591_);
v___x_7636_ = lean_box(0);
v_isShared_7637_ = v_isSharedCheck_7641_;
goto v_resetjp_7635_;
}
v_resetjp_7635_:
{
lean_object* v___x_7639_; 
if (v_isShared_7637_ == 0)
{
v___x_7639_ = v___x_7636_;
goto v_reusejp_7638_;
}
else
{
lean_object* v_reuseFailAlloc_7640_; 
v_reuseFailAlloc_7640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7640_, 0, v_a_7633_);
lean_ctor_set(v_reuseFailAlloc_7640_, 1, v_a_7634_);
v___x_7639_ = v_reuseFailAlloc_7640_;
goto v_reusejp_7638_;
}
v_reusejp_7638_:
{
return v___x_7639_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__2___boxed(lean_object* v_traceArgs_7655_, lean_object* v_extraDepTrace_7656_, lean_object* v_linkDeps_7657_, lean_object* v___f_7658_, lean_object* v_libFile_7659_, lean_object* v_libName_7660_, lean_object* v_plugin_7661_, lean_object* v_libs_7662_, lean_object* v___y_7663_, lean_object* v___y_7664_, lean_object* v___y_7665_, lean_object* v___y_7666_, lean_object* v___y_7667_, lean_object* v___y_7668_, lean_object* v___y_7669_){
_start:
{
uint8_t v_linkDeps_boxed_7670_; uint8_t v_plugin_boxed_7671_; lean_object* v_res_7672_; 
v_linkDeps_boxed_7670_ = lean_unbox(v_linkDeps_7657_);
v_plugin_boxed_7671_ = lean_unbox(v_plugin_7661_);
v_res_7672_ = l_Lake_buildSharedLib___lam__2(v_traceArgs_7655_, v_extraDepTrace_7656_, v_linkDeps_boxed_7670_, v___f_7658_, v_libFile_7659_, v_libName_7660_, v_plugin_boxed_7671_, v_libs_7662_, v___y_7663_, v___y_7664_, v___y_7665_, v___y_7666_, v___y_7667_, v___y_7668_);
lean_dec_ref(v___y_7667_);
lean_dec(v___y_7666_);
lean_dec(v___y_7665_);
lean_dec(v___y_7664_);
return v_res_7672_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__3(lean_object* v_weakArgs_7674_, lean_object* v_traceArgs_7675_, lean_object* v_libFile_7676_, lean_object* v_linker_7677_, lean_object* v_extraDepTrace_7678_, uint8_t v_linkDeps_7679_, lean_object* v_libName_7680_, uint8_t v_plugin_7681_, lean_object* v_linkLibs_7682_, lean_object* v___x_7683_, lean_object* v_objs_7684_, lean_object* v___y_7685_, lean_object* v___y_7686_, lean_object* v___y_7687_, lean_object* v___y_7688_, lean_object* v___y_7689_, lean_object* v___y_7690_){
_start:
{
lean_object* v_trace_7692_; lean_object* v___f_7693_; lean_object* v___x_7694_; lean_object* v___x_7695_; lean_object* v___f_7696_; lean_object* v___x_7697_; lean_object* v___x_7698_; lean_object* v___x_7699_; uint8_t v___x_7700_; lean_object* v___x_7701_; lean_object* v___x_7702_; 
v_trace_7692_ = lean_ctor_get(v___y_7690_, 1);
lean_inc_ref(v_libFile_7676_);
lean_inc_ref(v_traceArgs_7675_);
v___f_7693_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__0___boxed), 13, 5);
lean_closure_set(v___f_7693_, 0, v_objs_7684_);
lean_closure_set(v___f_7693_, 1, v_weakArgs_7674_);
lean_closure_set(v___f_7693_, 2, v_traceArgs_7675_);
lean_closure_set(v___f_7693_, 3, v_libFile_7676_);
lean_closure_set(v___f_7693_, 4, v_linker_7677_);
v___x_7694_ = lean_box(v_linkDeps_7679_);
v___x_7695_ = lean_box(v_plugin_7681_);
v___f_7696_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__2___boxed), 15, 7);
lean_closure_set(v___f_7696_, 0, v_traceArgs_7675_);
lean_closure_set(v___f_7696_, 1, v_extraDepTrace_7678_);
lean_closure_set(v___f_7696_, 2, v___x_7694_);
lean_closure_set(v___f_7696_, 3, v___f_7693_);
lean_closure_set(v___f_7696_, 4, v_libFile_7676_);
lean_closure_set(v___f_7696_, 5, v_libName_7680_);
lean_closure_set(v___f_7696_, 6, v___x_7695_);
v___x_7697_ = ((lean_object*)(l_Lake_buildSharedLib___lam__3___closed__0));
v___x_7698_ = l_Lake_Job_collectArray___redArg(v_linkLibs_7682_, v___x_7697_);
v___x_7699_ = lean_unsigned_to_nat(0u);
v___x_7700_ = 0;
v___x_7701_ = l_Lake_Job_mapM___redArg(v___x_7683_, v___x_7698_, v___f_7696_, v___x_7699_, v___x_7700_, v___y_7685_, v___y_7686_, v___y_7687_, v___y_7688_, v___y_7689_, v_trace_7692_);
v___x_7702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7702_, 0, v___x_7701_);
lean_ctor_set(v___x_7702_, 1, v___y_7690_);
return v___x_7702_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__3___boxed(lean_object** _args){
lean_object* v_weakArgs_7703_ = _args[0];
lean_object* v_traceArgs_7704_ = _args[1];
lean_object* v_libFile_7705_ = _args[2];
lean_object* v_linker_7706_ = _args[3];
lean_object* v_extraDepTrace_7707_ = _args[4];
lean_object* v_linkDeps_7708_ = _args[5];
lean_object* v_libName_7709_ = _args[6];
lean_object* v_plugin_7710_ = _args[7];
lean_object* v_linkLibs_7711_ = _args[8];
lean_object* v___x_7712_ = _args[9];
lean_object* v_objs_7713_ = _args[10];
lean_object* v___y_7714_ = _args[11];
lean_object* v___y_7715_ = _args[12];
lean_object* v___y_7716_ = _args[13];
lean_object* v___y_7717_ = _args[14];
lean_object* v___y_7718_ = _args[15];
lean_object* v___y_7719_ = _args[16];
lean_object* v___y_7720_ = _args[17];
_start:
{
uint8_t v_linkDeps_boxed_7721_; uint8_t v_plugin_boxed_7722_; lean_object* v_res_7723_; 
v_linkDeps_boxed_7721_ = lean_unbox(v_linkDeps_7708_);
v_plugin_boxed_7722_ = lean_unbox(v_plugin_7710_);
v_res_7723_ = l_Lake_buildSharedLib___lam__3(v_weakArgs_7703_, v_traceArgs_7704_, v_libFile_7705_, v_linker_7706_, v_extraDepTrace_7707_, v_linkDeps_boxed_7721_, v_libName_7709_, v_plugin_boxed_7722_, v_linkLibs_7711_, v___x_7712_, v_objs_7713_, v___y_7714_, v___y_7715_, v___y_7716_, v___y_7717_, v___y_7718_, v___y_7719_);
lean_dec_ref(v___y_7718_);
lean_dec(v___y_7717_);
lean_dec(v___y_7716_);
lean_dec(v___y_7715_);
lean_dec_ref(v_linkLibs_7711_);
return v_res_7723_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib(lean_object* v_libName_7725_, lean_object* v_libFile_7726_, lean_object* v_linkObjs_7727_, lean_object* v_linkLibs_7728_, lean_object* v_weakArgs_7729_, lean_object* v_traceArgs_7730_, lean_object* v_linker_7731_, lean_object* v_extraDepTrace_7732_, uint8_t v_plugin_7733_, uint8_t v_linkDeps_7734_, lean_object* v_a_7735_, lean_object* v_a_7736_, lean_object* v_a_7737_, lean_object* v_a_7738_, lean_object* v_a_7739_, lean_object* v_a_7740_){
_start:
{
lean_object* v___x_7742_; lean_object* v___x_7743_; lean_object* v___x_7744_; lean_object* v___f_7745_; lean_object* v___x_7746_; lean_object* v___x_7747_; lean_object* v___x_7748_; uint8_t v___x_7749_; lean_object* v___x_7750_; 
v___x_7742_ = l_Lake_instDataKindDynlib;
v___x_7743_ = lean_box(v_linkDeps_7734_);
v___x_7744_ = lean_box(v_plugin_7733_);
v___f_7745_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__3___boxed), 18, 10);
lean_closure_set(v___f_7745_, 0, v_weakArgs_7729_);
lean_closure_set(v___f_7745_, 1, v_traceArgs_7730_);
lean_closure_set(v___f_7745_, 2, v_libFile_7726_);
lean_closure_set(v___f_7745_, 3, v_linker_7731_);
lean_closure_set(v___f_7745_, 4, v_extraDepTrace_7732_);
lean_closure_set(v___f_7745_, 5, v___x_7743_);
lean_closure_set(v___f_7745_, 6, v_libName_7725_);
lean_closure_set(v___f_7745_, 7, v___x_7744_);
lean_closure_set(v___f_7745_, 8, v_linkLibs_7728_);
lean_closure_set(v___f_7745_, 9, v___x_7742_);
v___x_7746_ = ((lean_object*)(l_Lake_buildSharedLib___closed__0));
v___x_7747_ = l_Lake_Job_collectArray___redArg(v_linkObjs_7727_, v___x_7746_);
v___x_7748_ = lean_unsigned_to_nat(0u);
v___x_7749_ = 1;
v___x_7750_ = l_Lake_Job_bindM___redArg(v___x_7742_, v___x_7747_, v___f_7745_, v___x_7748_, v___x_7749_, v_a_7735_, v_a_7736_, v_a_7737_, v_a_7738_, v_a_7739_, v_a_7740_);
return v___x_7750_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___boxed(lean_object** _args){
lean_object* v_libName_7751_ = _args[0];
lean_object* v_libFile_7752_ = _args[1];
lean_object* v_linkObjs_7753_ = _args[2];
lean_object* v_linkLibs_7754_ = _args[3];
lean_object* v_weakArgs_7755_ = _args[4];
lean_object* v_traceArgs_7756_ = _args[5];
lean_object* v_linker_7757_ = _args[6];
lean_object* v_extraDepTrace_7758_ = _args[7];
lean_object* v_plugin_7759_ = _args[8];
lean_object* v_linkDeps_7760_ = _args[9];
lean_object* v_a_7761_ = _args[10];
lean_object* v_a_7762_ = _args[11];
lean_object* v_a_7763_ = _args[12];
lean_object* v_a_7764_ = _args[13];
lean_object* v_a_7765_ = _args[14];
lean_object* v_a_7766_ = _args[15];
lean_object* v_a_7767_ = _args[16];
_start:
{
uint8_t v_plugin_boxed_7768_; uint8_t v_linkDeps_boxed_7769_; lean_object* v_res_7770_; 
v_plugin_boxed_7768_ = lean_unbox(v_plugin_7759_);
v_linkDeps_boxed_7769_ = lean_unbox(v_linkDeps_7760_);
v_res_7770_ = l_Lake_buildSharedLib(v_libName_7751_, v_libFile_7752_, v_linkObjs_7753_, v_linkLibs_7754_, v_weakArgs_7755_, v_traceArgs_7756_, v_linker_7757_, v_extraDepTrace_7758_, v_plugin_boxed_7768_, v_linkDeps_boxed_7769_, v_a_7761_, v_a_7762_, v_a_7763_, v_a_7764_, v_a_7765_, v_a_7766_);
lean_dec_ref(v_a_7766_);
lean_dec_ref(v_a_7765_);
lean_dec(v_a_7764_);
lean_dec(v_a_7763_);
lean_dec(v_a_7762_);
lean_dec_ref(v_linkObjs_7753_);
return v_res_7770_;
}
}
static lean_object* _init_l_Lake_buildLeanSharedLib___lam__0___closed__0(void){
_start:
{
lean_object* v___x_7771_; lean_object* v___x_7772_; lean_object* v___x_7773_; lean_object* v___x_7774_; 
v___x_7771_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1));
v___x_7772_ = lean_unsigned_to_nat(2u);
v___x_7773_ = lean_mk_empty_array_with_capacity(v___x_7772_);
v___x_7774_ = lean_array_push(v___x_7773_, v___x_7771_);
return v___x_7774_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0(lean_object* v_objs_7775_, lean_object* v_weakArgs_7776_, lean_object* v_traceArgs_7777_, lean_object* v_libFile_7778_, uint8_t v_linkDeps_7779_, lean_object* v_libs_7780_, lean_object* v___y_7781_, lean_object* v___y_7782_, lean_object* v___y_7783_, lean_object* v___y_7784_, lean_object* v___y_7785_, lean_object* v___y_7786_){
_start:
{
lean_object* v_toContext_7788_; lean_object* v_lakeEnv_7789_; lean_object* v_lean_7790_; lean_object* v_libs_7792_; lean_object* v___y_7793_; 
v_toContext_7788_ = lean_ctor_get(v___y_7785_, 1);
v_lakeEnv_7789_ = lean_ctor_get(v_toContext_7788_, 1);
v_lean_7790_ = lean_ctor_get(v_lakeEnv_7789_, 1);
if (v_linkDeps_7779_ == 0)
{
lean_object* v___x_7838_; 
v___x_7838_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg___closed__1));
v_libs_7792_ = v___x_7838_;
v___y_7793_ = v___y_7786_;
goto v___jp_7791_;
}
else
{
lean_object* v___x_7839_; 
v___x_7839_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_7780_, v___y_7786_);
if (lean_obj_tag(v___x_7839_) == 0)
{
lean_object* v_a_7840_; lean_object* v_a_7841_; 
v_a_7840_ = lean_ctor_get(v___x_7839_, 0);
lean_inc(v_a_7840_);
v_a_7841_ = lean_ctor_get(v___x_7839_, 1);
lean_inc(v_a_7841_);
lean_dec_ref(v___x_7839_);
v_libs_7792_ = v_a_7840_;
v___y_7793_ = v_a_7841_;
goto v___jp_7791_;
}
else
{
lean_object* v_a_7842_; lean_object* v_a_7843_; lean_object* v___x_7845_; uint8_t v_isShared_7846_; uint8_t v_isSharedCheck_7850_; 
lean_dec_ref(v_libFile_7778_);
v_a_7842_ = lean_ctor_get(v___x_7839_, 0);
v_a_7843_ = lean_ctor_get(v___x_7839_, 1);
v_isSharedCheck_7850_ = !lean_is_exclusive(v___x_7839_);
if (v_isSharedCheck_7850_ == 0)
{
v___x_7845_ = v___x_7839_;
v_isShared_7846_ = v_isSharedCheck_7850_;
goto v_resetjp_7844_;
}
else
{
lean_inc(v_a_7843_);
lean_inc(v_a_7842_);
lean_dec(v___x_7839_);
v___x_7845_ = lean_box(0);
v_isShared_7846_ = v_isSharedCheck_7850_;
goto v_resetjp_7844_;
}
v_resetjp_7844_:
{
lean_object* v___x_7848_; 
if (v_isShared_7846_ == 0)
{
v___x_7848_ = v___x_7845_;
goto v_reusejp_7847_;
}
else
{
lean_object* v_reuseFailAlloc_7849_; 
v_reuseFailAlloc_7849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7849_, 0, v_a_7842_);
lean_ctor_set(v_reuseFailAlloc_7849_, 1, v_a_7843_);
v___x_7848_ = v_reuseFailAlloc_7849_;
goto v_reusejp_7847_;
}
v_reusejp_7847_:
{
return v___x_7848_;
}
}
}
}
v___jp_7791_:
{
lean_object* v_leanLibDir_7794_; lean_object* v_cc_7795_; lean_object* v_ccLinkSharedFlags_7796_; lean_object* v_log_7797_; uint8_t v_action_7798_; uint8_t v_wantsRebuild_7799_; lean_object* v_trace_7800_; lean_object* v_buildTime_7801_; lean_object* v___x_7803_; uint8_t v_isShared_7804_; uint8_t v_isSharedCheck_7837_; 
v_leanLibDir_7794_ = lean_ctor_get(v_lean_7790_, 3);
v_cc_7795_ = lean_ctor_get(v_lean_7790_, 14);
v_ccLinkSharedFlags_7796_ = lean_ctor_get(v_lean_7790_, 20);
v_log_7797_ = lean_ctor_get(v___y_7793_, 0);
v_action_7798_ = lean_ctor_get_uint8(v___y_7793_, sizeof(void*)*3);
v_wantsRebuild_7799_ = lean_ctor_get_uint8(v___y_7793_, sizeof(void*)*3 + 1);
v_trace_7800_ = lean_ctor_get(v___y_7793_, 1);
v_buildTime_7801_ = lean_ctor_get(v___y_7793_, 2);
v_isSharedCheck_7837_ = !lean_is_exclusive(v___y_7793_);
if (v_isSharedCheck_7837_ == 0)
{
v___x_7803_ = v___y_7793_;
v_isShared_7804_ = v_isSharedCheck_7837_;
goto v_resetjp_7802_;
}
else
{
lean_inc(v_buildTime_7801_);
lean_inc(v_trace_7800_);
lean_inc(v_log_7797_);
lean_dec(v___y_7793_);
v___x_7803_ = lean_box(0);
v_isShared_7804_ = v_isSharedCheck_7837_;
goto v_resetjp_7802_;
}
v_resetjp_7802_:
{
lean_object* v___x_7805_; lean_object* v___x_7806_; lean_object* v___x_7807_; lean_object* v___x_7808_; lean_object* v___x_7809_; lean_object* v___x_7810_; lean_object* v___x_7811_; lean_object* v___x_7812_; 
v___x_7805_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7775_, v_libs_7792_);
lean_dec_ref(v_libs_7792_);
v___x_7806_ = l_Array_append___redArg(v___x_7805_, v_weakArgs_7776_);
v___x_7807_ = l_Array_append___redArg(v___x_7806_, v_traceArgs_7777_);
v___x_7808_ = lean_obj_once(&l_Lake_buildLeanSharedLib___lam__0___closed__0, &l_Lake_buildLeanSharedLib___lam__0___closed__0_once, _init_l_Lake_buildLeanSharedLib___lam__0___closed__0);
lean_inc_ref(v_leanLibDir_7794_);
v___x_7809_ = lean_array_push(v___x_7808_, v_leanLibDir_7794_);
v___x_7810_ = l_Array_append___redArg(v___x_7807_, v___x_7809_);
lean_dec_ref(v___x_7809_);
v___x_7811_ = l_Array_append___redArg(v___x_7810_, v_ccLinkSharedFlags_7796_);
lean_inc_ref(v_cc_7795_);
v___x_7812_ = l_Lake_compileSharedLib(v_libFile_7778_, v___x_7811_, v_cc_7795_, v_log_7797_);
lean_dec_ref(v___x_7811_);
if (lean_obj_tag(v___x_7812_) == 0)
{
lean_object* v_a_7813_; lean_object* v_a_7814_; lean_object* v___x_7816_; uint8_t v_isShared_7817_; uint8_t v_isSharedCheck_7824_; 
v_a_7813_ = lean_ctor_get(v___x_7812_, 0);
v_a_7814_ = lean_ctor_get(v___x_7812_, 1);
v_isSharedCheck_7824_ = !lean_is_exclusive(v___x_7812_);
if (v_isSharedCheck_7824_ == 0)
{
v___x_7816_ = v___x_7812_;
v_isShared_7817_ = v_isSharedCheck_7824_;
goto v_resetjp_7815_;
}
else
{
lean_inc(v_a_7814_);
lean_inc(v_a_7813_);
lean_dec(v___x_7812_);
v___x_7816_ = lean_box(0);
v_isShared_7817_ = v_isSharedCheck_7824_;
goto v_resetjp_7815_;
}
v_resetjp_7815_:
{
lean_object* v___x_7819_; 
if (v_isShared_7804_ == 0)
{
lean_ctor_set(v___x_7803_, 0, v_a_7814_);
v___x_7819_ = v___x_7803_;
goto v_reusejp_7818_;
}
else
{
lean_object* v_reuseFailAlloc_7823_; 
v_reuseFailAlloc_7823_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7823_, 0, v_a_7814_);
lean_ctor_set(v_reuseFailAlloc_7823_, 1, v_trace_7800_);
lean_ctor_set(v_reuseFailAlloc_7823_, 2, v_buildTime_7801_);
lean_ctor_set_uint8(v_reuseFailAlloc_7823_, sizeof(void*)*3, v_action_7798_);
lean_ctor_set_uint8(v_reuseFailAlloc_7823_, sizeof(void*)*3 + 1, v_wantsRebuild_7799_);
v___x_7819_ = v_reuseFailAlloc_7823_;
goto v_reusejp_7818_;
}
v_reusejp_7818_:
{
lean_object* v___x_7821_; 
if (v_isShared_7817_ == 0)
{
lean_ctor_set(v___x_7816_, 1, v___x_7819_);
v___x_7821_ = v___x_7816_;
goto v_reusejp_7820_;
}
else
{
lean_object* v_reuseFailAlloc_7822_; 
v_reuseFailAlloc_7822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7822_, 0, v_a_7813_);
lean_ctor_set(v_reuseFailAlloc_7822_, 1, v___x_7819_);
v___x_7821_ = v_reuseFailAlloc_7822_;
goto v_reusejp_7820_;
}
v_reusejp_7820_:
{
return v___x_7821_;
}
}
}
}
else
{
lean_object* v_a_7825_; lean_object* v_a_7826_; lean_object* v___x_7828_; uint8_t v_isShared_7829_; uint8_t v_isSharedCheck_7836_; 
v_a_7825_ = lean_ctor_get(v___x_7812_, 0);
v_a_7826_ = lean_ctor_get(v___x_7812_, 1);
v_isSharedCheck_7836_ = !lean_is_exclusive(v___x_7812_);
if (v_isSharedCheck_7836_ == 0)
{
v___x_7828_ = v___x_7812_;
v_isShared_7829_ = v_isSharedCheck_7836_;
goto v_resetjp_7827_;
}
else
{
lean_inc(v_a_7826_);
lean_inc(v_a_7825_);
lean_dec(v___x_7812_);
v___x_7828_ = lean_box(0);
v_isShared_7829_ = v_isSharedCheck_7836_;
goto v_resetjp_7827_;
}
v_resetjp_7827_:
{
lean_object* v___x_7831_; 
if (v_isShared_7804_ == 0)
{
lean_ctor_set(v___x_7803_, 0, v_a_7826_);
v___x_7831_ = v___x_7803_;
goto v_reusejp_7830_;
}
else
{
lean_object* v_reuseFailAlloc_7835_; 
v_reuseFailAlloc_7835_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7835_, 0, v_a_7826_);
lean_ctor_set(v_reuseFailAlloc_7835_, 1, v_trace_7800_);
lean_ctor_set(v_reuseFailAlloc_7835_, 2, v_buildTime_7801_);
lean_ctor_set_uint8(v_reuseFailAlloc_7835_, sizeof(void*)*3, v_action_7798_);
lean_ctor_set_uint8(v_reuseFailAlloc_7835_, sizeof(void*)*3 + 1, v_wantsRebuild_7799_);
v___x_7831_ = v_reuseFailAlloc_7835_;
goto v_reusejp_7830_;
}
v_reusejp_7830_:
{
lean_object* v___x_7833_; 
if (v_isShared_7829_ == 0)
{
lean_ctor_set(v___x_7828_, 1, v___x_7831_);
v___x_7833_ = v___x_7828_;
goto v_reusejp_7832_;
}
else
{
lean_object* v_reuseFailAlloc_7834_; 
v_reuseFailAlloc_7834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7834_, 0, v_a_7825_);
lean_ctor_set(v_reuseFailAlloc_7834_, 1, v___x_7831_);
v___x_7833_ = v_reuseFailAlloc_7834_;
goto v_reusejp_7832_;
}
v_reusejp_7832_:
{
return v___x_7833_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0___boxed(lean_object* v_objs_7851_, lean_object* v_weakArgs_7852_, lean_object* v_traceArgs_7853_, lean_object* v_libFile_7854_, lean_object* v_linkDeps_7855_, lean_object* v_libs_7856_, lean_object* v___y_7857_, lean_object* v___y_7858_, lean_object* v___y_7859_, lean_object* v___y_7860_, lean_object* v___y_7861_, lean_object* v___y_7862_, lean_object* v___y_7863_){
_start:
{
uint8_t v_linkDeps_boxed_7864_; lean_object* v_res_7865_; 
v_linkDeps_boxed_7864_ = lean_unbox(v_linkDeps_7855_);
v_res_7865_ = l_Lake_buildLeanSharedLib___lam__0(v_objs_7851_, v_weakArgs_7852_, v_traceArgs_7853_, v_libFile_7854_, v_linkDeps_boxed_7864_, v_libs_7856_, v___y_7857_, v___y_7858_, v___y_7859_, v___y_7860_, v___y_7861_, v___y_7862_);
lean_dec_ref(v___y_7861_);
lean_dec(v___y_7860_);
lean_dec(v___y_7859_);
lean_dec(v___y_7858_);
lean_dec_ref(v___y_7857_);
lean_dec_ref(v_libs_7856_);
lean_dec_ref(v_traceArgs_7853_);
lean_dec_ref(v_weakArgs_7852_);
lean_dec_ref(v_objs_7851_);
return v_res_7865_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1(lean_object* v_objs_7866_, lean_object* v_weakArgs_7867_, lean_object* v_traceArgs_7868_, lean_object* v_libFile_7869_, uint8_t v_linkDeps_7870_, lean_object* v_libName_7871_, uint8_t v_plugin_7872_, lean_object* v_libs_7873_, lean_object* v___y_7874_, lean_object* v___y_7875_, lean_object* v___y_7876_, lean_object* v___y_7877_, lean_object* v___y_7878_, lean_object* v___y_7879_){
_start:
{
lean_object* v_log_7881_; uint8_t v_action_7882_; uint8_t v_wantsRebuild_7883_; lean_object* v_trace_7884_; lean_object* v_buildTime_7885_; lean_object* v___x_7887_; uint8_t v_isShared_7888_; uint8_t v_isSharedCheck_7945_; 
v_log_7881_ = lean_ctor_get(v___y_7879_, 0);
v_action_7882_ = lean_ctor_get_uint8(v___y_7879_, sizeof(void*)*3);
v_wantsRebuild_7883_ = lean_ctor_get_uint8(v___y_7879_, sizeof(void*)*3 + 1);
v_trace_7884_ = lean_ctor_get(v___y_7879_, 1);
v_buildTime_7885_ = lean_ctor_get(v___y_7879_, 2);
v_isSharedCheck_7945_ = !lean_is_exclusive(v___y_7879_);
if (v_isSharedCheck_7945_ == 0)
{
v___x_7887_ = v___y_7879_;
v_isShared_7888_ = v_isSharedCheck_7945_;
goto v_resetjp_7886_;
}
else
{
lean_inc(v_buildTime_7885_);
lean_inc(v_trace_7884_);
lean_inc(v_log_7881_);
lean_dec(v___y_7879_);
v___x_7887_ = lean_box(0);
v_isShared_7888_ = v_isSharedCheck_7945_;
goto v_resetjp_7886_;
}
v_resetjp_7886_:
{
lean_object* v_leanTrace_7889_; lean_object* v___x_7890_; lean_object* v___f_7891_; lean_object* v___x_7892_; uint64_t v___y_7894_; uint64_t v___x_7934_; lean_object* v___x_7935_; lean_object* v___x_7936_; uint8_t v___x_7937_; 
v_leanTrace_7889_ = lean_ctor_get(v___y_7878_, 2);
v___x_7890_ = lean_box(v_linkDeps_7870_);
lean_inc_ref(v_libs_7873_);
lean_inc_ref(v_libFile_7869_);
lean_inc_ref(v_traceArgs_7868_);
v___f_7891_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLib___lam__0___boxed), 13, 6);
lean_closure_set(v___f_7891_, 0, v_objs_7866_);
lean_closure_set(v___f_7891_, 1, v_weakArgs_7867_);
lean_closure_set(v___f_7891_, 2, v_traceArgs_7868_);
lean_closure_set(v___f_7891_, 3, v_libFile_7869_);
lean_closure_set(v___f_7891_, 4, v___x_7890_);
lean_closure_set(v___f_7891_, 5, v_libs_7873_);
lean_inc_ref(v_leanTrace_7889_);
v___x_7892_ = l_Lake_BuildTrace_mix(v_trace_7884_, v_leanTrace_7889_);
v___x_7934_ = l_Lake_Hash_nil;
v___x_7935_ = lean_unsigned_to_nat(0u);
v___x_7936_ = lean_array_get_size(v_traceArgs_7868_);
v___x_7937_ = lean_nat_dec_lt(v___x_7935_, v___x_7936_);
if (v___x_7937_ == 0)
{
v___y_7894_ = v___x_7934_;
goto v___jp_7893_;
}
else
{
uint8_t v___x_7938_; 
v___x_7938_ = lean_nat_dec_le(v___x_7936_, v___x_7936_);
if (v___x_7938_ == 0)
{
if (v___x_7937_ == 0)
{
v___y_7894_ = v___x_7934_;
goto v___jp_7893_;
}
else
{
size_t v___x_7939_; size_t v___x_7940_; uint64_t v___x_7941_; 
v___x_7939_ = ((size_t)0ULL);
v___x_7940_ = lean_usize_of_nat(v___x_7936_);
v___x_7941_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_7868_, v___x_7939_, v___x_7940_, v___x_7934_);
v___y_7894_ = v___x_7941_;
goto v___jp_7893_;
}
}
else
{
size_t v___x_7942_; size_t v___x_7943_; uint64_t v___x_7944_; 
v___x_7942_ = ((size_t)0ULL);
v___x_7943_ = lean_usize_of_nat(v___x_7936_);
v___x_7944_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_7868_, v___x_7942_, v___x_7943_, v___x_7934_);
v___y_7894_ = v___x_7944_;
goto v___jp_7893_;
}
}
v___jp_7893_:
{
lean_object* v___x_7895_; lean_object* v___x_7896_; lean_object* v___x_7897_; lean_object* v___x_7898_; lean_object* v___x_7899_; lean_object* v___x_7900_; lean_object* v___x_7901_; lean_object* v___x_7902_; lean_object* v___x_7903_; lean_object* v___x_7904_; lean_object* v___x_7905_; lean_object* v___x_7906_; lean_object* v___x_7908_; 
v___x_7895_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_7896_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
v___x_7897_ = lean_array_to_list(v_traceArgs_7868_);
v___x_7898_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_7897_);
lean_dec(v___x_7897_);
v___x_7899_ = lean_string_append(v___x_7896_, v___x_7898_);
lean_dec_ref(v___x_7898_);
v___x_7900_ = lean_string_append(v___x_7895_, v___x_7899_);
lean_dec_ref(v___x_7899_);
v___x_7901_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_7902_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_7903_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_7903_, 0, v___x_7900_);
lean_ctor_set(v___x_7903_, 1, v___x_7901_);
lean_ctor_set(v___x_7903_, 2, v___x_7902_);
lean_ctor_set_uint64(v___x_7903_, sizeof(void*)*3, v___y_7894_);
v___x_7904_ = l_Lake_BuildTrace_mix(v___x_7892_, v___x_7903_);
v___x_7905_ = l_Lake_platformTrace;
v___x_7906_ = l_Lake_BuildTrace_mix(v___x_7904_, v___x_7905_);
if (v_isShared_7888_ == 0)
{
lean_ctor_set(v___x_7887_, 1, v___x_7906_);
v___x_7908_ = v___x_7887_;
goto v_reusejp_7907_;
}
else
{
lean_object* v_reuseFailAlloc_7933_; 
v_reuseFailAlloc_7933_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7933_, 0, v_log_7881_);
lean_ctor_set(v_reuseFailAlloc_7933_, 1, v___x_7906_);
lean_ctor_set(v_reuseFailAlloc_7933_, 2, v_buildTime_7885_);
lean_ctor_set_uint8(v_reuseFailAlloc_7933_, sizeof(void*)*3, v_action_7882_);
lean_ctor_set_uint8(v_reuseFailAlloc_7933_, sizeof(void*)*3 + 1, v_wantsRebuild_7883_);
v___x_7908_ = v_reuseFailAlloc_7933_;
goto v_reusejp_7907_;
}
v_reusejp_7907_:
{
uint8_t v___x_7909_; lean_object* v___x_7910_; uint8_t v___x_7911_; lean_object* v___x_7912_; 
v___x_7909_ = 0;
v___x_7910_ = l_Lake_sharedLibExt;
v___x_7911_ = 1;
v___x_7912_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_7869_, v___f_7891_, v___x_7909_, v___x_7910_, v___x_7911_, v___x_7909_, v___x_7909_, v___y_7874_, v___y_7875_, v___y_7876_, v___y_7877_, v___y_7878_, v___x_7908_);
if (lean_obj_tag(v___x_7912_) == 0)
{
lean_object* v_a_7913_; lean_object* v_a_7914_; lean_object* v___x_7916_; uint8_t v_isShared_7917_; uint8_t v_isSharedCheck_7923_; 
v_a_7913_ = lean_ctor_get(v___x_7912_, 0);
v_a_7914_ = lean_ctor_get(v___x_7912_, 1);
v_isSharedCheck_7923_ = !lean_is_exclusive(v___x_7912_);
if (v_isSharedCheck_7923_ == 0)
{
v___x_7916_ = v___x_7912_;
v_isShared_7917_ = v_isSharedCheck_7923_;
goto v_resetjp_7915_;
}
else
{
lean_inc(v_a_7914_);
lean_inc(v_a_7913_);
lean_dec(v___x_7912_);
v___x_7916_ = lean_box(0);
v_isShared_7917_ = v_isSharedCheck_7923_;
goto v_resetjp_7915_;
}
v_resetjp_7915_:
{
lean_object* v_path_7918_; lean_object* v___x_7919_; lean_object* v___x_7921_; 
v_path_7918_ = lean_ctor_get(v_a_7913_, 1);
lean_inc_ref(v_path_7918_);
lean_dec(v_a_7913_);
v___x_7919_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_7919_, 0, v_path_7918_);
lean_ctor_set(v___x_7919_, 1, v_libName_7871_);
lean_ctor_set(v___x_7919_, 2, v_libs_7873_);
lean_ctor_set_uint8(v___x_7919_, sizeof(void*)*3, v_plugin_7872_);
if (v_isShared_7917_ == 0)
{
lean_ctor_set(v___x_7916_, 0, v___x_7919_);
v___x_7921_ = v___x_7916_;
goto v_reusejp_7920_;
}
else
{
lean_object* v_reuseFailAlloc_7922_; 
v_reuseFailAlloc_7922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7922_, 0, v___x_7919_);
lean_ctor_set(v_reuseFailAlloc_7922_, 1, v_a_7914_);
v___x_7921_ = v_reuseFailAlloc_7922_;
goto v_reusejp_7920_;
}
v_reusejp_7920_:
{
return v___x_7921_;
}
}
}
else
{
lean_object* v_a_7924_; lean_object* v_a_7925_; lean_object* v___x_7927_; uint8_t v_isShared_7928_; uint8_t v_isSharedCheck_7932_; 
lean_dec_ref(v_libs_7873_);
lean_dec_ref(v_libName_7871_);
v_a_7924_ = lean_ctor_get(v___x_7912_, 0);
v_a_7925_ = lean_ctor_get(v___x_7912_, 1);
v_isSharedCheck_7932_ = !lean_is_exclusive(v___x_7912_);
if (v_isSharedCheck_7932_ == 0)
{
v___x_7927_ = v___x_7912_;
v_isShared_7928_ = v_isSharedCheck_7932_;
goto v_resetjp_7926_;
}
else
{
lean_inc(v_a_7925_);
lean_inc(v_a_7924_);
lean_dec(v___x_7912_);
v___x_7927_ = lean_box(0);
v_isShared_7928_ = v_isSharedCheck_7932_;
goto v_resetjp_7926_;
}
v_resetjp_7926_:
{
lean_object* v___x_7930_; 
if (v_isShared_7928_ == 0)
{
v___x_7930_ = v___x_7927_;
goto v_reusejp_7929_;
}
else
{
lean_object* v_reuseFailAlloc_7931_; 
v_reuseFailAlloc_7931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7931_, 0, v_a_7924_);
lean_ctor_set(v_reuseFailAlloc_7931_, 1, v_a_7925_);
v___x_7930_ = v_reuseFailAlloc_7931_;
goto v_reusejp_7929_;
}
v_reusejp_7929_:
{
return v___x_7930_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1___boxed(lean_object* v_objs_7946_, lean_object* v_weakArgs_7947_, lean_object* v_traceArgs_7948_, lean_object* v_libFile_7949_, lean_object* v_linkDeps_7950_, lean_object* v_libName_7951_, lean_object* v_plugin_7952_, lean_object* v_libs_7953_, lean_object* v___y_7954_, lean_object* v___y_7955_, lean_object* v___y_7956_, lean_object* v___y_7957_, lean_object* v___y_7958_, lean_object* v___y_7959_, lean_object* v___y_7960_){
_start:
{
uint8_t v_linkDeps_boxed_7961_; uint8_t v_plugin_boxed_7962_; lean_object* v_res_7963_; 
v_linkDeps_boxed_7961_ = lean_unbox(v_linkDeps_7950_);
v_plugin_boxed_7962_ = lean_unbox(v_plugin_7952_);
v_res_7963_ = l_Lake_buildLeanSharedLib___lam__1(v_objs_7946_, v_weakArgs_7947_, v_traceArgs_7948_, v_libFile_7949_, v_linkDeps_boxed_7961_, v_libName_7951_, v_plugin_boxed_7962_, v_libs_7953_, v___y_7954_, v___y_7955_, v___y_7956_, v___y_7957_, v___y_7958_, v___y_7959_);
lean_dec_ref(v___y_7958_);
lean_dec(v___y_7957_);
lean_dec(v___y_7956_);
lean_dec(v___y_7955_);
return v_res_7963_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__2(lean_object* v_weakArgs_7964_, lean_object* v_traceArgs_7965_, lean_object* v_libFile_7966_, uint8_t v_linkDeps_7967_, lean_object* v_libName_7968_, uint8_t v_plugin_7969_, lean_object* v_linkLibs_7970_, lean_object* v___x_7971_, lean_object* v_objs_7972_, lean_object* v___y_7973_, lean_object* v___y_7974_, lean_object* v___y_7975_, lean_object* v___y_7976_, lean_object* v___y_7977_, lean_object* v___y_7978_){
_start:
{
lean_object* v_trace_7980_; lean_object* v___x_7981_; lean_object* v___x_7982_; lean_object* v___f_7983_; lean_object* v___x_7984_; lean_object* v___x_7985_; lean_object* v___x_7986_; uint8_t v___x_7987_; lean_object* v___x_7988_; lean_object* v___x_7989_; 
v_trace_7980_ = lean_ctor_get(v___y_7978_, 1);
v___x_7981_ = lean_box(v_linkDeps_7967_);
v___x_7982_ = lean_box(v_plugin_7969_);
v___f_7983_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLib___lam__1___boxed), 15, 7);
lean_closure_set(v___f_7983_, 0, v_objs_7972_);
lean_closure_set(v___f_7983_, 1, v_weakArgs_7964_);
lean_closure_set(v___f_7983_, 2, v_traceArgs_7965_);
lean_closure_set(v___f_7983_, 3, v_libFile_7966_);
lean_closure_set(v___f_7983_, 4, v___x_7981_);
lean_closure_set(v___f_7983_, 5, v_libName_7968_);
lean_closure_set(v___f_7983_, 6, v___x_7982_);
v___x_7984_ = ((lean_object*)(l_Lake_buildSharedLib___lam__3___closed__0));
v___x_7985_ = l_Lake_Job_collectArray___redArg(v_linkLibs_7970_, v___x_7984_);
v___x_7986_ = lean_unsigned_to_nat(0u);
v___x_7987_ = 0;
v___x_7988_ = l_Lake_Job_mapM___redArg(v___x_7971_, v___x_7985_, v___f_7983_, v___x_7986_, v___x_7987_, v___y_7973_, v___y_7974_, v___y_7975_, v___y_7976_, v___y_7977_, v_trace_7980_);
v___x_7989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7989_, 0, v___x_7988_);
lean_ctor_set(v___x_7989_, 1, v___y_7978_);
return v___x_7989_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__2___boxed(lean_object* v_weakArgs_7990_, lean_object* v_traceArgs_7991_, lean_object* v_libFile_7992_, lean_object* v_linkDeps_7993_, lean_object* v_libName_7994_, lean_object* v_plugin_7995_, lean_object* v_linkLibs_7996_, lean_object* v___x_7997_, lean_object* v_objs_7998_, lean_object* v___y_7999_, lean_object* v___y_8000_, lean_object* v___y_8001_, lean_object* v___y_8002_, lean_object* v___y_8003_, lean_object* v___y_8004_, lean_object* v___y_8005_){
_start:
{
uint8_t v_linkDeps_boxed_8006_; uint8_t v_plugin_boxed_8007_; lean_object* v_res_8008_; 
v_linkDeps_boxed_8006_ = lean_unbox(v_linkDeps_7993_);
v_plugin_boxed_8007_ = lean_unbox(v_plugin_7995_);
v_res_8008_ = l_Lake_buildLeanSharedLib___lam__2(v_weakArgs_7990_, v_traceArgs_7991_, v_libFile_7992_, v_linkDeps_boxed_8006_, v_libName_7994_, v_plugin_boxed_8007_, v_linkLibs_7996_, v___x_7997_, v_objs_7998_, v___y_7999_, v___y_8000_, v___y_8001_, v___y_8002_, v___y_8003_, v___y_8004_);
lean_dec_ref(v___y_8003_);
lean_dec(v___y_8002_);
lean_dec(v___y_8001_);
lean_dec(v___y_8000_);
lean_dec_ref(v_linkLibs_7996_);
return v_res_8008_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib(lean_object* v_libName_8009_, lean_object* v_libFile_8010_, lean_object* v_linkObjs_8011_, lean_object* v_linkLibs_8012_, lean_object* v_weakArgs_8013_, lean_object* v_traceArgs_8014_, uint8_t v_plugin_8015_, uint8_t v_linkDeps_8016_, lean_object* v_a_8017_, lean_object* v_a_8018_, lean_object* v_a_8019_, lean_object* v_a_8020_, lean_object* v_a_8021_, lean_object* v_a_8022_){
_start:
{
lean_object* v___x_8024_; lean_object* v___x_8025_; lean_object* v___x_8026_; lean_object* v___f_8027_; lean_object* v___x_8028_; lean_object* v___x_8029_; lean_object* v___x_8030_; uint8_t v___x_8031_; lean_object* v___x_8032_; 
v___x_8024_ = l_Lake_instDataKindDynlib;
v___x_8025_ = lean_box(v_linkDeps_8016_);
v___x_8026_ = lean_box(v_plugin_8015_);
v___f_8027_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLib___lam__2___boxed), 16, 8);
lean_closure_set(v___f_8027_, 0, v_weakArgs_8013_);
lean_closure_set(v___f_8027_, 1, v_traceArgs_8014_);
lean_closure_set(v___f_8027_, 2, v_libFile_8010_);
lean_closure_set(v___f_8027_, 3, v___x_8025_);
lean_closure_set(v___f_8027_, 4, v_libName_8009_);
lean_closure_set(v___f_8027_, 5, v___x_8026_);
lean_closure_set(v___f_8027_, 6, v_linkLibs_8012_);
lean_closure_set(v___f_8027_, 7, v___x_8024_);
v___x_8028_ = ((lean_object*)(l_Lake_buildSharedLib___closed__0));
v___x_8029_ = l_Lake_Job_collectArray___redArg(v_linkObjs_8011_, v___x_8028_);
v___x_8030_ = lean_unsigned_to_nat(0u);
v___x_8031_ = 1;
v___x_8032_ = l_Lake_Job_bindM___redArg(v___x_8024_, v___x_8029_, v___f_8027_, v___x_8030_, v___x_8031_, v_a_8017_, v_a_8018_, v_a_8019_, v_a_8020_, v_a_8021_, v_a_8022_);
return v___x_8032_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___boxed(lean_object* v_libName_8033_, lean_object* v_libFile_8034_, lean_object* v_linkObjs_8035_, lean_object* v_linkLibs_8036_, lean_object* v_weakArgs_8037_, lean_object* v_traceArgs_8038_, lean_object* v_plugin_8039_, lean_object* v_linkDeps_8040_, lean_object* v_a_8041_, lean_object* v_a_8042_, lean_object* v_a_8043_, lean_object* v_a_8044_, lean_object* v_a_8045_, lean_object* v_a_8046_, lean_object* v_a_8047_){
_start:
{
uint8_t v_plugin_boxed_8048_; uint8_t v_linkDeps_boxed_8049_; lean_object* v_res_8050_; 
v_plugin_boxed_8048_ = lean_unbox(v_plugin_8039_);
v_linkDeps_boxed_8049_ = lean_unbox(v_linkDeps_8040_);
v_res_8050_ = l_Lake_buildLeanSharedLib(v_libName_8033_, v_libFile_8034_, v_linkObjs_8035_, v_linkLibs_8036_, v_weakArgs_8037_, v_traceArgs_8038_, v_plugin_boxed_8048_, v_linkDeps_boxed_8049_, v_a_8041_, v_a_8042_, v_a_8043_, v_a_8044_, v_a_8045_, v_a_8046_);
lean_dec_ref(v_a_8046_);
lean_dec_ref(v_a_8045_);
lean_dec(v_a_8044_);
lean_dec(v_a_8043_);
lean_dec(v_a_8042_);
lean_dec_ref(v_linkObjs_8035_);
return v_res_8050_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0(lean_object* v_libs_8051_, lean_object* v_objs_8052_, lean_object* v_weakArgs_8053_, lean_object* v_traceArgs_8054_, uint8_t v_sharedLean_8055_, lean_object* v_exeFile_8056_, lean_object* v___y_8057_, lean_object* v___y_8058_, lean_object* v___y_8059_, lean_object* v___y_8060_, lean_object* v___y_8061_, lean_object* v___y_8062_){
_start:
{
lean_object* v___x_8064_; 
v___x_8064_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder___redArg(v_libs_8051_, v___y_8062_);
if (lean_obj_tag(v___x_8064_) == 0)
{
lean_object* v_toContext_8065_; lean_object* v_lakeEnv_8066_; lean_object* v_lean_8067_; lean_object* v_a_8068_; lean_object* v_a_8069_; lean_object* v_leanLibDir_8070_; lean_object* v_cc_8071_; lean_object* v_log_8072_; uint8_t v_action_8073_; uint8_t v_wantsRebuild_8074_; lean_object* v_trace_8075_; lean_object* v_buildTime_8076_; lean_object* v___x_8078_; uint8_t v_isShared_8079_; uint8_t v_isSharedCheck_8115_; 
v_toContext_8065_ = lean_ctor_get(v___y_8061_, 1);
v_lakeEnv_8066_ = lean_ctor_get(v_toContext_8065_, 1);
v_lean_8067_ = lean_ctor_get(v_lakeEnv_8066_, 1);
v_a_8068_ = lean_ctor_get(v___x_8064_, 1);
lean_inc(v_a_8068_);
v_a_8069_ = lean_ctor_get(v___x_8064_, 0);
lean_inc(v_a_8069_);
lean_dec_ref(v___x_8064_);
v_leanLibDir_8070_ = lean_ctor_get(v_lean_8067_, 3);
v_cc_8071_ = lean_ctor_get(v_lean_8067_, 14);
v_log_8072_ = lean_ctor_get(v_a_8068_, 0);
v_action_8073_ = lean_ctor_get_uint8(v_a_8068_, sizeof(void*)*3);
v_wantsRebuild_8074_ = lean_ctor_get_uint8(v_a_8068_, sizeof(void*)*3 + 1);
v_trace_8075_ = lean_ctor_get(v_a_8068_, 1);
v_buildTime_8076_ = lean_ctor_get(v_a_8068_, 2);
v_isSharedCheck_8115_ = !lean_is_exclusive(v_a_8068_);
if (v_isSharedCheck_8115_ == 0)
{
v___x_8078_ = v_a_8068_;
v_isShared_8079_ = v_isSharedCheck_8115_;
goto v_resetjp_8077_;
}
else
{
lean_inc(v_buildTime_8076_);
lean_inc(v_trace_8075_);
lean_inc(v_log_8072_);
lean_dec(v_a_8068_);
v___x_8078_ = lean_box(0);
v_isShared_8079_ = v_isSharedCheck_8115_;
goto v_resetjp_8077_;
}
v_resetjp_8077_:
{
lean_object* v___x_8080_; lean_object* v___x_8081_; lean_object* v___x_8082_; lean_object* v___x_8083_; lean_object* v___x_8084_; lean_object* v___x_8085_; lean_object* v___x_8086_; lean_object* v___x_8087_; lean_object* v___x_8088_; lean_object* v___x_8089_; lean_object* v___x_8090_; 
v___x_8080_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_8052_, v_a_8069_);
lean_dec(v_a_8069_);
v___x_8081_ = l_Array_append___redArg(v___x_8080_, v_weakArgs_8053_);
v___x_8082_ = l_Array_append___redArg(v___x_8081_, v_traceArgs_8054_);
v___x_8083_ = lean_unsigned_to_nat(2u);
v___x_8084_ = lean_mk_empty_array_with_capacity(v___x_8083_);
lean_dec_ref(v___x_8084_);
v___x_8085_ = lean_obj_once(&l_Lake_buildLeanSharedLib___lam__0___closed__0, &l_Lake_buildLeanSharedLib___lam__0___closed__0_once, _init_l_Lake_buildLeanSharedLib___lam__0___closed__0);
lean_inc_ref(v_leanLibDir_8070_);
v___x_8086_ = lean_array_push(v___x_8085_, v_leanLibDir_8070_);
v___x_8087_ = l_Array_append___redArg(v___x_8082_, v___x_8086_);
lean_dec_ref(v___x_8086_);
v___x_8088_ = l_Lake_LeanInstall_ccLinkFlags(v_sharedLean_8055_, v_lean_8067_);
v___x_8089_ = l_Array_append___redArg(v___x_8087_, v___x_8088_);
lean_dec_ref(v___x_8088_);
lean_inc_ref(v_cc_8071_);
v___x_8090_ = l_Lake_compileExe(v_exeFile_8056_, v___x_8089_, v_cc_8071_, v_log_8072_);
lean_dec_ref(v___x_8089_);
if (lean_obj_tag(v___x_8090_) == 0)
{
lean_object* v_a_8091_; lean_object* v_a_8092_; lean_object* v___x_8094_; uint8_t v_isShared_8095_; uint8_t v_isSharedCheck_8102_; 
v_a_8091_ = lean_ctor_get(v___x_8090_, 0);
v_a_8092_ = lean_ctor_get(v___x_8090_, 1);
v_isSharedCheck_8102_ = !lean_is_exclusive(v___x_8090_);
if (v_isSharedCheck_8102_ == 0)
{
v___x_8094_ = v___x_8090_;
v_isShared_8095_ = v_isSharedCheck_8102_;
goto v_resetjp_8093_;
}
else
{
lean_inc(v_a_8092_);
lean_inc(v_a_8091_);
lean_dec(v___x_8090_);
v___x_8094_ = lean_box(0);
v_isShared_8095_ = v_isSharedCheck_8102_;
goto v_resetjp_8093_;
}
v_resetjp_8093_:
{
lean_object* v___x_8097_; 
if (v_isShared_8079_ == 0)
{
lean_ctor_set(v___x_8078_, 0, v_a_8092_);
v___x_8097_ = v___x_8078_;
goto v_reusejp_8096_;
}
else
{
lean_object* v_reuseFailAlloc_8101_; 
v_reuseFailAlloc_8101_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8101_, 0, v_a_8092_);
lean_ctor_set(v_reuseFailAlloc_8101_, 1, v_trace_8075_);
lean_ctor_set(v_reuseFailAlloc_8101_, 2, v_buildTime_8076_);
lean_ctor_set_uint8(v_reuseFailAlloc_8101_, sizeof(void*)*3, v_action_8073_);
lean_ctor_set_uint8(v_reuseFailAlloc_8101_, sizeof(void*)*3 + 1, v_wantsRebuild_8074_);
v___x_8097_ = v_reuseFailAlloc_8101_;
goto v_reusejp_8096_;
}
v_reusejp_8096_:
{
lean_object* v___x_8099_; 
if (v_isShared_8095_ == 0)
{
lean_ctor_set(v___x_8094_, 1, v___x_8097_);
v___x_8099_ = v___x_8094_;
goto v_reusejp_8098_;
}
else
{
lean_object* v_reuseFailAlloc_8100_; 
v_reuseFailAlloc_8100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8100_, 0, v_a_8091_);
lean_ctor_set(v_reuseFailAlloc_8100_, 1, v___x_8097_);
v___x_8099_ = v_reuseFailAlloc_8100_;
goto v_reusejp_8098_;
}
v_reusejp_8098_:
{
return v___x_8099_;
}
}
}
}
else
{
lean_object* v_a_8103_; lean_object* v_a_8104_; lean_object* v___x_8106_; uint8_t v_isShared_8107_; uint8_t v_isSharedCheck_8114_; 
v_a_8103_ = lean_ctor_get(v___x_8090_, 0);
v_a_8104_ = lean_ctor_get(v___x_8090_, 1);
v_isSharedCheck_8114_ = !lean_is_exclusive(v___x_8090_);
if (v_isSharedCheck_8114_ == 0)
{
v___x_8106_ = v___x_8090_;
v_isShared_8107_ = v_isSharedCheck_8114_;
goto v_resetjp_8105_;
}
else
{
lean_inc(v_a_8104_);
lean_inc(v_a_8103_);
lean_dec(v___x_8090_);
v___x_8106_ = lean_box(0);
v_isShared_8107_ = v_isSharedCheck_8114_;
goto v_resetjp_8105_;
}
v_resetjp_8105_:
{
lean_object* v___x_8109_; 
if (v_isShared_8079_ == 0)
{
lean_ctor_set(v___x_8078_, 0, v_a_8104_);
v___x_8109_ = v___x_8078_;
goto v_reusejp_8108_;
}
else
{
lean_object* v_reuseFailAlloc_8113_; 
v_reuseFailAlloc_8113_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8113_, 0, v_a_8104_);
lean_ctor_set(v_reuseFailAlloc_8113_, 1, v_trace_8075_);
lean_ctor_set(v_reuseFailAlloc_8113_, 2, v_buildTime_8076_);
lean_ctor_set_uint8(v_reuseFailAlloc_8113_, sizeof(void*)*3, v_action_8073_);
lean_ctor_set_uint8(v_reuseFailAlloc_8113_, sizeof(void*)*3 + 1, v_wantsRebuild_8074_);
v___x_8109_ = v_reuseFailAlloc_8113_;
goto v_reusejp_8108_;
}
v_reusejp_8108_:
{
lean_object* v___x_8111_; 
if (v_isShared_8107_ == 0)
{
lean_ctor_set(v___x_8106_, 1, v___x_8109_);
v___x_8111_ = v___x_8106_;
goto v_reusejp_8110_;
}
else
{
lean_object* v_reuseFailAlloc_8112_; 
v_reuseFailAlloc_8112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8112_, 0, v_a_8103_);
lean_ctor_set(v_reuseFailAlloc_8112_, 1, v___x_8109_);
v___x_8111_ = v_reuseFailAlloc_8112_;
goto v_reusejp_8110_;
}
v_reusejp_8110_:
{
return v___x_8111_;
}
}
}
}
}
}
else
{
lean_object* v_a_8116_; lean_object* v_a_8117_; lean_object* v___x_8119_; uint8_t v_isShared_8120_; uint8_t v_isSharedCheck_8124_; 
lean_dec_ref(v_exeFile_8056_);
v_a_8116_ = lean_ctor_get(v___x_8064_, 0);
v_a_8117_ = lean_ctor_get(v___x_8064_, 1);
v_isSharedCheck_8124_ = !lean_is_exclusive(v___x_8064_);
if (v_isSharedCheck_8124_ == 0)
{
v___x_8119_ = v___x_8064_;
v_isShared_8120_ = v_isSharedCheck_8124_;
goto v_resetjp_8118_;
}
else
{
lean_inc(v_a_8117_);
lean_inc(v_a_8116_);
lean_dec(v___x_8064_);
v___x_8119_ = lean_box(0);
v_isShared_8120_ = v_isSharedCheck_8124_;
goto v_resetjp_8118_;
}
v_resetjp_8118_:
{
lean_object* v___x_8122_; 
if (v_isShared_8120_ == 0)
{
v___x_8122_ = v___x_8119_;
goto v_reusejp_8121_;
}
else
{
lean_object* v_reuseFailAlloc_8123_; 
v_reuseFailAlloc_8123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8123_, 0, v_a_8116_);
lean_ctor_set(v_reuseFailAlloc_8123_, 1, v_a_8117_);
v___x_8122_ = v_reuseFailAlloc_8123_;
goto v_reusejp_8121_;
}
v_reusejp_8121_:
{
return v___x_8122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0___boxed(lean_object* v_libs_8125_, lean_object* v_objs_8126_, lean_object* v_weakArgs_8127_, lean_object* v_traceArgs_8128_, lean_object* v_sharedLean_8129_, lean_object* v_exeFile_8130_, lean_object* v___y_8131_, lean_object* v___y_8132_, lean_object* v___y_8133_, lean_object* v___y_8134_, lean_object* v___y_8135_, lean_object* v___y_8136_, lean_object* v___y_8137_){
_start:
{
uint8_t v_sharedLean_boxed_8138_; lean_object* v_res_8139_; 
v_sharedLean_boxed_8138_ = lean_unbox(v_sharedLean_8129_);
v_res_8139_ = l_Lake_buildLeanExe___lam__0(v_libs_8125_, v_objs_8126_, v_weakArgs_8127_, v_traceArgs_8128_, v_sharedLean_boxed_8138_, v_exeFile_8130_, v___y_8131_, v___y_8132_, v___y_8133_, v___y_8134_, v___y_8135_, v___y_8136_);
lean_dec_ref(v___y_8135_);
lean_dec(v___y_8134_);
lean_dec(v___y_8133_);
lean_dec(v___y_8132_);
lean_dec_ref(v___y_8131_);
lean_dec_ref(v_traceArgs_8128_);
lean_dec_ref(v_weakArgs_8127_);
lean_dec_ref(v_objs_8126_);
lean_dec_ref(v_libs_8125_);
return v_res_8139_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1(lean_object* v_objs_8140_, lean_object* v_weakArgs_8141_, lean_object* v_traceArgs_8142_, uint8_t v_sharedLean_8143_, lean_object* v_exeFile_8144_, lean_object* v_libs_8145_, lean_object* v___y_8146_, lean_object* v___y_8147_, lean_object* v___y_8148_, lean_object* v___y_8149_, lean_object* v___y_8150_, lean_object* v___y_8151_){
_start:
{
lean_object* v_log_8153_; uint8_t v_action_8154_; uint8_t v_wantsRebuild_8155_; lean_object* v_trace_8156_; lean_object* v_buildTime_8157_; lean_object* v___x_8159_; uint8_t v_isShared_8160_; uint8_t v_isSharedCheck_8216_; 
v_log_8153_ = lean_ctor_get(v___y_8151_, 0);
v_action_8154_ = lean_ctor_get_uint8(v___y_8151_, sizeof(void*)*3);
v_wantsRebuild_8155_ = lean_ctor_get_uint8(v___y_8151_, sizeof(void*)*3 + 1);
v_trace_8156_ = lean_ctor_get(v___y_8151_, 1);
v_buildTime_8157_ = lean_ctor_get(v___y_8151_, 2);
v_isSharedCheck_8216_ = !lean_is_exclusive(v___y_8151_);
if (v_isSharedCheck_8216_ == 0)
{
v___x_8159_ = v___y_8151_;
v_isShared_8160_ = v_isSharedCheck_8216_;
goto v_resetjp_8158_;
}
else
{
lean_inc(v_buildTime_8157_);
lean_inc(v_trace_8156_);
lean_inc(v_log_8153_);
lean_dec(v___y_8151_);
v___x_8159_ = lean_box(0);
v_isShared_8160_ = v_isSharedCheck_8216_;
goto v_resetjp_8158_;
}
v_resetjp_8158_:
{
lean_object* v_leanTrace_8161_; lean_object* v___x_8162_; lean_object* v___f_8163_; lean_object* v___x_8164_; uint64_t v___y_8166_; uint64_t v___x_8205_; lean_object* v___x_8206_; lean_object* v___x_8207_; uint8_t v___x_8208_; 
v_leanTrace_8161_ = lean_ctor_get(v___y_8150_, 2);
v___x_8162_ = lean_box(v_sharedLean_8143_);
lean_inc_ref(v_exeFile_8144_);
lean_inc_ref(v_traceArgs_8142_);
v___f_8163_ = lean_alloc_closure((void*)(l_Lake_buildLeanExe___lam__0___boxed), 13, 6);
lean_closure_set(v___f_8163_, 0, v_libs_8145_);
lean_closure_set(v___f_8163_, 1, v_objs_8140_);
lean_closure_set(v___f_8163_, 2, v_weakArgs_8141_);
lean_closure_set(v___f_8163_, 3, v_traceArgs_8142_);
lean_closure_set(v___f_8163_, 4, v___x_8162_);
lean_closure_set(v___f_8163_, 5, v_exeFile_8144_);
lean_inc_ref(v_leanTrace_8161_);
v___x_8164_ = l_Lake_BuildTrace_mix(v_trace_8156_, v_leanTrace_8161_);
v___x_8205_ = l_Lake_Hash_nil;
v___x_8206_ = lean_unsigned_to_nat(0u);
v___x_8207_ = lean_array_get_size(v_traceArgs_8142_);
v___x_8208_ = lean_nat_dec_lt(v___x_8206_, v___x_8207_);
if (v___x_8208_ == 0)
{
v___y_8166_ = v___x_8205_;
goto v___jp_8165_;
}
else
{
uint8_t v___x_8209_; 
v___x_8209_ = lean_nat_dec_le(v___x_8207_, v___x_8207_);
if (v___x_8209_ == 0)
{
if (v___x_8208_ == 0)
{
v___y_8166_ = v___x_8205_;
goto v___jp_8165_;
}
else
{
size_t v___x_8210_; size_t v___x_8211_; uint64_t v___x_8212_; 
v___x_8210_ = ((size_t)0ULL);
v___x_8211_ = lean_usize_of_nat(v___x_8207_);
v___x_8212_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_8142_, v___x_8210_, v___x_8211_, v___x_8205_);
v___y_8166_ = v___x_8212_;
goto v___jp_8165_;
}
}
else
{
size_t v___x_8213_; size_t v___x_8214_; uint64_t v___x_8215_; 
v___x_8213_ = ((size_t)0ULL);
v___x_8214_ = lean_usize_of_nat(v___x_8207_);
v___x_8215_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_buildLeanO_spec__1(v_traceArgs_8142_, v___x_8213_, v___x_8214_, v___x_8205_);
v___y_8166_ = v___x_8215_;
goto v___jp_8165_;
}
}
v___jp_8165_:
{
lean_object* v___x_8167_; lean_object* v___x_8168_; lean_object* v___x_8169_; lean_object* v___x_8170_; lean_object* v___x_8171_; lean_object* v___x_8172_; lean_object* v___x_8173_; lean_object* v___x_8174_; lean_object* v___x_8175_; lean_object* v___x_8176_; lean_object* v___x_8177_; lean_object* v___x_8178_; lean_object* v___x_8180_; 
v___x_8167_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_8168_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
v___x_8169_ = lean_array_to_list(v_traceArgs_8142_);
v___x_8170_ = l_List_toString___at___00Lake_buildLeanO_spec__0(v___x_8169_);
lean_dec(v___x_8169_);
v___x_8171_ = lean_string_append(v___x_8168_, v___x_8170_);
lean_dec_ref(v___x_8170_);
v___x_8172_ = lean_string_append(v___x_8167_, v___x_8171_);
lean_dec_ref(v___x_8171_);
v___x_8173_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_8174_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_8175_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_8175_, 0, v___x_8172_);
lean_ctor_set(v___x_8175_, 1, v___x_8173_);
lean_ctor_set(v___x_8175_, 2, v___x_8174_);
lean_ctor_set_uint64(v___x_8175_, sizeof(void*)*3, v___y_8166_);
v___x_8176_ = l_Lake_BuildTrace_mix(v___x_8164_, v___x_8175_);
v___x_8177_ = l_Lake_platformTrace;
v___x_8178_ = l_Lake_BuildTrace_mix(v___x_8176_, v___x_8177_);
if (v_isShared_8160_ == 0)
{
lean_ctor_set(v___x_8159_, 1, v___x_8178_);
v___x_8180_ = v___x_8159_;
goto v_reusejp_8179_;
}
else
{
lean_object* v_reuseFailAlloc_8204_; 
v_reuseFailAlloc_8204_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8204_, 0, v_log_8153_);
lean_ctor_set(v_reuseFailAlloc_8204_, 1, v___x_8178_);
lean_ctor_set(v_reuseFailAlloc_8204_, 2, v_buildTime_8157_);
lean_ctor_set_uint8(v_reuseFailAlloc_8204_, sizeof(void*)*3, v_action_8154_);
lean_ctor_set_uint8(v_reuseFailAlloc_8204_, sizeof(void*)*3 + 1, v_wantsRebuild_8155_);
v___x_8180_ = v_reuseFailAlloc_8204_;
goto v_reusejp_8179_;
}
v_reusejp_8179_:
{
uint8_t v___x_8181_; lean_object* v___x_8182_; uint8_t v___x_8183_; lean_object* v___x_8184_; 
v___x_8181_ = 0;
v___x_8182_ = l_System_FilePath_exeExtension;
v___x_8183_ = 1;
v___x_8184_ = l_Lake_buildArtifactUnlessUpToDate(v_exeFile_8144_, v___f_8163_, v___x_8181_, v___x_8182_, v___x_8183_, v___x_8183_, v___x_8181_, v___y_8146_, v___y_8147_, v___y_8148_, v___y_8149_, v___y_8150_, v___x_8180_);
if (lean_obj_tag(v___x_8184_) == 0)
{
lean_object* v_a_8185_; lean_object* v_a_8186_; lean_object* v___x_8188_; uint8_t v_isShared_8189_; uint8_t v_isSharedCheck_8194_; 
v_a_8185_ = lean_ctor_get(v___x_8184_, 0);
v_a_8186_ = lean_ctor_get(v___x_8184_, 1);
v_isSharedCheck_8194_ = !lean_is_exclusive(v___x_8184_);
if (v_isSharedCheck_8194_ == 0)
{
v___x_8188_ = v___x_8184_;
v_isShared_8189_ = v_isSharedCheck_8194_;
goto v_resetjp_8187_;
}
else
{
lean_inc(v_a_8186_);
lean_inc(v_a_8185_);
lean_dec(v___x_8184_);
v___x_8188_ = lean_box(0);
v_isShared_8189_ = v_isSharedCheck_8194_;
goto v_resetjp_8187_;
}
v_resetjp_8187_:
{
lean_object* v_path_8190_; lean_object* v___x_8192_; 
v_path_8190_ = lean_ctor_get(v_a_8185_, 1);
lean_inc_ref(v_path_8190_);
lean_dec(v_a_8185_);
if (v_isShared_8189_ == 0)
{
lean_ctor_set(v___x_8188_, 0, v_path_8190_);
v___x_8192_ = v___x_8188_;
goto v_reusejp_8191_;
}
else
{
lean_object* v_reuseFailAlloc_8193_; 
v_reuseFailAlloc_8193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8193_, 0, v_path_8190_);
lean_ctor_set(v_reuseFailAlloc_8193_, 1, v_a_8186_);
v___x_8192_ = v_reuseFailAlloc_8193_;
goto v_reusejp_8191_;
}
v_reusejp_8191_:
{
return v___x_8192_;
}
}
}
else
{
lean_object* v_a_8195_; lean_object* v_a_8196_; lean_object* v___x_8198_; uint8_t v_isShared_8199_; uint8_t v_isSharedCheck_8203_; 
v_a_8195_ = lean_ctor_get(v___x_8184_, 0);
v_a_8196_ = lean_ctor_get(v___x_8184_, 1);
v_isSharedCheck_8203_ = !lean_is_exclusive(v___x_8184_);
if (v_isSharedCheck_8203_ == 0)
{
v___x_8198_ = v___x_8184_;
v_isShared_8199_ = v_isSharedCheck_8203_;
goto v_resetjp_8197_;
}
else
{
lean_inc(v_a_8196_);
lean_inc(v_a_8195_);
lean_dec(v___x_8184_);
v___x_8198_ = lean_box(0);
v_isShared_8199_ = v_isSharedCheck_8203_;
goto v_resetjp_8197_;
}
v_resetjp_8197_:
{
lean_object* v___x_8201_; 
if (v_isShared_8199_ == 0)
{
v___x_8201_ = v___x_8198_;
goto v_reusejp_8200_;
}
else
{
lean_object* v_reuseFailAlloc_8202_; 
v_reuseFailAlloc_8202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8202_, 0, v_a_8195_);
lean_ctor_set(v_reuseFailAlloc_8202_, 1, v_a_8196_);
v___x_8201_ = v_reuseFailAlloc_8202_;
goto v_reusejp_8200_;
}
v_reusejp_8200_:
{
return v___x_8201_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1___boxed(lean_object* v_objs_8217_, lean_object* v_weakArgs_8218_, lean_object* v_traceArgs_8219_, lean_object* v_sharedLean_8220_, lean_object* v_exeFile_8221_, lean_object* v_libs_8222_, lean_object* v___y_8223_, lean_object* v___y_8224_, lean_object* v___y_8225_, lean_object* v___y_8226_, lean_object* v___y_8227_, lean_object* v___y_8228_, lean_object* v___y_8229_){
_start:
{
uint8_t v_sharedLean_boxed_8230_; lean_object* v_res_8231_; 
v_sharedLean_boxed_8230_ = lean_unbox(v_sharedLean_8220_);
v_res_8231_ = l_Lake_buildLeanExe___lam__1(v_objs_8217_, v_weakArgs_8218_, v_traceArgs_8219_, v_sharedLean_boxed_8230_, v_exeFile_8221_, v_libs_8222_, v___y_8223_, v___y_8224_, v___y_8225_, v___y_8226_, v___y_8227_, v___y_8228_);
lean_dec_ref(v___y_8227_);
lean_dec(v___y_8226_);
lean_dec(v___y_8225_);
lean_dec(v___y_8224_);
return v_res_8231_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__2(lean_object* v_weakArgs_8232_, lean_object* v_traceArgs_8233_, uint8_t v_sharedLean_8234_, lean_object* v_exeFile_8235_, lean_object* v_linkLibs_8236_, lean_object* v___x_8237_, lean_object* v_objs_8238_, lean_object* v___y_8239_, lean_object* v___y_8240_, lean_object* v___y_8241_, lean_object* v___y_8242_, lean_object* v___y_8243_, lean_object* v___y_8244_){
_start:
{
lean_object* v_trace_8246_; lean_object* v___x_8247_; lean_object* v___f_8248_; lean_object* v___x_8249_; lean_object* v___x_8250_; lean_object* v___x_8251_; uint8_t v___x_8252_; lean_object* v___x_8253_; lean_object* v___x_8254_; 
v_trace_8246_ = lean_ctor_get(v___y_8244_, 1);
v___x_8247_ = lean_box(v_sharedLean_8234_);
v___f_8248_ = lean_alloc_closure((void*)(l_Lake_buildLeanExe___lam__1___boxed), 13, 5);
lean_closure_set(v___f_8248_, 0, v_objs_8238_);
lean_closure_set(v___f_8248_, 1, v_weakArgs_8232_);
lean_closure_set(v___f_8248_, 2, v_traceArgs_8233_);
lean_closure_set(v___f_8248_, 3, v___x_8247_);
lean_closure_set(v___f_8248_, 4, v_exeFile_8235_);
v___x_8249_ = ((lean_object*)(l_Lake_buildSharedLib___lam__3___closed__0));
v___x_8250_ = l_Lake_Job_collectArray___redArg(v_linkLibs_8236_, v___x_8249_);
v___x_8251_ = lean_unsigned_to_nat(0u);
v___x_8252_ = 0;
v___x_8253_ = l_Lake_Job_mapM___redArg(v___x_8237_, v___x_8250_, v___f_8248_, v___x_8251_, v___x_8252_, v___y_8239_, v___y_8240_, v___y_8241_, v___y_8242_, v___y_8243_, v_trace_8246_);
v___x_8254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8254_, 0, v___x_8253_);
lean_ctor_set(v___x_8254_, 1, v___y_8244_);
return v___x_8254_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__2___boxed(lean_object* v_weakArgs_8255_, lean_object* v_traceArgs_8256_, lean_object* v_sharedLean_8257_, lean_object* v_exeFile_8258_, lean_object* v_linkLibs_8259_, lean_object* v___x_8260_, lean_object* v_objs_8261_, lean_object* v___y_8262_, lean_object* v___y_8263_, lean_object* v___y_8264_, lean_object* v___y_8265_, lean_object* v___y_8266_, lean_object* v___y_8267_, lean_object* v___y_8268_){
_start:
{
uint8_t v_sharedLean_boxed_8269_; lean_object* v_res_8270_; 
v_sharedLean_boxed_8269_ = lean_unbox(v_sharedLean_8257_);
v_res_8270_ = l_Lake_buildLeanExe___lam__2(v_weakArgs_8255_, v_traceArgs_8256_, v_sharedLean_boxed_8269_, v_exeFile_8258_, v_linkLibs_8259_, v___x_8260_, v_objs_8261_, v___y_8262_, v___y_8263_, v___y_8264_, v___y_8265_, v___y_8266_, v___y_8267_);
lean_dec_ref(v___y_8266_);
lean_dec(v___y_8265_);
lean_dec(v___y_8264_);
lean_dec(v___y_8263_);
lean_dec_ref(v_linkLibs_8259_);
return v_res_8270_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe(lean_object* v_exeFile_8271_, lean_object* v_linkObjs_8272_, lean_object* v_linkLibs_8273_, lean_object* v_weakArgs_8274_, lean_object* v_traceArgs_8275_, uint8_t v_sharedLean_8276_, lean_object* v_a_8277_, lean_object* v_a_8278_, lean_object* v_a_8279_, lean_object* v_a_8280_, lean_object* v_a_8281_, lean_object* v_a_8282_){
_start:
{
lean_object* v___x_8284_; lean_object* v___x_8285_; lean_object* v___f_8286_; lean_object* v___x_8287_; lean_object* v___x_8288_; lean_object* v___x_8289_; uint8_t v___x_8290_; lean_object* v___x_8291_; 
v___x_8284_ = l_Lake_instDataKindFilePath;
v___x_8285_ = lean_box(v_sharedLean_8276_);
v___f_8286_ = lean_alloc_closure((void*)(l_Lake_buildLeanExe___lam__2___boxed), 14, 6);
lean_closure_set(v___f_8286_, 0, v_weakArgs_8274_);
lean_closure_set(v___f_8286_, 1, v_traceArgs_8275_);
lean_closure_set(v___f_8286_, 2, v___x_8285_);
lean_closure_set(v___f_8286_, 3, v_exeFile_8271_);
lean_closure_set(v___f_8286_, 4, v_linkLibs_8273_);
lean_closure_set(v___f_8286_, 5, v___x_8284_);
v___x_8287_ = ((lean_object*)(l_Lake_buildSharedLib___closed__0));
v___x_8288_ = l_Lake_Job_collectArray___redArg(v_linkObjs_8272_, v___x_8287_);
v___x_8289_ = lean_unsigned_to_nat(0u);
v___x_8290_ = 1;
v___x_8291_ = l_Lake_Job_bindM___redArg(v___x_8284_, v___x_8288_, v___f_8286_, v___x_8289_, v___x_8290_, v_a_8277_, v_a_8278_, v_a_8279_, v_a_8280_, v_a_8281_, v_a_8282_);
return v___x_8291_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___boxed(lean_object* v_exeFile_8292_, lean_object* v_linkObjs_8293_, lean_object* v_linkLibs_8294_, lean_object* v_weakArgs_8295_, lean_object* v_traceArgs_8296_, lean_object* v_sharedLean_8297_, lean_object* v_a_8298_, lean_object* v_a_8299_, lean_object* v_a_8300_, lean_object* v_a_8301_, lean_object* v_a_8302_, lean_object* v_a_8303_, lean_object* v_a_8304_){
_start:
{
uint8_t v_sharedLean_boxed_8305_; lean_object* v_res_8306_; 
v_sharedLean_boxed_8305_ = lean_unbox(v_sharedLean_8297_);
v_res_8306_ = l_Lake_buildLeanExe(v_exeFile_8292_, v_linkObjs_8293_, v_linkLibs_8294_, v_weakArgs_8295_, v_traceArgs_8296_, v_sharedLean_boxed_8305_, v_a_8298_, v_a_8299_, v_a_8300_, v_a_8301_, v_a_8302_, v_a_8303_);
lean_dec_ref(v_a_8303_);
lean_dec_ref(v_a_8302_);
lean_dec(v_a_8301_);
lean_dec(v_a_8300_);
lean_dec(v_a_8299_);
lean_dec_ref(v_linkObjs_8293_);
return v_res_8306_;
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
