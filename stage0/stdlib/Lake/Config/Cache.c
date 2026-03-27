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
lean_object* lean_string_append(lean_object*, lean_object*);
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
lean_object* lean_nat_add(lean_object*, lean_object*);
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_Hash_hex(uint64_t);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_Lake_JsonObject_insertJson(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_Lake_Hash_ofJsonNumber_x3f(lean_object*);
lean_object* l_Lean_JsonNumber_toString(lean_object*);
lean_object* l_Lake_ArtifactDescr_ofFilePath_x3f(lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint8_t l_String_instDecidableLtRaw___aux__1(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_Lake_removeFileIfExists(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* lean_io_prim_handle_read(lean_object*, size_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lake_Hash_fromJson_x3f(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Date_fromJson_x3f(lean_object*);
lean_object* l_Lake_Date_toString(lean_object*);
uint8_t l_Lake_instOrdDate_ord(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_prim_handle_get_line(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_io_remove_file(lean_object*);
lean_object* l_Lake_computeBinFileHash(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readToEnd(lean_object*);
lean_object* lean_io_prim_handle_flush(lean_object*);
lean_object* l_IO_FS_Handle_putStrLn(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
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
uint8_t l_System_FilePath_pathExists(lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_CacheMap_parse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheMap_parse___closed__0;
static const lean_array_object l_Lake_CacheMap_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_CacheMap_parse___closed__1 = (const lean_object*)&l_Lake_CacheMap_parse___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_array_object l_Lake_downloadArtifactCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_downloadArtifactCore___closed__0 = (const lean_object*)&l_Lake_downloadArtifactCore___closed__0_value;
static const lean_string_object l_Lake_downloadArtifactCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = ": downloaded artifact hash mismatch, got "};
static const lean_object* l_Lake_downloadArtifactCore___closed__1 = (const lean_object*)&l_Lake_downloadArtifactCore___closed__1_value;
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
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ": downloaded artifact "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = ": uploaded artifact "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = ": unidentifiable transfer completed: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "curl produced invalid JSON: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "; received: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "property not found: http_code"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__3_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__3_value)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "url = "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "-o "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "-T "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = ": curl exited with code "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = ": curl produced unexpected output:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " some artifacts"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-Z"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__6 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__6_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-L"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--retry"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "3"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "--config"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Content-Type: application/vnd.reservoir.artifact"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__21 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__21_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_uploadArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no artifacts to upload"};
static const lean_object* l_Lake_CacheService_uploadArtifacts___closed__0 = (const lean_object*)&l_Lake_CacheService_uploadArtifacts___closed__0_value;
static const lean_ctor_object l_Lake_CacheService_uploadArtifacts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_CacheService_uploadArtifacts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_CacheService_uploadArtifacts___closed__1 = (const lean_object*)&l_Lake_CacheService_uploadArtifacts___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_inc_ref(v___y_405_);
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
lean_dec_ref(v___y_439_);
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
return v___x_486_;
}
}
else
{
lean_dec(v___x_477_);
lean_dec_ref(v_contents_472_);
lean_dec(v_i_470_);
lean_dec_ref(v_inputName_468_);
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
lean_dec_ref(v_a_502_);
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
lean_dec_ref(v_contents_540_);
lean_dec(v_i_538_);
lean_dec_ref(v_inputName_536_);
return v___x_555_;
}
}
else
{
lean_dec(v___x_546_);
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
lean_dec_ref(v_a_577_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(lean_object* v_as_617_, size_t v_i_618_, size_t v_stop_619_, lean_object* v_b_620_, lean_object* v___y_621_){
_start:
{
uint8_t v___x_623_; 
v___x_623_ = lean_usize_dec_eq(v_i_618_, v_stop_619_);
if (v___x_623_ == 0)
{
lean_object* v___x_624_; lean_object* v___x_625_; size_t v___x_626_; size_t v___x_627_; 
v___x_624_ = lean_array_uget_borrowed(v_as_617_, v_i_618_);
lean_inc_ref(v___y_621_);
lean_inc(v___x_624_);
v___x_625_ = lean_apply_2(v___y_621_, v___x_624_, lean_box(0));
v___x_626_ = ((size_t)1ULL);
v___x_627_ = lean_usize_add(v_i_618_, v___x_626_);
v_i_618_ = v___x_627_;
v_b_620_ = v___x_625_;
goto _start;
}
else
{
lean_object* v___x_629_; 
v___x_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_629_, 0, v_b_620_);
return v___x_629_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0___boxed(lean_object* v_as_630_, lean_object* v_i_631_, lean_object* v_stop_632_, lean_object* v_b_633_, lean_object* v___y_634_, lean_object* v___y_635_){
_start:
{
size_t v_i_boxed_636_; size_t v_stop_boxed_637_; lean_object* v_res_638_; 
v_i_boxed_636_ = lean_unbox_usize(v_i_631_);
lean_dec(v_i_631_);
v_stop_boxed_637_ = lean_unbox_usize(v_stop_632_);
lean_dec(v_stop_632_);
v_res_638_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_as_630_, v_i_boxed_636_, v_stop_boxed_637_, v_b_633_, v___y_634_);
lean_dec_ref(v___y_634_);
lean_dec_ref(v_as_630_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(lean_object* v___x_639_, lean_object* v_contents_640_, lean_object* v_a_641_, lean_object* v_b_642_){
_start:
{
lean_object* v_startInclusive_643_; lean_object* v_endExclusive_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
v_startInclusive_643_ = lean_ctor_get(v___x_639_, 1);
v_endExclusive_644_ = lean_ctor_get(v___x_639_, 2);
v___x_645_ = lean_nat_sub(v_endExclusive_644_, v_startInclusive_643_);
v___x_646_ = lean_nat_dec_eq(v_a_641_, v___x_645_);
lean_dec(v___x_645_);
if (v___x_646_ == 0)
{
uint32_t v___x_647_; uint32_t v___x_648_; uint8_t v___x_649_; 
lean_dec(v_b_642_);
v___x_647_ = lean_string_utf8_get_fast(v_contents_640_, v_a_641_);
v___x_648_ = 10;
v___x_649_ = lean_uint32_dec_eq(v___x_647_, v___x_648_);
if (v___x_649_ == 0)
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_box(0);
v___x_651_ = lean_string_utf8_next_fast(v_contents_640_, v_a_641_);
lean_dec(v_a_641_);
v_a_641_ = v___x_651_;
v_b_642_ = v___x_650_;
goto _start;
}
else
{
lean_object* v___x_653_; 
v___x_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_653_, 0, v_a_641_);
return v___x_653_;
}
}
else
{
lean_dec(v_a_641_);
return v_b_642_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg___boxed(lean_object* v___x_654_, lean_object* v_contents_655_, lean_object* v_a_656_, lean_object* v_b_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(v___x_654_, v_contents_655_, v_a_656_, v_b_657_);
lean_dec_ref(v_contents_655_);
lean_dec_ref(v___x_654_);
return v_res_658_;
}
}
static lean_object* _init_l_Lake_CacheMap_parse___closed__0(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_659_ = lean_box(0);
v___x_660_ = lean_unsigned_to_nat(16u);
v___x_661_ = lean_mk_array(v___x_660_, v___x_659_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse(lean_object* v_inputName_664_, lean_object* v_contents_665_, uint8_t v_platformIndependent_666_, lean_object* v_a_667_){
_start:
{
lean_object* v___y_673_; uint8_t v___y_674_; lean_object* v___y_675_; lean_object* v___y_685_; uint8_t v___y_686_; lean_object* v___y_687_; lean_object* v___y_688_; lean_object* v___y_698_; lean_object* v_searcher_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v_searcher_734_ = lean_unsigned_to_nat(0u);
v___x_735_ = lean_string_utf8_byte_size(v_contents_665_);
lean_inc_ref(v_contents_665_);
v___x_736_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_736_, 0, v_contents_665_);
lean_ctor_set(v___x_736_, 1, v_searcher_734_);
lean_ctor_set(v___x_736_, 2, v___x_735_);
v___x_737_ = lean_box(0);
v___x_738_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(v___x_736_, v_contents_665_, v_searcher_734_, v___x_737_);
lean_dec_ref(v___x_736_);
if (lean_obj_tag(v___x_738_) == 0)
{
v___y_698_ = v___x_735_;
goto v___jp_697_;
}
else
{
lean_object* v_val_739_; 
v_val_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_val_739_);
lean_dec_ref(v___x_738_);
v___y_698_ = v_val_739_;
goto v___jp_697_;
}
v___jp_669_:
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = lean_box(0);
v___x_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
return v___x_671_;
}
v___jp_672_:
{
if (v___y_674_ == 0)
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_676_ = lean_unsigned_to_nat(2u);
v___x_677_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__0, &l_Lake_CacheMap_parse___closed__0_once, _init_l_Lake_CacheMap_parse___closed__0);
v___x_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_678_, 0, v___y_675_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = lean_string_utf8_next_fast(v_contents_665_, v___y_673_);
lean_dec(v___y_673_);
v___x_680_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(v_a_667_, v_inputName_664_, v_platformIndependent_666_, v___x_676_, v___x_678_, v_contents_665_, v___x_679_);
return v___x_680_;
}
else
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
lean_dec(v___y_673_);
lean_dec_ref(v_contents_665_);
lean_dec_ref(v_inputName_664_);
v___x_681_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__0, &l_Lake_CacheMap_parse___closed__0_once, _init_l_Lake_CacheMap_parse___closed__0);
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v___y_675_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
return v___x_683_;
}
}
v___jp_684_:
{
if (lean_obj_tag(v___y_688_) == 0)
{
lean_dec_ref(v___y_688_);
v___y_673_ = v___y_685_;
v___y_674_ = v___y_686_;
v___y_675_ = v___y_687_;
goto v___jp_672_;
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
lean_dec(v___y_687_);
lean_dec(v___y_685_);
lean_dec_ref(v_contents_665_);
lean_dec_ref(v_inputName_664_);
v_a_689_ = lean_ctor_get(v___y_688_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___y_688_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___y_688_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___y_688_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
v___jp_697_:
{
lean_object* v___x_699_; lean_object* v_line_700_; lean_object* v___x_701_; lean_object* v_str_702_; lean_object* v_startInclusive_703_; lean_object* v_endExclusive_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_699_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_698_);
lean_inc_ref(v_contents_665_);
v_line_700_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_line_700_, 0, v_contents_665_);
lean_ctor_set(v_line_700_, 1, v___x_699_);
lean_ctor_set(v_line_700_, 2, v___y_698_);
v___x_701_ = l_String_Slice_trimAscii(v_line_700_);
v_str_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc_ref(v_str_702_);
v_startInclusive_703_ = lean_ctor_get(v___x_701_, 1);
lean_inc(v_startInclusive_703_);
v_endExclusive_704_ = lean_ctor_get(v___x_701_, 2);
lean_inc(v_endExclusive_704_);
lean_dec_ref(v___x_701_);
v___x_705_ = lean_string_utf8_extract(v_str_702_, v_startInclusive_703_, v_endExclusive_704_);
lean_dec(v_endExclusive_704_);
lean_dec(v_startInclusive_703_);
lean_dec_ref(v_str_702_);
v___x_706_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
lean_inc_ref(v_inputName_664_);
v___x_707_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_inputName_664_, v___x_705_, v___x_706_);
v___x_708_ = lean_string_utf8_byte_size(v_contents_665_);
v___x_709_ = lean_nat_dec_eq(v___y_698_, v___x_708_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_object* v_a_710_; lean_object* v___x_711_; uint8_t v___x_712_; 
v_a_710_ = lean_ctor_get(v___x_707_, 1);
lean_inc(v_a_710_);
lean_dec_ref(v___x_707_);
v___x_711_ = lean_array_get_size(v_a_710_);
v___x_712_ = lean_nat_dec_lt(v___x_699_, v___x_711_);
if (v___x_712_ == 0)
{
lean_dec(v_a_710_);
v___y_673_ = v___y_698_;
v___y_674_ = v___x_709_;
v___y_675_ = v___x_699_;
goto v___jp_672_;
}
else
{
lean_object* v___x_713_; uint8_t v___x_714_; 
v___x_713_ = lean_box(0);
v___x_714_ = lean_nat_dec_le(v___x_711_, v___x_711_);
if (v___x_714_ == 0)
{
if (v___x_712_ == 0)
{
lean_dec(v_a_710_);
v___y_673_ = v___y_698_;
v___y_674_ = v___x_709_;
v___y_675_ = v___x_699_;
goto v___jp_672_;
}
else
{
size_t v___x_715_; size_t v___x_716_; lean_object* v___x_717_; 
v___x_715_ = ((size_t)0ULL);
v___x_716_ = lean_usize_of_nat(v___x_711_);
v___x_717_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_710_, v___x_715_, v___x_716_, v___x_713_, v_a_667_);
lean_dec(v_a_710_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_dec_ref(v___x_717_);
v___y_673_ = v___y_698_;
v___y_674_ = v___x_709_;
v___y_675_ = v___x_699_;
goto v___jp_672_;
}
else
{
v___y_685_ = v___y_698_;
v___y_686_ = v___x_709_;
v___y_687_ = v___x_699_;
v___y_688_ = v___x_717_;
goto v___jp_684_;
}
}
}
else
{
size_t v___x_718_; size_t v___x_719_; lean_object* v___x_720_; 
v___x_718_ = ((size_t)0ULL);
v___x_719_ = lean_usize_of_nat(v___x_711_);
v___x_720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_710_, v___x_718_, v___x_719_, v___x_713_, v_a_667_);
lean_dec(v_a_710_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_dec_ref(v___x_720_);
v___y_673_ = v___y_698_;
v___y_674_ = v___x_709_;
v___y_675_ = v___x_699_;
goto v___jp_672_;
}
else
{
v___y_685_ = v___y_698_;
v___y_686_ = v___x_709_;
v___y_687_ = v___x_699_;
v___y_688_ = v___x_720_;
goto v___jp_684_;
}
}
}
}
else
{
lean_object* v_a_721_; lean_object* v___x_722_; uint8_t v___x_723_; 
v_a_721_ = lean_ctor_get(v___x_707_, 1);
lean_inc(v_a_721_);
lean_dec_ref(v___x_707_);
v___x_722_ = lean_array_get_size(v_a_721_);
v___x_723_ = lean_nat_dec_lt(v___x_699_, v___x_722_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; lean_object* v___x_725_; 
lean_dec(v_a_721_);
lean_dec(v___y_698_);
lean_dec_ref(v_contents_665_);
lean_dec_ref(v_inputName_664_);
v___x_724_ = lean_box(0);
v___x_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
return v___x_725_;
}
else
{
lean_object* v___x_726_; uint8_t v___x_727_; 
v___x_726_ = lean_box(0);
v___x_727_ = lean_nat_dec_le(v___x_722_, v___x_722_);
if (v___x_727_ == 0)
{
if (v___x_723_ == 0)
{
lean_dec(v_a_721_);
lean_dec(v___y_698_);
lean_dec_ref(v_contents_665_);
lean_dec_ref(v_inputName_664_);
goto v___jp_669_;
}
else
{
size_t v___x_728_; size_t v___x_729_; lean_object* v___x_730_; 
v___x_728_ = ((size_t)0ULL);
v___x_729_ = lean_usize_of_nat(v___x_722_);
v___x_730_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_721_, v___x_728_, v___x_729_, v___x_726_, v_a_667_);
lean_dec(v_a_721_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_dec_ref(v___x_730_);
lean_dec(v___y_698_);
lean_dec_ref(v_contents_665_);
lean_dec_ref(v_inputName_664_);
goto v___jp_669_;
}
else
{
v___y_685_ = v___y_698_;
v___y_686_ = v___x_709_;
v___y_687_ = v___x_699_;
v___y_688_ = v___x_730_;
goto v___jp_684_;
}
}
}
else
{
size_t v___x_731_; size_t v___x_732_; lean_object* v___x_733_; 
v___x_731_ = ((size_t)0ULL);
v___x_732_ = lean_usize_of_nat(v___x_722_);
v___x_733_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_721_, v___x_731_, v___x_732_, v___x_726_, v_a_667_);
lean_dec(v_a_721_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_dec_ref(v___x_733_);
lean_dec(v___y_698_);
lean_dec_ref(v_contents_665_);
lean_dec_ref(v_inputName_664_);
goto v___jp_669_;
}
else
{
v___y_685_ = v___y_698_;
v___y_686_ = v___x_709_;
v___y_687_ = v___x_699_;
v___y_688_ = v___x_733_;
goto v___jp_684_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___boxed(lean_object* v_inputName_740_, lean_object* v_contents_741_, lean_object* v_platformIndependent_742_, lean_object* v_a_743_, lean_object* v_a_744_){
_start:
{
uint8_t v_platformIndependent_boxed_745_; lean_object* v_res_746_; 
v_platformIndependent_boxed_745_ = lean_unbox(v_platformIndependent_742_);
v_res_746_ = l_Lake_CacheMap_parse(v_inputName_740_, v_contents_741_, v_platformIndependent_boxed_745_, v_a_743_);
lean_dec_ref(v_a_743_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1(lean_object* v___x_747_, lean_object* v_contents_748_, lean_object* v_inst_749_, lean_object* v_R_750_, lean_object* v_a_751_, lean_object* v_b_752_, lean_object* v_c_753_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(v___x_747_, v_contents_748_, v_a_751_, v_b_752_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___boxed(lean_object* v___x_755_, lean_object* v_contents_756_, lean_object* v_inst_757_, lean_object* v_R_758_, lean_object* v_a_759_, lean_object* v_b_760_, lean_object* v_c_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1(v___x_755_, v_contents_756_, v_inst_757_, v_R_758_, v_a_759_, v_b_760_, v_c_761_);
lean_dec_ref(v_contents_756_);
lean_dec_ref(v___x_755_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(lean_object* v_inputName_763_, lean_object* v_lineNo_764_, lean_object* v_cache_765_, lean_object* v_line_766_, uint8_t v_platformIndependent_767_, lean_object* v___y_768_){
_start:
{
lean_object* v___x_770_; 
lean_inc_ref(v_cache_765_);
v___x_770_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(v_cache_765_, v_line_766_, v_platformIndependent_767_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_771_);
lean_dec_ref(v___x_770_);
v___x_772_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0));
v___x_773_ = lean_string_append(v_inputName_763_, v___x_772_);
v___x_774_ = l_Nat_reprFast(v_lineNo_764_);
v___x_775_ = lean_string_append(v___x_773_, v___x_774_);
lean_dec_ref(v___x_774_);
v___x_776_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_777_ = lean_string_append(v___x_775_, v___x_776_);
v___x_778_ = lean_string_append(v___x_777_, v_a_771_);
lean_dec(v_a_771_);
v___x_779_ = 2;
v___x_780_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_780_, 0, v___x_778_);
lean_ctor_set_uint8(v___x_780_, sizeof(void*)*1, v___x_779_);
v___x_781_ = lean_array_push(v___y_768_, v___x_780_);
v___x_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_782_, 0, v_cache_765_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
return v___x_782_;
}
else
{
lean_object* v_a_783_; lean_object* v___x_784_; 
lean_dec_ref(v_cache_765_);
lean_dec(v_lineNo_764_);
lean_dec_ref(v_inputName_763_);
v_a_783_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_783_);
lean_dec_ref(v___x_770_);
v___x_784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_784_, 0, v_a_783_);
lean_ctor_set(v___x_784_, 1, v___y_768_);
return v___x_784_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0___boxed(lean_object* v_inputName_785_, lean_object* v_lineNo_786_, lean_object* v_cache_787_, lean_object* v_line_788_, lean_object* v_platformIndependent_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
uint8_t v_platformIndependent_boxed_792_; lean_object* v_res_793_; 
v_platformIndependent_boxed_792_ = lean_unbox(v_platformIndependent_789_);
v_res_793_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(v_inputName_785_, v_lineNo_786_, v_cache_787_, v_line_788_, v_platformIndependent_boxed_792_, v___y_790_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(lean_object* v_h_794_, lean_object* v_fileName_795_, uint8_t v_platformIndependent_796_, lean_object* v_i_797_, lean_object* v_cache_798_, lean_object* v_a_799_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = lean_io_prim_handle_get_line(v_h_794_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; lean_object* v___x_803_; lean_object* v___x_804_; uint8_t v___x_805_; 
v_a_802_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_802_);
lean_dec_ref(v___x_801_);
v___x_803_ = lean_string_utf8_byte_size(v_a_802_);
v___x_804_ = lean_unsigned_to_nat(0u);
v___x_805_ = lean_nat_dec_eq(v___x_803_, v___x_804_);
if (v___x_805_ == 0)
{
lean_object* v___x_806_; 
lean_inc(v_i_797_);
lean_inc_ref(v_fileName_795_);
v___x_806_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(v_fileName_795_, v_i_797_, v_cache_798_, v_a_802_, v_platformIndependent_796_, v_a_799_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v_a_807_; lean_object* v_a_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_a_807_ = lean_ctor_get(v___x_806_, 0);
lean_inc(v_a_807_);
v_a_808_ = lean_ctor_get(v___x_806_, 1);
lean_inc(v_a_808_);
lean_dec_ref(v___x_806_);
v___x_809_ = lean_unsigned_to_nat(1u);
v___x_810_ = lean_nat_add(v_i_797_, v___x_809_);
lean_dec(v_i_797_);
v_i_797_ = v___x_810_;
v_cache_798_ = v_a_807_;
v_a_799_ = v_a_808_;
goto _start;
}
else
{
lean_dec(v_i_797_);
lean_dec_ref(v_fileName_795_);
return v___x_806_;
}
}
else
{
lean_object* v___x_812_; 
lean_dec(v_a_802_);
lean_dec(v_i_797_);
lean_dec_ref(v_fileName_795_);
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v_cache_798_);
lean_ctor_set(v___x_812_, 1, v_a_799_);
return v___x_812_;
}
}
else
{
lean_object* v_a_813_; lean_object* v___x_814_; uint8_t v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
lean_dec_ref(v_cache_798_);
lean_dec(v_i_797_);
lean_dec_ref(v_fileName_795_);
v_a_813_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_813_);
lean_dec_ref(v___x_801_);
v___x_814_ = lean_io_error_to_string(v_a_813_);
v___x_815_ = 3;
v___x_816_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_816_, 0, v___x_814_);
lean_ctor_set_uint8(v___x_816_, sizeof(void*)*1, v___x_815_);
v___x_817_ = lean_array_get_size(v_a_799_);
v___x_818_ = lean_array_push(v_a_799_, v___x_816_);
v___x_819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_817_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
return v___x_819_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop___boxed(lean_object* v_h_820_, lean_object* v_fileName_821_, lean_object* v_platformIndependent_822_, lean_object* v_i_823_, lean_object* v_cache_824_, lean_object* v_a_825_, lean_object* v_a_826_){
_start:
{
uint8_t v_platformIndependent_boxed_827_; lean_object* v_res_828_; 
v_platformIndependent_boxed_827_ = lean_unbox(v_platformIndependent_822_);
v_res_828_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_h_820_, v_fileName_821_, v_platformIndependent_boxed_827_, v_i_823_, v_cache_824_, v_a_825_);
lean_dec(v_h_820_);
return v_res_828_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__0, &l_Lake_CacheMap_parse___closed__0_once, _init_l_Lake_CacheMap_parse___closed__0);
v___x_830_ = lean_unsigned_to_nat(0u);
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
lean_ctor_set(v___x_831_, 1, v___x_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(lean_object* v_h_832_, lean_object* v_fileName_833_, uint8_t v_platformIndependent_834_, lean_object* v_a_835_){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = lean_io_prim_handle_get_line(v_h_832_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; lean_object* v___x_839_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_838_);
lean_dec_ref(v___x_837_);
lean_inc_ref(v_fileName_833_);
v___x_839_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_fileName_833_, v_a_838_, v_a_835_);
if (lean_obj_tag(v___x_839_) == 0)
{
lean_object* v_a_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v_a_840_ = lean_ctor_get(v___x_839_, 1);
lean_inc(v_a_840_);
lean_dec_ref(v___x_839_);
v___x_841_ = lean_unsigned_to_nat(2u);
v___x_842_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0, &l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0);
v___x_843_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_h_832_, v_fileName_833_, v_platformIndependent_834_, v___x_841_, v___x_842_, v_a_840_);
return v___x_843_;
}
else
{
lean_object* v_a_844_; lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
lean_dec_ref(v_fileName_833_);
v_a_844_ = lean_ctor_get(v___x_839_, 0);
v_a_845_ = lean_ctor_get(v___x_839_, 1);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_839_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_inc(v_a_844_);
lean_dec(v___x_839_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_844_);
lean_ctor_set(v_reuseFailAlloc_851_, 1, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_854_; uint8_t v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
lean_dec_ref(v_fileName_833_);
v_a_853_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_853_);
lean_dec_ref(v___x_837_);
v___x_854_ = lean_io_error_to_string(v_a_853_);
v___x_855_ = 3;
v___x_856_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set_uint8(v___x_856_, sizeof(void*)*1, v___x_855_);
v___x_857_ = lean_array_get_size(v_a_835_);
v___x_858_ = lean_array_push(v_a_835_, v___x_856_);
v___x_859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_859_, 0, v___x_857_);
lean_ctor_set(v___x_859_, 1, v___x_858_);
return v___x_859_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___boxed(lean_object* v_h_860_, lean_object* v_fileName_861_, lean_object* v_platformIndependent_862_, lean_object* v_a_863_, lean_object* v_a_864_){
_start:
{
uint8_t v_platformIndependent_boxed_865_; lean_object* v_res_866_; 
v_platformIndependent_boxed_865_ = lean_unbox(v_platformIndependent_862_);
v_res_866_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(v_h_860_, v_fileName_861_, v_platformIndependent_boxed_865_, v_a_863_);
lean_dec(v_h_860_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load(lean_object* v_file_868_, uint8_t v_platformIndependent_869_, lean_object* v_a_870_){
_start:
{
uint8_t v___x_872_; lean_object* v___x_873_; 
v___x_872_ = 0;
v___x_873_ = lean_io_prim_handle_mk(v_file_868_, v___x_872_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; uint8_t v___x_875_; lean_object* v___x_876_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_a_874_);
lean_dec_ref(v___x_873_);
v___x_875_ = 0;
v___x_876_ = lean_io_prim_handle_lock(v_a_874_, v___x_875_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v___x_877_; 
lean_dec_ref(v___x_876_);
v___x_877_ = lean_io_prim_handle_get_line(v_a_874_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_879_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref(v___x_877_);
lean_inc_ref(v_file_868_);
v___x_879_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_868_, v_a_878_, v_a_870_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v_a_880_ = lean_ctor_get(v___x_879_, 1);
lean_inc(v_a_880_);
lean_dec_ref(v___x_879_);
v___x_881_ = lean_unsigned_to_nat(2u);
v___x_882_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0, &l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0);
v___x_883_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_874_, v_file_868_, v_platformIndependent_869_, v___x_881_, v___x_882_, v_a_880_);
lean_dec(v_a_874_);
return v___x_883_;
}
else
{
lean_object* v_a_884_; lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_892_; 
lean_dec(v_a_874_);
lean_dec_ref(v_file_868_);
v_a_884_ = lean_ctor_get(v___x_879_, 0);
v_a_885_ = lean_ctor_get(v___x_879_, 1);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_892_ == 0)
{
v___x_887_ = v___x_879_;
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_inc(v_a_884_);
lean_dec(v___x_879_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_890_; 
if (v_isShared_888_ == 0)
{
v___x_890_ = v___x_887_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_a_884_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v_a_885_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
else
{
lean_object* v_a_893_; lean_object* v___x_894_; uint8_t v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
lean_dec(v_a_874_);
lean_dec_ref(v_file_868_);
v_a_893_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_893_);
lean_dec_ref(v___x_877_);
v___x_894_ = lean_io_error_to_string(v_a_893_);
v___x_895_ = 3;
v___x_896_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_896_, 0, v___x_894_);
lean_ctor_set_uint8(v___x_896_, sizeof(void*)*1, v___x_895_);
v___x_897_ = lean_array_get_size(v_a_870_);
v___x_898_ = lean_array_push(v_a_870_, v___x_896_);
v___x_899_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_897_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
return v___x_899_;
}
}
else
{
lean_object* v_a_900_; lean_object* v___x_901_; uint8_t v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
lean_dec(v_a_874_);
lean_dec_ref(v_file_868_);
v_a_900_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_900_);
lean_dec_ref(v___x_876_);
v___x_901_ = lean_io_error_to_string(v_a_900_);
v___x_902_ = 3;
v___x_903_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_903_, 0, v___x_901_);
lean_ctor_set_uint8(v___x_903_, sizeof(void*)*1, v___x_902_);
v___x_904_ = lean_array_get_size(v_a_870_);
v___x_905_ = lean_array_push(v_a_870_, v___x_903_);
v___x_906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_906_, 0, v___x_904_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
return v___x_906_;
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; uint8_t v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_a_907_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_a_907_);
lean_dec_ref(v___x_873_);
v___x_908_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_909_ = lean_string_append(v_file_868_, v___x_908_);
v___x_910_ = lean_io_error_to_string(v_a_907_);
v___x_911_ = lean_string_append(v___x_909_, v___x_910_);
lean_dec_ref(v___x_910_);
v___x_912_ = 3;
v___x_913_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_913_, 0, v___x_911_);
lean_ctor_set_uint8(v___x_913_, sizeof(void*)*1, v___x_912_);
v___x_914_ = lean_array_get_size(v_a_870_);
v___x_915_ = lean_array_push(v_a_870_, v___x_913_);
v___x_916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
return v___x_916_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load___boxed(lean_object* v_file_917_, lean_object* v_platformIndependent_918_, lean_object* v_a_919_, lean_object* v_a_920_){
_start:
{
uint8_t v_platformIndependent_boxed_921_; lean_object* v_res_922_; 
v_platformIndependent_boxed_921_ = lean_unbox(v_platformIndependent_918_);
v_res_922_ = l_Lake_CacheMap_load(v_file_917_, v_platformIndependent_boxed_921_, v_a_919_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f(lean_object* v_file_923_, uint8_t v_platformIndependent_924_, lean_object* v_a_925_){
_start:
{
lean_object* v_a_928_; lean_object* v_a_929_; uint8_t v___x_931_; lean_object* v___x_932_; 
v___x_931_ = 0;
v___x_932_ = lean_io_prim_handle_mk(v_file_923_, v___x_931_);
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v_a_933_; uint8_t v___x_934_; lean_object* v___x_935_; 
v_a_933_ = lean_ctor_get(v___x_932_, 0);
lean_inc(v_a_933_);
lean_dec_ref(v___x_932_);
v___x_934_ = 0;
v___x_935_ = lean_io_prim_handle_lock(v_a_933_, v___x_934_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v___x_936_; 
lean_dec_ref(v___x_935_);
v___x_936_ = lean_io_prim_handle_get_line(v_a_933_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_962_; 
v_a_937_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_962_ == 0)
{
v___x_939_ = v___x_936_;
v_isShared_940_ = v_isSharedCheck_962_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_936_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_962_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_941_; 
lean_inc_ref(v_file_923_);
v___x_941_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_923_, v_a_937_, v_a_925_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v_a_942_ = lean_ctor_get(v___x_941_, 1);
lean_inc(v_a_942_);
lean_dec_ref(v___x_941_);
v___x_943_ = lean_unsigned_to_nat(2u);
v___x_944_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0, &l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0);
v___x_945_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_933_, v_file_923_, v_platformIndependent_924_, v___x_943_, v___x_944_, v_a_942_);
lean_dec(v_a_933_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_957_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
v_a_947_ = lean_ctor_get(v___x_945_, 1);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_957_ == 0)
{
v___x_949_ = v___x_945_;
v_isShared_950_ = v_isSharedCheck_957_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_inc(v_a_946_);
lean_dec(v___x_945_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_957_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_940_ == 0)
{
lean_ctor_set_tag(v___x_939_, 1);
lean_ctor_set(v___x_939_, 0, v_a_946_);
v___x_952_ = v___x_939_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_946_);
v___x_952_ = v_reuseFailAlloc_956_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
lean_object* v___x_954_; 
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 0, v___x_952_);
v___x_954_ = v___x_949_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_952_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v_a_947_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
else
{
lean_object* v_a_958_; lean_object* v_a_959_; 
lean_del_object(v___x_939_);
v_a_958_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_958_);
v_a_959_ = lean_ctor_get(v___x_945_, 1);
lean_inc(v_a_959_);
lean_dec_ref(v___x_945_);
v_a_928_ = v_a_958_;
v_a_929_ = v_a_959_;
goto v___jp_927_;
}
}
else
{
lean_object* v_a_960_; lean_object* v_a_961_; 
lean_del_object(v___x_939_);
lean_dec(v_a_933_);
lean_dec_ref(v_file_923_);
v_a_960_ = lean_ctor_get(v___x_941_, 0);
lean_inc(v_a_960_);
v_a_961_ = lean_ctor_get(v___x_941_, 1);
lean_inc(v_a_961_);
lean_dec_ref(v___x_941_);
v_a_928_ = v_a_960_;
v_a_929_ = v_a_961_;
goto v___jp_927_;
}
}
}
else
{
lean_object* v_a_963_; lean_object* v___x_964_; uint8_t v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec(v_a_933_);
lean_dec_ref(v_file_923_);
v_a_963_ = lean_ctor_get(v___x_936_, 0);
lean_inc(v_a_963_);
lean_dec_ref(v___x_936_);
v___x_964_ = lean_io_error_to_string(v_a_963_);
v___x_965_ = 3;
v___x_966_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_966_, 0, v___x_964_);
lean_ctor_set_uint8(v___x_966_, sizeof(void*)*1, v___x_965_);
v___x_967_ = lean_array_get_size(v_a_925_);
v___x_968_ = lean_array_push(v_a_925_, v___x_966_);
v_a_928_ = v___x_967_;
v_a_929_ = v___x_968_;
goto v___jp_927_;
}
}
else
{
lean_object* v_a_969_; lean_object* v___x_970_; uint8_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
lean_dec(v_a_933_);
lean_dec_ref(v_file_923_);
v_a_969_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_969_);
lean_dec_ref(v___x_935_);
v___x_970_ = lean_io_error_to_string(v_a_969_);
v___x_971_ = 3;
v___x_972_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set_uint8(v___x_972_, sizeof(void*)*1, v___x_971_);
v___x_973_ = lean_array_get_size(v_a_925_);
v___x_974_ = lean_array_push(v_a_925_, v___x_972_);
v___x_975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_973_);
lean_ctor_set(v___x_975_, 1, v___x_974_);
return v___x_975_;
}
}
else
{
lean_object* v_a_976_; 
v_a_976_ = lean_ctor_get(v___x_932_, 0);
lean_inc(v_a_976_);
lean_dec_ref(v___x_932_);
if (lean_obj_tag(v_a_976_) == 11)
{
lean_object* v___x_977_; lean_object* v___x_978_; 
lean_dec_ref(v_a_976_);
lean_dec_ref(v_file_923_);
v___x_977_ = lean_box(0);
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
lean_ctor_set(v___x_978_, 1, v_a_925_);
return v___x_978_;
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_979_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_980_ = lean_string_append(v_file_923_, v___x_979_);
v___x_981_ = lean_io_error_to_string(v_a_976_);
v___x_982_ = lean_string_append(v___x_980_, v___x_981_);
lean_dec_ref(v___x_981_);
v___x_983_ = 3;
v___x_984_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_984_, 0, v___x_982_);
lean_ctor_set_uint8(v___x_984_, sizeof(void*)*1, v___x_983_);
v___x_985_ = lean_array_get_size(v_a_925_);
v___x_986_ = lean_array_push(v_a_925_, v___x_984_);
v___x_987_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_985_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
return v___x_987_;
}
}
v___jp_927_:
{
lean_object* v___x_930_; 
v___x_930_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_930_, 0, v_a_928_);
lean_ctor_set(v___x_930_, 1, v_a_929_);
return v___x_930_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f___boxed(lean_object* v_file_988_, lean_object* v_platformIndependent_989_, lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
uint8_t v_platformIndependent_boxed_992_; lean_object* v_res_993_; 
v_platformIndependent_boxed_992_ = lean_unbox(v_platformIndependent_989_);
v_res_993_ = l_Lake_CacheMap_load_x3f(v_file_988_, v_platformIndependent_boxed_992_, v_a_990_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(lean_object* v_h_994_, lean_object* v_x_995_, lean_object* v_x_996_, lean_object* v___y_997_){
_start:
{
if (lean_obj_tag(v_x_996_) == 0)
{
lean_object* v___x_999_; 
v___x_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_999_, 0, v_x_995_);
lean_ctor_set(v___x_999_, 1, v___y_997_);
return v___x_999_;
}
else
{
lean_object* v_value_1000_; lean_object* v_key_1001_; lean_object* v_tail_1002_; lean_object* v_out_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1028_; 
v_value_1000_ = lean_ctor_get(v_x_996_, 1);
lean_inc(v_value_1000_);
v_key_1001_ = lean_ctor_get(v_x_996_, 0);
lean_inc(v_key_1001_);
v_tail_1002_ = lean_ctor_get(v_x_996_, 2);
lean_inc(v_tail_1002_);
lean_dec_ref(v_x_996_);
v_out_1003_ = lean_ctor_get(v_value_1000_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v_value_1000_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1005_ = v_value_1000_;
v_isShared_1006_ = v_isSharedCheck_1028_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_out_1003_);
lean_dec(v_value_1000_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1028_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
uint64_t v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1007_ = lean_unbox_uint64(v_key_1001_);
lean_dec(v_key_1001_);
v___x_1008_ = l_Lake_Hash_hex(v___x_1007_);
v___x_1009_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
v___x_1010_ = lean_unsigned_to_nat(2u);
v___x_1011_ = lean_mk_empty_array_with_capacity(v___x_1010_);
v___x_1012_ = lean_array_push(v___x_1011_, v___x_1009_);
v___x_1013_ = lean_array_push(v___x_1012_, v_out_1003_);
v___x_1014_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
v___x_1015_ = l_Lean_Json_compress(v___x_1014_);
v___x_1016_ = l_IO_FS_Handle_putStrLn(v_h_994_, v___x_1015_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v_a_1017_; 
lean_del_object(v___x_1005_);
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
lean_inc(v_a_1017_);
lean_dec_ref(v___x_1016_);
v_x_995_ = v_a_1017_;
v_x_996_ = v_tail_1002_;
goto _start;
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1020_; uint8_t v___x_1021_; lean_object* v___x_1023_; 
lean_dec(v_tail_1002_);
v_a_1019_ = lean_ctor_get(v___x_1016_, 0);
lean_inc(v_a_1019_);
lean_dec_ref(v___x_1016_);
v___x_1020_ = lean_io_error_to_string(v_a_1019_);
v___x_1021_ = 3;
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1020_);
v___x_1023_ = v___x_1005_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_1020_);
v___x_1023_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
lean_ctor_set_uint8(v___x_1023_, sizeof(void*)*1, v___x_1021_);
v___x_1024_ = lean_array_get_size(v___y_997_);
v___x_1025_ = lean_array_push(v___y_997_, v___x_1023_);
v___x_1026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
return v___x_1026_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0___boxed(lean_object* v_h_1029_, lean_object* v_x_1030_, lean_object* v_x_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(v_h_1029_, v_x_1030_, v_x_1031_, v___y_1032_);
lean_dec(v_h_1029_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(lean_object* v_h_1035_, lean_object* v_as_1036_, size_t v_i_1037_, size_t v_stop_1038_, lean_object* v_b_1039_, lean_object* v___y_1040_){
_start:
{
uint8_t v___x_1042_; 
v___x_1042_ = lean_usize_dec_eq(v_i_1037_, v_stop_1038_);
if (v___x_1042_ == 0)
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1043_ = lean_array_uget_borrowed(v_as_1036_, v_i_1037_);
v___x_1044_ = lean_box(0);
lean_inc(v___x_1043_);
v___x_1045_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(v_h_1035_, v___x_1044_, v___x_1043_, v___y_1040_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; lean_object* v_a_1047_; size_t v___x_1048_; size_t v___x_1049_; 
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
lean_inc(v_a_1046_);
v_a_1047_ = lean_ctor_get(v___x_1045_, 1);
lean_inc(v_a_1047_);
lean_dec_ref(v___x_1045_);
v___x_1048_ = ((size_t)1ULL);
v___x_1049_ = lean_usize_add(v_i_1037_, v___x_1048_);
v_i_1037_ = v___x_1049_;
v_b_1039_ = v_a_1046_;
v___y_1040_ = v_a_1047_;
goto _start;
}
else
{
return v___x_1045_;
}
}
else
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v_b_1039_);
lean_ctor_set(v___x_1051_, 1, v___y_1040_);
return v___x_1051_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1___boxed(lean_object* v_h_1052_, lean_object* v_as_1053_, lean_object* v_i_1054_, lean_object* v_stop_1055_, lean_object* v_b_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
size_t v_i_boxed_1059_; size_t v_stop_boxed_1060_; lean_object* v_res_1061_; 
v_i_boxed_1059_ = lean_unbox_usize(v_i_1054_);
lean_dec(v_i_1054_);
v_stop_boxed_1060_ = lean_unbox_usize(v_stop_1055_);
lean_dec(v_stop_1055_);
v_res_1061_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(v_h_1052_, v_as_1053_, v_i_boxed_1059_, v_stop_boxed_1060_, v_b_1056_, v___y_1057_);
lean_dec_ref(v_as_1053_);
lean_dec(v_h_1052_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(lean_object* v_h_1062_, lean_object* v_x_1063_, lean_object* v_x_1064_, lean_object* v___y_1065_){
_start:
{
if (lean_obj_tag(v_x_1064_) == 0)
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1067_, 0, v_x_1063_);
lean_ctor_set(v___x_1067_, 1, v___y_1065_);
return v___x_1067_;
}
else
{
lean_object* v_value_1068_; uint8_t v_platformIndependent_1069_; 
v_value_1068_ = lean_ctor_get(v_x_1064_, 1);
lean_inc(v_value_1068_);
v_platformIndependent_1069_ = lean_ctor_get_uint8(v_value_1068_, sizeof(void*)*1);
if (v_platformIndependent_1069_ == 0)
{
lean_object* v_tail_1070_; lean_object* v___x_1071_; 
lean_dec(v_value_1068_);
v_tail_1070_ = lean_ctor_get(v_x_1064_, 2);
lean_inc(v_tail_1070_);
lean_dec_ref(v_x_1064_);
v___x_1071_ = lean_box(0);
v_x_1063_ = v___x_1071_;
v_x_1064_ = v_tail_1070_;
goto _start;
}
else
{
lean_object* v_key_1073_; lean_object* v_tail_1074_; lean_object* v_out_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1100_; 
v_key_1073_ = lean_ctor_get(v_x_1064_, 0);
lean_inc(v_key_1073_);
v_tail_1074_ = lean_ctor_get(v_x_1064_, 2);
lean_inc(v_tail_1074_);
lean_dec_ref(v_x_1064_);
v_out_1075_ = lean_ctor_get(v_value_1068_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_value_1068_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1077_ = v_value_1068_;
v_isShared_1078_ = v_isSharedCheck_1100_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_out_1075_);
lean_dec(v_value_1068_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1100_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
uint64_t v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1079_ = lean_unbox_uint64(v_key_1073_);
lean_dec(v_key_1073_);
v___x_1080_ = l_Lake_Hash_hex(v___x_1079_);
v___x_1081_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
v___x_1082_ = lean_unsigned_to_nat(2u);
v___x_1083_ = lean_mk_empty_array_with_capacity(v___x_1082_);
v___x_1084_ = lean_array_push(v___x_1083_, v___x_1081_);
v___x_1085_ = lean_array_push(v___x_1084_, v_out_1075_);
v___x_1086_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
v___x_1087_ = l_Lean_Json_compress(v___x_1086_);
v___x_1088_ = l_IO_FS_Handle_putStrLn(v_h_1062_, v___x_1087_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; 
lean_del_object(v___x_1077_);
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1089_);
lean_dec_ref(v___x_1088_);
v_x_1063_ = v_a_1089_;
v_x_1064_ = v_tail_1074_;
goto _start;
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1092_; uint8_t v___x_1093_; lean_object* v___x_1095_; 
lean_dec(v_tail_1074_);
v_a_1091_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1091_);
lean_dec_ref(v___x_1088_);
v___x_1092_ = lean_io_error_to_string(v_a_1091_);
v___x_1093_ = 3;
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v___x_1092_);
v___x_1095_ = v___x_1077_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1092_);
v___x_1095_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
lean_ctor_set_uint8(v___x_1095_, sizeof(void*)*1, v___x_1093_);
v___x_1096_ = lean_array_get_size(v___y_1065_);
v___x_1097_ = lean_array_push(v___y_1065_, v___x_1095_);
v___x_1098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1096_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
return v___x_1098_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2___boxed(lean_object* v_h_1101_, lean_object* v_x_1102_, lean_object* v_x_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(v_h_1101_, v_x_1102_, v_x_1103_, v___y_1104_);
lean_dec(v_h_1101_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(lean_object* v_h_1107_, lean_object* v_as_1108_, size_t v_i_1109_, size_t v_stop_1110_, lean_object* v_b_1111_, lean_object* v___y_1112_){
_start:
{
uint8_t v___x_1114_; 
v___x_1114_ = lean_usize_dec_eq(v_i_1109_, v_stop_1110_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1115_ = lean_array_uget_borrowed(v_as_1108_, v_i_1109_);
v___x_1116_ = lean_box(0);
lean_inc(v___x_1115_);
v___x_1117_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(v_h_1107_, v___x_1116_, v___x_1115_, v___y_1112_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v_a_1118_; lean_object* v_a_1119_; size_t v___x_1120_; size_t v___x_1121_; 
v_a_1118_ = lean_ctor_get(v___x_1117_, 0);
lean_inc(v_a_1118_);
v_a_1119_ = lean_ctor_get(v___x_1117_, 1);
lean_inc(v_a_1119_);
lean_dec_ref(v___x_1117_);
v___x_1120_ = ((size_t)1ULL);
v___x_1121_ = lean_usize_add(v_i_1109_, v___x_1120_);
v_i_1109_ = v___x_1121_;
v_b_1111_ = v_a_1118_;
v___y_1112_ = v_a_1119_;
goto _start;
}
else
{
return v___x_1117_;
}
}
else
{
lean_object* v___x_1123_; 
v___x_1123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1123_, 0, v_b_1111_);
lean_ctor_set(v___x_1123_, 1, v___y_1112_);
return v___x_1123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3___boxed(lean_object* v_h_1124_, lean_object* v_as_1125_, lean_object* v_i_1126_, lean_object* v_stop_1127_, lean_object* v_b_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
size_t v_i_boxed_1131_; size_t v_stop_boxed_1132_; lean_object* v_res_1133_; 
v_i_boxed_1131_ = lean_unbox_usize(v_i_1126_);
lean_dec(v_i_1126_);
v_stop_boxed_1132_ = lean_unbox_usize(v_stop_1127_);
lean_dec(v_stop_1127_);
v_res_1133_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(v_h_1124_, v_as_1125_, v_i_boxed_1131_, v_stop_boxed_1132_, v_b_1128_, v___y_1129_);
lean_dec_ref(v_as_1125_);
lean_dec(v_h_1124_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(lean_object* v_h_1134_, lean_object* v_cache_1135_, uint8_t v_platformIndependent_1136_, lean_object* v_a_1137_){
_start:
{
if (v_platformIndependent_1136_ == 0)
{
lean_object* v_buckets_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1160_; 
v_buckets_1139_ = lean_ctor_get(v_cache_1135_, 1);
v_isSharedCheck_1160_ = !lean_is_exclusive(v_cache_1135_);
if (v_isSharedCheck_1160_ == 0)
{
lean_object* v_unused_1161_; 
v_unused_1161_ = lean_ctor_get(v_cache_1135_, 0);
lean_dec(v_unused_1161_);
v___x_1141_ = v_cache_1135_;
v_isShared_1142_ = v_isSharedCheck_1160_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_buckets_1139_);
lean_dec(v_cache_1135_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1160_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; uint8_t v___x_1146_; 
v___x_1143_ = lean_unsigned_to_nat(0u);
v___x_1144_ = lean_array_get_size(v_buckets_1139_);
v___x_1145_ = lean_box(0);
v___x_1146_ = lean_nat_dec_lt(v___x_1143_, v___x_1144_);
if (v___x_1146_ == 0)
{
lean_object* v___x_1148_; 
lean_dec_ref(v_buckets_1139_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 1, v_a_1137_);
lean_ctor_set(v___x_1141_, 0, v___x_1145_);
v___x_1148_ = v___x_1141_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1149_, 1, v_a_1137_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
else
{
uint8_t v___x_1150_; 
v___x_1150_ = lean_nat_dec_le(v___x_1144_, v___x_1144_);
if (v___x_1150_ == 0)
{
if (v___x_1146_ == 0)
{
lean_object* v___x_1152_; 
lean_dec_ref(v_buckets_1139_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 1, v_a_1137_);
lean_ctor_set(v___x_1141_, 0, v___x_1145_);
v___x_1152_ = v___x_1141_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_a_1137_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
else
{
size_t v___x_1154_; size_t v___x_1155_; lean_object* v___x_1156_; 
lean_del_object(v___x_1141_);
v___x_1154_ = ((size_t)0ULL);
v___x_1155_ = lean_usize_of_nat(v___x_1144_);
v___x_1156_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(v_h_1134_, v_buckets_1139_, v___x_1154_, v___x_1155_, v___x_1145_, v_a_1137_);
lean_dec_ref(v_buckets_1139_);
return v___x_1156_;
}
}
else
{
size_t v___x_1157_; size_t v___x_1158_; lean_object* v___x_1159_; 
lean_del_object(v___x_1141_);
v___x_1157_ = ((size_t)0ULL);
v___x_1158_ = lean_usize_of_nat(v___x_1144_);
v___x_1159_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(v_h_1134_, v_buckets_1139_, v___x_1157_, v___x_1158_, v___x_1145_, v_a_1137_);
lean_dec_ref(v_buckets_1139_);
return v___x_1159_;
}
}
}
}
else
{
lean_object* v_buckets_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1183_; 
v_buckets_1162_ = lean_ctor_get(v_cache_1135_, 1);
v_isSharedCheck_1183_ = !lean_is_exclusive(v_cache_1135_);
if (v_isSharedCheck_1183_ == 0)
{
lean_object* v_unused_1184_; 
v_unused_1184_ = lean_ctor_get(v_cache_1135_, 0);
lean_dec(v_unused_1184_);
v___x_1164_ = v_cache_1135_;
v_isShared_1165_ = v_isSharedCheck_1183_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_buckets_1162_);
lean_dec(v_cache_1135_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1183_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; uint8_t v___x_1169_; 
v___x_1166_ = lean_unsigned_to_nat(0u);
v___x_1167_ = lean_array_get_size(v_buckets_1162_);
v___x_1168_ = lean_box(0);
v___x_1169_ = lean_nat_dec_lt(v___x_1166_, v___x_1167_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1171_; 
lean_dec_ref(v_buckets_1162_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 1, v_a_1137_);
lean_ctor_set(v___x_1164_, 0, v___x_1168_);
v___x_1171_ = v___x_1164_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v___x_1168_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v_a_1137_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
else
{
uint8_t v___x_1173_; 
v___x_1173_ = lean_nat_dec_le(v___x_1167_, v___x_1167_);
if (v___x_1173_ == 0)
{
if (v___x_1169_ == 0)
{
lean_object* v___x_1175_; 
lean_dec_ref(v_buckets_1162_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 1, v_a_1137_);
lean_ctor_set(v___x_1164_, 0, v___x_1168_);
v___x_1175_ = v___x_1164_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v___x_1168_);
lean_ctor_set(v_reuseFailAlloc_1176_, 1, v_a_1137_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
else
{
size_t v___x_1177_; size_t v___x_1178_; lean_object* v___x_1179_; 
lean_del_object(v___x_1164_);
v___x_1177_ = ((size_t)0ULL);
v___x_1178_ = lean_usize_of_nat(v___x_1167_);
v___x_1179_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(v_h_1134_, v_buckets_1162_, v___x_1177_, v___x_1178_, v___x_1168_, v_a_1137_);
lean_dec_ref(v_buckets_1162_);
return v___x_1179_;
}
}
else
{
size_t v___x_1180_; size_t v___x_1181_; lean_object* v___x_1182_; 
lean_del_object(v___x_1164_);
v___x_1180_ = ((size_t)0ULL);
v___x_1181_ = lean_usize_of_nat(v___x_1167_);
v___x_1182_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(v_h_1134_, v_buckets_1162_, v___x_1180_, v___x_1181_, v___x_1168_, v_a_1137_);
lean_dec_ref(v_buckets_1162_);
return v___x_1182_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries___boxed(lean_object* v_h_1185_, lean_object* v_cache_1186_, lean_object* v_platformIndependent_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_){
_start:
{
uint8_t v_platformIndependent_boxed_1190_; lean_object* v_res_1191_; 
v_platformIndependent_boxed_1190_ = lean_unbox(v_platformIndependent_1187_);
v_res_1191_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_h_1185_, v_cache_1186_, v_platformIndependent_boxed_1190_, v_a_1188_);
lean_dec(v_h_1185_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_updateFile_spec__0(lean_object* v_x_1192_, lean_object* v_x_1193_){
_start:
{
if (lean_obj_tag(v_x_1193_) == 0)
{
return v_x_1192_;
}
else
{
lean_object* v_key_1194_; lean_object* v_value_1195_; lean_object* v_tail_1196_; uint64_t v___x_1197_; lean_object* v___x_1198_; 
v_key_1194_ = lean_ctor_get(v_x_1193_, 0);
lean_inc(v_key_1194_);
v_value_1195_ = lean_ctor_get(v_x_1193_, 1);
lean_inc(v_value_1195_);
v_tail_1196_ = lean_ctor_get(v_x_1193_, 2);
lean_inc(v_tail_1196_);
lean_dec_ref(v_x_1193_);
v___x_1197_ = lean_unbox_uint64(v_key_1194_);
lean_dec(v_key_1194_);
v___x_1198_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_x_1192_, v___x_1197_, v_value_1195_);
v_x_1192_ = v___x_1198_;
v_x_1193_ = v_tail_1196_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(lean_object* v_as_1200_, size_t v_i_1201_, size_t v_stop_1202_, lean_object* v_b_1203_){
_start:
{
uint8_t v___x_1204_; 
v___x_1204_ = lean_usize_dec_eq(v_i_1201_, v_stop_1202_);
if (v___x_1204_ == 0)
{
lean_object* v___x_1205_; lean_object* v___x_1206_; size_t v___x_1207_; size_t v___x_1208_; 
v___x_1205_ = lean_array_uget_borrowed(v_as_1200_, v_i_1201_);
lean_inc(v___x_1205_);
v___x_1206_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_updateFile_spec__0(v_b_1203_, v___x_1205_);
v___x_1207_ = ((size_t)1ULL);
v___x_1208_ = lean_usize_add(v_i_1201_, v___x_1207_);
v_i_1201_ = v___x_1208_;
v_b_1203_ = v___x_1206_;
goto _start;
}
else
{
return v_b_1203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1___boxed(lean_object* v_as_1210_, lean_object* v_i_1211_, lean_object* v_stop_1212_, lean_object* v_b_1213_){
_start:
{
size_t v_i_boxed_1214_; size_t v_stop_boxed_1215_; lean_object* v_res_1216_; 
v_i_boxed_1214_ = lean_unbox_usize(v_i_1211_);
lean_dec(v_i_1211_);
v_stop_boxed_1215_ = lean_unbox_usize(v_stop_1212_);
lean_dec(v_stop_1212_);
v_res_1216_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(v_as_1210_, v_i_boxed_1214_, v_stop_boxed_1215_, v_b_1213_);
lean_dec_ref(v_as_1210_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile(lean_object* v_file_1217_, lean_object* v_cache_1218_, lean_object* v_a_1219_){
_start:
{
lean_object* v_a_1222_; lean_object* v_a_1223_; lean_object* v___x_1225_; 
lean_inc_ref(v_file_1217_);
v___x_1225_ = l_Lake_createParentDirs(v_file_1217_);
if (lean_obj_tag(v___x_1225_) == 0)
{
uint8_t v___x_1226_; lean_object* v___x_1227_; 
lean_dec_ref(v___x_1225_);
v___x_1226_ = 4;
v___x_1227_ = lean_io_prim_handle_mk(v_file_1217_, v___x_1226_);
if (lean_obj_tag(v___x_1227_) == 0)
{
uint8_t v___x_1228_; lean_object* v___x_1229_; 
lean_dec_ref(v___x_1227_);
v___x_1228_ = 3;
v___x_1229_ = lean_io_prim_handle_mk(v_file_1217_, v___x_1228_);
if (lean_obj_tag(v___x_1229_) == 0)
{
lean_object* v_a_1230_; uint8_t v___x_1231_; lean_object* v___x_1232_; 
v_a_1230_ = lean_ctor_get(v___x_1229_, 0);
lean_inc(v_a_1230_);
lean_dec_ref(v___x_1229_);
v___x_1231_ = 1;
v___x_1232_ = lean_io_prim_handle_lock(v_a_1230_, v___x_1231_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v___x_1233_; 
lean_dec_ref(v___x_1232_);
v___x_1233_ = lean_io_prim_handle_get_line(v_a_1230_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1235_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1234_);
lean_dec_ref(v___x_1233_);
lean_inc_ref(v_file_1217_);
v___x_1235_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_1217_, v_a_1234_, v_a_1219_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; uint8_t v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 1);
lean_inc(v_a_1236_);
lean_dec_ref(v___x_1235_);
v___x_1237_ = 0;
v___x_1238_ = lean_unsigned_to_nat(2u);
v___x_1239_ = lean_unsigned_to_nat(0u);
v___x_1240_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0, &l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___closed__0);
v___x_1241_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_1230_, v_file_1217_, v___x_1237_, v___x_1238_, v___x_1240_, v_a_1236_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_a_1242_; lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1270_; 
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
v_a_1243_ = lean_ctor_get(v___x_1241_, 1);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1245_ = v___x_1241_;
v_isShared_1246_ = v_isSharedCheck_1270_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_inc(v_a_1242_);
lean_dec(v___x_1241_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1270_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___y_1248_; lean_object* v_buckets_1260_; lean_object* v___x_1261_; uint8_t v___x_1262_; 
v_buckets_1260_ = lean_ctor_get(v_cache_1218_, 1);
v___x_1261_ = lean_array_get_size(v_buckets_1260_);
v___x_1262_ = lean_nat_dec_lt(v___x_1239_, v___x_1261_);
if (v___x_1262_ == 0)
{
v___y_1248_ = v_a_1242_;
goto v___jp_1247_;
}
else
{
uint8_t v___x_1263_; 
v___x_1263_ = lean_nat_dec_le(v___x_1261_, v___x_1261_);
if (v___x_1263_ == 0)
{
if (v___x_1262_ == 0)
{
v___y_1248_ = v_a_1242_;
goto v___jp_1247_;
}
else
{
size_t v___x_1264_; size_t v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = ((size_t)0ULL);
v___x_1265_ = lean_usize_of_nat(v___x_1261_);
v___x_1266_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(v_buckets_1260_, v___x_1264_, v___x_1265_, v_a_1242_);
v___y_1248_ = v___x_1266_;
goto v___jp_1247_;
}
}
else
{
size_t v___x_1267_; size_t v___x_1268_; lean_object* v___x_1269_; 
v___x_1267_ = ((size_t)0ULL);
v___x_1268_ = lean_usize_of_nat(v___x_1261_);
v___x_1269_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(v_buckets_1260_, v___x_1267_, v___x_1268_, v_a_1242_);
v___y_1248_ = v___x_1269_;
goto v___jp_1247_;
}
}
v___jp_1247_:
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_io_prim_handle_rewind(v_a_1230_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v___x_1250_; 
lean_dec_ref(v___x_1249_);
lean_del_object(v___x_1245_);
v___x_1250_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_a_1230_, v___y_1248_, v___x_1237_, v_a_1243_);
lean_dec(v_a_1230_);
return v___x_1250_;
}
else
{
lean_object* v_a_1251_; lean_object* v___x_1252_; uint8_t v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1258_; 
lean_dec_ref(v___y_1248_);
lean_dec(v_a_1230_);
v_a_1251_ = lean_ctor_get(v___x_1249_, 0);
lean_inc(v_a_1251_);
lean_dec_ref(v___x_1249_);
v___x_1252_ = lean_io_error_to_string(v_a_1251_);
v___x_1253_ = 3;
v___x_1254_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1254_, 0, v___x_1252_);
lean_ctor_set_uint8(v___x_1254_, sizeof(void*)*1, v___x_1253_);
v___x_1255_ = lean_array_get_size(v_a_1243_);
v___x_1256_ = lean_array_push(v_a_1243_, v___x_1254_);
if (v_isShared_1246_ == 0)
{
lean_ctor_set_tag(v___x_1245_, 1);
lean_ctor_set(v___x_1245_, 1, v___x_1256_);
lean_ctor_set(v___x_1245_, 0, v___x_1255_);
v___x_1258_ = v___x_1245_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1255_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
else
{
lean_object* v_a_1271_; lean_object* v_a_1272_; 
lean_dec(v_a_1230_);
v_a_1271_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_a_1271_);
v_a_1272_ = lean_ctor_get(v___x_1241_, 1);
lean_inc(v_a_1272_);
lean_dec_ref(v___x_1241_);
v_a_1222_ = v_a_1271_;
v_a_1223_ = v_a_1272_;
goto v___jp_1221_;
}
}
else
{
lean_object* v_a_1273_; lean_object* v_a_1274_; 
lean_dec(v_a_1230_);
lean_dec_ref(v_file_1217_);
v_a_1273_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1273_);
v_a_1274_ = lean_ctor_get(v___x_1235_, 1);
lean_inc(v_a_1274_);
lean_dec_ref(v___x_1235_);
v_a_1222_ = v_a_1273_;
v_a_1223_ = v_a_1274_;
goto v___jp_1221_;
}
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1276_; uint8_t v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
lean_dec(v_a_1230_);
lean_dec_ref(v_file_1217_);
v_a_1275_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1275_);
lean_dec_ref(v___x_1233_);
v___x_1276_ = lean_io_error_to_string(v_a_1275_);
v___x_1277_ = 3;
v___x_1278_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1278_, 0, v___x_1276_);
lean_ctor_set_uint8(v___x_1278_, sizeof(void*)*1, v___x_1277_);
v___x_1279_ = lean_array_get_size(v_a_1219_);
v___x_1280_ = lean_array_push(v_a_1219_, v___x_1278_);
v_a_1222_ = v___x_1279_;
v_a_1223_ = v___x_1280_;
goto v___jp_1221_;
}
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
lean_dec(v_a_1230_);
lean_dec_ref(v_file_1217_);
v_a_1281_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1281_);
lean_dec_ref(v___x_1232_);
v___x_1282_ = lean_io_error_to_string(v_a_1281_);
v___x_1283_ = 3;
v___x_1284_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1284_, 0, v___x_1282_);
lean_ctor_set_uint8(v___x_1284_, sizeof(void*)*1, v___x_1283_);
v___x_1285_ = lean_array_get_size(v_a_1219_);
v___x_1286_ = lean_array_push(v_a_1219_, v___x_1284_);
v___x_1287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1285_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
return v___x_1287_;
}
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; uint8_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v_a_1288_ = lean_ctor_get(v___x_1229_, 0);
lean_inc(v_a_1288_);
lean_dec_ref(v___x_1229_);
v___x_1289_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_1290_ = lean_string_append(v_file_1217_, v___x_1289_);
v___x_1291_ = lean_io_error_to_string(v_a_1288_);
v___x_1292_ = lean_string_append(v___x_1290_, v___x_1291_);
lean_dec_ref(v___x_1291_);
v___x_1293_ = 3;
v___x_1294_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1294_, 0, v___x_1292_);
lean_ctor_set_uint8(v___x_1294_, sizeof(void*)*1, v___x_1293_);
v___x_1295_ = lean_array_get_size(v_a_1219_);
v___x_1296_ = lean_array_push(v_a_1219_, v___x_1294_);
v___x_1297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1295_);
lean_ctor_set(v___x_1297_, 1, v___x_1296_);
return v___x_1297_;
}
}
else
{
lean_object* v_a_1298_; lean_object* v___x_1299_; uint8_t v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
lean_dec_ref(v_file_1217_);
v_a_1298_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_a_1298_);
lean_dec_ref(v___x_1227_);
v___x_1299_ = lean_io_error_to_string(v_a_1298_);
v___x_1300_ = 3;
v___x_1301_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1301_, 0, v___x_1299_);
lean_ctor_set_uint8(v___x_1301_, sizeof(void*)*1, v___x_1300_);
v___x_1302_ = lean_array_get_size(v_a_1219_);
v___x_1303_ = lean_array_push(v_a_1219_, v___x_1301_);
v___x_1304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1302_);
lean_ctor_set(v___x_1304_, 1, v___x_1303_);
return v___x_1304_;
}
}
else
{
lean_object* v_a_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
lean_dec_ref(v_file_1217_);
v_a_1305_ = lean_ctor_get(v___x_1225_, 0);
lean_inc(v_a_1305_);
lean_dec_ref(v___x_1225_);
v___x_1306_ = lean_io_error_to_string(v_a_1305_);
v___x_1307_ = 3;
v___x_1308_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set_uint8(v___x_1308_, sizeof(void*)*1, v___x_1307_);
v___x_1309_ = lean_array_get_size(v_a_1219_);
v___x_1310_ = lean_array_push(v_a_1219_, v___x_1308_);
v___x_1311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1309_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
return v___x_1311_;
}
v___jp_1221_:
{
lean_object* v___x_1224_; 
v___x_1224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1224_, 0, v_a_1222_);
lean_ctor_set(v___x_1224_, 1, v_a_1223_);
return v___x_1224_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile___boxed(lean_object* v_file_1312_, lean_object* v_cache_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_){
_start:
{
lean_object* v_res_1316_; 
v_res_1316_ = l_Lake_CacheMap_updateFile(v_file_1312_, v_cache_1313_, v_a_1314_);
lean_dec_ref(v_cache_1313_);
return v_res_1316_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__0(void){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = ((lean_object*)(l_Lake_CacheMap_schemaVersion));
v___x_1318_ = l_Lake_Date_toString(v___x_1317_);
return v___x_1318_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__1(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__0, &l_Lake_CacheMap_writeFile___closed__0_once, _init_l_Lake_CacheMap_writeFile___closed__0);
v___x_1320_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
return v___x_1320_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__2(void){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__1, &l_Lake_CacheMap_writeFile___closed__1_once, _init_l_Lake_CacheMap_writeFile___closed__1);
v___x_1322_ = l_Lean_Json_compress(v___x_1321_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile(lean_object* v_file_1323_, lean_object* v_cache_1324_, uint8_t v_platformIndependent_1325_, lean_object* v_a_1326_){
_start:
{
lean_object* v___x_1328_; 
lean_inc_ref(v_file_1323_);
v___x_1328_ = l_Lake_createParentDirs(v_file_1323_);
if (lean_obj_tag(v___x_1328_) == 0)
{
uint8_t v___x_1329_; lean_object* v___x_1330_; 
lean_dec_ref(v___x_1328_);
v___x_1329_ = 1;
v___x_1330_ = lean_io_prim_handle_mk(v_file_1323_, v___x_1329_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; uint8_t v___x_1332_; lean_object* v___x_1333_; 
lean_dec_ref(v_file_1323_);
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_a_1331_);
lean_dec_ref(v___x_1330_);
v___x_1332_ = 1;
v___x_1333_ = lean_io_prim_handle_lock(v_a_1331_, v___x_1332_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
lean_dec_ref(v___x_1333_);
v___x_1334_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__2, &l_Lake_CacheMap_writeFile___closed__2_once, _init_l_Lake_CacheMap_writeFile___closed__2);
v___x_1335_ = l_IO_FS_Handle_putStrLn(v_a_1331_, v___x_1334_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v___x_1336_; 
lean_dec_ref(v___x_1335_);
v___x_1336_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_a_1331_, v_cache_1324_, v_platformIndependent_1325_, v_a_1326_);
lean_dec(v_a_1331_);
return v___x_1336_;
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
lean_dec(v_a_1331_);
lean_dec_ref(v_cache_1324_);
v_a_1337_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_a_1337_);
lean_dec_ref(v___x_1335_);
v___x_1338_ = lean_io_error_to_string(v_a_1337_);
v___x_1339_ = 3;
v___x_1340_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
lean_ctor_set_uint8(v___x_1340_, sizeof(void*)*1, v___x_1339_);
v___x_1341_ = lean_array_get_size(v_a_1326_);
v___x_1342_ = lean_array_push(v_a_1326_, v___x_1340_);
v___x_1343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
return v___x_1343_;
}
}
else
{
lean_object* v_a_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
lean_dec(v_a_1331_);
lean_dec_ref(v_cache_1324_);
v_a_1344_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_a_1344_);
lean_dec_ref(v___x_1333_);
v___x_1345_ = lean_io_error_to_string(v_a_1344_);
v___x_1346_ = 3;
v___x_1347_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1347_, 0, v___x_1345_);
lean_ctor_set_uint8(v___x_1347_, sizeof(void*)*1, v___x_1346_);
v___x_1348_ = lean_array_get_size(v_a_1326_);
v___x_1349_ = lean_array_push(v_a_1326_, v___x_1347_);
v___x_1350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1348_);
lean_ctor_set(v___x_1350_, 1, v___x_1349_);
return v___x_1350_;
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
lean_dec_ref(v_cache_1324_);
v_a_1351_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_a_1351_);
lean_dec_ref(v___x_1330_);
v___x_1352_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_1353_ = lean_string_append(v_file_1323_, v___x_1352_);
v___x_1354_ = lean_io_error_to_string(v_a_1351_);
v___x_1355_ = lean_string_append(v___x_1353_, v___x_1354_);
lean_dec_ref(v___x_1354_);
v___x_1356_ = 3;
v___x_1357_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1357_, 0, v___x_1355_);
lean_ctor_set_uint8(v___x_1357_, sizeof(void*)*1, v___x_1356_);
v___x_1358_ = lean_array_get_size(v_a_1326_);
v___x_1359_ = lean_array_push(v_a_1326_, v___x_1357_);
v___x_1360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1358_);
lean_ctor_set(v___x_1360_, 1, v___x_1359_);
return v___x_1360_;
}
}
else
{
lean_object* v_a_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
lean_dec_ref(v_cache_1324_);
lean_dec_ref(v_file_1323_);
v_a_1361_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1361_);
lean_dec_ref(v___x_1328_);
v___x_1362_ = lean_io_error_to_string(v_a_1361_);
v___x_1363_ = 3;
v___x_1364_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1364_, 0, v___x_1362_);
lean_ctor_set_uint8(v___x_1364_, sizeof(void*)*1, v___x_1363_);
v___x_1365_ = lean_array_get_size(v_a_1326_);
v___x_1366_ = lean_array_push(v_a_1326_, v___x_1364_);
v___x_1367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1365_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
return v___x_1367_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile___boxed(lean_object* v_file_1368_, lean_object* v_cache_1369_, lean_object* v_platformIndependent_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_){
_start:
{
uint8_t v_platformIndependent_boxed_1373_; lean_object* v_res_1374_; 
v_platformIndependent_boxed_1373_ = lean_unbox(v_platformIndependent_1370_);
v_res_1374_ = l_Lake_CacheMap_writeFile(v_file_1368_, v_cache_1369_, v_platformIndependent_boxed_1373_, v_a_1371_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(uint64_t v_a_1375_, lean_object* v_x_1376_){
_start:
{
if (lean_obj_tag(v_x_1376_) == 0)
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_box(0);
return v___x_1377_;
}
else
{
lean_object* v_key_1378_; lean_object* v_value_1379_; lean_object* v_tail_1380_; uint64_t v___x_1381_; uint8_t v___x_1382_; 
v_key_1378_ = lean_ctor_get(v_x_1376_, 0);
v_value_1379_ = lean_ctor_get(v_x_1376_, 1);
v_tail_1380_ = lean_ctor_get(v_x_1376_, 2);
v___x_1381_ = lean_unbox_uint64(v_key_1378_);
v___x_1382_ = lean_uint64_dec_eq(v___x_1381_, v_a_1375_);
if (v___x_1382_ == 0)
{
v_x_1376_ = v_tail_1380_;
goto _start;
}
else
{
lean_object* v___x_1384_; 
lean_inc(v_value_1379_);
v___x_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1384_, 0, v_value_1379_);
return v___x_1384_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_1385_, lean_object* v_x_1386_){
_start:
{
uint64_t v_a_boxed_1387_; lean_object* v_res_1388_; 
v_a_boxed_1387_ = lean_unbox_uint64(v_a_1385_);
lean_dec_ref(v_a_1385_);
v_res_1388_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_boxed_1387_, v_x_1386_);
lean_dec(v_x_1386_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(lean_object* v_m_1389_, uint64_t v_a_1390_){
_start:
{
lean_object* v_buckets_1391_; lean_object* v___x_1392_; uint64_t v___x_1393_; uint64_t v___x_1394_; uint64_t v_fold_1395_; uint64_t v___x_1396_; uint64_t v___x_1397_; uint64_t v___x_1398_; size_t v___x_1399_; size_t v___x_1400_; size_t v___x_1401_; size_t v___x_1402_; size_t v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v_buckets_1391_ = lean_ctor_get(v_m_1389_, 1);
v___x_1392_ = lean_array_get_size(v_buckets_1391_);
v___x_1393_ = 32ULL;
v___x_1394_ = lean_uint64_shift_right(v_a_1390_, v___x_1393_);
v_fold_1395_ = lean_uint64_xor(v_a_1390_, v___x_1394_);
v___x_1396_ = 16ULL;
v___x_1397_ = lean_uint64_shift_right(v_fold_1395_, v___x_1396_);
v___x_1398_ = lean_uint64_xor(v_fold_1395_, v___x_1397_);
v___x_1399_ = lean_uint64_to_usize(v___x_1398_);
v___x_1400_ = lean_usize_of_nat(v___x_1392_);
v___x_1401_ = ((size_t)1ULL);
v___x_1402_ = lean_usize_sub(v___x_1400_, v___x_1401_);
v___x_1403_ = lean_usize_land(v___x_1399_, v___x_1402_);
v___x_1404_ = lean_array_uget_borrowed(v_buckets_1391_, v___x_1403_);
v___x_1405_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_1390_, v___x_1404_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg___boxed(lean_object* v_m_1406_, lean_object* v_a_1407_){
_start:
{
uint64_t v_a_boxed_1408_; lean_object* v_res_1409_; 
v_a_boxed_1408_ = lean_unbox_uint64(v_a_1407_);
lean_dec_ref(v_a_1407_);
v_res_1409_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_m_1406_, v_a_boxed_1408_);
lean_dec_ref(v_m_1406_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f(uint64_t v_inputHash_1410_, lean_object* v_cache_1411_){
_start:
{
lean_object* v___x_1412_; 
v___x_1412_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_cache_1411_, v_inputHash_1410_);
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v___x_1413_; 
v___x_1413_ = lean_box(0);
return v___x_1413_;
}
else
{
lean_object* v_val_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1422_; 
v_val_1414_ = lean_ctor_get(v___x_1412_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1416_ = v___x_1412_;
v_isShared_1417_ = v_isSharedCheck_1422_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_val_1414_);
lean_dec(v___x_1412_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1422_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v_out_1418_; lean_object* v___x_1420_; 
v_out_1418_ = lean_ctor_get(v_val_1414_, 0);
lean_inc(v_out_1418_);
lean_dec(v_val_1414_);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v_out_1418_);
v___x_1420_ = v___x_1416_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_out_1418_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f___boxed(lean_object* v_inputHash_1423_, lean_object* v_cache_1424_){
_start:
{
uint64_t v_inputHash_boxed_1425_; lean_object* v_res_1426_; 
v_inputHash_boxed_1425_ = lean_unbox_uint64(v_inputHash_1423_);
lean_dec_ref(v_inputHash_1423_);
v_res_1426_ = l_Lake_CacheMap_get_x3f(v_inputHash_boxed_1425_, v_cache_1424_);
lean_dec_ref(v_cache_1424_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0(lean_object* v_00_u03b2_1427_, lean_object* v_m_1428_, uint64_t v_a_1429_){
_start:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_m_1428_, v_a_1429_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___boxed(lean_object* v_00_u03b2_1431_, lean_object* v_m_1432_, lean_object* v_a_1433_){
_start:
{
uint64_t v_a_boxed_1434_; lean_object* v_res_1435_; 
v_a_boxed_1434_ = lean_unbox_uint64(v_a_1433_);
lean_dec_ref(v_a_1433_);
v_res_1435_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0(v_00_u03b2_1431_, v_m_1432_, v_a_boxed_1434_);
lean_dec_ref(v_m_1432_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1436_, uint64_t v_a_1437_, lean_object* v_x_1438_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_1437_, v_x_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1440_, lean_object* v_a_1441_, lean_object* v_x_1442_){
_start:
{
uint64_t v_a_boxed_1443_; lean_object* v_res_1444_; 
v_a_boxed_1443_ = lean_unbox_uint64(v_a_1441_);
lean_dec_ref(v_a_1441_);
v_res_1444_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0(v_00_u03b2_1440_, v_a_boxed_1443_, v_x_1442_);
lean_dec(v_x_1442_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(uint64_t v_inputHash_1445_, lean_object* v_out_1446_, lean_object* v_cache_1447_, uint8_t v_platformIndependent_1448_){
_start:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1449_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1449_, 0, v_out_1446_);
lean_ctor_set_uint8(v___x_1449_, sizeof(void*)*1, v_platformIndependent_1448_);
v___x_1450_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_cache_1447_, v_inputHash_1445_, v___x_1449_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore___boxed(lean_object* v_inputHash_1451_, lean_object* v_out_1452_, lean_object* v_cache_1453_, lean_object* v_platformIndependent_1454_){
_start:
{
uint64_t v_inputHash_boxed_1455_; uint8_t v_platformIndependent_boxed_1456_; lean_object* v_res_1457_; 
v_inputHash_boxed_1455_ = lean_unbox_uint64(v_inputHash_1451_);
lean_dec_ref(v_inputHash_1451_);
v_platformIndependent_boxed_1456_ = lean_unbox(v_platformIndependent_1454_);
v_res_1457_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_boxed_1455_, v_out_1452_, v_cache_1453_, v_platformIndependent_boxed_1456_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg(lean_object* v_inst_1458_, uint64_t v_inputHash_1459_, lean_object* v_val_1460_, lean_object* v_cache_1461_, uint8_t v_platformIndependent_1462_){
_start:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1463_ = lean_apply_1(v_inst_1458_, v_val_1460_);
v___x_1464_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1459_, v___x_1463_, v_cache_1461_, v_platformIndependent_1462_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg___boxed(lean_object* v_inst_1465_, lean_object* v_inputHash_1466_, lean_object* v_val_1467_, lean_object* v_cache_1468_, lean_object* v_platformIndependent_1469_){
_start:
{
uint64_t v_inputHash_boxed_1470_; uint8_t v_platformIndependent_boxed_1471_; lean_object* v_res_1472_; 
v_inputHash_boxed_1470_ = lean_unbox_uint64(v_inputHash_1466_);
lean_dec_ref(v_inputHash_1466_);
v_platformIndependent_boxed_1471_ = lean_unbox(v_platformIndependent_1469_);
v_res_1472_ = l_Lake_CacheMap_insert___redArg(v_inst_1465_, v_inputHash_boxed_1470_, v_val_1467_, v_cache_1468_, v_platformIndependent_boxed_1471_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert(lean_object* v_00_u03b1_1473_, lean_object* v_inst_1474_, uint64_t v_inputHash_1475_, lean_object* v_val_1476_, lean_object* v_cache_1477_, uint8_t v_platformIndependent_1478_){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1479_ = lean_apply_1(v_inst_1474_, v_val_1476_);
v___x_1480_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1475_, v___x_1479_, v_cache_1477_, v_platformIndependent_1478_);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___boxed(lean_object* v_00_u03b1_1481_, lean_object* v_inst_1482_, lean_object* v_inputHash_1483_, lean_object* v_val_1484_, lean_object* v_cache_1485_, lean_object* v_platformIndependent_1486_){
_start:
{
uint64_t v_inputHash_boxed_1487_; uint8_t v_platformIndependent_boxed_1488_; lean_object* v_res_1489_; 
v_inputHash_boxed_1487_ = lean_unbox_uint64(v_inputHash_1483_);
lean_dec_ref(v_inputHash_1483_);
v_platformIndependent_boxed_1488_ = lean_unbox(v_platformIndependent_1486_);
v_res_1489_ = l_Lake_CacheMap_insert(v_00_u03b1_1481_, v_inst_1482_, v_inputHash_boxed_1487_, v_val_1484_, v_cache_1485_, v_platformIndependent_boxed_1488_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(lean_object* v_init_1493_, lean_object* v_x_1494_, lean_object* v___y_1495_){
_start:
{
if (lean_obj_tag(v_x_1494_) == 0)
{
lean_object* v_v_1497_; lean_object* v_l_1498_; lean_object* v_r_1499_; lean_object* v___x_1500_; 
v_v_1497_ = lean_ctor_get(v_x_1494_, 2);
lean_inc(v_v_1497_);
v_l_1498_ = lean_ctor_get(v_x_1494_, 3);
lean_inc(v_l_1498_);
v_r_1499_ = lean_ctor_get(v_x_1494_, 4);
lean_inc(v_r_1499_);
lean_dec_ref(v_x_1494_);
v___x_1500_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_init_1493_, v_l_1498_, v___y_1495_);
if (lean_obj_tag(v___x_1500_) == 0)
{
lean_object* v_a_1501_; lean_object* v_a_1502_; lean_object* v___x_1503_; 
v_a_1501_ = lean_ctor_get(v___x_1500_, 0);
lean_inc(v_a_1501_);
v_a_1502_ = lean_ctor_get(v___x_1500_, 1);
lean_inc(v_a_1502_);
lean_dec_ref(v___x_1500_);
v___x_1503_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_a_1501_, v_v_1497_, v_a_1502_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; lean_object* v_a_1505_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
v_a_1505_ = lean_ctor_get(v___x_1503_, 1);
lean_inc(v_a_1505_);
lean_dec_ref(v___x_1503_);
v_init_1493_ = v_a_1504_;
v_x_1494_ = v_r_1499_;
v___y_1495_ = v_a_1505_;
goto _start;
}
else
{
lean_dec(v_r_1499_);
return v___x_1503_;
}
}
else
{
lean_dec(v_r_1499_);
lean_dec(v_v_1497_);
return v___x_1500_;
}
}
else
{
lean_object* v___x_1507_; 
v___x_1507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1507_, 0, v_init_1493_);
lean_ctor_set(v___x_1507_, 1, v___y_1495_);
return v___x_1507_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(lean_object* v_as_1508_, lean_object* v_o_1509_, lean_object* v_a_1510_){
_start:
{
lean_object* v___y_1513_; 
switch(lean_obj_tag(v_o_1509_))
{
case 0:
{
v___y_1513_ = v_a_1510_;
goto v___jp_1512_;
}
case 1:
{
lean_object* v___x_1515_; 
lean_dec_ref(v_o_1509_);
v___x_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1515_, 0, v_as_1508_);
lean_ctor_set(v___x_1515_, 1, v_a_1510_);
return v___x_1515_;
}
case 2:
{
lean_object* v_n_1516_; lean_object* v___x_1517_; 
v_n_1516_ = lean_ctor_get(v_o_1509_, 0);
lean_inc_ref(v_n_1516_);
lean_dec_ref(v_o_1509_);
v___x_1517_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_1516_);
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v_a_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; uint8_t v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1518_);
lean_dec_ref(v___x_1517_);
v___x_1519_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__0));
v___x_1520_ = lean_string_append(v___x_1519_, v_a_1518_);
lean_dec(v_a_1518_);
v___x_1521_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_1522_ = lean_string_append(v___x_1520_, v___x_1521_);
v___x_1523_ = l_Lean_JsonNumber_toString(v_n_1516_);
v___x_1524_ = lean_string_append(v___x_1522_, v___x_1523_);
lean_dec_ref(v___x_1523_);
v___x_1525_ = 3;
v___x_1526_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1526_, 0, v___x_1524_);
lean_ctor_set_uint8(v___x_1526_, sizeof(void*)*1, v___x_1525_);
v___x_1527_ = lean_array_push(v_a_1510_, v___x_1526_);
v___y_1513_ = v___x_1527_;
goto v___jp_1512_;
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; uint64_t v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
lean_dec_ref(v_n_1516_);
v_a_1528_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1528_);
lean_dec_ref(v___x_1517_);
v___x_1529_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__1));
v___x_1530_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
v___x_1531_ = lean_unbox_uint64(v_a_1528_);
lean_dec(v_a_1528_);
lean_ctor_set_uint64(v___x_1530_, sizeof(void*)*1, v___x_1531_);
v___x_1532_ = lean_array_push(v_as_1508_, v___x_1530_);
v___x_1533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1532_);
lean_ctor_set(v___x_1533_, 1, v_a_1510_);
return v___x_1533_;
}
}
case 3:
{
lean_object* v_s_1534_; lean_object* v___x_1535_; 
v_s_1534_ = lean_ctor_get(v_o_1509_, 0);
lean_inc_ref(v_s_1534_);
lean_dec_ref(v_o_1509_);
v___x_1535_ = l_Lake_ArtifactDescr_ofFilePath_x3f(v_s_1534_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v_a_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; uint8_t v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref(v___x_1535_);
v___x_1537_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__2));
v___x_1538_ = lean_string_append(v___x_1537_, v_a_1536_);
lean_dec(v_a_1536_);
v___x_1539_ = 3;
v___x_1540_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1540_, 0, v___x_1538_);
lean_ctor_set_uint8(v___x_1540_, sizeof(void*)*1, v___x_1539_);
v___x_1541_ = lean_array_push(v_a_1510_, v___x_1540_);
v___y_1513_ = v___x_1541_;
goto v___jp_1512_;
}
else
{
lean_object* v_a_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v_a_1542_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1542_);
lean_dec_ref(v___x_1535_);
v___x_1543_ = lean_array_push(v_as_1508_, v_a_1542_);
v___x_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1543_);
lean_ctor_set(v___x_1544_, 1, v_a_1510_);
return v___x_1544_;
}
}
case 4:
{
lean_object* v_elems_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; uint8_t v___x_1548_; 
v_elems_1545_ = lean_ctor_get(v_o_1509_, 0);
lean_inc_ref(v_elems_1545_);
lean_dec_ref(v_o_1509_);
v___x_1546_ = lean_unsigned_to_nat(0u);
v___x_1547_ = lean_array_get_size(v_elems_1545_);
v___x_1548_ = lean_nat_dec_lt(v___x_1546_, v___x_1547_);
if (v___x_1548_ == 0)
{
lean_object* v___x_1549_; 
lean_dec_ref(v_elems_1545_);
v___x_1549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1549_, 0, v_as_1508_);
lean_ctor_set(v___x_1549_, 1, v_a_1510_);
return v___x_1549_;
}
else
{
uint8_t v___x_1550_; 
v___x_1550_ = lean_nat_dec_le(v___x_1547_, v___x_1547_);
if (v___x_1550_ == 0)
{
if (v___x_1548_ == 0)
{
lean_object* v___x_1551_; 
lean_dec_ref(v_elems_1545_);
v___x_1551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1551_, 0, v_as_1508_);
lean_ctor_set(v___x_1551_, 1, v_a_1510_);
return v___x_1551_;
}
else
{
size_t v___x_1552_; size_t v___x_1553_; lean_object* v___x_1554_; 
v___x_1552_ = ((size_t)0ULL);
v___x_1553_ = lean_usize_of_nat(v___x_1547_);
v___x_1554_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_elems_1545_, v___x_1552_, v___x_1553_, v_as_1508_, v_a_1510_);
lean_dec_ref(v_elems_1545_);
return v___x_1554_;
}
}
else
{
size_t v___x_1555_; size_t v___x_1556_; lean_object* v___x_1557_; 
v___x_1555_ = ((size_t)0ULL);
v___x_1556_ = lean_usize_of_nat(v___x_1547_);
v___x_1557_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_elems_1545_, v___x_1555_, v___x_1556_, v_as_1508_, v_a_1510_);
lean_dec_ref(v_elems_1545_);
return v___x_1557_;
}
}
}
default: 
{
lean_object* v_kvPairs_1558_; lean_object* v___x_1559_; 
v_kvPairs_1558_ = lean_ctor_get(v_o_1509_, 0);
lean_inc(v_kvPairs_1558_);
lean_dec_ref(v_o_1509_);
v___x_1559_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_as_1508_, v_kvPairs_1558_, v_a_1510_);
return v___x_1559_;
}
}
v___jp_1512_:
{
lean_object* v___x_1514_; 
v___x_1514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1514_, 0, v_as_1508_);
lean_ctor_set(v___x_1514_, 1, v___y_1513_);
return v___x_1514_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(lean_object* v_as_1560_, size_t v_i_1561_, size_t v_stop_1562_, lean_object* v_b_1563_, lean_object* v___y_1564_){
_start:
{
uint8_t v___x_1566_; 
v___x_1566_ = lean_usize_dec_eq(v_i_1561_, v_stop_1562_);
if (v___x_1566_ == 0)
{
lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1567_ = lean_array_uget_borrowed(v_as_1560_, v_i_1561_);
lean_inc(v___x_1567_);
v___x_1568_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_b_1563_, v___x_1567_, v___y_1564_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v_a_1569_; lean_object* v_a_1570_; size_t v___x_1571_; size_t v___x_1572_; 
v_a_1569_ = lean_ctor_get(v___x_1568_, 0);
lean_inc(v_a_1569_);
v_a_1570_ = lean_ctor_get(v___x_1568_, 1);
lean_inc(v_a_1570_);
lean_dec_ref(v___x_1568_);
v___x_1571_ = ((size_t)1ULL);
v___x_1572_ = lean_usize_add(v_i_1561_, v___x_1571_);
v_i_1561_ = v___x_1572_;
v_b_1563_ = v_a_1569_;
v___y_1564_ = v_a_1570_;
goto _start;
}
else
{
return v___x_1568_;
}
}
else
{
lean_object* v___x_1574_; 
v___x_1574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1574_, 0, v_b_1563_);
lean_ctor_set(v___x_1574_, 1, v___y_1564_);
return v___x_1574_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0___boxed(lean_object* v_as_1575_, lean_object* v_i_1576_, lean_object* v_stop_1577_, lean_object* v_b_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_){
_start:
{
size_t v_i_boxed_1581_; size_t v_stop_boxed_1582_; lean_object* v_res_1583_; 
v_i_boxed_1581_ = lean_unbox_usize(v_i_1576_);
lean_dec(v_i_1576_);
v_stop_boxed_1582_ = lean_unbox_usize(v_stop_1577_);
lean_dec(v_stop_1577_);
v_res_1583_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_as_1575_, v_i_boxed_1581_, v_stop_boxed_1582_, v_b_1578_, v___y_1579_);
lean_dec_ref(v_as_1575_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1___boxed(lean_object* v_init_1584_, lean_object* v_x_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_init_1584_, v_x_1585_, v___y_1586_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___boxed(lean_object* v_as_1589_, lean_object* v_o_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_as_1589_, v_o_1590_, v_a_1591_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(lean_object* v_x_1594_, lean_object* v_x_1595_, lean_object* v___y_1596_){
_start:
{
if (lean_obj_tag(v_x_1595_) == 0)
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1598_, 0, v_x_1594_);
lean_ctor_set(v___x_1598_, 1, v___y_1596_);
return v___x_1598_;
}
else
{
lean_object* v_value_1599_; lean_object* v_tail_1600_; lean_object* v_out_1601_; lean_object* v___x_1602_; 
v_value_1599_ = lean_ctor_get(v_x_1595_, 1);
lean_inc(v_value_1599_);
v_tail_1600_ = lean_ctor_get(v_x_1595_, 2);
lean_inc(v_tail_1600_);
lean_dec_ref(v_x_1595_);
v_out_1601_ = lean_ctor_get(v_value_1599_, 0);
lean_inc(v_out_1601_);
lean_dec(v_value_1599_);
v___x_1602_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_x_1594_, v_out_1601_, v___y_1596_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; lean_object* v_a_1604_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
v_a_1604_ = lean_ctor_get(v___x_1602_, 1);
lean_inc(v_a_1604_);
lean_dec_ref(v___x_1602_);
v_x_1594_ = v_a_1603_;
v_x_1595_ = v_tail_1600_;
v___y_1596_ = v_a_1604_;
goto _start;
}
else
{
lean_dec(v_tail_1600_);
return v___x_1602_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0___boxed(lean_object* v_x_1606_, lean_object* v_x_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
lean_object* v_res_1610_; 
v_res_1610_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(v_x_1606_, v_x_1607_, v___y_1608_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(lean_object* v_as_1611_, size_t v_i_1612_, size_t v_stop_1613_, lean_object* v_b_1614_, lean_object* v___y_1615_){
_start:
{
uint8_t v___x_1617_; 
v___x_1617_ = lean_usize_dec_eq(v_i_1612_, v_stop_1613_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1618_ = lean_array_uget_borrowed(v_as_1611_, v_i_1612_);
lean_inc(v___x_1618_);
v___x_1619_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(v_b_1614_, v___x_1618_, v___y_1615_);
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v_a_1620_; lean_object* v_a_1621_; size_t v___x_1622_; size_t v___x_1623_; 
v_a_1620_ = lean_ctor_get(v___x_1619_, 0);
lean_inc(v_a_1620_);
v_a_1621_ = lean_ctor_get(v___x_1619_, 1);
lean_inc(v_a_1621_);
lean_dec_ref(v___x_1619_);
v___x_1622_ = ((size_t)1ULL);
v___x_1623_ = lean_usize_add(v_i_1612_, v___x_1622_);
v_i_1612_ = v___x_1623_;
v_b_1614_ = v_a_1620_;
v___y_1615_ = v_a_1621_;
goto _start;
}
else
{
return v___x_1619_;
}
}
else
{
lean_object* v___x_1625_; 
v___x_1625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1625_, 0, v_b_1614_);
lean_ctor_set(v___x_1625_, 1, v___y_1615_);
return v___x_1625_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1___boxed(lean_object* v_as_1626_, lean_object* v_i_1627_, lean_object* v_stop_1628_, lean_object* v_b_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
size_t v_i_boxed_1632_; size_t v_stop_boxed_1633_; lean_object* v_res_1634_; 
v_i_boxed_1632_ = lean_unbox_usize(v_i_1627_);
lean_dec(v_i_1627_);
v_stop_boxed_1633_ = lean_unbox_usize(v_stop_1628_);
lean_dec(v_stop_1628_);
v_res_1634_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_as_1626_, v_i_boxed_1632_, v_stop_boxed_1633_, v_b_1629_, v___y_1630_);
lean_dec_ref(v_as_1626_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs(lean_object* v_map_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v_buckets_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1669_; 
v_buckets_1640_ = lean_ctor_get(v_map_1637_, 1);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_map_1637_);
if (v_isSharedCheck_1669_ == 0)
{
lean_object* v_unused_1670_; 
v_unused_1670_ = lean_ctor_get(v_map_1637_, 0);
lean_dec(v_unused_1670_);
v___x_1642_ = v_map_1637_;
v_isShared_1643_ = v_isSharedCheck_1669_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_buckets_1640_);
lean_dec(v_map_1637_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1669_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___y_1648_; lean_object* v_a_1649_; lean_object* v___y_1656_; lean_object* v___x_1658_; uint8_t v___x_1659_; 
v___x_1644_ = lean_unsigned_to_nat(0u);
v___x_1645_ = ((lean_object*)(l_Lake_CacheMap_collectOutputDescrs___closed__0));
v___x_1646_ = lean_array_get_size(v_a_1638_);
v___x_1658_ = lean_array_get_size(v_buckets_1640_);
v___x_1659_ = lean_nat_dec_lt(v___x_1644_, v___x_1658_);
if (v___x_1659_ == 0)
{
lean_object* v___x_1660_; 
lean_dec_ref(v_buckets_1640_);
lean_inc_ref(v_a_1638_);
v___x_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1645_);
lean_ctor_set(v___x_1660_, 1, v_a_1638_);
v___y_1648_ = v___x_1660_;
v_a_1649_ = v_a_1638_;
goto v___jp_1647_;
}
else
{
uint8_t v___x_1661_; 
v___x_1661_ = lean_nat_dec_le(v___x_1658_, v___x_1658_);
if (v___x_1661_ == 0)
{
if (v___x_1659_ == 0)
{
lean_object* v___x_1662_; 
lean_dec_ref(v_buckets_1640_);
lean_inc_ref(v_a_1638_);
v___x_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1645_);
lean_ctor_set(v___x_1662_, 1, v_a_1638_);
v___y_1648_ = v___x_1662_;
v_a_1649_ = v_a_1638_;
goto v___jp_1647_;
}
else
{
size_t v___x_1663_; size_t v___x_1664_; lean_object* v___x_1665_; 
v___x_1663_ = ((size_t)0ULL);
v___x_1664_ = lean_usize_of_nat(v___x_1658_);
v___x_1665_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_buckets_1640_, v___x_1663_, v___x_1664_, v___x_1645_, v_a_1638_);
lean_dec_ref(v_buckets_1640_);
v___y_1656_ = v___x_1665_;
goto v___jp_1655_;
}
}
else
{
size_t v___x_1666_; size_t v___x_1667_; lean_object* v___x_1668_; 
v___x_1666_ = ((size_t)0ULL);
v___x_1667_ = lean_usize_of_nat(v___x_1658_);
v___x_1668_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_buckets_1640_, v___x_1666_, v___x_1667_, v___x_1645_, v_a_1638_);
lean_dec_ref(v_buckets_1640_);
v___y_1656_ = v___x_1668_;
goto v___jp_1655_;
}
}
v___jp_1647_:
{
lean_object* v___x_1650_; uint8_t v___x_1651_; 
v___x_1650_ = lean_array_get_size(v_a_1649_);
v___x_1651_ = lean_nat_dec_eq(v___x_1646_, v___x_1650_);
if (v___x_1651_ == 0)
{
lean_object* v___x_1653_; 
lean_dec_ref(v___y_1648_);
if (v_isShared_1643_ == 0)
{
lean_ctor_set_tag(v___x_1642_, 1);
lean_ctor_set(v___x_1642_, 1, v_a_1649_);
lean_ctor_set(v___x_1642_, 0, v___x_1646_);
v___x_1653_ = v___x_1642_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v___x_1646_);
lean_ctor_set(v_reuseFailAlloc_1654_, 1, v_a_1649_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
else
{
lean_dec_ref(v_a_1649_);
lean_del_object(v___x_1642_);
return v___y_1648_;
}
}
v___jp_1655_:
{
if (lean_obj_tag(v___y_1656_) == 0)
{
lean_object* v_a_1657_; 
v_a_1657_ = lean_ctor_get(v___y_1656_, 1);
lean_inc(v_a_1657_);
v___y_1648_ = v___y_1656_;
v_a_1649_ = v_a_1657_;
goto v___jp_1647_;
}
else
{
lean_del_object(v___x_1642_);
return v___y_1656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs___boxed(lean_object* v_map_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l_Lake_CacheMap_collectOutputDescrs(v_map_1671_, v_a_1672_);
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk(lean_object* v_init_1675_){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = lean_st_mk_ref(v_init_1675_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk___boxed(lean_object* v_init_1678_, lean_object* v_a_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Lake_CacheRef_mk(v_init_1678_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f(uint64_t v_inputHash_1681_, lean_object* v_cache_1682_){
_start:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1684_ = lean_st_ref_take(v_cache_1682_);
v___x_1685_ = l_Lake_CacheMap_get_x3f(v_inputHash_1681_, v___x_1684_);
v___x_1686_ = lean_st_ref_set(v_cache_1682_, v___x_1684_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f___boxed(lean_object* v_inputHash_1687_, lean_object* v_cache_1688_, lean_object* v_a_1689_){
_start:
{
uint64_t v_inputHash_boxed_1690_; lean_object* v_res_1691_; 
v_inputHash_boxed_1690_ = lean_unbox_uint64(v_inputHash_1687_);
lean_dec_ref(v_inputHash_1687_);
v_res_1691_ = l_Lake_CacheRef_get_x3f(v_inputHash_boxed_1690_, v_cache_1688_);
lean_dec(v_cache_1688_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg(lean_object* v_inst_1692_, uint64_t v_inputHash_1693_, lean_object* v_val_1694_, lean_object* v_cache_1695_, uint8_t v_platformIndependent_1696_){
_start:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1698_ = lean_st_ref_take(v_cache_1695_);
v___x_1699_ = lean_apply_1(v_inst_1692_, v_val_1694_);
v___x_1700_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1693_, v___x_1699_, v___x_1698_, v_platformIndependent_1696_);
v___x_1701_ = lean_st_ref_set(v_cache_1695_, v___x_1700_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg___boxed(lean_object* v_inst_1702_, lean_object* v_inputHash_1703_, lean_object* v_val_1704_, lean_object* v_cache_1705_, lean_object* v_platformIndependent_1706_, lean_object* v_a_1707_){
_start:
{
uint64_t v_inputHash_boxed_1708_; uint8_t v_platformIndependent_boxed_1709_; lean_object* v_res_1710_; 
v_inputHash_boxed_1708_ = lean_unbox_uint64(v_inputHash_1703_);
lean_dec_ref(v_inputHash_1703_);
v_platformIndependent_boxed_1709_ = lean_unbox(v_platformIndependent_1706_);
v_res_1710_ = l_Lake_CacheRef_insert___redArg(v_inst_1702_, v_inputHash_boxed_1708_, v_val_1704_, v_cache_1705_, v_platformIndependent_boxed_1709_);
lean_dec(v_cache_1705_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert(lean_object* v_00_u03b1_1711_, lean_object* v_inst_1712_, uint64_t v_inputHash_1713_, lean_object* v_val_1714_, lean_object* v_cache_1715_, uint8_t v_platformIndependent_1716_){
_start:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1718_ = lean_st_ref_take(v_cache_1715_);
v___x_1719_ = lean_apply_1(v_inst_1712_, v_val_1714_);
v___x_1720_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1713_, v___x_1719_, v___x_1718_, v_platformIndependent_1716_);
v___x_1721_ = lean_st_ref_set(v_cache_1715_, v___x_1720_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___boxed(lean_object* v_00_u03b1_1722_, lean_object* v_inst_1723_, lean_object* v_inputHash_1724_, lean_object* v_val_1725_, lean_object* v_cache_1726_, lean_object* v_platformIndependent_1727_, lean_object* v_a_1728_){
_start:
{
uint64_t v_inputHash_boxed_1729_; uint8_t v_platformIndependent_boxed_1730_; lean_object* v_res_1731_; 
v_inputHash_boxed_1729_ = lean_unbox_uint64(v_inputHash_1724_);
lean_dec_ref(v_inputHash_1724_);
v_platformIndependent_boxed_1730_ = lean_unbox(v_platformIndependent_1727_);
v_res_1731_ = l_Lake_CacheRef_insert(v_00_u03b1_1722_, v_inst_1723_, v_inputHash_boxed_1729_, v_val_1725_, v_cache_1726_, v_platformIndependent_boxed_1730_);
lean_dec(v_cache_1726_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString(lean_object* v_s_1734_){
_start:
{
lean_inc_ref(v_s_1734_);
return v_s_1734_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString___boxed(lean_object* v_s_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = l_Lake_CacheServiceName_ofString(v_s_1735_);
lean_dec_ref(v_s_1735_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString(lean_object* v_self_1737_){
_start:
{
lean_inc_ref(v_self_1737_);
return v_self_1737_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString___boxed(lean_object* v_self_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Lake_CacheServiceName_toString(v_self_1738_);
lean_dec_ref(v_self_1738_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_fromJson_x3f(lean_object* v_j_1742_){
_start:
{
lean_object* v___x_1743_; 
v___x_1743_ = l_Lean_Json_getStr_x3f(v_j_1742_);
if (lean_obj_tag(v___x_1743_) == 0)
{
lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1751_; 
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1743_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1746_ = v___x_1743_;
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v___x_1743_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1749_; 
if (v_isShared_1747_ == 0)
{
v___x_1749_ = v___x_1746_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_a_1744_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
else
{
lean_object* v_a_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1759_; 
v_a_1752_ = lean_ctor_get(v___x_1743_, 0);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1743_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1754_ = v___x_1743_;
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_a_1752_);
lean_dec(v___x_1743_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1757_; 
if (v_isShared_1755_ == 0)
{
v___x_1757_ = v___x_1754_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v_a_1752_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_toJson(lean_object* v_self_1762_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1763_, 0, v_self_1762_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(lean_object* v_x_1766_){
_start:
{
if (lean_obj_tag(v_x_1766_) == 0)
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_unsigned_to_nat(0u);
return v___x_1767_;
}
else
{
lean_object* v___x_1768_; 
v___x_1768_ = lean_unsigned_to_nat(1u);
return v___x_1768_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx___boxed(lean_object* v_x_1769_){
_start:
{
lean_object* v_res_1770_; 
v_res_1770_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(v_x_1769_);
lean_dec_ref(v_x_1769_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(lean_object* v_t_1771_, lean_object* v_k_1772_){
_start:
{
lean_object* v_s_1773_; lean_object* v___x_1774_; 
v_s_1773_ = lean_ctor_get(v_t_1771_, 0);
lean_inc_ref(v_s_1773_);
lean_dec_ref(v_t_1771_);
v___x_1774_ = lean_apply_1(v_k_1772_, v_s_1773_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(lean_object* v_motive_1775_, lean_object* v_ctorIdx_1776_, lean_object* v_t_1777_, lean_object* v_h_1778_, lean_object* v_k_1779_){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1777_, v_k_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___boxed(lean_object* v_motive_1781_, lean_object* v_ctorIdx_1782_, lean_object* v_t_1783_, lean_object* v_h_1784_, lean_object* v_k_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(v_motive_1781_, v_ctorIdx_1782_, v_t_1783_, v_h_1784_, v_k_1785_);
lean_dec(v_ctorIdx_1782_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim___redArg(lean_object* v_t_1787_, lean_object* v_str_1788_){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1787_, v_str_1788_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim(lean_object* v_motive_1790_, lean_object* v_t_1791_, lean_object* v_h_1792_, lean_object* v_str_1793_){
_start:
{
lean_object* v___x_1794_; 
v___x_1794_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1791_, v_str_1793_);
return v___x_1794_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim___redArg(lean_object* v_t_1795_, lean_object* v_repo_1796_){
_start:
{
lean_object* v___x_1797_; 
v___x_1797_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1795_, v_repo_1796_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim(lean_object* v_motive_1798_, lean_object* v_t_1799_, lean_object* v_h_1800_, lean_object* v_repo_1801_){
_start:
{
lean_object* v___x_1802_; 
v___x_1802_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1799_, v_repo_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofString(lean_object* v_s_1803_){
_start:
{
lean_object* v___x_1804_; 
v___x_1804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1804_, 0, v_s_1803_);
return v___x_1804_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofRepo(lean_object* v_fullName_1805_){
_start:
{
lean_object* v___x_1806_; 
v___x_1806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1806_, 0, v_fullName_1805_);
return v___x_1806_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheServiceScope_isRepo(lean_object* v_self_1807_){
_start:
{
if (lean_obj_tag(v_self_1807_) == 1)
{
uint8_t v___x_1808_; 
v___x_1808_ = 1;
return v___x_1808_;
}
else
{
uint8_t v___x_1809_; 
v___x_1809_ = 0;
return v___x_1809_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_isRepo___boxed(lean_object* v_self_1810_){
_start:
{
uint8_t v_res_1811_; lean_object* v_r_1812_; 
v_res_1811_ = l_Lake_CacheServiceScope_isRepo(v_self_1810_);
lean_dec_ref(v_self_1810_);
v_r_1812_ = lean_box(v_res_1811_);
return v_r_1812_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString(lean_object* v_self_1813_){
_start:
{
lean_object* v_s_1814_; 
v_s_1814_ = lean_ctor_get(v_self_1813_, 0);
lean_inc_ref(v_s_1814_);
return v_s_1814_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString___boxed(lean_object* v_self_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l_Lake_CacheServiceScope_toString(v_self_1815_);
lean_dec_ref(v_self_1815_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(lean_object* v_self_1819_){
_start:
{
lean_object* v_s_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1827_; 
v_s_1820_ = lean_ctor_get(v_self_1819_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v_self_1819_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1822_ = v_self_1819_;
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_s_1820_);
lean_dec(v_self_1819_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1825_; 
if (v_isShared_1823_ == 0)
{
lean_ctor_set_tag(v___x_1822_, 3);
v___x_1825_ = v___x_1822_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_s_1820_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_ofData(lean_object* v_data_1837_){
_start:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = lean_box(0);
v___x_1839_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1839_, 0, v_data_1837_);
lean_ctor_set(v___x_1839_, 1, v___x_1838_);
lean_ctor_set(v___x_1839_, 2, v___x_1838_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(lean_object* v_x_1840_){
_start:
{
if (lean_obj_tag(v_x_1840_) == 0)
{
lean_object* v___x_1841_; 
v___x_1841_ = lean_box(0);
return v___x_1841_;
}
else
{
lean_object* v_val_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
v_val_1842_ = lean_ctor_get(v_x_1840_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_x_1840_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v_x_1840_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_val_1842_);
lean_dec(v_x_1840_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
lean_ctor_set_tag(v___x_1844_, 3);
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_val_1842_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
}
static lean_object* _init_l_Lake_CacheOutput_toJson___closed__3(void){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1854_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__2));
v___x_1855_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__1));
v___x_1856_ = lean_box(1);
v___x_1857_ = l_Lake_JsonObject_insertJson(v___x_1856_, v___x_1855_, v___x_1854_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_toJson(lean_object* v_out_1861_){
_start:
{
lean_object* v_data_1862_; lean_object* v_service_x3f_1863_; lean_object* v_scope_x3f_1864_; lean_object* v_obj_1866_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v_obj_1873_; 
v_data_1862_ = lean_ctor_get(v_out_1861_, 0);
lean_inc(v_data_1862_);
v_service_x3f_1863_ = lean_ctor_get(v_out_1861_, 1);
lean_inc(v_service_x3f_1863_);
v_scope_x3f_1864_ = lean_ctor_get(v_out_1861_, 2);
lean_inc(v_scope_x3f_1864_);
lean_dec_ref(v_out_1861_);
v___x_1870_ = lean_obj_once(&l_Lake_CacheOutput_toJson___closed__3, &l_Lake_CacheOutput_toJson___closed__3_once, _init_l_Lake_CacheOutput_toJson___closed__3);
v___x_1871_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__4));
v___x_1872_ = l_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(v_service_x3f_1863_);
v_obj_1873_ = l_Lake_JsonObject_insertJson(v___x_1870_, v___x_1871_, v___x_1872_);
if (lean_obj_tag(v_scope_x3f_1864_) == 1)
{
lean_object* v_val_1874_; lean_object* v___y_1876_; uint8_t v___x_1879_; 
v_val_1874_ = lean_ctor_get(v_scope_x3f_1864_, 0);
lean_inc(v_val_1874_);
lean_dec_ref(v_scope_x3f_1864_);
v___x_1879_ = l_Lake_CacheServiceScope_isRepo(v_val_1874_);
if (v___x_1879_ == 0)
{
lean_object* v___x_1880_; 
v___x_1880_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__5));
v___y_1876_ = v___x_1880_;
goto v___jp_1875_;
}
else
{
lean_object* v___x_1881_; 
v___x_1881_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__6));
v___y_1876_ = v___x_1881_;
goto v___jp_1875_;
}
v___jp_1875_:
{
lean_object* v___x_1877_; lean_object* v_obj_1878_; 
v___x_1877_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(v_val_1874_);
lean_inc_ref(v___y_1876_);
v_obj_1878_ = l_Lake_JsonObject_insertJson(v_obj_1873_, v___y_1876_, v___x_1877_);
v_obj_1866_ = v_obj_1878_;
goto v___jp_1865_;
}
}
else
{
lean_dec(v_scope_x3f_1864_);
v_obj_1866_ = v_obj_1873_;
goto v___jp_1865_;
}
v___jp_1865_:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1867_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_1868_ = l_Lake_JsonObject_insertJson(v_obj_1866_, v___x_1867_, v_data_1862_);
v___x_1869_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1868_);
return v___x_1869_;
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(lean_object* v_x_1886_){
_start:
{
if (lean_obj_tag(v_x_1886_) == 0)
{
lean_object* v___x_1887_; 
v___x_1887_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0));
return v___x_1887_;
}
else
{
lean_object* v___x_1888_; 
v___x_1888_ = l_Lean_Json_getStr_x3f(v_x_1886_);
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v_a_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1896_; 
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1891_ = v___x_1888_;
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_a_1889_);
lean_dec(v___x_1888_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1894_; 
if (v_isShared_1892_ == 0)
{
v___x_1894_ = v___x_1891_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v_a_1889_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1905_; 
v_a_1897_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1899_ = v___x_1888_;
v_isShared_1900_ = v_isSharedCheck_1905_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1888_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1905_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1901_, 0, v_a_1897_);
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 0, v___x_1901_);
v___x_1903_ = v___x_1899_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1901_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(lean_object* v_x_1906_){
_start:
{
if (lean_obj_tag(v_x_1906_) == 0)
{
lean_object* v___x_1907_; 
v___x_1907_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0));
return v___x_1907_;
}
else
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Lean_Json_getStr_x3f(v_x_1906_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1908_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1908_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
else
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1925_; 
v_a_1917_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1919_ = v___x_1908_;
v_isShared_1920_ = v_isSharedCheck_1925_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1908_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1925_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1921_; lean_object* v___x_1923_; 
v___x_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1921_, 0, v_a_1917_);
if (v_isShared_1920_ == 0)
{
lean_ctor_set(v___x_1919_, 0, v___x_1921_);
v___x_1923_ = v___x_1919_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v___x_1921_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(lean_object* v_k_1926_, lean_object* v_t_1927_){
_start:
{
if (lean_obj_tag(v_t_1927_) == 0)
{
lean_object* v_k_1928_; lean_object* v_l_1929_; lean_object* v_r_1930_; uint8_t v___x_1931_; 
v_k_1928_ = lean_ctor_get(v_t_1927_, 1);
v_l_1929_ = lean_ctor_get(v_t_1927_, 3);
v_r_1930_ = lean_ctor_get(v_t_1927_, 4);
v___x_1931_ = lean_string_dec_lt(v_k_1926_, v_k_1928_);
if (v___x_1931_ == 0)
{
uint8_t v___x_1932_; 
v___x_1932_ = lean_string_dec_eq(v_k_1926_, v_k_1928_);
if (v___x_1932_ == 0)
{
v_t_1927_ = v_r_1930_;
goto _start;
}
else
{
return v___x_1932_;
}
}
else
{
v_t_1927_ = v_l_1929_;
goto _start;
}
}
else
{
uint8_t v___x_1935_; 
v___x_1935_ = 0;
return v___x_1935_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg___boxed(lean_object* v_k_1936_, lean_object* v_t_1937_){
_start:
{
uint8_t v_res_1938_; lean_object* v_r_1939_; 
v_res_1938_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v_k_1936_, v_t_1937_);
lean_dec(v_t_1937_);
lean_dec_ref(v_k_1936_);
v_r_1939_ = lean_box(v_res_1938_);
return v_r_1939_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_fromJson_x3f(lean_object* v_json_1946_){
_start:
{
if (lean_obj_tag(v_json_1946_) == 5)
{
lean_object* v_kvPairs_1951_; lean_object* v___x_1952_; uint8_t v___x_1953_; 
v_kvPairs_1951_ = lean_ctor_get(v_json_1946_, 0);
v___x_1952_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__1));
v___x_1953_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v___x_1952_, v_kvPairs_1951_);
if (v___x_1953_ == 0)
{
goto v___jp_1947_;
}
else
{
lean_object* v___x_1954_; lean_object* v___x_1955_; 
lean_inc(v_kvPairs_1951_);
lean_dec_ref(v_json_1946_);
v___x_1954_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_1955_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1951_, v___x_1954_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v___x_1956_; 
lean_dec(v_kvPairs_1951_);
v___x_1956_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__1));
return v___x_1956_;
}
else
{
lean_object* v_val_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_2075_; 
v_val_1957_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_1959_ = v___x_1955_;
v_isShared_1960_ = v_isSharedCheck_2075_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_val_1957_);
lean_dec(v___x_1955_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_2075_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___y_1962_; lean_object* v_a_1963_; lean_object* v___y_1969_; lean_object* v___y_1972_; lean_object* v_a_2012_; lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2051_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__4));
v___x_2052_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1951_, v___x_2051_);
if (lean_obj_tag(v___x_2052_) == 0)
{
lean_object* v___x_2053_; 
v___x_2053_ = lean_box(0);
v_a_2012_ = v___x_2053_;
goto v___jp_2011_;
}
else
{
lean_object* v_val_2054_; lean_object* v___x_2055_; 
v_val_2054_ = lean_ctor_get(v___x_2052_, 0);
lean_inc(v_val_2054_);
lean_dec_ref(v___x_2052_);
v___x_2055_ = l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(v_val_2054_);
if (lean_obj_tag(v___x_2055_) == 0)
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2065_; 
lean_del_object(v___x_1959_);
lean_dec(v_val_1957_);
lean_dec(v_kvPairs_1951_);
v_a_2056_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2058_ = v___x_2055_;
v_isShared_2059_ = v_isSharedCheck_2065_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2055_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2065_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2063_; 
v___x_2060_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__4));
v___x_2061_ = lean_string_append(v___x_2060_, v_a_2056_);
lean_dec(v_a_2056_);
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 0, v___x_2061_);
v___x_2063_ = v___x_2058_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v___x_2061_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
else
{
if (lean_obj_tag(v___x_2055_) == 0)
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
lean_del_object(v___x_1959_);
lean_dec(v_val_1957_);
lean_dec(v_kvPairs_1951_);
v_a_2066_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2055_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2055_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
lean_ctor_set_tag(v___x_2068_, 0);
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
else
{
lean_object* v_a_2074_; 
v_a_2074_ = lean_ctor_get(v___x_2055_, 0);
lean_inc(v_a_2074_);
lean_dec_ref(v___x_2055_);
v_a_2012_ = v_a_2074_;
goto v___jp_2011_;
}
}
}
v___jp_1961_:
{
lean_object* v___x_1964_; lean_object* v___x_1966_; 
v___x_1964_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1964_, 0, v_val_1957_);
lean_ctor_set(v___x_1964_, 1, v___y_1962_);
lean_ctor_set(v___x_1964_, 2, v_a_1963_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_1964_);
v___x_1966_ = v___x_1959_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v___x_1964_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
v___jp_1968_:
{
lean_object* v___x_1970_; 
v___x_1970_ = lean_box(0);
v___y_1962_ = v___y_1969_;
v_a_1963_ = v___x_1970_;
goto v___jp_1961_;
}
v___jp_1971_:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1973_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__5));
v___x_1974_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1951_, v___x_1973_);
lean_dec(v_kvPairs_1951_);
if (lean_obj_tag(v___x_1974_) == 0)
{
v___y_1969_ = v___y_1972_;
goto v___jp_1968_;
}
else
{
lean_object* v_val_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_2010_; 
v_val_1975_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_1977_ = v___x_1974_;
v_isShared_1978_ = v_isSharedCheck_2010_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_val_1975_);
lean_dec(v___x_1974_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_2010_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1979_; 
v___x_1979_ = l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(v_val_1975_);
if (lean_obj_tag(v___x_1979_) == 0)
{
lean_object* v_a_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_1989_; 
lean_del_object(v___x_1977_);
lean_dec(v___y_1972_);
lean_del_object(v___x_1959_);
lean_dec(v_val_1957_);
v_a_1980_ = lean_ctor_get(v___x_1979_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1979_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1982_ = v___x_1979_;
v_isShared_1983_ = v_isSharedCheck_1989_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_a_1980_);
lean_dec(v___x_1979_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_1989_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1987_; 
v___x_1984_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__2));
v___x_1985_ = lean_string_append(v___x_1984_, v_a_1980_);
lean_dec(v_a_1980_);
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 0, v___x_1985_);
v___x_1987_ = v___x_1982_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v___x_1985_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
else
{
if (lean_obj_tag(v___x_1979_) == 0)
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
lean_del_object(v___x_1977_);
lean_dec(v___y_1972_);
lean_del_object(v___x_1959_);
lean_dec(v_val_1957_);
v_a_1990_ = lean_ctor_get(v___x_1979_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1979_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1979_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1979_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
lean_ctor_set_tag(v___x_1992_, 0);
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
else
{
lean_object* v_a_1998_; 
v_a_1998_ = lean_ctor_get(v___x_1979_, 0);
lean_inc(v_a_1998_);
lean_dec_ref(v___x_1979_);
if (lean_obj_tag(v_a_1998_) == 1)
{
lean_object* v_val_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2009_; 
v_val_1999_ = lean_ctor_get(v_a_1998_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v_a_1998_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2001_ = v_a_1998_;
v_isShared_2002_ = v_isSharedCheck_2009_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_val_1999_);
lean_dec(v_a_1998_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2009_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_1978_ == 0)
{
lean_ctor_set_tag(v___x_1977_, 0);
lean_ctor_set(v___x_1977_, 0, v_val_1999_);
v___x_2004_ = v___x_1977_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_val_1999_);
v___x_2004_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
lean_object* v___x_2006_; 
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 0, v___x_2004_);
v___x_2006_ = v___x_2001_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v___x_2004_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
v___y_1962_ = v___y_1972_;
v_a_1963_ = v___x_2006_;
goto v___jp_1961_;
}
}
}
}
else
{
lean_dec(v_a_1998_);
lean_del_object(v___x_1977_);
v___y_1969_ = v___y_1972_;
goto v___jp_1968_;
}
}
}
}
}
}
v___jp_2011_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2013_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__6));
v___x_2014_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1951_, v___x_2013_);
if (lean_obj_tag(v___x_2014_) == 0)
{
v___y_1972_ = v_a_2012_;
goto v___jp_1971_;
}
else
{
lean_object* v_val_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2050_; 
v_val_2015_ = lean_ctor_get(v___x_2014_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2014_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2017_ = v___x_2014_;
v_isShared_2018_ = v_isSharedCheck_2050_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_val_2015_);
lean_dec(v___x_2014_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2050_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2019_; 
v___x_2019_ = l_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(v_val_2015_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2029_; 
lean_del_object(v___x_2017_);
lean_dec(v_a_2012_);
lean_del_object(v___x_1959_);
lean_dec(v_val_1957_);
lean_dec(v_kvPairs_1951_);
v_a_2020_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2029_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_2022_ = v___x_2019_;
v_isShared_2023_ = v_isSharedCheck_2029_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_2019_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2029_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2027_; 
v___x_2024_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__3));
v___x_2025_ = lean_string_append(v___x_2024_, v_a_2020_);
lean_dec(v_a_2020_);
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 0, v___x_2025_);
v___x_2027_ = v___x_2022_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v___x_2025_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
else
{
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2037_; 
lean_del_object(v___x_2017_);
lean_dec(v_a_2012_);
lean_del_object(v___x_1959_);
lean_dec(v_val_1957_);
lean_dec(v_kvPairs_1951_);
v_a_2030_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2032_ = v___x_2019_;
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_2019_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
lean_ctor_set_tag(v___x_2032_, 0);
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_a_2030_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
}
else
{
lean_object* v_a_2038_; 
v_a_2038_ = lean_ctor_get(v___x_2019_, 0);
lean_inc(v_a_2038_);
lean_dec_ref(v___x_2019_);
if (lean_obj_tag(v_a_2038_) == 1)
{
lean_object* v_val_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2049_; 
lean_dec(v_kvPairs_1951_);
v_val_2039_ = lean_ctor_get(v_a_2038_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v_a_2038_);
if (v_isSharedCheck_2049_ == 0)
{
v___x_2041_ = v_a_2038_;
v_isShared_2042_ = v_isSharedCheck_2049_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_val_2039_);
lean_dec(v_a_2038_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2049_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2044_; 
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 0, v_val_2039_);
v___x_2044_ = v___x_2017_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v_val_2039_);
v___x_2044_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
lean_object* v___x_2046_; 
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 0, v___x_2044_);
v___x_2046_ = v___x_2041_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___x_2044_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
v___y_1962_ = v_a_2012_;
v_a_1963_ = v___x_2046_;
goto v___jp_1961_;
}
}
}
}
else
{
lean_dec(v_a_2038_);
lean_del_object(v___x_2017_);
v___y_1972_ = v_a_2012_;
goto v___jp_1971_;
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
goto v___jp_1947_;
}
v___jp_1947_:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1948_ = lean_box(0);
v___x_1949_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1949_, 0, v_json_1946_);
lean_ctor_set(v___x_1949_, 1, v___x_1948_);
lean_ctor_set(v___x_1949_, 2, v___x_1948_);
v___x_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1949_);
return v___x_1950_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(lean_object* v_00_u03b2_2076_, lean_object* v_k_2077_, lean_object* v_t_2078_){
_start:
{
uint8_t v___x_2079_; 
v___x_2079_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v_k_2077_, v_t_2078_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___boxed(lean_object* v_00_u03b2_2080_, lean_object* v_k_2081_, lean_object* v_t_2082_){
_start:
{
uint8_t v_res_2083_; lean_object* v_r_2084_; 
v_res_2083_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(v_00_u03b2_2080_, v_k_2081_, v_t_2082_);
lean_dec(v_t_2082_);
lean_dec_ref(v_k_2081_);
v_r_2084_ = lean_box(v_res_2083_);
return v_r_2084_;
}
}
static lean_object* _init_l_Lake_instInhabitedCache_default(void){
_start:
{
lean_object* v___x_2087_; 
v___x_2087_ = l_System_instInhabitedFilePath_default;
return v___x_2087_;
}
}
static lean_object* _init_l_Lake_instInhabitedCache(void){
_start:
{
lean_object* v___x_2088_; 
v___x_2088_ = l_System_instInhabitedFilePath_default;
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactDir(lean_object* v_cache_2090_){
_start:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2091_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2092_ = l_System_FilePath_join(v_cache_2090_, v___x_2091_);
return v___x_2092_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath(lean_object* v_cache_2094_, uint64_t v_contentHash_2095_, lean_object* v_ext_2096_){
_start:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; uint8_t v___x_2101_; 
v___x_2097_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2098_ = l_System_FilePath_join(v_cache_2094_, v___x_2097_);
v___x_2099_ = lean_string_utf8_byte_size(v_ext_2096_);
v___x_2100_ = lean_unsigned_to_nat(0u);
v___x_2101_ = lean_nat_dec_eq(v___x_2099_, v___x_2100_);
if (v___x_2101_ == 0)
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2102_ = l_Lake_Hash_hex(v_contentHash_2095_);
v___x_2103_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2104_ = lean_string_append(v___x_2102_, v___x_2103_);
v___x_2105_ = lean_string_append(v___x_2104_, v_ext_2096_);
v___x_2106_ = l_System_FilePath_join(v___x_2098_, v___x_2105_);
return v___x_2106_;
}
else
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2107_ = l_Lake_Hash_hex(v_contentHash_2095_);
v___x_2108_ = l_System_FilePath_join(v___x_2098_, v___x_2107_);
return v___x_2108_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath___boxed(lean_object* v_cache_2109_, lean_object* v_contentHash_2110_, lean_object* v_ext_2111_){
_start:
{
uint64_t v_contentHash_boxed_2112_; lean_object* v_res_2113_; 
v_contentHash_boxed_2112_ = lean_unbox_uint64(v_contentHash_2110_);
lean_dec_ref(v_contentHash_2110_);
v_res_2113_ = l_Lake_Cache_artifactPath(v_cache_2109_, v_contentHash_boxed_2112_, v_ext_2111_);
lean_dec_ref(v_ext_2111_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f(lean_object* v_cache_2114_, lean_object* v_descr_2115_){
_start:
{
uint64_t v_hash_2117_; lean_object* v_ext_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___y_2122_; lean_object* v___x_2136_; lean_object* v___x_2137_; uint8_t v___x_2138_; 
v_hash_2117_ = lean_ctor_get_uint64(v_descr_2115_, sizeof(void*)*1);
v_ext_2118_ = lean_ctor_get(v_descr_2115_, 0);
v___x_2119_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2120_ = l_System_FilePath_join(v_cache_2114_, v___x_2119_);
v___x_2136_ = lean_string_utf8_byte_size(v_ext_2118_);
v___x_2137_ = lean_unsigned_to_nat(0u);
v___x_2138_ = lean_nat_dec_eq(v___x_2136_, v___x_2137_);
if (v___x_2138_ == 0)
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2139_ = l_Lake_Hash_hex(v_hash_2117_);
v___x_2140_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2141_ = lean_string_append(v___x_2139_, v___x_2140_);
v___x_2142_ = lean_string_append(v___x_2141_, v_ext_2118_);
v___y_2122_ = v___x_2142_;
goto v___jp_2121_;
}
else
{
lean_object* v___x_2143_; 
v___x_2143_ = l_Lake_Hash_hex(v_hash_2117_);
v___y_2122_ = v___x_2143_;
goto v___jp_2121_;
}
v___jp_2121_:
{
lean_object* v_path_2123_; lean_object* v___x_2124_; 
v_path_2123_ = l_System_FilePath_join(v___x_2120_, v___y_2122_);
v___x_2124_ = lean_io_metadata(v_path_2123_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2134_; 
v_a_2125_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2134_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2127_ = v___x_2124_;
v_isShared_2128_ = v_isSharedCheck_2134_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2124_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2134_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v_modified_2129_; lean_object* v___x_2130_; lean_object* v___x_2132_; 
v_modified_2129_ = lean_ctor_get(v_a_2125_, 1);
lean_inc_ref(v_modified_2129_);
lean_dec(v_a_2125_);
lean_inc_ref(v_path_2123_);
v___x_2130_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2130_, 0, v_descr_2115_);
lean_ctor_set(v___x_2130_, 1, v_path_2123_);
lean_ctor_set(v___x_2130_, 2, v_path_2123_);
lean_ctor_set(v___x_2130_, 3, v_modified_2129_);
if (v_isShared_2128_ == 0)
{
lean_ctor_set_tag(v___x_2127_, 1);
lean_ctor_set(v___x_2127_, 0, v___x_2130_);
v___x_2132_ = v___x_2127_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2130_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
else
{
lean_object* v___x_2135_; 
lean_dec_ref(v___x_2124_);
lean_dec_ref(v_path_2123_);
lean_dec_ref(v_descr_2115_);
v___x_2135_ = lean_box(0);
return v___x_2135_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f___boxed(lean_object* v_cache_2144_, lean_object* v_descr_2145_, lean_object* v_a_2146_){
_start:
{
lean_object* v_res_2147_; 
v_res_2147_ = l_Lake_Cache_getArtifact_x3f(v_cache_2144_, v_descr_2145_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact(lean_object* v_cache_2150_, lean_object* v_descr_2151_){
_start:
{
uint64_t v_hash_2153_; lean_object* v_ext_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___y_2158_; lean_object* v___x_2187_; lean_object* v___x_2188_; uint8_t v___x_2189_; 
v_hash_2153_ = lean_ctor_get_uint64(v_descr_2151_, sizeof(void*)*1);
v_ext_2154_ = lean_ctor_get(v_descr_2151_, 0);
v___x_2155_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2156_ = l_System_FilePath_join(v_cache_2150_, v___x_2155_);
v___x_2187_ = lean_string_utf8_byte_size(v_ext_2154_);
v___x_2188_ = lean_unsigned_to_nat(0u);
v___x_2189_ = lean_nat_dec_eq(v___x_2187_, v___x_2188_);
if (v___x_2189_ == 0)
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2190_ = l_Lake_Hash_hex(v_hash_2153_);
v___x_2191_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2192_ = lean_string_append(v___x_2190_, v___x_2191_);
v___x_2193_ = lean_string_append(v___x_2192_, v_ext_2154_);
v___y_2158_ = v___x_2193_;
goto v___jp_2157_;
}
else
{
lean_object* v___x_2194_; 
v___x_2194_ = l_Lake_Hash_hex(v_hash_2153_);
v___y_2158_ = v___x_2194_;
goto v___jp_2157_;
}
v___jp_2157_:
{
lean_object* v_path_2159_; lean_object* v___x_2160_; 
v_path_2159_ = l_System_FilePath_join(v___x_2156_, v___y_2158_);
v___x_2160_ = lean_io_metadata(v_path_2159_);
if (lean_obj_tag(v___x_2160_) == 0)
{
lean_object* v_a_2161_; lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2170_; 
v_a_2161_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2163_ = v___x_2160_;
v_isShared_2164_ = v_isSharedCheck_2170_;
goto v_resetjp_2162_;
}
else
{
lean_inc(v_a_2161_);
lean_dec(v___x_2160_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2170_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
lean_object* v_modified_2165_; lean_object* v___x_2166_; lean_object* v___x_2168_; 
v_modified_2165_ = lean_ctor_get(v_a_2161_, 1);
lean_inc_ref(v_modified_2165_);
lean_dec(v_a_2161_);
lean_inc_ref(v_path_2159_);
v___x_2166_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2166_, 0, v_descr_2151_);
lean_ctor_set(v___x_2166_, 1, v_path_2159_);
lean_ctor_set(v___x_2166_, 2, v_path_2159_);
lean_ctor_set(v___x_2166_, 3, v_modified_2165_);
if (v_isShared_2164_ == 0)
{
lean_ctor_set(v___x_2163_, 0, v___x_2166_);
v___x_2168_ = v___x_2163_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v___x_2166_);
v___x_2168_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
return v___x_2168_;
}
}
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2186_; 
lean_dec_ref(v_descr_2151_);
v_a_2171_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2186_ == 0)
{
v___x_2173_ = v___x_2160_;
v_isShared_2174_ = v_isSharedCheck_2186_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2160_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2186_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
if (lean_obj_tag(v_a_2171_) == 11)
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2178_; 
lean_dec_ref(v_a_2171_);
v___x_2175_ = ((lean_object*)(l_Lake_Cache_getArtifact___closed__0));
v___x_2176_ = lean_string_append(v___x_2175_, v_path_2159_);
lean_dec_ref(v_path_2159_);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v___x_2176_);
v___x_2178_ = v___x_2173_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2176_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
else
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2184_; 
lean_dec_ref(v_path_2159_);
v___x_2180_ = ((lean_object*)(l_Lake_Cache_getArtifact___closed__1));
v___x_2181_ = lean_io_error_to_string(v_a_2171_);
v___x_2182_ = lean_string_append(v___x_2180_, v___x_2181_);
lean_dec_ref(v___x_2181_);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v___x_2182_);
v___x_2184_ = v___x_2173_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v___x_2182_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact___boxed(lean_object* v_cache_2195_, lean_object* v_descr_2196_, lean_object* v_a_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Lake_Cache_getArtifact(v_cache_2195_, v_descr_2196_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsDir(lean_object* v_cache_2200_){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2202_ = l_System_FilePath_join(v_cache_2200_, v___x_2201_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile(lean_object* v_cache_2204_, lean_object* v_scope_2205_, uint64_t v_inputHash_2206_){
_start:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2207_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2208_ = l_System_FilePath_join(v_cache_2204_, v___x_2207_);
v___x_2209_ = l_System_FilePath_join(v___x_2208_, v_scope_2205_);
v___x_2210_ = l_Lake_Hash_hex(v_inputHash_2206_);
v___x_2211_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2212_ = lean_string_append(v___x_2210_, v___x_2211_);
v___x_2213_ = l_System_FilePath_join(v___x_2209_, v___x_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile___boxed(lean_object* v_cache_2214_, lean_object* v_scope_2215_, lean_object* v_inputHash_2216_){
_start:
{
uint64_t v_inputHash_boxed_2217_; lean_object* v_res_2218_; 
v_inputHash_boxed_2217_ = lean_unbox_uint64(v_inputHash_2216_);
lean_dec_ref(v_inputHash_2216_);
v_res_2218_ = l_Lake_Cache_outputsFile(v_cache_2214_, v_scope_2215_, v_inputHash_boxed_2217_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(lean_object* v_cache_2219_, lean_object* v_scope_2220_, uint64_t v_inputHash_2221_, lean_object* v_out_2222_, lean_object* v_service_x3f_2223_, lean_object* v_remoteScope_x3f_2224_){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v_file_2232_; lean_object* v___x_2233_; 
v___x_2226_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2227_ = l_System_FilePath_join(v_cache_2219_, v___x_2226_);
v___x_2228_ = l_System_FilePath_join(v___x_2227_, v_scope_2220_);
v___x_2229_ = l_Lake_Hash_hex(v_inputHash_2221_);
v___x_2230_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2231_ = lean_string_append(v___x_2229_, v___x_2230_);
v_file_2232_ = l_System_FilePath_join(v___x_2228_, v___x_2231_);
lean_inc_ref(v_file_2232_);
v___x_2233_ = l_Lake_createParentDirs(v_file_2232_);
if (lean_obj_tag(v___x_2233_) == 0)
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
lean_dec_ref(v___x_2233_);
v___x_2234_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2234_, 0, v_out_2222_);
lean_ctor_set(v___x_2234_, 1, v_service_x3f_2223_);
lean_ctor_set(v___x_2234_, 2, v_remoteScope_x3f_2224_);
v___x_2235_ = l_Lake_CacheOutput_toJson(v___x_2234_);
v___x_2236_ = lean_unsigned_to_nat(80u);
v___x_2237_ = l_Lean_Json_pretty(v___x_2235_, v___x_2236_);
v___x_2238_ = l_IO_FS_writeFile(v_file_2232_, v___x_2237_);
lean_dec_ref(v___x_2237_);
lean_dec_ref(v_file_2232_);
return v___x_2238_;
}
else
{
lean_dec_ref(v_file_2232_);
lean_dec(v_remoteScope_x3f_2224_);
lean_dec(v_service_x3f_2223_);
lean_dec(v_out_2222_);
return v___x_2233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore___boxed(lean_object* v_cache_2239_, lean_object* v_scope_2240_, lean_object* v_inputHash_2241_, lean_object* v_out_2242_, lean_object* v_service_x3f_2243_, lean_object* v_remoteScope_x3f_2244_, lean_object* v_a_2245_){
_start:
{
uint64_t v_inputHash_boxed_2246_; lean_object* v_res_2247_; 
v_inputHash_boxed_2246_ = lean_unbox_uint64(v_inputHash_2241_);
lean_dec_ref(v_inputHash_2241_);
v_res_2247_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2239_, v_scope_2240_, v_inputHash_boxed_2246_, v_out_2242_, v_service_x3f_2243_, v_remoteScope_x3f_2244_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg(lean_object* v_inst_2248_, lean_object* v_cache_2249_, lean_object* v_scope_2250_, uint64_t v_inputHash_2251_, lean_object* v_outputs_2252_){
_start:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2254_ = lean_apply_1(v_inst_2248_, v_outputs_2252_);
v___x_2255_ = lean_box(0);
v___x_2256_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2249_, v_scope_2250_, v_inputHash_2251_, v___x_2254_, v___x_2255_, v___x_2255_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg___boxed(lean_object* v_inst_2257_, lean_object* v_cache_2258_, lean_object* v_scope_2259_, lean_object* v_inputHash_2260_, lean_object* v_outputs_2261_, lean_object* v_a_2262_){
_start:
{
uint64_t v_inputHash_boxed_2263_; lean_object* v_res_2264_; 
v_inputHash_boxed_2263_ = lean_unbox_uint64(v_inputHash_2260_);
lean_dec_ref(v_inputHash_2260_);
v_res_2264_ = l_Lake_Cache_writeOutputs___redArg(v_inst_2257_, v_cache_2258_, v_scope_2259_, v_inputHash_boxed_2263_, v_outputs_2261_);
return v_res_2264_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs(lean_object* v_00_u03b1_2265_, lean_object* v_inst_2266_, lean_object* v_cache_2267_, lean_object* v_scope_2268_, uint64_t v_inputHash_2269_, lean_object* v_outputs_2270_){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2272_ = lean_apply_1(v_inst_2266_, v_outputs_2270_);
v___x_2273_ = lean_box(0);
v___x_2274_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2267_, v_scope_2268_, v_inputHash_2269_, v___x_2272_, v___x_2273_, v___x_2273_);
return v___x_2274_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___boxed(lean_object* v_00_u03b1_2275_, lean_object* v_inst_2276_, lean_object* v_cache_2277_, lean_object* v_scope_2278_, lean_object* v_inputHash_2279_, lean_object* v_outputs_2280_, lean_object* v_a_2281_){
_start:
{
uint64_t v_inputHash_boxed_2282_; lean_object* v_res_2283_; 
v_inputHash_boxed_2282_ = lean_unbox_uint64(v_inputHash_2279_);
lean_dec_ref(v_inputHash_2279_);
v_res_2283_ = l_Lake_Cache_writeOutputs(v_00_u03b1_2275_, v_inst_2276_, v_cache_2277_, v_scope_2278_, v_inputHash_boxed_2282_, v_outputs_2280_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(lean_object* v_cache_2284_, lean_object* v_scope_2285_, lean_object* v_service_x3f_2286_, lean_object* v_remoteScope_x3f_2287_, lean_object* v_x_2288_, lean_object* v_x_2289_){
_start:
{
if (lean_obj_tag(v_x_2289_) == 0)
{
lean_object* v___x_2291_; 
lean_dec(v_remoteScope_x3f_2287_);
lean_dec(v_service_x3f_2286_);
lean_dec_ref(v_scope_2285_);
lean_dec_ref(v_cache_2284_);
v___x_2291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2291_, 0, v_x_2288_);
return v___x_2291_;
}
else
{
lean_object* v_value_2292_; lean_object* v_key_2293_; lean_object* v_tail_2294_; lean_object* v_out_2295_; uint64_t v___x_2296_; lean_object* v___x_2297_; 
v_value_2292_ = lean_ctor_get(v_x_2289_, 1);
lean_inc(v_value_2292_);
v_key_2293_ = lean_ctor_get(v_x_2289_, 0);
lean_inc(v_key_2293_);
v_tail_2294_ = lean_ctor_get(v_x_2289_, 2);
lean_inc(v_tail_2294_);
lean_dec_ref(v_x_2289_);
v_out_2295_ = lean_ctor_get(v_value_2292_, 0);
lean_inc(v_out_2295_);
lean_dec(v_value_2292_);
v___x_2296_ = lean_unbox_uint64(v_key_2293_);
lean_dec(v_key_2293_);
lean_inc(v_remoteScope_x3f_2287_);
lean_inc(v_service_x3f_2286_);
lean_inc_ref(v_scope_2285_);
lean_inc_ref(v_cache_2284_);
v___x_2297_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2284_, v_scope_2285_, v___x_2296_, v_out_2295_, v_service_x3f_2286_, v_remoteScope_x3f_2287_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_object* v_a_2298_; 
v_a_2298_ = lean_ctor_get(v___x_2297_, 0);
lean_inc(v_a_2298_);
lean_dec_ref(v___x_2297_);
v_x_2288_ = v_a_2298_;
v_x_2289_ = v_tail_2294_;
goto _start;
}
else
{
lean_dec(v_tail_2294_);
lean_dec(v_remoteScope_x3f_2287_);
lean_dec(v_service_x3f_2286_);
lean_dec_ref(v_scope_2285_);
lean_dec_ref(v_cache_2284_);
return v___x_2297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0___boxed(lean_object* v_cache_2300_, lean_object* v_scope_2301_, lean_object* v_service_x3f_2302_, lean_object* v_remoteScope_x3f_2303_, lean_object* v_x_2304_, lean_object* v_x_2305_, lean_object* v___y_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(v_cache_2300_, v_scope_2301_, v_service_x3f_2302_, v_remoteScope_x3f_2303_, v_x_2304_, v_x_2305_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(lean_object* v_cache_2308_, lean_object* v_scope_2309_, lean_object* v_service_x3f_2310_, lean_object* v_remoteScope_x3f_2311_, lean_object* v_as_2312_, size_t v_i_2313_, size_t v_stop_2314_, lean_object* v_b_2315_){
_start:
{
uint8_t v___x_2317_; 
v___x_2317_ = lean_usize_dec_eq(v_i_2313_, v_stop_2314_);
if (v___x_2317_ == 0)
{
lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2318_ = lean_array_uget_borrowed(v_as_2312_, v_i_2313_);
v___x_2319_ = lean_box(0);
lean_inc(v___x_2318_);
lean_inc(v_remoteScope_x3f_2311_);
lean_inc(v_service_x3f_2310_);
lean_inc_ref(v_scope_2309_);
lean_inc_ref(v_cache_2308_);
v___x_2320_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(v_cache_2308_, v_scope_2309_, v_service_x3f_2310_, v_remoteScope_x3f_2311_, v___x_2319_, v___x_2318_);
if (lean_obj_tag(v___x_2320_) == 0)
{
lean_object* v_a_2321_; size_t v___x_2322_; size_t v___x_2323_; 
v_a_2321_ = lean_ctor_get(v___x_2320_, 0);
lean_inc(v_a_2321_);
lean_dec_ref(v___x_2320_);
v___x_2322_ = ((size_t)1ULL);
v___x_2323_ = lean_usize_add(v_i_2313_, v___x_2322_);
v_i_2313_ = v___x_2323_;
v_b_2315_ = v_a_2321_;
goto _start;
}
else
{
lean_dec(v_remoteScope_x3f_2311_);
lean_dec(v_service_x3f_2310_);
lean_dec_ref(v_scope_2309_);
lean_dec_ref(v_cache_2308_);
return v___x_2320_;
}
}
else
{
lean_object* v___x_2325_; 
lean_dec(v_remoteScope_x3f_2311_);
lean_dec(v_service_x3f_2310_);
lean_dec_ref(v_scope_2309_);
lean_dec_ref(v_cache_2308_);
v___x_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2325_, 0, v_b_2315_);
return v___x_2325_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1___boxed(lean_object* v_cache_2326_, lean_object* v_scope_2327_, lean_object* v_service_x3f_2328_, lean_object* v_remoteScope_x3f_2329_, lean_object* v_as_2330_, lean_object* v_i_2331_, lean_object* v_stop_2332_, lean_object* v_b_2333_, lean_object* v___y_2334_){
_start:
{
size_t v_i_boxed_2335_; size_t v_stop_boxed_2336_; lean_object* v_res_2337_; 
v_i_boxed_2335_ = lean_unbox_usize(v_i_2331_);
lean_dec(v_i_2331_);
v_stop_boxed_2336_ = lean_unbox_usize(v_stop_2332_);
lean_dec(v_stop_2332_);
v_res_2337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2326_, v_scope_2327_, v_service_x3f_2328_, v_remoteScope_x3f_2329_, v_as_2330_, v_i_boxed_2335_, v_stop_boxed_2336_, v_b_2333_);
lean_dec_ref(v_as_2330_);
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap(lean_object* v_cache_2338_, lean_object* v_scope_2339_, lean_object* v_map_2340_, lean_object* v_service_x3f_2341_, lean_object* v_remoteScope_x3f_2342_){
_start:
{
lean_object* v_buckets_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; uint8_t v___x_2348_; 
v_buckets_2344_ = lean_ctor_get(v_map_2340_, 1);
v___x_2345_ = lean_unsigned_to_nat(0u);
v___x_2346_ = lean_array_get_size(v_buckets_2344_);
v___x_2347_ = lean_box(0);
v___x_2348_ = lean_nat_dec_lt(v___x_2345_, v___x_2346_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2349_; 
lean_dec(v_remoteScope_x3f_2342_);
lean_dec(v_service_x3f_2341_);
lean_dec_ref(v_scope_2339_);
lean_dec_ref(v_cache_2338_);
v___x_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2347_);
return v___x_2349_;
}
else
{
uint8_t v___x_2350_; 
v___x_2350_ = lean_nat_dec_le(v___x_2346_, v___x_2346_);
if (v___x_2350_ == 0)
{
if (v___x_2348_ == 0)
{
lean_object* v___x_2351_; 
lean_dec(v_remoteScope_x3f_2342_);
lean_dec(v_service_x3f_2341_);
lean_dec_ref(v_scope_2339_);
lean_dec_ref(v_cache_2338_);
v___x_2351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2347_);
return v___x_2351_;
}
else
{
size_t v___x_2352_; size_t v___x_2353_; lean_object* v___x_2354_; 
v___x_2352_ = ((size_t)0ULL);
v___x_2353_ = lean_usize_of_nat(v___x_2346_);
v___x_2354_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2338_, v_scope_2339_, v_service_x3f_2341_, v_remoteScope_x3f_2342_, v_buckets_2344_, v___x_2352_, v___x_2353_, v___x_2347_);
return v___x_2354_;
}
}
else
{
size_t v___x_2355_; size_t v___x_2356_; lean_object* v___x_2357_; 
v___x_2355_ = ((size_t)0ULL);
v___x_2356_ = lean_usize_of_nat(v___x_2346_);
v___x_2357_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2338_, v_scope_2339_, v_service_x3f_2341_, v_remoteScope_x3f_2342_, v_buckets_2344_, v___x_2355_, v___x_2356_, v___x_2347_);
return v___x_2357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap___boxed(lean_object* v_cache_2358_, lean_object* v_scope_2359_, lean_object* v_map_2360_, lean_object* v_service_x3f_2361_, lean_object* v_remoteScope_x3f_2362_, lean_object* v_a_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Lake_Cache_writeMap(v_cache_2358_, v_scope_2359_, v_map_2360_, v_service_x3f_2361_, v_remoteScope_x3f_2362_);
lean_dec_ref(v_map_2360_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lake_Cache_readOutputs_x3f_spec__0(lean_object* v_x_2367_){
_start:
{
if (lean_obj_tag(v_x_2367_) == 0)
{
lean_object* v___x_2368_; 
v___x_2368_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lake_Cache_readOutputs_x3f_spec__0___closed__0));
return v___x_2368_;
}
else
{
lean_object* v___x_2369_; 
v___x_2369_ = l_Lake_CacheOutput_fromJson_x3f(v_x_2367_);
if (lean_obj_tag(v___x_2369_) == 0)
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
v_a_2370_ = lean_ctor_get(v___x_2369_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2369_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___x_2369_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2369_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2386_; 
v_a_2378_ = lean_ctor_get(v___x_2369_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2369_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2380_ = v___x_2369_;
v_isShared_2381_ = v_isSharedCheck_2386_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2369_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2386_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2382_; lean_object* v___x_2384_; 
v___x_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2382_, 0, v_a_2378_);
if (v_isShared_2381_ == 0)
{
lean_ctor_set(v___x_2380_, 0, v___x_2382_);
v___x_2384_ = v___x_2380_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v___x_2382_);
v___x_2384_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
return v___x_2384_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f(lean_object* v_cache_2389_, lean_object* v_scope_2390_, uint64_t v_inputHash_2391_, lean_object* v_a_2392_){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v_path_2400_; lean_object* v___x_2401_; 
v___x_2394_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2395_ = l_System_FilePath_join(v_cache_2389_, v___x_2394_);
v___x_2396_ = l_System_FilePath_join(v___x_2395_, v_scope_2390_);
v___x_2397_ = l_Lake_Hash_hex(v_inputHash_2391_);
v___x_2398_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2399_ = lean_string_append(v___x_2397_, v___x_2398_);
v_path_2400_ = l_System_FilePath_join(v___x_2396_, v___x_2399_);
v___x_2401_ = l_IO_FS_readFile(v_path_2400_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; lean_object* v_a_2404_; lean_object* v___x_2413_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2402_);
lean_dec_ref(v___x_2401_);
v___x_2413_ = l_Lean_Json_parse(v_a_2402_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2414_);
lean_dec_ref(v___x_2413_);
v_a_2404_ = v_a_2414_;
goto v___jp_2403_;
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2416_; 
v_a_2415_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2415_);
lean_dec_ref(v___x_2413_);
v___x_2416_ = l_Option_fromJson_x3f___at___00Lake_Cache_readOutputs_x3f_spec__0(v_a_2415_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v_a_2417_; 
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
lean_inc(v_a_2417_);
lean_dec_ref(v___x_2416_);
v_a_2404_ = v_a_2417_;
goto v___jp_2403_;
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2419_; 
lean_dec_ref(v_path_2400_);
v_a_2418_ = lean_ctor_get(v___x_2416_, 0);
lean_inc(v_a_2418_);
lean_dec_ref(v___x_2416_);
v___x_2419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2419_, 0, v_a_2418_);
lean_ctor_set(v___x_2419_, 1, v_a_2392_);
return v___x_2419_;
}
}
v___jp_2403_:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; uint8_t v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2405_ = ((lean_object*)(l_Lake_Cache_readOutputs_x3f___closed__0));
v___x_2406_ = lean_string_append(v_path_2400_, v___x_2405_);
v___x_2407_ = lean_string_append(v___x_2406_, v_a_2404_);
lean_dec_ref(v_a_2404_);
v___x_2408_ = 2;
v___x_2409_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2409_, 0, v___x_2407_);
lean_ctor_set_uint8(v___x_2409_, sizeof(void*)*1, v___x_2408_);
v___x_2410_ = lean_array_push(v_a_2392_, v___x_2409_);
v___x_2411_ = lean_box(0);
v___x_2412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2412_, 0, v___x_2411_);
lean_ctor_set(v___x_2412_, 1, v___x_2410_);
return v___x_2412_;
}
}
else
{
lean_object* v_a_2420_; 
v_a_2420_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2420_);
lean_dec_ref(v___x_2401_);
if (lean_obj_tag(v_a_2420_) == 11)
{
lean_object* v___x_2421_; lean_object* v___x_2422_; 
lean_dec_ref(v_a_2420_);
lean_dec_ref(v_path_2400_);
v___x_2421_ = lean_box(0);
v___x_2422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2421_);
lean_ctor_set(v___x_2422_, 1, v_a_2392_);
return v___x_2422_;
}
else
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; uint8_t v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2423_ = ((lean_object*)(l_Lake_Cache_readOutputs_x3f___closed__1));
v___x_2424_ = lean_string_append(v_path_2400_, v___x_2423_);
v___x_2425_ = lean_io_error_to_string(v_a_2420_);
v___x_2426_ = lean_string_append(v___x_2424_, v___x_2425_);
lean_dec_ref(v___x_2425_);
v___x_2427_ = 3;
v___x_2428_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2428_, 0, v___x_2426_);
lean_ctor_set_uint8(v___x_2428_, sizeof(void*)*1, v___x_2427_);
v___x_2429_ = lean_array_get_size(v_a_2392_);
v___x_2430_ = lean_array_push(v_a_2392_, v___x_2428_);
v___x_2431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2429_);
lean_ctor_set(v___x_2431_, 1, v___x_2430_);
return v___x_2431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f___boxed(lean_object* v_cache_2432_, lean_object* v_scope_2433_, lean_object* v_inputHash_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_){
_start:
{
uint64_t v_inputHash_boxed_2437_; lean_object* v_res_2438_; 
v_inputHash_boxed_2437_ = lean_unbox_uint64(v_inputHash_2434_);
lean_dec_ref(v_inputHash_2434_);
v_res_2438_ = l_Lake_Cache_readOutputs_x3f(v_cache_2432_, v_scope_2433_, v_inputHash_boxed_2437_, v_a_2435_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_revisionDir(lean_object* v_cache_2440_){
_start:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2441_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_2442_ = l_System_FilePath_join(v_cache_2440_, v___x_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_revisionPath(lean_object* v_cache_2444_, lean_object* v_scope_2445_, lean_object* v_rev_2446_){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2447_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_2448_ = l_System_FilePath_join(v_cache_2444_, v___x_2447_);
v___x_2449_ = l_System_FilePath_join(v___x_2448_, v_scope_2445_);
v___x_2450_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_2451_ = lean_string_append(v_rev_2446_, v___x_2450_);
v___x_2452_ = l_System_FilePath_join(v___x_2449_, v___x_2451_);
return v___x_2452_;
}
}
LEAN_EXPORT uint8_t l_Lake_CachePlatform_isNone(lean_object* v_self_2455_){
_start:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; uint8_t v___x_2458_; 
v___x_2456_ = lean_string_utf8_byte_size(v_self_2455_);
v___x_2457_ = lean_unsigned_to_nat(0u);
v___x_2458_ = lean_nat_dec_eq(v___x_2456_, v___x_2457_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_isNone___boxed(lean_object* v_self_2459_){
_start:
{
uint8_t v_res_2460_; lean_object* v_r_2461_; 
v_res_2460_ = l_Lake_CachePlatform_isNone(v_self_2459_);
lean_dec_ref(v_self_2459_);
v_r_2461_ = lean_box(v_res_2460_);
return v_r_2461_;
}
}
static lean_object* _init_l_Lake_CachePlatform_system(void){
_start:
{
lean_object* v___x_2462_; 
v___x_2462_ = l_System_Platform_target;
return v___x_2462_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString(lean_object* v_s_2463_){
_start:
{
lean_inc_ref(v_s_2463_);
return v_s_2463_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString___boxed(lean_object* v_s_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = l_Lake_CachePlatform_ofString(v_s_2464_);
lean_dec_ref(v_s_2464_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length(lean_object* v_self_2466_){
_start:
{
lean_object* v___x_2467_; 
v___x_2467_ = lean_string_length(v_self_2466_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length___boxed(lean_object* v_self_2468_){
_start:
{
lean_object* v_res_2469_; 
v_res_2469_ = l_Lake_CachePlatform_length(v_self_2468_);
lean_dec_ref(v_self_2468_);
return v_res_2469_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString(lean_object* v_self_2471_){
_start:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; uint8_t v___x_2474_; 
v___x_2472_ = lean_string_utf8_byte_size(v_self_2471_);
v___x_2473_ = lean_unsigned_to_nat(0u);
v___x_2474_ = lean_nat_dec_eq(v___x_2472_, v___x_2473_);
if (v___x_2474_ == 0)
{
lean_inc_ref(v_self_2471_);
return v_self_2471_;
}
else
{
lean_object* v___x_2475_; 
v___x_2475_ = ((lean_object*)(l_Lake_CachePlatform_toString___closed__0));
return v___x_2475_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString___boxed(lean_object* v_self_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l_Lake_CachePlatform_toString(v_self_2476_);
lean_dec_ref(v_self_2476_);
return v_res_2477_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheToolchain_isNone(lean_object* v_self_2481_){
_start:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; uint8_t v___x_2484_; 
v___x_2482_ = lean_string_utf8_byte_size(v_self_2481_);
v___x_2483_ = lean_unsigned_to_nat(0u);
v___x_2484_ = lean_nat_dec_eq(v___x_2482_, v___x_2483_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_isNone___boxed(lean_object* v_self_2485_){
_start:
{
uint8_t v_res_2486_; lean_object* v_r_2487_; 
v_res_2486_ = l_Lake_CacheToolchain_isNone(v_self_2485_);
lean_dec_ref(v_self_2485_);
v_r_2487_ = lean_box(v_res_2486_);
return v_r_2487_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofString(lean_object* v_s_2488_){
_start:
{
lean_object* v___x_2489_; 
v___x_2489_ = l_Lake_normalizeToolchain(v_s_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain(lean_object* v_s_2490_){
_start:
{
lean_inc_ref(v_s_2490_);
return v_s_2490_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain___boxed(lean_object* v_s_2491_){
_start:
{
lean_object* v_res_2492_; 
v_res_2492_ = l_Lake_CacheToolchain_ofElanToolchain(v_s_2491_);
lean_dec_ref(v_s_2491_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length(lean_object* v_self_2493_){
_start:
{
lean_object* v___x_2494_; 
v___x_2494_ = lean_string_length(v_self_2493_);
return v___x_2494_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length___boxed(lean_object* v_self_2495_){
_start:
{
lean_object* v_res_2496_; 
v_res_2496_ = l_Lake_CacheToolchain_length(v_self_2495_);
lean_dec_ref(v_self_2495_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString(lean_object* v_self_2497_){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; uint8_t v___x_2500_; 
v___x_2498_ = lean_string_utf8_byte_size(v_self_2497_);
v___x_2499_ = lean_unsigned_to_nat(0u);
v___x_2500_ = lean_nat_dec_eq(v___x_2498_, v___x_2499_);
if (v___x_2500_ == 0)
{
lean_inc_ref(v_self_2497_);
return v_self_2497_;
}
else
{
lean_object* v___x_2501_; 
v___x_2501_ = ((lean_object*)(l_Lake_CachePlatform_toString___closed__0));
return v___x_2501_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString___boxed(lean_object* v_self_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l_Lake_CacheToolchain_toString(v_self_2502_);
lean_dec_ref(v_self_2502_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore(uint64_t v_hash_2509_, lean_object* v_url_2510_, lean_object* v_path_2511_, lean_object* v_a_2512_){
_start:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; 
v___x_2514_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
lean_inc_ref(v_path_2511_);
v___x_2515_ = l_Lake_download(v_url_2510_, v_path_2511_, v___x_2514_, v_a_2512_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2558_; 
v_a_2516_ = lean_ctor_get(v___x_2515_, 1);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2558_ == 0)
{
lean_object* v_unused_2559_; 
v_unused_2559_ = lean_ctor_get(v___x_2515_, 0);
lean_dec(v_unused_2559_);
v___x_2518_ = v___x_2515_;
v_isShared_2519_ = v_isSharedCheck_2558_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v___x_2515_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2558_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2520_; 
v___x_2520_ = l_Lake_computeBinFileHash(v_path_2511_);
if (lean_obj_tag(v___x_2520_) == 0)
{
lean_object* v_a_2521_; uint64_t v___x_2522_; uint8_t v___x_2523_; 
v_a_2521_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_a_2521_);
lean_dec_ref(v___x_2520_);
v___x_2522_ = lean_unbox_uint64(v_a_2521_);
v___x_2523_ = lean_uint64_dec_eq(v___x_2522_, v_hash_2509_);
if (v___x_2523_ == 0)
{
lean_object* v___x_2524_; lean_object* v___x_2525_; uint64_t v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; uint8_t v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2524_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__1));
lean_inc_ref(v_path_2511_);
v___x_2525_ = lean_string_append(v_path_2511_, v___x_2524_);
v___x_2526_ = lean_unbox_uint64(v_a_2521_);
lean_dec(v_a_2521_);
v___x_2527_ = l_Lake_Hash_hex(v___x_2526_);
v___x_2528_ = lean_string_append(v___x_2525_, v___x_2527_);
lean_dec_ref(v___x_2527_);
v___x_2529_ = 3;
v___x_2530_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2530_, 0, v___x_2528_);
lean_ctor_set_uint8(v___x_2530_, sizeof(void*)*1, v___x_2529_);
lean_inc(v_a_2516_);
v___x_2531_ = lean_array_push(v_a_2516_, v___x_2530_);
v___x_2532_ = lean_io_remove_file(v_path_2511_);
lean_dec_ref(v_path_2511_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v___x_2533_; lean_object* v___x_2535_; 
lean_dec_ref(v___x_2532_);
v___x_2533_ = lean_array_get_size(v_a_2516_);
lean_dec(v_a_2516_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set_tag(v___x_2518_, 1);
lean_ctor_set(v___x_2518_, 1, v___x_2531_);
lean_ctor_set(v___x_2518_, 0, v___x_2533_);
v___x_2535_ = v___x_2518_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v___x_2533_);
lean_ctor_set(v_reuseFailAlloc_2536_, 1, v___x_2531_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
else
{
lean_object* v_a_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2543_; 
lean_dec(v_a_2516_);
v_a_2537_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2537_);
lean_dec_ref(v___x_2532_);
v___x_2538_ = lean_io_error_to_string(v_a_2537_);
v___x_2539_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2539_, 0, v___x_2538_);
lean_ctor_set_uint8(v___x_2539_, sizeof(void*)*1, v___x_2529_);
v___x_2540_ = lean_array_get_size(v___x_2531_);
v___x_2541_ = lean_array_push(v___x_2531_, v___x_2539_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set_tag(v___x_2518_, 1);
lean_ctor_set(v___x_2518_, 1, v___x_2541_);
lean_ctor_set(v___x_2518_, 0, v___x_2540_);
v___x_2543_ = v___x_2518_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v___x_2540_);
lean_ctor_set(v_reuseFailAlloc_2544_, 1, v___x_2541_);
v___x_2543_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
return v___x_2543_;
}
}
}
else
{
lean_object* v___x_2545_; lean_object* v___x_2547_; 
lean_dec(v_a_2521_);
lean_dec_ref(v_path_2511_);
v___x_2545_ = lean_box(0);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 0, v___x_2545_);
v___x_2547_ = v___x_2518_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v___x_2545_);
lean_ctor_set(v_reuseFailAlloc_2548_, 1, v_a_2516_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
else
{
lean_object* v_a_2549_; lean_object* v___x_2550_; uint8_t v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2556_; 
lean_dec_ref(v_path_2511_);
v_a_2549_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_a_2549_);
lean_dec_ref(v___x_2520_);
v___x_2550_ = lean_io_error_to_string(v_a_2549_);
v___x_2551_ = 3;
v___x_2552_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2552_, 0, v___x_2550_);
lean_ctor_set_uint8(v___x_2552_, sizeof(void*)*1, v___x_2551_);
v___x_2553_ = lean_array_get_size(v_a_2516_);
v___x_2554_ = lean_array_push(v_a_2516_, v___x_2552_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set_tag(v___x_2518_, 1);
lean_ctor_set(v___x_2518_, 1, v___x_2554_);
lean_ctor_set(v___x_2518_, 0, v___x_2553_);
v___x_2556_ = v___x_2518_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v___x_2553_);
lean_ctor_set(v_reuseFailAlloc_2557_, 1, v___x_2554_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
}
else
{
lean_dec_ref(v_path_2511_);
return v___x_2515_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore___boxed(lean_object* v_hash_2560_, lean_object* v_url_2561_, lean_object* v_path_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_){
_start:
{
uint64_t v_hash_boxed_2565_; lean_object* v_res_2566_; 
v_hash_boxed_2565_ = lean_unbox_uint64(v_hash_2560_);
lean_dec_ref(v_hash_2560_);
v_res_2566_ = l_Lake_downloadArtifactCore(v_hash_boxed_2565_, v_url_2561_, v_path_2562_, v_a_2563_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(lean_object* v_x_2569_){
_start:
{
if (lean_obj_tag(v_x_2569_) == 0)
{
lean_object* v___x_2570_; 
v___x_2570_ = ((lean_object*)(l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0___closed__0));
return v___x_2570_;
}
else
{
lean_object* v___x_2571_; 
v___x_2571_ = l_Lean_Json_getNat_x3f(v_x_2569_);
if (lean_obj_tag(v___x_2571_) == 0)
{
lean_object* v_a_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
v_a_2572_ = lean_ctor_get(v___x_2571_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2574_ = v___x_2571_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_a_2572_);
lean_dec(v___x_2571_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2572_);
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
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2588_; 
v_a_2580_ = lean_ctor_get(v___x_2571_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2582_ = v___x_2571_;
v_isShared_2583_ = v_isSharedCheck_2588_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___x_2571_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2588_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2584_; lean_object* v___x_2586_; 
v___x_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2584_, 0, v_a_2580_);
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 0, v___x_2584_);
v___x_2586_ = v___x_2582_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v___x_2584_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21(void){
_start:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2611_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_2612_ = lean_unsigned_to_nat(14u);
v___x_2613_ = lean_mk_empty_array_with_capacity(v___x_2612_);
v___x_2614_ = lean_array_push(v___x_2613_, v___x_2611_);
return v___x_2614_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22(void){
_start:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2615_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_2616_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21);
v___x_2617_ = lean_array_push(v___x_2616_, v___x_2615_);
return v___x_2617_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23(void){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2618_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_2619_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22);
v___x_2620_ = lean_array_push(v___x_2619_, v___x_2618_);
return v___x_2620_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24(void){
_start:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2621_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13));
v___x_2622_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23);
v___x_2623_ = lean_array_push(v___x_2622_, v___x_2621_);
return v___x_2623_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25(void){
_start:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2624_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14));
v___x_2625_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24);
v___x_2626_ = lean_array_push(v___x_2625_, v___x_2624_);
return v___x_2626_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26(void){
_start:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2627_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15));
v___x_2628_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25);
v___x_2629_ = lean_array_push(v___x_2628_, v___x_2627_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3(lean_object* v_file_2633_, lean_object* v_contentType_2634_, lean_object* v_url_2635_, lean_object* v_key_2636_, lean_object* v_a_2637_){
_start:
{
lean_object* v___y_2640_; lean_object* v_a_2641_; lean_object* v_stderr_2654_; lean_object* v___y_2663_; lean_object* v___y_2666_; lean_object* v_a_2667_; lean_object* v___y_2694_; lean_object* v___y_2695_; lean_object* v_stderr_2706_; lean_object* v_a_2707_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; uint8_t v___x_2741_; uint8_t v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2721_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8));
v___x_2722_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_2723_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_2724_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_2725_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18));
v___x_2726_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_2727_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20));
v___x_2728_ = lean_string_append(v___x_2727_, v_contentType_2634_);
v___x_2729_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26);
v___x_2730_ = lean_array_push(v___x_2729_, v_key_2636_);
v___x_2731_ = lean_array_push(v___x_2730_, v___x_2723_);
v___x_2732_ = lean_array_push(v___x_2731_, v___x_2724_);
v___x_2733_ = lean_array_push(v___x_2732_, v___x_2725_);
v___x_2734_ = lean_array_push(v___x_2733_, v_file_2633_);
v___x_2735_ = lean_array_push(v___x_2734_, v_url_2635_);
v___x_2736_ = lean_array_push(v___x_2735_, v___x_2726_);
v___x_2737_ = lean_array_push(v___x_2736_, v___x_2728_);
v___x_2738_ = lean_box(0);
v___x_2739_ = lean_unsigned_to_nat(0u);
v___x_2740_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_2741_ = 1;
v___x_2742_ = 0;
v___x_2743_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_2743_, 0, v___x_2721_);
lean_ctor_set(v___x_2743_, 1, v___x_2722_);
lean_ctor_set(v___x_2743_, 2, v___x_2737_);
lean_ctor_set(v___x_2743_, 3, v___x_2738_);
lean_ctor_set(v___x_2743_, 4, v___x_2740_);
lean_ctor_set_uint8(v___x_2743_, sizeof(void*)*5, v___x_2741_);
lean_ctor_set_uint8(v___x_2743_, sizeof(void*)*5 + 1, v___x_2742_);
v___x_2744_ = l_Lake_captureProc_x27(v___x_2743_, v___x_2740_);
if (lean_obj_tag(v___x_2744_) == 0)
{
lean_object* v_a_2745_; lean_object* v_a_2746_; lean_object* v___x_2760_; uint8_t v___x_2761_; 
v_a_2745_ = lean_ctor_get(v___x_2744_, 0);
lean_inc(v_a_2745_);
v_a_2746_ = lean_ctor_get(v___x_2744_, 1);
lean_inc(v_a_2746_);
lean_dec_ref(v___x_2744_);
v___x_2760_ = lean_array_get_size(v_a_2746_);
v___x_2761_ = lean_nat_dec_lt(v___x_2739_, v___x_2760_);
if (v___x_2761_ == 0)
{
lean_dec(v_a_2746_);
goto v___jp_2747_;
}
else
{
lean_object* v___x_2762_; uint8_t v___x_2763_; 
v___x_2762_ = lean_box(0);
v___x_2763_ = lean_nat_dec_le(v___x_2760_, v___x_2760_);
if (v___x_2763_ == 0)
{
if (v___x_2761_ == 0)
{
lean_dec(v_a_2746_);
goto v___jp_2747_;
}
else
{
size_t v___x_2764_; size_t v___x_2765_; lean_object* v___x_2766_; 
v___x_2764_ = ((size_t)0ULL);
v___x_2765_ = lean_usize_of_nat(v___x_2760_);
v___x_2766_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2746_, v___x_2764_, v___x_2765_, v___x_2762_, v_a_2637_);
lean_dec(v_a_2746_);
if (lean_obj_tag(v___x_2766_) == 0)
{
lean_dec_ref(v___x_2766_);
goto v___jp_2747_;
}
else
{
lean_dec(v_a_2745_);
return v___x_2766_;
}
}
}
else
{
size_t v___x_2767_; size_t v___x_2768_; lean_object* v___x_2769_; 
v___x_2767_ = ((size_t)0ULL);
v___x_2768_ = lean_usize_of_nat(v___x_2760_);
v___x_2769_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2746_, v___x_2767_, v___x_2768_, v___x_2762_, v_a_2637_);
lean_dec(v_a_2746_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_dec_ref(v___x_2769_);
goto v___jp_2747_;
}
else
{
lean_dec(v_a_2745_);
return v___x_2769_;
}
}
}
v___jp_2747_:
{
lean_object* v_stderr_2748_; lean_object* v___x_2749_; 
v_stderr_2748_ = lean_ctor_get(v_a_2745_, 1);
lean_inc_ref(v_stderr_2748_);
v___x_2749_ = l_Lean_Json_parse(v_stderr_2748_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; 
lean_inc_ref(v_stderr_2748_);
lean_dec(v_a_2745_);
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
lean_inc(v_a_2750_);
lean_dec_ref(v___x_2749_);
v_stderr_2706_ = v_stderr_2748_;
v_a_2707_ = v_a_2750_;
goto v___jp_2705_;
}
else
{
lean_object* v_a_2751_; lean_object* v___x_2752_; 
v_a_2751_ = lean_ctor_get(v___x_2749_, 0);
lean_inc(v_a_2751_);
lean_dec_ref(v___x_2749_);
v___x_2752_ = l_Lean_Json_getObj_x3f(v_a_2751_);
if (lean_obj_tag(v___x_2752_) == 0)
{
lean_object* v_a_2753_; 
lean_inc_ref(v_stderr_2748_);
lean_dec(v_a_2745_);
v_a_2753_ = lean_ctor_get(v___x_2752_, 0);
lean_inc(v_a_2753_);
lean_dec_ref(v___x_2752_);
v_stderr_2706_ = v_stderr_2748_;
v_a_2707_ = v_a_2753_;
goto v___jp_2705_;
}
else
{
lean_object* v_a_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v_a_2754_ = lean_ctor_get(v___x_2752_, 0);
lean_inc(v_a_2754_);
lean_dec_ref(v___x_2752_);
v___x_2755_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28));
v___x_2756_ = l_Lake_JsonObject_getJson_x3f(v_a_2754_, v___x_2755_);
if (lean_obj_tag(v___x_2756_) == 0)
{
lean_inc_ref(v_stderr_2748_);
lean_dec(v_a_2754_);
lean_dec(v_a_2745_);
v_stderr_2654_ = v_stderr_2748_;
goto v___jp_2653_;
}
else
{
lean_object* v_val_2757_; lean_object* v___x_2758_; 
v_val_2757_ = lean_ctor_get(v___x_2756_, 0);
lean_inc(v_val_2757_);
lean_dec_ref(v___x_2756_);
v___x_2758_ = l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_2757_);
if (lean_obj_tag(v___x_2758_) == 0)
{
lean_dec_ref(v___x_2758_);
v___y_2694_ = v_a_2745_;
v___y_2695_ = v_a_2754_;
goto v___jp_2693_;
}
else
{
if (lean_obj_tag(v___x_2758_) == 0)
{
lean_dec_ref(v___x_2758_);
v___y_2694_ = v_a_2745_;
v___y_2695_ = v_a_2754_;
goto v___jp_2693_;
}
else
{
lean_object* v_a_2759_; 
lean_dec(v_a_2754_);
v_a_2759_ = lean_ctor_get(v___x_2758_, 0);
lean_inc(v_a_2759_);
lean_dec_ref(v___x_2758_);
v___y_2666_ = v_a_2745_;
v_a_2667_ = v_a_2759_;
goto v___jp_2665_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2770_; lean_object* v___x_2771_; uint8_t v___x_2772_; 
v_a_2770_ = lean_ctor_get(v___x_2744_, 1);
lean_inc(v_a_2770_);
lean_dec_ref(v___x_2744_);
v___x_2771_ = lean_array_get_size(v_a_2770_);
v___x_2772_ = lean_nat_dec_lt(v___x_2739_, v___x_2771_);
if (v___x_2772_ == 0)
{
lean_object* v___x_2773_; lean_object* v___x_2774_; 
lean_dec(v_a_2770_);
v___x_2773_ = lean_box(0);
v___x_2774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2773_);
return v___x_2774_;
}
else
{
lean_object* v___x_2775_; uint8_t v___x_2776_; 
v___x_2775_ = lean_box(0);
v___x_2776_ = lean_nat_dec_le(v___x_2771_, v___x_2771_);
if (v___x_2776_ == 0)
{
if (v___x_2772_ == 0)
{
lean_dec(v_a_2770_);
goto v___jp_2718_;
}
else
{
size_t v___x_2777_; size_t v___x_2778_; lean_object* v___x_2779_; 
v___x_2777_ = ((size_t)0ULL);
v___x_2778_ = lean_usize_of_nat(v___x_2771_);
v___x_2779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2770_, v___x_2777_, v___x_2778_, v___x_2775_, v_a_2637_);
lean_dec(v_a_2770_);
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_dec_ref(v___x_2779_);
goto v___jp_2718_;
}
else
{
return v___x_2779_;
}
}
}
else
{
size_t v___x_2780_; size_t v___x_2781_; lean_object* v___x_2782_; 
v___x_2780_ = ((size_t)0ULL);
v___x_2781_ = lean_usize_of_nat(v___x_2771_);
v___x_2782_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2770_, v___x_2780_, v___x_2781_, v___x_2775_, v_a_2637_);
lean_dec(v_a_2770_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_dec_ref(v___x_2782_);
goto v___jp_2718_;
}
else
{
return v___x_2782_;
}
}
}
}
v___jp_2639_:
{
lean_object* v_stderr_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; uint8_t v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v_stderr_2642_ = lean_ctor_get(v___y_2640_, 1);
lean_inc_ref(v_stderr_2642_);
lean_dec_ref(v___y_2640_);
v___x_2643_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0));
v___x_2644_ = lean_string_append(v___x_2643_, v_a_2641_);
lean_dec_ref(v_a_2641_);
v___x_2645_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_2646_ = lean_string_append(v___x_2644_, v___x_2645_);
v___x_2647_ = lean_string_append(v___x_2646_, v_stderr_2642_);
lean_dec_ref(v_stderr_2642_);
v___x_2648_ = 3;
v___x_2649_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2649_, 0, v___x_2647_);
lean_ctor_set_uint8(v___x_2649_, sizeof(void*)*1, v___x_2648_);
lean_inc_ref(v_a_2637_);
v___x_2650_ = lean_apply_2(v_a_2637_, v___x_2649_, lean_box(0));
v___x_2651_ = lean_box(0);
v___x_2652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2651_);
return v___x_2652_;
}
v___jp_2653_:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2655_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2));
v___x_2656_ = lean_string_append(v___x_2655_, v_stderr_2654_);
lean_dec_ref(v_stderr_2654_);
v___x_2657_ = 3;
v___x_2658_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2658_, 0, v___x_2656_);
lean_ctor_set_uint8(v___x_2658_, sizeof(void*)*1, v___x_2657_);
lean_inc_ref(v_a_2637_);
v___x_2659_ = lean_apply_2(v_a_2637_, v___x_2658_, lean_box(0));
v___x_2660_ = lean_box(0);
v___x_2661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2660_);
return v___x_2661_;
}
v___jp_2662_:
{
lean_object* v_stderr_2664_; 
v_stderr_2664_ = lean_ctor_get(v___y_2663_, 1);
lean_inc_ref(v_stderr_2664_);
lean_dec_ref(v___y_2663_);
v_stderr_2654_ = v_stderr_2664_;
goto v___jp_2653_;
}
v___jp_2665_:
{
if (lean_obj_tag(v_a_2667_) == 0)
{
v___y_2663_ = v___y_2666_;
goto v___jp_2662_;
}
else
{
lean_object* v_val_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2692_; 
v_val_2668_ = lean_ctor_get(v_a_2667_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v_a_2667_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2670_ = v_a_2667_;
v_isShared_2671_ = v_isSharedCheck_2692_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_val_2668_);
lean_dec(v_a_2667_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2692_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2672_; uint8_t v___x_2673_; 
v___x_2672_ = lean_unsigned_to_nat(200u);
v___x_2673_ = lean_nat_dec_eq(v_val_2668_, v___x_2672_);
if (v___x_2673_ == 0)
{
lean_object* v_stdout_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2686_; 
v_stdout_2674_ = lean_ctor_get(v___y_2666_, 0);
lean_inc_ref(v_stdout_2674_);
lean_dec_ref(v___y_2666_);
v___x_2675_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3));
v___x_2676_ = l_Nat_reprFast(v_val_2668_);
v___x_2677_ = lean_string_append(v___x_2675_, v___x_2676_);
lean_dec_ref(v___x_2676_);
v___x_2678_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_2679_ = lean_string_append(v___x_2677_, v___x_2678_);
v___x_2680_ = lean_string_append(v___x_2679_, v_stdout_2674_);
lean_dec_ref(v_stdout_2674_);
v___x_2681_ = 3;
v___x_2682_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2682_, 0, v___x_2680_);
lean_ctor_set_uint8(v___x_2682_, sizeof(void*)*1, v___x_2681_);
lean_inc_ref(v_a_2637_);
v___x_2683_ = lean_apply_2(v_a_2637_, v___x_2682_, lean_box(0));
v___x_2684_ = lean_box(0);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 0, v___x_2684_);
v___x_2686_ = v___x_2670_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2684_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
else
{
lean_object* v___x_2688_; lean_object* v___x_2690_; 
lean_dec(v_val_2668_);
lean_dec_ref(v___y_2666_);
v___x_2688_ = lean_box(0);
if (v_isShared_2671_ == 0)
{
lean_ctor_set_tag(v___x_2670_, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2688_);
v___x_2690_ = v___x_2670_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
}
}
v___jp_2693_:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2696_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_2697_ = l_Lake_JsonObject_getJson_x3f(v___y_2695_, v___x_2696_);
lean_dec(v___y_2695_);
if (lean_obj_tag(v___x_2697_) == 0)
{
v___y_2663_ = v___y_2694_;
goto v___jp_2662_;
}
else
{
lean_object* v_val_2698_; lean_object* v___x_2699_; 
v_val_2698_ = lean_ctor_get(v___x_2697_, 0);
lean_inc(v_val_2698_);
lean_dec_ref(v___x_2697_);
v___x_2699_ = l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_2698_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2700_);
lean_dec_ref(v___x_2699_);
v___x_2701_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_2702_ = lean_string_append(v___x_2701_, v_a_2700_);
lean_dec(v_a_2700_);
v___y_2640_ = v___y_2694_;
v_a_2641_ = v___x_2702_;
goto v___jp_2639_;
}
else
{
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2703_; 
v_a_2703_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2703_);
lean_dec_ref(v___x_2699_);
v___y_2640_ = v___y_2694_;
v_a_2641_ = v_a_2703_;
goto v___jp_2639_;
}
else
{
lean_object* v_a_2704_; 
v_a_2704_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2704_);
lean_dec_ref(v___x_2699_);
v___y_2666_ = v___y_2694_;
v_a_2667_ = v_a_2704_;
goto v___jp_2665_;
}
}
}
}
v___jp_2705_:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; uint8_t v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; 
v___x_2708_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_2709_ = lean_string_append(v___x_2708_, v_a_2707_);
lean_dec_ref(v_a_2707_);
v___x_2710_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_2711_ = lean_string_append(v___x_2709_, v___x_2710_);
v___x_2712_ = lean_string_append(v___x_2711_, v_stderr_2706_);
lean_dec_ref(v_stderr_2706_);
v___x_2713_ = 3;
v___x_2714_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2714_, 0, v___x_2712_);
lean_ctor_set_uint8(v___x_2714_, sizeof(void*)*1, v___x_2713_);
lean_inc_ref(v_a_2637_);
v___x_2715_ = lean_apply_2(v_a_2637_, v___x_2714_, lean_box(0));
v___x_2716_ = lean_box(0);
v___x_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2716_);
return v___x_2717_;
}
v___jp_2718_:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2719_ = lean_box(0);
v___x_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
return v___x_2720_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___boxed(lean_object* v_file_2783_, lean_object* v_contentType_2784_, lean_object* v_url_2785_, lean_object* v_key_2786_, lean_object* v_a_2787_, lean_object* v_a_2788_){
_start:
{
lean_object* v_res_2789_; 
v_res_2789_ = l___private_Lake_Config_Cache_0__Lake_uploadS3(v_file_2783_, v_contentType_2784_, v_url_2785_, v_key_2786_, v_a_2787_);
lean_dec_ref(v_a_2787_);
lean_dec_ref(v_contentType_2784_);
return v_res_2789_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f(lean_object* v_service_2790_){
_start:
{
lean_object* v_name_x3f_2791_; 
v_name_x3f_2791_ = lean_ctor_get(v_service_2790_, 0);
lean_inc(v_name_x3f_2791_);
return v_name_x3f_2791_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f___boxed(lean_object* v_service_2792_){
_start:
{
lean_object* v_res_2793_; 
v_res_2793_ = l_Lake_CacheService_name_x3f(v_service_2792_);
lean_dec_ref(v_service_2792_);
return v_res_2793_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheService_isReservoir(lean_object* v_service_2794_){
_start:
{
uint8_t v_isReservoir_2795_; 
v_isReservoir_2795_ = lean_ctor_get_uint8(v_service_2794_, sizeof(void*)*5);
return v_isReservoir_2795_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_isReservoir___boxed(lean_object* v_service_2796_){
_start:
{
uint8_t v_res_2797_; lean_object* v_r_2798_; 
v_res_2797_ = l_Lake_CacheService_isReservoir(v_service_2796_);
lean_dec_ref(v_service_2796_);
v_r_2798_ = lean_box(v_res_2797_);
return v_r_2798_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_reservoirService(lean_object* v_apiEndpoint_2799_, lean_object* v_name_x3f_2800_){
_start:
{
lean_object* v___x_2801_; uint8_t v___x_2802_; lean_object* v___x_2803_; 
v___x_2801_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_2802_ = 1;
v___x_2803_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2803_, 0, v_name_x3f_2800_);
lean_ctor_set(v___x_2803_, 1, v___x_2801_);
lean_ctor_set(v___x_2803_, 2, v___x_2801_);
lean_ctor_set(v___x_2803_, 3, v___x_2801_);
lean_ctor_set(v___x_2803_, 4, v_apiEndpoint_2799_);
lean_ctor_set_uint8(v___x_2803_, sizeof(void*)*5, v___x_2802_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadService(lean_object* v_key_2804_, lean_object* v_artifactEndpoint_2805_, lean_object* v_revisionEndpoint_2806_){
_start:
{
lean_object* v___x_2807_; uint8_t v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; 
v___x_2807_ = lean_box(0);
v___x_2808_ = 0;
v___x_2809_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_2810_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2810_, 0, v___x_2807_);
lean_ctor_set(v___x_2810_, 1, v_key_2804_);
lean_ctor_set(v___x_2810_, 2, v_artifactEndpoint_2805_);
lean_ctor_set(v___x_2810_, 3, v_revisionEndpoint_2806_);
lean_ctor_set(v___x_2810_, 4, v___x_2809_);
lean_ctor_set_uint8(v___x_2810_, sizeof(void*)*5, v___x_2808_);
return v___x_2810_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadService(lean_object* v_artifactEndpoint_2811_, lean_object* v_revisionEndpoint_2812_, lean_object* v_name_x3f_2813_){
_start:
{
lean_object* v___x_2814_; uint8_t v___x_2815_; lean_object* v___x_2816_; 
v___x_2814_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_2815_ = 0;
v___x_2816_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2816_, 0, v_name_x3f_2813_);
lean_ctor_set(v___x_2816_, 1, v___x_2814_);
lean_ctor_set(v___x_2816_, 2, v_artifactEndpoint_2811_);
lean_ctor_set(v___x_2816_, 3, v_revisionEndpoint_2812_);
lean_ctor_set(v___x_2816_, 4, v___x_2814_);
lean_ctor_set_uint8(v___x_2816_, sizeof(void*)*5, v___x_2815_);
return v___x_2816_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtsService(lean_object* v_artifactEndpoint_2817_, lean_object* v_name_x3f_2818_){
_start:
{
lean_object* v___x_2819_; uint8_t v___x_2820_; lean_object* v___x_2821_; 
v___x_2819_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_2820_ = 0;
v___x_2821_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2821_, 0, v_name_x3f_2818_);
lean_ctor_set(v___x_2821_, 1, v___x_2819_);
lean_ctor_set(v___x_2821_, 2, v_artifactEndpoint_2817_);
lean_ctor_set(v___x_2821_, 3, v___x_2819_);
lean_ctor_set(v___x_2821_, 4, v___x_2819_);
lean_ctor_set_uint8(v___x_2821_, sizeof(void*)*5, v___x_2820_);
return v___x_2821_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_withKey(lean_object* v_service_2822_, lean_object* v_key_2823_){
_start:
{
lean_object* v_name_x3f_2824_; lean_object* v_artifactEndpoint_2825_; lean_object* v_revisionEndpoint_2826_; uint8_t v_isReservoir_2827_; lean_object* v_apiEndpoint_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
v_name_x3f_2824_ = lean_ctor_get(v_service_2822_, 0);
v_artifactEndpoint_2825_ = lean_ctor_get(v_service_2822_, 2);
v_revisionEndpoint_2826_ = lean_ctor_get(v_service_2822_, 3);
v_isReservoir_2827_ = lean_ctor_get_uint8(v_service_2822_, sizeof(void*)*5);
v_apiEndpoint_2828_ = lean_ctor_get(v_service_2822_, 4);
v_isSharedCheck_2835_ = !lean_is_exclusive(v_service_2822_);
if (v_isSharedCheck_2835_ == 0)
{
lean_object* v_unused_2836_; 
v_unused_2836_ = lean_ctor_get(v_service_2822_, 1);
lean_dec(v_unused_2836_);
v___x_2830_ = v_service_2822_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_apiEndpoint_2828_);
lean_inc(v_revisionEndpoint_2826_);
lean_inc(v_artifactEndpoint_2825_);
lean_inc(v_name_x3f_2824_);
lean_dec(v_service_2822_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
lean_ctor_set(v___x_2830_, 1, v_key_2823_);
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_name_x3f_2824_);
lean_ctor_set(v_reuseFailAlloc_2834_, 1, v_key_2823_);
lean_ctor_set(v_reuseFailAlloc_2834_, 2, v_artifactEndpoint_2825_);
lean_ctor_set(v_reuseFailAlloc_2834_, 3, v_revisionEndpoint_2826_);
lean_ctor_set(v_reuseFailAlloc_2834_, 4, v_apiEndpoint_2828_);
lean_ctor_set_uint8(v_reuseFailAlloc_2834_, sizeof(void*)*5, v_isReservoir_2827_);
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
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(lean_object* v_s_2841_){
_start:
{
lean_object* v___x_2842_; 
v___x_2842_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0));
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___boxed(lean_object* v_s_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(v_s_2843_);
lean_dec_ref(v_s_2843_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(lean_object* v_scope_2845_, lean_object* v___x_2846_, lean_object* v___x_2847_, lean_object* v_a_2848_, lean_object* v_b_2849_){
_start:
{
if (lean_obj_tag(v_a_2848_) == 0)
{
lean_object* v_currPos_2850_; lean_object* v_searcher_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2885_; 
v_currPos_2850_ = lean_ctor_get(v_a_2848_, 0);
v_searcher_2851_ = lean_ctor_get(v_a_2848_, 1);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_a_2848_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2853_ = v_a_2848_;
v_isShared_2854_ = v_isSharedCheck_2885_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_searcher_2851_);
lean_inc(v_currPos_2850_);
lean_dec(v_a_2848_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2885_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v_startInclusive_2855_; lean_object* v_endExclusive_2856_; uint32_t v___x_2857_; lean_object* v_it_2859_; lean_object* v_startInclusive_2860_; lean_object* v_endExclusive_2861_; lean_object* v___x_2866_; uint8_t v___x_2867_; 
v_startInclusive_2855_ = lean_ctor_get(v___x_2846_, 1);
v_endExclusive_2856_ = lean_ctor_get(v___x_2846_, 2);
v___x_2857_ = 47;
v___x_2866_ = lean_nat_sub(v_endExclusive_2856_, v_startInclusive_2855_);
v___x_2867_ = lean_nat_dec_eq(v_searcher_2851_, v___x_2866_);
lean_dec(v___x_2866_);
if (v___x_2867_ == 0)
{
uint32_t v___x_2868_; uint8_t v___x_2869_; 
v___x_2868_ = lean_string_utf8_get_fast(v_scope_2845_, v_searcher_2851_);
v___x_2869_ = lean_uint32_dec_eq(v___x_2868_, v___x_2857_);
if (v___x_2869_ == 0)
{
lean_object* v___x_2870_; lean_object* v___x_2872_; 
v___x_2870_ = lean_string_utf8_next_fast(v_scope_2845_, v_searcher_2851_);
lean_dec(v_searcher_2851_);
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 1, v___x_2870_);
v___x_2872_ = v___x_2853_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_currPos_2850_);
lean_ctor_set(v_reuseFailAlloc_2874_, 1, v___x_2870_);
v___x_2872_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
v_a_2848_ = v___x_2872_;
goto _start;
}
}
else
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v_slice_2878_; lean_object* v_nextIt_2880_; 
v___x_2875_ = lean_string_utf8_next_fast(v_scope_2845_, v_searcher_2851_);
v___x_2876_ = lean_nat_sub(v___x_2875_, v_searcher_2851_);
v___x_2877_ = lean_nat_add(v_searcher_2851_, v___x_2876_);
lean_dec(v___x_2876_);
v_slice_2878_ = l_String_Slice_subslice_x21(v___x_2846_, v_currPos_2850_, v_searcher_2851_);
lean_inc(v___x_2877_);
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 1, v___x_2877_);
lean_ctor_set(v___x_2853_, 0, v___x_2877_);
v_nextIt_2880_ = v___x_2853_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v___x_2877_);
lean_ctor_set(v_reuseFailAlloc_2883_, 1, v___x_2877_);
v_nextIt_2880_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
lean_object* v_startInclusive_2881_; lean_object* v_endExclusive_2882_; 
v_startInclusive_2881_ = lean_ctor_get(v_slice_2878_, 0);
lean_inc(v_startInclusive_2881_);
v_endExclusive_2882_ = lean_ctor_get(v_slice_2878_, 1);
lean_inc(v_endExclusive_2882_);
lean_dec_ref(v_slice_2878_);
v_it_2859_ = v_nextIt_2880_;
v_startInclusive_2860_ = v_startInclusive_2881_;
v_endExclusive_2861_ = v_endExclusive_2882_;
goto v___jp_2858_;
}
}
}
else
{
lean_object* v___x_2884_; 
lean_del_object(v___x_2853_);
lean_dec(v_searcher_2851_);
v___x_2884_ = lean_box(1);
lean_inc(v___x_2847_);
v_it_2859_ = v___x_2884_;
v_startInclusive_2860_ = v_currPos_2850_;
v_endExclusive_2861_ = v___x_2847_;
goto v___jp_2858_;
}
v___jp_2858_:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2862_ = lean_string_utf8_extract(v_scope_2845_, v_startInclusive_2860_, v_endExclusive_2861_);
lean_dec(v_endExclusive_2861_);
lean_dec(v_startInclusive_2860_);
v___x_2863_ = lean_string_push(v_b_2849_, v___x_2857_);
v___x_2864_ = l_Lake_uriEncode(v___x_2862_, v___x_2863_);
v_a_2848_ = v_it_2859_;
v_b_2849_ = v___x_2864_;
goto _start;
}
}
}
else
{
lean_dec(v___x_2847_);
return v_b_2849_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg___boxed(lean_object* v_scope_2886_, lean_object* v___x_2887_, lean_object* v___x_2888_, lean_object* v_a_2889_, lean_object* v_b_2890_){
_start:
{
lean_object* v_res_2891_; 
v_res_2891_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2886_, v___x_2887_, v___x_2888_, v_a_2889_, v_b_2890_);
lean_dec_ref(v___x_2887_);
lean_dec_ref(v_scope_2886_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(lean_object* v_endpoint_2892_, lean_object* v_scope_2893_){
_start:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
v___x_2894_ = lean_unsigned_to_nat(0u);
v___x_2895_ = lean_string_utf8_byte_size(v_scope_2893_);
lean_inc_ref(v_scope_2893_);
v___x_2896_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2896_, 0, v_scope_2893_);
lean_ctor_set(v___x_2896_, 1, v___x_2894_);
lean_ctor_set(v___x_2896_, 2, v___x_2895_);
v___x_2897_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(v___x_2896_);
v___x_2898_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2893_, v___x_2896_, v___x_2895_, v___x_2897_, v_endpoint_2892_);
lean_dec_ref(v___x_2896_);
lean_dec_ref(v_scope_2893_);
return v___x_2898_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(lean_object* v_scope_2899_, lean_object* v___x_2900_, lean_object* v___x_2901_, lean_object* v_inst_2902_, lean_object* v_R_2903_, lean_object* v_a_2904_, lean_object* v_b_2905_, lean_object* v_c_2906_){
_start:
{
lean_object* v___x_2907_; 
v___x_2907_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2899_, v___x_2900_, v___x_2901_, v_a_2904_, v_b_2905_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___boxed(lean_object* v_scope_2908_, lean_object* v___x_2909_, lean_object* v___x_2910_, lean_object* v_inst_2911_, lean_object* v_R_2912_, lean_object* v_a_2913_, lean_object* v_b_2914_, lean_object* v_c_2915_){
_start:
{
lean_object* v_res_2916_; 
v_res_2916_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(v_scope_2908_, v___x_2909_, v___x_2910_, v_inst_2911_, v_R_2912_, v_a_2913_, v_b_2914_, v_c_2915_);
lean_dec_ref(v___x_2909_);
lean_dec_ref(v_scope_2908_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(lean_object* v_service_2917_, lean_object* v_scope_2918_){
_start:
{
lean_object* v_artifactEndpoint_2919_; lean_object* v___x_2920_; 
v_artifactEndpoint_2919_ = lean_ctor_get(v_service_2917_, 2);
lean_inc_ref(v_artifactEndpoint_2919_);
lean_dec_ref(v_service_2917_);
v___x_2920_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_artifactEndpoint_2919_, v_scope_2918_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(uint64_t v_contentHash_2923_, lean_object* v_service_2924_, lean_object* v_scope_2925_){
_start:
{
lean_object* v___y_2927_; lean_object* v_s_2934_; lean_object* v___x_2935_; 
v_s_2934_ = lean_ctor_get(v_scope_2925_, 0);
lean_inc_ref(v_s_2934_);
lean_dec_ref(v_scope_2925_);
v___x_2935_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(v_service_2924_, v_s_2934_);
v___y_2927_ = v___x_2935_;
goto v___jp_2926_;
v___jp_2926_:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2928_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_2929_ = lean_string_append(v___y_2927_, v___x_2928_);
v___x_2930_ = l_Lake_Hash_hex(v_contentHash_2923_);
v___x_2931_ = lean_string_append(v___x_2929_, v___x_2930_);
lean_dec_ref(v___x_2930_);
v___x_2932_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1));
v___x_2933_ = lean_string_append(v___x_2931_, v___x_2932_);
return v___x_2933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___boxed(lean_object* v_contentHash_2936_, lean_object* v_service_2937_, lean_object* v_scope_2938_){
_start:
{
uint64_t v_contentHash_boxed_2939_; lean_object* v_res_2940_; 
v_contentHash_boxed_2939_ = lean_unbox_uint64(v_contentHash_2936_);
lean_dec_ref(v_contentHash_2936_);
v_res_2940_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_boxed_2939_, v_service_2937_, v_scope_2938_);
return v_res_2940_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl(uint64_t v_contentHash_2944_, lean_object* v_service_2945_, lean_object* v_scope_2946_){
_start:
{
lean_object* v___y_2948_; uint8_t v_isReservoir_2955_; 
v_isReservoir_2955_ = lean_ctor_get_uint8(v_service_2945_, sizeof(void*)*5);
if (v_isReservoir_2955_ == 0)
{
lean_object* v___x_2956_; 
v___x_2956_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_2944_, v_service_2945_, v_scope_2946_);
return v___x_2956_;
}
else
{
if (lean_obj_tag(v_scope_2946_) == 0)
{
lean_object* v_apiEndpoint_2957_; lean_object* v_s_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v_apiEndpoint_2957_ = lean_ctor_get(v_service_2945_, 4);
lean_inc_ref(v_apiEndpoint_2957_);
lean_dec_ref(v_service_2945_);
v_s_2958_ = lean_ctor_get(v_scope_2946_, 0);
lean_inc_ref(v_s_2958_);
lean_dec_ref(v_scope_2946_);
v___x_2959_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_2960_ = lean_string_append(v_apiEndpoint_2957_, v___x_2959_);
v___x_2961_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_2960_, v_s_2958_);
v___y_2948_ = v___x_2961_;
goto v___jp_2947_;
}
else
{
lean_object* v_apiEndpoint_2962_; lean_object* v_s_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v_apiEndpoint_2962_ = lean_ctor_get(v_service_2945_, 4);
lean_inc_ref(v_apiEndpoint_2962_);
lean_dec_ref(v_service_2945_);
v_s_2963_ = lean_ctor_get(v_scope_2946_, 0);
lean_inc_ref(v_s_2963_);
lean_dec_ref(v_scope_2946_);
v___x_2964_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_2965_ = lean_string_append(v_apiEndpoint_2962_, v___x_2964_);
v___x_2966_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_2965_, v_s_2963_);
v___y_2948_ = v___x_2966_;
goto v___jp_2947_;
}
}
v___jp_2947_:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2949_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__0));
v___x_2950_ = lean_string_append(v___y_2948_, v___x_2949_);
v___x_2951_ = l_Lake_Hash_hex(v_contentHash_2944_);
v___x_2952_ = lean_string_append(v___x_2950_, v___x_2951_);
lean_dec_ref(v___x_2951_);
v___x_2953_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1));
v___x_2954_ = lean_string_append(v___x_2952_, v___x_2953_);
return v___x_2954_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl___boxed(lean_object* v_contentHash_2967_, lean_object* v_service_2968_, lean_object* v_scope_2969_){
_start:
{
uint64_t v_contentHash_boxed_2970_; lean_object* v_res_2971_; 
v_contentHash_boxed_2970_ = lean_unbox_uint64(v_contentHash_2967_);
lean_dec_ref(v_contentHash_2967_);
v_res_2971_ = l_Lake_CacheService_artifactUrl(v_contentHash_boxed_2970_, v_service_2968_, v_scope_2969_);
return v_res_2971_;
}
}
static lean_object* _init_l_Lake_CacheService_downloadArtifact___closed__3(void){
_start:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2975_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_2976_ = lean_array_get_size(v___x_2975_);
return v___x_2976_;
}
}
static uint8_t _init_l_Lake_CacheService_downloadArtifact___closed__4(void){
_start:
{
lean_object* v___x_2977_; lean_object* v___x_2978_; uint8_t v___x_2979_; 
v___x_2977_ = lean_obj_once(&l_Lake_CacheService_downloadArtifact___closed__3, &l_Lake_CacheService_downloadArtifact___closed__3_once, _init_l_Lake_CacheService_downloadArtifact___closed__3);
v___x_2978_ = lean_unsigned_to_nat(0u);
v___x_2979_ = lean_nat_dec_lt(v___x_2978_, v___x_2977_);
return v___x_2979_;
}
}
static uint8_t _init_l_Lake_CacheService_downloadArtifact___closed__5(void){
_start:
{
lean_object* v___x_2980_; uint8_t v___x_2981_; 
v___x_2980_ = lean_obj_once(&l_Lake_CacheService_downloadArtifact___closed__3, &l_Lake_CacheService_downloadArtifact___closed__3_once, _init_l_Lake_CacheService_downloadArtifact___closed__3);
v___x_2981_ = lean_nat_dec_le(v___x_2980_, v___x_2980_);
return v___x_2981_;
}
}
static size_t _init_l_Lake_CacheService_downloadArtifact___closed__6(void){
_start:
{
lean_object* v___x_2982_; size_t v___x_2983_; 
v___x_2982_ = lean_obj_once(&l_Lake_CacheService_downloadArtifact___closed__3, &l_Lake_CacheService_downloadArtifact___closed__3_once, _init_l_Lake_CacheService_downloadArtifact___closed__3);
v___x_2983_ = lean_usize_of_nat(v___x_2982_);
return v___x_2983_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact(lean_object* v_descr_2984_, lean_object* v_cache_2985_, lean_object* v_service_2986_, lean_object* v_scope_2987_, uint8_t v_force_2988_, lean_object* v_a_2989_){
_start:
{
uint64_t v_hash_2994_; lean_object* v_ext_2995_; lean_object* v_url_2996_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v___y_3060_; lean_object* v___y_3063_; uint8_t v_a_3064_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___y_3070_; lean_object* v___x_3083_; lean_object* v___x_3084_; uint8_t v___x_3085_; 
v_hash_2994_ = lean_ctor_get_uint64(v_descr_2984_, sizeof(void*)*1);
v_ext_2995_ = lean_ctor_get(v_descr_2984_, 0);
lean_inc_ref(v_scope_2987_);
v_url_2996_ = l_Lake_CacheService_artifactUrl(v_hash_2994_, v_service_2986_, v_scope_2987_);
v___x_3067_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_3068_ = l_System_FilePath_join(v_cache_2985_, v___x_3067_);
v___x_3083_ = lean_string_utf8_byte_size(v_ext_2995_);
v___x_3084_ = lean_unsigned_to_nat(0u);
v___x_3085_ = lean_nat_dec_eq(v___x_3083_, v___x_3084_);
if (v___x_3085_ == 0)
{
lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3086_ = l_Lake_Hash_hex(v_hash_2994_);
v___x_3087_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_3088_ = lean_string_append(v___x_3086_, v___x_3087_);
v___x_3089_ = lean_string_append(v___x_3088_, v_ext_2995_);
v___y_3070_ = v___x_3089_;
goto v___jp_3069_;
}
else
{
lean_object* v___x_3090_; 
v___x_3090_ = l_Lake_Hash_hex(v_hash_2994_);
v___y_3070_ = v___x_3090_;
goto v___jp_3069_;
}
v___jp_2991_:
{
lean_object* v___x_2992_; lean_object* v___x_2993_; 
v___x_2992_ = lean_box(0);
v___x_2993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2993_, 0, v___x_2992_);
return v___x_2993_;
}
v___jp_2997_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; uint8_t v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; 
v___x_3000_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__0));
v___x_3001_ = lean_string_append(v___y_2999_, v___x_3000_);
v___x_3002_ = l_Lake_Hash_hex(v_hash_2994_);
v___x_3003_ = lean_string_append(v___x_3001_, v___x_3002_);
lean_dec_ref(v___x_3002_);
v___x_3004_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3005_ = lean_string_append(v___x_3003_, v___x_3004_);
v___x_3006_ = lean_string_append(v___x_3005_, v___y_2998_);
v___x_3007_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3008_ = lean_string_append(v___x_3006_, v___x_3007_);
v___x_3009_ = lean_string_append(v___x_3008_, v_url_2996_);
v___x_3010_ = 1;
v___x_3011_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3011_, 0, v___x_3009_);
lean_ctor_set_uint8(v___x_3011_, sizeof(void*)*1, v___x_3010_);
lean_inc_ref(v_a_2989_);
v___x_3012_ = lean_apply_2(v_a_2989_, v___x_3011_, lean_box(0));
v___x_3013_ = lean_unsigned_to_nat(0u);
v___x_3014_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_3015_ = l_Lake_downloadArtifactCore(v_hash_2994_, v_url_2996_, v___y_2998_, v___x_3014_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v_a_3016_; lean_object* v_a_3017_; lean_object* v___x_3018_; uint8_t v___x_3019_; 
v_a_3016_ = lean_ctor_get(v___x_3015_, 0);
lean_inc(v_a_3016_);
v_a_3017_ = lean_ctor_get(v___x_3015_, 1);
lean_inc(v_a_3017_);
lean_dec_ref(v___x_3015_);
v___x_3018_ = lean_array_get_size(v_a_3017_);
v___x_3019_ = lean_nat_dec_lt(v___x_3013_, v___x_3018_);
if (v___x_3019_ == 0)
{
lean_object* v___x_3020_; 
lean_dec(v_a_3017_);
v___x_3020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3020_, 0, v_a_3016_);
return v___x_3020_;
}
else
{
lean_object* v___x_3021_; uint8_t v___x_3022_; 
v___x_3021_ = lean_box(0);
v___x_3022_ = lean_nat_dec_le(v___x_3018_, v___x_3018_);
if (v___x_3022_ == 0)
{
if (v___x_3019_ == 0)
{
lean_object* v___x_3023_; 
lean_dec(v_a_3017_);
v___x_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3023_, 0, v_a_3016_);
return v___x_3023_;
}
else
{
size_t v___x_3024_; size_t v___x_3025_; lean_object* v___x_3026_; 
v___x_3024_ = ((size_t)0ULL);
v___x_3025_ = lean_usize_of_nat(v___x_3018_);
v___x_3026_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3017_, v___x_3024_, v___x_3025_, v___x_3021_, v_a_2989_);
lean_dec(v_a_3017_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3033_; 
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_3026_);
if (v_isSharedCheck_3033_ == 0)
{
lean_object* v_unused_3034_; 
v_unused_3034_ = lean_ctor_get(v___x_3026_, 0);
lean_dec(v_unused_3034_);
v___x_3028_ = v___x_3026_;
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
else
{
lean_dec(v___x_3026_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3031_; 
if (v_isShared_3029_ == 0)
{
lean_ctor_set(v___x_3028_, 0, v_a_3016_);
v___x_3031_ = v___x_3028_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_a_3016_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
}
else
{
lean_dec(v_a_3016_);
return v___x_3026_;
}
}
}
else
{
size_t v___x_3035_; size_t v___x_3036_; lean_object* v___x_3037_; 
v___x_3035_ = ((size_t)0ULL);
v___x_3036_ = lean_usize_of_nat(v___x_3018_);
v___x_3037_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3017_, v___x_3035_, v___x_3036_, v___x_3021_, v_a_2989_);
lean_dec(v_a_3017_);
if (lean_obj_tag(v___x_3037_) == 0)
{
lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3044_; 
v_isSharedCheck_3044_ = !lean_is_exclusive(v___x_3037_);
if (v_isSharedCheck_3044_ == 0)
{
lean_object* v_unused_3045_; 
v_unused_3045_ = lean_ctor_get(v___x_3037_, 0);
lean_dec(v_unused_3045_);
v___x_3039_ = v___x_3037_;
v_isShared_3040_ = v_isSharedCheck_3044_;
goto v_resetjp_3038_;
}
else
{
lean_dec(v___x_3037_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3044_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
lean_object* v___x_3042_; 
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 0, v_a_3016_);
v___x_3042_ = v___x_3039_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v_a_3016_);
v___x_3042_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
return v___x_3042_;
}
}
}
else
{
lean_dec(v_a_3016_);
return v___x_3037_;
}
}
}
}
else
{
lean_object* v_a_3046_; lean_object* v___x_3047_; uint8_t v___x_3048_; 
v_a_3046_ = lean_ctor_get(v___x_3015_, 1);
lean_inc(v_a_3046_);
lean_dec_ref(v___x_3015_);
v___x_3047_ = lean_array_get_size(v_a_3046_);
v___x_3048_ = lean_nat_dec_lt(v___x_3013_, v___x_3047_);
if (v___x_3048_ == 0)
{
lean_object* v___x_3049_; lean_object* v___x_3050_; 
lean_dec(v_a_3046_);
v___x_3049_ = lean_box(0);
v___x_3050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3049_);
return v___x_3050_;
}
else
{
lean_object* v___x_3051_; uint8_t v___x_3052_; 
v___x_3051_ = lean_box(0);
v___x_3052_ = lean_nat_dec_le(v___x_3047_, v___x_3047_);
if (v___x_3052_ == 0)
{
if (v___x_3048_ == 0)
{
lean_dec(v_a_3046_);
goto v___jp_2991_;
}
else
{
size_t v___x_3053_; size_t v___x_3054_; lean_object* v___x_3055_; 
v___x_3053_ = ((size_t)0ULL);
v___x_3054_ = lean_usize_of_nat(v___x_3047_);
v___x_3055_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3046_, v___x_3053_, v___x_3054_, v___x_3051_, v_a_2989_);
lean_dec(v_a_3046_);
if (lean_obj_tag(v___x_3055_) == 0)
{
lean_dec_ref(v___x_3055_);
goto v___jp_2991_;
}
else
{
return v___x_3055_;
}
}
}
else
{
size_t v___x_3056_; size_t v___x_3057_; lean_object* v___x_3058_; 
v___x_3056_ = ((size_t)0ULL);
v___x_3057_ = lean_usize_of_nat(v___x_3047_);
v___x_3058_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3046_, v___x_3056_, v___x_3057_, v___x_3051_, v_a_2989_);
lean_dec(v_a_3046_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_dec_ref(v___x_3058_);
goto v___jp_2991_;
}
else
{
return v___x_3058_;
}
}
}
}
}
v___jp_3059_:
{
lean_object* v_s_3061_; 
v_s_3061_ = lean_ctor_get(v_scope_2987_, 0);
lean_inc_ref(v_s_3061_);
lean_dec_ref(v_scope_2987_);
v___y_2998_ = v___y_3060_;
v___y_2999_ = v_s_3061_;
goto v___jp_2997_;
}
v___jp_3062_:
{
if (v_a_3064_ == 0)
{
v___y_3060_ = v___y_3063_;
goto v___jp_3059_;
}
else
{
if (v_force_2988_ == 0)
{
lean_object* v___x_3065_; lean_object* v___x_3066_; 
lean_dec_ref(v___y_3063_);
lean_dec_ref(v_url_2996_);
lean_dec_ref(v_scope_2987_);
v___x_3065_ = lean_box(0);
v___x_3066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3065_);
return v___x_3066_;
}
else
{
v___y_3060_ = v___y_3063_;
goto v___jp_3059_;
}
}
}
v___jp_3069_:
{
lean_object* v_path_3071_; uint8_t v___x_3072_; lean_object* v___x_3073_; uint8_t v___x_3074_; 
v_path_3071_ = l_System_FilePath_join(v___x_3068_, v___y_3070_);
v___x_3072_ = l_System_FilePath_pathExists(v_path_3071_);
v___x_3073_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_3074_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__4, &l_Lake_CacheService_downloadArtifact___closed__4_once, _init_l_Lake_CacheService_downloadArtifact___closed__4);
if (v___x_3074_ == 0)
{
v___y_3063_ = v_path_3071_;
v_a_3064_ = v___x_3072_;
goto v___jp_3062_;
}
else
{
lean_object* v___x_3075_; uint8_t v___x_3076_; 
v___x_3075_ = lean_box(0);
v___x_3076_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__5, &l_Lake_CacheService_downloadArtifact___closed__5_once, _init_l_Lake_CacheService_downloadArtifact___closed__5);
if (v___x_3076_ == 0)
{
if (v___x_3074_ == 0)
{
v___y_3063_ = v_path_3071_;
v_a_3064_ = v___x_3072_;
goto v___jp_3062_;
}
else
{
size_t v___x_3077_; size_t v___x_3078_; lean_object* v___x_3079_; 
v___x_3077_ = ((size_t)0ULL);
v___x_3078_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
v___x_3079_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_3073_, v___x_3077_, v___x_3078_, v___x_3075_, v_a_2989_);
if (lean_obj_tag(v___x_3079_) == 0)
{
lean_dec_ref(v___x_3079_);
v___y_3063_ = v_path_3071_;
v_a_3064_ = v___x_3072_;
goto v___jp_3062_;
}
else
{
lean_dec_ref(v_path_3071_);
lean_dec_ref(v_url_2996_);
lean_dec_ref(v_scope_2987_);
return v___x_3079_;
}
}
}
else
{
size_t v___x_3080_; size_t v___x_3081_; lean_object* v___x_3082_; 
v___x_3080_ = ((size_t)0ULL);
v___x_3081_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
v___x_3082_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_3073_, v___x_3080_, v___x_3081_, v___x_3075_, v_a_2989_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_dec_ref(v___x_3082_);
v___y_3063_ = v_path_3071_;
v_a_3064_ = v___x_3072_;
goto v___jp_3062_;
}
else
{
lean_dec_ref(v_path_3071_);
lean_dec_ref(v_url_2996_);
lean_dec_ref(v_scope_2987_);
return v___x_3082_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact___boxed(lean_object* v_descr_3091_, lean_object* v_cache_3092_, lean_object* v_service_3093_, lean_object* v_scope_3094_, lean_object* v_force_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_){
_start:
{
uint8_t v_force_boxed_3098_; lean_object* v_res_3099_; 
v_force_boxed_3098_ = lean_unbox(v_force_3095_);
v_res_3099_ = l_Lake_CacheService_downloadArtifact(v_descr_3091_, v_cache_3092_, v_service_3093_, v_scope_3094_, v_force_boxed_3098_, v_a_3096_);
lean_dec_ref(v_a_3096_);
lean_dec_ref(v_descr_3091_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(lean_object* v_a_3100_, lean_object* v_file_3101_, lean_object* v_contentType_3102_, lean_object* v_url_3103_, lean_object* v_key_3104_){
_start:
{
lean_object* v___y_3107_; lean_object* v_a_3108_; lean_object* v_stderr_3121_; lean_object* v___y_3130_; lean_object* v___y_3133_; lean_object* v_a_3134_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v_stderr_3173_; lean_object* v_a_3174_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; uint8_t v___x_3210_; uint8_t v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3188_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8));
v___x_3189_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_3190_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_3191_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_3192_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18));
v___x_3193_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_3194_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20));
v___x_3195_ = lean_string_append(v___x_3194_, v_contentType_3102_);
v___x_3196_ = lean_unsigned_to_nat(14u);
v___x_3197_ = lean_mk_empty_array_with_capacity(v___x_3196_);
lean_dec_ref(v___x_3197_);
v___x_3198_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26);
v___x_3199_ = lean_array_push(v___x_3198_, v_key_3104_);
v___x_3200_ = lean_array_push(v___x_3199_, v___x_3190_);
v___x_3201_ = lean_array_push(v___x_3200_, v___x_3191_);
v___x_3202_ = lean_array_push(v___x_3201_, v___x_3192_);
v___x_3203_ = lean_array_push(v___x_3202_, v_file_3101_);
v___x_3204_ = lean_array_push(v___x_3203_, v_url_3103_);
v___x_3205_ = lean_array_push(v___x_3204_, v___x_3193_);
v___x_3206_ = lean_array_push(v___x_3205_, v___x_3195_);
v___x_3207_ = lean_box(0);
v___x_3208_ = lean_unsigned_to_nat(0u);
v___x_3209_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_3210_ = 1;
v___x_3211_ = 0;
v___x_3212_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_3212_, 0, v___x_3188_);
lean_ctor_set(v___x_3212_, 1, v___x_3189_);
lean_ctor_set(v___x_3212_, 2, v___x_3206_);
lean_ctor_set(v___x_3212_, 3, v___x_3207_);
lean_ctor_set(v___x_3212_, 4, v___x_3209_);
lean_ctor_set_uint8(v___x_3212_, sizeof(void*)*5, v___x_3210_);
lean_ctor_set_uint8(v___x_3212_, sizeof(void*)*5 + 1, v___x_3211_);
v___x_3213_ = l_Lake_captureProc_x27(v___x_3212_, v___x_3209_);
if (lean_obj_tag(v___x_3213_) == 0)
{
lean_object* v_a_3214_; lean_object* v_a_3215_; lean_object* v___x_3229_; uint8_t v___x_3230_; 
v_a_3214_ = lean_ctor_get(v___x_3213_, 0);
lean_inc(v_a_3214_);
v_a_3215_ = lean_ctor_get(v___x_3213_, 1);
lean_inc(v_a_3215_);
lean_dec_ref(v___x_3213_);
v___x_3229_ = lean_array_get_size(v_a_3215_);
v___x_3230_ = lean_nat_dec_lt(v___x_3208_, v___x_3229_);
if (v___x_3230_ == 0)
{
lean_dec(v_a_3215_);
goto v___jp_3216_;
}
else
{
lean_object* v___x_3231_; uint8_t v___x_3232_; 
v___x_3231_ = lean_box(0);
v___x_3232_ = lean_nat_dec_le(v___x_3229_, v___x_3229_);
if (v___x_3232_ == 0)
{
if (v___x_3230_ == 0)
{
lean_dec(v_a_3215_);
goto v___jp_3216_;
}
else
{
size_t v___x_3233_; size_t v___x_3234_; lean_object* v___x_3235_; 
v___x_3233_ = ((size_t)0ULL);
v___x_3234_ = lean_usize_of_nat(v___x_3229_);
v___x_3235_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3215_, v___x_3233_, v___x_3234_, v___x_3231_, v_a_3100_);
lean_dec(v_a_3215_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_dec_ref(v___x_3235_);
goto v___jp_3216_;
}
else
{
lean_dec(v_a_3214_);
return v___x_3235_;
}
}
}
else
{
size_t v___x_3236_; size_t v___x_3237_; lean_object* v___x_3238_; 
v___x_3236_ = ((size_t)0ULL);
v___x_3237_ = lean_usize_of_nat(v___x_3229_);
v___x_3238_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3215_, v___x_3236_, v___x_3237_, v___x_3231_, v_a_3100_);
lean_dec(v_a_3215_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_dec_ref(v___x_3238_);
goto v___jp_3216_;
}
else
{
lean_dec(v_a_3214_);
return v___x_3238_;
}
}
}
v___jp_3216_:
{
lean_object* v_stderr_3217_; lean_object* v___x_3218_; 
v_stderr_3217_ = lean_ctor_get(v_a_3214_, 1);
lean_inc_ref(v_stderr_3217_);
v___x_3218_ = l_Lean_Json_parse(v_stderr_3217_);
if (lean_obj_tag(v___x_3218_) == 0)
{
lean_object* v_a_3219_; 
lean_inc_ref(v_stderr_3217_);
lean_dec(v_a_3214_);
v_a_3219_ = lean_ctor_get(v___x_3218_, 0);
lean_inc(v_a_3219_);
lean_dec_ref(v___x_3218_);
v_stderr_3173_ = v_stderr_3217_;
v_a_3174_ = v_a_3219_;
goto v___jp_3172_;
}
else
{
lean_object* v_a_3220_; lean_object* v___x_3221_; 
v_a_3220_ = lean_ctor_get(v___x_3218_, 0);
lean_inc(v_a_3220_);
lean_dec_ref(v___x_3218_);
v___x_3221_ = l_Lean_Json_getObj_x3f(v_a_3220_);
if (lean_obj_tag(v___x_3221_) == 0)
{
lean_object* v_a_3222_; 
lean_inc_ref(v_stderr_3217_);
lean_dec(v_a_3214_);
v_a_3222_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3222_);
lean_dec_ref(v___x_3221_);
v_stderr_3173_ = v_stderr_3217_;
v_a_3174_ = v_a_3222_;
goto v___jp_3172_;
}
else
{
lean_object* v_a_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
v_a_3223_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3223_);
lean_dec_ref(v___x_3221_);
v___x_3224_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28));
v___x_3225_ = l_Lake_JsonObject_getJson_x3f(v_a_3223_, v___x_3224_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_inc_ref(v_stderr_3217_);
lean_dec(v_a_3223_);
lean_dec(v_a_3214_);
v_stderr_3121_ = v_stderr_3217_;
goto v___jp_3120_;
}
else
{
lean_object* v_val_3226_; lean_object* v___x_3227_; 
v_val_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_val_3226_);
lean_dec_ref(v___x_3225_);
v___x_3227_ = l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_3226_);
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_dec_ref(v___x_3227_);
v___y_3161_ = v_a_3223_;
v___y_3162_ = v_a_3214_;
goto v___jp_3160_;
}
else
{
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_dec_ref(v___x_3227_);
v___y_3161_ = v_a_3223_;
v___y_3162_ = v_a_3214_;
goto v___jp_3160_;
}
else
{
lean_object* v_a_3228_; 
lean_dec(v_a_3223_);
v_a_3228_ = lean_ctor_get(v___x_3227_, 0);
lean_inc(v_a_3228_);
lean_dec_ref(v___x_3227_);
v___y_3133_ = v_a_3214_;
v_a_3134_ = v_a_3228_;
goto v___jp_3132_;
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
v_a_3239_ = lean_ctor_get(v___x_3213_, 1);
lean_inc(v_a_3239_);
lean_dec_ref(v___x_3213_);
v___x_3240_ = lean_array_get_size(v_a_3239_);
v___x_3241_ = lean_nat_dec_lt(v___x_3208_, v___x_3240_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; lean_object* v___x_3243_; 
lean_dec(v_a_3239_);
v___x_3242_ = lean_box(0);
v___x_3243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3242_);
return v___x_3243_;
}
else
{
lean_object* v___x_3244_; uint8_t v___x_3245_; 
v___x_3244_ = lean_box(0);
v___x_3245_ = lean_nat_dec_le(v___x_3240_, v___x_3240_);
if (v___x_3245_ == 0)
{
if (v___x_3241_ == 0)
{
lean_dec(v_a_3239_);
goto v___jp_3185_;
}
else
{
size_t v___x_3246_; size_t v___x_3247_; lean_object* v___x_3248_; 
v___x_3246_ = ((size_t)0ULL);
v___x_3247_ = lean_usize_of_nat(v___x_3240_);
v___x_3248_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3239_, v___x_3246_, v___x_3247_, v___x_3244_, v_a_3100_);
lean_dec(v_a_3239_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_dec_ref(v___x_3248_);
goto v___jp_3185_;
}
else
{
return v___x_3248_;
}
}
}
else
{
size_t v___x_3249_; size_t v___x_3250_; lean_object* v___x_3251_; 
v___x_3249_ = ((size_t)0ULL);
v___x_3250_ = lean_usize_of_nat(v___x_3240_);
v___x_3251_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3239_, v___x_3249_, v___x_3250_, v___x_3244_, v_a_3100_);
lean_dec(v_a_3239_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_dec_ref(v___x_3251_);
goto v___jp_3185_;
}
else
{
return v___x_3251_;
}
}
}
}
v___jp_3106_:
{
lean_object* v_stderr_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; uint8_t v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v_stderr_3109_ = lean_ctor_get(v___y_3107_, 1);
lean_inc_ref(v_stderr_3109_);
lean_dec_ref(v___y_3107_);
v___x_3110_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0));
v___x_3111_ = lean_string_append(v___x_3110_, v_a_3108_);
lean_dec_ref(v_a_3108_);
v___x_3112_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_3113_ = lean_string_append(v___x_3111_, v___x_3112_);
v___x_3114_ = lean_string_append(v___x_3113_, v_stderr_3109_);
lean_dec_ref(v_stderr_3109_);
v___x_3115_ = 3;
v___x_3116_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3116_, 0, v___x_3114_);
lean_ctor_set_uint8(v___x_3116_, sizeof(void*)*1, v___x_3115_);
lean_inc_ref(v_a_3100_);
v___x_3117_ = lean_apply_2(v_a_3100_, v___x_3116_, lean_box(0));
v___x_3118_ = lean_box(0);
v___x_3119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
return v___x_3119_;
}
v___jp_3120_:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; uint8_t v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v___x_3122_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2));
v___x_3123_ = lean_string_append(v___x_3122_, v_stderr_3121_);
lean_dec_ref(v_stderr_3121_);
v___x_3124_ = 3;
v___x_3125_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3125_, 0, v___x_3123_);
lean_ctor_set_uint8(v___x_3125_, sizeof(void*)*1, v___x_3124_);
lean_inc_ref(v_a_3100_);
v___x_3126_ = lean_apply_2(v_a_3100_, v___x_3125_, lean_box(0));
v___x_3127_ = lean_box(0);
v___x_3128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
return v___x_3128_;
}
v___jp_3129_:
{
lean_object* v_stderr_3131_; 
v_stderr_3131_ = lean_ctor_get(v___y_3130_, 1);
lean_inc_ref(v_stderr_3131_);
lean_dec_ref(v___y_3130_);
v_stderr_3121_ = v_stderr_3131_;
goto v___jp_3120_;
}
v___jp_3132_:
{
if (lean_obj_tag(v_a_3134_) == 0)
{
v___y_3130_ = v___y_3133_;
goto v___jp_3129_;
}
else
{
lean_object* v_val_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3159_; 
v_val_3135_ = lean_ctor_get(v_a_3134_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v_a_3134_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3137_ = v_a_3134_;
v_isShared_3138_ = v_isSharedCheck_3159_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_val_3135_);
lean_dec(v_a_3134_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3159_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v___x_3139_; uint8_t v___x_3140_; 
v___x_3139_ = lean_unsigned_to_nat(200u);
v___x_3140_ = lean_nat_dec_eq(v_val_3135_, v___x_3139_);
if (v___x_3140_ == 0)
{
lean_object* v_stdout_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; uint8_t v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3153_; 
v_stdout_3141_ = lean_ctor_get(v___y_3133_, 0);
lean_inc_ref(v_stdout_3141_);
lean_dec_ref(v___y_3133_);
v___x_3142_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3));
v___x_3143_ = l_Nat_reprFast(v_val_3135_);
v___x_3144_ = lean_string_append(v___x_3142_, v___x_3143_);
lean_dec_ref(v___x_3143_);
v___x_3145_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_3146_ = lean_string_append(v___x_3144_, v___x_3145_);
v___x_3147_ = lean_string_append(v___x_3146_, v_stdout_3141_);
lean_dec_ref(v_stdout_3141_);
v___x_3148_ = 3;
v___x_3149_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3149_, 0, v___x_3147_);
lean_ctor_set_uint8(v___x_3149_, sizeof(void*)*1, v___x_3148_);
lean_inc_ref(v_a_3100_);
v___x_3150_ = lean_apply_2(v_a_3100_, v___x_3149_, lean_box(0));
v___x_3151_ = lean_box(0);
if (v_isShared_3138_ == 0)
{
lean_ctor_set(v___x_3137_, 0, v___x_3151_);
v___x_3153_ = v___x_3137_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v___x_3151_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
else
{
lean_object* v___x_3155_; lean_object* v___x_3157_; 
lean_dec(v_val_3135_);
lean_dec_ref(v___y_3133_);
v___x_3155_ = lean_box(0);
if (v_isShared_3138_ == 0)
{
lean_ctor_set_tag(v___x_3137_, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3155_);
v___x_3157_ = v___x_3137_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v___x_3155_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
}
}
v___jp_3160_:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3163_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_3164_ = l_Lake_JsonObject_getJson_x3f(v___y_3161_, v___x_3163_);
lean_dec(v___y_3161_);
if (lean_obj_tag(v___x_3164_) == 0)
{
v___y_3130_ = v___y_3162_;
goto v___jp_3129_;
}
else
{
lean_object* v_val_3165_; lean_object* v___x_3166_; 
v_val_3165_ = lean_ctor_get(v___x_3164_, 0);
lean_inc(v_val_3165_);
lean_dec_ref(v___x_3164_);
v___x_3166_ = l_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_3165_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_a_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v_a_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3167_);
lean_dec_ref(v___x_3166_);
v___x_3168_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_3169_ = lean_string_append(v___x_3168_, v_a_3167_);
lean_dec(v_a_3167_);
v___y_3107_ = v___y_3162_;
v_a_3108_ = v___x_3169_;
goto v___jp_3106_;
}
else
{
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_a_3170_; 
v_a_3170_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3170_);
lean_dec_ref(v___x_3166_);
v___y_3107_ = v___y_3162_;
v_a_3108_ = v_a_3170_;
goto v___jp_3106_;
}
else
{
lean_object* v_a_3171_; 
v_a_3171_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3171_);
lean_dec_ref(v___x_3166_);
v___y_3133_ = v___y_3162_;
v_a_3134_ = v_a_3171_;
goto v___jp_3132_;
}
}
}
}
v___jp_3172_:
{
lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; uint8_t v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3175_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_3176_ = lean_string_append(v___x_3175_, v_a_3174_);
lean_dec_ref(v_a_3174_);
v___x_3177_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_3178_ = lean_string_append(v___x_3176_, v___x_3177_);
v___x_3179_ = lean_string_append(v___x_3178_, v_stderr_3173_);
lean_dec_ref(v_stderr_3173_);
v___x_3180_ = 3;
v___x_3181_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3181_, 0, v___x_3179_);
lean_ctor_set_uint8(v___x_3181_, sizeof(void*)*1, v___x_3180_);
lean_inc_ref(v_a_3100_);
v___x_3182_ = lean_apply_2(v_a_3100_, v___x_3181_, lean_box(0));
v___x_3183_ = lean_box(0);
v___x_3184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3183_);
return v___x_3184_;
}
v___jp_3185_:
{
lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3186_ = lean_box(0);
v___x_3187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3187_, 0, v___x_3186_);
return v___x_3187_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0___boxed(lean_object* v_a_3252_, lean_object* v_file_3253_, lean_object* v_contentType_3254_, lean_object* v_url_3255_, lean_object* v_key_3256_, lean_object* v_a_3257_){
_start:
{
lean_object* v_res_3258_; 
v_res_3258_ = l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(v_a_3252_, v_file_3253_, v_contentType_3254_, v_url_3255_, v_key_3256_);
lean_dec_ref(v_contentType_3254_);
lean_dec_ref(v_a_3252_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact(uint64_t v_contentHash_3260_, lean_object* v_art_3261_, lean_object* v_service_3262_, lean_object* v_scope_3263_, lean_object* v_a_3264_){
_start:
{
lean_object* v_url_3266_; lean_object* v___y_3268_; lean_object* v_s_3285_; 
lean_inc_ref(v_scope_3263_);
lean_inc_ref(v_service_3262_);
v_url_3266_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_3260_, v_service_3262_, v_scope_3263_);
v_s_3285_ = lean_ctor_get(v_scope_3263_, 0);
lean_inc_ref(v_s_3285_);
lean_dec_ref(v_scope_3263_);
v___y_3268_ = v_s_3285_;
goto v___jp_3267_;
v___jp_3267_:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; uint8_t v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v_key_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3269_ = ((lean_object*)(l_Lake_CacheService_uploadArtifact___closed__0));
v___x_3270_ = lean_string_append(v___y_3268_, v___x_3269_);
v___x_3271_ = l_Lake_Hash_hex(v_contentHash_3260_);
v___x_3272_ = lean_string_append(v___x_3270_, v___x_3271_);
lean_dec_ref(v___x_3271_);
v___x_3273_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3274_ = lean_string_append(v___x_3272_, v___x_3273_);
v___x_3275_ = lean_string_append(v___x_3274_, v_art_3261_);
v___x_3276_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3277_ = lean_string_append(v___x_3275_, v___x_3276_);
v___x_3278_ = lean_string_append(v___x_3277_, v_url_3266_);
v___x_3279_ = 1;
v___x_3280_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3280_, 0, v___x_3278_);
lean_ctor_set_uint8(v___x_3280_, sizeof(void*)*1, v___x_3279_);
lean_inc_ref(v_a_3264_);
v___x_3281_ = lean_apply_2(v_a_3264_, v___x_3280_, lean_box(0));
v_key_3282_ = lean_ctor_get(v_service_3262_, 1);
lean_inc_ref(v_key_3282_);
lean_dec_ref(v_service_3262_);
v___x_3283_ = ((lean_object*)(l_Lake_CacheService_artifactContentType___closed__0));
v___x_3284_ = l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(v_a_3264_, v_art_3261_, v___x_3283_, v_url_3266_, v_key_3282_);
return v___x_3284_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact___boxed(lean_object* v_contentHash_3286_, lean_object* v_art_3287_, lean_object* v_service_3288_, lean_object* v_scope_3289_, lean_object* v_a_3290_, lean_object* v_a_3291_){
_start:
{
uint64_t v_contentHash_boxed_3292_; lean_object* v_res_3293_; 
v_contentHash_boxed_3292_ = lean_unbox_uint64(v_contentHash_3286_);
lean_dec_ref(v_contentHash_3286_);
v_res_3293_ = l_Lake_CacheService_uploadArtifact(v_contentHash_boxed_3292_, v_art_3287_, v_service_3288_, v_scope_3289_, v_a_3290_);
lean_dec_ref(v_a_3290_);
return v_res_3293_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(uint8_t v_x_3294_){
_start:
{
if (v_x_3294_ == 0)
{
lean_object* v___x_3295_; 
v___x_3295_ = lean_unsigned_to_nat(0u);
return v___x_3295_;
}
else
{
lean_object* v___x_3296_; 
v___x_3296_ = lean_unsigned_to_nat(1u);
return v___x_3296_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx___boxed(lean_object* v_x_3297_){
_start:
{
uint8_t v_x_boxed_3298_; lean_object* v_res_3299_; 
v_x_boxed_3298_ = lean_unbox(v_x_3297_);
v_res_3299_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_boxed_3298_);
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_toCtorIdx(uint8_t v_x_3300_){
_start:
{
lean_object* v___x_3301_; 
v___x_3301_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_3300_);
return v___x_3301_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_toCtorIdx___boxed(lean_object* v_x_3302_){
_start:
{
uint8_t v_x_4__boxed_3303_; lean_object* v_res_3304_; 
v_x_4__boxed_3303_ = lean_unbox(v_x_3302_);
v_res_3304_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_toCtorIdx(v_x_4__boxed_3303_);
return v_res_3304_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(lean_object* v_k_3305_){
_start:
{
lean_inc(v_k_3305_);
return v_k_3305_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg___boxed(lean_object* v_k_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(v_k_3306_);
lean_dec(v_k_3306_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(lean_object* v_motive_3308_, lean_object* v_ctorIdx_3309_, uint8_t v_t_3310_, lean_object* v_h_3311_, lean_object* v_k_3312_){
_start:
{
lean_inc(v_k_3312_);
return v_k_3312_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___boxed(lean_object* v_motive_3313_, lean_object* v_ctorIdx_3314_, lean_object* v_t_3315_, lean_object* v_h_3316_, lean_object* v_k_3317_){
_start:
{
uint8_t v_t_boxed_3318_; lean_object* v_res_3319_; 
v_t_boxed_3318_ = lean_unbox(v_t_3315_);
v_res_3319_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(v_motive_3313_, v_ctorIdx_3314_, v_t_boxed_3318_, v_h_3316_, v_k_3317_);
lean_dec(v_k_3317_);
lean_dec(v_ctorIdx_3314_);
return v_res_3319_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(lean_object* v_get_3320_){
_start:
{
lean_inc(v_get_3320_);
return v_get_3320_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg___boxed(lean_object* v_get_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(v_get_3321_);
lean_dec(v_get_3321_);
return v_res_3322_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(lean_object* v_motive_3323_, uint8_t v_t_3324_, lean_object* v_h_3325_, lean_object* v_get_3326_){
_start:
{
lean_inc(v_get_3326_);
return v_get_3326_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___boxed(lean_object* v_motive_3327_, lean_object* v_t_3328_, lean_object* v_h_3329_, lean_object* v_get_3330_){
_start:
{
uint8_t v_t_boxed_3331_; lean_object* v_res_3332_; 
v_t_boxed_3331_ = lean_unbox(v_t_3328_);
v_res_3332_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(v_motive_3327_, v_t_boxed_3331_, v_h_3329_, v_get_3330_);
lean_dec(v_get_3330_);
return v_res_3332_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(lean_object* v_put_3333_){
_start:
{
lean_inc(v_put_3333_);
return v_put_3333_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg___boxed(lean_object* v_put_3334_){
_start:
{
lean_object* v_res_3335_; 
v_res_3335_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(v_put_3334_);
lean_dec(v_put_3334_);
return v_res_3335_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(lean_object* v_motive_3336_, uint8_t v_t_3337_, lean_object* v_h_3338_, lean_object* v_put_3339_){
_start:
{
lean_inc(v_put_3339_);
return v_put_3339_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___boxed(lean_object* v_motive_3340_, lean_object* v_t_3341_, lean_object* v_h_3342_, lean_object* v_put_3343_){
_start:
{
uint8_t v_t_boxed_3344_; lean_object* v_res_3345_; 
v_t_boxed_3344_ = lean_unbox(v_t_3341_);
v_res_3345_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(v_motive_3340_, v_t_boxed_3344_, v_h_3342_, v_put_3343_);
lean_dec(v_put_3343_);
return v_res_3345_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(lean_object* v_n_3346_){
_start:
{
lean_object* v___x_3347_; uint8_t v___x_3348_; 
v___x_3347_ = lean_unsigned_to_nat(0u);
v___x_3348_ = lean_nat_dec_le(v_n_3346_, v___x_3347_);
if (v___x_3348_ == 0)
{
uint8_t v___x_3349_; 
v___x_3349_ = 1;
return v___x_3349_;
}
else
{
uint8_t v___x_3350_; 
v___x_3350_ = 0;
return v___x_3350_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat___boxed(lean_object* v_n_3351_){
_start:
{
uint8_t v_res_3352_; lean_object* v_r_3353_; 
v_res_3352_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(v_n_3351_);
lean_dec(v_n_3351_);
v_r_3353_ = lean_box(v_res_3352_);
return v_r_3353_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(uint8_t v_x_3354_, uint8_t v_y_3355_){
_start:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; uint8_t v___x_3358_; 
v___x_3356_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_3354_);
v___x_3357_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_y_3355_);
v___x_3358_ = lean_nat_dec_eq(v___x_3356_, v___x_3357_);
lean_dec(v___x_3357_);
lean_dec(v___x_3356_);
return v___x_3358_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind___boxed(lean_object* v_x_3359_, lean_object* v_y_3360_){
_start:
{
uint8_t v_x_13__boxed_3361_; uint8_t v_y_14__boxed_3362_; uint8_t v_res_3363_; lean_object* v_r_3364_; 
v_x_13__boxed_3361_ = lean_unbox(v_x_3359_);
v_y_14__boxed_3362_ = lean_unbox(v_y_3360_);
v_res_3363_ = l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(v_x_13__boxed_3361_, v_y_14__boxed_3362_);
v_r_3364_ = lean_box(v_res_3363_);
return v_r_3364_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(lean_object* v_cfg_3366_, lean_object* v_out_3367_){
_start:
{
lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3368_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___closed__0));
v___x_3369_ = l_Lake_JsonObject_getJson_x3f(v_out_3367_, v___x_3368_);
if (lean_obj_tag(v___x_3369_) == 0)
{
lean_object* v___x_3370_; 
v___x_3370_ = lean_box(0);
return v___x_3370_;
}
else
{
lean_object* v_val_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3387_; 
v_val_3371_ = lean_ctor_get(v___x_3369_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v___x_3369_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3373_ = v___x_3369_;
v_isShared_3374_ = v_isSharedCheck_3387_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_val_3371_);
lean_dec(v___x_3369_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3387_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3375_; 
v___x_3375_ = l_Lean_Json_getNat_x3f(v_val_3371_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_object* v___x_3376_; 
lean_dec_ref(v___x_3375_);
lean_del_object(v___x_3373_);
v___x_3376_ = lean_box(0);
return v___x_3376_;
}
else
{
if (lean_obj_tag(v___x_3375_) == 1)
{
lean_object* v_a_3377_; lean_object* v_infos_3378_; lean_object* v___x_3379_; uint8_t v___x_3380_; 
v_a_3377_ = lean_ctor_get(v___x_3375_, 0);
lean_inc(v_a_3377_);
lean_dec_ref(v___x_3375_);
v_infos_3378_ = lean_ctor_get(v_cfg_3366_, 1);
v___x_3379_ = lean_array_get_size(v_infos_3378_);
v___x_3380_ = lean_nat_dec_lt(v_a_3377_, v___x_3379_);
if (v___x_3380_ == 0)
{
lean_object* v___x_3381_; 
lean_dec(v_a_3377_);
lean_del_object(v___x_3373_);
v___x_3381_ = lean_box(0);
return v___x_3381_;
}
else
{
lean_object* v___x_3382_; lean_object* v___x_3384_; 
v___x_3382_ = lean_array_fget_borrowed(v_infos_3378_, v_a_3377_);
lean_dec(v_a_3377_);
lean_inc(v___x_3382_);
if (v_isShared_3374_ == 0)
{
lean_ctor_set(v___x_3373_, 0, v___x_3382_);
v___x_3384_ = v___x_3373_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v___x_3382_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
return v___x_3384_;
}
}
}
else
{
lean_object* v___x_3386_; 
lean_dec_ref(v___x_3375_);
lean_del_object(v___x_3373_);
v___x_3386_ = lean_box(0);
return v___x_3386_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___boxed(lean_object* v_cfg_3388_, lean_object* v_out_3389_){
_start:
{
lean_object* v_res_3390_; 
v_res_3390_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_3388_, v_out_3389_);
lean_dec(v_out_3389_);
lean_dec_ref(v_cfg_3388_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(lean_object* v_s_3391_, lean_object* v_pos_3392_){
_start:
{
lean_object* v_str_3393_; lean_object* v_startInclusive_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; uint8_t v___x_3398_; 
v_str_3393_ = lean_ctor_get(v_s_3391_, 0);
v_startInclusive_3394_ = lean_ctor_get(v_s_3391_, 1);
v___x_3395_ = lean_nat_add(v_startInclusive_3394_, v_pos_3392_);
v___x_3396_ = lean_nat_sub(v___x_3395_, v_startInclusive_3394_);
v___x_3397_ = lean_unsigned_to_nat(0u);
v___x_3398_ = lean_nat_dec_eq(v___x_3396_, v___x_3397_);
if (v___x_3398_ == 0)
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; uint8_t v___y_3407_; lean_object* v___x_3408_; uint32_t v___x_3409_; uint8_t v___y_3411_; uint32_t v___x_3416_; uint8_t v___x_3417_; 
lean_inc(v_startInclusive_3394_);
lean_inc_ref(v_str_3393_);
v___x_3399_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3399_, 0, v_str_3393_);
lean_ctor_set(v___x_3399_, 1, v_startInclusive_3394_);
lean_ctor_set(v___x_3399_, 2, v___x_3395_);
v___x_3400_ = lean_unsigned_to_nat(1u);
v___x_3401_ = lean_nat_sub(v___x_3396_, v___x_3400_);
lean_dec(v___x_3396_);
v___x_3402_ = l_String_Slice_posLE(v___x_3399_, v___x_3401_);
lean_dec_ref(v___x_3399_);
v___x_3408_ = lean_nat_add(v_startInclusive_3394_, v___x_3402_);
v___x_3409_ = lean_string_utf8_get_fast(v_str_3393_, v___x_3408_);
lean_dec(v___x_3408_);
v___x_3416_ = 32;
v___x_3417_ = lean_uint32_dec_eq(v___x_3409_, v___x_3416_);
if (v___x_3417_ == 0)
{
uint32_t v___x_3418_; uint8_t v___x_3419_; 
v___x_3418_ = 9;
v___x_3419_ = lean_uint32_dec_eq(v___x_3409_, v___x_3418_);
v___y_3411_ = v___x_3419_;
goto v___jp_3410_;
}
else
{
v___y_3411_ = v___x_3417_;
goto v___jp_3410_;
}
v___jp_3403_:
{
uint8_t v___x_3404_; 
v___x_3404_ = l_String_instDecidableLtRaw___aux__1(v___x_3402_, v_pos_3392_);
if (v___x_3404_ == 0)
{
lean_dec(v___x_3402_);
return v_pos_3392_;
}
else
{
lean_dec(v_pos_3392_);
v_pos_3392_ = v___x_3402_;
goto _start;
}
}
v___jp_3406_:
{
if (v___y_3407_ == 0)
{
lean_dec(v___x_3402_);
return v_pos_3392_;
}
else
{
goto v___jp_3403_;
}
}
v___jp_3410_:
{
if (v___y_3411_ == 0)
{
uint32_t v___x_3412_; uint8_t v___x_3413_; 
v___x_3412_ = 13;
v___x_3413_ = lean_uint32_dec_eq(v___x_3409_, v___x_3412_);
if (v___x_3413_ == 0)
{
uint32_t v___x_3414_; uint8_t v___x_3415_; 
v___x_3414_ = 10;
v___x_3415_ = lean_uint32_dec_eq(v___x_3409_, v___x_3414_);
v___y_3407_ = v___x_3415_;
goto v___jp_3406_;
}
else
{
v___y_3407_ = v___x_3413_;
goto v___jp_3406_;
}
}
else
{
goto v___jp_3403_;
}
}
}
else
{
lean_dec(v___x_3396_);
lean_dec(v___x_3395_);
return v_pos_3392_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0___boxed(lean_object* v_s_3420_, lean_object* v_pos_3421_){
_start:
{
lean_object* v_res_3422_; 
v_res_3422_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v_s_3420_, v_pos_3421_);
lean_dec_ref(v_s_3420_);
return v_res_3422_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(lean_object* v_cfg_3435_, lean_object* v_hOut_3436_, lean_object* v_info_3437_, lean_object* v_code_x3f_3438_, lean_object* v_out_3439_, lean_object* v_line_3440_, lean_object* v_a_3441_){
_start:
{
lean_object* v_msg_3444_; lean_object* v___y_3445_; lean_object* v___y_3462_; lean_object* v_msg_3463_; lean_object* v___y_3464_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v_a_3483_; lean_object* v___y_3489_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v_val_3494_; uint8_t v_kind_3505_; lean_object* v_scope_3506_; lean_object* v_msg_3508_; lean_object* v___y_3509_; lean_object* v_msg_3575_; lean_object* v___y_3576_; lean_object* v___y_3586_; lean_object* v___y_3587_; lean_object* v___y_3605_; 
v_kind_3505_ = lean_ctor_get_uint8(v_cfg_3435_, sizeof(void*)*3);
v_scope_3506_ = lean_ctor_get(v_cfg_3435_, 0);
lean_inc_ref(v_scope_3506_);
lean_dec_ref(v_cfg_3435_);
if (v_kind_3505_ == 0)
{
lean_object* v___x_3607_; 
v___x_3607_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___y_3605_ = v___x_3607_;
goto v___jp_3604_;
}
else
{
lean_object* v___x_3608_; 
v___x_3608_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___y_3605_ = v___x_3608_;
goto v___jp_3604_;
}
v___jp_3443_:
{
uint8_t v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; uint8_t v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; 
v___x_3446_ = 3;
v___x_3447_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3447_, 0, v_msg_3444_);
lean_ctor_set_uint8(v___x_3447_, sizeof(void*)*1, v___x_3446_);
lean_inc_ref_n(v___y_3445_, 2);
v___x_3448_ = lean_apply_2(v___y_3445_, v___x_3447_, lean_box(0));
v___x_3449_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0));
v___x_3450_ = lean_unsigned_to_nat(0u);
v___x_3451_ = lean_string_utf8_byte_size(v_line_3440_);
lean_inc_ref(v_line_3440_);
v___x_3452_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3452_, 0, v_line_3440_);
lean_ctor_set(v___x_3452_, 1, v___x_3450_);
lean_ctor_set(v___x_3452_, 2, v___x_3451_);
v___x_3453_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_3452_, v___x_3451_);
lean_dec_ref(v___x_3452_);
v___x_3454_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3454_, 0, v_line_3440_);
lean_ctor_set(v___x_3454_, 1, v___x_3450_);
lean_ctor_set(v___x_3454_, 2, v___x_3453_);
v___x_3455_ = l_String_Slice_toString(v___x_3454_);
lean_dec_ref(v___x_3454_);
v___x_3456_ = lean_string_append(v___x_3449_, v___x_3455_);
lean_dec_ref(v___x_3455_);
v___x_3457_ = 0;
v___x_3458_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3458_, 0, v___x_3456_);
lean_ctor_set_uint8(v___x_3458_, sizeof(void*)*1, v___x_3457_);
v___x_3459_ = lean_apply_2(v___y_3445_, v___x_3458_, lean_box(0));
v___x_3460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
return v___x_3460_;
}
v___jp_3461_:
{
lean_object* v___x_3465_; 
v___x_3465_ = l_Lake_removeFileIfExists(v___y_3462_);
if (lean_obj_tag(v___x_3465_) == 0)
{
lean_dec_ref(v___x_3465_);
v_msg_3444_ = v_msg_3463_;
v___y_3445_ = v___y_3464_;
goto v___jp_3443_;
}
else
{
lean_object* v_a_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3478_; 
lean_dec_ref(v_msg_3463_);
lean_dec_ref(v_line_3440_);
v_a_3466_ = lean_ctor_get(v___x_3465_, 0);
v_isSharedCheck_3478_ = !lean_is_exclusive(v___x_3465_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3468_ = v___x_3465_;
v_isShared_3469_ = v_isSharedCheck_3478_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_a_3466_);
lean_dec(v___x_3465_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3478_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
lean_object* v___x_3470_; uint8_t v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3476_; 
v___x_3470_ = lean_io_error_to_string(v_a_3466_);
v___x_3471_ = 3;
v___x_3472_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3472_, 0, v___x_3470_);
lean_ctor_set_uint8(v___x_3472_, sizeof(void*)*1, v___x_3471_);
lean_inc_ref(v___y_3464_);
v___x_3473_ = lean_apply_2(v___y_3464_, v___x_3472_, lean_box(0));
v___x_3474_ = lean_box(0);
if (v_isShared_3469_ == 0)
{
lean_ctor_set(v___x_3468_, 0, v___x_3474_);
v___x_3476_ = v___x_3468_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v___x_3474_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
return v___x_3476_;
}
}
}
}
v___jp_3479_:
{
if (lean_obj_tag(v_a_3483_) == 1)
{
lean_object* v_a_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v_a_3484_ = lean_ctor_get(v_a_3483_, 0);
lean_inc(v_a_3484_);
lean_dec_ref(v_a_3483_);
v___x_3485_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_3486_ = lean_string_append(v___y_3482_, v___x_3485_);
v___x_3487_ = lean_string_append(v___x_3486_, v_a_3484_);
lean_dec(v_a_3484_);
v___y_3462_ = v___y_3480_;
v_msg_3463_ = v___x_3487_;
v___y_3464_ = v___y_3481_;
goto v___jp_3461_;
}
else
{
lean_dec_ref(v_a_3483_);
v___y_3462_ = v___y_3480_;
v_msg_3463_ = v___y_3482_;
v___y_3464_ = v___y_3481_;
goto v___jp_3461_;
}
}
v___jp_3488_:
{
lean_object* v___x_3495_; uint8_t v___x_3496_; 
v___x_3495_ = lean_array_get_size(v___y_3491_);
v___x_3496_ = lean_nat_dec_lt(v___y_3490_, v___x_3495_);
if (v___x_3496_ == 0)
{
v___y_3480_ = v___y_3489_;
v___y_3481_ = v___y_3493_;
v___y_3482_ = v___y_3492_;
v_a_3483_ = v_val_3494_;
goto v___jp_3479_;
}
else
{
lean_object* v___x_3497_; uint8_t v___x_3498_; 
v___x_3497_ = lean_box(0);
v___x_3498_ = lean_nat_dec_le(v___x_3495_, v___x_3495_);
if (v___x_3498_ == 0)
{
if (v___x_3496_ == 0)
{
v___y_3480_ = v___y_3489_;
v___y_3481_ = v___y_3493_;
v___y_3482_ = v___y_3492_;
v_a_3483_ = v_val_3494_;
goto v___jp_3479_;
}
else
{
size_t v___x_3499_; size_t v___x_3500_; lean_object* v___x_3501_; 
v___x_3499_ = ((size_t)0ULL);
v___x_3500_ = lean_usize_of_nat(v___x_3495_);
v___x_3501_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_3491_, v___x_3499_, v___x_3500_, v___x_3497_, v___y_3493_);
if (lean_obj_tag(v___x_3501_) == 0)
{
lean_dec_ref(v___x_3501_);
v___y_3480_ = v___y_3489_;
v___y_3481_ = v___y_3493_;
v___y_3482_ = v___y_3492_;
v_a_3483_ = v_val_3494_;
goto v___jp_3479_;
}
else
{
lean_dec_ref(v_val_3494_);
lean_dec_ref(v___y_3492_);
lean_dec_ref(v_line_3440_);
return v___x_3501_;
}
}
}
else
{
size_t v___x_3502_; size_t v___x_3503_; lean_object* v___x_3504_; 
v___x_3502_ = ((size_t)0ULL);
v___x_3503_ = lean_usize_of_nat(v___x_3495_);
v___x_3504_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_3491_, v___x_3502_, v___x_3503_, v___x_3497_, v___y_3493_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_dec_ref(v___x_3504_);
v___y_3480_ = v___y_3489_;
v___y_3481_ = v___y_3493_;
v___y_3482_ = v___y_3492_;
v_a_3483_ = v_val_3494_;
goto v___jp_3479_;
}
else
{
lean_dec_ref(v_val_3494_);
lean_dec_ref(v___y_3492_);
lean_dec_ref(v_line_3440_);
return v___x_3504_;
}
}
}
}
v___jp_3507_:
{
lean_object* v_url_3510_; lean_object* v_path_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v_msg_3517_; 
v_url_3510_ = lean_ctor_get(v_info_3437_, 0);
v_path_3511_ = lean_ctor_get(v_info_3437_, 1);
v___x_3512_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3513_ = lean_string_append(v_msg_3508_, v___x_3512_);
v___x_3514_ = lean_string_append(v___x_3513_, v_path_3511_);
v___x_3515_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3516_ = lean_string_append(v___x_3514_, v___x_3515_);
v_msg_3517_ = lean_string_append(v___x_3516_, v_url_3510_);
if (v_kind_3505_ == 0)
{
lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3518_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_3519_ = l_Lake_JsonObject_getJson_x3f(v_out_3439_, v___x_3518_);
if (lean_obj_tag(v___x_3519_) == 0)
{
v___y_3462_ = v_path_3511_;
v_msg_3463_ = v_msg_3517_;
v___y_3464_ = v___y_3509_;
goto v___jp_3461_;
}
else
{
lean_object* v_val_3520_; lean_object* v___x_3521_; 
v_val_3520_ = lean_ctor_get(v___x_3519_, 0);
lean_inc(v_val_3520_);
lean_dec_ref(v___x_3519_);
v___x_3521_ = l_Lean_Json_getNat_x3f(v_val_3520_);
if (lean_obj_tag(v___x_3521_) == 0)
{
lean_dec_ref(v___x_3521_);
v___y_3462_ = v_path_3511_;
v_msg_3463_ = v_msg_3517_;
v___y_3464_ = v___y_3509_;
goto v___jp_3461_;
}
else
{
if (lean_obj_tag(v___x_3521_) == 1)
{
lean_object* v_a_3522_; lean_object* v___x_3523_; uint8_t v___x_3524_; 
v_a_3522_ = lean_ctor_get(v___x_3521_, 0);
lean_inc(v_a_3522_);
lean_dec_ref(v___x_3521_);
v___x_3523_ = lean_unsigned_to_nat(0u);
v___x_3524_ = lean_nat_dec_lt(v___x_3523_, v_a_3522_);
lean_dec(v_a_3522_);
if (v___x_3524_ == 0)
{
v___y_3462_ = v_path_3511_;
v_msg_3463_ = v_msg_3517_;
v___y_3464_ = v___y_3509_;
goto v___jp_3461_;
}
else
{
lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3525_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3));
v___x_3526_ = l_Lake_JsonObject_getJson_x3f(v_out_3439_, v___x_3525_);
if (lean_obj_tag(v___x_3526_) == 0)
{
v___y_3462_ = v_path_3511_;
v_msg_3463_ = v_msg_3517_;
v___y_3464_ = v___y_3509_;
goto v___jp_3461_;
}
else
{
lean_object* v_val_3527_; lean_object* v___x_3528_; 
v_val_3527_ = lean_ctor_get(v___x_3526_, 0);
lean_inc(v_val_3527_);
lean_dec_ref(v___x_3526_);
v___x_3528_ = l_Lean_Json_getStr_x3f(v_val_3527_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_dec_ref(v___x_3528_);
v___y_3462_ = v_path_3511_;
v_msg_3463_ = v_msg_3517_;
v___y_3464_ = v___y_3509_;
goto v___jp_3461_;
}
else
{
if (lean_obj_tag(v___x_3528_) == 1)
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3545_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3545_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3545_ == 0)
{
v___x_3531_ = v___x_3528_;
v_isShared_3532_ = v_isSharedCheck_3545_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3528_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3545_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3533_; uint8_t v___x_3534_; 
v___x_3533_ = ((lean_object*)(l_Lake_CacheService_artifactContentType___closed__0));
v___x_3534_ = lean_string_dec_eq(v_a_3529_, v___x_3533_);
lean_dec(v_a_3529_);
if (v___x_3534_ == 0)
{
lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3535_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_3536_ = l_IO_FS_readFile(v_path_3511_);
if (lean_obj_tag(v___x_3536_) == 0)
{
lean_object* v_a_3537_; lean_object* v___x_3539_; 
v_a_3537_ = lean_ctor_get(v___x_3536_, 0);
lean_inc(v_a_3537_);
lean_dec_ref(v___x_3536_);
if (v_isShared_3532_ == 0)
{
lean_ctor_set(v___x_3531_, 0, v_a_3537_);
v___x_3539_ = v___x_3531_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_a_3537_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
v___y_3489_ = v_path_3511_;
v___y_3490_ = v___x_3523_;
v___y_3491_ = v___x_3535_;
v___y_3492_ = v_msg_3517_;
v___y_3493_ = v___y_3509_;
v_val_3494_ = v___x_3539_;
goto v___jp_3488_;
}
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3543_; 
v_a_3541_ = lean_ctor_get(v___x_3536_, 0);
lean_inc(v_a_3541_);
lean_dec_ref(v___x_3536_);
if (v_isShared_3532_ == 0)
{
lean_ctor_set_tag(v___x_3531_, 0);
lean_ctor_set(v___x_3531_, 0, v_a_3541_);
v___x_3543_ = v___x_3531_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v_a_3541_);
v___x_3543_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
v___y_3489_ = v_path_3511_;
v___y_3490_ = v___x_3523_;
v___y_3491_ = v___x_3535_;
v___y_3492_ = v_msg_3517_;
v___y_3493_ = v___y_3509_;
v_val_3494_ = v___x_3543_;
goto v___jp_3488_;
}
}
}
else
{
lean_del_object(v___x_3531_);
v___y_3462_ = v_path_3511_;
v_msg_3463_ = v_msg_3517_;
v___y_3464_ = v___y_3509_;
goto v___jp_3461_;
}
}
}
else
{
lean_dec_ref(v___x_3528_);
v___y_3462_ = v_path_3511_;
v_msg_3463_ = v_msg_3517_;
v___y_3464_ = v___y_3509_;
goto v___jp_3461_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3521_);
v___y_3462_ = v_path_3511_;
v_msg_3463_ = v_msg_3517_;
v___y_3464_ = v___y_3509_;
goto v___jp_3461_;
}
}
}
}
else
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3546_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_3547_ = l_Lake_JsonObject_getJson_x3f(v_out_3439_, v___x_3546_);
if (lean_obj_tag(v___x_3547_) == 0)
{
v_msg_3444_ = v_msg_3517_;
v___y_3445_ = v___y_3509_;
goto v___jp_3443_;
}
else
{
lean_object* v_val_3548_; lean_object* v___x_3549_; 
v_val_3548_ = lean_ctor_get(v___x_3547_, 0);
lean_inc(v_val_3548_);
lean_dec_ref(v___x_3547_);
v___x_3549_ = l_Lean_Json_getNat_x3f(v_val_3548_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_dec_ref(v___x_3549_);
v_msg_3444_ = v_msg_3517_;
v___y_3445_ = v___y_3509_;
goto v___jp_3443_;
}
else
{
if (lean_obj_tag(v___x_3549_) == 1)
{
lean_object* v_a_3550_; lean_object* v___x_3551_; uint8_t v___x_3552_; 
v_a_3550_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_a_3550_);
lean_dec_ref(v___x_3549_);
v___x_3551_ = lean_unsigned_to_nat(0u);
v___x_3552_ = lean_nat_dec_lt(v___x_3551_, v_a_3550_);
if (v___x_3552_ == 0)
{
lean_dec(v_a_3550_);
v_msg_3444_ = v_msg_3517_;
v___y_3445_ = v___y_3509_;
goto v___jp_3443_;
}
else
{
size_t v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = lean_usize_of_nat(v_a_3550_);
lean_dec(v_a_3550_);
v___x_3554_ = lean_io_prim_handle_read(v_hOut_3436_, v___x_3553_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; uint8_t v___x_3556_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
lean_inc(v_a_3555_);
lean_dec_ref(v___x_3554_);
v___x_3556_ = lean_string_validate_utf8(v_a_3555_);
if (v___x_3556_ == 0)
{
lean_dec(v_a_3555_);
v_msg_3444_ = v_msg_3517_;
v___y_3445_ = v___y_3509_;
goto v___jp_3443_;
}
else
{
lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3557_ = lean_string_from_utf8_unchecked(v_a_3555_);
v___x_3558_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_3559_ = lean_string_append(v_msg_3517_, v___x_3558_);
v___x_3560_ = lean_string_append(v___x_3559_, v___x_3557_);
lean_dec_ref(v___x_3557_);
v_msg_3444_ = v___x_3560_;
v___y_3445_ = v___y_3509_;
goto v___jp_3443_;
}
}
else
{
lean_object* v_a_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3573_; 
lean_dec_ref(v_msg_3517_);
lean_dec_ref(v_line_3440_);
v_a_3561_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3573_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3563_ = v___x_3554_;
v_isShared_3564_ = v_isSharedCheck_3573_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_a_3561_);
lean_dec(v___x_3554_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3573_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v___x_3565_; uint8_t v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3571_; 
v___x_3565_ = lean_io_error_to_string(v_a_3561_);
v___x_3566_ = 3;
v___x_3567_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3567_, 0, v___x_3565_);
lean_ctor_set_uint8(v___x_3567_, sizeof(void*)*1, v___x_3566_);
lean_inc_ref(v___y_3509_);
v___x_3568_ = lean_apply_2(v___y_3509_, v___x_3567_, lean_box(0));
v___x_3569_ = lean_box(0);
if (v_isShared_3564_ == 0)
{
lean_ctor_set(v___x_3563_, 0, v___x_3569_);
v___x_3571_ = v___x_3563_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v___x_3569_);
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
lean_dec_ref(v___x_3549_);
v_msg_3444_ = v_msg_3517_;
v___y_3445_ = v___y_3509_;
goto v___jp_3443_;
}
}
}
}
}
v___jp_3574_:
{
lean_object* v___x_3577_; lean_object* v___x_3578_; 
v___x_3577_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4));
v___x_3578_ = l_Lake_JsonObject_getJson_x3f(v_out_3439_, v___x_3577_);
if (lean_obj_tag(v___x_3578_) == 0)
{
v_msg_3508_ = v_msg_3575_;
v___y_3509_ = v___y_3576_;
goto v___jp_3507_;
}
else
{
lean_object* v_val_3579_; lean_object* v___x_3580_; 
v_val_3579_ = lean_ctor_get(v___x_3578_, 0);
lean_inc(v_val_3579_);
lean_dec_ref(v___x_3578_);
v___x_3580_ = l_Lean_Json_getStr_x3f(v_val_3579_);
if (lean_obj_tag(v___x_3580_) == 0)
{
lean_dec_ref(v___x_3580_);
v_msg_3508_ = v_msg_3575_;
v___y_3509_ = v___y_3576_;
goto v___jp_3507_;
}
else
{
if (lean_obj_tag(v___x_3580_) == 1)
{
lean_object* v_a_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v_msg_3584_; 
v_a_3581_ = lean_ctor_get(v___x_3580_, 0);
lean_inc(v_a_3581_);
lean_dec_ref(v___x_3580_);
v___x_3582_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5));
v___x_3583_ = lean_string_append(v_msg_3575_, v___x_3582_);
v_msg_3584_ = lean_string_append(v___x_3583_, v_a_3581_);
lean_dec(v_a_3581_);
v_msg_3508_ = v_msg_3584_;
v___y_3509_ = v___y_3576_;
goto v___jp_3507_;
}
else
{
lean_dec_ref(v___x_3580_);
v_msg_3508_ = v_msg_3575_;
v___y_3509_ = v___y_3576_;
goto v___jp_3507_;
}
}
}
}
v___jp_3585_:
{
lean_object* v_descr_3588_; uint64_t v_hash_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v_msg_3596_; 
v_descr_3588_ = lean_ctor_get(v_info_3437_, 2);
v_hash_3589_ = lean_ctor_get_uint64(v_descr_3588_, sizeof(void*)*1);
v___x_3590_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_3591_ = lean_string_append(v___y_3587_, v___x_3590_);
v___x_3592_ = lean_string_append(v___x_3591_, v___y_3586_);
v___x_3593_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7));
v___x_3594_ = lean_string_append(v___x_3592_, v___x_3593_);
v___x_3595_ = l_Lake_Hash_hex(v_hash_3589_);
v_msg_3596_ = lean_string_append(v___x_3594_, v___x_3595_);
lean_dec_ref(v___x_3595_);
if (lean_obj_tag(v_code_x3f_3438_) == 1)
{
lean_object* v_a_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v_msg_3603_; 
v_a_3597_ = lean_ctor_get(v_code_x3f_3438_, 0);
lean_inc(v_a_3597_);
lean_dec_ref(v_code_x3f_3438_);
v___x_3598_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8));
v___x_3599_ = lean_string_append(v_msg_3596_, v___x_3598_);
v___x_3600_ = l_Nat_reprFast(v_a_3597_);
v___x_3601_ = lean_string_append(v___x_3599_, v___x_3600_);
lean_dec_ref(v___x_3600_);
v___x_3602_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9));
v_msg_3603_ = lean_string_append(v___x_3601_, v___x_3602_);
v_msg_3575_ = v_msg_3603_;
v___y_3576_ = v_a_3441_;
goto v___jp_3574_;
}
else
{
lean_dec_ref(v_code_x3f_3438_);
v_msg_3575_ = v_msg_3596_;
v___y_3576_ = v_a_3441_;
goto v___jp_3574_;
}
}
v___jp_3604_:
{
lean_object* v_s_3606_; 
v_s_3606_ = lean_ctor_get(v_scope_3506_, 0);
lean_inc_ref(v_s_3606_);
lean_dec_ref(v_scope_3506_);
v___y_3586_ = v___y_3605_;
v___y_3587_ = v_s_3606_;
goto v___jp_3585_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___boxed(lean_object* v_cfg_3609_, lean_object* v_hOut_3610_, lean_object* v_info_3611_, lean_object* v_code_x3f_3612_, lean_object* v_out_3613_, lean_object* v_line_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_){
_start:
{
lean_object* v_res_3617_; 
v_res_3617_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3609_, v_hOut_3610_, v_info_3611_, v_code_x3f_3612_, v_out_3613_, v_line_3614_, v_a_3615_);
lean_dec_ref(v_a_3615_);
lean_dec(v_out_3613_);
lean_dec_ref(v_info_3611_);
lean_dec(v_hOut_3610_);
return v_res_3617_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(lean_object* v_cfg_3618_, lean_object* v_hOut_3619_, lean_object* v_val_3620_, lean_object* v_a_3621_, lean_object* v_a_3622_, uint8_t v___x_3623_, lean_object* v_code_x3f_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_){
_start:
{
lean_object* v___x_3628_; 
v___x_3628_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3618_, v_hOut_3619_, v_val_3620_, v_code_x3f_3624_, v_a_3621_, v_a_3622_, v___y_3626_);
if (lean_obj_tag(v___x_3628_) == 0)
{
lean_object* v___x_3630_; uint8_t v_isShared_3631_; uint8_t v_isSharedCheck_3645_; 
v_isSharedCheck_3645_ = !lean_is_exclusive(v___x_3628_);
if (v_isSharedCheck_3645_ == 0)
{
lean_object* v_unused_3646_; 
v_unused_3646_ = lean_ctor_get(v___x_3628_, 0);
lean_dec(v_unused_3646_);
v___x_3630_ = v___x_3628_;
v_isShared_3631_ = v_isSharedCheck_3645_;
goto v_resetjp_3629_;
}
else
{
lean_dec(v___x_3628_);
v___x_3630_ = lean_box(0);
v_isShared_3631_ = v_isSharedCheck_3645_;
goto v_resetjp_3629_;
}
v_resetjp_3629_:
{
lean_object* v_numSuccesses_3632_; lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3644_; 
v_numSuccesses_3632_ = lean_ctor_get(v___y_3625_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___y_3625_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3634_ = v___y_3625_;
v_isShared_3635_ = v_isSharedCheck_3644_;
goto v_resetjp_3633_;
}
else
{
lean_inc(v_numSuccesses_3632_);
lean_dec(v___y_3625_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3644_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
lean_object* v___x_3636_; lean_object* v___x_3638_; 
v___x_3636_ = lean_box(0);
if (v_isShared_3635_ == 0)
{
v___x_3638_ = v___x_3634_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_numSuccesses_3632_);
v___x_3638_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
lean_object* v___x_3639_; lean_object* v___x_3641_; 
lean_ctor_set_uint8(v___x_3638_, sizeof(void*)*1, v___x_3623_);
v___x_3639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3639_, 0, v___x_3636_);
lean_ctor_set(v___x_3639_, 1, v___x_3638_);
if (v_isShared_3631_ == 0)
{
lean_ctor_set(v___x_3630_, 0, v___x_3639_);
v___x_3641_ = v___x_3630_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v___x_3639_);
v___x_3641_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
return v___x_3641_;
}
}
}
}
}
else
{
lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3654_; 
lean_dec_ref(v___y_3625_);
v_a_3647_ = lean_ctor_get(v___x_3628_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v___x_3628_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3649_ = v___x_3628_;
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_dec(v___x_3628_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3652_; 
if (v_isShared_3650_ == 0)
{
v___x_3652_ = v___x_3649_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_a_3647_);
v___x_3652_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
return v___x_3652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___boxed(lean_object* v_cfg_3655_, lean_object* v_hOut_3656_, lean_object* v_val_3657_, lean_object* v_a_3658_, lean_object* v_a_3659_, lean_object* v___x_3660_, lean_object* v_code_x3f_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_){
_start:
{
uint8_t v___x_27917__boxed_3665_; lean_object* v_res_3666_; 
v___x_27917__boxed_3665_ = lean_unbox(v___x_3660_);
v_res_3666_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_3655_, v_hOut_3656_, v_val_3657_, v_a_3658_, v_a_3659_, v___x_27917__boxed_3665_, v_code_x3f_3661_, v___y_3662_, v___y_3663_);
lean_dec_ref(v___y_3663_);
lean_dec(v_a_3658_);
lean_dec_ref(v_val_3657_);
lean_dec(v_hOut_3656_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(lean_object* v_cfg_3669_, lean_object* v_path_3670_, uint8_t v___x_3671_, lean_object* v_descr_3672_, lean_object* v_url_3673_, uint8_t v___x_3674_, lean_object* v_00___3675_, lean_object* v___y_3676_, lean_object* v___y_3677_){
_start:
{
uint64_t v___y_3680_; lean_object* v___y_3720_; lean_object* v___y_3775_; uint8_t v_kind_3804_; 
v_kind_3804_ = lean_ctor_get_uint8(v_cfg_3669_, sizeof(void*)*3);
if (v_kind_3804_ == 0)
{
lean_object* v_scope_3805_; lean_object* v_s_3806_; 
v_scope_3805_ = lean_ctor_get(v_cfg_3669_, 0);
lean_inc_ref(v_scope_3805_);
lean_dec_ref(v_cfg_3669_);
v_s_3806_ = lean_ctor_get(v_scope_3805_, 0);
lean_inc_ref(v_s_3806_);
lean_dec_ref(v_scope_3805_);
v___y_3720_ = v_s_3806_;
goto v___jp_3719_;
}
else
{
lean_object* v_scope_3807_; lean_object* v_s_3808_; 
v_scope_3807_ = lean_ctor_get(v_cfg_3669_, 0);
lean_inc_ref(v_scope_3807_);
lean_dec_ref(v_cfg_3669_);
v_s_3808_ = lean_ctor_get(v_scope_3807_, 0);
lean_inc_ref(v_s_3808_);
lean_dec_ref(v_scope_3807_);
v___y_3775_ = v_s_3808_;
goto v___jp_3774_;
}
v___jp_3679_:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; uint8_t v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; 
v___x_3681_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__1));
lean_inc_ref(v_path_3670_);
v___x_3682_ = lean_string_append(v_path_3670_, v___x_3681_);
v___x_3683_ = l_Lake_Hash_hex(v___y_3680_);
v___x_3684_ = lean_string_append(v___x_3682_, v___x_3683_);
lean_dec_ref(v___x_3683_);
v___x_3685_ = 3;
v___x_3686_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3686_, 0, v___x_3684_);
lean_ctor_set_uint8(v___x_3686_, sizeof(void*)*1, v___x_3685_);
lean_inc_ref(v___y_3677_);
v___x_3687_ = lean_apply_2(v___y_3677_, v___x_3686_, lean_box(0));
v___x_3688_ = lean_io_remove_file(v_path_3670_);
lean_dec_ref(v_path_3670_);
if (lean_obj_tag(v___x_3688_) == 0)
{
lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3705_; 
v_isSharedCheck_3705_ = !lean_is_exclusive(v___x_3688_);
if (v_isSharedCheck_3705_ == 0)
{
lean_object* v_unused_3706_; 
v_unused_3706_ = lean_ctor_get(v___x_3688_, 0);
lean_dec(v_unused_3706_);
v___x_3690_ = v___x_3688_;
v_isShared_3691_ = v_isSharedCheck_3705_;
goto v_resetjp_3689_;
}
else
{
lean_dec(v___x_3688_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3705_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v_numSuccesses_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3704_; 
v_numSuccesses_3692_ = lean_ctor_get(v___y_3676_, 0);
v_isSharedCheck_3704_ = !lean_is_exclusive(v___y_3676_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3694_ = v___y_3676_;
v_isShared_3695_ = v_isSharedCheck_3704_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_numSuccesses_3692_);
lean_dec(v___y_3676_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3704_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v___x_3696_; lean_object* v___x_3698_; 
v___x_3696_ = lean_box(0);
if (v_isShared_3695_ == 0)
{
v___x_3698_ = v___x_3694_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v_numSuccesses_3692_);
v___x_3698_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
lean_object* v___x_3699_; lean_object* v___x_3701_; 
lean_ctor_set_uint8(v___x_3698_, sizeof(void*)*1, v___x_3671_);
v___x_3699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3696_);
lean_ctor_set(v___x_3699_, 1, v___x_3698_);
if (v_isShared_3691_ == 0)
{
lean_ctor_set(v___x_3690_, 0, v___x_3699_);
v___x_3701_ = v___x_3690_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v___x_3699_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
}
}
}
else
{
lean_object* v_a_3707_; lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3718_; 
lean_dec_ref(v___y_3676_);
v_a_3707_ = lean_ctor_get(v___x_3688_, 0);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___x_3688_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3709_ = v___x_3688_;
v_isShared_3710_ = v_isSharedCheck_3718_;
goto v_resetjp_3708_;
}
else
{
lean_inc(v_a_3707_);
lean_dec(v___x_3688_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3718_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3716_; 
v___x_3711_ = lean_io_error_to_string(v_a_3707_);
v___x_3712_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3712_, 0, v___x_3711_);
lean_ctor_set_uint8(v___x_3712_, sizeof(void*)*1, v___x_3685_);
lean_inc_ref(v___y_3677_);
v___x_3713_ = lean_apply_2(v___y_3677_, v___x_3712_, lean_box(0));
v___x_3714_ = lean_box(0);
if (v_isShared_3710_ == 0)
{
lean_ctor_set(v___x_3709_, 0, v___x_3714_);
v___x_3716_ = v___x_3709_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v___x_3714_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
}
}
v___jp_3719_:
{
uint64_t v_hash_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; uint8_t v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; 
v_hash_3721_ = lean_ctor_get_uint64(v_descr_3672_, sizeof(void*)*1);
v___x_3722_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___closed__0));
v___x_3723_ = lean_string_append(v___y_3720_, v___x_3722_);
v___x_3724_ = l_Lake_Hash_hex(v_hash_3721_);
v___x_3725_ = lean_string_append(v___x_3723_, v___x_3724_);
lean_dec_ref(v___x_3724_);
v___x_3726_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3727_ = lean_string_append(v___x_3725_, v___x_3726_);
v___x_3728_ = lean_string_append(v___x_3727_, v_path_3670_);
v___x_3729_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3730_ = lean_string_append(v___x_3728_, v___x_3729_);
v___x_3731_ = lean_string_append(v___x_3730_, v_url_3673_);
v___x_3732_ = 1;
v___x_3733_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3733_, 0, v___x_3731_);
lean_ctor_set_uint8(v___x_3733_, sizeof(void*)*1, v___x_3732_);
lean_inc_ref(v___y_3677_);
v___x_3734_ = lean_apply_2(v___y_3677_, v___x_3733_, lean_box(0));
v___x_3735_ = l_Lake_computeBinFileHash(v_path_3670_);
if (lean_obj_tag(v___x_3735_) == 0)
{
lean_object* v_a_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3760_; 
v_a_3736_ = lean_ctor_get(v___x_3735_, 0);
v_isSharedCheck_3760_ = !lean_is_exclusive(v___x_3735_);
if (v_isSharedCheck_3760_ == 0)
{
v___x_3738_ = v___x_3735_;
v_isShared_3739_ = v_isSharedCheck_3760_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_a_3736_);
lean_dec(v___x_3735_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3760_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
uint64_t v___x_3740_; uint8_t v___x_3741_; 
v___x_3740_ = lean_unbox_uint64(v_a_3736_);
v___x_3741_ = lean_uint64_dec_eq(v___x_3740_, v_hash_3721_);
if (v___x_3741_ == 0)
{
uint64_t v___x_3742_; 
lean_del_object(v___x_3738_);
v___x_3742_ = lean_unbox_uint64(v_a_3736_);
lean_dec(v_a_3736_);
v___y_3680_ = v___x_3742_;
goto v___jp_3679_;
}
else
{
if (v___x_3674_ == 0)
{
uint8_t v_didError_3743_; lean_object* v_numSuccesses_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3758_; 
lean_dec(v_a_3736_);
lean_dec_ref(v_path_3670_);
v_didError_3743_ = lean_ctor_get_uint8(v___y_3676_, sizeof(void*)*1);
v_numSuccesses_3744_ = lean_ctor_get(v___y_3676_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___y_3676_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3746_ = v___y_3676_;
v_isShared_3747_ = v_isSharedCheck_3758_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_numSuccesses_3744_);
lean_dec(v___y_3676_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3758_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3752_; 
v___x_3748_ = lean_box(0);
v___x_3749_ = lean_unsigned_to_nat(1u);
v___x_3750_ = lean_nat_add(v_numSuccesses_3744_, v___x_3749_);
lean_dec(v_numSuccesses_3744_);
if (v_isShared_3747_ == 0)
{
lean_ctor_set(v___x_3746_, 0, v___x_3750_);
v___x_3752_ = v___x_3746_;
goto v_reusejp_3751_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v___x_3750_);
lean_ctor_set_uint8(v_reuseFailAlloc_3757_, sizeof(void*)*1, v_didError_3743_);
v___x_3752_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3751_;
}
v_reusejp_3751_:
{
lean_object* v___x_3753_; lean_object* v___x_3755_; 
v___x_3753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3748_);
lean_ctor_set(v___x_3753_, 1, v___x_3752_);
if (v_isShared_3739_ == 0)
{
lean_ctor_set(v___x_3738_, 0, v___x_3753_);
v___x_3755_ = v___x_3738_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v___x_3753_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
else
{
uint64_t v___x_3759_; 
lean_del_object(v___x_3738_);
v___x_3759_ = lean_unbox_uint64(v_a_3736_);
lean_dec(v_a_3736_);
v___y_3680_ = v___x_3759_;
goto v___jp_3679_;
}
}
}
}
else
{
lean_object* v_a_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3773_; 
lean_dec_ref(v___y_3676_);
lean_dec_ref(v_path_3670_);
v_a_3761_ = lean_ctor_get(v___x_3735_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3735_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3763_ = v___x_3735_;
v_isShared_3764_ = v_isSharedCheck_3773_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_a_3761_);
lean_dec(v___x_3735_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3773_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v___x_3765_; uint8_t v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3771_; 
v___x_3765_ = lean_io_error_to_string(v_a_3761_);
v___x_3766_ = 3;
v___x_3767_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3767_, 0, v___x_3765_);
lean_ctor_set_uint8(v___x_3767_, sizeof(void*)*1, v___x_3766_);
lean_inc_ref(v___y_3677_);
v___x_3768_ = lean_apply_2(v___y_3677_, v___x_3767_, lean_box(0));
v___x_3769_ = lean_box(0);
if (v_isShared_3764_ == 0)
{
lean_ctor_set(v___x_3763_, 0, v___x_3769_);
v___x_3771_ = v___x_3763_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v___x_3769_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
}
v___jp_3774_:
{
uint64_t v_hash_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; uint8_t v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; uint8_t v_didError_3790_; lean_object* v_numSuccesses_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3803_; 
v_hash_3776_ = lean_ctor_get_uint64(v_descr_3672_, sizeof(void*)*1);
v___x_3777_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___closed__1));
v___x_3778_ = lean_string_append(v___y_3775_, v___x_3777_);
v___x_3779_ = l_Lake_Hash_hex(v_hash_3776_);
v___x_3780_ = lean_string_append(v___x_3778_, v___x_3779_);
lean_dec_ref(v___x_3779_);
v___x_3781_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3782_ = lean_string_append(v___x_3780_, v___x_3781_);
v___x_3783_ = lean_string_append(v___x_3782_, v_path_3670_);
lean_dec_ref(v_path_3670_);
v___x_3784_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3785_ = lean_string_append(v___x_3783_, v___x_3784_);
v___x_3786_ = lean_string_append(v___x_3785_, v_url_3673_);
v___x_3787_ = 1;
v___x_3788_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3788_, 0, v___x_3786_);
lean_ctor_set_uint8(v___x_3788_, sizeof(void*)*1, v___x_3787_);
lean_inc_ref(v___y_3677_);
v___x_3789_ = lean_apply_2(v___y_3677_, v___x_3788_, lean_box(0));
v_didError_3790_ = lean_ctor_get_uint8(v___y_3676_, sizeof(void*)*1);
v_numSuccesses_3791_ = lean_ctor_get(v___y_3676_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___y_3676_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3793_ = v___y_3676_;
v_isShared_3794_ = v_isSharedCheck_3803_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_numSuccesses_3791_);
lean_dec(v___y_3676_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3803_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3799_; 
v___x_3795_ = lean_box(0);
v___x_3796_ = lean_unsigned_to_nat(1u);
v___x_3797_ = lean_nat_add(v_numSuccesses_3791_, v___x_3796_);
lean_dec(v_numSuccesses_3791_);
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 0, v___x_3797_);
v___x_3799_ = v___x_3793_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v___x_3797_);
lean_ctor_set_uint8(v_reuseFailAlloc_3802_, sizeof(void*)*1, v_didError_3790_);
v___x_3799_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3800_, 0, v___x_3795_);
lean_ctor_set(v___x_3800_, 1, v___x_3799_);
v___x_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3800_);
return v___x_3801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___boxed(lean_object* v_cfg_3809_, lean_object* v_path_3810_, lean_object* v___x_3811_, lean_object* v_descr_3812_, lean_object* v_url_3813_, lean_object* v___x_3814_, lean_object* v_00___3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_){
_start:
{
uint8_t v___x_27997__boxed_3819_; uint8_t v___x_28000__boxed_3820_; lean_object* v_res_3821_; 
v___x_27997__boxed_3819_ = lean_unbox(v___x_3811_);
v___x_28000__boxed_3820_ = lean_unbox(v___x_3814_);
v_res_3821_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_3809_, v_path_3810_, v___x_27997__boxed_3819_, v_descr_3812_, v_url_3813_, v___x_28000__boxed_3820_, v_00___3815_, v___y_3816_, v___y_3817_);
lean_dec_ref(v___y_3817_);
lean_dec_ref(v_url_3813_);
lean_dec_ref(v_descr_3812_);
return v_res_3821_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___lam__1(lean_object* v_cfg_3822_, lean_object* v_path_3823_, uint8_t v___x_3824_, lean_object* v_descr_3825_, lean_object* v_url_3826_, uint8_t v___x_3827_, lean_object* v_00___3828_, lean_object* v___y_3829_, lean_object* v___y_3830_){
_start:
{
uint64_t v___y_3833_; lean_object* v___y_3873_; lean_object* v___y_3928_; uint8_t v_kind_3957_; 
v_kind_3957_ = lean_ctor_get_uint8(v_cfg_3822_, sizeof(void*)*3);
if (v_kind_3957_ == 0)
{
lean_object* v_scope_3958_; lean_object* v_s_3959_; 
v_scope_3958_ = lean_ctor_get(v_cfg_3822_, 0);
lean_inc_ref(v_scope_3958_);
lean_dec_ref(v_cfg_3822_);
v_s_3959_ = lean_ctor_get(v_scope_3958_, 0);
lean_inc_ref(v_s_3959_);
lean_dec_ref(v_scope_3958_);
v___y_3873_ = v_s_3959_;
goto v___jp_3872_;
}
else
{
lean_object* v_scope_3960_; lean_object* v_s_3961_; 
v_scope_3960_ = lean_ctor_get(v_cfg_3822_, 0);
lean_inc_ref(v_scope_3960_);
lean_dec_ref(v_cfg_3822_);
v_s_3961_ = lean_ctor_get(v_scope_3960_, 0);
lean_inc_ref(v_s_3961_);
lean_dec_ref(v_scope_3960_);
v___y_3928_ = v_s_3961_;
goto v___jp_3927_;
}
v___jp_3832_:
{
lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; uint8_t v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; 
v___x_3834_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__1));
lean_inc_ref(v_path_3823_);
v___x_3835_ = lean_string_append(v_path_3823_, v___x_3834_);
v___x_3836_ = l_Lake_Hash_hex(v___y_3833_);
v___x_3837_ = lean_string_append(v___x_3835_, v___x_3836_);
lean_dec_ref(v___x_3836_);
v___x_3838_ = 3;
v___x_3839_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3839_, 0, v___x_3837_);
lean_ctor_set_uint8(v___x_3839_, sizeof(void*)*1, v___x_3838_);
lean_inc_ref(v___y_3830_);
v___x_3840_ = lean_apply_2(v___y_3830_, v___x_3839_, lean_box(0));
v___x_3841_ = lean_io_remove_file(v_path_3823_);
lean_dec_ref(v_path_3823_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3858_; 
v_isSharedCheck_3858_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3858_ == 0)
{
lean_object* v_unused_3859_; 
v_unused_3859_ = lean_ctor_get(v___x_3841_, 0);
lean_dec(v_unused_3859_);
v___x_3843_ = v___x_3841_;
v_isShared_3844_ = v_isSharedCheck_3858_;
goto v_resetjp_3842_;
}
else
{
lean_dec(v___x_3841_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3858_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v_numSuccesses_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3857_; 
v_numSuccesses_3845_ = lean_ctor_get(v___y_3829_, 0);
v_isSharedCheck_3857_ = !lean_is_exclusive(v___y_3829_);
if (v_isSharedCheck_3857_ == 0)
{
v___x_3847_ = v___y_3829_;
v_isShared_3848_ = v_isSharedCheck_3857_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_numSuccesses_3845_);
lean_dec(v___y_3829_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3857_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3849_; lean_object* v___x_3851_; 
v___x_3849_ = lean_box(0);
if (v_isShared_3848_ == 0)
{
v___x_3851_ = v___x_3847_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v_numSuccesses_3845_);
v___x_3851_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
lean_object* v___x_3852_; lean_object* v___x_3854_; 
lean_ctor_set_uint8(v___x_3851_, sizeof(void*)*1, v___x_3824_);
v___x_3852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3852_, 0, v___x_3849_);
lean_ctor_set(v___x_3852_, 1, v___x_3851_);
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 0, v___x_3852_);
v___x_3854_ = v___x_3843_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v___x_3852_);
v___x_3854_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
return v___x_3854_;
}
}
}
}
}
else
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3871_; 
lean_dec_ref(v___y_3829_);
v_a_3860_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3871_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3871_ == 0)
{
v___x_3862_ = v___x_3841_;
v_isShared_3863_ = v_isSharedCheck_3871_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v___x_3841_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3871_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3869_; 
v___x_3864_ = lean_io_error_to_string(v_a_3860_);
v___x_3865_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3865_, 0, v___x_3864_);
lean_ctor_set_uint8(v___x_3865_, sizeof(void*)*1, v___x_3838_);
lean_inc_ref(v___y_3830_);
v___x_3866_ = lean_apply_2(v___y_3830_, v___x_3865_, lean_box(0));
v___x_3867_ = lean_box(0);
if (v_isShared_3863_ == 0)
{
lean_ctor_set(v___x_3862_, 0, v___x_3867_);
v___x_3869_ = v___x_3862_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v___x_3867_);
v___x_3869_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
return v___x_3869_;
}
}
}
}
v___jp_3872_:
{
uint64_t v_hash_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; uint8_t v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; 
v_hash_3874_ = lean_ctor_get_uint64(v_descr_3825_, sizeof(void*)*1);
v___x_3875_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___closed__0));
v___x_3876_ = lean_string_append(v___y_3873_, v___x_3875_);
v___x_3877_ = l_Lake_Hash_hex(v_hash_3874_);
v___x_3878_ = lean_string_append(v___x_3876_, v___x_3877_);
lean_dec_ref(v___x_3877_);
v___x_3879_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3880_ = lean_string_append(v___x_3878_, v___x_3879_);
v___x_3881_ = lean_string_append(v___x_3880_, v_path_3823_);
v___x_3882_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3883_ = lean_string_append(v___x_3881_, v___x_3882_);
v___x_3884_ = lean_string_append(v___x_3883_, v_url_3826_);
v___x_3885_ = 1;
v___x_3886_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3886_, 0, v___x_3884_);
lean_ctor_set_uint8(v___x_3886_, sizeof(void*)*1, v___x_3885_);
lean_inc_ref(v___y_3830_);
v___x_3887_ = lean_apply_2(v___y_3830_, v___x_3886_, lean_box(0));
v___x_3888_ = l_Lake_computeBinFileHash(v_path_3823_);
if (lean_obj_tag(v___x_3888_) == 0)
{
lean_object* v_a_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3913_; 
v_a_3889_ = lean_ctor_get(v___x_3888_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3891_ = v___x_3888_;
v_isShared_3892_ = v_isSharedCheck_3913_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_a_3889_);
lean_dec(v___x_3888_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3913_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
uint64_t v___x_3893_; uint8_t v___x_3894_; 
v___x_3893_ = lean_unbox_uint64(v_a_3889_);
v___x_3894_ = lean_uint64_dec_eq(v___x_3893_, v_hash_3874_);
if (v___x_3894_ == 0)
{
uint64_t v___x_3895_; 
lean_del_object(v___x_3891_);
v___x_3895_ = lean_unbox_uint64(v_a_3889_);
lean_dec(v_a_3889_);
v___y_3833_ = v___x_3895_;
goto v___jp_3832_;
}
else
{
if (v___x_3827_ == 0)
{
uint8_t v_didError_3896_; lean_object* v_numSuccesses_3897_; lean_object* v___x_3899_; uint8_t v_isShared_3900_; uint8_t v_isSharedCheck_3911_; 
lean_dec(v_a_3889_);
lean_dec_ref(v_path_3823_);
v_didError_3896_ = lean_ctor_get_uint8(v___y_3829_, sizeof(void*)*1);
v_numSuccesses_3897_ = lean_ctor_get(v___y_3829_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v___y_3829_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3899_ = v___y_3829_;
v_isShared_3900_ = v_isSharedCheck_3911_;
goto v_resetjp_3898_;
}
else
{
lean_inc(v_numSuccesses_3897_);
lean_dec(v___y_3829_);
v___x_3899_ = lean_box(0);
v_isShared_3900_ = v_isSharedCheck_3911_;
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
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v___x_3903_);
lean_ctor_set_uint8(v_reuseFailAlloc_3910_, sizeof(void*)*1, v_didError_3896_);
v___x_3905_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
lean_object* v___x_3906_; lean_object* v___x_3908_; 
v___x_3906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3906_, 0, v___x_3901_);
lean_ctor_set(v___x_3906_, 1, v___x_3905_);
if (v_isShared_3892_ == 0)
{
lean_ctor_set(v___x_3891_, 0, v___x_3906_);
v___x_3908_ = v___x_3891_;
goto v_reusejp_3907_;
}
else
{
lean_object* v_reuseFailAlloc_3909_; 
v_reuseFailAlloc_3909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3909_, 0, v___x_3906_);
v___x_3908_ = v_reuseFailAlloc_3909_;
goto v_reusejp_3907_;
}
v_reusejp_3907_:
{
return v___x_3908_;
}
}
}
}
else
{
uint64_t v___x_3912_; 
lean_del_object(v___x_3891_);
v___x_3912_ = lean_unbox_uint64(v_a_3889_);
lean_dec(v_a_3889_);
v___y_3833_ = v___x_3912_;
goto v___jp_3832_;
}
}
}
}
else
{
lean_object* v_a_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3926_; 
lean_dec_ref(v___y_3829_);
lean_dec_ref(v_path_3823_);
v_a_3914_ = lean_ctor_get(v___x_3888_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3916_ = v___x_3888_;
v_isShared_3917_ = v_isSharedCheck_3926_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_a_3914_);
lean_dec(v___x_3888_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3926_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
lean_object* v___x_3918_; uint8_t v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3924_; 
v___x_3918_ = lean_io_error_to_string(v_a_3914_);
v___x_3919_ = 3;
v___x_3920_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3920_, 0, v___x_3918_);
lean_ctor_set_uint8(v___x_3920_, sizeof(void*)*1, v___x_3919_);
lean_inc_ref(v___y_3830_);
v___x_3921_ = lean_apply_2(v___y_3830_, v___x_3920_, lean_box(0));
v___x_3922_ = lean_box(0);
if (v_isShared_3917_ == 0)
{
lean_ctor_set(v___x_3916_, 0, v___x_3922_);
v___x_3924_ = v___x_3916_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v___x_3922_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
}
}
v___jp_3927_:
{
uint64_t v_hash_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; uint8_t v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; uint8_t v_didError_3943_; lean_object* v_numSuccesses_3944_; lean_object* v___x_3946_; uint8_t v_isShared_3947_; uint8_t v_isSharedCheck_3956_; 
v_hash_3929_ = lean_ctor_get_uint64(v_descr_3825_, sizeof(void*)*1);
v___x_3930_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___closed__1));
v___x_3931_ = lean_string_append(v___y_3928_, v___x_3930_);
v___x_3932_ = l_Lake_Hash_hex(v_hash_3929_);
v___x_3933_ = lean_string_append(v___x_3931_, v___x_3932_);
lean_dec_ref(v___x_3932_);
v___x_3934_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3935_ = lean_string_append(v___x_3933_, v___x_3934_);
v___x_3936_ = lean_string_append(v___x_3935_, v_path_3823_);
lean_dec_ref(v_path_3823_);
v___x_3937_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3938_ = lean_string_append(v___x_3936_, v___x_3937_);
v___x_3939_ = lean_string_append(v___x_3938_, v_url_3826_);
v___x_3940_ = 1;
v___x_3941_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3941_, 0, v___x_3939_);
lean_ctor_set_uint8(v___x_3941_, sizeof(void*)*1, v___x_3940_);
lean_inc_ref(v___y_3830_);
v___x_3942_ = lean_apply_2(v___y_3830_, v___x_3941_, lean_box(0));
v_didError_3943_ = lean_ctor_get_uint8(v___y_3829_, sizeof(void*)*1);
v_numSuccesses_3944_ = lean_ctor_get(v___y_3829_, 0);
v_isSharedCheck_3956_ = !lean_is_exclusive(v___y_3829_);
if (v_isSharedCheck_3956_ == 0)
{
v___x_3946_ = v___y_3829_;
v_isShared_3947_ = v_isSharedCheck_3956_;
goto v_resetjp_3945_;
}
else
{
lean_inc(v_numSuccesses_3944_);
lean_dec(v___y_3829_);
v___x_3946_ = lean_box(0);
v_isShared_3947_ = v_isSharedCheck_3956_;
goto v_resetjp_3945_;
}
v_resetjp_3945_:
{
lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3952_; 
v___x_3948_ = lean_box(0);
v___x_3949_ = lean_unsigned_to_nat(1u);
v___x_3950_ = lean_nat_add(v_numSuccesses_3944_, v___x_3949_);
lean_dec(v_numSuccesses_3944_);
if (v_isShared_3947_ == 0)
{
lean_ctor_set(v___x_3946_, 0, v___x_3950_);
v___x_3952_ = v___x_3946_;
goto v_reusejp_3951_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v___x_3950_);
lean_ctor_set_uint8(v_reuseFailAlloc_3955_, sizeof(void*)*1, v_didError_3943_);
v___x_3952_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3951_;
}
v_reusejp_3951_:
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3948_);
lean_ctor_set(v___x_3953_, 1, v___x_3952_);
v___x_3954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
return v___x_3954_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___lam__1___boxed(lean_object* v_cfg_3962_, lean_object* v_path_3963_, lean_object* v___x_3964_, lean_object* v_descr_3965_, lean_object* v_url_3966_, lean_object* v___x_3967_, lean_object* v_00___3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_){
_start:
{
uint8_t v___x_28272__boxed_3972_; uint8_t v___x_28275__boxed_3973_; lean_object* v_res_3974_; 
v___x_28272__boxed_3972_ = lean_unbox(v___x_3964_);
v___x_28275__boxed_3973_ = lean_unbox(v___x_3967_);
v_res_3974_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___lam__1(v_cfg_3962_, v_path_3963_, v___x_28272__boxed_3972_, v_descr_3965_, v_url_3966_, v___x_28275__boxed_3973_, v_00___3968_, v___y_3969_, v___y_3970_);
lean_dec_ref(v___y_3970_);
lean_dec_ref(v_url_3966_);
lean_dec_ref(v_descr_3965_);
return v_res_3974_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(lean_object* v_a_3981_, lean_object* v_cfg_3982_, lean_object* v_h_3983_, lean_object* v_hOut_3984_, lean_object* v_s_3985_){
_start:
{
lean_object* v___y_3988_; lean_object* v___x_4000_; 
v___x_4000_ = lean_io_prim_handle_get_line(v_h_3983_);
if (lean_obj_tag(v___x_4000_) == 0)
{
lean_object* v_a_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4099_; 
v_a_4001_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4099_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4099_ == 0)
{
v___x_4003_ = v___x_4000_;
v_isShared_4004_ = v_isSharedCheck_4099_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_a_4001_);
lean_dec(v___x_4000_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4099_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___y_4006_; lean_object* v___y_4007_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v_startInclusive_4013_; lean_object* v_endExclusive_4014_; lean_object* v___x_4015_; uint8_t v___x_4016_; 
v___x_4009_ = lean_unsigned_to_nat(0u);
v___x_4010_ = lean_string_utf8_byte_size(v_a_4001_);
lean_inc(v_a_4001_);
v___x_4011_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4011_, 0, v_a_4001_);
lean_ctor_set(v___x_4011_, 1, v___x_4009_);
lean_ctor_set(v___x_4011_, 2, v___x_4010_);
v___x_4012_ = l_String_Slice_trimAscii(v___x_4011_);
v_startInclusive_4013_ = lean_ctor_get(v___x_4012_, 1);
lean_inc(v_startInclusive_4013_);
v_endExclusive_4014_ = lean_ctor_get(v___x_4012_, 2);
lean_inc(v_endExclusive_4014_);
v___x_4015_ = lean_nat_sub(v_endExclusive_4014_, v_startInclusive_4013_);
lean_dec(v_startInclusive_4013_);
lean_dec(v_endExclusive_4014_);
v___x_4016_ = lean_nat_dec_eq(v___x_4015_, v___x_4009_);
lean_dec(v___x_4015_);
if (v___x_4016_ == 0)
{
uint8_t v___x_4017_; lean_object* v___y_4019_; lean_object* v_a_4037_; lean_object* v___x_4056_; 
lean_del_object(v___x_4003_);
v___x_4017_ = 1;
lean_inc(v_a_4001_);
v___x_4056_ = l_Lean_Json_parse(v_a_4001_);
if (lean_obj_tag(v___x_4056_) == 0)
{
lean_object* v_a_4057_; 
lean_dec(v_a_4001_);
v_a_4057_ = lean_ctor_get(v___x_4056_, 0);
lean_inc(v_a_4057_);
lean_dec_ref(v___x_4056_);
v_a_4037_ = v_a_4057_;
goto v___jp_4036_;
}
else
{
lean_object* v_a_4058_; lean_object* v___x_4059_; 
v_a_4058_ = lean_ctor_get(v___x_4056_, 0);
lean_inc(v_a_4058_);
lean_dec_ref(v___x_4056_);
v___x_4059_ = l_Lean_Json_getObj_x3f(v_a_4058_);
if (lean_obj_tag(v___x_4059_) == 0)
{
lean_object* v_a_4060_; 
lean_dec(v_a_4001_);
v_a_4060_ = lean_ctor_get(v___x_4059_, 0);
lean_inc(v_a_4060_);
lean_dec_ref(v___x_4059_);
v_a_4037_ = v_a_4060_;
goto v___jp_4036_;
}
else
{
lean_object* v_a_4061_; lean_object* v___x_4062_; 
v_a_4061_ = lean_ctor_get(v___x_4059_, 0);
lean_inc(v_a_4061_);
lean_dec_ref(v___x_4059_);
v___x_4062_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_3982_, v_a_4061_);
if (lean_obj_tag(v___x_4062_) == 1)
{
lean_object* v_val_4063_; lean_object* v_url_4064_; lean_object* v_path_4065_; lean_object* v_descr_4066_; lean_object* v___x_4067_; lean_object* v___f_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; 
lean_dec_ref(v___x_4012_);
v_val_4063_ = lean_ctor_get(v___x_4062_, 0);
lean_inc_n(v_val_4063_, 2);
lean_dec_ref(v___x_4062_);
v_url_4064_ = lean_ctor_get(v_val_4063_, 0);
v_path_4065_ = lean_ctor_get(v_val_4063_, 1);
v_descr_4066_ = lean_ctor_get(v_val_4063_, 2);
v___x_4067_ = lean_box(v___x_4017_);
lean_inc(v_a_4001_);
lean_inc(v_a_4061_);
lean_inc(v_hOut_3984_);
lean_inc_ref(v_cfg_3982_);
v___f_4068_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___boxed), 10, 6);
lean_closure_set(v___f_4068_, 0, v_cfg_3982_);
lean_closure_set(v___f_4068_, 1, v_hOut_3984_);
lean_closure_set(v___f_4068_, 2, v_val_4063_);
lean_closure_set(v___f_4068_, 3, v_a_4061_);
lean_closure_set(v___f_4068_, 4, v_a_4001_);
lean_closure_set(v___f_4068_, 5, v___x_4067_);
v___x_4069_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_4070_ = l_Lake_JsonObject_getJson_x3f(v_a_4061_, v___x_4069_);
if (lean_obj_tag(v___x_4070_) == 0)
{
lean_object* v___x_4071_; 
lean_dec(v_val_4063_);
lean_dec(v_a_4061_);
lean_dec(v_a_4001_);
v___x_4071_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__4));
v___y_4006_ = v___f_4068_;
v___y_4007_ = v___x_4071_;
goto v___jp_4005_;
}
else
{
lean_object* v_val_4072_; lean_object* v___x_4073_; 
v_val_4072_ = lean_ctor_get(v___x_4070_, 0);
lean_inc(v_val_4072_);
lean_dec_ref(v___x_4070_);
v___x_4073_ = l_Lean_Json_getNat_x3f(v_val_4072_);
if (lean_obj_tag(v___x_4073_) == 0)
{
lean_object* v_a_4074_; lean_object* v___x_4076_; uint8_t v_isShared_4077_; uint8_t v_isSharedCheck_4083_; 
lean_dec(v_val_4063_);
lean_dec(v_a_4061_);
lean_dec(v_a_4001_);
v_a_4074_ = lean_ctor_get(v___x_4073_, 0);
v_isSharedCheck_4083_ = !lean_is_exclusive(v___x_4073_);
if (v_isSharedCheck_4083_ == 0)
{
v___x_4076_ = v___x_4073_;
v_isShared_4077_ = v_isSharedCheck_4083_;
goto v_resetjp_4075_;
}
else
{
lean_inc(v_a_4074_);
lean_dec(v___x_4073_);
v___x_4076_ = lean_box(0);
v_isShared_4077_ = v_isSharedCheck_4083_;
goto v_resetjp_4075_;
}
v_resetjp_4075_:
{
lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4081_; 
v___x_4078_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_4079_ = lean_string_append(v___x_4078_, v_a_4074_);
lean_dec(v_a_4074_);
if (v_isShared_4077_ == 0)
{
lean_ctor_set(v___x_4076_, 0, v___x_4079_);
v___x_4081_ = v___x_4076_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v___x_4079_);
v___x_4081_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
v___y_4006_ = v___f_4068_;
v___y_4007_ = v___x_4081_;
goto v___jp_4005_;
}
}
}
else
{
if (lean_obj_tag(v___x_4073_) == 1)
{
lean_object* v_a_4084_; lean_object* v___x_4085_; uint8_t v___x_4086_; 
lean_dec_ref(v___f_4068_);
v_a_4084_ = lean_ctor_get(v___x_4073_, 0);
lean_inc(v_a_4084_);
v___x_4085_ = lean_unsigned_to_nat(200u);
v___x_4086_ = lean_nat_dec_eq(v_a_4084_, v___x_4085_);
if (v___x_4086_ == 0)
{
lean_object* v___x_4087_; uint8_t v___x_4088_; 
v___x_4087_ = lean_unsigned_to_nat(201u);
v___x_4088_ = lean_nat_dec_eq(v_a_4084_, v___x_4087_);
lean_dec(v_a_4084_);
if (v___x_4088_ == 0)
{
lean_object* v___x_4089_; 
lean_inc_ref(v_cfg_3982_);
v___x_4089_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_3982_, v_hOut_3984_, v_val_4063_, v_a_4061_, v_a_4001_, v___x_4017_, v___x_4073_, v_s_3985_, v_a_3981_);
lean_dec(v_a_4061_);
lean_dec(v_val_4063_);
v___y_3988_ = v___x_4089_;
goto v___jp_3987_;
}
else
{
lean_object* v___x_4090_; lean_object* v___x_4091_; 
lean_inc_ref(v_descr_4066_);
lean_inc_ref(v_path_4065_);
lean_inc_ref(v_url_4064_);
lean_dec_ref(v___x_4073_);
lean_dec(v_val_4063_);
lean_dec(v_a_4061_);
lean_dec(v_a_4001_);
v___x_4090_ = lean_box(0);
lean_inc_ref(v_cfg_3982_);
v___x_4091_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___lam__1(v_cfg_3982_, v_path_4065_, v___x_4017_, v_descr_4066_, v_url_4064_, v___x_4016_, v___x_4090_, v_s_3985_, v_a_3981_);
lean_dec_ref(v_url_4064_);
lean_dec_ref(v_descr_4066_);
v___y_3988_ = v___x_4091_;
goto v___jp_3987_;
}
}
else
{
lean_object* v___x_4092_; lean_object* v___x_4093_; 
lean_inc_ref(v_descr_4066_);
lean_inc_ref(v_path_4065_);
lean_inc_ref(v_url_4064_);
lean_dec_ref(v___x_4073_);
lean_dec(v_a_4084_);
lean_dec(v_val_4063_);
lean_dec(v_a_4061_);
lean_dec(v_a_4001_);
v___x_4092_ = lean_box(0);
lean_inc_ref(v_cfg_3982_);
v___x_4093_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___lam__1(v_cfg_3982_, v_path_4065_, v___x_4017_, v_descr_4066_, v_url_4064_, v___x_4016_, v___x_4092_, v_s_3985_, v_a_3981_);
lean_dec_ref(v_url_4064_);
lean_dec_ref(v_descr_4066_);
v___y_3988_ = v___x_4093_;
goto v___jp_3987_;
}
}
else
{
lean_dec(v_val_4063_);
lean_dec(v_a_4061_);
lean_dec(v_a_4001_);
v___y_4006_ = v___f_4068_;
v___y_4007_ = v___x_4073_;
goto v___jp_4005_;
}
}
}
}
else
{
lean_object* v_scope_4094_; lean_object* v_s_4095_; 
lean_dec(v___x_4062_);
lean_dec(v_a_4061_);
lean_dec(v_a_4001_);
v_scope_4094_ = lean_ctor_get(v_cfg_3982_, 0);
v_s_4095_ = lean_ctor_get(v_scope_4094_, 0);
lean_inc_ref(v_s_4095_);
v___y_4019_ = v_s_4095_;
goto v___jp_4018_;
}
}
}
v___jp_4018_:
{
lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; uint8_t v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v_numSuccesses_4027_; lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4035_; 
v___x_4020_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__0));
v___x_4021_ = lean_string_append(v___y_4019_, v___x_4020_);
v___x_4022_ = l_String_Slice_toString(v___x_4012_);
lean_dec_ref(v___x_4012_);
v___x_4023_ = lean_string_append(v___x_4021_, v___x_4022_);
lean_dec_ref(v___x_4022_);
v___x_4024_ = 3;
v___x_4025_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4025_, 0, v___x_4023_);
lean_ctor_set_uint8(v___x_4025_, sizeof(void*)*1, v___x_4024_);
lean_inc_ref(v_a_3981_);
v___x_4026_ = lean_apply_2(v_a_3981_, v___x_4025_, lean_box(0));
v_numSuccesses_4027_ = lean_ctor_get(v_s_3985_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v_s_3985_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4029_ = v_s_3985_;
v_isShared_4030_ = v_isSharedCheck_4035_;
goto v_resetjp_4028_;
}
else
{
lean_inc(v_numSuccesses_4027_);
lean_dec(v_s_3985_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4035_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4032_; 
if (v_isShared_4030_ == 0)
{
v___x_4032_ = v___x_4029_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_numSuccesses_4027_);
v___x_4032_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
lean_ctor_set_uint8(v___x_4032_, sizeof(void*)*1, v___x_4017_);
v_s_3985_ = v___x_4032_;
goto _start;
}
}
}
v___jp_4036_:
{
lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; uint8_t v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v_numSuccesses_4047_; lean_object* v___x_4049_; uint8_t v_isShared_4050_; uint8_t v_isSharedCheck_4055_; 
v___x_4038_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__1));
v___x_4039_ = lean_string_append(v___x_4038_, v_a_4037_);
lean_dec_ref(v_a_4037_);
v___x_4040_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2));
v___x_4041_ = lean_string_append(v___x_4039_, v___x_4040_);
v___x_4042_ = l_String_Slice_toString(v___x_4012_);
lean_dec_ref(v___x_4012_);
v___x_4043_ = lean_string_append(v___x_4041_, v___x_4042_);
lean_dec_ref(v___x_4042_);
v___x_4044_ = 3;
v___x_4045_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4045_, 0, v___x_4043_);
lean_ctor_set_uint8(v___x_4045_, sizeof(void*)*1, v___x_4044_);
lean_inc_ref(v_a_3981_);
v___x_4046_ = lean_apply_2(v_a_3981_, v___x_4045_, lean_box(0));
v_numSuccesses_4047_ = lean_ctor_get(v_s_3985_, 0);
v_isSharedCheck_4055_ = !lean_is_exclusive(v_s_3985_);
if (v_isSharedCheck_4055_ == 0)
{
v___x_4049_ = v_s_3985_;
v_isShared_4050_ = v_isSharedCheck_4055_;
goto v_resetjp_4048_;
}
else
{
lean_inc(v_numSuccesses_4047_);
lean_dec(v_s_3985_);
v___x_4049_ = lean_box(0);
v_isShared_4050_ = v_isSharedCheck_4055_;
goto v_resetjp_4048_;
}
v_resetjp_4048_:
{
lean_object* v___x_4052_; 
if (v_isShared_4050_ == 0)
{
v___x_4052_ = v___x_4049_;
goto v_reusejp_4051_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v_numSuccesses_4047_);
v___x_4052_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4051_;
}
v_reusejp_4051_:
{
lean_ctor_set_uint8(v___x_4052_, sizeof(void*)*1, v___x_4017_);
v_s_3985_ = v___x_4052_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_4097_; 
lean_dec_ref(v___x_4012_);
lean_dec(v_a_4001_);
lean_dec(v_hOut_3984_);
lean_dec_ref(v_cfg_3982_);
if (v_isShared_4004_ == 0)
{
lean_ctor_set(v___x_4003_, 0, v_s_3985_);
v___x_4097_ = v___x_4003_;
goto v_reusejp_4096_;
}
else
{
lean_object* v_reuseFailAlloc_4098_; 
v_reuseFailAlloc_4098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4098_, 0, v_s_3985_);
v___x_4097_ = v_reuseFailAlloc_4098_;
goto v_reusejp_4096_;
}
v_reusejp_4096_:
{
return v___x_4097_;
}
}
v___jp_4005_:
{
lean_object* v___x_4008_; 
lean_inc_ref(v_a_3981_);
v___x_4008_ = lean_apply_4(v___y_4006_, v___y_4007_, v_s_3985_, v_a_3981_, lean_box(0));
v___y_3988_ = v___x_4008_;
goto v___jp_3987_;
}
}
}
else
{
lean_object* v_a_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4112_; 
lean_dec_ref(v_s_3985_);
lean_dec(v_hOut_3984_);
lean_dec_ref(v_cfg_3982_);
v_a_4100_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4112_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4112_ == 0)
{
v___x_4102_ = v___x_4000_;
v_isShared_4103_ = v_isSharedCheck_4112_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_a_4100_);
lean_dec(v___x_4000_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4112_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4104_; uint8_t v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4110_; 
v___x_4104_ = lean_io_error_to_string(v_a_4100_);
v___x_4105_ = 3;
v___x_4106_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4106_, 0, v___x_4104_);
lean_ctor_set_uint8(v___x_4106_, sizeof(void*)*1, v___x_4105_);
lean_inc_ref(v_a_3981_);
v___x_4107_ = lean_apply_2(v_a_3981_, v___x_4106_, lean_box(0));
v___x_4108_ = lean_box(0);
if (v_isShared_4103_ == 0)
{
lean_ctor_set(v___x_4102_, 0, v___x_4108_);
v___x_4110_ = v___x_4102_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4111_; 
v_reuseFailAlloc_4111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4111_, 0, v___x_4108_);
v___x_4110_ = v_reuseFailAlloc_4111_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
return v___x_4110_;
}
}
}
v___jp_3987_:
{
if (lean_obj_tag(v___y_3988_) == 0)
{
lean_object* v_a_3989_; lean_object* v_snd_3990_; 
v_a_3989_ = lean_ctor_get(v___y_3988_, 0);
lean_inc(v_a_3989_);
lean_dec_ref(v___y_3988_);
v_snd_3990_ = lean_ctor_get(v_a_3989_, 1);
lean_inc(v_snd_3990_);
lean_dec(v_a_3989_);
v_s_3985_ = v_snd_3990_;
goto _start;
}
else
{
lean_object* v_a_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_3999_; 
lean_dec(v_hOut_3984_);
lean_dec_ref(v_cfg_3982_);
v_a_3992_ = lean_ctor_get(v___y_3988_, 0);
v_isSharedCheck_3999_ = !lean_is_exclusive(v___y_3988_);
if (v_isSharedCheck_3999_ == 0)
{
v___x_3994_ = v___y_3988_;
v_isShared_3995_ = v_isSharedCheck_3999_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_a_3992_);
lean_dec(v___y_3988_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_3999_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v___x_3997_; 
if (v_isShared_3995_ == 0)
{
v___x_3997_ = v___x_3994_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3998_; 
v_reuseFailAlloc_3998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3998_, 0, v_a_3992_);
v___x_3997_ = v_reuseFailAlloc_3998_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
return v___x_3997_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___boxed(lean_object* v_a_4113_, lean_object* v_cfg_4114_, lean_object* v_h_4115_, lean_object* v_hOut_4116_, lean_object* v_s_4117_, lean_object* v_a_4118_){
_start:
{
lean_object* v_res_4119_; 
v_res_4119_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(v_a_4113_, v_cfg_4114_, v_h_4115_, v_hOut_4116_, v_s_4117_);
lean_dec(v_h_4115_);
lean_dec_ref(v_a_4113_);
return v_res_4119_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(lean_object* v_cfg_4120_, lean_object* v_h_4121_, lean_object* v_hOut_4122_, lean_object* v_s_4123_, lean_object* v_a_4124_){
_start:
{
lean_object* v___y_4127_; lean_object* v___x_4139_; 
v___x_4139_ = lean_io_prim_handle_get_line(v_h_4121_);
if (lean_obj_tag(v___x_4139_) == 0)
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4235_; 
v_a_4140_ = lean_ctor_get(v___x_4139_, 0);
v_isSharedCheck_4235_ = !lean_is_exclusive(v___x_4139_);
if (v_isSharedCheck_4235_ == 0)
{
v___x_4142_ = v___x_4139_;
v_isShared_4143_ = v_isSharedCheck_4235_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v___x_4139_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4235_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v_startInclusive_4148_; lean_object* v_endExclusive_4149_; lean_object* v___x_4150_; uint8_t v___x_4151_; 
v___x_4144_ = lean_unsigned_to_nat(0u);
v___x_4145_ = lean_string_utf8_byte_size(v_a_4140_);
lean_inc(v_a_4140_);
v___x_4146_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4146_, 0, v_a_4140_);
lean_ctor_set(v___x_4146_, 1, v___x_4144_);
lean_ctor_set(v___x_4146_, 2, v___x_4145_);
v___x_4147_ = l_String_Slice_trimAscii(v___x_4146_);
v_startInclusive_4148_ = lean_ctor_get(v___x_4147_, 1);
lean_inc(v_startInclusive_4148_);
v_endExclusive_4149_ = lean_ctor_get(v___x_4147_, 2);
lean_inc(v_endExclusive_4149_);
v___x_4150_ = lean_nat_sub(v_endExclusive_4149_, v_startInclusive_4148_);
lean_dec(v_startInclusive_4148_);
lean_dec(v_endExclusive_4149_);
v___x_4151_ = lean_nat_dec_eq(v___x_4150_, v___x_4144_);
lean_dec(v___x_4150_);
if (v___x_4151_ == 0)
{
uint8_t v___x_4152_; lean_object* v___y_4154_; lean_object* v_a_4172_; lean_object* v___x_4191_; 
lean_del_object(v___x_4142_);
v___x_4152_ = 1;
lean_inc(v_a_4140_);
v___x_4191_ = l_Lean_Json_parse(v_a_4140_);
if (lean_obj_tag(v___x_4191_) == 0)
{
lean_object* v_a_4192_; 
lean_dec(v_a_4140_);
v_a_4192_ = lean_ctor_get(v___x_4191_, 0);
lean_inc(v_a_4192_);
lean_dec_ref(v___x_4191_);
v_a_4172_ = v_a_4192_;
goto v___jp_4171_;
}
else
{
lean_object* v_a_4193_; lean_object* v___x_4194_; 
v_a_4193_ = lean_ctor_get(v___x_4191_, 0);
lean_inc(v_a_4193_);
lean_dec_ref(v___x_4191_);
v___x_4194_ = l_Lean_Json_getObj_x3f(v_a_4193_);
if (lean_obj_tag(v___x_4194_) == 0)
{
lean_object* v_a_4195_; 
lean_dec(v_a_4140_);
v_a_4195_ = lean_ctor_get(v___x_4194_, 0);
lean_inc(v_a_4195_);
lean_dec_ref(v___x_4194_);
v_a_4172_ = v_a_4195_;
goto v___jp_4171_;
}
else
{
lean_object* v_a_4196_; lean_object* v___x_4197_; 
v_a_4196_ = lean_ctor_get(v___x_4194_, 0);
lean_inc(v_a_4196_);
lean_dec_ref(v___x_4194_);
v___x_4197_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_4120_, v_a_4196_);
if (lean_obj_tag(v___x_4197_) == 1)
{
lean_object* v_val_4198_; lean_object* v_url_4199_; lean_object* v_path_4200_; lean_object* v_descr_4201_; lean_object* v___y_4203_; lean_object* v___x_4205_; lean_object* v___x_4206_; 
lean_dec_ref(v___x_4147_);
v_val_4198_ = lean_ctor_get(v___x_4197_, 0);
lean_inc(v_val_4198_);
lean_dec_ref(v___x_4197_);
v_url_4199_ = lean_ctor_get(v_val_4198_, 0);
v_path_4200_ = lean_ctor_get(v_val_4198_, 1);
v_descr_4201_ = lean_ctor_get(v_val_4198_, 2);
v___x_4205_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_4206_ = l_Lake_JsonObject_getJson_x3f(v_a_4196_, v___x_4205_);
if (lean_obj_tag(v___x_4206_) == 0)
{
lean_object* v___x_4207_; 
v___x_4207_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__4));
v___y_4203_ = v___x_4207_;
goto v___jp_4202_;
}
else
{
lean_object* v_val_4208_; lean_object* v___x_4209_; 
v_val_4208_ = lean_ctor_get(v___x_4206_, 0);
lean_inc(v_val_4208_);
lean_dec_ref(v___x_4206_);
v___x_4209_ = l_Lean_Json_getNat_x3f(v_val_4208_);
if (lean_obj_tag(v___x_4209_) == 0)
{
lean_object* v_a_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4219_; 
v_a_4210_ = lean_ctor_get(v___x_4209_, 0);
v_isSharedCheck_4219_ = !lean_is_exclusive(v___x_4209_);
if (v_isSharedCheck_4219_ == 0)
{
v___x_4212_ = v___x_4209_;
v_isShared_4213_ = v_isSharedCheck_4219_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_a_4210_);
lean_dec(v___x_4209_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4219_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4217_; 
v___x_4214_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_4215_ = lean_string_append(v___x_4214_, v_a_4210_);
lean_dec(v_a_4210_);
if (v_isShared_4213_ == 0)
{
lean_ctor_set(v___x_4212_, 0, v___x_4215_);
v___x_4217_ = v___x_4212_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4218_; 
v_reuseFailAlloc_4218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4218_, 0, v___x_4215_);
v___x_4217_ = v_reuseFailAlloc_4218_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
v___y_4203_ = v___x_4217_;
goto v___jp_4202_;
}
}
}
else
{
if (lean_obj_tag(v___x_4209_) == 1)
{
lean_object* v_a_4220_; lean_object* v___x_4221_; uint8_t v___x_4222_; 
v_a_4220_ = lean_ctor_get(v___x_4209_, 0);
lean_inc(v_a_4220_);
v___x_4221_ = lean_unsigned_to_nat(200u);
v___x_4222_ = lean_nat_dec_eq(v_a_4220_, v___x_4221_);
if (v___x_4222_ == 0)
{
lean_object* v___x_4223_; uint8_t v___x_4224_; 
v___x_4223_ = lean_unsigned_to_nat(201u);
v___x_4224_ = lean_nat_dec_eq(v_a_4220_, v___x_4223_);
lean_dec(v_a_4220_);
if (v___x_4224_ == 0)
{
lean_object* v___x_4225_; 
lean_inc_ref(v_cfg_4120_);
v___x_4225_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_4120_, v_hOut_4122_, v_val_4198_, v_a_4196_, v_a_4140_, v___x_4152_, v___x_4209_, v_s_4123_, v_a_4124_);
lean_dec(v_a_4196_);
lean_dec(v_val_4198_);
v___y_4127_ = v___x_4225_;
goto v___jp_4126_;
}
else
{
lean_object* v___x_4226_; lean_object* v___x_4227_; 
lean_inc_ref(v_descr_4201_);
lean_inc_ref(v_path_4200_);
lean_inc_ref(v_url_4199_);
lean_dec_ref(v___x_4209_);
lean_dec(v_val_4198_);
lean_dec(v_a_4196_);
lean_dec(v_a_4140_);
v___x_4226_ = lean_box(0);
lean_inc_ref(v_cfg_4120_);
v___x_4227_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4120_, v_path_4200_, v___x_4152_, v_descr_4201_, v_url_4199_, v___x_4151_, v___x_4226_, v_s_4123_, v_a_4124_);
lean_dec_ref(v_url_4199_);
lean_dec_ref(v_descr_4201_);
v___y_4127_ = v___x_4227_;
goto v___jp_4126_;
}
}
else
{
lean_object* v___x_4228_; lean_object* v___x_4229_; 
lean_inc_ref(v_descr_4201_);
lean_inc_ref(v_path_4200_);
lean_inc_ref(v_url_4199_);
lean_dec(v_a_4220_);
lean_dec_ref(v___x_4209_);
lean_dec(v_val_4198_);
lean_dec(v_a_4196_);
lean_dec(v_a_4140_);
v___x_4228_ = lean_box(0);
lean_inc_ref(v_cfg_4120_);
v___x_4229_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4120_, v_path_4200_, v___x_4152_, v_descr_4201_, v_url_4199_, v___x_4151_, v___x_4228_, v_s_4123_, v_a_4124_);
lean_dec_ref(v_url_4199_);
lean_dec_ref(v_descr_4201_);
v___y_4127_ = v___x_4229_;
goto v___jp_4126_;
}
}
else
{
v___y_4203_ = v___x_4209_;
goto v___jp_4202_;
}
}
}
v___jp_4202_:
{
lean_object* v___x_4204_; 
lean_inc_ref(v_cfg_4120_);
v___x_4204_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_4120_, v_hOut_4122_, v_val_4198_, v_a_4196_, v_a_4140_, v___x_4152_, v___y_4203_, v_s_4123_, v_a_4124_);
lean_dec(v_a_4196_);
lean_dec(v_val_4198_);
v___y_4127_ = v___x_4204_;
goto v___jp_4126_;
}
}
else
{
lean_object* v_scope_4230_; lean_object* v_s_4231_; 
lean_dec(v___x_4197_);
lean_dec(v_a_4196_);
lean_dec(v_a_4140_);
v_scope_4230_ = lean_ctor_get(v_cfg_4120_, 0);
v_s_4231_ = lean_ctor_get(v_scope_4230_, 0);
lean_inc_ref(v_s_4231_);
v___y_4154_ = v_s_4231_;
goto v___jp_4153_;
}
}
}
v___jp_4153_:
{
lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; uint8_t v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v_numSuccesses_4162_; lean_object* v___x_4164_; uint8_t v_isShared_4165_; uint8_t v_isSharedCheck_4170_; 
v___x_4155_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__0));
v___x_4156_ = lean_string_append(v___y_4154_, v___x_4155_);
v___x_4157_ = l_String_Slice_toString(v___x_4147_);
lean_dec_ref(v___x_4147_);
v___x_4158_ = lean_string_append(v___x_4156_, v___x_4157_);
lean_dec_ref(v___x_4157_);
v___x_4159_ = 3;
v___x_4160_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4160_, 0, v___x_4158_);
lean_ctor_set_uint8(v___x_4160_, sizeof(void*)*1, v___x_4159_);
lean_inc_ref(v_a_4124_);
v___x_4161_ = lean_apply_2(v_a_4124_, v___x_4160_, lean_box(0));
v_numSuccesses_4162_ = lean_ctor_get(v_s_4123_, 0);
v_isSharedCheck_4170_ = !lean_is_exclusive(v_s_4123_);
if (v_isSharedCheck_4170_ == 0)
{
v___x_4164_ = v_s_4123_;
v_isShared_4165_ = v_isSharedCheck_4170_;
goto v_resetjp_4163_;
}
else
{
lean_inc(v_numSuccesses_4162_);
lean_dec(v_s_4123_);
v___x_4164_ = lean_box(0);
v_isShared_4165_ = v_isSharedCheck_4170_;
goto v_resetjp_4163_;
}
v_resetjp_4163_:
{
lean_object* v___x_4167_; 
if (v_isShared_4165_ == 0)
{
v___x_4167_ = v___x_4164_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4169_; 
v_reuseFailAlloc_4169_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4169_, 0, v_numSuccesses_4162_);
v___x_4167_ = v_reuseFailAlloc_4169_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
lean_object* v___x_4168_; 
lean_ctor_set_uint8(v___x_4167_, sizeof(void*)*1, v___x_4152_);
v___x_4168_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(v_a_4124_, v_cfg_4120_, v_h_4121_, v_hOut_4122_, v___x_4167_);
return v___x_4168_;
}
}
}
v___jp_4171_:
{
lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; uint8_t v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v_numSuccesses_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4190_; 
v___x_4173_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__1));
v___x_4174_ = lean_string_append(v___x_4173_, v_a_4172_);
lean_dec_ref(v_a_4172_);
v___x_4175_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2));
v___x_4176_ = lean_string_append(v___x_4174_, v___x_4175_);
v___x_4177_ = l_String_Slice_toString(v___x_4147_);
lean_dec_ref(v___x_4147_);
v___x_4178_ = lean_string_append(v___x_4176_, v___x_4177_);
lean_dec_ref(v___x_4177_);
v___x_4179_ = 3;
v___x_4180_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4180_, 0, v___x_4178_);
lean_ctor_set_uint8(v___x_4180_, sizeof(void*)*1, v___x_4179_);
lean_inc_ref(v_a_4124_);
v___x_4181_ = lean_apply_2(v_a_4124_, v___x_4180_, lean_box(0));
v_numSuccesses_4182_ = lean_ctor_get(v_s_4123_, 0);
v_isSharedCheck_4190_ = !lean_is_exclusive(v_s_4123_);
if (v_isSharedCheck_4190_ == 0)
{
v___x_4184_ = v_s_4123_;
v_isShared_4185_ = v_isSharedCheck_4190_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_numSuccesses_4182_);
lean_dec(v_s_4123_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4190_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v___x_4187_; 
if (v_isShared_4185_ == 0)
{
v___x_4187_ = v___x_4184_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4189_; 
v_reuseFailAlloc_4189_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4189_, 0, v_numSuccesses_4182_);
v___x_4187_ = v_reuseFailAlloc_4189_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
lean_object* v___x_4188_; 
lean_ctor_set_uint8(v___x_4187_, sizeof(void*)*1, v___x_4152_);
v___x_4188_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(v_a_4124_, v_cfg_4120_, v_h_4121_, v_hOut_4122_, v___x_4187_);
return v___x_4188_;
}
}
}
}
else
{
lean_object* v___x_4233_; 
lean_dec_ref(v___x_4147_);
lean_dec(v_a_4140_);
lean_dec(v_hOut_4122_);
lean_dec_ref(v_cfg_4120_);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 0, v_s_4123_);
v___x_4233_ = v___x_4142_;
goto v_reusejp_4232_;
}
else
{
lean_object* v_reuseFailAlloc_4234_; 
v_reuseFailAlloc_4234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4234_, 0, v_s_4123_);
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
else
{
lean_object* v_a_4236_; lean_object* v___x_4238_; uint8_t v_isShared_4239_; uint8_t v_isSharedCheck_4248_; 
lean_dec_ref(v_s_4123_);
lean_dec(v_hOut_4122_);
lean_dec_ref(v_cfg_4120_);
v_a_4236_ = lean_ctor_get(v___x_4139_, 0);
v_isSharedCheck_4248_ = !lean_is_exclusive(v___x_4139_);
if (v_isSharedCheck_4248_ == 0)
{
v___x_4238_ = v___x_4139_;
v_isShared_4239_ = v_isSharedCheck_4248_;
goto v_resetjp_4237_;
}
else
{
lean_inc(v_a_4236_);
lean_dec(v___x_4139_);
v___x_4238_ = lean_box(0);
v_isShared_4239_ = v_isSharedCheck_4248_;
goto v_resetjp_4237_;
}
v_resetjp_4237_:
{
lean_object* v___x_4240_; uint8_t v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4246_; 
v___x_4240_ = lean_io_error_to_string(v_a_4236_);
v___x_4241_ = 3;
v___x_4242_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4242_, 0, v___x_4240_);
lean_ctor_set_uint8(v___x_4242_, sizeof(void*)*1, v___x_4241_);
lean_inc_ref(v_a_4124_);
v___x_4243_ = lean_apply_2(v_a_4124_, v___x_4242_, lean_box(0));
v___x_4244_ = lean_box(0);
if (v_isShared_4239_ == 0)
{
lean_ctor_set(v___x_4238_, 0, v___x_4244_);
v___x_4246_ = v___x_4238_;
goto v_reusejp_4245_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v___x_4244_);
v___x_4246_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4245_;
}
v_reusejp_4245_:
{
return v___x_4246_;
}
}
}
v___jp_4126_:
{
if (lean_obj_tag(v___y_4127_) == 0)
{
lean_object* v_a_4128_; lean_object* v_snd_4129_; lean_object* v___x_4130_; 
v_a_4128_ = lean_ctor_get(v___y_4127_, 0);
lean_inc(v_a_4128_);
lean_dec_ref(v___y_4127_);
v_snd_4129_ = lean_ctor_get(v_a_4128_, 1);
lean_inc(v_snd_4129_);
lean_dec(v_a_4128_);
v___x_4130_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(v_a_4124_, v_cfg_4120_, v_h_4121_, v_hOut_4122_, v_snd_4129_);
return v___x_4130_;
}
else
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4138_; 
lean_dec(v_hOut_4122_);
lean_dec_ref(v_cfg_4120_);
v_a_4131_ = lean_ctor_get(v___y_4127_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v___y_4127_);
if (v_isSharedCheck_4138_ == 0)
{
v___x_4133_ = v___y_4127_;
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v___y_4127_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v_a_4131_);
v___x_4136_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
return v___x_4136_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___boxed(lean_object* v_cfg_4249_, lean_object* v_h_4250_, lean_object* v_hOut_4251_, lean_object* v_s_4252_, lean_object* v_a_4253_, lean_object* v_a_4254_){
_start:
{
lean_object* v_res_4255_; 
v_res_4255_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(v_cfg_4249_, v_h_4250_, v_hOut_4251_, v_s_4252_, v_a_4253_);
lean_dec_ref(v_a_4253_);
lean_dec(v_h_4250_);
return v_res_4255_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(lean_object* v_snd_4256_, lean_object* v___y_4257_, lean_object* v_a_x3f_4258_){
_start:
{
lean_object* v___x_4260_; 
v___x_4260_ = lean_io_remove_file(v_snd_4256_);
if (lean_obj_tag(v___x_4260_) == 0)
{
lean_object* v_a_4261_; lean_object* v___x_4263_; uint8_t v_isShared_4264_; uint8_t v_isSharedCheck_4268_; 
v_a_4261_ = lean_ctor_get(v___x_4260_, 0);
v_isSharedCheck_4268_ = !lean_is_exclusive(v___x_4260_);
if (v_isSharedCheck_4268_ == 0)
{
v___x_4263_ = v___x_4260_;
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
else
{
lean_inc(v_a_4261_);
lean_dec(v___x_4260_);
v___x_4263_ = lean_box(0);
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
v_resetjp_4262_:
{
lean_object* v___x_4266_; 
if (v_isShared_4264_ == 0)
{
v___x_4266_ = v___x_4263_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4267_; 
v_reuseFailAlloc_4267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4267_, 0, v_a_4261_);
v___x_4266_ = v_reuseFailAlloc_4267_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
return v___x_4266_;
}
}
}
else
{
lean_object* v_a_4269_; lean_object* v___x_4271_; uint8_t v_isShared_4272_; uint8_t v_isSharedCheck_4281_; 
v_a_4269_ = lean_ctor_get(v___x_4260_, 0);
v_isSharedCheck_4281_ = !lean_is_exclusive(v___x_4260_);
if (v_isSharedCheck_4281_ == 0)
{
v___x_4271_ = v___x_4260_;
v_isShared_4272_ = v_isSharedCheck_4281_;
goto v_resetjp_4270_;
}
else
{
lean_inc(v_a_4269_);
lean_dec(v___x_4260_);
v___x_4271_ = lean_box(0);
v_isShared_4272_ = v_isSharedCheck_4281_;
goto v_resetjp_4270_;
}
v_resetjp_4270_:
{
lean_object* v___x_4273_; uint8_t v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4279_; 
v___x_4273_ = lean_io_error_to_string(v_a_4269_);
v___x_4274_ = 3;
v___x_4275_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4275_, 0, v___x_4273_);
lean_ctor_set_uint8(v___x_4275_, sizeof(void*)*1, v___x_4274_);
lean_inc_ref(v___y_4257_);
v___x_4276_ = lean_apply_2(v___y_4257_, v___x_4275_, lean_box(0));
v___x_4277_ = lean_box(0);
if (v_isShared_4272_ == 0)
{
lean_ctor_set(v___x_4271_, 0, v___x_4277_);
v___x_4279_ = v___x_4271_;
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
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0___boxed(lean_object* v_snd_4282_, lean_object* v___y_4283_, lean_object* v_a_x3f_4284_, lean_object* v___y_4285_){
_start:
{
lean_object* v_res_4286_; 
v_res_4286_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4282_, v___y_4283_, v_a_x3f_4284_);
lean_dec(v_a_x3f_4284_);
lean_dec_ref(v___y_4283_);
lean_dec_ref(v_snd_4282_);
return v_res_4286_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(lean_object* v_f_4287_, lean_object* v___y_4288_){
_start:
{
lean_object* v___x_4290_; 
v___x_4290_ = lean_io_create_tempfile();
if (lean_obj_tag(v___x_4290_) == 0)
{
lean_object* v_a_4291_; lean_object* v_fst_4292_; lean_object* v_snd_4293_; lean_object* v_r_4294_; 
v_a_4291_ = lean_ctor_get(v___x_4290_, 0);
lean_inc(v_a_4291_);
lean_dec_ref(v___x_4290_);
v_fst_4292_ = lean_ctor_get(v_a_4291_, 0);
lean_inc(v_fst_4292_);
v_snd_4293_ = lean_ctor_get(v_a_4291_, 1);
lean_inc_n(v_snd_4293_, 2);
lean_dec(v_a_4291_);
lean_inc_ref(v___y_4288_);
v_r_4294_ = lean_apply_4(v_f_4287_, v_fst_4292_, v_snd_4293_, v___y_4288_, lean_box(0));
if (lean_obj_tag(v_r_4294_) == 0)
{
lean_object* v_a_4295_; lean_object* v___x_4297_; uint8_t v_isShared_4298_; uint8_t v_isSharedCheck_4319_; 
v_a_4295_ = lean_ctor_get(v_r_4294_, 0);
v_isSharedCheck_4319_ = !lean_is_exclusive(v_r_4294_);
if (v_isSharedCheck_4319_ == 0)
{
v___x_4297_ = v_r_4294_;
v_isShared_4298_ = v_isSharedCheck_4319_;
goto v_resetjp_4296_;
}
else
{
lean_inc(v_a_4295_);
lean_dec(v_r_4294_);
v___x_4297_ = lean_box(0);
v_isShared_4298_ = v_isSharedCheck_4319_;
goto v_resetjp_4296_;
}
v_resetjp_4296_:
{
lean_object* v___x_4300_; 
lean_inc(v_a_4295_);
if (v_isShared_4298_ == 0)
{
lean_ctor_set_tag(v___x_4297_, 1);
v___x_4300_ = v___x_4297_;
goto v_reusejp_4299_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_a_4295_);
v___x_4300_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4299_;
}
v_reusejp_4299_:
{
lean_object* v___x_4301_; 
v___x_4301_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4293_, v___y_4288_, v___x_4300_);
lean_dec_ref(v___x_4300_);
lean_dec(v_snd_4293_);
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_object* v___x_4303_; uint8_t v_isShared_4304_; uint8_t v_isSharedCheck_4308_; 
v_isSharedCheck_4308_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4308_ == 0)
{
lean_object* v_unused_4309_; 
v_unused_4309_ = lean_ctor_get(v___x_4301_, 0);
lean_dec(v_unused_4309_);
v___x_4303_ = v___x_4301_;
v_isShared_4304_ = v_isSharedCheck_4308_;
goto v_resetjp_4302_;
}
else
{
lean_dec(v___x_4301_);
v___x_4303_ = lean_box(0);
v_isShared_4304_ = v_isSharedCheck_4308_;
goto v_resetjp_4302_;
}
v_resetjp_4302_:
{
lean_object* v___x_4306_; 
if (v_isShared_4304_ == 0)
{
lean_ctor_set(v___x_4303_, 0, v_a_4295_);
v___x_4306_ = v___x_4303_;
goto v_reusejp_4305_;
}
else
{
lean_object* v_reuseFailAlloc_4307_; 
v_reuseFailAlloc_4307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4307_, 0, v_a_4295_);
v___x_4306_ = v_reuseFailAlloc_4307_;
goto v_reusejp_4305_;
}
v_reusejp_4305_:
{
return v___x_4306_;
}
}
}
else
{
lean_object* v_a_4310_; lean_object* v___x_4312_; uint8_t v_isShared_4313_; uint8_t v_isSharedCheck_4317_; 
lean_dec(v_a_4295_);
v_a_4310_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4317_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4317_ == 0)
{
v___x_4312_ = v___x_4301_;
v_isShared_4313_ = v_isSharedCheck_4317_;
goto v_resetjp_4311_;
}
else
{
lean_inc(v_a_4310_);
lean_dec(v___x_4301_);
v___x_4312_ = lean_box(0);
v_isShared_4313_ = v_isSharedCheck_4317_;
goto v_resetjp_4311_;
}
v_resetjp_4311_:
{
lean_object* v___x_4315_; 
if (v_isShared_4313_ == 0)
{
v___x_4315_ = v___x_4312_;
goto v_reusejp_4314_;
}
else
{
lean_object* v_reuseFailAlloc_4316_; 
v_reuseFailAlloc_4316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4316_, 0, v_a_4310_);
v___x_4315_ = v_reuseFailAlloc_4316_;
goto v_reusejp_4314_;
}
v_reusejp_4314_:
{
return v___x_4315_;
}
}
}
}
}
}
else
{
lean_object* v_a_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; 
v_a_4320_ = lean_ctor_get(v_r_4294_, 0);
lean_inc(v_a_4320_);
lean_dec_ref(v_r_4294_);
v___x_4321_ = lean_box(0);
v___x_4322_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4293_, v___y_4288_, v___x_4321_);
lean_dec(v_snd_4293_);
if (lean_obj_tag(v___x_4322_) == 0)
{
lean_object* v___x_4324_; uint8_t v_isShared_4325_; uint8_t v_isSharedCheck_4329_; 
v_isSharedCheck_4329_ = !lean_is_exclusive(v___x_4322_);
if (v_isSharedCheck_4329_ == 0)
{
lean_object* v_unused_4330_; 
v_unused_4330_ = lean_ctor_get(v___x_4322_, 0);
lean_dec(v_unused_4330_);
v___x_4324_ = v___x_4322_;
v_isShared_4325_ = v_isSharedCheck_4329_;
goto v_resetjp_4323_;
}
else
{
lean_dec(v___x_4322_);
v___x_4324_ = lean_box(0);
v_isShared_4325_ = v_isSharedCheck_4329_;
goto v_resetjp_4323_;
}
v_resetjp_4323_:
{
lean_object* v___x_4327_; 
if (v_isShared_4325_ == 0)
{
lean_ctor_set_tag(v___x_4324_, 1);
lean_ctor_set(v___x_4324_, 0, v_a_4320_);
v___x_4327_ = v___x_4324_;
goto v_reusejp_4326_;
}
else
{
lean_object* v_reuseFailAlloc_4328_; 
v_reuseFailAlloc_4328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4328_, 0, v_a_4320_);
v___x_4327_ = v_reuseFailAlloc_4328_;
goto v_reusejp_4326_;
}
v_reusejp_4326_:
{
return v___x_4327_;
}
}
}
else
{
lean_object* v_a_4331_; lean_object* v___x_4333_; uint8_t v_isShared_4334_; uint8_t v_isSharedCheck_4338_; 
lean_dec(v_a_4320_);
v_a_4331_ = lean_ctor_get(v___x_4322_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v___x_4322_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4333_ = v___x_4322_;
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
else
{
lean_inc(v_a_4331_);
lean_dec(v___x_4322_);
v___x_4333_ = lean_box(0);
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
v_resetjp_4332_:
{
lean_object* v___x_4336_; 
if (v_isShared_4334_ == 0)
{
v___x_4336_ = v___x_4333_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_a_4331_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
return v___x_4336_;
}
}
}
}
}
else
{
lean_object* v_a_4339_; lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4351_; 
lean_dec_ref(v_f_4287_);
v_a_4339_ = lean_ctor_get(v___x_4290_, 0);
v_isSharedCheck_4351_ = !lean_is_exclusive(v___x_4290_);
if (v_isSharedCheck_4351_ == 0)
{
v___x_4341_ = v___x_4290_;
v_isShared_4342_ = v_isSharedCheck_4351_;
goto v_resetjp_4340_;
}
else
{
lean_inc(v_a_4339_);
lean_dec(v___x_4290_);
v___x_4341_ = lean_box(0);
v_isShared_4342_ = v_isSharedCheck_4351_;
goto v_resetjp_4340_;
}
v_resetjp_4340_:
{
lean_object* v___x_4343_; uint8_t v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4349_; 
v___x_4343_ = lean_io_error_to_string(v_a_4339_);
v___x_4344_ = 3;
v___x_4345_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4345_, 0, v___x_4343_);
lean_ctor_set_uint8(v___x_4345_, sizeof(void*)*1, v___x_4344_);
lean_inc_ref(v___y_4288_);
v___x_4346_ = lean_apply_2(v___y_4288_, v___x_4345_, lean_box(0));
v___x_4347_ = lean_box(0);
if (v_isShared_4342_ == 0)
{
lean_ctor_set(v___x_4341_, 0, v___x_4347_);
v___x_4349_ = v___x_4341_;
goto v_reusejp_4348_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v___x_4347_);
v___x_4349_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4348_;
}
v_reusejp_4348_:
{
return v___x_4349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___boxed(lean_object* v_f_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v_f_4352_, v___y_4353_);
lean_dec_ref(v___y_4353_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2(lean_object* v_00_u03b1_4356_, lean_object* v_f_4357_, lean_object* v___y_4358_){
_start:
{
lean_object* v___x_4360_; 
v___x_4360_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v_f_4357_, v___y_4358_);
return v___x_4360_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___boxed(lean_object* v_00_u03b1_4361_, lean_object* v_f_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_){
_start:
{
lean_object* v_res_4365_; 
v_res_4365_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2(v_00_u03b1_4361_, v_f_4362_, v___y_4363_);
lean_dec_ref(v___y_4363_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(lean_object* v_h_4368_, lean_object* v_as_4369_, size_t v_i_4370_, size_t v_stop_4371_, lean_object* v_b_4372_, lean_object* v___y_4373_){
_start:
{
uint8_t v___x_4375_; 
v___x_4375_ = lean_usize_dec_eq(v_i_4370_, v_stop_4371_);
if (v___x_4375_ == 0)
{
lean_object* v___x_4376_; lean_object* v_url_4377_; lean_object* v_path_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; 
v___x_4376_ = lean_array_uget_borrowed(v_as_4369_, v_i_4370_);
v_url_4377_ = lean_ctor_get(v___x_4376_, 0);
v_path_4378_ = lean_ctor_get(v___x_4376_, 1);
v___x_4379_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0));
v___x_4380_ = lean_string_append(v___x_4379_, v_url_4377_);
v___x_4381_ = l_IO_FS_Handle_putStrLn(v_h_4368_, v___x_4380_);
if (lean_obj_tag(v___x_4381_) == 0)
{
lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; 
lean_dec_ref(v___x_4381_);
v___x_4382_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__1));
lean_inc_ref(v_path_4378_);
v___x_4383_ = l_String_quote(v_path_4378_);
v___x_4384_ = lean_string_append(v___x_4382_, v___x_4383_);
lean_dec_ref(v___x_4383_);
v___x_4385_ = l_IO_FS_Handle_putStrLn(v_h_4368_, v___x_4384_);
if (lean_obj_tag(v___x_4385_) == 0)
{
lean_object* v_a_4386_; size_t v___x_4387_; size_t v___x_4388_; 
v_a_4386_ = lean_ctor_get(v___x_4385_, 0);
lean_inc(v_a_4386_);
lean_dec_ref(v___x_4385_);
v___x_4387_ = ((size_t)1ULL);
v___x_4388_ = lean_usize_add(v_i_4370_, v___x_4387_);
v_i_4370_ = v___x_4388_;
v_b_4372_ = v_a_4386_;
goto _start;
}
else
{
lean_object* v_a_4390_; lean_object* v___x_4392_; uint8_t v_isShared_4393_; uint8_t v_isSharedCheck_4402_; 
v_a_4390_ = lean_ctor_get(v___x_4385_, 0);
v_isSharedCheck_4402_ = !lean_is_exclusive(v___x_4385_);
if (v_isSharedCheck_4402_ == 0)
{
v___x_4392_ = v___x_4385_;
v_isShared_4393_ = v_isSharedCheck_4402_;
goto v_resetjp_4391_;
}
else
{
lean_inc(v_a_4390_);
lean_dec(v___x_4385_);
v___x_4392_ = lean_box(0);
v_isShared_4393_ = v_isSharedCheck_4402_;
goto v_resetjp_4391_;
}
v_resetjp_4391_:
{
lean_object* v___x_4394_; uint8_t v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4400_; 
v___x_4394_ = lean_io_error_to_string(v_a_4390_);
v___x_4395_ = 3;
v___x_4396_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4396_, 0, v___x_4394_);
lean_ctor_set_uint8(v___x_4396_, sizeof(void*)*1, v___x_4395_);
lean_inc_ref(v___y_4373_);
v___x_4397_ = lean_apply_2(v___y_4373_, v___x_4396_, lean_box(0));
v___x_4398_ = lean_box(0);
if (v_isShared_4393_ == 0)
{
lean_ctor_set(v___x_4392_, 0, v___x_4398_);
v___x_4400_ = v___x_4392_;
goto v_reusejp_4399_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v___x_4398_);
v___x_4400_ = v_reuseFailAlloc_4401_;
goto v_reusejp_4399_;
}
v_reusejp_4399_:
{
return v___x_4400_;
}
}
}
}
else
{
lean_object* v_a_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4415_; 
v_a_4403_ = lean_ctor_get(v___x_4381_, 0);
v_isSharedCheck_4415_ = !lean_is_exclusive(v___x_4381_);
if (v_isSharedCheck_4415_ == 0)
{
v___x_4405_ = v___x_4381_;
v_isShared_4406_ = v_isSharedCheck_4415_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_a_4403_);
lean_dec(v___x_4381_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4415_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
lean_object* v___x_4407_; uint8_t v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4413_; 
v___x_4407_ = lean_io_error_to_string(v_a_4403_);
v___x_4408_ = 3;
v___x_4409_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4409_, 0, v___x_4407_);
lean_ctor_set_uint8(v___x_4409_, sizeof(void*)*1, v___x_4408_);
lean_inc_ref(v___y_4373_);
v___x_4410_ = lean_apply_2(v___y_4373_, v___x_4409_, lean_box(0));
v___x_4411_ = lean_box(0);
if (v_isShared_4406_ == 0)
{
lean_ctor_set(v___x_4405_, 0, v___x_4411_);
v___x_4413_ = v___x_4405_;
goto v_reusejp_4412_;
}
else
{
lean_object* v_reuseFailAlloc_4414_; 
v_reuseFailAlloc_4414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4414_, 0, v___x_4411_);
v___x_4413_ = v_reuseFailAlloc_4414_;
goto v_reusejp_4412_;
}
v_reusejp_4412_:
{
return v___x_4413_;
}
}
}
}
else
{
lean_object* v___x_4416_; 
v___x_4416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4416_, 0, v_b_4372_);
return v___x_4416_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___boxed(lean_object* v_h_4417_, lean_object* v_as_4418_, lean_object* v_i_4419_, lean_object* v_stop_4420_, lean_object* v_b_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_){
_start:
{
size_t v_i_boxed_4424_; size_t v_stop_boxed_4425_; lean_object* v_res_4426_; 
v_i_boxed_4424_ = lean_unbox_usize(v_i_4419_);
lean_dec(v_i_4419_);
v_stop_boxed_4425_ = lean_unbox_usize(v_stop_4420_);
lean_dec(v_stop_4420_);
v_res_4426_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4417_, v_as_4418_, v_i_boxed_4424_, v_stop_boxed_4425_, v_b_4421_, v___y_4422_);
lean_dec_ref(v___y_4422_);
lean_dec_ref(v_as_4418_);
lean_dec(v_h_4417_);
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(lean_object* v_h_4428_, lean_object* v_as_4429_, size_t v_i_4430_, size_t v_stop_4431_, lean_object* v_b_4432_, lean_object* v___y_4433_){
_start:
{
uint8_t v___x_4435_; 
v___x_4435_ = lean_usize_dec_eq(v_i_4430_, v_stop_4431_);
if (v___x_4435_ == 0)
{
lean_object* v___x_4436_; lean_object* v_url_4437_; lean_object* v_path_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; 
v___x_4436_ = lean_array_uget_borrowed(v_as_4429_, v_i_4430_);
v_url_4437_ = lean_ctor_get(v___x_4436_, 0);
v_path_4438_ = lean_ctor_get(v___x_4436_, 1);
v___x_4439_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___closed__0));
lean_inc_ref(v_path_4438_);
v___x_4440_ = l_String_quote(v_path_4438_);
v___x_4441_ = lean_string_append(v___x_4439_, v___x_4440_);
lean_dec_ref(v___x_4440_);
v___x_4442_ = l_IO_FS_Handle_putStrLn(v_h_4428_, v___x_4441_);
if (lean_obj_tag(v___x_4442_) == 0)
{
lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; 
lean_dec_ref(v___x_4442_);
v___x_4443_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0));
v___x_4444_ = lean_string_append(v___x_4443_, v_url_4437_);
v___x_4445_ = l_IO_FS_Handle_putStrLn(v_h_4428_, v___x_4444_);
if (lean_obj_tag(v___x_4445_) == 0)
{
lean_object* v_a_4446_; size_t v___x_4447_; size_t v___x_4448_; 
v_a_4446_ = lean_ctor_get(v___x_4445_, 0);
lean_inc(v_a_4446_);
lean_dec_ref(v___x_4445_);
v___x_4447_ = ((size_t)1ULL);
v___x_4448_ = lean_usize_add(v_i_4430_, v___x_4447_);
v_i_4430_ = v___x_4448_;
v_b_4432_ = v_a_4446_;
goto _start;
}
else
{
lean_object* v_a_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4462_; 
v_a_4450_ = lean_ctor_get(v___x_4445_, 0);
v_isSharedCheck_4462_ = !lean_is_exclusive(v___x_4445_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4452_ = v___x_4445_;
v_isShared_4453_ = v_isSharedCheck_4462_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_a_4450_);
lean_dec(v___x_4445_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4462_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
lean_object* v___x_4454_; uint8_t v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4460_; 
v___x_4454_ = lean_io_error_to_string(v_a_4450_);
v___x_4455_ = 3;
v___x_4456_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4456_, 0, v___x_4454_);
lean_ctor_set_uint8(v___x_4456_, sizeof(void*)*1, v___x_4455_);
lean_inc_ref(v___y_4433_);
v___x_4457_ = lean_apply_2(v___y_4433_, v___x_4456_, lean_box(0));
v___x_4458_ = lean_box(0);
if (v_isShared_4453_ == 0)
{
lean_ctor_set(v___x_4452_, 0, v___x_4458_);
v___x_4460_ = v___x_4452_;
goto v_reusejp_4459_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v___x_4458_);
v___x_4460_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4459_;
}
v_reusejp_4459_:
{
return v___x_4460_;
}
}
}
}
else
{
lean_object* v_a_4463_; lean_object* v___x_4465_; uint8_t v_isShared_4466_; uint8_t v_isSharedCheck_4475_; 
v_a_4463_ = lean_ctor_get(v___x_4442_, 0);
v_isSharedCheck_4475_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4475_ == 0)
{
v___x_4465_ = v___x_4442_;
v_isShared_4466_ = v_isSharedCheck_4475_;
goto v_resetjp_4464_;
}
else
{
lean_inc(v_a_4463_);
lean_dec(v___x_4442_);
v___x_4465_ = lean_box(0);
v_isShared_4466_ = v_isSharedCheck_4475_;
goto v_resetjp_4464_;
}
v_resetjp_4464_:
{
lean_object* v___x_4467_; uint8_t v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4473_; 
v___x_4467_ = lean_io_error_to_string(v_a_4463_);
v___x_4468_ = 3;
v___x_4469_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4469_, 0, v___x_4467_);
lean_ctor_set_uint8(v___x_4469_, sizeof(void*)*1, v___x_4468_);
lean_inc_ref(v___y_4433_);
v___x_4470_ = lean_apply_2(v___y_4433_, v___x_4469_, lean_box(0));
v___x_4471_ = lean_box(0);
if (v_isShared_4466_ == 0)
{
lean_ctor_set(v___x_4465_, 0, v___x_4471_);
v___x_4473_ = v___x_4465_;
goto v_reusejp_4472_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v___x_4471_);
v___x_4473_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4472_;
}
v_reusejp_4472_:
{
return v___x_4473_;
}
}
}
}
else
{
lean_object* v___x_4476_; 
v___x_4476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4476_, 0, v_b_4432_);
return v___x_4476_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___boxed(lean_object* v_h_4477_, lean_object* v_as_4478_, lean_object* v_i_4479_, lean_object* v_stop_4480_, lean_object* v_b_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_){
_start:
{
size_t v_i_boxed_4484_; size_t v_stop_boxed_4485_; lean_object* v_res_4486_; 
v_i_boxed_4484_ = lean_unbox_usize(v_i_4479_);
lean_dec(v_i_4479_);
v_stop_boxed_4485_ = lean_unbox_usize(v_stop_4480_);
lean_dec(v_stop_4480_);
v_res_4486_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4477_, v_as_4478_, v_i_boxed_4484_, v_stop_boxed_4485_, v_b_4481_, v___y_4482_);
lean_dec_ref(v___y_4482_);
lean_dec_ref(v_as_4478_);
lean_dec(v_h_4477_);
return v_res_4486_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11(void){
_start:
{
lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; 
v___x_4502_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5));
v___x_4503_ = lean_unsigned_to_nat(11u);
v___x_4504_ = lean_mk_empty_array_with_capacity(v___x_4503_);
v___x_4505_ = lean_array_push(v___x_4504_, v___x_4502_);
return v___x_4505_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12(void){
_start:
{
lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; 
v___x_4506_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_4507_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11);
v___x_4508_ = lean_array_push(v___x_4507_, v___x_4506_);
return v___x_4508_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13(void){
_start:
{
lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; 
v___x_4509_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__6));
v___x_4510_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12);
v___x_4511_ = lean_array_push(v___x_4510_, v___x_4509_);
return v___x_4511_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14(void){
_start:
{
lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; 
v___x_4512_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7));
v___x_4513_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13);
v___x_4514_ = lean_array_push(v___x_4513_, v___x_4512_);
return v___x_4514_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15(void){
_start:
{
lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; 
v___x_4515_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_4516_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14);
v___x_4517_ = lean_array_push(v___x_4516_, v___x_4515_);
return v___x_4517_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16(void){
_start:
{
lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; 
v___x_4518_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_4519_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15);
v___x_4520_ = lean_array_push(v___x_4519_, v___x_4518_);
return v___x_4520_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17(void){
_start:
{
lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; 
v___x_4521_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_4522_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16);
v___x_4523_ = lean_array_push(v___x_4522_, v___x_4521_);
return v___x_4523_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18(void){
_start:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; 
v___x_4524_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_4525_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17);
v___x_4526_ = lean_array_push(v___x_4525_, v___x_4524_);
return v___x_4526_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19(void){
_start:
{
lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; 
v___x_4527_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_4528_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18);
v___x_4529_ = lean_array_push(v___x_4528_, v___x_4527_);
return v___x_4529_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20(void){
_start:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; 
v___x_4530_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10));
v___x_4531_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19);
v___x_4532_ = lean_array_push(v___x_4531_, v___x_4530_);
return v___x_4532_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22(void){
_start:
{
lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4534_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5));
v___x_4535_ = lean_unsigned_to_nat(17u);
v___x_4536_ = lean_mk_empty_array_with_capacity(v___x_4535_);
v___x_4537_ = lean_array_push(v___x_4536_, v___x_4534_);
return v___x_4537_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23(void){
_start:
{
lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; 
v___x_4538_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_4539_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22);
v___x_4540_ = lean_array_push(v___x_4539_, v___x_4538_);
return v___x_4540_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24(void){
_start:
{
lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; 
v___x_4541_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_4542_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23);
v___x_4543_ = lean_array_push(v___x_4542_, v___x_4541_);
return v___x_4543_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25(void){
_start:
{
lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; 
v___x_4544_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7));
v___x_4545_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24);
v___x_4546_ = lean_array_push(v___x_4545_, v___x_4544_);
return v___x_4546_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26(void){
_start:
{
lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; 
v___x_4547_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_4548_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25);
v___x_4549_ = lean_array_push(v___x_4548_, v___x_4547_);
return v___x_4549_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27(void){
_start:
{
lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; 
v___x_4550_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__21));
v___x_4551_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26);
v___x_4552_ = lean_array_push(v___x_4551_, v___x_4550_);
return v___x_4552_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28(void){
_start:
{
lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; 
v___x_4553_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_4554_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27);
v___x_4555_ = lean_array_push(v___x_4554_, v___x_4553_);
return v___x_4555_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29(void){
_start:
{
lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; 
v___x_4556_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_4557_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28);
v___x_4558_ = lean_array_push(v___x_4557_, v___x_4556_);
return v___x_4558_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30(void){
_start:
{
lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; 
v___x_4559_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13));
v___x_4560_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29);
v___x_4561_ = lean_array_push(v___x_4560_, v___x_4559_);
return v___x_4561_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31(void){
_start:
{
lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4562_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14));
v___x_4563_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30);
v___x_4564_ = lean_array_push(v___x_4563_, v___x_4562_);
return v___x_4564_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32(void){
_start:
{
lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; 
v___x_4565_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15));
v___x_4566_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31);
v___x_4567_ = lean_array_push(v___x_4566_, v___x_4565_);
return v___x_4567_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0(lean_object* v_cfg_4568_, lean_object* v_h_4569_, lean_object* v_path_4570_, lean_object* v___y_4571_){
_start:
{
uint8_t v___y_4574_; lean_object* v___y_4580_; uint8_t v___y_4581_; uint32_t v___y_4582_; lean_object* v___y_4583_; uint8_t v_kind_4592_; lean_object* v_scope_4593_; lean_object* v_infos_4594_; lean_object* v_key_4595_; uint8_t v___y_4597_; uint32_t v___y_4598_; lean_object* v___y_4599_; lean_object* v___y_4604_; lean_object* v___y_4605_; lean_object* v___y_4606_; uint32_t v___y_4607_; uint8_t v___y_4608_; lean_object* v___y_4609_; lean_object* v___y_4610_; lean_object* v___y_4622_; lean_object* v___y_4623_; uint32_t v___y_4624_; uint8_t v___y_4625_; lean_object* v___y_4626_; lean_object* v___y_4631_; lean_object* v___y_4632_; lean_object* v___y_4633_; uint8_t v___y_4634_; uint32_t v___y_4635_; lean_object* v___y_4636_; lean_object* v___y_4646_; lean_object* v___y_4647_; uint32_t v___y_4648_; uint8_t v___y_4649_; lean_object* v___y_4650_; lean_object* v_a_4653_; lean_object* v___y_4747_; lean_object* v___y_4775_; 
v_kind_4592_ = lean_ctor_get_uint8(v_cfg_4568_, sizeof(void*)*3);
v_scope_4593_ = lean_ctor_get(v_cfg_4568_, 0);
lean_inc_ref(v_scope_4593_);
v_infos_4594_ = lean_ctor_get(v_cfg_4568_, 1);
lean_inc_ref(v_infos_4594_);
v_key_4595_ = lean_ctor_get(v_cfg_4568_, 2);
if (v_kind_4592_ == 0)
{
lean_object* v___x_4776_; lean_object* v___x_4777_; uint8_t v___x_4778_; 
v___x_4776_ = lean_unsigned_to_nat(0u);
v___x_4777_ = lean_array_get_size(v_infos_4594_);
v___x_4778_ = lean_nat_dec_lt(v___x_4776_, v___x_4777_);
if (v___x_4778_ == 0)
{
goto v___jp_4729_;
}
else
{
lean_object* v___x_4779_; uint8_t v___x_4780_; 
v___x_4779_ = lean_box(0);
v___x_4780_ = lean_nat_dec_le(v___x_4777_, v___x_4777_);
if (v___x_4780_ == 0)
{
if (v___x_4778_ == 0)
{
goto v___jp_4729_;
}
else
{
size_t v___x_4781_; size_t v___x_4782_; lean_object* v___x_4783_; 
v___x_4781_ = ((size_t)0ULL);
v___x_4782_ = lean_usize_of_nat(v___x_4777_);
v___x_4783_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4569_, v_infos_4594_, v___x_4781_, v___x_4782_, v___x_4779_, v___y_4571_);
v___y_4747_ = v___x_4783_;
goto v___jp_4746_;
}
}
else
{
size_t v___x_4784_; size_t v___x_4785_; lean_object* v___x_4786_; 
v___x_4784_ = ((size_t)0ULL);
v___x_4785_ = lean_usize_of_nat(v___x_4777_);
v___x_4786_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4569_, v_infos_4594_, v___x_4784_, v___x_4785_, v___x_4779_, v___y_4571_);
v___y_4747_ = v___x_4786_;
goto v___jp_4746_;
}
}
}
else
{
lean_object* v___x_4787_; lean_object* v___x_4788_; uint8_t v___x_4789_; 
v___x_4787_ = lean_unsigned_to_nat(0u);
v___x_4788_ = lean_array_get_size(v_infos_4594_);
v___x_4789_ = lean_nat_dec_lt(v___x_4787_, v___x_4788_);
if (v___x_4789_ == 0)
{
goto v___jp_4748_;
}
else
{
lean_object* v___x_4790_; uint8_t v___x_4791_; 
v___x_4790_ = lean_box(0);
v___x_4791_ = lean_nat_dec_le(v___x_4788_, v___x_4788_);
if (v___x_4791_ == 0)
{
if (v___x_4789_ == 0)
{
goto v___jp_4748_;
}
else
{
size_t v___x_4792_; size_t v___x_4793_; lean_object* v___x_4794_; 
v___x_4792_ = ((size_t)0ULL);
v___x_4793_ = lean_usize_of_nat(v___x_4788_);
v___x_4794_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4569_, v_infos_4594_, v___x_4792_, v___x_4793_, v___x_4790_, v___y_4571_);
v___y_4775_ = v___x_4794_;
goto v___jp_4774_;
}
}
else
{
size_t v___x_4795_; size_t v___x_4796_; lean_object* v___x_4797_; 
v___x_4795_ = ((size_t)0ULL);
v___x_4796_ = lean_usize_of_nat(v___x_4788_);
v___x_4797_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4569_, v_infos_4594_, v___x_4795_, v___x_4796_, v___x_4790_, v___y_4571_);
v___y_4775_ = v___x_4797_;
goto v___jp_4774_;
}
}
}
v___jp_4573_:
{
if (v___y_4574_ == 0)
{
lean_object* v___x_4575_; lean_object* v___x_4576_; 
v___x_4575_ = lean_box(0);
v___x_4576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4576_, 0, v___x_4575_);
return v___x_4576_;
}
else
{
lean_object* v___x_4577_; lean_object* v___x_4578_; 
v___x_4577_ = lean_box(0);
v___x_4578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4578_, 0, v___x_4577_);
return v___x_4578_;
}
}
v___jp_4579_:
{
lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; uint8_t v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; 
v___x_4584_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0));
v___x_4585_ = lean_string_append(v___y_4583_, v___x_4584_);
v___x_4586_ = lean_uint32_to_nat(v___y_4582_);
v___x_4587_ = l_Nat_reprFast(v___x_4586_);
v___x_4588_ = lean_string_append(v___x_4585_, v___x_4587_);
lean_dec_ref(v___x_4587_);
v___x_4589_ = 3;
v___x_4590_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4590_, 0, v___x_4588_);
lean_ctor_set_uint8(v___x_4590_, sizeof(void*)*1, v___x_4589_);
lean_inc_ref(v___y_4580_);
v___x_4591_ = lean_apply_2(v___y_4580_, v___x_4590_, lean_box(0));
v___y_4574_ = v___y_4581_;
goto v___jp_4573_;
}
v___jp_4596_:
{
uint32_t v___x_4600_; uint8_t v___x_4601_; 
v___x_4600_ = 0;
v___x_4601_ = lean_uint32_dec_eq(v___y_4598_, v___x_4600_);
if (v___x_4601_ == 0)
{
lean_object* v_s_4602_; 
v_s_4602_ = lean_ctor_get(v_scope_4593_, 0);
lean_inc_ref(v_s_4602_);
lean_dec_ref(v_scope_4593_);
v___y_4580_ = v___y_4599_;
v___y_4581_ = v___y_4597_;
v___y_4582_ = v___y_4598_;
v___y_4583_ = v_s_4602_;
goto v___jp_4579_;
}
else
{
lean_dec_ref(v_scope_4593_);
v___y_4574_ = v___y_4597_;
goto v___jp_4573_;
}
}
v___jp_4603_:
{
lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; uint8_t v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; 
v___x_4611_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1));
v___x_4612_ = lean_string_append(v___y_4610_, v___x_4611_);
lean_inc(v___y_4606_);
lean_inc(v___y_4604_);
lean_inc_ref(v___y_4605_);
v___x_4613_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4613_, 0, v___y_4605_);
lean_ctor_set(v___x_4613_, 1, v___y_4604_);
lean_ctor_set(v___x_4613_, 2, v___y_4606_);
v___x_4614_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_4613_, v___y_4606_);
lean_dec_ref(v___x_4613_);
v___x_4615_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4615_, 0, v___y_4605_);
lean_ctor_set(v___x_4615_, 1, v___y_4604_);
lean_ctor_set(v___x_4615_, 2, v___x_4614_);
v___x_4616_ = l_String_Slice_toString(v___x_4615_);
lean_dec_ref(v___x_4615_);
v___x_4617_ = lean_string_append(v___x_4612_, v___x_4616_);
lean_dec_ref(v___x_4616_);
v___x_4618_ = 2;
v___x_4619_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4619_, 0, v___x_4617_);
lean_ctor_set_uint8(v___x_4619_, sizeof(void*)*1, v___x_4618_);
lean_inc_ref(v___y_4609_);
v___x_4620_ = lean_apply_2(v___y_4609_, v___x_4619_, lean_box(0));
v___y_4597_ = v___y_4608_;
v___y_4598_ = v___y_4607_;
v___y_4599_ = v___y_4609_;
goto v___jp_4596_;
}
v___jp_4621_:
{
lean_object* v___x_4627_; uint8_t v___x_4628_; 
v___x_4627_ = lean_string_utf8_byte_size(v___y_4623_);
v___x_4628_ = lean_nat_dec_eq(v___x_4627_, v___y_4622_);
if (v___x_4628_ == 0)
{
lean_object* v_s_4629_; 
v_s_4629_ = lean_ctor_get(v_scope_4593_, 0);
lean_inc_ref(v_s_4629_);
v___y_4604_ = v___y_4622_;
v___y_4605_ = v___y_4623_;
v___y_4606_ = v___x_4627_;
v___y_4607_ = v___y_4624_;
v___y_4608_ = v___y_4625_;
v___y_4609_ = v___y_4626_;
v___y_4610_ = v_s_4629_;
goto v___jp_4603_;
}
else
{
lean_dec_ref(v___y_4623_);
lean_dec(v___y_4622_);
v___y_4597_ = v___y_4625_;
v___y_4598_ = v___y_4624_;
v___y_4599_ = v___y_4626_;
goto v___jp_4596_;
}
}
v___jp_4630_:
{
lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; uint8_t v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; 
v___x_4637_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_4638_ = lean_string_append(v___y_4636_, v___x_4637_);
v___x_4639_ = lean_string_append(v___x_4638_, v___y_4633_);
v___x_4640_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2));
v___x_4641_ = lean_string_append(v___x_4639_, v___x_4640_);
v___x_4642_ = 3;
v___x_4643_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4643_, 0, v___x_4641_);
lean_ctor_set_uint8(v___x_4643_, sizeof(void*)*1, v___x_4642_);
lean_inc_ref(v___y_4571_);
v___x_4644_ = lean_apply_2(v___y_4571_, v___x_4643_, lean_box(0));
v___y_4622_ = v___y_4631_;
v___y_4623_ = v___y_4632_;
v___y_4624_ = v___y_4635_;
v___y_4625_ = v___y_4634_;
v___y_4626_ = v___y_4571_;
goto v___jp_4621_;
}
v___jp_4645_:
{
lean_object* v_s_4651_; 
v_s_4651_ = lean_ctor_get(v_scope_4593_, 0);
lean_inc_ref(v_s_4651_);
v___y_4631_ = v___y_4646_;
v___y_4632_ = v___y_4647_;
v___y_4633_ = v___y_4650_;
v___y_4634_ = v___y_4649_;
v___y_4635_ = v___y_4648_;
v___y_4636_ = v_s_4651_;
goto v___jp_4630_;
}
v___jp_4652_:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; uint8_t v___x_4659_; uint8_t v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; 
v___x_4654_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3));
v___x_4655_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_4656_ = lean_box(0);
v___x_4657_ = lean_unsigned_to_nat(0u);
v___x_4658_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_4659_ = 1;
v___x_4660_ = 0;
v___x_4661_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_4661_, 0, v___x_4654_);
lean_ctor_set(v___x_4661_, 1, v___x_4655_);
lean_ctor_set(v___x_4661_, 2, v_a_4653_);
lean_ctor_set(v___x_4661_, 3, v___x_4656_);
lean_ctor_set(v___x_4661_, 4, v___x_4658_);
lean_ctor_set_uint8(v___x_4661_, sizeof(void*)*5, v___x_4659_);
lean_ctor_set_uint8(v___x_4661_, sizeof(void*)*5 + 1, v___x_4660_);
v___x_4662_ = lean_io_process_spawn(v___x_4661_);
if (lean_obj_tag(v___x_4662_) == 0)
{
lean_object* v_a_4663_; lean_object* v_stdout_4664_; lean_object* v_stderr_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; 
v_a_4663_ = lean_ctor_get(v___x_4662_, 0);
lean_inc(v_a_4663_);
lean_dec_ref(v___x_4662_);
v_stdout_4664_ = lean_ctor_get(v_a_4663_, 1);
lean_inc_n(v_stdout_4664_, 2);
v_stderr_4665_ = lean_ctor_get(v_a_4663_, 2);
v___x_4666_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4));
v___x_4667_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(v_cfg_4568_, v_stderr_4665_, v_stdout_4664_, v___x_4666_, v___y_4571_);
if (lean_obj_tag(v___x_4667_) == 0)
{
lean_object* v_a_4668_; lean_object* v___x_4669_; 
v_a_4668_ = lean_ctor_get(v___x_4667_, 0);
lean_inc(v_a_4668_);
lean_dec_ref(v___x_4667_);
v___x_4669_ = lean_io_process_child_wait(v___x_4654_, v_a_4663_);
lean_dec(v_a_4663_);
if (lean_obj_tag(v___x_4669_) == 0)
{
lean_object* v_a_4670_; lean_object* v___x_4671_; 
v_a_4670_ = lean_ctor_get(v___x_4669_, 0);
lean_inc(v_a_4670_);
lean_dec_ref(v___x_4669_);
v___x_4671_ = l_IO_FS_Handle_readToEnd(v_stdout_4664_);
lean_dec(v_stdout_4664_);
if (lean_obj_tag(v___x_4671_) == 0)
{
lean_object* v_a_4672_; uint8_t v_didError_4673_; lean_object* v_numSuccesses_4674_; lean_object* v___x_4675_; uint8_t v___x_4676_; 
v_a_4672_ = lean_ctor_get(v___x_4671_, 0);
lean_inc(v_a_4672_);
lean_dec_ref(v___x_4671_);
v_didError_4673_ = lean_ctor_get_uint8(v_a_4668_, sizeof(void*)*1);
v_numSuccesses_4674_ = lean_ctor_get(v_a_4668_, 0);
lean_inc(v_numSuccesses_4674_);
lean_dec(v_a_4668_);
v___x_4675_ = lean_array_get_size(v_infos_4594_);
lean_dec_ref(v_infos_4594_);
v___x_4676_ = lean_nat_dec_lt(v_numSuccesses_4674_, v___x_4675_);
lean_dec(v_numSuccesses_4674_);
if (v___x_4676_ == 0)
{
uint32_t v___x_4677_; 
v___x_4677_ = lean_unbox_uint32(v_a_4670_);
lean_dec(v_a_4670_);
v___y_4622_ = v___x_4657_;
v___y_4623_ = v_a_4672_;
v___y_4624_ = v___x_4677_;
v___y_4625_ = v_didError_4673_;
v___y_4626_ = v___y_4571_;
goto v___jp_4621_;
}
else
{
if (v_kind_4592_ == 0)
{
lean_object* v___x_4678_; uint32_t v___x_4679_; 
v___x_4678_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___x_4679_ = lean_unbox_uint32(v_a_4670_);
lean_dec(v_a_4670_);
v___y_4646_ = v___x_4657_;
v___y_4647_ = v_a_4672_;
v___y_4648_ = v___x_4679_;
v___y_4649_ = v_didError_4673_;
v___y_4650_ = v___x_4678_;
goto v___jp_4645_;
}
else
{
lean_object* v___x_4680_; uint32_t v___x_4681_; 
v___x_4680_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___x_4681_ = lean_unbox_uint32(v_a_4670_);
lean_dec(v_a_4670_);
v___y_4646_ = v___x_4657_;
v___y_4647_ = v_a_4672_;
v___y_4648_ = v___x_4681_;
v___y_4649_ = v_didError_4673_;
v___y_4650_ = v___x_4680_;
goto v___jp_4645_;
}
}
}
else
{
lean_object* v_a_4682_; lean_object* v___x_4684_; uint8_t v_isShared_4685_; uint8_t v_isSharedCheck_4694_; 
lean_dec(v_a_4670_);
lean_dec(v_a_4668_);
lean_dec_ref(v_infos_4594_);
lean_dec_ref(v_scope_4593_);
v_a_4682_ = lean_ctor_get(v___x_4671_, 0);
v_isSharedCheck_4694_ = !lean_is_exclusive(v___x_4671_);
if (v_isSharedCheck_4694_ == 0)
{
v___x_4684_ = v___x_4671_;
v_isShared_4685_ = v_isSharedCheck_4694_;
goto v_resetjp_4683_;
}
else
{
lean_inc(v_a_4682_);
lean_dec(v___x_4671_);
v___x_4684_ = lean_box(0);
v_isShared_4685_ = v_isSharedCheck_4694_;
goto v_resetjp_4683_;
}
v_resetjp_4683_:
{
lean_object* v___x_4686_; uint8_t v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4692_; 
v___x_4686_ = lean_io_error_to_string(v_a_4682_);
v___x_4687_ = 3;
v___x_4688_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4688_, 0, v___x_4686_);
lean_ctor_set_uint8(v___x_4688_, sizeof(void*)*1, v___x_4687_);
lean_inc_ref(v___y_4571_);
v___x_4689_ = lean_apply_2(v___y_4571_, v___x_4688_, lean_box(0));
v___x_4690_ = lean_box(0);
if (v_isShared_4685_ == 0)
{
lean_ctor_set(v___x_4684_, 0, v___x_4690_);
v___x_4692_ = v___x_4684_;
goto v_reusejp_4691_;
}
else
{
lean_object* v_reuseFailAlloc_4693_; 
v_reuseFailAlloc_4693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4693_, 0, v___x_4690_);
v___x_4692_ = v_reuseFailAlloc_4693_;
goto v_reusejp_4691_;
}
v_reusejp_4691_:
{
return v___x_4692_;
}
}
}
}
else
{
lean_object* v_a_4695_; lean_object* v___x_4697_; uint8_t v_isShared_4698_; uint8_t v_isSharedCheck_4707_; 
lean_dec(v_a_4668_);
lean_dec(v_stdout_4664_);
lean_dec_ref(v_infos_4594_);
lean_dec_ref(v_scope_4593_);
v_a_4695_ = lean_ctor_get(v___x_4669_, 0);
v_isSharedCheck_4707_ = !lean_is_exclusive(v___x_4669_);
if (v_isSharedCheck_4707_ == 0)
{
v___x_4697_ = v___x_4669_;
v_isShared_4698_ = v_isSharedCheck_4707_;
goto v_resetjp_4696_;
}
else
{
lean_inc(v_a_4695_);
lean_dec(v___x_4669_);
v___x_4697_ = lean_box(0);
v_isShared_4698_ = v_isSharedCheck_4707_;
goto v_resetjp_4696_;
}
v_resetjp_4696_:
{
lean_object* v___x_4699_; uint8_t v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4705_; 
v___x_4699_ = lean_io_error_to_string(v_a_4695_);
v___x_4700_ = 3;
v___x_4701_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4701_, 0, v___x_4699_);
lean_ctor_set_uint8(v___x_4701_, sizeof(void*)*1, v___x_4700_);
lean_inc_ref(v___y_4571_);
v___x_4702_ = lean_apply_2(v___y_4571_, v___x_4701_, lean_box(0));
v___x_4703_ = lean_box(0);
if (v_isShared_4698_ == 0)
{
lean_ctor_set(v___x_4697_, 0, v___x_4703_);
v___x_4705_ = v___x_4697_;
goto v_reusejp_4704_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v___x_4703_);
v___x_4705_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4704_;
}
v_reusejp_4704_:
{
return v___x_4705_;
}
}
}
}
else
{
lean_object* v_a_4708_; lean_object* v___x_4710_; uint8_t v_isShared_4711_; uint8_t v_isSharedCheck_4715_; 
lean_dec(v_stdout_4664_);
lean_dec(v_a_4663_);
lean_dec_ref(v_infos_4594_);
lean_dec_ref(v_scope_4593_);
v_a_4708_ = lean_ctor_get(v___x_4667_, 0);
v_isSharedCheck_4715_ = !lean_is_exclusive(v___x_4667_);
if (v_isSharedCheck_4715_ == 0)
{
v___x_4710_ = v___x_4667_;
v_isShared_4711_ = v_isSharedCheck_4715_;
goto v_resetjp_4709_;
}
else
{
lean_inc(v_a_4708_);
lean_dec(v___x_4667_);
v___x_4710_ = lean_box(0);
v_isShared_4711_ = v_isSharedCheck_4715_;
goto v_resetjp_4709_;
}
v_resetjp_4709_:
{
lean_object* v___x_4713_; 
if (v_isShared_4711_ == 0)
{
v___x_4713_ = v___x_4710_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4714_; 
v_reuseFailAlloc_4714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4714_, 0, v_a_4708_);
v___x_4713_ = v_reuseFailAlloc_4714_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
return v___x_4713_;
}
}
}
}
else
{
lean_object* v_a_4716_; lean_object* v___x_4718_; uint8_t v_isShared_4719_; uint8_t v_isSharedCheck_4728_; 
lean_dec_ref(v_infos_4594_);
lean_dec_ref(v_scope_4593_);
lean_dec_ref(v_cfg_4568_);
v_a_4716_ = lean_ctor_get(v___x_4662_, 0);
v_isSharedCheck_4728_ = !lean_is_exclusive(v___x_4662_);
if (v_isSharedCheck_4728_ == 0)
{
v___x_4718_ = v___x_4662_;
v_isShared_4719_ = v_isSharedCheck_4728_;
goto v_resetjp_4717_;
}
else
{
lean_inc(v_a_4716_);
lean_dec(v___x_4662_);
v___x_4718_ = lean_box(0);
v_isShared_4719_ = v_isSharedCheck_4728_;
goto v_resetjp_4717_;
}
v_resetjp_4717_:
{
lean_object* v___x_4720_; uint8_t v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4726_; 
v___x_4720_ = lean_io_error_to_string(v_a_4716_);
v___x_4721_ = 3;
v___x_4722_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4722_, 0, v___x_4720_);
lean_ctor_set_uint8(v___x_4722_, sizeof(void*)*1, v___x_4721_);
lean_inc_ref(v___y_4571_);
v___x_4723_ = lean_apply_2(v___y_4571_, v___x_4722_, lean_box(0));
v___x_4724_ = lean_box(0);
if (v_isShared_4719_ == 0)
{
lean_ctor_set(v___x_4718_, 0, v___x_4724_);
v___x_4726_ = v___x_4718_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v___x_4724_);
v___x_4726_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
return v___x_4726_;
}
}
}
}
v___jp_4729_:
{
lean_object* v___x_4730_; 
v___x_4730_ = lean_io_prim_handle_flush(v_h_4569_);
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v___x_4731_; lean_object* v___x_4732_; 
lean_dec_ref(v___x_4730_);
v___x_4731_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20);
v___x_4732_ = lean_array_push(v___x_4731_, v_path_4570_);
v_a_4653_ = v___x_4732_;
goto v___jp_4652_;
}
else
{
lean_object* v_a_4733_; lean_object* v___x_4735_; uint8_t v_isShared_4736_; uint8_t v_isSharedCheck_4745_; 
lean_dec_ref(v_infos_4594_);
lean_dec_ref(v_scope_4593_);
lean_dec_ref(v_path_4570_);
lean_dec_ref(v_cfg_4568_);
v_a_4733_ = lean_ctor_get(v___x_4730_, 0);
v_isSharedCheck_4745_ = !lean_is_exclusive(v___x_4730_);
if (v_isSharedCheck_4745_ == 0)
{
v___x_4735_ = v___x_4730_;
v_isShared_4736_ = v_isSharedCheck_4745_;
goto v_resetjp_4734_;
}
else
{
lean_inc(v_a_4733_);
lean_dec(v___x_4730_);
v___x_4735_ = lean_box(0);
v_isShared_4736_ = v_isSharedCheck_4745_;
goto v_resetjp_4734_;
}
v_resetjp_4734_:
{
lean_object* v___x_4737_; uint8_t v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4743_; 
v___x_4737_ = lean_io_error_to_string(v_a_4733_);
v___x_4738_ = 3;
v___x_4739_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4739_, 0, v___x_4737_);
lean_ctor_set_uint8(v___x_4739_, sizeof(void*)*1, v___x_4738_);
lean_inc_ref(v___y_4571_);
v___x_4740_ = lean_apply_2(v___y_4571_, v___x_4739_, lean_box(0));
v___x_4741_ = lean_box(0);
if (v_isShared_4736_ == 0)
{
lean_ctor_set(v___x_4735_, 0, v___x_4741_);
v___x_4743_ = v___x_4735_;
goto v_reusejp_4742_;
}
else
{
lean_object* v_reuseFailAlloc_4744_; 
v_reuseFailAlloc_4744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4744_, 0, v___x_4741_);
v___x_4743_ = v_reuseFailAlloc_4744_;
goto v_reusejp_4742_;
}
v_reusejp_4742_:
{
return v___x_4743_;
}
}
}
}
v___jp_4746_:
{
if (lean_obj_tag(v___y_4747_) == 0)
{
lean_dec_ref(v___y_4747_);
goto v___jp_4729_;
}
else
{
lean_dec_ref(v_infos_4594_);
lean_dec_ref(v_scope_4593_);
lean_dec_ref(v_path_4570_);
lean_dec_ref(v_cfg_4568_);
return v___y_4747_;
}
}
v___jp_4748_:
{
lean_object* v___x_4749_; 
v___x_4749_ = lean_io_prim_handle_flush(v_h_4569_);
if (lean_obj_tag(v___x_4749_) == 0)
{
lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
lean_dec_ref(v___x_4749_);
v___x_4750_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_4751_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_4752_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_4753_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10));
v___x_4754_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32);
lean_inc_ref(v_key_4595_);
v___x_4755_ = lean_array_push(v___x_4754_, v_key_4595_);
v___x_4756_ = lean_array_push(v___x_4755_, v___x_4750_);
v___x_4757_ = lean_array_push(v___x_4756_, v___x_4751_);
v___x_4758_ = lean_array_push(v___x_4757_, v___x_4752_);
v___x_4759_ = lean_array_push(v___x_4758_, v___x_4753_);
v___x_4760_ = lean_array_push(v___x_4759_, v_path_4570_);
v_a_4653_ = v___x_4760_;
goto v___jp_4652_;
}
else
{
lean_object* v_a_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4773_; 
lean_dec_ref(v_infos_4594_);
lean_dec_ref(v_scope_4593_);
lean_dec_ref(v_path_4570_);
lean_dec_ref(v_cfg_4568_);
v_a_4761_ = lean_ctor_get(v___x_4749_, 0);
v_isSharedCheck_4773_ = !lean_is_exclusive(v___x_4749_);
if (v_isSharedCheck_4773_ == 0)
{
v___x_4763_ = v___x_4749_;
v_isShared_4764_ = v_isSharedCheck_4773_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_a_4761_);
lean_dec(v___x_4749_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4773_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
lean_object* v___x_4765_; uint8_t v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4771_; 
v___x_4765_ = lean_io_error_to_string(v_a_4761_);
v___x_4766_ = 3;
v___x_4767_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4767_, 0, v___x_4765_);
lean_ctor_set_uint8(v___x_4767_, sizeof(void*)*1, v___x_4766_);
lean_inc_ref(v___y_4571_);
v___x_4768_ = lean_apply_2(v___y_4571_, v___x_4767_, lean_box(0));
v___x_4769_ = lean_box(0);
if (v_isShared_4764_ == 0)
{
lean_ctor_set(v___x_4763_, 0, v___x_4769_);
v___x_4771_ = v___x_4763_;
goto v_reusejp_4770_;
}
else
{
lean_object* v_reuseFailAlloc_4772_; 
v_reuseFailAlloc_4772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4772_, 0, v___x_4769_);
v___x_4771_ = v_reuseFailAlloc_4772_;
goto v_reusejp_4770_;
}
v_reusejp_4770_:
{
return v___x_4771_;
}
}
}
}
v___jp_4774_:
{
if (lean_obj_tag(v___y_4775_) == 0)
{
lean_dec_ref(v___y_4775_);
goto v___jp_4748_;
}
else
{
lean_dec_ref(v_infos_4594_);
lean_dec_ref(v_scope_4593_);
lean_dec_ref(v_path_4570_);
lean_dec_ref(v_cfg_4568_);
return v___y_4775_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___boxed(lean_object* v_cfg_4798_, lean_object* v_h_4799_, lean_object* v_path_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_){
_start:
{
lean_object* v_res_4803_; 
v_res_4803_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0(v_cfg_4798_, v_h_4799_, v_path_4800_, v___y_4801_);
lean_dec_ref(v___y_4801_);
lean_dec(v_h_4799_);
return v_res_4803_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(lean_object* v_cfg_4804_, lean_object* v_a_4805_){
_start:
{
lean_object* v___f_4807_; lean_object* v___x_4808_; 
v___f_4807_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___boxed), 5, 1);
lean_closure_set(v___f_4807_, 0, v_cfg_4804_);
v___x_4808_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v___f_4807_, v_a_4805_);
return v___x_4808_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___boxed(lean_object* v_cfg_4809_, lean_object* v_a_4810_, lean_object* v_a_4811_){
_start:
{
lean_object* v_res_4812_; 
v_res_4812_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(v_cfg_4809_, v_a_4810_);
lean_dec_ref(v_a_4810_);
return v_res_4812_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0(lean_object* v_cfg_4813_, lean_object* v_h_4814_, lean_object* v_path_4815_, lean_object* v___y_4816_){
_start:
{
uint8_t v___y_4819_; lean_object* v___y_4825_; uint32_t v___y_4826_; uint8_t v___y_4827_; lean_object* v___y_4828_; uint8_t v_kind_4837_; lean_object* v_scope_4838_; lean_object* v_infos_4839_; lean_object* v_key_4840_; uint32_t v___y_4842_; uint8_t v___y_4843_; lean_object* v___y_4844_; uint32_t v___y_4849_; uint8_t v___y_4850_; lean_object* v___y_4851_; lean_object* v___y_4852_; lean_object* v___y_4853_; lean_object* v___y_4854_; lean_object* v___y_4855_; uint32_t v___y_4867_; uint8_t v___y_4868_; lean_object* v___y_4869_; lean_object* v___y_4870_; lean_object* v___y_4871_; uint32_t v___y_4876_; uint8_t v___y_4877_; lean_object* v___y_4878_; lean_object* v___y_4879_; lean_object* v___y_4880_; lean_object* v___y_4881_; uint32_t v___y_4891_; uint8_t v___y_4892_; lean_object* v___y_4893_; lean_object* v___y_4894_; lean_object* v___y_4895_; lean_object* v_a_4898_; lean_object* v___y_4994_; lean_object* v___y_5024_; 
v_kind_4837_ = lean_ctor_get_uint8(v_cfg_4813_, sizeof(void*)*3);
v_scope_4838_ = lean_ctor_get(v_cfg_4813_, 0);
lean_inc_ref(v_scope_4838_);
v_infos_4839_ = lean_ctor_get(v_cfg_4813_, 1);
lean_inc_ref(v_infos_4839_);
v_key_4840_ = lean_ctor_get(v_cfg_4813_, 2);
if (v_kind_4837_ == 0)
{
lean_object* v___x_5025_; lean_object* v___x_5026_; uint8_t v___x_5027_; 
v___x_5025_ = lean_unsigned_to_nat(0u);
v___x_5026_ = lean_array_get_size(v_infos_4839_);
v___x_5027_ = lean_nat_dec_lt(v___x_5025_, v___x_5026_);
if (v___x_5027_ == 0)
{
goto v___jp_4974_;
}
else
{
lean_object* v___x_5028_; uint8_t v___x_5029_; 
v___x_5028_ = lean_box(0);
v___x_5029_ = lean_nat_dec_le(v___x_5026_, v___x_5026_);
if (v___x_5029_ == 0)
{
if (v___x_5027_ == 0)
{
goto v___jp_4974_;
}
else
{
size_t v___x_5030_; size_t v___x_5031_; lean_object* v___x_5032_; 
v___x_5030_ = ((size_t)0ULL);
v___x_5031_ = lean_usize_of_nat(v___x_5026_);
v___x_5032_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4814_, v_infos_4839_, v___x_5030_, v___x_5031_, v___x_5028_, v___y_4816_);
v___y_4994_ = v___x_5032_;
goto v___jp_4993_;
}
}
else
{
size_t v___x_5033_; size_t v___x_5034_; lean_object* v___x_5035_; 
v___x_5033_ = ((size_t)0ULL);
v___x_5034_ = lean_usize_of_nat(v___x_5026_);
v___x_5035_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4814_, v_infos_4839_, v___x_5033_, v___x_5034_, v___x_5028_, v___y_4816_);
v___y_4994_ = v___x_5035_;
goto v___jp_4993_;
}
}
}
else
{
lean_object* v___x_5036_; lean_object* v___x_5037_; uint8_t v___x_5038_; 
v___x_5036_ = lean_unsigned_to_nat(0u);
v___x_5037_ = lean_array_get_size(v_infos_4839_);
v___x_5038_ = lean_nat_dec_lt(v___x_5036_, v___x_5037_);
if (v___x_5038_ == 0)
{
goto v___jp_4995_;
}
else
{
lean_object* v___x_5039_; uint8_t v___x_5040_; 
v___x_5039_ = lean_box(0);
v___x_5040_ = lean_nat_dec_le(v___x_5037_, v___x_5037_);
if (v___x_5040_ == 0)
{
if (v___x_5038_ == 0)
{
goto v___jp_4995_;
}
else
{
size_t v___x_5041_; size_t v___x_5042_; lean_object* v___x_5043_; 
v___x_5041_ = ((size_t)0ULL);
v___x_5042_ = lean_usize_of_nat(v___x_5037_);
v___x_5043_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4814_, v_infos_4839_, v___x_5041_, v___x_5042_, v___x_5039_, v___y_4816_);
v___y_5024_ = v___x_5043_;
goto v___jp_5023_;
}
}
else
{
size_t v___x_5044_; size_t v___x_5045_; lean_object* v___x_5046_; 
v___x_5044_ = ((size_t)0ULL);
v___x_5045_ = lean_usize_of_nat(v___x_5037_);
v___x_5046_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4814_, v_infos_4839_, v___x_5044_, v___x_5045_, v___x_5039_, v___y_4816_);
v___y_5024_ = v___x_5046_;
goto v___jp_5023_;
}
}
}
v___jp_4818_:
{
if (v___y_4819_ == 0)
{
lean_object* v___x_4820_; lean_object* v___x_4821_; 
v___x_4820_ = lean_box(0);
v___x_4821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4821_, 0, v___x_4820_);
return v___x_4821_;
}
else
{
lean_object* v___x_4822_; lean_object* v___x_4823_; 
v___x_4822_ = lean_box(0);
v___x_4823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4823_, 0, v___x_4822_);
return v___x_4823_;
}
}
v___jp_4824_:
{
lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; uint8_t v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; 
v___x_4829_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0));
v___x_4830_ = lean_string_append(v___y_4828_, v___x_4829_);
v___x_4831_ = lean_uint32_to_nat(v___y_4826_);
v___x_4832_ = l_Nat_reprFast(v___x_4831_);
v___x_4833_ = lean_string_append(v___x_4830_, v___x_4832_);
lean_dec_ref(v___x_4832_);
v___x_4834_ = 3;
v___x_4835_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4835_, 0, v___x_4833_);
lean_ctor_set_uint8(v___x_4835_, sizeof(void*)*1, v___x_4834_);
lean_inc_ref(v___y_4825_);
v___x_4836_ = lean_apply_2(v___y_4825_, v___x_4835_, lean_box(0));
v___y_4819_ = v___y_4827_;
goto v___jp_4818_;
}
v___jp_4841_:
{
uint32_t v___x_4845_; uint8_t v___x_4846_; 
v___x_4845_ = 0;
v___x_4846_ = lean_uint32_dec_eq(v___y_4842_, v___x_4845_);
if (v___x_4846_ == 0)
{
lean_object* v_s_4847_; 
v_s_4847_ = lean_ctor_get(v_scope_4838_, 0);
lean_inc_ref(v_s_4847_);
lean_dec_ref(v_scope_4838_);
v___y_4825_ = v___y_4844_;
v___y_4826_ = v___y_4842_;
v___y_4827_ = v___y_4843_;
v___y_4828_ = v_s_4847_;
goto v___jp_4824_;
}
else
{
lean_dec_ref(v_scope_4838_);
v___y_4819_ = v___y_4843_;
goto v___jp_4818_;
}
}
v___jp_4848_:
{
lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; uint8_t v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; 
v___x_4856_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1));
v___x_4857_ = lean_string_append(v___y_4855_, v___x_4856_);
lean_inc(v___y_4852_);
lean_inc(v___y_4853_);
lean_inc_ref(v___y_4854_);
v___x_4858_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4858_, 0, v___y_4854_);
lean_ctor_set(v___x_4858_, 1, v___y_4853_);
lean_ctor_set(v___x_4858_, 2, v___y_4852_);
v___x_4859_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_4858_, v___y_4852_);
lean_dec_ref(v___x_4858_);
v___x_4860_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4860_, 0, v___y_4854_);
lean_ctor_set(v___x_4860_, 1, v___y_4853_);
lean_ctor_set(v___x_4860_, 2, v___x_4859_);
v___x_4861_ = l_String_Slice_toString(v___x_4860_);
lean_dec_ref(v___x_4860_);
v___x_4862_ = lean_string_append(v___x_4857_, v___x_4861_);
lean_dec_ref(v___x_4861_);
v___x_4863_ = 2;
v___x_4864_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4864_, 0, v___x_4862_);
lean_ctor_set_uint8(v___x_4864_, sizeof(void*)*1, v___x_4863_);
lean_inc_ref(v___y_4851_);
v___x_4865_ = lean_apply_2(v___y_4851_, v___x_4864_, lean_box(0));
v___y_4842_ = v___y_4849_;
v___y_4843_ = v___y_4850_;
v___y_4844_ = v___y_4851_;
goto v___jp_4841_;
}
v___jp_4866_:
{
lean_object* v___x_4872_; uint8_t v___x_4873_; 
v___x_4872_ = lean_string_utf8_byte_size(v___y_4870_);
v___x_4873_ = lean_nat_dec_eq(v___x_4872_, v___y_4869_);
if (v___x_4873_ == 0)
{
lean_object* v_s_4874_; 
v_s_4874_ = lean_ctor_get(v_scope_4838_, 0);
lean_inc_ref(v_s_4874_);
v___y_4849_ = v___y_4867_;
v___y_4850_ = v___y_4868_;
v___y_4851_ = v___y_4871_;
v___y_4852_ = v___x_4872_;
v___y_4853_ = v___y_4869_;
v___y_4854_ = v___y_4870_;
v___y_4855_ = v_s_4874_;
goto v___jp_4848_;
}
else
{
lean_dec_ref(v___y_4870_);
lean_dec(v___y_4869_);
v___y_4842_ = v___y_4867_;
v___y_4843_ = v___y_4868_;
v___y_4844_ = v___y_4871_;
goto v___jp_4841_;
}
}
v___jp_4875_:
{
lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; uint8_t v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; 
v___x_4882_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_4883_ = lean_string_append(v___y_4881_, v___x_4882_);
v___x_4884_ = lean_string_append(v___x_4883_, v___y_4878_);
v___x_4885_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2));
v___x_4886_ = lean_string_append(v___x_4884_, v___x_4885_);
v___x_4887_ = 3;
v___x_4888_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4888_, 0, v___x_4886_);
lean_ctor_set_uint8(v___x_4888_, sizeof(void*)*1, v___x_4887_);
lean_inc_ref(v___y_4816_);
v___x_4889_ = lean_apply_2(v___y_4816_, v___x_4888_, lean_box(0));
v___y_4867_ = v___y_4876_;
v___y_4868_ = v___y_4877_;
v___y_4869_ = v___y_4879_;
v___y_4870_ = v___y_4880_;
v___y_4871_ = v___y_4816_;
goto v___jp_4866_;
}
v___jp_4890_:
{
lean_object* v_s_4896_; 
v_s_4896_ = lean_ctor_get(v_scope_4838_, 0);
lean_inc_ref(v_s_4896_);
v___y_4876_ = v___y_4891_;
v___y_4877_ = v___y_4892_;
v___y_4878_ = v___y_4895_;
v___y_4879_ = v___y_4893_;
v___y_4880_ = v___y_4894_;
v___y_4881_ = v_s_4896_;
goto v___jp_4875_;
}
v___jp_4897_:
{
lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; uint8_t v___x_4904_; uint8_t v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; 
v___x_4899_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3));
v___x_4900_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_4901_ = lean_box(0);
v___x_4902_ = lean_unsigned_to_nat(0u);
v___x_4903_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_4904_ = 1;
v___x_4905_ = 0;
v___x_4906_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_4906_, 0, v___x_4899_);
lean_ctor_set(v___x_4906_, 1, v___x_4900_);
lean_ctor_set(v___x_4906_, 2, v_a_4898_);
lean_ctor_set(v___x_4906_, 3, v___x_4901_);
lean_ctor_set(v___x_4906_, 4, v___x_4903_);
lean_ctor_set_uint8(v___x_4906_, sizeof(void*)*5, v___x_4904_);
lean_ctor_set_uint8(v___x_4906_, sizeof(void*)*5 + 1, v___x_4905_);
v___x_4907_ = lean_io_process_spawn(v___x_4906_);
if (lean_obj_tag(v___x_4907_) == 0)
{
lean_object* v_a_4908_; lean_object* v_stdout_4909_; lean_object* v_stderr_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; 
v_a_4908_ = lean_ctor_get(v___x_4907_, 0);
lean_inc(v_a_4908_);
lean_dec_ref(v___x_4907_);
v_stdout_4909_ = lean_ctor_get(v_a_4908_, 1);
lean_inc_n(v_stdout_4909_, 2);
v_stderr_4910_ = lean_ctor_get(v_a_4908_, 2);
v___x_4911_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4));
v___x_4912_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(v_cfg_4813_, v_stderr_4910_, v_stdout_4909_, v___x_4911_, v___y_4816_);
if (lean_obj_tag(v___x_4912_) == 0)
{
lean_object* v_a_4913_; lean_object* v___x_4914_; 
v_a_4913_ = lean_ctor_get(v___x_4912_, 0);
lean_inc(v_a_4913_);
lean_dec_ref(v___x_4912_);
v___x_4914_ = lean_io_process_child_wait(v___x_4899_, v_a_4908_);
lean_dec(v_a_4908_);
if (lean_obj_tag(v___x_4914_) == 0)
{
lean_object* v_a_4915_; lean_object* v___x_4916_; 
v_a_4915_ = lean_ctor_get(v___x_4914_, 0);
lean_inc(v_a_4915_);
lean_dec_ref(v___x_4914_);
v___x_4916_ = l_IO_FS_Handle_readToEnd(v_stdout_4909_);
lean_dec(v_stdout_4909_);
if (lean_obj_tag(v___x_4916_) == 0)
{
lean_object* v_a_4917_; uint8_t v_didError_4918_; lean_object* v_numSuccesses_4919_; lean_object* v___x_4920_; uint8_t v___x_4921_; 
v_a_4917_ = lean_ctor_get(v___x_4916_, 0);
lean_inc(v_a_4917_);
lean_dec_ref(v___x_4916_);
v_didError_4918_ = lean_ctor_get_uint8(v_a_4913_, sizeof(void*)*1);
v_numSuccesses_4919_ = lean_ctor_get(v_a_4913_, 0);
lean_inc(v_numSuccesses_4919_);
lean_dec(v_a_4913_);
v___x_4920_ = lean_array_get_size(v_infos_4839_);
lean_dec_ref(v_infos_4839_);
v___x_4921_ = lean_nat_dec_lt(v_numSuccesses_4919_, v___x_4920_);
lean_dec(v_numSuccesses_4919_);
if (v___x_4921_ == 0)
{
uint32_t v___x_4922_; 
v___x_4922_ = lean_unbox_uint32(v_a_4915_);
lean_dec(v_a_4915_);
v___y_4867_ = v___x_4922_;
v___y_4868_ = v_didError_4918_;
v___y_4869_ = v___x_4902_;
v___y_4870_ = v_a_4917_;
v___y_4871_ = v___y_4816_;
goto v___jp_4866_;
}
else
{
if (v_kind_4837_ == 0)
{
lean_object* v___x_4923_; uint32_t v___x_4924_; 
v___x_4923_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___x_4924_ = lean_unbox_uint32(v_a_4915_);
lean_dec(v_a_4915_);
v___y_4891_ = v___x_4924_;
v___y_4892_ = v_didError_4918_;
v___y_4893_ = v___x_4902_;
v___y_4894_ = v_a_4917_;
v___y_4895_ = v___x_4923_;
goto v___jp_4890_;
}
else
{
lean_object* v___x_4925_; uint32_t v___x_4926_; 
v___x_4925_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___x_4926_ = lean_unbox_uint32(v_a_4915_);
lean_dec(v_a_4915_);
v___y_4891_ = v___x_4926_;
v___y_4892_ = v_didError_4918_;
v___y_4893_ = v___x_4902_;
v___y_4894_ = v_a_4917_;
v___y_4895_ = v___x_4925_;
goto v___jp_4890_;
}
}
}
else
{
lean_object* v_a_4927_; lean_object* v___x_4929_; uint8_t v_isShared_4930_; uint8_t v_isSharedCheck_4939_; 
lean_dec(v_a_4915_);
lean_dec(v_a_4913_);
lean_dec_ref(v_infos_4839_);
lean_dec_ref(v_scope_4838_);
v_a_4927_ = lean_ctor_get(v___x_4916_, 0);
v_isSharedCheck_4939_ = !lean_is_exclusive(v___x_4916_);
if (v_isSharedCheck_4939_ == 0)
{
v___x_4929_ = v___x_4916_;
v_isShared_4930_ = v_isSharedCheck_4939_;
goto v_resetjp_4928_;
}
else
{
lean_inc(v_a_4927_);
lean_dec(v___x_4916_);
v___x_4929_ = lean_box(0);
v_isShared_4930_ = v_isSharedCheck_4939_;
goto v_resetjp_4928_;
}
v_resetjp_4928_:
{
lean_object* v___x_4931_; uint8_t v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4937_; 
v___x_4931_ = lean_io_error_to_string(v_a_4927_);
v___x_4932_ = 3;
v___x_4933_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4933_, 0, v___x_4931_);
lean_ctor_set_uint8(v___x_4933_, sizeof(void*)*1, v___x_4932_);
lean_inc_ref(v___y_4816_);
v___x_4934_ = lean_apply_2(v___y_4816_, v___x_4933_, lean_box(0));
v___x_4935_ = lean_box(0);
if (v_isShared_4930_ == 0)
{
lean_ctor_set(v___x_4929_, 0, v___x_4935_);
v___x_4937_ = v___x_4929_;
goto v_reusejp_4936_;
}
else
{
lean_object* v_reuseFailAlloc_4938_; 
v_reuseFailAlloc_4938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4938_, 0, v___x_4935_);
v___x_4937_ = v_reuseFailAlloc_4938_;
goto v_reusejp_4936_;
}
v_reusejp_4936_:
{
return v___x_4937_;
}
}
}
}
else
{
lean_object* v_a_4940_; lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_4952_; 
lean_dec(v_a_4913_);
lean_dec(v_stdout_4909_);
lean_dec_ref(v_infos_4839_);
lean_dec_ref(v_scope_4838_);
v_a_4940_ = lean_ctor_get(v___x_4914_, 0);
v_isSharedCheck_4952_ = !lean_is_exclusive(v___x_4914_);
if (v_isSharedCheck_4952_ == 0)
{
v___x_4942_ = v___x_4914_;
v_isShared_4943_ = v_isSharedCheck_4952_;
goto v_resetjp_4941_;
}
else
{
lean_inc(v_a_4940_);
lean_dec(v___x_4914_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_4952_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
lean_object* v___x_4944_; uint8_t v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4950_; 
v___x_4944_ = lean_io_error_to_string(v_a_4940_);
v___x_4945_ = 3;
v___x_4946_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4946_, 0, v___x_4944_);
lean_ctor_set_uint8(v___x_4946_, sizeof(void*)*1, v___x_4945_);
lean_inc_ref(v___y_4816_);
v___x_4947_ = lean_apply_2(v___y_4816_, v___x_4946_, lean_box(0));
v___x_4948_ = lean_box(0);
if (v_isShared_4943_ == 0)
{
lean_ctor_set(v___x_4942_, 0, v___x_4948_);
v___x_4950_ = v___x_4942_;
goto v_reusejp_4949_;
}
else
{
lean_object* v_reuseFailAlloc_4951_; 
v_reuseFailAlloc_4951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4951_, 0, v___x_4948_);
v___x_4950_ = v_reuseFailAlloc_4951_;
goto v_reusejp_4949_;
}
v_reusejp_4949_:
{
return v___x_4950_;
}
}
}
}
else
{
lean_object* v_a_4953_; lean_object* v___x_4955_; uint8_t v_isShared_4956_; uint8_t v_isSharedCheck_4960_; 
lean_dec(v_stdout_4909_);
lean_dec(v_a_4908_);
lean_dec_ref(v_infos_4839_);
lean_dec_ref(v_scope_4838_);
v_a_4953_ = lean_ctor_get(v___x_4912_, 0);
v_isSharedCheck_4960_ = !lean_is_exclusive(v___x_4912_);
if (v_isSharedCheck_4960_ == 0)
{
v___x_4955_ = v___x_4912_;
v_isShared_4956_ = v_isSharedCheck_4960_;
goto v_resetjp_4954_;
}
else
{
lean_inc(v_a_4953_);
lean_dec(v___x_4912_);
v___x_4955_ = lean_box(0);
v_isShared_4956_ = v_isSharedCheck_4960_;
goto v_resetjp_4954_;
}
v_resetjp_4954_:
{
lean_object* v___x_4958_; 
if (v_isShared_4956_ == 0)
{
v___x_4958_ = v___x_4955_;
goto v_reusejp_4957_;
}
else
{
lean_object* v_reuseFailAlloc_4959_; 
v_reuseFailAlloc_4959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4959_, 0, v_a_4953_);
v___x_4958_ = v_reuseFailAlloc_4959_;
goto v_reusejp_4957_;
}
v_reusejp_4957_:
{
return v___x_4958_;
}
}
}
}
else
{
lean_object* v_a_4961_; lean_object* v___x_4963_; uint8_t v_isShared_4964_; uint8_t v_isSharedCheck_4973_; 
lean_dec_ref(v_infos_4839_);
lean_dec_ref(v_scope_4838_);
lean_dec_ref(v_cfg_4813_);
v_a_4961_ = lean_ctor_get(v___x_4907_, 0);
v_isSharedCheck_4973_ = !lean_is_exclusive(v___x_4907_);
if (v_isSharedCheck_4973_ == 0)
{
v___x_4963_ = v___x_4907_;
v_isShared_4964_ = v_isSharedCheck_4973_;
goto v_resetjp_4962_;
}
else
{
lean_inc(v_a_4961_);
lean_dec(v___x_4907_);
v___x_4963_ = lean_box(0);
v_isShared_4964_ = v_isSharedCheck_4973_;
goto v_resetjp_4962_;
}
v_resetjp_4962_:
{
lean_object* v___x_4965_; uint8_t v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4971_; 
v___x_4965_ = lean_io_error_to_string(v_a_4961_);
v___x_4966_ = 3;
v___x_4967_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4967_, 0, v___x_4965_);
lean_ctor_set_uint8(v___x_4967_, sizeof(void*)*1, v___x_4966_);
lean_inc_ref(v___y_4816_);
v___x_4968_ = lean_apply_2(v___y_4816_, v___x_4967_, lean_box(0));
v___x_4969_ = lean_box(0);
if (v_isShared_4964_ == 0)
{
lean_ctor_set(v___x_4963_, 0, v___x_4969_);
v___x_4971_ = v___x_4963_;
goto v_reusejp_4970_;
}
else
{
lean_object* v_reuseFailAlloc_4972_; 
v_reuseFailAlloc_4972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4972_, 0, v___x_4969_);
v___x_4971_ = v_reuseFailAlloc_4972_;
goto v_reusejp_4970_;
}
v_reusejp_4970_:
{
return v___x_4971_;
}
}
}
}
v___jp_4974_:
{
lean_object* v___x_4975_; 
v___x_4975_ = lean_io_prim_handle_flush(v_h_4814_);
if (lean_obj_tag(v___x_4975_) == 0)
{
lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; 
lean_dec_ref(v___x_4975_);
v___x_4976_ = lean_unsigned_to_nat(11u);
v___x_4977_ = lean_mk_empty_array_with_capacity(v___x_4976_);
lean_dec_ref(v___x_4977_);
v___x_4978_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20);
v___x_4979_ = lean_array_push(v___x_4978_, v_path_4815_);
v_a_4898_ = v___x_4979_;
goto v___jp_4897_;
}
else
{
lean_object* v_a_4980_; lean_object* v___x_4982_; uint8_t v_isShared_4983_; uint8_t v_isSharedCheck_4992_; 
lean_dec_ref(v_infos_4839_);
lean_dec_ref(v_scope_4838_);
lean_dec_ref(v_path_4815_);
lean_dec_ref(v_cfg_4813_);
v_a_4980_ = lean_ctor_get(v___x_4975_, 0);
v_isSharedCheck_4992_ = !lean_is_exclusive(v___x_4975_);
if (v_isSharedCheck_4992_ == 0)
{
v___x_4982_ = v___x_4975_;
v_isShared_4983_ = v_isSharedCheck_4992_;
goto v_resetjp_4981_;
}
else
{
lean_inc(v_a_4980_);
lean_dec(v___x_4975_);
v___x_4982_ = lean_box(0);
v_isShared_4983_ = v_isSharedCheck_4992_;
goto v_resetjp_4981_;
}
v_resetjp_4981_:
{
lean_object* v___x_4984_; uint8_t v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4990_; 
v___x_4984_ = lean_io_error_to_string(v_a_4980_);
v___x_4985_ = 3;
v___x_4986_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4986_, 0, v___x_4984_);
lean_ctor_set_uint8(v___x_4986_, sizeof(void*)*1, v___x_4985_);
lean_inc_ref(v___y_4816_);
v___x_4987_ = lean_apply_2(v___y_4816_, v___x_4986_, lean_box(0));
v___x_4988_ = lean_box(0);
if (v_isShared_4983_ == 0)
{
lean_ctor_set(v___x_4982_, 0, v___x_4988_);
v___x_4990_ = v___x_4982_;
goto v_reusejp_4989_;
}
else
{
lean_object* v_reuseFailAlloc_4991_; 
v_reuseFailAlloc_4991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4991_, 0, v___x_4988_);
v___x_4990_ = v_reuseFailAlloc_4991_;
goto v_reusejp_4989_;
}
v_reusejp_4989_:
{
return v___x_4990_;
}
}
}
}
v___jp_4993_:
{
if (lean_obj_tag(v___y_4994_) == 0)
{
lean_dec_ref(v___y_4994_);
goto v___jp_4974_;
}
else
{
lean_dec_ref(v_infos_4839_);
lean_dec_ref(v_scope_4838_);
lean_dec_ref(v_path_4815_);
lean_dec_ref(v_cfg_4813_);
return v___y_4994_;
}
}
v___jp_4995_:
{
lean_object* v___x_4996_; 
v___x_4996_ = lean_io_prim_handle_flush(v_h_4814_);
if (lean_obj_tag(v___x_4996_) == 0)
{
lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; 
lean_dec_ref(v___x_4996_);
v___x_4997_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_4998_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_4999_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_5000_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10));
v___x_5001_ = lean_unsigned_to_nat(17u);
v___x_5002_ = lean_mk_empty_array_with_capacity(v___x_5001_);
lean_dec_ref(v___x_5002_);
v___x_5003_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32);
lean_inc_ref(v_key_4840_);
v___x_5004_ = lean_array_push(v___x_5003_, v_key_4840_);
v___x_5005_ = lean_array_push(v___x_5004_, v___x_4997_);
v___x_5006_ = lean_array_push(v___x_5005_, v___x_4998_);
v___x_5007_ = lean_array_push(v___x_5006_, v___x_4999_);
v___x_5008_ = lean_array_push(v___x_5007_, v___x_5000_);
v___x_5009_ = lean_array_push(v___x_5008_, v_path_4815_);
v_a_4898_ = v___x_5009_;
goto v___jp_4897_;
}
else
{
lean_object* v_a_5010_; lean_object* v___x_5012_; uint8_t v_isShared_5013_; uint8_t v_isSharedCheck_5022_; 
lean_dec_ref(v_infos_4839_);
lean_dec_ref(v_scope_4838_);
lean_dec_ref(v_path_4815_);
lean_dec_ref(v_cfg_4813_);
v_a_5010_ = lean_ctor_get(v___x_4996_, 0);
v_isSharedCheck_5022_ = !lean_is_exclusive(v___x_4996_);
if (v_isSharedCheck_5022_ == 0)
{
v___x_5012_ = v___x_4996_;
v_isShared_5013_ = v_isSharedCheck_5022_;
goto v_resetjp_5011_;
}
else
{
lean_inc(v_a_5010_);
lean_dec(v___x_4996_);
v___x_5012_ = lean_box(0);
v_isShared_5013_ = v_isSharedCheck_5022_;
goto v_resetjp_5011_;
}
v_resetjp_5011_:
{
lean_object* v___x_5014_; uint8_t v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___x_5020_; 
v___x_5014_ = lean_io_error_to_string(v_a_5010_);
v___x_5015_ = 3;
v___x_5016_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5016_, 0, v___x_5014_);
lean_ctor_set_uint8(v___x_5016_, sizeof(void*)*1, v___x_5015_);
lean_inc_ref(v___y_4816_);
v___x_5017_ = lean_apply_2(v___y_4816_, v___x_5016_, lean_box(0));
v___x_5018_ = lean_box(0);
if (v_isShared_5013_ == 0)
{
lean_ctor_set(v___x_5012_, 0, v___x_5018_);
v___x_5020_ = v___x_5012_;
goto v_reusejp_5019_;
}
else
{
lean_object* v_reuseFailAlloc_5021_; 
v_reuseFailAlloc_5021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5021_, 0, v___x_5018_);
v___x_5020_ = v_reuseFailAlloc_5021_;
goto v_reusejp_5019_;
}
v_reusejp_5019_:
{
return v___x_5020_;
}
}
}
}
v___jp_5023_:
{
if (lean_obj_tag(v___y_5024_) == 0)
{
lean_dec_ref(v___y_5024_);
goto v___jp_4995_;
}
else
{
lean_dec_ref(v_infos_4839_);
lean_dec_ref(v_scope_4838_);
lean_dec_ref(v_path_4815_);
lean_dec_ref(v_cfg_4813_);
return v___y_5024_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0___boxed(lean_object* v_cfg_5047_, lean_object* v_h_5048_, lean_object* v_path_5049_, lean_object* v___y_5050_, lean_object* v___y_5051_){
_start:
{
lean_object* v_res_5052_; 
v_res_5052_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0(v_cfg_5047_, v_h_5048_, v_path_5049_, v___y_5050_);
lean_dec_ref(v___y_5050_);
lean_dec(v_h_5048_);
return v_res_5052_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(lean_object* v_a_5053_, lean_object* v_cfg_5054_){
_start:
{
lean_object* v___f_5056_; lean_object* v___x_5057_; 
v___f_5056_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0___boxed), 5, 1);
lean_closure_set(v___f_5056_, 0, v_cfg_5054_);
v___x_5057_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v___f_5056_, v_a_5053_);
return v___x_5057_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___boxed(lean_object* v_a_5058_, lean_object* v_cfg_5059_, lean_object* v_a_5060_){
_start:
{
lean_object* v_res_5061_; 
v_res_5061_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(v_a_5058_, v_cfg_5059_);
lean_dec_ref(v_a_5058_);
return v_res_5061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(lean_object* v_cache_5062_, lean_object* v_service_5063_, lean_object* v_scope_5064_, uint8_t v_force_5065_, lean_object* v_as_5066_, size_t v_i_5067_, size_t v_stop_5068_, lean_object* v_b_5069_, lean_object* v___y_5070_){
_start:
{
lean_object* v_a_5073_; uint8_t v___x_5077_; 
v___x_5077_ = lean_usize_dec_eq(v_i_5067_, v_stop_5068_);
if (v___x_5077_ == 0)
{
lean_object* v___x_5078_; lean_object* v___y_5080_; lean_object* v___y_5086_; uint8_t v_a_5087_; uint64_t v_hash_5088_; lean_object* v_ext_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; lean_object* v___y_5093_; lean_object* v___x_5136_; lean_object* v___x_5137_; uint8_t v___x_5138_; 
v___x_5078_ = lean_array_uget_borrowed(v_as_5066_, v_i_5067_);
v_hash_5088_ = lean_ctor_get_uint64(v___x_5078_, sizeof(void*)*1);
v_ext_5089_ = lean_ctor_get(v___x_5078_, 0);
v___x_5090_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
lean_inc_ref(v_cache_5062_);
v___x_5091_ = l_System_FilePath_join(v_cache_5062_, v___x_5090_);
v___x_5136_ = lean_string_utf8_byte_size(v_ext_5089_);
v___x_5137_ = lean_unsigned_to_nat(0u);
v___x_5138_ = lean_nat_dec_eq(v___x_5136_, v___x_5137_);
if (v___x_5138_ == 0)
{
lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; 
v___x_5139_ = l_Lake_Hash_hex(v_hash_5088_);
v___x_5140_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_5141_ = lean_string_append(v___x_5139_, v___x_5140_);
v___x_5142_ = lean_string_append(v___x_5141_, v_ext_5089_);
v___y_5093_ = v___x_5142_;
goto v___jp_5092_;
}
else
{
lean_object* v___x_5143_; 
v___x_5143_ = l_Lake_Hash_hex(v_hash_5088_);
v___y_5093_ = v___x_5143_;
goto v___jp_5092_;
}
v___jp_5079_:
{
uint64_t v_hash_5081_; lean_object* v_url_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; 
v_hash_5081_ = lean_ctor_get_uint64(v___x_5078_, sizeof(void*)*1);
lean_inc_ref(v_scope_5064_);
lean_inc_ref(v_service_5063_);
v_url_5082_ = l_Lake_CacheService_artifactUrl(v_hash_5081_, v_service_5063_, v_scope_5064_);
lean_inc(v___x_5078_);
v___x_5083_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5083_, 0, v_url_5082_);
lean_ctor_set(v___x_5083_, 1, v___y_5080_);
lean_ctor_set(v___x_5083_, 2, v___x_5078_);
v___x_5084_ = lean_array_push(v_b_5069_, v___x_5083_);
v_a_5073_ = v___x_5084_;
goto v___jp_5072_;
}
v___jp_5085_:
{
if (v_a_5087_ == 0)
{
v___y_5080_ = v___y_5086_;
goto v___jp_5079_;
}
else
{
lean_dec_ref(v___y_5086_);
v_a_5073_ = v_b_5069_;
goto v___jp_5072_;
}
}
v___jp_5092_:
{
lean_object* v_path_5094_; 
v_path_5094_ = l_System_FilePath_join(v___x_5091_, v___y_5093_);
if (v_force_5065_ == 0)
{
uint8_t v___x_5095_; lean_object* v___x_5096_; uint8_t v___x_5097_; 
v___x_5095_ = l_System_FilePath_pathExists(v_path_5094_);
v___x_5096_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_5097_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__4, &l_Lake_CacheService_downloadArtifact___closed__4_once, _init_l_Lake_CacheService_downloadArtifact___closed__4);
if (v___x_5097_ == 0)
{
v___y_5086_ = v_path_5094_;
v_a_5087_ = v___x_5095_;
goto v___jp_5085_;
}
else
{
lean_object* v___x_5098_; uint8_t v___x_5099_; 
v___x_5098_ = lean_box(0);
v___x_5099_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__5, &l_Lake_CacheService_downloadArtifact___closed__5_once, _init_l_Lake_CacheService_downloadArtifact___closed__5);
if (v___x_5099_ == 0)
{
if (v___x_5097_ == 0)
{
v___y_5086_ = v_path_5094_;
v_a_5087_ = v___x_5095_;
goto v___jp_5085_;
}
else
{
size_t v___x_5100_; size_t v___x_5101_; lean_object* v___x_5102_; 
v___x_5100_ = ((size_t)0ULL);
v___x_5101_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
v___x_5102_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_5096_, v___x_5100_, v___x_5101_, v___x_5098_, v___y_5070_);
if (lean_obj_tag(v___x_5102_) == 0)
{
lean_dec_ref(v___x_5102_);
v___y_5086_ = v_path_5094_;
v_a_5087_ = v___x_5095_;
goto v___jp_5085_;
}
else
{
lean_object* v_a_5103_; lean_object* v___x_5105_; uint8_t v_isShared_5106_; uint8_t v_isSharedCheck_5110_; 
lean_dec_ref(v_path_5094_);
lean_dec_ref(v_b_5069_);
lean_dec_ref(v_scope_5064_);
lean_dec_ref(v_service_5063_);
lean_dec_ref(v_cache_5062_);
v_a_5103_ = lean_ctor_get(v___x_5102_, 0);
v_isSharedCheck_5110_ = !lean_is_exclusive(v___x_5102_);
if (v_isSharedCheck_5110_ == 0)
{
v___x_5105_ = v___x_5102_;
v_isShared_5106_ = v_isSharedCheck_5110_;
goto v_resetjp_5104_;
}
else
{
lean_inc(v_a_5103_);
lean_dec(v___x_5102_);
v___x_5105_ = lean_box(0);
v_isShared_5106_ = v_isSharedCheck_5110_;
goto v_resetjp_5104_;
}
v_resetjp_5104_:
{
lean_object* v___x_5108_; 
if (v_isShared_5106_ == 0)
{
v___x_5108_ = v___x_5105_;
goto v_reusejp_5107_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v_a_5103_);
v___x_5108_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5107_;
}
v_reusejp_5107_:
{
return v___x_5108_;
}
}
}
}
}
else
{
size_t v___x_5111_; size_t v___x_5112_; lean_object* v___x_5113_; 
v___x_5111_ = ((size_t)0ULL);
v___x_5112_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
v___x_5113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_5096_, v___x_5111_, v___x_5112_, v___x_5098_, v___y_5070_);
if (lean_obj_tag(v___x_5113_) == 0)
{
lean_dec_ref(v___x_5113_);
v___y_5086_ = v_path_5094_;
v_a_5087_ = v___x_5095_;
goto v___jp_5085_;
}
else
{
lean_object* v_a_5114_; lean_object* v___x_5116_; uint8_t v_isShared_5117_; uint8_t v_isSharedCheck_5121_; 
lean_dec_ref(v_path_5094_);
lean_dec_ref(v_b_5069_);
lean_dec_ref(v_scope_5064_);
lean_dec_ref(v_service_5063_);
lean_dec_ref(v_cache_5062_);
v_a_5114_ = lean_ctor_get(v___x_5113_, 0);
v_isSharedCheck_5121_ = !lean_is_exclusive(v___x_5113_);
if (v_isSharedCheck_5121_ == 0)
{
v___x_5116_ = v___x_5113_;
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
else
{
lean_inc(v_a_5114_);
lean_dec(v___x_5113_);
v___x_5116_ = lean_box(0);
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
v_resetjp_5115_:
{
lean_object* v___x_5119_; 
if (v_isShared_5117_ == 0)
{
v___x_5119_ = v___x_5116_;
goto v_reusejp_5118_;
}
else
{
lean_object* v_reuseFailAlloc_5120_; 
v_reuseFailAlloc_5120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5120_, 0, v_a_5114_);
v___x_5119_ = v_reuseFailAlloc_5120_;
goto v_reusejp_5118_;
}
v_reusejp_5118_:
{
return v___x_5119_;
}
}
}
}
}
}
else
{
lean_object* v___x_5122_; 
v___x_5122_ = l_Lake_removeFileIfExists(v_path_5094_);
if (lean_obj_tag(v___x_5122_) == 0)
{
lean_dec_ref(v___x_5122_);
v___y_5080_ = v_path_5094_;
goto v___jp_5079_;
}
else
{
lean_object* v_a_5123_; lean_object* v___x_5125_; uint8_t v_isShared_5126_; uint8_t v_isSharedCheck_5135_; 
lean_dec_ref(v_path_5094_);
lean_dec_ref(v_b_5069_);
lean_dec_ref(v_scope_5064_);
lean_dec_ref(v_service_5063_);
lean_dec_ref(v_cache_5062_);
v_a_5123_ = lean_ctor_get(v___x_5122_, 0);
v_isSharedCheck_5135_ = !lean_is_exclusive(v___x_5122_);
if (v_isSharedCheck_5135_ == 0)
{
v___x_5125_ = v___x_5122_;
v_isShared_5126_ = v_isSharedCheck_5135_;
goto v_resetjp_5124_;
}
else
{
lean_inc(v_a_5123_);
lean_dec(v___x_5122_);
v___x_5125_ = lean_box(0);
v_isShared_5126_ = v_isSharedCheck_5135_;
goto v_resetjp_5124_;
}
v_resetjp_5124_:
{
lean_object* v___x_5127_; uint8_t v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v___x_5133_; 
v___x_5127_ = lean_io_error_to_string(v_a_5123_);
v___x_5128_ = 3;
v___x_5129_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5129_, 0, v___x_5127_);
lean_ctor_set_uint8(v___x_5129_, sizeof(void*)*1, v___x_5128_);
lean_inc_ref(v___y_5070_);
v___x_5130_ = lean_apply_2(v___y_5070_, v___x_5129_, lean_box(0));
v___x_5131_ = lean_box(0);
if (v_isShared_5126_ == 0)
{
lean_ctor_set(v___x_5125_, 0, v___x_5131_);
v___x_5133_ = v___x_5125_;
goto v_reusejp_5132_;
}
else
{
lean_object* v_reuseFailAlloc_5134_; 
v_reuseFailAlloc_5134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5134_, 0, v___x_5131_);
v___x_5133_ = v_reuseFailAlloc_5134_;
goto v_reusejp_5132_;
}
v_reusejp_5132_:
{
return v___x_5133_;
}
}
}
}
}
}
else
{
lean_object* v___x_5144_; 
lean_dec_ref(v_scope_5064_);
lean_dec_ref(v_service_5063_);
lean_dec_ref(v_cache_5062_);
v___x_5144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5144_, 0, v_b_5069_);
return v___x_5144_;
}
v___jp_5072_:
{
size_t v___x_5074_; size_t v___x_5075_; 
v___x_5074_ = ((size_t)1ULL);
v___x_5075_ = lean_usize_add(v_i_5067_, v___x_5074_);
v_i_5067_ = v___x_5075_;
v_b_5069_ = v_a_5073_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1___boxed(lean_object* v_cache_5145_, lean_object* v_service_5146_, lean_object* v_scope_5147_, lean_object* v_force_5148_, lean_object* v_as_5149_, lean_object* v_i_5150_, lean_object* v_stop_5151_, lean_object* v_b_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_){
_start:
{
uint8_t v_force_boxed_5155_; size_t v_i_boxed_5156_; size_t v_stop_boxed_5157_; lean_object* v_res_5158_; 
v_force_boxed_5155_ = lean_unbox(v_force_5148_);
v_i_boxed_5156_ = lean_unbox_usize(v_i_5150_);
lean_dec(v_i_5150_);
v_stop_boxed_5157_ = lean_unbox_usize(v_stop_5151_);
lean_dec(v_stop_5151_);
v_res_5158_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(v_cache_5145_, v_service_5146_, v_scope_5147_, v_force_boxed_5155_, v_as_5149_, v_i_boxed_5156_, v_stop_boxed_5157_, v_b_5152_, v___y_5153_);
lean_dec_ref(v___y_5153_);
lean_dec_ref(v_as_5149_);
return v_res_5158_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts(lean_object* v_descrs_5165_, lean_object* v_cache_5166_, lean_object* v_service_5167_, lean_object* v_scope_5168_, uint8_t v_force_5169_, lean_object* v_a_5170_){
_start:
{
lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v_a_5175_; lean_object* v___y_5201_; uint8_t v___x_5211_; 
v___x_5172_ = lean_array_get_size(v_descrs_5165_);
v___x_5173_ = lean_unsigned_to_nat(0u);
v___x_5211_ = lean_nat_dec_eq(v___x_5172_, v___x_5173_);
if (v___x_5211_ == 0)
{
lean_object* v___x_5212_; uint8_t v___x_5213_; 
v___x_5212_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__0));
v___x_5213_ = lean_nat_dec_lt(v___x_5173_, v___x_5172_);
if (v___x_5213_ == 0)
{
lean_dec_ref(v_service_5167_);
v_a_5175_ = v___x_5212_;
goto v___jp_5174_;
}
else
{
uint8_t v___x_5214_; 
v___x_5214_ = lean_nat_dec_le(v___x_5172_, v___x_5172_);
if (v___x_5214_ == 0)
{
if (v___x_5213_ == 0)
{
lean_dec_ref(v_service_5167_);
v_a_5175_ = v___x_5212_;
goto v___jp_5174_;
}
else
{
size_t v___x_5215_; size_t v___x_5216_; lean_object* v___x_5217_; 
v___x_5215_ = ((size_t)0ULL);
v___x_5216_ = lean_usize_of_nat(v___x_5172_);
lean_inc_ref(v_scope_5168_);
lean_inc_ref(v_cache_5166_);
v___x_5217_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(v_cache_5166_, v_service_5167_, v_scope_5168_, v_force_5169_, v_descrs_5165_, v___x_5215_, v___x_5216_, v___x_5212_, v_a_5170_);
v___y_5201_ = v___x_5217_;
goto v___jp_5200_;
}
}
else
{
size_t v___x_5218_; size_t v___x_5219_; lean_object* v___x_5220_; 
v___x_5218_ = ((size_t)0ULL);
v___x_5219_ = lean_usize_of_nat(v___x_5172_);
lean_inc_ref(v_scope_5168_);
lean_inc_ref(v_cache_5166_);
v___x_5220_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(v_cache_5166_, v_service_5167_, v_scope_5168_, v_force_5169_, v_descrs_5165_, v___x_5218_, v___x_5219_, v___x_5212_, v_a_5170_);
v___y_5201_ = v___x_5220_;
goto v___jp_5200_;
}
}
}
else
{
lean_object* v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; 
lean_dec_ref(v_scope_5168_);
lean_dec_ref(v_service_5167_);
lean_dec_ref(v_cache_5166_);
v___x_5221_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__2));
lean_inc_ref(v_a_5170_);
v___x_5222_ = lean_apply_2(v_a_5170_, v___x_5221_, lean_box(0));
v___x_5223_ = lean_box(0);
v___x_5224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5224_, 0, v___x_5223_);
return v___x_5224_;
}
v___jp_5174_:
{
lean_object* v___x_5176_; uint8_t v___x_5177_; 
v___x_5176_ = lean_array_get_size(v_a_5175_);
v___x_5177_ = lean_nat_dec_eq(v___x_5176_, v___x_5173_);
if (v___x_5177_ == 0)
{
lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; 
v___x_5178_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_5179_ = l_System_FilePath_join(v_cache_5166_, v___x_5178_);
v___x_5180_ = l_IO_FS_createDirAll(v___x_5179_);
if (lean_obj_tag(v___x_5180_) == 0)
{
uint8_t v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; 
lean_dec_ref(v___x_5180_);
v___x_5181_ = 0;
v___x_5182_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_5183_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_5183_, 0, v_scope_5168_);
lean_ctor_set(v___x_5183_, 1, v_a_5175_);
lean_ctor_set(v___x_5183_, 2, v___x_5182_);
lean_ctor_set_uint8(v___x_5183_, sizeof(void*)*3, v___x_5181_);
v___x_5184_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(v_a_5170_, v___x_5183_);
return v___x_5184_;
}
else
{
lean_object* v_a_5185_; lean_object* v___x_5187_; uint8_t v_isShared_5188_; uint8_t v_isSharedCheck_5197_; 
lean_dec_ref(v_a_5175_);
lean_dec_ref(v_scope_5168_);
v_a_5185_ = lean_ctor_get(v___x_5180_, 0);
v_isSharedCheck_5197_ = !lean_is_exclusive(v___x_5180_);
if (v_isSharedCheck_5197_ == 0)
{
v___x_5187_ = v___x_5180_;
v_isShared_5188_ = v_isSharedCheck_5197_;
goto v_resetjp_5186_;
}
else
{
lean_inc(v_a_5185_);
lean_dec(v___x_5180_);
v___x_5187_ = lean_box(0);
v_isShared_5188_ = v_isSharedCheck_5197_;
goto v_resetjp_5186_;
}
v_resetjp_5186_:
{
lean_object* v___x_5189_; uint8_t v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5195_; 
v___x_5189_ = lean_io_error_to_string(v_a_5185_);
v___x_5190_ = 3;
v___x_5191_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5191_, 0, v___x_5189_);
lean_ctor_set_uint8(v___x_5191_, sizeof(void*)*1, v___x_5190_);
lean_inc_ref(v_a_5170_);
v___x_5192_ = lean_apply_2(v_a_5170_, v___x_5191_, lean_box(0));
v___x_5193_ = lean_box(0);
if (v_isShared_5188_ == 0)
{
lean_ctor_set(v___x_5187_, 0, v___x_5193_);
v___x_5195_ = v___x_5187_;
goto v_reusejp_5194_;
}
else
{
lean_object* v_reuseFailAlloc_5196_; 
v_reuseFailAlloc_5196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5196_, 0, v___x_5193_);
v___x_5195_ = v_reuseFailAlloc_5196_;
goto v_reusejp_5194_;
}
v_reusejp_5194_:
{
return v___x_5195_;
}
}
}
}
else
{
lean_object* v___x_5198_; lean_object* v___x_5199_; 
lean_dec_ref(v_a_5175_);
lean_dec_ref(v_scope_5168_);
lean_dec_ref(v_cache_5166_);
v___x_5198_ = lean_box(0);
v___x_5199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5199_, 0, v___x_5198_);
return v___x_5199_;
}
}
v___jp_5200_:
{
if (lean_obj_tag(v___y_5201_) == 0)
{
lean_object* v_a_5202_; 
v_a_5202_ = lean_ctor_get(v___y_5201_, 0);
lean_inc(v_a_5202_);
lean_dec_ref(v___y_5201_);
v_a_5175_ = v_a_5202_;
goto v___jp_5174_;
}
else
{
lean_object* v_a_5203_; lean_object* v___x_5205_; uint8_t v_isShared_5206_; uint8_t v_isSharedCheck_5210_; 
lean_dec_ref(v_scope_5168_);
lean_dec_ref(v_cache_5166_);
v_a_5203_ = lean_ctor_get(v___y_5201_, 0);
v_isSharedCheck_5210_ = !lean_is_exclusive(v___y_5201_);
if (v_isSharedCheck_5210_ == 0)
{
v___x_5205_ = v___y_5201_;
v_isShared_5206_ = v_isSharedCheck_5210_;
goto v_resetjp_5204_;
}
else
{
lean_inc(v_a_5203_);
lean_dec(v___y_5201_);
v___x_5205_ = lean_box(0);
v_isShared_5206_ = v_isSharedCheck_5210_;
goto v_resetjp_5204_;
}
v_resetjp_5204_:
{
lean_object* v___x_5208_; 
if (v_isShared_5206_ == 0)
{
v___x_5208_ = v___x_5205_;
goto v_reusejp_5207_;
}
else
{
lean_object* v_reuseFailAlloc_5209_; 
v_reuseFailAlloc_5209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5209_, 0, v_a_5203_);
v___x_5208_ = v_reuseFailAlloc_5209_;
goto v_reusejp_5207_;
}
v_reusejp_5207_:
{
return v___x_5208_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___boxed(lean_object* v_descrs_5225_, lean_object* v_cache_5226_, lean_object* v_service_5227_, lean_object* v_scope_5228_, lean_object* v_force_5229_, lean_object* v_a_5230_, lean_object* v_a_5231_){
_start:
{
uint8_t v_force_boxed_5232_; lean_object* v_res_5233_; 
v_force_boxed_5232_ = lean_unbox(v_force_5229_);
v_res_5233_ = l_Lake_CacheService_downloadArtifacts(v_descrs_5225_, v_cache_5226_, v_service_5227_, v_scope_5228_, v_force_boxed_5232_, v_a_5230_);
lean_dec_ref(v_a_5230_);
lean_dec_ref(v_descrs_5225_);
return v_res_5233_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(lean_object* v_a_5234_, lean_object* v_descrs_5235_, lean_object* v_cache_5236_, lean_object* v_service_5237_, lean_object* v_scope_5238_, uint8_t v_force_5239_){
_start:
{
lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v_a_5244_; lean_object* v___y_5270_; uint8_t v___x_5280_; 
v___x_5241_ = lean_array_get_size(v_descrs_5235_);
v___x_5242_ = lean_unsigned_to_nat(0u);
v___x_5280_ = lean_nat_dec_eq(v___x_5241_, v___x_5242_);
if (v___x_5280_ == 0)
{
lean_object* v___x_5281_; uint8_t v___x_5282_; 
v___x_5281_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__0));
v___x_5282_ = lean_nat_dec_lt(v___x_5242_, v___x_5241_);
if (v___x_5282_ == 0)
{
lean_dec_ref(v_service_5237_);
v_a_5244_ = v___x_5281_;
goto v___jp_5243_;
}
else
{
uint8_t v___x_5283_; 
v___x_5283_ = lean_nat_dec_le(v___x_5241_, v___x_5241_);
if (v___x_5283_ == 0)
{
if (v___x_5282_ == 0)
{
lean_dec_ref(v_service_5237_);
v_a_5244_ = v___x_5281_;
goto v___jp_5243_;
}
else
{
size_t v___x_5284_; size_t v___x_5285_; lean_object* v___x_5286_; 
v___x_5284_ = ((size_t)0ULL);
v___x_5285_ = lean_usize_of_nat(v___x_5241_);
lean_inc_ref(v_scope_5238_);
lean_inc_ref(v_cache_5236_);
v___x_5286_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(v_cache_5236_, v_service_5237_, v_scope_5238_, v_force_5239_, v_descrs_5235_, v___x_5284_, v___x_5285_, v___x_5281_, v_a_5234_);
v___y_5270_ = v___x_5286_;
goto v___jp_5269_;
}
}
else
{
size_t v___x_5287_; size_t v___x_5288_; lean_object* v___x_5289_; 
v___x_5287_ = ((size_t)0ULL);
v___x_5288_ = lean_usize_of_nat(v___x_5241_);
lean_inc_ref(v_scope_5238_);
lean_inc_ref(v_cache_5236_);
v___x_5289_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(v_cache_5236_, v_service_5237_, v_scope_5238_, v_force_5239_, v_descrs_5235_, v___x_5287_, v___x_5288_, v___x_5281_, v_a_5234_);
v___y_5270_ = v___x_5289_;
goto v___jp_5269_;
}
}
}
else
{
lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; 
lean_dec_ref(v_scope_5238_);
lean_dec_ref(v_service_5237_);
lean_dec_ref(v_cache_5236_);
v___x_5290_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__2));
lean_inc_ref(v_a_5234_);
v___x_5291_ = lean_apply_2(v_a_5234_, v___x_5290_, lean_box(0));
v___x_5292_ = lean_box(0);
v___x_5293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5293_, 0, v___x_5292_);
return v___x_5293_;
}
v___jp_5243_:
{
lean_object* v___x_5245_; uint8_t v___x_5246_; 
v___x_5245_ = lean_array_get_size(v_a_5244_);
v___x_5246_ = lean_nat_dec_eq(v___x_5245_, v___x_5242_);
if (v___x_5246_ == 0)
{
lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; 
v___x_5247_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_5248_ = l_System_FilePath_join(v_cache_5236_, v___x_5247_);
v___x_5249_ = l_IO_FS_createDirAll(v___x_5248_);
if (lean_obj_tag(v___x_5249_) == 0)
{
uint8_t v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; 
lean_dec_ref(v___x_5249_);
v___x_5250_ = 0;
v___x_5251_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_5252_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_5252_, 0, v_scope_5238_);
lean_ctor_set(v___x_5252_, 1, v_a_5244_);
lean_ctor_set(v___x_5252_, 2, v___x_5251_);
lean_ctor_set_uint8(v___x_5252_, sizeof(void*)*3, v___x_5250_);
v___x_5253_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(v_a_5234_, v___x_5252_);
return v___x_5253_;
}
else
{
lean_object* v_a_5254_; lean_object* v___x_5256_; uint8_t v_isShared_5257_; uint8_t v_isSharedCheck_5266_; 
lean_dec_ref(v_a_5244_);
lean_dec_ref(v_scope_5238_);
v_a_5254_ = lean_ctor_get(v___x_5249_, 0);
v_isSharedCheck_5266_ = !lean_is_exclusive(v___x_5249_);
if (v_isSharedCheck_5266_ == 0)
{
v___x_5256_ = v___x_5249_;
v_isShared_5257_ = v_isSharedCheck_5266_;
goto v_resetjp_5255_;
}
else
{
lean_inc(v_a_5254_);
lean_dec(v___x_5249_);
v___x_5256_ = lean_box(0);
v_isShared_5257_ = v_isSharedCheck_5266_;
goto v_resetjp_5255_;
}
v_resetjp_5255_:
{
lean_object* v___x_5258_; uint8_t v___x_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5264_; 
v___x_5258_ = lean_io_error_to_string(v_a_5254_);
v___x_5259_ = 3;
v___x_5260_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5260_, 0, v___x_5258_);
lean_ctor_set_uint8(v___x_5260_, sizeof(void*)*1, v___x_5259_);
lean_inc_ref(v_a_5234_);
v___x_5261_ = lean_apply_2(v_a_5234_, v___x_5260_, lean_box(0));
v___x_5262_ = lean_box(0);
if (v_isShared_5257_ == 0)
{
lean_ctor_set(v___x_5256_, 0, v___x_5262_);
v___x_5264_ = v___x_5256_;
goto v_reusejp_5263_;
}
else
{
lean_object* v_reuseFailAlloc_5265_; 
v_reuseFailAlloc_5265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5265_, 0, v___x_5262_);
v___x_5264_ = v_reuseFailAlloc_5265_;
goto v_reusejp_5263_;
}
v_reusejp_5263_:
{
return v___x_5264_;
}
}
}
}
else
{
lean_object* v___x_5267_; lean_object* v___x_5268_; 
lean_dec_ref(v_a_5244_);
lean_dec_ref(v_scope_5238_);
lean_dec_ref(v_cache_5236_);
v___x_5267_ = lean_box(0);
v___x_5268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5268_, 0, v___x_5267_);
return v___x_5268_;
}
}
v___jp_5269_:
{
if (lean_obj_tag(v___y_5270_) == 0)
{
lean_object* v_a_5271_; 
v_a_5271_ = lean_ctor_get(v___y_5270_, 0);
lean_inc(v_a_5271_);
lean_dec_ref(v___y_5270_);
v_a_5244_ = v_a_5271_;
goto v___jp_5243_;
}
else
{
lean_object* v_a_5272_; lean_object* v___x_5274_; uint8_t v_isShared_5275_; uint8_t v_isSharedCheck_5279_; 
lean_dec_ref(v_scope_5238_);
lean_dec_ref(v_cache_5236_);
v_a_5272_ = lean_ctor_get(v___y_5270_, 0);
v_isSharedCheck_5279_ = !lean_is_exclusive(v___y_5270_);
if (v_isSharedCheck_5279_ == 0)
{
v___x_5274_ = v___y_5270_;
v_isShared_5275_ = v_isSharedCheck_5279_;
goto v_resetjp_5273_;
}
else
{
lean_inc(v_a_5272_);
lean_dec(v___y_5270_);
v___x_5274_ = lean_box(0);
v_isShared_5275_ = v_isSharedCheck_5279_;
goto v_resetjp_5273_;
}
v_resetjp_5273_:
{
lean_object* v___x_5277_; 
if (v_isShared_5275_ == 0)
{
v___x_5277_ = v___x_5274_;
goto v_reusejp_5276_;
}
else
{
lean_object* v_reuseFailAlloc_5278_; 
v_reuseFailAlloc_5278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5278_, 0, v_a_5272_);
v___x_5277_ = v_reuseFailAlloc_5278_;
goto v_reusejp_5276_;
}
v_reusejp_5276_:
{
return v___x_5277_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0___boxed(lean_object* v_a_5294_, lean_object* v_descrs_5295_, lean_object* v_cache_5296_, lean_object* v_service_5297_, lean_object* v_scope_5298_, lean_object* v_force_5299_, lean_object* v_a_5300_){
_start:
{
uint8_t v_force_boxed_5301_; lean_object* v_res_5302_; 
v_force_boxed_5301_ = lean_unbox(v_force_5299_);
v_res_5302_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_5294_, v_descrs_5295_, v_cache_5296_, v_service_5297_, v_scope_5298_, v_force_boxed_5301_);
lean_dec_ref(v_descrs_5295_);
lean_dec_ref(v_a_5294_);
return v_res_5302_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts(lean_object* v_map_5303_, lean_object* v_cache_5304_, lean_object* v_service_5305_, lean_object* v_localScope_5306_, lean_object* v_remoteScope_5307_, uint8_t v_force_5308_, lean_object* v_a_5309_){
_start:
{
lean_object* v_name_x3f_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; 
v_name_x3f_5314_ = lean_ctor_get(v_service_5305_, 0);
lean_inc_ref(v_remoteScope_5307_);
v___x_5315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5315_, 0, v_remoteScope_5307_);
lean_inc(v_name_x3f_5314_);
lean_inc_ref(v_cache_5304_);
v___x_5316_ = l_Lake_Cache_writeMap(v_cache_5304_, v_localScope_5306_, v_map_5303_, v_name_x3f_5314_, v___x_5315_);
if (lean_obj_tag(v___x_5316_) == 0)
{
lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5354_; 
v_isSharedCheck_5354_ = !lean_is_exclusive(v___x_5316_);
if (v_isSharedCheck_5354_ == 0)
{
lean_object* v_unused_5355_; 
v_unused_5355_ = lean_ctor_get(v___x_5316_, 0);
lean_dec(v_unused_5355_);
v___x_5318_ = v___x_5316_;
v_isShared_5319_ = v_isSharedCheck_5354_;
goto v_resetjp_5317_;
}
else
{
lean_dec(v___x_5316_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5354_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; 
v___x_5320_ = lean_unsigned_to_nat(0u);
v___x_5321_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_5322_ = l_Lake_CacheMap_collectOutputDescrs(v_map_5303_, v___x_5321_);
if (lean_obj_tag(v___x_5322_) == 0)
{
lean_object* v_a_5323_; lean_object* v_a_5324_; lean_object* v___x_5325_; uint8_t v___x_5326_; 
lean_del_object(v___x_5318_);
v_a_5323_ = lean_ctor_get(v___x_5322_, 0);
lean_inc(v_a_5323_);
v_a_5324_ = lean_ctor_get(v___x_5322_, 1);
lean_inc(v_a_5324_);
lean_dec_ref(v___x_5322_);
v___x_5325_ = lean_array_get_size(v_a_5324_);
v___x_5326_ = lean_nat_dec_lt(v___x_5320_, v___x_5325_);
if (v___x_5326_ == 0)
{
lean_object* v___x_5327_; 
lean_dec(v_a_5324_);
v___x_5327_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_5309_, v_a_5323_, v_cache_5304_, v_service_5305_, v_remoteScope_5307_, v_force_5308_);
lean_dec(v_a_5323_);
return v___x_5327_;
}
else
{
lean_object* v___x_5328_; uint8_t v___x_5329_; 
v___x_5328_ = lean_box(0);
v___x_5329_ = lean_nat_dec_le(v___x_5325_, v___x_5325_);
if (v___x_5329_ == 0)
{
if (v___x_5326_ == 0)
{
lean_object* v___x_5330_; 
lean_dec(v_a_5324_);
v___x_5330_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_5309_, v_a_5323_, v_cache_5304_, v_service_5305_, v_remoteScope_5307_, v_force_5308_);
lean_dec(v_a_5323_);
return v___x_5330_;
}
else
{
size_t v___x_5331_; size_t v___x_5332_; lean_object* v___x_5333_; 
v___x_5331_ = ((size_t)0ULL);
v___x_5332_ = lean_usize_of_nat(v___x_5325_);
v___x_5333_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5324_, v___x_5331_, v___x_5332_, v___x_5328_, v_a_5309_);
lean_dec(v_a_5324_);
if (lean_obj_tag(v___x_5333_) == 0)
{
lean_object* v___x_5334_; 
lean_dec_ref(v___x_5333_);
v___x_5334_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_5309_, v_a_5323_, v_cache_5304_, v_service_5305_, v_remoteScope_5307_, v_force_5308_);
lean_dec(v_a_5323_);
return v___x_5334_;
}
else
{
lean_dec(v_a_5323_);
lean_dec_ref(v_remoteScope_5307_);
lean_dec_ref(v_service_5305_);
lean_dec_ref(v_cache_5304_);
return v___x_5333_;
}
}
}
else
{
size_t v___x_5335_; size_t v___x_5336_; lean_object* v___x_5337_; 
v___x_5335_ = ((size_t)0ULL);
v___x_5336_ = lean_usize_of_nat(v___x_5325_);
v___x_5337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5324_, v___x_5335_, v___x_5336_, v___x_5328_, v_a_5309_);
lean_dec(v_a_5324_);
if (lean_obj_tag(v___x_5337_) == 0)
{
lean_object* v___x_5338_; 
lean_dec_ref(v___x_5337_);
v___x_5338_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_5309_, v_a_5323_, v_cache_5304_, v_service_5305_, v_remoteScope_5307_, v_force_5308_);
lean_dec(v_a_5323_);
return v___x_5338_;
}
else
{
lean_dec(v_a_5323_);
lean_dec_ref(v_remoteScope_5307_);
lean_dec_ref(v_service_5305_);
lean_dec_ref(v_cache_5304_);
return v___x_5337_;
}
}
}
}
else
{
lean_object* v_a_5339_; lean_object* v___x_5340_; uint8_t v___x_5341_; 
lean_dec_ref(v_remoteScope_5307_);
lean_dec_ref(v_service_5305_);
lean_dec_ref(v_cache_5304_);
v_a_5339_ = lean_ctor_get(v___x_5322_, 1);
lean_inc(v_a_5339_);
lean_dec_ref(v___x_5322_);
v___x_5340_ = lean_array_get_size(v_a_5339_);
v___x_5341_ = lean_nat_dec_lt(v___x_5320_, v___x_5340_);
if (v___x_5341_ == 0)
{
lean_object* v___x_5342_; lean_object* v___x_5344_; 
lean_dec(v_a_5339_);
v___x_5342_ = lean_box(0);
if (v_isShared_5319_ == 0)
{
lean_ctor_set_tag(v___x_5318_, 1);
lean_ctor_set(v___x_5318_, 0, v___x_5342_);
v___x_5344_ = v___x_5318_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5345_; 
v_reuseFailAlloc_5345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5345_, 0, v___x_5342_);
v___x_5344_ = v_reuseFailAlloc_5345_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
return v___x_5344_;
}
}
else
{
lean_object* v___x_5346_; uint8_t v___x_5347_; 
lean_del_object(v___x_5318_);
v___x_5346_ = lean_box(0);
v___x_5347_ = lean_nat_dec_le(v___x_5340_, v___x_5340_);
if (v___x_5347_ == 0)
{
if (v___x_5341_ == 0)
{
lean_dec(v_a_5339_);
goto v___jp_5311_;
}
else
{
size_t v___x_5348_; size_t v___x_5349_; lean_object* v___x_5350_; 
v___x_5348_ = ((size_t)0ULL);
v___x_5349_ = lean_usize_of_nat(v___x_5340_);
v___x_5350_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5339_, v___x_5348_, v___x_5349_, v___x_5346_, v_a_5309_);
lean_dec(v_a_5339_);
if (lean_obj_tag(v___x_5350_) == 0)
{
lean_dec_ref(v___x_5350_);
goto v___jp_5311_;
}
else
{
return v___x_5350_;
}
}
}
else
{
size_t v___x_5351_; size_t v___x_5352_; lean_object* v___x_5353_; 
v___x_5351_ = ((size_t)0ULL);
v___x_5352_ = lean_usize_of_nat(v___x_5340_);
v___x_5353_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5339_, v___x_5351_, v___x_5352_, v___x_5346_, v_a_5309_);
lean_dec(v_a_5339_);
if (lean_obj_tag(v___x_5353_) == 0)
{
lean_dec_ref(v___x_5353_);
goto v___jp_5311_;
}
else
{
return v___x_5353_;
}
}
}
}
}
}
else
{
lean_object* v_a_5356_; lean_object* v___x_5358_; uint8_t v_isShared_5359_; uint8_t v_isSharedCheck_5368_; 
lean_dec_ref(v_remoteScope_5307_);
lean_dec_ref(v_service_5305_);
lean_dec_ref(v_cache_5304_);
lean_dec_ref(v_map_5303_);
v_a_5356_ = lean_ctor_get(v___x_5316_, 0);
v_isSharedCheck_5368_ = !lean_is_exclusive(v___x_5316_);
if (v_isSharedCheck_5368_ == 0)
{
v___x_5358_ = v___x_5316_;
v_isShared_5359_ = v_isSharedCheck_5368_;
goto v_resetjp_5357_;
}
else
{
lean_inc(v_a_5356_);
lean_dec(v___x_5316_);
v___x_5358_ = lean_box(0);
v_isShared_5359_ = v_isSharedCheck_5368_;
goto v_resetjp_5357_;
}
v_resetjp_5357_:
{
lean_object* v___x_5360_; uint8_t v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; lean_object* v___x_5366_; 
v___x_5360_ = lean_io_error_to_string(v_a_5356_);
v___x_5361_ = 3;
v___x_5362_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5362_, 0, v___x_5360_);
lean_ctor_set_uint8(v___x_5362_, sizeof(void*)*1, v___x_5361_);
lean_inc_ref(v_a_5309_);
v___x_5363_ = lean_apply_2(v_a_5309_, v___x_5362_, lean_box(0));
v___x_5364_ = lean_box(0);
if (v_isShared_5359_ == 0)
{
lean_ctor_set(v___x_5358_, 0, v___x_5364_);
v___x_5366_ = v___x_5358_;
goto v_reusejp_5365_;
}
else
{
lean_object* v_reuseFailAlloc_5367_; 
v_reuseFailAlloc_5367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5367_, 0, v___x_5364_);
v___x_5366_ = v_reuseFailAlloc_5367_;
goto v_reusejp_5365_;
}
v_reusejp_5365_:
{
return v___x_5366_;
}
}
}
v___jp_5311_:
{
lean_object* v___x_5312_; lean_object* v___x_5313_; 
v___x_5312_ = lean_box(0);
v___x_5313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5313_, 0, v___x_5312_);
return v___x_5313_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts___boxed(lean_object* v_map_5369_, lean_object* v_cache_5370_, lean_object* v_service_5371_, lean_object* v_localScope_5372_, lean_object* v_remoteScope_5373_, lean_object* v_force_5374_, lean_object* v_a_5375_, lean_object* v_a_5376_){
_start:
{
uint8_t v_force_boxed_5377_; lean_object* v_res_5378_; 
v_force_boxed_5377_ = lean_unbox(v_force_5374_);
v_res_5378_ = l_Lake_CacheService_downloadOutputArtifacts(v_map_5369_, v_cache_5370_, v_service_5371_, v_localScope_5372_, v_remoteScope_5373_, v_force_boxed_5377_, v_a_5375_);
lean_dec_ref(v_a_5375_);
return v_res_5378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(lean_object* v_descrs_5379_, lean_object* v_service_5380_, lean_object* v_scope_5381_, lean_object* v_paths_5382_, lean_object* v_n_5383_, lean_object* v_i_5384_, lean_object* v_a_5385_){
_start:
{
lean_object* v_zero_5387_; uint8_t v_isZero_5388_; 
v_zero_5387_ = lean_unsigned_to_nat(0u);
v_isZero_5388_ = lean_nat_dec_eq(v_i_5384_, v_zero_5387_);
if (v_isZero_5388_ == 1)
{
lean_object* v___x_5389_; 
lean_dec(v_i_5384_);
lean_dec_ref(v_scope_5381_);
lean_dec_ref(v_service_5380_);
v___x_5389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5389_, 0, v_a_5385_);
return v___x_5389_;
}
else
{
lean_object* v_one_5390_; lean_object* v_n_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; uint64_t v_hash_5395_; lean_object* v_url_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; 
v_one_5390_ = lean_unsigned_to_nat(1u);
v_n_5391_ = lean_nat_sub(v_i_5384_, v_one_5390_);
lean_dec(v_i_5384_);
v___x_5392_ = lean_nat_sub(v_n_5383_, v_n_5391_);
v___x_5393_ = lean_nat_sub(v___x_5392_, v_one_5390_);
lean_dec(v___x_5392_);
v___x_5394_ = lean_array_fget_borrowed(v_descrs_5379_, v___x_5393_);
v_hash_5395_ = lean_ctor_get_uint64(v___x_5394_, sizeof(void*)*1);
lean_inc_ref(v_scope_5381_);
lean_inc_ref(v_service_5380_);
v_url_5396_ = l_Lake_CacheService_artifactUrl(v_hash_5395_, v_service_5380_, v_scope_5381_);
v___x_5397_ = lean_array_fget_borrowed(v_paths_5382_, v___x_5393_);
lean_dec(v___x_5393_);
lean_inc(v___x_5394_);
lean_inc(v___x_5397_);
v___x_5398_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5398_, 0, v_url_5396_);
lean_ctor_set(v___x_5398_, 1, v___x_5397_);
lean_ctor_set(v___x_5398_, 2, v___x_5394_);
v___x_5399_ = lean_array_push(v_a_5385_, v___x_5398_);
v_i_5384_ = v_n_5391_;
v_a_5385_ = v___x_5399_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg___boxed(lean_object* v_descrs_5401_, lean_object* v_service_5402_, lean_object* v_scope_5403_, lean_object* v_paths_5404_, lean_object* v_n_5405_, lean_object* v_i_5406_, lean_object* v_a_5407_, lean_object* v___y_5408_){
_start:
{
lean_object* v_res_5409_; 
v_res_5409_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_descrs_5401_, v_service_5402_, v_scope_5403_, v_paths_5404_, v_n_5405_, v_i_5406_, v_a_5407_);
lean_dec(v_n_5405_);
lean_dec_ref(v_paths_5404_);
lean_dec_ref(v_descrs_5401_);
return v_res_5409_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts(lean_object* v_n_5414_, lean_object* v_descrs_5415_, lean_object* v_paths_5416_, lean_object* v_service_5417_, lean_object* v_scope_5418_, lean_object* v_a_5419_){
_start:
{
lean_object* v___x_5421_; uint8_t v___x_5422_; 
v___x_5421_ = lean_unsigned_to_nat(0u);
v___x_5422_ = lean_nat_dec_eq(v_n_5414_, v___x_5421_);
if (v___x_5422_ == 0)
{
lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v_a_5425_; lean_object* v_key_5426_; uint8_t v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; 
v___x_5423_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__0));
lean_inc(v_n_5414_);
lean_inc_ref(v_scope_5418_);
lean_inc_ref(v_service_5417_);
v___x_5424_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_descrs_5415_, v_service_5417_, v_scope_5418_, v_paths_5416_, v_n_5414_, v_n_5414_, v___x_5423_);
lean_dec(v_n_5414_);
v_a_5425_ = lean_ctor_get(v___x_5424_, 0);
lean_inc(v_a_5425_);
lean_dec_ref(v___x_5424_);
v_key_5426_ = lean_ctor_get(v_service_5417_, 1);
lean_inc_ref(v_key_5426_);
lean_dec_ref(v_service_5417_);
v___x_5427_ = 1;
v___x_5428_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_5428_, 0, v_scope_5418_);
lean_ctor_set(v___x_5428_, 1, v_a_5425_);
lean_ctor_set(v___x_5428_, 2, v_key_5426_);
lean_ctor_set_uint8(v___x_5428_, sizeof(void*)*3, v___x_5427_);
v___x_5429_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(v_a_5419_, v___x_5428_);
return v___x_5429_;
}
else
{
lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; 
lean_dec_ref(v_scope_5418_);
lean_dec_ref(v_service_5417_);
lean_dec(v_n_5414_);
v___x_5430_ = ((lean_object*)(l_Lake_CacheService_uploadArtifacts___closed__1));
lean_inc_ref(v_a_5419_);
v___x_5431_ = lean_apply_2(v_a_5419_, v___x_5430_, lean_box(0));
v___x_5432_ = lean_box(0);
v___x_5433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5433_, 0, v___x_5432_);
return v___x_5433_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___boxed(lean_object* v_n_5434_, lean_object* v_descrs_5435_, lean_object* v_paths_5436_, lean_object* v_service_5437_, lean_object* v_scope_5438_, lean_object* v_a_5439_, lean_object* v_a_5440_){
_start:
{
lean_object* v_res_5441_; 
v_res_5441_ = l_Lake_CacheService_uploadArtifacts(v_n_5434_, v_descrs_5435_, v_paths_5436_, v_service_5437_, v_scope_5438_, v_a_5439_);
lean_dec_ref(v_a_5439_);
lean_dec_ref(v_paths_5436_);
lean_dec_ref(v_descrs_5435_);
return v_res_5441_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0(lean_object* v_descrs_5442_, lean_object* v_service_5443_, lean_object* v_scope_5444_, lean_object* v_paths_5445_, lean_object* v_n_5446_, lean_object* v_i_5447_, lean_object* v_a_5448_, lean_object* v_a_5449_, lean_object* v___y_5450_){
_start:
{
lean_object* v___x_5452_; 
v___x_5452_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_descrs_5442_, v_service_5443_, v_scope_5444_, v_paths_5445_, v_n_5446_, v_i_5447_, v_a_5449_);
return v___x_5452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0___boxed(lean_object* v_descrs_5453_, lean_object* v_service_5454_, lean_object* v_scope_5455_, lean_object* v_paths_5456_, lean_object* v_n_5457_, lean_object* v_i_5458_, lean_object* v_a_5459_, lean_object* v_a_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_){
_start:
{
lean_object* v_res_5463_; 
v_res_5463_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__0(v_descrs_5453_, v_service_5454_, v_scope_5455_, v_paths_5456_, v_n_5457_, v_i_5458_, v_a_5459_, v_a_5460_, v___y_5461_);
lean_dec_ref(v___y_5461_);
lean_dec(v_n_5457_);
lean_dec_ref(v_paths_5456_);
lean_dec_ref(v_descrs_5453_);
return v_res_5463_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(lean_object* v_rev_5468_, lean_object* v_service_5469_, lean_object* v_scope_5470_, lean_object* v_platform_5471_, lean_object* v_toolchain_5472_){
_start:
{
lean_object* v_url_5474_; lean_object* v_url_5481_; 
if (lean_obj_tag(v_scope_5470_) == 0)
{
lean_object* v_s_5490_; lean_object* v_revisionEndpoint_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; 
lean_dec_ref(v_platform_5471_);
v_s_5490_ = lean_ctor_get(v_scope_5470_, 0);
lean_inc_ref(v_s_5490_);
lean_dec_ref(v_scope_5470_);
v_revisionEndpoint_5491_ = lean_ctor_get(v_service_5469_, 3);
lean_inc_ref(v_revisionEndpoint_5491_);
lean_dec_ref(v_service_5469_);
v___x_5492_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_revisionEndpoint_5491_, v_s_5490_);
v___x_5493_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_5494_ = lean_string_append(v___x_5493_, v_rev_5468_);
v___x_5495_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_5496_ = lean_string_append(v___x_5494_, v___x_5495_);
v___x_5497_ = lean_string_append(v___x_5492_, v___x_5496_);
lean_dec_ref(v___x_5496_);
return v___x_5497_;
}
else
{
lean_object* v_s_5498_; lean_object* v_revisionEndpoint_5499_; lean_object* v_url_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; uint8_t v___x_5503_; 
v_s_5498_ = lean_ctor_get(v_scope_5470_, 0);
lean_inc_ref(v_s_5498_);
lean_dec_ref(v_scope_5470_);
v_revisionEndpoint_5499_ = lean_ctor_get(v_service_5469_, 3);
lean_inc_ref(v_revisionEndpoint_5499_);
lean_dec_ref(v_service_5469_);
v_url_5500_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_revisionEndpoint_5499_, v_s_5498_);
v___x_5501_ = lean_string_utf8_byte_size(v_platform_5471_);
v___x_5502_ = lean_unsigned_to_nat(0u);
v___x_5503_ = lean_nat_dec_eq(v___x_5501_, v___x_5502_);
if (v___x_5503_ == 0)
{
lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v_url_5506_; 
v___x_5504_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__1));
v___x_5505_ = lean_string_append(v_url_5500_, v___x_5504_);
v_url_5506_ = l_Lake_uriEncode(v_platform_5471_, v___x_5505_);
v_url_5481_ = v_url_5506_;
goto v___jp_5480_;
}
else
{
lean_dec_ref(v_platform_5471_);
v_url_5481_ = v_url_5500_;
goto v___jp_5480_;
}
}
v___jp_5473_:
{
lean_object* v___x_5475_; lean_object* v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; 
v___x_5475_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_5476_ = lean_string_append(v_url_5474_, v___x_5475_);
v___x_5477_ = lean_string_append(v___x_5476_, v_rev_5468_);
v___x_5478_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_5479_ = lean_string_append(v___x_5477_, v___x_5478_);
return v___x_5479_;
}
v___jp_5480_:
{
lean_object* v___x_5482_; lean_object* v___x_5483_; uint8_t v___x_5484_; 
v___x_5482_ = lean_string_utf8_byte_size(v_toolchain_5472_);
v___x_5483_ = lean_unsigned_to_nat(0u);
v___x_5484_ = lean_nat_dec_eq(v___x_5482_, v___x_5483_);
if (v___x_5484_ == 0)
{
lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v_url_5489_; 
v___x_5485_ = ((lean_object*)(l_Lake_CachePlatform_none___closed__0));
v___x_5486_ = l___private_Lake_Config_InstallPath_0__Lake_toolchain2Dir_go(v_toolchain_5472_, v___x_5485_, v___x_5483_);
v___x_5487_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__0));
v___x_5488_ = lean_string_append(v_url_5481_, v___x_5487_);
v_url_5489_ = l_Lake_uriEncode(v___x_5486_, v___x_5488_);
v_url_5474_ = v_url_5489_;
goto v___jp_5473_;
}
else
{
v_url_5474_ = v_url_5481_;
goto v___jp_5473_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___boxed(lean_object* v_rev_5507_, lean_object* v_service_5508_, lean_object* v_scope_5509_, lean_object* v_platform_5510_, lean_object* v_toolchain_5511_){
_start:
{
lean_object* v_res_5512_; 
v_res_5512_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_5507_, v_service_5508_, v_scope_5509_, v_platform_5510_, v_toolchain_5511_);
lean_dec_ref(v_toolchain_5511_);
lean_dec_ref(v_rev_5507_);
return v_res_5512_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl(lean_object* v_rev_5516_, lean_object* v_service_5517_, lean_object* v_scope_5518_, lean_object* v_platform_5519_, lean_object* v_toolchain_5520_){
_start:
{
lean_object* v_url_5522_; lean_object* v___y_5530_; uint8_t v_isReservoir_5540_; 
v_isReservoir_5540_ = lean_ctor_get_uint8(v_service_5517_, sizeof(void*)*5);
if (v_isReservoir_5540_ == 0)
{
lean_object* v___x_5541_; 
v___x_5541_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_5516_, v_service_5517_, v_scope_5518_, v_platform_5519_, v_toolchain_5520_);
lean_dec_ref(v_toolchain_5520_);
return v___x_5541_;
}
else
{
if (lean_obj_tag(v_scope_5518_) == 0)
{
lean_object* v_apiEndpoint_5542_; lean_object* v_s_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; 
v_apiEndpoint_5542_ = lean_ctor_get(v_service_5517_, 4);
lean_inc_ref(v_apiEndpoint_5542_);
lean_dec_ref(v_service_5517_);
v_s_5543_ = lean_ctor_get(v_scope_5518_, 0);
lean_inc_ref(v_s_5543_);
lean_dec_ref(v_scope_5518_);
v___x_5544_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_5545_ = lean_string_append(v_apiEndpoint_5542_, v___x_5544_);
v___x_5546_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_5545_, v_s_5543_);
v___y_5530_ = v___x_5546_;
goto v___jp_5529_;
}
else
{
lean_object* v_apiEndpoint_5547_; lean_object* v_s_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; 
v_apiEndpoint_5547_ = lean_ctor_get(v_service_5517_, 4);
lean_inc_ref(v_apiEndpoint_5547_);
lean_dec_ref(v_service_5517_);
v_s_5548_ = lean_ctor_get(v_scope_5518_, 0);
lean_inc_ref(v_s_5548_);
lean_dec_ref(v_scope_5518_);
v___x_5549_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_5550_ = lean_string_append(v_apiEndpoint_5547_, v___x_5549_);
v___x_5551_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_5550_, v_s_5548_);
v___y_5530_ = v___x_5551_;
goto v___jp_5529_;
}
}
v___jp_5521_:
{
lean_object* v___x_5523_; lean_object* v___x_5524_; uint8_t v___x_5525_; 
v___x_5523_ = lean_string_utf8_byte_size(v_toolchain_5520_);
v___x_5524_ = lean_unsigned_to_nat(0u);
v___x_5525_ = lean_nat_dec_eq(v___x_5523_, v___x_5524_);
if (v___x_5525_ == 0)
{
lean_object* v___x_5526_; lean_object* v___x_5527_; lean_object* v_url_5528_; 
v___x_5526_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__0));
v___x_5527_ = lean_string_append(v_url_5522_, v___x_5526_);
v_url_5528_ = l_Lake_uriEncode(v_toolchain_5520_, v___x_5527_);
return v_url_5528_;
}
else
{
lean_dec_ref(v_toolchain_5520_);
return v_url_5522_;
}
}
v___jp_5529_:
{
lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v_url_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; uint8_t v___x_5536_; 
v___x_5531_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__1));
v___x_5532_ = lean_string_append(v___y_5530_, v___x_5531_);
v_url_5533_ = lean_string_append(v___x_5532_, v_rev_5516_);
v___x_5534_ = lean_string_utf8_byte_size(v_platform_5519_);
v___x_5535_ = lean_unsigned_to_nat(0u);
v___x_5536_ = lean_nat_dec_eq(v___x_5534_, v___x_5535_);
if (v___x_5536_ == 0)
{
lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v_url_5539_; 
v___x_5537_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__2));
v___x_5538_ = lean_string_append(v_url_5533_, v___x_5537_);
v_url_5539_ = l_Lake_uriEncode(v_platform_5519_, v___x_5538_);
v_url_5522_ = v_url_5539_;
goto v___jp_5521_;
}
else
{
lean_dec_ref(v_platform_5519_);
v_url_5522_ = v_url_5533_;
goto v___jp_5521_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl___boxed(lean_object* v_rev_5552_, lean_object* v_service_5553_, lean_object* v_scope_5554_, lean_object* v_platform_5555_, lean_object* v_toolchain_5556_){
_start:
{
lean_object* v_res_5557_; 
v_res_5557_ = l_Lake_CacheService_revisionUrl(v_rev_5552_, v_service_5553_, v_scope_5554_, v_platform_5555_, v_toolchain_5556_);
lean_dec_ref(v_rev_5552_);
return v_res_5557_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f(lean_object* v_rev_5562_, lean_object* v_cache_5563_, lean_object* v_service_5564_, lean_object* v_localScope_5565_, lean_object* v_remoteScope_5566_, lean_object* v_platform_5567_, lean_object* v_toolchain_5568_, uint8_t v_force_5569_, lean_object* v_a_5570_){
_start:
{
lean_object* v_a_5576_; lean_object* v_a_5583_; lean_object* v___y_5587_; lean_object* v___y_5588_; lean_object* v_a_5596_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; lean_object* v___x_5603_; lean_object* v___x_5604_; lean_object* v_path_5605_; lean_object* v_a_5607_; lean_object* v___y_5709_; lean_object* v___y_5710_; uint8_t v___x_5759_; lean_object* v___x_5823_; uint8_t v___x_5824_; 
v___x_5600_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_5601_ = l_System_FilePath_join(v_cache_5563_, v___x_5600_);
lean_inc_ref(v_localScope_5565_);
v___x_5602_ = l_System_FilePath_join(v___x_5601_, v_localScope_5565_);
v___x_5603_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
lean_inc_ref(v_rev_5562_);
v___x_5604_ = lean_string_append(v_rev_5562_, v___x_5603_);
v_path_5605_ = l_System_FilePath_join(v___x_5602_, v___x_5604_);
v___x_5759_ = l_System_FilePath_pathExists(v_path_5605_);
v___x_5823_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_5824_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__4, &l_Lake_CacheService_downloadArtifact___closed__4_once, _init_l_Lake_CacheService_downloadArtifact___closed__4);
if (v___x_5824_ == 0)
{
goto v___jp_5760_;
}
else
{
lean_object* v___x_5825_; uint8_t v___x_5826_; 
v___x_5825_ = lean_box(0);
v___x_5826_ = lean_uint8_once(&l_Lake_CacheService_downloadArtifact___closed__5, &l_Lake_CacheService_downloadArtifact___closed__5_once, _init_l_Lake_CacheService_downloadArtifact___closed__5);
if (v___x_5826_ == 0)
{
if (v___x_5824_ == 0)
{
goto v___jp_5760_;
}
else
{
size_t v___x_5827_; size_t v___x_5828_; lean_object* v___x_5829_; 
v___x_5827_ = ((size_t)0ULL);
v___x_5828_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
v___x_5829_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_5823_, v___x_5827_, v___x_5828_, v___x_5825_, v_a_5570_);
if (lean_obj_tag(v___x_5829_) == 0)
{
lean_dec_ref(v___x_5829_);
goto v___jp_5760_;
}
else
{
lean_object* v_a_5830_; lean_object* v___x_5832_; uint8_t v_isShared_5833_; uint8_t v_isSharedCheck_5837_; 
lean_dec_ref(v_path_5605_);
lean_dec_ref(v_toolchain_5568_);
lean_dec_ref(v_platform_5567_);
lean_dec_ref(v_remoteScope_5566_);
lean_dec_ref(v_localScope_5565_);
lean_dec_ref(v_service_5564_);
lean_dec_ref(v_rev_5562_);
v_a_5830_ = lean_ctor_get(v___x_5829_, 0);
v_isSharedCheck_5837_ = !lean_is_exclusive(v___x_5829_);
if (v_isSharedCheck_5837_ == 0)
{
v___x_5832_ = v___x_5829_;
v_isShared_5833_ = v_isSharedCheck_5837_;
goto v_resetjp_5831_;
}
else
{
lean_inc(v_a_5830_);
lean_dec(v___x_5829_);
v___x_5832_ = lean_box(0);
v_isShared_5833_ = v_isSharedCheck_5837_;
goto v_resetjp_5831_;
}
v_resetjp_5831_:
{
lean_object* v___x_5835_; 
if (v_isShared_5833_ == 0)
{
v___x_5835_ = v___x_5832_;
goto v_reusejp_5834_;
}
else
{
lean_object* v_reuseFailAlloc_5836_; 
v_reuseFailAlloc_5836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5836_, 0, v_a_5830_);
v___x_5835_ = v_reuseFailAlloc_5836_;
goto v_reusejp_5834_;
}
v_reusejp_5834_:
{
return v___x_5835_;
}
}
}
}
}
else
{
size_t v___x_5838_; size_t v___x_5839_; lean_object* v___x_5840_; 
v___x_5838_ = ((size_t)0ULL);
v___x_5839_ = lean_usize_once(&l_Lake_CacheService_downloadArtifact___closed__6, &l_Lake_CacheService_downloadArtifact___closed__6_once, _init_l_Lake_CacheService_downloadArtifact___closed__6);
v___x_5840_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_5823_, v___x_5838_, v___x_5839_, v___x_5825_, v_a_5570_);
if (lean_obj_tag(v___x_5840_) == 0)
{
lean_dec_ref(v___x_5840_);
goto v___jp_5760_;
}
else
{
lean_object* v_a_5841_; lean_object* v___x_5843_; uint8_t v_isShared_5844_; uint8_t v_isSharedCheck_5848_; 
lean_dec_ref(v_path_5605_);
lean_dec_ref(v_toolchain_5568_);
lean_dec_ref(v_platform_5567_);
lean_dec_ref(v_remoteScope_5566_);
lean_dec_ref(v_localScope_5565_);
lean_dec_ref(v_service_5564_);
lean_dec_ref(v_rev_5562_);
v_a_5841_ = lean_ctor_get(v___x_5840_, 0);
v_isSharedCheck_5848_ = !lean_is_exclusive(v___x_5840_);
if (v_isSharedCheck_5848_ == 0)
{
v___x_5843_ = v___x_5840_;
v_isShared_5844_ = v_isSharedCheck_5848_;
goto v_resetjp_5842_;
}
else
{
lean_inc(v_a_5841_);
lean_dec(v___x_5840_);
v___x_5843_ = lean_box(0);
v_isShared_5844_ = v_isSharedCheck_5848_;
goto v_resetjp_5842_;
}
v_resetjp_5842_:
{
lean_object* v___x_5846_; 
if (v_isShared_5844_ == 0)
{
v___x_5846_ = v___x_5843_;
goto v_reusejp_5845_;
}
else
{
lean_object* v_reuseFailAlloc_5847_; 
v_reuseFailAlloc_5847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5847_, 0, v_a_5841_);
v___x_5846_ = v_reuseFailAlloc_5847_;
goto v_reusejp_5845_;
}
v_reusejp_5845_:
{
return v___x_5846_;
}
}
}
}
}
v___jp_5572_:
{
lean_object* v___x_5573_; lean_object* v___x_5574_; 
v___x_5573_ = lean_box(0);
v___x_5574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5574_, 0, v___x_5573_);
return v___x_5574_;
}
v___jp_5575_:
{
lean_object* v___x_5577_; lean_object* v___x_5578_; 
v___x_5577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5577_, 0, v_a_5576_);
v___x_5578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5578_, 0, v___x_5577_);
return v___x_5578_;
}
v___jp_5579_:
{
lean_object* v___x_5580_; lean_object* v___x_5581_; 
v___x_5580_ = lean_box(0);
v___x_5581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5581_, 0, v___x_5580_);
return v___x_5581_;
}
v___jp_5582_:
{
lean_object* v___x_5584_; lean_object* v___x_5585_; 
v___x_5584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5584_, 0, v_a_5583_);
v___x_5585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5585_, 0, v___x_5584_);
return v___x_5585_;
}
v___jp_5586_:
{
lean_object* v___x_5589_; lean_object* v___x_5590_; uint8_t v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; 
v___x_5589_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__0));
v___x_5590_ = lean_string_append(v___y_5588_, v___x_5589_);
v___x_5591_ = 3;
v___x_5592_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5592_, 0, v___x_5590_);
lean_ctor_set_uint8(v___x_5592_, sizeof(void*)*1, v___x_5591_);
lean_inc_ref(v_a_5570_);
v___x_5593_ = lean_apply_2(v_a_5570_, v___x_5592_, lean_box(0));
v___x_5594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5594_, 0, v___y_5587_);
return v___x_5594_;
}
v___jp_5595_:
{
lean_object* v_s_5597_; 
v_s_5597_ = lean_ctor_get(v_remoteScope_5566_, 0);
lean_inc_ref(v_s_5597_);
lean_dec_ref(v_remoteScope_5566_);
v___y_5587_ = v_a_5596_;
v___y_5588_ = v_s_5597_;
goto v___jp_5586_;
}
v___jp_5598_:
{
lean_object* v___x_5599_; 
v___x_5599_ = lean_box(0);
v_a_5596_ = v___x_5599_;
goto v___jp_5595_;
}
v___jp_5606_:
{
if (lean_obj_tag(v_a_5607_) == 1)
{
lean_object* v_val_5608_; lean_object* v___x_5609_; 
v_val_5608_ = lean_ctor_get(v_a_5607_, 0);
lean_inc(v_val_5608_);
lean_dec_ref(v_a_5607_);
lean_inc_ref(v_path_5605_);
v___x_5609_ = l_Lake_createParentDirs(v_path_5605_);
if (lean_obj_tag(v___x_5609_) == 0)
{
lean_object* v___x_5610_; 
lean_dec_ref(v___x_5609_);
v___x_5610_ = l_IO_FS_writeFile(v_path_5605_, v_val_5608_);
lean_dec(v_val_5608_);
if (lean_obj_tag(v___x_5610_) == 0)
{
lean_object* v___x_5612_; uint8_t v_isShared_5613_; uint8_t v_isSharedCheck_5678_; 
v_isSharedCheck_5678_ = !lean_is_exclusive(v___x_5610_);
if (v_isSharedCheck_5678_ == 0)
{
lean_object* v_unused_5679_; 
v_unused_5679_ = lean_ctor_get(v___x_5610_, 0);
lean_dec(v_unused_5679_);
v___x_5612_ = v___x_5610_;
v_isShared_5613_ = v_isSharedCheck_5678_;
goto v_resetjp_5611_;
}
else
{
lean_dec(v___x_5610_);
v___x_5612_ = lean_box(0);
v_isShared_5613_ = v_isSharedCheck_5678_;
goto v_resetjp_5611_;
}
v_resetjp_5611_:
{
lean_object* v___x_5614_; lean_object* v___x_5615_; uint8_t v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; 
v___x_5614_ = lean_string_utf8_byte_size(v_platform_5567_);
lean_dec_ref(v_platform_5567_);
v___x_5615_ = lean_unsigned_to_nat(0u);
v___x_5616_ = lean_nat_dec_eq(v___x_5614_, v___x_5615_);
v___x_5617_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_5618_ = l_Lake_CacheMap_load(v_path_5605_, v___x_5616_, v___x_5617_);
if (lean_obj_tag(v___x_5618_) == 0)
{
lean_object* v_a_5619_; lean_object* v_a_5620_; lean_object* v___x_5621_; uint8_t v___x_5622_; 
lean_del_object(v___x_5612_);
v_a_5619_ = lean_ctor_get(v___x_5618_, 0);
lean_inc(v_a_5619_);
v_a_5620_ = lean_ctor_get(v___x_5618_, 1);
lean_inc(v_a_5620_);
lean_dec_ref(v___x_5618_);
v___x_5621_ = lean_array_get_size(v_a_5620_);
v___x_5622_ = lean_nat_dec_lt(v___x_5615_, v___x_5621_);
if (v___x_5622_ == 0)
{
lean_dec(v_a_5620_);
v_a_5583_ = v_a_5619_;
goto v___jp_5582_;
}
else
{
lean_object* v___x_5623_; uint8_t v___x_5624_; 
v___x_5623_ = lean_box(0);
v___x_5624_ = lean_nat_dec_le(v___x_5621_, v___x_5621_);
if (v___x_5624_ == 0)
{
if (v___x_5622_ == 0)
{
lean_dec(v_a_5620_);
v_a_5583_ = v_a_5619_;
goto v___jp_5582_;
}
else
{
size_t v___x_5625_; size_t v___x_5626_; lean_object* v___x_5627_; 
v___x_5625_ = ((size_t)0ULL);
v___x_5626_ = lean_usize_of_nat(v___x_5621_);
v___x_5627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5620_, v___x_5625_, v___x_5626_, v___x_5623_, v_a_5570_);
lean_dec(v_a_5620_);
if (lean_obj_tag(v___x_5627_) == 0)
{
lean_dec_ref(v___x_5627_);
v_a_5583_ = v_a_5619_;
goto v___jp_5582_;
}
else
{
lean_object* v_a_5628_; lean_object* v___x_5630_; uint8_t v_isShared_5631_; uint8_t v_isSharedCheck_5635_; 
lean_dec(v_a_5619_);
v_a_5628_ = lean_ctor_get(v___x_5627_, 0);
v_isSharedCheck_5635_ = !lean_is_exclusive(v___x_5627_);
if (v_isSharedCheck_5635_ == 0)
{
v___x_5630_ = v___x_5627_;
v_isShared_5631_ = v_isSharedCheck_5635_;
goto v_resetjp_5629_;
}
else
{
lean_inc(v_a_5628_);
lean_dec(v___x_5627_);
v___x_5630_ = lean_box(0);
v_isShared_5631_ = v_isSharedCheck_5635_;
goto v_resetjp_5629_;
}
v_resetjp_5629_:
{
lean_object* v___x_5633_; 
if (v_isShared_5631_ == 0)
{
v___x_5633_ = v___x_5630_;
goto v_reusejp_5632_;
}
else
{
lean_object* v_reuseFailAlloc_5634_; 
v_reuseFailAlloc_5634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5634_, 0, v_a_5628_);
v___x_5633_ = v_reuseFailAlloc_5634_;
goto v_reusejp_5632_;
}
v_reusejp_5632_:
{
return v___x_5633_;
}
}
}
}
}
else
{
size_t v___x_5636_; size_t v___x_5637_; lean_object* v___x_5638_; 
v___x_5636_ = ((size_t)0ULL);
v___x_5637_ = lean_usize_of_nat(v___x_5621_);
v___x_5638_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5620_, v___x_5636_, v___x_5637_, v___x_5623_, v_a_5570_);
lean_dec(v_a_5620_);
if (lean_obj_tag(v___x_5638_) == 0)
{
lean_dec_ref(v___x_5638_);
v_a_5583_ = v_a_5619_;
goto v___jp_5582_;
}
else
{
lean_object* v_a_5639_; lean_object* v___x_5641_; uint8_t v_isShared_5642_; uint8_t v_isSharedCheck_5646_; 
lean_dec(v_a_5619_);
v_a_5639_ = lean_ctor_get(v___x_5638_, 0);
v_isSharedCheck_5646_ = !lean_is_exclusive(v___x_5638_);
if (v_isSharedCheck_5646_ == 0)
{
v___x_5641_ = v___x_5638_;
v_isShared_5642_ = v_isSharedCheck_5646_;
goto v_resetjp_5640_;
}
else
{
lean_inc(v_a_5639_);
lean_dec(v___x_5638_);
v___x_5641_ = lean_box(0);
v_isShared_5642_ = v_isSharedCheck_5646_;
goto v_resetjp_5640_;
}
v_resetjp_5640_:
{
lean_object* v___x_5644_; 
if (v_isShared_5642_ == 0)
{
v___x_5644_ = v___x_5641_;
goto v_reusejp_5643_;
}
else
{
lean_object* v_reuseFailAlloc_5645_; 
v_reuseFailAlloc_5645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5645_, 0, v_a_5639_);
v___x_5644_ = v_reuseFailAlloc_5645_;
goto v_reusejp_5643_;
}
v_reusejp_5643_:
{
return v___x_5644_;
}
}
}
}
}
}
else
{
lean_object* v_a_5647_; lean_object* v___x_5648_; uint8_t v___x_5649_; 
v_a_5647_ = lean_ctor_get(v___x_5618_, 1);
lean_inc(v_a_5647_);
lean_dec_ref(v___x_5618_);
v___x_5648_ = lean_array_get_size(v_a_5647_);
v___x_5649_ = lean_nat_dec_lt(v___x_5615_, v___x_5648_);
if (v___x_5649_ == 0)
{
lean_object* v___x_5650_; lean_object* v___x_5652_; 
lean_dec(v_a_5647_);
v___x_5650_ = lean_box(0);
if (v_isShared_5613_ == 0)
{
lean_ctor_set_tag(v___x_5612_, 1);
lean_ctor_set(v___x_5612_, 0, v___x_5650_);
v___x_5652_ = v___x_5612_;
goto v_reusejp_5651_;
}
else
{
lean_object* v_reuseFailAlloc_5653_; 
v_reuseFailAlloc_5653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5653_, 0, v___x_5650_);
v___x_5652_ = v_reuseFailAlloc_5653_;
goto v_reusejp_5651_;
}
v_reusejp_5651_:
{
return v___x_5652_;
}
}
else
{
lean_object* v___x_5654_; uint8_t v___x_5655_; 
lean_del_object(v___x_5612_);
v___x_5654_ = lean_box(0);
v___x_5655_ = lean_nat_dec_le(v___x_5648_, v___x_5648_);
if (v___x_5655_ == 0)
{
if (v___x_5649_ == 0)
{
lean_dec(v_a_5647_);
goto v___jp_5579_;
}
else
{
size_t v___x_5656_; size_t v___x_5657_; lean_object* v___x_5658_; 
v___x_5656_ = ((size_t)0ULL);
v___x_5657_ = lean_usize_of_nat(v___x_5648_);
v___x_5658_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5647_, v___x_5656_, v___x_5657_, v___x_5654_, v_a_5570_);
lean_dec(v_a_5647_);
if (lean_obj_tag(v___x_5658_) == 0)
{
lean_dec_ref(v___x_5658_);
goto v___jp_5579_;
}
else
{
lean_object* v_a_5659_; lean_object* v___x_5661_; uint8_t v_isShared_5662_; uint8_t v_isSharedCheck_5666_; 
v_a_5659_ = lean_ctor_get(v___x_5658_, 0);
v_isSharedCheck_5666_ = !lean_is_exclusive(v___x_5658_);
if (v_isSharedCheck_5666_ == 0)
{
v___x_5661_ = v___x_5658_;
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
else
{
lean_inc(v_a_5659_);
lean_dec(v___x_5658_);
v___x_5661_ = lean_box(0);
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
v_resetjp_5660_:
{
lean_object* v___x_5664_; 
if (v_isShared_5662_ == 0)
{
v___x_5664_ = v___x_5661_;
goto v_reusejp_5663_;
}
else
{
lean_object* v_reuseFailAlloc_5665_; 
v_reuseFailAlloc_5665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5665_, 0, v_a_5659_);
v___x_5664_ = v_reuseFailAlloc_5665_;
goto v_reusejp_5663_;
}
v_reusejp_5663_:
{
return v___x_5664_;
}
}
}
}
}
else
{
size_t v___x_5667_; size_t v___x_5668_; lean_object* v___x_5669_; 
v___x_5667_ = ((size_t)0ULL);
v___x_5668_ = lean_usize_of_nat(v___x_5648_);
v___x_5669_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5647_, v___x_5667_, v___x_5668_, v___x_5654_, v_a_5570_);
lean_dec(v_a_5647_);
if (lean_obj_tag(v___x_5669_) == 0)
{
lean_dec_ref(v___x_5669_);
goto v___jp_5579_;
}
else
{
lean_object* v_a_5670_; lean_object* v___x_5672_; uint8_t v_isShared_5673_; uint8_t v_isSharedCheck_5677_; 
v_a_5670_ = lean_ctor_get(v___x_5669_, 0);
v_isSharedCheck_5677_ = !lean_is_exclusive(v___x_5669_);
if (v_isSharedCheck_5677_ == 0)
{
v___x_5672_ = v___x_5669_;
v_isShared_5673_ = v_isSharedCheck_5677_;
goto v_resetjp_5671_;
}
else
{
lean_inc(v_a_5670_);
lean_dec(v___x_5669_);
v___x_5672_ = lean_box(0);
v_isShared_5673_ = v_isSharedCheck_5677_;
goto v_resetjp_5671_;
}
v_resetjp_5671_:
{
lean_object* v___x_5675_; 
if (v_isShared_5673_ == 0)
{
v___x_5675_ = v___x_5672_;
goto v_reusejp_5674_;
}
else
{
lean_object* v_reuseFailAlloc_5676_; 
v_reuseFailAlloc_5676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5676_, 0, v_a_5670_);
v___x_5675_ = v_reuseFailAlloc_5676_;
goto v_reusejp_5674_;
}
v_reusejp_5674_:
{
return v___x_5675_;
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
lean_object* v_a_5680_; lean_object* v___x_5682_; uint8_t v_isShared_5683_; uint8_t v_isSharedCheck_5692_; 
lean_dec_ref(v_path_5605_);
lean_dec_ref(v_platform_5567_);
v_a_5680_ = lean_ctor_get(v___x_5610_, 0);
v_isSharedCheck_5692_ = !lean_is_exclusive(v___x_5610_);
if (v_isSharedCheck_5692_ == 0)
{
v___x_5682_ = v___x_5610_;
v_isShared_5683_ = v_isSharedCheck_5692_;
goto v_resetjp_5681_;
}
else
{
lean_inc(v_a_5680_);
lean_dec(v___x_5610_);
v___x_5682_ = lean_box(0);
v_isShared_5683_ = v_isSharedCheck_5692_;
goto v_resetjp_5681_;
}
v_resetjp_5681_:
{
lean_object* v___x_5684_; uint8_t v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5690_; 
v___x_5684_ = lean_io_error_to_string(v_a_5680_);
v___x_5685_ = 3;
v___x_5686_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5686_, 0, v___x_5684_);
lean_ctor_set_uint8(v___x_5686_, sizeof(void*)*1, v___x_5685_);
lean_inc_ref(v_a_5570_);
v___x_5687_ = lean_apply_2(v_a_5570_, v___x_5686_, lean_box(0));
v___x_5688_ = lean_box(0);
if (v_isShared_5683_ == 0)
{
lean_ctor_set(v___x_5682_, 0, v___x_5688_);
v___x_5690_ = v___x_5682_;
goto v_reusejp_5689_;
}
else
{
lean_object* v_reuseFailAlloc_5691_; 
v_reuseFailAlloc_5691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5691_, 0, v___x_5688_);
v___x_5690_ = v_reuseFailAlloc_5691_;
goto v_reusejp_5689_;
}
v_reusejp_5689_:
{
return v___x_5690_;
}
}
}
}
else
{
lean_object* v_a_5693_; lean_object* v___x_5695_; uint8_t v_isShared_5696_; uint8_t v_isSharedCheck_5705_; 
lean_dec(v_val_5608_);
lean_dec_ref(v_path_5605_);
lean_dec_ref(v_platform_5567_);
v_a_5693_ = lean_ctor_get(v___x_5609_, 0);
v_isSharedCheck_5705_ = !lean_is_exclusive(v___x_5609_);
if (v_isSharedCheck_5705_ == 0)
{
v___x_5695_ = v___x_5609_;
v_isShared_5696_ = v_isSharedCheck_5705_;
goto v_resetjp_5694_;
}
else
{
lean_inc(v_a_5693_);
lean_dec(v___x_5609_);
v___x_5695_ = lean_box(0);
v_isShared_5696_ = v_isSharedCheck_5705_;
goto v_resetjp_5694_;
}
v_resetjp_5694_:
{
lean_object* v___x_5697_; uint8_t v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5703_; 
v___x_5697_ = lean_io_error_to_string(v_a_5693_);
v___x_5698_ = 3;
v___x_5699_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5699_, 0, v___x_5697_);
lean_ctor_set_uint8(v___x_5699_, sizeof(void*)*1, v___x_5698_);
lean_inc_ref(v_a_5570_);
v___x_5700_ = lean_apply_2(v_a_5570_, v___x_5699_, lean_box(0));
v___x_5701_ = lean_box(0);
if (v_isShared_5696_ == 0)
{
lean_ctor_set(v___x_5695_, 0, v___x_5701_);
v___x_5703_ = v___x_5695_;
goto v_reusejp_5702_;
}
else
{
lean_object* v_reuseFailAlloc_5704_; 
v_reuseFailAlloc_5704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5704_, 0, v___x_5701_);
v___x_5703_ = v_reuseFailAlloc_5704_;
goto v_reusejp_5702_;
}
v_reusejp_5702_:
{
return v___x_5703_;
}
}
}
}
else
{
lean_object* v___x_5706_; lean_object* v___x_5707_; 
lean_dec(v_a_5607_);
lean_dec_ref(v_path_5605_);
lean_dec_ref(v_platform_5567_);
v___x_5706_ = lean_box(0);
v___x_5707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5707_, 0, v___x_5706_);
return v___x_5707_;
}
}
v___jp_5708_:
{
lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; 
v___x_5711_ = lean_unsigned_to_nat(0u);
v___x_5712_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_5713_ = l_Lake_getUrl_x3f(v___y_5709_, v___y_5710_, v___x_5712_);
if (lean_obj_tag(v___x_5713_) == 0)
{
lean_object* v_a_5714_; lean_object* v_a_5715_; lean_object* v___x_5716_; uint8_t v___x_5717_; 
v_a_5714_ = lean_ctor_get(v___x_5713_, 0);
lean_inc(v_a_5714_);
v_a_5715_ = lean_ctor_get(v___x_5713_, 1);
lean_inc(v_a_5715_);
lean_dec_ref(v___x_5713_);
v___x_5716_ = lean_array_get_size(v_a_5715_);
v___x_5717_ = lean_nat_dec_lt(v___x_5711_, v___x_5716_);
if (v___x_5717_ == 0)
{
lean_dec(v_a_5715_);
lean_dec_ref(v_remoteScope_5566_);
v_a_5607_ = v_a_5714_;
goto v___jp_5606_;
}
else
{
lean_object* v___x_5718_; uint8_t v___x_5719_; 
v___x_5718_ = lean_box(0);
v___x_5719_ = lean_nat_dec_le(v___x_5716_, v___x_5716_);
if (v___x_5719_ == 0)
{
if (v___x_5717_ == 0)
{
lean_dec(v_a_5715_);
lean_dec_ref(v_remoteScope_5566_);
v_a_5607_ = v_a_5714_;
goto v___jp_5606_;
}
else
{
size_t v___x_5720_; size_t v___x_5721_; lean_object* v___x_5722_; 
v___x_5720_ = ((size_t)0ULL);
v___x_5721_ = lean_usize_of_nat(v___x_5716_);
v___x_5722_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5715_, v___x_5720_, v___x_5721_, v___x_5718_, v_a_5570_);
lean_dec(v_a_5715_);
if (lean_obj_tag(v___x_5722_) == 0)
{
lean_dec_ref(v___x_5722_);
lean_dec_ref(v_remoteScope_5566_);
v_a_5607_ = v_a_5714_;
goto v___jp_5606_;
}
else
{
lean_object* v_a_5723_; 
lean_dec(v_a_5714_);
lean_dec_ref(v_path_5605_);
lean_dec_ref(v_platform_5567_);
v_a_5723_ = lean_ctor_get(v___x_5722_, 0);
lean_inc(v_a_5723_);
lean_dec_ref(v___x_5722_);
v_a_5596_ = v_a_5723_;
goto v___jp_5595_;
}
}
}
else
{
size_t v___x_5724_; size_t v___x_5725_; lean_object* v___x_5726_; 
v___x_5724_ = ((size_t)0ULL);
v___x_5725_ = lean_usize_of_nat(v___x_5716_);
v___x_5726_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5715_, v___x_5724_, v___x_5725_, v___x_5718_, v_a_5570_);
lean_dec(v_a_5715_);
if (lean_obj_tag(v___x_5726_) == 0)
{
lean_dec_ref(v___x_5726_);
lean_dec_ref(v_remoteScope_5566_);
v_a_5607_ = v_a_5714_;
goto v___jp_5606_;
}
else
{
lean_object* v_a_5727_; 
lean_dec(v_a_5714_);
lean_dec_ref(v_path_5605_);
lean_dec_ref(v_platform_5567_);
v_a_5727_ = lean_ctor_get(v___x_5726_, 0);
lean_inc(v_a_5727_);
lean_dec_ref(v___x_5726_);
v_a_5596_ = v_a_5727_;
goto v___jp_5595_;
}
}
}
}
else
{
lean_object* v_a_5728_; lean_object* v___x_5729_; uint8_t v___x_5730_; 
lean_dec_ref(v_path_5605_);
lean_dec_ref(v_platform_5567_);
v_a_5728_ = lean_ctor_get(v___x_5713_, 1);
lean_inc(v_a_5728_);
lean_dec_ref(v___x_5713_);
v___x_5729_ = lean_array_get_size(v_a_5728_);
v___x_5730_ = lean_nat_dec_lt(v___x_5711_, v___x_5729_);
if (v___x_5730_ == 0)
{
lean_object* v___x_5731_; 
lean_dec(v_a_5728_);
v___x_5731_ = lean_box(0);
v_a_5596_ = v___x_5731_;
goto v___jp_5595_;
}
else
{
lean_object* v___x_5732_; uint8_t v___x_5733_; 
v___x_5732_ = lean_box(0);
v___x_5733_ = lean_nat_dec_le(v___x_5729_, v___x_5729_);
if (v___x_5733_ == 0)
{
if (v___x_5730_ == 0)
{
lean_dec(v_a_5728_);
goto v___jp_5598_;
}
else
{
size_t v___x_5734_; size_t v___x_5735_; lean_object* v___x_5736_; 
v___x_5734_ = ((size_t)0ULL);
v___x_5735_ = lean_usize_of_nat(v___x_5729_);
v___x_5736_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5728_, v___x_5734_, v___x_5735_, v___x_5732_, v_a_5570_);
lean_dec(v_a_5728_);
if (lean_obj_tag(v___x_5736_) == 0)
{
lean_dec_ref(v___x_5736_);
goto v___jp_5598_;
}
else
{
lean_object* v_a_5737_; 
v_a_5737_ = lean_ctor_get(v___x_5736_, 0);
lean_inc(v_a_5737_);
lean_dec_ref(v___x_5736_);
v_a_5596_ = v_a_5737_;
goto v___jp_5595_;
}
}
}
else
{
size_t v___x_5738_; size_t v___x_5739_; lean_object* v___x_5740_; 
v___x_5738_ = ((size_t)0ULL);
v___x_5739_ = lean_usize_of_nat(v___x_5729_);
v___x_5740_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5728_, v___x_5738_, v___x_5739_, v___x_5732_, v_a_5570_);
lean_dec(v_a_5728_);
if (lean_obj_tag(v___x_5740_) == 0)
{
lean_dec_ref(v___x_5740_);
goto v___jp_5598_;
}
else
{
lean_object* v_a_5741_; 
v_a_5741_ = lean_ctor_get(v___x_5740_, 0);
lean_inc(v_a_5741_);
lean_dec_ref(v___x_5740_);
v_a_5596_ = v_a_5741_;
goto v___jp_5595_;
}
}
}
}
}
v___jp_5742_:
{
lean_object* v___x_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; uint8_t v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; uint8_t v_isReservoir_5756_; 
lean_inc_ref(v_platform_5567_);
lean_inc_ref(v_remoteScope_5566_);
lean_inc_ref(v_service_5564_);
v___x_5743_ = l_Lake_CacheService_revisionUrl(v_rev_5562_, v_service_5564_, v_remoteScope_5566_, v_platform_5567_, v_toolchain_5568_);
v___x_5744_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__1));
v___x_5745_ = lean_string_append(v_localScope_5565_, v___x_5744_);
v___x_5746_ = lean_string_append(v___x_5745_, v_rev_5562_);
lean_dec_ref(v_rev_5562_);
v___x_5747_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_5748_ = lean_string_append(v___x_5746_, v___x_5747_);
v___x_5749_ = lean_string_append(v___x_5748_, v_path_5605_);
v___x_5750_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_5751_ = lean_string_append(v___x_5749_, v___x_5750_);
v___x_5752_ = lean_string_append(v___x_5751_, v___x_5743_);
v___x_5753_ = 1;
v___x_5754_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5754_, 0, v___x_5752_);
lean_ctor_set_uint8(v___x_5754_, sizeof(void*)*1, v___x_5753_);
lean_inc_ref(v_a_5570_);
v___x_5755_ = lean_apply_2(v_a_5570_, v___x_5754_, lean_box(0));
v_isReservoir_5756_ = lean_ctor_get_uint8(v_service_5564_, sizeof(void*)*5);
lean_dec_ref(v_service_5564_);
if (v_isReservoir_5756_ == 0)
{
lean_object* v___x_5757_; 
v___x_5757_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__2));
v___y_5709_ = v___x_5743_;
v___y_5710_ = v___x_5757_;
goto v___jp_5708_;
}
else
{
lean_object* v___x_5758_; 
v___x_5758_ = l_Lake_Reservoir_lakeHeaders;
v___y_5709_ = v___x_5743_;
v___y_5710_ = v___x_5758_;
goto v___jp_5708_;
}
}
v___jp_5760_:
{
if (v___x_5759_ == 0)
{
goto v___jp_5742_;
}
else
{
if (v_force_5569_ == 0)
{
lean_object* v___x_5761_; lean_object* v___x_5762_; uint8_t v___x_5763_; lean_object* v___x_5764_; lean_object* v___x_5765_; 
lean_dec_ref(v_toolchain_5568_);
lean_dec_ref(v_remoteScope_5566_);
lean_dec_ref(v_localScope_5565_);
lean_dec_ref(v_service_5564_);
lean_dec_ref(v_rev_5562_);
v___x_5761_ = lean_string_utf8_byte_size(v_platform_5567_);
lean_dec_ref(v_platform_5567_);
v___x_5762_ = lean_unsigned_to_nat(0u);
v___x_5763_ = lean_nat_dec_eq(v___x_5761_, v___x_5762_);
v___x_5764_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__1));
v___x_5765_ = l_Lake_CacheMap_load(v_path_5605_, v___x_5763_, v___x_5764_);
if (lean_obj_tag(v___x_5765_) == 0)
{
lean_object* v_a_5766_; lean_object* v_a_5767_; lean_object* v___x_5768_; uint8_t v___x_5769_; 
v_a_5766_ = lean_ctor_get(v___x_5765_, 0);
lean_inc(v_a_5766_);
v_a_5767_ = lean_ctor_get(v___x_5765_, 1);
lean_inc(v_a_5767_);
lean_dec_ref(v___x_5765_);
v___x_5768_ = lean_array_get_size(v_a_5767_);
v___x_5769_ = lean_nat_dec_lt(v___x_5762_, v___x_5768_);
if (v___x_5769_ == 0)
{
lean_dec(v_a_5767_);
v_a_5576_ = v_a_5766_;
goto v___jp_5575_;
}
else
{
lean_object* v___x_5770_; uint8_t v___x_5771_; 
v___x_5770_ = lean_box(0);
v___x_5771_ = lean_nat_dec_le(v___x_5768_, v___x_5768_);
if (v___x_5771_ == 0)
{
if (v___x_5769_ == 0)
{
lean_dec(v_a_5767_);
v_a_5576_ = v_a_5766_;
goto v___jp_5575_;
}
else
{
size_t v___x_5772_; size_t v___x_5773_; lean_object* v___x_5774_; 
v___x_5772_ = ((size_t)0ULL);
v___x_5773_ = lean_usize_of_nat(v___x_5768_);
v___x_5774_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5767_, v___x_5772_, v___x_5773_, v___x_5770_, v_a_5570_);
lean_dec(v_a_5767_);
if (lean_obj_tag(v___x_5774_) == 0)
{
lean_dec_ref(v___x_5774_);
v_a_5576_ = v_a_5766_;
goto v___jp_5575_;
}
else
{
lean_object* v_a_5775_; lean_object* v___x_5777_; uint8_t v_isShared_5778_; uint8_t v_isSharedCheck_5782_; 
lean_dec(v_a_5766_);
v_a_5775_ = lean_ctor_get(v___x_5774_, 0);
v_isSharedCheck_5782_ = !lean_is_exclusive(v___x_5774_);
if (v_isSharedCheck_5782_ == 0)
{
v___x_5777_ = v___x_5774_;
v_isShared_5778_ = v_isSharedCheck_5782_;
goto v_resetjp_5776_;
}
else
{
lean_inc(v_a_5775_);
lean_dec(v___x_5774_);
v___x_5777_ = lean_box(0);
v_isShared_5778_ = v_isSharedCheck_5782_;
goto v_resetjp_5776_;
}
v_resetjp_5776_:
{
lean_object* v___x_5780_; 
if (v_isShared_5778_ == 0)
{
v___x_5780_ = v___x_5777_;
goto v_reusejp_5779_;
}
else
{
lean_object* v_reuseFailAlloc_5781_; 
v_reuseFailAlloc_5781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5781_, 0, v_a_5775_);
v___x_5780_ = v_reuseFailAlloc_5781_;
goto v_reusejp_5779_;
}
v_reusejp_5779_:
{
return v___x_5780_;
}
}
}
}
}
else
{
size_t v___x_5783_; size_t v___x_5784_; lean_object* v___x_5785_; 
v___x_5783_ = ((size_t)0ULL);
v___x_5784_ = lean_usize_of_nat(v___x_5768_);
v___x_5785_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5767_, v___x_5783_, v___x_5784_, v___x_5770_, v_a_5570_);
lean_dec(v_a_5767_);
if (lean_obj_tag(v___x_5785_) == 0)
{
lean_dec_ref(v___x_5785_);
v_a_5576_ = v_a_5766_;
goto v___jp_5575_;
}
else
{
lean_object* v_a_5786_; lean_object* v___x_5788_; uint8_t v_isShared_5789_; uint8_t v_isSharedCheck_5793_; 
lean_dec(v_a_5766_);
v_a_5786_ = lean_ctor_get(v___x_5785_, 0);
v_isSharedCheck_5793_ = !lean_is_exclusive(v___x_5785_);
if (v_isSharedCheck_5793_ == 0)
{
v___x_5788_ = v___x_5785_;
v_isShared_5789_ = v_isSharedCheck_5793_;
goto v_resetjp_5787_;
}
else
{
lean_inc(v_a_5786_);
lean_dec(v___x_5785_);
v___x_5788_ = lean_box(0);
v_isShared_5789_ = v_isSharedCheck_5793_;
goto v_resetjp_5787_;
}
v_resetjp_5787_:
{
lean_object* v___x_5791_; 
if (v_isShared_5789_ == 0)
{
v___x_5791_ = v___x_5788_;
goto v_reusejp_5790_;
}
else
{
lean_object* v_reuseFailAlloc_5792_; 
v_reuseFailAlloc_5792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5792_, 0, v_a_5786_);
v___x_5791_ = v_reuseFailAlloc_5792_;
goto v_reusejp_5790_;
}
v_reusejp_5790_:
{
return v___x_5791_;
}
}
}
}
}
}
else
{
lean_object* v_a_5794_; lean_object* v___x_5795_; uint8_t v___x_5796_; 
v_a_5794_ = lean_ctor_get(v___x_5765_, 1);
lean_inc(v_a_5794_);
lean_dec_ref(v___x_5765_);
v___x_5795_ = lean_array_get_size(v_a_5794_);
v___x_5796_ = lean_nat_dec_lt(v___x_5762_, v___x_5795_);
if (v___x_5796_ == 0)
{
lean_object* v___x_5797_; lean_object* v___x_5798_; 
lean_dec(v_a_5794_);
v___x_5797_ = lean_box(0);
v___x_5798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5798_, 0, v___x_5797_);
return v___x_5798_;
}
else
{
lean_object* v___x_5799_; uint8_t v___x_5800_; 
v___x_5799_ = lean_box(0);
v___x_5800_ = lean_nat_dec_le(v___x_5795_, v___x_5795_);
if (v___x_5800_ == 0)
{
if (v___x_5796_ == 0)
{
lean_dec(v_a_5794_);
goto v___jp_5572_;
}
else
{
size_t v___x_5801_; size_t v___x_5802_; lean_object* v___x_5803_; 
v___x_5801_ = ((size_t)0ULL);
v___x_5802_ = lean_usize_of_nat(v___x_5795_);
v___x_5803_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5794_, v___x_5801_, v___x_5802_, v___x_5799_, v_a_5570_);
lean_dec(v_a_5794_);
if (lean_obj_tag(v___x_5803_) == 0)
{
lean_dec_ref(v___x_5803_);
goto v___jp_5572_;
}
else
{
lean_object* v_a_5804_; lean_object* v___x_5806_; uint8_t v_isShared_5807_; uint8_t v_isSharedCheck_5811_; 
v_a_5804_ = lean_ctor_get(v___x_5803_, 0);
v_isSharedCheck_5811_ = !lean_is_exclusive(v___x_5803_);
if (v_isSharedCheck_5811_ == 0)
{
v___x_5806_ = v___x_5803_;
v_isShared_5807_ = v_isSharedCheck_5811_;
goto v_resetjp_5805_;
}
else
{
lean_inc(v_a_5804_);
lean_dec(v___x_5803_);
v___x_5806_ = lean_box(0);
v_isShared_5807_ = v_isSharedCheck_5811_;
goto v_resetjp_5805_;
}
v_resetjp_5805_:
{
lean_object* v___x_5809_; 
if (v_isShared_5807_ == 0)
{
v___x_5809_ = v___x_5806_;
goto v_reusejp_5808_;
}
else
{
lean_object* v_reuseFailAlloc_5810_; 
v_reuseFailAlloc_5810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5810_, 0, v_a_5804_);
v___x_5809_ = v_reuseFailAlloc_5810_;
goto v_reusejp_5808_;
}
v_reusejp_5808_:
{
return v___x_5809_;
}
}
}
}
}
else
{
size_t v___x_5812_; size_t v___x_5813_; lean_object* v___x_5814_; 
v___x_5812_ = ((size_t)0ULL);
v___x_5813_ = lean_usize_of_nat(v___x_5795_);
v___x_5814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5794_, v___x_5812_, v___x_5813_, v___x_5799_, v_a_5570_);
lean_dec(v_a_5794_);
if (lean_obj_tag(v___x_5814_) == 0)
{
lean_dec_ref(v___x_5814_);
goto v___jp_5572_;
}
else
{
lean_object* v_a_5815_; lean_object* v___x_5817_; uint8_t v_isShared_5818_; uint8_t v_isSharedCheck_5822_; 
v_a_5815_ = lean_ctor_get(v___x_5814_, 0);
v_isSharedCheck_5822_ = !lean_is_exclusive(v___x_5814_);
if (v_isSharedCheck_5822_ == 0)
{
v___x_5817_ = v___x_5814_;
v_isShared_5818_ = v_isSharedCheck_5822_;
goto v_resetjp_5816_;
}
else
{
lean_inc(v_a_5815_);
lean_dec(v___x_5814_);
v___x_5817_ = lean_box(0);
v_isShared_5818_ = v_isSharedCheck_5822_;
goto v_resetjp_5816_;
}
v_resetjp_5816_:
{
lean_object* v___x_5820_; 
if (v_isShared_5818_ == 0)
{
v___x_5820_ = v___x_5817_;
goto v_reusejp_5819_;
}
else
{
lean_object* v_reuseFailAlloc_5821_; 
v_reuseFailAlloc_5821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5821_, 0, v_a_5815_);
v___x_5820_ = v_reuseFailAlloc_5821_;
goto v_reusejp_5819_;
}
v_reusejp_5819_:
{
return v___x_5820_;
}
}
}
}
}
}
}
else
{
goto v___jp_5742_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___boxed(lean_object* v_rev_5849_, lean_object* v_cache_5850_, lean_object* v_service_5851_, lean_object* v_localScope_5852_, lean_object* v_remoteScope_5853_, lean_object* v_platform_5854_, lean_object* v_toolchain_5855_, lean_object* v_force_5856_, lean_object* v_a_5857_, lean_object* v_a_5858_){
_start:
{
uint8_t v_force_boxed_5859_; lean_object* v_res_5860_; 
v_force_boxed_5859_ = lean_unbox(v_force_5856_);
v_res_5860_ = l_Lake_CacheService_downloadRevisionOutputs_x3f(v_rev_5849_, v_cache_5850_, v_service_5851_, v_localScope_5852_, v_remoteScope_5853_, v_platform_5854_, v_toolchain_5855_, v_force_boxed_5859_, v_a_5857_);
lean_dec_ref(v_a_5857_);
return v_res_5860_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs(lean_object* v_rev_5862_, lean_object* v_outputs_5863_, lean_object* v_service_5864_, lean_object* v_scope_5865_, lean_object* v_platform_5866_, lean_object* v_toolchain_5867_, lean_object* v_a_5868_){
_start:
{
lean_object* v_url_5870_; lean_object* v___y_5872_; lean_object* v_s_5888_; 
lean_inc_ref(v_scope_5865_);
lean_inc_ref(v_service_5864_);
v_url_5870_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_5862_, v_service_5864_, v_scope_5865_, v_platform_5866_, v_toolchain_5867_);
v_s_5888_ = lean_ctor_get(v_scope_5865_, 0);
lean_inc_ref(v_s_5888_);
lean_dec_ref(v_scope_5865_);
v___y_5872_ = v_s_5888_;
goto v___jp_5871_;
v___jp_5871_:
{
lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; uint8_t v___x_5882_; lean_object* v___x_5883_; lean_object* v___x_5884_; lean_object* v_key_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; 
v___x_5873_ = ((lean_object*)(l_Lake_CacheService_uploadRevisionOutputs___closed__0));
v___x_5874_ = lean_string_append(v___y_5872_, v___x_5873_);
v___x_5875_ = lean_string_append(v___x_5874_, v_rev_5862_);
v___x_5876_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_5877_ = lean_string_append(v___x_5875_, v___x_5876_);
v___x_5878_ = lean_string_append(v___x_5877_, v_outputs_5863_);
v___x_5879_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_5880_ = lean_string_append(v___x_5878_, v___x_5879_);
v___x_5881_ = lean_string_append(v___x_5880_, v_url_5870_);
v___x_5882_ = 1;
v___x_5883_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5883_, 0, v___x_5881_);
lean_ctor_set_uint8(v___x_5883_, sizeof(void*)*1, v___x_5882_);
lean_inc_ref(v_a_5868_);
v___x_5884_ = lean_apply_2(v_a_5868_, v___x_5883_, lean_box(0));
v_key_5885_ = lean_ctor_get(v_service_5864_, 1);
lean_inc_ref(v_key_5885_);
lean_dec_ref(v_service_5864_);
v___x_5886_ = ((lean_object*)(l_Lake_CacheService_mapContentType___closed__0));
v___x_5887_ = l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(v_a_5868_, v_outputs_5863_, v___x_5886_, v_url_5870_, v_key_5885_);
return v___x_5887_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs___boxed(lean_object* v_rev_5889_, lean_object* v_outputs_5890_, lean_object* v_service_5891_, lean_object* v_scope_5892_, lean_object* v_platform_5893_, lean_object* v_toolchain_5894_, lean_object* v_a_5895_, lean_object* v_a_5896_){
_start:
{
lean_object* v_res_5897_; 
v_res_5897_ = l_Lake_CacheService_uploadRevisionOutputs(v_rev_5889_, v_outputs_5890_, v_service_5891_, v_scope_5892_, v_platform_5893_, v_toolchain_5894_, v_a_5895_);
lean_dec_ref(v_a_5895_);
lean_dec_ref(v_toolchain_5894_);
lean_dec_ref(v_rev_5889_);
return v_res_5897_;
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
