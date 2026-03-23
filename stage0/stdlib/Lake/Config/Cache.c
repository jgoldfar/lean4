// Lean compiler output
// Module: Lake.Config.Cache
// Imports: import Init.Control.Do public import Lake.Util.Log public import Lake.Util.Version public import Lake.Config.Artifact import Lake.Config.InstallPath import Lake.Build.Actions import Lake.Util.Url import Lake.Util.Proc import Lake.Util.Reservoir import Lake.Util.JsonObject import Lake.Util.IO import Init.System.Platform import Init.Data.String.Lemmas
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_putStrLn(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lake_Hash_hex(uint64_t);
lean_object* lean_io_remove_file(lean_object*);
lean_object* l_Lake_computeBinFileHash(lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lake_Config_InstallPath_0__Lake_toolchain2Dir_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_uriEncode(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lake_JsonObject_getJson_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_captureProc_x27(lean_object*, lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_Lake_JsonObject_insertJson(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_Lake_Hash_ofJsonNumber_x3f(lean_object*);
lean_object* l_Lean_JsonNumber_toString(lean_object*);
lean_object* l_Lake_ArtifactDescr_ofFilePath_x3f(lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* l_Lake_removeFileIfExists(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_Hash_fromJson_x3f(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Date_fromJson_x3f(lean_object*);
lean_object* l_Lake_Date_toString(lean_object*);
uint8_t l_Lake_instOrdDate_ord(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint8_t l_String_instDecidableLtRaw___aux__1(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_prim_handle_get_line(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* lean_io_prim_handle_read(lean_object*, size_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readToEnd(lean_object*);
lean_object* lean_io_prim_handle_flush(lean_object*);
lean_object* lean_io_create_tempfile();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_io_prim_handle_lock(lean_object*, uint8_t);
extern lean_object* l_System_instInhabitedFilePath_default;
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_io_metadata(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_IO_FS_createDirAll(lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_getUrl_x3f(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_Reservoir_lakeHeaders;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lake_download(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_rewind(lean_object*);
extern lean_object* l_System_Platform_target;
lean_object* l_Lake_normalizeToolchain(lean_object*);
static const lean_ctor_object l_Lake_CacheMap_schemaVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2026) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l_Lake_CacheMap_schemaVersion___closed__0 = (const lean_object*)&l_Lake_CacheMap_schemaVersion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheMap_schemaVersion = (const lean_object*)&l_Lake_CacheMap_schemaVersion___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = ": invalid header on line 1: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = ": unknown schema version '"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "'; may not parse correctly"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = ": expected schema version on line 1"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__0 = (const lean_object*)&l_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__0_value;
static const lean_string_object l_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__1 = (const lean_object*)&l_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0(lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected array of size > 0"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__0_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__0_value)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected array of size > 1"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__2_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__2_value)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = ": invalid JSON on line "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_CacheMap_parse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheMap_parse___closed__0;
static const lean_array_object l_Lake_CacheMap_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_CacheMap_parse___closed__1 = (const lean_object*)&l_Lake_CacheMap_parse___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheMap_load___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = ": failed to open file: "};
static const lean_object* l_Lake_CacheMap_load___closed__0 = (const lean_object*)&l_Lake_CacheMap_load___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheMap_load(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_load___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_updateFile_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_CacheMap_writeFile___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheMap_writeFile___closed__0;
static lean_once_cell_t l_Lake_CacheMap_writeFile___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheMap_writeFile___closed__1;
static lean_once_cell_t l_Lake_CacheMap_writeFile___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheMap_writeFile___closed__2;
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(uint64_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg(lean_object*, uint64_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unsupported output; "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "art"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unsupported output: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__2_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_CacheMap_collectOutputDescrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_CacheMap_collectOutputDescrs___closed__0 = (const lean_object*)&l_Lake_CacheMap_collectOutputDescrs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg(lean_object*, uint64_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheServiceName_reservoir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reservoir"};
static const lean_object* l_Lake_CacheServiceName_reservoir___closed__0 = (const lean_object*)&l_Lake_CacheServiceName_reservoir___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheServiceName_reservoir = (const lean_object*)&l_Lake_CacheServiceName_reservoir___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString___boxed(lean_object*);
static const lean_closure_object l_Lake_CacheServiceName_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CacheServiceName_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_CacheServiceName_instToString___closed__0 = (const lean_object*)&l_Lake_CacheServiceName_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheServiceName_instToString = (const lean_object*)&l_Lake_CacheServiceName_instToString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_fromJson_x3f(lean_object*);
static const lean_closure_object l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Config_Cache_0__Lake_CacheServiceName_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instFromJson___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instFromJson = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instFromJson___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_toJson(lean_object*);
static const lean_closure_object l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Config_Cache_0__Lake_CacheServiceName_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instToJson___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instToJson = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instToJson___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofRepo(lean_object*);
LEAN_EXPORT uint8_t l_Lake_CacheServiceScope_isRepo(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_isRepo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString___boxed(lean_object*);
static const lean_closure_object l_Lake_CacheServiceScope_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CacheServiceScope_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_CacheServiceScope_instToString___closed__0 = (const lean_object*)&l_Lake_CacheServiceScope_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheServiceScope_instToString = (const lean_object*)&l_Lake_CacheServiceScope_instToString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(lean_object*);
static const lean_closure_object l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_instToJson___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_instToJson = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_instToJson___closed__0_value;
static const lean_string_object l_Lake_CacheOutput_schemaVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "2026-02-25"};
static const lean_object* l_Lake_CacheOutput_schemaVersion___closed__0 = (const lean_object*)&l_Lake_CacheOutput_schemaVersion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheOutput_schemaVersion = (const lean_object*)&l_Lake_CacheOutput_schemaVersion___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedCacheOutput_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_instInhabitedCacheOutput_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedCacheOutput_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedCacheOutput_default = (const lean_object*)&l_Lake_instInhabitedCacheOutput_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedCacheOutput = (const lean_object*)&l_Lake_instInhabitedCacheOutput_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheOutput_ofData(lean_object*);
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(lean_object*);
static const lean_string_object l_Lake_CacheOutput_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lake_CacheOutput_toJson___closed__0 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__0_value;
static const lean_string_object l_Lake_CacheOutput_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "schemaVersion"};
static const lean_object* l_Lake_CacheOutput_toJson___closed__1 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__1_value;
static const lean_ctor_object l_Lake_CacheOutput_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_CacheOutput_schemaVersion___closed__0_value)}};
static const lean_object* l_Lake_CacheOutput_toJson___closed__2 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__2_value;
static lean_once_cell_t l_Lake_CacheOutput_toJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheOutput_toJson___closed__3;
static const lean_string_object l_Lake_CacheOutput_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "service"};
static const lean_object* l_Lake_CacheOutput_toJson___closed__4 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__4_value;
static const lean_string_object l_Lake_CacheOutput_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "scope"};
static const lean_object* l_Lake_CacheOutput_toJson___closed__5 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__5_value;
static const lean_string_object l_Lake_CacheOutput_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "repo"};
static const lean_object* l_Lake_CacheOutput_toJson___closed__6 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__6_value;
LEAN_EXPORT lean_object* l_Lake_CacheOutput_toJson(lean_object*);
static const lean_closure_object l_Lake_CacheOutput_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CacheOutput_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_CacheOutput_instToJson___closed__0 = (const lean_object*)&l_Lake_CacheOutput_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheOutput_instToJson = (const lean_object*)&l_Lake_CacheOutput_instToJson___closed__0_value;
static const lean_ctor_object l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0 = (const lean_object*)&l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheOutput_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "property not found: data"};
static const lean_object* l_Lake_CacheOutput_fromJson_x3f___closed__0 = (const lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__0_value;
static const lean_ctor_object l_Lake_CacheOutput_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__0_value)}};
static const lean_object* l_Lake_CacheOutput_fromJson_x3f___closed__1 = (const lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__1_value;
static const lean_string_object l_Lake_CacheOutput_fromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scope: "};
static const lean_object* l_Lake_CacheOutput_fromJson_x3f___closed__2 = (const lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__2_value;
static const lean_string_object l_Lake_CacheOutput_fromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "repo: "};
static const lean_object* l_Lake_CacheOutput_fromJson_x3f___closed__3 = (const lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__3_value;
static const lean_string_object l_Lake_CacheOutput_fromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "service: "};
static const lean_object* l_Lake_CacheOutput_fromJson_x3f___closed__4 = (const lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_CacheOutput_fromJson_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_CacheOutput_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CacheOutput_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_CacheOutput_instFromJson___closed__0 = (const lean_object*)&l_Lake_CacheOutput_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheOutput_instFromJson = (const lean_object*)&l_Lake_CacheOutput_instFromJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instInhabitedCache_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedCache;
static const lean_string_object l_Lake_Cache_artifactDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "artifacts"};
static const lean_object* l_Lake_Cache_artifactDir___closed__0 = (const lean_object*)&l_Lake_Cache_artifactDir___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_artifactDir(lean_object*);
static const lean_string_object l_Lake_Cache_artifactPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_Cache_artifactPath___closed__0 = (const lean_object*)&l_Lake_Cache_artifactPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Cache_getArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "artifact not found in cache: "};
static const lean_object* l_Lake_Cache_getArtifact___closed__0 = (const lean_object*)&l_Lake_Cache_getArtifact___closed__0_value;
static const lean_string_object l_Lake_Cache_getArtifact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "failed to retrieve artifact from cache: "};
static const lean_object* l_Lake_Cache_getArtifact___closed__1 = (const lean_object*)&l_Lake_Cache_getArtifact___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifactPaths___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifactPaths___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_Cache_getArtifactPaths___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Cache_getArtifactPaths___closed__0 = (const lean_object*)&l_Lake_Cache_getArtifactPaths___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifactPaths(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifactPaths___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Cache_outputsDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "outputs"};
static const lean_object* l_Lake_Cache_outputsDir___closed__0 = (const lean_object*)&l_Lake_Cache_outputsDir___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_outputsDir(lean_object*);
static const lean_string_object l_Lake_Cache_outputsFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ".json"};
static const lean_object* l_Lake_Cache_outputsFile___closed__0 = (const lean_object*)&l_Lake_Cache_outputsFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Option_fromJson_x3f___at___00Lake_Cache_readOutputs_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Option_fromJson_x3f___at___00Lake_Cache_readOutputs_x3f_spec__0___closed__0 = (const lean_object*)&l_Option_fromJson_x3f___at___00Lake_Cache_readOutputs_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_Cache_readOutputs_x3f_spec__0(lean_object*);
static const lean_string_object l_Lake_Cache_readOutputs_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ": invalid JSON: "};
static const lean_object* l_Lake_Cache_readOutputs_x3f___closed__0 = (const lean_object*)&l_Lake_Cache_readOutputs_x3f___closed__0_value;
static const lean_string_object l_Lake_Cache_readOutputs_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ": read failed: "};
static const lean_object* l_Lake_Cache_readOutputs_x3f___closed__1 = (const lean_object*)&l_Lake_Cache_readOutputs_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Cache_revisionDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "revisions"};
static const lean_object* l_Lake_Cache_revisionDir___closed__0 = (const lean_object*)&l_Lake_Cache_revisionDir___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_revisionDir(lean_object*);
static const lean_string_object l_Lake_Cache_revisionPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ".jsonl"};
static const lean_object* l_Lake_Cache_revisionPath___closed__0 = (const lean_object*)&l_Lake_Cache_revisionPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_revisionPath(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CachePlatform_none___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_CachePlatform_none___closed__0 = (const lean_object*)&l_Lake_CachePlatform_none___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CachePlatform_none = (const lean_object*)&l_Lake_CachePlatform_none___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_CachePlatform_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_isNone___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_system;
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length___boxed(lean_object*);
static const lean_string_object l_Lake_CachePlatform_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lake_CachePlatform_toString___closed__0 = (const lean_object*)&l_Lake_CachePlatform_toString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Config_Cache_0__Lake_CachePlatform_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CachePlatform_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CachePlatform_instToString___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CachePlatform_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_Cache_0__Lake_CachePlatform_instToString = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CachePlatform_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheToolchain_none = (const lean_object*)&l_Lake_CachePlatform_none___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_CacheToolchain_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_isNone___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Config_Cache_0__Lake_CacheToolchain_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CacheToolchain_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheToolchain_instToString___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheToolchain_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheToolchain_instToString = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheToolchain_instToString___closed__0_value;
static const lean_string_object l_Lake_downloadArtifactCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = ": downloaded artifact hash mismatch, got "};
static const lean_object* l_Lake_downloadArtifactCore___closed__0 = (const lean_object*)&l_Lake_downloadArtifactCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore(uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0___closed__0 = (const lean_object*)&l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "curl's JSON output contained an invalid JSON response code: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "; JSON received:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "curl's JSON output did not contain a response code; JSON received:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "failed to upload artifact, error "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "; received:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "http_code"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "http_code: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "curl produced invalid JSON output: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "curl"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-s"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-w"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "%{stderr}%{json}\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "--aws-sigv4"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "aws:amz:auto:s3"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--user"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-X"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PUT"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-T"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-H"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Content-Type: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26;
static const lean_array_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "response_code"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_CacheService_isReservoir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_isReservoir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_reservoirService(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadService(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadService(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtsService(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_withKey(lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_artifactContentType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "application/vnd.reservoir.artifact"};
static const lean_object* l_Lake_CacheService_artifactContentType___closed__0 = (const lean_object*)&l_Lake_CacheService_artifactContentType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheService_artifactContentType = (const lean_object*)&l_Lake_CacheService_artifactContentType___closed__0_value;
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ".art"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_artifactUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "/artifacts/"};
static const lean_object* l_Lake_CacheService_artifactUrl___closed__0 = (const lean_object*)&l_Lake_CacheService_artifactUrl___closed__0_value;
static const lean_string_object l_Lake_CacheService_artifactUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "/packages"};
static const lean_object* l_Lake_CacheService_artifactUrl___closed__1 = (const lean_object*)&l_Lake_CacheService_artifactUrl___closed__1_value;
static const lean_string_object l_Lake_CacheService_artifactUrl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "/repositories"};
static const lean_object* l_Lake_CacheService_artifactUrl___closed__2 = (const lean_object*)&l_Lake_CacheService_artifactUrl___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_downloadArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = ": downloading artifact "};
static const lean_object* l_Lake_CacheService_downloadArtifact___closed__0 = (const lean_object*)&l_Lake_CacheService_downloadArtifact___closed__0_value;
static const lean_string_object l_Lake_CacheService_downloadArtifact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n  local path: "};
static const lean_object* l_Lake_CacheService_downloadArtifact___closed__1 = (const lean_object*)&l_Lake_CacheService_downloadArtifact___closed__1_value;
static const lean_string_object l_Lake_CacheService_downloadArtifact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n  remote URL: "};
static const lean_object* l_Lake_CacheService_downloadArtifact___closed__2 = (const lean_object*)&l_Lake_CacheService_downloadArtifact___closed__2_value;
static lean_once_cell_t l_Lake_CacheService_downloadArtifact___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheService_downloadArtifact___closed__3;
static lean_once_cell_t l_Lake_CacheService_downloadArtifact___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_CacheService_downloadArtifact___closed__4;
static lean_once_cell_t l_Lake_CacheService_downloadArtifact___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_CacheService_downloadArtifact___closed__5;
static lean_once_cell_t l_Lake_CacheService_downloadArtifact___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lake_CacheService_downloadArtifact___closed__6;
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_uploadArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": uploading artifact "};
static const lean_object* l_Lake_CacheService_uploadArtifact___closed__0 = (const lean_object*)&l_Lake_CacheService_uploadArtifact___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "urlnum"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "curl JSON: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "\nunexpected response:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "size_download"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "content_type"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "errormsg"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n  curl error: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": failed to "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " artifact "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " (status code: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "download"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "upload"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ": downloaded artifact "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = ": uploaded artifact "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = ": unidentifiable transfer completed: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "curl produced invalid JSON: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "; received: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "property not found: http_code"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__3_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__3_value)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "-T "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "url = "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "-o "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___redArg___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = ": curl exited with code "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = ": curl produced unexpected output:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " some artifacts"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__2_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__3_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__4_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-Z"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__5 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__5_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__6 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__6_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-L"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__7 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__7_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--retry"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__8 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__8_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "3"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__9 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__9_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "--config"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__10 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__10_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__11;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__12;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__13;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__14;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__15;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__16;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__17;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__18;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__19;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__20;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Content-Type: application/vnd.reservoir.artifact"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__21 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__21_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__22;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__23;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__24;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__25;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__26;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__27;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__28;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__29;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__30;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__31;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__32;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts___elam__1_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts___elam__1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___elam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___elam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CacheMap_parse___elam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_CacheService_downloadArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_CacheService_downloadArtifacts___closed__0 = (const lean_object*)&l_Lake_CacheService_downloadArtifacts___closed__0_value;
static const lean_string_object l_Lake_CacheService_downloadArtifacts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "no artifacts to download"};
static const lean_object* l_Lake_CacheService_downloadArtifacts___closed__1 = (const lean_object*)&l_Lake_CacheService_downloadArtifacts___closed__1_value;
static const lean_ctor_object l_Lake_CacheService_downloadArtifacts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_CacheService_downloadArtifacts___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_CacheService_downloadArtifacts___closed__2 = (const lean_object*)&l_Lake_CacheService_downloadArtifacts___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_uploadArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no artifacts to upload"};
static const lean_object* l_Lake_CacheService_uploadArtifacts___closed__0 = (const lean_object*)&l_Lake_CacheService_uploadArtifacts___closed__0_value;
static const lean_ctor_object l_Lake_CacheService_uploadArtifacts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_CacheService_uploadArtifacts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_CacheService_uploadArtifacts___closed__1 = (const lean_object*)&l_Lake_CacheService_uploadArtifacts___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_mapContentType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "application/vnd.reservoir.outputs+json-lines"};
static const lean_object* l_Lake_CacheService_mapContentType___closed__0 = (const lean_object*)&l_Lake_CacheService_mapContentType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheService_mapContentType = (const lean_object*)&l_Lake_CacheService_mapContentType___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/tc/"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/pt/"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_revisionUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "&toolchain="};
static const lean_object* l_Lake_CacheService_revisionUrl___closed__0 = (const lean_object*)&l_Lake_CacheService_revisionUrl___closed__0_value;
static const lean_string_object l_Lake_CacheService_revisionUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "/build-outputs\?rev="};
static const lean_object* l_Lake_CacheService_revisionUrl___closed__1 = (const lean_object*)&l_Lake_CacheService_revisionUrl___closed__1_value;
static const lean_string_object l_Lake_CacheService_revisionUrl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "&platform="};
static const lean_object* l_Lake_CacheService_revisionUrl___closed__2 = (const lean_object*)&l_Lake_CacheService_revisionUrl___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ": output lookup failed"};
static const lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__0 = (const lean_object*)&l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__0_value;
static const lean_string_object l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = ": downloading build outputs for revision "};
static const lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__1 = (const lean_object*)&l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__1_value;
static const lean_array_object l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__2 = (const lean_object*)&l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_uploadRevisionOutputs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = ": uploading build outputs for revision "};
static const lean_object* l_Lake_CacheService_uploadRevisionOutputs___closed__0 = (const lean_object*)&l_Lake_CacheService_uploadRevisionOutputs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(lean_object* v_inputName_10_, lean_object* v_line_11_, lean_object* v_a_12_){
_start:
{
lean_object* v_a_15_; lean_object* v___x_24_; lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_24_ = lean_string_utf8_byte_size(v_line_11_);
v___x_25_ = lean_unsigned_to_nat(0u);
v___x_26_ = lean_nat_dec_eq(v___x_24_, v___x_25_);
if (v___x_26_ == 0)
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Json_parse(v_line_11_);
if (lean_obj_tag(v___x_27_) == 0)
{
lean_object* v_a_28_; 
v_a_28_ = lean_ctor_get(v___x_27_, 0);
lean_inc(v_a_28_);
lean_dec_ref(v___x_27_);
v_a_15_ = v_a_28_;
goto v___jp_14_;
}
else
{
lean_object* v_a_29_; lean_object* v___x_30_; 
v_a_29_ = lean_ctor_get(v___x_27_, 0);
lean_inc(v_a_29_);
lean_dec_ref(v___x_27_);
v___x_30_ = l_Lake_Date_fromJson_x3f(v_a_29_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
lean_inc(v_a_31_);
lean_dec_ref(v___x_30_);
v_a_15_ = v_a_31_;
goto v___jp_14_;
}
else
{
lean_object* v_a_32_; lean_object* v___x_45_; uint8_t v___x_46_; 
v_a_32_ = lean_ctor_get(v___x_30_, 0);
lean_inc(v_a_32_);
lean_dec_ref(v___x_30_);
v___x_45_ = ((lean_object*)(l_Lake_CacheMap_schemaVersion));
v___x_46_ = l_Lake_instOrdDate_ord(v_a_32_, v___x_45_);
if (v___x_46_ == 0)
{
goto v___jp_33_;
}
else
{
if (v___x_26_ == 0)
{
lean_object* v___x_47_; lean_object* v___x_48_; 
lean_dec(v_a_32_);
lean_dec_ref(v_inputName_10_);
v___x_47_ = lean_box(0);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v_a_12_);
return v___x_48_;
}
else
{
goto v___jp_33_;
}
}
v___jp_33_:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_34_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__1));
v___x_35_ = lean_string_append(v_inputName_10_, v___x_34_);
v___x_36_ = l_Lake_Date_toString(v_a_32_);
v___x_37_ = lean_string_append(v___x_35_, v___x_36_);
lean_dec_ref(v___x_36_);
v___x_38_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__2));
v___x_39_ = lean_string_append(v___x_37_, v___x_38_);
v___x_40_ = 2;
v___x_41_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_41_, 0, v___x_39_);
lean_ctor_set_uint8(v___x_41_, sizeof(void*)*1, v___x_40_);
v___x_42_ = lean_box(0);
v___x_43_ = lean_array_push(v_a_12_, v___x_41_);
v___x_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_42_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
return v___x_44_;
}
}
}
}
else
{
lean_object* v___x_49_; lean_object* v___x_50_; uint8_t v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
lean_dec_ref(v_line_11_);
v___x_49_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__3));
v___x_50_ = lean_string_append(v_inputName_10_, v___x_49_);
v___x_51_ = 3;
v___x_52_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_52_, 0, v___x_50_);
lean_ctor_set_uint8(v___x_52_, sizeof(void*)*1, v___x_51_);
v___x_53_ = lean_array_get_size(v_a_12_);
v___x_54_ = lean_array_push(v_a_12_, v___x_52_);
v___x_55_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_53_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
return v___x_55_;
}
v___jp_14_:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_16_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__0));
v___x_17_ = lean_string_append(v_inputName_10_, v___x_16_);
v___x_18_ = lean_string_append(v___x_17_, v_a_15_);
lean_dec_ref(v_a_15_);
v___x_19_ = 2;
v___x_20_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_20_, 0, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*1, v___x_19_);
v___x_21_ = lean_box(0);
v___x_22_ = lean_array_push(v_a_12_, v___x_20_);
v___x_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_21_);
lean_ctor_set(v___x_23_, 1, v___x_22_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___boxed(lean_object* v_inputName_56_, lean_object* v_line_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_inputName_56_, v_line_57_, v_a_58_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(uint64_t v_a_61_, lean_object* v_x_62_){
_start:
{
if (lean_obj_tag(v_x_62_) == 0)
{
uint8_t v___x_63_; 
v___x_63_ = 0;
return v___x_63_;
}
else
{
lean_object* v_key_64_; lean_object* v_tail_65_; uint64_t v___x_66_; uint8_t v___x_67_; 
v_key_64_ = lean_ctor_get(v_x_62_, 0);
v_tail_65_ = lean_ctor_get(v_x_62_, 2);
v___x_66_ = lean_unbox_uint64(v_key_64_);
v___x_67_ = lean_uint64_dec_eq(v___x_66_, v_a_61_);
if (v___x_67_ == 0)
{
v_x_62_ = v_tail_65_;
goto _start;
}
else
{
return v___x_67_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg___boxed(lean_object* v_a_69_, lean_object* v_x_70_){
_start:
{
uint64_t v_a_boxed_71_; uint8_t v_res_72_; lean_object* v_r_73_; 
v_a_boxed_71_ = lean_unbox_uint64(v_a_69_);
lean_dec_ref(v_a_69_);
v_res_72_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(v_a_boxed_71_, v_x_70_);
lean_dec(v_x_70_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_74_, lean_object* v_x_75_){
_start:
{
if (lean_obj_tag(v_x_75_) == 0)
{
return v_x_74_;
}
else
{
lean_object* v_key_76_; lean_object* v_value_77_; lean_object* v_tail_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_102_; 
v_key_76_ = lean_ctor_get(v_x_75_, 0);
v_value_77_ = lean_ctor_get(v_x_75_, 1);
v_tail_78_ = lean_ctor_get(v_x_75_, 2);
v_isSharedCheck_102_ = !lean_is_exclusive(v_x_75_);
if (v_isSharedCheck_102_ == 0)
{
v___x_80_ = v_x_75_;
v_isShared_81_ = v_isSharedCheck_102_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_tail_78_);
lean_inc(v_value_77_);
lean_inc(v_key_76_);
lean_dec(v_x_75_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_102_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_82_; uint64_t v___x_83_; uint64_t v___x_84_; uint64_t v___x_85_; uint64_t v___x_86_; uint64_t v_fold_87_; uint64_t v___x_88_; uint64_t v___x_89_; uint64_t v___x_90_; size_t v___x_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; size_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_82_ = lean_array_get_size(v_x_74_);
v___x_83_ = 32ULL;
v___x_84_ = lean_unbox_uint64(v_key_76_);
v___x_85_ = lean_uint64_shift_right(v___x_84_, v___x_83_);
v___x_86_ = lean_unbox_uint64(v_key_76_);
v_fold_87_ = lean_uint64_xor(v___x_86_, v___x_85_);
v___x_88_ = 16ULL;
v___x_89_ = lean_uint64_shift_right(v_fold_87_, v___x_88_);
v___x_90_ = lean_uint64_xor(v_fold_87_, v___x_89_);
v___x_91_ = lean_uint64_to_usize(v___x_90_);
v___x_92_ = lean_usize_of_nat(v___x_82_);
v___x_93_ = ((size_t)1ULL);
v___x_94_ = lean_usize_sub(v___x_92_, v___x_93_);
v___x_95_ = lean_usize_land(v___x_91_, v___x_94_);
v___x_96_ = lean_array_uget_borrowed(v_x_74_, v___x_95_);
lean_inc(v___x_96_);
if (v_isShared_81_ == 0)
{
lean_ctor_set(v___x_80_, 2, v___x_96_);
v___x_98_ = v___x_80_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_key_76_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_value_77_);
lean_ctor_set(v_reuseFailAlloc_101_, 2, v___x_96_);
v___x_98_ = v_reuseFailAlloc_101_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; 
v___x_99_ = lean_array_uset(v_x_74_, v___x_95_, v___x_98_);
v_x_74_ = v___x_99_;
v_x_75_ = v_tail_78_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4___redArg(lean_object* v_i_103_, lean_object* v_source_104_, lean_object* v_target_105_){
_start:
{
lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_106_ = lean_array_get_size(v_source_104_);
v___x_107_ = lean_nat_dec_lt(v_i_103_, v___x_106_);
if (v___x_107_ == 0)
{
lean_dec_ref(v_source_104_);
lean_dec(v_i_103_);
return v_target_105_;
}
else
{
lean_object* v_es_108_; lean_object* v___x_109_; lean_object* v_source_110_; lean_object* v_target_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v_es_108_ = lean_array_fget(v_source_104_, v_i_103_);
v___x_109_ = lean_box(0);
v_source_110_ = lean_array_fset(v_source_104_, v_i_103_, v___x_109_);
v_target_111_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5___redArg(v_target_105_, v_es_108_);
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_nat_add(v_i_103_, v___x_112_);
lean_dec(v_i_103_);
v_i_103_ = v___x_113_;
v_source_104_ = v_source_110_;
v_target_105_ = v_target_111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3___redArg(lean_object* v_data_115_){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v_nbuckets_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_116_ = lean_array_get_size(v_data_115_);
v___x_117_ = lean_unsigned_to_nat(2u);
v_nbuckets_118_ = lean_nat_mul(v___x_116_, v___x_117_);
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_box(0);
v___x_121_ = lean_mk_array(v_nbuckets_118_, v___x_120_);
v___x_122_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4___redArg(v___x_119_, v_data_115_, v___x_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(uint64_t v_a_123_, lean_object* v_b_124_, lean_object* v_x_125_){
_start:
{
if (lean_obj_tag(v_x_125_) == 0)
{
lean_dec(v_b_124_);
return v_x_125_;
}
else
{
lean_object* v_key_126_; lean_object* v_value_127_; lean_object* v_tail_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_142_; 
v_key_126_ = lean_ctor_get(v_x_125_, 0);
v_value_127_ = lean_ctor_get(v_x_125_, 1);
v_tail_128_ = lean_ctor_get(v_x_125_, 2);
v_isSharedCheck_142_ = !lean_is_exclusive(v_x_125_);
if (v_isSharedCheck_142_ == 0)
{
v___x_130_ = v_x_125_;
v_isShared_131_ = v_isSharedCheck_142_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_tail_128_);
lean_inc(v_value_127_);
lean_inc(v_key_126_);
lean_dec(v_x_125_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_142_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
uint64_t v___x_132_; uint8_t v___x_133_; 
v___x_132_ = lean_unbox_uint64(v_key_126_);
v___x_133_ = lean_uint64_dec_eq(v___x_132_, v_a_123_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; lean_object* v___x_136_; 
v___x_134_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(v_a_123_, v_b_124_, v_tail_128_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 2, v___x_134_);
v___x_136_ = v___x_130_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_key_126_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v_value_127_);
lean_ctor_set(v_reuseFailAlloc_137_, 2, v___x_134_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
else
{
lean_object* v___x_138_; lean_object* v___x_140_; 
lean_dec(v_value_127_);
lean_dec(v_key_126_);
v___x_138_ = lean_box_uint64(v_a_123_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 1, v_b_124_);
lean_ctor_set(v___x_130_, 0, v___x_138_);
v___x_140_ = v___x_130_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_138_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v_b_124_);
lean_ctor_set(v_reuseFailAlloc_141_, 2, v_tail_128_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg___boxed(lean_object* v_a_143_, lean_object* v_b_144_, lean_object* v_x_145_){
_start:
{
uint64_t v_a_boxed_146_; lean_object* v_res_147_; 
v_a_boxed_146_ = lean_unbox_uint64(v_a_143_);
lean_dec_ref(v_a_143_);
v_res_147_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(v_a_boxed_146_, v_b_144_, v_x_145_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(lean_object* v_m_148_, uint64_t v_a_149_, lean_object* v_b_150_){
_start:
{
lean_object* v_size_151_; lean_object* v_buckets_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_195_; 
v_size_151_ = lean_ctor_get(v_m_148_, 0);
v_buckets_152_ = lean_ctor_get(v_m_148_, 1);
v_isSharedCheck_195_ = !lean_is_exclusive(v_m_148_);
if (v_isSharedCheck_195_ == 0)
{
v___x_154_ = v_m_148_;
v_isShared_155_ = v_isSharedCheck_195_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_buckets_152_);
lean_inc(v_size_151_);
lean_dec(v_m_148_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_195_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_156_; uint64_t v___x_157_; uint64_t v___x_158_; uint64_t v_fold_159_; uint64_t v___x_160_; uint64_t v___x_161_; uint64_t v___x_162_; size_t v___x_163_; size_t v___x_164_; size_t v___x_165_; size_t v___x_166_; size_t v___x_167_; lean_object* v_bkt_168_; uint8_t v___x_169_; 
v___x_156_ = lean_array_get_size(v_buckets_152_);
v___x_157_ = 32ULL;
v___x_158_ = lean_uint64_shift_right(v_a_149_, v___x_157_);
v_fold_159_ = lean_uint64_xor(v_a_149_, v___x_158_);
v___x_160_ = 16ULL;
v___x_161_ = lean_uint64_shift_right(v_fold_159_, v___x_160_);
v___x_162_ = lean_uint64_xor(v_fold_159_, v___x_161_);
v___x_163_ = lean_uint64_to_usize(v___x_162_);
v___x_164_ = lean_usize_of_nat(v___x_156_);
v___x_165_ = ((size_t)1ULL);
v___x_166_ = lean_usize_sub(v___x_164_, v___x_165_);
v___x_167_ = lean_usize_land(v___x_163_, v___x_166_);
v_bkt_168_ = lean_array_uget_borrowed(v_buckets_152_, v___x_167_);
v___x_169_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(v_a_149_, v_bkt_168_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; lean_object* v_size_x27_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v_buckets_x27_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_170_ = lean_unsigned_to_nat(1u);
v_size_x27_171_ = lean_nat_add(v_size_151_, v___x_170_);
lean_dec(v_size_151_);
v___x_172_ = lean_box_uint64(v_a_149_);
lean_inc(v_bkt_168_);
v___x_173_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
lean_ctor_set(v___x_173_, 1, v_b_150_);
lean_ctor_set(v___x_173_, 2, v_bkt_168_);
v_buckets_x27_174_ = lean_array_uset(v_buckets_152_, v___x_167_, v___x_173_);
v___x_175_ = lean_unsigned_to_nat(4u);
v___x_176_ = lean_nat_mul(v_size_x27_171_, v___x_175_);
v___x_177_ = lean_unsigned_to_nat(3u);
v___x_178_ = lean_nat_div(v___x_176_, v___x_177_);
lean_dec(v___x_176_);
v___x_179_ = lean_array_get_size(v_buckets_x27_174_);
v___x_180_ = lean_nat_dec_le(v___x_178_, v___x_179_);
lean_dec(v___x_178_);
if (v___x_180_ == 0)
{
lean_object* v_val_181_; lean_object* v___x_183_; 
v_val_181_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3___redArg(v_buckets_x27_174_);
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 1, v_val_181_);
lean_ctor_set(v___x_154_, 0, v_size_x27_171_);
v___x_183_ = v___x_154_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_size_x27_171_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v_val_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
else
{
lean_object* v___x_186_; 
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 1, v_buckets_x27_174_);
lean_ctor_set(v___x_154_, 0, v_size_x27_171_);
v___x_186_ = v___x_154_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_size_x27_171_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_buckets_x27_174_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
else
{
lean_object* v___x_188_; lean_object* v_buckets_x27_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_193_; 
lean_inc(v_bkt_168_);
v___x_188_ = lean_box(0);
v_buckets_x27_189_ = lean_array_uset(v_buckets_152_, v___x_167_, v___x_188_);
v___x_190_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(v_a_149_, v_b_150_, v_bkt_168_);
v___x_191_ = lean_array_uset(v_buckets_x27_189_, v___x_167_, v___x_190_);
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 1, v___x_191_);
v___x_193_ = v___x_154_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_size_151_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v___x_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg___boxed(lean_object* v_m_196_, lean_object* v_a_197_, lean_object* v_b_198_){
_start:
{
uint64_t v_a_boxed_199_; lean_object* v_res_200_; 
v_a_boxed_199_ = lean_unbox_uint64(v_a_197_);
lean_dec_ref(v_a_197_);
v_res_200_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_m_196_, v_a_boxed_199_, v_b_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0(size_t v_sz_201_, size_t v_i_202_, lean_object* v_bs_203_){
_start:
{
uint8_t v___x_204_; 
v___x_204_ = lean_usize_dec_lt(v_i_202_, v_sz_201_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; 
v___x_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_205_, 0, v_bs_203_);
return v___x_205_;
}
else
{
lean_object* v_v_206_; lean_object* v___x_207_; lean_object* v_bs_x27_208_; size_t v___x_209_; size_t v___x_210_; lean_object* v___x_211_; 
v_v_206_ = lean_array_uget(v_bs_203_, v_i_202_);
v___x_207_ = lean_unsigned_to_nat(0u);
v_bs_x27_208_ = lean_array_uset(v_bs_203_, v_i_202_, v___x_207_);
v___x_209_ = ((size_t)1ULL);
v___x_210_ = lean_usize_add(v_i_202_, v___x_209_);
v___x_211_ = lean_array_uset(v_bs_x27_208_, v_i_202_, v_v_206_);
v_i_202_ = v___x_210_;
v_bs_203_ = v___x_211_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0___boxed(lean_object* v_sz_213_, lean_object* v_i_214_, lean_object* v_bs_215_){
_start:
{
size_t v_sz_boxed_216_; size_t v_i_boxed_217_; lean_object* v_res_218_; 
v_sz_boxed_216_ = lean_unbox_usize(v_sz_213_);
lean_dec(v_sz_213_);
v_i_boxed_217_ = lean_unbox_usize(v_i_214_);
lean_dec(v_i_214_);
v_res_218_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0(v_sz_boxed_216_, v_i_boxed_217_, v_bs_215_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0(lean_object* v_x_221_){
_start:
{
if (lean_obj_tag(v_x_221_) == 4)
{
lean_object* v_elems_222_; size_t v_sz_223_; size_t v___x_224_; lean_object* v___x_225_; 
v_elems_222_ = lean_ctor_get(v_x_221_, 0);
lean_inc_ref(v_elems_222_);
lean_dec_ref(v_x_221_);
v_sz_223_ = lean_array_size(v_elems_222_);
v___x_224_ = ((size_t)0ULL);
v___x_225_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0(v_sz_223_, v___x_224_, v_elems_222_);
return v___x_225_;
}
else
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_226_ = ((lean_object*)(l_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__0));
v___x_227_ = lean_unsigned_to_nat(80u);
v___x_228_ = l_Lean_Json_pretty(v_x_221_, v___x_227_);
v___x_229_ = lean_string_append(v___x_226_, v___x_228_);
lean_dec_ref(v___x_228_);
v___x_230_ = ((lean_object*)(l_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__1));
v___x_231_ = lean_string_append(v___x_229_, v___x_230_);
v___x_232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
return v___x_232_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(lean_object* v_cache_239_, lean_object* v_line_240_, uint8_t v_platformIndependent_241_){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = l_Lean_Json_parse(v_line_240_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_250_; 
lean_dec_ref(v_cache_239_);
v_a_243_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_250_ == 0)
{
v___x_245_ = v___x_242_;
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_242_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_248_; 
if (v_isShared_246_ == 0)
{
v___x_248_ = v___x_245_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_243_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
else
{
lean_object* v_a_251_; lean_object* v___x_252_; 
v_a_251_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_a_251_);
lean_dec_ref(v___x_242_);
v___x_252_ = l_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0(v_a_251_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_260_; 
lean_dec_ref(v_cache_239_);
v_a_253_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_260_ == 0)
{
v___x_255_ = v___x_252_;
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_252_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_253_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
else
{
lean_object* v_a_261_; lean_object* v___x_262_; lean_object* v___x_263_; uint8_t v___x_264_; 
v_a_261_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_a_261_);
lean_dec_ref(v___x_252_);
v___x_262_ = lean_unsigned_to_nat(0u);
v___x_263_ = lean_array_get_size(v_a_261_);
v___x_264_ = lean_nat_dec_lt(v___x_262_, v___x_263_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; 
lean_dec(v_a_261_);
lean_dec_ref(v_cache_239_);
v___x_265_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__1));
return v___x_265_;
}
else
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_array_fget_borrowed(v_a_261_, v___x_262_);
lean_inc(v___x_266_);
v___x_267_ = l_Lake_Hash_fromJson_x3f(v___x_266_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
lean_dec(v_a_261_);
lean_dec_ref(v_cache_239_);
v_a_268_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_267_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_267_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
else
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_290_; 
v_a_276_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_290_ == 0)
{
v___x_278_ = v___x_267_;
v_isShared_279_ = v_isSharedCheck_290_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_267_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_290_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(1u);
v___x_281_ = lean_nat_dec_lt(v___x_280_, v___x_263_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; 
lean_del_object(v___x_278_);
lean_dec(v_a_276_);
lean_dec(v_a_261_);
lean_dec_ref(v_cache_239_);
v___x_282_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__3));
return v___x_282_;
}
else
{
lean_object* v___x_283_; lean_object* v___x_284_; uint64_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_288_; 
v___x_283_ = lean_array_fget(v_a_261_, v___x_280_);
lean_dec(v_a_261_);
v___x_284_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set_uint8(v___x_284_, sizeof(void*)*1, v_platformIndependent_241_);
v___x_285_ = lean_unbox_uint64(v_a_276_);
lean_dec(v_a_276_);
v___x_286_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_cache_239_, v___x_285_, v___x_284_);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 0, v___x_286_);
v___x_288_ = v___x_278_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v___x_286_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___boxed(lean_object* v_cache_291_, lean_object* v_line_292_, lean_object* v_platformIndependent_293_){
_start:
{
uint8_t v_platformIndependent_boxed_294_; lean_object* v_res_295_; 
v_platformIndependent_boxed_294_ = lean_unbox(v_platformIndependent_293_);
v_res_295_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(v_cache_291_, v_line_292_, v_platformIndependent_boxed_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1(lean_object* v_00_u03b2_296_, lean_object* v_m_297_, uint64_t v_a_298_, lean_object* v_b_299_){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_m_297_, v_a_298_, v_b_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___boxed(lean_object* v_00_u03b2_301_, lean_object* v_m_302_, lean_object* v_a_303_, lean_object* v_b_304_){
_start:
{
uint64_t v_a_boxed_305_; lean_object* v_res_306_; 
v_a_boxed_305_ = lean_unbox_uint64(v_a_303_);
lean_dec_ref(v_a_303_);
v_res_306_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1(v_00_u03b2_301_, v_m_302_, v_a_boxed_305_, v_b_304_);
return v_res_306_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2(lean_object* v_00_u03b2_307_, uint64_t v_a_308_, lean_object* v_x_309_){
_start:
{
uint8_t v___x_310_; 
v___x_310_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(v_a_308_, v_x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___boxed(lean_object* v_00_u03b2_311_, lean_object* v_a_312_, lean_object* v_x_313_){
_start:
{
uint64_t v_a_boxed_314_; uint8_t v_res_315_; lean_object* v_r_316_; 
v_a_boxed_314_ = lean_unbox_uint64(v_a_312_);
lean_dec_ref(v_a_312_);
v_res_315_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2(v_00_u03b2_311_, v_a_boxed_314_, v_x_313_);
lean_dec(v_x_313_);
v_r_316_ = lean_box(v_res_315_);
return v_r_316_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3(lean_object* v_00_u03b2_317_, lean_object* v_data_318_){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3___redArg(v_data_318_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4(lean_object* v_00_u03b2_320_, uint64_t v_a_321_, lean_object* v_b_322_, lean_object* v_x_323_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(v_a_321_, v_b_322_, v_x_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___boxed(lean_object* v_00_u03b2_325_, lean_object* v_a_326_, lean_object* v_b_327_, lean_object* v_x_328_){
_start:
{
uint64_t v_a_boxed_329_; lean_object* v_res_330_; 
v_a_boxed_329_ = lean_unbox_uint64(v_a_326_);
lean_dec_ref(v_a_326_);
v_res_330_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4(v_00_u03b2_325_, v_a_boxed_329_, v_b_327_, v_x_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_331_, lean_object* v_i_332_, lean_object* v_source_333_, lean_object* v_target_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4___redArg(v_i_332_, v_source_333_, v_target_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_336_, lean_object* v_x_337_, lean_object* v_x_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5___redArg(v_x_337_, v_x_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___lam__0(lean_object* v_toPure_340_, lean_object* v_cache_341_, lean_object* v_____r_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lean_apply_2(v_toPure_340_, lean_box(0), v_cache_341_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg(lean_object* v_inst_346_, lean_object* v_inst_347_, lean_object* v_inputName_348_, lean_object* v_lineNo_349_, lean_object* v_cache_350_, lean_object* v_line_351_, uint8_t v_platformIndependent_352_){
_start:
{
lean_object* v_toApplicative_353_; lean_object* v_toBind_354_; lean_object* v_toPure_355_; lean_object* v___x_356_; 
v_toApplicative_353_ = lean_ctor_get(v_inst_346_, 0);
lean_inc_ref(v_toApplicative_353_);
v_toBind_354_ = lean_ctor_get(v_inst_346_, 1);
lean_inc(v_toBind_354_);
lean_dec_ref(v_inst_346_);
v_toPure_355_ = lean_ctor_get(v_toApplicative_353_, 1);
lean_inc(v_toPure_355_);
lean_dec_ref(v_toApplicative_353_);
lean_inc_ref(v_cache_350_);
v___x_356_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(v_cache_350_, v_line_351_, v_platformIndependent_352_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___f_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; uint8_t v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_357_);
lean_dec_ref(v___x_356_);
v___f_358_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___lam__0), 3, 2);
lean_closure_set(v___f_358_, 0, v_toPure_355_);
lean_closure_set(v___f_358_, 1, v_cache_350_);
v___x_359_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0));
v___x_360_ = lean_string_append(v_inputName_348_, v___x_359_);
v___x_361_ = l_Nat_reprFast(v_lineNo_349_);
v___x_362_ = lean_string_append(v___x_360_, v___x_361_);
lean_dec_ref(v___x_361_);
v___x_363_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_364_ = lean_string_append(v___x_362_, v___x_363_);
v___x_365_ = lean_string_append(v___x_364_, v_a_357_);
lean_dec(v_a_357_);
v___x_366_ = 2;
v___x_367_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_367_, 0, v___x_365_);
lean_ctor_set_uint8(v___x_367_, sizeof(void*)*1, v___x_366_);
v___x_368_ = lean_apply_1(v_inst_347_, v___x_367_);
v___x_369_ = lean_apply_4(v_toBind_354_, lean_box(0), lean_box(0), v___x_368_, v___f_358_);
return v___x_369_;
}
else
{
lean_object* v_a_370_; lean_object* v___x_371_; 
lean_dec(v_toBind_354_);
lean_dec_ref(v_cache_350_);
lean_dec(v_lineNo_349_);
lean_dec_ref(v_inputName_348_);
lean_dec(v_inst_347_);
v_a_370_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_370_);
lean_dec_ref(v___x_356_);
v___x_371_ = lean_apply_2(v_toPure_355_, lean_box(0), v_a_370_);
return v___x_371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___boxed(lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_inputName_374_, lean_object* v_lineNo_375_, lean_object* v_cache_376_, lean_object* v_line_377_, lean_object* v_platformIndependent_378_){
_start:
{
uint8_t v_platformIndependent_boxed_379_; lean_object* v_res_380_; 
v_platformIndependent_boxed_379_ = lean_unbox(v_platformIndependent_378_);
v_res_380_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg(v_inst_372_, v_inst_373_, v_inputName_374_, v_lineNo_375_, v_cache_376_, v_line_377_, v_platformIndependent_boxed_379_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry(lean_object* v_m_381_, lean_object* v_inst_382_, lean_object* v_inst_383_, lean_object* v_inputName_384_, lean_object* v_lineNo_385_, lean_object* v_cache_386_, lean_object* v_line_387_, uint8_t v_platformIndependent_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg(v_inst_382_, v_inst_383_, v_inputName_384_, v_lineNo_385_, v_cache_386_, v_line_387_, v_platformIndependent_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___boxed(lean_object* v_m_390_, lean_object* v_inst_391_, lean_object* v_inst_392_, lean_object* v_inputName_393_, lean_object* v_lineNo_394_, lean_object* v_cache_395_, lean_object* v_line_396_, lean_object* v_platformIndependent_397_){
_start:
{
uint8_t v_platformIndependent_boxed_398_; lean_object* v_res_399_; 
v_platformIndependent_boxed_398_ = lean_unbox(v_platformIndependent_397_);
v_res_399_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry(v_m_390_, v_inst_391_, v_inst_392_, v_inputName_393_, v_lineNo_394_, v_cache_395_, v_line_396_, v_platformIndependent_boxed_398_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0(lean_object* v_inputName_400_, lean_object* v_lineNo_401_, lean_object* v_cache_402_, lean_object* v_line_403_, uint8_t v_platformIndependent_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___x_407_; 
lean_inc_ref(v_cache_402_);
v___x_407_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(v_cache_402_, v_line_403_, v_platformIndependent_404_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_425_; 
v_a_408_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_425_ == 0)
{
v___x_410_ = v___x_407_;
v_isShared_411_ = v_isSharedCheck_425_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_407_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_425_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_423_; 
v___x_412_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0));
v___x_413_ = lean_string_append(v_inputName_400_, v___x_412_);
v___x_414_ = l_Nat_reprFast(v_lineNo_401_);
v___x_415_ = lean_string_append(v___x_413_, v___x_414_);
lean_dec_ref(v___x_414_);
v___x_416_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_417_ = lean_string_append(v___x_415_, v___x_416_);
v___x_418_ = lean_string_append(v___x_417_, v_a_408_);
lean_dec(v_a_408_);
v___x_419_ = 2;
v___x_420_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_420_, 0, v___x_418_);
lean_ctor_set_uint8(v___x_420_, sizeof(void*)*1, v___x_419_);
v___x_421_ = lean_apply_2(v___y_405_, v___x_420_, lean_box(0));
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v_cache_402_);
v___x_423_ = v___x_410_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_cache_402_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
else
{
lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_433_; 
lean_dec_ref(v___y_405_);
lean_dec_ref(v_cache_402_);
lean_dec(v_lineNo_401_);
lean_dec_ref(v_inputName_400_);
v_a_426_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_433_ == 0)
{
v___x_428_ = v___x_407_;
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_dec(v___x_407_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_431_; 
if (v_isShared_429_ == 0)
{
lean_ctor_set_tag(v___x_428_, 0);
v___x_431_ = v___x_428_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_a_426_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0___boxed(lean_object* v_inputName_434_, lean_object* v_lineNo_435_, lean_object* v_cache_436_, lean_object* v_line_437_, lean_object* v_platformIndependent_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
uint8_t v_platformIndependent_boxed_441_; lean_object* v_res_442_; 
v_platformIndependent_boxed_441_ = lean_unbox(v_platformIndependent_438_);
v_res_442_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0(v_inputName_434_, v_lineNo_435_, v_cache_436_, v_line_437_, v_platformIndependent_boxed_441_, v___y_439_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg(lean_object* v___x_443_, lean_object* v___x_444_, lean_object* v_contents_445_, lean_object* v_a_446_, lean_object* v_b_447_){
_start:
{
lean_object* v_startInclusive_448_; lean_object* v_endExclusive_449_; lean_object* v___x_450_; uint8_t v___x_451_; 
v_startInclusive_448_ = lean_ctor_get(v___x_443_, 1);
v_endExclusive_449_ = lean_ctor_get(v___x_443_, 2);
v___x_450_ = lean_nat_sub(v_endExclusive_449_, v_startInclusive_448_);
v___x_451_ = lean_nat_dec_eq(v_a_446_, v___x_450_);
lean_dec(v___x_450_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; uint32_t v___x_453_; uint32_t v___x_454_; uint8_t v___x_455_; 
lean_dec(v_b_447_);
v___x_452_ = lean_nat_add(v___x_444_, v_a_446_);
v___x_453_ = lean_string_utf8_get_fast(v_contents_445_, v___x_452_);
v___x_454_ = 10;
v___x_455_ = lean_uint32_dec_eq(v___x_453_, v___x_454_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
lean_dec(v_a_446_);
v___x_456_ = lean_box(0);
v___x_457_ = lean_string_utf8_next_fast(v_contents_445_, v___x_452_);
lean_dec(v___x_452_);
v___x_458_ = lean_nat_sub(v___x_457_, v___x_444_);
v_a_446_ = v___x_458_;
v_b_447_ = v___x_456_;
goto _start;
}
else
{
lean_object* v___x_460_; 
lean_dec(v___x_452_);
v___x_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_460_, 0, v_a_446_);
return v___x_460_;
}
}
else
{
lean_dec(v_a_446_);
return v_b_447_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg___boxed(lean_object* v___x_461_, lean_object* v___x_462_, lean_object* v_contents_463_, lean_object* v_a_464_, lean_object* v_b_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg(v___x_461_, v___x_462_, v_contents_463_, v_a_464_, v_b_465_);
lean_dec_ref(v_contents_463_);
lean_dec(v___x_462_);
lean_dec_ref(v___x_461_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(lean_object* v_a_467_, lean_object* v_inputName_468_, uint8_t v_platformIndependent_469_, lean_object* v_i_470_, lean_object* v_cache_471_, lean_object* v_contents_472_, lean_object* v_pos_473_){
_start:
{
lean_object* v___y_476_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v_searcher_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_495_ = lean_string_utf8_byte_size(v_contents_472_);
lean_inc(v_pos_473_);
lean_inc_ref(v_contents_472_);
v___x_496_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_496_, 0, v_contents_472_);
lean_ctor_set(v___x_496_, 1, v_pos_473_);
lean_ctor_set(v___x_496_, 2, v___x_495_);
v_searcher_497_ = lean_unsigned_to_nat(0u);
v___x_498_ = lean_box(0);
v___x_499_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg(v___x_496_, v_pos_473_, v_contents_472_, v_searcher_497_, v___x_498_);
lean_dec_ref(v___x_496_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v___x_500_; 
v___x_500_ = lean_nat_sub(v___x_495_, v_pos_473_);
v___y_476_ = v___x_500_;
goto v___jp_475_;
}
else
{
lean_object* v_val_501_; 
v_val_501_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_val_501_);
lean_dec_ref(v___x_499_);
v___y_476_ = v_val_501_;
goto v___jp_475_;
}
v___jp_475_:
{
lean_object* v___x_477_; lean_object* v_line_478_; lean_object* v___x_479_; lean_object* v_startInclusive_480_; lean_object* v_endExclusive_481_; lean_object* v___x_482_; lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_477_ = lean_nat_add(v_pos_473_, v___y_476_);
lean_dec(v___y_476_);
lean_inc(v___x_477_);
lean_inc(v_pos_473_);
lean_inc_ref(v_contents_472_);
v_line_478_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_line_478_, 0, v_contents_472_);
lean_ctor_set(v_line_478_, 1, v_pos_473_);
lean_ctor_set(v_line_478_, 2, v___x_477_);
v___x_479_ = l_String_Slice_trimAscii(v_line_478_);
v_startInclusive_480_ = lean_ctor_get(v___x_479_, 1);
lean_inc(v_startInclusive_480_);
v_endExclusive_481_ = lean_ctor_get(v___x_479_, 2);
lean_inc(v_endExclusive_481_);
lean_dec_ref(v___x_479_);
v___x_482_ = lean_nat_sub(v_endExclusive_481_, v_startInclusive_480_);
lean_dec(v_startInclusive_480_);
lean_dec(v_endExclusive_481_);
v___x_483_ = lean_unsigned_to_nat(0u);
v___x_484_ = lean_nat_dec_eq(v___x_482_, v___x_483_);
lean_dec(v___x_482_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_string_utf8_extract(v_contents_472_, v_pos_473_, v___x_477_);
lean_dec(v_pos_473_);
lean_inc_ref(v_a_467_);
lean_inc(v_i_470_);
lean_inc_ref(v_inputName_468_);
v___x_486_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0(v_inputName_468_, v_i_470_, v_cache_471_, v___x_485_, v_platformIndependent_469_, v_a_467_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___x_488_; uint8_t v___x_489_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
v___x_488_ = lean_string_utf8_byte_size(v_contents_472_);
v___x_489_ = lean_nat_dec_eq(v___x_477_, v___x_488_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
lean_dec_ref(v___x_486_);
v___x_490_ = lean_unsigned_to_nat(1u);
v___x_491_ = lean_nat_add(v_i_470_, v___x_490_);
lean_dec(v_i_470_);
v___x_492_ = lean_string_utf8_next_fast(v_contents_472_, v___x_477_);
lean_dec(v___x_477_);
v_i_470_ = v___x_491_;
v_cache_471_ = v_a_487_;
v_pos_473_ = v___x_492_;
goto _start;
}
else
{
lean_dec(v_a_487_);
lean_dec(v___x_477_);
lean_dec_ref(v_contents_472_);
lean_dec(v_i_470_);
lean_dec_ref(v_inputName_468_);
lean_dec_ref(v_a_467_);
return v___x_486_;
}
}
else
{
lean_dec(v___x_477_);
lean_dec_ref(v_contents_472_);
lean_dec(v_i_470_);
lean_dec_ref(v_inputName_468_);
lean_dec_ref(v_a_467_);
return v___x_486_;
}
}
else
{
lean_object* v___x_494_; 
lean_dec(v___x_477_);
lean_dec(v_pos_473_);
lean_dec_ref(v_contents_472_);
lean_dec(v_i_470_);
lean_dec_ref(v_inputName_468_);
lean_dec_ref(v_a_467_);
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v_cache_471_);
return v___x_494_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___boxed(lean_object* v_a_502_, lean_object* v_inputName_503_, lean_object* v_platformIndependent_504_, lean_object* v_i_505_, lean_object* v_cache_506_, lean_object* v_contents_507_, lean_object* v_pos_508_, lean_object* v_a_509_){
_start:
{
uint8_t v_platformIndependent_boxed_510_; lean_object* v_res_511_; 
v_platformIndependent_boxed_510_ = lean_unbox(v_platformIndependent_504_);
v_res_511_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(v_a_502_, v_inputName_503_, v_platformIndependent_boxed_510_, v_i_505_, v_cache_506_, v_contents_507_, v_pos_508_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg(lean_object* v___x_512_, lean_object* v___x_513_, lean_object* v_contents_514_, lean_object* v_a_515_, lean_object* v_b_516_){
_start:
{
lean_object* v_startInclusive_517_; lean_object* v_endExclusive_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v_startInclusive_517_ = lean_ctor_get(v___x_512_, 1);
v_endExclusive_518_ = lean_ctor_get(v___x_512_, 2);
v___x_519_ = lean_nat_sub(v_endExclusive_518_, v_startInclusive_517_);
v___x_520_ = lean_nat_dec_eq(v_a_515_, v___x_519_);
lean_dec(v___x_519_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; uint32_t v___x_522_; uint32_t v___x_523_; uint8_t v___x_524_; 
lean_dec(v_b_516_);
v___x_521_ = lean_nat_add(v___x_513_, v_a_515_);
v___x_522_ = lean_string_utf8_get_fast(v_contents_514_, v___x_521_);
v___x_523_ = 10;
v___x_524_ = lean_uint32_dec_eq(v___x_522_, v___x_523_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
lean_dec(v_a_515_);
v___x_525_ = lean_box(0);
v___x_526_ = lean_string_utf8_next_fast(v_contents_514_, v___x_521_);
lean_dec(v___x_521_);
v___x_527_ = lean_nat_sub(v___x_526_, v___x_513_);
v_a_515_ = v___x_527_;
v_b_516_ = v___x_525_;
goto _start;
}
else
{
lean_object* v___x_529_; 
lean_dec(v___x_521_);
v___x_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_529_, 0, v_a_515_);
return v___x_529_;
}
}
else
{
lean_dec(v_a_515_);
return v_b_516_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg___boxed(lean_object* v___x_530_, lean_object* v___x_531_, lean_object* v_contents_532_, lean_object* v_a_533_, lean_object* v_b_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg(v___x_530_, v___x_531_, v_contents_532_, v_a_533_, v_b_534_);
lean_dec_ref(v_contents_532_);
lean_dec(v___x_531_);
lean_dec_ref(v___x_530_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop(lean_object* v_inputName_536_, uint8_t v_platformIndependent_537_, lean_object* v_i_538_, lean_object* v_cache_539_, lean_object* v_contents_540_, lean_object* v_pos_541_, lean_object* v_a_542_){
_start:
{
lean_object* v___y_545_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v_searcher_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_564_ = lean_string_utf8_byte_size(v_contents_540_);
lean_inc(v_pos_541_);
lean_inc_ref(v_contents_540_);
v___x_565_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_565_, 0, v_contents_540_);
lean_ctor_set(v___x_565_, 1, v_pos_541_);
lean_ctor_set(v___x_565_, 2, v___x_564_);
v_searcher_566_ = lean_unsigned_to_nat(0u);
v___x_567_ = lean_box(0);
v___x_568_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg(v___x_565_, v_pos_541_, v_contents_540_, v_searcher_566_, v___x_567_);
lean_dec_ref(v___x_565_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v___x_569_; 
v___x_569_ = lean_nat_sub(v___x_564_, v_pos_541_);
v___y_545_ = v___x_569_;
goto v___jp_544_;
}
else
{
lean_object* v_val_570_; 
v_val_570_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_val_570_);
lean_dec_ref(v___x_568_);
v___y_545_ = v_val_570_;
goto v___jp_544_;
}
v___jp_544_:
{
lean_object* v___x_546_; lean_object* v_line_547_; lean_object* v___x_548_; lean_object* v_startInclusive_549_; lean_object* v_endExclusive_550_; lean_object* v___x_551_; lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_546_ = lean_nat_add(v_pos_541_, v___y_545_);
lean_dec(v___y_545_);
lean_inc(v___x_546_);
lean_inc(v_pos_541_);
lean_inc_ref(v_contents_540_);
v_line_547_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_line_547_, 0, v_contents_540_);
lean_ctor_set(v_line_547_, 1, v_pos_541_);
lean_ctor_set(v_line_547_, 2, v___x_546_);
v___x_548_ = l_String_Slice_trimAscii(v_line_547_);
v_startInclusive_549_ = lean_ctor_get(v___x_548_, 1);
lean_inc(v_startInclusive_549_);
v_endExclusive_550_ = lean_ctor_get(v___x_548_, 2);
lean_inc(v_endExclusive_550_);
lean_dec_ref(v___x_548_);
v___x_551_ = lean_nat_sub(v_endExclusive_550_, v_startInclusive_549_);
lean_dec(v_startInclusive_549_);
lean_dec(v_endExclusive_550_);
v___x_552_ = lean_unsigned_to_nat(0u);
v___x_553_ = lean_nat_dec_eq(v___x_551_, v___x_552_);
lean_dec(v___x_551_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = lean_string_utf8_extract(v_contents_540_, v_pos_541_, v___x_546_);
lean_dec(v_pos_541_);
lean_inc_ref(v_a_542_);
lean_inc(v_i_538_);
lean_inc_ref(v_inputName_536_);
v___x_555_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0(v_inputName_536_, v_i_538_, v_cache_539_, v___x_554_, v_platformIndependent_537_, v_a_542_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v___x_557_; uint8_t v___x_558_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_556_);
v___x_557_ = lean_string_utf8_byte_size(v_contents_540_);
v___x_558_ = lean_nat_dec_eq(v___x_546_, v___x_557_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec_ref(v___x_555_);
v___x_559_ = lean_unsigned_to_nat(1u);
v___x_560_ = lean_nat_add(v_i_538_, v___x_559_);
lean_dec(v_i_538_);
v___x_561_ = lean_string_utf8_next_fast(v_contents_540_, v___x_546_);
lean_dec(v___x_546_);
v___x_562_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(v_a_542_, v_inputName_536_, v_platformIndependent_537_, v___x_560_, v_a_556_, v_contents_540_, v___x_561_);
return v___x_562_;
}
else
{
lean_dec(v_a_556_);
lean_dec(v___x_546_);
lean_dec_ref(v_a_542_);
lean_dec_ref(v_contents_540_);
lean_dec(v_i_538_);
lean_dec_ref(v_inputName_536_);
return v___x_555_;
}
}
else
{
lean_dec(v___x_546_);
lean_dec_ref(v_a_542_);
lean_dec_ref(v_contents_540_);
lean_dec(v_i_538_);
lean_dec_ref(v_inputName_536_);
return v___x_555_;
}
}
else
{
lean_object* v___x_563_; 
lean_dec(v___x_546_);
lean_dec_ref(v_a_542_);
lean_dec(v_pos_541_);
lean_dec_ref(v_contents_540_);
lean_dec(v_i_538_);
lean_dec_ref(v_inputName_536_);
v___x_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_563_, 0, v_cache_539_);
return v___x_563_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___boxed(lean_object* v_inputName_571_, lean_object* v_platformIndependent_572_, lean_object* v_i_573_, lean_object* v_cache_574_, lean_object* v_contents_575_, lean_object* v_pos_576_, lean_object* v_a_577_, lean_object* v_a_578_){
_start:
{
uint8_t v_platformIndependent_boxed_579_; lean_object* v_res_580_; 
v_platformIndependent_boxed_579_ = lean_unbox(v_platformIndependent_572_);
v_res_580_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop(v_inputName_571_, v_platformIndependent_boxed_579_, v_i_573_, v_cache_574_, v_contents_575_, v_pos_576_, v_a_577_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2(lean_object* v___x_581_, lean_object* v___x_582_, lean_object* v_contents_583_, lean_object* v_inst_584_, lean_object* v_R_585_, lean_object* v_a_586_, lean_object* v_b_587_, lean_object* v_c_588_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg(v___x_581_, v___x_582_, v_contents_583_, v_a_586_, v_b_587_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___boxed(lean_object* v___x_590_, lean_object* v___x_591_, lean_object* v_contents_592_, lean_object* v_inst_593_, lean_object* v_R_594_, lean_object* v_a_595_, lean_object* v_b_596_, lean_object* v_c_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2(v___x_590_, v___x_591_, v_contents_592_, v_inst_593_, v_R_594_, v_a_595_, v_b_596_, v_c_597_);
lean_dec_ref(v_contents_592_);
lean_dec(v___x_591_);
lean_dec_ref(v___x_590_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1(lean_object* v___x_599_, lean_object* v___x_600_, lean_object* v_contents_601_, lean_object* v_inst_602_, lean_object* v_R_603_, lean_object* v_a_604_, lean_object* v_b_605_, lean_object* v_c_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg(v___x_599_, v___x_600_, v_contents_601_, v_a_604_, v_b_605_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___boxed(lean_object* v___x_608_, lean_object* v___x_609_, lean_object* v_contents_610_, lean_object* v_inst_611_, lean_object* v_R_612_, lean_object* v_a_613_, lean_object* v_b_614_, lean_object* v_c_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1(v___x_608_, v___x_609_, v_contents_610_, v_inst_611_, v_R_612_, v_a_613_, v_b_614_, v_c_615_);
lean_dec_ref(v_contents_610_);
lean_dec(v___x_609_);
lean_dec_ref(v___x_608_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___redArg(lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = lean_apply_2(v___y_618_, v___y_617_, lean_box(0));
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___redArg___boxed(lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lake_CacheMap_parse___elam__0___redArg(v___y_622_, v___y_623_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0(lean_object* v_x_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l_Lake_CacheMap_parse___elam__0___redArg(v___y_627_, v___y_628_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___boxed(lean_object* v_x_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_Lake_CacheMap_parse___elam__0(v_x_631_, v___y_632_, v___y_633_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2___redArg(lean_object* v___x_636_, lean_object* v_contents_637_, lean_object* v_a_638_, lean_object* v_b_639_){
_start:
{
lean_object* v_startInclusive_640_; lean_object* v_endExclusive_641_; lean_object* v___x_642_; uint8_t v___x_643_; 
v_startInclusive_640_ = lean_ctor_get(v___x_636_, 1);
v_endExclusive_641_ = lean_ctor_get(v___x_636_, 2);
v___x_642_ = lean_nat_sub(v_endExclusive_641_, v_startInclusive_640_);
v___x_643_ = lean_nat_dec_eq(v_a_638_, v___x_642_);
lean_dec(v___x_642_);
if (v___x_643_ == 0)
{
uint32_t v___x_644_; uint32_t v___x_645_; uint8_t v___x_646_; 
lean_dec(v_b_639_);
v___x_644_ = lean_string_utf8_get_fast(v_contents_637_, v_a_638_);
v___x_645_ = 10;
v___x_646_ = lean_uint32_dec_eq(v___x_644_, v___x_645_);
if (v___x_646_ == 0)
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_box(0);
v___x_648_ = lean_string_utf8_next_fast(v_contents_637_, v_a_638_);
lean_dec(v_a_638_);
v_a_638_ = v___x_648_;
v_b_639_ = v___x_647_;
goto _start;
}
else
{
lean_object* v___x_650_; 
v___x_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_650_, 0, v_a_638_);
return v___x_650_;
}
}
else
{
lean_dec(v_a_638_);
return v_b_639_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2___redArg___boxed(lean_object* v___x_651_, lean_object* v_contents_652_, lean_object* v_a_653_, lean_object* v_b_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2___redArg(v___x_651_, v_contents_652_, v_a_653_, v_b_654_);
lean_dec_ref(v_contents_652_);
lean_dec_ref(v___x_651_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1___redArg(lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = lean_apply_2(v___y_656_, v___y_657_, lean_box(0));
v___x_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1___redArg___boxed(lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1___redArg(v___y_661_, v___y_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(lean_object* v_as_665_, size_t v_i_666_, size_t v_stop_667_, lean_object* v_b_668_, lean_object* v___y_669_){
_start:
{
uint8_t v___x_671_; 
v___x_671_ = lean_usize_dec_eq(v_i_666_, v_stop_667_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = lean_array_uget_borrowed(v_as_665_, v_i_666_);
lean_inc(v___x_672_);
lean_inc_ref(v___y_669_);
v___x_673_ = l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1___redArg(v___y_669_, v___x_672_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; size_t v___x_675_; size_t v___x_676_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_a_674_);
lean_dec_ref(v___x_673_);
v___x_675_ = ((size_t)1ULL);
v___x_676_ = lean_usize_add(v_i_666_, v___x_675_);
v_i_666_ = v___x_676_;
v_b_668_ = v_a_674_;
goto _start;
}
else
{
lean_dec_ref(v___y_669_);
return v___x_673_;
}
}
else
{
lean_object* v___x_678_; 
lean_dec_ref(v___y_669_);
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v_b_668_);
return v___x_678_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1___boxed(lean_object* v_as_679_, lean_object* v_i_680_, lean_object* v_stop_681_, lean_object* v_b_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
size_t v_i_boxed_685_; size_t v_stop_boxed_686_; lean_object* v_res_687_; 
v_i_boxed_685_ = lean_unbox_usize(v_i_680_);
lean_dec(v_i_680_);
v_stop_boxed_686_ = lean_unbox_usize(v_stop_681_);
lean_dec(v_stop_681_);
v_res_687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_as_679_, v_i_boxed_685_, v_stop_boxed_686_, v_b_682_, v___y_683_);
lean_dec_ref(v_as_679_);
return v_res_687_;
}
}
static lean_object* _init_l_Lake_CacheMap_parse___closed__0(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_688_ = lean_box(0);
v___x_689_ = lean_unsigned_to_nat(16u);
v___x_690_ = lean_mk_array(v___x_689_, v___x_688_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse(lean_object* v_inputName_693_, lean_object* v_contents_694_, uint8_t v_platformIndependent_695_, lean_object* v_a_696_){
_start:
{
lean_object* v___y_702_; uint8_t v___y_703_; lean_object* v___y_704_; lean_object* v___y_714_; uint8_t v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_727_; lean_object* v_searcher_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v_searcher_763_ = lean_unsigned_to_nat(0u);
v___x_764_ = lean_string_utf8_byte_size(v_contents_694_);
lean_inc_ref(v_contents_694_);
v___x_765_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_765_, 0, v_contents_694_);
lean_ctor_set(v___x_765_, 1, v_searcher_763_);
lean_ctor_set(v___x_765_, 2, v___x_764_);
v___x_766_ = lean_box(0);
v___x_767_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2___redArg(v___x_765_, v_contents_694_, v_searcher_763_, v___x_766_);
lean_dec_ref(v___x_765_);
if (lean_obj_tag(v___x_767_) == 0)
{
v___y_727_ = v___x_764_;
goto v___jp_726_;
}
else
{
lean_object* v_val_768_; 
v_val_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_val_768_);
lean_dec_ref(v___x_767_);
v___y_727_ = v_val_768_;
goto v___jp_726_;
}
v___jp_698_:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = lean_box(0);
v___x_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
return v___x_700_;
}
v___jp_701_:
{
if (v___y_703_ == 0)
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_705_ = lean_unsigned_to_nat(2u);
v___x_706_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__0, &l_Lake_CacheMap_parse___closed__0_once, _init_l_Lake_CacheMap_parse___closed__0);
v___x_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_707_, 0, v___y_704_);
lean_ctor_set(v___x_707_, 1, v___x_706_);
v___x_708_ = lean_string_utf8_next_fast(v_contents_694_, v___y_702_);
lean_dec(v___y_702_);
v___x_709_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(v_a_696_, v_inputName_693_, v_platformIndependent_695_, v___x_705_, v___x_707_, v_contents_694_, v___x_708_);
return v___x_709_;
}
else
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
lean_dec(v___y_702_);
lean_dec_ref(v_a_696_);
lean_dec_ref(v_contents_694_);
lean_dec_ref(v_inputName_693_);
v___x_710_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__0, &l_Lake_CacheMap_parse___closed__0_once, _init_l_Lake_CacheMap_parse___closed__0);
v___x_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_711_, 0, v___y_704_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
return v___x_712_;
}
}
v___jp_713_:
{
if (lean_obj_tag(v___y_717_) == 0)
{
lean_dec_ref(v___y_717_);
v___y_702_ = v___y_714_;
v___y_703_ = v___y_715_;
v___y_704_ = v___y_716_;
goto v___jp_701_;
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec(v___y_716_);
lean_dec(v___y_714_);
lean_dec_ref(v_a_696_);
lean_dec_ref(v_contents_694_);
lean_dec_ref(v_inputName_693_);
v_a_718_ = lean_ctor_get(v___y_717_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___y_717_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___y_717_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___y_717_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
}
v___jp_726_:
{
lean_object* v___x_728_; lean_object* v_line_729_; lean_object* v___x_730_; lean_object* v_str_731_; lean_object* v_startInclusive_732_; lean_object* v_endExclusive_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_728_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_727_);
lean_inc_ref(v_contents_694_);
v_line_729_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_line_729_, 0, v_contents_694_);
lean_ctor_set(v_line_729_, 1, v___x_728_);
lean_ctor_set(v_line_729_, 2, v___y_727_);
v___x_730_ = l_String_Slice_trimAscii(v_line_729_);
v_str_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc_ref(v_str_731_);
v_startInclusive_732_ = lean_ctor_get(v___x_730_, 1);
lean_inc(v_startInclusive_732_);
v_endExclusive_733_ = lean_ctor_get(v___x_730_, 2);
lean_inc(v_endExclusive_733_);
lean_dec_ref(v___x_730_);
v___x_734_ = lean_string_utf8_extract(v_str_731_, v_startInclusive_732_, v_endExclusive_733_);
lean_dec(v_endExclusive_733_);
lean_dec(v_startInclusive_732_);
lean_dec_ref(v_str_731_);
v___x_735_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
lean_inc_ref(v_inputName_693_);
v___x_736_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_inputName_693_, v___x_734_, v___x_735_);
v___x_737_ = lean_string_utf8_byte_size(v_contents_694_);
v___x_738_ = lean_nat_dec_eq(v___y_727_, v___x_737_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v_a_739_ = lean_ctor_get(v___x_736_, 1);
lean_inc(v_a_739_);
lean_dec_ref(v___x_736_);
v___x_740_ = lean_array_get_size(v_a_739_);
v___x_741_ = lean_nat_dec_lt(v___x_728_, v___x_740_);
if (v___x_741_ == 0)
{
lean_dec(v_a_739_);
v___y_702_ = v___y_727_;
v___y_703_ = v___x_738_;
v___y_704_ = v___x_728_;
goto v___jp_701_;
}
else
{
lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_742_ = lean_box(0);
v___x_743_ = lean_nat_dec_le(v___x_740_, v___x_740_);
if (v___x_743_ == 0)
{
if (v___x_741_ == 0)
{
lean_dec(v_a_739_);
v___y_702_ = v___y_727_;
v___y_703_ = v___x_738_;
v___y_704_ = v___x_728_;
goto v___jp_701_;
}
else
{
size_t v___x_744_; size_t v___x_745_; lean_object* v___x_746_; 
v___x_744_ = ((size_t)0ULL);
v___x_745_ = lean_usize_of_nat(v___x_740_);
lean_inc_ref(v_a_696_);
v___x_746_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_739_, v___x_744_, v___x_745_, v___x_742_, v_a_696_);
lean_dec(v_a_739_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_dec_ref(v___x_746_);
v___y_702_ = v___y_727_;
v___y_703_ = v___x_738_;
v___y_704_ = v___x_728_;
goto v___jp_701_;
}
else
{
v___y_714_ = v___y_727_;
v___y_715_ = v___x_738_;
v___y_716_ = v___x_728_;
v___y_717_ = v___x_746_;
goto v___jp_713_;
}
}
}
else
{
size_t v___x_747_; size_t v___x_748_; lean_object* v___x_749_; 
v___x_747_ = ((size_t)0ULL);
v___x_748_ = lean_usize_of_nat(v___x_740_);
lean_inc_ref(v_a_696_);
v___x_749_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_739_, v___x_747_, v___x_748_, v___x_742_, v_a_696_);
lean_dec(v_a_739_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_dec_ref(v___x_749_);
v___y_702_ = v___y_727_;
v___y_703_ = v___x_738_;
v___y_704_ = v___x_728_;
goto v___jp_701_;
}
else
{
v___y_714_ = v___y_727_;
v___y_715_ = v___x_738_;
v___y_716_ = v___x_728_;
v___y_717_ = v___x_749_;
goto v___jp_713_;
}
}
}
}
else
{
lean_object* v_a_750_; lean_object* v___x_751_; uint8_t v___x_752_; 
v_a_750_ = lean_ctor_get(v___x_736_, 1);
lean_inc(v_a_750_);
lean_dec_ref(v___x_736_);
v___x_751_ = lean_array_get_size(v_a_750_);
v___x_752_ = lean_nat_dec_lt(v___x_728_, v___x_751_);
if (v___x_752_ == 0)
{
lean_object* v___x_753_; lean_object* v___x_754_; 
lean_dec(v_a_750_);
lean_dec(v___y_727_);
lean_dec_ref(v_a_696_);
lean_dec_ref(v_contents_694_);
lean_dec_ref(v_inputName_693_);
v___x_753_ = lean_box(0);
v___x_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
return v___x_754_;
}
else
{
lean_object* v___x_755_; uint8_t v___x_756_; 
v___x_755_ = lean_box(0);
v___x_756_ = lean_nat_dec_le(v___x_751_, v___x_751_);
if (v___x_756_ == 0)
{
if (v___x_752_ == 0)
{
lean_dec(v_a_750_);
lean_dec(v___y_727_);
lean_dec_ref(v_a_696_);
lean_dec_ref(v_contents_694_);
lean_dec_ref(v_inputName_693_);
goto v___jp_698_;
}
else
{
size_t v___x_757_; size_t v___x_758_; lean_object* v___x_759_; 
v___x_757_ = ((size_t)0ULL);
v___x_758_ = lean_usize_of_nat(v___x_751_);
lean_inc_ref(v_a_696_);
v___x_759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_750_, v___x_757_, v___x_758_, v___x_755_, v_a_696_);
lean_dec(v_a_750_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_dec_ref(v___x_759_);
lean_dec(v___y_727_);
lean_dec_ref(v_a_696_);
lean_dec_ref(v_contents_694_);
lean_dec_ref(v_inputName_693_);
goto v___jp_698_;
}
else
{
v___y_714_ = v___y_727_;
v___y_715_ = v___x_738_;
v___y_716_ = v___x_728_;
v___y_717_ = v___x_759_;
goto v___jp_713_;
}
}
}
else
{
size_t v___x_760_; size_t v___x_761_; lean_object* v___x_762_; 
v___x_760_ = ((size_t)0ULL);
v___x_761_ = lean_usize_of_nat(v___x_751_);
lean_inc_ref(v_a_696_);
v___x_762_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_750_, v___x_760_, v___x_761_, v___x_755_, v_a_696_);
lean_dec(v_a_750_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_dec_ref(v___x_762_);
lean_dec(v___y_727_);
lean_dec_ref(v_a_696_);
lean_dec_ref(v_contents_694_);
lean_dec_ref(v_inputName_693_);
goto v___jp_698_;
}
else
{
v___y_714_ = v___y_727_;
v___y_715_ = v___x_738_;
v___y_716_ = v___x_728_;
v___y_717_ = v___x_762_;
goto v___jp_713_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___boxed(lean_object* v_inputName_769_, lean_object* v_contents_770_, lean_object* v_platformIndependent_771_, lean_object* v_a_772_, lean_object* v_a_773_){
_start:
{
uint8_t v_platformIndependent_boxed_774_; lean_object* v_res_775_; 
v_platformIndependent_boxed_774_ = lean_unbox(v_platformIndependent_771_);
v_res_775_ = l_Lake_CacheMap_parse(v_inputName_769_, v_contents_770_, v_platformIndependent_boxed_774_, v_a_772_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1(lean_object* v___y_776_, lean_object* v_x_777_, lean_object* v___y_778_){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1___redArg(v___y_776_, v___y_778_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1___boxed(lean_object* v___y_781_, lean_object* v_x_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_Lake_CacheMap_parse___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1_spec__1(v___y_781_, v_x_782_, v___y_783_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2(lean_object* v___x_786_, lean_object* v_contents_787_, lean_object* v_inst_788_, lean_object* v_R_789_, lean_object* v_a_790_, lean_object* v_b_791_, lean_object* v_c_792_){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2___redArg(v___x_786_, v_contents_787_, v_a_790_, v_b_791_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2___boxed(lean_object* v___x_794_, lean_object* v_contents_795_, lean_object* v_inst_796_, lean_object* v_R_797_, lean_object* v_a_798_, lean_object* v_b_799_, lean_object* v_c_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__2(v___x_794_, v_contents_795_, v_inst_796_, v_R_797_, v_a_798_, v_b_799_, v_c_800_);
lean_dec_ref(v_contents_795_);
lean_dec_ref(v___x_794_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(lean_object* v_inputName_802_, lean_object* v_lineNo_803_, lean_object* v_cache_804_, lean_object* v_line_805_, uint8_t v_platformIndependent_806_, lean_object* v___y_807_){
_start:
{
lean_object* v___x_809_; 
lean_inc_ref(v_cache_804_);
v___x_809_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(v_cache_804_, v_line_805_, v_platformIndependent_806_);
if (lean_obj_tag(v___x_809_) == 0)
{
lean_object* v_a_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; uint8_t v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v_a_810_ = lean_ctor_get(v___x_809_, 0);
lean_inc(v_a_810_);
lean_dec_ref(v___x_809_);
v___x_811_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0));
v___x_812_ = lean_string_append(v_inputName_802_, v___x_811_);
v___x_813_ = l_Nat_reprFast(v_lineNo_803_);
v___x_814_ = lean_string_append(v___x_812_, v___x_813_);
lean_dec_ref(v___x_813_);
v___x_815_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_816_ = lean_string_append(v___x_814_, v___x_815_);
v___x_817_ = lean_string_append(v___x_816_, v_a_810_);
lean_dec(v_a_810_);
v___x_818_ = 2;
v___x_819_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_819_, 0, v___x_817_);
lean_ctor_set_uint8(v___x_819_, sizeof(void*)*1, v___x_818_);
v___x_820_ = lean_array_push(v___y_807_, v___x_819_);
v___x_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_821_, 0, v_cache_804_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
return v___x_821_;
}
else
{
lean_object* v_a_822_; lean_object* v___x_823_; 
lean_dec_ref(v_cache_804_);
lean_dec(v_lineNo_803_);
lean_dec_ref(v_inputName_802_);
v_a_822_ = lean_ctor_get(v___x_809_, 0);
lean_inc(v_a_822_);
lean_dec_ref(v___x_809_);
v___x_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_823_, 0, v_a_822_);
lean_ctor_set(v___x_823_, 1, v___y_807_);
return v___x_823_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0___boxed(lean_object* v_inputName_824_, lean_object* v_lineNo_825_, lean_object* v_cache_826_, lean_object* v_line_827_, lean_object* v_platformIndependent_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
uint8_t v_platformIndependent_boxed_831_; lean_object* v_res_832_; 
v_platformIndependent_boxed_831_ = lean_unbox(v_platformIndependent_828_);
v_res_832_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(v_inputName_824_, v_lineNo_825_, v_cache_826_, v_line_827_, v_platformIndependent_boxed_831_, v___y_829_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(lean_object* v_h_833_, lean_object* v_fileName_834_, uint8_t v_platformIndependent_835_, lean_object* v_i_836_, lean_object* v_cache_837_, lean_object* v_a_838_){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = lean_io_prim_handle_get_line(v_h_833_);
if (lean_obj_tag(v___x_840_) == 0)
{
lean_object* v_a_841_; lean_object* v___x_842_; lean_object* v___x_843_; uint8_t v___x_844_; 
v_a_841_ = lean_ctor_get(v___x_840_, 0);
lean_inc(v_a_841_);
lean_dec_ref(v___x_840_);
v___x_842_ = lean_string_utf8_byte_size(v_a_841_);
v___x_843_ = lean_unsigned_to_nat(0u);
v___x_844_ = lean_nat_dec_eq(v___x_842_, v___x_843_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; 
lean_inc(v_i_836_);
lean_inc_ref(v_fileName_834_);
v___x_845_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(v_fileName_834_, v_i_836_, v_cache_837_, v_a_841_, v_platformIndependent_835_, v_a_838_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; lean_object* v_a_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v_a_846_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_846_);
v_a_847_ = lean_ctor_get(v___x_845_, 1);
lean_inc(v_a_847_);
lean_dec_ref(v___x_845_);
v___x_848_ = lean_unsigned_to_nat(1u);
v___x_849_ = lean_nat_add(v_i_836_, v___x_848_);
lean_dec(v_i_836_);
v_i_836_ = v___x_849_;
v_cache_837_ = v_a_846_;
v_a_838_ = v_a_847_;
goto _start;
}
else
{
lean_dec(v_i_836_);
lean_dec_ref(v_fileName_834_);
return v___x_845_;
}
}
else
{
lean_object* v___x_851_; 
lean_dec(v_a_841_);
lean_dec(v_i_836_);
lean_dec_ref(v_fileName_834_);
v___x_851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_851_, 0, v_cache_837_);
lean_ctor_set(v___x_851_, 1, v_a_838_);
return v___x_851_;
}
}
else
{
lean_object* v_a_852_; lean_object* v___x_853_; uint8_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
lean_dec_ref(v_cache_837_);
lean_dec(v_i_836_);
lean_dec_ref(v_fileName_834_);
v_a_852_ = lean_ctor_get(v___x_840_, 0);
lean_inc(v_a_852_);
lean_dec_ref(v___x_840_);
v___x_853_ = lean_io_error_to_string(v_a_852_);
v___x_854_ = 3;
v___x_855_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_855_, 0, v___x_853_);
lean_ctor_set_uint8(v___x_855_, sizeof(void*)*1, v___x_854_);
v___x_856_ = lean_array_get_size(v_a_838_);
v___x_857_ = lean_array_push(v_a_838_, v___x_855_);
v___x_858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_856_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
return v___x_858_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop___boxed(lean_object* v_h_859_, lean_object* v_fileName_860_, lean_object* v_platformIndependent_861_, lean_object* v_i_862_, lean_object* v_cache_863_, lean_object* v_a_864_, lean_object* v_a_865_){
_start:
{
uint8_t v_platformIndependent_boxed_866_; lean_object* v_res_867_; 
v_platformIndependent_boxed_866_ = lean_unbox(v_platformIndependent_861_);
v_res_867_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_h_859_, v_fileName_860_, v_platformIndependent_boxed_866_, v_i_862_, v_cache_863_, v_a_864_);
lean_dec(v_h_859_);
return v_res_867_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_868_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__0, &l_Lake_CacheMap_parse___closed__0_once, _init_l_Lake_CacheMap_parse___closed__0);
v___x_869_ = lean_unsigned_to_nat(0u);
v___x_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
lean_ctor_set(v___x_870_, 1, v___x_868_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(lean_object* v_h_871_, lean_object* v_fileName_872_, uint8_t v_platformIndependent_873_, lean_object* v_a_874_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = lean_io_prim_handle_get_line(v_h_871_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_878_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref(v___x_876_);
lean_inc_ref(v_fileName_872_);
v___x_878_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_fileName_872_, v_a_877_, v_a_874_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v_a_879_ = lean_ctor_get(v___x_878_, 1);
lean_inc(v_a_879_);
lean_dec_ref(v___x_878_);
v___x_880_ = lean_unsigned_to_nat(2u);
v___x_881_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0, &l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0);
v___x_882_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_h_871_, v_fileName_872_, v_platformIndependent_873_, v___x_880_, v___x_881_, v_a_879_);
return v___x_882_;
}
else
{
lean_object* v_a_883_; lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
lean_dec_ref(v_fileName_872_);
v_a_883_ = lean_ctor_get(v___x_878_, 0);
v_a_884_ = lean_ctor_get(v___x_878_, 1);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_891_ == 0)
{
v___x_886_ = v___x_878_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_inc(v_a_883_);
lean_dec(v___x_878_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_883_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v_a_884_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
else
{
lean_object* v_a_892_; lean_object* v___x_893_; uint8_t v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
lean_dec_ref(v_fileName_872_);
v_a_892_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_892_);
lean_dec_ref(v___x_876_);
v___x_893_ = lean_io_error_to_string(v_a_892_);
v___x_894_ = 3;
v___x_895_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_895_, 0, v___x_893_);
lean_ctor_set_uint8(v___x_895_, sizeof(void*)*1, v___x_894_);
v___x_896_ = lean_array_get_size(v_a_874_);
v___x_897_ = lean_array_push(v_a_874_, v___x_895_);
v___x_898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_896_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
return v___x_898_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___boxed(lean_object* v_h_899_, lean_object* v_fileName_900_, lean_object* v_platformIndependent_901_, lean_object* v_a_902_, lean_object* v_a_903_){
_start:
{
uint8_t v_platformIndependent_boxed_904_; lean_object* v_res_905_; 
v_platformIndependent_boxed_904_ = lean_unbox(v_platformIndependent_901_);
v_res_905_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(v_h_899_, v_fileName_900_, v_platformIndependent_boxed_904_, v_a_902_);
lean_dec(v_h_899_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load(lean_object* v_file_907_, uint8_t v_platformIndependent_908_, lean_object* v_a_909_){
_start:
{
uint8_t v___x_911_; lean_object* v___x_912_; 
v___x_911_ = 0;
v___x_912_ = lean_io_prim_handle_mk(v_file_907_, v___x_911_);
if (lean_obj_tag(v___x_912_) == 0)
{
lean_object* v_a_913_; uint8_t v___x_914_; lean_object* v___x_915_; 
v_a_913_ = lean_ctor_get(v___x_912_, 0);
lean_inc(v_a_913_);
lean_dec_ref(v___x_912_);
v___x_914_ = 0;
v___x_915_ = lean_io_prim_handle_lock(v_a_913_, v___x_914_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v___x_916_; 
lean_dec_ref(v___x_915_);
v___x_916_ = lean_io_prim_handle_get_line(v_a_913_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_918_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_a_917_);
lean_dec_ref(v___x_916_);
lean_inc_ref(v_file_907_);
v___x_918_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_907_, v_a_917_, v_a_909_);
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v_a_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v_a_919_ = lean_ctor_get(v___x_918_, 1);
lean_inc(v_a_919_);
lean_dec_ref(v___x_918_);
v___x_920_ = lean_unsigned_to_nat(2u);
v___x_921_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0, &l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0);
v___x_922_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_913_, v_file_907_, v_platformIndependent_908_, v___x_920_, v___x_921_, v_a_919_);
lean_dec(v_a_913_);
return v___x_922_;
}
else
{
lean_object* v_a_923_; lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v_a_913_);
lean_dec_ref(v_file_907_);
v_a_923_ = lean_ctor_get(v___x_918_, 0);
v_a_924_ = lean_ctor_get(v___x_918_, 1);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_918_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_inc(v_a_923_);
lean_dec(v___x_918_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_923_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
else
{
lean_object* v_a_932_; lean_object* v___x_933_; uint8_t v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
lean_dec(v_a_913_);
lean_dec_ref(v_file_907_);
v_a_932_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_a_932_);
lean_dec_ref(v___x_916_);
v___x_933_ = lean_io_error_to_string(v_a_932_);
v___x_934_ = 3;
v___x_935_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_935_, 0, v___x_933_);
lean_ctor_set_uint8(v___x_935_, sizeof(void*)*1, v___x_934_);
v___x_936_ = lean_array_get_size(v_a_909_);
v___x_937_ = lean_array_push(v_a_909_, v___x_935_);
v___x_938_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_938_, 0, v___x_936_);
lean_ctor_set(v___x_938_, 1, v___x_937_);
return v___x_938_;
}
}
else
{
lean_object* v_a_939_; lean_object* v___x_940_; uint8_t v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
lean_dec(v_a_913_);
lean_dec_ref(v_file_907_);
v_a_939_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_a_939_);
lean_dec_ref(v___x_915_);
v___x_940_ = lean_io_error_to_string(v_a_939_);
v___x_941_ = 3;
v___x_942_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_942_, 0, v___x_940_);
lean_ctor_set_uint8(v___x_942_, sizeof(void*)*1, v___x_941_);
v___x_943_ = lean_array_get_size(v_a_909_);
v___x_944_ = lean_array_push(v_a_909_, v___x_942_);
v___x_945_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_943_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
return v___x_945_;
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; uint8_t v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v_a_946_ = lean_ctor_get(v___x_912_, 0);
lean_inc(v_a_946_);
lean_dec_ref(v___x_912_);
v___x_947_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_948_ = lean_string_append(v_file_907_, v___x_947_);
v___x_949_ = lean_io_error_to_string(v_a_946_);
v___x_950_ = lean_string_append(v___x_948_, v___x_949_);
lean_dec_ref(v___x_949_);
v___x_951_ = 3;
v___x_952_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set_uint8(v___x_952_, sizeof(void*)*1, v___x_951_);
v___x_953_ = lean_array_get_size(v_a_909_);
v___x_954_ = lean_array_push(v_a_909_, v___x_952_);
v___x_955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_953_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
return v___x_955_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load___boxed(lean_object* v_file_956_, lean_object* v_platformIndependent_957_, lean_object* v_a_958_, lean_object* v_a_959_){
_start:
{
uint8_t v_platformIndependent_boxed_960_; lean_object* v_res_961_; 
v_platformIndependent_boxed_960_ = lean_unbox(v_platformIndependent_957_);
v_res_961_ = l_Lake_CacheMap_load(v_file_956_, v_platformIndependent_boxed_960_, v_a_958_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f(lean_object* v_file_962_, uint8_t v_platformIndependent_963_, lean_object* v_a_964_){
_start:
{
lean_object* v_a_967_; lean_object* v_a_968_; uint8_t v___x_970_; lean_object* v___x_971_; 
v___x_970_ = 0;
v___x_971_ = lean_io_prim_handle_mk(v_file_962_, v___x_970_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v_a_972_; uint8_t v___x_973_; lean_object* v___x_974_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_a_972_);
lean_dec_ref(v___x_971_);
v___x_973_ = 0;
v___x_974_ = lean_io_prim_handle_lock(v_a_972_, v___x_973_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v___x_975_; 
lean_dec_ref(v___x_974_);
v___x_975_ = lean_io_prim_handle_get_line(v_a_972_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_1001_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_978_ = v___x_975_;
v_isShared_979_ = v_isSharedCheck_1001_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_975_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_1001_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_980_; 
lean_inc_ref(v_file_962_);
v___x_980_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_962_, v_a_976_, v_a_964_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v_a_981_ = lean_ctor_get(v___x_980_, 1);
lean_inc(v_a_981_);
lean_dec_ref(v___x_980_);
v___x_982_ = lean_unsigned_to_nat(2u);
v___x_983_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0, &l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0);
v___x_984_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_972_, v_file_962_, v_platformIndependent_963_, v___x_982_, v___x_983_, v_a_981_);
lean_dec(v_a_972_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v_a_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_996_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
v_a_986_ = lean_ctor_get(v___x_984_, 1);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_996_ == 0)
{
v___x_988_ = v___x_984_;
v_isShared_989_ = v_isSharedCheck_996_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_a_986_);
lean_inc(v_a_985_);
lean_dec(v___x_984_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_996_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_979_ == 0)
{
lean_ctor_set_tag(v___x_978_, 1);
lean_ctor_set(v___x_978_, 0, v_a_985_);
v___x_991_ = v___x_978_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_985_);
v___x_991_ = v_reuseFailAlloc_995_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
lean_object* v___x_993_; 
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v___x_991_);
v___x_993_ = v___x_988_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_991_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_a_986_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
else
{
lean_object* v_a_997_; lean_object* v_a_998_; 
lean_del_object(v___x_978_);
v_a_997_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_997_);
v_a_998_ = lean_ctor_get(v___x_984_, 1);
lean_inc(v_a_998_);
lean_dec_ref(v___x_984_);
v_a_967_ = v_a_997_;
v_a_968_ = v_a_998_;
goto v___jp_966_;
}
}
else
{
lean_object* v_a_999_; lean_object* v_a_1000_; 
lean_del_object(v___x_978_);
lean_dec(v_a_972_);
lean_dec_ref(v_file_962_);
v_a_999_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_999_);
v_a_1000_ = lean_ctor_get(v___x_980_, 1);
lean_inc(v_a_1000_);
lean_dec_ref(v___x_980_);
v_a_967_ = v_a_999_;
v_a_968_ = v_a_1000_;
goto v___jp_966_;
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1003_; uint8_t v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_dec(v_a_972_);
lean_dec_ref(v_file_962_);
v_a_1002_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_a_1002_);
lean_dec_ref(v___x_975_);
v___x_1003_ = lean_io_error_to_string(v_a_1002_);
v___x_1004_ = 3;
v___x_1005_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1005_, 0, v___x_1003_);
lean_ctor_set_uint8(v___x_1005_, sizeof(void*)*1, v___x_1004_);
v___x_1006_ = lean_array_get_size(v_a_964_);
v___x_1007_ = lean_array_push(v_a_964_, v___x_1005_);
v_a_967_ = v___x_1006_;
v_a_968_ = v___x_1007_;
goto v___jp_966_;
}
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1009_; uint8_t v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
lean_dec(v_a_972_);
lean_dec_ref(v_file_962_);
v_a_1008_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_1008_);
lean_dec_ref(v___x_974_);
v___x_1009_ = lean_io_error_to_string(v_a_1008_);
v___x_1010_ = 3;
v___x_1011_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1011_, 0, v___x_1009_);
lean_ctor_set_uint8(v___x_1011_, sizeof(void*)*1, v___x_1010_);
v___x_1012_ = lean_array_get_size(v_a_964_);
v___x_1013_ = lean_array_push(v_a_964_, v___x_1011_);
v___x_1014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1012_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
return v___x_1014_;
}
}
else
{
lean_object* v_a_1015_; 
v_a_1015_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_a_1015_);
lean_dec_ref(v___x_971_);
if (lean_obj_tag(v_a_1015_) == 11)
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
lean_dec_ref(v_a_1015_);
lean_dec_ref(v_file_962_);
v___x_1016_ = lean_box(0);
v___x_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
lean_ctor_set(v___x_1017_, 1, v_a_964_);
return v___x_1017_;
}
else
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1018_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_1019_ = lean_string_append(v_file_962_, v___x_1018_);
v___x_1020_ = lean_io_error_to_string(v_a_1015_);
v___x_1021_ = lean_string_append(v___x_1019_, v___x_1020_);
lean_dec_ref(v___x_1020_);
v___x_1022_ = 3;
v___x_1023_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1023_, 0, v___x_1021_);
lean_ctor_set_uint8(v___x_1023_, sizeof(void*)*1, v___x_1022_);
v___x_1024_ = lean_array_get_size(v_a_964_);
v___x_1025_ = lean_array_push(v_a_964_, v___x_1023_);
v___x_1026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
return v___x_1026_;
}
}
v___jp_966_:
{
lean_object* v___x_969_; 
v___x_969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_969_, 0, v_a_967_);
lean_ctor_set(v___x_969_, 1, v_a_968_);
return v___x_969_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f___boxed(lean_object* v_file_1027_, lean_object* v_platformIndependent_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_){
_start:
{
uint8_t v_platformIndependent_boxed_1031_; lean_object* v_res_1032_; 
v_platformIndependent_boxed_1031_ = lean_unbox(v_platformIndependent_1028_);
v_res_1032_ = l_Lake_CacheMap_load_x3f(v_file_1027_, v_platformIndependent_boxed_1031_, v_a_1029_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(lean_object* v_h_1033_, lean_object* v_x_1034_, lean_object* v_x_1035_, lean_object* v___y_1036_){
_start:
{
if (lean_obj_tag(v_x_1035_) == 0)
{
lean_object* v___x_1038_; 
v___x_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1038_, 0, v_x_1034_);
lean_ctor_set(v___x_1038_, 1, v___y_1036_);
return v___x_1038_;
}
else
{
lean_object* v_value_1039_; lean_object* v_key_1040_; lean_object* v_tail_1041_; lean_object* v_out_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1067_; 
v_value_1039_ = lean_ctor_get(v_x_1035_, 1);
lean_inc(v_value_1039_);
v_key_1040_ = lean_ctor_get(v_x_1035_, 0);
lean_inc(v_key_1040_);
v_tail_1041_ = lean_ctor_get(v_x_1035_, 2);
lean_inc(v_tail_1041_);
lean_dec_ref(v_x_1035_);
v_out_1042_ = lean_ctor_get(v_value_1039_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_value_1039_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1044_ = v_value_1039_;
v_isShared_1045_ = v_isSharedCheck_1067_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_out_1042_);
lean_dec(v_value_1039_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1067_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
uint64_t v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1046_ = lean_unbox_uint64(v_key_1040_);
lean_dec(v_key_1040_);
v___x_1047_ = l_Lake_Hash_hex(v___x_1046_);
v___x_1048_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1047_);
v___x_1049_ = lean_unsigned_to_nat(2u);
v___x_1050_ = lean_mk_empty_array_with_capacity(v___x_1049_);
v___x_1051_ = lean_array_push(v___x_1050_, v___x_1048_);
v___x_1052_ = lean_array_push(v___x_1051_, v_out_1042_);
v___x_1053_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
v___x_1054_ = l_Lean_Json_compress(v___x_1053_);
v___x_1055_ = l_IO_FS_Handle_putStrLn(v_h_1033_, v___x_1054_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v_a_1056_; 
lean_del_object(v___x_1044_);
v_a_1056_ = lean_ctor_get(v___x_1055_, 0);
lean_inc(v_a_1056_);
lean_dec_ref(v___x_1055_);
v_x_1034_ = v_a_1056_;
v_x_1035_ = v_tail_1041_;
goto _start;
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1059_; uint8_t v___x_1060_; lean_object* v___x_1062_; 
lean_dec(v_tail_1041_);
v_a_1058_ = lean_ctor_get(v___x_1055_, 0);
lean_inc(v_a_1058_);
lean_dec_ref(v___x_1055_);
v___x_1059_ = lean_io_error_to_string(v_a_1058_);
v___x_1060_ = 3;
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 0, v___x_1059_);
v___x_1062_ = v___x_1044_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1059_);
v___x_1062_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
lean_ctor_set_uint8(v___x_1062_, sizeof(void*)*1, v___x_1060_);
v___x_1063_ = lean_array_get_size(v___y_1036_);
v___x_1064_ = lean_array_push(v___y_1036_, v___x_1062_);
v___x_1065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1063_);
lean_ctor_set(v___x_1065_, 1, v___x_1064_);
return v___x_1065_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0___boxed(lean_object* v_h_1068_, lean_object* v_x_1069_, lean_object* v_x_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(v_h_1068_, v_x_1069_, v_x_1070_, v___y_1071_);
lean_dec(v_h_1068_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(lean_object* v_h_1074_, lean_object* v_as_1075_, size_t v_i_1076_, size_t v_stop_1077_, lean_object* v_b_1078_, lean_object* v___y_1079_){
_start:
{
uint8_t v___x_1081_; 
v___x_1081_ = lean_usize_dec_eq(v_i_1076_, v_stop_1077_);
if (v___x_1081_ == 0)
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1082_ = lean_array_uget_borrowed(v_as_1075_, v_i_1076_);
v___x_1083_ = lean_box(0);
lean_inc(v___x_1082_);
v___x_1084_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(v_h_1074_, v___x_1083_, v___x_1082_, v___y_1079_);
if (lean_obj_tag(v___x_1084_) == 0)
{
lean_object* v_a_1085_; lean_object* v_a_1086_; size_t v___x_1087_; size_t v___x_1088_; 
v_a_1085_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_a_1085_);
v_a_1086_ = lean_ctor_get(v___x_1084_, 1);
lean_inc(v_a_1086_);
lean_dec_ref(v___x_1084_);
v___x_1087_ = ((size_t)1ULL);
v___x_1088_ = lean_usize_add(v_i_1076_, v___x_1087_);
v_i_1076_ = v___x_1088_;
v_b_1078_ = v_a_1085_;
v___y_1079_ = v_a_1086_;
goto _start;
}
else
{
return v___x_1084_;
}
}
else
{
lean_object* v___x_1090_; 
v___x_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1090_, 0, v_b_1078_);
lean_ctor_set(v___x_1090_, 1, v___y_1079_);
return v___x_1090_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1___boxed(lean_object* v_h_1091_, lean_object* v_as_1092_, lean_object* v_i_1093_, lean_object* v_stop_1094_, lean_object* v_b_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
size_t v_i_boxed_1098_; size_t v_stop_boxed_1099_; lean_object* v_res_1100_; 
v_i_boxed_1098_ = lean_unbox_usize(v_i_1093_);
lean_dec(v_i_1093_);
v_stop_boxed_1099_ = lean_unbox_usize(v_stop_1094_);
lean_dec(v_stop_1094_);
v_res_1100_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(v_h_1091_, v_as_1092_, v_i_boxed_1098_, v_stop_boxed_1099_, v_b_1095_, v___y_1096_);
lean_dec_ref(v_as_1092_);
lean_dec(v_h_1091_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(lean_object* v_h_1101_, lean_object* v_x_1102_, lean_object* v_x_1103_, lean_object* v___y_1104_){
_start:
{
if (lean_obj_tag(v_x_1103_) == 0)
{
lean_object* v___x_1106_; 
v___x_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1106_, 0, v_x_1102_);
lean_ctor_set(v___x_1106_, 1, v___y_1104_);
return v___x_1106_;
}
else
{
lean_object* v_value_1107_; uint8_t v_platformIndependent_1108_; 
v_value_1107_ = lean_ctor_get(v_x_1103_, 1);
lean_inc(v_value_1107_);
v_platformIndependent_1108_ = lean_ctor_get_uint8(v_value_1107_, sizeof(void*)*1);
if (v_platformIndependent_1108_ == 0)
{
lean_object* v_tail_1109_; lean_object* v___x_1110_; 
lean_dec(v_value_1107_);
v_tail_1109_ = lean_ctor_get(v_x_1103_, 2);
lean_inc(v_tail_1109_);
lean_dec_ref(v_x_1103_);
v___x_1110_ = lean_box(0);
v_x_1102_ = v___x_1110_;
v_x_1103_ = v_tail_1109_;
goto _start;
}
else
{
lean_object* v_key_1112_; lean_object* v_tail_1113_; lean_object* v_out_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1139_; 
v_key_1112_ = lean_ctor_get(v_x_1103_, 0);
lean_inc(v_key_1112_);
v_tail_1113_ = lean_ctor_get(v_x_1103_, 2);
lean_inc(v_tail_1113_);
lean_dec_ref(v_x_1103_);
v_out_1114_ = lean_ctor_get(v_value_1107_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_value_1107_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1116_ = v_value_1107_;
v_isShared_1117_ = v_isSharedCheck_1139_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_out_1114_);
lean_dec(v_value_1107_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1139_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
uint64_t v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1118_ = lean_unbox_uint64(v_key_1112_);
lean_dec(v_key_1112_);
v___x_1119_ = l_Lake_Hash_hex(v___x_1118_);
v___x_1120_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
v___x_1121_ = lean_unsigned_to_nat(2u);
v___x_1122_ = lean_mk_empty_array_with_capacity(v___x_1121_);
v___x_1123_ = lean_array_push(v___x_1122_, v___x_1120_);
v___x_1124_ = lean_array_push(v___x_1123_, v_out_1114_);
v___x_1125_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1124_);
v___x_1126_ = l_Lean_Json_compress(v___x_1125_);
v___x_1127_ = l_IO_FS_Handle_putStrLn(v_h_1101_, v___x_1126_);
if (lean_obj_tag(v___x_1127_) == 0)
{
lean_object* v_a_1128_; 
lean_del_object(v___x_1116_);
v_a_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_a_1128_);
lean_dec_ref(v___x_1127_);
v_x_1102_ = v_a_1128_;
v_x_1103_ = v_tail_1113_;
goto _start;
}
else
{
lean_object* v_a_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; lean_object* v___x_1134_; 
lean_dec(v_tail_1113_);
v_a_1130_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_a_1130_);
lean_dec_ref(v___x_1127_);
v___x_1131_ = lean_io_error_to_string(v_a_1130_);
v___x_1132_ = 3;
if (v_isShared_1117_ == 0)
{
lean_ctor_set(v___x_1116_, 0, v___x_1131_);
v___x_1134_ = v___x_1116_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v___x_1131_);
v___x_1134_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
lean_ctor_set_uint8(v___x_1134_, sizeof(void*)*1, v___x_1132_);
v___x_1135_ = lean_array_get_size(v___y_1104_);
v___x_1136_ = lean_array_push(v___y_1104_, v___x_1134_);
v___x_1137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1135_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
return v___x_1137_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2___boxed(lean_object* v_h_1140_, lean_object* v_x_1141_, lean_object* v_x_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(v_h_1140_, v_x_1141_, v_x_1142_, v___y_1143_);
lean_dec(v_h_1140_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(lean_object* v_h_1146_, lean_object* v_as_1147_, size_t v_i_1148_, size_t v_stop_1149_, lean_object* v_b_1150_, lean_object* v___y_1151_){
_start:
{
uint8_t v___x_1153_; 
v___x_1153_ = lean_usize_dec_eq(v_i_1148_, v_stop_1149_);
if (v___x_1153_ == 0)
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1154_ = lean_array_uget_borrowed(v_as_1147_, v_i_1148_);
v___x_1155_ = lean_box(0);
lean_inc(v___x_1154_);
v___x_1156_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(v_h_1146_, v___x_1155_, v___x_1154_, v___y_1151_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v_a_1158_; size_t v___x_1159_; size_t v___x_1160_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1157_);
v_a_1158_ = lean_ctor_get(v___x_1156_, 1);
lean_inc(v_a_1158_);
lean_dec_ref(v___x_1156_);
v___x_1159_ = ((size_t)1ULL);
v___x_1160_ = lean_usize_add(v_i_1148_, v___x_1159_);
v_i_1148_ = v___x_1160_;
v_b_1150_ = v_a_1157_;
v___y_1151_ = v_a_1158_;
goto _start;
}
else
{
return v___x_1156_;
}
}
else
{
lean_object* v___x_1162_; 
v___x_1162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1162_, 0, v_b_1150_);
lean_ctor_set(v___x_1162_, 1, v___y_1151_);
return v___x_1162_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3___boxed(lean_object* v_h_1163_, lean_object* v_as_1164_, lean_object* v_i_1165_, lean_object* v_stop_1166_, lean_object* v_b_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
size_t v_i_boxed_1170_; size_t v_stop_boxed_1171_; lean_object* v_res_1172_; 
v_i_boxed_1170_ = lean_unbox_usize(v_i_1165_);
lean_dec(v_i_1165_);
v_stop_boxed_1171_ = lean_unbox_usize(v_stop_1166_);
lean_dec(v_stop_1166_);
v_res_1172_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(v_h_1163_, v_as_1164_, v_i_boxed_1170_, v_stop_boxed_1171_, v_b_1167_, v___y_1168_);
lean_dec_ref(v_as_1164_);
lean_dec(v_h_1163_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(lean_object* v_h_1173_, lean_object* v_cache_1174_, uint8_t v_platformIndependent_1175_, lean_object* v_a_1176_){
_start:
{
if (v_platformIndependent_1175_ == 0)
{
lean_object* v_buckets_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1199_; 
v_buckets_1178_ = lean_ctor_get(v_cache_1174_, 1);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_cache_1174_);
if (v_isSharedCheck_1199_ == 0)
{
lean_object* v_unused_1200_; 
v_unused_1200_ = lean_ctor_get(v_cache_1174_, 0);
lean_dec(v_unused_1200_);
v___x_1180_ = v_cache_1174_;
v_isShared_1181_ = v_isSharedCheck_1199_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_buckets_1178_);
lean_dec(v_cache_1174_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1199_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; uint8_t v___x_1185_; 
v___x_1182_ = lean_unsigned_to_nat(0u);
v___x_1183_ = lean_array_get_size(v_buckets_1178_);
v___x_1184_ = lean_box(0);
v___x_1185_ = lean_nat_dec_lt(v___x_1182_, v___x_1183_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1187_; 
lean_dec_ref(v_buckets_1178_);
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 1, v_a_1176_);
lean_ctor_set(v___x_1180_, 0, v___x_1184_);
v___x_1187_ = v___x_1180_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v_a_1176_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
else
{
uint8_t v___x_1189_; 
v___x_1189_ = lean_nat_dec_le(v___x_1183_, v___x_1183_);
if (v___x_1189_ == 0)
{
if (v___x_1185_ == 0)
{
lean_object* v___x_1191_; 
lean_dec_ref(v_buckets_1178_);
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 1, v_a_1176_);
lean_ctor_set(v___x_1180_, 0, v___x_1184_);
v___x_1191_ = v___x_1180_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v_a_1176_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
else
{
size_t v___x_1193_; size_t v___x_1194_; lean_object* v___x_1195_; 
lean_del_object(v___x_1180_);
v___x_1193_ = ((size_t)0ULL);
v___x_1194_ = lean_usize_of_nat(v___x_1183_);
v___x_1195_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(v_h_1173_, v_buckets_1178_, v___x_1193_, v___x_1194_, v___x_1184_, v_a_1176_);
lean_dec_ref(v_buckets_1178_);
return v___x_1195_;
}
}
else
{
size_t v___x_1196_; size_t v___x_1197_; lean_object* v___x_1198_; 
lean_del_object(v___x_1180_);
v___x_1196_ = ((size_t)0ULL);
v___x_1197_ = lean_usize_of_nat(v___x_1183_);
v___x_1198_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(v_h_1173_, v_buckets_1178_, v___x_1196_, v___x_1197_, v___x_1184_, v_a_1176_);
lean_dec_ref(v_buckets_1178_);
return v___x_1198_;
}
}
}
}
else
{
lean_object* v_buckets_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1222_; 
v_buckets_1201_ = lean_ctor_get(v_cache_1174_, 1);
v_isSharedCheck_1222_ = !lean_is_exclusive(v_cache_1174_);
if (v_isSharedCheck_1222_ == 0)
{
lean_object* v_unused_1223_; 
v_unused_1223_ = lean_ctor_get(v_cache_1174_, 0);
lean_dec(v_unused_1223_);
v___x_1203_ = v_cache_1174_;
v_isShared_1204_ = v_isSharedCheck_1222_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_buckets_1201_);
lean_dec(v_cache_1174_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1222_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; uint8_t v___x_1208_; 
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = lean_array_get_size(v_buckets_1201_);
v___x_1207_ = lean_box(0);
v___x_1208_ = lean_nat_dec_lt(v___x_1205_, v___x_1206_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1210_; 
lean_dec_ref(v_buckets_1201_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 1, v_a_1176_);
lean_ctor_set(v___x_1203_, 0, v___x_1207_);
v___x_1210_ = v___x_1203_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1207_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v_a_1176_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
else
{
uint8_t v___x_1212_; 
v___x_1212_ = lean_nat_dec_le(v___x_1206_, v___x_1206_);
if (v___x_1212_ == 0)
{
if (v___x_1208_ == 0)
{
lean_object* v___x_1214_; 
lean_dec_ref(v_buckets_1201_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 1, v_a_1176_);
lean_ctor_set(v___x_1203_, 0, v___x_1207_);
v___x_1214_ = v___x_1203_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1207_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v_a_1176_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
else
{
size_t v___x_1216_; size_t v___x_1217_; lean_object* v___x_1218_; 
lean_del_object(v___x_1203_);
v___x_1216_ = ((size_t)0ULL);
v___x_1217_ = lean_usize_of_nat(v___x_1206_);
v___x_1218_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(v_h_1173_, v_buckets_1201_, v___x_1216_, v___x_1217_, v___x_1207_, v_a_1176_);
lean_dec_ref(v_buckets_1201_);
return v___x_1218_;
}
}
else
{
size_t v___x_1219_; size_t v___x_1220_; lean_object* v___x_1221_; 
lean_del_object(v___x_1203_);
v___x_1219_ = ((size_t)0ULL);
v___x_1220_ = lean_usize_of_nat(v___x_1206_);
v___x_1221_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(v_h_1173_, v_buckets_1201_, v___x_1219_, v___x_1220_, v___x_1207_, v_a_1176_);
lean_dec_ref(v_buckets_1201_);
return v___x_1221_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries___boxed(lean_object* v_h_1224_, lean_object* v_cache_1225_, lean_object* v_platformIndependent_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_){
_start:
{
uint8_t v_platformIndependent_boxed_1229_; lean_object* v_res_1230_; 
v_platformIndependent_boxed_1229_ = lean_unbox(v_platformIndependent_1226_);
v_res_1230_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_h_1224_, v_cache_1225_, v_platformIndependent_boxed_1229_, v_a_1227_);
lean_dec(v_h_1224_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_updateFile_spec__0(lean_object* v_x_1231_, lean_object* v_x_1232_){
_start:
{
if (lean_obj_tag(v_x_1232_) == 0)
{
return v_x_1231_;
}
else
{
lean_object* v_key_1233_; lean_object* v_value_1234_; lean_object* v_tail_1235_; uint64_t v___x_1236_; lean_object* v___x_1237_; 
v_key_1233_ = lean_ctor_get(v_x_1232_, 0);
lean_inc(v_key_1233_);
v_value_1234_ = lean_ctor_get(v_x_1232_, 1);
lean_inc(v_value_1234_);
v_tail_1235_ = lean_ctor_get(v_x_1232_, 2);
lean_inc(v_tail_1235_);
lean_dec_ref(v_x_1232_);
v___x_1236_ = lean_unbox_uint64(v_key_1233_);
lean_dec(v_key_1233_);
v___x_1237_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_x_1231_, v___x_1236_, v_value_1234_);
v_x_1231_ = v___x_1237_;
v_x_1232_ = v_tail_1235_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(lean_object* v_as_1239_, size_t v_i_1240_, size_t v_stop_1241_, lean_object* v_b_1242_){
_start:
{
uint8_t v___x_1243_; 
v___x_1243_ = lean_usize_dec_eq(v_i_1240_, v_stop_1241_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; lean_object* v___x_1245_; size_t v___x_1246_; size_t v___x_1247_; 
v___x_1244_ = lean_array_uget_borrowed(v_as_1239_, v_i_1240_);
lean_inc(v___x_1244_);
v___x_1245_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_updateFile_spec__0(v_b_1242_, v___x_1244_);
v___x_1246_ = ((size_t)1ULL);
v___x_1247_ = lean_usize_add(v_i_1240_, v___x_1246_);
v_i_1240_ = v___x_1247_;
v_b_1242_ = v___x_1245_;
goto _start;
}
else
{
return v_b_1242_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1___boxed(lean_object* v_as_1249_, lean_object* v_i_1250_, lean_object* v_stop_1251_, lean_object* v_b_1252_){
_start:
{
size_t v_i_boxed_1253_; size_t v_stop_boxed_1254_; lean_object* v_res_1255_; 
v_i_boxed_1253_ = lean_unbox_usize(v_i_1250_);
lean_dec(v_i_1250_);
v_stop_boxed_1254_ = lean_unbox_usize(v_stop_1251_);
lean_dec(v_stop_1251_);
v_res_1255_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(v_as_1249_, v_i_boxed_1253_, v_stop_boxed_1254_, v_b_1252_);
lean_dec_ref(v_as_1249_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile(lean_object* v_file_1256_, lean_object* v_cache_1257_, lean_object* v_a_1258_){
_start:
{
lean_object* v_a_1261_; lean_object* v_a_1262_; lean_object* v___x_1264_; 
lean_inc_ref(v_file_1256_);
v___x_1264_ = l_Lake_createParentDirs(v_file_1256_);
if (lean_obj_tag(v___x_1264_) == 0)
{
uint8_t v___x_1265_; lean_object* v___x_1266_; 
lean_dec_ref(v___x_1264_);
v___x_1265_ = 4;
v___x_1266_ = lean_io_prim_handle_mk(v_file_1256_, v___x_1265_);
if (lean_obj_tag(v___x_1266_) == 0)
{
uint8_t v___x_1267_; lean_object* v___x_1268_; 
lean_dec_ref(v___x_1266_);
v___x_1267_ = 3;
v___x_1268_ = lean_io_prim_handle_mk(v_file_1256_, v___x_1267_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v_a_1269_; uint8_t v___x_1270_; lean_object* v___x_1271_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_a_1269_);
lean_dec_ref(v___x_1268_);
v___x_1270_ = 1;
v___x_1271_ = lean_io_prim_handle_lock(v_a_1269_, v___x_1270_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v___x_1272_; 
lean_dec_ref(v___x_1271_);
v___x_1272_ = lean_io_prim_handle_get_line(v_a_1269_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1274_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1273_);
lean_dec_ref(v___x_1272_);
lean_inc_ref(v_file_1256_);
v___x_1274_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_1256_, v_a_1273_, v_a_1258_);
if (lean_obj_tag(v___x_1274_) == 0)
{
lean_object* v_a_1275_; uint8_t v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v_a_1275_ = lean_ctor_get(v___x_1274_, 1);
lean_inc(v_a_1275_);
lean_dec_ref(v___x_1274_);
v___x_1276_ = 0;
v___x_1277_ = lean_unsigned_to_nat(2u);
v___x_1278_ = lean_unsigned_to_nat(0u);
v___x_1279_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0, &l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0);
v___x_1280_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_1269_, v_file_1256_, v___x_1276_, v___x_1277_, v___x_1279_, v_a_1275_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1309_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
v_a_1282_ = lean_ctor_get(v___x_1280_, 1);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1284_ = v___x_1280_;
v_isShared_1285_ = v_isSharedCheck_1309_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_inc(v_a_1281_);
lean_dec(v___x_1280_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1309_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___y_1287_; lean_object* v_buckets_1299_; lean_object* v___x_1300_; uint8_t v___x_1301_; 
v_buckets_1299_ = lean_ctor_get(v_cache_1257_, 1);
v___x_1300_ = lean_array_get_size(v_buckets_1299_);
v___x_1301_ = lean_nat_dec_lt(v___x_1278_, v___x_1300_);
if (v___x_1301_ == 0)
{
v___y_1287_ = v_a_1281_;
goto v___jp_1286_;
}
else
{
uint8_t v___x_1302_; 
v___x_1302_ = lean_nat_dec_le(v___x_1300_, v___x_1300_);
if (v___x_1302_ == 0)
{
if (v___x_1301_ == 0)
{
v___y_1287_ = v_a_1281_;
goto v___jp_1286_;
}
else
{
size_t v___x_1303_; size_t v___x_1304_; lean_object* v___x_1305_; 
v___x_1303_ = ((size_t)0ULL);
v___x_1304_ = lean_usize_of_nat(v___x_1300_);
v___x_1305_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(v_buckets_1299_, v___x_1303_, v___x_1304_, v_a_1281_);
v___y_1287_ = v___x_1305_;
goto v___jp_1286_;
}
}
else
{
size_t v___x_1306_; size_t v___x_1307_; lean_object* v___x_1308_; 
v___x_1306_ = ((size_t)0ULL);
v___x_1307_ = lean_usize_of_nat(v___x_1300_);
v___x_1308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(v_buckets_1299_, v___x_1306_, v___x_1307_, v_a_1281_);
v___y_1287_ = v___x_1308_;
goto v___jp_1286_;
}
}
v___jp_1286_:
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_io_prim_handle_rewind(v_a_1269_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_object* v___x_1289_; 
lean_dec_ref(v___x_1288_);
lean_del_object(v___x_1284_);
v___x_1289_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_a_1269_, v___y_1287_, v___x_1276_, v_a_1282_);
lean_dec(v_a_1269_);
return v___x_1289_;
}
else
{
lean_object* v_a_1290_; lean_object* v___x_1291_; uint8_t v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1297_; 
lean_dec_ref(v___y_1287_);
lean_dec(v_a_1269_);
v_a_1290_ = lean_ctor_get(v___x_1288_, 0);
lean_inc(v_a_1290_);
lean_dec_ref(v___x_1288_);
v___x_1291_ = lean_io_error_to_string(v_a_1290_);
v___x_1292_ = 3;
v___x_1293_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1293_, 0, v___x_1291_);
lean_ctor_set_uint8(v___x_1293_, sizeof(void*)*1, v___x_1292_);
v___x_1294_ = lean_array_get_size(v_a_1282_);
v___x_1295_ = lean_array_push(v_a_1282_, v___x_1293_);
if (v_isShared_1285_ == 0)
{
lean_ctor_set_tag(v___x_1284_, 1);
lean_ctor_set(v___x_1284_, 1, v___x_1295_);
lean_ctor_set(v___x_1284_, 0, v___x_1294_);
v___x_1297_ = v___x_1284_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1294_);
lean_ctor_set(v_reuseFailAlloc_1298_, 1, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
}
else
{
lean_object* v_a_1310_; lean_object* v_a_1311_; 
lean_dec(v_a_1269_);
v_a_1310_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_a_1310_);
v_a_1311_ = lean_ctor_get(v___x_1280_, 1);
lean_inc(v_a_1311_);
lean_dec_ref(v___x_1280_);
v_a_1261_ = v_a_1310_;
v_a_1262_ = v_a_1311_;
goto v___jp_1260_;
}
}
else
{
lean_object* v_a_1312_; lean_object* v_a_1313_; 
lean_dec(v_a_1269_);
lean_dec_ref(v_file_1256_);
v_a_1312_ = lean_ctor_get(v___x_1274_, 0);
lean_inc(v_a_1312_);
v_a_1313_ = lean_ctor_get(v___x_1274_, 1);
lean_inc(v_a_1313_);
lean_dec_ref(v___x_1274_);
v_a_1261_ = v_a_1312_;
v_a_1262_ = v_a_1313_;
goto v___jp_1260_;
}
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
lean_dec(v_a_1269_);
lean_dec_ref(v_file_1256_);
v_a_1314_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1314_);
lean_dec_ref(v___x_1272_);
v___x_1315_ = lean_io_error_to_string(v_a_1314_);
v___x_1316_ = 3;
v___x_1317_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1317_, 0, v___x_1315_);
lean_ctor_set_uint8(v___x_1317_, sizeof(void*)*1, v___x_1316_);
v___x_1318_ = lean_array_get_size(v_a_1258_);
v___x_1319_ = lean_array_push(v_a_1258_, v___x_1317_);
v_a_1261_ = v___x_1318_;
v_a_1262_ = v___x_1319_;
goto v___jp_1260_;
}
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1321_; uint8_t v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
lean_dec(v_a_1269_);
lean_dec_ref(v_file_1256_);
v_a_1320_ = lean_ctor_get(v___x_1271_, 0);
lean_inc(v_a_1320_);
lean_dec_ref(v___x_1271_);
v___x_1321_ = lean_io_error_to_string(v_a_1320_);
v___x_1322_ = 3;
v___x_1323_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set_uint8(v___x_1323_, sizeof(void*)*1, v___x_1322_);
v___x_1324_ = lean_array_get_size(v_a_1258_);
v___x_1325_ = lean_array_push(v_a_1258_, v___x_1323_);
v___x_1326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
return v___x_1326_;
}
}
else
{
lean_object* v_a_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; uint8_t v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v_a_1327_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_a_1327_);
lean_dec_ref(v___x_1268_);
v___x_1328_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_1329_ = lean_string_append(v_file_1256_, v___x_1328_);
v___x_1330_ = lean_io_error_to_string(v_a_1327_);
v___x_1331_ = lean_string_append(v___x_1329_, v___x_1330_);
lean_dec_ref(v___x_1330_);
v___x_1332_ = 3;
v___x_1333_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1333_, 0, v___x_1331_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*1, v___x_1332_);
v___x_1334_ = lean_array_get_size(v_a_1258_);
v___x_1335_ = lean_array_push(v_a_1258_, v___x_1333_);
v___x_1336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1334_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
return v___x_1336_;
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
lean_dec_ref(v_file_1256_);
v_a_1337_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_a_1337_);
lean_dec_ref(v___x_1266_);
v___x_1338_ = lean_io_error_to_string(v_a_1337_);
v___x_1339_ = 3;
v___x_1340_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
lean_ctor_set_uint8(v___x_1340_, sizeof(void*)*1, v___x_1339_);
v___x_1341_ = lean_array_get_size(v_a_1258_);
v___x_1342_ = lean_array_push(v_a_1258_, v___x_1340_);
v___x_1343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
return v___x_1343_;
}
}
else
{
lean_object* v_a_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
lean_dec_ref(v_file_1256_);
v_a_1344_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1344_);
lean_dec_ref(v___x_1264_);
v___x_1345_ = lean_io_error_to_string(v_a_1344_);
v___x_1346_ = 3;
v___x_1347_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1347_, 0, v___x_1345_);
lean_ctor_set_uint8(v___x_1347_, sizeof(void*)*1, v___x_1346_);
v___x_1348_ = lean_array_get_size(v_a_1258_);
v___x_1349_ = lean_array_push(v_a_1258_, v___x_1347_);
v___x_1350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1348_);
lean_ctor_set(v___x_1350_, 1, v___x_1349_);
return v___x_1350_;
}
v___jp_1260_:
{
lean_object* v___x_1263_; 
v___x_1263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1263_, 0, v_a_1261_);
lean_ctor_set(v___x_1263_, 1, v_a_1262_);
return v___x_1263_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile___boxed(lean_object* v_file_1351_, lean_object* v_cache_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l_Lake_CacheMap_updateFile(v_file_1351_, v_cache_1352_, v_a_1353_);
lean_dec_ref(v_cache_1352_);
return v_res_1355_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__0(void){
_start:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = ((lean_object*)(l_Lake_CacheMap_schemaVersion));
v___x_1357_ = l_Lake_Date_toString(v___x_1356_);
return v___x_1357_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__1(void){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1358_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__0, &l_Lake_CacheMap_writeFile___closed__0_once, _init_l_Lake_CacheMap_writeFile___closed__0);
v___x_1359_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
return v___x_1359_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__2(void){
_start:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1360_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__1, &l_Lake_CacheMap_writeFile___closed__1_once, _init_l_Lake_CacheMap_writeFile___closed__1);
v___x_1361_ = l_Lean_Json_compress(v___x_1360_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile(lean_object* v_file_1362_, lean_object* v_cache_1363_, uint8_t v_platformIndependent_1364_, lean_object* v_a_1365_){
_start:
{
lean_object* v___x_1367_; 
lean_inc_ref(v_file_1362_);
v___x_1367_ = l_Lake_createParentDirs(v_file_1362_);
if (lean_obj_tag(v___x_1367_) == 0)
{
uint8_t v___x_1368_; lean_object* v___x_1369_; 
lean_dec_ref(v___x_1367_);
v___x_1368_ = 1;
v___x_1369_ = lean_io_prim_handle_mk(v_file_1362_, v___x_1368_);
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_object* v_a_1370_; uint8_t v___x_1371_; lean_object* v___x_1372_; 
lean_dec_ref(v_file_1362_);
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_a_1370_);
lean_dec_ref(v___x_1369_);
v___x_1371_ = 1;
v___x_1372_ = lean_io_prim_handle_lock(v_a_1370_, v___x_1371_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
lean_dec_ref(v___x_1372_);
v___x_1373_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__2, &l_Lake_CacheMap_writeFile___closed__2_once, _init_l_Lake_CacheMap_writeFile___closed__2);
v___x_1374_ = l_IO_FS_Handle_putStrLn(v_a_1370_, v___x_1373_);
if (lean_obj_tag(v___x_1374_) == 0)
{
lean_object* v___x_1375_; 
lean_dec_ref(v___x_1374_);
v___x_1375_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_a_1370_, v_cache_1363_, v_platformIndependent_1364_, v_a_1365_);
lean_dec(v_a_1370_);
return v___x_1375_;
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1377_; uint8_t v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; 
lean_dec(v_a_1370_);
lean_dec_ref(v_cache_1363_);
v_a_1376_ = lean_ctor_get(v___x_1374_, 0);
lean_inc(v_a_1376_);
lean_dec_ref(v___x_1374_);
v___x_1377_ = lean_io_error_to_string(v_a_1376_);
v___x_1378_ = 3;
v___x_1379_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1379_, 0, v___x_1377_);
lean_ctor_set_uint8(v___x_1379_, sizeof(void*)*1, v___x_1378_);
v___x_1380_ = lean_array_get_size(v_a_1365_);
v___x_1381_ = lean_array_push(v_a_1365_, v___x_1379_);
v___x_1382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1380_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
return v___x_1382_;
}
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1384_; uint8_t v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
lean_dec(v_a_1370_);
lean_dec_ref(v_cache_1363_);
v_a_1383_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_a_1383_);
lean_dec_ref(v___x_1372_);
v___x_1384_ = lean_io_error_to_string(v_a_1383_);
v___x_1385_ = 3;
v___x_1386_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1386_, 0, v___x_1384_);
lean_ctor_set_uint8(v___x_1386_, sizeof(void*)*1, v___x_1385_);
v___x_1387_ = lean_array_get_size(v_a_1365_);
v___x_1388_ = lean_array_push(v_a_1365_, v___x_1386_);
v___x_1389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1387_);
lean_ctor_set(v___x_1389_, 1, v___x_1388_);
return v___x_1389_;
}
}
else
{
lean_object* v_a_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; uint8_t v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
lean_dec_ref(v_cache_1363_);
v_a_1390_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_a_1390_);
lean_dec_ref(v___x_1369_);
v___x_1391_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_1392_ = lean_string_append(v_file_1362_, v___x_1391_);
v___x_1393_ = lean_io_error_to_string(v_a_1390_);
v___x_1394_ = lean_string_append(v___x_1392_, v___x_1393_);
lean_dec_ref(v___x_1393_);
v___x_1395_ = 3;
v___x_1396_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1396_, 0, v___x_1394_);
lean_ctor_set_uint8(v___x_1396_, sizeof(void*)*1, v___x_1395_);
v___x_1397_ = lean_array_get_size(v_a_1365_);
v___x_1398_ = lean_array_push(v_a_1365_, v___x_1396_);
v___x_1399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1397_);
lean_ctor_set(v___x_1399_, 1, v___x_1398_);
return v___x_1399_;
}
}
else
{
lean_object* v_a_1400_; lean_object* v___x_1401_; uint8_t v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
lean_dec_ref(v_cache_1363_);
lean_dec_ref(v_file_1362_);
v_a_1400_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_a_1400_);
lean_dec_ref(v___x_1367_);
v___x_1401_ = lean_io_error_to_string(v_a_1400_);
v___x_1402_ = 3;
v___x_1403_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1403_, 0, v___x_1401_);
lean_ctor_set_uint8(v___x_1403_, sizeof(void*)*1, v___x_1402_);
v___x_1404_ = lean_array_get_size(v_a_1365_);
v___x_1405_ = lean_array_push(v_a_1365_, v___x_1403_);
v___x_1406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1404_);
lean_ctor_set(v___x_1406_, 1, v___x_1405_);
return v___x_1406_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile___boxed(lean_object* v_file_1407_, lean_object* v_cache_1408_, lean_object* v_platformIndependent_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_){
_start:
{
uint8_t v_platformIndependent_boxed_1412_; lean_object* v_res_1413_; 
v_platformIndependent_boxed_1412_ = lean_unbox(v_platformIndependent_1409_);
v_res_1413_ = l_Lake_CacheMap_writeFile(v_file_1407_, v_cache_1408_, v_platformIndependent_boxed_1412_, v_a_1410_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(uint64_t v_a_1414_, lean_object* v_x_1415_){
_start:
{
if (lean_obj_tag(v_x_1415_) == 0)
{
lean_object* v___x_1416_; 
v___x_1416_ = lean_box(0);
return v___x_1416_;
}
else
{
lean_object* v_key_1417_; lean_object* v_value_1418_; lean_object* v_tail_1419_; uint64_t v___x_1420_; uint8_t v___x_1421_; 
v_key_1417_ = lean_ctor_get(v_x_1415_, 0);
v_value_1418_ = lean_ctor_get(v_x_1415_, 1);
v_tail_1419_ = lean_ctor_get(v_x_1415_, 2);
v___x_1420_ = lean_unbox_uint64(v_key_1417_);
v___x_1421_ = lean_uint64_dec_eq(v___x_1420_, v_a_1414_);
if (v___x_1421_ == 0)
{
v_x_1415_ = v_tail_1419_;
goto _start;
}
else
{
lean_object* v___x_1423_; 
lean_inc(v_value_1418_);
v___x_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1423_, 0, v_value_1418_);
return v___x_1423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_1424_, lean_object* v_x_1425_){
_start:
{
uint64_t v_a_boxed_1426_; lean_object* v_res_1427_; 
v_a_boxed_1426_ = lean_unbox_uint64(v_a_1424_);
lean_dec_ref(v_a_1424_);
v_res_1427_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_boxed_1426_, v_x_1425_);
lean_dec(v_x_1425_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(lean_object* v_m_1428_, uint64_t v_a_1429_){
_start:
{
lean_object* v_buckets_1430_; lean_object* v___x_1431_; uint64_t v___x_1432_; uint64_t v___x_1433_; uint64_t v_fold_1434_; uint64_t v___x_1435_; uint64_t v___x_1436_; uint64_t v___x_1437_; size_t v___x_1438_; size_t v___x_1439_; size_t v___x_1440_; size_t v___x_1441_; size_t v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v_buckets_1430_ = lean_ctor_get(v_m_1428_, 1);
v___x_1431_ = lean_array_get_size(v_buckets_1430_);
v___x_1432_ = 32ULL;
v___x_1433_ = lean_uint64_shift_right(v_a_1429_, v___x_1432_);
v_fold_1434_ = lean_uint64_xor(v_a_1429_, v___x_1433_);
v___x_1435_ = 16ULL;
v___x_1436_ = lean_uint64_shift_right(v_fold_1434_, v___x_1435_);
v___x_1437_ = lean_uint64_xor(v_fold_1434_, v___x_1436_);
v___x_1438_ = lean_uint64_to_usize(v___x_1437_);
v___x_1439_ = lean_usize_of_nat(v___x_1431_);
v___x_1440_ = ((size_t)1ULL);
v___x_1441_ = lean_usize_sub(v___x_1439_, v___x_1440_);
v___x_1442_ = lean_usize_land(v___x_1438_, v___x_1441_);
v___x_1443_ = lean_array_uget_borrowed(v_buckets_1430_, v___x_1442_);
v___x_1444_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_1429_, v___x_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg___boxed(lean_object* v_m_1445_, lean_object* v_a_1446_){
_start:
{
uint64_t v_a_boxed_1447_; lean_object* v_res_1448_; 
v_a_boxed_1447_ = lean_unbox_uint64(v_a_1446_);
lean_dec_ref(v_a_1446_);
v_res_1448_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_m_1445_, v_a_boxed_1447_);
lean_dec_ref(v_m_1445_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f(uint64_t v_inputHash_1449_, lean_object* v_cache_1450_){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_cache_1450_, v_inputHash_1449_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_box(0);
return v___x_1452_;
}
else
{
lean_object* v_val_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1461_; 
v_val_1453_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1455_ = v___x_1451_;
v_isShared_1456_ = v_isSharedCheck_1461_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_val_1453_);
lean_dec(v___x_1451_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1461_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v_out_1457_; lean_object* v___x_1459_; 
v_out_1457_ = lean_ctor_get(v_val_1453_, 0);
lean_inc(v_out_1457_);
lean_dec(v_val_1453_);
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 0, v_out_1457_);
v___x_1459_ = v___x_1455_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_out_1457_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f___boxed(lean_object* v_inputHash_1462_, lean_object* v_cache_1463_){
_start:
{
uint64_t v_inputHash_boxed_1464_; lean_object* v_res_1465_; 
v_inputHash_boxed_1464_ = lean_unbox_uint64(v_inputHash_1462_);
lean_dec_ref(v_inputHash_1462_);
v_res_1465_ = l_Lake_CacheMap_get_x3f(v_inputHash_boxed_1464_, v_cache_1463_);
lean_dec_ref(v_cache_1463_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0(lean_object* v_00_u03b2_1466_, lean_object* v_m_1467_, uint64_t v_a_1468_){
_start:
{
lean_object* v___x_1469_; 
v___x_1469_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_m_1467_, v_a_1468_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___boxed(lean_object* v_00_u03b2_1470_, lean_object* v_m_1471_, lean_object* v_a_1472_){
_start:
{
uint64_t v_a_boxed_1473_; lean_object* v_res_1474_; 
v_a_boxed_1473_ = lean_unbox_uint64(v_a_1472_);
lean_dec_ref(v_a_1472_);
v_res_1474_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0(v_00_u03b2_1470_, v_m_1471_, v_a_boxed_1473_);
lean_dec_ref(v_m_1471_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1475_, uint64_t v_a_1476_, lean_object* v_x_1477_){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_1476_, v_x_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1479_, lean_object* v_a_1480_, lean_object* v_x_1481_){
_start:
{
uint64_t v_a_boxed_1482_; lean_object* v_res_1483_; 
v_a_boxed_1482_ = lean_unbox_uint64(v_a_1480_);
lean_dec_ref(v_a_1480_);
v_res_1483_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0(v_00_u03b2_1479_, v_a_boxed_1482_, v_x_1481_);
lean_dec(v_x_1481_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(uint64_t v_inputHash_1484_, lean_object* v_out_1485_, lean_object* v_cache_1486_, uint8_t v_platformIndependent_1487_){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1488_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1488_, 0, v_out_1485_);
lean_ctor_set_uint8(v___x_1488_, sizeof(void*)*1, v_platformIndependent_1487_);
v___x_1489_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_cache_1486_, v_inputHash_1484_, v___x_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore___boxed(lean_object* v_inputHash_1490_, lean_object* v_out_1491_, lean_object* v_cache_1492_, lean_object* v_platformIndependent_1493_){
_start:
{
uint64_t v_inputHash_boxed_1494_; uint8_t v_platformIndependent_boxed_1495_; lean_object* v_res_1496_; 
v_inputHash_boxed_1494_ = lean_unbox_uint64(v_inputHash_1490_);
lean_dec_ref(v_inputHash_1490_);
v_platformIndependent_boxed_1495_ = lean_unbox(v_platformIndependent_1493_);
v_res_1496_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_boxed_1494_, v_out_1491_, v_cache_1492_, v_platformIndependent_boxed_1495_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg(lean_object* v_inst_1497_, uint64_t v_inputHash_1498_, lean_object* v_val_1499_, lean_object* v_cache_1500_, uint8_t v_platformIndependent_1501_){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = lean_apply_1(v_inst_1497_, v_val_1499_);
v___x_1503_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1498_, v___x_1502_, v_cache_1500_, v_platformIndependent_1501_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg___boxed(lean_object* v_inst_1504_, lean_object* v_inputHash_1505_, lean_object* v_val_1506_, lean_object* v_cache_1507_, lean_object* v_platformIndependent_1508_){
_start:
{
uint64_t v_inputHash_boxed_1509_; uint8_t v_platformIndependent_boxed_1510_; lean_object* v_res_1511_; 
v_inputHash_boxed_1509_ = lean_unbox_uint64(v_inputHash_1505_);
lean_dec_ref(v_inputHash_1505_);
v_platformIndependent_boxed_1510_ = lean_unbox(v_platformIndependent_1508_);
v_res_1511_ = l_Lake_CacheMap_insert___redArg(v_inst_1504_, v_inputHash_boxed_1509_, v_val_1506_, v_cache_1507_, v_platformIndependent_boxed_1510_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert(lean_object* v_00_u03b1_1512_, lean_object* v_inst_1513_, uint64_t v_inputHash_1514_, lean_object* v_val_1515_, lean_object* v_cache_1516_, uint8_t v_platformIndependent_1517_){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1518_ = lean_apply_1(v_inst_1513_, v_val_1515_);
v___x_1519_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1514_, v___x_1518_, v_cache_1516_, v_platformIndependent_1517_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___boxed(lean_object* v_00_u03b1_1520_, lean_object* v_inst_1521_, lean_object* v_inputHash_1522_, lean_object* v_val_1523_, lean_object* v_cache_1524_, lean_object* v_platformIndependent_1525_){
_start:
{
uint64_t v_inputHash_boxed_1526_; uint8_t v_platformIndependent_boxed_1527_; lean_object* v_res_1528_; 
v_inputHash_boxed_1526_ = lean_unbox_uint64(v_inputHash_1522_);
lean_dec_ref(v_inputHash_1522_);
v_platformIndependent_boxed_1527_ = lean_unbox(v_platformIndependent_1525_);
v_res_1528_ = l_Lake_CacheMap_insert(v_00_u03b1_1520_, v_inst_1521_, v_inputHash_boxed_1526_, v_val_1523_, v_cache_1524_, v_platformIndependent_boxed_1527_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(lean_object* v_init_1532_, lean_object* v_x_1533_, lean_object* v___y_1534_){
_start:
{
if (lean_obj_tag(v_x_1533_) == 0)
{
lean_object* v_v_1536_; lean_object* v_l_1537_; lean_object* v_r_1538_; lean_object* v___x_1539_; 
v_v_1536_ = lean_ctor_get(v_x_1533_, 2);
lean_inc(v_v_1536_);
v_l_1537_ = lean_ctor_get(v_x_1533_, 3);
lean_inc(v_l_1537_);
v_r_1538_ = lean_ctor_get(v_x_1533_, 4);
lean_inc(v_r_1538_);
lean_dec_ref(v_x_1533_);
v___x_1539_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_init_1532_, v_l_1537_, v___y_1534_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v_a_1541_; lean_object* v___x_1542_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_a_1540_);
v_a_1541_ = lean_ctor_get(v___x_1539_, 1);
lean_inc(v_a_1541_);
lean_dec_ref(v___x_1539_);
v___x_1542_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_a_1540_, v_v_1536_, v_a_1541_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v_a_1543_; lean_object* v_a_1544_; 
v_a_1543_ = lean_ctor_get(v___x_1542_, 0);
lean_inc(v_a_1543_);
v_a_1544_ = lean_ctor_get(v___x_1542_, 1);
lean_inc(v_a_1544_);
lean_dec_ref(v___x_1542_);
v_init_1532_ = v_a_1543_;
v_x_1533_ = v_r_1538_;
v___y_1534_ = v_a_1544_;
goto _start;
}
else
{
lean_dec(v_r_1538_);
return v___x_1542_;
}
}
else
{
lean_dec(v_r_1538_);
lean_dec(v_v_1536_);
return v___x_1539_;
}
}
else
{
lean_object* v___x_1546_; 
v___x_1546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1546_, 0, v_init_1532_);
lean_ctor_set(v___x_1546_, 1, v___y_1534_);
return v___x_1546_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(lean_object* v_as_1547_, lean_object* v_o_1548_, lean_object* v_a_1549_){
_start:
{
lean_object* v___y_1552_; 
switch(lean_obj_tag(v_o_1548_))
{
case 0:
{
v___y_1552_ = v_a_1549_;
goto v___jp_1551_;
}
case 1:
{
lean_object* v___x_1554_; 
lean_dec_ref(v_o_1548_);
v___x_1554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1554_, 0, v_as_1547_);
lean_ctor_set(v___x_1554_, 1, v_a_1549_);
return v___x_1554_;
}
case 2:
{
lean_object* v_n_1555_; lean_object* v___x_1556_; 
v_n_1555_ = lean_ctor_get(v_o_1548_, 0);
lean_inc_ref(v_n_1555_);
lean_dec_ref(v_o_1548_);
v___x_1556_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_1555_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_object* v_a_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; uint8_t v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1557_);
lean_dec_ref(v___x_1556_);
v___x_1558_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__0));
v___x_1559_ = lean_string_append(v___x_1558_, v_a_1557_);
lean_dec(v_a_1557_);
v___x_1560_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_1561_ = lean_string_append(v___x_1559_, v___x_1560_);
v___x_1562_ = l_Lean_JsonNumber_toString(v_n_1555_);
v___x_1563_ = lean_string_append(v___x_1561_, v___x_1562_);
lean_dec_ref(v___x_1562_);
v___x_1564_ = 3;
v___x_1565_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1565_, 0, v___x_1563_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*1, v___x_1564_);
v___x_1566_ = lean_array_push(v_a_1549_, v___x_1565_);
v___y_1552_ = v___x_1566_;
goto v___jp_1551_;
}
else
{
lean_object* v_a_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; uint64_t v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
lean_dec_ref(v_n_1555_);
v_a_1567_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1567_);
lean_dec_ref(v___x_1556_);
v___x_1568_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__1));
v___x_1569_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
v___x_1570_ = lean_unbox_uint64(v_a_1567_);
lean_dec(v_a_1567_);
lean_ctor_set_uint64(v___x_1569_, sizeof(void*)*1, v___x_1570_);
v___x_1571_ = lean_array_push(v_as_1547_, v___x_1569_);
v___x_1572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1571_);
lean_ctor_set(v___x_1572_, 1, v_a_1549_);
return v___x_1572_;
}
}
case 3:
{
lean_object* v_s_1573_; lean_object* v___x_1574_; 
v_s_1573_ = lean_ctor_get(v_o_1548_, 0);
lean_inc_ref(v_s_1573_);
lean_dec_ref(v_o_1548_);
v___x_1574_ = l_Lake_ArtifactDescr_ofFilePath_x3f(v_s_1573_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; uint8_t v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1575_);
lean_dec_ref(v___x_1574_);
v___x_1576_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__2));
v___x_1577_ = lean_string_append(v___x_1576_, v_a_1575_);
lean_dec(v_a_1575_);
v___x_1578_ = 3;
v___x_1579_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1579_, 0, v___x_1577_);
lean_ctor_set_uint8(v___x_1579_, sizeof(void*)*1, v___x_1578_);
v___x_1580_ = lean_array_push(v_a_1549_, v___x_1579_);
v___y_1552_ = v___x_1580_;
goto v___jp_1551_;
}
else
{
lean_object* v_a_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v_a_1581_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1581_);
lean_dec_ref(v___x_1574_);
v___x_1582_ = lean_array_push(v_as_1547_, v_a_1581_);
v___x_1583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
lean_ctor_set(v___x_1583_, 1, v_a_1549_);
return v___x_1583_;
}
}
case 4:
{
lean_object* v_elems_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; uint8_t v___x_1587_; 
v_elems_1584_ = lean_ctor_get(v_o_1548_, 0);
lean_inc_ref(v_elems_1584_);
lean_dec_ref(v_o_1548_);
v___x_1585_ = lean_unsigned_to_nat(0u);
v___x_1586_ = lean_array_get_size(v_elems_1584_);
v___x_1587_ = lean_nat_dec_lt(v___x_1585_, v___x_1586_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1588_; 
lean_dec_ref(v_elems_1584_);
v___x_1588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1588_, 0, v_as_1547_);
lean_ctor_set(v___x_1588_, 1, v_a_1549_);
return v___x_1588_;
}
else
{
uint8_t v___x_1589_; 
v___x_1589_ = lean_nat_dec_le(v___x_1586_, v___x_1586_);
if (v___x_1589_ == 0)
{
if (v___x_1587_ == 0)
{
lean_object* v___x_1590_; 
lean_dec_ref(v_elems_1584_);
v___x_1590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1590_, 0, v_as_1547_);
lean_ctor_set(v___x_1590_, 1, v_a_1549_);
return v___x_1590_;
}
else
{
size_t v___x_1591_; size_t v___x_1592_; lean_object* v___x_1593_; 
v___x_1591_ = ((size_t)0ULL);
v___x_1592_ = lean_usize_of_nat(v___x_1586_);
v___x_1593_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_elems_1584_, v___x_1591_, v___x_1592_, v_as_1547_, v_a_1549_);
lean_dec_ref(v_elems_1584_);
return v___x_1593_;
}
}
else
{
size_t v___x_1594_; size_t v___x_1595_; lean_object* v___x_1596_; 
v___x_1594_ = ((size_t)0ULL);
v___x_1595_ = lean_usize_of_nat(v___x_1586_);
v___x_1596_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_elems_1584_, v___x_1594_, v___x_1595_, v_as_1547_, v_a_1549_);
lean_dec_ref(v_elems_1584_);
return v___x_1596_;
}
}
}
default: 
{
lean_object* v_kvPairs_1597_; lean_object* v___x_1598_; 
v_kvPairs_1597_ = lean_ctor_get(v_o_1548_, 0);
lean_inc(v_kvPairs_1597_);
lean_dec_ref(v_o_1548_);
v___x_1598_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_as_1547_, v_kvPairs_1597_, v_a_1549_);
return v___x_1598_;
}
}
v___jp_1551_:
{
lean_object* v___x_1553_; 
v___x_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1553_, 0, v_as_1547_);
lean_ctor_set(v___x_1553_, 1, v___y_1552_);
return v___x_1553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(lean_object* v_as_1599_, size_t v_i_1600_, size_t v_stop_1601_, lean_object* v_b_1602_, lean_object* v___y_1603_){
_start:
{
uint8_t v___x_1605_; 
v___x_1605_ = lean_usize_dec_eq(v_i_1600_, v_stop_1601_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = lean_array_uget_borrowed(v_as_1599_, v_i_1600_);
lean_inc(v___x_1606_);
v___x_1607_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_b_1602_, v___x_1606_, v___y_1603_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v_a_1609_; size_t v___x_1610_; size_t v___x_1611_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
v_a_1609_ = lean_ctor_get(v___x_1607_, 1);
lean_inc(v_a_1609_);
lean_dec_ref(v___x_1607_);
v___x_1610_ = ((size_t)1ULL);
v___x_1611_ = lean_usize_add(v_i_1600_, v___x_1610_);
v_i_1600_ = v___x_1611_;
v_b_1602_ = v_a_1608_;
v___y_1603_ = v_a_1609_;
goto _start;
}
else
{
return v___x_1607_;
}
}
else
{
lean_object* v___x_1613_; 
v___x_1613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1613_, 0, v_b_1602_);
lean_ctor_set(v___x_1613_, 1, v___y_1603_);
return v___x_1613_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0___boxed(lean_object* v_as_1614_, lean_object* v_i_1615_, lean_object* v_stop_1616_, lean_object* v_b_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
size_t v_i_boxed_1620_; size_t v_stop_boxed_1621_; lean_object* v_res_1622_; 
v_i_boxed_1620_ = lean_unbox_usize(v_i_1615_);
lean_dec(v_i_1615_);
v_stop_boxed_1621_ = lean_unbox_usize(v_stop_1616_);
lean_dec(v_stop_1616_);
v_res_1622_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_as_1614_, v_i_boxed_1620_, v_stop_boxed_1621_, v_b_1617_, v___y_1618_);
lean_dec_ref(v_as_1614_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1___boxed(lean_object* v_init_1623_, lean_object* v_x_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_init_1623_, v_x_1624_, v___y_1625_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___boxed(lean_object* v_as_1628_, lean_object* v_o_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_as_1628_, v_o_1629_, v_a_1630_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(lean_object* v_x_1633_, lean_object* v_x_1634_, lean_object* v___y_1635_){
_start:
{
if (lean_obj_tag(v_x_1634_) == 0)
{
lean_object* v___x_1637_; 
v___x_1637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1637_, 0, v_x_1633_);
lean_ctor_set(v___x_1637_, 1, v___y_1635_);
return v___x_1637_;
}
else
{
lean_object* v_value_1638_; lean_object* v_tail_1639_; lean_object* v_out_1640_; lean_object* v___x_1641_; 
v_value_1638_ = lean_ctor_get(v_x_1634_, 1);
lean_inc(v_value_1638_);
v_tail_1639_ = lean_ctor_get(v_x_1634_, 2);
lean_inc(v_tail_1639_);
lean_dec_ref(v_x_1634_);
v_out_1640_ = lean_ctor_get(v_value_1638_, 0);
lean_inc(v_out_1640_);
lean_dec(v_value_1638_);
v___x_1641_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_x_1633_, v_out_1640_, v___y_1635_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v_a_1643_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
lean_inc(v_a_1642_);
v_a_1643_ = lean_ctor_get(v___x_1641_, 1);
lean_inc(v_a_1643_);
lean_dec_ref(v___x_1641_);
v_x_1633_ = v_a_1642_;
v_x_1634_ = v_tail_1639_;
v___y_1635_ = v_a_1643_;
goto _start;
}
else
{
lean_dec(v_tail_1639_);
return v___x_1641_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0___boxed(lean_object* v_x_1645_, lean_object* v_x_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(v_x_1645_, v_x_1646_, v___y_1647_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(lean_object* v_as_1650_, size_t v_i_1651_, size_t v_stop_1652_, lean_object* v_b_1653_, lean_object* v___y_1654_){
_start:
{
uint8_t v___x_1656_; 
v___x_1656_ = lean_usize_dec_eq(v_i_1651_, v_stop_1652_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = lean_array_uget_borrowed(v_as_1650_, v_i_1651_);
lean_inc(v___x_1657_);
v___x_1658_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(v_b_1653_, v___x_1657_, v___y_1654_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_a_1659_; lean_object* v_a_1660_; size_t v___x_1661_; size_t v___x_1662_; 
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
lean_inc(v_a_1659_);
v_a_1660_ = lean_ctor_get(v___x_1658_, 1);
lean_inc(v_a_1660_);
lean_dec_ref(v___x_1658_);
v___x_1661_ = ((size_t)1ULL);
v___x_1662_ = lean_usize_add(v_i_1651_, v___x_1661_);
v_i_1651_ = v___x_1662_;
v_b_1653_ = v_a_1659_;
v___y_1654_ = v_a_1660_;
goto _start;
}
else
{
return v___x_1658_;
}
}
else
{
lean_object* v___x_1664_; 
v___x_1664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1664_, 0, v_b_1653_);
lean_ctor_set(v___x_1664_, 1, v___y_1654_);
return v___x_1664_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1___boxed(lean_object* v_as_1665_, lean_object* v_i_1666_, lean_object* v_stop_1667_, lean_object* v_b_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_){
_start:
{
size_t v_i_boxed_1671_; size_t v_stop_boxed_1672_; lean_object* v_res_1673_; 
v_i_boxed_1671_ = lean_unbox_usize(v_i_1666_);
lean_dec(v_i_1666_);
v_stop_boxed_1672_ = lean_unbox_usize(v_stop_1667_);
lean_dec(v_stop_1667_);
v_res_1673_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_as_1665_, v_i_boxed_1671_, v_stop_boxed_1672_, v_b_1668_, v___y_1669_);
lean_dec_ref(v_as_1665_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs(lean_object* v_map_1676_, lean_object* v_a_1677_){
_start:
{
lean_object* v_buckets_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1708_; 
v_buckets_1679_ = lean_ctor_get(v_map_1676_, 1);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_map_1676_);
if (v_isSharedCheck_1708_ == 0)
{
lean_object* v_unused_1709_; 
v_unused_1709_ = lean_ctor_get(v_map_1676_, 0);
lean_dec(v_unused_1709_);
v___x_1681_ = v_map_1676_;
v_isShared_1682_ = v_isSharedCheck_1708_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_buckets_1679_);
lean_dec(v_map_1676_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1708_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___y_1687_; lean_object* v_a_1688_; lean_object* v___y_1695_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
v___x_1683_ = lean_unsigned_to_nat(0u);
v___x_1684_ = ((lean_object*)(l_Lake_CacheMap_collectOutputDescrs___closed__0));
v___x_1685_ = lean_array_get_size(v_a_1677_);
v___x_1697_ = lean_array_get_size(v_buckets_1679_);
v___x_1698_ = lean_nat_dec_lt(v___x_1683_, v___x_1697_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1699_; 
lean_dec_ref(v_buckets_1679_);
lean_inc_ref(v_a_1677_);
v___x_1699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1684_);
lean_ctor_set(v___x_1699_, 1, v_a_1677_);
v___y_1687_ = v___x_1699_;
v_a_1688_ = v_a_1677_;
goto v___jp_1686_;
}
else
{
uint8_t v___x_1700_; 
v___x_1700_ = lean_nat_dec_le(v___x_1697_, v___x_1697_);
if (v___x_1700_ == 0)
{
if (v___x_1698_ == 0)
{
lean_object* v___x_1701_; 
lean_dec_ref(v_buckets_1679_);
lean_inc_ref(v_a_1677_);
v___x_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1684_);
lean_ctor_set(v___x_1701_, 1, v_a_1677_);
v___y_1687_ = v___x_1701_;
v_a_1688_ = v_a_1677_;
goto v___jp_1686_;
}
else
{
size_t v___x_1702_; size_t v___x_1703_; lean_object* v___x_1704_; 
v___x_1702_ = ((size_t)0ULL);
v___x_1703_ = lean_usize_of_nat(v___x_1697_);
v___x_1704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_buckets_1679_, v___x_1702_, v___x_1703_, v___x_1684_, v_a_1677_);
lean_dec_ref(v_buckets_1679_);
v___y_1695_ = v___x_1704_;
goto v___jp_1694_;
}
}
else
{
size_t v___x_1705_; size_t v___x_1706_; lean_object* v___x_1707_; 
v___x_1705_ = ((size_t)0ULL);
v___x_1706_ = lean_usize_of_nat(v___x_1697_);
v___x_1707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_buckets_1679_, v___x_1705_, v___x_1706_, v___x_1684_, v_a_1677_);
lean_dec_ref(v_buckets_1679_);
v___y_1695_ = v___x_1707_;
goto v___jp_1694_;
}
}
v___jp_1686_:
{
lean_object* v___x_1689_; uint8_t v___x_1690_; 
v___x_1689_ = lean_array_get_size(v_a_1688_);
v___x_1690_ = lean_nat_dec_eq(v___x_1685_, v___x_1689_);
if (v___x_1690_ == 0)
{
lean_object* v___x_1692_; 
lean_dec_ref(v___y_1687_);
if (v_isShared_1682_ == 0)
{
lean_ctor_set_tag(v___x_1681_, 1);
lean_ctor_set(v___x_1681_, 1, v_a_1688_);
lean_ctor_set(v___x_1681_, 0, v___x_1685_);
v___x_1692_ = v___x_1681_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v___x_1685_);
lean_ctor_set(v_reuseFailAlloc_1693_, 1, v_a_1688_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
return v___x_1692_;
}
}
else
{
lean_dec_ref(v_a_1688_);
lean_del_object(v___x_1681_);
return v___y_1687_;
}
}
v___jp_1694_:
{
if (lean_obj_tag(v___y_1695_) == 0)
{
lean_object* v_a_1696_; 
v_a_1696_ = lean_ctor_get(v___y_1695_, 1);
lean_inc(v_a_1696_);
v___y_1687_ = v___y_1695_;
v_a_1688_ = v_a_1696_;
goto v___jp_1686_;
}
else
{
lean_del_object(v___x_1681_);
return v___y_1695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs___boxed(lean_object* v_map_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lake_CacheMap_collectOutputDescrs(v_map_1710_, v_a_1711_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk(lean_object* v_init_1714_){
_start:
{
lean_object* v___x_1716_; 
v___x_1716_ = lean_st_mk_ref(v_init_1714_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk___boxed(lean_object* v_init_1717_, lean_object* v_a_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lake_CacheRef_mk(v_init_1717_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f(uint64_t v_inputHash_1720_, lean_object* v_cache_1721_){
_start:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1723_ = lean_st_ref_take(v_cache_1721_);
v___x_1724_ = l_Lake_CacheMap_get_x3f(v_inputHash_1720_, v___x_1723_);
v___x_1725_ = lean_st_ref_set(v_cache_1721_, v___x_1723_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f___boxed(lean_object* v_inputHash_1726_, lean_object* v_cache_1727_, lean_object* v_a_1728_){
_start:
{
uint64_t v_inputHash_boxed_1729_; lean_object* v_res_1730_; 
v_inputHash_boxed_1729_ = lean_unbox_uint64(v_inputHash_1726_);
lean_dec_ref(v_inputHash_1726_);
v_res_1730_ = l_Lake_CacheRef_get_x3f(v_inputHash_boxed_1729_, v_cache_1727_);
lean_dec(v_cache_1727_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg(lean_object* v_inst_1731_, uint64_t v_inputHash_1732_, lean_object* v_val_1733_, lean_object* v_cache_1734_, uint8_t v_platformIndependent_1735_){
_start:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1737_ = lean_st_ref_take(v_cache_1734_);
v___x_1738_ = lean_apply_1(v_inst_1731_, v_val_1733_);
v___x_1739_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1732_, v___x_1738_, v___x_1737_, v_platformIndependent_1735_);
v___x_1740_ = lean_st_ref_set(v_cache_1734_, v___x_1739_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg___boxed(lean_object* v_inst_1741_, lean_object* v_inputHash_1742_, lean_object* v_val_1743_, lean_object* v_cache_1744_, lean_object* v_platformIndependent_1745_, lean_object* v_a_1746_){
_start:
{
uint64_t v_inputHash_boxed_1747_; uint8_t v_platformIndependent_boxed_1748_; lean_object* v_res_1749_; 
v_inputHash_boxed_1747_ = lean_unbox_uint64(v_inputHash_1742_);
lean_dec_ref(v_inputHash_1742_);
v_platformIndependent_boxed_1748_ = lean_unbox(v_platformIndependent_1745_);
v_res_1749_ = l_Lake_CacheRef_insert___redArg(v_inst_1741_, v_inputHash_boxed_1747_, v_val_1743_, v_cache_1744_, v_platformIndependent_boxed_1748_);
lean_dec(v_cache_1744_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert(lean_object* v_00_u03b1_1750_, lean_object* v_inst_1751_, uint64_t v_inputHash_1752_, lean_object* v_val_1753_, lean_object* v_cache_1754_, uint8_t v_platformIndependent_1755_){
_start:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1757_ = lean_st_ref_take(v_cache_1754_);
v___x_1758_ = lean_apply_1(v_inst_1751_, v_val_1753_);
v___x_1759_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1752_, v___x_1758_, v___x_1757_, v_platformIndependent_1755_);
v___x_1760_ = lean_st_ref_set(v_cache_1754_, v___x_1759_);
return v___x_1760_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___boxed(lean_object* v_00_u03b1_1761_, lean_object* v_inst_1762_, lean_object* v_inputHash_1763_, lean_object* v_val_1764_, lean_object* v_cache_1765_, lean_object* v_platformIndependent_1766_, lean_object* v_a_1767_){
_start:
{
uint64_t v_inputHash_boxed_1768_; uint8_t v_platformIndependent_boxed_1769_; lean_object* v_res_1770_; 
v_inputHash_boxed_1768_ = lean_unbox_uint64(v_inputHash_1763_);
lean_dec_ref(v_inputHash_1763_);
v_platformIndependent_boxed_1769_ = lean_unbox(v_platformIndependent_1766_);
v_res_1770_ = l_Lake_CacheRef_insert(v_00_u03b1_1761_, v_inst_1762_, v_inputHash_boxed_1768_, v_val_1764_, v_cache_1765_, v_platformIndependent_boxed_1769_);
lean_dec(v_cache_1765_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString(lean_object* v_s_1773_){
_start:
{
lean_inc_ref(v_s_1773_);
return v_s_1773_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString___boxed(lean_object* v_s_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l_Lake_CacheServiceName_ofString(v_s_1774_);
lean_dec_ref(v_s_1774_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString(lean_object* v_self_1776_){
_start:
{
lean_inc_ref(v_self_1776_);
return v_self_1776_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString___boxed(lean_object* v_self_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Lake_CacheServiceName_toString(v_self_1777_);
lean_dec_ref(v_self_1777_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_fromJson_x3f(lean_object* v_j_1781_){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = l_Lean_Json_getStr_x3f(v_j_1781_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1790_; 
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1785_ = v___x_1782_;
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v___x_1782_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1788_; 
if (v_isShared_1786_ == 0)
{
v___x_1788_ = v___x_1785_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1783_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
else
{
lean_object* v_a_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1798_; 
v_a_1791_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1798_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1798_ == 0)
{
v___x_1793_ = v___x_1782_;
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_a_1791_);
lean_dec(v___x_1782_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1796_; 
if (v_isShared_1794_ == 0)
{
v___x_1796_ = v___x_1793_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v_a_1791_);
v___x_1796_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
return v___x_1796_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_toJson(lean_object* v_self_1801_){
_start:
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1802_, 0, v_self_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(lean_object* v_x_1805_){
_start:
{
if (lean_obj_tag(v_x_1805_) == 0)
{
lean_object* v___x_1806_; 
v___x_1806_ = lean_unsigned_to_nat(0u);
return v___x_1806_;
}
else
{
lean_object* v___x_1807_; 
v___x_1807_ = lean_unsigned_to_nat(1u);
return v___x_1807_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx___boxed(lean_object* v_x_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(v_x_1808_);
lean_dec_ref(v_x_1808_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(lean_object* v_t_1810_, lean_object* v_k_1811_){
_start:
{
lean_object* v_s_1812_; lean_object* v___x_1813_; 
v_s_1812_ = lean_ctor_get(v_t_1810_, 0);
lean_inc_ref(v_s_1812_);
lean_dec_ref(v_t_1810_);
v___x_1813_ = lean_apply_1(v_k_1811_, v_s_1812_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(lean_object* v_motive_1814_, lean_object* v_ctorIdx_1815_, lean_object* v_t_1816_, lean_object* v_h_1817_, lean_object* v_k_1818_){
_start:
{
lean_object* v___x_1819_; 
v___x_1819_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1816_, v_k_1818_);
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___boxed(lean_object* v_motive_1820_, lean_object* v_ctorIdx_1821_, lean_object* v_t_1822_, lean_object* v_h_1823_, lean_object* v_k_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(v_motive_1820_, v_ctorIdx_1821_, v_t_1822_, v_h_1823_, v_k_1824_);
lean_dec(v_ctorIdx_1821_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim___redArg(lean_object* v_t_1826_, lean_object* v_str_1827_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1826_, v_str_1827_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim(lean_object* v_motive_1829_, lean_object* v_t_1830_, lean_object* v_h_1831_, lean_object* v_str_1832_){
_start:
{
lean_object* v___x_1833_; 
v___x_1833_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1830_, v_str_1832_);
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim___redArg(lean_object* v_t_1834_, lean_object* v_repo_1835_){
_start:
{
lean_object* v___x_1836_; 
v___x_1836_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1834_, v_repo_1835_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim(lean_object* v_motive_1837_, lean_object* v_t_1838_, lean_object* v_h_1839_, lean_object* v_repo_1840_){
_start:
{
lean_object* v___x_1841_; 
v___x_1841_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1838_, v_repo_1840_);
return v___x_1841_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofString(lean_object* v_s_1842_){
_start:
{
lean_object* v___x_1843_; 
v___x_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1843_, 0, v_s_1842_);
return v___x_1843_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofRepo(lean_object* v_fullName_1844_){
_start:
{
lean_object* v___x_1845_; 
v___x_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1845_, 0, v_fullName_1844_);
return v___x_1845_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheServiceScope_isRepo(lean_object* v_self_1846_){
_start:
{
if (lean_obj_tag(v_self_1846_) == 1)
{
uint8_t v___x_1847_; 
v___x_1847_ = 1;
return v___x_1847_;
}
else
{
uint8_t v___x_1848_; 
v___x_1848_ = 0;
return v___x_1848_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_isRepo___boxed(lean_object* v_self_1849_){
_start:
{
uint8_t v_res_1850_; lean_object* v_r_1851_; 
v_res_1850_ = l_Lake_CacheServiceScope_isRepo(v_self_1849_);
lean_dec_ref(v_self_1849_);
v_r_1851_ = lean_box(v_res_1850_);
return v_r_1851_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString(lean_object* v_self_1852_){
_start:
{
lean_object* v_s_1853_; 
v_s_1853_ = lean_ctor_get(v_self_1852_, 0);
lean_inc_ref(v_s_1853_);
return v_s_1853_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString___boxed(lean_object* v_self_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l_Lake_CacheServiceScope_toString(v_self_1854_);
lean_dec_ref(v_self_1854_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(lean_object* v_self_1858_){
_start:
{
lean_object* v_s_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1866_; 
v_s_1859_ = lean_ctor_get(v_self_1858_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v_self_1858_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1861_ = v_self_1858_;
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_s_1859_);
lean_dec(v_self_1858_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set_tag(v___x_1861_, 3);
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_s_1859_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_ofData(lean_object* v_data_1876_){
_start:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1877_ = lean_box(0);
v___x_1878_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1878_, 0, v_data_1876_);
lean_ctor_set(v___x_1878_, 1, v___x_1877_);
lean_ctor_set(v___x_1878_, 2, v___x_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(lean_object* v_x_1879_){
_start:
{
if (lean_obj_tag(v_x_1879_) == 0)
{
lean_object* v___x_1880_; 
v___x_1880_ = lean_box(0);
return v___x_1880_;
}
else
{
lean_object* v_val_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1888_; 
v_val_1881_ = lean_ctor_get(v_x_1879_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v_x_1879_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1883_ = v_x_1879_;
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_val_1881_);
lean_dec(v_x_1879_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1886_; 
if (v_isShared_1884_ == 0)
{
lean_ctor_set_tag(v___x_1883_, 3);
v___x_1886_ = v___x_1883_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_val_1881_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
}
static lean_object* _init_l_Lake_CacheOutput_toJson___closed__3(void){
_start:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1893_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__2));
v___x_1894_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__1));
v___x_1895_ = lean_box(1);
v___x_1896_ = l_Lake_JsonObject_insertJson(v___x_1895_, v___x_1894_, v___x_1893_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_toJson(lean_object* v_out_1900_){
_start:
{
lean_object* v_data_1901_; lean_object* v_service_x3f_1902_; lean_object* v_scope_x3f_1903_; lean_object* v_obj_1905_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v_obj_1912_; 
v_data_1901_ = lean_ctor_get(v_out_1900_, 0);
lean_inc(v_data_1901_);
v_service_x3f_1902_ = lean_ctor_get(v_out_1900_, 1);
lean_inc(v_service_x3f_1902_);
v_scope_x3f_1903_ = lean_ctor_get(v_out_1900_, 2);
lean_inc(v_scope_x3f_1903_);
lean_dec_ref(v_out_1900_);
v___x_1909_ = lean_obj_once(&l_Lake_CacheOutput_toJson___closed__3, &l_Lake_CacheOutput_toJson___closed__3_once, _init_l_Lake_CacheOutput_toJson___closed__3);
v___x_1910_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__4));
v___x_1911_ = l_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(v_service_x3f_1902_);
v_obj_1912_ = l_Lake_JsonObject_insertJson(v___x_1909_, v___x_1910_, v___x_1911_);
if (lean_obj_tag(v_scope_x3f_1903_) == 1)
{
lean_object* v_val_1913_; lean_object* v___y_1915_; uint8_t v___x_1918_; 
v_val_1913_ = lean_ctor_get(v_scope_x3f_1903_, 0);
lean_inc(v_val_1913_);
lean_dec_ref(v_scope_x3f_1903_);
v___x_1918_ = l_Lake_CacheServiceScope_isRepo(v_val_1913_);
if (v___x_1918_ == 0)
{
lean_object* v___x_1919_; 
v___x_1919_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__5));
v___y_1915_ = v___x_1919_;
goto v___jp_1914_;
}
else
{
lean_object* v___x_1920_; 
v___x_1920_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__6));
v___y_1915_ = v___x_1920_;
goto v___jp_1914_;
}
v___jp_1914_:
{
lean_object* v___x_1916_; lean_object* v_obj_1917_; 
v___x_1916_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(v_val_1913_);
v_obj_1917_ = l_Lake_JsonObject_insertJson(v_obj_1912_, v___y_1915_, v___x_1916_);
v_obj_1905_ = v_obj_1917_;
goto v___jp_1904_;
}
}
else
{
lean_dec(v_scope_x3f_1903_);
v_obj_1905_ = v_obj_1912_;
goto v___jp_1904_;
}
v___jp_1904_:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1906_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_1907_ = l_Lake_JsonObject_insertJson(v_obj_1905_, v___x_1906_, v_data_1901_);
v___x_1908_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1907_);
return v___x_1908_;
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(lean_object* v_x_1925_){
_start:
{
if (lean_obj_tag(v_x_1925_) == 0)
{
lean_object* v___x_1926_; 
v___x_1926_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0));
return v___x_1926_;
}
else
{
lean_object* v___x_1927_; 
v___x_1927_ = l_Lean_Json_getStr_x3f(v_x_1925_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1927_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1927_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1944_; 
v_a_1936_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1938_ = v___x_1927_;
v_isShared_1939_ = v_isSharedCheck_1944_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1927_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1944_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1940_, 0, v_a_1936_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 0, v___x_1940_);
v___x_1942_ = v___x_1938_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(lean_object* v_x_1945_){
_start:
{
if (lean_obj_tag(v_x_1945_) == 0)
{
lean_object* v___x_1946_; 
v___x_1946_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0));
return v___x_1946_;
}
else
{
lean_object* v___x_1947_; 
v___x_1947_ = l_Lean_Json_getStr_x3f(v_x_1945_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1947_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1947_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
else
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1964_; 
v_a_1956_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1958_ = v___x_1947_;
v_isShared_1959_ = v_isSharedCheck_1964_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1947_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1964_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1960_; lean_object* v___x_1962_; 
v___x_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1960_, 0, v_a_1956_);
if (v_isShared_1959_ == 0)
{
lean_ctor_set(v___x_1958_, 0, v___x_1960_);
v___x_1962_ = v___x_1958_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v___x_1960_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(lean_object* v_k_1965_, lean_object* v_t_1966_){
_start:
{
if (lean_obj_tag(v_t_1966_) == 0)
{
lean_object* v_k_1967_; lean_object* v_l_1968_; lean_object* v_r_1969_; uint8_t v___x_1970_; 
v_k_1967_ = lean_ctor_get(v_t_1966_, 1);
v_l_1968_ = lean_ctor_get(v_t_1966_, 3);
v_r_1969_ = lean_ctor_get(v_t_1966_, 4);
v___x_1970_ = lean_string_dec_lt(v_k_1965_, v_k_1967_);
if (v___x_1970_ == 0)
{
uint8_t v___x_1971_; 
v___x_1971_ = lean_string_dec_eq(v_k_1965_, v_k_1967_);
if (v___x_1971_ == 0)
{
v_t_1966_ = v_r_1969_;
goto _start;
}
else
{
return v___x_1971_;
}
}
else
{
v_t_1966_ = v_l_1968_;
goto _start;
}
}
else
{
uint8_t v___x_1974_; 
v___x_1974_ = 0;
return v___x_1974_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg___boxed(lean_object* v_k_1975_, lean_object* v_t_1976_){
_start:
{
uint8_t v_res_1977_; lean_object* v_r_1978_; 
v_res_1977_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v_k_1975_, v_t_1976_);
lean_dec(v_t_1976_);
lean_dec_ref(v_k_1975_);
v_r_1978_ = lean_box(v_res_1977_);
return v_r_1978_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_fromJson_x3f(lean_object* v_json_1985_){
_start:
{
if (lean_obj_tag(v_json_1985_) == 5)
{
lean_object* v_kvPairs_1990_; lean_object* v___x_1991_; uint8_t v___x_1992_; 
v_kvPairs_1990_ = lean_ctor_get(v_json_1985_, 0);
v___x_1991_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__1));
v___x_1992_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v___x_1991_, v_kvPairs_1990_);
if (v___x_1992_ == 0)
{
goto v___jp_1986_;
}
else
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
lean_inc(v_kvPairs_1990_);
lean_dec_ref(v_json_1985_);
v___x_1993_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_1994_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1990_, v___x_1993_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v___x_1995_; 
lean_dec(v_kvPairs_1990_);
v___x_1995_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__1));
return v___x_1995_;
}
else
{
lean_object* v_val_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2114_; 
v_val_1996_ = lean_ctor_get(v___x_1994_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_1998_ = v___x_1994_;
v_isShared_1999_ = v_isSharedCheck_2114_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_val_1996_);
lean_dec(v___x_1994_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2114_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___y_2001_; lean_object* v_a_2002_; lean_object* v___y_2008_; lean_object* v___y_2011_; lean_object* v_a_2051_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2090_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__4));
v___x_2091_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1990_, v___x_2090_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v___x_2092_; 
v___x_2092_ = lean_box(0);
v_a_2051_ = v___x_2092_;
goto v___jp_2050_;
}
else
{
lean_object* v_val_2093_; lean_object* v___x_2094_; 
v_val_2093_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_val_2093_);
lean_dec_ref(v___x_2091_);
v___x_2094_ = l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(v_val_2093_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2104_; 
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
lean_dec(v_kvPairs_1990_);
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2097_ = v___x_2094_;
v_isShared_2098_ = v_isSharedCheck_2104_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_a_2095_);
lean_dec(v___x_2094_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2104_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2102_; 
v___x_2099_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__4));
v___x_2100_ = lean_string_append(v___x_2099_, v_a_2095_);
lean_dec(v_a_2095_);
if (v_isShared_2098_ == 0)
{
lean_ctor_set(v___x_2097_, 0, v___x_2100_);
v___x_2102_ = v___x_2097_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_2100_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
else
{
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
lean_dec(v_kvPairs_1990_);
v_a_2105_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2094_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2094_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
lean_ctor_set_tag(v___x_2107_, 0);
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
else
{
lean_object* v_a_2113_; 
v_a_2113_ = lean_ctor_get(v___x_2094_, 0);
lean_inc(v_a_2113_);
lean_dec_ref(v___x_2094_);
v_a_2051_ = v_a_2113_;
goto v___jp_2050_;
}
}
}
v___jp_2000_:
{
lean_object* v___x_2003_; lean_object* v___x_2005_; 
v___x_2003_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2003_, 0, v_val_1996_);
lean_ctor_set(v___x_2003_, 1, v___y_2001_);
lean_ctor_set(v___x_2003_, 2, v_a_2002_);
if (v_isShared_1999_ == 0)
{
lean_ctor_set(v___x_1998_, 0, v___x_2003_);
v___x_2005_ = v___x_1998_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v___x_2003_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
v___jp_2007_:
{
lean_object* v___x_2009_; 
v___x_2009_ = lean_box(0);
v___y_2001_ = v___y_2008_;
v_a_2002_ = v___x_2009_;
goto v___jp_2000_;
}
v___jp_2010_:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__5));
v___x_2013_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1990_, v___x_2012_);
lean_dec(v_kvPairs_1990_);
if (lean_obj_tag(v___x_2013_) == 0)
{
v___y_2008_ = v___y_2011_;
goto v___jp_2007_;
}
else
{
lean_object* v_val_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2049_; 
v_val_2014_ = lean_ctor_get(v___x_2013_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v___x_2013_);
if (v_isSharedCheck_2049_ == 0)
{
v___x_2016_ = v___x_2013_;
v_isShared_2017_ = v_isSharedCheck_2049_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_val_2014_);
lean_dec(v___x_2013_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2049_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2018_; 
v___x_2018_ = l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(v_val_2014_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2028_; 
lean_del_object(v___x_2016_);
lean_dec(v___y_2011_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
v_a_2019_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2021_ = v___x_2018_;
v_isShared_2022_ = v_isSharedCheck_2028_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_2018_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2028_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2026_; 
v___x_2023_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__2));
v___x_2024_ = lean_string_append(v___x_2023_, v_a_2019_);
lean_dec(v_a_2019_);
if (v_isShared_2022_ == 0)
{
lean_ctor_set(v___x_2021_, 0, v___x_2024_);
v___x_2026_ = v___x_2021_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v___x_2024_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
else
{
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2036_; 
lean_del_object(v___x_2016_);
lean_dec(v___y_2011_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
v_a_2029_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2031_ = v___x_2018_;
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2018_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2034_; 
if (v_isShared_2032_ == 0)
{
lean_ctor_set_tag(v___x_2031_, 0);
v___x_2034_ = v___x_2031_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_a_2029_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
else
{
lean_object* v_a_2037_; 
v_a_2037_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_a_2037_);
lean_dec_ref(v___x_2018_);
if (lean_obj_tag(v_a_2037_) == 1)
{
lean_object* v_val_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2048_; 
v_val_2038_ = lean_ctor_get(v_a_2037_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v_a_2037_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2040_ = v_a_2037_;
v_isShared_2041_ = v_isSharedCheck_2048_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_val_2038_);
lean_dec(v_a_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2048_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2017_ == 0)
{
lean_ctor_set_tag(v___x_2016_, 0);
lean_ctor_set(v___x_2016_, 0, v_val_2038_);
v___x_2043_ = v___x_2016_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_val_2038_);
v___x_2043_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
lean_object* v___x_2045_; 
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v___x_2043_);
v___x_2045_ = v___x_2040_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
v___y_2001_ = v___y_2011_;
v_a_2002_ = v___x_2045_;
goto v___jp_2000_;
}
}
}
}
else
{
lean_dec(v_a_2037_);
lean_del_object(v___x_2016_);
v___y_2008_ = v___y_2011_;
goto v___jp_2007_;
}
}
}
}
}
}
v___jp_2050_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2052_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__6));
v___x_2053_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1990_, v___x_2052_);
if (lean_obj_tag(v___x_2053_) == 0)
{
v___y_2011_ = v_a_2051_;
goto v___jp_2010_;
}
else
{
lean_object* v_val_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2089_; 
v_val_2054_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2056_ = v___x_2053_;
v_isShared_2057_ = v_isSharedCheck_2089_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_val_2054_);
lean_dec(v___x_2053_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2089_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2058_; 
v___x_2058_ = l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(v_val_2054_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2068_; 
lean_del_object(v___x_2056_);
lean_dec(v_a_2051_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
lean_dec(v_kvPairs_1990_);
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2061_ = v___x_2058_;
v_isShared_2062_ = v_isSharedCheck_2068_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_dec(v___x_2058_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2068_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2066_; 
v___x_2063_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__3));
v___x_2064_ = lean_string_append(v___x_2063_, v_a_2059_);
lean_dec(v_a_2059_);
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 0, v___x_2064_);
v___x_2066_ = v___x_2061_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2064_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
else
{
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
lean_del_object(v___x_2056_);
lean_dec(v_a_2051_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
lean_dec(v_kvPairs_1990_);
v_a_2069_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2058_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2058_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
lean_ctor_set_tag(v___x_2071_, 0);
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
else
{
lean_object* v_a_2077_; 
v_a_2077_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2077_);
lean_dec_ref(v___x_2058_);
if (lean_obj_tag(v_a_2077_) == 1)
{
lean_object* v_val_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2088_; 
lean_dec(v_kvPairs_1990_);
v_val_2078_ = lean_ctor_get(v_a_2077_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_a_2077_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2080_ = v_a_2077_;
v_isShared_2081_ = v_isSharedCheck_2088_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_val_2078_);
lean_dec(v_a_2077_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2088_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 0, v_val_2078_);
v___x_2083_ = v___x_2056_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_val_2078_);
v___x_2083_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
lean_object* v___x_2085_; 
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 0, v___x_2083_);
v___x_2085_ = v___x_2080_;
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
v___y_2001_ = v_a_2051_;
v_a_2002_ = v___x_2085_;
goto v___jp_2000_;
}
}
}
}
else
{
lean_dec(v_a_2077_);
lean_del_object(v___x_2056_);
v___y_2011_ = v_a_2051_;
goto v___jp_2010_;
}
}
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
goto v___jp_1986_;
}
v___jp_1986_:
{
lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1987_ = lean_box(0);
v___x_1988_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1988_, 0, v_json_1985_);
lean_ctor_set(v___x_1988_, 1, v___x_1987_);
lean_ctor_set(v___x_1988_, 2, v___x_1987_);
v___x_1989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1988_);
return v___x_1989_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(lean_object* v_00_u03b2_2115_, lean_object* v_k_2116_, lean_object* v_t_2117_){
_start:
{
uint8_t v___x_2118_; 
v___x_2118_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v_k_2116_, v_t_2117_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___boxed(lean_object* v_00_u03b2_2119_, lean_object* v_k_2120_, lean_object* v_t_2121_){
_start:
{
uint8_t v_res_2122_; lean_object* v_r_2123_; 
v_res_2122_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(v_00_u03b2_2119_, v_k_2120_, v_t_2121_);
lean_dec(v_t_2121_);
lean_dec_ref(v_k_2120_);
v_r_2123_ = lean_box(v_res_2122_);
return v_r_2123_;
}
}
static lean_object* _init_l_Lake_instInhabitedCache_default(void){
_start:
{
lean_object* v___x_2126_; 
v___x_2126_ = l_System_instInhabitedFilePath_default;
return v___x_2126_;
}
}
static lean_object* _init_l_Lake_instInhabitedCache(void){
_start:
{
lean_object* v___x_2127_; 
v___x_2127_ = l_System_instInhabitedFilePath_default;
return v___x_2127_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactDir(lean_object* v_cache_2129_){
_start:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2130_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2131_ = l_System_FilePath_join(v_cache_2129_, v___x_2130_);
return v___x_2131_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath(lean_object* v_cache_2133_, uint64_t v_contentHash_2134_, lean_object* v_ext_2135_){
_start:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; uint8_t v___x_2140_; 
v___x_2136_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2137_ = l_System_FilePath_join(v_cache_2133_, v___x_2136_);
v___x_2138_ = lean_string_utf8_byte_size(v_ext_2135_);
v___x_2139_ = lean_unsigned_to_nat(0u);
v___x_2140_ = lean_nat_dec_eq(v___x_2138_, v___x_2139_);
if (v___x_2140_ == 0)
{
lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2141_ = l_Lake_Hash_hex(v_contentHash_2134_);
v___x_2142_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2143_ = lean_string_append(v___x_2141_, v___x_2142_);
v___x_2144_ = lean_string_append(v___x_2143_, v_ext_2135_);
v___x_2145_ = l_System_FilePath_join(v___x_2137_, v___x_2144_);
return v___x_2145_;
}
else
{
lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = l_Lake_Hash_hex(v_contentHash_2134_);
v___x_2147_ = l_System_FilePath_join(v___x_2137_, v___x_2146_);
return v___x_2147_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath___boxed(lean_object* v_cache_2148_, lean_object* v_contentHash_2149_, lean_object* v_ext_2150_){
_start:
{
uint64_t v_contentHash_boxed_2151_; lean_object* v_res_2152_; 
v_contentHash_boxed_2151_ = lean_unbox_uint64(v_contentHash_2149_);
lean_dec_ref(v_contentHash_2149_);
v_res_2152_ = l_Lake_Cache_artifactPath(v_cache_2148_, v_contentHash_boxed_2151_, v_ext_2150_);
lean_dec_ref(v_ext_2150_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f(lean_object* v_cache_2153_, lean_object* v_descr_2154_){
_start:
{
uint64_t v_hash_2156_; lean_object* v_ext_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___y_2161_; lean_object* v___x_2175_; lean_object* v___x_2176_; uint8_t v___x_2177_; 
v_hash_2156_ = lean_ctor_get_uint64(v_descr_2154_, sizeof(void*)*1);
v_ext_2157_ = lean_ctor_get(v_descr_2154_, 0);
v___x_2158_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2159_ = l_System_FilePath_join(v_cache_2153_, v___x_2158_);
v___x_2175_ = lean_string_utf8_byte_size(v_ext_2157_);
v___x_2176_ = lean_unsigned_to_nat(0u);
v___x_2177_ = lean_nat_dec_eq(v___x_2175_, v___x_2176_);
if (v___x_2177_ == 0)
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2178_ = l_Lake_Hash_hex(v_hash_2156_);
v___x_2179_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2180_ = lean_string_append(v___x_2178_, v___x_2179_);
v___x_2181_ = lean_string_append(v___x_2180_, v_ext_2157_);
v___y_2161_ = v___x_2181_;
goto v___jp_2160_;
}
else
{
lean_object* v___x_2182_; 
v___x_2182_ = l_Lake_Hash_hex(v_hash_2156_);
v___y_2161_ = v___x_2182_;
goto v___jp_2160_;
}
v___jp_2160_:
{
lean_object* v_path_2162_; lean_object* v___x_2163_; 
v_path_2162_ = l_System_FilePath_join(v___x_2159_, v___y_2161_);
v___x_2163_ = lean_io_metadata(v_path_2162_);
if (lean_obj_tag(v___x_2163_) == 0)
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2173_; 
v_a_2164_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2166_ = v___x_2163_;
v_isShared_2167_ = v_isSharedCheck_2173_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2163_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2173_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v_modified_2168_; lean_object* v___x_2169_; lean_object* v___x_2171_; 
v_modified_2168_ = lean_ctor_get(v_a_2164_, 1);
lean_inc_ref(v_modified_2168_);
lean_dec(v_a_2164_);
lean_inc_ref(v_path_2162_);
v___x_2169_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2169_, 0, v_descr_2154_);
lean_ctor_set(v___x_2169_, 1, v_path_2162_);
lean_ctor_set(v___x_2169_, 2, v_path_2162_);
lean_ctor_set(v___x_2169_, 3, v_modified_2168_);
if (v_isShared_2167_ == 0)
{
lean_ctor_set_tag(v___x_2166_, 1);
lean_ctor_set(v___x_2166_, 0, v___x_2169_);
v___x_2171_ = v___x_2166_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2169_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
}
}
}
else
{
lean_object* v___x_2174_; 
lean_dec_ref(v___x_2163_);
lean_dec_ref(v_path_2162_);
lean_dec_ref(v_descr_2154_);
v___x_2174_ = lean_box(0);
return v___x_2174_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f___boxed(lean_object* v_cache_2183_, lean_object* v_descr_2184_, lean_object* v_a_2185_){
_start:
{
lean_object* v_res_2186_; 
v_res_2186_ = l_Lake_Cache_getArtifact_x3f(v_cache_2183_, v_descr_2184_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact(lean_object* v_cache_2189_, lean_object* v_descr_2190_){
_start:
{
uint64_t v_hash_2192_; lean_object* v_ext_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___y_2197_; lean_object* v___x_2226_; lean_object* v___x_2227_; uint8_t v___x_2228_; 
v_hash_2192_ = lean_ctor_get_uint64(v_descr_2190_, sizeof(void*)*1);
v_ext_2193_ = lean_ctor_get(v_descr_2190_, 0);
v___x_2194_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2195_ = l_System_FilePath_join(v_cache_2189_, v___x_2194_);
v___x_2226_ = lean_string_utf8_byte_size(v_ext_2193_);
v___x_2227_ = lean_unsigned_to_nat(0u);
v___x_2228_ = lean_nat_dec_eq(v___x_2226_, v___x_2227_);
if (v___x_2228_ == 0)
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
v___x_2229_ = l_Lake_Hash_hex(v_hash_2192_);
v___x_2230_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2231_ = lean_string_append(v___x_2229_, v___x_2230_);
v___x_2232_ = lean_string_append(v___x_2231_, v_ext_2193_);
v___y_2197_ = v___x_2232_;
goto v___jp_2196_;
}
else
{
lean_object* v___x_2233_; 
v___x_2233_ = l_Lake_Hash_hex(v_hash_2192_);
v___y_2197_ = v___x_2233_;
goto v___jp_2196_;
}
v___jp_2196_:
{
lean_object* v_path_2198_; lean_object* v___x_2199_; 
v_path_2198_ = l_System_FilePath_join(v___x_2195_, v___y_2197_);
v___x_2199_ = lean_io_metadata(v_path_2198_);
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2209_; 
v_a_2200_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2202_ = v___x_2199_;
v_isShared_2203_ = v_isSharedCheck_2209_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2199_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2209_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v_modified_2204_; lean_object* v___x_2205_; lean_object* v___x_2207_; 
v_modified_2204_ = lean_ctor_get(v_a_2200_, 1);
lean_inc_ref(v_modified_2204_);
lean_dec(v_a_2200_);
lean_inc_ref(v_path_2198_);
v___x_2205_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2205_, 0, v_descr_2190_);
lean_ctor_set(v___x_2205_, 1, v_path_2198_);
lean_ctor_set(v___x_2205_, 2, v_path_2198_);
lean_ctor_set(v___x_2205_, 3, v_modified_2204_);
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v___x_2205_);
v___x_2207_ = v___x_2202_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
else
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2225_; 
lean_dec_ref(v_descr_2190_);
v_a_2210_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2212_ = v___x_2199_;
v_isShared_2213_ = v_isSharedCheck_2225_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2199_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2225_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
if (lean_obj_tag(v_a_2210_) == 11)
{
lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2217_; 
lean_dec_ref(v_a_2210_);
v___x_2214_ = ((lean_object*)(l_Lake_Cache_getArtifact___closed__0));
v___x_2215_ = lean_string_append(v___x_2214_, v_path_2198_);
lean_dec_ref(v_path_2198_);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 0, v___x_2215_);
v___x_2217_ = v___x_2212_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v___x_2215_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
else
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2223_; 
lean_dec_ref(v_path_2198_);
v___x_2219_ = ((lean_object*)(l_Lake_Cache_getArtifact___closed__1));
v___x_2220_ = lean_io_error_to_string(v_a_2210_);
v___x_2221_ = lean_string_append(v___x_2219_, v___x_2220_);
lean_dec_ref(v___x_2220_);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 0, v___x_2221_);
v___x_2223_ = v___x_2212_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v___x_2221_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
return v___x_2223_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact___boxed(lean_object* v_cache_2234_, lean_object* v_descr_2235_, lean_object* v_a_2236_){
_start:
{
lean_object* v_res_2237_; 
v_res_2237_ = l_Lake_Cache_getArtifact(v_cache_2234_, v_descr_2235_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifactPaths___lam__0(lean_object* v_cache_2238_, lean_object* v_out_2239_, lean_object* v___y_2240_){
_start:
{
lean_object* v___y_2243_; lean_object* v___y_2244_; uint64_t v_hash_2246_; lean_object* v_ext_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___y_2251_; lean_object* v___x_2259_; lean_object* v___x_2260_; uint8_t v___x_2261_; 
v_hash_2246_ = lean_ctor_get_uint64(v_out_2239_, sizeof(void*)*1);
v_ext_2247_ = lean_ctor_get(v_out_2239_, 0);
v___x_2248_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2249_ = l_System_FilePath_join(v_cache_2238_, v___x_2248_);
v___x_2259_ = lean_string_utf8_byte_size(v_ext_2247_);
v___x_2260_ = lean_unsigned_to_nat(0u);
v___x_2261_ = lean_nat_dec_eq(v___x_2259_, v___x_2260_);
if (v___x_2261_ == 0)
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2262_ = l_Lake_Hash_hex(v_hash_2246_);
v___x_2263_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2264_ = lean_string_append(v___x_2262_, v___x_2263_);
v___x_2265_ = lean_string_append(v___x_2264_, v_ext_2247_);
v___y_2251_ = v___x_2265_;
goto v___jp_2250_;
}
else
{
lean_object* v___x_2266_; 
v___x_2266_ = l_Lake_Hash_hex(v_hash_2246_);
v___y_2251_ = v___x_2266_;
goto v___jp_2250_;
}
v___jp_2242_:
{
lean_object* v___x_2245_; 
v___x_2245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2245_, 0, v___y_2243_);
lean_ctor_set(v___x_2245_, 1, v___y_2244_);
return v___x_2245_;
}
v___jp_2250_:
{
lean_object* v_art_2252_; uint8_t v___x_2253_; 
v_art_2252_ = l_System_FilePath_join(v___x_2249_, v___y_2251_);
v___x_2253_ = l_System_FilePath_pathExists(v_art_2252_);
if (v___x_2253_ == 0)
{
lean_object* v___x_2254_; lean_object* v___x_2255_; uint8_t v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2254_ = ((lean_object*)(l_Lake_Cache_getArtifact___closed__0));
v___x_2255_ = lean_string_append(v___x_2254_, v_art_2252_);
v___x_2256_ = 3;
v___x_2257_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2257_, 0, v___x_2255_);
lean_ctor_set_uint8(v___x_2257_, sizeof(void*)*1, v___x_2256_);
v___x_2258_ = lean_array_push(v___y_2240_, v___x_2257_);
v___y_2243_ = v_art_2252_;
v___y_2244_ = v___x_2258_;
goto v___jp_2242_;
}
else
{
v___y_2243_ = v_art_2252_;
v___y_2244_ = v___y_2240_;
goto v___jp_2242_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifactPaths___lam__0___boxed(lean_object* v_cache_2267_, lean_object* v_out_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l_Lake_Cache_getArtifactPaths___lam__0(v_cache_2267_, v_out_2268_, v___y_2269_);
lean_dec_ref(v_out_2268_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0___redArg(lean_object* v_n_2272_, lean_object* v_f_2273_, lean_object* v_xs_2274_, lean_object* v_k_2275_, lean_object* v_acc_2276_, lean_object* v___y_2277_){
_start:
{
uint8_t v___x_2279_; 
v___x_2279_ = lean_nat_dec_lt(v_k_2275_, v_n_2272_);
if (v___x_2279_ == 0)
{
lean_object* v___x_2280_; 
lean_dec(v_k_2275_);
lean_dec_ref(v_f_2273_);
v___x_2280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2280_, 0, v_acc_2276_);
lean_ctor_set(v___x_2280_, 1, v___y_2277_);
return v___x_2280_;
}
else
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2281_ = lean_array_fget_borrowed(v_xs_2274_, v_k_2275_);
lean_inc_ref(v_f_2273_);
lean_inc(v___x_2281_);
v___x_2282_ = lean_apply_3(v_f_2273_, v___x_2281_, v___y_2277_, lean_box(0));
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; lean_object* v_a_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
v_a_2284_ = lean_ctor_get(v___x_2282_, 1);
lean_inc(v_a_2284_);
lean_dec_ref(v___x_2282_);
v___x_2285_ = lean_unsigned_to_nat(1u);
v___x_2286_ = lean_nat_add(v_k_2275_, v___x_2285_);
lean_dec(v_k_2275_);
v___x_2287_ = lean_array_push(v_acc_2276_, v_a_2283_);
v_k_2275_ = v___x_2286_;
v_acc_2276_ = v___x_2287_;
v___y_2277_ = v_a_2284_;
goto _start;
}
else
{
lean_object* v_a_2289_; lean_object* v_a_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2297_; 
lean_dec_ref(v_acc_2276_);
lean_dec(v_k_2275_);
lean_dec_ref(v_f_2273_);
v_a_2289_ = lean_ctor_get(v___x_2282_, 0);
v_a_2290_ = lean_ctor_get(v___x_2282_, 1);
v_isSharedCheck_2297_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2292_ = v___x_2282_;
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_a_2290_);
lean_inc(v_a_2289_);
lean_dec(v___x_2282_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2295_; 
if (v_isShared_2293_ == 0)
{
v___x_2295_ = v___x_2292_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v_a_2289_);
lean_ctor_set(v_reuseFailAlloc_2296_, 1, v_a_2290_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0___redArg___boxed(lean_object* v_n_2298_, lean_object* v_f_2299_, lean_object* v_xs_2300_, lean_object* v_k_2301_, lean_object* v_acc_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0___redArg(v_n_2298_, v_f_2299_, v_xs_2300_, v_k_2301_, v_acc_2302_, v___y_2303_);
lean_dec_ref(v_xs_2300_);
lean_dec(v_n_2298_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifactPaths(lean_object* v_cache_2308_, lean_object* v_descrs_2309_, lean_object* v_a_2310_){
_start:
{
lean_object* v___f_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___f_2312_ = lean_alloc_closure((void*)(l_Lake_Cache_getArtifactPaths___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2312_, 0, v_cache_2308_);
v___x_2313_ = lean_array_get_size(v_descrs_2309_);
v___x_2314_ = lean_unsigned_to_nat(0u);
v___x_2315_ = ((lean_object*)(l_Lake_Cache_getArtifactPaths___closed__0));
lean_inc_ref(v_a_2310_);
v___x_2316_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0___redArg(v___x_2313_, v___f_2312_, v_descrs_2309_, v___x_2314_, v___x_2315_, v_a_2310_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v_a_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; uint8_t v___x_2320_; 
v_a_2317_ = lean_ctor_get(v___x_2316_, 1);
lean_inc(v_a_2317_);
v___x_2318_ = lean_array_get_size(v_a_2310_);
lean_dec_ref(v_a_2310_);
v___x_2319_ = lean_array_get_size(v_a_2317_);
v___x_2320_ = lean_nat_dec_eq(v___x_2318_, v___x_2319_);
if (v___x_2320_ == 0)
{
lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2327_ == 0)
{
lean_object* v_unused_2328_; lean_object* v_unused_2329_; 
v_unused_2328_ = lean_ctor_get(v___x_2316_, 1);
lean_dec(v_unused_2328_);
v_unused_2329_ = lean_ctor_get(v___x_2316_, 0);
lean_dec(v_unused_2329_);
v___x_2322_ = v___x_2316_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_dec(v___x_2316_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
lean_ctor_set_tag(v___x_2322_, 1);
lean_ctor_set(v___x_2322_, 0, v___x_2318_);
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v___x_2318_);
lean_ctor_set(v_reuseFailAlloc_2326_, 1, v_a_2317_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
else
{
lean_dec(v_a_2317_);
return v___x_2316_;
}
}
else
{
lean_dec_ref(v_a_2310_);
return v___x_2316_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifactPaths___boxed(lean_object* v_cache_2330_, lean_object* v_descrs_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_){
_start:
{
lean_object* v_res_2334_; 
v_res_2334_ = l_Lake_Cache_getArtifactPaths(v_cache_2330_, v_descrs_2331_, v_a_2332_);
lean_dec_ref(v_descrs_2331_);
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0(lean_object* v_00_u03b1_2335_, lean_object* v_00_u03b2_2336_, lean_object* v_n_2337_, lean_object* v_f_2338_, lean_object* v_xs_2339_, lean_object* v_k_2340_, lean_object* v_h_2341_, lean_object* v_acc_2342_, lean_object* v___y_2343_){
_start:
{
lean_object* v___x_2345_; 
v___x_2345_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0___redArg(v_n_2337_, v_f_2338_, v_xs_2339_, v_k_2340_, v_acc_2342_, v___y_2343_);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0___boxed(lean_object* v_00_u03b1_2346_, lean_object* v_00_u03b2_2347_, lean_object* v_n_2348_, lean_object* v_f_2349_, lean_object* v_xs_2350_, lean_object* v_k_2351_, lean_object* v_h_2352_, lean_object* v_acc_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00Lake_Cache_getArtifactPaths_spec__0(v_00_u03b1_2346_, v_00_u03b2_2347_, v_n_2348_, v_f_2349_, v_xs_2350_, v_k_2351_, v_h_2352_, v_acc_2353_, v___y_2354_);
lean_dec_ref(v_xs_2350_);
lean_dec(v_n_2348_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsDir(lean_object* v_cache_2358_){
_start:
{
lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2359_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2360_ = l_System_FilePath_join(v_cache_2358_, v___x_2359_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile(lean_object* v_cache_2362_, lean_object* v_scope_2363_, uint64_t v_inputHash_2364_){
_start:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2365_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2366_ = l_System_FilePath_join(v_cache_2362_, v___x_2365_);
v___x_2367_ = l_System_FilePath_join(v___x_2366_, v_scope_2363_);
v___x_2368_ = l_Lake_Hash_hex(v_inputHash_2364_);
v___x_2369_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2370_ = lean_string_append(v___x_2368_, v___x_2369_);
v___x_2371_ = l_System_FilePath_join(v___x_2367_, v___x_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile___boxed(lean_object* v_cache_2372_, lean_object* v_scope_2373_, lean_object* v_inputHash_2374_){
_start:
{
uint64_t v_inputHash_boxed_2375_; lean_object* v_res_2376_; 
v_inputHash_boxed_2375_ = lean_unbox_uint64(v_inputHash_2374_);
lean_dec_ref(v_inputHash_2374_);
v_res_2376_ = l_Lake_Cache_outputsFile(v_cache_2372_, v_scope_2373_, v_inputHash_boxed_2375_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(lean_object* v_cache_2377_, lean_object* v_scope_2378_, uint64_t v_inputHash_2379_, lean_object* v_out_2380_, lean_object* v_service_x3f_2381_, lean_object* v_remoteScope_x3f_2382_){
_start:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v_file_2390_; lean_object* v___x_2391_; 
v___x_2384_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2385_ = l_System_FilePath_join(v_cache_2377_, v___x_2384_);
v___x_2386_ = l_System_FilePath_join(v___x_2385_, v_scope_2378_);
v___x_2387_ = l_Lake_Hash_hex(v_inputHash_2379_);
v___x_2388_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2389_ = lean_string_append(v___x_2387_, v___x_2388_);
v_file_2390_ = l_System_FilePath_join(v___x_2386_, v___x_2389_);
lean_inc_ref(v_file_2390_);
v___x_2391_ = l_Lake_createParentDirs(v_file_2390_);
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; 
lean_dec_ref(v___x_2391_);
v___x_2392_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2392_, 0, v_out_2380_);
lean_ctor_set(v___x_2392_, 1, v_service_x3f_2381_);
lean_ctor_set(v___x_2392_, 2, v_remoteScope_x3f_2382_);
v___x_2393_ = l_Lake_CacheOutput_toJson(v___x_2392_);
v___x_2394_ = lean_unsigned_to_nat(80u);
v___x_2395_ = l_Lean_Json_pretty(v___x_2393_, v___x_2394_);
v___x_2396_ = l_IO_FS_writeFile(v_file_2390_, v___x_2395_);
lean_dec_ref(v___x_2395_);
lean_dec_ref(v_file_2390_);
return v___x_2396_;
}
else
{
lean_dec_ref(v_file_2390_);
lean_dec(v_remoteScope_x3f_2382_);
lean_dec(v_service_x3f_2381_);
lean_dec(v_out_2380_);
return v___x_2391_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore___boxed(lean_object* v_cache_2397_, lean_object* v_scope_2398_, lean_object* v_inputHash_2399_, lean_object* v_out_2400_, lean_object* v_service_x3f_2401_, lean_object* v_remoteScope_x3f_2402_, lean_object* v_a_2403_){
_start:
{
uint64_t v_inputHash_boxed_2404_; lean_object* v_res_2405_; 
v_inputHash_boxed_2404_ = lean_unbox_uint64(v_inputHash_2399_);
lean_dec_ref(v_inputHash_2399_);
v_res_2405_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2397_, v_scope_2398_, v_inputHash_boxed_2404_, v_out_2400_, v_service_x3f_2401_, v_remoteScope_x3f_2402_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg(lean_object* v_inst_2406_, lean_object* v_cache_2407_, lean_object* v_scope_2408_, uint64_t v_inputHash_2409_, lean_object* v_outputs_2410_){
_start:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; 
v___x_2412_ = lean_apply_1(v_inst_2406_, v_outputs_2410_);
v___x_2413_ = lean_box(0);
v___x_2414_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2407_, v_scope_2408_, v_inputHash_2409_, v___x_2412_, v___x_2413_, v___x_2413_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg___boxed(lean_object* v_inst_2415_, lean_object* v_cache_2416_, lean_object* v_scope_2417_, lean_object* v_inputHash_2418_, lean_object* v_outputs_2419_, lean_object* v_a_2420_){
_start:
{
uint64_t v_inputHash_boxed_2421_; lean_object* v_res_2422_; 
v_inputHash_boxed_2421_ = lean_unbox_uint64(v_inputHash_2418_);
lean_dec_ref(v_inputHash_2418_);
v_res_2422_ = l_Lake_Cache_writeOutputs___redArg(v_inst_2415_, v_cache_2416_, v_scope_2417_, v_inputHash_boxed_2421_, v_outputs_2419_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs(lean_object* v_00_u03b1_2423_, lean_object* v_inst_2424_, lean_object* v_cache_2425_, lean_object* v_scope_2426_, uint64_t v_inputHash_2427_, lean_object* v_outputs_2428_){
_start:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2430_ = lean_apply_1(v_inst_2424_, v_outputs_2428_);
v___x_2431_ = lean_box(0);
v___x_2432_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2425_, v_scope_2426_, v_inputHash_2427_, v___x_2430_, v___x_2431_, v___x_2431_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___boxed(lean_object* v_00_u03b1_2433_, lean_object* v_inst_2434_, lean_object* v_cache_2435_, lean_object* v_scope_2436_, lean_object* v_inputHash_2437_, lean_object* v_outputs_2438_, lean_object* v_a_2439_){
_start:
{
uint64_t v_inputHash_boxed_2440_; lean_object* v_res_2441_; 
v_inputHash_boxed_2440_ = lean_unbox_uint64(v_inputHash_2437_);
lean_dec_ref(v_inputHash_2437_);
v_res_2441_ = l_Lake_Cache_writeOutputs(v_00_u03b1_2433_, v_inst_2434_, v_cache_2435_, v_scope_2436_, v_inputHash_boxed_2440_, v_outputs_2438_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(lean_object* v_cache_2442_, lean_object* v_scope_2443_, lean_object* v_service_x3f_2444_, lean_object* v_remoteScope_x3f_2445_, lean_object* v_x_2446_, lean_object* v_x_2447_){
_start:
{
if (lean_obj_tag(v_x_2447_) == 0)
{
lean_object* v___x_2449_; 
lean_dec(v_remoteScope_x3f_2445_);
lean_dec(v_service_x3f_2444_);
lean_dec_ref(v_scope_2443_);
lean_dec_ref(v_cache_2442_);
v___x_2449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2449_, 0, v_x_2446_);
return v___x_2449_;
}
else
{
lean_object* v_value_2450_; lean_object* v_key_2451_; lean_object* v_tail_2452_; lean_object* v_out_2453_; uint64_t v___x_2454_; lean_object* v___x_2455_; 
v_value_2450_ = lean_ctor_get(v_x_2447_, 1);
lean_inc(v_value_2450_);
v_key_2451_ = lean_ctor_get(v_x_2447_, 0);
lean_inc(v_key_2451_);
v_tail_2452_ = lean_ctor_get(v_x_2447_, 2);
lean_inc(v_tail_2452_);
lean_dec_ref(v_x_2447_);
v_out_2453_ = lean_ctor_get(v_value_2450_, 0);
lean_inc(v_out_2453_);
lean_dec(v_value_2450_);
v___x_2454_ = lean_unbox_uint64(v_key_2451_);
lean_dec(v_key_2451_);
lean_inc(v_remoteScope_x3f_2445_);
lean_inc(v_service_x3f_2444_);
lean_inc_ref(v_scope_2443_);
lean_inc_ref(v_cache_2442_);
v___x_2455_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2442_, v_scope_2443_, v___x_2454_, v_out_2453_, v_service_x3f_2444_, v_remoteScope_x3f_2445_);
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2456_);
lean_dec_ref(v___x_2455_);
v_x_2446_ = v_a_2456_;
v_x_2447_ = v_tail_2452_;
goto _start;
}
else
{
lean_dec(v_tail_2452_);
lean_dec(v_remoteScope_x3f_2445_);
lean_dec(v_service_x3f_2444_);
lean_dec_ref(v_scope_2443_);
lean_dec_ref(v_cache_2442_);
return v___x_2455_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0___boxed(lean_object* v_cache_2458_, lean_object* v_scope_2459_, lean_object* v_service_x3f_2460_, lean_object* v_remoteScope_x3f_2461_, lean_object* v_x_2462_, lean_object* v_x_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(v_cache_2458_, v_scope_2459_, v_service_x3f_2460_, v_remoteScope_x3f_2461_, v_x_2462_, v_x_2463_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(lean_object* v_cache_2466_, lean_object* v_scope_2467_, lean_object* v_service_x3f_2468_, lean_object* v_remoteScope_x3f_2469_, lean_object* v_as_2470_, size_t v_i_2471_, size_t v_stop_2472_, lean_object* v_b_2473_){
_start:
{
uint8_t v___x_2475_; 
v___x_2475_ = lean_usize_dec_eq(v_i_2471_, v_stop_2472_);
if (v___x_2475_ == 0)
{
lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2476_ = lean_array_uget_borrowed(v_as_2470_, v_i_2471_);
v___x_2477_ = lean_box(0);
lean_inc(v___x_2476_);
lean_inc(v_remoteScope_x3f_2469_);
lean_inc(v_service_x3f_2468_);
lean_inc_ref(v_scope_2467_);
lean_inc_ref(v_cache_2466_);
v___x_2478_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(v_cache_2466_, v_scope_2467_, v_service_x3f_2468_, v_remoteScope_x3f_2469_, v___x_2477_, v___x_2476_);
if (lean_obj_tag(v___x_2478_) == 0)
{
lean_object* v_a_2479_; size_t v___x_2480_; size_t v___x_2481_; 
v_a_2479_ = lean_ctor_get(v___x_2478_, 0);
lean_inc(v_a_2479_);
lean_dec_ref(v___x_2478_);
v___x_2480_ = ((size_t)1ULL);
v___x_2481_ = lean_usize_add(v_i_2471_, v___x_2480_);
v_i_2471_ = v___x_2481_;
v_b_2473_ = v_a_2479_;
goto _start;
}
else
{
lean_dec(v_remoteScope_x3f_2469_);
lean_dec(v_service_x3f_2468_);
lean_dec_ref(v_scope_2467_);
lean_dec_ref(v_cache_2466_);
return v___x_2478_;
}
}
else
{
lean_object* v___x_2483_; 
lean_dec(v_remoteScope_x3f_2469_);
lean_dec(v_service_x3f_2468_);
lean_dec_ref(v_scope_2467_);
lean_dec_ref(v_cache_2466_);
v___x_2483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2483_, 0, v_b_2473_);
return v___x_2483_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1___boxed(lean_object* v_cache_2484_, lean_object* v_scope_2485_, lean_object* v_service_x3f_2486_, lean_object* v_remoteScope_x3f_2487_, lean_object* v_as_2488_, lean_object* v_i_2489_, lean_object* v_stop_2490_, lean_object* v_b_2491_, lean_object* v___y_2492_){
_start:
{
size_t v_i_boxed_2493_; size_t v_stop_boxed_2494_; lean_object* v_res_2495_; 
v_i_boxed_2493_ = lean_unbox_usize(v_i_2489_);
lean_dec(v_i_2489_);
v_stop_boxed_2494_ = lean_unbox_usize(v_stop_2490_);
lean_dec(v_stop_2490_);
v_res_2495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2484_, v_scope_2485_, v_service_x3f_2486_, v_remoteScope_x3f_2487_, v_as_2488_, v_i_boxed_2493_, v_stop_boxed_2494_, v_b_2491_);
lean_dec_ref(v_as_2488_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap(lean_object* v_cache_2496_, lean_object* v_scope_2497_, lean_object* v_map_2498_, lean_object* v_service_x3f_2499_, lean_object* v_remoteScope_x3f_2500_){
_start:
{
lean_object* v_buckets_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; uint8_t v___x_2506_; 
v_buckets_2502_ = lean_ctor_get(v_map_2498_, 1);
v___x_2503_ = lean_unsigned_to_nat(0u);
v___x_2504_ = lean_array_get_size(v_buckets_2502_);
v___x_2505_ = lean_box(0);
v___x_2506_ = lean_nat_dec_lt(v___x_2503_, v___x_2504_);
if (v___x_2506_ == 0)
{
lean_object* v___x_2507_; 
lean_dec(v_remoteScope_x3f_2500_);
lean_dec(v_service_x3f_2499_);
lean_dec_ref(v_scope_2497_);
lean_dec_ref(v_cache_2496_);
v___x_2507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2505_);
return v___x_2507_;
}
else
{
uint8_t v___x_2508_; 
v___x_2508_ = lean_nat_dec_le(v___x_2504_, v___x_2504_);
if (v___x_2508_ == 0)
{
if (v___x_2506_ == 0)
{
lean_object* v___x_2509_; 
lean_dec(v_remoteScope_x3f_2500_);
lean_dec(v_service_x3f_2499_);
lean_dec_ref(v_scope_2497_);
lean_dec_ref(v_cache_2496_);
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2505_);
return v___x_2509_;
}
else
{
size_t v___x_2510_; size_t v___x_2511_; lean_object* v___x_2512_; 
v___x_2510_ = ((size_t)0ULL);
v___x_2511_ = lean_usize_of_nat(v___x_2504_);
v___x_2512_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2496_, v_scope_2497_, v_service_x3f_2499_, v_remoteScope_x3f_2500_, v_buckets_2502_, v___x_2510_, v___x_2511_, v___x_2505_);
return v___x_2512_;
}
}
else
{
size_t v___x_2513_; size_t v___x_2514_; lean_object* v___x_2515_; 
v___x_2513_ = ((size_t)0ULL);
v___x_2514_ = lean_usize_of_nat(v___x_2504_);
v___x_2515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2496_, v_scope_2497_, v_service_x3f_2499_, v_remoteScope_x3f_2500_, v_buckets_2502_, v___x_2513_, v___x_2514_, v___x_2505_);
return v___x_2515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap___boxed(lean_object* v_cache_2516_, lean_object* v_scope_2517_, lean_object* v_map_2518_, lean_object* v_service_x3f_2519_, lean_object* v_remoteScope_x3f_2520_, lean_object* v_a_2521_){
_start:
{
lean_object* v_res_2522_; 
v_res_2522_ = l_Lake_Cache_writeMap(v_cache_2516_, v_scope_2517_, v_map_2518_, v_service_x3f_2519_, v_remoteScope_x3f_2520_);
lean_dec_ref(v_map_2518_);
return v_res_2522_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_Cache_readOutputs_x3f_spec__0(lean_object* v_x_2525_){
_start:
{
if (lean_obj_tag(v_x_2525_) == 0)
{
lean_object* v___x_2526_; 
v___x_2526_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_Cache_readOutputs_x3f_spec__0___closed__0));
return v___x_2526_;
}
else
{
lean_object* v___x_2527_; 
v___x_2527_ = l_Lake_CacheOutput_fromJson_x3f(v_x_2525_);
if (lean_obj_tag(v___x_2527_) == 0)
{
lean_object* v_a_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
v_a_2528_ = lean_ctor_get(v___x_2527_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2527_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2530_ = v___x_2527_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_a_2528_);
lean_dec(v___x_2527_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2533_; 
if (v_isShared_2531_ == 0)
{
v___x_2533_ = v___x_2530_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2528_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2544_; 
v_a_2536_ = lean_ctor_get(v___x_2527_, 0);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2527_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2538_ = v___x_2527_;
v_isShared_2539_ = v_isSharedCheck_2544_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2527_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2544_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2540_; lean_object* v___x_2542_; 
v___x_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2540_, 0, v_a_2536_);
if (v_isShared_2539_ == 0)
{
lean_ctor_set(v___x_2538_, 0, v___x_2540_);
v___x_2542_ = v___x_2538_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2540_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f(lean_object* v_cache_2547_, lean_object* v_scope_2548_, uint64_t v_inputHash_2549_, lean_object* v_a_2550_){
_start:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v_path_2558_; lean_object* v___x_2559_; 
v___x_2552_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2553_ = l_System_FilePath_join(v_cache_2547_, v___x_2552_);
v___x_2554_ = l_System_FilePath_join(v___x_2553_, v_scope_2548_);
v___x_2555_ = l_Lake_Hash_hex(v_inputHash_2549_);
v___x_2556_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2557_ = lean_string_append(v___x_2555_, v___x_2556_);
v_path_2558_ = l_System_FilePath_join(v___x_2554_, v___x_2557_);
v___x_2559_ = l_IO_FS_readFile(v_path_2558_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v_a_2562_; lean_object* v___x_2571_; 
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
lean_inc(v_a_2560_);
lean_dec_ref(v___x_2559_);
v___x_2571_ = l_Lean_Json_parse(v_a_2560_);
if (lean_obj_tag(v___x_2571_) == 0)
{
lean_object* v_a_2572_; 
v_a_2572_ = lean_ctor_get(v___x_2571_, 0);
lean_inc(v_a_2572_);
lean_dec_ref(v___x_2571_);
v_a_2562_ = v_a_2572_;
goto v___jp_2561_;
}
else
{
lean_object* v_a_2573_; lean_object* v___x_2574_; 
v_a_2573_ = lean_ctor_get(v___x_2571_, 0);
lean_inc(v_a_2573_);
lean_dec_ref(v___x_2571_);
v___x_2574_ = l_Option_fromJson_x3f___at___00Lake_Cache_readOutputs_x3f_spec__0(v_a_2573_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_a_2575_; 
v_a_2575_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_a_2575_);
lean_dec_ref(v___x_2574_);
v_a_2562_ = v_a_2575_;
goto v___jp_2561_;
}
else
{
lean_object* v_a_2576_; lean_object* v___x_2577_; 
lean_dec_ref(v_path_2558_);
v_a_2576_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_a_2576_);
lean_dec_ref(v___x_2574_);
v___x_2577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2577_, 0, v_a_2576_);
lean_ctor_set(v___x_2577_, 1, v_a_2550_);
return v___x_2577_;
}
}
v___jp_2561_:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; uint8_t v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2563_ = ((lean_object*)(l_Lake_Cache_readOutputs_x3f___closed__0));
v___x_2564_ = lean_string_append(v_path_2558_, v___x_2563_);
v___x_2565_ = lean_string_append(v___x_2564_, v_a_2562_);
lean_dec_ref(v_a_2562_);
v___x_2566_ = 2;
v___x_2567_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2567_, 0, v___x_2565_);
lean_ctor_set_uint8(v___x_2567_, sizeof(void*)*1, v___x_2566_);
v___x_2568_ = lean_array_push(v_a_2550_, v___x_2567_);
v___x_2569_ = lean_box(0);
v___x_2570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2569_);
lean_ctor_set(v___x_2570_, 1, v___x_2568_);
return v___x_2570_;
}
}
else
{
lean_object* v_a_2578_; 
v_a_2578_ = lean_ctor_get(v___x_2559_, 0);
lean_inc(v_a_2578_);
lean_dec_ref(v___x_2559_);
if (lean_obj_tag(v_a_2578_) == 11)
{
lean_object* v___x_2579_; lean_object* v___x_2580_; 
lean_dec_ref(v_a_2578_);
lean_dec_ref(v_path_2558_);
v___x_2579_ = lean_box(0);
v___x_2580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2579_);
lean_ctor_set(v___x_2580_, 1, v_a_2550_);
return v___x_2580_;
}
else
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; uint8_t v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2581_ = ((lean_object*)(l_Lake_Cache_readOutputs_x3f___closed__1));
v___x_2582_ = lean_string_append(v_path_2558_, v___x_2581_);
v___x_2583_ = lean_io_error_to_string(v_a_2578_);
v___x_2584_ = lean_string_append(v___x_2582_, v___x_2583_);
lean_dec_ref(v___x_2583_);
v___x_2585_ = 3;
v___x_2586_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2586_, 0, v___x_2584_);
lean_ctor_set_uint8(v___x_2586_, sizeof(void*)*1, v___x_2585_);
v___x_2587_ = lean_array_get_size(v_a_2550_);
v___x_2588_ = lean_array_push(v_a_2550_, v___x_2586_);
v___x_2589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2587_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
return v___x_2589_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f___boxed(lean_object* v_cache_2590_, lean_object* v_scope_2591_, lean_object* v_inputHash_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_){
_start:
{
uint64_t v_inputHash_boxed_2595_; lean_object* v_res_2596_; 
v_inputHash_boxed_2595_ = lean_unbox_uint64(v_inputHash_2592_);
lean_dec_ref(v_inputHash_2592_);
v_res_2596_ = l_Lake_Cache_readOutputs_x3f(v_cache_2590_, v_scope_2591_, v_inputHash_boxed_2595_, v_a_2593_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_revisionDir(lean_object* v_cache_2598_){
_start:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2599_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_2600_ = l_System_FilePath_join(v_cache_2598_, v___x_2599_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_revisionPath(lean_object* v_cache_2602_, lean_object* v_scope_2603_, lean_object* v_rev_2604_){
_start:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2605_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_2606_ = l_System_FilePath_join(v_cache_2602_, v___x_2605_);
v___x_2607_ = l_System_FilePath_join(v___x_2606_, v_scope_2603_);
v___x_2608_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_2609_ = lean_string_append(v_rev_2604_, v___x_2608_);
v___x_2610_ = l_System_FilePath_join(v___x_2607_, v___x_2609_);
return v___x_2610_;
}
}
LEAN_EXPORT uint8_t l_Lake_CachePlatform_isNone(lean_object* v_self_2613_){
_start:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; uint8_t v___x_2616_; 
v___x_2614_ = lean_string_utf8_byte_size(v_self_2613_);
v___x_2615_ = lean_unsigned_to_nat(0u);
v___x_2616_ = lean_nat_dec_eq(v___x_2614_, v___x_2615_);
return v___x_2616_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_isNone___boxed(lean_object* v_self_2617_){
_start:
{
uint8_t v_res_2618_; lean_object* v_r_2619_; 
v_res_2618_ = l_Lake_CachePlatform_isNone(v_self_2617_);
lean_dec_ref(v_self_2617_);
v_r_2619_ = lean_box(v_res_2618_);
return v_r_2619_;
}
}
static lean_object* _init_l_Lake_CachePlatform_system(void){
_start:
{
lean_object* v___x_2620_; 
v___x_2620_ = l_System_Platform_target;
return v___x_2620_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString(lean_object* v_s_2621_){
_start:
{
lean_inc_ref(v_s_2621_);
return v_s_2621_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString___boxed(lean_object* v_s_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = l_Lake_CachePlatform_ofString(v_s_2622_);
lean_dec_ref(v_s_2622_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length(lean_object* v_self_2624_){
_start:
{
lean_object* v___x_2625_; 
v___x_2625_ = lean_string_length(v_self_2624_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length___boxed(lean_object* v_self_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lake_CachePlatform_length(v_self_2626_);
lean_dec_ref(v_self_2626_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString(lean_object* v_self_2629_){
_start:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; uint8_t v___x_2632_; 
v___x_2630_ = lean_string_utf8_byte_size(v_self_2629_);
v___x_2631_ = lean_unsigned_to_nat(0u);
v___x_2632_ = lean_nat_dec_eq(v___x_2630_, v___x_2631_);
if (v___x_2632_ == 0)
{
lean_inc_ref(v_self_2629_);
return v_self_2629_;
}
else
{
lean_object* v___x_2633_; 
v___x_2633_ = ((lean_object*)(l_Lake_CachePlatform_toString___closed__0));
return v___x_2633_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString___boxed(lean_object* v_self_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l_Lake_CachePlatform_toString(v_self_2634_);
lean_dec_ref(v_self_2634_);
return v_res_2635_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheToolchain_isNone(lean_object* v_self_2639_){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; uint8_t v___x_2642_; 
v___x_2640_ = lean_string_utf8_byte_size(v_self_2639_);
v___x_2641_ = lean_unsigned_to_nat(0u);
v___x_2642_ = lean_nat_dec_eq(v___x_2640_, v___x_2641_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_isNone___boxed(lean_object* v_self_2643_){
_start:
{
uint8_t v_res_2644_; lean_object* v_r_2645_; 
v_res_2644_ = l_Lake_CacheToolchain_isNone(v_self_2643_);
lean_dec_ref(v_self_2643_);
v_r_2645_ = lean_box(v_res_2644_);
return v_r_2645_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofString(lean_object* v_s_2646_){
_start:
{
lean_object* v___x_2647_; 
v___x_2647_ = l_Lake_normalizeToolchain(v_s_2646_);
return v___x_2647_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain(lean_object* v_s_2648_){
_start:
{
lean_inc_ref(v_s_2648_);
return v_s_2648_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain___boxed(lean_object* v_s_2649_){
_start:
{
lean_object* v_res_2650_; 
v_res_2650_ = l_Lake_CacheToolchain_ofElanToolchain(v_s_2649_);
lean_dec_ref(v_s_2649_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length(lean_object* v_self_2651_){
_start:
{
lean_object* v___x_2652_; 
v___x_2652_ = lean_string_length(v_self_2651_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length___boxed(lean_object* v_self_2653_){
_start:
{
lean_object* v_res_2654_; 
v_res_2654_ = l_Lake_CacheToolchain_length(v_self_2653_);
lean_dec_ref(v_self_2653_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString(lean_object* v_self_2655_){
_start:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; uint8_t v___x_2658_; 
v___x_2656_ = lean_string_utf8_byte_size(v_self_2655_);
v___x_2657_ = lean_unsigned_to_nat(0u);
v___x_2658_ = lean_nat_dec_eq(v___x_2656_, v___x_2657_);
if (v___x_2658_ == 0)
{
lean_inc_ref(v_self_2655_);
return v_self_2655_;
}
else
{
lean_object* v___x_2659_; 
v___x_2659_ = ((lean_object*)(l_Lake_CachePlatform_toString___closed__0));
return v___x_2659_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString___boxed(lean_object* v_self_2660_){
_start:
{
lean_object* v_res_2661_; 
v_res_2661_ = l_Lake_CacheToolchain_toString(v_self_2660_);
lean_dec_ref(v_self_2660_);
return v_res_2661_;
}
}
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore(uint64_t v_hash_2665_, lean_object* v_url_2666_, lean_object* v_path_2667_, lean_object* v_a_2668_){
_start:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2670_ = ((lean_object*)(l_Lake_Cache_getArtifactPaths___closed__0));
lean_inc_ref(v_path_2667_);
v___x_2671_ = l_Lake_download(v_url_2666_, v_path_2667_, v___x_2670_, v_a_2668_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2714_; 
v_a_2672_ = lean_ctor_get(v___x_2671_, 1);
v_isSharedCheck_2714_ = !lean_is_exclusive(v___x_2671_);
if (v_isSharedCheck_2714_ == 0)
{
lean_object* v_unused_2715_; 
v_unused_2715_ = lean_ctor_get(v___x_2671_, 0);
lean_dec(v_unused_2715_);
v___x_2674_ = v___x_2671_;
v_isShared_2675_ = v_isSharedCheck_2714_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2671_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2714_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2676_; 
v___x_2676_ = l_Lake_computeBinFileHash(v_path_2667_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_object* v_a_2677_; uint64_t v___x_2678_; uint8_t v___x_2679_; 
v_a_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_a_2677_);
lean_dec_ref(v___x_2676_);
v___x_2678_ = lean_unbox_uint64(v_a_2677_);
v___x_2679_ = lean_uint64_dec_eq(v___x_2678_, v_hash_2665_);
if (v___x_2679_ == 0)
{
lean_object* v___x_2680_; lean_object* v___x_2681_; uint64_t v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; uint8_t v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2680_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
lean_inc_ref(v_path_2667_);
v___x_2681_ = lean_string_append(v_path_2667_, v___x_2680_);
v___x_2682_ = lean_unbox_uint64(v_a_2677_);
lean_dec(v_a_2677_);
v___x_2683_ = l_Lake_Hash_hex(v___x_2682_);
v___x_2684_ = lean_string_append(v___x_2681_, v___x_2683_);
lean_dec_ref(v___x_2683_);
v___x_2685_ = 3;
v___x_2686_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2686_, 0, v___x_2684_);
lean_ctor_set_uint8(v___x_2686_, sizeof(void*)*1, v___x_2685_);
lean_inc(v_a_2672_);
v___x_2687_ = lean_array_push(v_a_2672_, v___x_2686_);
v___x_2688_ = lean_io_remove_file(v_path_2667_);
lean_dec_ref(v_path_2667_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v___x_2689_; lean_object* v___x_2691_; 
lean_dec_ref(v___x_2688_);
v___x_2689_ = lean_array_get_size(v_a_2672_);
lean_dec(v_a_2672_);
if (v_isShared_2675_ == 0)
{
lean_ctor_set_tag(v___x_2674_, 1);
lean_ctor_set(v___x_2674_, 1, v___x_2687_);
lean_ctor_set(v___x_2674_, 0, v___x_2689_);
v___x_2691_ = v___x_2674_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v___x_2689_);
lean_ctor_set(v_reuseFailAlloc_2692_, 1, v___x_2687_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
else
{
lean_object* v_a_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2699_; 
lean_dec(v_a_2672_);
v_a_2693_ = lean_ctor_get(v___x_2688_, 0);
lean_inc(v_a_2693_);
lean_dec_ref(v___x_2688_);
v___x_2694_ = lean_io_error_to_string(v_a_2693_);
v___x_2695_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2695_, 0, v___x_2694_);
lean_ctor_set_uint8(v___x_2695_, sizeof(void*)*1, v___x_2685_);
v___x_2696_ = lean_array_get_size(v___x_2687_);
v___x_2697_ = lean_array_push(v___x_2687_, v___x_2695_);
if (v_isShared_2675_ == 0)
{
lean_ctor_set_tag(v___x_2674_, 1);
lean_ctor_set(v___x_2674_, 1, v___x_2697_);
lean_ctor_set(v___x_2674_, 0, v___x_2696_);
v___x_2699_ = v___x_2674_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2696_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
else
{
lean_object* v___x_2701_; lean_object* v___x_2703_; 
lean_dec(v_a_2677_);
lean_dec_ref(v_path_2667_);
v___x_2701_ = lean_box(0);
if (v_isShared_2675_ == 0)
{
lean_ctor_set(v___x_2674_, 0, v___x_2701_);
v___x_2703_ = v___x_2674_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2701_);
lean_ctor_set(v_reuseFailAlloc_2704_, 1, v_a_2672_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
else
{
lean_object* v_a_2705_; lean_object* v___x_2706_; uint8_t v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2712_; 
lean_dec_ref(v_path_2667_);
v_a_2705_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_a_2705_);
lean_dec_ref(v___x_2676_);
v___x_2706_ = lean_io_error_to_string(v_a_2705_);
v___x_2707_ = 3;
v___x_2708_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2708_, 0, v___x_2706_);
lean_ctor_set_uint8(v___x_2708_, sizeof(void*)*1, v___x_2707_);
v___x_2709_ = lean_array_get_size(v_a_2672_);
v___x_2710_ = lean_array_push(v_a_2672_, v___x_2708_);
if (v_isShared_2675_ == 0)
{
lean_ctor_set_tag(v___x_2674_, 1);
lean_ctor_set(v___x_2674_, 1, v___x_2710_);
lean_ctor_set(v___x_2674_, 0, v___x_2709_);
v___x_2712_ = v___x_2674_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v___x_2709_);
lean_ctor_set(v_reuseFailAlloc_2713_, 1, v___x_2710_);
v___x_2712_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
return v___x_2712_;
}
}
}
}
else
{
lean_dec_ref(v_path_2667_);
return v___x_2671_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore___boxed(lean_object* v_hash_2716_, lean_object* v_url_2717_, lean_object* v_path_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_){
_start:
{
uint64_t v_hash_boxed_2721_; lean_object* v_res_2722_; 
v_hash_boxed_2721_ = lean_unbox_uint64(v_hash_2716_);
lean_dec_ref(v_hash_2716_);
v_res_2722_ = l_Lake_downloadArtifactCore(v_hash_boxed_2721_, v_url_2717_, v_path_2718_, v_a_2719_);
return v_res_2722_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(lean_object* v_x_2725_){
_start:
{
if (lean_obj_tag(v_x_2725_) == 0)
{
lean_object* v___x_2726_; 
v___x_2726_ = ((lean_object*)(l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0___closed__0));
return v___x_2726_;
}
else
{
lean_object* v___x_2727_; 
v___x_2727_ = l_Lean_Json_getNat_x3f(v_x_2725_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2735_; 
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2730_ = v___x_2727_;
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2727_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___x_2733_; 
if (v_isShared_2731_ == 0)
{
v___x_2733_ = v___x_2730_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_a_2728_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2744_; 
v_a_2736_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2738_ = v___x_2727_;
v_isShared_2739_ = v_isSharedCheck_2744_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2727_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2744_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2740_; lean_object* v___x_2742_; 
v___x_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2740_, 0, v_a_2736_);
if (v_isShared_2739_ == 0)
{
lean_ctor_set(v___x_2738_, 0, v___x_2740_);
v___x_2742_ = v___x_2738_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v___x_2740_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21(void){
_start:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
v___x_2767_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_2768_ = lean_unsigned_to_nat(14u);
v___x_2769_ = lean_mk_empty_array_with_capacity(v___x_2768_);
v___x_2770_ = lean_array_push(v___x_2769_, v___x_2767_);
return v___x_2770_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22(void){
_start:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2771_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_2772_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21);
v___x_2773_ = lean_array_push(v___x_2772_, v___x_2771_);
return v___x_2773_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23(void){
_start:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2774_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_2775_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22);
v___x_2776_ = lean_array_push(v___x_2775_, v___x_2774_);
return v___x_2776_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24(void){
_start:
{
lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v___x_2777_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13));
v___x_2778_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23);
v___x_2779_ = lean_array_push(v___x_2778_, v___x_2777_);
return v___x_2779_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25(void){
_start:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2780_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14));
v___x_2781_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24);
v___x_2782_ = lean_array_push(v___x_2781_, v___x_2780_);
return v___x_2782_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26(void){
_start:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___x_2783_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15));
v___x_2784_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25);
v___x_2785_ = lean_array_push(v___x_2784_, v___x_2783_);
return v___x_2785_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3(lean_object* v_file_2789_, lean_object* v_contentType_2790_, lean_object* v_url_2791_, lean_object* v_key_2792_, lean_object* v_a_2793_){
_start:
{
lean_object* v___y_2796_; lean_object* v_a_2797_; lean_object* v_stderr_2810_; lean_object* v___y_2819_; lean_object* v___y_2822_; lean_object* v_a_2823_; lean_object* v___y_2850_; lean_object* v___y_2851_; lean_object* v_stderr_2862_; lean_object* v_a_2863_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; uint8_t v___x_2897_; uint8_t v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2877_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8));
v___x_2878_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_2879_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_2880_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_2881_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18));
v___x_2882_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_2883_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20));
v___x_2884_ = lean_string_append(v___x_2883_, v_contentType_2790_);
v___x_2885_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26);
v___x_2886_ = lean_array_push(v___x_2885_, v_key_2792_);
v___x_2887_ = lean_array_push(v___x_2886_, v___x_2879_);
v___x_2888_ = lean_array_push(v___x_2887_, v___x_2880_);
v___x_2889_ = lean_array_push(v___x_2888_, v___x_2881_);
v___x_2890_ = lean_array_push(v___x_2889_, v_file_2789_);
v___x_2891_ = lean_array_push(v___x_2890_, v_url_2791_);
v___x_2892_ = lean_array_push(v___x_2891_, v___x_2882_);
v___x_2893_ = lean_array_push(v___x_2892_, v___x_2884_);
v___x_2894_ = lean_box(0);
v___x_2895_ = lean_unsigned_to_nat(0u);
v___x_2896_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_2897_ = 1;
v___x_2898_ = 0;
v___x_2899_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_2899_, 0, v___x_2877_);
lean_ctor_set(v___x_2899_, 1, v___x_2878_);
lean_ctor_set(v___x_2899_, 2, v___x_2893_);
lean_ctor_set(v___x_2899_, 3, v___x_2894_);
lean_ctor_set(v___x_2899_, 4, v___x_2896_);
lean_ctor_set_uint8(v___x_2899_, sizeof(void*)*5, v___x_2897_);
lean_ctor_set_uint8(v___x_2899_, sizeof(void*)*5 + 1, v___x_2898_);
v___x_2900_ = l_Lake_captureProc_x27(v___x_2899_, v___x_2896_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; lean_object* v_a_2902_; lean_object* v___x_2916_; uint8_t v___x_2917_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2901_);
v_a_2902_ = lean_ctor_get(v___x_2900_, 1);
lean_inc(v_a_2902_);
lean_dec_ref(v___x_2900_);
v___x_2916_ = lean_array_get_size(v_a_2902_);
v___x_2917_ = lean_nat_dec_lt(v___x_2895_, v___x_2916_);
if (v___x_2917_ == 0)
{
lean_dec(v_a_2902_);
goto v___jp_2903_;
}
else
{
lean_object* v___x_2918_; uint8_t v___x_2919_; 
v___x_2918_ = lean_box(0);
v___x_2919_ = lean_nat_dec_le(v___x_2916_, v___x_2916_);
if (v___x_2919_ == 0)
{
if (v___x_2917_ == 0)
{
lean_dec(v_a_2902_);
goto v___jp_2903_;
}
else
{
size_t v___x_2920_; size_t v___x_2921_; lean_object* v___x_2922_; 
v___x_2920_ = ((size_t)0ULL);
v___x_2921_ = lean_usize_of_nat(v___x_2916_);
lean_inc_ref(v_a_2793_);
v___x_2922_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_2902_, v___x_2920_, v___x_2921_, v___x_2918_, v_a_2793_);
lean_dec(v_a_2902_);
if (lean_obj_tag(v___x_2922_) == 0)
{
lean_dec_ref(v___x_2922_);
goto v___jp_2903_;
}
else
{
lean_dec(v_a_2901_);
lean_dec_ref(v_a_2793_);
return v___x_2922_;
}
}
}
else
{
size_t v___x_2923_; size_t v___x_2924_; lean_object* v___x_2925_; 
v___x_2923_ = ((size_t)0ULL);
v___x_2924_ = lean_usize_of_nat(v___x_2916_);
lean_inc_ref(v_a_2793_);
v___x_2925_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_2902_, v___x_2923_, v___x_2924_, v___x_2918_, v_a_2793_);
lean_dec(v_a_2902_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_dec_ref(v___x_2925_);
goto v___jp_2903_;
}
else
{
lean_dec(v_a_2901_);
lean_dec_ref(v_a_2793_);
return v___x_2925_;
}
}
}
v___jp_2903_:
{
lean_object* v_stderr_2904_; lean_object* v___x_2905_; 
v_stderr_2904_ = lean_ctor_get(v_a_2901_, 1);
lean_inc_ref(v_stderr_2904_);
v___x_2905_ = l_Lean_Json_parse(v_stderr_2904_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v_a_2906_; 
lean_inc_ref(v_stderr_2904_);
lean_dec(v_a_2901_);
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2906_);
lean_dec_ref(v___x_2905_);
v_stderr_2862_ = v_stderr_2904_;
v_a_2863_ = v_a_2906_;
goto v___jp_2861_;
}
else
{
lean_object* v_a_2907_; lean_object* v___x_2908_; 
v_a_2907_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2907_);
lean_dec_ref(v___x_2905_);
v___x_2908_ = l_Lean_Json_getObj_x3f(v_a_2907_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_object* v_a_2909_; 
lean_inc_ref(v_stderr_2904_);
lean_dec(v_a_2901_);
v_a_2909_ = lean_ctor_get(v___x_2908_, 0);
lean_inc(v_a_2909_);
lean_dec_ref(v___x_2908_);
v_stderr_2862_ = v_stderr_2904_;
v_a_2863_ = v_a_2909_;
goto v___jp_2861_;
}
else
{
lean_object* v_a_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v_a_2910_ = lean_ctor_get(v___x_2908_, 0);
lean_inc(v_a_2910_);
lean_dec_ref(v___x_2908_);
v___x_2911_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28));
v___x_2912_ = l_Lake_JsonObject_getJson_x3f(v_a_2910_, v___x_2911_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_inc_ref(v_stderr_2904_);
lean_dec(v_a_2910_);
lean_dec(v_a_2901_);
v_stderr_2810_ = v_stderr_2904_;
goto v___jp_2809_;
}
else
{
lean_object* v_val_2913_; lean_object* v___x_2914_; 
v_val_2913_ = lean_ctor_get(v___x_2912_, 0);
lean_inc(v_val_2913_);
lean_dec_ref(v___x_2912_);
v___x_2914_ = l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_2913_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_dec_ref(v___x_2914_);
v___y_2850_ = v_a_2901_;
v___y_2851_ = v_a_2910_;
goto v___jp_2849_;
}
else
{
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_dec_ref(v___x_2914_);
v___y_2850_ = v_a_2901_;
v___y_2851_ = v_a_2910_;
goto v___jp_2849_;
}
else
{
lean_object* v_a_2915_; 
lean_dec(v_a_2910_);
v_a_2915_ = lean_ctor_get(v___x_2914_, 0);
lean_inc(v_a_2915_);
lean_dec_ref(v___x_2914_);
v___y_2822_ = v_a_2901_;
v_a_2823_ = v_a_2915_;
goto v___jp_2821_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2926_; lean_object* v___x_2927_; uint8_t v___x_2928_; 
v_a_2926_ = lean_ctor_get(v___x_2900_, 1);
lean_inc(v_a_2926_);
lean_dec_ref(v___x_2900_);
v___x_2927_ = lean_array_get_size(v_a_2926_);
v___x_2928_ = lean_nat_dec_lt(v___x_2895_, v___x_2927_);
if (v___x_2928_ == 0)
{
lean_object* v___x_2929_; lean_object* v___x_2930_; 
lean_dec(v_a_2926_);
lean_dec_ref(v_a_2793_);
v___x_2929_ = lean_box(0);
v___x_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2930_, 0, v___x_2929_);
return v___x_2930_;
}
else
{
lean_object* v___x_2931_; uint8_t v___x_2932_; 
v___x_2931_ = lean_box(0);
v___x_2932_ = lean_nat_dec_le(v___x_2927_, v___x_2927_);
if (v___x_2932_ == 0)
{
if (v___x_2928_ == 0)
{
lean_dec(v_a_2926_);
lean_dec_ref(v_a_2793_);
goto v___jp_2874_;
}
else
{
size_t v___x_2933_; size_t v___x_2934_; lean_object* v___x_2935_; 
v___x_2933_ = ((size_t)0ULL);
v___x_2934_ = lean_usize_of_nat(v___x_2927_);
v___x_2935_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_2926_, v___x_2933_, v___x_2934_, v___x_2931_, v_a_2793_);
lean_dec(v_a_2926_);
if (lean_obj_tag(v___x_2935_) == 0)
{
lean_dec_ref(v___x_2935_);
goto v___jp_2874_;
}
else
{
return v___x_2935_;
}
}
}
else
{
size_t v___x_2936_; size_t v___x_2937_; lean_object* v___x_2938_; 
v___x_2936_ = ((size_t)0ULL);
v___x_2937_ = lean_usize_of_nat(v___x_2927_);
v___x_2938_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_2926_, v___x_2936_, v___x_2937_, v___x_2931_, v_a_2793_);
lean_dec(v_a_2926_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_dec_ref(v___x_2938_);
goto v___jp_2874_;
}
else
{
return v___x_2938_;
}
}
}
}
v___jp_2795_:
{
lean_object* v_stderr_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; uint8_t v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; 
v_stderr_2798_ = lean_ctor_get(v___y_2796_, 1);
lean_inc_ref(v_stderr_2798_);
lean_dec_ref(v___y_2796_);
v___x_2799_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0));
v___x_2800_ = lean_string_append(v___x_2799_, v_a_2797_);
lean_dec_ref(v_a_2797_);
v___x_2801_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_2802_ = lean_string_append(v___x_2800_, v___x_2801_);
v___x_2803_ = lean_string_append(v___x_2802_, v_stderr_2798_);
lean_dec_ref(v_stderr_2798_);
v___x_2804_ = 3;
v___x_2805_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2805_, 0, v___x_2803_);
lean_ctor_set_uint8(v___x_2805_, sizeof(void*)*1, v___x_2804_);
v___x_2806_ = lean_apply_2(v_a_2793_, v___x_2805_, lean_box(0));
v___x_2807_ = lean_box(0);
v___x_2808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2807_);
return v___x_2808_;
}
v___jp_2809_:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; uint8_t v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2811_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2));
v___x_2812_ = lean_string_append(v___x_2811_, v_stderr_2810_);
lean_dec_ref(v_stderr_2810_);
v___x_2813_ = 3;
v___x_2814_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2814_, 0, v___x_2812_);
lean_ctor_set_uint8(v___x_2814_, sizeof(void*)*1, v___x_2813_);
v___x_2815_ = lean_apply_2(v_a_2793_, v___x_2814_, lean_box(0));
v___x_2816_ = lean_box(0);
v___x_2817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2816_);
return v___x_2817_;
}
v___jp_2818_:
{
lean_object* v_stderr_2820_; 
v_stderr_2820_ = lean_ctor_get(v___y_2819_, 1);
lean_inc_ref(v_stderr_2820_);
lean_dec_ref(v___y_2819_);
v_stderr_2810_ = v_stderr_2820_;
goto v___jp_2809_;
}
v___jp_2821_:
{
if (lean_obj_tag(v_a_2823_) == 0)
{
v___y_2819_ = v___y_2822_;
goto v___jp_2818_;
}
else
{
lean_object* v_val_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2848_; 
v_val_2824_ = lean_ctor_get(v_a_2823_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v_a_2823_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2826_ = v_a_2823_;
v_isShared_2827_ = v_isSharedCheck_2848_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_val_2824_);
lean_dec(v_a_2823_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2848_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2828_; uint8_t v___x_2829_; 
v___x_2828_ = lean_unsigned_to_nat(200u);
v___x_2829_ = lean_nat_dec_eq(v_val_2824_, v___x_2828_);
if (v___x_2829_ == 0)
{
lean_object* v_stdout_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; uint8_t v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2842_; 
v_stdout_2830_ = lean_ctor_get(v___y_2822_, 0);
lean_inc_ref(v_stdout_2830_);
lean_dec_ref(v___y_2822_);
v___x_2831_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3));
v___x_2832_ = l_Nat_reprFast(v_val_2824_);
v___x_2833_ = lean_string_append(v___x_2831_, v___x_2832_);
lean_dec_ref(v___x_2832_);
v___x_2834_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_2835_ = lean_string_append(v___x_2833_, v___x_2834_);
v___x_2836_ = lean_string_append(v___x_2835_, v_stdout_2830_);
lean_dec_ref(v_stdout_2830_);
v___x_2837_ = 3;
v___x_2838_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2838_, 0, v___x_2836_);
lean_ctor_set_uint8(v___x_2838_, sizeof(void*)*1, v___x_2837_);
v___x_2839_ = lean_apply_2(v_a_2793_, v___x_2838_, lean_box(0));
v___x_2840_ = lean_box(0);
if (v_isShared_2827_ == 0)
{
lean_ctor_set(v___x_2826_, 0, v___x_2840_);
v___x_2842_ = v___x_2826_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v___x_2840_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
else
{
lean_object* v___x_2844_; lean_object* v___x_2846_; 
lean_dec(v_val_2824_);
lean_dec_ref(v___y_2822_);
lean_dec_ref(v_a_2793_);
v___x_2844_ = lean_box(0);
if (v_isShared_2827_ == 0)
{
lean_ctor_set_tag(v___x_2826_, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2844_);
v___x_2846_ = v___x_2826_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v___x_2844_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
}
}
v___jp_2849_:
{
lean_object* v___x_2852_; lean_object* v___x_2853_; 
v___x_2852_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_2853_ = l_Lake_JsonObject_getJson_x3f(v___y_2851_, v___x_2852_);
lean_dec(v___y_2851_);
if (lean_obj_tag(v___x_2853_) == 0)
{
v___y_2819_ = v___y_2850_;
goto v___jp_2818_;
}
else
{
lean_object* v_val_2854_; lean_object* v___x_2855_; 
v_val_2854_ = lean_ctor_get(v___x_2853_, 0);
lean_inc(v_val_2854_);
lean_dec_ref(v___x_2853_);
v___x_2855_ = l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_2854_);
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_object* v_a_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v_a_2856_ = lean_ctor_get(v___x_2855_, 0);
lean_inc(v_a_2856_);
lean_dec_ref(v___x_2855_);
v___x_2857_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_2858_ = lean_string_append(v___x_2857_, v_a_2856_);
lean_dec(v_a_2856_);
v___y_2796_ = v___y_2850_;
v_a_2797_ = v___x_2858_;
goto v___jp_2795_;
}
else
{
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_object* v_a_2859_; 
v_a_2859_ = lean_ctor_get(v___x_2855_, 0);
lean_inc(v_a_2859_);
lean_dec_ref(v___x_2855_);
v___y_2796_ = v___y_2850_;
v_a_2797_ = v_a_2859_;
goto v___jp_2795_;
}
else
{
lean_object* v_a_2860_; 
v_a_2860_ = lean_ctor_get(v___x_2855_, 0);
lean_inc(v_a_2860_);
lean_dec_ref(v___x_2855_);
v___y_2822_ = v___y_2850_;
v_a_2823_ = v_a_2860_;
goto v___jp_2821_;
}
}
}
}
v___jp_2861_:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; uint8_t v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
v___x_2864_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_2865_ = lean_string_append(v___x_2864_, v_a_2863_);
lean_dec_ref(v_a_2863_);
v___x_2866_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_2867_ = lean_string_append(v___x_2865_, v___x_2866_);
v___x_2868_ = lean_string_append(v___x_2867_, v_stderr_2862_);
lean_dec_ref(v_stderr_2862_);
v___x_2869_ = 3;
v___x_2870_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2870_, 0, v___x_2868_);
lean_ctor_set_uint8(v___x_2870_, sizeof(void*)*1, v___x_2869_);
v___x_2871_ = lean_apply_2(v_a_2793_, v___x_2870_, lean_box(0));
v___x_2872_ = lean_box(0);
v___x_2873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2873_, 0, v___x_2872_);
return v___x_2873_;
}
v___jp_2874_:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2875_ = lean_box(0);
v___x_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2875_);
return v___x_2876_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___boxed(lean_object* v_file_2939_, lean_object* v_contentType_2940_, lean_object* v_url_2941_, lean_object* v_key_2942_, lean_object* v_a_2943_, lean_object* v_a_2944_){
_start:
{
lean_object* v_res_2945_; 
v_res_2945_ = l___private_Lake_Config_Cache_0__Lake_uploadS3(v_file_2939_, v_contentType_2940_, v_url_2941_, v_key_2942_, v_a_2943_);
lean_dec_ref(v_contentType_2940_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f(lean_object* v_service_2946_){
_start:
{
lean_object* v_name_x3f_2947_; 
v_name_x3f_2947_ = lean_ctor_get(v_service_2946_, 0);
lean_inc(v_name_x3f_2947_);
return v_name_x3f_2947_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f___boxed(lean_object* v_service_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l_Lake_CacheService_name_x3f(v_service_2948_);
lean_dec_ref(v_service_2948_);
return v_res_2949_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheService_isReservoir(lean_object* v_service_2950_){
_start:
{
uint8_t v_isReservoir_2951_; 
v_isReservoir_2951_ = lean_ctor_get_uint8(v_service_2950_, sizeof(void*)*5);
return v_isReservoir_2951_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_isReservoir___boxed(lean_object* v_service_2952_){
_start:
{
uint8_t v_res_2953_; lean_object* v_r_2954_; 
v_res_2953_ = l_Lake_CacheService_isReservoir(v_service_2952_);
lean_dec_ref(v_service_2952_);
v_r_2954_ = lean_box(v_res_2953_);
return v_r_2954_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_reservoirService(lean_object* v_apiEndpoint_2955_, lean_object* v_name_x3f_2956_){
_start:
{
lean_object* v___x_2957_; uint8_t v___x_2958_; lean_object* v___x_2959_; 
v___x_2957_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_2958_ = 1;
v___x_2959_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2959_, 0, v_name_x3f_2956_);
lean_ctor_set(v___x_2959_, 1, v___x_2957_);
lean_ctor_set(v___x_2959_, 2, v___x_2957_);
lean_ctor_set(v___x_2959_, 3, v___x_2957_);
lean_ctor_set(v___x_2959_, 4, v_apiEndpoint_2955_);
lean_ctor_set_uint8(v___x_2959_, sizeof(void*)*5, v___x_2958_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadService(lean_object* v_key_2960_, lean_object* v_artifactEndpoint_2961_, lean_object* v_revisionEndpoint_2962_){
_start:
{
lean_object* v___x_2963_; uint8_t v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2963_ = lean_box(0);
v___x_2964_ = 0;
v___x_2965_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_2966_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2966_, 0, v___x_2963_);
lean_ctor_set(v___x_2966_, 1, v_key_2960_);
lean_ctor_set(v___x_2966_, 2, v_artifactEndpoint_2961_);
lean_ctor_set(v___x_2966_, 3, v_revisionEndpoint_2962_);
lean_ctor_set(v___x_2966_, 4, v___x_2965_);
lean_ctor_set_uint8(v___x_2966_, sizeof(void*)*5, v___x_2964_);
return v___x_2966_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadService(lean_object* v_artifactEndpoint_2967_, lean_object* v_revisionEndpoint_2968_, lean_object* v_name_x3f_2969_){
_start:
{
lean_object* v___x_2970_; uint8_t v___x_2971_; lean_object* v___x_2972_; 
v___x_2970_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_2971_ = 0;
v___x_2972_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2972_, 0, v_name_x3f_2969_);
lean_ctor_set(v___x_2972_, 1, v___x_2970_);
lean_ctor_set(v___x_2972_, 2, v_artifactEndpoint_2967_);
lean_ctor_set(v___x_2972_, 3, v_revisionEndpoint_2968_);
lean_ctor_set(v___x_2972_, 4, v___x_2970_);
lean_ctor_set_uint8(v___x_2972_, sizeof(void*)*5, v___x_2971_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtsService(lean_object* v_artifactEndpoint_2973_, lean_object* v_name_x3f_2974_){
_start:
{
lean_object* v___x_2975_; uint8_t v___x_2976_; lean_object* v___x_2977_; 
v___x_2975_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_2976_ = 0;
v___x_2977_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2977_, 0, v_name_x3f_2974_);
lean_ctor_set(v___x_2977_, 1, v___x_2975_);
lean_ctor_set(v___x_2977_, 2, v_artifactEndpoint_2973_);
lean_ctor_set(v___x_2977_, 3, v___x_2975_);
lean_ctor_set(v___x_2977_, 4, v___x_2975_);
lean_ctor_set_uint8(v___x_2977_, sizeof(void*)*5, v___x_2976_);
return v___x_2977_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_withKey(lean_object* v_service_2978_, lean_object* v_key_2979_){
_start:
{
lean_object* v_name_x3f_2980_; lean_object* v_artifactEndpoint_2981_; lean_object* v_revisionEndpoint_2982_; uint8_t v_isReservoir_2983_; lean_object* v_apiEndpoint_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_2991_; 
v_name_x3f_2980_ = lean_ctor_get(v_service_2978_, 0);
v_artifactEndpoint_2981_ = lean_ctor_get(v_service_2978_, 2);
v_revisionEndpoint_2982_ = lean_ctor_get(v_service_2978_, 3);
v_isReservoir_2983_ = lean_ctor_get_uint8(v_service_2978_, sizeof(void*)*5);
v_apiEndpoint_2984_ = lean_ctor_get(v_service_2978_, 4);
v_isSharedCheck_2991_ = !lean_is_exclusive(v_service_2978_);
if (v_isSharedCheck_2991_ == 0)
{
lean_object* v_unused_2992_; 
v_unused_2992_ = lean_ctor_get(v_service_2978_, 1);
lean_dec(v_unused_2992_);
v___x_2986_ = v_service_2978_;
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_apiEndpoint_2984_);
lean_inc(v_revisionEndpoint_2982_);
lean_inc(v_artifactEndpoint_2981_);
lean_inc(v_name_x3f_2980_);
lean_dec(v_service_2978_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v___x_2989_; 
if (v_isShared_2987_ == 0)
{
lean_ctor_set(v___x_2986_, 1, v_key_2979_);
v___x_2989_ = v___x_2986_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v_name_x3f_2980_);
lean_ctor_set(v_reuseFailAlloc_2990_, 1, v_key_2979_);
lean_ctor_set(v_reuseFailAlloc_2990_, 2, v_artifactEndpoint_2981_);
lean_ctor_set(v_reuseFailAlloc_2990_, 3, v_revisionEndpoint_2982_);
lean_ctor_set(v_reuseFailAlloc_2990_, 4, v_apiEndpoint_2984_);
lean_ctor_set_uint8(v_reuseFailAlloc_2990_, sizeof(void*)*5, v_isReservoir_2983_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
return v___x_2989_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(lean_object* v_s_2997_){
_start:
{
lean_object* v___x_2998_; 
v___x_2998_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0));
return v___x_2998_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___boxed(lean_object* v_s_2999_){
_start:
{
lean_object* v_res_3000_; 
v_res_3000_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(v_s_2999_);
lean_dec_ref(v_s_2999_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(lean_object* v_scope_3001_, lean_object* v___x_3002_, lean_object* v___x_3003_, lean_object* v_a_3004_, lean_object* v_b_3005_){
_start:
{
if (lean_obj_tag(v_a_3004_) == 0)
{
lean_object* v_currPos_3006_; lean_object* v_searcher_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3041_; 
v_currPos_3006_ = lean_ctor_get(v_a_3004_, 0);
v_searcher_3007_ = lean_ctor_get(v_a_3004_, 1);
v_isSharedCheck_3041_ = !lean_is_exclusive(v_a_3004_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3009_ = v_a_3004_;
v_isShared_3010_ = v_isSharedCheck_3041_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_searcher_3007_);
lean_inc(v_currPos_3006_);
lean_dec(v_a_3004_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3041_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v_startInclusive_3011_; lean_object* v_endExclusive_3012_; uint32_t v___x_3013_; lean_object* v_it_3015_; lean_object* v_startInclusive_3016_; lean_object* v_endExclusive_3017_; lean_object* v___x_3022_; uint8_t v___x_3023_; 
v_startInclusive_3011_ = lean_ctor_get(v___x_3002_, 1);
v_endExclusive_3012_ = lean_ctor_get(v___x_3002_, 2);
v___x_3013_ = 47;
v___x_3022_ = lean_nat_sub(v_endExclusive_3012_, v_startInclusive_3011_);
v___x_3023_ = lean_nat_dec_eq(v_searcher_3007_, v___x_3022_);
lean_dec(v___x_3022_);
if (v___x_3023_ == 0)
{
uint32_t v___x_3024_; uint8_t v___x_3025_; 
v___x_3024_ = lean_string_utf8_get_fast(v_scope_3001_, v_searcher_3007_);
v___x_3025_ = lean_uint32_dec_eq(v___x_3024_, v___x_3013_);
if (v___x_3025_ == 0)
{
lean_object* v___x_3026_; lean_object* v___x_3028_; 
v___x_3026_ = lean_string_utf8_next_fast(v_scope_3001_, v_searcher_3007_);
lean_dec(v_searcher_3007_);
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 1, v___x_3026_);
v___x_3028_ = v___x_3009_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_currPos_3006_);
lean_ctor_set(v_reuseFailAlloc_3030_, 1, v___x_3026_);
v___x_3028_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
v_a_3004_ = v___x_3028_;
goto _start;
}
}
else
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v_slice_3034_; lean_object* v_nextIt_3036_; 
v___x_3031_ = lean_string_utf8_next_fast(v_scope_3001_, v_searcher_3007_);
v___x_3032_ = lean_nat_sub(v___x_3031_, v_searcher_3007_);
v___x_3033_ = lean_nat_add(v_searcher_3007_, v___x_3032_);
lean_dec(v___x_3032_);
v_slice_3034_ = l_String_Slice_subslice_x21(v___x_3002_, v_currPos_3006_, v_searcher_3007_);
lean_inc(v___x_3033_);
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 1, v___x_3033_);
lean_ctor_set(v___x_3009_, 0, v___x_3033_);
v_nextIt_3036_ = v___x_3009_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v___x_3033_);
lean_ctor_set(v_reuseFailAlloc_3039_, 1, v___x_3033_);
v_nextIt_3036_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
lean_object* v_startInclusive_3037_; lean_object* v_endExclusive_3038_; 
v_startInclusive_3037_ = lean_ctor_get(v_slice_3034_, 0);
lean_inc(v_startInclusive_3037_);
v_endExclusive_3038_ = lean_ctor_get(v_slice_3034_, 1);
lean_inc(v_endExclusive_3038_);
lean_dec_ref(v_slice_3034_);
v_it_3015_ = v_nextIt_3036_;
v_startInclusive_3016_ = v_startInclusive_3037_;
v_endExclusive_3017_ = v_endExclusive_3038_;
goto v___jp_3014_;
}
}
}
else
{
lean_object* v___x_3040_; 
lean_del_object(v___x_3009_);
lean_dec(v_searcher_3007_);
v___x_3040_ = lean_box(1);
lean_inc(v___x_3003_);
v_it_3015_ = v___x_3040_;
v_startInclusive_3016_ = v_currPos_3006_;
v_endExclusive_3017_ = v___x_3003_;
goto v___jp_3014_;
}
v___jp_3014_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v___x_3018_ = lean_string_utf8_extract(v_scope_3001_, v_startInclusive_3016_, v_endExclusive_3017_);
lean_dec(v_endExclusive_3017_);
lean_dec(v_startInclusive_3016_);
v___x_3019_ = lean_string_push(v_b_3005_, v___x_3013_);
v___x_3020_ = l_Lake_uriEncode(v___x_3018_, v___x_3019_);
v_a_3004_ = v_it_3015_;
v_b_3005_ = v___x_3020_;
goto _start;
}
}
}
else
{
lean_dec(v___x_3003_);
return v_b_3005_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg___boxed(lean_object* v_scope_3042_, lean_object* v___x_3043_, lean_object* v___x_3044_, lean_object* v_a_3045_, lean_object* v_b_3046_){
_start:
{
lean_object* v_res_3047_; 
v_res_3047_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_3042_, v___x_3043_, v___x_3044_, v_a_3045_, v_b_3046_);
lean_dec_ref(v___x_3043_);
lean_dec_ref(v_scope_3042_);
return v_res_3047_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(lean_object* v_endpoint_3048_, lean_object* v_scope_3049_){
_start:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; 
v___x_3050_ = lean_unsigned_to_nat(0u);
v___x_3051_ = lean_string_utf8_byte_size(v_scope_3049_);
lean_inc_ref(v_scope_3049_);
v___x_3052_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3052_, 0, v_scope_3049_);
lean_ctor_set(v___x_3052_, 1, v___x_3050_);
lean_ctor_set(v___x_3052_, 2, v___x_3051_);
v___x_3053_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(v___x_3052_);
v___x_3054_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_3049_, v___x_3052_, v___x_3051_, v___x_3053_, v_endpoint_3048_);
lean_dec_ref(v___x_3052_);
lean_dec_ref(v_scope_3049_);
return v___x_3054_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(lean_object* v_scope_3055_, lean_object* v___x_3056_, lean_object* v___x_3057_, lean_object* v_inst_3058_, lean_object* v_R_3059_, lean_object* v_a_3060_, lean_object* v_b_3061_, lean_object* v_c_3062_){
_start:
{
lean_object* v___x_3063_; 
v___x_3063_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_3055_, v___x_3056_, v___x_3057_, v_a_3060_, v_b_3061_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___boxed(lean_object* v_scope_3064_, lean_object* v___x_3065_, lean_object* v___x_3066_, lean_object* v_inst_3067_, lean_object* v_R_3068_, lean_object* v_a_3069_, lean_object* v_b_3070_, lean_object* v_c_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(v_scope_3064_, v___x_3065_, v___x_3066_, v_inst_3067_, v_R_3068_, v_a_3069_, v_b_3070_, v_c_3071_);
lean_dec_ref(v___x_3065_);
lean_dec_ref(v_scope_3064_);
return v_res_3072_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(lean_object* v_service_3073_, lean_object* v_scope_3074_){
_start:
{
lean_object* v_artifactEndpoint_3075_; lean_object* v___x_3076_; 
v_artifactEndpoint_3075_ = lean_ctor_get(v_service_3073_, 2);
lean_inc_ref(v_artifactEndpoint_3075_);
lean_dec_ref(v_service_3073_);
v___x_3076_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_artifactEndpoint_3075_, v_scope_3074_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(uint64_t v_contentHash_3079_, lean_object* v_service_3080_, lean_object* v_scope_3081_){
_start:
{
lean_object* v___y_3083_; lean_object* v_s_3090_; lean_object* v___x_3091_; 
v_s_3090_ = lean_ctor_get(v_scope_3081_, 0);
lean_inc_ref(v_s_3090_);
lean_dec_ref(v_scope_3081_);
v___x_3091_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(v_service_3080_, v_s_3090_);
v___y_3083_ = v___x_3091_;
goto v___jp_3082_;
v___jp_3082_:
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3084_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_3085_ = lean_string_append(v___y_3083_, v___x_3084_);
v___x_3086_ = l_Lake_Hash_hex(v_contentHash_3079_);
v___x_3087_ = lean_string_append(v___x_3085_, v___x_3086_);
lean_dec_ref(v___x_3086_);
v___x_3088_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1));
v___x_3089_ = lean_string_append(v___x_3087_, v___x_3088_);
return v___x_3089_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___boxed(lean_object* v_contentHash_3092_, lean_object* v_service_3093_, lean_object* v_scope_3094_){
_start:
{
uint64_t v_contentHash_boxed_3095_; lean_object* v_res_3096_; 
v_contentHash_boxed_3095_ = lean_unbox_uint64(v_contentHash_3092_);
lean_dec_ref(v_contentHash_3092_);
v_res_3096_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_boxed_3095_, v_service_3093_, v_scope_3094_);
return v_res_3096_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl(uint64_t v_contentHash_3100_, lean_object* v_service_3101_, lean_object* v_scope_3102_){
_start:
{
lean_object* v___y_3104_; uint8_t v_isReservoir_3111_; 
v_isReservoir_3111_ = lean_ctor_get_uint8(v_service_3101_, sizeof(void*)*5);
if (v_isReservoir_3111_ == 0)
{
lean_object* v___x_3112_; 
v___x_3112_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_3100_, v_service_3101_, v_scope_3102_);
return v___x_3112_;
}
else
{
if (lean_obj_tag(v_scope_3102_) == 0)
{
lean_object* v_apiEndpoint_3113_; lean_object* v_s_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; 
v_apiEndpoint_3113_ = lean_ctor_get(v_service_3101_, 4);
lean_inc_ref(v_apiEndpoint_3113_);
lean_dec_ref(v_service_3101_);
v_s_3114_ = lean_ctor_get(v_scope_3102_, 0);
lean_inc_ref(v_s_3114_);
lean_dec_ref(v_scope_3102_);
v___x_3115_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_3116_ = lean_string_append(v_apiEndpoint_3113_, v___x_3115_);
v___x_3117_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_3116_, v_s_3114_);
v___y_3104_ = v___x_3117_;
goto v___jp_3103_;
}
else
{
lean_object* v_apiEndpoint_3118_; lean_object* v_s_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; 
v_apiEndpoint_3118_ = lean_ctor_get(v_service_3101_, 4);
lean_inc_ref(v_apiEndpoint_3118_);
lean_dec_ref(v_service_3101_);
v_s_3119_ = lean_ctor_get(v_scope_3102_, 0);
lean_inc_ref(v_s_3119_);
lean_dec_ref(v_scope_3102_);
v___x_3120_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_3121_ = lean_string_append(v_apiEndpoint_3118_, v___x_3120_);
v___x_3122_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_3121_, v_s_3119_);
v___y_3104_ = v___x_3122_;
goto v___jp_3103_;
}
}
v___jp_3103_:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3105_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__0));
v___x_3106_ = lean_string_append(v___y_3104_, v___x_3105_);
v___x_3107_ = l_Lake_Hash_hex(v_contentHash_3100_);
v___x_3108_ = lean_string_append(v___x_3106_, v___x_3107_);
lean_dec_ref(v___x_3107_);
v___x_3109_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1));
v___x_3110_ = lean_string_append(v___x_3108_, v___x_3109_);
return v___x_3110_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl___boxed(lean_object* v_contentHash_3123_, lean_object* v_service_3124_, lean_object* v_scope_3125_){
_start:
{
uint64_t v_contentHash_boxed_3126_; lean_object* v_res_3127_; 
v_contentHash_boxed_3126_ = lean_unbox_uint64(v_contentHash_3123_);
lean_dec_ref(v_contentHash_3123_);
v_res_3127_ = l_Lake_CacheService_artifactUrl(v_contentHash_boxed_3126_, v_service_3124_, v_scope_3125_);
return v_res_3127_;
}
}
static lean_object* _init_l_Lake_CacheService_downloadArtifact___closed__3(void){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3131_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_3132_ = lean_array_get_size(v___x_3131_);
return v___x_3132_;
}
}
static uint8_t _init_l_Lake_CacheService_downloadArtifact___closed__4(void){
_start:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; uint8_t v___x_3135_; 
v___x_3133_ = lean_obj_once(&l_Lake_CacheService_downloadArtifact___closed__3, &l_Lake_CacheService_downloadArtifact___closed__3_once, _init_l_Lake_CacheService_downloadArtifact___closed__3);
v___x_3134_ = lean_unsigned_to_nat(0u);
v___x_3135_ = lean_nat_dec_lt(v___x_3134_, v___x_3133_);
return v___x_3135_;
}
}
static uint8_t _init_l_Lake_CacheService_downloadArtifact___closed__5(void){
_start:
{
lean_object* v___x_3136_; uint8_t v___x_3137_; 
v___x_3136_ = lean_obj_once(&l_Lake_CacheService_downloadArtifact___closed__3, &l_Lake_CacheService_downloadArtifact___closed__3_once, _init_l_Lake_CacheService_downloadArtifact___closed__3);
v___x_3137_ = lean_nat_dec_le(v___x_3136_, v___x_3136_);
return v___x_3137_;
}
}
static size_t _init_l_Lake_CacheService_downloadArtifact___closed__6(void){
_start:
{
lean_object* v___x_3138_; size_t v___x_3139_; 
v___x_3138_ = lean_obj_once(&l_Lake_CacheService_downloadArtifact___closed__3, &l_Lake_CacheService_downloadArtifact___closed__3_once, _init_l_Lake_CacheService_downloadArtifact___closed__3);
v___x_3139_ = lean_usize_of_nat(v___x_3138_);
return v___x_3139_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact(lean_object* v_descr_3140_, lean_object* v_cache_3141_, lean_object* v_service_3142_, lean_object* v_scope_3143_, uint8_t v_force_3144_, lean_object* v_a_3145_){
_start:
{
uint64_t v_hash_3150_; lean_object* v_ext_3151_; lean_object* v_url_3152_; lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v___y_3216_; lean_object* v___y_3219_; uint8_t v_a_3220_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___y_3226_; lean_object* v___x_3239_; lean_object* v___x_3240_; uint8_t v___x_3241_; 
v_hash_3150_ = lean_ctor_get_uint64(v_descr_3140_, sizeof(void*)*1);
v_ext_3151_ = lean_ctor_get(v_descr_3140_, 0);
lean_inc_ref(v_scope_3143_);
v_url_3152_ = l_Lake_CacheService_artifactUrl(v_hash_3150_, v_service_3142_, v_scope_3143_);
v___x_3223_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_3224_ = l_System_FilePath_join(v_cache_3141_, v___x_3223_);
v___x_3239_ = lean_string_utf8_byte_size(v_ext_3151_);
v___x_3240_ = lean_unsigned_to_nat(0u);
v___x_3241_ = lean_nat_dec_eq(v___x_3239_, v___x_3240_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; 
v___x_3242_ = l_Lake_Hash_hex(v_hash_3150_);
v___x_3243_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_3244_ = lean_string_append(v___x_3242_, v___x_3243_);
v___x_3245_ = lean_string_append(v___x_3244_, v_ext_3151_);
v___y_3226_ = v___x_3245_;
goto v___jp_3225_;
}
else
{
lean_object* v___x_3246_; 
v___x_3246_ = l_Lake_Hash_hex(v_hash_3150_);
v___y_3226_ = v___x_3246_;
goto v___jp_3225_;
}
v___jp_3147_:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3148_ = lean_box(0);
v___x_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
return v___x_3149_;
}
v___jp_3153_:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; uint8_t v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3156_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__0));
v___x_3157_ = lean_string_append(v___y_3155_, v___x_3156_);
v___x_3158_ = l_Lake_Hash_hex(v_hash_3150_);
v___x_3159_ = lean_string_append(v___x_3157_, v___x_3158_);
lean_dec_ref(v___x_3158_);
v___x_3160_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3161_ = lean_string_append(v___x_3159_, v___x_3160_);
v___x_3162_ = lean_string_append(v___x_3161_, v___y_3154_);
v___x_3163_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3164_ = lean_string_append(v___x_3162_, v___x_3163_);
v___x_3165_ = lean_string_append(v___x_3164_, v_url_3152_);
v___x_3166_ = 1;
v___x_3167_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3167_, 0, v___x_3165_);
lean_ctor_set_uint8(v___x_3167_, sizeof(void*)*1, v___x_3166_);
lean_inc_ref(v_a_3145_);
v___x_3168_ = lean_apply_2(v_a_3145_, v___x_3167_, lean_box(0));
v___x_3169_ = lean_unsigned_to_nat(0u);
v___x_3170_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_3171_ = l_Lake_downloadArtifactCore(v_hash_3150_, v_url_3152_, v___y_3154_, v___x_3170_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v_a_3172_; lean_object* v_a_3173_; lean_object* v___x_3174_; uint8_t v___x_3175_; 
v_a_3172_ = lean_ctor_get(v___x_3171_, 0);
lean_inc(v_a_3172_);
v_a_3173_ = lean_ctor_get(v___x_3171_, 1);
lean_inc(v_a_3173_);
lean_dec_ref(v___x_3171_);
v___x_3174_ = lean_array_get_size(v_a_3173_);
v___x_3175_ = lean_nat_dec_lt(v___x_3169_, v___x_3174_);
if (v___x_3175_ == 0)
{
lean_object* v___x_3176_; 
lean_dec(v_a_3173_);
lean_dec_ref(v_a_3145_);
v___x_3176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3176_, 0, v_a_3172_);
return v___x_3176_;
}
else
{
lean_object* v___x_3177_; uint8_t v___x_3178_; 
v___x_3177_ = lean_box(0);
v___x_3178_ = lean_nat_dec_le(v___x_3174_, v___x_3174_);
if (v___x_3178_ == 0)
{
if (v___x_3175_ == 0)
{
lean_object* v___x_3179_; 
lean_dec(v_a_3173_);
lean_dec_ref(v_a_3145_);
v___x_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3179_, 0, v_a_3172_);
return v___x_3179_;
}
else
{
size_t v___x_3180_; size_t v___x_3181_; lean_object* v___x_3182_; 
v___x_3180_ = ((size_t)0ULL);
v___x_3181_ = lean_usize_of_nat(v___x_3174_);
v___x_3182_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_3173_, v___x_3180_, v___x_3181_, v___x_3177_, v_a_3145_);
lean_dec(v_a_3173_);
if (lean_obj_tag(v___x_3182_) == 0)
{
lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3189_; 
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3189_ == 0)
{
lean_object* v_unused_3190_; 
v_unused_3190_ = lean_ctor_get(v___x_3182_, 0);
lean_dec(v_unused_3190_);
v___x_3184_ = v___x_3182_;
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
else
{
lean_dec(v___x_3182_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3187_; 
if (v_isShared_3185_ == 0)
{
lean_ctor_set(v___x_3184_, 0, v_a_3172_);
v___x_3187_ = v___x_3184_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_a_3172_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
}
}
}
else
{
lean_dec(v_a_3172_);
return v___x_3182_;
}
}
}
else
{
size_t v___x_3191_; size_t v___x_3192_; lean_object* v___x_3193_; 
v___x_3191_ = ((size_t)0ULL);
v___x_3192_ = lean_usize_of_nat(v___x_3174_);
v___x_3193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_3173_, v___x_3191_, v___x_3192_, v___x_3177_, v_a_3145_);
lean_dec(v_a_3173_);
if (lean_obj_tag(v___x_3193_) == 0)
{
lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3200_; 
v_isSharedCheck_3200_ = !lean_is_exclusive(v___x_3193_);
if (v_isSharedCheck_3200_ == 0)
{
lean_object* v_unused_3201_; 
v_unused_3201_ = lean_ctor_get(v___x_3193_, 0);
lean_dec(v_unused_3201_);
v___x_3195_ = v___x_3193_;
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
else
{
lean_dec(v___x_3193_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3198_; 
if (v_isShared_3196_ == 0)
{
lean_ctor_set(v___x_3195_, 0, v_a_3172_);
v___x_3198_ = v___x_3195_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v_a_3172_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
return v___x_3198_;
}
}
}
else
{
lean_dec(v_a_3172_);
return v___x_3193_;
}
}
}
}
else
{
lean_object* v_a_3202_; lean_object* v___x_3203_; uint8_t v___x_3204_; 
v_a_3202_ = lean_ctor_get(v___x_3171_, 1);
lean_inc(v_a_3202_);
lean_dec_ref(v___x_3171_);
v___x_3203_ = lean_array_get_size(v_a_3202_);
v___x_3204_ = lean_nat_dec_lt(v___x_3169_, v___x_3203_);
if (v___x_3204_ == 0)
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
lean_dec(v_a_3202_);
lean_dec_ref(v_a_3145_);
v___x_3205_ = lean_box(0);
v___x_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3206_, 0, v___x_3205_);
return v___x_3206_;
}
else
{
lean_object* v___x_3207_; uint8_t v___x_3208_; 
v___x_3207_ = lean_box(0);
v___x_3208_ = lean_nat_dec_le(v___x_3203_, v___x_3203_);
if (v___x_3208_ == 0)
{
if (v___x_3204_ == 0)
{
lean_dec(v_a_3202_);
lean_dec_ref(v_a_3145_);
goto v___jp_3147_;
}
else
{
size_t v___x_3209_; size_t v___x_3210_; lean_object* v___x_3211_; 
v___x_3209_ = ((size_t)0ULL);
v___x_3210_ = lean_usize_of_nat(v___x_3203_);
v___x_3211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_3202_, v___x_3209_, v___x_3210_, v___x_3207_, v_a_3145_);
lean_dec(v_a_3202_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_dec_ref(v___x_3211_);
goto v___jp_3147_;
}
else
{
return v___x_3211_;
}
}
}
else
{
size_t v___x_3212_; size_t v___x_3213_; lean_object* v___x_3214_; 
v___x_3212_ = ((size_t)0ULL);
v___x_3213_ = lean_usize_of_nat(v___x_3203_);
v___x_3214_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_3202_, v___x_3212_, v___x_3213_, v___x_3207_, v_a_3145_);
lean_dec(v_a_3202_);
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_dec_ref(v___x_3214_);
goto v___jp_3147_;
}
else
{
return v___x_3214_;
}
}
}
}
}
v___jp_3215_:
{
lean_object* v_s_3217_; 
v_s_3217_ = lean_ctor_get(v_scope_3143_, 0);
lean_inc_ref(v_s_3217_);
lean_dec_ref(v_scope_3143_);
v___y_3154_ = v___y_3216_;
v___y_3155_ = v_s_3217_;
goto v___jp_3153_;
}
v___jp_3218_:
{
if (v_a_3220_ == 0)
{
v___y_3216_ = v___y_3219_;
goto v___jp_3215_;
}
else
{
if (v_force_3144_ == 0)
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
lean_dec_ref(v___y_3219_);
lean_dec_ref(v_url_3152_);
lean_dec_ref(v_a_3145_);
lean_dec_ref(v_scope_3143_);
v___x_3221_ = lean_box(0);
v___x_3222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
return v___x_3222_;
}
else
{
v___y_3216_ = v___y_3219_;
goto v___jp_3215_;
}
}
}
v___jp_3225_:
{
lean_object* v_path_3227_; uint8_t v___x_3228_; lean_object* v___x_3229_; uint8_t v___x_3230_; 
v_path_3227_ = l_System_FilePath_join(v___x_3224_, v___y_3226_);
v___x_3228_ = l_System_FilePath_pathExists(v_path_3227_);
v___x_3229_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_3230_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__4, &l_Lake_CacheService_downloadArtifact___closed__4_once, _init_l_Lake_CacheService_downloadArtifact___closed__4);
if (v___x_3230_ == 0)
{
v___y_3219_ = v_path_3227_;
v_a_3220_ = v___x_3228_;
goto v___jp_3218_;
}
else
{
lean_object* v___x_3231_; uint8_t v___x_3232_; 
v___x_3231_ = lean_box(0);
v___x_3232_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__5, &l_Lake_CacheService_downloadArtifact___closed__5_once, _init_l_Lake_CacheService_downloadArtifact___closed__5);
if (v___x_3232_ == 0)
{
if (v___x_3230_ == 0)
{
v___y_3219_ = v_path_3227_;
v_a_3220_ = v___x_3228_;
goto v___jp_3218_;
}
else
{
size_t v___x_3233_; size_t v___x_3234_; lean_object* v___x_3235_; 
v___x_3233_ = ((size_t)0ULL);
v___x_3234_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
lean_inc_ref(v_a_3145_);
v___x_3235_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v___x_3229_, v___x_3233_, v___x_3234_, v___x_3231_, v_a_3145_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_dec_ref(v___x_3235_);
v___y_3219_ = v_path_3227_;
v_a_3220_ = v___x_3228_;
goto v___jp_3218_;
}
else
{
lean_dec_ref(v_path_3227_);
lean_dec_ref(v_url_3152_);
lean_dec_ref(v_a_3145_);
lean_dec_ref(v_scope_3143_);
return v___x_3235_;
}
}
}
else
{
size_t v___x_3236_; size_t v___x_3237_; lean_object* v___x_3238_; 
v___x_3236_ = ((size_t)0ULL);
v___x_3237_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
lean_inc_ref(v_a_3145_);
v___x_3238_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v___x_3229_, v___x_3236_, v___x_3237_, v___x_3231_, v_a_3145_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_dec_ref(v___x_3238_);
v___y_3219_ = v_path_3227_;
v_a_3220_ = v___x_3228_;
goto v___jp_3218_;
}
else
{
lean_dec_ref(v_path_3227_);
lean_dec_ref(v_url_3152_);
lean_dec_ref(v_a_3145_);
lean_dec_ref(v_scope_3143_);
return v___x_3238_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact___boxed(lean_object* v_descr_3247_, lean_object* v_cache_3248_, lean_object* v_service_3249_, lean_object* v_scope_3250_, lean_object* v_force_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_){
_start:
{
uint8_t v_force_boxed_3254_; lean_object* v_res_3255_; 
v_force_boxed_3254_ = lean_unbox(v_force_3251_);
v_res_3255_ = l_Lake_CacheService_downloadArtifact(v_descr_3247_, v_cache_3248_, v_service_3249_, v_scope_3250_, v_force_boxed_3254_, v_a_3252_);
lean_dec_ref(v_descr_3247_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(lean_object* v_a_3256_, lean_object* v_file_3257_, lean_object* v_contentType_3258_, lean_object* v_url_3259_, lean_object* v_key_3260_){
_start:
{
lean_object* v___y_3263_; lean_object* v_a_3264_; lean_object* v_stderr_3277_; lean_object* v___y_3286_; lean_object* v___y_3289_; lean_object* v_a_3290_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v_stderr_3329_; lean_object* v_a_3330_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; uint8_t v___x_3366_; uint8_t v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3344_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8));
v___x_3345_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_3346_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_3347_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_3348_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18));
v___x_3349_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_3350_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20));
v___x_3351_ = lean_string_append(v___x_3350_, v_contentType_3258_);
v___x_3352_ = lean_unsigned_to_nat(14u);
v___x_3353_ = lean_mk_empty_array_with_capacity(v___x_3352_);
lean_dec_ref(v___x_3353_);
v___x_3354_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26);
v___x_3355_ = lean_array_push(v___x_3354_, v_key_3260_);
v___x_3356_ = lean_array_push(v___x_3355_, v___x_3346_);
v___x_3357_ = lean_array_push(v___x_3356_, v___x_3347_);
v___x_3358_ = lean_array_push(v___x_3357_, v___x_3348_);
v___x_3359_ = lean_array_push(v___x_3358_, v_file_3257_);
v___x_3360_ = lean_array_push(v___x_3359_, v_url_3259_);
v___x_3361_ = lean_array_push(v___x_3360_, v___x_3349_);
v___x_3362_ = lean_array_push(v___x_3361_, v___x_3351_);
v___x_3363_ = lean_box(0);
v___x_3364_ = lean_unsigned_to_nat(0u);
v___x_3365_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_3366_ = 1;
v___x_3367_ = 0;
v___x_3368_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_3368_, 0, v___x_3344_);
lean_ctor_set(v___x_3368_, 1, v___x_3345_);
lean_ctor_set(v___x_3368_, 2, v___x_3362_);
lean_ctor_set(v___x_3368_, 3, v___x_3363_);
lean_ctor_set(v___x_3368_, 4, v___x_3365_);
lean_ctor_set_uint8(v___x_3368_, sizeof(void*)*5, v___x_3366_);
lean_ctor_set_uint8(v___x_3368_, sizeof(void*)*5 + 1, v___x_3367_);
v___x_3369_ = l_Lake_captureProc_x27(v___x_3368_, v___x_3365_);
if (lean_obj_tag(v___x_3369_) == 0)
{
lean_object* v_a_3370_; lean_object* v_a_3371_; lean_object* v___x_3385_; uint8_t v___x_3386_; 
v_a_3370_ = lean_ctor_get(v___x_3369_, 0);
lean_inc(v_a_3370_);
v_a_3371_ = lean_ctor_get(v___x_3369_, 1);
lean_inc(v_a_3371_);
lean_dec_ref(v___x_3369_);
v___x_3385_ = lean_array_get_size(v_a_3371_);
v___x_3386_ = lean_nat_dec_lt(v___x_3364_, v___x_3385_);
if (v___x_3386_ == 0)
{
lean_dec(v_a_3371_);
goto v___jp_3372_;
}
else
{
lean_object* v___x_3387_; uint8_t v___x_3388_; 
v___x_3387_ = lean_box(0);
v___x_3388_ = lean_nat_dec_le(v___x_3385_, v___x_3385_);
if (v___x_3388_ == 0)
{
if (v___x_3386_ == 0)
{
lean_dec(v_a_3371_);
goto v___jp_3372_;
}
else
{
size_t v___x_3389_; size_t v___x_3390_; lean_object* v___x_3391_; 
v___x_3389_ = ((size_t)0ULL);
v___x_3390_ = lean_usize_of_nat(v___x_3385_);
lean_inc_ref(v_a_3256_);
v___x_3391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_3371_, v___x_3389_, v___x_3390_, v___x_3387_, v_a_3256_);
lean_dec(v_a_3371_);
if (lean_obj_tag(v___x_3391_) == 0)
{
lean_dec_ref(v___x_3391_);
goto v___jp_3372_;
}
else
{
lean_dec(v_a_3370_);
lean_dec_ref(v_a_3256_);
return v___x_3391_;
}
}
}
else
{
size_t v___x_3392_; size_t v___x_3393_; lean_object* v___x_3394_; 
v___x_3392_ = ((size_t)0ULL);
v___x_3393_ = lean_usize_of_nat(v___x_3385_);
lean_inc_ref(v_a_3256_);
v___x_3394_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_3371_, v___x_3392_, v___x_3393_, v___x_3387_, v_a_3256_);
lean_dec(v_a_3371_);
if (lean_obj_tag(v___x_3394_) == 0)
{
lean_dec_ref(v___x_3394_);
goto v___jp_3372_;
}
else
{
lean_dec(v_a_3370_);
lean_dec_ref(v_a_3256_);
return v___x_3394_;
}
}
}
v___jp_3372_:
{
lean_object* v_stderr_3373_; lean_object* v___x_3374_; 
v_stderr_3373_ = lean_ctor_get(v_a_3370_, 1);
lean_inc_ref(v_stderr_3373_);
v___x_3374_ = l_Lean_Json_parse(v_stderr_3373_);
if (lean_obj_tag(v___x_3374_) == 0)
{
lean_object* v_a_3375_; 
lean_inc_ref(v_stderr_3373_);
lean_dec(v_a_3370_);
v_a_3375_ = lean_ctor_get(v___x_3374_, 0);
lean_inc(v_a_3375_);
lean_dec_ref(v___x_3374_);
v_stderr_3329_ = v_stderr_3373_;
v_a_3330_ = v_a_3375_;
goto v___jp_3328_;
}
else
{
lean_object* v_a_3376_; lean_object* v___x_3377_; 
v_a_3376_ = lean_ctor_get(v___x_3374_, 0);
lean_inc(v_a_3376_);
lean_dec_ref(v___x_3374_);
v___x_3377_ = l_Lean_Json_getObj_x3f(v_a_3376_);
if (lean_obj_tag(v___x_3377_) == 0)
{
lean_object* v_a_3378_; 
lean_inc_ref(v_stderr_3373_);
lean_dec(v_a_3370_);
v_a_3378_ = lean_ctor_get(v___x_3377_, 0);
lean_inc(v_a_3378_);
lean_dec_ref(v___x_3377_);
v_stderr_3329_ = v_stderr_3373_;
v_a_3330_ = v_a_3378_;
goto v___jp_3328_;
}
else
{
lean_object* v_a_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v_a_3379_ = lean_ctor_get(v___x_3377_, 0);
lean_inc(v_a_3379_);
lean_dec_ref(v___x_3377_);
v___x_3380_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28));
v___x_3381_ = l_Lake_JsonObject_getJson_x3f(v_a_3379_, v___x_3380_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_inc_ref(v_stderr_3373_);
lean_dec(v_a_3379_);
lean_dec(v_a_3370_);
v_stderr_3277_ = v_stderr_3373_;
goto v___jp_3276_;
}
else
{
lean_object* v_val_3382_; lean_object* v___x_3383_; 
v_val_3382_ = lean_ctor_get(v___x_3381_, 0);
lean_inc(v_val_3382_);
lean_dec_ref(v___x_3381_);
v___x_3383_ = l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_3382_);
if (lean_obj_tag(v___x_3383_) == 0)
{
lean_dec_ref(v___x_3383_);
v___y_3317_ = v_a_3370_;
v___y_3318_ = v_a_3379_;
goto v___jp_3316_;
}
else
{
if (lean_obj_tag(v___x_3383_) == 0)
{
lean_dec_ref(v___x_3383_);
v___y_3317_ = v_a_3370_;
v___y_3318_ = v_a_3379_;
goto v___jp_3316_;
}
else
{
lean_object* v_a_3384_; 
lean_dec(v_a_3379_);
v_a_3384_ = lean_ctor_get(v___x_3383_, 0);
lean_inc(v_a_3384_);
lean_dec_ref(v___x_3383_);
v___y_3289_ = v_a_3370_;
v_a_3290_ = v_a_3384_;
goto v___jp_3288_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3395_; lean_object* v___x_3396_; uint8_t v___x_3397_; 
v_a_3395_ = lean_ctor_get(v___x_3369_, 1);
lean_inc(v_a_3395_);
lean_dec_ref(v___x_3369_);
v___x_3396_ = lean_array_get_size(v_a_3395_);
v___x_3397_ = lean_nat_dec_lt(v___x_3364_, v___x_3396_);
if (v___x_3397_ == 0)
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
lean_dec(v_a_3395_);
lean_dec_ref(v_a_3256_);
v___x_3398_ = lean_box(0);
v___x_3399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
return v___x_3399_;
}
else
{
lean_object* v___x_3400_; uint8_t v___x_3401_; 
v___x_3400_ = lean_box(0);
v___x_3401_ = lean_nat_dec_le(v___x_3396_, v___x_3396_);
if (v___x_3401_ == 0)
{
if (v___x_3397_ == 0)
{
lean_dec(v_a_3395_);
lean_dec_ref(v_a_3256_);
goto v___jp_3341_;
}
else
{
size_t v___x_3402_; size_t v___x_3403_; lean_object* v___x_3404_; 
v___x_3402_ = ((size_t)0ULL);
v___x_3403_ = lean_usize_of_nat(v___x_3396_);
v___x_3404_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_3395_, v___x_3402_, v___x_3403_, v___x_3400_, v_a_3256_);
lean_dec(v_a_3395_);
if (lean_obj_tag(v___x_3404_) == 0)
{
lean_dec_ref(v___x_3404_);
goto v___jp_3341_;
}
else
{
return v___x_3404_;
}
}
}
else
{
size_t v___x_3405_; size_t v___x_3406_; lean_object* v___x_3407_; 
v___x_3405_ = ((size_t)0ULL);
v___x_3406_ = lean_usize_of_nat(v___x_3396_);
v___x_3407_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_3395_, v___x_3405_, v___x_3406_, v___x_3400_, v_a_3256_);
lean_dec(v_a_3395_);
if (lean_obj_tag(v___x_3407_) == 0)
{
lean_dec_ref(v___x_3407_);
goto v___jp_3341_;
}
else
{
return v___x_3407_;
}
}
}
}
v___jp_3262_:
{
lean_object* v_stderr_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; uint8_t v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; 
v_stderr_3265_ = lean_ctor_get(v___y_3263_, 1);
lean_inc_ref(v_stderr_3265_);
lean_dec_ref(v___y_3263_);
v___x_3266_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0));
v___x_3267_ = lean_string_append(v___x_3266_, v_a_3264_);
lean_dec_ref(v_a_3264_);
v___x_3268_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_3269_ = lean_string_append(v___x_3267_, v___x_3268_);
v___x_3270_ = lean_string_append(v___x_3269_, v_stderr_3265_);
lean_dec_ref(v_stderr_3265_);
v___x_3271_ = 3;
v___x_3272_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3272_, 0, v___x_3270_);
lean_ctor_set_uint8(v___x_3272_, sizeof(void*)*1, v___x_3271_);
v___x_3273_ = lean_apply_2(v_a_3256_, v___x_3272_, lean_box(0));
v___x_3274_ = lean_box(0);
v___x_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
return v___x_3275_;
}
v___jp_3276_:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; uint8_t v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3278_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2));
v___x_3279_ = lean_string_append(v___x_3278_, v_stderr_3277_);
lean_dec_ref(v_stderr_3277_);
v___x_3280_ = 3;
v___x_3281_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3281_, 0, v___x_3279_);
lean_ctor_set_uint8(v___x_3281_, sizeof(void*)*1, v___x_3280_);
v___x_3282_ = lean_apply_2(v_a_3256_, v___x_3281_, lean_box(0));
v___x_3283_ = lean_box(0);
v___x_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3283_);
return v___x_3284_;
}
v___jp_3285_:
{
lean_object* v_stderr_3287_; 
v_stderr_3287_ = lean_ctor_get(v___y_3286_, 1);
lean_inc_ref(v_stderr_3287_);
lean_dec_ref(v___y_3286_);
v_stderr_3277_ = v_stderr_3287_;
goto v___jp_3276_;
}
v___jp_3288_:
{
if (lean_obj_tag(v_a_3290_) == 0)
{
v___y_3286_ = v___y_3289_;
goto v___jp_3285_;
}
else
{
lean_object* v_val_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3315_; 
v_val_3291_ = lean_ctor_get(v_a_3290_, 0);
v_isSharedCheck_3315_ = !lean_is_exclusive(v_a_3290_);
if (v_isSharedCheck_3315_ == 0)
{
v___x_3293_ = v_a_3290_;
v_isShared_3294_ = v_isSharedCheck_3315_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_val_3291_);
lean_dec(v_a_3290_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3315_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3295_; uint8_t v___x_3296_; 
v___x_3295_ = lean_unsigned_to_nat(200u);
v___x_3296_ = lean_nat_dec_eq(v_val_3291_, v___x_3295_);
if (v___x_3296_ == 0)
{
lean_object* v_stdout_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; uint8_t v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3309_; 
v_stdout_3297_ = lean_ctor_get(v___y_3289_, 0);
lean_inc_ref(v_stdout_3297_);
lean_dec_ref(v___y_3289_);
v___x_3298_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3));
v___x_3299_ = l_Nat_reprFast(v_val_3291_);
v___x_3300_ = lean_string_append(v___x_3298_, v___x_3299_);
lean_dec_ref(v___x_3299_);
v___x_3301_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_3302_ = lean_string_append(v___x_3300_, v___x_3301_);
v___x_3303_ = lean_string_append(v___x_3302_, v_stdout_3297_);
lean_dec_ref(v_stdout_3297_);
v___x_3304_ = 3;
v___x_3305_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3305_, 0, v___x_3303_);
lean_ctor_set_uint8(v___x_3305_, sizeof(void*)*1, v___x_3304_);
v___x_3306_ = lean_apply_2(v_a_3256_, v___x_3305_, lean_box(0));
v___x_3307_ = lean_box(0);
if (v_isShared_3294_ == 0)
{
lean_ctor_set(v___x_3293_, 0, v___x_3307_);
v___x_3309_ = v___x_3293_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v___x_3307_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
else
{
lean_object* v___x_3311_; lean_object* v___x_3313_; 
lean_dec(v_val_3291_);
lean_dec_ref(v___y_3289_);
lean_dec_ref(v_a_3256_);
v___x_3311_ = lean_box(0);
if (v_isShared_3294_ == 0)
{
lean_ctor_set_tag(v___x_3293_, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3311_);
v___x_3313_ = v___x_3293_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v___x_3311_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
return v___x_3313_;
}
}
}
}
}
v___jp_3316_:
{
lean_object* v___x_3319_; lean_object* v___x_3320_; 
v___x_3319_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_3320_ = l_Lake_JsonObject_getJson_x3f(v___y_3318_, v___x_3319_);
lean_dec(v___y_3318_);
if (lean_obj_tag(v___x_3320_) == 0)
{
v___y_3286_ = v___y_3317_;
goto v___jp_3285_;
}
else
{
lean_object* v_val_3321_; lean_object* v___x_3322_; 
v_val_3321_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_val_3321_);
lean_dec_ref(v___x_3320_);
v___x_3322_ = l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_3321_);
if (lean_obj_tag(v___x_3322_) == 0)
{
lean_object* v_a_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v_a_3323_ = lean_ctor_get(v___x_3322_, 0);
lean_inc(v_a_3323_);
lean_dec_ref(v___x_3322_);
v___x_3324_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_3325_ = lean_string_append(v___x_3324_, v_a_3323_);
lean_dec(v_a_3323_);
v___y_3263_ = v___y_3317_;
v_a_3264_ = v___x_3325_;
goto v___jp_3262_;
}
else
{
if (lean_obj_tag(v___x_3322_) == 0)
{
lean_object* v_a_3326_; 
v_a_3326_ = lean_ctor_get(v___x_3322_, 0);
lean_inc(v_a_3326_);
lean_dec_ref(v___x_3322_);
v___y_3263_ = v___y_3317_;
v_a_3264_ = v_a_3326_;
goto v___jp_3262_;
}
else
{
lean_object* v_a_3327_; 
v_a_3327_ = lean_ctor_get(v___x_3322_, 0);
lean_inc(v_a_3327_);
lean_dec_ref(v___x_3322_);
v___y_3289_ = v___y_3317_;
v_a_3290_ = v_a_3327_;
goto v___jp_3288_;
}
}
}
}
v___jp_3328_:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; uint8_t v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3331_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_3332_ = lean_string_append(v___x_3331_, v_a_3330_);
lean_dec_ref(v_a_3330_);
v___x_3333_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_3334_ = lean_string_append(v___x_3332_, v___x_3333_);
v___x_3335_ = lean_string_append(v___x_3334_, v_stderr_3329_);
lean_dec_ref(v_stderr_3329_);
v___x_3336_ = 3;
v___x_3337_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3337_, 0, v___x_3335_);
lean_ctor_set_uint8(v___x_3337_, sizeof(void*)*1, v___x_3336_);
v___x_3338_ = lean_apply_2(v_a_3256_, v___x_3337_, lean_box(0));
v___x_3339_ = lean_box(0);
v___x_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3339_);
return v___x_3340_;
}
v___jp_3341_:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3342_ = lean_box(0);
v___x_3343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3342_);
return v___x_3343_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0___boxed(lean_object* v_a_3408_, lean_object* v_file_3409_, lean_object* v_contentType_3410_, lean_object* v_url_3411_, lean_object* v_key_3412_, lean_object* v_a_3413_){
_start:
{
lean_object* v_res_3414_; 
v_res_3414_ = l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(v_a_3408_, v_file_3409_, v_contentType_3410_, v_url_3411_, v_key_3412_);
lean_dec_ref(v_contentType_3410_);
return v_res_3414_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact(uint64_t v_contentHash_3416_, lean_object* v_art_3417_, lean_object* v_service_3418_, lean_object* v_scope_3419_, lean_object* v_a_3420_){
_start:
{
lean_object* v_url_3422_; lean_object* v___y_3424_; lean_object* v_s_3441_; 
lean_inc_ref(v_scope_3419_);
lean_inc_ref(v_service_3418_);
v_url_3422_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_3416_, v_service_3418_, v_scope_3419_);
v_s_3441_ = lean_ctor_get(v_scope_3419_, 0);
lean_inc_ref(v_s_3441_);
lean_dec_ref(v_scope_3419_);
v___y_3424_ = v_s_3441_;
goto v___jp_3423_;
v___jp_3423_:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; uint8_t v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v_key_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3425_ = ((lean_object*)(l_Lake_CacheService_uploadArtifact___closed__0));
v___x_3426_ = lean_string_append(v___y_3424_, v___x_3425_);
v___x_3427_ = l_Lake_Hash_hex(v_contentHash_3416_);
v___x_3428_ = lean_string_append(v___x_3426_, v___x_3427_);
lean_dec_ref(v___x_3427_);
v___x_3429_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3430_ = lean_string_append(v___x_3428_, v___x_3429_);
v___x_3431_ = lean_string_append(v___x_3430_, v_art_3417_);
v___x_3432_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3433_ = lean_string_append(v___x_3431_, v___x_3432_);
v___x_3434_ = lean_string_append(v___x_3433_, v_url_3422_);
v___x_3435_ = 1;
v___x_3436_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3436_, 0, v___x_3434_);
lean_ctor_set_uint8(v___x_3436_, sizeof(void*)*1, v___x_3435_);
lean_inc_ref(v_a_3420_);
v___x_3437_ = lean_apply_2(v_a_3420_, v___x_3436_, lean_box(0));
v_key_3438_ = lean_ctor_get(v_service_3418_, 1);
lean_inc_ref(v_key_3438_);
lean_dec_ref(v_service_3418_);
v___x_3439_ = ((lean_object*)(l_Lake_CacheService_artifactContentType___closed__0));
v___x_3440_ = l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(v_a_3420_, v_art_3417_, v___x_3439_, v_url_3422_, v_key_3438_);
return v___x_3440_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact___boxed(lean_object* v_contentHash_3442_, lean_object* v_art_3443_, lean_object* v_service_3444_, lean_object* v_scope_3445_, lean_object* v_a_3446_, lean_object* v_a_3447_){
_start:
{
uint64_t v_contentHash_boxed_3448_; lean_object* v_res_3449_; 
v_contentHash_boxed_3448_ = lean_unbox_uint64(v_contentHash_3442_);
lean_dec_ref(v_contentHash_3442_);
v_res_3449_ = l_Lake_CacheService_uploadArtifact(v_contentHash_boxed_3448_, v_art_3443_, v_service_3444_, v_scope_3445_, v_a_3446_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(uint8_t v_x_3450_){
_start:
{
if (v_x_3450_ == 0)
{
lean_object* v___x_3451_; 
v___x_3451_ = lean_unsigned_to_nat(0u);
return v___x_3451_;
}
else
{
lean_object* v___x_3452_; 
v___x_3452_ = lean_unsigned_to_nat(1u);
return v___x_3452_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx___boxed(lean_object* v_x_3453_){
_start:
{
uint8_t v_x_boxed_3454_; lean_object* v_res_3455_; 
v_x_boxed_3454_ = lean_unbox(v_x_3453_);
v_res_3455_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_boxed_3454_);
return v_res_3455_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_toCtorIdx(uint8_t v_x_3456_){
_start:
{
lean_object* v___x_3457_; 
v___x_3457_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_3456_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_toCtorIdx___boxed(lean_object* v_x_3458_){
_start:
{
uint8_t v_x_4__boxed_3459_; lean_object* v_res_3460_; 
v_x_4__boxed_3459_ = lean_unbox(v_x_3458_);
v_res_3460_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_toCtorIdx(v_x_4__boxed_3459_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(lean_object* v_k_3461_){
_start:
{
lean_inc(v_k_3461_);
return v_k_3461_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg___boxed(lean_object* v_k_3462_){
_start:
{
lean_object* v_res_3463_; 
v_res_3463_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(v_k_3462_);
lean_dec(v_k_3462_);
return v_res_3463_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(lean_object* v_motive_3464_, lean_object* v_ctorIdx_3465_, uint8_t v_t_3466_, lean_object* v_h_3467_, lean_object* v_k_3468_){
_start:
{
lean_inc(v_k_3468_);
return v_k_3468_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___boxed(lean_object* v_motive_3469_, lean_object* v_ctorIdx_3470_, lean_object* v_t_3471_, lean_object* v_h_3472_, lean_object* v_k_3473_){
_start:
{
uint8_t v_t_boxed_3474_; lean_object* v_res_3475_; 
v_t_boxed_3474_ = lean_unbox(v_t_3471_);
v_res_3475_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(v_motive_3469_, v_ctorIdx_3470_, v_t_boxed_3474_, v_h_3472_, v_k_3473_);
lean_dec(v_k_3473_);
lean_dec(v_ctorIdx_3470_);
return v_res_3475_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(lean_object* v_get_3476_){
_start:
{
lean_inc(v_get_3476_);
return v_get_3476_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg___boxed(lean_object* v_get_3477_){
_start:
{
lean_object* v_res_3478_; 
v_res_3478_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(v_get_3477_);
lean_dec(v_get_3477_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(lean_object* v_motive_3479_, uint8_t v_t_3480_, lean_object* v_h_3481_, lean_object* v_get_3482_){
_start:
{
lean_inc(v_get_3482_);
return v_get_3482_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___boxed(lean_object* v_motive_3483_, lean_object* v_t_3484_, lean_object* v_h_3485_, lean_object* v_get_3486_){
_start:
{
uint8_t v_t_boxed_3487_; lean_object* v_res_3488_; 
v_t_boxed_3487_ = lean_unbox(v_t_3484_);
v_res_3488_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(v_motive_3483_, v_t_boxed_3487_, v_h_3485_, v_get_3486_);
lean_dec(v_get_3486_);
return v_res_3488_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(lean_object* v_put_3489_){
_start:
{
lean_inc(v_put_3489_);
return v_put_3489_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg___boxed(lean_object* v_put_3490_){
_start:
{
lean_object* v_res_3491_; 
v_res_3491_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(v_put_3490_);
lean_dec(v_put_3490_);
return v_res_3491_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(lean_object* v_motive_3492_, uint8_t v_t_3493_, lean_object* v_h_3494_, lean_object* v_put_3495_){
_start:
{
lean_inc(v_put_3495_);
return v_put_3495_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___boxed(lean_object* v_motive_3496_, lean_object* v_t_3497_, lean_object* v_h_3498_, lean_object* v_put_3499_){
_start:
{
uint8_t v_t_boxed_3500_; lean_object* v_res_3501_; 
v_t_boxed_3500_ = lean_unbox(v_t_3497_);
v_res_3501_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(v_motive_3496_, v_t_boxed_3500_, v_h_3498_, v_put_3499_);
lean_dec(v_put_3499_);
return v_res_3501_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(lean_object* v_n_3502_){
_start:
{
lean_object* v___x_3503_; uint8_t v___x_3504_; 
v___x_3503_ = lean_unsigned_to_nat(0u);
v___x_3504_ = lean_nat_dec_le(v_n_3502_, v___x_3503_);
if (v___x_3504_ == 0)
{
uint8_t v___x_3505_; 
v___x_3505_ = 1;
return v___x_3505_;
}
else
{
uint8_t v___x_3506_; 
v___x_3506_ = 0;
return v___x_3506_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat___boxed(lean_object* v_n_3507_){
_start:
{
uint8_t v_res_3508_; lean_object* v_r_3509_; 
v_res_3508_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(v_n_3507_);
lean_dec(v_n_3507_);
v_r_3509_ = lean_box(v_res_3508_);
return v_r_3509_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(uint8_t v_x_3510_, uint8_t v_y_3511_){
_start:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; uint8_t v___x_3514_; 
v___x_3512_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_3510_);
v___x_3513_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_y_3511_);
v___x_3514_ = lean_nat_dec_eq(v___x_3512_, v___x_3513_);
lean_dec(v___x_3513_);
lean_dec(v___x_3512_);
return v___x_3514_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind___boxed(lean_object* v_x_3515_, lean_object* v_y_3516_){
_start:
{
uint8_t v_x_13__boxed_3517_; uint8_t v_y_14__boxed_3518_; uint8_t v_res_3519_; lean_object* v_r_3520_; 
v_x_13__boxed_3517_ = lean_unbox(v_x_3515_);
v_y_14__boxed_3518_ = lean_unbox(v_y_3516_);
v_res_3519_ = l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(v_x_13__boxed_3517_, v_y_14__boxed_3518_);
v_r_3520_ = lean_box(v_res_3519_);
return v_r_3520_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(lean_object* v_cfg_3522_, lean_object* v_out_3523_){
_start:
{
lean_object* v___x_3524_; lean_object* v___x_3525_; 
v___x_3524_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___closed__0));
v___x_3525_ = l_Lake_JsonObject_getJson_x3f(v_out_3523_, v___x_3524_);
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_object* v___x_3526_; 
v___x_3526_ = lean_box(0);
return v___x_3526_;
}
else
{
lean_object* v_val_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3543_; 
v_val_3527_ = lean_ctor_get(v___x_3525_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3525_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3529_ = v___x_3525_;
v_isShared_3530_ = v_isSharedCheck_3543_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_val_3527_);
lean_dec(v___x_3525_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3543_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3531_; 
v___x_3531_ = l_Lean_Json_getNat_x3f(v_val_3527_);
if (lean_obj_tag(v___x_3531_) == 0)
{
lean_object* v___x_3532_; 
lean_dec_ref(v___x_3531_);
lean_del_object(v___x_3529_);
v___x_3532_ = lean_box(0);
return v___x_3532_;
}
else
{
if (lean_obj_tag(v___x_3531_) == 1)
{
lean_object* v_a_3533_; lean_object* v_infos_3534_; lean_object* v___x_3535_; uint8_t v___x_3536_; 
v_a_3533_ = lean_ctor_get(v___x_3531_, 0);
lean_inc(v_a_3533_);
lean_dec_ref(v___x_3531_);
v_infos_3534_ = lean_ctor_get(v_cfg_3522_, 1);
v___x_3535_ = lean_array_get_size(v_infos_3534_);
v___x_3536_ = lean_nat_dec_lt(v_a_3533_, v___x_3535_);
if (v___x_3536_ == 0)
{
lean_object* v___x_3537_; 
lean_dec(v_a_3533_);
lean_del_object(v___x_3529_);
v___x_3537_ = lean_box(0);
return v___x_3537_;
}
else
{
lean_object* v___x_3538_; lean_object* v___x_3540_; 
v___x_3538_ = lean_array_fget_borrowed(v_infos_3534_, v_a_3533_);
lean_dec(v_a_3533_);
lean_inc(v___x_3538_);
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 0, v___x_3538_);
v___x_3540_ = v___x_3529_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___x_3538_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
else
{
lean_object* v___x_3542_; 
lean_dec_ref(v___x_3531_);
lean_del_object(v___x_3529_);
v___x_3542_ = lean_box(0);
return v___x_3542_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___boxed(lean_object* v_cfg_3544_, lean_object* v_out_3545_){
_start:
{
lean_object* v_res_3546_; 
v_res_3546_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_3544_, v_out_3545_);
lean_dec(v_out_3545_);
lean_dec_ref(v_cfg_3544_);
return v_res_3546_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(lean_object* v_s_3547_, lean_object* v_pos_3548_){
_start:
{
lean_object* v_str_3549_; lean_object* v_startInclusive_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; uint8_t v___x_3554_; 
v_str_3549_ = lean_ctor_get(v_s_3547_, 0);
v_startInclusive_3550_ = lean_ctor_get(v_s_3547_, 1);
v___x_3551_ = lean_nat_add(v_startInclusive_3550_, v_pos_3548_);
v___x_3552_ = lean_nat_sub(v___x_3551_, v_startInclusive_3550_);
v___x_3553_ = lean_unsigned_to_nat(0u);
v___x_3554_ = lean_nat_dec_eq(v___x_3552_, v___x_3553_);
if (v___x_3554_ == 0)
{
lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; uint8_t v___y_3563_; lean_object* v___x_3564_; uint32_t v___x_3565_; uint8_t v___y_3567_; uint32_t v___x_3572_; uint8_t v___x_3573_; 
lean_inc(v_startInclusive_3550_);
lean_inc_ref(v_str_3549_);
v___x_3555_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3555_, 0, v_str_3549_);
lean_ctor_set(v___x_3555_, 1, v_startInclusive_3550_);
lean_ctor_set(v___x_3555_, 2, v___x_3551_);
v___x_3556_ = lean_unsigned_to_nat(1u);
v___x_3557_ = lean_nat_sub(v___x_3552_, v___x_3556_);
lean_dec(v___x_3552_);
v___x_3558_ = l_String_Slice_posLE(v___x_3555_, v___x_3557_);
lean_dec_ref(v___x_3555_);
v___x_3564_ = lean_nat_add(v_startInclusive_3550_, v___x_3558_);
v___x_3565_ = lean_string_utf8_get_fast(v_str_3549_, v___x_3564_);
lean_dec(v___x_3564_);
v___x_3572_ = 32;
v___x_3573_ = lean_uint32_dec_eq(v___x_3565_, v___x_3572_);
if (v___x_3573_ == 0)
{
uint32_t v___x_3574_; uint8_t v___x_3575_; 
v___x_3574_ = 9;
v___x_3575_ = lean_uint32_dec_eq(v___x_3565_, v___x_3574_);
v___y_3567_ = v___x_3575_;
goto v___jp_3566_;
}
else
{
v___y_3567_ = v___x_3573_;
goto v___jp_3566_;
}
v___jp_3559_:
{
uint8_t v___x_3560_; 
v___x_3560_ = l_String_instDecidableLtRaw___aux__1(v___x_3558_, v_pos_3548_);
if (v___x_3560_ == 0)
{
lean_dec(v___x_3558_);
return v_pos_3548_;
}
else
{
lean_dec(v_pos_3548_);
v_pos_3548_ = v___x_3558_;
goto _start;
}
}
v___jp_3562_:
{
if (v___y_3563_ == 0)
{
lean_dec(v___x_3558_);
return v_pos_3548_;
}
else
{
goto v___jp_3559_;
}
}
v___jp_3566_:
{
if (v___y_3567_ == 0)
{
uint32_t v___x_3568_; uint8_t v___x_3569_; 
v___x_3568_ = 13;
v___x_3569_ = lean_uint32_dec_eq(v___x_3565_, v___x_3568_);
if (v___x_3569_ == 0)
{
uint32_t v___x_3570_; uint8_t v___x_3571_; 
v___x_3570_ = 10;
v___x_3571_ = lean_uint32_dec_eq(v___x_3565_, v___x_3570_);
v___y_3563_ = v___x_3571_;
goto v___jp_3562_;
}
else
{
v___y_3563_ = v___x_3569_;
goto v___jp_3562_;
}
}
else
{
goto v___jp_3559_;
}
}
}
else
{
lean_dec(v___x_3552_);
lean_dec(v___x_3551_);
return v_pos_3548_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0___boxed(lean_object* v_s_3576_, lean_object* v_pos_3577_){
_start:
{
lean_object* v_res_3578_; 
v_res_3578_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v_s_3576_, v_pos_3577_);
lean_dec_ref(v_s_3576_);
return v_res_3578_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(lean_object* v_cfg_3591_, lean_object* v_hOut_3592_, lean_object* v_info_3593_, lean_object* v_code_x3f_3594_, lean_object* v_out_3595_, lean_object* v_line_3596_, lean_object* v_a_3597_){
_start:
{
lean_object* v_msg_3600_; lean_object* v___y_3601_; lean_object* v___y_3618_; lean_object* v_msg_3619_; lean_object* v___y_3620_; lean_object* v___y_3636_; lean_object* v___y_3637_; lean_object* v___y_3638_; lean_object* v_a_3639_; lean_object* v___y_3645_; lean_object* v___y_3646_; lean_object* v___y_3647_; lean_object* v___y_3648_; lean_object* v___y_3649_; lean_object* v_val_3650_; uint8_t v_kind_3661_; lean_object* v_scope_3662_; lean_object* v_msg_3664_; lean_object* v___y_3665_; lean_object* v_msg_3731_; lean_object* v___y_3732_; lean_object* v___y_3742_; lean_object* v___y_3743_; lean_object* v___y_3761_; 
v_kind_3661_ = lean_ctor_get_uint8(v_cfg_3591_, sizeof(void*)*3);
v_scope_3662_ = lean_ctor_get(v_cfg_3591_, 0);
lean_inc_ref(v_scope_3662_);
lean_dec_ref(v_cfg_3591_);
if (v_kind_3661_ == 0)
{
lean_object* v___x_3763_; 
v___x_3763_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___y_3761_ = v___x_3763_;
goto v___jp_3760_;
}
else
{
lean_object* v___x_3764_; 
v___x_3764_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___y_3761_ = v___x_3764_;
goto v___jp_3760_;
}
v___jp_3599_:
{
uint8_t v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; uint8_t v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; 
v___x_3602_ = 3;
v___x_3603_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3603_, 0, v_msg_3600_);
lean_ctor_set_uint8(v___x_3603_, sizeof(void*)*1, v___x_3602_);
lean_inc_ref(v___y_3601_);
v___x_3604_ = lean_apply_2(v___y_3601_, v___x_3603_, lean_box(0));
v___x_3605_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0));
v___x_3606_ = lean_unsigned_to_nat(0u);
v___x_3607_ = lean_string_utf8_byte_size(v_line_3596_);
lean_inc_ref(v_line_3596_);
v___x_3608_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3608_, 0, v_line_3596_);
lean_ctor_set(v___x_3608_, 1, v___x_3606_);
lean_ctor_set(v___x_3608_, 2, v___x_3607_);
v___x_3609_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_3608_, v___x_3607_);
lean_dec_ref(v___x_3608_);
v___x_3610_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3610_, 0, v_line_3596_);
lean_ctor_set(v___x_3610_, 1, v___x_3606_);
lean_ctor_set(v___x_3610_, 2, v___x_3609_);
v___x_3611_ = l_String_Slice_toString(v___x_3610_);
lean_dec_ref(v___x_3610_);
v___x_3612_ = lean_string_append(v___x_3605_, v___x_3611_);
lean_dec_ref(v___x_3611_);
v___x_3613_ = 0;
v___x_3614_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3614_, 0, v___x_3612_);
lean_ctor_set_uint8(v___x_3614_, sizeof(void*)*1, v___x_3613_);
v___x_3615_ = lean_apply_2(v___y_3601_, v___x_3614_, lean_box(0));
v___x_3616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3616_, 0, v___x_3615_);
return v___x_3616_;
}
v___jp_3617_:
{
lean_object* v___x_3621_; 
v___x_3621_ = l_Lake_removeFileIfExists(v___y_3618_);
if (lean_obj_tag(v___x_3621_) == 0)
{
lean_dec_ref(v___x_3621_);
v_msg_3600_ = v_msg_3619_;
v___y_3601_ = v___y_3620_;
goto v___jp_3599_;
}
else
{
lean_object* v_a_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3634_; 
lean_dec_ref(v_msg_3619_);
lean_dec_ref(v_line_3596_);
v_a_3622_ = lean_ctor_get(v___x_3621_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3624_ = v___x_3621_;
v_isShared_3625_ = v_isSharedCheck_3634_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_a_3622_);
lean_dec(v___x_3621_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3634_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3626_; uint8_t v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3632_; 
v___x_3626_ = lean_io_error_to_string(v_a_3622_);
v___x_3627_ = 3;
v___x_3628_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3628_, 0, v___x_3626_);
lean_ctor_set_uint8(v___x_3628_, sizeof(void*)*1, v___x_3627_);
v___x_3629_ = lean_apply_2(v___y_3620_, v___x_3628_, lean_box(0));
v___x_3630_ = lean_box(0);
if (v_isShared_3625_ == 0)
{
lean_ctor_set(v___x_3624_, 0, v___x_3630_);
v___x_3632_ = v___x_3624_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v___x_3630_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
}
v___jp_3635_:
{
if (lean_obj_tag(v_a_3639_) == 1)
{
lean_object* v_a_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; 
v_a_3640_ = lean_ctor_get(v_a_3639_, 0);
lean_inc(v_a_3640_);
lean_dec_ref(v_a_3639_);
v___x_3641_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_3642_ = lean_string_append(v___y_3637_, v___x_3641_);
v___x_3643_ = lean_string_append(v___x_3642_, v_a_3640_);
lean_dec(v_a_3640_);
v___y_3618_ = v___y_3636_;
v_msg_3619_ = v___x_3643_;
v___y_3620_ = v___y_3638_;
goto v___jp_3617_;
}
else
{
lean_dec_ref(v_a_3639_);
v___y_3618_ = v___y_3636_;
v_msg_3619_ = v___y_3637_;
v___y_3620_ = v___y_3638_;
goto v___jp_3617_;
}
}
v___jp_3644_:
{
lean_object* v___x_3651_; uint8_t v___x_3652_; 
v___x_3651_ = lean_array_get_size(v___y_3646_);
v___x_3652_ = lean_nat_dec_lt(v___y_3645_, v___x_3651_);
if (v___x_3652_ == 0)
{
lean_dec_ref(v___y_3646_);
v___y_3636_ = v___y_3647_;
v___y_3637_ = v___y_3648_;
v___y_3638_ = v___y_3649_;
v_a_3639_ = v_val_3650_;
goto v___jp_3635_;
}
else
{
lean_object* v___x_3653_; uint8_t v___x_3654_; 
v___x_3653_ = lean_box(0);
v___x_3654_ = lean_nat_dec_le(v___x_3651_, v___x_3651_);
if (v___x_3654_ == 0)
{
if (v___x_3652_ == 0)
{
lean_dec_ref(v___y_3646_);
v___y_3636_ = v___y_3647_;
v___y_3637_ = v___y_3648_;
v___y_3638_ = v___y_3649_;
v_a_3639_ = v_val_3650_;
goto v___jp_3635_;
}
else
{
size_t v___x_3655_; size_t v___x_3656_; lean_object* v___x_3657_; 
v___x_3655_ = ((size_t)0ULL);
v___x_3656_ = lean_usize_of_nat(v___x_3651_);
lean_inc_ref(v___y_3649_);
v___x_3657_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v___y_3646_, v___x_3655_, v___x_3656_, v___x_3653_, v___y_3649_);
lean_dec_ref(v___y_3646_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_dec_ref(v___x_3657_);
v___y_3636_ = v___y_3647_;
v___y_3637_ = v___y_3648_;
v___y_3638_ = v___y_3649_;
v_a_3639_ = v_val_3650_;
goto v___jp_3635_;
}
else
{
lean_dec_ref(v_val_3650_);
lean_dec_ref(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec_ref(v_line_3596_);
return v___x_3657_;
}
}
}
else
{
size_t v___x_3658_; size_t v___x_3659_; lean_object* v___x_3660_; 
v___x_3658_ = ((size_t)0ULL);
v___x_3659_ = lean_usize_of_nat(v___x_3651_);
lean_inc_ref(v___y_3649_);
v___x_3660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v___y_3646_, v___x_3658_, v___x_3659_, v___x_3653_, v___y_3649_);
lean_dec_ref(v___y_3646_);
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_dec_ref(v___x_3660_);
v___y_3636_ = v___y_3647_;
v___y_3637_ = v___y_3648_;
v___y_3638_ = v___y_3649_;
v_a_3639_ = v_val_3650_;
goto v___jp_3635_;
}
else
{
lean_dec_ref(v_val_3650_);
lean_dec_ref(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec_ref(v_line_3596_);
return v___x_3660_;
}
}
}
}
v___jp_3663_:
{
lean_object* v_url_3666_; lean_object* v_path_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v_msg_3673_; 
v_url_3666_ = lean_ctor_get(v_info_3593_, 0);
v_path_3667_ = lean_ctor_get(v_info_3593_, 1);
v___x_3668_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3669_ = lean_string_append(v_msg_3664_, v___x_3668_);
v___x_3670_ = lean_string_append(v___x_3669_, v_path_3667_);
v___x_3671_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3672_ = lean_string_append(v___x_3670_, v___x_3671_);
v_msg_3673_ = lean_string_append(v___x_3672_, v_url_3666_);
if (v_kind_3661_ == 0)
{
lean_object* v___x_3674_; lean_object* v___x_3675_; 
v___x_3674_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_3675_ = l_Lake_JsonObject_getJson_x3f(v_out_3595_, v___x_3674_);
if (lean_obj_tag(v___x_3675_) == 0)
{
v___y_3618_ = v_path_3667_;
v_msg_3619_ = v_msg_3673_;
v___y_3620_ = v___y_3665_;
goto v___jp_3617_;
}
else
{
lean_object* v_val_3676_; lean_object* v___x_3677_; 
v_val_3676_ = lean_ctor_get(v___x_3675_, 0);
lean_inc(v_val_3676_);
lean_dec_ref(v___x_3675_);
v___x_3677_ = l_Lean_Json_getNat_x3f(v_val_3676_);
if (lean_obj_tag(v___x_3677_) == 0)
{
lean_dec_ref(v___x_3677_);
v___y_3618_ = v_path_3667_;
v_msg_3619_ = v_msg_3673_;
v___y_3620_ = v___y_3665_;
goto v___jp_3617_;
}
else
{
if (lean_obj_tag(v___x_3677_) == 1)
{
lean_object* v_a_3678_; lean_object* v___x_3679_; uint8_t v___x_3680_; 
v_a_3678_ = lean_ctor_get(v___x_3677_, 0);
lean_inc(v_a_3678_);
lean_dec_ref(v___x_3677_);
v___x_3679_ = lean_unsigned_to_nat(0u);
v___x_3680_ = lean_nat_dec_lt(v___x_3679_, v_a_3678_);
lean_dec(v_a_3678_);
if (v___x_3680_ == 0)
{
v___y_3618_ = v_path_3667_;
v_msg_3619_ = v_msg_3673_;
v___y_3620_ = v___y_3665_;
goto v___jp_3617_;
}
else
{
lean_object* v___x_3681_; lean_object* v___x_3682_; 
v___x_3681_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3));
v___x_3682_ = l_Lake_JsonObject_getJson_x3f(v_out_3595_, v___x_3681_);
if (lean_obj_tag(v___x_3682_) == 0)
{
v___y_3618_ = v_path_3667_;
v_msg_3619_ = v_msg_3673_;
v___y_3620_ = v___y_3665_;
goto v___jp_3617_;
}
else
{
lean_object* v_val_3683_; lean_object* v___x_3684_; 
v_val_3683_ = lean_ctor_get(v___x_3682_, 0);
lean_inc(v_val_3683_);
lean_dec_ref(v___x_3682_);
v___x_3684_ = l_Lean_Json_getStr_x3f(v_val_3683_);
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_dec_ref(v___x_3684_);
v___y_3618_ = v_path_3667_;
v_msg_3619_ = v_msg_3673_;
v___y_3620_ = v___y_3665_;
goto v___jp_3617_;
}
else
{
if (lean_obj_tag(v___x_3684_) == 1)
{
lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3701_; 
v_a_3685_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3687_ = v___x_3684_;
v_isShared_3688_ = v_isSharedCheck_3701_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_a_3685_);
lean_dec(v___x_3684_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3701_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3689_; uint8_t v___x_3690_; 
v___x_3689_ = ((lean_object*)(l_Lake_CacheService_artifactContentType___closed__0));
v___x_3690_ = lean_string_dec_eq(v_a_3685_, v___x_3689_);
lean_dec(v_a_3685_);
if (v___x_3690_ == 0)
{
lean_object* v___x_3691_; lean_object* v___x_3692_; 
v___x_3691_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_3692_ = l_IO_FS_readFile(v_path_3667_);
if (lean_obj_tag(v___x_3692_) == 0)
{
lean_object* v_a_3693_; lean_object* v___x_3695_; 
v_a_3693_ = lean_ctor_get(v___x_3692_, 0);
lean_inc(v_a_3693_);
lean_dec_ref(v___x_3692_);
if (v_isShared_3688_ == 0)
{
lean_ctor_set(v___x_3687_, 0, v_a_3693_);
v___x_3695_ = v___x_3687_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3693_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
v___y_3645_ = v___x_3679_;
v___y_3646_ = v___x_3691_;
v___y_3647_ = v_path_3667_;
v___y_3648_ = v_msg_3673_;
v___y_3649_ = v___y_3665_;
v_val_3650_ = v___x_3695_;
goto v___jp_3644_;
}
}
else
{
lean_object* v_a_3697_; lean_object* v___x_3699_; 
v_a_3697_ = lean_ctor_get(v___x_3692_, 0);
lean_inc(v_a_3697_);
lean_dec_ref(v___x_3692_);
if (v_isShared_3688_ == 0)
{
lean_ctor_set_tag(v___x_3687_, 0);
lean_ctor_set(v___x_3687_, 0, v_a_3697_);
v___x_3699_ = v___x_3687_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v_a_3697_);
v___x_3699_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
v___y_3645_ = v___x_3679_;
v___y_3646_ = v___x_3691_;
v___y_3647_ = v_path_3667_;
v___y_3648_ = v_msg_3673_;
v___y_3649_ = v___y_3665_;
v_val_3650_ = v___x_3699_;
goto v___jp_3644_;
}
}
}
else
{
lean_del_object(v___x_3687_);
v___y_3618_ = v_path_3667_;
v_msg_3619_ = v_msg_3673_;
v___y_3620_ = v___y_3665_;
goto v___jp_3617_;
}
}
}
else
{
lean_dec_ref(v___x_3684_);
v___y_3618_ = v_path_3667_;
v_msg_3619_ = v_msg_3673_;
v___y_3620_ = v___y_3665_;
goto v___jp_3617_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3677_);
v___y_3618_ = v_path_3667_;
v_msg_3619_ = v_msg_3673_;
v___y_3620_ = v___y_3665_;
goto v___jp_3617_;
}
}
}
}
else
{
lean_object* v___x_3702_; lean_object* v___x_3703_; 
v___x_3702_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_3703_ = l_Lake_JsonObject_getJson_x3f(v_out_3595_, v___x_3702_);
if (lean_obj_tag(v___x_3703_) == 0)
{
v_msg_3600_ = v_msg_3673_;
v___y_3601_ = v___y_3665_;
goto v___jp_3599_;
}
else
{
lean_object* v_val_3704_; lean_object* v___x_3705_; 
v_val_3704_ = lean_ctor_get(v___x_3703_, 0);
lean_inc(v_val_3704_);
lean_dec_ref(v___x_3703_);
v___x_3705_ = l_Lean_Json_getNat_x3f(v_val_3704_);
if (lean_obj_tag(v___x_3705_) == 0)
{
lean_dec_ref(v___x_3705_);
v_msg_3600_ = v_msg_3673_;
v___y_3601_ = v___y_3665_;
goto v___jp_3599_;
}
else
{
if (lean_obj_tag(v___x_3705_) == 1)
{
lean_object* v_a_3706_; lean_object* v___x_3707_; uint8_t v___x_3708_; 
v_a_3706_ = lean_ctor_get(v___x_3705_, 0);
lean_inc(v_a_3706_);
lean_dec_ref(v___x_3705_);
v___x_3707_ = lean_unsigned_to_nat(0u);
v___x_3708_ = lean_nat_dec_lt(v___x_3707_, v_a_3706_);
if (v___x_3708_ == 0)
{
lean_dec(v_a_3706_);
v_msg_3600_ = v_msg_3673_;
v___y_3601_ = v___y_3665_;
goto v___jp_3599_;
}
else
{
size_t v___x_3709_; lean_object* v___x_3710_; 
v___x_3709_ = lean_usize_of_nat(v_a_3706_);
lean_dec(v_a_3706_);
v___x_3710_ = lean_io_prim_handle_read(v_hOut_3592_, v___x_3709_);
if (lean_obj_tag(v___x_3710_) == 0)
{
lean_object* v_a_3711_; uint8_t v___x_3712_; 
v_a_3711_ = lean_ctor_get(v___x_3710_, 0);
lean_inc(v_a_3711_);
lean_dec_ref(v___x_3710_);
v___x_3712_ = lean_string_validate_utf8(v_a_3711_);
if (v___x_3712_ == 0)
{
lean_dec(v_a_3711_);
v_msg_3600_ = v_msg_3673_;
v___y_3601_ = v___y_3665_;
goto v___jp_3599_;
}
else
{
lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; 
v___x_3713_ = lean_string_from_utf8_unchecked(v_a_3711_);
v___x_3714_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_3715_ = lean_string_append(v_msg_3673_, v___x_3714_);
v___x_3716_ = lean_string_append(v___x_3715_, v___x_3713_);
lean_dec_ref(v___x_3713_);
v_msg_3600_ = v___x_3716_;
v___y_3601_ = v___y_3665_;
goto v___jp_3599_;
}
}
else
{
lean_object* v_a_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3729_; 
lean_dec_ref(v_msg_3673_);
lean_dec_ref(v_line_3596_);
v_a_3717_ = lean_ctor_get(v___x_3710_, 0);
v_isSharedCheck_3729_ = !lean_is_exclusive(v___x_3710_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3719_ = v___x_3710_;
v_isShared_3720_ = v_isSharedCheck_3729_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_a_3717_);
lean_dec(v___x_3710_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3729_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
lean_object* v___x_3721_; uint8_t v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3727_; 
v___x_3721_ = lean_io_error_to_string(v_a_3717_);
v___x_3722_ = 3;
v___x_3723_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3723_, 0, v___x_3721_);
lean_ctor_set_uint8(v___x_3723_, sizeof(void*)*1, v___x_3722_);
v___x_3724_ = lean_apply_2(v___y_3665_, v___x_3723_, lean_box(0));
v___x_3725_ = lean_box(0);
if (v_isShared_3720_ == 0)
{
lean_ctor_set(v___x_3719_, 0, v___x_3725_);
v___x_3727_ = v___x_3719_;
goto v_reusejp_3726_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v___x_3725_);
v___x_3727_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3726_;
}
v_reusejp_3726_:
{
return v___x_3727_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3705_);
v_msg_3600_ = v_msg_3673_;
v___y_3601_ = v___y_3665_;
goto v___jp_3599_;
}
}
}
}
}
v___jp_3730_:
{
lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3733_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4));
v___x_3734_ = l_Lake_JsonObject_getJson_x3f(v_out_3595_, v___x_3733_);
if (lean_obj_tag(v___x_3734_) == 0)
{
v_msg_3664_ = v_msg_3731_;
v___y_3665_ = v___y_3732_;
goto v___jp_3663_;
}
else
{
lean_object* v_val_3735_; lean_object* v___x_3736_; 
v_val_3735_ = lean_ctor_get(v___x_3734_, 0);
lean_inc(v_val_3735_);
lean_dec_ref(v___x_3734_);
v___x_3736_ = l_Lean_Json_getStr_x3f(v_val_3735_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_dec_ref(v___x_3736_);
v_msg_3664_ = v_msg_3731_;
v___y_3665_ = v___y_3732_;
goto v___jp_3663_;
}
else
{
if (lean_obj_tag(v___x_3736_) == 1)
{
lean_object* v_a_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v_msg_3740_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3737_);
lean_dec_ref(v___x_3736_);
v___x_3738_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5));
v___x_3739_ = lean_string_append(v_msg_3731_, v___x_3738_);
v_msg_3740_ = lean_string_append(v___x_3739_, v_a_3737_);
lean_dec(v_a_3737_);
v_msg_3664_ = v_msg_3740_;
v___y_3665_ = v___y_3732_;
goto v___jp_3663_;
}
else
{
lean_dec_ref(v___x_3736_);
v_msg_3664_ = v_msg_3731_;
v___y_3665_ = v___y_3732_;
goto v___jp_3663_;
}
}
}
}
v___jp_3741_:
{
lean_object* v_descr_3744_; uint64_t v_hash_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v_msg_3752_; 
v_descr_3744_ = lean_ctor_get(v_info_3593_, 2);
v_hash_3745_ = lean_ctor_get_uint64(v_descr_3744_, sizeof(void*)*1);
v___x_3746_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_3747_ = lean_string_append(v___y_3743_, v___x_3746_);
v___x_3748_ = lean_string_append(v___x_3747_, v___y_3742_);
lean_dec_ref(v___y_3742_);
v___x_3749_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7));
v___x_3750_ = lean_string_append(v___x_3748_, v___x_3749_);
v___x_3751_ = l_Lake_Hash_hex(v_hash_3745_);
v_msg_3752_ = lean_string_append(v___x_3750_, v___x_3751_);
lean_dec_ref(v___x_3751_);
if (lean_obj_tag(v_code_x3f_3594_) == 1)
{
lean_object* v_a_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v_msg_3759_; 
v_a_3753_ = lean_ctor_get(v_code_x3f_3594_, 0);
lean_inc(v_a_3753_);
lean_dec_ref(v_code_x3f_3594_);
v___x_3754_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8));
v___x_3755_ = lean_string_append(v_msg_3752_, v___x_3754_);
v___x_3756_ = l_Nat_reprFast(v_a_3753_);
v___x_3757_ = lean_string_append(v___x_3755_, v___x_3756_);
lean_dec_ref(v___x_3756_);
v___x_3758_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9));
v_msg_3759_ = lean_string_append(v___x_3757_, v___x_3758_);
v_msg_3731_ = v_msg_3759_;
v___y_3732_ = v_a_3597_;
goto v___jp_3730_;
}
else
{
lean_dec_ref(v_code_x3f_3594_);
v_msg_3731_ = v_msg_3752_;
v___y_3732_ = v_a_3597_;
goto v___jp_3730_;
}
}
v___jp_3760_:
{
lean_object* v_s_3762_; 
v_s_3762_ = lean_ctor_get(v_scope_3662_, 0);
lean_inc_ref(v_s_3762_);
lean_dec_ref(v_scope_3662_);
v___y_3742_ = v___y_3761_;
v___y_3743_ = v_s_3762_;
goto v___jp_3741_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___boxed(lean_object* v_cfg_3765_, lean_object* v_hOut_3766_, lean_object* v_info_3767_, lean_object* v_code_x3f_3768_, lean_object* v_out_3769_, lean_object* v_line_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3765_, v_hOut_3766_, v_info_3767_, v_code_x3f_3768_, v_out_3769_, v_line_3770_, v_a_3771_);
lean_dec(v_out_3769_);
lean_dec_ref(v_info_3767_);
lean_dec(v_hOut_3766_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg(lean_object* v_cfg_3776_, lean_object* v_descr_3777_, lean_object* v_path_3778_, lean_object* v_url_3779_, uint8_t v___x_3780_, uint8_t v___x_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_){
_start:
{
uint64_t v___y_3786_; lean_object* v___y_3826_; lean_object* v___y_3881_; uint8_t v_kind_3910_; 
v_kind_3910_ = lean_ctor_get_uint8(v_cfg_3776_, sizeof(void*)*3);
if (v_kind_3910_ == 0)
{
lean_object* v_scope_3911_; lean_object* v_s_3912_; 
v_scope_3911_ = lean_ctor_get(v_cfg_3776_, 0);
lean_inc_ref(v_scope_3911_);
lean_dec_ref(v_cfg_3776_);
v_s_3912_ = lean_ctor_get(v_scope_3911_, 0);
lean_inc_ref(v_s_3912_);
lean_dec_ref(v_scope_3911_);
v___y_3826_ = v_s_3912_;
goto v___jp_3825_;
}
else
{
lean_object* v_scope_3913_; lean_object* v_s_3914_; 
v_scope_3913_ = lean_ctor_get(v_cfg_3776_, 0);
lean_inc_ref(v_scope_3913_);
lean_dec_ref(v_cfg_3776_);
v_s_3914_ = lean_ctor_get(v_scope_3913_, 0);
lean_inc_ref(v_s_3914_);
lean_dec_ref(v_scope_3913_);
v___y_3881_ = v_s_3914_;
goto v___jp_3880_;
}
v___jp_3785_:
{
lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; uint8_t v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; 
v___x_3787_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
lean_inc_ref(v_path_3778_);
v___x_3788_ = lean_string_append(v_path_3778_, v___x_3787_);
v___x_3789_ = l_Lake_Hash_hex(v___y_3786_);
v___x_3790_ = lean_string_append(v___x_3788_, v___x_3789_);
lean_dec_ref(v___x_3789_);
v___x_3791_ = 3;
v___x_3792_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3792_, 0, v___x_3790_);
lean_ctor_set_uint8(v___x_3792_, sizeof(void*)*1, v___x_3791_);
lean_inc_ref(v___y_3783_);
v___x_3793_ = lean_apply_2(v___y_3783_, v___x_3792_, lean_box(0));
v___x_3794_ = lean_io_remove_file(v_path_3778_);
lean_dec_ref(v_path_3778_);
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3811_; 
lean_dec_ref(v___y_3783_);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3811_ == 0)
{
lean_object* v_unused_3812_; 
v_unused_3812_ = lean_ctor_get(v___x_3794_, 0);
lean_dec(v_unused_3812_);
v___x_3796_ = v___x_3794_;
v_isShared_3797_ = v_isSharedCheck_3811_;
goto v_resetjp_3795_;
}
else
{
lean_dec(v___x_3794_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3811_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v_numSuccesses_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3810_; 
v_numSuccesses_3798_ = lean_ctor_get(v___y_3782_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v___y_3782_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3800_ = v___y_3782_;
v_isShared_3801_ = v_isSharedCheck_3810_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_numSuccesses_3798_);
lean_dec(v___y_3782_);
v___x_3800_ = lean_box(0);
v_isShared_3801_ = v_isSharedCheck_3810_;
goto v_resetjp_3799_;
}
v_resetjp_3799_:
{
lean_object* v___x_3802_; lean_object* v___x_3804_; 
v___x_3802_ = lean_box(0);
if (v_isShared_3801_ == 0)
{
v___x_3804_ = v___x_3800_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_numSuccesses_3798_);
v___x_3804_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
lean_object* v___x_3805_; lean_object* v___x_3807_; 
lean_ctor_set_uint8(v___x_3804_, sizeof(void*)*1, v___x_3780_);
v___x_3805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3802_);
lean_ctor_set(v___x_3805_, 1, v___x_3804_);
if (v_isShared_3797_ == 0)
{
lean_ctor_set(v___x_3796_, 0, v___x_3805_);
v___x_3807_ = v___x_3796_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v___x_3805_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
}
}
else
{
lean_object* v_a_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3824_; 
lean_dec_ref(v___y_3782_);
v_a_3813_ = lean_ctor_get(v___x_3794_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3815_ = v___x_3794_;
v_isShared_3816_ = v_isSharedCheck_3824_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_a_3813_);
lean_dec(v___x_3794_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3824_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3822_; 
v___x_3817_ = lean_io_error_to_string(v_a_3813_);
v___x_3818_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3818_, 0, v___x_3817_);
lean_ctor_set_uint8(v___x_3818_, sizeof(void*)*1, v___x_3791_);
v___x_3819_ = lean_apply_2(v___y_3783_, v___x_3818_, lean_box(0));
v___x_3820_ = lean_box(0);
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 0, v___x_3820_);
v___x_3822_ = v___x_3815_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3820_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
}
v___jp_3825_:
{
uint64_t v_hash_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; uint8_t v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; 
v_hash_3827_ = lean_ctor_get_uint64(v_descr_3777_, sizeof(void*)*1);
v___x_3828_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__0));
v___x_3829_ = lean_string_append(v___y_3826_, v___x_3828_);
v___x_3830_ = l_Lake_Hash_hex(v_hash_3827_);
v___x_3831_ = lean_string_append(v___x_3829_, v___x_3830_);
lean_dec_ref(v___x_3830_);
v___x_3832_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3833_ = lean_string_append(v___x_3831_, v___x_3832_);
v___x_3834_ = lean_string_append(v___x_3833_, v_path_3778_);
v___x_3835_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3836_ = lean_string_append(v___x_3834_, v___x_3835_);
v___x_3837_ = lean_string_append(v___x_3836_, v_url_3779_);
v___x_3838_ = 1;
v___x_3839_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3839_, 0, v___x_3837_);
lean_ctor_set_uint8(v___x_3839_, sizeof(void*)*1, v___x_3838_);
lean_inc_ref(v___y_3783_);
v___x_3840_ = lean_apply_2(v___y_3783_, v___x_3839_, lean_box(0));
v___x_3841_ = l_Lake_computeBinFileHash(v_path_3778_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v_a_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3866_; 
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3866_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3866_ == 0)
{
v___x_3844_ = v___x_3841_;
v_isShared_3845_ = v_isSharedCheck_3866_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_a_3842_);
lean_dec(v___x_3841_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3866_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
uint64_t v___x_3846_; uint8_t v___x_3847_; 
v___x_3846_ = lean_unbox_uint64(v_a_3842_);
v___x_3847_ = lean_uint64_dec_eq(v___x_3846_, v_hash_3827_);
if (v___x_3847_ == 0)
{
uint64_t v___x_3848_; 
lean_del_object(v___x_3844_);
v___x_3848_ = lean_unbox_uint64(v_a_3842_);
lean_dec(v_a_3842_);
v___y_3786_ = v___x_3848_;
goto v___jp_3785_;
}
else
{
if (v___x_3781_ == 0)
{
uint8_t v_didError_3849_; lean_object* v_numSuccesses_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3864_; 
lean_dec(v_a_3842_);
lean_dec_ref(v___y_3783_);
lean_dec_ref(v_path_3778_);
v_didError_3849_ = lean_ctor_get_uint8(v___y_3782_, sizeof(void*)*1);
v_numSuccesses_3850_ = lean_ctor_get(v___y_3782_, 0);
v_isSharedCheck_3864_ = !lean_is_exclusive(v___y_3782_);
if (v_isSharedCheck_3864_ == 0)
{
v___x_3852_ = v___y_3782_;
v_isShared_3853_ = v_isSharedCheck_3864_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_numSuccesses_3850_);
lean_dec(v___y_3782_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3864_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3858_; 
v___x_3854_ = lean_box(0);
v___x_3855_ = lean_unsigned_to_nat(1u);
v___x_3856_ = lean_nat_add(v_numSuccesses_3850_, v___x_3855_);
lean_dec(v_numSuccesses_3850_);
if (v_isShared_3853_ == 0)
{
lean_ctor_set(v___x_3852_, 0, v___x_3856_);
v___x_3858_ = v___x_3852_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v___x_3856_);
lean_ctor_set_uint8(v_reuseFailAlloc_3863_, sizeof(void*)*1, v_didError_3849_);
v___x_3858_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
lean_object* v___x_3859_; lean_object* v___x_3861_; 
v___x_3859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3854_);
lean_ctor_set(v___x_3859_, 1, v___x_3858_);
if (v_isShared_3845_ == 0)
{
lean_ctor_set(v___x_3844_, 0, v___x_3859_);
v___x_3861_ = v___x_3844_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v___x_3859_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
return v___x_3861_;
}
}
}
}
else
{
uint64_t v___x_3865_; 
lean_del_object(v___x_3844_);
v___x_3865_ = lean_unbox_uint64(v_a_3842_);
lean_dec(v_a_3842_);
v___y_3786_ = v___x_3865_;
goto v___jp_3785_;
}
}
}
}
else
{
lean_object* v_a_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3879_; 
lean_dec_ref(v___y_3782_);
lean_dec_ref(v_path_3778_);
v_a_3867_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3879_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3879_ == 0)
{
v___x_3869_ = v___x_3841_;
v_isShared_3870_ = v_isSharedCheck_3879_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_a_3867_);
lean_dec(v___x_3841_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3879_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
lean_object* v___x_3871_; uint8_t v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3877_; 
v___x_3871_ = lean_io_error_to_string(v_a_3867_);
v___x_3872_ = 3;
v___x_3873_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3873_, 0, v___x_3871_);
lean_ctor_set_uint8(v___x_3873_, sizeof(void*)*1, v___x_3872_);
v___x_3874_ = lean_apply_2(v___y_3783_, v___x_3873_, lean_box(0));
v___x_3875_ = lean_box(0);
if (v_isShared_3870_ == 0)
{
lean_ctor_set(v___x_3869_, 0, v___x_3875_);
v___x_3877_ = v___x_3869_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v___x_3875_);
v___x_3877_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
return v___x_3877_;
}
}
}
}
v___jp_3880_:
{
uint64_t v_hash_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; uint8_t v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; uint8_t v_didError_3896_; lean_object* v_numSuccesses_3897_; lean_object* v___x_3899_; uint8_t v_isShared_3900_; uint8_t v_isSharedCheck_3909_; 
v_hash_3882_ = lean_ctor_get_uint64(v_descr_3777_, sizeof(void*)*1);
v___x_3883_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__1));
v___x_3884_ = lean_string_append(v___y_3881_, v___x_3883_);
v___x_3885_ = l_Lake_Hash_hex(v_hash_3882_);
v___x_3886_ = lean_string_append(v___x_3884_, v___x_3885_);
lean_dec_ref(v___x_3885_);
v___x_3887_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3888_ = lean_string_append(v___x_3886_, v___x_3887_);
v___x_3889_ = lean_string_append(v___x_3888_, v_path_3778_);
lean_dec_ref(v_path_3778_);
v___x_3890_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3891_ = lean_string_append(v___x_3889_, v___x_3890_);
v___x_3892_ = lean_string_append(v___x_3891_, v_url_3779_);
v___x_3893_ = 1;
v___x_3894_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3894_, 0, v___x_3892_);
lean_ctor_set_uint8(v___x_3894_, sizeof(void*)*1, v___x_3893_);
v___x_3895_ = lean_apply_2(v___y_3783_, v___x_3894_, lean_box(0));
v_didError_3896_ = lean_ctor_get_uint8(v___y_3782_, sizeof(void*)*1);
v_numSuccesses_3897_ = lean_ctor_get(v___y_3782_, 0);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___y_3782_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3899_ = v___y_3782_;
v_isShared_3900_ = v_isSharedCheck_3909_;
goto v_resetjp_3898_;
}
else
{
lean_inc(v_numSuccesses_3897_);
lean_dec(v___y_3782_);
v___x_3899_ = lean_box(0);
v_isShared_3900_ = v_isSharedCheck_3909_;
goto v_resetjp_3898_;
}
v_resetjp_3898_:
{
lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3905_; 
v___x_3901_ = lean_box(0);
v___x_3902_ = lean_unsigned_to_nat(1u);
v___x_3903_ = lean_nat_add(v_numSuccesses_3897_, v___x_3902_);
lean_dec(v_numSuccesses_3897_);
if (v_isShared_3900_ == 0)
{
lean_ctor_set(v___x_3899_, 0, v___x_3903_);
v___x_3905_ = v___x_3899_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v___x_3903_);
lean_ctor_set_uint8(v_reuseFailAlloc_3908_, sizeof(void*)*1, v_didError_3896_);
v___x_3905_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
lean_object* v___x_3906_; lean_object* v___x_3907_; 
v___x_3906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3906_, 0, v___x_3901_);
lean_ctor_set(v___x_3906_, 1, v___x_3905_);
v___x_3907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3907_, 0, v___x_3906_);
return v___x_3907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___boxed(lean_object* v_cfg_3915_, lean_object* v_descr_3916_, lean_object* v_path_3917_, lean_object* v_url_3918_, lean_object* v___x_3919_, lean_object* v___x_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_){
_start:
{
uint8_t v___x_28624__boxed_3924_; uint8_t v___x_28625__boxed_3925_; lean_object* v_res_3926_; 
v___x_28624__boxed_3924_ = lean_unbox(v___x_3919_);
v___x_28625__boxed_3925_ = lean_unbox(v___x_3920_);
v_res_3926_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg(v_cfg_3915_, v_descr_3916_, v_path_3917_, v_url_3918_, v___x_28624__boxed_3924_, v___x_28625__boxed_3925_, v___y_3921_, v___y_3922_);
lean_dec_ref(v_url_3918_);
lean_dec_ref(v_descr_3916_);
return v_res_3926_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1(lean_object* v_cfg_3927_, lean_object* v_descr_3928_, lean_object* v_path_3929_, lean_object* v_url_3930_, uint8_t v___x_3931_, uint8_t v___x_3932_, lean_object* v_00___3933_, lean_object* v___y_3934_, lean_object* v___y_3935_){
_start:
{
lean_object* v___x_3937_; 
v___x_3937_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg(v_cfg_3927_, v_descr_3928_, v_path_3929_, v_url_3930_, v___x_3931_, v___x_3932_, v___y_3934_, v___y_3935_);
return v___x_3937_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___boxed(lean_object* v_cfg_3938_, lean_object* v_descr_3939_, lean_object* v_path_3940_, lean_object* v_url_3941_, lean_object* v___x_3942_, lean_object* v___x_3943_, lean_object* v_00___3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_){
_start:
{
uint8_t v___x_28892__boxed_3948_; uint8_t v___x_28893__boxed_3949_; lean_object* v_res_3950_; 
v___x_28892__boxed_3948_ = lean_unbox(v___x_3942_);
v___x_28893__boxed_3949_ = lean_unbox(v___x_3943_);
v_res_3950_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1(v_cfg_3938_, v_descr_3939_, v_path_3940_, v_url_3941_, v___x_28892__boxed_3948_, v___x_28893__boxed_3949_, v_00___3944_, v___y_3945_, v___y_3946_);
lean_dec_ref(v_url_3941_);
lean_dec_ref(v_descr_3939_);
return v_res_3950_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0_spec__0(lean_object* v___y_3951_, lean_object* v_cfg_3952_, lean_object* v_hOut_3953_, lean_object* v_info_3954_, lean_object* v_code_x3f_3955_, lean_object* v_out_3956_, lean_object* v_line_3957_){
_start:
{
lean_object* v_msg_3960_; lean_object* v___y_3961_; lean_object* v___y_3978_; lean_object* v_msg_3979_; lean_object* v___y_3980_; lean_object* v___y_3996_; lean_object* v___y_3997_; lean_object* v___y_3998_; lean_object* v_a_3999_; lean_object* v___y_4005_; lean_object* v___y_4006_; lean_object* v___y_4007_; lean_object* v___y_4008_; lean_object* v___y_4009_; lean_object* v_val_4010_; uint8_t v_kind_4021_; lean_object* v_scope_4022_; lean_object* v_msg_4024_; lean_object* v___y_4025_; lean_object* v_msg_4091_; lean_object* v___y_4092_; lean_object* v___y_4102_; lean_object* v___y_4103_; lean_object* v___y_4121_; 
v_kind_4021_ = lean_ctor_get_uint8(v_cfg_3952_, sizeof(void*)*3);
v_scope_4022_ = lean_ctor_get(v_cfg_3952_, 0);
lean_inc_ref(v_scope_4022_);
lean_dec_ref(v_cfg_3952_);
if (v_kind_4021_ == 0)
{
lean_object* v___x_4123_; 
v___x_4123_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___y_4121_ = v___x_4123_;
goto v___jp_4120_;
}
else
{
lean_object* v___x_4124_; 
v___x_4124_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___y_4121_ = v___x_4124_;
goto v___jp_4120_;
}
v___jp_3959_:
{
uint8_t v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; uint8_t v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; 
v___x_3962_ = 3;
v___x_3963_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3963_, 0, v_msg_3960_);
lean_ctor_set_uint8(v___x_3963_, sizeof(void*)*1, v___x_3962_);
lean_inc_ref(v___y_3961_);
v___x_3964_ = lean_apply_2(v___y_3961_, v___x_3963_, lean_box(0));
v___x_3965_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0));
v___x_3966_ = lean_unsigned_to_nat(0u);
v___x_3967_ = lean_string_utf8_byte_size(v_line_3957_);
lean_inc_ref(v_line_3957_);
v___x_3968_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3968_, 0, v_line_3957_);
lean_ctor_set(v___x_3968_, 1, v___x_3966_);
lean_ctor_set(v___x_3968_, 2, v___x_3967_);
v___x_3969_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_3968_, v___x_3967_);
lean_dec_ref(v___x_3968_);
v___x_3970_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3970_, 0, v_line_3957_);
lean_ctor_set(v___x_3970_, 1, v___x_3966_);
lean_ctor_set(v___x_3970_, 2, v___x_3969_);
v___x_3971_ = l_String_Slice_toString(v___x_3970_);
lean_dec_ref(v___x_3970_);
v___x_3972_ = lean_string_append(v___x_3965_, v___x_3971_);
lean_dec_ref(v___x_3971_);
v___x_3973_ = 0;
v___x_3974_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3974_, 0, v___x_3972_);
lean_ctor_set_uint8(v___x_3974_, sizeof(void*)*1, v___x_3973_);
v___x_3975_ = lean_apply_2(v___y_3961_, v___x_3974_, lean_box(0));
v___x_3976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3975_);
return v___x_3976_;
}
v___jp_3977_:
{
lean_object* v___x_3981_; 
v___x_3981_ = l_Lake_removeFileIfExists(v___y_3978_);
if (lean_obj_tag(v___x_3981_) == 0)
{
lean_dec_ref(v___x_3981_);
v_msg_3960_ = v_msg_3979_;
v___y_3961_ = v___y_3980_;
goto v___jp_3959_;
}
else
{
lean_object* v_a_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_3994_; 
lean_dec_ref(v_msg_3979_);
lean_dec_ref(v_line_3957_);
v_a_3982_ = lean_ctor_get(v___x_3981_, 0);
v_isSharedCheck_3994_ = !lean_is_exclusive(v___x_3981_);
if (v_isSharedCheck_3994_ == 0)
{
v___x_3984_ = v___x_3981_;
v_isShared_3985_ = v_isSharedCheck_3994_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_a_3982_);
lean_dec(v___x_3981_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_3994_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v___x_3986_; uint8_t v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3992_; 
v___x_3986_ = lean_io_error_to_string(v_a_3982_);
v___x_3987_ = 3;
v___x_3988_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3988_, 0, v___x_3986_);
lean_ctor_set_uint8(v___x_3988_, sizeof(void*)*1, v___x_3987_);
v___x_3989_ = lean_apply_2(v___y_3980_, v___x_3988_, lean_box(0));
v___x_3990_ = lean_box(0);
if (v_isShared_3985_ == 0)
{
lean_ctor_set(v___x_3984_, 0, v___x_3990_);
v___x_3992_ = v___x_3984_;
goto v_reusejp_3991_;
}
else
{
lean_object* v_reuseFailAlloc_3993_; 
v_reuseFailAlloc_3993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3993_, 0, v___x_3990_);
v___x_3992_ = v_reuseFailAlloc_3993_;
goto v_reusejp_3991_;
}
v_reusejp_3991_:
{
return v___x_3992_;
}
}
}
}
v___jp_3995_:
{
if (lean_obj_tag(v_a_3999_) == 1)
{
lean_object* v_a_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; 
v_a_4000_ = lean_ctor_get(v_a_3999_, 0);
lean_inc(v_a_4000_);
lean_dec_ref(v_a_3999_);
v___x_4001_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_4002_ = lean_string_append(v___y_3998_, v___x_4001_);
v___x_4003_ = lean_string_append(v___x_4002_, v_a_4000_);
lean_dec(v_a_4000_);
v___y_3978_ = v___y_3997_;
v_msg_3979_ = v___x_4003_;
v___y_3980_ = v___y_3996_;
goto v___jp_3977_;
}
else
{
lean_dec_ref(v_a_3999_);
v___y_3978_ = v___y_3997_;
v_msg_3979_ = v___y_3998_;
v___y_3980_ = v___y_3996_;
goto v___jp_3977_;
}
}
v___jp_4004_:
{
lean_object* v___x_4011_; uint8_t v___x_4012_; 
v___x_4011_ = lean_array_get_size(v___y_4007_);
v___x_4012_ = lean_nat_dec_lt(v___y_4006_, v___x_4011_);
if (v___x_4012_ == 0)
{
lean_dec_ref(v___y_4007_);
v___y_3996_ = v___y_4005_;
v___y_3997_ = v___y_4009_;
v___y_3998_ = v___y_4008_;
v_a_3999_ = v_val_4010_;
goto v___jp_3995_;
}
else
{
lean_object* v___x_4013_; uint8_t v___x_4014_; 
v___x_4013_ = lean_box(0);
v___x_4014_ = lean_nat_dec_le(v___x_4011_, v___x_4011_);
if (v___x_4014_ == 0)
{
if (v___x_4012_ == 0)
{
lean_dec_ref(v___y_4007_);
v___y_3996_ = v___y_4005_;
v___y_3997_ = v___y_4009_;
v___y_3998_ = v___y_4008_;
v_a_3999_ = v_val_4010_;
goto v___jp_3995_;
}
else
{
size_t v___x_4015_; size_t v___x_4016_; lean_object* v___x_4017_; 
v___x_4015_ = ((size_t)0ULL);
v___x_4016_ = lean_usize_of_nat(v___x_4011_);
lean_inc_ref(v___y_4005_);
v___x_4017_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v___y_4007_, v___x_4015_, v___x_4016_, v___x_4013_, v___y_4005_);
lean_dec_ref(v___y_4007_);
if (lean_obj_tag(v___x_4017_) == 0)
{
lean_dec_ref(v___x_4017_);
v___y_3996_ = v___y_4005_;
v___y_3997_ = v___y_4009_;
v___y_3998_ = v___y_4008_;
v_a_3999_ = v_val_4010_;
goto v___jp_3995_;
}
else
{
lean_dec_ref(v_val_4010_);
lean_dec_ref(v___y_4008_);
lean_dec_ref(v___y_4005_);
lean_dec_ref(v_line_3957_);
return v___x_4017_;
}
}
}
else
{
size_t v___x_4018_; size_t v___x_4019_; lean_object* v___x_4020_; 
v___x_4018_ = ((size_t)0ULL);
v___x_4019_ = lean_usize_of_nat(v___x_4011_);
lean_inc_ref(v___y_4005_);
v___x_4020_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v___y_4007_, v___x_4018_, v___x_4019_, v___x_4013_, v___y_4005_);
lean_dec_ref(v___y_4007_);
if (lean_obj_tag(v___x_4020_) == 0)
{
lean_dec_ref(v___x_4020_);
v___y_3996_ = v___y_4005_;
v___y_3997_ = v___y_4009_;
v___y_3998_ = v___y_4008_;
v_a_3999_ = v_val_4010_;
goto v___jp_3995_;
}
else
{
lean_dec_ref(v_val_4010_);
lean_dec_ref(v___y_4008_);
lean_dec_ref(v___y_4005_);
lean_dec_ref(v_line_3957_);
return v___x_4020_;
}
}
}
}
v___jp_4023_:
{
lean_object* v_url_4026_; lean_object* v_path_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v_msg_4033_; 
v_url_4026_ = lean_ctor_get(v_info_3954_, 0);
v_path_4027_ = lean_ctor_get(v_info_3954_, 1);
v___x_4028_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_4029_ = lean_string_append(v_msg_4024_, v___x_4028_);
v___x_4030_ = lean_string_append(v___x_4029_, v_path_4027_);
v___x_4031_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_4032_ = lean_string_append(v___x_4030_, v___x_4031_);
v_msg_4033_ = lean_string_append(v___x_4032_, v_url_4026_);
if (v_kind_4021_ == 0)
{
lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___x_4034_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_4035_ = l_Lake_JsonObject_getJson_x3f(v_out_3956_, v___x_4034_);
if (lean_obj_tag(v___x_4035_) == 0)
{
v___y_3978_ = v_path_4027_;
v_msg_3979_ = v_msg_4033_;
v___y_3980_ = v___y_4025_;
goto v___jp_3977_;
}
else
{
lean_object* v_val_4036_; lean_object* v___x_4037_; 
v_val_4036_ = lean_ctor_get(v___x_4035_, 0);
lean_inc(v_val_4036_);
lean_dec_ref(v___x_4035_);
v___x_4037_ = l_Lean_Json_getNat_x3f(v_val_4036_);
if (lean_obj_tag(v___x_4037_) == 0)
{
lean_dec_ref(v___x_4037_);
v___y_3978_ = v_path_4027_;
v_msg_3979_ = v_msg_4033_;
v___y_3980_ = v___y_4025_;
goto v___jp_3977_;
}
else
{
if (lean_obj_tag(v___x_4037_) == 1)
{
lean_object* v_a_4038_; lean_object* v___x_4039_; uint8_t v___x_4040_; 
v_a_4038_ = lean_ctor_get(v___x_4037_, 0);
lean_inc(v_a_4038_);
lean_dec_ref(v___x_4037_);
v___x_4039_ = lean_unsigned_to_nat(0u);
v___x_4040_ = lean_nat_dec_lt(v___x_4039_, v_a_4038_);
lean_dec(v_a_4038_);
if (v___x_4040_ == 0)
{
v___y_3978_ = v_path_4027_;
v_msg_3979_ = v_msg_4033_;
v___y_3980_ = v___y_4025_;
goto v___jp_3977_;
}
else
{
lean_object* v___x_4041_; lean_object* v___x_4042_; 
v___x_4041_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3));
v___x_4042_ = l_Lake_JsonObject_getJson_x3f(v_out_3956_, v___x_4041_);
if (lean_obj_tag(v___x_4042_) == 0)
{
v___y_3978_ = v_path_4027_;
v_msg_3979_ = v_msg_4033_;
v___y_3980_ = v___y_4025_;
goto v___jp_3977_;
}
else
{
lean_object* v_val_4043_; lean_object* v___x_4044_; 
v_val_4043_ = lean_ctor_get(v___x_4042_, 0);
lean_inc(v_val_4043_);
lean_dec_ref(v___x_4042_);
v___x_4044_ = l_Lean_Json_getStr_x3f(v_val_4043_);
if (lean_obj_tag(v___x_4044_) == 0)
{
lean_dec_ref(v___x_4044_);
v___y_3978_ = v_path_4027_;
v_msg_3979_ = v_msg_4033_;
v___y_3980_ = v___y_4025_;
goto v___jp_3977_;
}
else
{
if (lean_obj_tag(v___x_4044_) == 1)
{
lean_object* v_a_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4061_; 
v_a_4045_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4061_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4061_ == 0)
{
v___x_4047_ = v___x_4044_;
v_isShared_4048_ = v_isSharedCheck_4061_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_a_4045_);
lean_dec(v___x_4044_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4061_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
lean_object* v___x_4049_; uint8_t v___x_4050_; 
v___x_4049_ = ((lean_object*)(l_Lake_CacheService_artifactContentType___closed__0));
v___x_4050_ = lean_string_dec_eq(v_a_4045_, v___x_4049_);
lean_dec(v_a_4045_);
if (v___x_4050_ == 0)
{
lean_object* v___x_4051_; lean_object* v___x_4052_; 
v___x_4051_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_4052_ = l_IO_FS_readFile(v_path_4027_);
if (lean_obj_tag(v___x_4052_) == 0)
{
lean_object* v_a_4053_; lean_object* v___x_4055_; 
v_a_4053_ = lean_ctor_get(v___x_4052_, 0);
lean_inc(v_a_4053_);
lean_dec_ref(v___x_4052_);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 0, v_a_4053_);
v___x_4055_ = v___x_4047_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v_a_4053_);
v___x_4055_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
v___y_4005_ = v___y_4025_;
v___y_4006_ = v___x_4039_;
v___y_4007_ = v___x_4051_;
v___y_4008_ = v_msg_4033_;
v___y_4009_ = v_path_4027_;
v_val_4010_ = v___x_4055_;
goto v___jp_4004_;
}
}
else
{
lean_object* v_a_4057_; lean_object* v___x_4059_; 
v_a_4057_ = lean_ctor_get(v___x_4052_, 0);
lean_inc(v_a_4057_);
lean_dec_ref(v___x_4052_);
if (v_isShared_4048_ == 0)
{
lean_ctor_set_tag(v___x_4047_, 0);
lean_ctor_set(v___x_4047_, 0, v_a_4057_);
v___x_4059_ = v___x_4047_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v_a_4057_);
v___x_4059_ = v_reuseFailAlloc_4060_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
v___y_4005_ = v___y_4025_;
v___y_4006_ = v___x_4039_;
v___y_4007_ = v___x_4051_;
v___y_4008_ = v_msg_4033_;
v___y_4009_ = v_path_4027_;
v_val_4010_ = v___x_4059_;
goto v___jp_4004_;
}
}
}
else
{
lean_del_object(v___x_4047_);
v___y_3978_ = v_path_4027_;
v_msg_3979_ = v_msg_4033_;
v___y_3980_ = v___y_4025_;
goto v___jp_3977_;
}
}
}
else
{
lean_dec_ref(v___x_4044_);
v___y_3978_ = v_path_4027_;
v_msg_3979_ = v_msg_4033_;
v___y_3980_ = v___y_4025_;
goto v___jp_3977_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_4037_);
v___y_3978_ = v_path_4027_;
v_msg_3979_ = v_msg_4033_;
v___y_3980_ = v___y_4025_;
goto v___jp_3977_;
}
}
}
}
else
{
lean_object* v___x_4062_; lean_object* v___x_4063_; 
v___x_4062_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_4063_ = l_Lake_JsonObject_getJson_x3f(v_out_3956_, v___x_4062_);
if (lean_obj_tag(v___x_4063_) == 0)
{
v_msg_3960_ = v_msg_4033_;
v___y_3961_ = v___y_4025_;
goto v___jp_3959_;
}
else
{
lean_object* v_val_4064_; lean_object* v___x_4065_; 
v_val_4064_ = lean_ctor_get(v___x_4063_, 0);
lean_inc(v_val_4064_);
lean_dec_ref(v___x_4063_);
v___x_4065_ = l_Lean_Json_getNat_x3f(v_val_4064_);
if (lean_obj_tag(v___x_4065_) == 0)
{
lean_dec_ref(v___x_4065_);
v_msg_3960_ = v_msg_4033_;
v___y_3961_ = v___y_4025_;
goto v___jp_3959_;
}
else
{
if (lean_obj_tag(v___x_4065_) == 1)
{
lean_object* v_a_4066_; lean_object* v___x_4067_; uint8_t v___x_4068_; 
v_a_4066_ = lean_ctor_get(v___x_4065_, 0);
lean_inc(v_a_4066_);
lean_dec_ref(v___x_4065_);
v___x_4067_ = lean_unsigned_to_nat(0u);
v___x_4068_ = lean_nat_dec_lt(v___x_4067_, v_a_4066_);
if (v___x_4068_ == 0)
{
lean_dec(v_a_4066_);
v_msg_3960_ = v_msg_4033_;
v___y_3961_ = v___y_4025_;
goto v___jp_3959_;
}
else
{
size_t v___x_4069_; lean_object* v___x_4070_; 
v___x_4069_ = lean_usize_of_nat(v_a_4066_);
lean_dec(v_a_4066_);
v___x_4070_ = lean_io_prim_handle_read(v_hOut_3953_, v___x_4069_);
if (lean_obj_tag(v___x_4070_) == 0)
{
lean_object* v_a_4071_; uint8_t v___x_4072_; 
v_a_4071_ = lean_ctor_get(v___x_4070_, 0);
lean_inc(v_a_4071_);
lean_dec_ref(v___x_4070_);
v___x_4072_ = lean_string_validate_utf8(v_a_4071_);
if (v___x_4072_ == 0)
{
lean_dec(v_a_4071_);
v_msg_3960_ = v_msg_4033_;
v___y_3961_ = v___y_4025_;
goto v___jp_3959_;
}
else
{
lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
v___x_4073_ = lean_string_from_utf8_unchecked(v_a_4071_);
v___x_4074_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_4075_ = lean_string_append(v_msg_4033_, v___x_4074_);
v___x_4076_ = lean_string_append(v___x_4075_, v___x_4073_);
lean_dec_ref(v___x_4073_);
v_msg_3960_ = v___x_4076_;
v___y_3961_ = v___y_4025_;
goto v___jp_3959_;
}
}
else
{
lean_object* v_a_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4089_; 
lean_dec_ref(v_msg_4033_);
lean_dec_ref(v_line_3957_);
v_a_4077_ = lean_ctor_get(v___x_4070_, 0);
v_isSharedCheck_4089_ = !lean_is_exclusive(v___x_4070_);
if (v_isSharedCheck_4089_ == 0)
{
v___x_4079_ = v___x_4070_;
v_isShared_4080_ = v_isSharedCheck_4089_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_a_4077_);
lean_dec(v___x_4070_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4089_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4081_; uint8_t v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4087_; 
v___x_4081_ = lean_io_error_to_string(v_a_4077_);
v___x_4082_ = 3;
v___x_4083_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4083_, 0, v___x_4081_);
lean_ctor_set_uint8(v___x_4083_, sizeof(void*)*1, v___x_4082_);
v___x_4084_ = lean_apply_2(v___y_4025_, v___x_4083_, lean_box(0));
v___x_4085_ = lean_box(0);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 0, v___x_4085_);
v___x_4087_ = v___x_4079_;
goto v_reusejp_4086_;
}
else
{
lean_object* v_reuseFailAlloc_4088_; 
v_reuseFailAlloc_4088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4088_, 0, v___x_4085_);
v___x_4087_ = v_reuseFailAlloc_4088_;
goto v_reusejp_4086_;
}
v_reusejp_4086_:
{
return v___x_4087_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_4065_);
v_msg_3960_ = v_msg_4033_;
v___y_3961_ = v___y_4025_;
goto v___jp_3959_;
}
}
}
}
}
v___jp_4090_:
{
lean_object* v___x_4093_; lean_object* v___x_4094_; 
v___x_4093_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4));
v___x_4094_ = l_Lake_JsonObject_getJson_x3f(v_out_3956_, v___x_4093_);
if (lean_obj_tag(v___x_4094_) == 0)
{
v_msg_4024_ = v_msg_4091_;
v___y_4025_ = v___y_4092_;
goto v___jp_4023_;
}
else
{
lean_object* v_val_4095_; lean_object* v___x_4096_; 
v_val_4095_ = lean_ctor_get(v___x_4094_, 0);
lean_inc(v_val_4095_);
lean_dec_ref(v___x_4094_);
v___x_4096_ = l_Lean_Json_getStr_x3f(v_val_4095_);
if (lean_obj_tag(v___x_4096_) == 0)
{
lean_dec_ref(v___x_4096_);
v_msg_4024_ = v_msg_4091_;
v___y_4025_ = v___y_4092_;
goto v___jp_4023_;
}
else
{
if (lean_obj_tag(v___x_4096_) == 1)
{
lean_object* v_a_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v_msg_4100_; 
v_a_4097_ = lean_ctor_get(v___x_4096_, 0);
lean_inc(v_a_4097_);
lean_dec_ref(v___x_4096_);
v___x_4098_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5));
v___x_4099_ = lean_string_append(v_msg_4091_, v___x_4098_);
v_msg_4100_ = lean_string_append(v___x_4099_, v_a_4097_);
lean_dec(v_a_4097_);
v_msg_4024_ = v_msg_4100_;
v___y_4025_ = v___y_4092_;
goto v___jp_4023_;
}
else
{
lean_dec_ref(v___x_4096_);
v_msg_4024_ = v_msg_4091_;
v___y_4025_ = v___y_4092_;
goto v___jp_4023_;
}
}
}
}
v___jp_4101_:
{
lean_object* v_descr_4104_; uint64_t v_hash_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v_msg_4112_; 
v_descr_4104_ = lean_ctor_get(v_info_3954_, 2);
v_hash_4105_ = lean_ctor_get_uint64(v_descr_4104_, sizeof(void*)*1);
v___x_4106_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_4107_ = lean_string_append(v___y_4103_, v___x_4106_);
v___x_4108_ = lean_string_append(v___x_4107_, v___y_4102_);
lean_dec_ref(v___y_4102_);
v___x_4109_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7));
v___x_4110_ = lean_string_append(v___x_4108_, v___x_4109_);
v___x_4111_ = l_Lake_Hash_hex(v_hash_4105_);
v_msg_4112_ = lean_string_append(v___x_4110_, v___x_4111_);
lean_dec_ref(v___x_4111_);
if (lean_obj_tag(v_code_x3f_3955_) == 1)
{
lean_object* v_a_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v_msg_4119_; 
v_a_4113_ = lean_ctor_get(v_code_x3f_3955_, 0);
lean_inc(v_a_4113_);
lean_dec_ref(v_code_x3f_3955_);
v___x_4114_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8));
v___x_4115_ = lean_string_append(v_msg_4112_, v___x_4114_);
v___x_4116_ = l_Nat_reprFast(v_a_4113_);
v___x_4117_ = lean_string_append(v___x_4115_, v___x_4116_);
lean_dec_ref(v___x_4116_);
v___x_4118_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9));
v_msg_4119_ = lean_string_append(v___x_4117_, v___x_4118_);
v_msg_4091_ = v_msg_4119_;
v___y_4092_ = v___y_3951_;
goto v___jp_4090_;
}
else
{
lean_dec_ref(v_code_x3f_3955_);
v_msg_4091_ = v_msg_4112_;
v___y_4092_ = v___y_3951_;
goto v___jp_4090_;
}
}
v___jp_4120_:
{
lean_object* v_s_4122_; 
v_s_4122_ = lean_ctor_get(v_scope_4022_, 0);
lean_inc_ref(v_s_4122_);
lean_dec_ref(v_scope_4022_);
v___y_4102_ = v___y_4121_;
v___y_4103_ = v_s_4122_;
goto v___jp_4101_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0_spec__0___boxed(lean_object* v___y_4125_, lean_object* v_cfg_4126_, lean_object* v_hOut_4127_, lean_object* v_info_4128_, lean_object* v_code_x3f_4129_, lean_object* v_out_4130_, lean_object* v_line_4131_, lean_object* v_a_4132_){
_start:
{
lean_object* v_res_4133_; 
v_res_4133_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0_spec__0(v___y_4125_, v_cfg_4126_, v_hOut_4127_, v_info_4128_, v_code_x3f_4129_, v_out_4130_, v_line_4131_);
lean_dec(v_out_4130_);
lean_dec_ref(v_info_4128_);
lean_dec(v_hOut_4127_);
return v_res_4133_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0(lean_object* v_cfg_4134_, lean_object* v_hOut_4135_, lean_object* v_val_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, uint8_t v___x_4139_, lean_object* v_code_x3f_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_){
_start:
{
lean_object* v___x_4144_; 
v___x_4144_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0_spec__0(v___y_4142_, v_cfg_4134_, v_hOut_4135_, v_val_4136_, v_code_x3f_4140_, v_a_4137_, v_a_4138_);
if (lean_obj_tag(v___x_4144_) == 0)
{
lean_object* v___x_4146_; uint8_t v_isShared_4147_; uint8_t v_isSharedCheck_4161_; 
v_isSharedCheck_4161_ = !lean_is_exclusive(v___x_4144_);
if (v_isSharedCheck_4161_ == 0)
{
lean_object* v_unused_4162_; 
v_unused_4162_ = lean_ctor_get(v___x_4144_, 0);
lean_dec(v_unused_4162_);
v___x_4146_ = v___x_4144_;
v_isShared_4147_ = v_isSharedCheck_4161_;
goto v_resetjp_4145_;
}
else
{
lean_dec(v___x_4144_);
v___x_4146_ = lean_box(0);
v_isShared_4147_ = v_isSharedCheck_4161_;
goto v_resetjp_4145_;
}
v_resetjp_4145_:
{
lean_object* v_numSuccesses_4148_; lean_object* v___x_4150_; uint8_t v_isShared_4151_; uint8_t v_isSharedCheck_4160_; 
v_numSuccesses_4148_ = lean_ctor_get(v___y_4141_, 0);
v_isSharedCheck_4160_ = !lean_is_exclusive(v___y_4141_);
if (v_isSharedCheck_4160_ == 0)
{
v___x_4150_ = v___y_4141_;
v_isShared_4151_ = v_isSharedCheck_4160_;
goto v_resetjp_4149_;
}
else
{
lean_inc(v_numSuccesses_4148_);
lean_dec(v___y_4141_);
v___x_4150_ = lean_box(0);
v_isShared_4151_ = v_isSharedCheck_4160_;
goto v_resetjp_4149_;
}
v_resetjp_4149_:
{
lean_object* v___x_4152_; lean_object* v___x_4154_; 
v___x_4152_ = lean_box(0);
if (v_isShared_4151_ == 0)
{
v___x_4154_ = v___x_4150_;
goto v_reusejp_4153_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v_numSuccesses_4148_);
v___x_4154_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4153_;
}
v_reusejp_4153_:
{
lean_object* v___x_4155_; lean_object* v___x_4157_; 
lean_ctor_set_uint8(v___x_4154_, sizeof(void*)*1, v___x_4139_);
v___x_4155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4152_);
lean_ctor_set(v___x_4155_, 1, v___x_4154_);
if (v_isShared_4147_ == 0)
{
lean_ctor_set(v___x_4146_, 0, v___x_4155_);
v___x_4157_ = v___x_4146_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4158_; 
v_reuseFailAlloc_4158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4158_, 0, v___x_4155_);
v___x_4157_ = v_reuseFailAlloc_4158_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
return v___x_4157_;
}
}
}
}
}
else
{
lean_object* v_a_4163_; lean_object* v___x_4165_; uint8_t v_isShared_4166_; uint8_t v_isSharedCheck_4170_; 
lean_dec_ref(v___y_4141_);
v_a_4163_ = lean_ctor_get(v___x_4144_, 0);
v_isSharedCheck_4170_ = !lean_is_exclusive(v___x_4144_);
if (v_isSharedCheck_4170_ == 0)
{
v___x_4165_ = v___x_4144_;
v_isShared_4166_ = v_isSharedCheck_4170_;
goto v_resetjp_4164_;
}
else
{
lean_inc(v_a_4163_);
lean_dec(v___x_4144_);
v___x_4165_ = lean_box(0);
v_isShared_4166_ = v_isSharedCheck_4170_;
goto v_resetjp_4164_;
}
v_resetjp_4164_:
{
lean_object* v___x_4168_; 
if (v_isShared_4166_ == 0)
{
v___x_4168_ = v___x_4165_;
goto v_reusejp_4167_;
}
else
{
lean_object* v_reuseFailAlloc_4169_; 
v_reuseFailAlloc_4169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4169_, 0, v_a_4163_);
v___x_4168_ = v_reuseFailAlloc_4169_;
goto v_reusejp_4167_;
}
v_reusejp_4167_:
{
return v___x_4168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0___boxed(lean_object* v_cfg_4171_, lean_object* v_hOut_4172_, lean_object* v_val_4173_, lean_object* v_a_4174_, lean_object* v_a_4175_, lean_object* v___x_4176_, lean_object* v_code_x3f_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_){
_start:
{
uint8_t v___x_29257__boxed_4181_; lean_object* v_res_4182_; 
v___x_29257__boxed_4181_ = lean_unbox(v___x_4176_);
v_res_4182_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0(v_cfg_4171_, v_hOut_4172_, v_val_4173_, v_a_4174_, v_a_4175_, v___x_29257__boxed_4181_, v_code_x3f_4177_, v___y_4178_, v___y_4179_);
lean_dec(v_a_4174_);
lean_dec_ref(v_val_4173_);
lean_dec(v_hOut_4172_);
return v_res_4182_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__0(lean_object* v_cfg_4183_, lean_object* v_hOut_4184_, lean_object* v_val_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_, uint8_t v___x_4188_, lean_object* v_code_x3f_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_){
_start:
{
lean_object* v___x_4193_; 
v___x_4193_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_4183_, v_hOut_4184_, v_val_4185_, v_code_x3f_4189_, v_a_4186_, v_a_4187_, v___y_4191_);
if (lean_obj_tag(v___x_4193_) == 0)
{
lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4210_; 
v_isSharedCheck_4210_ = !lean_is_exclusive(v___x_4193_);
if (v_isSharedCheck_4210_ == 0)
{
lean_object* v_unused_4211_; 
v_unused_4211_ = lean_ctor_get(v___x_4193_, 0);
lean_dec(v_unused_4211_);
v___x_4195_ = v___x_4193_;
v_isShared_4196_ = v_isSharedCheck_4210_;
goto v_resetjp_4194_;
}
else
{
lean_dec(v___x_4193_);
v___x_4195_ = lean_box(0);
v_isShared_4196_ = v_isSharedCheck_4210_;
goto v_resetjp_4194_;
}
v_resetjp_4194_:
{
lean_object* v_numSuccesses_4197_; lean_object* v___x_4199_; uint8_t v_isShared_4200_; uint8_t v_isSharedCheck_4209_; 
v_numSuccesses_4197_ = lean_ctor_get(v___y_4190_, 0);
v_isSharedCheck_4209_ = !lean_is_exclusive(v___y_4190_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_4199_ = v___y_4190_;
v_isShared_4200_ = v_isSharedCheck_4209_;
goto v_resetjp_4198_;
}
else
{
lean_inc(v_numSuccesses_4197_);
lean_dec(v___y_4190_);
v___x_4199_ = lean_box(0);
v_isShared_4200_ = v_isSharedCheck_4209_;
goto v_resetjp_4198_;
}
v_resetjp_4198_:
{
lean_object* v___x_4201_; lean_object* v___x_4203_; 
v___x_4201_ = lean_box(0);
if (v_isShared_4200_ == 0)
{
v___x_4203_ = v___x_4199_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4208_; 
v_reuseFailAlloc_4208_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4208_, 0, v_numSuccesses_4197_);
v___x_4203_ = v_reuseFailAlloc_4208_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
lean_object* v___x_4204_; lean_object* v___x_4206_; 
lean_ctor_set_uint8(v___x_4203_, sizeof(void*)*1, v___x_4188_);
v___x_4204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4204_, 0, v___x_4201_);
lean_ctor_set(v___x_4204_, 1, v___x_4203_);
if (v_isShared_4196_ == 0)
{
lean_ctor_set(v___x_4195_, 0, v___x_4204_);
v___x_4206_ = v___x_4195_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v___x_4204_);
v___x_4206_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
return v___x_4206_;
}
}
}
}
}
else
{
lean_object* v_a_4212_; lean_object* v___x_4214_; uint8_t v_isShared_4215_; uint8_t v_isSharedCheck_4219_; 
lean_dec_ref(v___y_4190_);
v_a_4212_ = lean_ctor_get(v___x_4193_, 0);
v_isSharedCheck_4219_ = !lean_is_exclusive(v___x_4193_);
if (v_isSharedCheck_4219_ == 0)
{
v___x_4214_ = v___x_4193_;
v_isShared_4215_ = v_isSharedCheck_4219_;
goto v_resetjp_4213_;
}
else
{
lean_inc(v_a_4212_);
lean_dec(v___x_4193_);
v___x_4214_ = lean_box(0);
v_isShared_4215_ = v_isSharedCheck_4219_;
goto v_resetjp_4213_;
}
v_resetjp_4213_:
{
lean_object* v___x_4217_; 
if (v_isShared_4215_ == 0)
{
v___x_4217_ = v___x_4214_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4218_; 
v_reuseFailAlloc_4218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4218_, 0, v_a_4212_);
v___x_4217_ = v_reuseFailAlloc_4218_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
return v___x_4217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__0___boxed(lean_object* v_cfg_4220_, lean_object* v_hOut_4221_, lean_object* v_val_4222_, lean_object* v_a_4223_, lean_object* v_a_4224_, lean_object* v___x_4225_, lean_object* v_code_x3f_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_){
_start:
{
uint8_t v___x_29330__boxed_4230_; lean_object* v_res_4231_; 
v___x_29330__boxed_4230_ = lean_unbox(v___x_4225_);
v_res_4231_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__0(v_cfg_4220_, v_hOut_4221_, v_val_4222_, v_a_4223_, v_a_4224_, v___x_29330__boxed_4230_, v_code_x3f_4226_, v___y_4227_, v___y_4228_);
lean_dec(v_a_4223_);
lean_dec_ref(v_val_4222_);
lean_dec(v_hOut_4221_);
return v_res_4231_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__1(lean_object* v_cfg_4232_, lean_object* v_path_4233_, uint8_t v___x_4234_, lean_object* v_descr_4235_, lean_object* v_url_4236_, uint8_t v___x_4237_, lean_object* v_00___4238_, lean_object* v___y_4239_, lean_object* v___y_4240_){
_start:
{
uint64_t v___y_4243_; lean_object* v___y_4283_; lean_object* v___y_4338_; uint8_t v_kind_4367_; 
v_kind_4367_ = lean_ctor_get_uint8(v_cfg_4232_, sizeof(void*)*3);
if (v_kind_4367_ == 0)
{
lean_object* v_scope_4368_; lean_object* v_s_4369_; 
v_scope_4368_ = lean_ctor_get(v_cfg_4232_, 0);
lean_inc_ref(v_scope_4368_);
lean_dec_ref(v_cfg_4232_);
v_s_4369_ = lean_ctor_get(v_scope_4368_, 0);
lean_inc_ref(v_s_4369_);
lean_dec_ref(v_scope_4368_);
v___y_4283_ = v_s_4369_;
goto v___jp_4282_;
}
else
{
lean_object* v_scope_4370_; lean_object* v_s_4371_; 
v_scope_4370_ = lean_ctor_get(v_cfg_4232_, 0);
lean_inc_ref(v_scope_4370_);
lean_dec_ref(v_cfg_4232_);
v_s_4371_ = lean_ctor_get(v_scope_4370_, 0);
lean_inc_ref(v_s_4371_);
lean_dec_ref(v_scope_4370_);
v___y_4338_ = v_s_4371_;
goto v___jp_4337_;
}
v___jp_4242_:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; uint8_t v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; 
v___x_4244_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
lean_inc_ref(v_path_4233_);
v___x_4245_ = lean_string_append(v_path_4233_, v___x_4244_);
v___x_4246_ = l_Lake_Hash_hex(v___y_4243_);
v___x_4247_ = lean_string_append(v___x_4245_, v___x_4246_);
lean_dec_ref(v___x_4246_);
v___x_4248_ = 3;
v___x_4249_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4249_, 0, v___x_4247_);
lean_ctor_set_uint8(v___x_4249_, sizeof(void*)*1, v___x_4248_);
lean_inc_ref(v___y_4240_);
v___x_4250_ = lean_apply_2(v___y_4240_, v___x_4249_, lean_box(0));
v___x_4251_ = lean_io_remove_file(v_path_4233_);
lean_dec_ref(v_path_4233_);
if (lean_obj_tag(v___x_4251_) == 0)
{
lean_object* v___x_4253_; uint8_t v_isShared_4254_; uint8_t v_isSharedCheck_4268_; 
lean_dec_ref(v___y_4240_);
v_isSharedCheck_4268_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4268_ == 0)
{
lean_object* v_unused_4269_; 
v_unused_4269_ = lean_ctor_get(v___x_4251_, 0);
lean_dec(v_unused_4269_);
v___x_4253_ = v___x_4251_;
v_isShared_4254_ = v_isSharedCheck_4268_;
goto v_resetjp_4252_;
}
else
{
lean_dec(v___x_4251_);
v___x_4253_ = lean_box(0);
v_isShared_4254_ = v_isSharedCheck_4268_;
goto v_resetjp_4252_;
}
v_resetjp_4252_:
{
lean_object* v_numSuccesses_4255_; lean_object* v___x_4257_; uint8_t v_isShared_4258_; uint8_t v_isSharedCheck_4267_; 
v_numSuccesses_4255_ = lean_ctor_get(v___y_4239_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v___y_4239_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4257_ = v___y_4239_;
v_isShared_4258_ = v_isSharedCheck_4267_;
goto v_resetjp_4256_;
}
else
{
lean_inc(v_numSuccesses_4255_);
lean_dec(v___y_4239_);
v___x_4257_ = lean_box(0);
v_isShared_4258_ = v_isSharedCheck_4267_;
goto v_resetjp_4256_;
}
v_resetjp_4256_:
{
lean_object* v___x_4259_; lean_object* v___x_4261_; 
v___x_4259_ = lean_box(0);
if (v_isShared_4258_ == 0)
{
v___x_4261_ = v___x_4257_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4266_; 
v_reuseFailAlloc_4266_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4266_, 0, v_numSuccesses_4255_);
v___x_4261_ = v_reuseFailAlloc_4266_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
lean_object* v___x_4262_; lean_object* v___x_4264_; 
lean_ctor_set_uint8(v___x_4261_, sizeof(void*)*1, v___x_4234_);
v___x_4262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4262_, 0, v___x_4259_);
lean_ctor_set(v___x_4262_, 1, v___x_4261_);
if (v_isShared_4254_ == 0)
{
lean_ctor_set(v___x_4253_, 0, v___x_4262_);
v___x_4264_ = v___x_4253_;
goto v_reusejp_4263_;
}
else
{
lean_object* v_reuseFailAlloc_4265_; 
v_reuseFailAlloc_4265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4265_, 0, v___x_4262_);
v___x_4264_ = v_reuseFailAlloc_4265_;
goto v_reusejp_4263_;
}
v_reusejp_4263_:
{
return v___x_4264_;
}
}
}
}
}
else
{
lean_object* v_a_4270_; lean_object* v___x_4272_; uint8_t v_isShared_4273_; uint8_t v_isSharedCheck_4281_; 
lean_dec_ref(v___y_4239_);
v_a_4270_ = lean_ctor_get(v___x_4251_, 0);
v_isSharedCheck_4281_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4281_ == 0)
{
v___x_4272_ = v___x_4251_;
v_isShared_4273_ = v_isSharedCheck_4281_;
goto v_resetjp_4271_;
}
else
{
lean_inc(v_a_4270_);
lean_dec(v___x_4251_);
v___x_4272_ = lean_box(0);
v_isShared_4273_ = v_isSharedCheck_4281_;
goto v_resetjp_4271_;
}
v_resetjp_4271_:
{
lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4279_; 
v___x_4274_ = lean_io_error_to_string(v_a_4270_);
v___x_4275_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4275_, 0, v___x_4274_);
lean_ctor_set_uint8(v___x_4275_, sizeof(void*)*1, v___x_4248_);
v___x_4276_ = lean_apply_2(v___y_4240_, v___x_4275_, lean_box(0));
v___x_4277_ = lean_box(0);
if (v_isShared_4273_ == 0)
{
lean_ctor_set(v___x_4272_, 0, v___x_4277_);
v___x_4279_ = v___x_4272_;
goto v_reusejp_4278_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4280_, 0, v___x_4277_);
v___x_4279_ = v_reuseFailAlloc_4280_;
goto v_reusejp_4278_;
}
v_reusejp_4278_:
{
return v___x_4279_;
}
}
}
}
v___jp_4282_:
{
uint64_t v_hash_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; uint8_t v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
v_hash_4284_ = lean_ctor_get_uint64(v_descr_4235_, sizeof(void*)*1);
v___x_4285_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__0));
v___x_4286_ = lean_string_append(v___y_4283_, v___x_4285_);
v___x_4287_ = l_Lake_Hash_hex(v_hash_4284_);
v___x_4288_ = lean_string_append(v___x_4286_, v___x_4287_);
lean_dec_ref(v___x_4287_);
v___x_4289_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_4290_ = lean_string_append(v___x_4288_, v___x_4289_);
v___x_4291_ = lean_string_append(v___x_4290_, v_path_4233_);
v___x_4292_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_4293_ = lean_string_append(v___x_4291_, v___x_4292_);
v___x_4294_ = lean_string_append(v___x_4293_, v_url_4236_);
v___x_4295_ = 1;
v___x_4296_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4296_, 0, v___x_4294_);
lean_ctor_set_uint8(v___x_4296_, sizeof(void*)*1, v___x_4295_);
lean_inc_ref(v___y_4240_);
v___x_4297_ = lean_apply_2(v___y_4240_, v___x_4296_, lean_box(0));
v___x_4298_ = l_Lake_computeBinFileHash(v_path_4233_);
if (lean_obj_tag(v___x_4298_) == 0)
{
lean_object* v_a_4299_; lean_object* v___x_4301_; uint8_t v_isShared_4302_; uint8_t v_isSharedCheck_4323_; 
v_a_4299_ = lean_ctor_get(v___x_4298_, 0);
v_isSharedCheck_4323_ = !lean_is_exclusive(v___x_4298_);
if (v_isSharedCheck_4323_ == 0)
{
v___x_4301_ = v___x_4298_;
v_isShared_4302_ = v_isSharedCheck_4323_;
goto v_resetjp_4300_;
}
else
{
lean_inc(v_a_4299_);
lean_dec(v___x_4298_);
v___x_4301_ = lean_box(0);
v_isShared_4302_ = v_isSharedCheck_4323_;
goto v_resetjp_4300_;
}
v_resetjp_4300_:
{
uint64_t v___x_4303_; uint8_t v___x_4304_; 
v___x_4303_ = lean_unbox_uint64(v_a_4299_);
v___x_4304_ = lean_uint64_dec_eq(v___x_4303_, v_hash_4284_);
if (v___x_4304_ == 0)
{
uint64_t v___x_4305_; 
lean_del_object(v___x_4301_);
v___x_4305_ = lean_unbox_uint64(v_a_4299_);
lean_dec(v_a_4299_);
v___y_4243_ = v___x_4305_;
goto v___jp_4242_;
}
else
{
if (v___x_4237_ == 0)
{
uint8_t v_didError_4306_; lean_object* v_numSuccesses_4307_; lean_object* v___x_4309_; uint8_t v_isShared_4310_; uint8_t v_isSharedCheck_4321_; 
lean_dec(v_a_4299_);
lean_dec_ref(v___y_4240_);
lean_dec_ref(v_path_4233_);
v_didError_4306_ = lean_ctor_get_uint8(v___y_4239_, sizeof(void*)*1);
v_numSuccesses_4307_ = lean_ctor_get(v___y_4239_, 0);
v_isSharedCheck_4321_ = !lean_is_exclusive(v___y_4239_);
if (v_isSharedCheck_4321_ == 0)
{
v___x_4309_ = v___y_4239_;
v_isShared_4310_ = v_isSharedCheck_4321_;
goto v_resetjp_4308_;
}
else
{
lean_inc(v_numSuccesses_4307_);
lean_dec(v___y_4239_);
v___x_4309_ = lean_box(0);
v_isShared_4310_ = v_isSharedCheck_4321_;
goto v_resetjp_4308_;
}
v_resetjp_4308_:
{
lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4315_; 
v___x_4311_ = lean_box(0);
v___x_4312_ = lean_unsigned_to_nat(1u);
v___x_4313_ = lean_nat_add(v_numSuccesses_4307_, v___x_4312_);
lean_dec(v_numSuccesses_4307_);
if (v_isShared_4310_ == 0)
{
lean_ctor_set(v___x_4309_, 0, v___x_4313_);
v___x_4315_ = v___x_4309_;
goto v_reusejp_4314_;
}
else
{
lean_object* v_reuseFailAlloc_4320_; 
v_reuseFailAlloc_4320_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4320_, 0, v___x_4313_);
lean_ctor_set_uint8(v_reuseFailAlloc_4320_, sizeof(void*)*1, v_didError_4306_);
v___x_4315_ = v_reuseFailAlloc_4320_;
goto v_reusejp_4314_;
}
v_reusejp_4314_:
{
lean_object* v___x_4316_; lean_object* v___x_4318_; 
v___x_4316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4316_, 0, v___x_4311_);
lean_ctor_set(v___x_4316_, 1, v___x_4315_);
if (v_isShared_4302_ == 0)
{
lean_ctor_set(v___x_4301_, 0, v___x_4316_);
v___x_4318_ = v___x_4301_;
goto v_reusejp_4317_;
}
else
{
lean_object* v_reuseFailAlloc_4319_; 
v_reuseFailAlloc_4319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4319_, 0, v___x_4316_);
v___x_4318_ = v_reuseFailAlloc_4319_;
goto v_reusejp_4317_;
}
v_reusejp_4317_:
{
return v___x_4318_;
}
}
}
}
else
{
uint64_t v___x_4322_; 
lean_del_object(v___x_4301_);
v___x_4322_ = lean_unbox_uint64(v_a_4299_);
lean_dec(v_a_4299_);
v___y_4243_ = v___x_4322_;
goto v___jp_4242_;
}
}
}
}
else
{
lean_object* v_a_4324_; lean_object* v___x_4326_; uint8_t v_isShared_4327_; uint8_t v_isSharedCheck_4336_; 
lean_dec_ref(v___y_4239_);
lean_dec_ref(v_path_4233_);
v_a_4324_ = lean_ctor_get(v___x_4298_, 0);
v_isSharedCheck_4336_ = !lean_is_exclusive(v___x_4298_);
if (v_isSharedCheck_4336_ == 0)
{
v___x_4326_ = v___x_4298_;
v_isShared_4327_ = v_isSharedCheck_4336_;
goto v_resetjp_4325_;
}
else
{
lean_inc(v_a_4324_);
lean_dec(v___x_4298_);
v___x_4326_ = lean_box(0);
v_isShared_4327_ = v_isSharedCheck_4336_;
goto v_resetjp_4325_;
}
v_resetjp_4325_:
{
lean_object* v___x_4328_; uint8_t v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4334_; 
v___x_4328_ = lean_io_error_to_string(v_a_4324_);
v___x_4329_ = 3;
v___x_4330_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4330_, 0, v___x_4328_);
lean_ctor_set_uint8(v___x_4330_, sizeof(void*)*1, v___x_4329_);
v___x_4331_ = lean_apply_2(v___y_4240_, v___x_4330_, lean_box(0));
v___x_4332_ = lean_box(0);
if (v_isShared_4327_ == 0)
{
lean_ctor_set(v___x_4326_, 0, v___x_4332_);
v___x_4334_ = v___x_4326_;
goto v_reusejp_4333_;
}
else
{
lean_object* v_reuseFailAlloc_4335_; 
v_reuseFailAlloc_4335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4335_, 0, v___x_4332_);
v___x_4334_ = v_reuseFailAlloc_4335_;
goto v_reusejp_4333_;
}
v_reusejp_4333_:
{
return v___x_4334_;
}
}
}
}
v___jp_4337_:
{
uint64_t v_hash_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; uint8_t v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; uint8_t v_didError_4353_; lean_object* v_numSuccesses_4354_; lean_object* v___x_4356_; uint8_t v_isShared_4357_; uint8_t v_isSharedCheck_4366_; 
v_hash_4339_ = lean_ctor_get_uint64(v_descr_4235_, sizeof(void*)*1);
v___x_4340_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__1));
v___x_4341_ = lean_string_append(v___y_4338_, v___x_4340_);
v___x_4342_ = l_Lake_Hash_hex(v_hash_4339_);
v___x_4343_ = lean_string_append(v___x_4341_, v___x_4342_);
lean_dec_ref(v___x_4342_);
v___x_4344_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_4345_ = lean_string_append(v___x_4343_, v___x_4344_);
v___x_4346_ = lean_string_append(v___x_4345_, v_path_4233_);
lean_dec_ref(v_path_4233_);
v___x_4347_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_4348_ = lean_string_append(v___x_4346_, v___x_4347_);
v___x_4349_ = lean_string_append(v___x_4348_, v_url_4236_);
v___x_4350_ = 1;
v___x_4351_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4351_, 0, v___x_4349_);
lean_ctor_set_uint8(v___x_4351_, sizeof(void*)*1, v___x_4350_);
v___x_4352_ = lean_apply_2(v___y_4240_, v___x_4351_, lean_box(0));
v_didError_4353_ = lean_ctor_get_uint8(v___y_4239_, sizeof(void*)*1);
v_numSuccesses_4354_ = lean_ctor_get(v___y_4239_, 0);
v_isSharedCheck_4366_ = !lean_is_exclusive(v___y_4239_);
if (v_isSharedCheck_4366_ == 0)
{
v___x_4356_ = v___y_4239_;
v_isShared_4357_ = v_isSharedCheck_4366_;
goto v_resetjp_4355_;
}
else
{
lean_inc(v_numSuccesses_4354_);
lean_dec(v___y_4239_);
v___x_4356_ = lean_box(0);
v_isShared_4357_ = v_isSharedCheck_4366_;
goto v_resetjp_4355_;
}
v_resetjp_4355_:
{
lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4362_; 
v___x_4358_ = lean_box(0);
v___x_4359_ = lean_unsigned_to_nat(1u);
v___x_4360_ = lean_nat_add(v_numSuccesses_4354_, v___x_4359_);
lean_dec(v_numSuccesses_4354_);
if (v_isShared_4357_ == 0)
{
lean_ctor_set(v___x_4356_, 0, v___x_4360_);
v___x_4362_ = v___x_4356_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v___x_4360_);
lean_ctor_set_uint8(v_reuseFailAlloc_4365_, sizeof(void*)*1, v_didError_4353_);
v___x_4362_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___x_4363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4363_, 0, v___x_4358_);
lean_ctor_set(v___x_4363_, 1, v___x_4362_);
v___x_4364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4364_, 0, v___x_4363_);
return v___x_4364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__1___boxed(lean_object* v_cfg_4372_, lean_object* v_path_4373_, lean_object* v___x_4374_, lean_object* v_descr_4375_, lean_object* v_url_4376_, lean_object* v___x_4377_, lean_object* v_00___4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_){
_start:
{
uint8_t v___x_29408__boxed_4382_; uint8_t v___x_29411__boxed_4383_; lean_object* v_res_4384_; 
v___x_29408__boxed_4382_ = lean_unbox(v___x_4374_);
v___x_29411__boxed_4383_ = lean_unbox(v___x_4377_);
v_res_4384_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__1(v_cfg_4372_, v_path_4373_, v___x_29408__boxed_4382_, v_descr_4375_, v_url_4376_, v___x_29411__boxed_4383_, v_00___4378_, v___y_4379_, v___y_4380_);
lean_dec_ref(v_url_4376_);
lean_dec_ref(v_descr_4375_);
return v_res_4384_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3(lean_object* v_a_4391_, lean_object* v_cfg_4392_, lean_object* v_h_4393_, lean_object* v_hOut_4394_, lean_object* v_s_4395_){
_start:
{
lean_object* v___y_4398_; lean_object* v___x_4410_; 
v___x_4410_ = lean_io_prim_handle_get_line(v_h_4393_);
if (lean_obj_tag(v___x_4410_) == 0)
{
lean_object* v_a_4411_; lean_object* v___x_4413_; uint8_t v_isShared_4414_; uint8_t v_isSharedCheck_4509_; 
v_a_4411_ = lean_ctor_get(v___x_4410_, 0);
v_isSharedCheck_4509_ = !lean_is_exclusive(v___x_4410_);
if (v_isSharedCheck_4509_ == 0)
{
v___x_4413_ = v___x_4410_;
v_isShared_4414_ = v_isSharedCheck_4509_;
goto v_resetjp_4412_;
}
else
{
lean_inc(v_a_4411_);
lean_dec(v___x_4410_);
v___x_4413_ = lean_box(0);
v_isShared_4414_ = v_isSharedCheck_4509_;
goto v_resetjp_4412_;
}
v_resetjp_4412_:
{
lean_object* v___y_4416_; lean_object* v___y_4417_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v_startInclusive_4423_; lean_object* v_endExclusive_4424_; lean_object* v___x_4425_; uint8_t v___x_4426_; 
v___x_4419_ = lean_unsigned_to_nat(0u);
v___x_4420_ = lean_string_utf8_byte_size(v_a_4411_);
lean_inc(v_a_4411_);
v___x_4421_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4421_, 0, v_a_4411_);
lean_ctor_set(v___x_4421_, 1, v___x_4419_);
lean_ctor_set(v___x_4421_, 2, v___x_4420_);
v___x_4422_ = l_String_Slice_trimAscii(v___x_4421_);
v_startInclusive_4423_ = lean_ctor_get(v___x_4422_, 1);
lean_inc(v_startInclusive_4423_);
v_endExclusive_4424_ = lean_ctor_get(v___x_4422_, 2);
lean_inc(v_endExclusive_4424_);
v___x_4425_ = lean_nat_sub(v_endExclusive_4424_, v_startInclusive_4423_);
lean_dec(v_startInclusive_4423_);
lean_dec(v_endExclusive_4424_);
v___x_4426_ = lean_nat_dec_eq(v___x_4425_, v___x_4419_);
lean_dec(v___x_4425_);
if (v___x_4426_ == 0)
{
uint8_t v___x_4427_; lean_object* v___y_4429_; lean_object* v_a_4447_; lean_object* v___x_4466_; 
lean_del_object(v___x_4413_);
v___x_4427_ = 1;
lean_inc(v_a_4411_);
v___x_4466_ = l_Lean_Json_parse(v_a_4411_);
if (lean_obj_tag(v___x_4466_) == 0)
{
lean_object* v_a_4467_; 
lean_dec(v_a_4411_);
v_a_4467_ = lean_ctor_get(v___x_4466_, 0);
lean_inc(v_a_4467_);
lean_dec_ref(v___x_4466_);
v_a_4447_ = v_a_4467_;
goto v___jp_4446_;
}
else
{
lean_object* v_a_4468_; lean_object* v___x_4469_; 
v_a_4468_ = lean_ctor_get(v___x_4466_, 0);
lean_inc(v_a_4468_);
lean_dec_ref(v___x_4466_);
v___x_4469_ = l_Lean_Json_getObj_x3f(v_a_4468_);
if (lean_obj_tag(v___x_4469_) == 0)
{
lean_object* v_a_4470_; 
lean_dec(v_a_4411_);
v_a_4470_ = lean_ctor_get(v___x_4469_, 0);
lean_inc(v_a_4470_);
lean_dec_ref(v___x_4469_);
v_a_4447_ = v_a_4470_;
goto v___jp_4446_;
}
else
{
lean_object* v_a_4471_; lean_object* v___x_4472_; 
v_a_4471_ = lean_ctor_get(v___x_4469_, 0);
lean_inc(v_a_4471_);
lean_dec_ref(v___x_4469_);
v___x_4472_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_4392_, v_a_4471_);
if (lean_obj_tag(v___x_4472_) == 1)
{
lean_object* v_val_4473_; lean_object* v_url_4474_; lean_object* v_path_4475_; lean_object* v_descr_4476_; lean_object* v___x_4477_; lean_object* v___f_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; 
lean_dec_ref(v___x_4422_);
v_val_4473_ = lean_ctor_get(v___x_4472_, 0);
lean_inc(v_val_4473_);
lean_dec_ref(v___x_4472_);
v_url_4474_ = lean_ctor_get(v_val_4473_, 0);
v_path_4475_ = lean_ctor_get(v_val_4473_, 1);
v_descr_4476_ = lean_ctor_get(v_val_4473_, 2);
v___x_4477_ = lean_box(v___x_4427_);
lean_inc(v_a_4411_);
lean_inc(v_a_4471_);
lean_inc(v_val_4473_);
lean_inc(v_hOut_4394_);
lean_inc_ref(v_cfg_4392_);
v___f_4478_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__0___boxed), 10, 6);
lean_closure_set(v___f_4478_, 0, v_cfg_4392_);
lean_closure_set(v___f_4478_, 1, v_hOut_4394_);
lean_closure_set(v___f_4478_, 2, v_val_4473_);
lean_closure_set(v___f_4478_, 3, v_a_4471_);
lean_closure_set(v___f_4478_, 4, v_a_4411_);
lean_closure_set(v___f_4478_, 5, v___x_4477_);
v___x_4479_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_4480_ = l_Lake_JsonObject_getJson_x3f(v_a_4471_, v___x_4479_);
if (lean_obj_tag(v___x_4480_) == 0)
{
lean_object* v___x_4481_; 
lean_dec(v_val_4473_);
lean_dec(v_a_4471_);
lean_dec(v_a_4411_);
v___x_4481_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__4));
v___y_4416_ = v___f_4478_;
v___y_4417_ = v___x_4481_;
goto v___jp_4415_;
}
else
{
lean_object* v_val_4482_; lean_object* v___x_4483_; 
v_val_4482_ = lean_ctor_get(v___x_4480_, 0);
lean_inc(v_val_4482_);
lean_dec_ref(v___x_4480_);
v___x_4483_ = l_Lean_Json_getNat_x3f(v_val_4482_);
if (lean_obj_tag(v___x_4483_) == 0)
{
lean_object* v_a_4484_; lean_object* v___x_4486_; uint8_t v_isShared_4487_; uint8_t v_isSharedCheck_4493_; 
lean_dec(v_val_4473_);
lean_dec(v_a_4471_);
lean_dec(v_a_4411_);
v_a_4484_ = lean_ctor_get(v___x_4483_, 0);
v_isSharedCheck_4493_ = !lean_is_exclusive(v___x_4483_);
if (v_isSharedCheck_4493_ == 0)
{
v___x_4486_ = v___x_4483_;
v_isShared_4487_ = v_isSharedCheck_4493_;
goto v_resetjp_4485_;
}
else
{
lean_inc(v_a_4484_);
lean_dec(v___x_4483_);
v___x_4486_ = lean_box(0);
v_isShared_4487_ = v_isSharedCheck_4493_;
goto v_resetjp_4485_;
}
v_resetjp_4485_:
{
lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4491_; 
v___x_4488_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_4489_ = lean_string_append(v___x_4488_, v_a_4484_);
lean_dec(v_a_4484_);
if (v_isShared_4487_ == 0)
{
lean_ctor_set(v___x_4486_, 0, v___x_4489_);
v___x_4491_ = v___x_4486_;
goto v_reusejp_4490_;
}
else
{
lean_object* v_reuseFailAlloc_4492_; 
v_reuseFailAlloc_4492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4492_, 0, v___x_4489_);
v___x_4491_ = v_reuseFailAlloc_4492_;
goto v_reusejp_4490_;
}
v_reusejp_4490_:
{
v___y_4416_ = v___f_4478_;
v___y_4417_ = v___x_4491_;
goto v___jp_4415_;
}
}
}
else
{
if (lean_obj_tag(v___x_4483_) == 1)
{
lean_object* v_a_4494_; lean_object* v___x_4495_; uint8_t v___x_4496_; 
lean_dec_ref(v___f_4478_);
v_a_4494_ = lean_ctor_get(v___x_4483_, 0);
lean_inc(v_a_4494_);
v___x_4495_ = lean_unsigned_to_nat(200u);
v___x_4496_ = lean_nat_dec_eq(v_a_4494_, v___x_4495_);
if (v___x_4496_ == 0)
{
lean_object* v___x_4497_; uint8_t v___x_4498_; 
v___x_4497_ = lean_unsigned_to_nat(201u);
v___x_4498_ = lean_nat_dec_eq(v_a_4494_, v___x_4497_);
lean_dec(v_a_4494_);
if (v___x_4498_ == 0)
{
lean_object* v___x_4499_; 
lean_inc_ref(v_a_4391_);
lean_inc_ref(v_cfg_4392_);
v___x_4499_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__0(v_cfg_4392_, v_hOut_4394_, v_val_4473_, v_a_4471_, v_a_4411_, v___x_4427_, v___x_4483_, v_s_4395_, v_a_4391_);
lean_dec(v_a_4471_);
lean_dec(v_val_4473_);
v___y_4398_ = v___x_4499_;
goto v___jp_4397_;
}
else
{
lean_object* v___x_4500_; lean_object* v___x_4501_; 
lean_inc_ref(v_descr_4476_);
lean_inc_ref(v_path_4475_);
lean_inc_ref(v_url_4474_);
lean_dec_ref(v___x_4483_);
lean_dec(v_val_4473_);
lean_dec(v_a_4471_);
lean_dec(v_a_4411_);
v___x_4500_ = lean_box(0);
lean_inc_ref(v_a_4391_);
lean_inc_ref(v_cfg_4392_);
v___x_4501_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__1(v_cfg_4392_, v_path_4475_, v___x_4427_, v_descr_4476_, v_url_4474_, v___x_4426_, v___x_4500_, v_s_4395_, v_a_4391_);
lean_dec_ref(v_url_4474_);
lean_dec_ref(v_descr_4476_);
v___y_4398_ = v___x_4501_;
goto v___jp_4397_;
}
}
else
{
lean_object* v___x_4502_; lean_object* v___x_4503_; 
lean_inc_ref(v_descr_4476_);
lean_inc_ref(v_path_4475_);
lean_inc_ref(v_url_4474_);
lean_dec_ref(v___x_4483_);
lean_dec(v_a_4494_);
lean_dec(v_val_4473_);
lean_dec(v_a_4471_);
lean_dec(v_a_4411_);
v___x_4502_ = lean_box(0);
lean_inc_ref(v_a_4391_);
lean_inc_ref(v_cfg_4392_);
v___x_4503_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___lam__1(v_cfg_4392_, v_path_4475_, v___x_4427_, v_descr_4476_, v_url_4474_, v___x_4426_, v___x_4502_, v_s_4395_, v_a_4391_);
lean_dec_ref(v_url_4474_);
lean_dec_ref(v_descr_4476_);
v___y_4398_ = v___x_4503_;
goto v___jp_4397_;
}
}
else
{
lean_dec(v_val_4473_);
lean_dec(v_a_4471_);
lean_dec(v_a_4411_);
v___y_4416_ = v___f_4478_;
v___y_4417_ = v___x_4483_;
goto v___jp_4415_;
}
}
}
}
else
{
lean_object* v_scope_4504_; lean_object* v_s_4505_; 
lean_dec(v___x_4472_);
lean_dec(v_a_4471_);
lean_dec(v_a_4411_);
v_scope_4504_ = lean_ctor_get(v_cfg_4392_, 0);
v_s_4505_ = lean_ctor_get(v_scope_4504_, 0);
lean_inc_ref(v_s_4505_);
v___y_4429_ = v_s_4505_;
goto v___jp_4428_;
}
}
}
v___jp_4428_:
{
lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; uint8_t v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v_numSuccesses_4437_; lean_object* v___x_4439_; uint8_t v_isShared_4440_; uint8_t v_isSharedCheck_4445_; 
v___x_4430_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__0));
v___x_4431_ = lean_string_append(v___y_4429_, v___x_4430_);
v___x_4432_ = l_String_Slice_toString(v___x_4422_);
lean_dec_ref(v___x_4422_);
v___x_4433_ = lean_string_append(v___x_4431_, v___x_4432_);
lean_dec_ref(v___x_4432_);
v___x_4434_ = 3;
v___x_4435_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4435_, 0, v___x_4433_);
lean_ctor_set_uint8(v___x_4435_, sizeof(void*)*1, v___x_4434_);
lean_inc_ref(v_a_4391_);
v___x_4436_ = lean_apply_2(v_a_4391_, v___x_4435_, lean_box(0));
v_numSuccesses_4437_ = lean_ctor_get(v_s_4395_, 0);
v_isSharedCheck_4445_ = !lean_is_exclusive(v_s_4395_);
if (v_isSharedCheck_4445_ == 0)
{
v___x_4439_ = v_s_4395_;
v_isShared_4440_ = v_isSharedCheck_4445_;
goto v_resetjp_4438_;
}
else
{
lean_inc(v_numSuccesses_4437_);
lean_dec(v_s_4395_);
v___x_4439_ = lean_box(0);
v_isShared_4440_ = v_isSharedCheck_4445_;
goto v_resetjp_4438_;
}
v_resetjp_4438_:
{
lean_object* v___x_4442_; 
if (v_isShared_4440_ == 0)
{
v___x_4442_ = v___x_4439_;
goto v_reusejp_4441_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v_numSuccesses_4437_);
v___x_4442_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4441_;
}
v_reusejp_4441_:
{
lean_ctor_set_uint8(v___x_4442_, sizeof(void*)*1, v___x_4427_);
v_s_4395_ = v___x_4442_;
goto _start;
}
}
}
v___jp_4446_:
{
lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; uint8_t v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v_numSuccesses_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4465_; 
v___x_4448_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__1));
v___x_4449_ = lean_string_append(v___x_4448_, v_a_4447_);
lean_dec_ref(v_a_4447_);
v___x_4450_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__2));
v___x_4451_ = lean_string_append(v___x_4449_, v___x_4450_);
v___x_4452_ = l_String_Slice_toString(v___x_4422_);
lean_dec_ref(v___x_4422_);
v___x_4453_ = lean_string_append(v___x_4451_, v___x_4452_);
lean_dec_ref(v___x_4452_);
v___x_4454_ = 3;
v___x_4455_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4455_, 0, v___x_4453_);
lean_ctor_set_uint8(v___x_4455_, sizeof(void*)*1, v___x_4454_);
lean_inc_ref(v_a_4391_);
v___x_4456_ = lean_apply_2(v_a_4391_, v___x_4455_, lean_box(0));
v_numSuccesses_4457_ = lean_ctor_get(v_s_4395_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v_s_4395_);
if (v_isSharedCheck_4465_ == 0)
{
v___x_4459_ = v_s_4395_;
v_isShared_4460_ = v_isSharedCheck_4465_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_numSuccesses_4457_);
lean_dec(v_s_4395_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4465_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4462_; 
if (v_isShared_4460_ == 0)
{
v___x_4462_ = v___x_4459_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4464_; 
v_reuseFailAlloc_4464_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4464_, 0, v_numSuccesses_4457_);
v___x_4462_ = v_reuseFailAlloc_4464_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
lean_ctor_set_uint8(v___x_4462_, sizeof(void*)*1, v___x_4427_);
v_s_4395_ = v___x_4462_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_4507_; 
lean_dec_ref(v___x_4422_);
lean_dec(v_a_4411_);
lean_dec(v_hOut_4394_);
lean_dec_ref(v_cfg_4392_);
lean_dec_ref(v_a_4391_);
if (v_isShared_4414_ == 0)
{
lean_ctor_set(v___x_4413_, 0, v_s_4395_);
v___x_4507_ = v___x_4413_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_s_4395_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
return v___x_4507_;
}
}
v___jp_4415_:
{
lean_object* v___x_4418_; 
lean_inc_ref(v_a_4391_);
v___x_4418_ = lean_apply_4(v___y_4416_, v___y_4417_, v_s_4395_, v_a_4391_, lean_box(0));
v___y_4398_ = v___x_4418_;
goto v___jp_4397_;
}
}
}
else
{
lean_object* v_a_4510_; lean_object* v___x_4512_; uint8_t v_isShared_4513_; uint8_t v_isSharedCheck_4522_; 
lean_dec_ref(v_s_4395_);
lean_dec(v_hOut_4394_);
lean_dec_ref(v_cfg_4392_);
v_a_4510_ = lean_ctor_get(v___x_4410_, 0);
v_isSharedCheck_4522_ = !lean_is_exclusive(v___x_4410_);
if (v_isSharedCheck_4522_ == 0)
{
v___x_4512_ = v___x_4410_;
v_isShared_4513_ = v_isSharedCheck_4522_;
goto v_resetjp_4511_;
}
else
{
lean_inc(v_a_4510_);
lean_dec(v___x_4410_);
v___x_4512_ = lean_box(0);
v_isShared_4513_ = v_isSharedCheck_4522_;
goto v_resetjp_4511_;
}
v_resetjp_4511_:
{
lean_object* v___x_4514_; uint8_t v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4520_; 
v___x_4514_ = lean_io_error_to_string(v_a_4510_);
v___x_4515_ = 3;
v___x_4516_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4516_, 0, v___x_4514_);
lean_ctor_set_uint8(v___x_4516_, sizeof(void*)*1, v___x_4515_);
v___x_4517_ = lean_apply_2(v_a_4391_, v___x_4516_, lean_box(0));
v___x_4518_ = lean_box(0);
if (v_isShared_4513_ == 0)
{
lean_ctor_set(v___x_4512_, 0, v___x_4518_);
v___x_4520_ = v___x_4512_;
goto v_reusejp_4519_;
}
else
{
lean_object* v_reuseFailAlloc_4521_; 
v_reuseFailAlloc_4521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4521_, 0, v___x_4518_);
v___x_4520_ = v_reuseFailAlloc_4521_;
goto v_reusejp_4519_;
}
v_reusejp_4519_:
{
return v___x_4520_;
}
}
}
v___jp_4397_:
{
if (lean_obj_tag(v___y_4398_) == 0)
{
lean_object* v_a_4399_; lean_object* v_snd_4400_; 
v_a_4399_ = lean_ctor_get(v___y_4398_, 0);
lean_inc(v_a_4399_);
lean_dec_ref(v___y_4398_);
v_snd_4400_ = lean_ctor_get(v_a_4399_, 1);
lean_inc(v_snd_4400_);
lean_dec(v_a_4399_);
v_s_4395_ = v_snd_4400_;
goto _start;
}
else
{
lean_object* v_a_4402_; lean_object* v___x_4404_; uint8_t v_isShared_4405_; uint8_t v_isSharedCheck_4409_; 
lean_dec(v_hOut_4394_);
lean_dec_ref(v_cfg_4392_);
lean_dec_ref(v_a_4391_);
v_a_4402_ = lean_ctor_get(v___y_4398_, 0);
v_isSharedCheck_4409_ = !lean_is_exclusive(v___y_4398_);
if (v_isSharedCheck_4409_ == 0)
{
v___x_4404_ = v___y_4398_;
v_isShared_4405_ = v_isSharedCheck_4409_;
goto v_resetjp_4403_;
}
else
{
lean_inc(v_a_4402_);
lean_dec(v___y_4398_);
v___x_4404_ = lean_box(0);
v_isShared_4405_ = v_isSharedCheck_4409_;
goto v_resetjp_4403_;
}
v_resetjp_4403_:
{
lean_object* v___x_4407_; 
if (v_isShared_4405_ == 0)
{
v___x_4407_ = v___x_4404_;
goto v_reusejp_4406_;
}
else
{
lean_object* v_reuseFailAlloc_4408_; 
v_reuseFailAlloc_4408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4408_, 0, v_a_4402_);
v___x_4407_ = v_reuseFailAlloc_4408_;
goto v_reusejp_4406_;
}
v_reusejp_4406_:
{
return v___x_4407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___boxed(lean_object* v_a_4523_, lean_object* v_cfg_4524_, lean_object* v_h_4525_, lean_object* v_hOut_4526_, lean_object* v_s_4527_, lean_object* v_a_4528_){
_start:
{
lean_object* v_res_4529_; 
v_res_4529_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3(v_a_4523_, v_cfg_4524_, v_h_4525_, v_hOut_4526_, v_s_4527_);
lean_dec(v_h_4525_);
return v_res_4529_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5___redArg(lean_object* v_a_4530_, lean_object* v_cfg_4531_, lean_object* v_descr_4532_, lean_object* v_path_4533_, lean_object* v_url_4534_, uint8_t v___x_4535_, uint8_t v___x_4536_, lean_object* v___y_4537_){
_start:
{
uint64_t v___y_4540_; lean_object* v___y_4580_; lean_object* v___y_4635_; uint8_t v_kind_4664_; 
v_kind_4664_ = lean_ctor_get_uint8(v_cfg_4531_, sizeof(void*)*3);
if (v_kind_4664_ == 0)
{
lean_object* v_scope_4665_; lean_object* v_s_4666_; 
v_scope_4665_ = lean_ctor_get(v_cfg_4531_, 0);
lean_inc_ref(v_scope_4665_);
lean_dec_ref(v_cfg_4531_);
v_s_4666_ = lean_ctor_get(v_scope_4665_, 0);
lean_inc_ref(v_s_4666_);
lean_dec_ref(v_scope_4665_);
v___y_4580_ = v_s_4666_;
goto v___jp_4579_;
}
else
{
lean_object* v_scope_4667_; lean_object* v_s_4668_; 
v_scope_4667_ = lean_ctor_get(v_cfg_4531_, 0);
lean_inc_ref(v_scope_4667_);
lean_dec_ref(v_cfg_4531_);
v_s_4668_ = lean_ctor_get(v_scope_4667_, 0);
lean_inc_ref(v_s_4668_);
lean_dec_ref(v_scope_4667_);
v___y_4635_ = v_s_4668_;
goto v___jp_4634_;
}
v___jp_4539_:
{
lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; uint8_t v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
v___x_4541_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
lean_inc_ref(v_path_4533_);
v___x_4542_ = lean_string_append(v_path_4533_, v___x_4541_);
v___x_4543_ = l_Lake_Hash_hex(v___y_4540_);
v___x_4544_ = lean_string_append(v___x_4542_, v___x_4543_);
lean_dec_ref(v___x_4543_);
v___x_4545_ = 3;
v___x_4546_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4546_, 0, v___x_4544_);
lean_ctor_set_uint8(v___x_4546_, sizeof(void*)*1, v___x_4545_);
lean_inc_ref(v_a_4530_);
v___x_4547_ = lean_apply_2(v_a_4530_, v___x_4546_, lean_box(0));
v___x_4548_ = lean_io_remove_file(v_path_4533_);
lean_dec_ref(v_path_4533_);
if (lean_obj_tag(v___x_4548_) == 0)
{
lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4565_; 
lean_dec_ref(v_a_4530_);
v_isSharedCheck_4565_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4565_ == 0)
{
lean_object* v_unused_4566_; 
v_unused_4566_ = lean_ctor_get(v___x_4548_, 0);
lean_dec(v_unused_4566_);
v___x_4550_ = v___x_4548_;
v_isShared_4551_ = v_isSharedCheck_4565_;
goto v_resetjp_4549_;
}
else
{
lean_dec(v___x_4548_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4565_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v_numSuccesses_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4564_; 
v_numSuccesses_4552_ = lean_ctor_get(v___y_4537_, 0);
v_isSharedCheck_4564_ = !lean_is_exclusive(v___y_4537_);
if (v_isSharedCheck_4564_ == 0)
{
v___x_4554_ = v___y_4537_;
v_isShared_4555_ = v_isSharedCheck_4564_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_numSuccesses_4552_);
lean_dec(v___y_4537_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4564_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
lean_object* v___x_4556_; lean_object* v___x_4558_; 
v___x_4556_ = lean_box(0);
if (v_isShared_4555_ == 0)
{
v___x_4558_ = v___x_4554_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4563_; 
v_reuseFailAlloc_4563_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4563_, 0, v_numSuccesses_4552_);
v___x_4558_ = v_reuseFailAlloc_4563_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
lean_object* v___x_4559_; lean_object* v___x_4561_; 
lean_ctor_set_uint8(v___x_4558_, sizeof(void*)*1, v___x_4535_);
v___x_4559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4556_);
lean_ctor_set(v___x_4559_, 1, v___x_4558_);
if (v_isShared_4551_ == 0)
{
lean_ctor_set(v___x_4550_, 0, v___x_4559_);
v___x_4561_ = v___x_4550_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v___x_4559_);
v___x_4561_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
return v___x_4561_;
}
}
}
}
}
else
{
lean_object* v_a_4567_; lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4578_; 
lean_dec_ref(v___y_4537_);
v_a_4567_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4578_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4578_ == 0)
{
v___x_4569_ = v___x_4548_;
v_isShared_4570_ = v_isSharedCheck_4578_;
goto v_resetjp_4568_;
}
else
{
lean_inc(v_a_4567_);
lean_dec(v___x_4548_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4578_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4576_; 
v___x_4571_ = lean_io_error_to_string(v_a_4567_);
v___x_4572_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4572_, 0, v___x_4571_);
lean_ctor_set_uint8(v___x_4572_, sizeof(void*)*1, v___x_4545_);
v___x_4573_ = lean_apply_2(v_a_4530_, v___x_4572_, lean_box(0));
v___x_4574_ = lean_box(0);
if (v_isShared_4570_ == 0)
{
lean_ctor_set(v___x_4569_, 0, v___x_4574_);
v___x_4576_ = v___x_4569_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4577_; 
v_reuseFailAlloc_4577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4577_, 0, v___x_4574_);
v___x_4576_ = v_reuseFailAlloc_4577_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
return v___x_4576_;
}
}
}
}
v___jp_4579_:
{
uint64_t v_hash_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; uint8_t v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; 
v_hash_4581_ = lean_ctor_get_uint64(v_descr_4532_, sizeof(void*)*1);
v___x_4582_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__0));
v___x_4583_ = lean_string_append(v___y_4580_, v___x_4582_);
v___x_4584_ = l_Lake_Hash_hex(v_hash_4581_);
v___x_4585_ = lean_string_append(v___x_4583_, v___x_4584_);
lean_dec_ref(v___x_4584_);
v___x_4586_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_4587_ = lean_string_append(v___x_4585_, v___x_4586_);
v___x_4588_ = lean_string_append(v___x_4587_, v_path_4533_);
v___x_4589_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_4590_ = lean_string_append(v___x_4588_, v___x_4589_);
v___x_4591_ = lean_string_append(v___x_4590_, v_url_4534_);
v___x_4592_ = 1;
v___x_4593_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4593_, 0, v___x_4591_);
lean_ctor_set_uint8(v___x_4593_, sizeof(void*)*1, v___x_4592_);
lean_inc_ref(v_a_4530_);
v___x_4594_ = lean_apply_2(v_a_4530_, v___x_4593_, lean_box(0));
v___x_4595_ = l_Lake_computeBinFileHash(v_path_4533_);
if (lean_obj_tag(v___x_4595_) == 0)
{
lean_object* v_a_4596_; lean_object* v___x_4598_; uint8_t v_isShared_4599_; uint8_t v_isSharedCheck_4620_; 
v_a_4596_ = lean_ctor_get(v___x_4595_, 0);
v_isSharedCheck_4620_ = !lean_is_exclusive(v___x_4595_);
if (v_isSharedCheck_4620_ == 0)
{
v___x_4598_ = v___x_4595_;
v_isShared_4599_ = v_isSharedCheck_4620_;
goto v_resetjp_4597_;
}
else
{
lean_inc(v_a_4596_);
lean_dec(v___x_4595_);
v___x_4598_ = lean_box(0);
v_isShared_4599_ = v_isSharedCheck_4620_;
goto v_resetjp_4597_;
}
v_resetjp_4597_:
{
uint64_t v___x_4600_; uint8_t v___x_4601_; 
v___x_4600_ = lean_unbox_uint64(v_a_4596_);
v___x_4601_ = lean_uint64_dec_eq(v___x_4600_, v_hash_4581_);
if (v___x_4601_ == 0)
{
uint64_t v___x_4602_; 
lean_del_object(v___x_4598_);
v___x_4602_ = lean_unbox_uint64(v_a_4596_);
lean_dec(v_a_4596_);
v___y_4540_ = v___x_4602_;
goto v___jp_4539_;
}
else
{
if (v___x_4536_ == 0)
{
uint8_t v_didError_4603_; lean_object* v_numSuccesses_4604_; lean_object* v___x_4606_; uint8_t v_isShared_4607_; uint8_t v_isSharedCheck_4618_; 
lean_dec(v_a_4596_);
lean_dec_ref(v_path_4533_);
lean_dec_ref(v_a_4530_);
v_didError_4603_ = lean_ctor_get_uint8(v___y_4537_, sizeof(void*)*1);
v_numSuccesses_4604_ = lean_ctor_get(v___y_4537_, 0);
v_isSharedCheck_4618_ = !lean_is_exclusive(v___y_4537_);
if (v_isSharedCheck_4618_ == 0)
{
v___x_4606_ = v___y_4537_;
v_isShared_4607_ = v_isSharedCheck_4618_;
goto v_resetjp_4605_;
}
else
{
lean_inc(v_numSuccesses_4604_);
lean_dec(v___y_4537_);
v___x_4606_ = lean_box(0);
v_isShared_4607_ = v_isSharedCheck_4618_;
goto v_resetjp_4605_;
}
v_resetjp_4605_:
{
lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4612_; 
v___x_4608_ = lean_box(0);
v___x_4609_ = lean_unsigned_to_nat(1u);
v___x_4610_ = lean_nat_add(v_numSuccesses_4604_, v___x_4609_);
lean_dec(v_numSuccesses_4604_);
if (v_isShared_4607_ == 0)
{
lean_ctor_set(v___x_4606_, 0, v___x_4610_);
v___x_4612_ = v___x_4606_;
goto v_reusejp_4611_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v___x_4610_);
lean_ctor_set_uint8(v_reuseFailAlloc_4617_, sizeof(void*)*1, v_didError_4603_);
v___x_4612_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4611_;
}
v_reusejp_4611_:
{
lean_object* v___x_4613_; lean_object* v___x_4615_; 
v___x_4613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4613_, 0, v___x_4608_);
lean_ctor_set(v___x_4613_, 1, v___x_4612_);
if (v_isShared_4599_ == 0)
{
lean_ctor_set(v___x_4598_, 0, v___x_4613_);
v___x_4615_ = v___x_4598_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v___x_4613_);
v___x_4615_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
return v___x_4615_;
}
}
}
}
else
{
uint64_t v___x_4619_; 
lean_del_object(v___x_4598_);
v___x_4619_ = lean_unbox_uint64(v_a_4596_);
lean_dec(v_a_4596_);
v___y_4540_ = v___x_4619_;
goto v___jp_4539_;
}
}
}
}
else
{
lean_object* v_a_4621_; lean_object* v___x_4623_; uint8_t v_isShared_4624_; uint8_t v_isSharedCheck_4633_; 
lean_dec_ref(v___y_4537_);
lean_dec_ref(v_path_4533_);
v_a_4621_ = lean_ctor_get(v___x_4595_, 0);
v_isSharedCheck_4633_ = !lean_is_exclusive(v___x_4595_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4623_ = v___x_4595_;
v_isShared_4624_ = v_isSharedCheck_4633_;
goto v_resetjp_4622_;
}
else
{
lean_inc(v_a_4621_);
lean_dec(v___x_4595_);
v___x_4623_ = lean_box(0);
v_isShared_4624_ = v_isSharedCheck_4633_;
goto v_resetjp_4622_;
}
v_resetjp_4622_:
{
lean_object* v___x_4625_; uint8_t v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4631_; 
v___x_4625_ = lean_io_error_to_string(v_a_4621_);
v___x_4626_ = 3;
v___x_4627_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4627_, 0, v___x_4625_);
lean_ctor_set_uint8(v___x_4627_, sizeof(void*)*1, v___x_4626_);
v___x_4628_ = lean_apply_2(v_a_4530_, v___x_4627_, lean_box(0));
v___x_4629_ = lean_box(0);
if (v_isShared_4624_ == 0)
{
lean_ctor_set(v___x_4623_, 0, v___x_4629_);
v___x_4631_ = v___x_4623_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v___x_4629_);
v___x_4631_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
return v___x_4631_;
}
}
}
}
v___jp_4634_:
{
uint64_t v_hash_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; uint8_t v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; uint8_t v_didError_4650_; lean_object* v_numSuccesses_4651_; lean_object* v___x_4653_; uint8_t v_isShared_4654_; uint8_t v_isSharedCheck_4663_; 
v_hash_4636_ = lean_ctor_get_uint64(v_descr_4532_, sizeof(void*)*1);
v___x_4637_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___redArg___closed__1));
v___x_4638_ = lean_string_append(v___y_4635_, v___x_4637_);
v___x_4639_ = l_Lake_Hash_hex(v_hash_4636_);
v___x_4640_ = lean_string_append(v___x_4638_, v___x_4639_);
lean_dec_ref(v___x_4639_);
v___x_4641_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_4642_ = lean_string_append(v___x_4640_, v___x_4641_);
v___x_4643_ = lean_string_append(v___x_4642_, v_path_4533_);
lean_dec_ref(v_path_4533_);
v___x_4644_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_4645_ = lean_string_append(v___x_4643_, v___x_4644_);
v___x_4646_ = lean_string_append(v___x_4645_, v_url_4534_);
v___x_4647_ = 1;
v___x_4648_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4648_, 0, v___x_4646_);
lean_ctor_set_uint8(v___x_4648_, sizeof(void*)*1, v___x_4647_);
v___x_4649_ = lean_apply_2(v_a_4530_, v___x_4648_, lean_box(0));
v_didError_4650_ = lean_ctor_get_uint8(v___y_4537_, sizeof(void*)*1);
v_numSuccesses_4651_ = lean_ctor_get(v___y_4537_, 0);
v_isSharedCheck_4663_ = !lean_is_exclusive(v___y_4537_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4653_ = v___y_4537_;
v_isShared_4654_ = v_isSharedCheck_4663_;
goto v_resetjp_4652_;
}
else
{
lean_inc(v_numSuccesses_4651_);
lean_dec(v___y_4537_);
v___x_4653_ = lean_box(0);
v_isShared_4654_ = v_isSharedCheck_4663_;
goto v_resetjp_4652_;
}
v_resetjp_4652_:
{
lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4659_; 
v___x_4655_ = lean_box(0);
v___x_4656_ = lean_unsigned_to_nat(1u);
v___x_4657_ = lean_nat_add(v_numSuccesses_4651_, v___x_4656_);
lean_dec(v_numSuccesses_4651_);
if (v_isShared_4654_ == 0)
{
lean_ctor_set(v___x_4653_, 0, v___x_4657_);
v___x_4659_ = v___x_4653_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v___x_4657_);
lean_ctor_set_uint8(v_reuseFailAlloc_4662_, sizeof(void*)*1, v_didError_4650_);
v___x_4659_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4658_;
}
v_reusejp_4658_:
{
lean_object* v___x_4660_; lean_object* v___x_4661_; 
v___x_4660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4660_, 0, v___x_4655_);
lean_ctor_set(v___x_4660_, 1, v___x_4659_);
v___x_4661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4661_, 0, v___x_4660_);
return v___x_4661_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5___redArg___boxed(lean_object* v_a_4669_, lean_object* v_cfg_4670_, lean_object* v_descr_4671_, lean_object* v_path_4672_, lean_object* v_url_4673_, lean_object* v___x_4674_, lean_object* v___x_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_){
_start:
{
uint8_t v___x_29951__boxed_4678_; uint8_t v___x_29952__boxed_4679_; lean_object* v_res_4680_; 
v___x_29951__boxed_4678_ = lean_unbox(v___x_4674_);
v___x_29952__boxed_4679_ = lean_unbox(v___x_4675_);
v_res_4680_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5___redArg(v_a_4669_, v_cfg_4670_, v_descr_4671_, v_path_4672_, v_url_4673_, v___x_29951__boxed_4678_, v___x_29952__boxed_4679_, v___y_4676_);
lean_dec_ref(v_url_4673_);
lean_dec_ref(v_descr_4671_);
return v_res_4680_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5(lean_object* v_a_4681_, lean_object* v_cfg_4682_, lean_object* v_descr_4683_, lean_object* v_path_4684_, lean_object* v_url_4685_, uint8_t v___x_4686_, uint8_t v___x_4687_, lean_object* v_00___4688_, lean_object* v___y_4689_){
_start:
{
lean_object* v___x_4691_; 
v___x_4691_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5___redArg(v_a_4681_, v_cfg_4682_, v_descr_4683_, v_path_4684_, v_url_4685_, v___x_4686_, v___x_4687_, v___y_4689_);
return v___x_4691_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5___boxed(lean_object* v_a_4692_, lean_object* v_cfg_4693_, lean_object* v_descr_4694_, lean_object* v_path_4695_, lean_object* v_url_4696_, lean_object* v___x_4697_, lean_object* v___x_4698_, lean_object* v_00___4699_, lean_object* v___y_4700_, lean_object* v___y_4701_){
_start:
{
uint8_t v___x_30217__boxed_4702_; uint8_t v___x_30218__boxed_4703_; lean_object* v_res_4704_; 
v___x_30217__boxed_4702_ = lean_unbox(v___x_4697_);
v___x_30218__boxed_4703_ = lean_unbox(v___x_4698_);
v_res_4704_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5(v_a_4692_, v_cfg_4693_, v_descr_4694_, v_path_4695_, v_url_4696_, v___x_30217__boxed_4702_, v___x_30218__boxed_4703_, v_00___4699_, v___y_4700_);
lean_dec_ref(v_url_4696_);
lean_dec_ref(v_descr_4694_);
return v_res_4704_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__4(lean_object* v_a_4705_, lean_object* v_cfg_4706_, lean_object* v_hOut_4707_, lean_object* v_val_4708_, lean_object* v_a_4709_, lean_object* v_a_4710_, uint8_t v___x_4711_, lean_object* v_code_x3f_4712_, lean_object* v___y_4713_){
_start:
{
lean_object* v___x_4715_; 
v___x_4715_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0_spec__0(v_a_4705_, v_cfg_4706_, v_hOut_4707_, v_val_4708_, v_code_x3f_4712_, v_a_4709_, v_a_4710_);
if (lean_obj_tag(v___x_4715_) == 0)
{
lean_object* v___x_4717_; uint8_t v_isShared_4718_; uint8_t v_isSharedCheck_4732_; 
v_isSharedCheck_4732_ = !lean_is_exclusive(v___x_4715_);
if (v_isSharedCheck_4732_ == 0)
{
lean_object* v_unused_4733_; 
v_unused_4733_ = lean_ctor_get(v___x_4715_, 0);
lean_dec(v_unused_4733_);
v___x_4717_ = v___x_4715_;
v_isShared_4718_ = v_isSharedCheck_4732_;
goto v_resetjp_4716_;
}
else
{
lean_dec(v___x_4715_);
v___x_4717_ = lean_box(0);
v_isShared_4718_ = v_isSharedCheck_4732_;
goto v_resetjp_4716_;
}
v_resetjp_4716_:
{
lean_object* v_numSuccesses_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4731_; 
v_numSuccesses_4719_ = lean_ctor_get(v___y_4713_, 0);
v_isSharedCheck_4731_ = !lean_is_exclusive(v___y_4713_);
if (v_isSharedCheck_4731_ == 0)
{
v___x_4721_ = v___y_4713_;
v_isShared_4722_ = v_isSharedCheck_4731_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_numSuccesses_4719_);
lean_dec(v___y_4713_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4731_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4723_; lean_object* v___x_4725_; 
v___x_4723_ = lean_box(0);
if (v_isShared_4722_ == 0)
{
v___x_4725_ = v___x_4721_;
goto v_reusejp_4724_;
}
else
{
lean_object* v_reuseFailAlloc_4730_; 
v_reuseFailAlloc_4730_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4730_, 0, v_numSuccesses_4719_);
v___x_4725_ = v_reuseFailAlloc_4730_;
goto v_reusejp_4724_;
}
v_reusejp_4724_:
{
lean_object* v___x_4726_; lean_object* v___x_4728_; 
lean_ctor_set_uint8(v___x_4725_, sizeof(void*)*1, v___x_4711_);
v___x_4726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4723_);
lean_ctor_set(v___x_4726_, 1, v___x_4725_);
if (v_isShared_4718_ == 0)
{
lean_ctor_set(v___x_4717_, 0, v___x_4726_);
v___x_4728_ = v___x_4717_;
goto v_reusejp_4727_;
}
else
{
lean_object* v_reuseFailAlloc_4729_; 
v_reuseFailAlloc_4729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4729_, 0, v___x_4726_);
v___x_4728_ = v_reuseFailAlloc_4729_;
goto v_reusejp_4727_;
}
v_reusejp_4727_:
{
return v___x_4728_;
}
}
}
}
}
else
{
lean_object* v_a_4734_; lean_object* v___x_4736_; uint8_t v_isShared_4737_; uint8_t v_isSharedCheck_4741_; 
lean_dec_ref(v___y_4713_);
v_a_4734_ = lean_ctor_get(v___x_4715_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4715_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4736_ = v___x_4715_;
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
else
{
lean_inc(v_a_4734_);
lean_dec(v___x_4715_);
v___x_4736_ = lean_box(0);
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
v_resetjp_4735_:
{
lean_object* v___x_4739_; 
if (v_isShared_4737_ == 0)
{
v___x_4739_ = v___x_4736_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v_a_4734_);
v___x_4739_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
return v___x_4739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__4___boxed(lean_object* v_a_4742_, lean_object* v_cfg_4743_, lean_object* v_hOut_4744_, lean_object* v_val_4745_, lean_object* v_a_4746_, lean_object* v_a_4747_, lean_object* v___x_4748_, lean_object* v_code_x3f_4749_, lean_object* v___y_4750_, lean_object* v___y_4751_){
_start:
{
uint8_t v___x_30243__boxed_4752_; lean_object* v_res_4753_; 
v___x_30243__boxed_4752_ = lean_unbox(v___x_4748_);
v_res_4753_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__4(v_a_4742_, v_cfg_4743_, v_hOut_4744_, v_val_4745_, v_a_4746_, v_a_4747_, v___x_30243__boxed_4752_, v_code_x3f_4749_, v___y_4750_);
lean_dec(v_a_4746_);
lean_dec_ref(v_val_4745_);
lean_dec(v_hOut_4744_);
return v_res_4753_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(lean_object* v_cfg_4754_, lean_object* v_h_4755_, lean_object* v_hOut_4756_, lean_object* v_s_4757_, lean_object* v_a_4758_){
_start:
{
lean_object* v___y_4761_; lean_object* v___x_4773_; 
v___x_4773_ = lean_io_prim_handle_get_line(v_h_4755_);
if (lean_obj_tag(v___x_4773_) == 0)
{
lean_object* v_a_4774_; lean_object* v___x_4776_; uint8_t v_isShared_4777_; uint8_t v_isSharedCheck_4867_; 
v_a_4774_ = lean_ctor_get(v___x_4773_, 0);
v_isSharedCheck_4867_ = !lean_is_exclusive(v___x_4773_);
if (v_isSharedCheck_4867_ == 0)
{
v___x_4776_ = v___x_4773_;
v_isShared_4777_ = v_isSharedCheck_4867_;
goto v_resetjp_4775_;
}
else
{
lean_inc(v_a_4774_);
lean_dec(v___x_4773_);
v___x_4776_ = lean_box(0);
v_isShared_4777_ = v_isSharedCheck_4867_;
goto v_resetjp_4775_;
}
v_resetjp_4775_:
{
lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v_startInclusive_4782_; lean_object* v_endExclusive_4783_; lean_object* v___x_4784_; uint8_t v___x_4785_; 
v___x_4778_ = lean_unsigned_to_nat(0u);
v___x_4779_ = lean_string_utf8_byte_size(v_a_4774_);
lean_inc(v_a_4774_);
v___x_4780_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4780_, 0, v_a_4774_);
lean_ctor_set(v___x_4780_, 1, v___x_4778_);
lean_ctor_set(v___x_4780_, 2, v___x_4779_);
v___x_4781_ = l_String_Slice_trimAscii(v___x_4780_);
v_startInclusive_4782_ = lean_ctor_get(v___x_4781_, 1);
lean_inc(v_startInclusive_4782_);
v_endExclusive_4783_ = lean_ctor_get(v___x_4781_, 2);
lean_inc(v_endExclusive_4783_);
v___x_4784_ = lean_nat_sub(v_endExclusive_4783_, v_startInclusive_4782_);
lean_dec(v_startInclusive_4782_);
lean_dec(v_endExclusive_4783_);
v___x_4785_ = lean_nat_dec_eq(v___x_4784_, v___x_4778_);
lean_dec(v___x_4784_);
if (v___x_4785_ == 0)
{
uint8_t v___x_4786_; lean_object* v___y_4788_; lean_object* v_a_4806_; lean_object* v___x_4825_; 
lean_del_object(v___x_4776_);
v___x_4786_ = 1;
lean_inc(v_a_4774_);
v___x_4825_ = l_Lean_Json_parse(v_a_4774_);
if (lean_obj_tag(v___x_4825_) == 0)
{
lean_object* v_a_4826_; 
lean_dec(v_a_4774_);
v_a_4826_ = lean_ctor_get(v___x_4825_, 0);
lean_inc(v_a_4826_);
lean_dec_ref(v___x_4825_);
v_a_4806_ = v_a_4826_;
goto v___jp_4805_;
}
else
{
lean_object* v_a_4827_; lean_object* v___x_4828_; 
v_a_4827_ = lean_ctor_get(v___x_4825_, 0);
lean_inc(v_a_4827_);
lean_dec_ref(v___x_4825_);
v___x_4828_ = l_Lean_Json_getObj_x3f(v_a_4827_);
if (lean_obj_tag(v___x_4828_) == 0)
{
lean_object* v_a_4829_; 
lean_dec(v_a_4774_);
v_a_4829_ = lean_ctor_get(v___x_4828_, 0);
lean_inc(v_a_4829_);
lean_dec_ref(v___x_4828_);
v_a_4806_ = v_a_4829_;
goto v___jp_4805_;
}
else
{
lean_object* v_a_4830_; lean_object* v___x_4831_; 
v_a_4830_ = lean_ctor_get(v___x_4828_, 0);
lean_inc(v_a_4830_);
lean_dec_ref(v___x_4828_);
v___x_4831_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_4754_, v_a_4830_);
if (lean_obj_tag(v___x_4831_) == 1)
{
lean_object* v_val_4832_; lean_object* v___y_4834_; lean_object* v_url_4836_; lean_object* v_path_4837_; lean_object* v_descr_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; 
lean_dec_ref(v___x_4781_);
v_val_4832_ = lean_ctor_get(v___x_4831_, 0);
lean_inc(v_val_4832_);
lean_dec_ref(v___x_4831_);
v_url_4836_ = lean_ctor_get(v_val_4832_, 0);
v_path_4837_ = lean_ctor_get(v_val_4832_, 1);
v_descr_4838_ = lean_ctor_get(v_val_4832_, 2);
v___x_4839_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_4840_ = l_Lake_JsonObject_getJson_x3f(v_a_4830_, v___x_4839_);
if (lean_obj_tag(v___x_4840_) == 0)
{
lean_object* v___x_4841_; 
v___x_4841_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__4));
v___y_4834_ = v___x_4841_;
goto v___jp_4833_;
}
else
{
lean_object* v_val_4842_; lean_object* v___x_4843_; 
v_val_4842_ = lean_ctor_get(v___x_4840_, 0);
lean_inc(v_val_4842_);
lean_dec_ref(v___x_4840_);
v___x_4843_ = l_Lean_Json_getNat_x3f(v_val_4842_);
if (lean_obj_tag(v___x_4843_) == 0)
{
lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4853_; 
v_a_4844_ = lean_ctor_get(v___x_4843_, 0);
v_isSharedCheck_4853_ = !lean_is_exclusive(v___x_4843_);
if (v_isSharedCheck_4853_ == 0)
{
v___x_4846_ = v___x_4843_;
v_isShared_4847_ = v_isSharedCheck_4853_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4843_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4853_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4851_; 
v___x_4848_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_4849_ = lean_string_append(v___x_4848_, v_a_4844_);
lean_dec(v_a_4844_);
if (v_isShared_4847_ == 0)
{
lean_ctor_set(v___x_4846_, 0, v___x_4849_);
v___x_4851_ = v___x_4846_;
goto v_reusejp_4850_;
}
else
{
lean_object* v_reuseFailAlloc_4852_; 
v_reuseFailAlloc_4852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4852_, 0, v___x_4849_);
v___x_4851_ = v_reuseFailAlloc_4852_;
goto v_reusejp_4850_;
}
v_reusejp_4850_:
{
v___y_4834_ = v___x_4851_;
goto v___jp_4833_;
}
}
}
else
{
if (lean_obj_tag(v___x_4843_) == 1)
{
lean_object* v_a_4854_; lean_object* v___x_4855_; uint8_t v___x_4856_; 
v_a_4854_ = lean_ctor_get(v___x_4843_, 0);
lean_inc(v_a_4854_);
v___x_4855_ = lean_unsigned_to_nat(200u);
v___x_4856_ = lean_nat_dec_eq(v_a_4854_, v___x_4855_);
if (v___x_4856_ == 0)
{
lean_object* v___x_4857_; uint8_t v___x_4858_; 
v___x_4857_ = lean_unsigned_to_nat(201u);
v___x_4858_ = lean_nat_dec_eq(v_a_4854_, v___x_4857_);
lean_dec(v_a_4854_);
if (v___x_4858_ == 0)
{
lean_object* v___x_4859_; 
lean_inc_ref(v_cfg_4754_);
lean_inc_ref(v_a_4758_);
v___x_4859_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__4(v_a_4758_, v_cfg_4754_, v_hOut_4756_, v_val_4832_, v_a_4830_, v_a_4774_, v___x_4786_, v___x_4843_, v_s_4757_);
lean_dec(v_a_4830_);
lean_dec(v_val_4832_);
v___y_4761_ = v___x_4859_;
goto v___jp_4760_;
}
else
{
lean_object* v___x_4860_; 
lean_inc_ref(v_descr_4838_);
lean_inc_ref(v_path_4837_);
lean_inc_ref(v_url_4836_);
lean_dec_ref(v___x_4843_);
lean_dec(v_val_4832_);
lean_dec(v_a_4830_);
lean_dec(v_a_4774_);
lean_inc_ref(v_cfg_4754_);
lean_inc_ref(v_a_4758_);
v___x_4860_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5___redArg(v_a_4758_, v_cfg_4754_, v_descr_4838_, v_path_4837_, v_url_4836_, v___x_4786_, v___x_4785_, v_s_4757_);
lean_dec_ref(v_url_4836_);
lean_dec_ref(v_descr_4838_);
v___y_4761_ = v___x_4860_;
goto v___jp_4760_;
}
}
else
{
lean_object* v___x_4861_; 
lean_inc_ref(v_descr_4838_);
lean_inc_ref(v_path_4837_);
lean_inc_ref(v_url_4836_);
lean_dec_ref(v___x_4843_);
lean_dec(v_a_4854_);
lean_dec(v_val_4832_);
lean_dec(v_a_4830_);
lean_dec(v_a_4774_);
lean_inc_ref(v_cfg_4754_);
lean_inc_ref(v_a_4758_);
v___x_4861_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__1___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__5___redArg(v_a_4758_, v_cfg_4754_, v_descr_4838_, v_path_4837_, v_url_4836_, v___x_4786_, v___x_4785_, v_s_4757_);
lean_dec_ref(v_url_4836_);
lean_dec_ref(v_descr_4838_);
v___y_4761_ = v___x_4861_;
goto v___jp_4760_;
}
}
else
{
v___y_4834_ = v___x_4843_;
goto v___jp_4833_;
}
}
}
v___jp_4833_:
{
lean_object* v___x_4835_; 
lean_inc_ref(v_cfg_4754_);
lean_inc_ref(v_a_4758_);
v___x_4835_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___elam__0___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__4(v_a_4758_, v_cfg_4754_, v_hOut_4756_, v_val_4832_, v_a_4830_, v_a_4774_, v___x_4786_, v___y_4834_, v_s_4757_);
lean_dec(v_a_4830_);
lean_dec(v_val_4832_);
v___y_4761_ = v___x_4835_;
goto v___jp_4760_;
}
}
else
{
lean_object* v_scope_4862_; lean_object* v_s_4863_; 
lean_dec(v___x_4831_);
lean_dec(v_a_4830_);
lean_dec(v_a_4774_);
v_scope_4862_ = lean_ctor_get(v_cfg_4754_, 0);
v_s_4863_ = lean_ctor_get(v_scope_4862_, 0);
lean_inc_ref(v_s_4863_);
v___y_4788_ = v_s_4863_;
goto v___jp_4787_;
}
}
}
v___jp_4787_:
{
lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; uint8_t v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v_numSuccesses_4796_; lean_object* v___x_4798_; uint8_t v_isShared_4799_; uint8_t v_isSharedCheck_4804_; 
v___x_4789_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__0));
v___x_4790_ = lean_string_append(v___y_4788_, v___x_4789_);
v___x_4791_ = l_String_Slice_toString(v___x_4781_);
lean_dec_ref(v___x_4781_);
v___x_4792_ = lean_string_append(v___x_4790_, v___x_4791_);
lean_dec_ref(v___x_4791_);
v___x_4793_ = 3;
v___x_4794_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4794_, 0, v___x_4792_);
lean_ctor_set_uint8(v___x_4794_, sizeof(void*)*1, v___x_4793_);
lean_inc_ref(v_a_4758_);
v___x_4795_ = lean_apply_2(v_a_4758_, v___x_4794_, lean_box(0));
v_numSuccesses_4796_ = lean_ctor_get(v_s_4757_, 0);
v_isSharedCheck_4804_ = !lean_is_exclusive(v_s_4757_);
if (v_isSharedCheck_4804_ == 0)
{
v___x_4798_ = v_s_4757_;
v_isShared_4799_ = v_isSharedCheck_4804_;
goto v_resetjp_4797_;
}
else
{
lean_inc(v_numSuccesses_4796_);
lean_dec(v_s_4757_);
v___x_4798_ = lean_box(0);
v_isShared_4799_ = v_isSharedCheck_4804_;
goto v_resetjp_4797_;
}
v_resetjp_4797_:
{
lean_object* v___x_4801_; 
if (v_isShared_4799_ == 0)
{
v___x_4801_ = v___x_4798_;
goto v_reusejp_4800_;
}
else
{
lean_object* v_reuseFailAlloc_4803_; 
v_reuseFailAlloc_4803_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4803_, 0, v_numSuccesses_4796_);
v___x_4801_ = v_reuseFailAlloc_4803_;
goto v_reusejp_4800_;
}
v_reusejp_4800_:
{
lean_object* v___x_4802_; 
lean_ctor_set_uint8(v___x_4801_, sizeof(void*)*1, v___x_4786_);
v___x_4802_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3(v_a_4758_, v_cfg_4754_, v_h_4755_, v_hOut_4756_, v___x_4801_);
return v___x_4802_;
}
}
}
v___jp_4805_:
{
lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; uint8_t v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v_numSuccesses_4816_; lean_object* v___x_4818_; uint8_t v_isShared_4819_; uint8_t v_isSharedCheck_4824_; 
v___x_4807_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__1));
v___x_4808_ = lean_string_append(v___x_4807_, v_a_4806_);
lean_dec_ref(v_a_4806_);
v___x_4809_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3___closed__2));
v___x_4810_ = lean_string_append(v___x_4808_, v___x_4809_);
v___x_4811_ = l_String_Slice_toString(v___x_4781_);
lean_dec_ref(v___x_4781_);
v___x_4812_ = lean_string_append(v___x_4810_, v___x_4811_);
lean_dec_ref(v___x_4811_);
v___x_4813_ = 3;
v___x_4814_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4814_, 0, v___x_4812_);
lean_ctor_set_uint8(v___x_4814_, sizeof(void*)*1, v___x_4813_);
lean_inc_ref(v_a_4758_);
v___x_4815_ = lean_apply_2(v_a_4758_, v___x_4814_, lean_box(0));
v_numSuccesses_4816_ = lean_ctor_get(v_s_4757_, 0);
v_isSharedCheck_4824_ = !lean_is_exclusive(v_s_4757_);
if (v_isSharedCheck_4824_ == 0)
{
v___x_4818_ = v_s_4757_;
v_isShared_4819_ = v_isSharedCheck_4824_;
goto v_resetjp_4817_;
}
else
{
lean_inc(v_numSuccesses_4816_);
lean_dec(v_s_4757_);
v___x_4818_ = lean_box(0);
v_isShared_4819_ = v_isSharedCheck_4824_;
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
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v_numSuccesses_4816_);
v___x_4821_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4820_;
}
v_reusejp_4820_:
{
lean_object* v___x_4822_; 
lean_ctor_set_uint8(v___x_4821_, sizeof(void*)*1, v___x_4786_);
v___x_4822_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3(v_a_4758_, v_cfg_4754_, v_h_4755_, v_hOut_4756_, v___x_4821_);
return v___x_4822_;
}
}
}
}
else
{
lean_object* v___x_4865_; 
lean_dec_ref(v___x_4781_);
lean_dec(v_a_4774_);
lean_dec_ref(v_a_4758_);
lean_dec(v_hOut_4756_);
lean_dec_ref(v_cfg_4754_);
if (v_isShared_4777_ == 0)
{
lean_ctor_set(v___x_4776_, 0, v_s_4757_);
v___x_4865_ = v___x_4776_;
goto v_reusejp_4864_;
}
else
{
lean_object* v_reuseFailAlloc_4866_; 
v_reuseFailAlloc_4866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4866_, 0, v_s_4757_);
v___x_4865_ = v_reuseFailAlloc_4866_;
goto v_reusejp_4864_;
}
v_reusejp_4864_:
{
return v___x_4865_;
}
}
}
}
else
{
lean_object* v_a_4868_; lean_object* v___x_4870_; uint8_t v_isShared_4871_; uint8_t v_isSharedCheck_4880_; 
lean_dec_ref(v_s_4757_);
lean_dec(v_hOut_4756_);
lean_dec_ref(v_cfg_4754_);
v_a_4868_ = lean_ctor_get(v___x_4773_, 0);
v_isSharedCheck_4880_ = !lean_is_exclusive(v___x_4773_);
if (v_isSharedCheck_4880_ == 0)
{
v___x_4870_ = v___x_4773_;
v_isShared_4871_ = v_isSharedCheck_4880_;
goto v_resetjp_4869_;
}
else
{
lean_inc(v_a_4868_);
lean_dec(v___x_4773_);
v___x_4870_ = lean_box(0);
v_isShared_4871_ = v_isSharedCheck_4880_;
goto v_resetjp_4869_;
}
v_resetjp_4869_:
{
lean_object* v___x_4872_; uint8_t v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4878_; 
v___x_4872_ = lean_io_error_to_string(v_a_4868_);
v___x_4873_ = 3;
v___x_4874_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4874_, 0, v___x_4872_);
lean_ctor_set_uint8(v___x_4874_, sizeof(void*)*1, v___x_4873_);
v___x_4875_ = lean_apply_2(v_a_4758_, v___x_4874_, lean_box(0));
v___x_4876_ = lean_box(0);
if (v_isShared_4871_ == 0)
{
lean_ctor_set(v___x_4870_, 0, v___x_4876_);
v___x_4878_ = v___x_4870_;
goto v_reusejp_4877_;
}
else
{
lean_object* v_reuseFailAlloc_4879_; 
v_reuseFailAlloc_4879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4879_, 0, v___x_4876_);
v___x_4878_ = v_reuseFailAlloc_4879_;
goto v_reusejp_4877_;
}
v_reusejp_4877_:
{
return v___x_4878_;
}
}
}
v___jp_4760_:
{
if (lean_obj_tag(v___y_4761_) == 0)
{
lean_object* v_a_4762_; lean_object* v_snd_4763_; lean_object* v___x_4764_; 
v_a_4762_ = lean_ctor_get(v___y_4761_, 0);
lean_inc(v_a_4762_);
lean_dec_ref(v___y_4761_);
v_snd_4763_ = lean_ctor_get(v_a_4762_, 1);
lean_inc(v_snd_4763_);
lean_dec(v_a_4762_);
v___x_4764_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3(v_a_4758_, v_cfg_4754_, v_h_4755_, v_hOut_4756_, v_snd_4763_);
return v___x_4764_;
}
else
{
lean_object* v_a_4765_; lean_object* v___x_4767_; uint8_t v_isShared_4768_; uint8_t v_isSharedCheck_4772_; 
lean_dec_ref(v_a_4758_);
lean_dec(v_hOut_4756_);
lean_dec_ref(v_cfg_4754_);
v_a_4765_ = lean_ctor_get(v___y_4761_, 0);
v_isSharedCheck_4772_ = !lean_is_exclusive(v___y_4761_);
if (v_isSharedCheck_4772_ == 0)
{
v___x_4767_ = v___y_4761_;
v_isShared_4768_ = v_isSharedCheck_4772_;
goto v_resetjp_4766_;
}
else
{
lean_inc(v_a_4765_);
lean_dec(v___y_4761_);
v___x_4767_ = lean_box(0);
v_isShared_4768_ = v_isSharedCheck_4772_;
goto v_resetjp_4766_;
}
v_resetjp_4766_:
{
lean_object* v___x_4770_; 
if (v_isShared_4768_ == 0)
{
v___x_4770_ = v___x_4767_;
goto v_reusejp_4769_;
}
else
{
lean_object* v_reuseFailAlloc_4771_; 
v_reuseFailAlloc_4771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4771_, 0, v_a_4765_);
v___x_4770_ = v_reuseFailAlloc_4771_;
goto v_reusejp_4769_;
}
v_reusejp_4769_:
{
return v___x_4770_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___boxed(lean_object* v_cfg_4881_, lean_object* v_h_4882_, lean_object* v_hOut_4883_, lean_object* v_s_4884_, lean_object* v_a_4885_, lean_object* v_a_4886_){
_start:
{
lean_object* v_res_4887_; 
v_res_4887_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(v_cfg_4881_, v_h_4882_, v_hOut_4883_, v_s_4884_, v_a_4885_);
lean_dec(v_h_4882_);
return v_res_4887_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg(lean_object* v_h_4890_, lean_object* v___y_4891_, lean_object* v___y_4892_){
_start:
{
lean_object* v_url_4894_; lean_object* v_path_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; 
v_url_4894_ = lean_ctor_get(v___y_4891_, 0);
lean_inc_ref(v_url_4894_);
v_path_4895_ = lean_ctor_get(v___y_4891_, 1);
lean_inc_ref(v_path_4895_);
lean_dec_ref(v___y_4891_);
v___x_4896_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__0));
v___x_4897_ = l_String_quote(v_path_4895_);
v___x_4898_ = lean_string_append(v___x_4896_, v___x_4897_);
lean_dec_ref(v___x_4897_);
v___x_4899_ = l_IO_FS_Handle_putStrLn(v_h_4890_, v___x_4898_);
if (lean_obj_tag(v___x_4899_) == 0)
{
lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; 
lean_dec_ref(v___x_4899_);
v___x_4900_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__1));
v___x_4901_ = lean_string_append(v___x_4900_, v_url_4894_);
lean_dec_ref(v_url_4894_);
v___x_4902_ = l_IO_FS_Handle_putStrLn(v_h_4890_, v___x_4901_);
if (lean_obj_tag(v___x_4902_) == 0)
{
lean_object* v_a_4903_; lean_object* v___x_4905_; uint8_t v_isShared_4906_; uint8_t v_isSharedCheck_4910_; 
lean_dec_ref(v___y_4892_);
v_a_4903_ = lean_ctor_get(v___x_4902_, 0);
v_isSharedCheck_4910_ = !lean_is_exclusive(v___x_4902_);
if (v_isSharedCheck_4910_ == 0)
{
v___x_4905_ = v___x_4902_;
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
else
{
lean_inc(v_a_4903_);
lean_dec(v___x_4902_);
v___x_4905_ = lean_box(0);
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
v_resetjp_4904_:
{
lean_object* v___x_4908_; 
if (v_isShared_4906_ == 0)
{
v___x_4908_ = v___x_4905_;
goto v_reusejp_4907_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v_a_4903_);
v___x_4908_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4907_;
}
v_reusejp_4907_:
{
return v___x_4908_;
}
}
}
else
{
lean_object* v_a_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4923_; 
v_a_4911_ = lean_ctor_get(v___x_4902_, 0);
v_isSharedCheck_4923_ = !lean_is_exclusive(v___x_4902_);
if (v_isSharedCheck_4923_ == 0)
{
v___x_4913_ = v___x_4902_;
v_isShared_4914_ = v_isSharedCheck_4923_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_a_4911_);
lean_dec(v___x_4902_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4923_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4915_; uint8_t v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4921_; 
v___x_4915_ = lean_io_error_to_string(v_a_4911_);
v___x_4916_ = 3;
v___x_4917_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4917_, 0, v___x_4915_);
lean_ctor_set_uint8(v___x_4917_, sizeof(void*)*1, v___x_4916_);
v___x_4918_ = lean_apply_2(v___y_4892_, v___x_4917_, lean_box(0));
v___x_4919_ = lean_box(0);
if (v_isShared_4914_ == 0)
{
lean_ctor_set(v___x_4913_, 0, v___x_4919_);
v___x_4921_ = v___x_4913_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4922_; 
v_reuseFailAlloc_4922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4922_, 0, v___x_4919_);
v___x_4921_ = v_reuseFailAlloc_4922_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
return v___x_4921_;
}
}
}
}
else
{
lean_object* v_a_4924_; lean_object* v___x_4926_; uint8_t v_isShared_4927_; uint8_t v_isSharedCheck_4936_; 
lean_dec_ref(v_url_4894_);
v_a_4924_ = lean_ctor_get(v___x_4899_, 0);
v_isSharedCheck_4936_ = !lean_is_exclusive(v___x_4899_);
if (v_isSharedCheck_4936_ == 0)
{
v___x_4926_ = v___x_4899_;
v_isShared_4927_ = v_isSharedCheck_4936_;
goto v_resetjp_4925_;
}
else
{
lean_inc(v_a_4924_);
lean_dec(v___x_4899_);
v___x_4926_ = lean_box(0);
v_isShared_4927_ = v_isSharedCheck_4936_;
goto v_resetjp_4925_;
}
v_resetjp_4925_:
{
lean_object* v___x_4928_; uint8_t v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4934_; 
v___x_4928_ = lean_io_error_to_string(v_a_4924_);
v___x_4929_ = 3;
v___x_4930_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4930_, 0, v___x_4928_);
lean_ctor_set_uint8(v___x_4930_, sizeof(void*)*1, v___x_4929_);
v___x_4931_ = lean_apply_2(v___y_4892_, v___x_4930_, lean_box(0));
v___x_4932_ = lean_box(0);
if (v_isShared_4927_ == 0)
{
lean_ctor_set(v___x_4926_, 0, v___x_4932_);
v___x_4934_ = v___x_4926_;
goto v_reusejp_4933_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v___x_4932_);
v___x_4934_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4933_;
}
v_reusejp_4933_:
{
return v___x_4934_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___boxed(lean_object* v_h_4937_, lean_object* v___y_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_){
_start:
{
lean_object* v_res_4941_; 
v_res_4941_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg(v_h_4937_, v___y_4938_, v___y_4939_);
lean_dec(v_h_4937_);
return v_res_4941_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0(lean_object* v_h_4942_, lean_object* v_x_4943_, lean_object* v___y_4944_, lean_object* v___y_4945_){
_start:
{
lean_object* v___x_4947_; 
v___x_4947_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg(v_h_4942_, v___y_4944_, v___y_4945_);
return v___x_4947_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___boxed(lean_object* v_h_4948_, lean_object* v_x_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_, lean_object* v___y_4952_){
_start:
{
lean_object* v_res_4953_; 
v_res_4953_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0(v_h_4948_, v_x_4949_, v___y_4950_, v___y_4951_);
lean_dec(v_h_4948_);
return v_res_4953_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___redArg(lean_object* v_h_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_){
_start:
{
lean_object* v_url_4959_; lean_object* v_path_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; 
v_url_4959_ = lean_ctor_get(v___y_4956_, 0);
lean_inc_ref(v_url_4959_);
v_path_4960_ = lean_ctor_get(v___y_4956_, 1);
lean_inc_ref(v_path_4960_);
lean_dec_ref(v___y_4956_);
v___x_4961_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__1));
v___x_4962_ = lean_string_append(v___x_4961_, v_url_4959_);
lean_dec_ref(v_url_4959_);
v___x_4963_ = l_IO_FS_Handle_putStrLn(v_h_4955_, v___x_4962_);
if (lean_obj_tag(v___x_4963_) == 0)
{
lean_object* v___x_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; 
lean_dec_ref(v___x_4963_);
v___x_4964_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___redArg___closed__0));
v___x_4965_ = l_String_quote(v_path_4960_);
v___x_4966_ = lean_string_append(v___x_4964_, v___x_4965_);
lean_dec_ref(v___x_4965_);
v___x_4967_ = l_IO_FS_Handle_putStrLn(v_h_4955_, v___x_4966_);
if (lean_obj_tag(v___x_4967_) == 0)
{
lean_object* v_a_4968_; lean_object* v___x_4970_; uint8_t v_isShared_4971_; uint8_t v_isSharedCheck_4975_; 
lean_dec_ref(v___y_4957_);
v_a_4968_ = lean_ctor_get(v___x_4967_, 0);
v_isSharedCheck_4975_ = !lean_is_exclusive(v___x_4967_);
if (v_isSharedCheck_4975_ == 0)
{
v___x_4970_ = v___x_4967_;
v_isShared_4971_ = v_isSharedCheck_4975_;
goto v_resetjp_4969_;
}
else
{
lean_inc(v_a_4968_);
lean_dec(v___x_4967_);
v___x_4970_ = lean_box(0);
v_isShared_4971_ = v_isSharedCheck_4975_;
goto v_resetjp_4969_;
}
v_resetjp_4969_:
{
lean_object* v___x_4973_; 
if (v_isShared_4971_ == 0)
{
v___x_4973_ = v___x_4970_;
goto v_reusejp_4972_;
}
else
{
lean_object* v_reuseFailAlloc_4974_; 
v_reuseFailAlloc_4974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4974_, 0, v_a_4968_);
v___x_4973_ = v_reuseFailAlloc_4974_;
goto v_reusejp_4972_;
}
v_reusejp_4972_:
{
return v___x_4973_;
}
}
}
else
{
lean_object* v_a_4976_; lean_object* v___x_4978_; uint8_t v_isShared_4979_; uint8_t v_isSharedCheck_4988_; 
v_a_4976_ = lean_ctor_get(v___x_4967_, 0);
v_isSharedCheck_4988_ = !lean_is_exclusive(v___x_4967_);
if (v_isSharedCheck_4988_ == 0)
{
v___x_4978_ = v___x_4967_;
v_isShared_4979_ = v_isSharedCheck_4988_;
goto v_resetjp_4977_;
}
else
{
lean_inc(v_a_4976_);
lean_dec(v___x_4967_);
v___x_4978_ = lean_box(0);
v_isShared_4979_ = v_isSharedCheck_4988_;
goto v_resetjp_4977_;
}
v_resetjp_4977_:
{
lean_object* v___x_4980_; uint8_t v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4986_; 
v___x_4980_ = lean_io_error_to_string(v_a_4976_);
v___x_4981_ = 3;
v___x_4982_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4982_, 0, v___x_4980_);
lean_ctor_set_uint8(v___x_4982_, sizeof(void*)*1, v___x_4981_);
v___x_4983_ = lean_apply_2(v___y_4957_, v___x_4982_, lean_box(0));
v___x_4984_ = lean_box(0);
if (v_isShared_4979_ == 0)
{
lean_ctor_set(v___x_4978_, 0, v___x_4984_);
v___x_4986_ = v___x_4978_;
goto v_reusejp_4985_;
}
else
{
lean_object* v_reuseFailAlloc_4987_; 
v_reuseFailAlloc_4987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4987_, 0, v___x_4984_);
v___x_4986_ = v_reuseFailAlloc_4987_;
goto v_reusejp_4985_;
}
v_reusejp_4985_:
{
return v___x_4986_;
}
}
}
}
else
{
lean_object* v_a_4989_; lean_object* v___x_4991_; uint8_t v_isShared_4992_; uint8_t v_isSharedCheck_5001_; 
lean_dec_ref(v_path_4960_);
v_a_4989_ = lean_ctor_get(v___x_4963_, 0);
v_isSharedCheck_5001_ = !lean_is_exclusive(v___x_4963_);
if (v_isSharedCheck_5001_ == 0)
{
v___x_4991_ = v___x_4963_;
v_isShared_4992_ = v_isSharedCheck_5001_;
goto v_resetjp_4990_;
}
else
{
lean_inc(v_a_4989_);
lean_dec(v___x_4963_);
v___x_4991_ = lean_box(0);
v_isShared_4992_ = v_isSharedCheck_5001_;
goto v_resetjp_4990_;
}
v_resetjp_4990_:
{
lean_object* v___x_4993_; uint8_t v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4999_; 
v___x_4993_ = lean_io_error_to_string(v_a_4989_);
v___x_4994_ = 3;
v___x_4995_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4995_, 0, v___x_4993_);
lean_ctor_set_uint8(v___x_4995_, sizeof(void*)*1, v___x_4994_);
v___x_4996_ = lean_apply_2(v___y_4957_, v___x_4995_, lean_box(0));
v___x_4997_ = lean_box(0);
if (v_isShared_4992_ == 0)
{
lean_ctor_set(v___x_4991_, 0, v___x_4997_);
v___x_4999_ = v___x_4991_;
goto v_reusejp_4998_;
}
else
{
lean_object* v_reuseFailAlloc_5000_; 
v_reuseFailAlloc_5000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5000_, 0, v___x_4997_);
v___x_4999_ = v_reuseFailAlloc_5000_;
goto v_reusejp_4998_;
}
v_reusejp_4998_:
{
return v___x_4999_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___redArg___boxed(lean_object* v_h_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_, lean_object* v___y_5005_){
_start:
{
lean_object* v_res_5006_; 
v_res_5006_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___redArg(v_h_5002_, v___y_5003_, v___y_5004_);
lean_dec(v_h_5002_);
return v_res_5006_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1(lean_object* v_h_5007_, lean_object* v_x_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_){
_start:
{
lean_object* v___x_5012_; 
v___x_5012_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___redArg(v_h_5007_, v___y_5009_, v___y_5010_);
return v___x_5012_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___boxed(lean_object* v_h_5013_, lean_object* v_x_5014_, lean_object* v___y_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_){
_start:
{
lean_object* v_res_5018_; 
v_res_5018_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1(v_h_5013_, v_x_5014_, v___y_5015_, v___y_5016_);
lean_dec(v_h_5013_);
return v_res_5018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3___lam__0___boxed(lean_object* v_i_5019_, lean_object* v___x_5020_, lean_object* v_h_5021_, lean_object* v_as_5022_, lean_object* v_stop_5023_, lean_object* v_____do__lift_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_){
_start:
{
size_t v_i_boxed_5027_; size_t v_stop_boxed_5028_; lean_object* v_res_5029_; 
v_i_boxed_5027_ = lean_unbox_usize(v_i_5019_);
lean_dec(v_i_5019_);
v_stop_boxed_5028_ = lean_unbox_usize(v_stop_5023_);
lean_dec(v_stop_5023_);
v_res_5029_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3___lam__0(v_i_boxed_5027_, v___x_5020_, v_h_5021_, v_as_5022_, v_stop_boxed_5028_, v_____do__lift_5024_, v___y_5025_);
return v_res_5029_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3(lean_object* v___x_5030_, lean_object* v_h_5031_, lean_object* v_as_5032_, size_t v_i_5033_, size_t v_stop_5034_, lean_object* v_b_5035_, lean_object* v___y_5036_){
_start:
{
uint8_t v___x_5038_; 
v___x_5038_ = lean_usize_dec_eq(v_i_5033_, v_stop_5034_);
if (v___x_5038_ == 0)
{
lean_object* v_toBind_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___f_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; 
v_toBind_5039_ = lean_ctor_get(v___x_5030_, 1);
lean_inc(v_toBind_5039_);
v___x_5040_ = lean_box_usize(v_i_5033_);
v___x_5041_ = lean_box_usize(v_stop_5034_);
lean_inc_ref(v_as_5032_);
lean_inc(v_h_5031_);
v___f_5042_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3___lam__0___boxed), 8, 5);
lean_closure_set(v___f_5042_, 0, v___x_5040_);
lean_closure_set(v___f_5042_, 1, v___x_5030_);
lean_closure_set(v___f_5042_, 2, v_h_5031_);
lean_closure_set(v___f_5042_, 3, v_as_5032_);
lean_closure_set(v___f_5042_, 4, v___x_5041_);
v___x_5043_ = lean_array_uget(v_as_5032_, v_i_5033_);
lean_dec_ref(v_as_5032_);
v___x_5044_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___boxed), 5, 3);
lean_closure_set(v___x_5044_, 0, v_h_5031_);
lean_closure_set(v___x_5044_, 1, v_b_5035_);
lean_closure_set(v___x_5044_, 2, v___x_5043_);
v___x_5045_ = lean_apply_6(v_toBind_5039_, lean_box(0), lean_box(0), v___x_5044_, v___f_5042_, v___y_5036_, lean_box(0));
return v___x_5045_;
}
else
{
lean_object* v_toApplicative_5046_; lean_object* v_toPure_5047_; lean_object* v___x_5048_; 
lean_dec_ref(v_as_5032_);
lean_dec(v_h_5031_);
v_toApplicative_5046_ = lean_ctor_get(v___x_5030_, 0);
lean_inc_ref(v_toApplicative_5046_);
lean_dec_ref(v___x_5030_);
v_toPure_5047_ = lean_ctor_get(v_toApplicative_5046_, 1);
lean_inc(v_toPure_5047_);
lean_dec_ref(v_toApplicative_5046_);
v___x_5048_ = lean_apply_4(v_toPure_5047_, lean_box(0), v_b_5035_, v___y_5036_, lean_box(0));
return v___x_5048_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3___lam__0(size_t v_i_5049_, lean_object* v___x_5050_, lean_object* v_h_5051_, lean_object* v_as_5052_, size_t v_stop_5053_, lean_object* v_____do__lift_5054_, lean_object* v___y_5055_){
_start:
{
size_t v___x_5057_; size_t v___x_5058_; lean_object* v___x_5059_; 
v___x_5057_ = ((size_t)1ULL);
v___x_5058_ = lean_usize_add(v_i_5049_, v___x_5057_);
v___x_5059_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3(v___x_5050_, v_h_5051_, v_as_5052_, v___x_5058_, v_stop_5053_, v_____do__lift_5054_, v___y_5055_);
return v___x_5059_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3___boxed(lean_object* v___x_5060_, lean_object* v_h_5061_, lean_object* v_as_5062_, lean_object* v_i_5063_, lean_object* v_stop_5064_, lean_object* v_b_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_){
_start:
{
size_t v_i_boxed_5068_; size_t v_stop_boxed_5069_; lean_object* v_res_5070_; 
v_i_boxed_5068_ = lean_unbox_usize(v_i_5063_);
lean_dec(v_i_5063_);
v_stop_boxed_5069_ = lean_unbox_usize(v_stop_5064_);
lean_dec(v_stop_5064_);
v_res_5070_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3(v___x_5060_, v_h_5061_, v_as_5062_, v_i_boxed_5068_, v_stop_boxed_5069_, v_b_5065_, v___y_5066_);
return v_res_5070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2___lam__0___boxed(lean_object* v_i_5071_, lean_object* v___x_5072_, lean_object* v_h_5073_, lean_object* v_as_5074_, lean_object* v_stop_5075_, lean_object* v_____do__lift_5076_, lean_object* v___y_5077_, lean_object* v___y_5078_){
_start:
{
size_t v_i_boxed_5079_; size_t v_stop_boxed_5080_; lean_object* v_res_5081_; 
v_i_boxed_5079_ = lean_unbox_usize(v_i_5071_);
lean_dec(v_i_5071_);
v_stop_boxed_5080_ = lean_unbox_usize(v_stop_5075_);
lean_dec(v_stop_5075_);
v_res_5081_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2___lam__0(v_i_boxed_5079_, v___x_5072_, v_h_5073_, v_as_5074_, v_stop_boxed_5080_, v_____do__lift_5076_, v___y_5077_);
return v_res_5081_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2(lean_object* v___x_5082_, lean_object* v_h_5083_, lean_object* v_as_5084_, size_t v_i_5085_, size_t v_stop_5086_, lean_object* v_b_5087_, lean_object* v___y_5088_){
_start:
{
uint8_t v___x_5090_; 
v___x_5090_ = lean_usize_dec_eq(v_i_5085_, v_stop_5086_);
if (v___x_5090_ == 0)
{
lean_object* v_toBind_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___f_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; 
v_toBind_5091_ = lean_ctor_get(v___x_5082_, 1);
lean_inc(v_toBind_5091_);
v___x_5092_ = lean_box_usize(v_i_5085_);
v___x_5093_ = lean_box_usize(v_stop_5086_);
lean_inc_ref(v_as_5084_);
lean_inc(v_h_5083_);
v___f_5094_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2___lam__0___boxed), 8, 5);
lean_closure_set(v___f_5094_, 0, v___x_5092_);
lean_closure_set(v___f_5094_, 1, v___x_5082_);
lean_closure_set(v___f_5094_, 2, v_h_5083_);
lean_closure_set(v___f_5094_, 3, v_as_5084_);
lean_closure_set(v___f_5094_, 4, v___x_5093_);
v___x_5095_ = lean_array_uget(v_as_5084_, v_i_5085_);
lean_dec_ref(v_as_5084_);
v___x_5096_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___boxed), 5, 3);
lean_closure_set(v___x_5096_, 0, v_h_5083_);
lean_closure_set(v___x_5096_, 1, v_b_5087_);
lean_closure_set(v___x_5096_, 2, v___x_5095_);
v___x_5097_ = lean_apply_6(v_toBind_5091_, lean_box(0), lean_box(0), v___x_5096_, v___f_5094_, v___y_5088_, lean_box(0));
return v___x_5097_;
}
else
{
lean_object* v_toApplicative_5098_; lean_object* v_toPure_5099_; lean_object* v___x_5100_; 
lean_dec_ref(v_as_5084_);
lean_dec(v_h_5083_);
v_toApplicative_5098_ = lean_ctor_get(v___x_5082_, 0);
lean_inc_ref(v_toApplicative_5098_);
lean_dec_ref(v___x_5082_);
v_toPure_5099_ = lean_ctor_get(v_toApplicative_5098_, 1);
lean_inc(v_toPure_5099_);
lean_dec_ref(v_toApplicative_5098_);
v___x_5100_ = lean_apply_4(v_toPure_5099_, lean_box(0), v_b_5087_, v___y_5088_, lean_box(0));
return v___x_5100_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2___lam__0(size_t v_i_5101_, lean_object* v___x_5102_, lean_object* v_h_5103_, lean_object* v_as_5104_, size_t v_stop_5105_, lean_object* v_____do__lift_5106_, lean_object* v___y_5107_){
_start:
{
size_t v___x_5109_; size_t v___x_5110_; lean_object* v___x_5111_; 
v___x_5109_ = ((size_t)1ULL);
v___x_5110_ = lean_usize_add(v_i_5101_, v___x_5109_);
v___x_5111_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2(v___x_5102_, v_h_5103_, v_as_5104_, v___x_5110_, v_stop_5105_, v_____do__lift_5106_, v___y_5107_);
return v___x_5111_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2___boxed(lean_object* v___x_5112_, lean_object* v_h_5113_, lean_object* v_as_5114_, lean_object* v_i_5115_, lean_object* v_stop_5116_, lean_object* v_b_5117_, lean_object* v___y_5118_, lean_object* v___y_5119_){
_start:
{
size_t v_i_boxed_5120_; size_t v_stop_boxed_5121_; lean_object* v_res_5122_; 
v_i_boxed_5120_ = lean_unbox_usize(v_i_5115_);
lean_dec(v_i_5115_);
v_stop_boxed_5121_ = lean_unbox_usize(v_stop_5116_);
lean_dec(v_stop_5116_);
v_res_5122_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2(v___x_5112_, v_h_5113_, v_as_5114_, v_i_boxed_5120_, v_stop_boxed_5121_, v_b_5117_, v___y_5118_);
return v_res_5122_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__11(void){
_start:
{
lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; 
v___x_5138_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__5));
v___x_5139_ = lean_unsigned_to_nat(11u);
v___x_5140_ = lean_mk_empty_array_with_capacity(v___x_5139_);
v___x_5141_ = lean_array_push(v___x_5140_, v___x_5138_);
return v___x_5141_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__12(void){
_start:
{
lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; 
v___x_5142_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_5143_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__11, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__11_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__11);
v___x_5144_ = lean_array_push(v___x_5143_, v___x_5142_);
return v___x_5144_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__13(void){
_start:
{
lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; 
v___x_5145_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__6));
v___x_5146_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__12, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__12_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__12);
v___x_5147_ = lean_array_push(v___x_5146_, v___x_5145_);
return v___x_5147_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__14(void){
_start:
{
lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5150_; 
v___x_5148_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__7));
v___x_5149_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__13, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__13_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__13);
v___x_5150_ = lean_array_push(v___x_5149_, v___x_5148_);
return v___x_5150_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__15(void){
_start:
{
lean_object* v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; 
v___x_5151_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__8));
v___x_5152_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__14, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__14_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__14);
v___x_5153_ = lean_array_push(v___x_5152_, v___x_5151_);
return v___x_5153_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__16(void){
_start:
{
lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; 
v___x_5154_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__9));
v___x_5155_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__15, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__15_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__15);
v___x_5156_ = lean_array_push(v___x_5155_, v___x_5154_);
return v___x_5156_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__17(void){
_start:
{
lean_object* v___x_5157_; lean_object* v___x_5158_; lean_object* v___x_5159_; 
v___x_5157_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_5158_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__16, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__16_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__16);
v___x_5159_ = lean_array_push(v___x_5158_, v___x_5157_);
return v___x_5159_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__18(void){
_start:
{
lean_object* v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; 
v___x_5160_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_5161_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__17, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__17_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__17);
v___x_5162_ = lean_array_push(v___x_5161_, v___x_5160_);
return v___x_5162_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__19(void){
_start:
{
lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5165_; 
v___x_5163_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_5164_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__18, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__18_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__18);
v___x_5165_ = lean_array_push(v___x_5164_, v___x_5163_);
return v___x_5165_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__20(void){
_start:
{
lean_object* v___x_5166_; lean_object* v___x_5167_; lean_object* v___x_5168_; 
v___x_5166_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__10));
v___x_5167_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__19, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__19_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__19);
v___x_5168_ = lean_array_push(v___x_5167_, v___x_5166_);
return v___x_5168_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__22(void){
_start:
{
lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; 
v___x_5170_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__5));
v___x_5171_ = lean_unsigned_to_nat(17u);
v___x_5172_ = lean_mk_empty_array_with_capacity(v___x_5171_);
v___x_5173_ = lean_array_push(v___x_5172_, v___x_5170_);
return v___x_5173_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__23(void){
_start:
{
lean_object* v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; 
v___x_5174_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_5175_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__22);
v___x_5176_ = lean_array_push(v___x_5175_, v___x_5174_);
return v___x_5176_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__24(void){
_start:
{
lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; 
v___x_5177_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_5178_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__23, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__23);
v___x_5179_ = lean_array_push(v___x_5178_, v___x_5177_);
return v___x_5179_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__25(void){
_start:
{
lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; 
v___x_5180_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__7));
v___x_5181_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__24, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__24);
v___x_5182_ = lean_array_push(v___x_5181_, v___x_5180_);
return v___x_5182_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__26(void){
_start:
{
lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; 
v___x_5183_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_5184_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__25);
v___x_5185_ = lean_array_push(v___x_5184_, v___x_5183_);
return v___x_5185_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__27(void){
_start:
{
lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; 
v___x_5186_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__21));
v___x_5187_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__26, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__26);
v___x_5188_ = lean_array_push(v___x_5187_, v___x_5186_);
return v___x_5188_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__28(void){
_start:
{
lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; 
v___x_5189_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__8));
v___x_5190_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__27, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__27_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__27);
v___x_5191_ = lean_array_push(v___x_5190_, v___x_5189_);
return v___x_5191_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__29(void){
_start:
{
lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; 
v___x_5192_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__9));
v___x_5193_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__28, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__28_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__28);
v___x_5194_ = lean_array_push(v___x_5193_, v___x_5192_);
return v___x_5194_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__30(void){
_start:
{
lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; 
v___x_5195_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13));
v___x_5196_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__29, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__29);
v___x_5197_ = lean_array_push(v___x_5196_, v___x_5195_);
return v___x_5197_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__31(void){
_start:
{
lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; 
v___x_5198_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14));
v___x_5199_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__30, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__30);
v___x_5200_ = lean_array_push(v___x_5199_, v___x_5198_);
return v___x_5200_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__32(void){
_start:
{
lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; 
v___x_5201_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15));
v___x_5202_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__31, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__31_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__31);
v___x_5203_ = lean_array_push(v___x_5202_, v___x_5201_);
return v___x_5203_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2(lean_object* v_cfg_5204_, lean_object* v___x_5205_, lean_object* v_h_5206_, lean_object* v_path_5207_, lean_object* v___y_5208_){
_start:
{
uint8_t v___y_5211_; uint32_t v___y_5217_; uint8_t v___y_5218_; lean_object* v___y_5219_; lean_object* v___y_5220_; uint8_t v_kind_5229_; lean_object* v_scope_5230_; lean_object* v_infos_5231_; lean_object* v_key_5232_; uint32_t v___y_5234_; uint8_t v___y_5235_; lean_object* v___y_5236_; uint32_t v___y_5241_; uint8_t v___y_5242_; lean_object* v___y_5243_; lean_object* v___y_5244_; lean_object* v___y_5245_; lean_object* v___y_5246_; lean_object* v___y_5247_; uint32_t v___y_5259_; uint8_t v___y_5260_; lean_object* v___y_5261_; lean_object* v___y_5262_; lean_object* v___y_5263_; lean_object* v___y_5268_; uint32_t v___y_5269_; uint8_t v___y_5270_; lean_object* v___y_5271_; lean_object* v___y_5272_; lean_object* v___y_5273_; uint32_t v___y_5283_; uint8_t v___y_5284_; lean_object* v___y_5285_; lean_object* v___y_5286_; lean_object* v___y_5287_; lean_object* v_a_5290_; lean_object* v___y_5384_; lean_object* v___y_5412_; 
v_kind_5229_ = lean_ctor_get_uint8(v_cfg_5204_, sizeof(void*)*3);
v_scope_5230_ = lean_ctor_get(v_cfg_5204_, 0);
lean_inc_ref(v_scope_5230_);
v_infos_5231_ = lean_ctor_get(v_cfg_5204_, 1);
lean_inc_ref(v_infos_5231_);
v_key_5232_ = lean_ctor_get(v_cfg_5204_, 2);
if (v_kind_5229_ == 0)
{
lean_object* v___x_5413_; lean_object* v___x_5414_; uint8_t v___x_5415_; 
v___x_5413_ = lean_unsigned_to_nat(0u);
v___x_5414_ = lean_array_get_size(v_infos_5231_);
v___x_5415_ = lean_nat_dec_lt(v___x_5413_, v___x_5414_);
if (v___x_5415_ == 0)
{
lean_dec_ref(v___x_5205_);
goto v___jp_5366_;
}
else
{
lean_object* v___x_5416_; uint8_t v___x_5417_; 
v___x_5416_ = lean_box(0);
v___x_5417_ = lean_nat_dec_le(v___x_5414_, v___x_5414_);
if (v___x_5417_ == 0)
{
if (v___x_5415_ == 0)
{
lean_dec_ref(v___x_5205_);
goto v___jp_5366_;
}
else
{
size_t v___x_5418_; size_t v___x_5419_; lean_object* v___x_5420_; 
v___x_5418_ = ((size_t)0ULL);
v___x_5419_ = lean_usize_of_nat(v___x_5414_);
lean_inc_ref(v___y_5208_);
lean_inc_ref(v_infos_5231_);
lean_inc(v_h_5206_);
v___x_5420_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2(v___x_5205_, v_h_5206_, v_infos_5231_, v___x_5418_, v___x_5419_, v___x_5416_, v___y_5208_);
v___y_5384_ = v___x_5420_;
goto v___jp_5383_;
}
}
else
{
size_t v___x_5421_; size_t v___x_5422_; lean_object* v___x_5423_; 
v___x_5421_ = ((size_t)0ULL);
v___x_5422_ = lean_usize_of_nat(v___x_5414_);
lean_inc_ref(v___y_5208_);
lean_inc_ref(v_infos_5231_);
lean_inc(v_h_5206_);
v___x_5423_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__2(v___x_5205_, v_h_5206_, v_infos_5231_, v___x_5421_, v___x_5422_, v___x_5416_, v___y_5208_);
v___y_5384_ = v___x_5423_;
goto v___jp_5383_;
}
}
}
else
{
lean_object* v___x_5424_; lean_object* v___x_5425_; uint8_t v___x_5426_; 
v___x_5424_ = lean_unsigned_to_nat(0u);
v___x_5425_ = lean_array_get_size(v_infos_5231_);
v___x_5426_ = lean_nat_dec_lt(v___x_5424_, v___x_5425_);
if (v___x_5426_ == 0)
{
lean_dec_ref(v___x_5205_);
goto v___jp_5385_;
}
else
{
lean_object* v___x_5427_; uint8_t v___x_5428_; 
v___x_5427_ = lean_box(0);
v___x_5428_ = lean_nat_dec_le(v___x_5425_, v___x_5425_);
if (v___x_5428_ == 0)
{
if (v___x_5426_ == 0)
{
lean_dec_ref(v___x_5205_);
goto v___jp_5385_;
}
else
{
size_t v___x_5429_; size_t v___x_5430_; lean_object* v___x_5431_; 
v___x_5429_ = ((size_t)0ULL);
v___x_5430_ = lean_usize_of_nat(v___x_5425_);
lean_inc_ref(v___y_5208_);
lean_inc_ref(v_infos_5231_);
lean_inc(v_h_5206_);
v___x_5431_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3(v___x_5205_, v_h_5206_, v_infos_5231_, v___x_5429_, v___x_5430_, v___x_5427_, v___y_5208_);
v___y_5412_ = v___x_5431_;
goto v___jp_5411_;
}
}
else
{
size_t v___x_5432_; size_t v___x_5433_; lean_object* v___x_5434_; 
v___x_5432_ = ((size_t)0ULL);
v___x_5433_ = lean_usize_of_nat(v___x_5425_);
lean_inc_ref(v___y_5208_);
lean_inc_ref(v_infos_5231_);
lean_inc(v_h_5206_);
v___x_5434_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2_spec__3(v___x_5205_, v_h_5206_, v_infos_5231_, v___x_5432_, v___x_5433_, v___x_5427_, v___y_5208_);
v___y_5412_ = v___x_5434_;
goto v___jp_5411_;
}
}
}
v___jp_5210_:
{
if (v___y_5211_ == 0)
{
lean_object* v___x_5212_; lean_object* v___x_5213_; 
v___x_5212_ = lean_box(0);
v___x_5213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5213_, 0, v___x_5212_);
return v___x_5213_;
}
else
{
lean_object* v___x_5214_; lean_object* v___x_5215_; 
v___x_5214_ = lean_box(0);
v___x_5215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5215_, 0, v___x_5214_);
return v___x_5215_;
}
}
v___jp_5216_:
{
lean_object* v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; uint8_t v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; 
v___x_5221_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__0));
v___x_5222_ = lean_string_append(v___y_5220_, v___x_5221_);
v___x_5223_ = lean_uint32_to_nat(v___y_5217_);
v___x_5224_ = l_Nat_reprFast(v___x_5223_);
v___x_5225_ = lean_string_append(v___x_5222_, v___x_5224_);
lean_dec_ref(v___x_5224_);
v___x_5226_ = 3;
v___x_5227_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5227_, 0, v___x_5225_);
lean_ctor_set_uint8(v___x_5227_, sizeof(void*)*1, v___x_5226_);
v___x_5228_ = lean_apply_2(v___y_5219_, v___x_5227_, lean_box(0));
v___y_5211_ = v___y_5218_;
goto v___jp_5210_;
}
v___jp_5233_:
{
uint32_t v___x_5237_; uint8_t v___x_5238_; 
v___x_5237_ = 0;
v___x_5238_ = lean_uint32_dec_eq(v___y_5234_, v___x_5237_);
if (v___x_5238_ == 0)
{
lean_object* v_s_5239_; 
v_s_5239_ = lean_ctor_get(v_scope_5230_, 0);
lean_inc_ref(v_s_5239_);
lean_dec_ref(v_scope_5230_);
v___y_5217_ = v___y_5234_;
v___y_5218_ = v___y_5235_;
v___y_5219_ = v___y_5236_;
v___y_5220_ = v_s_5239_;
goto v___jp_5216_;
}
else
{
lean_dec_ref(v___y_5236_);
lean_dec_ref(v_scope_5230_);
v___y_5211_ = v___y_5235_;
goto v___jp_5210_;
}
}
v___jp_5240_:
{
lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; uint8_t v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; 
v___x_5248_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__1));
v___x_5249_ = lean_string_append(v___y_5247_, v___x_5248_);
lean_inc(v___y_5243_);
lean_inc(v___y_5244_);
lean_inc_ref(v___y_5245_);
v___x_5250_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5250_, 0, v___y_5245_);
lean_ctor_set(v___x_5250_, 1, v___y_5244_);
lean_ctor_set(v___x_5250_, 2, v___y_5243_);
v___x_5251_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5250_, v___y_5243_);
lean_dec_ref(v___x_5250_);
v___x_5252_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5252_, 0, v___y_5245_);
lean_ctor_set(v___x_5252_, 1, v___y_5244_);
lean_ctor_set(v___x_5252_, 2, v___x_5251_);
v___x_5253_ = l_String_Slice_toString(v___x_5252_);
lean_dec_ref(v___x_5252_);
v___x_5254_ = lean_string_append(v___x_5249_, v___x_5253_);
lean_dec_ref(v___x_5253_);
v___x_5255_ = 2;
v___x_5256_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5256_, 0, v___x_5254_);
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*1, v___x_5255_);
lean_inc_ref(v___y_5246_);
v___x_5257_ = lean_apply_2(v___y_5246_, v___x_5256_, lean_box(0));
v___y_5234_ = v___y_5241_;
v___y_5235_ = v___y_5242_;
v___y_5236_ = v___y_5246_;
goto v___jp_5233_;
}
v___jp_5258_:
{
lean_object* v___x_5264_; uint8_t v___x_5265_; 
v___x_5264_ = lean_string_utf8_byte_size(v___y_5262_);
v___x_5265_ = lean_nat_dec_eq(v___x_5264_, v___y_5261_);
if (v___x_5265_ == 0)
{
lean_object* v_s_5266_; 
v_s_5266_ = lean_ctor_get(v_scope_5230_, 0);
lean_inc_ref(v_s_5266_);
v___y_5241_ = v___y_5259_;
v___y_5242_ = v___y_5260_;
v___y_5243_ = v___x_5264_;
v___y_5244_ = v___y_5261_;
v___y_5245_ = v___y_5262_;
v___y_5246_ = v___y_5263_;
v___y_5247_ = v_s_5266_;
goto v___jp_5240_;
}
else
{
lean_dec_ref(v___y_5262_);
lean_dec(v___y_5261_);
v___y_5234_ = v___y_5259_;
v___y_5235_ = v___y_5260_;
v___y_5236_ = v___y_5263_;
goto v___jp_5233_;
}
}
v___jp_5267_:
{
lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; uint8_t v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; 
v___x_5274_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_5275_ = lean_string_append(v___y_5273_, v___x_5274_);
v___x_5276_ = lean_string_append(v___x_5275_, v___y_5268_);
lean_dec_ref(v___y_5268_);
v___x_5277_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__2));
v___x_5278_ = lean_string_append(v___x_5276_, v___x_5277_);
v___x_5279_ = 3;
v___x_5280_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5280_, 0, v___x_5278_);
lean_ctor_set_uint8(v___x_5280_, sizeof(void*)*1, v___x_5279_);
lean_inc_ref(v___y_5208_);
v___x_5281_ = lean_apply_2(v___y_5208_, v___x_5280_, lean_box(0));
v___y_5259_ = v___y_5269_;
v___y_5260_ = v___y_5270_;
v___y_5261_ = v___y_5271_;
v___y_5262_ = v___y_5272_;
v___y_5263_ = v___y_5208_;
goto v___jp_5258_;
}
v___jp_5282_:
{
lean_object* v_s_5288_; 
v_s_5288_ = lean_ctor_get(v_scope_5230_, 0);
lean_inc_ref(v_s_5288_);
v___y_5268_ = v___y_5287_;
v___y_5269_ = v___y_5283_;
v___y_5270_ = v___y_5284_;
v___y_5271_ = v___y_5285_;
v___y_5272_ = v___y_5286_;
v___y_5273_ = v_s_5288_;
goto v___jp_5267_;
}
v___jp_5289_:
{
lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; uint8_t v___x_5296_; uint8_t v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; 
v___x_5291_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__3));
v___x_5292_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_5293_ = lean_box(0);
v___x_5294_ = lean_unsigned_to_nat(0u);
v___x_5295_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_5296_ = 1;
v___x_5297_ = 0;
v___x_5298_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_5298_, 0, v___x_5291_);
lean_ctor_set(v___x_5298_, 1, v___x_5292_);
lean_ctor_set(v___x_5298_, 2, v_a_5290_);
lean_ctor_set(v___x_5298_, 3, v___x_5293_);
lean_ctor_set(v___x_5298_, 4, v___x_5295_);
lean_ctor_set_uint8(v___x_5298_, sizeof(void*)*5, v___x_5296_);
lean_ctor_set_uint8(v___x_5298_, sizeof(void*)*5 + 1, v___x_5297_);
v___x_5299_ = lean_io_process_spawn(v___x_5298_);
if (lean_obj_tag(v___x_5299_) == 0)
{
lean_object* v_a_5300_; lean_object* v_stdout_5301_; lean_object* v_stderr_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; 
v_a_5300_ = lean_ctor_get(v___x_5299_, 0);
lean_inc(v_a_5300_);
lean_dec_ref(v___x_5299_);
v_stdout_5301_ = lean_ctor_get(v_a_5300_, 1);
lean_inc(v_stdout_5301_);
v_stderr_5302_ = lean_ctor_get(v_a_5300_, 2);
v___x_5303_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__4));
lean_inc(v_stdout_5301_);
lean_inc_ref(v___y_5208_);
v___x_5304_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3(v___y_5208_, v_cfg_5204_, v_stderr_5302_, v_stdout_5301_, v___x_5303_);
if (lean_obj_tag(v___x_5304_) == 0)
{
lean_object* v_a_5305_; lean_object* v___x_5306_; 
v_a_5305_ = lean_ctor_get(v___x_5304_, 0);
lean_inc(v_a_5305_);
lean_dec_ref(v___x_5304_);
v___x_5306_ = lean_io_process_child_wait(v___x_5291_, v_a_5300_);
lean_dec(v_a_5300_);
if (lean_obj_tag(v___x_5306_) == 0)
{
lean_object* v_a_5307_; lean_object* v___x_5308_; 
v_a_5307_ = lean_ctor_get(v___x_5306_, 0);
lean_inc(v_a_5307_);
lean_dec_ref(v___x_5306_);
v___x_5308_ = l_IO_FS_Handle_readToEnd(v_stdout_5301_);
lean_dec(v_stdout_5301_);
if (lean_obj_tag(v___x_5308_) == 0)
{
lean_object* v_a_5309_; uint8_t v_didError_5310_; lean_object* v_numSuccesses_5311_; lean_object* v___x_5312_; uint8_t v___x_5313_; 
v_a_5309_ = lean_ctor_get(v___x_5308_, 0);
lean_inc(v_a_5309_);
lean_dec_ref(v___x_5308_);
v_didError_5310_ = lean_ctor_get_uint8(v_a_5305_, sizeof(void*)*1);
v_numSuccesses_5311_ = lean_ctor_get(v_a_5305_, 0);
lean_inc(v_numSuccesses_5311_);
lean_dec(v_a_5305_);
v___x_5312_ = lean_array_get_size(v_infos_5231_);
lean_dec_ref(v_infos_5231_);
v___x_5313_ = lean_nat_dec_lt(v_numSuccesses_5311_, v___x_5312_);
lean_dec(v_numSuccesses_5311_);
if (v___x_5313_ == 0)
{
uint32_t v___x_5314_; 
v___x_5314_ = lean_unbox_uint32(v_a_5307_);
lean_dec(v_a_5307_);
v___y_5259_ = v___x_5314_;
v___y_5260_ = v_didError_5310_;
v___y_5261_ = v___x_5294_;
v___y_5262_ = v_a_5309_;
v___y_5263_ = v___y_5208_;
goto v___jp_5258_;
}
else
{
if (v_kind_5229_ == 0)
{
lean_object* v___x_5315_; uint32_t v___x_5316_; 
v___x_5315_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___x_5316_ = lean_unbox_uint32(v_a_5307_);
lean_dec(v_a_5307_);
v___y_5283_ = v___x_5316_;
v___y_5284_ = v_didError_5310_;
v___y_5285_ = v___x_5294_;
v___y_5286_ = v_a_5309_;
v___y_5287_ = v___x_5315_;
goto v___jp_5282_;
}
else
{
lean_object* v___x_5317_; uint32_t v___x_5318_; 
v___x_5317_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___x_5318_ = lean_unbox_uint32(v_a_5307_);
lean_dec(v_a_5307_);
v___y_5283_ = v___x_5318_;
v___y_5284_ = v_didError_5310_;
v___y_5285_ = v___x_5294_;
v___y_5286_ = v_a_5309_;
v___y_5287_ = v___x_5317_;
goto v___jp_5282_;
}
}
}
else
{
lean_object* v_a_5319_; lean_object* v___x_5321_; uint8_t v_isShared_5322_; uint8_t v_isSharedCheck_5331_; 
lean_dec(v_a_5307_);
lean_dec(v_a_5305_);
lean_dec_ref(v_infos_5231_);
lean_dec_ref(v_scope_5230_);
v_a_5319_ = lean_ctor_get(v___x_5308_, 0);
v_isSharedCheck_5331_ = !lean_is_exclusive(v___x_5308_);
if (v_isSharedCheck_5331_ == 0)
{
v___x_5321_ = v___x_5308_;
v_isShared_5322_ = v_isSharedCheck_5331_;
goto v_resetjp_5320_;
}
else
{
lean_inc(v_a_5319_);
lean_dec(v___x_5308_);
v___x_5321_ = lean_box(0);
v_isShared_5322_ = v_isSharedCheck_5331_;
goto v_resetjp_5320_;
}
v_resetjp_5320_:
{
lean_object* v___x_5323_; uint8_t v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5329_; 
v___x_5323_ = lean_io_error_to_string(v_a_5319_);
v___x_5324_ = 3;
v___x_5325_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5325_, 0, v___x_5323_);
lean_ctor_set_uint8(v___x_5325_, sizeof(void*)*1, v___x_5324_);
v___x_5326_ = lean_apply_2(v___y_5208_, v___x_5325_, lean_box(0));
v___x_5327_ = lean_box(0);
if (v_isShared_5322_ == 0)
{
lean_ctor_set(v___x_5321_, 0, v___x_5327_);
v___x_5329_ = v___x_5321_;
goto v_reusejp_5328_;
}
else
{
lean_object* v_reuseFailAlloc_5330_; 
v_reuseFailAlloc_5330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5330_, 0, v___x_5327_);
v___x_5329_ = v_reuseFailAlloc_5330_;
goto v_reusejp_5328_;
}
v_reusejp_5328_:
{
return v___x_5329_;
}
}
}
}
else
{
lean_object* v_a_5332_; lean_object* v___x_5334_; uint8_t v_isShared_5335_; uint8_t v_isSharedCheck_5344_; 
lean_dec(v_a_5305_);
lean_dec(v_stdout_5301_);
lean_dec_ref(v_infos_5231_);
lean_dec_ref(v_scope_5230_);
v_a_5332_ = lean_ctor_get(v___x_5306_, 0);
v_isSharedCheck_5344_ = !lean_is_exclusive(v___x_5306_);
if (v_isSharedCheck_5344_ == 0)
{
v___x_5334_ = v___x_5306_;
v_isShared_5335_ = v_isSharedCheck_5344_;
goto v_resetjp_5333_;
}
else
{
lean_inc(v_a_5332_);
lean_dec(v___x_5306_);
v___x_5334_ = lean_box(0);
v_isShared_5335_ = v_isSharedCheck_5344_;
goto v_resetjp_5333_;
}
v_resetjp_5333_:
{
lean_object* v___x_5336_; uint8_t v___x_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5342_; 
v___x_5336_ = lean_io_error_to_string(v_a_5332_);
v___x_5337_ = 3;
v___x_5338_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5338_, 0, v___x_5336_);
lean_ctor_set_uint8(v___x_5338_, sizeof(void*)*1, v___x_5337_);
v___x_5339_ = lean_apply_2(v___y_5208_, v___x_5338_, lean_box(0));
v___x_5340_ = lean_box(0);
if (v_isShared_5335_ == 0)
{
lean_ctor_set(v___x_5334_, 0, v___x_5340_);
v___x_5342_ = v___x_5334_;
goto v_reusejp_5341_;
}
else
{
lean_object* v_reuseFailAlloc_5343_; 
v_reuseFailAlloc_5343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5343_, 0, v___x_5340_);
v___x_5342_ = v_reuseFailAlloc_5343_;
goto v_reusejp_5341_;
}
v_reusejp_5341_:
{
return v___x_5342_;
}
}
}
}
else
{
lean_object* v_a_5345_; lean_object* v___x_5347_; uint8_t v_isShared_5348_; uint8_t v_isSharedCheck_5352_; 
lean_dec(v_stdout_5301_);
lean_dec(v_a_5300_);
lean_dec_ref(v_infos_5231_);
lean_dec_ref(v_scope_5230_);
lean_dec_ref(v___y_5208_);
v_a_5345_ = lean_ctor_get(v___x_5304_, 0);
v_isSharedCheck_5352_ = !lean_is_exclusive(v___x_5304_);
if (v_isSharedCheck_5352_ == 0)
{
v___x_5347_ = v___x_5304_;
v_isShared_5348_ = v_isSharedCheck_5352_;
goto v_resetjp_5346_;
}
else
{
lean_inc(v_a_5345_);
lean_dec(v___x_5304_);
v___x_5347_ = lean_box(0);
v_isShared_5348_ = v_isSharedCheck_5352_;
goto v_resetjp_5346_;
}
v_resetjp_5346_:
{
lean_object* v___x_5350_; 
if (v_isShared_5348_ == 0)
{
v___x_5350_ = v___x_5347_;
goto v_reusejp_5349_;
}
else
{
lean_object* v_reuseFailAlloc_5351_; 
v_reuseFailAlloc_5351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5351_, 0, v_a_5345_);
v___x_5350_ = v_reuseFailAlloc_5351_;
goto v_reusejp_5349_;
}
v_reusejp_5349_:
{
return v___x_5350_;
}
}
}
}
else
{
lean_object* v_a_5353_; lean_object* v___x_5355_; uint8_t v_isShared_5356_; uint8_t v_isSharedCheck_5365_; 
lean_dec_ref(v_infos_5231_);
lean_dec_ref(v_scope_5230_);
lean_dec_ref(v_cfg_5204_);
v_a_5353_ = lean_ctor_get(v___x_5299_, 0);
v_isSharedCheck_5365_ = !lean_is_exclusive(v___x_5299_);
if (v_isSharedCheck_5365_ == 0)
{
v___x_5355_ = v___x_5299_;
v_isShared_5356_ = v_isSharedCheck_5365_;
goto v_resetjp_5354_;
}
else
{
lean_inc(v_a_5353_);
lean_dec(v___x_5299_);
v___x_5355_ = lean_box(0);
v_isShared_5356_ = v_isSharedCheck_5365_;
goto v_resetjp_5354_;
}
v_resetjp_5354_:
{
lean_object* v___x_5357_; uint8_t v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5363_; 
v___x_5357_ = lean_io_error_to_string(v_a_5353_);
v___x_5358_ = 3;
v___x_5359_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5359_, 0, v___x_5357_);
lean_ctor_set_uint8(v___x_5359_, sizeof(void*)*1, v___x_5358_);
v___x_5360_ = lean_apply_2(v___y_5208_, v___x_5359_, lean_box(0));
v___x_5361_ = lean_box(0);
if (v_isShared_5356_ == 0)
{
lean_ctor_set(v___x_5355_, 0, v___x_5361_);
v___x_5363_ = v___x_5355_;
goto v_reusejp_5362_;
}
else
{
lean_object* v_reuseFailAlloc_5364_; 
v_reuseFailAlloc_5364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5364_, 0, v___x_5361_);
v___x_5363_ = v_reuseFailAlloc_5364_;
goto v_reusejp_5362_;
}
v_reusejp_5362_:
{
return v___x_5363_;
}
}
}
}
v___jp_5366_:
{
lean_object* v___x_5367_; 
v___x_5367_ = lean_io_prim_handle_flush(v_h_5206_);
lean_dec(v_h_5206_);
if (lean_obj_tag(v___x_5367_) == 0)
{
lean_object* v___x_5368_; lean_object* v___x_5369_; 
lean_dec_ref(v___x_5367_);
v___x_5368_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__20, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__20_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__20);
v___x_5369_ = lean_array_push(v___x_5368_, v_path_5207_);
v_a_5290_ = v___x_5369_;
goto v___jp_5289_;
}
else
{
lean_object* v_a_5370_; lean_object* v___x_5372_; uint8_t v_isShared_5373_; uint8_t v_isSharedCheck_5382_; 
lean_dec_ref(v_infos_5231_);
lean_dec_ref(v_scope_5230_);
lean_dec_ref(v_path_5207_);
lean_dec_ref(v_cfg_5204_);
v_a_5370_ = lean_ctor_get(v___x_5367_, 0);
v_isSharedCheck_5382_ = !lean_is_exclusive(v___x_5367_);
if (v_isSharedCheck_5382_ == 0)
{
v___x_5372_ = v___x_5367_;
v_isShared_5373_ = v_isSharedCheck_5382_;
goto v_resetjp_5371_;
}
else
{
lean_inc(v_a_5370_);
lean_dec(v___x_5367_);
v___x_5372_ = lean_box(0);
v_isShared_5373_ = v_isSharedCheck_5382_;
goto v_resetjp_5371_;
}
v_resetjp_5371_:
{
lean_object* v___x_5374_; uint8_t v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5380_; 
v___x_5374_ = lean_io_error_to_string(v_a_5370_);
v___x_5375_ = 3;
v___x_5376_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5376_, 0, v___x_5374_);
lean_ctor_set_uint8(v___x_5376_, sizeof(void*)*1, v___x_5375_);
v___x_5377_ = lean_apply_2(v___y_5208_, v___x_5376_, lean_box(0));
v___x_5378_ = lean_box(0);
if (v_isShared_5373_ == 0)
{
lean_ctor_set(v___x_5372_, 0, v___x_5378_);
v___x_5380_ = v___x_5372_;
goto v_reusejp_5379_;
}
else
{
lean_object* v_reuseFailAlloc_5381_; 
v_reuseFailAlloc_5381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5381_, 0, v___x_5378_);
v___x_5380_ = v_reuseFailAlloc_5381_;
goto v_reusejp_5379_;
}
v_reusejp_5379_:
{
return v___x_5380_;
}
}
}
}
v___jp_5383_:
{
if (lean_obj_tag(v___y_5384_) == 0)
{
lean_dec_ref(v___y_5384_);
goto v___jp_5366_;
}
else
{
lean_dec_ref(v_infos_5231_);
lean_dec_ref(v_scope_5230_);
lean_dec_ref(v___y_5208_);
lean_dec_ref(v_path_5207_);
lean_dec(v_h_5206_);
lean_dec_ref(v_cfg_5204_);
return v___y_5384_;
}
}
v___jp_5385_:
{
lean_object* v___x_5386_; 
v___x_5386_ = lean_io_prim_handle_flush(v_h_5206_);
lean_dec(v_h_5206_);
if (lean_obj_tag(v___x_5386_) == 0)
{
lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; lean_object* v___x_5397_; 
lean_dec_ref(v___x_5386_);
v___x_5387_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_5388_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_5389_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_5390_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__10));
v___x_5391_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__32, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__32_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__32);
lean_inc_ref(v_key_5232_);
v___x_5392_ = lean_array_push(v___x_5391_, v_key_5232_);
v___x_5393_ = lean_array_push(v___x_5392_, v___x_5387_);
v___x_5394_ = lean_array_push(v___x_5393_, v___x_5388_);
v___x_5395_ = lean_array_push(v___x_5394_, v___x_5389_);
v___x_5396_ = lean_array_push(v___x_5395_, v___x_5390_);
v___x_5397_ = lean_array_push(v___x_5396_, v_path_5207_);
v_a_5290_ = v___x_5397_;
goto v___jp_5289_;
}
else
{
lean_object* v_a_5398_; lean_object* v___x_5400_; uint8_t v_isShared_5401_; uint8_t v_isSharedCheck_5410_; 
lean_dec_ref(v_infos_5231_);
lean_dec_ref(v_scope_5230_);
lean_dec_ref(v_path_5207_);
lean_dec_ref(v_cfg_5204_);
v_a_5398_ = lean_ctor_get(v___x_5386_, 0);
v_isSharedCheck_5410_ = !lean_is_exclusive(v___x_5386_);
if (v_isSharedCheck_5410_ == 0)
{
v___x_5400_ = v___x_5386_;
v_isShared_5401_ = v_isSharedCheck_5410_;
goto v_resetjp_5399_;
}
else
{
lean_inc(v_a_5398_);
lean_dec(v___x_5386_);
v___x_5400_ = lean_box(0);
v_isShared_5401_ = v_isSharedCheck_5410_;
goto v_resetjp_5399_;
}
v_resetjp_5399_:
{
lean_object* v___x_5402_; uint8_t v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5408_; 
v___x_5402_ = lean_io_error_to_string(v_a_5398_);
v___x_5403_ = 3;
v___x_5404_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5404_, 0, v___x_5402_);
lean_ctor_set_uint8(v___x_5404_, sizeof(void*)*1, v___x_5403_);
v___x_5405_ = lean_apply_2(v___y_5208_, v___x_5404_, lean_box(0));
v___x_5406_ = lean_box(0);
if (v_isShared_5401_ == 0)
{
lean_ctor_set(v___x_5400_, 0, v___x_5406_);
v___x_5408_ = v___x_5400_;
goto v_reusejp_5407_;
}
else
{
lean_object* v_reuseFailAlloc_5409_; 
v_reuseFailAlloc_5409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5409_, 0, v___x_5406_);
v___x_5408_ = v_reuseFailAlloc_5409_;
goto v_reusejp_5407_;
}
v_reusejp_5407_:
{
return v___x_5408_;
}
}
}
}
v___jp_5411_:
{
if (lean_obj_tag(v___y_5412_) == 0)
{
lean_dec_ref(v___y_5412_);
goto v___jp_5385_;
}
else
{
lean_dec_ref(v_infos_5231_);
lean_dec_ref(v_scope_5230_);
lean_dec_ref(v___y_5208_);
lean_dec_ref(v_path_5207_);
lean_dec(v_h_5206_);
lean_dec_ref(v_cfg_5204_);
return v___y_5412_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___boxed(lean_object* v_cfg_5435_, lean_object* v___x_5436_, lean_object* v_h_5437_, lean_object* v_path_5438_, lean_object* v___y_5439_, lean_object* v___y_5440_){
_start:
{
lean_object* v_res_5441_; 
v_res_5441_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2(v_cfg_5435_, v___x_5436_, v_h_5437_, v_path_5438_, v___y_5439_);
return v_res_5441_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg___lam__0(lean_object* v_snd_5442_, lean_object* v___y_5443_, lean_object* v_a_x3f_5444_){
_start:
{
lean_object* v___x_5446_; 
v___x_5446_ = lean_io_remove_file(v_snd_5442_);
if (lean_obj_tag(v___x_5446_) == 0)
{
lean_object* v_a_5447_; lean_object* v___x_5449_; uint8_t v_isShared_5450_; uint8_t v_isSharedCheck_5454_; 
lean_dec_ref(v___y_5443_);
v_a_5447_ = lean_ctor_get(v___x_5446_, 0);
v_isSharedCheck_5454_ = !lean_is_exclusive(v___x_5446_);
if (v_isSharedCheck_5454_ == 0)
{
v___x_5449_ = v___x_5446_;
v_isShared_5450_ = v_isSharedCheck_5454_;
goto v_resetjp_5448_;
}
else
{
lean_inc(v_a_5447_);
lean_dec(v___x_5446_);
v___x_5449_ = lean_box(0);
v_isShared_5450_ = v_isSharedCheck_5454_;
goto v_resetjp_5448_;
}
v_resetjp_5448_:
{
lean_object* v___x_5452_; 
if (v_isShared_5450_ == 0)
{
v___x_5452_ = v___x_5449_;
goto v_reusejp_5451_;
}
else
{
lean_object* v_reuseFailAlloc_5453_; 
v_reuseFailAlloc_5453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5453_, 0, v_a_5447_);
v___x_5452_ = v_reuseFailAlloc_5453_;
goto v_reusejp_5451_;
}
v_reusejp_5451_:
{
return v___x_5452_;
}
}
}
else
{
lean_object* v_a_5455_; lean_object* v___x_5457_; uint8_t v_isShared_5458_; uint8_t v_isSharedCheck_5467_; 
v_a_5455_ = lean_ctor_get(v___x_5446_, 0);
v_isSharedCheck_5467_ = !lean_is_exclusive(v___x_5446_);
if (v_isSharedCheck_5467_ == 0)
{
v___x_5457_ = v___x_5446_;
v_isShared_5458_ = v_isSharedCheck_5467_;
goto v_resetjp_5456_;
}
else
{
lean_inc(v_a_5455_);
lean_dec(v___x_5446_);
v___x_5457_ = lean_box(0);
v_isShared_5458_ = v_isSharedCheck_5467_;
goto v_resetjp_5456_;
}
v_resetjp_5456_:
{
lean_object* v___x_5459_; uint8_t v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5465_; 
v___x_5459_ = lean_io_error_to_string(v_a_5455_);
v___x_5460_ = 3;
v___x_5461_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5461_, 0, v___x_5459_);
lean_ctor_set_uint8(v___x_5461_, sizeof(void*)*1, v___x_5460_);
v___x_5462_ = lean_apply_2(v___y_5443_, v___x_5461_, lean_box(0));
v___x_5463_ = lean_box(0);
if (v_isShared_5458_ == 0)
{
lean_ctor_set(v___x_5457_, 0, v___x_5463_);
v___x_5465_ = v___x_5457_;
goto v_reusejp_5464_;
}
else
{
lean_object* v_reuseFailAlloc_5466_; 
v_reuseFailAlloc_5466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5466_, 0, v___x_5463_);
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
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg___lam__0___boxed(lean_object* v_snd_5468_, lean_object* v___y_5469_, lean_object* v_a_x3f_5470_, lean_object* v___y_5471_){
_start:
{
lean_object* v_res_5472_; 
v_res_5472_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg___lam__0(v_snd_5468_, v___y_5469_, v_a_x3f_5470_);
lean_dec(v_a_x3f_5470_);
lean_dec_ref(v_snd_5468_);
return v_res_5472_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg(lean_object* v_f_5473_, lean_object* v___y_5474_){
_start:
{
lean_object* v___x_5476_; 
v___x_5476_ = lean_io_create_tempfile();
if (lean_obj_tag(v___x_5476_) == 0)
{
lean_object* v_a_5477_; lean_object* v_fst_5478_; lean_object* v_snd_5479_; lean_object* v_r_5480_; 
v_a_5477_ = lean_ctor_get(v___x_5476_, 0);
lean_inc(v_a_5477_);
lean_dec_ref(v___x_5476_);
v_fst_5478_ = lean_ctor_get(v_a_5477_, 0);
lean_inc(v_fst_5478_);
v_snd_5479_ = lean_ctor_get(v_a_5477_, 1);
lean_inc(v_snd_5479_);
lean_dec(v_a_5477_);
lean_inc_ref(v___y_5474_);
lean_inc(v_snd_5479_);
v_r_5480_ = lean_apply_4(v_f_5473_, v_fst_5478_, v_snd_5479_, v___y_5474_, lean_box(0));
if (lean_obj_tag(v_r_5480_) == 0)
{
lean_object* v_a_5481_; lean_object* v___x_5483_; uint8_t v_isShared_5484_; uint8_t v_isSharedCheck_5505_; 
v_a_5481_ = lean_ctor_get(v_r_5480_, 0);
v_isSharedCheck_5505_ = !lean_is_exclusive(v_r_5480_);
if (v_isSharedCheck_5505_ == 0)
{
v___x_5483_ = v_r_5480_;
v_isShared_5484_ = v_isSharedCheck_5505_;
goto v_resetjp_5482_;
}
else
{
lean_inc(v_a_5481_);
lean_dec(v_r_5480_);
v___x_5483_ = lean_box(0);
v_isShared_5484_ = v_isSharedCheck_5505_;
goto v_resetjp_5482_;
}
v_resetjp_5482_:
{
lean_object* v___x_5486_; 
lean_inc(v_a_5481_);
if (v_isShared_5484_ == 0)
{
lean_ctor_set_tag(v___x_5483_, 1);
v___x_5486_ = v___x_5483_;
goto v_reusejp_5485_;
}
else
{
lean_object* v_reuseFailAlloc_5504_; 
v_reuseFailAlloc_5504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5504_, 0, v_a_5481_);
v___x_5486_ = v_reuseFailAlloc_5504_;
goto v_reusejp_5485_;
}
v_reusejp_5485_:
{
lean_object* v___x_5487_; 
v___x_5487_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg___lam__0(v_snd_5479_, v___y_5474_, v___x_5486_);
lean_dec_ref(v___x_5486_);
lean_dec(v_snd_5479_);
if (lean_obj_tag(v___x_5487_) == 0)
{
lean_object* v___x_5489_; uint8_t v_isShared_5490_; uint8_t v_isSharedCheck_5494_; 
v_isSharedCheck_5494_ = !lean_is_exclusive(v___x_5487_);
if (v_isSharedCheck_5494_ == 0)
{
lean_object* v_unused_5495_; 
v_unused_5495_ = lean_ctor_get(v___x_5487_, 0);
lean_dec(v_unused_5495_);
v___x_5489_ = v___x_5487_;
v_isShared_5490_ = v_isSharedCheck_5494_;
goto v_resetjp_5488_;
}
else
{
lean_dec(v___x_5487_);
v___x_5489_ = lean_box(0);
v_isShared_5490_ = v_isSharedCheck_5494_;
goto v_resetjp_5488_;
}
v_resetjp_5488_:
{
lean_object* v___x_5492_; 
if (v_isShared_5490_ == 0)
{
lean_ctor_set(v___x_5489_, 0, v_a_5481_);
v___x_5492_ = v___x_5489_;
goto v_reusejp_5491_;
}
else
{
lean_object* v_reuseFailAlloc_5493_; 
v_reuseFailAlloc_5493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5493_, 0, v_a_5481_);
v___x_5492_ = v_reuseFailAlloc_5493_;
goto v_reusejp_5491_;
}
v_reusejp_5491_:
{
return v___x_5492_;
}
}
}
else
{
lean_object* v_a_5496_; lean_object* v___x_5498_; uint8_t v_isShared_5499_; uint8_t v_isSharedCheck_5503_; 
lean_dec(v_a_5481_);
v_a_5496_ = lean_ctor_get(v___x_5487_, 0);
v_isSharedCheck_5503_ = !lean_is_exclusive(v___x_5487_);
if (v_isSharedCheck_5503_ == 0)
{
v___x_5498_ = v___x_5487_;
v_isShared_5499_ = v_isSharedCheck_5503_;
goto v_resetjp_5497_;
}
else
{
lean_inc(v_a_5496_);
lean_dec(v___x_5487_);
v___x_5498_ = lean_box(0);
v_isShared_5499_ = v_isSharedCheck_5503_;
goto v_resetjp_5497_;
}
v_resetjp_5497_:
{
lean_object* v___x_5501_; 
if (v_isShared_5499_ == 0)
{
v___x_5501_ = v___x_5498_;
goto v_reusejp_5500_;
}
else
{
lean_object* v_reuseFailAlloc_5502_; 
v_reuseFailAlloc_5502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5502_, 0, v_a_5496_);
v___x_5501_ = v_reuseFailAlloc_5502_;
goto v_reusejp_5500_;
}
v_reusejp_5500_:
{
return v___x_5501_;
}
}
}
}
}
}
else
{
lean_object* v_a_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; 
v_a_5506_ = lean_ctor_get(v_r_5480_, 0);
lean_inc(v_a_5506_);
lean_dec_ref(v_r_5480_);
v___x_5507_ = lean_box(0);
v___x_5508_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg___lam__0(v_snd_5479_, v___y_5474_, v___x_5507_);
lean_dec(v_snd_5479_);
if (lean_obj_tag(v___x_5508_) == 0)
{
lean_object* v___x_5510_; uint8_t v_isShared_5511_; uint8_t v_isSharedCheck_5515_; 
v_isSharedCheck_5515_ = !lean_is_exclusive(v___x_5508_);
if (v_isSharedCheck_5515_ == 0)
{
lean_object* v_unused_5516_; 
v_unused_5516_ = lean_ctor_get(v___x_5508_, 0);
lean_dec(v_unused_5516_);
v___x_5510_ = v___x_5508_;
v_isShared_5511_ = v_isSharedCheck_5515_;
goto v_resetjp_5509_;
}
else
{
lean_dec(v___x_5508_);
v___x_5510_ = lean_box(0);
v_isShared_5511_ = v_isSharedCheck_5515_;
goto v_resetjp_5509_;
}
v_resetjp_5509_:
{
lean_object* v___x_5513_; 
if (v_isShared_5511_ == 0)
{
lean_ctor_set_tag(v___x_5510_, 1);
lean_ctor_set(v___x_5510_, 0, v_a_5506_);
v___x_5513_ = v___x_5510_;
goto v_reusejp_5512_;
}
else
{
lean_object* v_reuseFailAlloc_5514_; 
v_reuseFailAlloc_5514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5514_, 0, v_a_5506_);
v___x_5513_ = v_reuseFailAlloc_5514_;
goto v_reusejp_5512_;
}
v_reusejp_5512_:
{
return v___x_5513_;
}
}
}
else
{
lean_object* v_a_5517_; lean_object* v___x_5519_; uint8_t v_isShared_5520_; uint8_t v_isSharedCheck_5524_; 
lean_dec(v_a_5506_);
v_a_5517_ = lean_ctor_get(v___x_5508_, 0);
v_isSharedCheck_5524_ = !lean_is_exclusive(v___x_5508_);
if (v_isSharedCheck_5524_ == 0)
{
v___x_5519_ = v___x_5508_;
v_isShared_5520_ = v_isSharedCheck_5524_;
goto v_resetjp_5518_;
}
else
{
lean_inc(v_a_5517_);
lean_dec(v___x_5508_);
v___x_5519_ = lean_box(0);
v_isShared_5520_ = v_isSharedCheck_5524_;
goto v_resetjp_5518_;
}
v_resetjp_5518_:
{
lean_object* v___x_5522_; 
if (v_isShared_5520_ == 0)
{
v___x_5522_ = v___x_5519_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5523_; 
v_reuseFailAlloc_5523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5523_, 0, v_a_5517_);
v___x_5522_ = v_reuseFailAlloc_5523_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
return v___x_5522_;
}
}
}
}
}
else
{
lean_object* v_a_5525_; lean_object* v___x_5527_; uint8_t v_isShared_5528_; uint8_t v_isSharedCheck_5537_; 
lean_dec_ref(v_f_5473_);
v_a_5525_ = lean_ctor_get(v___x_5476_, 0);
v_isSharedCheck_5537_ = !lean_is_exclusive(v___x_5476_);
if (v_isSharedCheck_5537_ == 0)
{
v___x_5527_ = v___x_5476_;
v_isShared_5528_ = v_isSharedCheck_5537_;
goto v_resetjp_5526_;
}
else
{
lean_inc(v_a_5525_);
lean_dec(v___x_5476_);
v___x_5527_ = lean_box(0);
v_isShared_5528_ = v_isSharedCheck_5537_;
goto v_resetjp_5526_;
}
v_resetjp_5526_:
{
lean_object* v___x_5529_; uint8_t v___x_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5535_; 
v___x_5529_ = lean_io_error_to_string(v_a_5525_);
v___x_5530_ = 3;
v___x_5531_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5531_, 0, v___x_5529_);
lean_ctor_set_uint8(v___x_5531_, sizeof(void*)*1, v___x_5530_);
v___x_5532_ = lean_apply_2(v___y_5474_, v___x_5531_, lean_box(0));
v___x_5533_ = lean_box(0);
if (v_isShared_5528_ == 0)
{
lean_ctor_set(v___x_5527_, 0, v___x_5533_);
v___x_5535_ = v___x_5527_;
goto v_reusejp_5534_;
}
else
{
lean_object* v_reuseFailAlloc_5536_; 
v_reuseFailAlloc_5536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5536_, 0, v___x_5533_);
v___x_5535_ = v_reuseFailAlloc_5536_;
goto v_reusejp_5534_;
}
v_reusejp_5534_:
{
return v___x_5535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg___boxed(lean_object* v_f_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_){
_start:
{
lean_object* v_res_5541_; 
v_res_5541_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg(v_f_5538_, v___y_5539_);
return v_res_5541_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6(lean_object* v_00_u03b1_5542_, lean_object* v_f_5543_, lean_object* v___y_5544_){
_start:
{
lean_object* v___x_5546_; 
v___x_5546_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg(v_f_5543_, v___y_5544_);
return v___x_5546_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___boxed(lean_object* v_00_u03b1_5547_, lean_object* v_f_5548_, lean_object* v___y_5549_, lean_object* v___y_5550_){
_start:
{
lean_object* v_res_5551_; 
v_res_5551_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6(v_00_u03b1_5547_, v_f_5548_, v___y_5549_);
return v_res_5551_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7___redArg(lean_object* v___y_5552_, lean_object* v_h_5553_, lean_object* v___y_5554_){
_start:
{
lean_object* v_url_5556_; lean_object* v_path_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; 
v_url_5556_ = lean_ctor_get(v___y_5554_, 0);
lean_inc_ref(v_url_5556_);
v_path_5557_ = lean_ctor_get(v___y_5554_, 1);
lean_inc_ref(v_path_5557_);
lean_dec_ref(v___y_5554_);
v___x_5558_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__1));
v___x_5559_ = lean_string_append(v___x_5558_, v_url_5556_);
lean_dec_ref(v_url_5556_);
v___x_5560_ = l_IO_FS_Handle_putStrLn(v_h_5553_, v___x_5559_);
if (lean_obj_tag(v___x_5560_) == 0)
{
lean_object* v___x_5561_; lean_object* v___x_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; 
lean_dec_ref(v___x_5560_);
v___x_5561_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___redArg___closed__0));
v___x_5562_ = l_String_quote(v_path_5557_);
v___x_5563_ = lean_string_append(v___x_5561_, v___x_5562_);
lean_dec_ref(v___x_5562_);
v___x_5564_ = l_IO_FS_Handle_putStrLn(v_h_5553_, v___x_5563_);
if (lean_obj_tag(v___x_5564_) == 0)
{
lean_object* v_a_5565_; lean_object* v___x_5567_; uint8_t v_isShared_5568_; uint8_t v_isSharedCheck_5572_; 
lean_dec_ref(v___y_5552_);
v_a_5565_ = lean_ctor_get(v___x_5564_, 0);
v_isSharedCheck_5572_ = !lean_is_exclusive(v___x_5564_);
if (v_isSharedCheck_5572_ == 0)
{
v___x_5567_ = v___x_5564_;
v_isShared_5568_ = v_isSharedCheck_5572_;
goto v_resetjp_5566_;
}
else
{
lean_inc(v_a_5565_);
lean_dec(v___x_5564_);
v___x_5567_ = lean_box(0);
v_isShared_5568_ = v_isSharedCheck_5572_;
goto v_resetjp_5566_;
}
v_resetjp_5566_:
{
lean_object* v___x_5570_; 
if (v_isShared_5568_ == 0)
{
v___x_5570_ = v___x_5567_;
goto v_reusejp_5569_;
}
else
{
lean_object* v_reuseFailAlloc_5571_; 
v_reuseFailAlloc_5571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5571_, 0, v_a_5565_);
v___x_5570_ = v_reuseFailAlloc_5571_;
goto v_reusejp_5569_;
}
v_reusejp_5569_:
{
return v___x_5570_;
}
}
}
else
{
lean_object* v_a_5573_; lean_object* v___x_5575_; uint8_t v_isShared_5576_; uint8_t v_isSharedCheck_5585_; 
v_a_5573_ = lean_ctor_get(v___x_5564_, 0);
v_isSharedCheck_5585_ = !lean_is_exclusive(v___x_5564_);
if (v_isSharedCheck_5585_ == 0)
{
v___x_5575_ = v___x_5564_;
v_isShared_5576_ = v_isSharedCheck_5585_;
goto v_resetjp_5574_;
}
else
{
lean_inc(v_a_5573_);
lean_dec(v___x_5564_);
v___x_5575_ = lean_box(0);
v_isShared_5576_ = v_isSharedCheck_5585_;
goto v_resetjp_5574_;
}
v_resetjp_5574_:
{
lean_object* v___x_5577_; uint8_t v___x_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; lean_object* v___x_5583_; 
v___x_5577_ = lean_io_error_to_string(v_a_5573_);
v___x_5578_ = 3;
v___x_5579_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5579_, 0, v___x_5577_);
lean_ctor_set_uint8(v___x_5579_, sizeof(void*)*1, v___x_5578_);
v___x_5580_ = lean_apply_2(v___y_5552_, v___x_5579_, lean_box(0));
v___x_5581_ = lean_box(0);
if (v_isShared_5576_ == 0)
{
lean_ctor_set(v___x_5575_, 0, v___x_5581_);
v___x_5583_ = v___x_5575_;
goto v_reusejp_5582_;
}
else
{
lean_object* v_reuseFailAlloc_5584_; 
v_reuseFailAlloc_5584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5584_, 0, v___x_5581_);
v___x_5583_ = v_reuseFailAlloc_5584_;
goto v_reusejp_5582_;
}
v_reusejp_5582_:
{
return v___x_5583_;
}
}
}
}
else
{
lean_object* v_a_5586_; lean_object* v___x_5588_; uint8_t v_isShared_5589_; uint8_t v_isSharedCheck_5598_; 
lean_dec_ref(v_path_5557_);
v_a_5586_ = lean_ctor_get(v___x_5560_, 0);
v_isSharedCheck_5598_ = !lean_is_exclusive(v___x_5560_);
if (v_isSharedCheck_5598_ == 0)
{
v___x_5588_ = v___x_5560_;
v_isShared_5589_ = v_isSharedCheck_5598_;
goto v_resetjp_5587_;
}
else
{
lean_inc(v_a_5586_);
lean_dec(v___x_5560_);
v___x_5588_ = lean_box(0);
v_isShared_5589_ = v_isSharedCheck_5598_;
goto v_resetjp_5587_;
}
v_resetjp_5587_:
{
lean_object* v___x_5590_; uint8_t v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; lean_object* v___x_5596_; 
v___x_5590_ = lean_io_error_to_string(v_a_5586_);
v___x_5591_ = 3;
v___x_5592_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5592_, 0, v___x_5590_);
lean_ctor_set_uint8(v___x_5592_, sizeof(void*)*1, v___x_5591_);
v___x_5593_ = lean_apply_2(v___y_5552_, v___x_5592_, lean_box(0));
v___x_5594_ = lean_box(0);
if (v_isShared_5589_ == 0)
{
lean_ctor_set(v___x_5588_, 0, v___x_5594_);
v___x_5596_ = v___x_5588_;
goto v_reusejp_5595_;
}
else
{
lean_object* v_reuseFailAlloc_5597_; 
v_reuseFailAlloc_5597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5597_, 0, v___x_5594_);
v___x_5596_ = v_reuseFailAlloc_5597_;
goto v_reusejp_5595_;
}
v_reusejp_5595_:
{
return v___x_5596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7___redArg___boxed(lean_object* v___y_5599_, lean_object* v_h_5600_, lean_object* v___y_5601_, lean_object* v___y_5602_){
_start:
{
lean_object* v_res_5603_; 
v_res_5603_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7___redArg(v___y_5599_, v_h_5600_, v___y_5601_);
lean_dec(v_h_5600_);
return v_res_5603_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5(lean_object* v_h_5604_, lean_object* v_as_5605_, size_t v_i_5606_, size_t v_stop_5607_, lean_object* v_b_5608_, lean_object* v___y_5609_){
_start:
{
uint8_t v___x_5611_; 
v___x_5611_ = lean_usize_dec_eq(v_i_5606_, v_stop_5607_);
if (v___x_5611_ == 0)
{
lean_object* v___x_5612_; lean_object* v___x_5613_; 
v___x_5612_ = lean_array_uget_borrowed(v_as_5605_, v_i_5606_);
lean_inc(v___x_5612_);
lean_inc_ref(v___y_5609_);
v___x_5613_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7___redArg(v___y_5609_, v_h_5604_, v___x_5612_);
if (lean_obj_tag(v___x_5613_) == 0)
{
lean_object* v_a_5614_; size_t v___x_5615_; size_t v___x_5616_; 
v_a_5614_ = lean_ctor_get(v___x_5613_, 0);
lean_inc(v_a_5614_);
lean_dec_ref(v___x_5613_);
v___x_5615_ = ((size_t)1ULL);
v___x_5616_ = lean_usize_add(v_i_5606_, v___x_5615_);
v_i_5606_ = v___x_5616_;
v_b_5608_ = v_a_5614_;
goto _start;
}
else
{
lean_dec_ref(v___y_5609_);
return v___x_5613_;
}
}
else
{
lean_object* v___x_5618_; 
lean_dec_ref(v___y_5609_);
v___x_5618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5618_, 0, v_b_5608_);
return v___x_5618_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5___boxed(lean_object* v_h_5619_, lean_object* v_as_5620_, lean_object* v_i_5621_, lean_object* v_stop_5622_, lean_object* v_b_5623_, lean_object* v___y_5624_, lean_object* v___y_5625_){
_start:
{
size_t v_i_boxed_5626_; size_t v_stop_boxed_5627_; lean_object* v_res_5628_; 
v_i_boxed_5626_ = lean_unbox_usize(v_i_5621_);
lean_dec(v_i_5621_);
v_stop_boxed_5627_ = lean_unbox_usize(v_stop_5622_);
lean_dec(v_stop_5622_);
v_res_5628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5(v_h_5619_, v_as_5620_, v_i_boxed_5626_, v_stop_boxed_5627_, v_b_5623_, v___y_5624_);
lean_dec_ref(v_as_5620_);
lean_dec(v_h_5619_);
return v_res_5628_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9___redArg(lean_object* v___y_5629_, lean_object* v_h_5630_, lean_object* v___y_5631_){
_start:
{
lean_object* v_url_5633_; lean_object* v_path_5634_; lean_object* v___x_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; 
v_url_5633_ = lean_ctor_get(v___y_5631_, 0);
lean_inc_ref(v_url_5633_);
v_path_5634_ = lean_ctor_get(v___y_5631_, 1);
lean_inc_ref(v_path_5634_);
lean_dec_ref(v___y_5631_);
v___x_5635_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__0));
v___x_5636_ = l_String_quote(v_path_5634_);
v___x_5637_ = lean_string_append(v___x_5635_, v___x_5636_);
lean_dec_ref(v___x_5636_);
v___x_5638_ = l_IO_FS_Handle_putStrLn(v_h_5630_, v___x_5637_);
if (lean_obj_tag(v___x_5638_) == 0)
{
lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; 
lean_dec_ref(v___x_5638_);
v___x_5639_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___redArg___closed__1));
v___x_5640_ = lean_string_append(v___x_5639_, v_url_5633_);
lean_dec_ref(v_url_5633_);
v___x_5641_ = l_IO_FS_Handle_putStrLn(v_h_5630_, v___x_5640_);
if (lean_obj_tag(v___x_5641_) == 0)
{
lean_object* v_a_5642_; lean_object* v___x_5644_; uint8_t v_isShared_5645_; uint8_t v_isSharedCheck_5649_; 
lean_dec_ref(v___y_5629_);
v_a_5642_ = lean_ctor_get(v___x_5641_, 0);
v_isSharedCheck_5649_ = !lean_is_exclusive(v___x_5641_);
if (v_isSharedCheck_5649_ == 0)
{
v___x_5644_ = v___x_5641_;
v_isShared_5645_ = v_isSharedCheck_5649_;
goto v_resetjp_5643_;
}
else
{
lean_inc(v_a_5642_);
lean_dec(v___x_5641_);
v___x_5644_ = lean_box(0);
v_isShared_5645_ = v_isSharedCheck_5649_;
goto v_resetjp_5643_;
}
v_resetjp_5643_:
{
lean_object* v___x_5647_; 
if (v_isShared_5645_ == 0)
{
v___x_5647_ = v___x_5644_;
goto v_reusejp_5646_;
}
else
{
lean_object* v_reuseFailAlloc_5648_; 
v_reuseFailAlloc_5648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5648_, 0, v_a_5642_);
v___x_5647_ = v_reuseFailAlloc_5648_;
goto v_reusejp_5646_;
}
v_reusejp_5646_:
{
return v___x_5647_;
}
}
}
else
{
lean_object* v_a_5650_; lean_object* v___x_5652_; uint8_t v_isShared_5653_; uint8_t v_isSharedCheck_5662_; 
v_a_5650_ = lean_ctor_get(v___x_5641_, 0);
v_isSharedCheck_5662_ = !lean_is_exclusive(v___x_5641_);
if (v_isSharedCheck_5662_ == 0)
{
v___x_5652_ = v___x_5641_;
v_isShared_5653_ = v_isSharedCheck_5662_;
goto v_resetjp_5651_;
}
else
{
lean_inc(v_a_5650_);
lean_dec(v___x_5641_);
v___x_5652_ = lean_box(0);
v_isShared_5653_ = v_isSharedCheck_5662_;
goto v_resetjp_5651_;
}
v_resetjp_5651_:
{
lean_object* v___x_5654_; uint8_t v___x_5655_; lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v___x_5660_; 
v___x_5654_ = lean_io_error_to_string(v_a_5650_);
v___x_5655_ = 3;
v___x_5656_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5656_, 0, v___x_5654_);
lean_ctor_set_uint8(v___x_5656_, sizeof(void*)*1, v___x_5655_);
v___x_5657_ = lean_apply_2(v___y_5629_, v___x_5656_, lean_box(0));
v___x_5658_ = lean_box(0);
if (v_isShared_5653_ == 0)
{
lean_ctor_set(v___x_5652_, 0, v___x_5658_);
v___x_5660_ = v___x_5652_;
goto v_reusejp_5659_;
}
else
{
lean_object* v_reuseFailAlloc_5661_; 
v_reuseFailAlloc_5661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5661_, 0, v___x_5658_);
v___x_5660_ = v_reuseFailAlloc_5661_;
goto v_reusejp_5659_;
}
v_reusejp_5659_:
{
return v___x_5660_;
}
}
}
}
else
{
lean_object* v_a_5663_; lean_object* v___x_5665_; uint8_t v_isShared_5666_; uint8_t v_isSharedCheck_5675_; 
lean_dec_ref(v_url_5633_);
v_a_5663_ = lean_ctor_get(v___x_5638_, 0);
v_isSharedCheck_5675_ = !lean_is_exclusive(v___x_5638_);
if (v_isSharedCheck_5675_ == 0)
{
v___x_5665_ = v___x_5638_;
v_isShared_5666_ = v_isSharedCheck_5675_;
goto v_resetjp_5664_;
}
else
{
lean_inc(v_a_5663_);
lean_dec(v___x_5638_);
v___x_5665_ = lean_box(0);
v_isShared_5666_ = v_isSharedCheck_5675_;
goto v_resetjp_5664_;
}
v_resetjp_5664_:
{
lean_object* v___x_5667_; uint8_t v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v___x_5673_; 
v___x_5667_ = lean_io_error_to_string(v_a_5663_);
v___x_5668_ = 3;
v___x_5669_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5669_, 0, v___x_5667_);
lean_ctor_set_uint8(v___x_5669_, sizeof(void*)*1, v___x_5668_);
v___x_5670_ = lean_apply_2(v___y_5629_, v___x_5669_, lean_box(0));
v___x_5671_ = lean_box(0);
if (v_isShared_5666_ == 0)
{
lean_ctor_set(v___x_5665_, 0, v___x_5671_);
v___x_5673_ = v___x_5665_;
goto v_reusejp_5672_;
}
else
{
lean_object* v_reuseFailAlloc_5674_; 
v_reuseFailAlloc_5674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5674_, 0, v___x_5671_);
v___x_5673_ = v_reuseFailAlloc_5674_;
goto v_reusejp_5672_;
}
v_reusejp_5672_:
{
return v___x_5673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9___redArg___boxed(lean_object* v___y_5676_, lean_object* v_h_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_){
_start:
{
lean_object* v_res_5680_; 
v_res_5680_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9___redArg(v___y_5676_, v_h_5677_, v___y_5678_);
lean_dec(v_h_5677_);
return v_res_5680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6(lean_object* v_h_5681_, lean_object* v_as_5682_, size_t v_i_5683_, size_t v_stop_5684_, lean_object* v_b_5685_, lean_object* v___y_5686_){
_start:
{
uint8_t v___x_5688_; 
v___x_5688_ = lean_usize_dec_eq(v_i_5683_, v_stop_5684_);
if (v___x_5688_ == 0)
{
lean_object* v___x_5689_; lean_object* v___x_5690_; 
v___x_5689_ = lean_array_uget_borrowed(v_as_5682_, v_i_5683_);
lean_inc(v___x_5689_);
lean_inc_ref(v___y_5686_);
v___x_5690_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9___redArg(v___y_5686_, v_h_5681_, v___x_5689_);
if (lean_obj_tag(v___x_5690_) == 0)
{
lean_object* v_a_5691_; size_t v___x_5692_; size_t v___x_5693_; 
v_a_5691_ = lean_ctor_get(v___x_5690_, 0);
lean_inc(v_a_5691_);
lean_dec_ref(v___x_5690_);
v___x_5692_ = ((size_t)1ULL);
v___x_5693_ = lean_usize_add(v_i_5683_, v___x_5692_);
v_i_5683_ = v___x_5693_;
v_b_5685_ = v_a_5691_;
goto _start;
}
else
{
lean_dec_ref(v___y_5686_);
return v___x_5690_;
}
}
else
{
lean_object* v___x_5695_; 
lean_dec_ref(v___y_5686_);
v___x_5695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5695_, 0, v_b_5685_);
return v___x_5695_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6___boxed(lean_object* v_h_5696_, lean_object* v_as_5697_, lean_object* v_i_5698_, lean_object* v_stop_5699_, lean_object* v_b_5700_, lean_object* v___y_5701_, lean_object* v___y_5702_){
_start:
{
size_t v_i_boxed_5703_; size_t v_stop_boxed_5704_; lean_object* v_res_5705_; 
v_i_boxed_5703_ = lean_unbox_usize(v_i_5698_);
lean_dec(v_i_5698_);
v_stop_boxed_5704_ = lean_unbox_usize(v_stop_5699_);
lean_dec(v_stop_5699_);
v_res_5705_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6(v_h_5696_, v_as_5697_, v_i_boxed_5703_, v_stop_boxed_5704_, v_b_5700_, v___y_5701_);
lean_dec_ref(v_as_5697_);
lean_dec(v_h_5696_);
return v_res_5705_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5(lean_object* v_cfg_5706_, lean_object* v_h_5707_, lean_object* v_path_5708_, lean_object* v___y_5709_){
_start:
{
uint8_t v___y_5712_; uint8_t v___y_5718_; lean_object* v___y_5719_; uint32_t v___y_5720_; lean_object* v___y_5721_; uint8_t v_kind_5730_; lean_object* v_scope_5731_; lean_object* v_infos_5732_; lean_object* v_key_5733_; uint8_t v___y_5735_; uint32_t v___y_5736_; lean_object* v___y_5737_; uint8_t v___y_5742_; lean_object* v___y_5743_; lean_object* v___y_5744_; lean_object* v___y_5745_; lean_object* v___y_5746_; uint32_t v___y_5747_; lean_object* v___y_5748_; lean_object* v___y_5760_; uint8_t v___y_5761_; lean_object* v___y_5762_; uint32_t v___y_5763_; lean_object* v___y_5764_; uint8_t v___y_5769_; lean_object* v___y_5770_; lean_object* v___y_5771_; lean_object* v___y_5772_; uint32_t v___y_5773_; lean_object* v___y_5774_; lean_object* v___y_5784_; uint8_t v___y_5785_; lean_object* v___y_5786_; uint32_t v___y_5787_; lean_object* v___y_5788_; lean_object* v_a_5791_; lean_object* v___y_5887_; lean_object* v___y_5917_; 
v_kind_5730_ = lean_ctor_get_uint8(v_cfg_5706_, sizeof(void*)*3);
v_scope_5731_ = lean_ctor_get(v_cfg_5706_, 0);
lean_inc_ref(v_scope_5731_);
v_infos_5732_ = lean_ctor_get(v_cfg_5706_, 1);
lean_inc_ref(v_infos_5732_);
v_key_5733_ = lean_ctor_get(v_cfg_5706_, 2);
if (v_kind_5730_ == 0)
{
lean_object* v___x_5918_; lean_object* v___x_5919_; uint8_t v___x_5920_; 
v___x_5918_ = lean_unsigned_to_nat(0u);
v___x_5919_ = lean_array_get_size(v_infos_5732_);
v___x_5920_ = lean_nat_dec_lt(v___x_5918_, v___x_5919_);
if (v___x_5920_ == 0)
{
goto v___jp_5867_;
}
else
{
lean_object* v___x_5921_; uint8_t v___x_5922_; 
v___x_5921_ = lean_box(0);
v___x_5922_ = lean_nat_dec_le(v___x_5919_, v___x_5919_);
if (v___x_5922_ == 0)
{
if (v___x_5920_ == 0)
{
goto v___jp_5867_;
}
else
{
size_t v___x_5923_; size_t v___x_5924_; lean_object* v___x_5925_; 
v___x_5923_ = ((size_t)0ULL);
v___x_5924_ = lean_usize_of_nat(v___x_5919_);
lean_inc_ref(v___y_5709_);
v___x_5925_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5(v_h_5707_, v_infos_5732_, v___x_5923_, v___x_5924_, v___x_5921_, v___y_5709_);
v___y_5887_ = v___x_5925_;
goto v___jp_5886_;
}
}
else
{
size_t v___x_5926_; size_t v___x_5927_; lean_object* v___x_5928_; 
v___x_5926_ = ((size_t)0ULL);
v___x_5927_ = lean_usize_of_nat(v___x_5919_);
lean_inc_ref(v___y_5709_);
v___x_5928_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5(v_h_5707_, v_infos_5732_, v___x_5926_, v___x_5927_, v___x_5921_, v___y_5709_);
v___y_5887_ = v___x_5928_;
goto v___jp_5886_;
}
}
}
else
{
lean_object* v___x_5929_; lean_object* v___x_5930_; uint8_t v___x_5931_; 
v___x_5929_ = lean_unsigned_to_nat(0u);
v___x_5930_ = lean_array_get_size(v_infos_5732_);
v___x_5931_ = lean_nat_dec_lt(v___x_5929_, v___x_5930_);
if (v___x_5931_ == 0)
{
goto v___jp_5888_;
}
else
{
lean_object* v___x_5932_; uint8_t v___x_5933_; 
v___x_5932_ = lean_box(0);
v___x_5933_ = lean_nat_dec_le(v___x_5930_, v___x_5930_);
if (v___x_5933_ == 0)
{
if (v___x_5931_ == 0)
{
goto v___jp_5888_;
}
else
{
size_t v___x_5934_; size_t v___x_5935_; lean_object* v___x_5936_; 
v___x_5934_ = ((size_t)0ULL);
v___x_5935_ = lean_usize_of_nat(v___x_5930_);
lean_inc_ref(v___y_5709_);
v___x_5936_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6(v_h_5707_, v_infos_5732_, v___x_5934_, v___x_5935_, v___x_5932_, v___y_5709_);
v___y_5917_ = v___x_5936_;
goto v___jp_5916_;
}
}
else
{
size_t v___x_5937_; size_t v___x_5938_; lean_object* v___x_5939_; 
v___x_5937_ = ((size_t)0ULL);
v___x_5938_ = lean_usize_of_nat(v___x_5930_);
lean_inc_ref(v___y_5709_);
v___x_5939_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6(v_h_5707_, v_infos_5732_, v___x_5937_, v___x_5938_, v___x_5932_, v___y_5709_);
v___y_5917_ = v___x_5939_;
goto v___jp_5916_;
}
}
}
v___jp_5711_:
{
if (v___y_5712_ == 0)
{
lean_object* v___x_5713_; lean_object* v___x_5714_; 
v___x_5713_ = lean_box(0);
v___x_5714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5714_, 0, v___x_5713_);
return v___x_5714_;
}
else
{
lean_object* v___x_5715_; lean_object* v___x_5716_; 
v___x_5715_ = lean_box(0);
v___x_5716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5716_, 0, v___x_5715_);
return v___x_5716_;
}
}
v___jp_5717_:
{
lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; uint8_t v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; 
v___x_5722_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__0));
v___x_5723_ = lean_string_append(v___y_5721_, v___x_5722_);
v___x_5724_ = lean_uint32_to_nat(v___y_5720_);
v___x_5725_ = l_Nat_reprFast(v___x_5724_);
v___x_5726_ = lean_string_append(v___x_5723_, v___x_5725_);
lean_dec_ref(v___x_5725_);
v___x_5727_ = 3;
v___x_5728_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5728_, 0, v___x_5726_);
lean_ctor_set_uint8(v___x_5728_, sizeof(void*)*1, v___x_5727_);
v___x_5729_ = lean_apply_2(v___y_5719_, v___x_5728_, lean_box(0));
v___y_5712_ = v___y_5718_;
goto v___jp_5711_;
}
v___jp_5734_:
{
uint32_t v___x_5738_; uint8_t v___x_5739_; 
v___x_5738_ = 0;
v___x_5739_ = lean_uint32_dec_eq(v___y_5736_, v___x_5738_);
if (v___x_5739_ == 0)
{
lean_object* v_s_5740_; 
v_s_5740_ = lean_ctor_get(v_scope_5731_, 0);
lean_inc_ref(v_s_5740_);
lean_dec_ref(v_scope_5731_);
v___y_5718_ = v___y_5735_;
v___y_5719_ = v___y_5737_;
v___y_5720_ = v___y_5736_;
v___y_5721_ = v_s_5740_;
goto v___jp_5717_;
}
else
{
lean_dec_ref(v___y_5737_);
lean_dec_ref(v_scope_5731_);
v___y_5712_ = v___y_5735_;
goto v___jp_5711_;
}
}
v___jp_5741_:
{
lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; uint8_t v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; 
v___x_5749_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__1));
v___x_5750_ = lean_string_append(v___y_5748_, v___x_5749_);
lean_inc(v___y_5745_);
lean_inc(v___y_5746_);
lean_inc_ref(v___y_5743_);
v___x_5751_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5751_, 0, v___y_5743_);
lean_ctor_set(v___x_5751_, 1, v___y_5746_);
lean_ctor_set(v___x_5751_, 2, v___y_5745_);
v___x_5752_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5751_, v___y_5745_);
lean_dec_ref(v___x_5751_);
v___x_5753_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5753_, 0, v___y_5743_);
lean_ctor_set(v___x_5753_, 1, v___y_5746_);
lean_ctor_set(v___x_5753_, 2, v___x_5752_);
v___x_5754_ = l_String_Slice_toString(v___x_5753_);
lean_dec_ref(v___x_5753_);
v___x_5755_ = lean_string_append(v___x_5750_, v___x_5754_);
lean_dec_ref(v___x_5754_);
v___x_5756_ = 2;
v___x_5757_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5757_, 0, v___x_5755_);
lean_ctor_set_uint8(v___x_5757_, sizeof(void*)*1, v___x_5756_);
lean_inc_ref(v___y_5744_);
v___x_5758_ = lean_apply_2(v___y_5744_, v___x_5757_, lean_box(0));
v___y_5735_ = v___y_5742_;
v___y_5736_ = v___y_5747_;
v___y_5737_ = v___y_5744_;
goto v___jp_5734_;
}
v___jp_5759_:
{
lean_object* v___x_5765_; uint8_t v___x_5766_; 
v___x_5765_ = lean_string_utf8_byte_size(v___y_5760_);
v___x_5766_ = lean_nat_dec_eq(v___x_5765_, v___y_5762_);
if (v___x_5766_ == 0)
{
lean_object* v_s_5767_; 
v_s_5767_ = lean_ctor_get(v_scope_5731_, 0);
lean_inc_ref(v_s_5767_);
v___y_5742_ = v___y_5761_;
v___y_5743_ = v___y_5760_;
v___y_5744_ = v___y_5764_;
v___y_5745_ = v___x_5765_;
v___y_5746_ = v___y_5762_;
v___y_5747_ = v___y_5763_;
v___y_5748_ = v_s_5767_;
goto v___jp_5741_;
}
else
{
lean_dec(v___y_5762_);
lean_dec_ref(v___y_5760_);
v___y_5735_ = v___y_5761_;
v___y_5736_ = v___y_5763_;
v___y_5737_ = v___y_5764_;
goto v___jp_5734_;
}
}
v___jp_5768_:
{
lean_object* v___x_5775_; lean_object* v___x_5776_; lean_object* v___x_5777_; lean_object* v___x_5778_; lean_object* v___x_5779_; uint8_t v___x_5780_; lean_object* v___x_5781_; lean_object* v___x_5782_; 
v___x_5775_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_5776_ = lean_string_append(v___y_5774_, v___x_5775_);
v___x_5777_ = lean_string_append(v___x_5776_, v___y_5771_);
lean_dec_ref(v___y_5771_);
v___x_5778_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__2));
v___x_5779_ = lean_string_append(v___x_5777_, v___x_5778_);
v___x_5780_ = 3;
v___x_5781_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5781_, 0, v___x_5779_);
lean_ctor_set_uint8(v___x_5781_, sizeof(void*)*1, v___x_5780_);
lean_inc_ref(v___y_5709_);
v___x_5782_ = lean_apply_2(v___y_5709_, v___x_5781_, lean_box(0));
v___y_5760_ = v___y_5770_;
v___y_5761_ = v___y_5769_;
v___y_5762_ = v___y_5772_;
v___y_5763_ = v___y_5773_;
v___y_5764_ = v___y_5709_;
goto v___jp_5759_;
}
v___jp_5783_:
{
lean_object* v_s_5789_; 
v_s_5789_ = lean_ctor_get(v_scope_5731_, 0);
lean_inc_ref(v_s_5789_);
v___y_5769_ = v___y_5785_;
v___y_5770_ = v___y_5784_;
v___y_5771_ = v___y_5788_;
v___y_5772_ = v___y_5786_;
v___y_5773_ = v___y_5787_;
v___y_5774_ = v_s_5789_;
goto v___jp_5768_;
}
v___jp_5790_:
{
lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; uint8_t v___x_5797_; uint8_t v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; 
v___x_5792_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__3));
v___x_5793_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_5794_ = lean_box(0);
v___x_5795_ = lean_unsigned_to_nat(0u);
v___x_5796_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_5797_ = 1;
v___x_5798_ = 0;
v___x_5799_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_5799_, 0, v___x_5792_);
lean_ctor_set(v___x_5799_, 1, v___x_5793_);
lean_ctor_set(v___x_5799_, 2, v_a_5791_);
lean_ctor_set(v___x_5799_, 3, v___x_5794_);
lean_ctor_set(v___x_5799_, 4, v___x_5796_);
lean_ctor_set_uint8(v___x_5799_, sizeof(void*)*5, v___x_5797_);
lean_ctor_set_uint8(v___x_5799_, sizeof(void*)*5 + 1, v___x_5798_);
v___x_5800_ = lean_io_process_spawn(v___x_5799_);
if (lean_obj_tag(v___x_5800_) == 0)
{
lean_object* v_a_5801_; lean_object* v_stdout_5802_; lean_object* v_stderr_5803_; lean_object* v___x_5804_; lean_object* v___x_5805_; 
v_a_5801_ = lean_ctor_get(v___x_5800_, 0);
lean_inc(v_a_5801_);
lean_dec_ref(v___x_5800_);
v_stdout_5802_ = lean_ctor_get(v_a_5801_, 1);
lean_inc(v_stdout_5802_);
v_stderr_5803_ = lean_ctor_get(v_a_5801_, 2);
v___x_5804_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__4));
lean_inc(v_stdout_5802_);
lean_inc_ref(v___y_5709_);
v___x_5805_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__3(v___y_5709_, v_cfg_5706_, v_stderr_5803_, v_stdout_5802_, v___x_5804_);
if (lean_obj_tag(v___x_5805_) == 0)
{
lean_object* v_a_5806_; lean_object* v___x_5807_; 
v_a_5806_ = lean_ctor_get(v___x_5805_, 0);
lean_inc(v_a_5806_);
lean_dec_ref(v___x_5805_);
v___x_5807_ = lean_io_process_child_wait(v___x_5792_, v_a_5801_);
lean_dec(v_a_5801_);
if (lean_obj_tag(v___x_5807_) == 0)
{
lean_object* v_a_5808_; lean_object* v___x_5809_; 
v_a_5808_ = lean_ctor_get(v___x_5807_, 0);
lean_inc(v_a_5808_);
lean_dec_ref(v___x_5807_);
v___x_5809_ = l_IO_FS_Handle_readToEnd(v_stdout_5802_);
lean_dec(v_stdout_5802_);
if (lean_obj_tag(v___x_5809_) == 0)
{
lean_object* v_a_5810_; uint8_t v_didError_5811_; lean_object* v_numSuccesses_5812_; lean_object* v___x_5813_; uint8_t v___x_5814_; 
v_a_5810_ = lean_ctor_get(v___x_5809_, 0);
lean_inc(v_a_5810_);
lean_dec_ref(v___x_5809_);
v_didError_5811_ = lean_ctor_get_uint8(v_a_5806_, sizeof(void*)*1);
v_numSuccesses_5812_ = lean_ctor_get(v_a_5806_, 0);
lean_inc(v_numSuccesses_5812_);
lean_dec(v_a_5806_);
v___x_5813_ = lean_array_get_size(v_infos_5732_);
lean_dec_ref(v_infos_5732_);
v___x_5814_ = lean_nat_dec_lt(v_numSuccesses_5812_, v___x_5813_);
lean_dec(v_numSuccesses_5812_);
if (v___x_5814_ == 0)
{
uint32_t v___x_5815_; 
v___x_5815_ = lean_unbox_uint32(v_a_5808_);
lean_dec(v_a_5808_);
v___y_5760_ = v_a_5810_;
v___y_5761_ = v_didError_5811_;
v___y_5762_ = v___x_5795_;
v___y_5763_ = v___x_5815_;
v___y_5764_ = v___y_5709_;
goto v___jp_5759_;
}
else
{
if (v_kind_5730_ == 0)
{
lean_object* v___x_5816_; uint32_t v___x_5817_; 
v___x_5816_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___x_5817_ = lean_unbox_uint32(v_a_5808_);
lean_dec(v_a_5808_);
v___y_5784_ = v_a_5810_;
v___y_5785_ = v_didError_5811_;
v___y_5786_ = v___x_5795_;
v___y_5787_ = v___x_5817_;
v___y_5788_ = v___x_5816_;
goto v___jp_5783_;
}
else
{
lean_object* v___x_5818_; uint32_t v___x_5819_; 
v___x_5818_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___x_5819_ = lean_unbox_uint32(v_a_5808_);
lean_dec(v_a_5808_);
v___y_5784_ = v_a_5810_;
v___y_5785_ = v_didError_5811_;
v___y_5786_ = v___x_5795_;
v___y_5787_ = v___x_5819_;
v___y_5788_ = v___x_5818_;
goto v___jp_5783_;
}
}
}
else
{
lean_object* v_a_5820_; lean_object* v___x_5822_; uint8_t v_isShared_5823_; uint8_t v_isSharedCheck_5832_; 
lean_dec(v_a_5808_);
lean_dec(v_a_5806_);
lean_dec_ref(v_infos_5732_);
lean_dec_ref(v_scope_5731_);
v_a_5820_ = lean_ctor_get(v___x_5809_, 0);
v_isSharedCheck_5832_ = !lean_is_exclusive(v___x_5809_);
if (v_isSharedCheck_5832_ == 0)
{
v___x_5822_ = v___x_5809_;
v_isShared_5823_ = v_isSharedCheck_5832_;
goto v_resetjp_5821_;
}
else
{
lean_inc(v_a_5820_);
lean_dec(v___x_5809_);
v___x_5822_ = lean_box(0);
v_isShared_5823_ = v_isSharedCheck_5832_;
goto v_resetjp_5821_;
}
v_resetjp_5821_:
{
lean_object* v___x_5824_; uint8_t v___x_5825_; lean_object* v___x_5826_; lean_object* v___x_5827_; lean_object* v___x_5828_; lean_object* v___x_5830_; 
v___x_5824_ = lean_io_error_to_string(v_a_5820_);
v___x_5825_ = 3;
v___x_5826_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5826_, 0, v___x_5824_);
lean_ctor_set_uint8(v___x_5826_, sizeof(void*)*1, v___x_5825_);
v___x_5827_ = lean_apply_2(v___y_5709_, v___x_5826_, lean_box(0));
v___x_5828_ = lean_box(0);
if (v_isShared_5823_ == 0)
{
lean_ctor_set(v___x_5822_, 0, v___x_5828_);
v___x_5830_ = v___x_5822_;
goto v_reusejp_5829_;
}
else
{
lean_object* v_reuseFailAlloc_5831_; 
v_reuseFailAlloc_5831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5831_, 0, v___x_5828_);
v___x_5830_ = v_reuseFailAlloc_5831_;
goto v_reusejp_5829_;
}
v_reusejp_5829_:
{
return v___x_5830_;
}
}
}
}
else
{
lean_object* v_a_5833_; lean_object* v___x_5835_; uint8_t v_isShared_5836_; uint8_t v_isSharedCheck_5845_; 
lean_dec(v_a_5806_);
lean_dec(v_stdout_5802_);
lean_dec_ref(v_infos_5732_);
lean_dec_ref(v_scope_5731_);
v_a_5833_ = lean_ctor_get(v___x_5807_, 0);
v_isSharedCheck_5845_ = !lean_is_exclusive(v___x_5807_);
if (v_isSharedCheck_5845_ == 0)
{
v___x_5835_ = v___x_5807_;
v_isShared_5836_ = v_isSharedCheck_5845_;
goto v_resetjp_5834_;
}
else
{
lean_inc(v_a_5833_);
lean_dec(v___x_5807_);
v___x_5835_ = lean_box(0);
v_isShared_5836_ = v_isSharedCheck_5845_;
goto v_resetjp_5834_;
}
v_resetjp_5834_:
{
lean_object* v___x_5837_; uint8_t v___x_5838_; lean_object* v___x_5839_; lean_object* v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5843_; 
v___x_5837_ = lean_io_error_to_string(v_a_5833_);
v___x_5838_ = 3;
v___x_5839_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5839_, 0, v___x_5837_);
lean_ctor_set_uint8(v___x_5839_, sizeof(void*)*1, v___x_5838_);
v___x_5840_ = lean_apply_2(v___y_5709_, v___x_5839_, lean_box(0));
v___x_5841_ = lean_box(0);
if (v_isShared_5836_ == 0)
{
lean_ctor_set(v___x_5835_, 0, v___x_5841_);
v___x_5843_ = v___x_5835_;
goto v_reusejp_5842_;
}
else
{
lean_object* v_reuseFailAlloc_5844_; 
v_reuseFailAlloc_5844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5844_, 0, v___x_5841_);
v___x_5843_ = v_reuseFailAlloc_5844_;
goto v_reusejp_5842_;
}
v_reusejp_5842_:
{
return v___x_5843_;
}
}
}
}
else
{
lean_object* v_a_5846_; lean_object* v___x_5848_; uint8_t v_isShared_5849_; uint8_t v_isSharedCheck_5853_; 
lean_dec(v_stdout_5802_);
lean_dec(v_a_5801_);
lean_dec_ref(v_infos_5732_);
lean_dec_ref(v_scope_5731_);
lean_dec_ref(v___y_5709_);
v_a_5846_ = lean_ctor_get(v___x_5805_, 0);
v_isSharedCheck_5853_ = !lean_is_exclusive(v___x_5805_);
if (v_isSharedCheck_5853_ == 0)
{
v___x_5848_ = v___x_5805_;
v_isShared_5849_ = v_isSharedCheck_5853_;
goto v_resetjp_5847_;
}
else
{
lean_inc(v_a_5846_);
lean_dec(v___x_5805_);
v___x_5848_ = lean_box(0);
v_isShared_5849_ = v_isSharedCheck_5853_;
goto v_resetjp_5847_;
}
v_resetjp_5847_:
{
lean_object* v___x_5851_; 
if (v_isShared_5849_ == 0)
{
v___x_5851_ = v___x_5848_;
goto v_reusejp_5850_;
}
else
{
lean_object* v_reuseFailAlloc_5852_; 
v_reuseFailAlloc_5852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5852_, 0, v_a_5846_);
v___x_5851_ = v_reuseFailAlloc_5852_;
goto v_reusejp_5850_;
}
v_reusejp_5850_:
{
return v___x_5851_;
}
}
}
}
else
{
lean_object* v_a_5854_; lean_object* v___x_5856_; uint8_t v_isShared_5857_; uint8_t v_isSharedCheck_5866_; 
lean_dec_ref(v_infos_5732_);
lean_dec_ref(v_scope_5731_);
lean_dec_ref(v_cfg_5706_);
v_a_5854_ = lean_ctor_get(v___x_5800_, 0);
v_isSharedCheck_5866_ = !lean_is_exclusive(v___x_5800_);
if (v_isSharedCheck_5866_ == 0)
{
v___x_5856_ = v___x_5800_;
v_isShared_5857_ = v_isSharedCheck_5866_;
goto v_resetjp_5855_;
}
else
{
lean_inc(v_a_5854_);
lean_dec(v___x_5800_);
v___x_5856_ = lean_box(0);
v_isShared_5857_ = v_isSharedCheck_5866_;
goto v_resetjp_5855_;
}
v_resetjp_5855_:
{
lean_object* v___x_5858_; uint8_t v___x_5859_; lean_object* v___x_5860_; lean_object* v___x_5861_; lean_object* v___x_5862_; lean_object* v___x_5864_; 
v___x_5858_ = lean_io_error_to_string(v_a_5854_);
v___x_5859_ = 3;
v___x_5860_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5860_, 0, v___x_5858_);
lean_ctor_set_uint8(v___x_5860_, sizeof(void*)*1, v___x_5859_);
v___x_5861_ = lean_apply_2(v___y_5709_, v___x_5860_, lean_box(0));
v___x_5862_ = lean_box(0);
if (v_isShared_5857_ == 0)
{
lean_ctor_set(v___x_5856_, 0, v___x_5862_);
v___x_5864_ = v___x_5856_;
goto v_reusejp_5863_;
}
else
{
lean_object* v_reuseFailAlloc_5865_; 
v_reuseFailAlloc_5865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5865_, 0, v___x_5862_);
v___x_5864_ = v_reuseFailAlloc_5865_;
goto v_reusejp_5863_;
}
v_reusejp_5863_:
{
return v___x_5864_;
}
}
}
}
v___jp_5867_:
{
lean_object* v___x_5868_; 
v___x_5868_ = lean_io_prim_handle_flush(v_h_5707_);
if (lean_obj_tag(v___x_5868_) == 0)
{
lean_object* v___x_5869_; lean_object* v___x_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; 
lean_dec_ref(v___x_5868_);
v___x_5869_ = lean_unsigned_to_nat(11u);
v___x_5870_ = lean_mk_empty_array_with_capacity(v___x_5869_);
lean_dec_ref(v___x_5870_);
v___x_5871_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__20, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__20_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__20);
v___x_5872_ = lean_array_push(v___x_5871_, v_path_5708_);
v_a_5791_ = v___x_5872_;
goto v___jp_5790_;
}
else
{
lean_object* v_a_5873_; lean_object* v___x_5875_; uint8_t v_isShared_5876_; uint8_t v_isSharedCheck_5885_; 
lean_dec_ref(v_infos_5732_);
lean_dec_ref(v_scope_5731_);
lean_dec_ref(v_path_5708_);
lean_dec_ref(v_cfg_5706_);
v_a_5873_ = lean_ctor_get(v___x_5868_, 0);
v_isSharedCheck_5885_ = !lean_is_exclusive(v___x_5868_);
if (v_isSharedCheck_5885_ == 0)
{
v___x_5875_ = v___x_5868_;
v_isShared_5876_ = v_isSharedCheck_5885_;
goto v_resetjp_5874_;
}
else
{
lean_inc(v_a_5873_);
lean_dec(v___x_5868_);
v___x_5875_ = lean_box(0);
v_isShared_5876_ = v_isSharedCheck_5885_;
goto v_resetjp_5874_;
}
v_resetjp_5874_:
{
lean_object* v___x_5877_; uint8_t v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5883_; 
v___x_5877_ = lean_io_error_to_string(v_a_5873_);
v___x_5878_ = 3;
v___x_5879_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5879_, 0, v___x_5877_);
lean_ctor_set_uint8(v___x_5879_, sizeof(void*)*1, v___x_5878_);
v___x_5880_ = lean_apply_2(v___y_5709_, v___x_5879_, lean_box(0));
v___x_5881_ = lean_box(0);
if (v_isShared_5876_ == 0)
{
lean_ctor_set(v___x_5875_, 0, v___x_5881_);
v___x_5883_ = v___x_5875_;
goto v_reusejp_5882_;
}
else
{
lean_object* v_reuseFailAlloc_5884_; 
v_reuseFailAlloc_5884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5884_, 0, v___x_5881_);
v___x_5883_ = v_reuseFailAlloc_5884_;
goto v_reusejp_5882_;
}
v_reusejp_5882_:
{
return v___x_5883_;
}
}
}
}
v___jp_5886_:
{
if (lean_obj_tag(v___y_5887_) == 0)
{
lean_dec_ref(v___y_5887_);
goto v___jp_5867_;
}
else
{
lean_dec_ref(v_infos_5732_);
lean_dec_ref(v_scope_5731_);
lean_dec_ref(v___y_5709_);
lean_dec_ref(v_path_5708_);
lean_dec_ref(v_cfg_5706_);
return v___y_5887_;
}
}
v___jp_5888_:
{
lean_object* v___x_5889_; 
v___x_5889_ = lean_io_prim_handle_flush(v_h_5707_);
if (lean_obj_tag(v___x_5889_) == 0)
{
lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; lean_object* v___x_5902_; 
lean_dec_ref(v___x_5889_);
v___x_5890_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_5891_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_5892_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_5893_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__10));
v___x_5894_ = lean_unsigned_to_nat(17u);
v___x_5895_ = lean_mk_empty_array_with_capacity(v___x_5894_);
lean_dec_ref(v___x_5895_);
v___x_5896_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__32, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__32_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___closed__32);
lean_inc_ref(v_key_5733_);
v___x_5897_ = lean_array_push(v___x_5896_, v_key_5733_);
v___x_5898_ = lean_array_push(v___x_5897_, v___x_5890_);
v___x_5899_ = lean_array_push(v___x_5898_, v___x_5891_);
v___x_5900_ = lean_array_push(v___x_5899_, v___x_5892_);
v___x_5901_ = lean_array_push(v___x_5900_, v___x_5893_);
v___x_5902_ = lean_array_push(v___x_5901_, v_path_5708_);
v_a_5791_ = v___x_5902_;
goto v___jp_5790_;
}
else
{
lean_object* v_a_5903_; lean_object* v___x_5905_; uint8_t v_isShared_5906_; uint8_t v_isSharedCheck_5915_; 
lean_dec_ref(v_infos_5732_);
lean_dec_ref(v_scope_5731_);
lean_dec_ref(v_path_5708_);
lean_dec_ref(v_cfg_5706_);
v_a_5903_ = lean_ctor_get(v___x_5889_, 0);
v_isSharedCheck_5915_ = !lean_is_exclusive(v___x_5889_);
if (v_isSharedCheck_5915_ == 0)
{
v___x_5905_ = v___x_5889_;
v_isShared_5906_ = v_isSharedCheck_5915_;
goto v_resetjp_5904_;
}
else
{
lean_inc(v_a_5903_);
lean_dec(v___x_5889_);
v___x_5905_ = lean_box(0);
v_isShared_5906_ = v_isSharedCheck_5915_;
goto v_resetjp_5904_;
}
v_resetjp_5904_:
{
lean_object* v___x_5907_; uint8_t v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5913_; 
v___x_5907_ = lean_io_error_to_string(v_a_5903_);
v___x_5908_ = 3;
v___x_5909_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5909_, 0, v___x_5907_);
lean_ctor_set_uint8(v___x_5909_, sizeof(void*)*1, v___x_5908_);
v___x_5910_ = lean_apply_2(v___y_5709_, v___x_5909_, lean_box(0));
v___x_5911_ = lean_box(0);
if (v_isShared_5906_ == 0)
{
lean_ctor_set(v___x_5905_, 0, v___x_5911_);
v___x_5913_ = v___x_5905_;
goto v_reusejp_5912_;
}
else
{
lean_object* v_reuseFailAlloc_5914_; 
v_reuseFailAlloc_5914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5914_, 0, v___x_5911_);
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
v___jp_5916_:
{
if (lean_obj_tag(v___y_5917_) == 0)
{
lean_dec_ref(v___y_5917_);
goto v___jp_5888_;
}
else
{
lean_dec_ref(v_infos_5732_);
lean_dec_ref(v_scope_5731_);
lean_dec_ref(v___y_5709_);
lean_dec_ref(v_path_5708_);
lean_dec_ref(v_cfg_5706_);
return v___y_5917_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5___boxed(lean_object* v_cfg_5940_, lean_object* v_h_5941_, lean_object* v_path_5942_, lean_object* v___y_5943_, lean_object* v___y_5944_){
_start:
{
lean_object* v_res_5945_; 
v_res_5945_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5(v_cfg_5940_, v_h_5941_, v_path_5942_, v___y_5943_);
lean_dec(v_h_5941_);
return v_res_5945_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(lean_object* v_cfg_5946_, lean_object* v_a_5947_){
_start:
{
lean_object* v___f_5949_; lean_object* v___x_5950_; 
v___f_5949_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5___boxed), 5, 1);
lean_closure_set(v___f_5949_, 0, v_cfg_5946_);
v___x_5950_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg(v___f_5949_, v_a_5947_);
return v___x_5950_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___boxed(lean_object* v_cfg_5951_, lean_object* v_a_5952_, lean_object* v_a_5953_){
_start:
{
lean_object* v_res_5954_; 
v_res_5954_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(v_cfg_5951_, v_a_5952_);
return v_res_5954_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7(lean_object* v___y_5955_, lean_object* v_h_5956_, lean_object* v_x_5957_, lean_object* v___y_5958_){
_start:
{
lean_object* v___x_5960_; 
v___x_5960_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7___redArg(v___y_5955_, v_h_5956_, v___y_5958_);
return v___x_5960_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7___boxed(lean_object* v___y_5961_, lean_object* v_h_5962_, lean_object* v_x_5963_, lean_object* v___y_5964_, lean_object* v___y_5965_){
_start:
{
lean_object* v_res_5966_; 
v_res_5966_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__5_spec__7(v___y_5961_, v_h_5962_, v_x_5963_, v___y_5964_);
lean_dec(v_h_5962_);
return v_res_5966_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9(lean_object* v___y_5967_, lean_object* v_h_5968_, lean_object* v_x_5969_, lean_object* v___y_5970_){
_start:
{
lean_object* v___x_5972_; 
v___x_5972_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9___redArg(v___y_5967_, v_h_5968_, v___y_5970_);
return v___x_5972_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9___boxed(lean_object* v___y_5973_, lean_object* v_h_5974_, lean_object* v_x_5975_, lean_object* v___y_5976_, lean_object* v___y_5977_){
_start:
{
lean_object* v_res_5978_; 
v_res_5978_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__0___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5_spec__6_spec__9(v___y_5973_, v_h_5974_, v_x_5975_, v___y_5976_);
lean_dec(v_h_5974_);
return v_res_5978_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts___elam__1_spec__0(lean_object* v___f_5979_, lean_object* v_as_5980_, size_t v_i_5981_, size_t v_stop_5982_, lean_object* v_b_5983_, lean_object* v___y_5984_){
_start:
{
uint8_t v___x_5986_; 
v___x_5986_ = lean_usize_dec_eq(v_i_5981_, v_stop_5982_);
if (v___x_5986_ == 0)
{
lean_object* v___x_5987_; lean_object* v___x_5988_; 
v___x_5987_ = lean_array_uget_borrowed(v_as_5980_, v_i_5981_);
lean_inc_ref(v___f_5979_);
lean_inc_ref(v___y_5984_);
lean_inc(v___x_5987_);
v___x_5988_ = lean_apply_4(v___f_5979_, v_b_5983_, v___x_5987_, v___y_5984_, lean_box(0));
if (lean_obj_tag(v___x_5988_) == 0)
{
lean_object* v_a_5989_; size_t v___x_5990_; size_t v___x_5991_; 
v_a_5989_ = lean_ctor_get(v___x_5988_, 0);
lean_inc(v_a_5989_);
lean_dec_ref(v___x_5988_);
v___x_5990_ = ((size_t)1ULL);
v___x_5991_ = lean_usize_add(v_i_5981_, v___x_5990_);
v_i_5981_ = v___x_5991_;
v_b_5983_ = v_a_5989_;
goto _start;
}
else
{
lean_dec_ref(v___y_5984_);
lean_dec_ref(v___f_5979_);
return v___x_5988_;
}
}
else
{
lean_object* v___x_5993_; 
lean_dec_ref(v___y_5984_);
lean_dec_ref(v___f_5979_);
v___x_5993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5993_, 0, v_b_5983_);
return v___x_5993_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts___elam__1_spec__0___boxed(lean_object* v___f_5994_, lean_object* v_as_5995_, lean_object* v_i_5996_, lean_object* v_stop_5997_, lean_object* v_b_5998_, lean_object* v___y_5999_, lean_object* v___y_6000_){
_start:
{
size_t v_i_boxed_6001_; size_t v_stop_boxed_6002_; lean_object* v_res_6003_; 
v_i_boxed_6001_ = lean_unbox_usize(v_i_5996_);
lean_dec(v_i_5996_);
v_stop_boxed_6002_ = lean_unbox_usize(v_stop_5997_);
lean_dec(v_stop_5997_);
v_res_6003_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts___elam__1_spec__0(v___f_5994_, v_as_5995_, v_i_boxed_6001_, v_stop_boxed_6002_, v_b_5998_, v___y_5999_);
lean_dec_ref(v_as_5995_);
return v_res_6003_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___elam__1(lean_object* v_cache_6004_, lean_object* v_service_6005_, lean_object* v_scope_6006_, uint8_t v_force_6007_, lean_object* v___f_6008_, lean_object* v_s_6009_, lean_object* v_descr_6010_, lean_object* v___y_6011_){
_start:
{
uint64_t v_hash_6013_; lean_object* v_ext_6014_; lean_object* v___y_6016_; lean_object* v___y_6022_; uint8_t v_a_6023_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___y_6028_; lean_object* v___x_6071_; lean_object* v___x_6072_; uint8_t v___x_6073_; 
v_hash_6013_ = lean_ctor_get_uint64(v_descr_6010_, sizeof(void*)*1);
v_ext_6014_ = lean_ctor_get(v_descr_6010_, 0);
v___x_6025_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_6026_ = l_System_FilePath_join(v_cache_6004_, v___x_6025_);
v___x_6071_ = lean_string_utf8_byte_size(v_ext_6014_);
v___x_6072_ = lean_unsigned_to_nat(0u);
v___x_6073_ = lean_nat_dec_eq(v___x_6071_, v___x_6072_);
if (v___x_6073_ == 0)
{
lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; 
v___x_6074_ = l_Lake_Hash_hex(v_hash_6013_);
v___x_6075_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_6076_ = lean_string_append(v___x_6074_, v___x_6075_);
v___x_6077_ = lean_string_append(v___x_6076_, v_ext_6014_);
v___y_6028_ = v___x_6077_;
goto v___jp_6027_;
}
else
{
lean_object* v___x_6078_; 
v___x_6078_ = l_Lake_Hash_hex(v_hash_6013_);
v___y_6028_ = v___x_6078_;
goto v___jp_6027_;
}
v___jp_6015_:
{
lean_object* v_url_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; 
v_url_6017_ = l_Lake_CacheService_artifactUrl(v_hash_6013_, v_service_6005_, v_scope_6006_);
v___x_6018_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6018_, 0, v_url_6017_);
lean_ctor_set(v___x_6018_, 1, v___y_6016_);
lean_ctor_set(v___x_6018_, 2, v_descr_6010_);
v___x_6019_ = lean_array_push(v_s_6009_, v___x_6018_);
v___x_6020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6020_, 0, v___x_6019_);
return v___x_6020_;
}
v___jp_6021_:
{
if (v_a_6023_ == 0)
{
v___y_6016_ = v___y_6022_;
goto v___jp_6015_;
}
else
{
lean_object* v___x_6024_; 
lean_dec_ref(v___y_6022_);
lean_dec_ref(v_descr_6010_);
lean_dec_ref(v_scope_6006_);
lean_dec_ref(v_service_6005_);
v___x_6024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6024_, 0, v_s_6009_);
return v___x_6024_;
}
}
v___jp_6027_:
{
lean_object* v_path_6029_; 
v_path_6029_ = l_System_FilePath_join(v___x_6026_, v___y_6028_);
if (v_force_6007_ == 0)
{
uint8_t v___x_6030_; lean_object* v___x_6031_; uint8_t v___x_6032_; 
v___x_6030_ = l_System_FilePath_pathExists(v_path_6029_);
v___x_6031_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_6032_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__4, &l_Lake_CacheService_downloadArtifact___closed__4_once, _init_l_Lake_CacheService_downloadArtifact___closed__4);
if (v___x_6032_ == 0)
{
lean_dec_ref(v___y_6011_);
lean_dec_ref(v___f_6008_);
v___y_6022_ = v_path_6029_;
v_a_6023_ = v___x_6030_;
goto v___jp_6021_;
}
else
{
lean_object* v___x_6033_; uint8_t v___x_6034_; 
v___x_6033_ = lean_box(0);
v___x_6034_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__5, &l_Lake_CacheService_downloadArtifact___closed__5_once, _init_l_Lake_CacheService_downloadArtifact___closed__5);
if (v___x_6034_ == 0)
{
if (v___x_6032_ == 0)
{
lean_dec_ref(v___y_6011_);
lean_dec_ref(v___f_6008_);
v___y_6022_ = v_path_6029_;
v_a_6023_ = v___x_6030_;
goto v___jp_6021_;
}
else
{
size_t v___x_6035_; size_t v___x_6036_; lean_object* v___x_6037_; 
v___x_6035_ = ((size_t)0ULL);
v___x_6036_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
v___x_6037_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts___elam__1_spec__0(v___f_6008_, v___x_6031_, v___x_6035_, v___x_6036_, v___x_6033_, v___y_6011_);
if (lean_obj_tag(v___x_6037_) == 0)
{
lean_dec_ref(v___x_6037_);
v___y_6022_ = v_path_6029_;
v_a_6023_ = v___x_6030_;
goto v___jp_6021_;
}
else
{
lean_object* v_a_6038_; lean_object* v___x_6040_; uint8_t v_isShared_6041_; uint8_t v_isSharedCheck_6045_; 
lean_dec_ref(v_path_6029_);
lean_dec_ref(v_descr_6010_);
lean_dec_ref(v_s_6009_);
lean_dec_ref(v_scope_6006_);
lean_dec_ref(v_service_6005_);
v_a_6038_ = lean_ctor_get(v___x_6037_, 0);
v_isSharedCheck_6045_ = !lean_is_exclusive(v___x_6037_);
if (v_isSharedCheck_6045_ == 0)
{
v___x_6040_ = v___x_6037_;
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
else
{
lean_inc(v_a_6038_);
lean_dec(v___x_6037_);
v___x_6040_ = lean_box(0);
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
v_resetjp_6039_:
{
lean_object* v___x_6043_; 
if (v_isShared_6041_ == 0)
{
v___x_6043_ = v___x_6040_;
goto v_reusejp_6042_;
}
else
{
lean_object* v_reuseFailAlloc_6044_; 
v_reuseFailAlloc_6044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6044_, 0, v_a_6038_);
v___x_6043_ = v_reuseFailAlloc_6044_;
goto v_reusejp_6042_;
}
v_reusejp_6042_:
{
return v___x_6043_;
}
}
}
}
}
else
{
size_t v___x_6046_; size_t v___x_6047_; lean_object* v___x_6048_; 
v___x_6046_ = ((size_t)0ULL);
v___x_6047_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
v___x_6048_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts___elam__1_spec__0(v___f_6008_, v___x_6031_, v___x_6046_, v___x_6047_, v___x_6033_, v___y_6011_);
if (lean_obj_tag(v___x_6048_) == 0)
{
lean_dec_ref(v___x_6048_);
v___y_6022_ = v_path_6029_;
v_a_6023_ = v___x_6030_;
goto v___jp_6021_;
}
else
{
lean_object* v_a_6049_; lean_object* v___x_6051_; uint8_t v_isShared_6052_; uint8_t v_isSharedCheck_6056_; 
lean_dec_ref(v_path_6029_);
lean_dec_ref(v_descr_6010_);
lean_dec_ref(v_s_6009_);
lean_dec_ref(v_scope_6006_);
lean_dec_ref(v_service_6005_);
v_a_6049_ = lean_ctor_get(v___x_6048_, 0);
v_isSharedCheck_6056_ = !lean_is_exclusive(v___x_6048_);
if (v_isSharedCheck_6056_ == 0)
{
v___x_6051_ = v___x_6048_;
v_isShared_6052_ = v_isSharedCheck_6056_;
goto v_resetjp_6050_;
}
else
{
lean_inc(v_a_6049_);
lean_dec(v___x_6048_);
v___x_6051_ = lean_box(0);
v_isShared_6052_ = v_isSharedCheck_6056_;
goto v_resetjp_6050_;
}
v_resetjp_6050_:
{
lean_object* v___x_6054_; 
if (v_isShared_6052_ == 0)
{
v___x_6054_ = v___x_6051_;
goto v_reusejp_6053_;
}
else
{
lean_object* v_reuseFailAlloc_6055_; 
v_reuseFailAlloc_6055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6055_, 0, v_a_6049_);
v___x_6054_ = v_reuseFailAlloc_6055_;
goto v_reusejp_6053_;
}
v_reusejp_6053_:
{
return v___x_6054_;
}
}
}
}
}
}
else
{
lean_object* v___x_6057_; 
lean_dec_ref(v___f_6008_);
v___x_6057_ = l_Lake_removeFileIfExists(v_path_6029_);
if (lean_obj_tag(v___x_6057_) == 0)
{
lean_dec_ref(v___x_6057_);
lean_dec_ref(v___y_6011_);
v___y_6016_ = v_path_6029_;
goto v___jp_6015_;
}
else
{
lean_object* v_a_6058_; lean_object* v___x_6060_; uint8_t v_isShared_6061_; uint8_t v_isSharedCheck_6070_; 
lean_dec_ref(v_path_6029_);
lean_dec_ref(v_descr_6010_);
lean_dec_ref(v_s_6009_);
lean_dec_ref(v_scope_6006_);
lean_dec_ref(v_service_6005_);
v_a_6058_ = lean_ctor_get(v___x_6057_, 0);
v_isSharedCheck_6070_ = !lean_is_exclusive(v___x_6057_);
if (v_isSharedCheck_6070_ == 0)
{
v___x_6060_ = v___x_6057_;
v_isShared_6061_ = v_isSharedCheck_6070_;
goto v_resetjp_6059_;
}
else
{
lean_inc(v_a_6058_);
lean_dec(v___x_6057_);
v___x_6060_ = lean_box(0);
v_isShared_6061_ = v_isSharedCheck_6070_;
goto v_resetjp_6059_;
}
v_resetjp_6059_:
{
lean_object* v___x_6062_; uint8_t v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6068_; 
v___x_6062_ = lean_io_error_to_string(v_a_6058_);
v___x_6063_ = 3;
v___x_6064_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6064_, 0, v___x_6062_);
lean_ctor_set_uint8(v___x_6064_, sizeof(void*)*1, v___x_6063_);
v___x_6065_ = lean_apply_2(v___y_6011_, v___x_6064_, lean_box(0));
v___x_6066_ = lean_box(0);
if (v_isShared_6061_ == 0)
{
lean_ctor_set(v___x_6060_, 0, v___x_6066_);
v___x_6068_ = v___x_6060_;
goto v_reusejp_6067_;
}
else
{
lean_object* v_reuseFailAlloc_6069_; 
v_reuseFailAlloc_6069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6069_, 0, v___x_6066_);
v___x_6068_ = v_reuseFailAlloc_6069_;
goto v_reusejp_6067_;
}
v_reusejp_6067_:
{
return v___x_6068_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___elam__1___boxed(lean_object* v_cache_6079_, lean_object* v_service_6080_, lean_object* v_scope_6081_, lean_object* v_force_6082_, lean_object* v___f_6083_, lean_object* v_s_6084_, lean_object* v_descr_6085_, lean_object* v___y_6086_, lean_object* v___y_6087_){
_start:
{
uint8_t v_force_boxed_6088_; lean_object* v_res_6089_; 
v_force_boxed_6088_ = lean_unbox(v_force_6082_);
v_res_6089_ = l_Lake_CacheService_downloadArtifacts___elam__1(v_cache_6079_, v_service_6080_, v_scope_6081_, v_force_boxed_6088_, v___f_6083_, v_s_6084_, v_descr_6085_, v___y_6086_);
return v_res_6089_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__2(lean_object* v_a_6090_, lean_object* v_cfg_6091_){
_start:
{
lean_object* v___f_6093_; lean_object* v___x_6094_; 
v___f_6093_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___elam__2___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__5___boxed), 5, 1);
lean_closure_set(v___f_6093_, 0, v_cfg_6091_);
v___x_6094_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__6___redArg(v___f_6093_, v_a_6090_);
return v___x_6094_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__2___boxed(lean_object* v_a_6095_, lean_object* v_cfg_6096_, lean_object* v_a_6097_){
_start:
{
lean_object* v_res_6098_; 
v_res_6098_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__2(v_a_6095_, v_cfg_6096_);
return v_res_6098_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3_spec__3(lean_object* v___y_6099_, lean_object* v_cache_6100_, lean_object* v_service_6101_, lean_object* v_scope_6102_, uint8_t v_force_6103_, lean_object* v___f_6104_, lean_object* v_s_6105_, lean_object* v_descr_6106_){
_start:
{
uint64_t v_hash_6108_; lean_object* v_ext_6109_; lean_object* v___y_6111_; lean_object* v___y_6117_; uint8_t v_a_6118_; lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v___y_6123_; lean_object* v___x_6166_; lean_object* v___x_6167_; uint8_t v___x_6168_; 
v_hash_6108_ = lean_ctor_get_uint64(v_descr_6106_, sizeof(void*)*1);
v_ext_6109_ = lean_ctor_get(v_descr_6106_, 0);
v___x_6120_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_6121_ = l_System_FilePath_join(v_cache_6100_, v___x_6120_);
v___x_6166_ = lean_string_utf8_byte_size(v_ext_6109_);
v___x_6167_ = lean_unsigned_to_nat(0u);
v___x_6168_ = lean_nat_dec_eq(v___x_6166_, v___x_6167_);
if (v___x_6168_ == 0)
{
lean_object* v___x_6169_; lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; 
v___x_6169_ = l_Lake_Hash_hex(v_hash_6108_);
v___x_6170_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_6171_ = lean_string_append(v___x_6169_, v___x_6170_);
v___x_6172_ = lean_string_append(v___x_6171_, v_ext_6109_);
v___y_6123_ = v___x_6172_;
goto v___jp_6122_;
}
else
{
lean_object* v___x_6173_; 
v___x_6173_ = l_Lake_Hash_hex(v_hash_6108_);
v___y_6123_ = v___x_6173_;
goto v___jp_6122_;
}
v___jp_6110_:
{
lean_object* v_url_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; 
v_url_6112_ = l_Lake_CacheService_artifactUrl(v_hash_6108_, v_service_6101_, v_scope_6102_);
v___x_6113_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6113_, 0, v_url_6112_);
lean_ctor_set(v___x_6113_, 1, v___y_6111_);
lean_ctor_set(v___x_6113_, 2, v_descr_6106_);
v___x_6114_ = lean_array_push(v_s_6105_, v___x_6113_);
v___x_6115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6115_, 0, v___x_6114_);
return v___x_6115_;
}
v___jp_6116_:
{
if (v_a_6118_ == 0)
{
v___y_6111_ = v___y_6117_;
goto v___jp_6110_;
}
else
{
lean_object* v___x_6119_; 
lean_dec_ref(v___y_6117_);
lean_dec_ref(v_descr_6106_);
lean_dec_ref(v_scope_6102_);
lean_dec_ref(v_service_6101_);
v___x_6119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6119_, 0, v_s_6105_);
return v___x_6119_;
}
}
v___jp_6122_:
{
lean_object* v_path_6124_; 
v_path_6124_ = l_System_FilePath_join(v___x_6121_, v___y_6123_);
if (v_force_6103_ == 0)
{
uint8_t v___x_6125_; lean_object* v___x_6126_; uint8_t v___x_6127_; 
v___x_6125_ = l_System_FilePath_pathExists(v_path_6124_);
v___x_6126_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_6127_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__4, &l_Lake_CacheService_downloadArtifact___closed__4_once, _init_l_Lake_CacheService_downloadArtifact___closed__4);
if (v___x_6127_ == 0)
{
lean_dec_ref(v___f_6104_);
lean_dec_ref(v___y_6099_);
v___y_6117_ = v_path_6124_;
v_a_6118_ = v___x_6125_;
goto v___jp_6116_;
}
else
{
lean_object* v___x_6128_; uint8_t v___x_6129_; 
v___x_6128_ = lean_box(0);
v___x_6129_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__5, &l_Lake_CacheService_downloadArtifact___closed__5_once, _init_l_Lake_CacheService_downloadArtifact___closed__5);
if (v___x_6129_ == 0)
{
if (v___x_6127_ == 0)
{
lean_dec_ref(v___f_6104_);
lean_dec_ref(v___y_6099_);
v___y_6117_ = v_path_6124_;
v_a_6118_ = v___x_6125_;
goto v___jp_6116_;
}
else
{
size_t v___x_6130_; size_t v___x_6131_; lean_object* v___x_6132_; 
v___x_6130_ = ((size_t)0ULL);
v___x_6131_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
v___x_6132_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts___elam__1_spec__0(v___f_6104_, v___x_6126_, v___x_6130_, v___x_6131_, v___x_6128_, v___y_6099_);
if (lean_obj_tag(v___x_6132_) == 0)
{
lean_dec_ref(v___x_6132_);
v___y_6117_ = v_path_6124_;
v_a_6118_ = v___x_6125_;
goto v___jp_6116_;
}
else
{
lean_object* v_a_6133_; lean_object* v___x_6135_; uint8_t v_isShared_6136_; uint8_t v_isSharedCheck_6140_; 
lean_dec_ref(v_path_6124_);
lean_dec_ref(v_descr_6106_);
lean_dec_ref(v_s_6105_);
lean_dec_ref(v_scope_6102_);
lean_dec_ref(v_service_6101_);
v_a_6133_ = lean_ctor_get(v___x_6132_, 0);
v_isSharedCheck_6140_ = !lean_is_exclusive(v___x_6132_);
if (v_isSharedCheck_6140_ == 0)
{
v___x_6135_ = v___x_6132_;
v_isShared_6136_ = v_isSharedCheck_6140_;
goto v_resetjp_6134_;
}
else
{
lean_inc(v_a_6133_);
lean_dec(v___x_6132_);
v___x_6135_ = lean_box(0);
v_isShared_6136_ = v_isSharedCheck_6140_;
goto v_resetjp_6134_;
}
v_resetjp_6134_:
{
lean_object* v___x_6138_; 
if (v_isShared_6136_ == 0)
{
v___x_6138_ = v___x_6135_;
goto v_reusejp_6137_;
}
else
{
lean_object* v_reuseFailAlloc_6139_; 
v_reuseFailAlloc_6139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6139_, 0, v_a_6133_);
v___x_6138_ = v_reuseFailAlloc_6139_;
goto v_reusejp_6137_;
}
v_reusejp_6137_:
{
return v___x_6138_;
}
}
}
}
}
else
{
size_t v___x_6141_; size_t v___x_6142_; lean_object* v___x_6143_; 
v___x_6141_ = ((size_t)0ULL);
v___x_6142_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
v___x_6143_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts___elam__1_spec__0(v___f_6104_, v___x_6126_, v___x_6141_, v___x_6142_, v___x_6128_, v___y_6099_);
if (lean_obj_tag(v___x_6143_) == 0)
{
lean_dec_ref(v___x_6143_);
v___y_6117_ = v_path_6124_;
v_a_6118_ = v___x_6125_;
goto v___jp_6116_;
}
else
{
lean_object* v_a_6144_; lean_object* v___x_6146_; uint8_t v_isShared_6147_; uint8_t v_isSharedCheck_6151_; 
lean_dec_ref(v_path_6124_);
lean_dec_ref(v_descr_6106_);
lean_dec_ref(v_s_6105_);
lean_dec_ref(v_scope_6102_);
lean_dec_ref(v_service_6101_);
v_a_6144_ = lean_ctor_get(v___x_6143_, 0);
v_isSharedCheck_6151_ = !lean_is_exclusive(v___x_6143_);
if (v_isSharedCheck_6151_ == 0)
{
v___x_6146_ = v___x_6143_;
v_isShared_6147_ = v_isSharedCheck_6151_;
goto v_resetjp_6145_;
}
else
{
lean_inc(v_a_6144_);
lean_dec(v___x_6143_);
v___x_6146_ = lean_box(0);
v_isShared_6147_ = v_isSharedCheck_6151_;
goto v_resetjp_6145_;
}
v_resetjp_6145_:
{
lean_object* v___x_6149_; 
if (v_isShared_6147_ == 0)
{
v___x_6149_ = v___x_6146_;
goto v_reusejp_6148_;
}
else
{
lean_object* v_reuseFailAlloc_6150_; 
v_reuseFailAlloc_6150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6150_, 0, v_a_6144_);
v___x_6149_ = v_reuseFailAlloc_6150_;
goto v_reusejp_6148_;
}
v_reusejp_6148_:
{
return v___x_6149_;
}
}
}
}
}
}
else
{
lean_object* v___x_6152_; 
lean_dec_ref(v___f_6104_);
v___x_6152_ = l_Lake_removeFileIfExists(v_path_6124_);
if (lean_obj_tag(v___x_6152_) == 0)
{
lean_dec_ref(v___x_6152_);
lean_dec_ref(v___y_6099_);
v___y_6111_ = v_path_6124_;
goto v___jp_6110_;
}
else
{
lean_object* v_a_6153_; lean_object* v___x_6155_; uint8_t v_isShared_6156_; uint8_t v_isSharedCheck_6165_; 
lean_dec_ref(v_path_6124_);
lean_dec_ref(v_descr_6106_);
lean_dec_ref(v_s_6105_);
lean_dec_ref(v_scope_6102_);
lean_dec_ref(v_service_6101_);
v_a_6153_ = lean_ctor_get(v___x_6152_, 0);
v_isSharedCheck_6165_ = !lean_is_exclusive(v___x_6152_);
if (v_isSharedCheck_6165_ == 0)
{
v___x_6155_ = v___x_6152_;
v_isShared_6156_ = v_isSharedCheck_6165_;
goto v_resetjp_6154_;
}
else
{
lean_inc(v_a_6153_);
lean_dec(v___x_6152_);
v___x_6155_ = lean_box(0);
v_isShared_6156_ = v_isSharedCheck_6165_;
goto v_resetjp_6154_;
}
v_resetjp_6154_:
{
lean_object* v___x_6157_; uint8_t v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6163_; 
v___x_6157_ = lean_io_error_to_string(v_a_6153_);
v___x_6158_ = 3;
v___x_6159_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6159_, 0, v___x_6157_);
lean_ctor_set_uint8(v___x_6159_, sizeof(void*)*1, v___x_6158_);
v___x_6160_ = lean_apply_2(v___y_6099_, v___x_6159_, lean_box(0));
v___x_6161_ = lean_box(0);
if (v_isShared_6156_ == 0)
{
lean_ctor_set(v___x_6155_, 0, v___x_6161_);
v___x_6163_ = v___x_6155_;
goto v_reusejp_6162_;
}
else
{
lean_object* v_reuseFailAlloc_6164_; 
v_reuseFailAlloc_6164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6164_, 0, v___x_6161_);
v___x_6163_ = v_reuseFailAlloc_6164_;
goto v_reusejp_6162_;
}
v_reusejp_6162_:
{
return v___x_6163_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3_spec__3___boxed(lean_object* v___y_6174_, lean_object* v_cache_6175_, lean_object* v_service_6176_, lean_object* v_scope_6177_, lean_object* v_force_6178_, lean_object* v___f_6179_, lean_object* v_s_6180_, lean_object* v_descr_6181_, lean_object* v___y_6182_){
_start:
{
uint8_t v_force_boxed_6183_; lean_object* v_res_6184_; 
v_force_boxed_6183_ = lean_unbox(v_force_6178_);
v_res_6184_ = l_Lake_CacheService_downloadArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3_spec__3(v___y_6174_, v_cache_6175_, v_service_6176_, v_scope_6177_, v_force_boxed_6183_, v___f_6179_, v_s_6180_, v_descr_6181_);
return v_res_6184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(lean_object* v_cache_6186_, lean_object* v_service_6187_, lean_object* v_scope_6188_, uint8_t v_force_6189_, lean_object* v_as_6190_, size_t v_i_6191_, size_t v_stop_6192_, lean_object* v_b_6193_, lean_object* v___y_6194_){
_start:
{
uint8_t v___x_6196_; 
v___x_6196_ = lean_usize_dec_eq(v_i_6191_, v_stop_6192_);
if (v___x_6196_ == 0)
{
lean_object* v___f_6197_; lean_object* v___x_6198_; lean_object* v___x_6199_; 
v___f_6197_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3___closed__0));
v___x_6198_ = lean_array_uget_borrowed(v_as_6190_, v_i_6191_);
lean_inc(v___x_6198_);
lean_inc_ref(v_scope_6188_);
lean_inc_ref(v_service_6187_);
lean_inc_ref(v_cache_6186_);
lean_inc_ref(v___y_6194_);
v___x_6199_ = l_Lake_CacheService_downloadArtifacts___elam__1___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3_spec__3(v___y_6194_, v_cache_6186_, v_service_6187_, v_scope_6188_, v_force_6189_, v___f_6197_, v_b_6193_, v___x_6198_);
if (lean_obj_tag(v___x_6199_) == 0)
{
lean_object* v_a_6200_; size_t v___x_6201_; size_t v___x_6202_; 
v_a_6200_ = lean_ctor_get(v___x_6199_, 0);
lean_inc(v_a_6200_);
lean_dec_ref(v___x_6199_);
v___x_6201_ = ((size_t)1ULL);
v___x_6202_ = lean_usize_add(v_i_6191_, v___x_6201_);
v_i_6191_ = v___x_6202_;
v_b_6193_ = v_a_6200_;
goto _start;
}
else
{
lean_dec_ref(v___y_6194_);
lean_dec_ref(v_scope_6188_);
lean_dec_ref(v_service_6187_);
lean_dec_ref(v_cache_6186_);
return v___x_6199_;
}
}
else
{
lean_object* v___x_6204_; 
lean_dec_ref(v___y_6194_);
lean_dec_ref(v_scope_6188_);
lean_dec_ref(v_service_6187_);
lean_dec_ref(v_cache_6186_);
v___x_6204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6204_, 0, v_b_6193_);
return v___x_6204_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3___boxed(lean_object* v_cache_6205_, lean_object* v_service_6206_, lean_object* v_scope_6207_, lean_object* v_force_6208_, lean_object* v_as_6209_, lean_object* v_i_6210_, lean_object* v_stop_6211_, lean_object* v_b_6212_, lean_object* v___y_6213_, lean_object* v___y_6214_){
_start:
{
uint8_t v_force_boxed_6215_; size_t v_i_boxed_6216_; size_t v_stop_boxed_6217_; lean_object* v_res_6218_; 
v_force_boxed_6215_ = lean_unbox(v_force_6208_);
v_i_boxed_6216_ = lean_unbox_usize(v_i_6210_);
lean_dec(v_i_6210_);
v_stop_boxed_6217_ = lean_unbox_usize(v_stop_6211_);
lean_dec(v_stop_6211_);
v_res_6218_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(v_cache_6205_, v_service_6206_, v_scope_6207_, v_force_boxed_6215_, v_as_6209_, v_i_boxed_6216_, v_stop_boxed_6217_, v_b_6212_, v___y_6213_);
lean_dec_ref(v_as_6209_);
return v_res_6218_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts(lean_object* v_descrs_6225_, lean_object* v_cache_6226_, lean_object* v_service_6227_, lean_object* v_scope_6228_, uint8_t v_force_6229_, lean_object* v_a_6230_){
_start:
{
lean_object* v___x_6232_; lean_object* v___x_6233_; lean_object* v_a_6235_; lean_object* v___y_6261_; uint8_t v___x_6271_; 
v___x_6232_ = lean_array_get_size(v_descrs_6225_);
v___x_6233_ = lean_unsigned_to_nat(0u);
v___x_6271_ = lean_nat_dec_eq(v___x_6232_, v___x_6233_);
if (v___x_6271_ == 0)
{
lean_object* v___x_6272_; uint8_t v___x_6273_; 
v___x_6272_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__0));
v___x_6273_ = lean_nat_dec_lt(v___x_6233_, v___x_6232_);
if (v___x_6273_ == 0)
{
lean_dec_ref(v_service_6227_);
v_a_6235_ = v___x_6272_;
goto v___jp_6234_;
}
else
{
uint8_t v___x_6274_; 
v___x_6274_ = lean_nat_dec_le(v___x_6232_, v___x_6232_);
if (v___x_6274_ == 0)
{
if (v___x_6273_ == 0)
{
lean_dec_ref(v_service_6227_);
v_a_6235_ = v___x_6272_;
goto v___jp_6234_;
}
else
{
size_t v___x_6275_; size_t v___x_6276_; lean_object* v___x_6277_; 
v___x_6275_ = ((size_t)0ULL);
v___x_6276_ = lean_usize_of_nat(v___x_6232_);
lean_inc_ref(v_a_6230_);
lean_inc_ref(v_scope_6228_);
lean_inc_ref(v_cache_6226_);
v___x_6277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(v_cache_6226_, v_service_6227_, v_scope_6228_, v_force_6229_, v_descrs_6225_, v___x_6275_, v___x_6276_, v___x_6272_, v_a_6230_);
v___y_6261_ = v___x_6277_;
goto v___jp_6260_;
}
}
else
{
size_t v___x_6278_; size_t v___x_6279_; lean_object* v___x_6280_; 
v___x_6278_ = ((size_t)0ULL);
v___x_6279_ = lean_usize_of_nat(v___x_6232_);
lean_inc_ref(v_a_6230_);
lean_inc_ref(v_scope_6228_);
lean_inc_ref(v_cache_6226_);
v___x_6280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(v_cache_6226_, v_service_6227_, v_scope_6228_, v_force_6229_, v_descrs_6225_, v___x_6278_, v___x_6279_, v___x_6272_, v_a_6230_);
v___y_6261_ = v___x_6280_;
goto v___jp_6260_;
}
}
}
else
{
lean_object* v___x_6281_; lean_object* v___x_6282_; lean_object* v___x_6283_; lean_object* v___x_6284_; 
lean_dec_ref(v_scope_6228_);
lean_dec_ref(v_service_6227_);
lean_dec_ref(v_cache_6226_);
v___x_6281_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__2));
v___x_6282_ = lean_apply_2(v_a_6230_, v___x_6281_, lean_box(0));
v___x_6283_ = lean_box(0);
v___x_6284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6284_, 0, v___x_6283_);
return v___x_6284_;
}
v___jp_6234_:
{
lean_object* v___x_6236_; uint8_t v___x_6237_; 
v___x_6236_ = lean_array_get_size(v_a_6235_);
v___x_6237_ = lean_nat_dec_eq(v___x_6236_, v___x_6233_);
if (v___x_6237_ == 0)
{
lean_object* v___x_6238_; lean_object* v___x_6239_; lean_object* v___x_6240_; 
v___x_6238_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_6239_ = l_System_FilePath_join(v_cache_6226_, v___x_6238_);
v___x_6240_ = l_IO_FS_createDirAll(v___x_6239_);
if (lean_obj_tag(v___x_6240_) == 0)
{
uint8_t v___x_6241_; lean_object* v___x_6242_; lean_object* v___x_6243_; lean_object* v___x_6244_; 
lean_dec_ref(v___x_6240_);
v___x_6241_ = 0;
v___x_6242_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_6243_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_6243_, 0, v_scope_6228_);
lean_ctor_set(v___x_6243_, 1, v_a_6235_);
lean_ctor_set(v___x_6243_, 2, v___x_6242_);
lean_ctor_set_uint8(v___x_6243_, sizeof(void*)*3, v___x_6241_);
v___x_6244_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__2(v_a_6230_, v___x_6243_);
return v___x_6244_;
}
else
{
lean_object* v_a_6245_; lean_object* v___x_6247_; uint8_t v_isShared_6248_; uint8_t v_isSharedCheck_6257_; 
lean_dec_ref(v_a_6235_);
lean_dec_ref(v_scope_6228_);
v_a_6245_ = lean_ctor_get(v___x_6240_, 0);
v_isSharedCheck_6257_ = !lean_is_exclusive(v___x_6240_);
if (v_isSharedCheck_6257_ == 0)
{
v___x_6247_ = v___x_6240_;
v_isShared_6248_ = v_isSharedCheck_6257_;
goto v_resetjp_6246_;
}
else
{
lean_inc(v_a_6245_);
lean_dec(v___x_6240_);
v___x_6247_ = lean_box(0);
v_isShared_6248_ = v_isSharedCheck_6257_;
goto v_resetjp_6246_;
}
v_resetjp_6246_:
{
lean_object* v___x_6249_; uint8_t v___x_6250_; lean_object* v___x_6251_; lean_object* v___x_6252_; lean_object* v___x_6253_; lean_object* v___x_6255_; 
v___x_6249_ = lean_io_error_to_string(v_a_6245_);
v___x_6250_ = 3;
v___x_6251_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6251_, 0, v___x_6249_);
lean_ctor_set_uint8(v___x_6251_, sizeof(void*)*1, v___x_6250_);
v___x_6252_ = lean_apply_2(v_a_6230_, v___x_6251_, lean_box(0));
v___x_6253_ = lean_box(0);
if (v_isShared_6248_ == 0)
{
lean_ctor_set(v___x_6247_, 0, v___x_6253_);
v___x_6255_ = v___x_6247_;
goto v_reusejp_6254_;
}
else
{
lean_object* v_reuseFailAlloc_6256_; 
v_reuseFailAlloc_6256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6256_, 0, v___x_6253_);
v___x_6255_ = v_reuseFailAlloc_6256_;
goto v_reusejp_6254_;
}
v_reusejp_6254_:
{
return v___x_6255_;
}
}
}
}
else
{
lean_object* v___x_6258_; lean_object* v___x_6259_; 
lean_dec_ref(v_a_6235_);
lean_dec_ref(v_a_6230_);
lean_dec_ref(v_scope_6228_);
lean_dec_ref(v_cache_6226_);
v___x_6258_ = lean_box(0);
v___x_6259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6259_, 0, v___x_6258_);
return v___x_6259_;
}
}
v___jp_6260_:
{
if (lean_obj_tag(v___y_6261_) == 0)
{
lean_object* v_a_6262_; 
v_a_6262_ = lean_ctor_get(v___y_6261_, 0);
lean_inc(v_a_6262_);
lean_dec_ref(v___y_6261_);
v_a_6235_ = v_a_6262_;
goto v___jp_6234_;
}
else
{
lean_object* v_a_6263_; lean_object* v___x_6265_; uint8_t v_isShared_6266_; uint8_t v_isSharedCheck_6270_; 
lean_dec_ref(v_a_6230_);
lean_dec_ref(v_scope_6228_);
lean_dec_ref(v_cache_6226_);
v_a_6263_ = lean_ctor_get(v___y_6261_, 0);
v_isSharedCheck_6270_ = !lean_is_exclusive(v___y_6261_);
if (v_isSharedCheck_6270_ == 0)
{
v___x_6265_ = v___y_6261_;
v_isShared_6266_ = v_isSharedCheck_6270_;
goto v_resetjp_6264_;
}
else
{
lean_inc(v_a_6263_);
lean_dec(v___y_6261_);
v___x_6265_ = lean_box(0);
v_isShared_6266_ = v_isSharedCheck_6270_;
goto v_resetjp_6264_;
}
v_resetjp_6264_:
{
lean_object* v___x_6268_; 
if (v_isShared_6266_ == 0)
{
v___x_6268_ = v___x_6265_;
goto v_reusejp_6267_;
}
else
{
lean_object* v_reuseFailAlloc_6269_; 
v_reuseFailAlloc_6269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6269_, 0, v_a_6263_);
v___x_6268_ = v_reuseFailAlloc_6269_;
goto v_reusejp_6267_;
}
v_reusejp_6267_:
{
return v___x_6268_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___boxed(lean_object* v_descrs_6285_, lean_object* v_cache_6286_, lean_object* v_service_6287_, lean_object* v_scope_6288_, lean_object* v_force_6289_, lean_object* v_a_6290_, lean_object* v_a_6291_){
_start:
{
uint8_t v_force_boxed_6292_; lean_object* v_res_6293_; 
v_force_boxed_6292_ = lean_unbox(v_force_6289_);
v_res_6293_ = l_Lake_CacheService_downloadArtifacts(v_descrs_6285_, v_cache_6286_, v_service_6287_, v_scope_6288_, v_force_boxed_6292_, v_a_6290_);
lean_dec_ref(v_descrs_6285_);
return v_res_6293_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(lean_object* v_a_6294_, lean_object* v_descrs_6295_, lean_object* v_cache_6296_, lean_object* v_service_6297_, lean_object* v_scope_6298_, uint8_t v_force_6299_){
_start:
{
lean_object* v___x_6301_; lean_object* v___x_6302_; lean_object* v_a_6304_; lean_object* v___y_6330_; uint8_t v___x_6340_; 
v___x_6301_ = lean_array_get_size(v_descrs_6295_);
v___x_6302_ = lean_unsigned_to_nat(0u);
v___x_6340_ = lean_nat_dec_eq(v___x_6301_, v___x_6302_);
if (v___x_6340_ == 0)
{
lean_object* v___x_6341_; uint8_t v___x_6342_; 
v___x_6341_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__0));
v___x_6342_ = lean_nat_dec_lt(v___x_6302_, v___x_6301_);
if (v___x_6342_ == 0)
{
lean_dec_ref(v_service_6297_);
v_a_6304_ = v___x_6341_;
goto v___jp_6303_;
}
else
{
uint8_t v___x_6343_; 
v___x_6343_ = lean_nat_dec_le(v___x_6301_, v___x_6301_);
if (v___x_6343_ == 0)
{
if (v___x_6342_ == 0)
{
lean_dec_ref(v_service_6297_);
v_a_6304_ = v___x_6341_;
goto v___jp_6303_;
}
else
{
size_t v___x_6344_; size_t v___x_6345_; lean_object* v___x_6346_; 
v___x_6344_ = ((size_t)0ULL);
v___x_6345_ = lean_usize_of_nat(v___x_6301_);
lean_inc_ref(v_a_6294_);
lean_inc_ref(v_scope_6298_);
lean_inc_ref(v_cache_6296_);
v___x_6346_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(v_cache_6296_, v_service_6297_, v_scope_6298_, v_force_6299_, v_descrs_6295_, v___x_6344_, v___x_6345_, v___x_6341_, v_a_6294_);
v___y_6330_ = v___x_6346_;
goto v___jp_6329_;
}
}
else
{
size_t v___x_6347_; size_t v___x_6348_; lean_object* v___x_6349_; 
v___x_6347_ = ((size_t)0ULL);
v___x_6348_ = lean_usize_of_nat(v___x_6301_);
lean_inc_ref(v_a_6294_);
lean_inc_ref(v_scope_6298_);
lean_inc_ref(v_cache_6296_);
v___x_6349_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(v_cache_6296_, v_service_6297_, v_scope_6298_, v_force_6299_, v_descrs_6295_, v___x_6347_, v___x_6348_, v___x_6341_, v_a_6294_);
v___y_6330_ = v___x_6349_;
goto v___jp_6329_;
}
}
}
else
{
lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; 
lean_dec_ref(v_scope_6298_);
lean_dec_ref(v_service_6297_);
lean_dec_ref(v_cache_6296_);
v___x_6350_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__2));
v___x_6351_ = lean_apply_2(v_a_6294_, v___x_6350_, lean_box(0));
v___x_6352_ = lean_box(0);
v___x_6353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6353_, 0, v___x_6352_);
return v___x_6353_;
}
v___jp_6303_:
{
lean_object* v___x_6305_; uint8_t v___x_6306_; 
v___x_6305_ = lean_array_get_size(v_a_6304_);
v___x_6306_ = lean_nat_dec_eq(v___x_6305_, v___x_6302_);
if (v___x_6306_ == 0)
{
lean_object* v___x_6307_; lean_object* v___x_6308_; lean_object* v___x_6309_; 
v___x_6307_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_6308_ = l_System_FilePath_join(v_cache_6296_, v___x_6307_);
v___x_6309_ = l_IO_FS_createDirAll(v___x_6308_);
if (lean_obj_tag(v___x_6309_) == 0)
{
uint8_t v___x_6310_; lean_object* v___x_6311_; lean_object* v___x_6312_; lean_object* v___x_6313_; 
lean_dec_ref(v___x_6309_);
v___x_6310_ = 0;
v___x_6311_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_6312_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_6312_, 0, v_scope_6298_);
lean_ctor_set(v___x_6312_, 1, v_a_6304_);
lean_ctor_set(v___x_6312_, 2, v___x_6311_);
lean_ctor_set_uint8(v___x_6312_, sizeof(void*)*3, v___x_6310_);
v___x_6313_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__2(v_a_6294_, v___x_6312_);
return v___x_6313_;
}
else
{
lean_object* v_a_6314_; lean_object* v___x_6316_; uint8_t v_isShared_6317_; uint8_t v_isSharedCheck_6326_; 
lean_dec_ref(v_a_6304_);
lean_dec_ref(v_scope_6298_);
v_a_6314_ = lean_ctor_get(v___x_6309_, 0);
v_isSharedCheck_6326_ = !lean_is_exclusive(v___x_6309_);
if (v_isSharedCheck_6326_ == 0)
{
v___x_6316_ = v___x_6309_;
v_isShared_6317_ = v_isSharedCheck_6326_;
goto v_resetjp_6315_;
}
else
{
lean_inc(v_a_6314_);
lean_dec(v___x_6309_);
v___x_6316_ = lean_box(0);
v_isShared_6317_ = v_isSharedCheck_6326_;
goto v_resetjp_6315_;
}
v_resetjp_6315_:
{
lean_object* v___x_6318_; uint8_t v___x_6319_; lean_object* v___x_6320_; lean_object* v___x_6321_; lean_object* v___x_6322_; lean_object* v___x_6324_; 
v___x_6318_ = lean_io_error_to_string(v_a_6314_);
v___x_6319_ = 3;
v___x_6320_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6320_, 0, v___x_6318_);
lean_ctor_set_uint8(v___x_6320_, sizeof(void*)*1, v___x_6319_);
v___x_6321_ = lean_apply_2(v_a_6294_, v___x_6320_, lean_box(0));
v___x_6322_ = lean_box(0);
if (v_isShared_6317_ == 0)
{
lean_ctor_set(v___x_6316_, 0, v___x_6322_);
v___x_6324_ = v___x_6316_;
goto v_reusejp_6323_;
}
else
{
lean_object* v_reuseFailAlloc_6325_; 
v_reuseFailAlloc_6325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6325_, 0, v___x_6322_);
v___x_6324_ = v_reuseFailAlloc_6325_;
goto v_reusejp_6323_;
}
v_reusejp_6323_:
{
return v___x_6324_;
}
}
}
}
else
{
lean_object* v___x_6327_; lean_object* v___x_6328_; 
lean_dec_ref(v_a_6304_);
lean_dec_ref(v_scope_6298_);
lean_dec_ref(v_cache_6296_);
lean_dec_ref(v_a_6294_);
v___x_6327_ = lean_box(0);
v___x_6328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6328_, 0, v___x_6327_);
return v___x_6328_;
}
}
v___jp_6329_:
{
if (lean_obj_tag(v___y_6330_) == 0)
{
lean_object* v_a_6331_; 
v_a_6331_ = lean_ctor_get(v___y_6330_, 0);
lean_inc(v_a_6331_);
lean_dec_ref(v___y_6330_);
v_a_6304_ = v_a_6331_;
goto v___jp_6303_;
}
else
{
lean_object* v_a_6332_; lean_object* v___x_6334_; uint8_t v_isShared_6335_; uint8_t v_isSharedCheck_6339_; 
lean_dec_ref(v_scope_6298_);
lean_dec_ref(v_cache_6296_);
lean_dec_ref(v_a_6294_);
v_a_6332_ = lean_ctor_get(v___y_6330_, 0);
v_isSharedCheck_6339_ = !lean_is_exclusive(v___y_6330_);
if (v_isSharedCheck_6339_ == 0)
{
v___x_6334_ = v___y_6330_;
v_isShared_6335_ = v_isSharedCheck_6339_;
goto v_resetjp_6333_;
}
else
{
lean_inc(v_a_6332_);
lean_dec(v___y_6330_);
v___x_6334_ = lean_box(0);
v_isShared_6335_ = v_isSharedCheck_6339_;
goto v_resetjp_6333_;
}
v_resetjp_6333_:
{
lean_object* v___x_6337_; 
if (v_isShared_6335_ == 0)
{
v___x_6337_ = v___x_6334_;
goto v_reusejp_6336_;
}
else
{
lean_object* v_reuseFailAlloc_6338_; 
v_reuseFailAlloc_6338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6338_, 0, v_a_6332_);
v___x_6337_ = v_reuseFailAlloc_6338_;
goto v_reusejp_6336_;
}
v_reusejp_6336_:
{
return v___x_6337_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0___boxed(lean_object* v_a_6354_, lean_object* v_descrs_6355_, lean_object* v_cache_6356_, lean_object* v_service_6357_, lean_object* v_scope_6358_, lean_object* v_force_6359_, lean_object* v_a_6360_){
_start:
{
uint8_t v_force_boxed_6361_; lean_object* v_res_6362_; 
v_force_boxed_6361_ = lean_unbox(v_force_6359_);
v_res_6362_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_6354_, v_descrs_6355_, v_cache_6356_, v_service_6357_, v_scope_6358_, v_force_boxed_6361_);
lean_dec_ref(v_descrs_6355_);
return v_res_6362_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts(lean_object* v_map_6363_, lean_object* v_cache_6364_, lean_object* v_service_6365_, lean_object* v_localScope_6366_, lean_object* v_remoteScope_6367_, uint8_t v_force_6368_, lean_object* v_a_6369_){
_start:
{
lean_object* v_name_x3f_6374_; lean_object* v___x_6375_; lean_object* v___x_6376_; 
v_name_x3f_6374_ = lean_ctor_get(v_service_6365_, 0);
lean_inc_ref(v_remoteScope_6367_);
v___x_6375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6375_, 0, v_remoteScope_6367_);
lean_inc(v_name_x3f_6374_);
lean_inc_ref(v_cache_6364_);
v___x_6376_ = l_Lake_Cache_writeMap(v_cache_6364_, v_localScope_6366_, v_map_6363_, v_name_x3f_6374_, v___x_6375_);
if (lean_obj_tag(v___x_6376_) == 0)
{
lean_object* v___x_6378_; uint8_t v_isShared_6379_; uint8_t v_isSharedCheck_6414_; 
v_isSharedCheck_6414_ = !lean_is_exclusive(v___x_6376_);
if (v_isSharedCheck_6414_ == 0)
{
lean_object* v_unused_6415_; 
v_unused_6415_ = lean_ctor_get(v___x_6376_, 0);
lean_dec(v_unused_6415_);
v___x_6378_ = v___x_6376_;
v_isShared_6379_ = v_isSharedCheck_6414_;
goto v_resetjp_6377_;
}
else
{
lean_dec(v___x_6376_);
v___x_6378_ = lean_box(0);
v_isShared_6379_ = v_isSharedCheck_6414_;
goto v_resetjp_6377_;
}
v_resetjp_6377_:
{
lean_object* v___x_6380_; lean_object* v___x_6381_; lean_object* v___x_6382_; 
v___x_6380_ = lean_unsigned_to_nat(0u);
v___x_6381_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_6382_ = l_Lake_CacheMap_collectOutputDescrs(v_map_6363_, v___x_6381_);
if (lean_obj_tag(v___x_6382_) == 0)
{
lean_object* v_a_6383_; lean_object* v_a_6384_; lean_object* v___x_6385_; uint8_t v___x_6386_; 
lean_del_object(v___x_6378_);
v_a_6383_ = lean_ctor_get(v___x_6382_, 0);
lean_inc(v_a_6383_);
v_a_6384_ = lean_ctor_get(v___x_6382_, 1);
lean_inc(v_a_6384_);
lean_dec_ref(v___x_6382_);
v___x_6385_ = lean_array_get_size(v_a_6384_);
v___x_6386_ = lean_nat_dec_lt(v___x_6380_, v___x_6385_);
if (v___x_6386_ == 0)
{
lean_object* v___x_6387_; 
lean_dec(v_a_6384_);
v___x_6387_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_6369_, v_a_6383_, v_cache_6364_, v_service_6365_, v_remoteScope_6367_, v_force_6368_);
lean_dec(v_a_6383_);
return v___x_6387_;
}
else
{
lean_object* v___x_6388_; uint8_t v___x_6389_; 
v___x_6388_ = lean_box(0);
v___x_6389_ = lean_nat_dec_le(v___x_6385_, v___x_6385_);
if (v___x_6389_ == 0)
{
if (v___x_6386_ == 0)
{
lean_object* v___x_6390_; 
lean_dec(v_a_6384_);
v___x_6390_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_6369_, v_a_6383_, v_cache_6364_, v_service_6365_, v_remoteScope_6367_, v_force_6368_);
lean_dec(v_a_6383_);
return v___x_6390_;
}
else
{
size_t v___x_6391_; size_t v___x_6392_; lean_object* v___x_6393_; 
v___x_6391_ = ((size_t)0ULL);
v___x_6392_ = lean_usize_of_nat(v___x_6385_);
lean_inc_ref(v_a_6369_);
v___x_6393_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6384_, v___x_6391_, v___x_6392_, v___x_6388_, v_a_6369_);
lean_dec(v_a_6384_);
if (lean_obj_tag(v___x_6393_) == 0)
{
lean_object* v___x_6394_; 
lean_dec_ref(v___x_6393_);
v___x_6394_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_6369_, v_a_6383_, v_cache_6364_, v_service_6365_, v_remoteScope_6367_, v_force_6368_);
lean_dec(v_a_6383_);
return v___x_6394_;
}
else
{
lean_dec(v_a_6383_);
lean_dec_ref(v_a_6369_);
lean_dec_ref(v_remoteScope_6367_);
lean_dec_ref(v_service_6365_);
lean_dec_ref(v_cache_6364_);
return v___x_6393_;
}
}
}
else
{
size_t v___x_6395_; size_t v___x_6396_; lean_object* v___x_6397_; 
v___x_6395_ = ((size_t)0ULL);
v___x_6396_ = lean_usize_of_nat(v___x_6385_);
lean_inc_ref(v_a_6369_);
v___x_6397_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6384_, v___x_6395_, v___x_6396_, v___x_6388_, v_a_6369_);
lean_dec(v_a_6384_);
if (lean_obj_tag(v___x_6397_) == 0)
{
lean_object* v___x_6398_; 
lean_dec_ref(v___x_6397_);
v___x_6398_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_6369_, v_a_6383_, v_cache_6364_, v_service_6365_, v_remoteScope_6367_, v_force_6368_);
lean_dec(v_a_6383_);
return v___x_6398_;
}
else
{
lean_dec(v_a_6383_);
lean_dec_ref(v_a_6369_);
lean_dec_ref(v_remoteScope_6367_);
lean_dec_ref(v_service_6365_);
lean_dec_ref(v_cache_6364_);
return v___x_6397_;
}
}
}
}
else
{
lean_object* v_a_6399_; lean_object* v___x_6400_; uint8_t v___x_6401_; 
lean_dec_ref(v_remoteScope_6367_);
lean_dec_ref(v_service_6365_);
lean_dec_ref(v_cache_6364_);
v_a_6399_ = lean_ctor_get(v___x_6382_, 1);
lean_inc(v_a_6399_);
lean_dec_ref(v___x_6382_);
v___x_6400_ = lean_array_get_size(v_a_6399_);
v___x_6401_ = lean_nat_dec_lt(v___x_6380_, v___x_6400_);
if (v___x_6401_ == 0)
{
lean_object* v___x_6402_; lean_object* v___x_6404_; 
lean_dec(v_a_6399_);
lean_dec_ref(v_a_6369_);
v___x_6402_ = lean_box(0);
if (v_isShared_6379_ == 0)
{
lean_ctor_set_tag(v___x_6378_, 1);
lean_ctor_set(v___x_6378_, 0, v___x_6402_);
v___x_6404_ = v___x_6378_;
goto v_reusejp_6403_;
}
else
{
lean_object* v_reuseFailAlloc_6405_; 
v_reuseFailAlloc_6405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6405_, 0, v___x_6402_);
v___x_6404_ = v_reuseFailAlloc_6405_;
goto v_reusejp_6403_;
}
v_reusejp_6403_:
{
return v___x_6404_;
}
}
else
{
lean_object* v___x_6406_; uint8_t v___x_6407_; 
lean_del_object(v___x_6378_);
v___x_6406_ = lean_box(0);
v___x_6407_ = lean_nat_dec_le(v___x_6400_, v___x_6400_);
if (v___x_6407_ == 0)
{
if (v___x_6401_ == 0)
{
lean_dec(v_a_6399_);
lean_dec_ref(v_a_6369_);
goto v___jp_6371_;
}
else
{
size_t v___x_6408_; size_t v___x_6409_; lean_object* v___x_6410_; 
v___x_6408_ = ((size_t)0ULL);
v___x_6409_ = lean_usize_of_nat(v___x_6400_);
v___x_6410_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6399_, v___x_6408_, v___x_6409_, v___x_6406_, v_a_6369_);
lean_dec(v_a_6399_);
if (lean_obj_tag(v___x_6410_) == 0)
{
lean_dec_ref(v___x_6410_);
goto v___jp_6371_;
}
else
{
return v___x_6410_;
}
}
}
else
{
size_t v___x_6411_; size_t v___x_6412_; lean_object* v___x_6413_; 
v___x_6411_ = ((size_t)0ULL);
v___x_6412_ = lean_usize_of_nat(v___x_6400_);
v___x_6413_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6399_, v___x_6411_, v___x_6412_, v___x_6406_, v_a_6369_);
lean_dec(v_a_6399_);
if (lean_obj_tag(v___x_6413_) == 0)
{
lean_dec_ref(v___x_6413_);
goto v___jp_6371_;
}
else
{
return v___x_6413_;
}
}
}
}
}
}
else
{
lean_object* v_a_6416_; lean_object* v___x_6418_; uint8_t v_isShared_6419_; uint8_t v_isSharedCheck_6428_; 
lean_dec_ref(v_remoteScope_6367_);
lean_dec_ref(v_service_6365_);
lean_dec_ref(v_cache_6364_);
lean_dec_ref(v_map_6363_);
v_a_6416_ = lean_ctor_get(v___x_6376_, 0);
v_isSharedCheck_6428_ = !lean_is_exclusive(v___x_6376_);
if (v_isSharedCheck_6428_ == 0)
{
v___x_6418_ = v___x_6376_;
v_isShared_6419_ = v_isSharedCheck_6428_;
goto v_resetjp_6417_;
}
else
{
lean_inc(v_a_6416_);
lean_dec(v___x_6376_);
v___x_6418_ = lean_box(0);
v_isShared_6419_ = v_isSharedCheck_6428_;
goto v_resetjp_6417_;
}
v_resetjp_6417_:
{
lean_object* v___x_6420_; uint8_t v___x_6421_; lean_object* v___x_6422_; lean_object* v___x_6423_; lean_object* v___x_6424_; lean_object* v___x_6426_; 
v___x_6420_ = lean_io_error_to_string(v_a_6416_);
v___x_6421_ = 3;
v___x_6422_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6422_, 0, v___x_6420_);
lean_ctor_set_uint8(v___x_6422_, sizeof(void*)*1, v___x_6421_);
v___x_6423_ = lean_apply_2(v_a_6369_, v___x_6422_, lean_box(0));
v___x_6424_ = lean_box(0);
if (v_isShared_6419_ == 0)
{
lean_ctor_set(v___x_6418_, 0, v___x_6424_);
v___x_6426_ = v___x_6418_;
goto v_reusejp_6425_;
}
else
{
lean_object* v_reuseFailAlloc_6427_; 
v_reuseFailAlloc_6427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6427_, 0, v___x_6424_);
v___x_6426_ = v_reuseFailAlloc_6427_;
goto v_reusejp_6425_;
}
v_reusejp_6425_:
{
return v___x_6426_;
}
}
}
v___jp_6371_:
{
lean_object* v___x_6372_; lean_object* v___x_6373_; 
v___x_6372_ = lean_box(0);
v___x_6373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6373_, 0, v___x_6372_);
return v___x_6373_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts___boxed(lean_object* v_map_6429_, lean_object* v_cache_6430_, lean_object* v_service_6431_, lean_object* v_localScope_6432_, lean_object* v_remoteScope_6433_, lean_object* v_force_6434_, lean_object* v_a_6435_, lean_object* v_a_6436_){
_start:
{
uint8_t v_force_boxed_6437_; lean_object* v_res_6438_; 
v_force_boxed_6437_ = lean_unbox(v_force_6434_);
v_res_6438_ = l_Lake_CacheService_downloadOutputArtifacts(v_map_6429_, v_cache_6430_, v_service_6431_, v_localScope_6432_, v_remoteScope_6433_, v_force_boxed_6437_, v_a_6435_);
return v_res_6438_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___redArg(lean_object* v_descrs_6439_, lean_object* v_service_6440_, lean_object* v_scope_6441_, lean_object* v_paths_6442_, lean_object* v_i_6443_, lean_object* v_s_6444_){
_start:
{
lean_object* v___x_6446_; uint64_t v_hash_6447_; lean_object* v_url_6448_; lean_object* v___x_6449_; lean_object* v___x_6450_; lean_object* v___x_6451_; lean_object* v___x_6452_; 
v___x_6446_ = lean_array_fget_borrowed(v_descrs_6439_, v_i_6443_);
v_hash_6447_ = lean_ctor_get_uint64(v___x_6446_, sizeof(void*)*1);
v_url_6448_ = l_Lake_CacheService_artifactUrl(v_hash_6447_, v_service_6440_, v_scope_6441_);
v___x_6449_ = lean_array_fget_borrowed(v_paths_6442_, v_i_6443_);
lean_inc(v___x_6446_);
lean_inc(v___x_6449_);
v___x_6450_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6450_, 0, v_url_6448_);
lean_ctor_set(v___x_6450_, 1, v___x_6449_);
lean_ctor_set(v___x_6450_, 2, v___x_6446_);
v___x_6451_ = lean_array_push(v_s_6444_, v___x_6450_);
v___x_6452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6452_, 0, v___x_6451_);
return v___x_6452_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___redArg___boxed(lean_object* v_descrs_6453_, lean_object* v_service_6454_, lean_object* v_scope_6455_, lean_object* v_paths_6456_, lean_object* v_i_6457_, lean_object* v_s_6458_, lean_object* v___y_6459_){
_start:
{
lean_object* v_res_6460_; 
v_res_6460_ = l_Lake_CacheService_uploadArtifacts___elam__0___redArg(v_descrs_6453_, v_service_6454_, v_scope_6455_, v_paths_6456_, v_i_6457_, v_s_6458_);
lean_dec(v_i_6457_);
lean_dec_ref(v_paths_6456_);
lean_dec_ref(v_descrs_6453_);
return v_res_6460_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0(lean_object* v_descrs_6461_, lean_object* v_service_6462_, lean_object* v_scope_6463_, lean_object* v_paths_6464_, lean_object* v_i_6465_, lean_object* v_x_6466_, lean_object* v_s_6467_, lean_object* v___y_6468_){
_start:
{
lean_object* v___x_6470_; 
v___x_6470_ = l_Lake_CacheService_uploadArtifacts___elam__0___redArg(v_descrs_6461_, v_service_6462_, v_scope_6463_, v_paths_6464_, v_i_6465_, v_s_6467_);
return v___x_6470_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___boxed(lean_object* v_descrs_6471_, lean_object* v_service_6472_, lean_object* v_scope_6473_, lean_object* v_paths_6474_, lean_object* v_i_6475_, lean_object* v_x_6476_, lean_object* v_s_6477_, lean_object* v___y_6478_, lean_object* v___y_6479_){
_start:
{
lean_object* v_res_6480_; 
v_res_6480_ = l_Lake_CacheService_uploadArtifacts___elam__0(v_descrs_6471_, v_service_6472_, v_scope_6473_, v_paths_6474_, v_i_6475_, v_x_6476_, v_s_6477_, v___y_6478_);
lean_dec_ref(v___y_6478_);
lean_dec(v_i_6475_);
lean_dec_ref(v_paths_6474_);
lean_dec_ref(v_descrs_6471_);
return v_res_6480_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1___redArg(lean_object* v_descrs_6481_, lean_object* v_service_6482_, lean_object* v_scope_6483_, lean_object* v_paths_6484_, lean_object* v_i_6485_, lean_object* v_s_6486_){
_start:
{
lean_object* v___x_6488_; uint64_t v_hash_6489_; lean_object* v_url_6490_; lean_object* v___x_6491_; lean_object* v___x_6492_; lean_object* v___x_6493_; lean_object* v___x_6494_; 
v___x_6488_ = lean_array_fget_borrowed(v_descrs_6481_, v_i_6485_);
v_hash_6489_ = lean_ctor_get_uint64(v___x_6488_, sizeof(void*)*1);
v_url_6490_ = l_Lake_CacheService_artifactUrl(v_hash_6489_, v_service_6482_, v_scope_6483_);
v___x_6491_ = lean_array_fget_borrowed(v_paths_6484_, v_i_6485_);
lean_inc(v___x_6488_);
lean_inc(v___x_6491_);
v___x_6492_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6492_, 0, v_url_6490_);
lean_ctor_set(v___x_6492_, 1, v___x_6491_);
lean_ctor_set(v___x_6492_, 2, v___x_6488_);
v___x_6493_ = lean_array_push(v_s_6486_, v___x_6492_);
v___x_6494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6494_, 0, v___x_6493_);
return v___x_6494_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1___redArg___boxed(lean_object* v_descrs_6495_, lean_object* v_service_6496_, lean_object* v_scope_6497_, lean_object* v_paths_6498_, lean_object* v_i_6499_, lean_object* v_s_6500_, lean_object* v___y_6501_){
_start:
{
lean_object* v_res_6502_; 
v_res_6502_ = l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1___redArg(v_descrs_6495_, v_service_6496_, v_scope_6497_, v_paths_6498_, v_i_6499_, v_s_6500_);
lean_dec(v_i_6499_);
lean_dec_ref(v_paths_6498_);
lean_dec_ref(v_descrs_6495_);
return v_res_6502_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(lean_object* v_descrs_6503_, lean_object* v_service_6504_, lean_object* v_scope_6505_, lean_object* v_paths_6506_, lean_object* v_n_6507_, lean_object* v_i_6508_, lean_object* v_a_6509_, lean_object* v___y_6510_){
_start:
{
lean_object* v_zero_6512_; uint8_t v_isZero_6513_; 
v_zero_6512_ = lean_unsigned_to_nat(0u);
v_isZero_6513_ = lean_nat_dec_eq(v_i_6508_, v_zero_6512_);
if (v_isZero_6513_ == 1)
{
lean_object* v___x_6514_; 
lean_dec(v_i_6508_);
lean_dec_ref(v_scope_6505_);
lean_dec_ref(v_service_6504_);
v___x_6514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6514_, 0, v_a_6509_);
return v___x_6514_;
}
else
{
lean_object* v_one_6515_; lean_object* v_n_6516_; lean_object* v___x_6517_; lean_object* v___x_6518_; lean_object* v___x_6519_; lean_object* v_a_6520_; 
v_one_6515_ = lean_unsigned_to_nat(1u);
v_n_6516_ = lean_nat_sub(v_i_6508_, v_one_6515_);
lean_dec(v_i_6508_);
v___x_6517_ = lean_nat_sub(v_n_6507_, v_n_6516_);
v___x_6518_ = lean_nat_sub(v___x_6517_, v_one_6515_);
lean_dec(v___x_6517_);
lean_inc_ref(v_scope_6505_);
lean_inc_ref(v_service_6504_);
v___x_6519_ = l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1___redArg(v_descrs_6503_, v_service_6504_, v_scope_6505_, v_paths_6506_, v___x_6518_, v_a_6509_);
lean_dec(v___x_6518_);
v_a_6520_ = lean_ctor_get(v___x_6519_, 0);
lean_inc(v_a_6520_);
lean_dec_ref(v___x_6519_);
v_i_6508_ = v_n_6516_;
v_a_6509_ = v_a_6520_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg___boxed(lean_object* v_descrs_6522_, lean_object* v_service_6523_, lean_object* v_scope_6524_, lean_object* v_paths_6525_, lean_object* v_n_6526_, lean_object* v_i_6527_, lean_object* v_a_6528_, lean_object* v___y_6529_, lean_object* v___y_6530_){
_start:
{
lean_object* v_res_6531_; 
v_res_6531_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_6522_, v_service_6523_, v_scope_6524_, v_paths_6525_, v_n_6526_, v_i_6527_, v_a_6528_, v___y_6529_);
lean_dec_ref(v___y_6529_);
lean_dec(v_n_6526_);
lean_dec_ref(v_paths_6525_);
lean_dec_ref(v_descrs_6522_);
return v_res_6531_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts(lean_object* v_n_6536_, lean_object* v_descrs_6537_, lean_object* v_paths_6538_, lean_object* v_service_6539_, lean_object* v_scope_6540_, lean_object* v_a_6541_){
_start:
{
lean_object* v___x_6543_; uint8_t v___x_6544_; 
v___x_6543_ = lean_unsigned_to_nat(0u);
v___x_6544_ = lean_nat_dec_eq(v_n_6536_, v___x_6543_);
if (v___x_6544_ == 0)
{
lean_object* v___x_6545_; lean_object* v___x_6546_; lean_object* v_a_6547_; lean_object* v_key_6548_; uint8_t v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; 
v___x_6545_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__0));
lean_inc(v_n_6536_);
lean_inc_ref(v_scope_6540_);
lean_inc_ref(v_service_6539_);
v___x_6546_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_6537_, v_service_6539_, v_scope_6540_, v_paths_6538_, v_n_6536_, v_n_6536_, v___x_6545_, v_a_6541_);
lean_dec(v_n_6536_);
v_a_6547_ = lean_ctor_get(v___x_6546_, 0);
lean_inc(v_a_6547_);
lean_dec_ref(v___x_6546_);
v_key_6548_ = lean_ctor_get(v_service_6539_, 1);
lean_inc_ref(v_key_6548_);
lean_dec_ref(v_service_6539_);
v___x_6549_ = 1;
v___x_6550_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_6550_, 0, v_scope_6540_);
lean_ctor_set(v___x_6550_, 1, v_a_6547_);
lean_ctor_set(v___x_6550_, 2, v_key_6548_);
lean_ctor_set_uint8(v___x_6550_, sizeof(void*)*3, v___x_6549_);
v___x_6551_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__2(v_a_6541_, v___x_6550_);
return v___x_6551_;
}
else
{
lean_object* v___x_6552_; lean_object* v___x_6553_; lean_object* v___x_6554_; lean_object* v___x_6555_; 
lean_dec_ref(v_scope_6540_);
lean_dec_ref(v_service_6539_);
lean_dec(v_n_6536_);
v___x_6552_ = ((lean_object*)(l_Lake_CacheService_uploadArtifacts___closed__1));
v___x_6553_ = lean_apply_2(v_a_6541_, v___x_6552_, lean_box(0));
v___x_6554_ = lean_box(0);
v___x_6555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6555_, 0, v___x_6554_);
return v___x_6555_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___boxed(lean_object* v_n_6556_, lean_object* v_descrs_6557_, lean_object* v_paths_6558_, lean_object* v_service_6559_, lean_object* v_scope_6560_, lean_object* v_a_6561_, lean_object* v_a_6562_){
_start:
{
lean_object* v_res_6563_; 
v_res_6563_ = l_Lake_CacheService_uploadArtifacts(v_n_6556_, v_descrs_6557_, v_paths_6558_, v_service_6559_, v_scope_6560_, v_a_6561_);
lean_dec_ref(v_paths_6558_);
lean_dec_ref(v_descrs_6557_);
return v_res_6563_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1(lean_object* v___y_6564_, lean_object* v_descrs_6565_, lean_object* v_service_6566_, lean_object* v_scope_6567_, lean_object* v_paths_6568_, lean_object* v_i_6569_, lean_object* v_x_6570_, lean_object* v_s_6571_){
_start:
{
lean_object* v___x_6573_; 
v___x_6573_ = l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1___redArg(v_descrs_6565_, v_service_6566_, v_scope_6567_, v_paths_6568_, v_i_6569_, v_s_6571_);
return v___x_6573_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1___boxed(lean_object* v___y_6574_, lean_object* v_descrs_6575_, lean_object* v_service_6576_, lean_object* v_scope_6577_, lean_object* v_paths_6578_, lean_object* v_i_6579_, lean_object* v_x_6580_, lean_object* v_s_6581_, lean_object* v___y_6582_){
_start:
{
lean_object* v_res_6583_; 
v_res_6583_ = l_Lake_CacheService_uploadArtifacts___elam__0___at___00__private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1_spec__1(v___y_6574_, v_descrs_6575_, v_service_6576_, v_scope_6577_, v_paths_6578_, v_i_6579_, v_x_6580_, v_s_6581_);
lean_dec(v_i_6579_);
lean_dec_ref(v_paths_6578_);
lean_dec_ref(v_descrs_6575_);
lean_dec_ref(v___y_6574_);
return v_res_6583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1(lean_object* v_descrs_6584_, lean_object* v_service_6585_, lean_object* v_scope_6586_, lean_object* v_paths_6587_, lean_object* v_n_6588_, lean_object* v_i_6589_, lean_object* v_a_6590_, lean_object* v_a_6591_, lean_object* v___y_6592_){
_start:
{
lean_object* v___x_6594_; 
v___x_6594_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_6584_, v_service_6585_, v_scope_6586_, v_paths_6587_, v_n_6588_, v_i_6589_, v_a_6591_, v___y_6592_);
return v___x_6594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___boxed(lean_object* v_descrs_6595_, lean_object* v_service_6596_, lean_object* v_scope_6597_, lean_object* v_paths_6598_, lean_object* v_n_6599_, lean_object* v_i_6600_, lean_object* v_a_6601_, lean_object* v_a_6602_, lean_object* v___y_6603_, lean_object* v___y_6604_){
_start:
{
lean_object* v_res_6605_; 
v_res_6605_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1(v_descrs_6595_, v_service_6596_, v_scope_6597_, v_paths_6598_, v_n_6599_, v_i_6600_, v_a_6601_, v_a_6602_, v___y_6603_);
lean_dec_ref(v___y_6603_);
lean_dec(v_n_6599_);
lean_dec_ref(v_paths_6598_);
lean_dec_ref(v_descrs_6595_);
return v_res_6605_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(lean_object* v_rev_6610_, lean_object* v_service_6611_, lean_object* v_scope_6612_, lean_object* v_platform_6613_, lean_object* v_toolchain_6614_){
_start:
{
lean_object* v_url_6616_; lean_object* v_url_6623_; 
if (lean_obj_tag(v_scope_6612_) == 0)
{
lean_object* v_s_6632_; lean_object* v_revisionEndpoint_6633_; lean_object* v___x_6634_; lean_object* v___x_6635_; lean_object* v___x_6636_; lean_object* v___x_6637_; lean_object* v___x_6638_; lean_object* v___x_6639_; 
lean_dec_ref(v_platform_6613_);
v_s_6632_ = lean_ctor_get(v_scope_6612_, 0);
lean_inc_ref(v_s_6632_);
lean_dec_ref(v_scope_6612_);
v_revisionEndpoint_6633_ = lean_ctor_get(v_service_6611_, 3);
lean_inc_ref(v_revisionEndpoint_6633_);
lean_dec_ref(v_service_6611_);
v___x_6634_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_revisionEndpoint_6633_, v_s_6632_);
v___x_6635_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_6636_ = lean_string_append(v___x_6635_, v_rev_6610_);
v___x_6637_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_6638_ = lean_string_append(v___x_6636_, v___x_6637_);
v___x_6639_ = lean_string_append(v___x_6634_, v___x_6638_);
lean_dec_ref(v___x_6638_);
return v___x_6639_;
}
else
{
lean_object* v_s_6640_; lean_object* v_revisionEndpoint_6641_; lean_object* v_url_6642_; lean_object* v___x_6643_; lean_object* v___x_6644_; uint8_t v___x_6645_; 
v_s_6640_ = lean_ctor_get(v_scope_6612_, 0);
lean_inc_ref(v_s_6640_);
lean_dec_ref(v_scope_6612_);
v_revisionEndpoint_6641_ = lean_ctor_get(v_service_6611_, 3);
lean_inc_ref(v_revisionEndpoint_6641_);
lean_dec_ref(v_service_6611_);
v_url_6642_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_revisionEndpoint_6641_, v_s_6640_);
v___x_6643_ = lean_string_utf8_byte_size(v_platform_6613_);
v___x_6644_ = lean_unsigned_to_nat(0u);
v___x_6645_ = lean_nat_dec_eq(v___x_6643_, v___x_6644_);
if (v___x_6645_ == 0)
{
lean_object* v___x_6646_; lean_object* v___x_6647_; lean_object* v_url_6648_; 
v___x_6646_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__1));
v___x_6647_ = lean_string_append(v_url_6642_, v___x_6646_);
v_url_6648_ = l_Lake_uriEncode(v_platform_6613_, v___x_6647_);
v_url_6623_ = v_url_6648_;
goto v___jp_6622_;
}
else
{
lean_dec_ref(v_platform_6613_);
v_url_6623_ = v_url_6642_;
goto v___jp_6622_;
}
}
v___jp_6615_:
{
lean_object* v___x_6617_; lean_object* v___x_6618_; lean_object* v___x_6619_; lean_object* v___x_6620_; lean_object* v___x_6621_; 
v___x_6617_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_6618_ = lean_string_append(v_url_6616_, v___x_6617_);
v___x_6619_ = lean_string_append(v___x_6618_, v_rev_6610_);
v___x_6620_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_6621_ = lean_string_append(v___x_6619_, v___x_6620_);
return v___x_6621_;
}
v___jp_6622_:
{
lean_object* v___x_6624_; lean_object* v___x_6625_; uint8_t v___x_6626_; 
v___x_6624_ = lean_string_utf8_byte_size(v_toolchain_6614_);
v___x_6625_ = lean_unsigned_to_nat(0u);
v___x_6626_ = lean_nat_dec_eq(v___x_6624_, v___x_6625_);
if (v___x_6626_ == 0)
{
lean_object* v___x_6627_; lean_object* v___x_6628_; lean_object* v___x_6629_; lean_object* v___x_6630_; lean_object* v_url_6631_; 
v___x_6627_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_6628_ = l___private_Lake_Config_InstallPath_0__Lake_toolchain2Dir_go(v_toolchain_6614_, v___x_6627_, v___x_6625_);
v___x_6629_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__0));
v___x_6630_ = lean_string_append(v_url_6623_, v___x_6629_);
v_url_6631_ = l_Lake_uriEncode(v___x_6628_, v___x_6630_);
v_url_6616_ = v_url_6631_;
goto v___jp_6615_;
}
else
{
v_url_6616_ = v_url_6623_;
goto v___jp_6615_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___boxed(lean_object* v_rev_6649_, lean_object* v_service_6650_, lean_object* v_scope_6651_, lean_object* v_platform_6652_, lean_object* v_toolchain_6653_){
_start:
{
lean_object* v_res_6654_; 
v_res_6654_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_6649_, v_service_6650_, v_scope_6651_, v_platform_6652_, v_toolchain_6653_);
lean_dec_ref(v_toolchain_6653_);
lean_dec_ref(v_rev_6649_);
return v_res_6654_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl(lean_object* v_rev_6658_, lean_object* v_service_6659_, lean_object* v_scope_6660_, lean_object* v_platform_6661_, lean_object* v_toolchain_6662_){
_start:
{
lean_object* v_url_6664_; lean_object* v___y_6672_; uint8_t v_isReservoir_6682_; 
v_isReservoir_6682_ = lean_ctor_get_uint8(v_service_6659_, sizeof(void*)*5);
if (v_isReservoir_6682_ == 0)
{
lean_object* v___x_6683_; 
v___x_6683_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_6658_, v_service_6659_, v_scope_6660_, v_platform_6661_, v_toolchain_6662_);
lean_dec_ref(v_toolchain_6662_);
return v___x_6683_;
}
else
{
if (lean_obj_tag(v_scope_6660_) == 0)
{
lean_object* v_apiEndpoint_6684_; lean_object* v_s_6685_; lean_object* v___x_6686_; lean_object* v___x_6687_; lean_object* v___x_6688_; 
v_apiEndpoint_6684_ = lean_ctor_get(v_service_6659_, 4);
lean_inc_ref(v_apiEndpoint_6684_);
lean_dec_ref(v_service_6659_);
v_s_6685_ = lean_ctor_get(v_scope_6660_, 0);
lean_inc_ref(v_s_6685_);
lean_dec_ref(v_scope_6660_);
v___x_6686_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_6687_ = lean_string_append(v_apiEndpoint_6684_, v___x_6686_);
v___x_6688_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_6687_, v_s_6685_);
v___y_6672_ = v___x_6688_;
goto v___jp_6671_;
}
else
{
lean_object* v_apiEndpoint_6689_; lean_object* v_s_6690_; lean_object* v___x_6691_; lean_object* v___x_6692_; lean_object* v___x_6693_; 
v_apiEndpoint_6689_ = lean_ctor_get(v_service_6659_, 4);
lean_inc_ref(v_apiEndpoint_6689_);
lean_dec_ref(v_service_6659_);
v_s_6690_ = lean_ctor_get(v_scope_6660_, 0);
lean_inc_ref(v_s_6690_);
lean_dec_ref(v_scope_6660_);
v___x_6691_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_6692_ = lean_string_append(v_apiEndpoint_6689_, v___x_6691_);
v___x_6693_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_6692_, v_s_6690_);
v___y_6672_ = v___x_6693_;
goto v___jp_6671_;
}
}
v___jp_6663_:
{
lean_object* v___x_6665_; lean_object* v___x_6666_; uint8_t v___x_6667_; 
v___x_6665_ = lean_string_utf8_byte_size(v_toolchain_6662_);
v___x_6666_ = lean_unsigned_to_nat(0u);
v___x_6667_ = lean_nat_dec_eq(v___x_6665_, v___x_6666_);
if (v___x_6667_ == 0)
{
lean_object* v___x_6668_; lean_object* v___x_6669_; lean_object* v_url_6670_; 
v___x_6668_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__0));
v___x_6669_ = lean_string_append(v_url_6664_, v___x_6668_);
v_url_6670_ = l_Lake_uriEncode(v_toolchain_6662_, v___x_6669_);
return v_url_6670_;
}
else
{
lean_dec_ref(v_toolchain_6662_);
return v_url_6664_;
}
}
v___jp_6671_:
{
lean_object* v___x_6673_; lean_object* v___x_6674_; lean_object* v_url_6675_; lean_object* v___x_6676_; lean_object* v___x_6677_; uint8_t v___x_6678_; 
v___x_6673_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__1));
v___x_6674_ = lean_string_append(v___y_6672_, v___x_6673_);
v_url_6675_ = lean_string_append(v___x_6674_, v_rev_6658_);
v___x_6676_ = lean_string_utf8_byte_size(v_platform_6661_);
v___x_6677_ = lean_unsigned_to_nat(0u);
v___x_6678_ = lean_nat_dec_eq(v___x_6676_, v___x_6677_);
if (v___x_6678_ == 0)
{
lean_object* v___x_6679_; lean_object* v___x_6680_; lean_object* v_url_6681_; 
v___x_6679_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__2));
v___x_6680_ = lean_string_append(v_url_6675_, v___x_6679_);
v_url_6681_ = l_Lake_uriEncode(v_platform_6661_, v___x_6680_);
v_url_6664_ = v_url_6681_;
goto v___jp_6663_;
}
else
{
lean_dec_ref(v_platform_6661_);
v_url_6664_ = v_url_6675_;
goto v___jp_6663_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl___boxed(lean_object* v_rev_6694_, lean_object* v_service_6695_, lean_object* v_scope_6696_, lean_object* v_platform_6697_, lean_object* v_toolchain_6698_){
_start:
{
lean_object* v_res_6699_; 
v_res_6699_ = l_Lake_CacheService_revisionUrl(v_rev_6694_, v_service_6695_, v_scope_6696_, v_platform_6697_, v_toolchain_6698_);
lean_dec_ref(v_rev_6694_);
return v_res_6699_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f(lean_object* v_rev_6704_, lean_object* v_cache_6705_, lean_object* v_service_6706_, lean_object* v_localScope_6707_, lean_object* v_remoteScope_6708_, lean_object* v_platform_6709_, lean_object* v_toolchain_6710_, uint8_t v_force_6711_, lean_object* v_a_6712_){
_start:
{
lean_object* v_a_6718_; lean_object* v_a_6725_; lean_object* v___y_6729_; lean_object* v___y_6730_; lean_object* v_a_6738_; lean_object* v___x_6742_; lean_object* v___x_6743_; lean_object* v___x_6744_; lean_object* v___x_6745_; lean_object* v___x_6746_; lean_object* v_path_6747_; lean_object* v_a_6749_; lean_object* v___y_6851_; lean_object* v___y_6852_; uint8_t v___x_6901_; lean_object* v___x_6965_; uint8_t v___x_6966_; 
v___x_6742_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_6743_ = l_System_FilePath_join(v_cache_6705_, v___x_6742_);
lean_inc_ref(v_localScope_6707_);
v___x_6744_ = l_System_FilePath_join(v___x_6743_, v_localScope_6707_);
v___x_6745_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
lean_inc_ref(v_rev_6704_);
v___x_6746_ = lean_string_append(v_rev_6704_, v___x_6745_);
v_path_6747_ = l_System_FilePath_join(v___x_6744_, v___x_6746_);
v___x_6901_ = l_System_FilePath_pathExists(v_path_6747_);
v___x_6965_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_6966_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__4, &l_Lake_CacheService_downloadArtifact___closed__4_once, _init_l_Lake_CacheService_downloadArtifact___closed__4);
if (v___x_6966_ == 0)
{
goto v___jp_6902_;
}
else
{
lean_object* v___x_6967_; uint8_t v___x_6968_; 
v___x_6967_ = lean_box(0);
v___x_6968_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__5, &l_Lake_CacheService_downloadArtifact___closed__5_once, _init_l_Lake_CacheService_downloadArtifact___closed__5);
if (v___x_6968_ == 0)
{
if (v___x_6966_ == 0)
{
goto v___jp_6902_;
}
else
{
size_t v___x_6969_; size_t v___x_6970_; lean_object* v___x_6971_; 
v___x_6969_ = ((size_t)0ULL);
v___x_6970_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
lean_inc_ref(v_a_6712_);
v___x_6971_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v___x_6965_, v___x_6969_, v___x_6970_, v___x_6967_, v_a_6712_);
if (lean_obj_tag(v___x_6971_) == 0)
{
lean_dec_ref(v___x_6971_);
goto v___jp_6902_;
}
else
{
lean_object* v_a_6972_; lean_object* v___x_6974_; uint8_t v_isShared_6975_; uint8_t v_isSharedCheck_6979_; 
lean_dec_ref(v_path_6747_);
lean_dec_ref(v_a_6712_);
lean_dec_ref(v_toolchain_6710_);
lean_dec_ref(v_platform_6709_);
lean_dec_ref(v_remoteScope_6708_);
lean_dec_ref(v_localScope_6707_);
lean_dec_ref(v_service_6706_);
lean_dec_ref(v_rev_6704_);
v_a_6972_ = lean_ctor_get(v___x_6971_, 0);
v_isSharedCheck_6979_ = !lean_is_exclusive(v___x_6971_);
if (v_isSharedCheck_6979_ == 0)
{
v___x_6974_ = v___x_6971_;
v_isShared_6975_ = v_isSharedCheck_6979_;
goto v_resetjp_6973_;
}
else
{
lean_inc(v_a_6972_);
lean_dec(v___x_6971_);
v___x_6974_ = lean_box(0);
v_isShared_6975_ = v_isSharedCheck_6979_;
goto v_resetjp_6973_;
}
v_resetjp_6973_:
{
lean_object* v___x_6977_; 
if (v_isShared_6975_ == 0)
{
v___x_6977_ = v___x_6974_;
goto v_reusejp_6976_;
}
else
{
lean_object* v_reuseFailAlloc_6978_; 
v_reuseFailAlloc_6978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6978_, 0, v_a_6972_);
v___x_6977_ = v_reuseFailAlloc_6978_;
goto v_reusejp_6976_;
}
v_reusejp_6976_:
{
return v___x_6977_;
}
}
}
}
}
else
{
size_t v___x_6980_; size_t v___x_6981_; lean_object* v___x_6982_; 
v___x_6980_ = ((size_t)0ULL);
v___x_6981_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
lean_inc_ref(v_a_6712_);
v___x_6982_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v___x_6965_, v___x_6980_, v___x_6981_, v___x_6967_, v_a_6712_);
if (lean_obj_tag(v___x_6982_) == 0)
{
lean_dec_ref(v___x_6982_);
goto v___jp_6902_;
}
else
{
lean_object* v_a_6983_; lean_object* v___x_6985_; uint8_t v_isShared_6986_; uint8_t v_isSharedCheck_6990_; 
lean_dec_ref(v_path_6747_);
lean_dec_ref(v_a_6712_);
lean_dec_ref(v_toolchain_6710_);
lean_dec_ref(v_platform_6709_);
lean_dec_ref(v_remoteScope_6708_);
lean_dec_ref(v_localScope_6707_);
lean_dec_ref(v_service_6706_);
lean_dec_ref(v_rev_6704_);
v_a_6983_ = lean_ctor_get(v___x_6982_, 0);
v_isSharedCheck_6990_ = !lean_is_exclusive(v___x_6982_);
if (v_isSharedCheck_6990_ == 0)
{
v___x_6985_ = v___x_6982_;
v_isShared_6986_ = v_isSharedCheck_6990_;
goto v_resetjp_6984_;
}
else
{
lean_inc(v_a_6983_);
lean_dec(v___x_6982_);
v___x_6985_ = lean_box(0);
v_isShared_6986_ = v_isSharedCheck_6990_;
goto v_resetjp_6984_;
}
v_resetjp_6984_:
{
lean_object* v___x_6988_; 
if (v_isShared_6986_ == 0)
{
v___x_6988_ = v___x_6985_;
goto v_reusejp_6987_;
}
else
{
lean_object* v_reuseFailAlloc_6989_; 
v_reuseFailAlloc_6989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6989_, 0, v_a_6983_);
v___x_6988_ = v_reuseFailAlloc_6989_;
goto v_reusejp_6987_;
}
v_reusejp_6987_:
{
return v___x_6988_;
}
}
}
}
}
v___jp_6714_:
{
lean_object* v___x_6715_; lean_object* v___x_6716_; 
v___x_6715_ = lean_box(0);
v___x_6716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6716_, 0, v___x_6715_);
return v___x_6716_;
}
v___jp_6717_:
{
lean_object* v___x_6719_; lean_object* v___x_6720_; 
v___x_6719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6719_, 0, v_a_6718_);
v___x_6720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6720_, 0, v___x_6719_);
return v___x_6720_;
}
v___jp_6721_:
{
lean_object* v___x_6722_; lean_object* v___x_6723_; 
v___x_6722_ = lean_box(0);
v___x_6723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6723_, 0, v___x_6722_);
return v___x_6723_;
}
v___jp_6724_:
{
lean_object* v___x_6726_; lean_object* v___x_6727_; 
v___x_6726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6726_, 0, v_a_6725_);
v___x_6727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6727_, 0, v___x_6726_);
return v___x_6727_;
}
v___jp_6728_:
{
lean_object* v___x_6731_; lean_object* v___x_6732_; uint8_t v___x_6733_; lean_object* v___x_6734_; lean_object* v___x_6735_; lean_object* v___x_6736_; 
v___x_6731_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__0));
v___x_6732_ = lean_string_append(v___y_6730_, v___x_6731_);
v___x_6733_ = 3;
v___x_6734_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6734_, 0, v___x_6732_);
lean_ctor_set_uint8(v___x_6734_, sizeof(void*)*1, v___x_6733_);
v___x_6735_ = lean_apply_2(v_a_6712_, v___x_6734_, lean_box(0));
v___x_6736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6736_, 0, v___y_6729_);
return v___x_6736_;
}
v___jp_6737_:
{
lean_object* v_s_6739_; 
v_s_6739_ = lean_ctor_get(v_remoteScope_6708_, 0);
lean_inc_ref(v_s_6739_);
lean_dec_ref(v_remoteScope_6708_);
v___y_6729_ = v_a_6738_;
v___y_6730_ = v_s_6739_;
goto v___jp_6728_;
}
v___jp_6740_:
{
lean_object* v___x_6741_; 
v___x_6741_ = lean_box(0);
v_a_6738_ = v___x_6741_;
goto v___jp_6737_;
}
v___jp_6748_:
{
if (lean_obj_tag(v_a_6749_) == 1)
{
lean_object* v_val_6750_; lean_object* v___x_6751_; 
v_val_6750_ = lean_ctor_get(v_a_6749_, 0);
lean_inc(v_val_6750_);
lean_dec_ref(v_a_6749_);
lean_inc_ref(v_path_6747_);
v___x_6751_ = l_Lake_createParentDirs(v_path_6747_);
if (lean_obj_tag(v___x_6751_) == 0)
{
lean_object* v___x_6752_; 
lean_dec_ref(v___x_6751_);
v___x_6752_ = l_IO_FS_writeFile(v_path_6747_, v_val_6750_);
lean_dec(v_val_6750_);
if (lean_obj_tag(v___x_6752_) == 0)
{
lean_object* v___x_6754_; uint8_t v_isShared_6755_; uint8_t v_isSharedCheck_6820_; 
v_isSharedCheck_6820_ = !lean_is_exclusive(v___x_6752_);
if (v_isSharedCheck_6820_ == 0)
{
lean_object* v_unused_6821_; 
v_unused_6821_ = lean_ctor_get(v___x_6752_, 0);
lean_dec(v_unused_6821_);
v___x_6754_ = v___x_6752_;
v_isShared_6755_ = v_isSharedCheck_6820_;
goto v_resetjp_6753_;
}
else
{
lean_dec(v___x_6752_);
v___x_6754_ = lean_box(0);
v_isShared_6755_ = v_isSharedCheck_6820_;
goto v_resetjp_6753_;
}
v_resetjp_6753_:
{
lean_object* v___x_6756_; lean_object* v___x_6757_; uint8_t v___x_6758_; lean_object* v___x_6759_; lean_object* v___x_6760_; 
v___x_6756_ = lean_string_utf8_byte_size(v_platform_6709_);
lean_dec_ref(v_platform_6709_);
v___x_6757_ = lean_unsigned_to_nat(0u);
v___x_6758_ = lean_nat_dec_eq(v___x_6756_, v___x_6757_);
v___x_6759_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_6760_ = l_Lake_CacheMap_load(v_path_6747_, v___x_6758_, v___x_6759_);
if (lean_obj_tag(v___x_6760_) == 0)
{
lean_object* v_a_6761_; lean_object* v_a_6762_; lean_object* v___x_6763_; uint8_t v___x_6764_; 
lean_del_object(v___x_6754_);
v_a_6761_ = lean_ctor_get(v___x_6760_, 0);
lean_inc(v_a_6761_);
v_a_6762_ = lean_ctor_get(v___x_6760_, 1);
lean_inc(v_a_6762_);
lean_dec_ref(v___x_6760_);
v___x_6763_ = lean_array_get_size(v_a_6762_);
v___x_6764_ = lean_nat_dec_lt(v___x_6757_, v___x_6763_);
if (v___x_6764_ == 0)
{
lean_dec(v_a_6762_);
lean_dec_ref(v_a_6712_);
v_a_6725_ = v_a_6761_;
goto v___jp_6724_;
}
else
{
lean_object* v___x_6765_; uint8_t v___x_6766_; 
v___x_6765_ = lean_box(0);
v___x_6766_ = lean_nat_dec_le(v___x_6763_, v___x_6763_);
if (v___x_6766_ == 0)
{
if (v___x_6764_ == 0)
{
lean_dec(v_a_6762_);
lean_dec_ref(v_a_6712_);
v_a_6725_ = v_a_6761_;
goto v___jp_6724_;
}
else
{
size_t v___x_6767_; size_t v___x_6768_; lean_object* v___x_6769_; 
v___x_6767_ = ((size_t)0ULL);
v___x_6768_ = lean_usize_of_nat(v___x_6763_);
v___x_6769_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6762_, v___x_6767_, v___x_6768_, v___x_6765_, v_a_6712_);
lean_dec(v_a_6762_);
if (lean_obj_tag(v___x_6769_) == 0)
{
lean_dec_ref(v___x_6769_);
v_a_6725_ = v_a_6761_;
goto v___jp_6724_;
}
else
{
lean_object* v_a_6770_; lean_object* v___x_6772_; uint8_t v_isShared_6773_; uint8_t v_isSharedCheck_6777_; 
lean_dec(v_a_6761_);
v_a_6770_ = lean_ctor_get(v___x_6769_, 0);
v_isSharedCheck_6777_ = !lean_is_exclusive(v___x_6769_);
if (v_isSharedCheck_6777_ == 0)
{
v___x_6772_ = v___x_6769_;
v_isShared_6773_ = v_isSharedCheck_6777_;
goto v_resetjp_6771_;
}
else
{
lean_inc(v_a_6770_);
lean_dec(v___x_6769_);
v___x_6772_ = lean_box(0);
v_isShared_6773_ = v_isSharedCheck_6777_;
goto v_resetjp_6771_;
}
v_resetjp_6771_:
{
lean_object* v___x_6775_; 
if (v_isShared_6773_ == 0)
{
v___x_6775_ = v___x_6772_;
goto v_reusejp_6774_;
}
else
{
lean_object* v_reuseFailAlloc_6776_; 
v_reuseFailAlloc_6776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6776_, 0, v_a_6770_);
v___x_6775_ = v_reuseFailAlloc_6776_;
goto v_reusejp_6774_;
}
v_reusejp_6774_:
{
return v___x_6775_;
}
}
}
}
}
else
{
size_t v___x_6778_; size_t v___x_6779_; lean_object* v___x_6780_; 
v___x_6778_ = ((size_t)0ULL);
v___x_6779_ = lean_usize_of_nat(v___x_6763_);
v___x_6780_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6762_, v___x_6778_, v___x_6779_, v___x_6765_, v_a_6712_);
lean_dec(v_a_6762_);
if (lean_obj_tag(v___x_6780_) == 0)
{
lean_dec_ref(v___x_6780_);
v_a_6725_ = v_a_6761_;
goto v___jp_6724_;
}
else
{
lean_object* v_a_6781_; lean_object* v___x_6783_; uint8_t v_isShared_6784_; uint8_t v_isSharedCheck_6788_; 
lean_dec(v_a_6761_);
v_a_6781_ = lean_ctor_get(v___x_6780_, 0);
v_isSharedCheck_6788_ = !lean_is_exclusive(v___x_6780_);
if (v_isSharedCheck_6788_ == 0)
{
v___x_6783_ = v___x_6780_;
v_isShared_6784_ = v_isSharedCheck_6788_;
goto v_resetjp_6782_;
}
else
{
lean_inc(v_a_6781_);
lean_dec(v___x_6780_);
v___x_6783_ = lean_box(0);
v_isShared_6784_ = v_isSharedCheck_6788_;
goto v_resetjp_6782_;
}
v_resetjp_6782_:
{
lean_object* v___x_6786_; 
if (v_isShared_6784_ == 0)
{
v___x_6786_ = v___x_6783_;
goto v_reusejp_6785_;
}
else
{
lean_object* v_reuseFailAlloc_6787_; 
v_reuseFailAlloc_6787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6787_, 0, v_a_6781_);
v___x_6786_ = v_reuseFailAlloc_6787_;
goto v_reusejp_6785_;
}
v_reusejp_6785_:
{
return v___x_6786_;
}
}
}
}
}
}
else
{
lean_object* v_a_6789_; lean_object* v___x_6790_; uint8_t v___x_6791_; 
v_a_6789_ = lean_ctor_get(v___x_6760_, 1);
lean_inc(v_a_6789_);
lean_dec_ref(v___x_6760_);
v___x_6790_ = lean_array_get_size(v_a_6789_);
v___x_6791_ = lean_nat_dec_lt(v___x_6757_, v___x_6790_);
if (v___x_6791_ == 0)
{
lean_object* v___x_6792_; lean_object* v___x_6794_; 
lean_dec(v_a_6789_);
lean_dec_ref(v_a_6712_);
v___x_6792_ = lean_box(0);
if (v_isShared_6755_ == 0)
{
lean_ctor_set_tag(v___x_6754_, 1);
lean_ctor_set(v___x_6754_, 0, v___x_6792_);
v___x_6794_ = v___x_6754_;
goto v_reusejp_6793_;
}
else
{
lean_object* v_reuseFailAlloc_6795_; 
v_reuseFailAlloc_6795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6795_, 0, v___x_6792_);
v___x_6794_ = v_reuseFailAlloc_6795_;
goto v_reusejp_6793_;
}
v_reusejp_6793_:
{
return v___x_6794_;
}
}
else
{
lean_object* v___x_6796_; uint8_t v___x_6797_; 
lean_del_object(v___x_6754_);
v___x_6796_ = lean_box(0);
v___x_6797_ = lean_nat_dec_le(v___x_6790_, v___x_6790_);
if (v___x_6797_ == 0)
{
if (v___x_6791_ == 0)
{
lean_dec(v_a_6789_);
lean_dec_ref(v_a_6712_);
goto v___jp_6721_;
}
else
{
size_t v___x_6798_; size_t v___x_6799_; lean_object* v___x_6800_; 
v___x_6798_ = ((size_t)0ULL);
v___x_6799_ = lean_usize_of_nat(v___x_6790_);
v___x_6800_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6789_, v___x_6798_, v___x_6799_, v___x_6796_, v_a_6712_);
lean_dec(v_a_6789_);
if (lean_obj_tag(v___x_6800_) == 0)
{
lean_dec_ref(v___x_6800_);
goto v___jp_6721_;
}
else
{
lean_object* v_a_6801_; lean_object* v___x_6803_; uint8_t v_isShared_6804_; uint8_t v_isSharedCheck_6808_; 
v_a_6801_ = lean_ctor_get(v___x_6800_, 0);
v_isSharedCheck_6808_ = !lean_is_exclusive(v___x_6800_);
if (v_isSharedCheck_6808_ == 0)
{
v___x_6803_ = v___x_6800_;
v_isShared_6804_ = v_isSharedCheck_6808_;
goto v_resetjp_6802_;
}
else
{
lean_inc(v_a_6801_);
lean_dec(v___x_6800_);
v___x_6803_ = lean_box(0);
v_isShared_6804_ = v_isSharedCheck_6808_;
goto v_resetjp_6802_;
}
v_resetjp_6802_:
{
lean_object* v___x_6806_; 
if (v_isShared_6804_ == 0)
{
v___x_6806_ = v___x_6803_;
goto v_reusejp_6805_;
}
else
{
lean_object* v_reuseFailAlloc_6807_; 
v_reuseFailAlloc_6807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6807_, 0, v_a_6801_);
v___x_6806_ = v_reuseFailAlloc_6807_;
goto v_reusejp_6805_;
}
v_reusejp_6805_:
{
return v___x_6806_;
}
}
}
}
}
else
{
size_t v___x_6809_; size_t v___x_6810_; lean_object* v___x_6811_; 
v___x_6809_ = ((size_t)0ULL);
v___x_6810_ = lean_usize_of_nat(v___x_6790_);
v___x_6811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6789_, v___x_6809_, v___x_6810_, v___x_6796_, v_a_6712_);
lean_dec(v_a_6789_);
if (lean_obj_tag(v___x_6811_) == 0)
{
lean_dec_ref(v___x_6811_);
goto v___jp_6721_;
}
else
{
lean_object* v_a_6812_; lean_object* v___x_6814_; uint8_t v_isShared_6815_; uint8_t v_isSharedCheck_6819_; 
v_a_6812_ = lean_ctor_get(v___x_6811_, 0);
v_isSharedCheck_6819_ = !lean_is_exclusive(v___x_6811_);
if (v_isSharedCheck_6819_ == 0)
{
v___x_6814_ = v___x_6811_;
v_isShared_6815_ = v_isSharedCheck_6819_;
goto v_resetjp_6813_;
}
else
{
lean_inc(v_a_6812_);
lean_dec(v___x_6811_);
v___x_6814_ = lean_box(0);
v_isShared_6815_ = v_isSharedCheck_6819_;
goto v_resetjp_6813_;
}
v_resetjp_6813_:
{
lean_object* v___x_6817_; 
if (v_isShared_6815_ == 0)
{
v___x_6817_ = v___x_6814_;
goto v_reusejp_6816_;
}
else
{
lean_object* v_reuseFailAlloc_6818_; 
v_reuseFailAlloc_6818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6818_, 0, v_a_6812_);
v___x_6817_ = v_reuseFailAlloc_6818_;
goto v_reusejp_6816_;
}
v_reusejp_6816_:
{
return v___x_6817_;
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
lean_object* v_a_6822_; lean_object* v___x_6824_; uint8_t v_isShared_6825_; uint8_t v_isSharedCheck_6834_; 
lean_dec_ref(v_path_6747_);
lean_dec_ref(v_platform_6709_);
v_a_6822_ = lean_ctor_get(v___x_6752_, 0);
v_isSharedCheck_6834_ = !lean_is_exclusive(v___x_6752_);
if (v_isSharedCheck_6834_ == 0)
{
v___x_6824_ = v___x_6752_;
v_isShared_6825_ = v_isSharedCheck_6834_;
goto v_resetjp_6823_;
}
else
{
lean_inc(v_a_6822_);
lean_dec(v___x_6752_);
v___x_6824_ = lean_box(0);
v_isShared_6825_ = v_isSharedCheck_6834_;
goto v_resetjp_6823_;
}
v_resetjp_6823_:
{
lean_object* v___x_6826_; uint8_t v___x_6827_; lean_object* v___x_6828_; lean_object* v___x_6829_; lean_object* v___x_6830_; lean_object* v___x_6832_; 
v___x_6826_ = lean_io_error_to_string(v_a_6822_);
v___x_6827_ = 3;
v___x_6828_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6828_, 0, v___x_6826_);
lean_ctor_set_uint8(v___x_6828_, sizeof(void*)*1, v___x_6827_);
v___x_6829_ = lean_apply_2(v_a_6712_, v___x_6828_, lean_box(0));
v___x_6830_ = lean_box(0);
if (v_isShared_6825_ == 0)
{
lean_ctor_set(v___x_6824_, 0, v___x_6830_);
v___x_6832_ = v___x_6824_;
goto v_reusejp_6831_;
}
else
{
lean_object* v_reuseFailAlloc_6833_; 
v_reuseFailAlloc_6833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6833_, 0, v___x_6830_);
v___x_6832_ = v_reuseFailAlloc_6833_;
goto v_reusejp_6831_;
}
v_reusejp_6831_:
{
return v___x_6832_;
}
}
}
}
else
{
lean_object* v_a_6835_; lean_object* v___x_6837_; uint8_t v_isShared_6838_; uint8_t v_isSharedCheck_6847_; 
lean_dec(v_val_6750_);
lean_dec_ref(v_path_6747_);
lean_dec_ref(v_platform_6709_);
v_a_6835_ = lean_ctor_get(v___x_6751_, 0);
v_isSharedCheck_6847_ = !lean_is_exclusive(v___x_6751_);
if (v_isSharedCheck_6847_ == 0)
{
v___x_6837_ = v___x_6751_;
v_isShared_6838_ = v_isSharedCheck_6847_;
goto v_resetjp_6836_;
}
else
{
lean_inc(v_a_6835_);
lean_dec(v___x_6751_);
v___x_6837_ = lean_box(0);
v_isShared_6838_ = v_isSharedCheck_6847_;
goto v_resetjp_6836_;
}
v_resetjp_6836_:
{
lean_object* v___x_6839_; uint8_t v___x_6840_; lean_object* v___x_6841_; lean_object* v___x_6842_; lean_object* v___x_6843_; lean_object* v___x_6845_; 
v___x_6839_ = lean_io_error_to_string(v_a_6835_);
v___x_6840_ = 3;
v___x_6841_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6841_, 0, v___x_6839_);
lean_ctor_set_uint8(v___x_6841_, sizeof(void*)*1, v___x_6840_);
v___x_6842_ = lean_apply_2(v_a_6712_, v___x_6841_, lean_box(0));
v___x_6843_ = lean_box(0);
if (v_isShared_6838_ == 0)
{
lean_ctor_set(v___x_6837_, 0, v___x_6843_);
v___x_6845_ = v___x_6837_;
goto v_reusejp_6844_;
}
else
{
lean_object* v_reuseFailAlloc_6846_; 
v_reuseFailAlloc_6846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6846_, 0, v___x_6843_);
v___x_6845_ = v_reuseFailAlloc_6846_;
goto v_reusejp_6844_;
}
v_reusejp_6844_:
{
return v___x_6845_;
}
}
}
}
else
{
lean_object* v___x_6848_; lean_object* v___x_6849_; 
lean_dec(v_a_6749_);
lean_dec_ref(v_path_6747_);
lean_dec_ref(v_a_6712_);
lean_dec_ref(v_platform_6709_);
v___x_6848_ = lean_box(0);
v___x_6849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6849_, 0, v___x_6848_);
return v___x_6849_;
}
}
v___jp_6850_:
{
lean_object* v___x_6853_; lean_object* v___x_6854_; lean_object* v___x_6855_; 
v___x_6853_ = lean_unsigned_to_nat(0u);
v___x_6854_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_6855_ = l_Lake_getUrl_x3f(v___y_6851_, v___y_6852_, v___x_6854_);
lean_dec_ref(v___y_6852_);
if (lean_obj_tag(v___x_6855_) == 0)
{
lean_object* v_a_6856_; lean_object* v_a_6857_; lean_object* v___x_6858_; uint8_t v___x_6859_; 
v_a_6856_ = lean_ctor_get(v___x_6855_, 0);
lean_inc(v_a_6856_);
v_a_6857_ = lean_ctor_get(v___x_6855_, 1);
lean_inc(v_a_6857_);
lean_dec_ref(v___x_6855_);
v___x_6858_ = lean_array_get_size(v_a_6857_);
v___x_6859_ = lean_nat_dec_lt(v___x_6853_, v___x_6858_);
if (v___x_6859_ == 0)
{
lean_dec(v_a_6857_);
lean_dec_ref(v_remoteScope_6708_);
v_a_6749_ = v_a_6856_;
goto v___jp_6748_;
}
else
{
lean_object* v___x_6860_; uint8_t v___x_6861_; 
v___x_6860_ = lean_box(0);
v___x_6861_ = lean_nat_dec_le(v___x_6858_, v___x_6858_);
if (v___x_6861_ == 0)
{
if (v___x_6859_ == 0)
{
lean_dec(v_a_6857_);
lean_dec_ref(v_remoteScope_6708_);
v_a_6749_ = v_a_6856_;
goto v___jp_6748_;
}
else
{
size_t v___x_6862_; size_t v___x_6863_; lean_object* v___x_6864_; 
v___x_6862_ = ((size_t)0ULL);
v___x_6863_ = lean_usize_of_nat(v___x_6858_);
lean_inc_ref(v_a_6712_);
v___x_6864_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6857_, v___x_6862_, v___x_6863_, v___x_6860_, v_a_6712_);
lean_dec(v_a_6857_);
if (lean_obj_tag(v___x_6864_) == 0)
{
lean_dec_ref(v___x_6864_);
lean_dec_ref(v_remoteScope_6708_);
v_a_6749_ = v_a_6856_;
goto v___jp_6748_;
}
else
{
lean_object* v_a_6865_; 
lean_dec(v_a_6856_);
lean_dec_ref(v_path_6747_);
lean_dec_ref(v_platform_6709_);
v_a_6865_ = lean_ctor_get(v___x_6864_, 0);
lean_inc(v_a_6865_);
lean_dec_ref(v___x_6864_);
v_a_6738_ = v_a_6865_;
goto v___jp_6737_;
}
}
}
else
{
size_t v___x_6866_; size_t v___x_6867_; lean_object* v___x_6868_; 
v___x_6866_ = ((size_t)0ULL);
v___x_6867_ = lean_usize_of_nat(v___x_6858_);
lean_inc_ref(v_a_6712_);
v___x_6868_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6857_, v___x_6866_, v___x_6867_, v___x_6860_, v_a_6712_);
lean_dec(v_a_6857_);
if (lean_obj_tag(v___x_6868_) == 0)
{
lean_dec_ref(v___x_6868_);
lean_dec_ref(v_remoteScope_6708_);
v_a_6749_ = v_a_6856_;
goto v___jp_6748_;
}
else
{
lean_object* v_a_6869_; 
lean_dec(v_a_6856_);
lean_dec_ref(v_path_6747_);
lean_dec_ref(v_platform_6709_);
v_a_6869_ = lean_ctor_get(v___x_6868_, 0);
lean_inc(v_a_6869_);
lean_dec_ref(v___x_6868_);
v_a_6738_ = v_a_6869_;
goto v___jp_6737_;
}
}
}
}
else
{
lean_object* v_a_6870_; lean_object* v___x_6871_; uint8_t v___x_6872_; 
lean_dec_ref(v_path_6747_);
lean_dec_ref(v_platform_6709_);
v_a_6870_ = lean_ctor_get(v___x_6855_, 1);
lean_inc(v_a_6870_);
lean_dec_ref(v___x_6855_);
v___x_6871_ = lean_array_get_size(v_a_6870_);
v___x_6872_ = lean_nat_dec_lt(v___x_6853_, v___x_6871_);
if (v___x_6872_ == 0)
{
lean_object* v___x_6873_; 
lean_dec(v_a_6870_);
v___x_6873_ = lean_box(0);
v_a_6738_ = v___x_6873_;
goto v___jp_6737_;
}
else
{
lean_object* v___x_6874_; uint8_t v___x_6875_; 
v___x_6874_ = lean_box(0);
v___x_6875_ = lean_nat_dec_le(v___x_6871_, v___x_6871_);
if (v___x_6875_ == 0)
{
if (v___x_6872_ == 0)
{
lean_dec(v_a_6870_);
goto v___jp_6740_;
}
else
{
size_t v___x_6876_; size_t v___x_6877_; lean_object* v___x_6878_; 
v___x_6876_ = ((size_t)0ULL);
v___x_6877_ = lean_usize_of_nat(v___x_6871_);
lean_inc_ref(v_a_6712_);
v___x_6878_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6870_, v___x_6876_, v___x_6877_, v___x_6874_, v_a_6712_);
lean_dec(v_a_6870_);
if (lean_obj_tag(v___x_6878_) == 0)
{
lean_dec_ref(v___x_6878_);
goto v___jp_6740_;
}
else
{
lean_object* v_a_6879_; 
v_a_6879_ = lean_ctor_get(v___x_6878_, 0);
lean_inc(v_a_6879_);
lean_dec_ref(v___x_6878_);
v_a_6738_ = v_a_6879_;
goto v___jp_6737_;
}
}
}
else
{
size_t v___x_6880_; size_t v___x_6881_; lean_object* v___x_6882_; 
v___x_6880_ = ((size_t)0ULL);
v___x_6881_ = lean_usize_of_nat(v___x_6871_);
lean_inc_ref(v_a_6712_);
v___x_6882_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6870_, v___x_6880_, v___x_6881_, v___x_6874_, v_a_6712_);
lean_dec(v_a_6870_);
if (lean_obj_tag(v___x_6882_) == 0)
{
lean_dec_ref(v___x_6882_);
goto v___jp_6740_;
}
else
{
lean_object* v_a_6883_; 
v_a_6883_ = lean_ctor_get(v___x_6882_, 0);
lean_inc(v_a_6883_);
lean_dec_ref(v___x_6882_);
v_a_6738_ = v_a_6883_;
goto v___jp_6737_;
}
}
}
}
}
v___jp_6884_:
{
lean_object* v___x_6885_; lean_object* v___x_6886_; lean_object* v___x_6887_; lean_object* v___x_6888_; lean_object* v___x_6889_; lean_object* v___x_6890_; lean_object* v___x_6891_; lean_object* v___x_6892_; lean_object* v___x_6893_; lean_object* v___x_6894_; uint8_t v___x_6895_; lean_object* v___x_6896_; lean_object* v___x_6897_; uint8_t v_isReservoir_6898_; 
lean_inc_ref(v_platform_6709_);
lean_inc_ref(v_remoteScope_6708_);
lean_inc_ref(v_service_6706_);
v___x_6885_ = l_Lake_CacheService_revisionUrl(v_rev_6704_, v_service_6706_, v_remoteScope_6708_, v_platform_6709_, v_toolchain_6710_);
v___x_6886_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__1));
v___x_6887_ = lean_string_append(v_localScope_6707_, v___x_6886_);
v___x_6888_ = lean_string_append(v___x_6887_, v_rev_6704_);
lean_dec_ref(v_rev_6704_);
v___x_6889_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_6890_ = lean_string_append(v___x_6888_, v___x_6889_);
v___x_6891_ = lean_string_append(v___x_6890_, v_path_6747_);
v___x_6892_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_6893_ = lean_string_append(v___x_6891_, v___x_6892_);
v___x_6894_ = lean_string_append(v___x_6893_, v___x_6885_);
v___x_6895_ = 1;
v___x_6896_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6896_, 0, v___x_6894_);
lean_ctor_set_uint8(v___x_6896_, sizeof(void*)*1, v___x_6895_);
lean_inc_ref(v_a_6712_);
v___x_6897_ = lean_apply_2(v_a_6712_, v___x_6896_, lean_box(0));
v_isReservoir_6898_ = lean_ctor_get_uint8(v_service_6706_, sizeof(void*)*5);
lean_dec_ref(v_service_6706_);
if (v_isReservoir_6898_ == 0)
{
lean_object* v___x_6899_; 
v___x_6899_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__2));
v___y_6851_ = v___x_6885_;
v___y_6852_ = v___x_6899_;
goto v___jp_6850_;
}
else
{
lean_object* v___x_6900_; 
v___x_6900_ = l_Lake_Reservoir_lakeHeaders;
v___y_6851_ = v___x_6885_;
v___y_6852_ = v___x_6900_;
goto v___jp_6850_;
}
}
v___jp_6902_:
{
if (v___x_6901_ == 0)
{
goto v___jp_6884_;
}
else
{
if (v_force_6711_ == 0)
{
lean_object* v___x_6903_; lean_object* v___x_6904_; uint8_t v___x_6905_; lean_object* v___x_6906_; lean_object* v___x_6907_; 
lean_dec_ref(v_toolchain_6710_);
lean_dec_ref(v_remoteScope_6708_);
lean_dec_ref(v_localScope_6707_);
lean_dec_ref(v_service_6706_);
lean_dec_ref(v_rev_6704_);
v___x_6903_ = lean_string_utf8_byte_size(v_platform_6709_);
lean_dec_ref(v_platform_6709_);
v___x_6904_ = lean_unsigned_to_nat(0u);
v___x_6905_ = lean_nat_dec_eq(v___x_6903_, v___x_6904_);
v___x_6906_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_6907_ = l_Lake_CacheMap_load(v_path_6747_, v___x_6905_, v___x_6906_);
if (lean_obj_tag(v___x_6907_) == 0)
{
lean_object* v_a_6908_; lean_object* v_a_6909_; lean_object* v___x_6910_; uint8_t v___x_6911_; 
v_a_6908_ = lean_ctor_get(v___x_6907_, 0);
lean_inc(v_a_6908_);
v_a_6909_ = lean_ctor_get(v___x_6907_, 1);
lean_inc(v_a_6909_);
lean_dec_ref(v___x_6907_);
v___x_6910_ = lean_array_get_size(v_a_6909_);
v___x_6911_ = lean_nat_dec_lt(v___x_6904_, v___x_6910_);
if (v___x_6911_ == 0)
{
lean_dec(v_a_6909_);
lean_dec_ref(v_a_6712_);
v_a_6718_ = v_a_6908_;
goto v___jp_6717_;
}
else
{
lean_object* v___x_6912_; uint8_t v___x_6913_; 
v___x_6912_ = lean_box(0);
v___x_6913_ = lean_nat_dec_le(v___x_6910_, v___x_6910_);
if (v___x_6913_ == 0)
{
if (v___x_6911_ == 0)
{
lean_dec(v_a_6909_);
lean_dec_ref(v_a_6712_);
v_a_6718_ = v_a_6908_;
goto v___jp_6717_;
}
else
{
size_t v___x_6914_; size_t v___x_6915_; lean_object* v___x_6916_; 
v___x_6914_ = ((size_t)0ULL);
v___x_6915_ = lean_usize_of_nat(v___x_6910_);
v___x_6916_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6909_, v___x_6914_, v___x_6915_, v___x_6912_, v_a_6712_);
lean_dec(v_a_6909_);
if (lean_obj_tag(v___x_6916_) == 0)
{
lean_dec_ref(v___x_6916_);
v_a_6718_ = v_a_6908_;
goto v___jp_6717_;
}
else
{
lean_object* v_a_6917_; lean_object* v___x_6919_; uint8_t v_isShared_6920_; uint8_t v_isSharedCheck_6924_; 
lean_dec(v_a_6908_);
v_a_6917_ = lean_ctor_get(v___x_6916_, 0);
v_isSharedCheck_6924_ = !lean_is_exclusive(v___x_6916_);
if (v_isSharedCheck_6924_ == 0)
{
v___x_6919_ = v___x_6916_;
v_isShared_6920_ = v_isSharedCheck_6924_;
goto v_resetjp_6918_;
}
else
{
lean_inc(v_a_6917_);
lean_dec(v___x_6916_);
v___x_6919_ = lean_box(0);
v_isShared_6920_ = v_isSharedCheck_6924_;
goto v_resetjp_6918_;
}
v_resetjp_6918_:
{
lean_object* v___x_6922_; 
if (v_isShared_6920_ == 0)
{
v___x_6922_ = v___x_6919_;
goto v_reusejp_6921_;
}
else
{
lean_object* v_reuseFailAlloc_6923_; 
v_reuseFailAlloc_6923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6923_, 0, v_a_6917_);
v___x_6922_ = v_reuseFailAlloc_6923_;
goto v_reusejp_6921_;
}
v_reusejp_6921_:
{
return v___x_6922_;
}
}
}
}
}
else
{
size_t v___x_6925_; size_t v___x_6926_; lean_object* v___x_6927_; 
v___x_6925_ = ((size_t)0ULL);
v___x_6926_ = lean_usize_of_nat(v___x_6910_);
v___x_6927_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6909_, v___x_6925_, v___x_6926_, v___x_6912_, v_a_6712_);
lean_dec(v_a_6909_);
if (lean_obj_tag(v___x_6927_) == 0)
{
lean_dec_ref(v___x_6927_);
v_a_6718_ = v_a_6908_;
goto v___jp_6717_;
}
else
{
lean_object* v_a_6928_; lean_object* v___x_6930_; uint8_t v_isShared_6931_; uint8_t v_isSharedCheck_6935_; 
lean_dec(v_a_6908_);
v_a_6928_ = lean_ctor_get(v___x_6927_, 0);
v_isSharedCheck_6935_ = !lean_is_exclusive(v___x_6927_);
if (v_isSharedCheck_6935_ == 0)
{
v___x_6930_ = v___x_6927_;
v_isShared_6931_ = v_isSharedCheck_6935_;
goto v_resetjp_6929_;
}
else
{
lean_inc(v_a_6928_);
lean_dec(v___x_6927_);
v___x_6930_ = lean_box(0);
v_isShared_6931_ = v_isSharedCheck_6935_;
goto v_resetjp_6929_;
}
v_resetjp_6929_:
{
lean_object* v___x_6933_; 
if (v_isShared_6931_ == 0)
{
v___x_6933_ = v___x_6930_;
goto v_reusejp_6932_;
}
else
{
lean_object* v_reuseFailAlloc_6934_; 
v_reuseFailAlloc_6934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6934_, 0, v_a_6928_);
v___x_6933_ = v_reuseFailAlloc_6934_;
goto v_reusejp_6932_;
}
v_reusejp_6932_:
{
return v___x_6933_;
}
}
}
}
}
}
else
{
lean_object* v_a_6936_; lean_object* v___x_6937_; uint8_t v___x_6938_; 
v_a_6936_ = lean_ctor_get(v___x_6907_, 1);
lean_inc(v_a_6936_);
lean_dec_ref(v___x_6907_);
v___x_6937_ = lean_array_get_size(v_a_6936_);
v___x_6938_ = lean_nat_dec_lt(v___x_6904_, v___x_6937_);
if (v___x_6938_ == 0)
{
lean_object* v___x_6939_; lean_object* v___x_6940_; 
lean_dec(v_a_6936_);
lean_dec_ref(v_a_6712_);
v___x_6939_ = lean_box(0);
v___x_6940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6940_, 0, v___x_6939_);
return v___x_6940_;
}
else
{
lean_object* v___x_6941_; uint8_t v___x_6942_; 
v___x_6941_ = lean_box(0);
v___x_6942_ = lean_nat_dec_le(v___x_6937_, v___x_6937_);
if (v___x_6942_ == 0)
{
if (v___x_6938_ == 0)
{
lean_dec(v_a_6936_);
lean_dec_ref(v_a_6712_);
goto v___jp_6714_;
}
else
{
size_t v___x_6943_; size_t v___x_6944_; lean_object* v___x_6945_; 
v___x_6943_ = ((size_t)0ULL);
v___x_6944_ = lean_usize_of_nat(v___x_6937_);
v___x_6945_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6936_, v___x_6943_, v___x_6944_, v___x_6941_, v_a_6712_);
lean_dec(v_a_6936_);
if (lean_obj_tag(v___x_6945_) == 0)
{
lean_dec_ref(v___x_6945_);
goto v___jp_6714_;
}
else
{
lean_object* v_a_6946_; lean_object* v___x_6948_; uint8_t v_isShared_6949_; uint8_t v_isSharedCheck_6953_; 
v_a_6946_ = lean_ctor_get(v___x_6945_, 0);
v_isSharedCheck_6953_ = !lean_is_exclusive(v___x_6945_);
if (v_isSharedCheck_6953_ == 0)
{
v___x_6948_ = v___x_6945_;
v_isShared_6949_ = v_isSharedCheck_6953_;
goto v_resetjp_6947_;
}
else
{
lean_inc(v_a_6946_);
lean_dec(v___x_6945_);
v___x_6948_ = lean_box(0);
v_isShared_6949_ = v_isSharedCheck_6953_;
goto v_resetjp_6947_;
}
v_resetjp_6947_:
{
lean_object* v___x_6951_; 
if (v_isShared_6949_ == 0)
{
v___x_6951_ = v___x_6948_;
goto v_reusejp_6950_;
}
else
{
lean_object* v_reuseFailAlloc_6952_; 
v_reuseFailAlloc_6952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6952_, 0, v_a_6946_);
v___x_6951_ = v_reuseFailAlloc_6952_;
goto v_reusejp_6950_;
}
v_reusejp_6950_:
{
return v___x_6951_;
}
}
}
}
}
else
{
size_t v___x_6954_; size_t v___x_6955_; lean_object* v___x_6956_; 
v___x_6954_ = ((size_t)0ULL);
v___x_6955_ = lean_usize_of_nat(v___x_6937_);
v___x_6956_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__1(v_a_6936_, v___x_6954_, v___x_6955_, v___x_6941_, v_a_6712_);
lean_dec(v_a_6936_);
if (lean_obj_tag(v___x_6956_) == 0)
{
lean_dec_ref(v___x_6956_);
goto v___jp_6714_;
}
else
{
lean_object* v_a_6957_; lean_object* v___x_6959_; uint8_t v_isShared_6960_; uint8_t v_isSharedCheck_6964_; 
v_a_6957_ = lean_ctor_get(v___x_6956_, 0);
v_isSharedCheck_6964_ = !lean_is_exclusive(v___x_6956_);
if (v_isSharedCheck_6964_ == 0)
{
v___x_6959_ = v___x_6956_;
v_isShared_6960_ = v_isSharedCheck_6964_;
goto v_resetjp_6958_;
}
else
{
lean_inc(v_a_6957_);
lean_dec(v___x_6956_);
v___x_6959_ = lean_box(0);
v_isShared_6960_ = v_isSharedCheck_6964_;
goto v_resetjp_6958_;
}
v_resetjp_6958_:
{
lean_object* v___x_6962_; 
if (v_isShared_6960_ == 0)
{
v___x_6962_ = v___x_6959_;
goto v_reusejp_6961_;
}
else
{
lean_object* v_reuseFailAlloc_6963_; 
v_reuseFailAlloc_6963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6963_, 0, v_a_6957_);
v___x_6962_ = v_reuseFailAlloc_6963_;
goto v_reusejp_6961_;
}
v_reusejp_6961_:
{
return v___x_6962_;
}
}
}
}
}
}
}
else
{
goto v___jp_6884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___boxed(lean_object* v_rev_6991_, lean_object* v_cache_6992_, lean_object* v_service_6993_, lean_object* v_localScope_6994_, lean_object* v_remoteScope_6995_, lean_object* v_platform_6996_, lean_object* v_toolchain_6997_, lean_object* v_force_6998_, lean_object* v_a_6999_, lean_object* v_a_7000_){
_start:
{
uint8_t v_force_boxed_7001_; lean_object* v_res_7002_; 
v_force_boxed_7001_ = lean_unbox(v_force_6998_);
v_res_7002_ = l_Lake_CacheService_downloadRevisionOutputs_x3f(v_rev_6991_, v_cache_6992_, v_service_6993_, v_localScope_6994_, v_remoteScope_6995_, v_platform_6996_, v_toolchain_6997_, v_force_boxed_7001_, v_a_6999_);
return v_res_7002_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs(lean_object* v_rev_7004_, lean_object* v_outputs_7005_, lean_object* v_service_7006_, lean_object* v_scope_7007_, lean_object* v_platform_7008_, lean_object* v_toolchain_7009_, lean_object* v_a_7010_){
_start:
{
lean_object* v_url_7012_; lean_object* v___y_7014_; lean_object* v_s_7030_; 
lean_inc_ref(v_scope_7007_);
lean_inc_ref(v_service_7006_);
v_url_7012_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_7004_, v_service_7006_, v_scope_7007_, v_platform_7008_, v_toolchain_7009_);
v_s_7030_ = lean_ctor_get(v_scope_7007_, 0);
lean_inc_ref(v_s_7030_);
lean_dec_ref(v_scope_7007_);
v___y_7014_ = v_s_7030_;
goto v___jp_7013_;
v___jp_7013_:
{
lean_object* v___x_7015_; lean_object* v___x_7016_; lean_object* v___x_7017_; lean_object* v___x_7018_; lean_object* v___x_7019_; lean_object* v___x_7020_; lean_object* v___x_7021_; lean_object* v___x_7022_; lean_object* v___x_7023_; uint8_t v___x_7024_; lean_object* v___x_7025_; lean_object* v___x_7026_; lean_object* v_key_7027_; lean_object* v___x_7028_; lean_object* v___x_7029_; 
v___x_7015_ = ((lean_object*)(l_Lake_CacheService_uploadRevisionOutputs___closed__0));
v___x_7016_ = lean_string_append(v___y_7014_, v___x_7015_);
v___x_7017_ = lean_string_append(v___x_7016_, v_rev_7004_);
v___x_7018_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_7019_ = lean_string_append(v___x_7017_, v___x_7018_);
v___x_7020_ = lean_string_append(v___x_7019_, v_outputs_7005_);
v___x_7021_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_7022_ = lean_string_append(v___x_7020_, v___x_7021_);
v___x_7023_ = lean_string_append(v___x_7022_, v_url_7012_);
v___x_7024_ = 1;
v___x_7025_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_7025_, 0, v___x_7023_);
lean_ctor_set_uint8(v___x_7025_, sizeof(void*)*1, v___x_7024_);
lean_inc_ref(v_a_7010_);
v___x_7026_ = lean_apply_2(v_a_7010_, v___x_7025_, lean_box(0));
v_key_7027_ = lean_ctor_get(v_service_7006_, 1);
lean_inc_ref(v_key_7027_);
lean_dec_ref(v_service_7006_);
v___x_7028_ = ((lean_object*)(l_Lake_CacheService_mapContentType___closed__0));
v___x_7029_ = l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(v_a_7010_, v_outputs_7005_, v___x_7028_, v_url_7012_, v_key_7027_);
return v___x_7029_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs___boxed(lean_object* v_rev_7031_, lean_object* v_outputs_7032_, lean_object* v_service_7033_, lean_object* v_scope_7034_, lean_object* v_platform_7035_, lean_object* v_toolchain_7036_, lean_object* v_a_7037_, lean_object* v_a_7038_){
_start:
{
lean_object* v_res_7039_; 
v_res_7039_ = l_Lake_CacheService_uploadRevisionOutputs(v_rev_7031_, v_outputs_7032_, v_service_7033_, v_scope_7034_, v_platform_7035_, v_toolchain_7036_, v_a_7037_);
lean_dec_ref(v_toolchain_7036_);
lean_dec_ref(v_rev_7031_);
return v_res_7039_;
}
}
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Log(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Version(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Artifact(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_InstallPath(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Actions(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Url(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Reservoir(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Lemmas(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Cache(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Artifact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_InstallPath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Reservoir(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instInhabitedCache_default = _init_l_Lake_instInhabitedCache_default();
lean_mark_persistent(l_Lake_instInhabitedCache_default);
l_Lake_instInhabitedCache = _init_l_Lake_instInhabitedCache();
lean_mark_persistent(l_Lake_instInhabitedCache);
l_Lake_CachePlatform_system = _init_l_Lake_CachePlatform_system();
lean_mark_persistent(l_Lake_CachePlatform_system);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Cache(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Control_Do(uint8_t builtin);
lean_object* initialize_Lake_Util_Log(uint8_t builtin);
lean_object* initialize_Lake_Util_Version(uint8_t builtin);
lean_object* initialize_Lake_Config_Artifact(uint8_t builtin);
lean_object* initialize_Lake_Config_InstallPath(uint8_t builtin);
lean_object* initialize_Lake_Build_Actions(uint8_t builtin);
lean_object* initialize_Lake_Util_Url(uint8_t builtin);
lean_object* initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* initialize_Lake_Util_Reservoir(uint8_t builtin);
lean_object* initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Init_Data_String_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Cache(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Artifact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_InstallPath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Reservoir(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Cache(builtin);
}
#ifdef __cplusplus
}
#endif
