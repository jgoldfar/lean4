// Lean compiler output
// Module: Init.Data.String.Basic
// Imports: public import Init.Data.String.Decode public import Init.Data.String.Defs import Init.Data.ByteArray.Lemmas import Init.Data.Char.Lemmas public import Init.Data.Char.Basic import Init.ByCases import Init.Data.Array.Bootstrap import Init.Data.Array.Lemmas import Init.Data.List.Nat.TakeDrop import Init.Data.List.Sublist import Init.Data.List.TakeDrop import Init.Data.Option.Lemmas import Init.Omega
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_instInhabitedSlice;
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_land(uint8_t, uint8_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_utf8Decode_x3f_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_utf8Decode_x3f_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_ByteArray_utf8Decode_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_ByteArray_utf8Decode_x3f___closed__0 = (const lean_object*)&l_ByteArray_utf8Decode_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_validateUTF8_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8_go___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_validateUTF8_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instDecidableIsValidUTF8(lean_object*);
LEAN_EXPORT lean_object* l_instDecidableIsValidUTF8___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_fromUTF8_x3f(lean_object*);
static const lean_string_object l_String_fromUTF8_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_String_fromUTF8_x21___closed__0 = (const lean_object*)&l_String_fromUTF8_x21___closed__0_value;
static const lean_string_object l_String_fromUTF8_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_String_fromUTF8_x21___closed__1 = (const lean_object*)&l_String_fromUTF8_x21___closed__1_value;
static const lean_string_object l_String_fromUTF8_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_String_fromUTF8_x21___closed__2 = (const lean_object*)&l_String_fromUTF8_x21___closed__2_value;
static const lean_string_object l_String_fromUTF8_x21___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_String_fromUTF8_x21___closed__3 = (const lean_object*)&l_String_fromUTF8_x21___closed__3_value;
static lean_once_cell_t l_String_fromUTF8_x21___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_fromUTF8_x21___closed__4;
LEAN_EXPORT lean_object* l_String_fromUTF8_x21(lean_object*);
LEAN_EXPORT lean_object* l_String_Internal_toArray(lean_object*);
lean_object* lean_string_data(lean_object*);
LEAN_EXPORT lean_object* l_String_toList___boxed(lean_object*);
lean_object* lean_string_data(lean_object*);
LEAN_EXPORT lean_object* l_String_data___boxed(lean_object*);
lean_object* lean_string_length(lean_object*);
LEAN_EXPORT lean_object* l_String_length___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instLT;
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_decidableLT___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instLE;
LEAN_EXPORT uint8_t l_String_decLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_decLE___boxed(lean_object*, lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_isValid___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableIsValid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableIsValid___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_copy(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_copy___boxed(lean_object*);
LEAN_EXPORT uint8_t l_String_Pos_Raw_isValidForSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_isValidForSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableIsValidForSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableIsValidForSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_str(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_str___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_sliceFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_sliceFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStart___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_sliceTo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_sliceTo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_slice_x21_spec__0(lean_object*);
static const lean_string_object l_String_Slice_slice_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "String.Slice.slice!"};
static const lean_object* l_String_Slice_slice_x21___closed__0 = (const lean_object*)&l_String_Slice_slice_x21___closed__0_value;
static const lean_string_object l_String_Slice_slice_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Starting position must be less than or equal to end position."};
static const lean_object* l_String_Slice_slice_x21___closed__1 = (const lean_object*)&l_String_Slice_slice_x21___closed__1_value;
static lean_once_cell_t l_String_Slice_slice_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_slice_x21___closed__2;
LEAN_EXPORT lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_slice_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd_x21___boxed(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_decodeChar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Slice_Pos_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_get___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Slice_Pos_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_get___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1;
LEAN_EXPORT uint32_t l_panic___at___00String_Slice_Pos_get_x21_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed(lean_object*);
static const lean_string_object l_String_Slice_Pos_get_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "String.Slice.Pos.get!"};
static const lean_object* l_String_Slice_Pos_get_x21___closed__0 = (const lean_object*)&l_String_Slice_Pos_get_x21___closed__0_value;
static const lean_string_object l_String_Slice_Pos_get_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Cannot retrieve character at end position"};
static const lean_object* l_String_Slice_Pos_get_x21___closed__1 = (const lean_object*)&l_String_Slice_Pos_get_x21___closed__1_value;
static lean_once_cell_t l_String_Slice_Pos_get_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_Pos_get_x21___closed__2;
LEAN_EXPORT uint32_t l_String_Slice_Pos_get_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toSlice___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toSlice___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Pos_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_get___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Pos_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_get___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_get_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_get_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Pos_get_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_get_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Pos_byte___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_byte___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Pos_byte(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_byte___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofCopy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_Slice_Pos_next_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "String.Slice.Pos.next!"};
static const lean_object* l_String_Slice_Pos_next_x21___closed__0 = (const lean_object*)&l_String_Slice_Pos_next_x21___closed__0_value;
static const lean_string_object l_String_Slice_Pos_next_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Cannot advance the end position"};
static const lean_object* l_String_Slice_Pos_next_x21___closed__1 = (const lean_object*)&l_String_Slice_Pos_next_x21___closed__1_value;
static lean_once_cell_t l_String_Slice_Pos_next_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_Pos_next_x21___closed__2;
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_Slice_pos_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "String.Slice.pos!"};
static const lean_object* l_String_Slice_pos_x21___closed__0 = (const lean_object*)&l_String_Slice_pos_x21___closed__0_value;
static const lean_string_object l_String_Slice_pos_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Offset is not at a valid UTF-8 character boundary"};
static const lean_object* l_String_Slice_pos_x21___closed__1 = (const lean_object*)&l_String_Slice_pos_x21___closed__1_value;
static lean_once_cell_t l_String_Slice_pos_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_pos_x21___closed__2;
LEAN_EXPORT lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_pos_x21___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_next___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_next_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_next_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_next_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_next_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_pos___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_pos___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_pos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_pos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_pos_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_pos_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_pos_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_cast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_cast___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_cast(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_cast___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_Pos_Raw_utf8GetAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_String_utf8GetAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8GetAux___boxed(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_get___boxed(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8GetAux_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8GetAux_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_get_opt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x3f___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_get_opt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_get_x3f___boxed(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_bang(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x21___boxed(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_bang(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_get_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8SetAux(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8SetAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8SetAux(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8SetAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_sliceTo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_replaceEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_sliceFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_replaceStart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_slice___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_slice(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_slice_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_slice_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_slice_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_replaceStartEnd_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_replaceStartEnd_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceTo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_Pos_sliceOrPanic___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "String.Slice.Pos.sliceOrPanic"};
static const lean_object* l_String_Slice_Pos_sliceOrPanic___redArg___closed__0 = (const lean_object*)&l_String_Slice_Pos_sliceOrPanic___redArg___closed__0_value;
static const lean_string_object l_String_Slice_Pos_sliceOrPanic___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Position is outside of the bounds of the slice."};
static const lean_object* l_String_Slice_Pos_sliceOrPanic___redArg___closed__1 = (const lean_object*)&l_String_Slice_Pos_sliceOrPanic___redArg___closed__1_value;
static lean_once_cell_t l_String_Slice_Pos_sliceOrPanic___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_Pos_sliceOrPanic___redArg___closed__2;
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_Pos_ofSlice_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "String.Slice.Pos.ofSlice!"};
static const lean_object* l_String_Slice_Pos_ofSlice_x21___redArg___closed__0 = (const lean_object*)&l_String_Slice_Pos_ofSlice_x21___redArg___closed__0_value;
static lean_once_cell_t l_String_Slice_Pos_ofSlice_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_Pos_ofSlice_x21___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_Pos_slice_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "String.Slice.Pos.slice!"};
static const lean_object* l_String_Slice_Pos_slice_x21___redArg___closed__0 = (const lean_object*)&l_String_Slice_Pos_slice_x21___redArg___closed__0_value;
static const lean_string_object l_String_Slice_Pos_slice_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "Starting position must be less than or equal to end position and position must be between starting position and end position."};
static const lean_object* l_String_Slice_Pos_slice_x21___redArg___closed__1 = (const lean_object*)&l_String_Slice_Pos_slice_x21___redArg___closed__1_value;
static lean_once_cell_t l_String_Slice_Pos_slice_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_Pos_slice_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_nextn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_next___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_next___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8PrevAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8PrevAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8PrevAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8PrevAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_prev___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_prev___boxed(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_atEnd___boxed(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_atEnd___boxed(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x27___boxed(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_get_x27___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_next_x27___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_next_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_utf8GetAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_utf8GetAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_firstDiffPos_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_firstDiffPos_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_firstDiffPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_firstDiffPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2082(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2082___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2081(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2081___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPosAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPosAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_offsetOfPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_offsetOfPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_string_offsetofpos(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Pos_Raw_substrEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Pos_Raw_substrEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_substrEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_substrEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__Nat_repeat_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__Nat_repeat_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__Nat_repeat_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__Nat_repeat_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_get_x3f_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_get_x3f_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___redArg(lean_object* v_b_1_, lean_object* v_i_2_, lean_object* v_acc_3_){
_start:
{
uint32_t v_val_5_; lean_object* v___x_11_; uint8_t v___x_12_; 
v___x_11_ = lean_byte_array_size(v_b_1_);
v___x_12_ = lean_nat_dec_lt(v_i_2_, v___x_11_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; 
lean_dec(v_i_2_);
v___x_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_13_, 0, v_acc_3_);
return v___x_13_;
}
else
{
if (v___x_12_ == 0)
{
lean_object* v___x_14_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_14_ = lean_box(0);
return v___x_14_;
}
else
{
uint8_t v___x_15_; uint8_t v___x_16_; uint8_t v___x_17_; uint8_t v___x_18_; uint8_t v___x_19_; 
v___x_15_ = lean_byte_array_fget(v_b_1_, v_i_2_);
v___x_16_ = 128;
v___x_17_ = lean_uint8_land(v___x_15_, v___x_16_);
v___x_18_ = 0;
v___x_19_ = lean_uint8_dec_eq(v___x_17_, v___x_18_);
if (v___x_19_ == 0)
{
uint8_t v___x_20_; uint8_t v___x_21_; uint8_t v___x_22_; uint8_t v___x_23_; 
v___x_20_ = 224;
v___x_21_ = lean_uint8_land(v___x_15_, v___x_20_);
v___x_22_ = 192;
v___x_23_ = lean_uint8_dec_eq(v___x_21_, v___x_22_);
if (v___x_23_ == 0)
{
uint8_t v___x_24_; uint8_t v___x_25_; uint8_t v___x_26_; 
v___x_24_ = 240;
v___x_25_ = lean_uint8_land(v___x_15_, v___x_24_);
v___x_26_ = lean_uint8_dec_eq(v___x_25_, v___x_20_);
if (v___x_26_ == 0)
{
uint8_t v___x_27_; uint8_t v___x_28_; uint8_t v___x_29_; 
v___x_27_ = 248;
v___x_28_ = lean_uint8_land(v___x_15_, v___x_27_);
v___x_29_ = lean_uint8_dec_eq(v___x_28_, v___x_24_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_30_ = lean_box(0);
return v___x_30_;
}
else
{
lean_object* v___x_31_; lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_31_ = lean_unsigned_to_nat(3u);
v___x_32_ = lean_nat_add(v_i_2_, v___x_31_);
v___x_33_ = lean_nat_dec_lt(v___x_32_, v___x_11_);
if (v___x_33_ == 0)
{
lean_object* v___x_34_; 
lean_dec(v___x_32_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_34_ = lean_box(0);
return v___x_34_;
}
else
{
lean_object* v___x_35_; lean_object* v___x_36_; uint8_t v___x_37_; uint8_t v___x_38_; uint8_t v___x_39_; 
v___x_35_ = lean_unsigned_to_nat(1u);
v___x_36_ = lean_nat_add(v_i_2_, v___x_35_);
v___x_37_ = lean_byte_array_fget(v_b_1_, v___x_36_);
lean_dec(v___x_36_);
v___x_38_ = lean_uint8_land(v___x_37_, v___x_22_);
v___x_39_ = lean_uint8_dec_eq(v___x_38_, v___x_16_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; 
lean_dec(v___x_32_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_40_ = lean_box(0);
return v___x_40_;
}
else
{
lean_object* v___x_41_; lean_object* v___x_42_; uint8_t v___x_43_; uint8_t v___x_44_; uint8_t v___x_45_; 
v___x_41_ = lean_unsigned_to_nat(2u);
v___x_42_ = lean_nat_add(v_i_2_, v___x_41_);
v___x_43_ = lean_byte_array_fget(v_b_1_, v___x_42_);
lean_dec(v___x_42_);
v___x_44_ = lean_uint8_land(v___x_43_, v___x_22_);
v___x_45_ = lean_uint8_dec_eq(v___x_44_, v___x_16_);
if (v___x_45_ == 0)
{
lean_object* v___x_46_; 
lean_dec(v___x_32_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_46_ = lean_box(0);
return v___x_46_;
}
else
{
uint8_t v___x_47_; uint8_t v___x_48_; uint8_t v___x_49_; 
v___x_47_ = lean_byte_array_fget(v_b_1_, v___x_32_);
lean_dec(v___x_32_);
v___x_48_ = lean_uint8_land(v___x_47_, v___x_22_);
v___x_49_ = lean_uint8_dec_eq(v___x_48_, v___x_16_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_50_ = lean_box(0);
return v___x_50_;
}
else
{
uint8_t v___x_51_; uint8_t v_b_u2080_52_; uint8_t v___x_53_; uint8_t v_b_u2081_54_; uint8_t v_b_u2082_55_; uint8_t v_b_u2083_56_; uint32_t v___x_57_; uint32_t v___x_58_; uint32_t v___x_59_; uint32_t v___x_60_; uint32_t v___x_61_; uint32_t v___x_62_; uint32_t v___x_63_; uint32_t v___x_64_; uint32_t v___x_65_; uint32_t v___x_66_; uint32_t v___x_67_; uint32_t v___x_68_; uint32_t v_r_69_; uint32_t v___x_70_; uint8_t v___x_71_; 
v___x_51_ = 7;
v_b_u2080_52_ = lean_uint8_land(v___x_15_, v___x_51_);
v___x_53_ = 63;
v_b_u2081_54_ = lean_uint8_land(v___x_37_, v___x_53_);
v_b_u2082_55_ = lean_uint8_land(v___x_43_, v___x_53_);
v_b_u2083_56_ = lean_uint8_land(v___x_47_, v___x_53_);
v___x_57_ = lean_uint8_to_uint32(v_b_u2080_52_);
v___x_58_ = 18;
v___x_59_ = lean_uint32_shift_left(v___x_57_, v___x_58_);
v___x_60_ = lean_uint8_to_uint32(v_b_u2081_54_);
v___x_61_ = 12;
v___x_62_ = lean_uint32_shift_left(v___x_60_, v___x_61_);
v___x_63_ = lean_uint32_lor(v___x_59_, v___x_62_);
v___x_64_ = lean_uint8_to_uint32(v_b_u2082_55_);
v___x_65_ = 6;
v___x_66_ = lean_uint32_shift_left(v___x_64_, v___x_65_);
v___x_67_ = lean_uint32_lor(v___x_63_, v___x_66_);
v___x_68_ = lean_uint8_to_uint32(v_b_u2083_56_);
v_r_69_ = lean_uint32_lor(v___x_67_, v___x_68_);
v___x_70_ = 65536;
v___x_71_ = lean_uint32_dec_lt(v_r_69_, v___x_70_);
if (v___x_71_ == 0)
{
uint32_t v___x_72_; uint8_t v___x_73_; 
v___x_72_ = 1114111;
v___x_73_ = lean_uint32_dec_lt(v___x_72_, v_r_69_);
if (v___x_73_ == 0)
{
v_val_5_ = v_r_69_;
goto v___jp_4_;
}
else
{
lean_object* v___x_74_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_74_ = lean_box(0);
return v___x_74_;
}
}
else
{
lean_object* v___x_75_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_75_ = lean_box(0);
return v___x_75_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_76_ = lean_unsigned_to_nat(2u);
v___x_77_ = lean_nat_add(v_i_2_, v___x_76_);
v___x_78_ = lean_nat_dec_lt(v___x_77_, v___x_11_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; 
lean_dec(v___x_77_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_79_ = lean_box(0);
return v___x_79_;
}
else
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; uint8_t v___x_83_; uint8_t v___x_84_; 
v___x_80_ = lean_unsigned_to_nat(1u);
v___x_81_ = lean_nat_add(v_i_2_, v___x_80_);
v___x_82_ = lean_byte_array_fget(v_b_1_, v___x_81_);
lean_dec(v___x_81_);
v___x_83_ = lean_uint8_land(v___x_82_, v___x_22_);
v___x_84_ = lean_uint8_dec_eq(v___x_83_, v___x_16_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; 
lean_dec(v___x_77_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_85_ = lean_box(0);
return v___x_85_;
}
else
{
uint8_t v___x_86_; uint8_t v___x_87_; uint8_t v___x_88_; 
v___x_86_ = lean_byte_array_fget(v_b_1_, v___x_77_);
lean_dec(v___x_77_);
v___x_87_ = lean_uint8_land(v___x_86_, v___x_22_);
v___x_88_ = lean_uint8_dec_eq(v___x_87_, v___x_16_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_89_ = lean_box(0);
return v___x_89_;
}
else
{
uint8_t v___x_90_; uint8_t v_b_u2080_91_; uint8_t v___x_92_; uint8_t v_b_u2081_93_; uint8_t v_b_u2082_94_; uint32_t v___x_95_; uint32_t v___x_96_; uint32_t v___x_97_; uint32_t v___x_98_; uint32_t v___x_99_; uint32_t v___x_100_; uint32_t v___x_101_; uint32_t v___x_102_; uint32_t v_r_103_; uint32_t v___x_104_; uint8_t v___x_105_; 
v___x_90_ = 15;
v_b_u2080_91_ = lean_uint8_land(v___x_15_, v___x_90_);
v___x_92_ = 63;
v_b_u2081_93_ = lean_uint8_land(v___x_82_, v___x_92_);
v_b_u2082_94_ = lean_uint8_land(v___x_86_, v___x_92_);
v___x_95_ = lean_uint8_to_uint32(v_b_u2080_91_);
v___x_96_ = 12;
v___x_97_ = lean_uint32_shift_left(v___x_95_, v___x_96_);
v___x_98_ = lean_uint8_to_uint32(v_b_u2081_93_);
v___x_99_ = 6;
v___x_100_ = lean_uint32_shift_left(v___x_98_, v___x_99_);
v___x_101_ = lean_uint32_lor(v___x_97_, v___x_100_);
v___x_102_ = lean_uint8_to_uint32(v_b_u2082_94_);
v_r_103_ = lean_uint32_lor(v___x_101_, v___x_102_);
v___x_104_ = 2048;
v___x_105_ = lean_uint32_dec_lt(v_r_103_, v___x_104_);
if (v___x_105_ == 0)
{
uint32_t v___x_106_; uint8_t v___x_107_; 
v___x_106_ = 55296;
v___x_107_ = lean_uint32_dec_le(v___x_106_, v_r_103_);
if (v___x_107_ == 0)
{
v_val_5_ = v_r_103_;
goto v___jp_4_;
}
else
{
uint32_t v___x_108_; uint8_t v___x_109_; 
v___x_108_ = 57343;
v___x_109_ = lean_uint32_dec_le(v_r_103_, v___x_108_);
if (v___x_109_ == 0)
{
v_val_5_ = v_r_103_;
goto v___jp_4_;
}
else
{
lean_object* v___x_110_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_110_ = lean_box(0);
return v___x_110_;
}
}
}
else
{
lean_object* v___x_111_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_111_ = lean_box(0);
return v___x_111_;
}
}
}
}
}
}
else
{
lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_nat_add(v_i_2_, v___x_112_);
v___x_114_ = lean_nat_dec_lt(v___x_113_, v___x_11_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; 
lean_dec(v___x_113_);
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_115_ = lean_box(0);
return v___x_115_;
}
else
{
uint8_t v___x_116_; uint8_t v___x_117_; uint8_t v___x_118_; 
v___x_116_ = lean_byte_array_fget(v_b_1_, v___x_113_);
lean_dec(v___x_113_);
v___x_117_ = lean_uint8_land(v___x_116_, v___x_22_);
v___x_118_ = lean_uint8_dec_eq(v___x_117_, v___x_16_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_119_ = lean_box(0);
return v___x_119_;
}
else
{
uint8_t v___x_120_; uint8_t v_b_u2080_121_; uint8_t v___x_122_; uint8_t v_b_u2081_123_; uint32_t v___x_124_; uint32_t v___x_125_; uint32_t v___x_126_; uint32_t v___x_127_; uint32_t v_r_128_; uint32_t v___x_129_; uint8_t v___x_130_; 
v___x_120_ = 31;
v_b_u2080_121_ = lean_uint8_land(v___x_15_, v___x_120_);
v___x_122_ = 63;
v_b_u2081_123_ = lean_uint8_land(v___x_116_, v___x_122_);
v___x_124_ = lean_uint8_to_uint32(v_b_u2080_121_);
v___x_125_ = 6;
v___x_126_ = lean_uint32_shift_left(v___x_124_, v___x_125_);
v___x_127_ = lean_uint8_to_uint32(v_b_u2081_123_);
v_r_128_ = lean_uint32_lor(v___x_126_, v___x_127_);
v___x_129_ = 128;
v___x_130_ = lean_uint32_dec_lt(v_r_128_, v___x_129_);
if (v___x_130_ == 0)
{
v_val_5_ = v_r_128_;
goto v___jp_4_;
}
else
{
lean_object* v___x_131_; 
lean_dec_ref(v_acc_3_);
lean_dec(v_i_2_);
v___x_131_ = lean_box(0);
return v___x_131_;
}
}
}
}
}
else
{
uint32_t v___x_132_; 
v___x_132_ = lean_uint8_to_uint32(v___x_15_);
v_val_5_ = v___x_132_;
goto v___jp_4_;
}
}
}
v___jp_4_:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_6_ = l_Char_utf8Size(v_val_5_);
v___x_7_ = lean_nat_add(v_i_2_, v___x_6_);
lean_dec(v___x_6_);
lean_dec(v_i_2_);
v___x_8_ = lean_box_uint32(v_val_5_);
v___x_9_ = lean_array_push(v_acc_3_, v___x_8_);
v_i_2_ = v___x_7_;
v_acc_3_ = v___x_9_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___redArg___boxed(lean_object* v_b_133_, lean_object* v_i_134_, lean_object* v_acc_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_ByteArray_utf8Decode_x3f_go___redArg(v_b_133_, v_i_134_, v_acc_135_);
lean_dec_ref(v_b_133_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go(lean_object* v_b_137_, lean_object* v_i_138_, lean_object* v_acc_139_, lean_object* v_hi_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = l_ByteArray_utf8Decode_x3f_go___redArg(v_b_137_, v_i_138_, v_acc_139_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f_go___boxed(lean_object* v_b_142_, lean_object* v_i_143_, lean_object* v_acc_144_, lean_object* v_hi_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_ByteArray_utf8Decode_x3f_go(v_b_142_, v_i_143_, v_acc_144_, v_hi_145_);
lean_dec_ref(v_b_142_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_utf8Decode_x3f_go_match__1_splitter___redArg(lean_object* v_x_147_, lean_object* v_h__1_148_, lean_object* v_h__2_149_){
_start:
{
if (lean_obj_tag(v_x_147_) == 0)
{
lean_object* v___x_150_; 
lean_dec(v_h__2_149_);
v___x_150_ = lean_apply_1(v_h__1_148_, lean_box(0));
return v___x_150_;
}
else
{
lean_object* v_val_151_; lean_object* v___x_152_; 
lean_dec(v_h__1_148_);
v_val_151_ = lean_ctor_get(v_x_147_, 0);
lean_inc(v_val_151_);
lean_dec_ref(v_x_147_);
v___x_152_ = lean_apply_2(v_h__2_149_, v_val_151_, lean_box(0));
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_utf8Decode_x3f_go_match__1_splitter(lean_object* v_motive_153_, lean_object* v_x_154_, lean_object* v_h__1_155_, lean_object* v_h__2_156_){
_start:
{
if (lean_obj_tag(v_x_154_) == 0)
{
lean_object* v___x_157_; 
lean_dec(v_h__2_156_);
v___x_157_ = lean_apply_1(v_h__1_155_, lean_box(0));
return v___x_157_;
}
else
{
lean_object* v_val_158_; lean_object* v___x_159_; 
lean_dec(v_h__1_155_);
v_val_158_ = lean_ctor_get(v_x_154_, 0);
lean_inc(v_val_158_);
lean_dec_ref(v_x_154_);
v___x_159_ = lean_apply_2(v_h__2_156_, v_val_158_, lean_box(0));
return v___x_159_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f(lean_object* v_b_162_){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = lean_unsigned_to_nat(0u);
v___x_164_ = ((lean_object*)(l_ByteArray_utf8Decode_x3f___closed__0));
v___x_165_ = l_ByteArray_utf8Decode_x3f_go___redArg(v_b_162_, v___x_163_, v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8Decode_x3f___boxed(lean_object* v_b_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_ByteArray_utf8Decode_x3f(v_b_166_);
lean_dec_ref(v_b_166_);
return v_res_167_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_validateUTF8_go___redArg(lean_object* v_b_168_, lean_object* v_i_169_){
_start:
{
lean_object* v___y_171_; uint8_t v___y_175_; lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_192_ = lean_byte_array_size(v_b_168_);
v___x_193_ = lean_nat_dec_lt(v_i_169_, v___x_192_);
if (v___x_193_ == 0)
{
uint8_t v___x_194_; 
lean_dec(v_i_169_);
v___x_194_ = 1;
return v___x_194_;
}
else
{
if (v___x_193_ == 0)
{
lean_dec(v_i_169_);
return v___x_193_;
}
else
{
uint8_t v___x_195_; uint8_t v___x_196_; uint8_t v___x_197_; uint8_t v___x_198_; uint8_t v___x_199_; 
v___x_195_ = lean_byte_array_fget(v_b_168_, v_i_169_);
v___x_196_ = 128;
v___x_197_ = lean_uint8_land(v___x_195_, v___x_196_);
v___x_198_ = 0;
v___x_199_ = lean_uint8_dec_eq(v___x_197_, v___x_198_);
if (v___x_199_ == 0)
{
uint8_t v___x_200_; uint8_t v___x_201_; uint8_t v___x_202_; uint8_t v___x_203_; 
v___x_200_ = 224;
v___x_201_ = lean_uint8_land(v___x_195_, v___x_200_);
v___x_202_ = 192;
v___x_203_ = lean_uint8_dec_eq(v___x_201_, v___x_202_);
if (v___x_203_ == 0)
{
uint8_t v___x_204_; uint8_t v___x_205_; uint8_t v___x_206_; 
v___x_204_ = 240;
v___x_205_ = lean_uint8_land(v___x_195_, v___x_204_);
v___x_206_ = lean_uint8_dec_eq(v___x_205_, v___x_200_);
if (v___x_206_ == 0)
{
uint8_t v___x_207_; uint8_t v___x_208_; uint8_t v___x_209_; 
v___x_207_ = 248;
v___x_208_ = lean_uint8_land(v___x_195_, v___x_207_);
v___x_209_ = lean_uint8_dec_eq(v___x_208_, v___x_204_);
if (v___x_209_ == 0)
{
v___y_175_ = v___x_209_;
goto v___jp_174_;
}
else
{
lean_object* v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; 
v___x_210_ = lean_unsigned_to_nat(3u);
v___x_211_ = lean_nat_add(v_i_169_, v___x_210_);
v___x_212_ = lean_nat_dec_lt(v___x_211_, v___x_192_);
if (v___x_212_ == 0)
{
lean_dec(v___x_211_);
v___y_175_ = v___x_206_;
goto v___jp_174_;
}
else
{
lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; uint8_t v___x_216_; uint8_t v___x_217_; 
v___x_213_ = lean_unsigned_to_nat(1u);
v___x_214_ = lean_nat_add(v_i_169_, v___x_213_);
v___x_215_ = lean_byte_array_fget(v_b_168_, v___x_214_);
lean_dec(v___x_214_);
v___x_216_ = lean_uint8_land(v___x_215_, v___x_202_);
v___x_217_ = lean_uint8_dec_eq(v___x_216_, v___x_196_);
if (v___x_217_ == 0)
{
lean_dec(v___x_211_);
v___y_175_ = v___x_217_;
goto v___jp_174_;
}
else
{
lean_object* v___x_218_; lean_object* v___x_219_; uint8_t v___x_220_; uint8_t v___x_221_; uint8_t v___x_222_; 
v___x_218_ = lean_unsigned_to_nat(2u);
v___x_219_ = lean_nat_add(v_i_169_, v___x_218_);
v___x_220_ = lean_byte_array_fget(v_b_168_, v___x_219_);
lean_dec(v___x_219_);
v___x_221_ = lean_uint8_land(v___x_220_, v___x_202_);
v___x_222_ = lean_uint8_dec_eq(v___x_221_, v___x_196_);
if (v___x_222_ == 0)
{
lean_dec(v___x_211_);
v___y_175_ = v___x_222_;
goto v___jp_174_;
}
else
{
uint8_t v___x_223_; uint8_t v___x_224_; uint8_t v___x_225_; 
v___x_223_ = lean_byte_array_fget(v_b_168_, v___x_211_);
lean_dec(v___x_211_);
v___x_224_ = lean_uint8_land(v___x_223_, v___x_202_);
v___x_225_ = lean_uint8_dec_eq(v___x_224_, v___x_196_);
if (v___x_225_ == 0)
{
v___y_175_ = v___x_225_;
goto v___jp_174_;
}
else
{
uint8_t v___x_226_; uint8_t v_b_u2080_227_; uint8_t v___x_228_; uint8_t v_b_u2081_229_; uint8_t v_b_u2082_230_; uint8_t v_b_u2083_231_; uint32_t v___x_232_; uint32_t v___x_233_; uint32_t v___x_234_; uint32_t v___x_235_; uint32_t v___x_236_; uint32_t v___x_237_; uint32_t v___x_238_; uint32_t v___x_239_; uint32_t v___x_240_; uint32_t v___x_241_; uint32_t v___x_242_; uint32_t v___x_243_; uint32_t v_r_244_; uint32_t v___x_245_; uint8_t v___x_246_; 
v___x_226_ = 7;
v_b_u2080_227_ = lean_uint8_land(v___x_195_, v___x_226_);
v___x_228_ = 63;
v_b_u2081_229_ = lean_uint8_land(v___x_215_, v___x_228_);
v_b_u2082_230_ = lean_uint8_land(v___x_220_, v___x_228_);
v_b_u2083_231_ = lean_uint8_land(v___x_223_, v___x_228_);
v___x_232_ = lean_uint8_to_uint32(v_b_u2080_227_);
v___x_233_ = 18;
v___x_234_ = lean_uint32_shift_left(v___x_232_, v___x_233_);
v___x_235_ = lean_uint8_to_uint32(v_b_u2081_229_);
v___x_236_ = 12;
v___x_237_ = lean_uint32_shift_left(v___x_235_, v___x_236_);
v___x_238_ = lean_uint32_lor(v___x_234_, v___x_237_);
v___x_239_ = lean_uint8_to_uint32(v_b_u2082_230_);
v___x_240_ = 6;
v___x_241_ = lean_uint32_shift_left(v___x_239_, v___x_240_);
v___x_242_ = lean_uint32_lor(v___x_238_, v___x_241_);
v___x_243_ = lean_uint8_to_uint32(v_b_u2083_231_);
v_r_244_ = lean_uint32_lor(v___x_242_, v___x_243_);
v___x_245_ = 65536;
v___x_246_ = lean_uint32_dec_le(v___x_245_, v_r_244_);
if (v___x_246_ == 0)
{
v___y_175_ = v___x_206_;
goto v___jp_174_;
}
else
{
uint32_t v___x_247_; uint8_t v___x_248_; 
v___x_247_ = 1114111;
v___x_248_ = lean_uint32_dec_le(v_r_244_, v___x_247_);
if (v___x_248_ == 0)
{
v___y_175_ = v___x_206_;
goto v___jp_174_;
}
else
{
v___y_175_ = v___x_225_;
goto v___jp_174_;
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
lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_249_ = lean_unsigned_to_nat(2u);
v___x_250_ = lean_nat_add(v_i_169_, v___x_249_);
v___x_251_ = lean_nat_dec_lt(v___x_250_, v___x_192_);
if (v___x_251_ == 0)
{
lean_dec(v___x_250_);
v___y_175_ = v___x_203_;
goto v___jp_174_;
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; uint8_t v___x_255_; uint8_t v___x_256_; 
v___x_252_ = lean_unsigned_to_nat(1u);
v___x_253_ = lean_nat_add(v_i_169_, v___x_252_);
v___x_254_ = lean_byte_array_fget(v_b_168_, v___x_253_);
lean_dec(v___x_253_);
v___x_255_ = lean_uint8_land(v___x_254_, v___x_202_);
v___x_256_ = lean_uint8_dec_eq(v___x_255_, v___x_196_);
if (v___x_256_ == 0)
{
lean_dec(v___x_250_);
v___y_175_ = v___x_256_;
goto v___jp_174_;
}
else
{
uint8_t v___x_257_; uint8_t v___x_258_; uint8_t v___x_259_; 
v___x_257_ = lean_byte_array_fget(v_b_168_, v___x_250_);
lean_dec(v___x_250_);
v___x_258_ = lean_uint8_land(v___x_257_, v___x_202_);
v___x_259_ = lean_uint8_dec_eq(v___x_258_, v___x_196_);
if (v___x_259_ == 0)
{
v___y_175_ = v___x_259_;
goto v___jp_174_;
}
else
{
uint8_t v___x_260_; uint8_t v_b_u2080_261_; uint8_t v___x_262_; uint8_t v_b_u2081_263_; uint8_t v_b_u2082_264_; uint32_t v___x_265_; uint32_t v___x_266_; uint32_t v___x_267_; uint32_t v___x_268_; uint32_t v___x_269_; uint32_t v___x_270_; uint32_t v___x_271_; uint32_t v___x_272_; uint32_t v_r_273_; uint32_t v___x_274_; uint8_t v___x_275_; 
v___x_260_ = 15;
v_b_u2080_261_ = lean_uint8_land(v___x_195_, v___x_260_);
v___x_262_ = 63;
v_b_u2081_263_ = lean_uint8_land(v___x_254_, v___x_262_);
v_b_u2082_264_ = lean_uint8_land(v___x_257_, v___x_262_);
v___x_265_ = lean_uint8_to_uint32(v_b_u2080_261_);
v___x_266_ = 12;
v___x_267_ = lean_uint32_shift_left(v___x_265_, v___x_266_);
v___x_268_ = lean_uint8_to_uint32(v_b_u2081_263_);
v___x_269_ = 6;
v___x_270_ = lean_uint32_shift_left(v___x_268_, v___x_269_);
v___x_271_ = lean_uint32_lor(v___x_267_, v___x_270_);
v___x_272_ = lean_uint8_to_uint32(v_b_u2082_264_);
v_r_273_ = lean_uint32_lor(v___x_271_, v___x_272_);
v___x_274_ = 2048;
v___x_275_ = lean_uint32_dec_le(v___x_274_, v_r_273_);
if (v___x_275_ == 0)
{
v___y_175_ = v___x_203_;
goto v___jp_174_;
}
else
{
uint32_t v___x_276_; uint8_t v___x_277_; 
v___x_276_ = 55296;
v___x_277_ = lean_uint32_dec_lt(v_r_273_, v___x_276_);
if (v___x_277_ == 0)
{
uint32_t v___x_278_; uint8_t v___x_279_; 
v___x_278_ = 57343;
v___x_279_ = lean_uint32_dec_lt(v___x_278_, v_r_273_);
if (v___x_279_ == 0)
{
v___y_175_ = v___x_203_;
goto v___jp_174_;
}
else
{
v___y_175_ = v___x_259_;
goto v___jp_174_;
}
}
else
{
v___y_175_ = v___x_259_;
goto v___jp_174_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_280_ = lean_unsigned_to_nat(1u);
v___x_281_ = lean_nat_add(v_i_169_, v___x_280_);
v___x_282_ = lean_nat_dec_lt(v___x_281_, v___x_192_);
if (v___x_282_ == 0)
{
lean_dec(v___x_281_);
v___y_175_ = v___x_199_;
goto v___jp_174_;
}
else
{
uint8_t v___x_283_; uint8_t v___x_284_; uint8_t v___x_285_; 
v___x_283_ = lean_byte_array_fget(v_b_168_, v___x_281_);
lean_dec(v___x_281_);
v___x_284_ = lean_uint8_land(v___x_283_, v___x_202_);
v___x_285_ = lean_uint8_dec_eq(v___x_284_, v___x_196_);
if (v___x_285_ == 0)
{
v___y_175_ = v___x_285_;
goto v___jp_174_;
}
else
{
uint8_t v___x_286_; uint8_t v_b_u2080_287_; uint8_t v___x_288_; uint8_t v_b_u2081_289_; uint32_t v___x_290_; uint32_t v___x_291_; uint32_t v___x_292_; uint32_t v___x_293_; uint32_t v_r_294_; uint32_t v___x_295_; uint8_t v___x_296_; 
v___x_286_ = 31;
v_b_u2080_287_ = lean_uint8_land(v___x_195_, v___x_286_);
v___x_288_ = 63;
v_b_u2081_289_ = lean_uint8_land(v___x_283_, v___x_288_);
v___x_290_ = lean_uint8_to_uint32(v_b_u2080_287_);
v___x_291_ = 6;
v___x_292_ = lean_uint32_shift_left(v___x_290_, v___x_291_);
v___x_293_ = lean_uint8_to_uint32(v_b_u2081_289_);
v_r_294_ = lean_uint32_lor(v___x_292_, v___x_293_);
v___x_295_ = 128;
v___x_296_ = lean_uint32_dec_le(v___x_295_, v_r_294_);
v___y_175_ = v___x_296_;
goto v___jp_174_;
}
}
}
}
else
{
v___y_175_ = v___x_199_;
goto v___jp_174_;
}
}
}
v___jp_170_:
{
lean_object* v___x_172_; 
v___x_172_ = lean_nat_add(v_i_169_, v___y_171_);
lean_dec(v_i_169_);
v_i_169_ = v___x_172_;
goto _start;
}
v___jp_174_:
{
if (v___y_175_ == 0)
{
lean_dec(v_i_169_);
return v___y_175_;
}
else
{
uint8_t v___x_176_; uint8_t v___x_177_; uint8_t v___x_178_; uint8_t v___x_179_; uint8_t v___x_180_; 
v___x_176_ = lean_byte_array_fget(v_b_168_, v_i_169_);
v___x_177_ = 128;
v___x_178_ = lean_uint8_land(v___x_176_, v___x_177_);
v___x_179_ = 0;
v___x_180_ = lean_uint8_dec_eq(v___x_178_, v___x_179_);
if (v___x_180_ == 0)
{
uint8_t v___x_181_; uint8_t v___x_182_; uint8_t v___x_183_; uint8_t v___x_184_; 
v___x_181_ = 224;
v___x_182_ = lean_uint8_land(v___x_176_, v___x_181_);
v___x_183_ = 192;
v___x_184_ = lean_uint8_dec_eq(v___x_182_, v___x_183_);
if (v___x_184_ == 0)
{
uint8_t v___x_185_; uint8_t v___x_186_; uint8_t v___x_187_; 
v___x_185_ = 240;
v___x_186_ = lean_uint8_land(v___x_176_, v___x_185_);
v___x_187_ = lean_uint8_dec_eq(v___x_186_, v___x_181_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; 
v___x_188_ = lean_unsigned_to_nat(4u);
v___y_171_ = v___x_188_;
goto v___jp_170_;
}
else
{
lean_object* v___x_189_; 
v___x_189_ = lean_unsigned_to_nat(3u);
v___y_171_ = v___x_189_;
goto v___jp_170_;
}
}
else
{
lean_object* v___x_190_; 
v___x_190_ = lean_unsigned_to_nat(2u);
v___y_171_ = v___x_190_;
goto v___jp_170_;
}
}
else
{
lean_object* v___x_191_; 
v___x_191_ = lean_unsigned_to_nat(1u);
v___y_171_ = v___x_191_;
goto v___jp_170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8_go___redArg___boxed(lean_object* v_b_297_, lean_object* v_i_298_){
_start:
{
uint8_t v_res_299_; lean_object* v_r_300_; 
v_res_299_ = l_ByteArray_validateUTF8_go___redArg(v_b_297_, v_i_298_);
lean_dec_ref(v_b_297_);
v_r_300_ = lean_box(v_res_299_);
return v_r_300_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_validateUTF8_go(lean_object* v_b_301_, lean_object* v_i_302_, lean_object* v_hi_303_){
_start:
{
uint8_t v___x_304_; 
v___x_304_ = l_ByteArray_validateUTF8_go___redArg(v_b_301_, v_i_302_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8_go___boxed(lean_object* v_b_305_, lean_object* v_i_306_, lean_object* v_hi_307_){
_start:
{
uint8_t v_res_308_; lean_object* v_r_309_; 
v_res_308_ = l_ByteArray_validateUTF8_go(v_b_305_, v_i_306_, v_hi_307_);
lean_dec_ref(v_b_305_);
v_r_309_ = lean_box(v_res_308_);
return v_r_309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___redArg(uint8_t v_x_310_, lean_object* v_h__1_311_, lean_object* v_h__2_312_){
_start:
{
if (v_x_310_ == 0)
{
lean_object* v___x_313_; 
lean_dec(v_h__2_312_);
v___x_313_ = lean_apply_1(v_h__1_311_, lean_box(0));
return v___x_313_;
}
else
{
lean_object* v___x_314_; 
lean_dec(v_h__1_311_);
v___x_314_ = lean_apply_1(v_h__2_312_, lean_box(0));
return v___x_314_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___redArg___boxed(lean_object* v_x_315_, lean_object* v_h__1_316_, lean_object* v_h__2_317_){
_start:
{
uint8_t v_x_26__boxed_318_; lean_object* v_res_319_; 
v_x_26__boxed_318_ = lean_unbox(v_x_315_);
v_res_319_ = l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___redArg(v_x_26__boxed_318_, v_h__1_316_, v_h__2_317_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter(lean_object* v_motive_320_, uint8_t v_x_321_, lean_object* v_h__1_322_, lean_object* v_h__2_323_){
_start:
{
if (v_x_321_ == 0)
{
lean_object* v___x_324_; 
lean_dec(v_h__2_323_);
v___x_324_ = lean_apply_1(v_h__1_322_, lean_box(0));
return v___x_324_;
}
else
{
lean_object* v___x_325_; 
lean_dec(v_h__1_322_);
v___x_325_ = lean_apply_1(v_h__2_323_, lean_box(0));
return v___x_325_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter___boxed(lean_object* v_motive_326_, lean_object* v_x_327_, lean_object* v_h__1_328_, lean_object* v_h__2_329_){
_start:
{
uint8_t v_x_33__boxed_330_; lean_object* v_res_331_; 
v_x_33__boxed_330_ = lean_unbox(v_x_327_);
v_res_331_ = l___private_Init_Data_String_Basic_0__ByteArray_validateUTF8_go_match__1_splitter(v_motive_326_, v_x_33__boxed_330_, v_h__1_328_, v_h__2_329_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8___boxed(lean_object* v_b_333_){
_start:
{
uint8_t v_res_334_; lean_object* v_r_335_; 
v_res_334_ = lean_string_validate_utf8(v_b_333_);
lean_dec_ref(v_b_333_);
v_r_335_ = lean_box(v_res_334_);
return v_r_335_;
}
}
LEAN_EXPORT uint8_t l_instDecidableIsValidUTF8(lean_object* v_b_336_){
_start:
{
uint8_t v___x_337_; 
v___x_337_ = lean_string_validate_utf8(v_b_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_instDecidableIsValidUTF8___boxed(lean_object* v_b_338_){
_start:
{
uint8_t v_res_339_; lean_object* v_r_340_; 
v_res_339_ = l_instDecidableIsValidUTF8(v_b_338_);
lean_dec_ref(v_b_338_);
v_r_340_ = lean_box(v_res_339_);
return v_r_340_;
}
}
LEAN_EXPORT lean_object* l_String_fromUTF8_x3f(lean_object* v_a_341_){
_start:
{
uint8_t v___x_342_; 
v___x_342_ = lean_string_validate_utf8(v_a_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; 
lean_dec_ref(v_a_341_);
v___x_343_ = lean_box(0);
return v___x_343_;
}
else
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = lean_string_from_utf8_unchecked(v_a_341_);
v___x_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
return v___x_345_;
}
}
}
static lean_object* _init_l_String_fromUTF8_x21___closed__4(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_350_ = ((lean_object*)(l_String_fromUTF8_x21___closed__3));
v___x_351_ = lean_unsigned_to_nat(46u);
v___x_352_ = lean_unsigned_to_nat(193u);
v___x_353_ = ((lean_object*)(l_String_fromUTF8_x21___closed__2));
v___x_354_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_355_ = l_mkPanicMessageWithDecl(v___x_354_, v___x_353_, v___x_352_, v___x_351_, v___x_350_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_String_fromUTF8_x21(lean_object* v_a_356_){
_start:
{
uint8_t v___x_357_; 
v___x_357_ = lean_string_validate_utf8(v_a_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
lean_dec_ref(v_a_356_);
v___x_358_ = ((lean_object*)(l_String_fromUTF8_x21___closed__0));
v___x_359_ = lean_obj_once(&l_String_fromUTF8_x21___closed__4, &l_String_fromUTF8_x21___closed__4_once, _init_l_String_fromUTF8_x21___closed__4);
v___x_360_ = l_panic___redArg(v___x_358_, v___x_359_);
return v___x_360_;
}
else
{
lean_object* v___x_361_; 
v___x_361_ = lean_string_from_utf8_unchecked(v_a_356_);
return v___x_361_;
}
}
}
LEAN_EXPORT lean_object* l_String_Internal_toArray(lean_object* v_b_362_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v_val_367_; 
v___x_363_ = lean_string_to_utf8(v_b_362_);
v___x_364_ = lean_unsigned_to_nat(0u);
v___x_365_ = ((lean_object*)(l_ByteArray_utf8Decode_x3f___closed__0));
v___x_366_ = l_ByteArray_utf8Decode_x3f_go___redArg(v___x_363_, v___x_364_, v___x_365_);
lean_dec_ref(v___x_363_);
v_val_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_val_367_);
lean_dec(v___x_366_);
return v_val_367_;
}
}
LEAN_EXPORT lean_object* l_String_toList___boxed(lean_object* v_s_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = lean_string_data(v_s_369_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_String_data___boxed(lean_object* v_b_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = lean_string_data(v_b_372_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_String_length___boxed(lean_object* v_b_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = lean_string_length(v_b_375_);
lean_dec_ref(v_b_375_);
return v_res_376_;
}
}
static lean_object* _init_l_String_instLT(void){
_start:
{
lean_object* v___x_377_; 
v___x_377_ = lean_box(0);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_String_decidableLT___boxed(lean_object* v_s_u2081_380_, lean_object* v_s_u2082_381_){
_start:
{
uint8_t v_res_382_; lean_object* v_r_383_; 
v_res_382_ = lean_string_dec_lt(v_s_u2081_380_, v_s_u2082_381_);
lean_dec_ref(v_s_u2082_381_);
lean_dec_ref(v_s_u2081_380_);
v_r_383_ = lean_box(v_res_382_);
return v_r_383_;
}
}
static lean_object* _init_l_String_instLE(void){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = lean_box(0);
return v___x_384_;
}
}
LEAN_EXPORT uint8_t l_String_decLE(lean_object* v_s_u2081_385_, lean_object* v_s_u2082_386_){
_start:
{
uint8_t v___x_387_; 
v___x_387_ = lean_string_dec_lt(v_s_u2082_386_, v_s_u2081_385_);
if (v___x_387_ == 0)
{
uint8_t v___x_388_; 
v___x_388_ = 1;
return v___x_388_;
}
else
{
uint8_t v___x_389_; 
v___x_389_ = 0;
return v___x_389_;
}
}
}
LEAN_EXPORT lean_object* l_String_decLE___boxed(lean_object* v_s_u2081_390_, lean_object* v_s_u2082_391_){
_start:
{
uint8_t v_res_392_; lean_object* v_r_393_; 
v_res_392_ = l_String_decLE(v_s_u2081_390_, v_s_u2082_391_);
lean_dec_ref(v_s_u2082_391_);
lean_dec_ref(v_s_u2081_390_);
v_r_393_ = lean_box(v_res_392_);
return v_r_393_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_isValid___boxed(lean_object* v_s_396_, lean_object* v_p_397_){
_start:
{
uint8_t v_res_398_; lean_object* v_r_399_; 
v_res_398_ = lean_string_is_valid_pos(v_s_396_, v_p_397_);
lean_dec(v_p_397_);
lean_dec_ref(v_s_396_);
v_r_399_ = lean_box(v_res_398_);
return v_r_399_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableIsValid(lean_object* v_s_400_, lean_object* v_p_401_){
_start:
{
uint8_t v___x_402_; 
v___x_402_ = lean_string_is_valid_pos(v_s_400_, v_p_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableIsValid___boxed(lean_object* v_s_403_, lean_object* v_p_404_){
_start:
{
uint8_t v_res_405_; lean_object* v_r_406_; 
v_res_405_ = l_String_instDecidableIsValid(v_s_403_, v_p_404_);
lean_dec(v_p_404_);
lean_dec_ref(v_s_403_);
v_r_406_ = lean_box(v_res_405_);
return v_r_406_;
}
}
LEAN_EXPORT lean_object* l_String_extract___boxed(lean_object* v_s_410_, lean_object* v_b_411_, lean_object* v_e_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = lean_string_utf8_extract(v_s_410_, v_b_411_, v_e_412_);
lean_dec(v_e_412_);
lean_dec(v_b_411_);
lean_dec_ref(v_s_410_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_extract(lean_object* v_s_414_, lean_object* v_b_415_, lean_object* v_e_416_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = lean_string_utf8_extract(v_s_414_, v_b_415_, v_e_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_extract___boxed(lean_object* v_s_418_, lean_object* v_b_419_, lean_object* v_e_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_String_Pos_extract(v_s_418_, v_b_419_, v_e_420_);
lean_dec(v_e_420_);
lean_dec(v_b_419_);
lean_dec_ref(v_s_418_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_copy(lean_object* v_s_422_){
_start:
{
lean_object* v_str_423_; lean_object* v_startInclusive_424_; lean_object* v_endExclusive_425_; lean_object* v___x_426_; 
v_str_423_ = lean_ctor_get(v_s_422_, 0);
v_startInclusive_424_ = lean_ctor_get(v_s_422_, 1);
v_endExclusive_425_ = lean_ctor_get(v_s_422_, 2);
v___x_426_ = lean_string_utf8_extract(v_str_423_, v_startInclusive_424_, v_endExclusive_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_copy___boxed(lean_object* v_s_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_String_Slice_copy(v_s_427_);
lean_dec_ref(v_s_427_);
return v_res_428_;
}
}
LEAN_EXPORT uint8_t l_String_Pos_Raw_isValidForSlice(lean_object* v_s_429_, lean_object* v_p_430_){
_start:
{
lean_object* v_str_431_; lean_object* v_startInclusive_432_; lean_object* v_endExclusive_433_; lean_object* v___x_434_; uint8_t v___x_435_; 
v_str_431_ = lean_ctor_get(v_s_429_, 0);
v_startInclusive_432_ = lean_ctor_get(v_s_429_, 1);
v_endExclusive_433_ = lean_ctor_get(v_s_429_, 2);
v___x_434_ = lean_nat_sub(v_endExclusive_433_, v_startInclusive_432_);
v___x_435_ = lean_nat_dec_lt(v_p_430_, v___x_434_);
if (v___x_435_ == 0)
{
uint8_t v___x_436_; 
v___x_436_ = lean_nat_dec_eq(v_p_430_, v___x_434_);
lean_dec(v___x_434_);
return v___x_436_;
}
else
{
lean_object* v___x_437_; uint8_t v___x_438_; uint8_t v___x_439_; uint8_t v___x_440_; uint8_t v___x_441_; uint8_t v___x_442_; 
lean_dec(v___x_434_);
v___x_437_ = lean_nat_add(v_startInclusive_432_, v_p_430_);
v___x_438_ = lean_string_get_byte_fast(v_str_431_, v___x_437_);
v___x_439_ = 128;
v___x_440_ = lean_uint8_land(v___x_438_, v___x_439_);
v___x_441_ = 0;
v___x_442_ = lean_uint8_dec_eq(v___x_440_, v___x_441_);
if (v___x_442_ == 0)
{
uint8_t v___x_443_; uint8_t v___x_444_; uint8_t v___x_445_; uint8_t v___x_446_; 
v___x_443_ = 224;
v___x_444_ = lean_uint8_land(v___x_438_, v___x_443_);
v___x_445_ = 192;
v___x_446_ = lean_uint8_dec_eq(v___x_444_, v___x_445_);
if (v___x_446_ == 0)
{
uint8_t v___x_447_; uint8_t v___x_448_; uint8_t v___x_449_; 
v___x_447_ = 240;
v___x_448_ = lean_uint8_land(v___x_438_, v___x_447_);
v___x_449_ = lean_uint8_dec_eq(v___x_448_, v___x_443_);
if (v___x_449_ == 0)
{
uint8_t v___x_450_; uint8_t v___x_451_; uint8_t v___x_452_; 
v___x_450_ = 248;
v___x_451_ = lean_uint8_land(v___x_438_, v___x_450_);
v___x_452_ = lean_uint8_dec_eq(v___x_451_, v___x_447_);
return v___x_452_;
}
else
{
return v___x_449_;
}
}
else
{
return v___x_446_;
}
}
else
{
return v___x_442_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_isValidForSlice___boxed(lean_object* v_s_453_, lean_object* v_p_454_){
_start:
{
uint8_t v_res_455_; lean_object* v_r_456_; 
v_res_455_ = l_String_Pos_Raw_isValidForSlice(v_s_453_, v_p_454_);
lean_dec(v_p_454_);
lean_dec_ref(v_s_453_);
v_r_456_ = lean_box(v_res_455_);
return v_r_456_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableIsValidForSlice(lean_object* v_s_457_, lean_object* v_p_458_){
_start:
{
uint8_t v___x_459_; 
v___x_459_ = l_String_Pos_Raw_isValidForSlice(v_s_457_, v_p_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableIsValidForSlice___boxed(lean_object* v_s_460_, lean_object* v_p_461_){
_start:
{
uint8_t v_res_462_; lean_object* v_r_463_; 
v_res_462_ = l_String_instDecidableIsValidForSlice(v_s_460_, v_p_461_);
lean_dec(v_p_461_);
lean_dec_ref(v_s_460_);
v_r_463_ = lean_box(v_res_462_);
return v_r_463_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_str(lean_object* v_s_464_, lean_object* v_pos_465_){
_start:
{
lean_object* v_startInclusive_466_; lean_object* v___x_467_; 
v_startInclusive_466_ = lean_ctor_get(v_s_464_, 1);
v___x_467_ = lean_nat_add(v_startInclusive_466_, v_pos_465_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_str___boxed(lean_object* v_s_468_, lean_object* v_pos_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_String_Slice_Pos_str(v_s_468_, v_pos_469_);
lean_dec(v_pos_469_);
lean_dec_ref(v_s_468_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___redArg(lean_object* v_s_471_, lean_object* v_pos_472_){
_start:
{
lean_object* v_startInclusive_473_; lean_object* v___x_474_; 
v_startInclusive_473_ = lean_ctor_get(v_s_471_, 1);
v___x_474_ = lean_nat_sub(v_pos_472_, v_startInclusive_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___redArg___boxed(lean_object* v_s_475_, lean_object* v_pos_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_String_Slice_Pos_ofStr___redArg(v_s_475_, v_pos_476_);
lean_dec(v_pos_476_);
lean_dec_ref(v_s_475_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr(lean_object* v_s_478_, lean_object* v_pos_479_, lean_object* v_h_u2081_480_, lean_object* v_h_u2082_481_){
_start:
{
lean_object* v_startInclusive_482_; lean_object* v___x_483_; 
v_startInclusive_482_ = lean_ctor_get(v_s_478_, 1);
v___x_483_ = lean_nat_sub(v_pos_479_, v_startInclusive_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofStr___boxed(lean_object* v_s_484_, lean_object* v_pos_485_, lean_object* v_h_u2081_486_, lean_object* v_h_u2082_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_String_Slice_Pos_ofStr(v_s_484_, v_pos_485_, v_h_u2081_486_, v_h_u2082_487_);
lean_dec(v_pos_485_);
lean_dec_ref(v_s_484_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_sliceFrom(lean_object* v_s_489_, lean_object* v_pos_490_){
_start:
{
lean_object* v_str_491_; lean_object* v_startInclusive_492_; lean_object* v_endExclusive_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_501_; 
v_str_491_ = lean_ctor_get(v_s_489_, 0);
v_startInclusive_492_ = lean_ctor_get(v_s_489_, 1);
v_endExclusive_493_ = lean_ctor_get(v_s_489_, 2);
v_isSharedCheck_501_ = !lean_is_exclusive(v_s_489_);
if (v_isSharedCheck_501_ == 0)
{
v___x_495_ = v_s_489_;
v_isShared_496_ = v_isSharedCheck_501_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_endExclusive_493_);
lean_inc(v_startInclusive_492_);
lean_inc(v_str_491_);
lean_dec(v_s_489_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_501_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_497_; lean_object* v___x_499_; 
v___x_497_ = lean_nat_add(v_startInclusive_492_, v_pos_490_);
lean_dec(v_startInclusive_492_);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 1, v___x_497_);
v___x_499_ = v___x_495_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_str_491_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v___x_497_);
lean_ctor_set(v_reuseFailAlloc_500_, 2, v_endExclusive_493_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_sliceFrom___boxed(lean_object* v_s_502_, lean_object* v_pos_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_String_Slice_sliceFrom(v_s_502_, v_pos_503_);
lean_dec(v_pos_503_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStart(lean_object* v_s_505_, lean_object* v_pos_506_){
_start:
{
lean_object* v_str_507_; lean_object* v_startInclusive_508_; lean_object* v_endExclusive_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_517_; 
v_str_507_ = lean_ctor_get(v_s_505_, 0);
v_startInclusive_508_ = lean_ctor_get(v_s_505_, 1);
v_endExclusive_509_ = lean_ctor_get(v_s_505_, 2);
v_isSharedCheck_517_ = !lean_is_exclusive(v_s_505_);
if (v_isSharedCheck_517_ == 0)
{
v___x_511_ = v_s_505_;
v_isShared_512_ = v_isSharedCheck_517_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_endExclusive_509_);
lean_inc(v_startInclusive_508_);
lean_inc(v_str_507_);
lean_dec(v_s_505_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_517_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_513_; lean_object* v___x_515_; 
v___x_513_ = lean_nat_add(v_startInclusive_508_, v_pos_506_);
lean_dec(v_startInclusive_508_);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 1, v___x_513_);
v___x_515_ = v___x_511_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_str_507_);
lean_ctor_set(v_reuseFailAlloc_516_, 1, v___x_513_);
lean_ctor_set(v_reuseFailAlloc_516_, 2, v_endExclusive_509_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStart___boxed(lean_object* v_s_518_, lean_object* v_pos_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_String_Slice_replaceStart(v_s_518_, v_pos_519_);
lean_dec(v_pos_519_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_sliceTo(lean_object* v_s_521_, lean_object* v_pos_522_){
_start:
{
lean_object* v_str_523_; lean_object* v_startInclusive_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_532_; 
v_str_523_ = lean_ctor_get(v_s_521_, 0);
v_startInclusive_524_ = lean_ctor_get(v_s_521_, 1);
v_isSharedCheck_532_ = !lean_is_exclusive(v_s_521_);
if (v_isSharedCheck_532_ == 0)
{
lean_object* v_unused_533_; 
v_unused_533_ = lean_ctor_get(v_s_521_, 2);
lean_dec(v_unused_533_);
v___x_526_ = v_s_521_;
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_startInclusive_524_);
lean_inc(v_str_523_);
lean_dec(v_s_521_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_528_ = lean_nat_add(v_startInclusive_524_, v_pos_522_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 2, v___x_528_);
v___x_530_ = v___x_526_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_str_523_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_startInclusive_524_);
lean_ctor_set(v_reuseFailAlloc_531_, 2, v___x_528_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_sliceTo___boxed(lean_object* v_s_534_, lean_object* v_pos_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_String_Slice_sliceTo(v_s_534_, v_pos_535_);
lean_dec(v_pos_535_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceEnd(lean_object* v_s_537_, lean_object* v_pos_538_){
_start:
{
lean_object* v_str_539_; lean_object* v_startInclusive_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_548_; 
v_str_539_ = lean_ctor_get(v_s_537_, 0);
v_startInclusive_540_ = lean_ctor_get(v_s_537_, 1);
v_isSharedCheck_548_ = !lean_is_exclusive(v_s_537_);
if (v_isSharedCheck_548_ == 0)
{
lean_object* v_unused_549_; 
v_unused_549_ = lean_ctor_get(v_s_537_, 2);
lean_dec(v_unused_549_);
v___x_542_ = v_s_537_;
v_isShared_543_ = v_isSharedCheck_548_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_startInclusive_540_);
lean_inc(v_str_539_);
lean_dec(v_s_537_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_548_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_544_; lean_object* v___x_546_; 
v___x_544_ = lean_nat_add(v_startInclusive_540_, v_pos_538_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 2, v___x_544_);
v___x_546_ = v___x_542_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_str_539_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v_startInclusive_540_);
lean_ctor_set(v_reuseFailAlloc_547_, 2, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceEnd___boxed(lean_object* v_s_550_, lean_object* v_pos_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_String_Slice_replaceEnd(v_s_550_, v_pos_551_);
lean_dec(v_pos_551_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice___redArg(lean_object* v_s_553_, lean_object* v_newStart_554_, lean_object* v_newEnd_555_){
_start:
{
lean_object* v_str_556_; lean_object* v_startInclusive_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_566_; 
v_str_556_ = lean_ctor_get(v_s_553_, 0);
v_startInclusive_557_ = lean_ctor_get(v_s_553_, 1);
v_isSharedCheck_566_ = !lean_is_exclusive(v_s_553_);
if (v_isSharedCheck_566_ == 0)
{
lean_object* v_unused_567_; 
v_unused_567_ = lean_ctor_get(v_s_553_, 2);
lean_dec(v_unused_567_);
v___x_559_ = v_s_553_;
v_isShared_560_ = v_isSharedCheck_566_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_startInclusive_557_);
lean_inc(v_str_556_);
lean_dec(v_s_553_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_566_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_564_; 
v___x_561_ = lean_nat_add(v_startInclusive_557_, v_newStart_554_);
v___x_562_ = lean_nat_add(v_startInclusive_557_, v_newEnd_555_);
lean_dec(v_startInclusive_557_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 2, v___x_562_);
lean_ctor_set(v___x_559_, 1, v___x_561_);
v___x_564_ = v___x_559_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_str_556_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v___x_561_);
lean_ctor_set(v_reuseFailAlloc_565_, 2, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice___redArg___boxed(lean_object* v_s_568_, lean_object* v_newStart_569_, lean_object* v_newEnd_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_String_Slice_slice___redArg(v_s_568_, v_newStart_569_, v_newEnd_570_);
lean_dec(v_newEnd_570_);
lean_dec(v_newStart_569_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice(lean_object* v_s_572_, lean_object* v_newStart_573_, lean_object* v_newEnd_574_, lean_object* v_h_575_){
_start:
{
lean_object* v_str_576_; lean_object* v_startInclusive_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_586_; 
v_str_576_ = lean_ctor_get(v_s_572_, 0);
v_startInclusive_577_ = lean_ctor_get(v_s_572_, 1);
v_isSharedCheck_586_ = !lean_is_exclusive(v_s_572_);
if (v_isSharedCheck_586_ == 0)
{
lean_object* v_unused_587_; 
v_unused_587_ = lean_ctor_get(v_s_572_, 2);
lean_dec(v_unused_587_);
v___x_579_ = v_s_572_;
v_isShared_580_ = v_isSharedCheck_586_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_startInclusive_577_);
lean_inc(v_str_576_);
lean_dec(v_s_572_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_586_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
v___x_581_ = lean_nat_add(v_startInclusive_577_, v_newStart_573_);
v___x_582_ = lean_nat_add(v_startInclusive_577_, v_newEnd_574_);
lean_dec(v_startInclusive_577_);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 2, v___x_582_);
lean_ctor_set(v___x_579_, 1, v___x_581_);
v___x_584_ = v___x_579_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_str_576_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v___x_581_);
lean_ctor_set(v_reuseFailAlloc_585_, 2, v___x_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice___boxed(lean_object* v_s_588_, lean_object* v_newStart_589_, lean_object* v_newEnd_590_, lean_object* v_h_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_String_Slice_slice(v_s_588_, v_newStart_589_, v_newEnd_590_, v_h_591_);
lean_dec(v_newEnd_590_);
lean_dec(v_newStart_589_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___redArg(lean_object* v_s_593_, lean_object* v_newStart_594_, lean_object* v_newEnd_595_){
_start:
{
lean_object* v_str_596_; lean_object* v_startInclusive_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_606_; 
v_str_596_ = lean_ctor_get(v_s_593_, 0);
v_startInclusive_597_ = lean_ctor_get(v_s_593_, 1);
v_isSharedCheck_606_ = !lean_is_exclusive(v_s_593_);
if (v_isSharedCheck_606_ == 0)
{
lean_object* v_unused_607_; 
v_unused_607_ = lean_ctor_get(v_s_593_, 2);
lean_dec(v_unused_607_);
v___x_599_ = v_s_593_;
v_isShared_600_ = v_isSharedCheck_606_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_startInclusive_597_);
lean_inc(v_str_596_);
lean_dec(v_s_593_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_606_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_601_ = lean_nat_add(v_startInclusive_597_, v_newStart_594_);
v___x_602_ = lean_nat_add(v_startInclusive_597_, v_newEnd_595_);
lean_dec(v_startInclusive_597_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 2, v___x_602_);
lean_ctor_set(v___x_599_, 1, v___x_601_);
v___x_604_ = v___x_599_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_str_596_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v___x_601_);
lean_ctor_set(v_reuseFailAlloc_605_, 2, v___x_602_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___redArg___boxed(lean_object* v_s_608_, lean_object* v_newStart_609_, lean_object* v_newEnd_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_String_Slice_replaceStartEnd___redArg(v_s_608_, v_newStart_609_, v_newEnd_610_);
lean_dec(v_newEnd_610_);
lean_dec(v_newStart_609_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd(lean_object* v_s_612_, lean_object* v_newStart_613_, lean_object* v_newEnd_614_, lean_object* v_h_615_){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_String_Slice_replaceStartEnd___redArg(v_s_612_, v_newStart_613_, v_newEnd_614_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd___boxed(lean_object* v_s_617_, lean_object* v_newStart_618_, lean_object* v_newEnd_619_, lean_object* v_h_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_String_Slice_replaceStartEnd(v_s_617_, v_newStart_618_, v_newEnd_619_, v_h_620_);
lean_dec(v_newEnd_619_);
lean_dec(v_newStart_618_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice_x3f(lean_object* v_s_622_, lean_object* v_newStart_623_, lean_object* v_newEnd_624_){
_start:
{
uint8_t v___x_625_; 
v___x_625_ = lean_nat_dec_le(v_newStart_623_, v_newEnd_624_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; 
lean_dec_ref(v_s_622_);
v___x_626_ = lean_box(0);
return v___x_626_;
}
else
{
lean_object* v_str_627_; lean_object* v_startInclusive_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_638_; 
v_str_627_ = lean_ctor_get(v_s_622_, 0);
v_startInclusive_628_ = lean_ctor_get(v_s_622_, 1);
v_isSharedCheck_638_ = !lean_is_exclusive(v_s_622_);
if (v_isSharedCheck_638_ == 0)
{
lean_object* v_unused_639_; 
v_unused_639_ = lean_ctor_get(v_s_622_, 2);
lean_dec(v_unused_639_);
v___x_630_ = v_s_622_;
v_isShared_631_ = v_isSharedCheck_638_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_startInclusive_628_);
lean_inc(v_str_627_);
lean_dec(v_s_622_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_638_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_635_; 
v___x_632_ = lean_nat_add(v_startInclusive_628_, v_newStart_623_);
v___x_633_ = lean_nat_add(v_startInclusive_628_, v_newEnd_624_);
lean_dec(v_startInclusive_628_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 2, v___x_633_);
lean_ctor_set(v___x_630_, 1, v___x_632_);
v___x_635_ = v___x_630_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_str_627_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_637_, 2, v___x_633_);
v___x_635_ = v_reuseFailAlloc_637_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_636_; 
v___x_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
return v___x_636_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice_x3f___boxed(lean_object* v_s_640_, lean_object* v_newStart_641_, lean_object* v_newEnd_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_String_Slice_slice_x3f(v_s_640_, v_newStart_641_, v_newEnd_642_);
lean_dec(v_newEnd_642_);
lean_dec(v_newStart_641_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_slice_x21_spec__0(lean_object* v_msg_644_){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = l_String_instInhabitedSlice;
v___x_646_ = lean_panic_fn(v___x_645_, v_msg_644_);
return v___x_646_;
}
}
static lean_object* _init_l_String_Slice_slice_x21___closed__2(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_649_ = ((lean_object*)(l_String_Slice_slice_x21___closed__1));
v___x_650_ = lean_unsigned_to_nat(4u);
v___x_651_ = lean_unsigned_to_nat(1122u);
v___x_652_ = ((lean_object*)(l_String_Slice_slice_x21___closed__0));
v___x_653_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_654_ = l_mkPanicMessageWithDecl(v___x_653_, v___x_652_, v___x_651_, v___x_650_, v___x_649_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice_x21(lean_object* v_s_655_, lean_object* v_newStart_656_, lean_object* v_newEnd_657_){
_start:
{
uint8_t v___x_658_; 
v___x_658_ = lean_nat_dec_le(v_newStart_656_, v_newEnd_657_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; lean_object* v___x_660_; 
lean_dec_ref(v_s_655_);
v___x_659_ = lean_obj_once(&l_String_Slice_slice_x21___closed__2, &l_String_Slice_slice_x21___closed__2_once, _init_l_String_Slice_slice_x21___closed__2);
v___x_660_ = l_panic___at___00String_Slice_slice_x21_spec__0(v___x_659_);
return v___x_660_;
}
else
{
lean_object* v_str_661_; lean_object* v_startInclusive_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_671_; 
v_str_661_ = lean_ctor_get(v_s_655_, 0);
v_startInclusive_662_ = lean_ctor_get(v_s_655_, 1);
v_isSharedCheck_671_ = !lean_is_exclusive(v_s_655_);
if (v_isSharedCheck_671_ == 0)
{
lean_object* v_unused_672_; 
v_unused_672_ = lean_ctor_get(v_s_655_, 2);
lean_dec(v_unused_672_);
v___x_664_ = v_s_655_;
v_isShared_665_ = v_isSharedCheck_671_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_startInclusive_662_);
lean_inc(v_str_661_);
lean_dec(v_s_655_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_671_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_669_; 
v___x_666_ = lean_nat_add(v_startInclusive_662_, v_newStart_656_);
v___x_667_ = lean_nat_add(v_startInclusive_662_, v_newEnd_657_);
lean_dec(v_startInclusive_662_);
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 2, v___x_667_);
lean_ctor_set(v___x_664_, 1, v___x_666_);
v___x_669_ = v___x_664_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_str_661_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_670_, 2, v___x_667_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_slice_x21___boxed(lean_object* v_s_673_, lean_object* v_newStart_674_, lean_object* v_newEnd_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_String_Slice_slice_x21(v_s_673_, v_newStart_674_, v_newEnd_675_);
lean_dec(v_newEnd_675_);
lean_dec(v_newStart_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd_x21(lean_object* v_s_677_, lean_object* v_newStart_678_, lean_object* v_newEnd_679_){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = l_String_Slice_slice_x21(v_s_677_, v_newStart_678_, v_newEnd_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replaceStartEnd_x21___boxed(lean_object* v_s_681_, lean_object* v_newStart_682_, lean_object* v_newEnd_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_String_Slice_replaceStartEnd_x21(v_s_681_, v_newStart_682_, v_newEnd_683_);
lean_dec(v_newEnd_683_);
lean_dec(v_newStart_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_String_decodeChar___boxed(lean_object* v_s_688_, lean_object* v_byteIdx_689_, lean_object* v_h_690_){
_start:
{
uint32_t v_res_691_; lean_object* v_r_692_; 
v_res_691_ = lean_string_utf8_get_fast(v_s_688_, v_byteIdx_689_);
lean_dec(v_byteIdx_689_);
lean_dec_ref(v_s_688_);
v_r_692_ = lean_box_uint32(v_res_691_);
return v_r_692_;
}
}
LEAN_EXPORT uint32_t l_String_Slice_Pos_get___redArg(lean_object* v_s_693_, lean_object* v_pos_694_){
_start:
{
lean_object* v_str_695_; lean_object* v_startInclusive_696_; lean_object* v___x_697_; uint32_t v___x_698_; 
v_str_695_ = lean_ctor_get(v_s_693_, 0);
v_startInclusive_696_ = lean_ctor_get(v_s_693_, 1);
v___x_697_ = lean_nat_add(v_startInclusive_696_, v_pos_694_);
v___x_698_ = lean_string_utf8_get_fast(v_str_695_, v___x_697_);
lean_dec(v___x_697_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_get___redArg___boxed(lean_object* v_s_699_, lean_object* v_pos_700_){
_start:
{
uint32_t v_res_701_; lean_object* v_r_702_; 
v_res_701_ = l_String_Slice_Pos_get___redArg(v_s_699_, v_pos_700_);
lean_dec(v_pos_700_);
lean_dec_ref(v_s_699_);
v_r_702_ = lean_box_uint32(v_res_701_);
return v_r_702_;
}
}
LEAN_EXPORT uint32_t l_String_Slice_Pos_get(lean_object* v_s_703_, lean_object* v_pos_704_, lean_object* v_h_705_){
_start:
{
lean_object* v_str_706_; lean_object* v_startInclusive_707_; lean_object* v___x_708_; uint32_t v___x_709_; 
v_str_706_ = lean_ctor_get(v_s_703_, 0);
v_startInclusive_707_ = lean_ctor_get(v_s_703_, 1);
v___x_708_ = lean_nat_add(v_startInclusive_707_, v_pos_704_);
v___x_709_ = lean_string_utf8_get_fast(v_str_706_, v___x_708_);
lean_dec(v___x_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_get___boxed(lean_object* v_s_710_, lean_object* v_pos_711_, lean_object* v_h_712_){
_start:
{
uint32_t v_res_713_; lean_object* v_r_714_; 
v_res_713_ = l_String_Slice_Pos_get(v_s_710_, v_pos_711_, v_h_712_);
lean_dec(v_pos_711_);
lean_dec_ref(v_s_710_);
v_r_714_ = lean_box_uint32(v_res_713_);
return v_r_714_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x3f(lean_object* v_s_715_, lean_object* v_pos_716_){
_start:
{
lean_object* v_str_717_; lean_object* v_startInclusive_718_; lean_object* v_endExclusive_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v_str_717_ = lean_ctor_get(v_s_715_, 0);
v_startInclusive_718_ = lean_ctor_get(v_s_715_, 1);
v_endExclusive_719_ = lean_ctor_get(v_s_715_, 2);
v___x_720_ = lean_nat_sub(v_endExclusive_719_, v_startInclusive_718_);
v___x_721_ = lean_nat_dec_eq(v_pos_716_, v___x_720_);
lean_dec(v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; uint32_t v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_722_ = lean_nat_add(v_startInclusive_718_, v_pos_716_);
v___x_723_ = lean_string_utf8_get_fast(v_str_717_, v___x_722_);
lean_dec(v___x_722_);
v___x_724_ = lean_box_uint32(v___x_723_);
v___x_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
return v___x_725_;
}
else
{
lean_object* v___x_726_; 
v___x_726_ = lean_box(0);
return v___x_726_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x3f___boxed(lean_object* v_s_727_, lean_object* v_pos_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_String_Slice_Pos_get_x3f(v_s_727_, v_pos_728_);
lean_dec(v_pos_728_);
lean_dec_ref(v_s_727_);
return v_res_729_;
}
}
static lean_object* _init_l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1(void){
_start:
{
uint32_t v___x_730_; lean_object* v___x_731_; 
v___x_730_ = 65;
v___x_731_ = lean_box_uint32(v___x_730_);
return v___x_731_;
}
}
LEAN_EXPORT uint32_t l_panic___at___00String_Slice_Pos_get_x21_spec__0(lean_object* v_msg_732_){
_start:
{
lean_object* v___x_733_; lean_object* v___x_734_; uint32_t v___x_735_; 
v___x_733_ = l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1;
v___x_734_ = lean_panic_fn(v___x_733_, v_msg_732_);
v___x_735_ = lean_unbox_uint32(v___x_734_);
lean_dec(v___x_734_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed(lean_object* v_msg_736_){
_start:
{
uint32_t v_res_737_; lean_object* v_r_738_; 
v_res_737_ = l_panic___at___00String_Slice_Pos_get_x21_spec__0(v_msg_736_);
v_r_738_ = lean_box_uint32(v_res_737_);
return v_r_738_;
}
}
static lean_object* _init_l_String_Slice_Pos_get_x21___closed__2(void){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_741_ = ((lean_object*)(l_String_Slice_Pos_get_x21___closed__1));
v___x_742_ = lean_unsigned_to_nat(29u);
v___x_743_ = lean_unsigned_to_nat(1207u);
v___x_744_ = ((lean_object*)(l_String_Slice_Pos_get_x21___closed__0));
v___x_745_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_746_ = l_mkPanicMessageWithDecl(v___x_745_, v___x_744_, v___x_743_, v___x_742_, v___x_741_);
return v___x_746_;
}
}
LEAN_EXPORT uint32_t l_String_Slice_Pos_get_x21(lean_object* v_s_747_, lean_object* v_pos_748_){
_start:
{
lean_object* v_str_749_; lean_object* v_startInclusive_750_; lean_object* v_endExclusive_751_; lean_object* v___x_752_; uint8_t v___x_753_; 
v_str_749_ = lean_ctor_get(v_s_747_, 0);
v_startInclusive_750_ = lean_ctor_get(v_s_747_, 1);
v_endExclusive_751_ = lean_ctor_get(v_s_747_, 2);
v___x_752_ = lean_nat_sub(v_endExclusive_751_, v_startInclusive_750_);
v___x_753_ = lean_nat_dec_eq(v_pos_748_, v___x_752_);
lean_dec(v___x_752_);
if (v___x_753_ == 0)
{
lean_object* v___x_754_; uint32_t v___x_755_; 
v___x_754_ = lean_nat_add(v_startInclusive_750_, v_pos_748_);
v___x_755_ = lean_string_utf8_get_fast(v_str_749_, v___x_754_);
lean_dec(v___x_754_);
return v___x_755_;
}
else
{
lean_object* v___x_756_; uint32_t v___x_757_; 
v___x_756_ = lean_obj_once(&l_String_Slice_Pos_get_x21___closed__2, &l_String_Slice_Pos_get_x21___closed__2_once, _init_l_String_Slice_Pos_get_x21___closed__2);
v___x_757_ = l_panic___at___00String_Slice_Pos_get_x21_spec__0(v___x_756_);
return v___x_757_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_get_x21___boxed(lean_object* v_s_758_, lean_object* v_pos_759_){
_start:
{
uint32_t v_res_760_; lean_object* v_r_761_; 
v_res_760_ = l_String_Slice_Pos_get_x21(v_s_758_, v_pos_759_);
lean_dec(v_pos_759_);
lean_dec_ref(v_s_758_);
v_r_761_ = lean_box_uint32(v_res_760_);
return v_r_761_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toSlice___redArg(lean_object* v_pos_762_){
_start:
{
lean_inc(v_pos_762_);
return v_pos_762_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toSlice___redArg___boxed(lean_object* v_pos_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_String_Pos_toSlice___redArg(v_pos_763_);
lean_dec(v_pos_763_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toSlice(lean_object* v_s_765_, lean_object* v_pos_766_){
_start:
{
lean_inc(v_pos_766_);
return v_pos_766_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toSlice___boxed(lean_object* v_s_767_, lean_object* v_pos_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_String_Pos_toSlice(v_s_767_, v_pos_768_);
lean_dec(v_pos_768_);
lean_dec_ref(v_s_767_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___redArg(lean_object* v_pos_770_){
_start:
{
lean_inc(v_pos_770_);
return v_pos_770_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___redArg___boxed(lean_object* v_pos_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_String_Pos_ofToSlice___redArg(v_pos_771_);
lean_dec(v_pos_771_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice(lean_object* v_s_773_, lean_object* v_pos_774_){
_start:
{
lean_inc(v_pos_774_);
return v_pos_774_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofToSlice___boxed(lean_object* v_s_775_, lean_object* v_pos_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_String_Pos_ofToSlice(v_s_775_, v_pos_776_);
lean_dec(v_pos_776_);
lean_dec_ref(v_s_775_);
return v_res_777_;
}
}
LEAN_EXPORT uint32_t l_String_Pos_get___redArg(lean_object* v_s_778_, lean_object* v_pos_779_){
_start:
{
uint32_t v___x_780_; 
v___x_780_ = lean_string_utf8_get_fast(v_s_778_, v_pos_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_get___redArg___boxed(lean_object* v_s_781_, lean_object* v_pos_782_){
_start:
{
uint32_t v_res_783_; lean_object* v_r_784_; 
v_res_783_ = l_String_Pos_get___redArg(v_s_781_, v_pos_782_);
lean_dec(v_pos_782_);
lean_dec_ref(v_s_781_);
v_r_784_ = lean_box_uint32(v_res_783_);
return v_r_784_;
}
}
LEAN_EXPORT uint32_t l_String_Pos_get(lean_object* v_s_785_, lean_object* v_pos_786_, lean_object* v_h_787_){
_start:
{
uint32_t v___x_788_; 
v___x_788_ = lean_string_utf8_get_fast(v_s_785_, v_pos_786_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_get___boxed(lean_object* v_s_789_, lean_object* v_pos_790_, lean_object* v_h_791_){
_start:
{
uint32_t v_res_792_; lean_object* v_r_793_; 
v_res_792_ = l_String_Pos_get(v_s_789_, v_pos_790_, v_h_791_);
lean_dec(v_pos_790_);
lean_dec_ref(v_s_789_);
v_r_793_ = lean_box_uint32(v_res_792_);
return v_r_793_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_get_x3f(lean_object* v_s_794_, lean_object* v_pos_795_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_796_ = lean_unsigned_to_nat(0u);
v___x_797_ = lean_string_utf8_byte_size(v_s_794_);
v___x_798_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_798_, 0, v_s_794_);
lean_ctor_set(v___x_798_, 1, v___x_796_);
lean_ctor_set(v___x_798_, 2, v___x_797_);
v___x_799_ = l_String_Slice_Pos_get_x3f(v___x_798_, v_pos_795_);
lean_dec_ref(v___x_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_get_x3f___boxed(lean_object* v_s_800_, lean_object* v_pos_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_String_Pos_get_x3f(v_s_800_, v_pos_801_);
lean_dec(v_pos_801_);
return v_res_802_;
}
}
LEAN_EXPORT uint32_t l_String_Pos_get_x21(lean_object* v_s_803_, lean_object* v_pos_804_){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; uint32_t v___x_808_; 
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = lean_string_utf8_byte_size(v_s_803_);
v___x_807_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_807_, 0, v_s_803_);
lean_ctor_set(v___x_807_, 1, v___x_805_);
lean_ctor_set(v___x_807_, 2, v___x_806_);
v___x_808_ = l_String_Slice_Pos_get_x21(v___x_807_, v_pos_804_);
lean_dec_ref(v___x_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_get_x21___boxed(lean_object* v_s_809_, lean_object* v_pos_810_){
_start:
{
uint32_t v_res_811_; lean_object* v_r_812_; 
v_res_811_ = l_String_Pos_get_x21(v_s_809_, v_pos_810_);
lean_dec(v_pos_810_);
v_r_812_ = lean_box_uint32(v_res_811_);
return v_r_812_;
}
}
LEAN_EXPORT uint8_t l_String_Pos_byte___redArg(lean_object* v_s_813_, lean_object* v_pos_814_){
_start:
{
uint8_t v___x_815_; 
v___x_815_ = lean_string_get_byte_fast(v_s_813_, v_pos_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_byte___redArg___boxed(lean_object* v_s_816_, lean_object* v_pos_817_){
_start:
{
uint8_t v_res_818_; lean_object* v_r_819_; 
v_res_818_ = l_String_Pos_byte___redArg(v_s_816_, v_pos_817_);
lean_dec_ref(v_s_816_);
v_r_819_ = lean_box(v_res_818_);
return v_r_819_;
}
}
LEAN_EXPORT uint8_t l_String_Pos_byte(lean_object* v_s_820_, lean_object* v_pos_821_, lean_object* v_h_822_){
_start:
{
uint8_t v___x_823_; 
v___x_823_ = lean_string_get_byte_fast(v_s_820_, v_pos_821_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_byte___boxed(lean_object* v_s_824_, lean_object* v_pos_825_, lean_object* v_h_826_){
_start:
{
uint8_t v_res_827_; lean_object* v_r_828_; 
v_res_827_ = l_String_Pos_byte(v_s_824_, v_pos_825_, v_h_826_);
lean_dec_ref(v_s_824_);
v_r_828_ = lean_box(v_res_827_);
return v_r_828_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___redArg(lean_object* v_pos_829_){
_start:
{
lean_inc(v_pos_829_);
return v_pos_829_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___redArg___boxed(lean_object* v_pos_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_String_Pos_ofCopy___redArg(v_pos_830_);
lean_dec(v_pos_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofCopy(lean_object* v_s_832_, lean_object* v_pos_833_){
_start:
{
lean_inc(v_pos_833_);
return v_pos_833_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofCopy___boxed(lean_object* v_s_834_, lean_object* v_pos_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_String_Pos_ofCopy(v_s_834_, v_pos_835_);
lean_dec(v_pos_835_);
lean_dec_ref(v_s_834_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___redArg(lean_object* v_pos_837_){
_start:
{
lean_inc(v_pos_837_);
return v_pos_837_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___redArg___boxed(lean_object* v_pos_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_String_Slice_Pos_copy___redArg(v_pos_838_);
lean_dec(v_pos_838_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy(lean_object* v_s_840_, lean_object* v_pos_841_){
_start:
{
lean_inc(v_pos_841_);
return v_pos_841_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_copy___boxed(lean_object* v_s_842_, lean_object* v_pos_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_String_Slice_Pos_copy(v_s_842_, v_pos_843_);
lean_dec(v_pos_843_);
lean_dec_ref(v_s_842_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___redArg(lean_object* v_pos_845_){
_start:
{
lean_inc(v_pos_845_);
return v_pos_845_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___redArg___boxed(lean_object* v_pos_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_String_Slice_Pos_toCopy___redArg(v_pos_846_);
lean_dec(v_pos_846_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy(lean_object* v_s_848_, lean_object* v_pos_849_){
_start:
{
lean_inc(v_pos_849_);
return v_pos_849_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toCopy___boxed(lean_object* v_s_850_, lean_object* v_pos_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_String_Slice_Pos_toCopy(v_s_850_, v_pos_851_);
lean_dec(v_pos_851_);
lean_dec_ref(v_s_850_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___redArg(lean_object* v_p_u2080_853_, lean_object* v_pos_854_){
_start:
{
lean_object* v___x_855_; 
v___x_855_ = lean_nat_add(v_p_u2080_853_, v_pos_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___redArg___boxed(lean_object* v_p_u2080_856_, lean_object* v_pos_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_String_Slice_Pos_ofSliceFrom___redArg(v_p_u2080_856_, v_pos_857_);
lean_dec(v_pos_857_);
lean_dec(v_p_u2080_856_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom(lean_object* v_s_859_, lean_object* v_p_u2080_860_, lean_object* v_pos_861_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = lean_nat_add(v_p_u2080_860_, v_pos_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceFrom___boxed(lean_object* v_s_863_, lean_object* v_p_u2080_864_, lean_object* v_pos_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_String_Slice_Pos_ofSliceFrom(v_s_863_, v_p_u2080_864_, v_pos_865_);
lean_dec(v_pos_865_);
lean_dec(v_p_u2080_864_);
lean_dec_ref(v_s_863_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___redArg(lean_object* v_p_u2080_867_, lean_object* v_pos_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = lean_nat_add(v_p_u2080_867_, v_pos_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___redArg___boxed(lean_object* v_p_u2080_870_, lean_object* v_pos_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_String_Slice_Pos_ofReplaceStart___redArg(v_p_u2080_870_, v_pos_871_);
lean_dec(v_pos_871_);
lean_dec(v_p_u2080_870_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart(lean_object* v_s_873_, lean_object* v_p_u2080_874_, lean_object* v_pos_875_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = lean_nat_add(v_p_u2080_874_, v_pos_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceStart___boxed(lean_object* v_s_877_, lean_object* v_p_u2080_878_, lean_object* v_pos_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_String_Slice_Pos_ofReplaceStart(v_s_877_, v_p_u2080_878_, v_pos_879_);
lean_dec(v_pos_879_);
lean_dec(v_p_u2080_878_);
lean_dec_ref(v_s_877_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___redArg(lean_object* v_p_u2080_881_, lean_object* v_pos_882_){
_start:
{
lean_object* v___x_883_; 
v___x_883_ = lean_nat_sub(v_pos_882_, v_p_u2080_881_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___redArg___boxed(lean_object* v_p_u2080_884_, lean_object* v_pos_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_String_Slice_Pos_sliceFrom___redArg(v_p_u2080_884_, v_pos_885_);
lean_dec(v_pos_885_);
lean_dec(v_p_u2080_884_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom(lean_object* v_s_887_, lean_object* v_p_u2080_888_, lean_object* v_pos_889_, lean_object* v_h_890_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = lean_nat_sub(v_pos_889_, v_p_u2080_888_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceFrom___boxed(lean_object* v_s_892_, lean_object* v_p_u2080_893_, lean_object* v_pos_894_, lean_object* v_h_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l_String_Slice_Pos_sliceFrom(v_s_892_, v_p_u2080_893_, v_pos_894_, v_h_895_);
lean_dec(v_pos_894_);
lean_dec(v_p_u2080_893_);
lean_dec_ref(v_s_892_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___redArg(lean_object* v_p_u2080_897_, lean_object* v_pos_898_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = lean_nat_sub(v_pos_898_, v_p_u2080_897_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___redArg___boxed(lean_object* v_p_u2080_900_, lean_object* v_pos_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_String_Slice_Pos_toReplaceStart___redArg(v_p_u2080_900_, v_pos_901_);
lean_dec(v_pos_901_);
lean_dec(v_p_u2080_900_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart(lean_object* v_s_903_, lean_object* v_p_u2080_904_, lean_object* v_pos_905_, lean_object* v_h_906_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = lean_nat_sub(v_pos_905_, v_p_u2080_904_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceStart___boxed(lean_object* v_s_908_, lean_object* v_p_u2080_909_, lean_object* v_pos_910_, lean_object* v_h_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_String_Slice_Pos_toReplaceStart(v_s_908_, v_p_u2080_909_, v_pos_910_, v_h_911_);
lean_dec(v_pos_910_);
lean_dec(v_p_u2080_909_);
lean_dec_ref(v_s_908_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___redArg(lean_object* v_pos_913_){
_start:
{
lean_inc(v_pos_913_);
return v_pos_913_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___redArg___boxed(lean_object* v_pos_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_String_Slice_Pos_ofSliceTo___redArg(v_pos_914_);
lean_dec(v_pos_914_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo(lean_object* v_s_916_, lean_object* v_p_u2080_917_, lean_object* v_pos_918_){
_start:
{
lean_inc(v_pos_918_);
return v_pos_918_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSliceTo___boxed(lean_object* v_s_919_, lean_object* v_p_u2080_920_, lean_object* v_pos_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_String_Slice_Pos_ofSliceTo(v_s_919_, v_p_u2080_920_, v_pos_921_);
lean_dec(v_pos_921_);
lean_dec(v_p_u2080_920_);
lean_dec_ref(v_s_919_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___redArg(lean_object* v_pos_923_){
_start:
{
lean_inc(v_pos_923_);
return v_pos_923_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___redArg___boxed(lean_object* v_pos_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_String_Slice_Pos_ofReplaceEnd___redArg(v_pos_924_);
lean_dec(v_pos_924_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd(lean_object* v_s_926_, lean_object* v_p_u2080_927_, lean_object* v_pos_928_){
_start:
{
lean_inc(v_pos_928_);
return v_pos_928_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofReplaceEnd___boxed(lean_object* v_s_929_, lean_object* v_p_u2080_930_, lean_object* v_pos_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_String_Slice_Pos_ofReplaceEnd(v_s_929_, v_p_u2080_930_, v_pos_931_);
lean_dec(v_pos_931_);
lean_dec(v_p_u2080_930_);
lean_dec_ref(v_s_929_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___redArg(lean_object* v_pos_933_){
_start:
{
lean_inc(v_pos_933_);
return v_pos_933_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___redArg___boxed(lean_object* v_pos_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_String_Slice_Pos_sliceTo___redArg(v_pos_934_);
lean_dec(v_pos_934_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo(lean_object* v_s_936_, lean_object* v_p_u2080_937_, lean_object* v_pos_938_, lean_object* v_h_939_){
_start:
{
lean_inc(v_pos_938_);
return v_pos_938_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceTo___boxed(lean_object* v_s_940_, lean_object* v_p_u2080_941_, lean_object* v_pos_942_, lean_object* v_h_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_String_Slice_Pos_sliceTo(v_s_940_, v_p_u2080_941_, v_pos_942_, v_h_943_);
lean_dec(v_pos_942_);
lean_dec(v_p_u2080_941_);
lean_dec_ref(v_s_940_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___redArg(lean_object* v_pos_945_){
_start:
{
lean_inc(v_pos_945_);
return v_pos_945_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___redArg___boxed(lean_object* v_pos_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_String_Slice_Pos_toReplaceEnd___redArg(v_pos_946_);
lean_dec(v_pos_946_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd(lean_object* v_s_948_, lean_object* v_p_u2080_949_, lean_object* v_pos_950_, lean_object* v_h_951_){
_start:
{
lean_inc(v_pos_950_);
return v_pos_950_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_toReplaceEnd___boxed(lean_object* v_s_952_, lean_object* v_p_u2080_953_, lean_object* v_pos_954_, lean_object* v_h_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_String_Slice_Pos_toReplaceEnd(v_s_952_, v_p_u2080_953_, v_pos_954_, v_h_955_);
lean_dec(v_pos_954_);
lean_dec(v_p_u2080_953_);
lean_dec_ref(v_s_952_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___redArg(lean_object* v_s_957_, lean_object* v_pos_958_){
_start:
{
lean_object* v_str_959_; lean_object* v_startInclusive_960_; lean_object* v___x_961_; uint8_t v___x_962_; uint8_t v___x_963_; uint8_t v___x_964_; uint8_t v___x_965_; uint8_t v___x_966_; 
v_str_959_ = lean_ctor_get(v_s_957_, 0);
v_startInclusive_960_ = lean_ctor_get(v_s_957_, 1);
v___x_961_ = lean_nat_add(v_startInclusive_960_, v_pos_958_);
v___x_962_ = lean_string_get_byte_fast(v_str_959_, v___x_961_);
v___x_963_ = 128;
v___x_964_ = lean_uint8_land(v___x_962_, v___x_963_);
v___x_965_ = 0;
v___x_966_ = lean_uint8_dec_eq(v___x_964_, v___x_965_);
if (v___x_966_ == 0)
{
uint8_t v___x_967_; uint8_t v___x_968_; uint8_t v___x_969_; uint8_t v___x_970_; 
v___x_967_ = 224;
v___x_968_ = lean_uint8_land(v___x_962_, v___x_967_);
v___x_969_ = 192;
v___x_970_ = lean_uint8_dec_eq(v___x_968_, v___x_969_);
if (v___x_970_ == 0)
{
uint8_t v___x_971_; uint8_t v___x_972_; uint8_t v___x_973_; 
v___x_971_ = 240;
v___x_972_ = lean_uint8_land(v___x_962_, v___x_971_);
v___x_973_ = lean_uint8_dec_eq(v___x_972_, v___x_967_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = lean_unsigned_to_nat(4u);
v___x_975_ = lean_nat_add(v_pos_958_, v___x_974_);
return v___x_975_;
}
else
{
lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = lean_unsigned_to_nat(3u);
v___x_977_ = lean_nat_add(v_pos_958_, v___x_976_);
return v___x_977_;
}
}
else
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = lean_unsigned_to_nat(2u);
v___x_979_ = lean_nat_add(v_pos_958_, v___x_978_);
return v___x_979_;
}
}
else
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = lean_unsigned_to_nat(1u);
v___x_981_ = lean_nat_add(v_pos_958_, v___x_980_);
return v___x_981_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___redArg___boxed(lean_object* v_s_982_, lean_object* v_pos_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l_String_Slice_Pos_next___redArg(v_s_982_, v_pos_983_);
lean_dec(v_pos_983_);
lean_dec_ref(v_s_982_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next(lean_object* v_s_985_, lean_object* v_pos_986_, lean_object* v_h_987_){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = l_String_Slice_Pos_next___redArg(v_s_985_, v_pos_986_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next___boxed(lean_object* v_s_989_, lean_object* v_pos_990_, lean_object* v_h_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_String_Slice_Pos_next(v_s_989_, v_pos_990_, v_h_991_);
lean_dec(v_pos_990_);
lean_dec_ref(v_s_989_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x3f(lean_object* v_s_993_, lean_object* v_pos_994_){
_start:
{
lean_object* v_startInclusive_995_; lean_object* v_endExclusive_996_; lean_object* v___x_997_; uint8_t v___x_998_; 
v_startInclusive_995_ = lean_ctor_get(v_s_993_, 1);
v_endExclusive_996_ = lean_ctor_get(v_s_993_, 2);
v___x_997_ = lean_nat_sub(v_endExclusive_996_, v_startInclusive_995_);
v___x_998_ = lean_nat_dec_eq(v_pos_994_, v___x_997_);
lean_dec(v___x_997_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = l_String_Slice_Pos_next___redArg(v_s_993_, v_pos_994_);
v___x_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
return v___x_1000_;
}
else
{
lean_object* v___x_1001_; 
v___x_1001_ = lean_box(0);
return v___x_1001_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x3f___boxed(lean_object* v_s_1002_, lean_object* v_pos_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_String_Slice_Pos_next_x3f(v_s_1002_, v_pos_1003_);
lean_dec(v_pos_1003_);
lean_dec_ref(v_s_1002_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0___redArg(lean_object* v_msg_1005_){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = lean_unsigned_to_nat(0u);
v___x_1007_ = lean_panic_fn(v___x_1006_, v_msg_1005_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0(lean_object* v_s_1008_, lean_object* v_msg_1009_){
_start:
{
lean_object* v___x_1010_; 
v___x_1010_ = l_panic___at___00String_Slice_Pos_next_x21_spec__0___redArg(v_msg_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_Pos_next_x21_spec__0___boxed(lean_object* v_s_1011_, lean_object* v_msg_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_panic___at___00String_Slice_Pos_next_x21_spec__0(v_s_1011_, v_msg_1012_);
lean_dec_ref(v_s_1011_);
return v_res_1013_;
}
}
static lean_object* _init_l_String_Slice_Pos_next_x21___closed__2(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1016_ = ((lean_object*)(l_String_Slice_Pos_next_x21___closed__1));
v___x_1017_ = lean_unsigned_to_nat(29u);
v___x_1018_ = lean_unsigned_to_nat(1594u);
v___x_1019_ = ((lean_object*)(l_String_Slice_Pos_next_x21___closed__0));
v___x_1020_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_1021_ = l_mkPanicMessageWithDecl(v___x_1020_, v___x_1019_, v___x_1018_, v___x_1017_, v___x_1016_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x21(lean_object* v_s_1022_, lean_object* v_pos_1023_){
_start:
{
lean_object* v_startInclusive_1024_; lean_object* v_endExclusive_1025_; lean_object* v___x_1026_; uint8_t v___x_1027_; 
v_startInclusive_1024_ = lean_ctor_get(v_s_1022_, 1);
v_endExclusive_1025_ = lean_ctor_get(v_s_1022_, 2);
v___x_1026_ = lean_nat_sub(v_endExclusive_1025_, v_startInclusive_1024_);
v___x_1027_ = lean_nat_dec_eq(v_pos_1023_, v___x_1026_);
lean_dec(v___x_1026_);
if (v___x_1027_ == 0)
{
lean_object* v___x_1028_; 
v___x_1028_ = l_String_Slice_Pos_next___redArg(v_s_1022_, v_pos_1023_);
return v___x_1028_;
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = lean_obj_once(&l_String_Slice_Pos_next_x21___closed__2, &l_String_Slice_Pos_next_x21___closed__2_once, _init_l_String_Slice_Pos_next_x21___closed__2);
v___x_1030_ = l_panic___at___00String_Slice_Pos_next_x21_spec__0___redArg(v___x_1029_);
return v___x_1030_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_next_x21___boxed(lean_object* v_s_1031_, lean_object* v_pos_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_String_Slice_Pos_next_x21(v_s_1031_, v_pos_1032_);
lean_dec(v_pos_1032_);
lean_dec_ref(v_s_1031_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___redArg(lean_object* v_s_1034_, lean_object* v_off_1035_){
_start:
{
uint8_t v___y_1037_; lean_object* v_str_1043_; lean_object* v_startInclusive_1044_; lean_object* v___x_1045_; uint8_t v___x_1046_; uint8_t v___x_1047_; uint8_t v___x_1048_; uint8_t v___x_1049_; uint8_t v___x_1050_; 
v_str_1043_ = lean_ctor_get(v_s_1034_, 0);
v_startInclusive_1044_ = lean_ctor_get(v_s_1034_, 1);
v___x_1045_ = lean_nat_add(v_startInclusive_1044_, v_off_1035_);
v___x_1046_ = lean_string_get_byte_fast(v_str_1043_, v___x_1045_);
v___x_1047_ = 128;
v___x_1048_ = lean_uint8_land(v___x_1046_, v___x_1047_);
v___x_1049_ = 0;
v___x_1050_ = lean_uint8_dec_eq(v___x_1048_, v___x_1049_);
if (v___x_1050_ == 0)
{
uint8_t v___x_1051_; uint8_t v___x_1052_; uint8_t v___x_1053_; uint8_t v___x_1054_; 
v___x_1051_ = 224;
v___x_1052_ = lean_uint8_land(v___x_1046_, v___x_1051_);
v___x_1053_ = 192;
v___x_1054_ = lean_uint8_dec_eq(v___x_1052_, v___x_1053_);
if (v___x_1054_ == 0)
{
uint8_t v___x_1055_; uint8_t v___x_1056_; uint8_t v___x_1057_; 
v___x_1055_ = 240;
v___x_1056_ = lean_uint8_land(v___x_1046_, v___x_1055_);
v___x_1057_ = lean_uint8_dec_eq(v___x_1056_, v___x_1051_);
if (v___x_1057_ == 0)
{
uint8_t v___x_1058_; uint8_t v___x_1059_; uint8_t v___x_1060_; 
v___x_1058_ = 248;
v___x_1059_ = lean_uint8_land(v___x_1046_, v___x_1058_);
v___x_1060_ = lean_uint8_dec_eq(v___x_1059_, v___x_1055_);
v___y_1037_ = v___x_1060_;
goto v___jp_1036_;
}
else
{
v___y_1037_ = v___x_1057_;
goto v___jp_1036_;
}
}
else
{
v___y_1037_ = v___x_1054_;
goto v___jp_1036_;
}
}
else
{
v___y_1037_ = v___x_1050_;
goto v___jp_1036_;
}
v___jp_1036_:
{
if (v___y_1037_ == 0)
{
lean_object* v_zero_1038_; uint8_t v_isZero_1039_; lean_object* v_one_1040_; lean_object* v_n_1041_; 
v_zero_1038_ = lean_unsigned_to_nat(0u);
v_isZero_1039_ = lean_nat_dec_eq(v_off_1035_, v_zero_1038_);
v_one_1040_ = lean_unsigned_to_nat(1u);
v_n_1041_ = lean_nat_sub(v_off_1035_, v_one_1040_);
lean_dec(v_off_1035_);
v_off_1035_ = v_n_1041_;
goto _start;
}
else
{
return v_off_1035_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___redArg___boxed(lean_object* v_s_1061_, lean_object* v_off_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_String_Slice_Pos_prevAux_go___redArg(v_s_1061_, v_off_1062_);
lean_dec_ref(v_s_1061_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go(lean_object* v_s_1064_, lean_object* v_off_1065_, lean_object* v_h_u2081_1066_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_String_Slice_Pos_prevAux_go___redArg(v_s_1064_, v_off_1065_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux_go___boxed(lean_object* v_s_1068_, lean_object* v_off_1069_, lean_object* v_h_u2081_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_String_Slice_Pos_prevAux_go(v_s_1068_, v_off_1069_, v_h_u2081_1070_);
lean_dec_ref(v_s_1068_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___redArg(lean_object* v_s_1072_, lean_object* v_pos_1073_){
_start:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1074_ = lean_unsigned_to_nat(1u);
v___x_1075_ = lean_nat_sub(v_pos_1073_, v___x_1074_);
v___x_1076_ = l_String_Slice_Pos_prevAux_go___redArg(v_s_1072_, v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___redArg___boxed(lean_object* v_s_1077_, lean_object* v_pos_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_String_Slice_Pos_prevAux___redArg(v_s_1077_, v_pos_1078_);
lean_dec(v_pos_1078_);
lean_dec_ref(v_s_1077_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux(lean_object* v_s_1080_, lean_object* v_pos_1081_, lean_object* v_h_1082_){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1083_ = lean_unsigned_to_nat(1u);
v___x_1084_ = lean_nat_sub(v_pos_1081_, v___x_1083_);
v___x_1085_ = l_String_Slice_Pos_prevAux_go___redArg(v_s_1080_, v___x_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_prevAux___boxed(lean_object* v_s_1086_, lean_object* v_pos_1087_, lean_object* v_h_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_String_Slice_Pos_prevAux(v_s_1086_, v_pos_1087_, v_h_1088_);
lean_dec(v_pos_1087_);
lean_dec_ref(v_s_1086_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___redArg(lean_object* v_off_1090_, lean_object* v_h__1_1091_, lean_object* v_h__2_1092_){
_start:
{
lean_object* v_zero_1093_; uint8_t v_isZero_1094_; 
v_zero_1093_ = lean_unsigned_to_nat(0u);
v_isZero_1094_ = lean_nat_dec_eq(v_off_1090_, v_zero_1093_);
if (v_isZero_1094_ == 1)
{
lean_object* v___x_1095_; 
lean_dec(v_h__2_1092_);
v___x_1095_ = lean_apply_3(v_h__1_1091_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1095_;
}
else
{
lean_object* v_one_1096_; lean_object* v_n_1097_; lean_object* v___x_1098_; 
lean_dec(v_h__1_1091_);
v_one_1096_ = lean_unsigned_to_nat(1u);
v_n_1097_ = lean_nat_sub(v_off_1090_, v_one_1096_);
v___x_1098_ = lean_apply_4(v_h__2_1092_, v_n_1097_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1098_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___redArg___boxed(lean_object* v_off_1099_, lean_object* v_h__1_1100_, lean_object* v_h__2_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___redArg(v_off_1099_, v_h__1_1100_, v_h__2_1101_);
lean_dec(v_off_1099_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter(lean_object* v_s_1103_, lean_object* v_motive_1104_, lean_object* v_off_1105_, lean_object* v_h_u2081_1106_, lean_object* v_hbyte_1107_, lean_object* v_this_1108_, lean_object* v_h__1_1109_, lean_object* v_h__2_1110_){
_start:
{
lean_object* v_zero_1111_; uint8_t v_isZero_1112_; 
v_zero_1111_ = lean_unsigned_to_nat(0u);
v_isZero_1112_ = lean_nat_dec_eq(v_off_1105_, v_zero_1111_);
if (v_isZero_1112_ == 1)
{
lean_object* v___x_1113_; 
lean_dec(v_h__2_1110_);
v___x_1113_ = lean_apply_3(v_h__1_1109_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1113_;
}
else
{
lean_object* v_one_1114_; lean_object* v_n_1115_; lean_object* v___x_1116_; 
lean_dec(v_h__1_1109_);
v_one_1114_ = lean_unsigned_to_nat(1u);
v_n_1115_ = lean_nat_sub(v_off_1105_, v_one_1114_);
v___x_1116_ = lean_apply_4(v_h__2_1110_, v_n_1115_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1116_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter___boxed(lean_object* v_s_1117_, lean_object* v_motive_1118_, lean_object* v_off_1119_, lean_object* v_h_u2081_1120_, lean_object* v_hbyte_1121_, lean_object* v_this_1122_, lean_object* v_h__1_1123_, lean_object* v_h__2_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l___private_Init_Data_String_Basic_0__String_Slice_Pos_prevAux_go_match__1_splitter(v_s_1117_, v_motive_1118_, v_off_1119_, v_h_u2081_1120_, v_hbyte_1121_, v_this_1122_, v_h__1_1123_, v_h__2_1124_);
lean_dec(v_off_1119_);
lean_dec_ref(v_s_1117_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos___redArg(lean_object* v_off_1126_){
_start:
{
lean_inc(v_off_1126_);
return v_off_1126_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos___redArg___boxed(lean_object* v_off_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_String_Slice_pos___redArg(v_off_1127_);
lean_dec(v_off_1127_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos(lean_object* v_s_1129_, lean_object* v_off_1130_, lean_object* v_h_1131_){
_start:
{
lean_inc(v_off_1130_);
return v_off_1130_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos___boxed(lean_object* v_s_1132_, lean_object* v_off_1133_, lean_object* v_h_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_String_Slice_pos(v_s_1132_, v_off_1133_, v_h_1134_);
lean_dec(v_off_1133_);
lean_dec_ref(v_s_1132_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos_x3f(lean_object* v_s_1136_, lean_object* v_off_1137_){
_start:
{
uint8_t v___x_1138_; 
v___x_1138_ = l_String_Pos_Raw_isValidForSlice(v_s_1136_, v_off_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; 
lean_dec(v_off_1137_);
v___x_1139_ = lean_box(0);
return v___x_1139_;
}
else
{
lean_object* v___x_1140_; 
v___x_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1140_, 0, v_off_1137_);
return v___x_1140_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos_x3f___boxed(lean_object* v_s_1141_, lean_object* v_off_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_String_Slice_pos_x3f(v_s_1141_, v_off_1142_);
lean_dec_ref(v_s_1141_);
return v_res_1143_;
}
}
static lean_object* _init_l_String_Slice_pos_x21___closed__2(void){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1146_ = ((lean_object*)(l_String_Slice_pos_x21___closed__1));
v___x_1147_ = lean_unsigned_to_nat(4u);
v___x_1148_ = lean_unsigned_to_nat(1682u);
v___x_1149_ = ((lean_object*)(l_String_Slice_pos_x21___closed__0));
v___x_1150_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_1151_ = l_mkPanicMessageWithDecl(v___x_1150_, v___x_1149_, v___x_1148_, v___x_1147_, v___x_1146_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos_x21(lean_object* v_s_1152_, lean_object* v_off_1153_){
_start:
{
uint8_t v___x_1154_; 
v___x_1154_ = l_String_Pos_Raw_isValidForSlice(v_s_1152_, v_off_1153_);
if (v___x_1154_ == 0)
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = lean_obj_once(&l_String_Slice_pos_x21___closed__2, &l_String_Slice_pos_x21___closed__2_once, _init_l_String_Slice_pos_x21___closed__2);
v___x_1156_ = l_panic___at___00String_Slice_Pos_next_x21_spec__0___redArg(v___x_1155_);
return v___x_1156_;
}
else
{
lean_inc(v_off_1153_);
return v_off_1153_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_pos_x21___boxed(lean_object* v_s_1157_, lean_object* v_off_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_String_Slice_pos_x21(v_s_1157_, v_off_1158_);
lean_dec(v_off_1158_);
lean_dec_ref(v_s_1157_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_next___boxed(lean_object* v_s_1163_, lean_object* v_pos_1164_, lean_object* v_h_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = lean_string_utf8_next_fast(v_s_1163_, v_pos_1164_);
lean_dec(v_pos_1164_);
lean_dec_ref(v_s_1163_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_next_x3f(lean_object* v_s_1167_, lean_object* v_pos_1168_){
_start:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1169_ = lean_unsigned_to_nat(0u);
v___x_1170_ = lean_string_utf8_byte_size(v_s_1167_);
v___x_1171_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1171_, 0, v_s_1167_);
lean_ctor_set(v___x_1171_, 1, v___x_1169_);
lean_ctor_set(v___x_1171_, 2, v___x_1170_);
v___x_1172_ = l_String_Slice_Pos_next_x3f(v___x_1171_, v_pos_1168_);
lean_dec_ref(v___x_1171_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v___x_1173_; 
v___x_1173_ = lean_box(0);
return v___x_1173_;
}
else
{
lean_object* v_val_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
v_val_1174_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1172_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_val_1174_);
lean_dec(v___x_1172_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1179_; 
if (v_isShared_1177_ == 0)
{
v___x_1179_ = v___x_1176_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_val_1174_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_next_x3f___boxed(lean_object* v_s_1182_, lean_object* v_pos_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_String_Pos_next_x3f(v_s_1182_, v_pos_1183_);
lean_dec(v_pos_1183_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_next_x21(lean_object* v_s_1185_, lean_object* v_pos_1186_){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1187_ = lean_unsigned_to_nat(0u);
v___x_1188_ = lean_string_utf8_byte_size(v_s_1185_);
v___x_1189_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1189_, 0, v_s_1185_);
lean_ctor_set(v___x_1189_, 1, v___x_1187_);
lean_ctor_set(v___x_1189_, 2, v___x_1188_);
v___x_1190_ = l_String_Slice_Pos_next_x21(v___x_1189_, v_pos_1186_);
lean_dec_ref(v___x_1189_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_next_x21___boxed(lean_object* v_s_1191_, lean_object* v_pos_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l_String_Pos_next_x21(v_s_1191_, v_pos_1192_);
lean_dec(v_pos_1192_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_String_pos___redArg(lean_object* v_off_1194_){
_start:
{
lean_inc(v_off_1194_);
return v_off_1194_;
}
}
LEAN_EXPORT lean_object* l_String_pos___redArg___boxed(lean_object* v_off_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_String_pos___redArg(v_off_1195_);
lean_dec(v_off_1195_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_String_pos(lean_object* v_s_1197_, lean_object* v_off_1198_, lean_object* v_h_1199_){
_start:
{
lean_inc(v_off_1198_);
return v_off_1198_;
}
}
LEAN_EXPORT lean_object* l_String_pos___boxed(lean_object* v_s_1200_, lean_object* v_off_1201_, lean_object* v_h_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_String_pos(v_s_1200_, v_off_1201_, v_h_1202_);
lean_dec(v_off_1201_);
lean_dec_ref(v_s_1200_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_String_pos_x3f(lean_object* v_s_1204_, lean_object* v_off_1205_){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1206_ = lean_unsigned_to_nat(0u);
v___x_1207_ = lean_string_utf8_byte_size(v_s_1204_);
v___x_1208_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1208_, 0, v_s_1204_);
lean_ctor_set(v___x_1208_, 1, v___x_1206_);
lean_ctor_set(v___x_1208_, 2, v___x_1207_);
v___x_1209_ = l_String_Slice_pos_x3f(v___x_1208_, v_off_1205_);
lean_dec_ref(v___x_1208_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_box(0);
return v___x_1210_;
}
else
{
lean_object* v_val_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1218_; 
v_val_1211_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1213_ = v___x_1209_;
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_val_1211_);
lean_dec(v___x_1209_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1216_; 
if (v_isShared_1214_ == 0)
{
v___x_1216_ = v___x_1213_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_val_1211_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_pos_x21(lean_object* v_s_1219_, lean_object* v_off_1220_){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1221_ = lean_unsigned_to_nat(0u);
v___x_1222_ = lean_string_utf8_byte_size(v_s_1219_);
v___x_1223_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1223_, 0, v_s_1219_);
lean_ctor_set(v___x_1223_, 1, v___x_1221_);
lean_ctor_set(v___x_1223_, 2, v___x_1222_);
v___x_1224_ = l_String_Slice_pos_x21(v___x_1223_, v_off_1220_);
lean_dec_ref(v___x_1223_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_String_pos_x21___boxed(lean_object* v_s_1225_, lean_object* v_off_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_String_pos_x21(v_s_1225_, v_off_1226_);
lean_dec(v_off_1226_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___redArg(lean_object* v_pos_1228_){
_start:
{
lean_inc(v_pos_1228_);
return v_pos_1228_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___redArg___boxed(lean_object* v_pos_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l_String_Slice_Pos_cast___redArg(v_pos_1229_);
lean_dec(v_pos_1229_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast(lean_object* v_s_1231_, lean_object* v_t_1232_, lean_object* v_pos_1233_, lean_object* v_h_1234_){
_start:
{
lean_inc(v_pos_1233_);
return v_pos_1233_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_cast___boxed(lean_object* v_s_1235_, lean_object* v_t_1236_, lean_object* v_pos_1237_, lean_object* v_h_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_String_Slice_Pos_cast(v_s_1235_, v_t_1236_, v_pos_1237_, v_h_1238_);
lean_dec(v_pos_1237_);
lean_dec_ref(v_t_1236_);
lean_dec_ref(v_s_1235_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_cast___redArg(lean_object* v_pos_1240_){
_start:
{
lean_inc(v_pos_1240_);
return v_pos_1240_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_cast___redArg___boxed(lean_object* v_pos_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l_String_Pos_cast___redArg(v_pos_1241_);
lean_dec(v_pos_1241_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_cast(lean_object* v_s_1243_, lean_object* v_t_1244_, lean_object* v_pos_1245_, lean_object* v_h_1246_){
_start:
{
lean_inc(v_pos_1245_);
return v_pos_1245_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_cast___boxed(lean_object* v_s_1247_, lean_object* v_t_1248_, lean_object* v_pos_1249_, lean_object* v_h_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_String_Pos_cast(v_s_1247_, v_t_1248_, v_pos_1249_, v_h_1250_);
lean_dec(v_pos_1249_);
lean_dec_ref(v_t_1248_);
lean_dec_ref(v_s_1247_);
return v_res_1251_;
}
}
LEAN_EXPORT uint32_t l_String_Pos_Raw_utf8GetAux(lean_object* v_x_1252_, lean_object* v_x_1253_, lean_object* v_x_1254_){
_start:
{
if (lean_obj_tag(v_x_1252_) == 0)
{
uint32_t v___x_1255_; 
lean_dec(v_x_1253_);
v___x_1255_ = 65;
return v___x_1255_;
}
else
{
lean_object* v_head_1256_; lean_object* v_tail_1257_; uint8_t v___x_1258_; 
v_head_1256_ = lean_ctor_get(v_x_1252_, 0);
v_tail_1257_ = lean_ctor_get(v_x_1252_, 1);
v___x_1258_ = lean_nat_dec_eq(v_x_1253_, v_x_1254_);
if (v___x_1258_ == 0)
{
uint32_t v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1259_ = lean_unbox_uint32(v_head_1256_);
v___x_1260_ = l_Char_utf8Size(v___x_1259_);
v___x_1261_ = lean_nat_add(v_x_1253_, v___x_1260_);
lean_dec(v___x_1260_);
lean_dec(v_x_1253_);
v_x_1252_ = v_tail_1257_;
v_x_1253_ = v___x_1261_;
goto _start;
}
else
{
uint32_t v___x_1263_; 
lean_dec(v_x_1253_);
v___x_1263_ = lean_unbox_uint32(v_head_1256_);
return v___x_1263_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux___boxed(lean_object* v_x_1264_, lean_object* v_x_1265_, lean_object* v_x_1266_){
_start:
{
uint32_t v_res_1267_; lean_object* v_r_1268_; 
v_res_1267_ = l_String_Pos_Raw_utf8GetAux(v_x_1264_, v_x_1265_, v_x_1266_);
lean_dec(v_x_1266_);
lean_dec(v_x_1264_);
v_r_1268_ = lean_box_uint32(v_res_1267_);
return v_r_1268_;
}
}
LEAN_EXPORT uint32_t l_String_utf8GetAux(lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_){
_start:
{
uint32_t v___x_1272_; 
v___x_1272_ = l_String_Pos_Raw_utf8GetAux(v_a_1269_, v_a_1270_, v_a_1271_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_String_utf8GetAux___boxed(lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_){
_start:
{
uint32_t v_res_1276_; lean_object* v_r_1277_; 
v_res_1276_ = l_String_utf8GetAux(v_a_1273_, v_a_1274_, v_a_1275_);
lean_dec(v_a_1275_);
lean_dec(v_a_1273_);
v_r_1277_ = lean_box_uint32(v_res_1276_);
return v_r_1277_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_get___boxed(lean_object* v_s_1280_, lean_object* v_p_1281_){
_start:
{
uint32_t v_res_1282_; lean_object* v_r_1283_; 
v_res_1282_ = lean_string_utf8_get(v_s_1280_, v_p_1281_);
lean_dec(v_p_1281_);
lean_dec_ref(v_s_1280_);
v_r_1283_ = lean_box_uint32(v_res_1282_);
return v_r_1283_;
}
}
LEAN_EXPORT lean_object* l_String_get___boxed(lean_object* v_s_1286_, lean_object* v_p_1287_){
_start:
{
uint32_t v_res_1288_; lean_object* v_r_1289_; 
v_res_1288_ = lean_string_utf8_get(v_s_1286_, v_p_1287_);
lean_dec(v_p_1287_);
lean_dec_ref(v_s_1286_);
v_r_1289_ = lean_box_uint32(v_res_1288_);
return v_r_1289_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux_x3f(lean_object* v_x_1290_, lean_object* v_x_1291_, lean_object* v_x_1292_){
_start:
{
if (lean_obj_tag(v_x_1290_) == 0)
{
lean_object* v___x_1293_; 
lean_dec(v_x_1291_);
v___x_1293_ = lean_box(0);
return v___x_1293_;
}
else
{
lean_object* v_head_1294_; lean_object* v_tail_1295_; uint8_t v___x_1296_; 
v_head_1294_ = lean_ctor_get(v_x_1290_, 0);
v_tail_1295_ = lean_ctor_get(v_x_1290_, 1);
v___x_1296_ = lean_nat_dec_eq(v_x_1291_, v_x_1292_);
if (v___x_1296_ == 0)
{
uint32_t v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1297_ = lean_unbox_uint32(v_head_1294_);
v___x_1298_ = l_Char_utf8Size(v___x_1297_);
v___x_1299_ = lean_nat_add(v_x_1291_, v___x_1298_);
lean_dec(v___x_1298_);
lean_dec(v_x_1291_);
v_x_1290_ = v_tail_1295_;
v_x_1291_ = v___x_1299_;
goto _start;
}
else
{
lean_object* v___x_1301_; 
lean_dec(v_x_1291_);
lean_inc(v_head_1294_);
v___x_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1301_, 0, v_head_1294_);
return v___x_1301_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8GetAux_x3f___boxed(lean_object* v_x_1302_, lean_object* v_x_1303_, lean_object* v_x_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l_String_Pos_Raw_utf8GetAux_x3f(v_x_1302_, v_x_1303_, v_x_1304_);
lean_dec(v_x_1304_);
lean_dec(v_x_1302_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_String_utf8GetAux_x3f(lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_){
_start:
{
lean_object* v___x_1309_; 
v___x_1309_ = l_String_Pos_Raw_utf8GetAux_x3f(v_a_1306_, v_a_1307_, v_a_1308_);
return v___x_1309_;
}
}
LEAN_EXPORT lean_object* l_String_utf8GetAux_x3f___boxed(lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l_String_utf8GetAux_x3f(v_a_1310_, v_a_1311_, v_a_1312_);
lean_dec(v_a_1312_);
lean_dec(v_a_1310_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x3f___boxed(lean_object* v_a_00___x40___internal___hyg_1316_, lean_object* v_a_00___x40___internal___hyg_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = lean_string_utf8_get_opt(v_a_00___x40___internal___hyg_1316_, v_a_00___x40___internal___hyg_1317_);
lean_dec(v_a_00___x40___internal___hyg_1317_);
lean_dec_ref(v_a_00___x40___internal___hyg_1316_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_String_get_x3f___boxed(lean_object* v_a_00___x40___internal___hyg_1321_, lean_object* v_a_00___x40___internal___hyg_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = lean_string_utf8_get_opt(v_a_00___x40___internal___hyg_1321_, v_a_00___x40___internal___hyg_1322_);
lean_dec(v_a_00___x40___internal___hyg_1322_);
lean_dec_ref(v_a_00___x40___internal___hyg_1321_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x21___boxed(lean_object* v_s_1326_, lean_object* v_p_1327_){
_start:
{
uint32_t v_res_1328_; lean_object* v_r_1329_; 
v_res_1328_ = lean_string_utf8_get_bang(v_s_1326_, v_p_1327_);
lean_dec(v_p_1327_);
lean_dec_ref(v_s_1326_);
v_r_1329_ = lean_box_uint32(v_res_1328_);
return v_r_1329_;
}
}
LEAN_EXPORT lean_object* l_String_get_x21___boxed(lean_object* v_s_1332_, lean_object* v_p_1333_){
_start:
{
uint32_t v_res_1334_; lean_object* v_r_1335_; 
v_res_1334_ = lean_string_utf8_get_bang(v_s_1332_, v_p_1333_);
lean_dec(v_p_1333_);
lean_dec_ref(v_s_1332_);
v_r_1335_ = lean_box_uint32(v_res_1334_);
return v_r_1335_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8SetAux(uint32_t v_c_x27_1336_, lean_object* v_x_1337_, lean_object* v_x_1338_, lean_object* v_x_1339_){
_start:
{
if (lean_obj_tag(v_x_1337_) == 0)
{
return v_x_1337_;
}
else
{
lean_object* v_head_1340_; lean_object* v_tail_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1357_; 
v_head_1340_ = lean_ctor_get(v_x_1337_, 0);
v_tail_1341_ = lean_ctor_get(v_x_1337_, 1);
v_isSharedCheck_1357_ = !lean_is_exclusive(v_x_1337_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1343_ = v_x_1337_;
v_isShared_1344_ = v_isSharedCheck_1357_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_tail_1341_);
lean_inc(v_head_1340_);
lean_dec(v_x_1337_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1357_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
uint8_t v___x_1345_; 
v___x_1345_ = lean_nat_dec_eq(v_x_1338_, v_x_1339_);
if (v___x_1345_ == 0)
{
uint32_t v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1351_; 
v___x_1346_ = lean_unbox_uint32(v_head_1340_);
v___x_1347_ = l_Char_utf8Size(v___x_1346_);
v___x_1348_ = lean_nat_add(v_x_1338_, v___x_1347_);
lean_dec(v___x_1347_);
v___x_1349_ = l_String_Pos_Raw_utf8SetAux(v_c_x27_1336_, v_tail_1341_, v___x_1348_, v_x_1339_);
lean_dec(v___x_1348_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 1, v___x_1349_);
v___x_1351_ = v___x_1343_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_head_1340_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
else
{
lean_object* v___x_1353_; lean_object* v___x_1355_; 
lean_dec(v_head_1340_);
v___x_1353_ = lean_box_uint32(v_c_x27_1336_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 0, v___x_1353_);
v___x_1355_ = v___x_1343_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1353_);
lean_ctor_set(v_reuseFailAlloc_1356_, 1, v_tail_1341_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8SetAux___boxed(lean_object* v_c_x27_1358_, lean_object* v_x_1359_, lean_object* v_x_1360_, lean_object* v_x_1361_){
_start:
{
uint32_t v_c_x27_boxed_1362_; lean_object* v_res_1363_; 
v_c_x27_boxed_1362_ = lean_unbox_uint32(v_c_x27_1358_);
lean_dec(v_c_x27_1358_);
v_res_1363_ = l_String_Pos_Raw_utf8SetAux(v_c_x27_boxed_1362_, v_x_1359_, v_x_1360_, v_x_1361_);
lean_dec(v_x_1361_);
lean_dec(v_x_1360_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_String_utf8SetAux(uint32_t v_c_x27_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_){
_start:
{
lean_object* v___x_1368_; 
v___x_1368_ = l_String_Pos_Raw_utf8SetAux(v_c_x27_1364_, v_a_1365_, v_a_1366_, v_a_1367_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_String_utf8SetAux___boxed(lean_object* v_c_x27_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_){
_start:
{
uint32_t v_c_x27_boxed_1373_; lean_object* v_res_1374_; 
v_c_x27_boxed_1373_ = lean_unbox_uint32(v_c_x27_1369_);
lean_dec(v_c_x27_1369_);
v_res_1374_ = l_String_utf8SetAux(v_c_x27_boxed_1373_, v_a_1370_, v_a_1371_, v_a_1372_);
lean_dec(v_a_1372_);
lean_dec(v_a_1371_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___redArg(lean_object* v_s_1375_, lean_object* v_pos_1376_){
_start:
{
lean_object* v_str_1377_; lean_object* v_startInclusive_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v_str_1377_ = lean_ctor_get(v_s_1375_, 0);
v_startInclusive_1378_ = lean_ctor_get(v_s_1375_, 1);
v___x_1379_ = lean_nat_add(v_startInclusive_1378_, v_pos_1376_);
v___x_1380_ = lean_string_utf8_next_fast(v_str_1377_, v___x_1379_);
lean_dec(v___x_1379_);
v___x_1381_ = lean_nat_sub(v___x_1380_, v_startInclusive_1378_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___redArg___boxed(lean_object* v_s_1382_, lean_object* v_pos_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l_String_Slice_Pos_nextFast___redArg(v_s_1382_, v_pos_1383_);
lean_dec(v_pos_1383_);
lean_dec_ref(v_s_1382_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast(lean_object* v_s_1385_, lean_object* v_pos_1386_, lean_object* v_h_1387_){
_start:
{
lean_object* v_str_1388_; lean_object* v_startInclusive_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v_str_1388_ = lean_ctor_get(v_s_1385_, 0);
v_startInclusive_1389_ = lean_ctor_get(v_s_1385_, 1);
v___x_1390_ = lean_nat_add(v_startInclusive_1389_, v_pos_1386_);
v___x_1391_ = lean_string_utf8_next_fast(v_str_1388_, v___x_1390_);
lean_dec(v___x_1390_);
v___x_1392_ = lean_nat_sub(v___x_1391_, v_startInclusive_1389_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextFast___boxed(lean_object* v_s_1393_, lean_object* v_pos_1394_, lean_object* v_h_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_String_Slice_Pos_nextFast(v_s_1393_, v_pos_1394_, v_h_1395_);
lean_dec(v_pos_1394_);
lean_dec_ref(v_s_1393_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l_String_sliceTo(lean_object* v_s_1397_, lean_object* v_p_1398_){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = lean_unsigned_to_nat(0u);
v___x_1400_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1400_, 0, v_s_1397_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
lean_ctor_set(v___x_1400_, 2, v_p_1398_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_String_replaceEnd(lean_object* v_s_1401_, lean_object* v_p_1402_){
_start:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1403_ = lean_unsigned_to_nat(0u);
v___x_1404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1404_, 0, v_s_1401_);
lean_ctor_set(v___x_1404_, 1, v___x_1403_);
lean_ctor_set(v___x_1404_, 2, v_p_1402_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_String_sliceFrom(lean_object* v_s_1405_, lean_object* v_p_1406_){
_start:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = lean_string_utf8_byte_size(v_s_1405_);
v___x_1408_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1408_, 0, v_s_1405_);
lean_ctor_set(v___x_1408_, 1, v_p_1406_);
lean_ctor_set(v___x_1408_, 2, v___x_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_String_replaceStart(lean_object* v_s_1409_, lean_object* v_p_1410_){
_start:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1411_ = lean_string_utf8_byte_size(v_s_1409_);
v___x_1412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1412_, 0, v_s_1409_);
lean_ctor_set(v___x_1412_, 1, v_p_1410_);
lean_ctor_set(v___x_1412_, 2, v___x_1411_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l_String_slice___redArg(lean_object* v_s_1413_, lean_object* v_startInclusive_1414_, lean_object* v_endExclusive_1415_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1416_, 0, v_s_1413_);
lean_ctor_set(v___x_1416_, 1, v_startInclusive_1414_);
lean_ctor_set(v___x_1416_, 2, v_endExclusive_1415_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_String_slice(lean_object* v_s_1417_, lean_object* v_startInclusive_1418_, lean_object* v_endExclusive_1419_, lean_object* v_h_1420_){
_start:
{
lean_object* v___x_1421_; 
v___x_1421_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1421_, 0, v_s_1417_);
lean_ctor_set(v___x_1421_, 1, v_startInclusive_1418_);
lean_ctor_set(v___x_1421_, 2, v_endExclusive_1419_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_String_slice_x3f(lean_object* v_s_1422_, lean_object* v_startInclusive_1423_, lean_object* v_endExclusive_1424_){
_start:
{
uint8_t v___x_1425_; 
v___x_1425_ = lean_nat_dec_le(v_startInclusive_1423_, v_endExclusive_1424_);
if (v___x_1425_ == 0)
{
lean_object* v___x_1426_; 
lean_dec(v_endExclusive_1424_);
lean_dec(v_startInclusive_1423_);
lean_dec_ref(v_s_1422_);
v___x_1426_ = lean_box(0);
return v___x_1426_;
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1427_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1427_, 0, v_s_1422_);
lean_ctor_set(v___x_1427_, 1, v_startInclusive_1423_);
lean_ctor_set(v___x_1427_, 2, v_endExclusive_1424_);
v___x_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
return v___x_1428_;
}
}
}
LEAN_EXPORT lean_object* l_String_slice_x21(lean_object* v_s_1429_, lean_object* v_p_u2081_1430_, lean_object* v_p_u2082_1431_){
_start:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1432_ = lean_unsigned_to_nat(0u);
v___x_1433_ = lean_string_utf8_byte_size(v_s_1429_);
v___x_1434_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1434_, 0, v_s_1429_);
lean_ctor_set(v___x_1434_, 1, v___x_1432_);
lean_ctor_set(v___x_1434_, 2, v___x_1433_);
v___x_1435_ = l_String_Slice_slice_x21(v___x_1434_, v_p_u2081_1430_, v_p_u2082_1431_);
return v___x_1435_;
}
}
LEAN_EXPORT lean_object* l_String_slice_x21___boxed(lean_object* v_s_1436_, lean_object* v_p_u2081_1437_, lean_object* v_p_u2082_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l_String_slice_x21(v_s_1436_, v_p_u2081_1437_, v_p_u2082_1438_);
lean_dec(v_p_u2082_1438_);
lean_dec(v_p_u2081_1437_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_String_replaceStartEnd_x21(lean_object* v_s_1440_, lean_object* v_p_u2081_1441_, lean_object* v_p_u2082_1442_){
_start:
{
lean_object* v___x_1443_; 
v___x_1443_ = l_String_slice_x21(v_s_1440_, v_p_u2081_1441_, v_p_u2082_1442_);
return v___x_1443_;
}
}
LEAN_EXPORT lean_object* l_String_replaceStartEnd_x21___boxed(lean_object* v_s_1444_, lean_object* v_p_u2081_1445_, lean_object* v_p_u2082_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_String_replaceStartEnd_x21(v_s_1444_, v_p_u2081_1445_, v_p_u2082_1446_);
lean_dec(v_p_u2082_1446_);
lean_dec(v_p_u2081_1445_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___redArg(lean_object* v_p_u2080_1448_, lean_object* v_pos_1449_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_nat_add(v_p_u2080_1448_, v_pos_1449_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___redArg___boxed(lean_object* v_p_u2080_1451_, lean_object* v_pos_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_String_Pos_ofSliceFrom___redArg(v_p_u2080_1451_, v_pos_1452_);
lean_dec(v_pos_1452_);
lean_dec(v_p_u2080_1451_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom(lean_object* v_s_1454_, lean_object* v_p_u2080_1455_, lean_object* v_pos_1456_){
_start:
{
lean_object* v___x_1457_; 
v___x_1457_ = lean_nat_add(v_p_u2080_1455_, v_pos_1456_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceFrom___boxed(lean_object* v_s_1458_, lean_object* v_p_u2080_1459_, lean_object* v_pos_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_String_Pos_ofSliceFrom(v_s_1458_, v_p_u2080_1459_, v_pos_1460_);
lean_dec(v_pos_1460_);
lean_dec(v_p_u2080_1459_);
lean_dec_ref(v_s_1458_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___redArg(lean_object* v_p_u2080_1462_, lean_object* v_pos_1463_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_nat_add(v_p_u2080_1462_, v_pos_1463_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___redArg___boxed(lean_object* v_p_u2080_1465_, lean_object* v_pos_1466_){
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l_String_Pos_ofReplaceStart___redArg(v_p_u2080_1465_, v_pos_1466_);
lean_dec(v_pos_1466_);
lean_dec(v_p_u2080_1465_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart(lean_object* v_s_1468_, lean_object* v_p_u2080_1469_, lean_object* v_pos_1470_){
_start:
{
lean_object* v___x_1471_; 
v___x_1471_ = lean_nat_add(v_p_u2080_1469_, v_pos_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceStart___boxed(lean_object* v_s_1472_, lean_object* v_p_u2080_1473_, lean_object* v_pos_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_String_Pos_ofReplaceStart(v_s_1472_, v_p_u2080_1473_, v_pos_1474_);
lean_dec(v_pos_1474_);
lean_dec(v_p_u2080_1473_);
lean_dec_ref(v_s_1472_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___redArg(lean_object* v_p_u2080_1476_, lean_object* v_pos_1477_){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = lean_nat_sub(v_pos_1477_, v_p_u2080_1476_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___redArg___boxed(lean_object* v_p_u2080_1479_, lean_object* v_pos_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_String_Pos_sliceFrom___redArg(v_p_u2080_1479_, v_pos_1480_);
lean_dec(v_pos_1480_);
lean_dec(v_p_u2080_1479_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom(lean_object* v_s_1482_, lean_object* v_p_u2080_1483_, lean_object* v_pos_1484_, lean_object* v_h_1485_){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = lean_nat_sub(v_pos_1484_, v_p_u2080_1483_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceFrom___boxed(lean_object* v_s_1487_, lean_object* v_p_u2080_1488_, lean_object* v_pos_1489_, lean_object* v_h_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_String_Pos_sliceFrom(v_s_1487_, v_p_u2080_1488_, v_pos_1489_, v_h_1490_);
lean_dec(v_pos_1489_);
lean_dec(v_p_u2080_1488_);
lean_dec_ref(v_s_1487_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___redArg(lean_object* v_p_u2080_1492_, lean_object* v_pos_1493_){
_start:
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_nat_sub(v_pos_1493_, v_p_u2080_1492_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___redArg___boxed(lean_object* v_p_u2080_1495_, lean_object* v_pos_1496_){
_start:
{
lean_object* v_res_1497_; 
v_res_1497_ = l_String_Pos_toReplaceStart___redArg(v_p_u2080_1495_, v_pos_1496_);
lean_dec(v_pos_1496_);
lean_dec(v_p_u2080_1495_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart(lean_object* v_s_1498_, lean_object* v_p_u2080_1499_, lean_object* v_pos_1500_, lean_object* v_h_1501_){
_start:
{
lean_object* v___x_1502_; 
v___x_1502_ = lean_nat_sub(v_pos_1500_, v_p_u2080_1499_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceStart___boxed(lean_object* v_s_1503_, lean_object* v_p_u2080_1504_, lean_object* v_pos_1505_, lean_object* v_h_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_String_Pos_toReplaceStart(v_s_1503_, v_p_u2080_1504_, v_pos_1505_, v_h_1506_);
lean_dec(v_pos_1505_);
lean_dec(v_p_u2080_1504_);
lean_dec_ref(v_s_1503_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___redArg(lean_object* v_pos_1508_){
_start:
{
lean_inc(v_pos_1508_);
return v_pos_1508_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___redArg___boxed(lean_object* v_pos_1509_){
_start:
{
lean_object* v_res_1510_; 
v_res_1510_ = l_String_Pos_ofSliceTo___redArg(v_pos_1509_);
lean_dec(v_pos_1509_);
return v_res_1510_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo(lean_object* v_s_1511_, lean_object* v_p_u2080_1512_, lean_object* v_pos_1513_){
_start:
{
lean_inc(v_pos_1513_);
return v_pos_1513_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSliceTo___boxed(lean_object* v_s_1514_, lean_object* v_p_u2080_1515_, lean_object* v_pos_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_String_Pos_ofSliceTo(v_s_1514_, v_p_u2080_1515_, v_pos_1516_);
lean_dec(v_pos_1516_);
lean_dec(v_p_u2080_1515_);
lean_dec_ref(v_s_1514_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___redArg(lean_object* v_pos_1518_){
_start:
{
lean_inc(v_pos_1518_);
return v_pos_1518_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___redArg___boxed(lean_object* v_pos_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l_String_Pos_ofReplaceEnd___redArg(v_pos_1519_);
lean_dec(v_pos_1519_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd(lean_object* v_s_1521_, lean_object* v_p_u2080_1522_, lean_object* v_pos_1523_){
_start:
{
lean_inc(v_pos_1523_);
return v_pos_1523_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofReplaceEnd___boxed(lean_object* v_s_1524_, lean_object* v_p_u2080_1525_, lean_object* v_pos_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_String_Pos_ofReplaceEnd(v_s_1524_, v_p_u2080_1525_, v_pos_1526_);
lean_dec(v_pos_1526_);
lean_dec(v_p_u2080_1525_);
lean_dec_ref(v_s_1524_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___redArg(lean_object* v_pos_1528_){
_start:
{
lean_inc(v_pos_1528_);
return v_pos_1528_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___redArg___boxed(lean_object* v_pos_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_String_Pos_sliceTo___redArg(v_pos_1529_);
lean_dec(v_pos_1529_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceTo(lean_object* v_s_1531_, lean_object* v_p_u2080_1532_, lean_object* v_pos_1533_, lean_object* v_h_1534_){
_start:
{
lean_inc(v_pos_1533_);
return v_pos_1533_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceTo___boxed(lean_object* v_s_1535_, lean_object* v_p_u2080_1536_, lean_object* v_pos_1537_, lean_object* v_h_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_String_Pos_sliceTo(v_s_1535_, v_p_u2080_1536_, v_pos_1537_, v_h_1538_);
lean_dec(v_pos_1537_);
lean_dec(v_p_u2080_1536_);
lean_dec_ref(v_s_1535_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___redArg(lean_object* v_pos_1540_){
_start:
{
lean_inc(v_pos_1540_);
return v_pos_1540_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___redArg___boxed(lean_object* v_pos_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l_String_Pos_toReplaceEnd___redArg(v_pos_1541_);
lean_dec(v_pos_1541_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd(lean_object* v_s_1543_, lean_object* v_p_u2080_1544_, lean_object* v_pos_1545_, lean_object* v_h_1546_){
_start:
{
lean_inc(v_pos_1545_);
return v_pos_1545_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_toReplaceEnd___boxed(lean_object* v_s_1547_, lean_object* v_p_u2080_1548_, lean_object* v_pos_1549_, lean_object* v_h_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_String_Pos_toReplaceEnd(v_s_1547_, v_p_u2080_1548_, v_pos_1549_, v_h_1550_);
lean_dec(v_pos_1549_);
lean_dec(v_p_u2080_1548_);
lean_dec_ref(v_s_1547_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___redArg(lean_object* v_p_u2080_1552_, lean_object* v_pos_1553_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = lean_nat_add(v_p_u2080_1552_, v_pos_1553_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___redArg___boxed(lean_object* v_p_u2080_1555_, lean_object* v_pos_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_String_Slice_Pos_ofSlice___redArg(v_p_u2080_1555_, v_pos_1556_);
lean_dec(v_pos_1556_);
lean_dec(v_p_u2080_1555_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice(lean_object* v_s_1558_, lean_object* v_p_u2080_1559_, lean_object* v_p_u2081_1560_, lean_object* v_h_1561_, lean_object* v_pos_1562_){
_start:
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_nat_add(v_p_u2080_1559_, v_pos_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice___boxed(lean_object* v_s_1564_, lean_object* v_p_u2080_1565_, lean_object* v_p_u2081_1566_, lean_object* v_h_1567_, lean_object* v_pos_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_String_Slice_Pos_ofSlice(v_s_1564_, v_p_u2080_1565_, v_p_u2081_1566_, v_h_1567_, v_pos_1568_);
lean_dec(v_pos_1568_);
lean_dec(v_p_u2081_1566_);
lean_dec(v_p_u2080_1565_);
lean_dec_ref(v_s_1564_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___redArg(lean_object* v_p_u2080_1570_, lean_object* v_pos_1571_){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_nat_add(v_p_u2080_1570_, v_pos_1571_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___redArg___boxed(lean_object* v_p_u2080_1573_, lean_object* v_pos_1574_){
_start:
{
lean_object* v_res_1575_; 
v_res_1575_ = l_String_Pos_ofSlice___redArg(v_p_u2080_1573_, v_pos_1574_);
lean_dec(v_pos_1574_);
lean_dec(v_p_u2080_1573_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice(lean_object* v_s_1576_, lean_object* v_p_u2080_1577_, lean_object* v_p_u2081_1578_, lean_object* v_h_1579_, lean_object* v_pos_1580_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = lean_nat_add(v_p_u2080_1577_, v_pos_1580_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice___boxed(lean_object* v_s_1582_, lean_object* v_p_u2080_1583_, lean_object* v_p_u2081_1584_, lean_object* v_h_1585_, lean_object* v_pos_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = l_String_Pos_ofSlice(v_s_1582_, v_p_u2080_1583_, v_p_u2081_1584_, v_h_1585_, v_pos_1586_);
lean_dec(v_pos_1586_);
lean_dec(v_p_u2081_1584_);
lean_dec(v_p_u2080_1583_);
lean_dec_ref(v_s_1582_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___redArg(lean_object* v_pos_1588_, lean_object* v_p_u2080_1589_){
_start:
{
lean_object* v___x_1590_; 
v___x_1590_ = lean_nat_sub(v_pos_1588_, v_p_u2080_1589_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___redArg___boxed(lean_object* v_pos_1591_, lean_object* v_p_u2080_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_String_Slice_Pos_slice___redArg(v_pos_1591_, v_p_u2080_1592_);
lean_dec(v_p_u2080_1592_);
lean_dec(v_pos_1591_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice(lean_object* v_s_1594_, lean_object* v_pos_1595_, lean_object* v_p_u2080_1596_, lean_object* v_p_u2081_1597_, lean_object* v_h_u2081_1598_, lean_object* v_h_u2082_1599_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_nat_sub(v_pos_1595_, v_p_u2080_1596_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice___boxed(lean_object* v_s_1601_, lean_object* v_pos_1602_, lean_object* v_p_u2080_1603_, lean_object* v_p_u2081_1604_, lean_object* v_h_u2081_1605_, lean_object* v_h_u2082_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_String_Slice_Pos_slice(v_s_1601_, v_pos_1602_, v_p_u2080_1603_, v_p_u2081_1604_, v_h_u2081_1605_, v_h_u2082_1606_);
lean_dec(v_p_u2081_1604_);
lean_dec(v_p_u2080_1603_);
lean_dec(v_pos_1602_);
lean_dec_ref(v_s_1601_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice___redArg(lean_object* v_pos_1608_, lean_object* v_p_u2080_1609_){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = lean_nat_sub(v_pos_1608_, v_p_u2080_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice___redArg___boxed(lean_object* v_pos_1611_, lean_object* v_p_u2080_1612_){
_start:
{
lean_object* v_res_1613_; 
v_res_1613_ = l_String_Pos_slice___redArg(v_pos_1611_, v_p_u2080_1612_);
lean_dec(v_p_u2080_1612_);
lean_dec(v_pos_1611_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice(lean_object* v_s_1614_, lean_object* v_pos_1615_, lean_object* v_p_u2080_1616_, lean_object* v_p_u2081_1617_, lean_object* v_h_u2081_1618_, lean_object* v_h_u2082_1619_){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = lean_nat_sub(v_pos_1615_, v_p_u2080_1616_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice___boxed(lean_object* v_s_1621_, lean_object* v_pos_1622_, lean_object* v_p_u2080_1623_, lean_object* v_p_u2081_1624_, lean_object* v_h_u2081_1625_, lean_object* v_h_u2082_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_String_Pos_slice(v_s_1621_, v_pos_1622_, v_p_u2080_1623_, v_p_u2081_1624_, v_h_u2081_1625_, v_h_u2082_1626_);
lean_dec(v_p_u2081_1624_);
lean_dec(v_p_u2080_1623_);
lean_dec(v_pos_1622_);
lean_dec_ref(v_s_1621_);
return v_res_1627_;
}
}
static lean_object* _init_l_String_Slice_Pos_sliceOrPanic___redArg___closed__2(void){
_start:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1630_ = ((lean_object*)(l_String_Slice_Pos_sliceOrPanic___redArg___closed__1));
v___x_1631_ = lean_unsigned_to_nat(4u);
v___x_1632_ = lean_unsigned_to_nat(2611u);
v___x_1633_ = ((lean_object*)(l_String_Slice_Pos_sliceOrPanic___redArg___closed__0));
v___x_1634_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_1635_ = l_mkPanicMessageWithDecl(v___x_1634_, v___x_1633_, v___x_1632_, v___x_1631_, v___x_1630_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___redArg(lean_object* v_pos_1636_, lean_object* v_p_u2080_1637_, lean_object* v_p_u2081_1638_){
_start:
{
uint8_t v___x_1643_; 
v___x_1643_ = lean_nat_dec_le(v_p_u2080_1637_, v_pos_1636_);
if (v___x_1643_ == 0)
{
goto v___jp_1639_;
}
else
{
uint8_t v___x_1644_; 
v___x_1644_ = lean_nat_dec_le(v_pos_1636_, v_p_u2081_1638_);
if (v___x_1644_ == 0)
{
goto v___jp_1639_;
}
else
{
lean_object* v___x_1645_; 
v___x_1645_ = lean_nat_sub(v_pos_1636_, v_p_u2080_1637_);
return v___x_1645_;
}
}
v___jp_1639_:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1640_ = lean_unsigned_to_nat(0u);
v___x_1641_ = lean_obj_once(&l_String_Slice_Pos_sliceOrPanic___redArg___closed__2, &l_String_Slice_Pos_sliceOrPanic___redArg___closed__2_once, _init_l_String_Slice_Pos_sliceOrPanic___redArg___closed__2);
v___x_1642_ = l_panic___redArg(v___x_1640_, v___x_1641_);
return v___x_1642_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___redArg___boxed(lean_object* v_pos_1646_, lean_object* v_p_u2080_1647_, lean_object* v_p_u2081_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_String_Slice_Pos_sliceOrPanic___redArg(v_pos_1646_, v_p_u2080_1647_, v_p_u2081_1648_);
lean_dec(v_p_u2081_1648_);
lean_dec(v_p_u2080_1647_);
lean_dec(v_pos_1646_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic(lean_object* v_s_1650_, lean_object* v_pos_1651_, lean_object* v_p_u2080_1652_, lean_object* v_p_u2081_1653_, lean_object* v_h_1654_){
_start:
{
uint8_t v___x_1659_; 
v___x_1659_ = lean_nat_dec_le(v_p_u2080_1652_, v_pos_1651_);
if (v___x_1659_ == 0)
{
goto v___jp_1655_;
}
else
{
uint8_t v___x_1660_; 
v___x_1660_ = lean_nat_dec_le(v_pos_1651_, v_p_u2081_1653_);
if (v___x_1660_ == 0)
{
goto v___jp_1655_;
}
else
{
lean_object* v___x_1661_; 
v___x_1661_ = lean_nat_sub(v_pos_1651_, v_p_u2080_1652_);
return v___x_1661_;
}
}
v___jp_1655_:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1656_ = lean_unsigned_to_nat(0u);
v___x_1657_ = lean_obj_once(&l_String_Slice_Pos_sliceOrPanic___redArg___closed__2, &l_String_Slice_Pos_sliceOrPanic___redArg___closed__2_once, _init_l_String_Slice_Pos_sliceOrPanic___redArg___closed__2);
v___x_1658_ = l_panic___redArg(v___x_1656_, v___x_1657_);
return v___x_1658_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_sliceOrPanic___boxed(lean_object* v_s_1662_, lean_object* v_pos_1663_, lean_object* v_p_u2080_1664_, lean_object* v_p_u2081_1665_, lean_object* v_h_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l_String_Slice_Pos_sliceOrPanic(v_s_1662_, v_pos_1663_, v_p_u2080_1664_, v_p_u2081_1665_, v_h_1666_);
lean_dec(v_p_u2081_1665_);
lean_dec(v_p_u2080_1664_);
lean_dec(v_pos_1663_);
lean_dec_ref(v_s_1662_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___redArg(lean_object* v_pos_1668_, lean_object* v_p_u2080_1669_, lean_object* v_p_u2081_1670_){
_start:
{
uint8_t v___x_1675_; 
v___x_1675_ = lean_nat_dec_le(v_p_u2080_1669_, v_pos_1668_);
if (v___x_1675_ == 0)
{
goto v___jp_1671_;
}
else
{
uint8_t v___x_1676_; 
v___x_1676_ = lean_nat_dec_le(v_pos_1668_, v_p_u2081_1670_);
if (v___x_1676_ == 0)
{
goto v___jp_1671_;
}
else
{
lean_object* v___x_1677_; 
v___x_1677_ = lean_nat_sub(v_pos_1668_, v_p_u2080_1669_);
return v___x_1677_;
}
}
v___jp_1671_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1672_ = lean_unsigned_to_nat(0u);
v___x_1673_ = lean_obj_once(&l_String_Slice_Pos_sliceOrPanic___redArg___closed__2, &l_String_Slice_Pos_sliceOrPanic___redArg___closed__2_once, _init_l_String_Slice_Pos_sliceOrPanic___redArg___closed__2);
v___x_1674_ = l_panic___redArg(v___x_1672_, v___x_1673_);
return v___x_1674_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___redArg___boxed(lean_object* v_pos_1678_, lean_object* v_p_u2080_1679_, lean_object* v_p_u2081_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_String_Pos_sliceOrPanic___redArg(v_pos_1678_, v_p_u2080_1679_, v_p_u2081_1680_);
lean_dec(v_p_u2081_1680_);
lean_dec(v_p_u2080_1679_);
lean_dec(v_pos_1678_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic(lean_object* v_s_1682_, lean_object* v_pos_1683_, lean_object* v_p_u2080_1684_, lean_object* v_p_u2081_1685_, lean_object* v_h_1686_){
_start:
{
uint8_t v___x_1691_; 
v___x_1691_ = lean_nat_dec_le(v_p_u2080_1684_, v_pos_1683_);
if (v___x_1691_ == 0)
{
goto v___jp_1687_;
}
else
{
uint8_t v___x_1692_; 
v___x_1692_ = lean_nat_dec_le(v_pos_1683_, v_p_u2081_1685_);
if (v___x_1692_ == 0)
{
goto v___jp_1687_;
}
else
{
lean_object* v___x_1693_; 
v___x_1693_ = lean_nat_sub(v_pos_1683_, v_p_u2080_1684_);
return v___x_1693_;
}
}
v___jp_1687_:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1688_ = lean_unsigned_to_nat(0u);
v___x_1689_ = lean_obj_once(&l_String_Slice_Pos_sliceOrPanic___redArg___closed__2, &l_String_Slice_Pos_sliceOrPanic___redArg___closed__2_once, _init_l_String_Slice_Pos_sliceOrPanic___redArg___closed__2);
v___x_1690_ = l_panic___redArg(v___x_1688_, v___x_1689_);
return v___x_1690_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_sliceOrPanic___boxed(lean_object* v_s_1694_, lean_object* v_pos_1695_, lean_object* v_p_u2080_1696_, lean_object* v_p_u2081_1697_, lean_object* v_h_1698_){
_start:
{
lean_object* v_res_1699_; 
v_res_1699_ = l_String_Pos_sliceOrPanic(v_s_1694_, v_pos_1695_, v_p_u2080_1696_, v_p_u2081_1697_, v_h_1698_);
lean_dec(v_p_u2081_1697_);
lean_dec(v_p_u2080_1696_);
lean_dec(v_pos_1695_);
lean_dec_ref(v_s_1694_);
return v_res_1699_;
}
}
static lean_object* _init_l_String_Slice_Pos_ofSlice_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1701_ = ((lean_object*)(l_String_Slice_slice_x21___closed__1));
v___x_1702_ = lean_unsigned_to_nat(4u);
v___x_1703_ = lean_unsigned_to_nat(2635u);
v___x_1704_ = ((lean_object*)(l_String_Slice_Pos_ofSlice_x21___redArg___closed__0));
v___x_1705_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_1706_ = l_mkPanicMessageWithDecl(v___x_1705_, v___x_1704_, v___x_1703_, v___x_1702_, v___x_1701_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___redArg(lean_object* v_p_u2080_1707_, lean_object* v_p_u2081_1708_, lean_object* v_pos_1709_){
_start:
{
uint8_t v___x_1710_; 
v___x_1710_ = lean_nat_dec_le(v_p_u2080_1707_, v_p_u2081_1708_);
if (v___x_1710_ == 0)
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1711_ = lean_unsigned_to_nat(0u);
v___x_1712_ = lean_obj_once(&l_String_Slice_Pos_ofSlice_x21___redArg___closed__1, &l_String_Slice_Pos_ofSlice_x21___redArg___closed__1_once, _init_l_String_Slice_Pos_ofSlice_x21___redArg___closed__1);
v___x_1713_ = l_panic___redArg(v___x_1711_, v___x_1712_);
return v___x_1713_;
}
else
{
lean_object* v___x_1714_; 
v___x_1714_ = lean_nat_add(v_p_u2080_1707_, v_pos_1709_);
return v___x_1714_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___redArg___boxed(lean_object* v_p_u2080_1715_, lean_object* v_p_u2081_1716_, lean_object* v_pos_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_String_Slice_Pos_ofSlice_x21___redArg(v_p_u2080_1715_, v_p_u2081_1716_, v_pos_1717_);
lean_dec(v_pos_1717_);
lean_dec(v_p_u2081_1716_);
lean_dec(v_p_u2080_1715_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21(lean_object* v_s_1719_, lean_object* v_p_u2080_1720_, lean_object* v_p_u2081_1721_, lean_object* v_pos_1722_){
_start:
{
uint8_t v___x_1723_; 
v___x_1723_ = lean_nat_dec_le(v_p_u2080_1720_, v_p_u2081_1721_);
if (v___x_1723_ == 0)
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1724_ = lean_unsigned_to_nat(0u);
v___x_1725_ = lean_obj_once(&l_String_Slice_Pos_ofSlice_x21___redArg___closed__1, &l_String_Slice_Pos_ofSlice_x21___redArg___closed__1_once, _init_l_String_Slice_Pos_ofSlice_x21___redArg___closed__1);
v___x_1726_ = l_panic___redArg(v___x_1724_, v___x_1725_);
return v___x_1726_;
}
else
{
lean_object* v___x_1727_; 
v___x_1727_ = lean_nat_add(v_p_u2080_1720_, v_pos_1722_);
return v___x_1727_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_ofSlice_x21___boxed(lean_object* v_s_1728_, lean_object* v_p_u2080_1729_, lean_object* v_p_u2081_1730_, lean_object* v_pos_1731_){
_start:
{
lean_object* v_res_1732_; 
v_res_1732_ = l_String_Slice_Pos_ofSlice_x21(v_s_1728_, v_p_u2080_1729_, v_p_u2081_1730_, v_pos_1731_);
lean_dec(v_pos_1731_);
lean_dec(v_p_u2081_1730_);
lean_dec(v_p_u2080_1729_);
lean_dec_ref(v_s_1728_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___redArg(lean_object* v_p_u2080_1733_, lean_object* v_p_u2081_1734_, lean_object* v_pos_1735_){
_start:
{
uint8_t v___x_1736_; 
v___x_1736_ = lean_nat_dec_le(v_p_u2080_1733_, v_p_u2081_1734_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1737_ = lean_unsigned_to_nat(0u);
v___x_1738_ = lean_obj_once(&l_String_Slice_Pos_ofSlice_x21___redArg___closed__1, &l_String_Slice_Pos_ofSlice_x21___redArg___closed__1_once, _init_l_String_Slice_Pos_ofSlice_x21___redArg___closed__1);
v___x_1739_ = l_panic___redArg(v___x_1737_, v___x_1738_);
return v___x_1739_;
}
else
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_nat_add(v_p_u2080_1733_, v_pos_1735_);
return v___x_1740_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___redArg___boxed(lean_object* v_p_u2080_1741_, lean_object* v_p_u2081_1742_, lean_object* v_pos_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_String_Pos_ofSlice_x21___redArg(v_p_u2080_1741_, v_p_u2081_1742_, v_pos_1743_);
lean_dec(v_pos_1743_);
lean_dec(v_p_u2081_1742_);
lean_dec(v_p_u2080_1741_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21(lean_object* v_s_1745_, lean_object* v_p_u2080_1746_, lean_object* v_p_u2081_1747_, lean_object* v_pos_1748_){
_start:
{
uint8_t v___x_1749_; 
v___x_1749_ = lean_nat_dec_le(v_p_u2080_1746_, v_p_u2081_1747_);
if (v___x_1749_ == 0)
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1750_ = lean_unsigned_to_nat(0u);
v___x_1751_ = lean_obj_once(&l_String_Slice_Pos_ofSlice_x21___redArg___closed__1, &l_String_Slice_Pos_ofSlice_x21___redArg___closed__1_once, _init_l_String_Slice_Pos_ofSlice_x21___redArg___closed__1);
v___x_1752_ = l_panic___redArg(v___x_1750_, v___x_1751_);
return v___x_1752_;
}
else
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_nat_add(v_p_u2080_1746_, v_pos_1748_);
return v___x_1753_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_ofSlice_x21___boxed(lean_object* v_s_1754_, lean_object* v_p_u2080_1755_, lean_object* v_p_u2081_1756_, lean_object* v_pos_1757_){
_start:
{
lean_object* v_res_1758_; 
v_res_1758_ = l_String_Pos_ofSlice_x21(v_s_1754_, v_p_u2080_1755_, v_p_u2081_1756_, v_pos_1757_);
lean_dec(v_pos_1757_);
lean_dec(v_p_u2081_1756_);
lean_dec(v_p_u2080_1755_);
lean_dec_ref(v_s_1754_);
return v_res_1758_;
}
}
static lean_object* _init_l_String_Slice_Pos_slice_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1761_ = ((lean_object*)(l_String_Slice_Pos_slice_x21___redArg___closed__1));
v___x_1762_ = lean_unsigned_to_nat(4u);
v___x_1763_ = lean_unsigned_to_nat(2653u);
v___x_1764_ = ((lean_object*)(l_String_Slice_Pos_slice_x21___redArg___closed__0));
v___x_1765_ = ((lean_object*)(l_String_fromUTF8_x21___closed__1));
v___x_1766_ = l_mkPanicMessageWithDecl(v___x_1765_, v___x_1764_, v___x_1763_, v___x_1762_, v___x_1761_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___redArg(lean_object* v_pos_1767_, lean_object* v_p_u2080_1768_, lean_object* v_p_u2081_1769_){
_start:
{
uint8_t v___x_1774_; 
v___x_1774_ = lean_nat_dec_le(v_p_u2080_1768_, v_pos_1767_);
if (v___x_1774_ == 0)
{
goto v___jp_1770_;
}
else
{
uint8_t v___x_1775_; 
v___x_1775_ = lean_nat_dec_le(v_pos_1767_, v_p_u2081_1769_);
if (v___x_1775_ == 0)
{
goto v___jp_1770_;
}
else
{
lean_object* v___x_1776_; 
v___x_1776_ = lean_nat_sub(v_pos_1767_, v_p_u2080_1768_);
return v___x_1776_;
}
}
v___jp_1770_:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1771_ = lean_unsigned_to_nat(0u);
v___x_1772_ = lean_obj_once(&l_String_Slice_Pos_slice_x21___redArg___closed__2, &l_String_Slice_Pos_slice_x21___redArg___closed__2_once, _init_l_String_Slice_Pos_slice_x21___redArg___closed__2);
v___x_1773_ = l_panic___redArg(v___x_1771_, v___x_1772_);
return v___x_1773_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___redArg___boxed(lean_object* v_pos_1777_, lean_object* v_p_u2080_1778_, lean_object* v_p_u2081_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_String_Slice_Pos_slice_x21___redArg(v_pos_1777_, v_p_u2080_1778_, v_p_u2081_1779_);
lean_dec(v_p_u2081_1779_);
lean_dec(v_p_u2080_1778_);
lean_dec(v_pos_1777_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21(lean_object* v_s_1781_, lean_object* v_pos_1782_, lean_object* v_p_u2080_1783_, lean_object* v_p_u2081_1784_){
_start:
{
uint8_t v___x_1789_; 
v___x_1789_ = lean_nat_dec_le(v_p_u2080_1783_, v_pos_1782_);
if (v___x_1789_ == 0)
{
goto v___jp_1785_;
}
else
{
uint8_t v___x_1790_; 
v___x_1790_ = lean_nat_dec_le(v_pos_1782_, v_p_u2081_1784_);
if (v___x_1790_ == 0)
{
goto v___jp_1785_;
}
else
{
lean_object* v___x_1791_; 
v___x_1791_ = lean_nat_sub(v_pos_1782_, v_p_u2080_1783_);
return v___x_1791_;
}
}
v___jp_1785_:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1786_ = lean_unsigned_to_nat(0u);
v___x_1787_ = lean_obj_once(&l_String_Slice_Pos_slice_x21___redArg___closed__2, &l_String_Slice_Pos_slice_x21___redArg___closed__2_once, _init_l_String_Slice_Pos_slice_x21___redArg___closed__2);
v___x_1788_ = l_panic___redArg(v___x_1786_, v___x_1787_);
return v___x_1788_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_slice_x21___boxed(lean_object* v_s_1792_, lean_object* v_pos_1793_, lean_object* v_p_u2080_1794_, lean_object* v_p_u2081_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_String_Slice_Pos_slice_x21(v_s_1792_, v_pos_1793_, v_p_u2080_1794_, v_p_u2081_1795_);
lean_dec(v_p_u2081_1795_);
lean_dec(v_p_u2080_1794_);
lean_dec(v_pos_1793_);
lean_dec_ref(v_s_1792_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___redArg(lean_object* v_pos_1797_, lean_object* v_p_u2080_1798_, lean_object* v_p_u2081_1799_){
_start:
{
uint8_t v___x_1804_; 
v___x_1804_ = lean_nat_dec_le(v_p_u2080_1798_, v_pos_1797_);
if (v___x_1804_ == 0)
{
goto v___jp_1800_;
}
else
{
uint8_t v___x_1805_; 
v___x_1805_ = lean_nat_dec_le(v_pos_1797_, v_p_u2081_1799_);
if (v___x_1805_ == 0)
{
goto v___jp_1800_;
}
else
{
lean_object* v___x_1806_; 
v___x_1806_ = lean_nat_sub(v_pos_1797_, v_p_u2080_1798_);
return v___x_1806_;
}
}
v___jp_1800_:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1801_ = lean_unsigned_to_nat(0u);
v___x_1802_ = lean_obj_once(&l_String_Slice_Pos_slice_x21___redArg___closed__2, &l_String_Slice_Pos_slice_x21___redArg___closed__2_once, _init_l_String_Slice_Pos_slice_x21___redArg___closed__2);
v___x_1803_ = l_panic___redArg(v___x_1801_, v___x_1802_);
return v___x_1803_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___redArg___boxed(lean_object* v_pos_1807_, lean_object* v_p_u2080_1808_, lean_object* v_p_u2081_1809_){
_start:
{
lean_object* v_res_1810_; 
v_res_1810_ = l_String_Pos_slice_x21___redArg(v_pos_1807_, v_p_u2080_1808_, v_p_u2081_1809_);
lean_dec(v_p_u2081_1809_);
lean_dec(v_p_u2080_1808_);
lean_dec(v_pos_1807_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice_x21(lean_object* v_s_1811_, lean_object* v_pos_1812_, lean_object* v_p_u2080_1813_, lean_object* v_p_u2081_1814_){
_start:
{
uint8_t v___x_1819_; 
v___x_1819_ = lean_nat_dec_le(v_p_u2080_1813_, v_pos_1812_);
if (v___x_1819_ == 0)
{
goto v___jp_1815_;
}
else
{
uint8_t v___x_1820_; 
v___x_1820_ = lean_nat_dec_le(v_pos_1812_, v_p_u2081_1814_);
if (v___x_1820_ == 0)
{
goto v___jp_1815_;
}
else
{
lean_object* v___x_1821_; 
v___x_1821_ = lean_nat_sub(v_pos_1812_, v_p_u2080_1813_);
return v___x_1821_;
}
}
v___jp_1815_:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1816_ = lean_unsigned_to_nat(0u);
v___x_1817_ = lean_obj_once(&l_String_Slice_Pos_slice_x21___redArg___closed__2, &l_String_Slice_Pos_slice_x21___redArg___closed__2_once, _init_l_String_Slice_Pos_slice_x21___redArg___closed__2);
v___x_1818_ = l_panic___redArg(v___x_1816_, v___x_1817_);
return v___x_1818_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_slice_x21___boxed(lean_object* v_s_1822_, lean_object* v_pos_1823_, lean_object* v_p_u2080_1824_, lean_object* v_p_u2081_1825_){
_start:
{
lean_object* v_res_1826_; 
v_res_1826_ = l_String_Pos_slice_x21(v_s_1822_, v_pos_1823_, v_p_u2080_1824_, v_p_u2081_1825_);
lean_dec(v_p_u2081_1825_);
lean_dec(v_p_u2080_1824_);
lean_dec(v_pos_1823_);
lean_dec_ref(v_s_1822_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_extract(lean_object* v_s_1827_, lean_object* v_p_u2080_1828_, lean_object* v_p_u2081_1829_){
_start:
{
lean_object* v_str_1830_; lean_object* v_startInclusive_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v_str_1830_ = lean_ctor_get(v_s_1827_, 0);
v_startInclusive_1831_ = lean_ctor_get(v_s_1827_, 1);
v___x_1832_ = lean_nat_add(v_startInclusive_1831_, v_p_u2080_1828_);
v___x_1833_ = lean_nat_add(v_startInclusive_1831_, v_p_u2081_1829_);
v___x_1834_ = lean_string_utf8_extract(v_str_1830_, v___x_1832_, v___x_1833_);
lean_dec(v___x_1833_);
lean_dec(v___x_1832_);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_extract___boxed(lean_object* v_s_1835_, lean_object* v_p_u2080_1836_, lean_object* v_p_u2081_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_String_Slice_extract(v_s_1835_, v_p_u2080_1836_, v_p_u2081_1837_);
lean_dec(v_p_u2081_1837_);
lean_dec(v_p_u2080_1836_);
lean_dec_ref(v_s_1835_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextn(lean_object* v_s_1839_, lean_object* v_p_1840_, lean_object* v_n_1841_){
_start:
{
lean_object* v_str_1842_; lean_object* v_startInclusive_1843_; lean_object* v_endExclusive_1844_; lean_object* v_zero_1845_; uint8_t v_isZero_1846_; 
v_str_1842_ = lean_ctor_get(v_s_1839_, 0);
v_startInclusive_1843_ = lean_ctor_get(v_s_1839_, 1);
v_endExclusive_1844_ = lean_ctor_get(v_s_1839_, 2);
v_zero_1845_ = lean_unsigned_to_nat(0u);
v_isZero_1846_ = lean_nat_dec_eq(v_n_1841_, v_zero_1845_);
if (v_isZero_1846_ == 1)
{
lean_dec(v_n_1841_);
return v_p_1840_;
}
else
{
lean_object* v___x_1847_; uint8_t v___x_1848_; lean_object* v_one_1849_; lean_object* v_n_1850_; 
v___x_1847_ = lean_nat_sub(v_endExclusive_1844_, v_startInclusive_1843_);
v___x_1848_ = lean_nat_dec_eq(v_p_1840_, v___x_1847_);
lean_dec(v___x_1847_);
v_one_1849_ = lean_unsigned_to_nat(1u);
v_n_1850_ = lean_nat_sub(v_n_1841_, v_one_1849_);
lean_dec(v_n_1841_);
if (v___x_1848_ == 0)
{
goto v___jp_1851_;
}
else
{
if (v_isZero_1846_ == 0)
{
lean_dec(v_n_1850_);
return v_p_1840_;
}
else
{
goto v___jp_1851_;
}
}
v___jp_1851_:
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1852_ = lean_nat_add(v_startInclusive_1843_, v_p_1840_);
lean_dec(v_p_1840_);
v___x_1853_ = lean_string_utf8_next_fast(v_str_1842_, v___x_1852_);
lean_dec(v___x_1852_);
v___x_1854_ = lean_nat_sub(v___x_1853_, v_startInclusive_1843_);
v_p_1840_ = v___x_1854_;
v_n_1841_ = v_n_1850_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_nextn___boxed(lean_object* v_s_1856_, lean_object* v_p_1857_, lean_object* v_n_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_String_Slice_Pos_nextn(v_s_1856_, v_p_1857_, v_n_1858_);
lean_dec_ref(v_s_1856_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_nextn(lean_object* v_s_1860_, lean_object* v_p_1861_, lean_object* v_n_1862_){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1863_ = lean_unsigned_to_nat(0u);
v___x_1864_ = lean_string_utf8_byte_size(v_s_1860_);
v___x_1865_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1865_, 0, v_s_1860_);
lean_ctor_set(v___x_1865_, 1, v___x_1863_);
lean_ctor_set(v___x_1865_, 2, v___x_1864_);
v___x_1866_ = l_String_Slice_Pos_nextn(v___x_1865_, v_p_1861_, v_n_1862_);
lean_dec_ref(v___x_1865_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___redArg(lean_object* v_n_1867_, lean_object* v_h__1_1868_, lean_object* v_h__2_1869_){
_start:
{
lean_object* v_zero_1870_; uint8_t v_isZero_1871_; 
v_zero_1870_ = lean_unsigned_to_nat(0u);
v_isZero_1871_ = lean_nat_dec_eq(v_n_1867_, v_zero_1870_);
if (v_isZero_1871_ == 1)
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
lean_dec(v_h__2_1869_);
v___x_1872_ = lean_box(0);
v___x_1873_ = lean_apply_1(v_h__1_1868_, v___x_1872_);
return v___x_1873_;
}
else
{
lean_object* v_one_1874_; lean_object* v_n_1875_; lean_object* v___x_1876_; 
lean_dec(v_h__1_1868_);
v_one_1874_ = lean_unsigned_to_nat(1u);
v_n_1875_ = lean_nat_sub(v_n_1867_, v_one_1874_);
v___x_1876_ = lean_apply_1(v_h__2_1869_, v_n_1875_);
return v___x_1876_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___redArg___boxed(lean_object* v_n_1877_, lean_object* v_h__1_1878_, lean_object* v_h__2_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___redArg(v_n_1877_, v_h__1_1878_, v_h__2_1879_);
lean_dec(v_n_1877_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter(lean_object* v_motive_1881_, lean_object* v_n_1882_, lean_object* v_h__1_1883_, lean_object* v_h__2_1884_){
_start:
{
lean_object* v_zero_1885_; uint8_t v_isZero_1886_; 
v_zero_1885_ = lean_unsigned_to_nat(0u);
v_isZero_1886_ = lean_nat_dec_eq(v_n_1882_, v_zero_1885_);
if (v_isZero_1886_ == 1)
{
lean_object* v___x_1887_; lean_object* v___x_1888_; 
lean_dec(v_h__2_1884_);
v___x_1887_ = lean_box(0);
v___x_1888_ = lean_apply_1(v_h__1_1883_, v___x_1887_);
return v___x_1888_;
}
else
{
lean_object* v_one_1889_; lean_object* v_n_1890_; lean_object* v___x_1891_; 
lean_dec(v_h__1_1883_);
v_one_1889_ = lean_unsigned_to_nat(1u);
v_n_1890_ = lean_nat_sub(v_n_1882_, v_one_1889_);
v___x_1891_ = lean_apply_1(v_h__2_1884_, v_n_1890_);
return v___x_1891_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter___boxed(lean_object* v_motive_1892_, lean_object* v_n_1893_, lean_object* v_h__1_1894_, lean_object* v_h__2_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l___private_Init_Data_String_Basic_0__String_Slice_Pos_nextn_match__1_splitter(v_motive_1892_, v_n_1893_, v_h__1_1894_, v_h__2_1895_);
lean_dec(v_n_1893_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_next___boxed(lean_object* v_s_1899_, lean_object* v_p_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = lean_string_utf8_next(v_s_1899_, v_p_1900_);
lean_dec(v_p_1900_);
lean_dec_ref(v_s_1899_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l_String_next___boxed(lean_object* v_s_1904_, lean_object* v_p_1905_){
_start:
{
lean_object* v_res_1906_; 
v_res_1906_ = lean_string_utf8_next(v_s_1904_, v_p_1905_);
lean_dec(v_p_1905_);
lean_dec_ref(v_s_1904_);
return v_res_1906_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8PrevAux(lean_object* v_x_1907_, lean_object* v_x_1908_, lean_object* v_x_1909_){
_start:
{
if (lean_obj_tag(v_x_1907_) == 0)
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
lean_dec(v_x_1908_);
v___x_1910_ = lean_unsigned_to_nat(1u);
v___x_1911_ = lean_nat_sub(v_x_1909_, v___x_1910_);
return v___x_1911_;
}
else
{
lean_object* v_head_1912_; lean_object* v_tail_1913_; uint32_t v___x_1914_; lean_object* v___x_1915_; lean_object* v_i_x27_1916_; uint8_t v___x_1917_; 
v_head_1912_ = lean_ctor_get(v_x_1907_, 0);
v_tail_1913_ = lean_ctor_get(v_x_1907_, 1);
v___x_1914_ = lean_unbox_uint32(v_head_1912_);
v___x_1915_ = l_Char_utf8Size(v___x_1914_);
v_i_x27_1916_ = lean_nat_add(v_x_1908_, v___x_1915_);
lean_dec(v___x_1915_);
v___x_1917_ = lean_nat_dec_le(v_x_1909_, v_i_x27_1916_);
if (v___x_1917_ == 0)
{
lean_dec(v_x_1908_);
v_x_1907_ = v_tail_1913_;
v_x_1908_ = v_i_x27_1916_;
goto _start;
}
else
{
lean_dec(v_i_x27_1916_);
return v_x_1908_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_utf8PrevAux___boxed(lean_object* v_x_1919_, lean_object* v_x_1920_, lean_object* v_x_1921_){
_start:
{
lean_object* v_res_1922_; 
v_res_1922_ = l_String_Pos_Raw_utf8PrevAux(v_x_1919_, v_x_1920_, v_x_1921_);
lean_dec(v_x_1921_);
lean_dec(v_x_1919_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l_String_utf8PrevAux(lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_){
_start:
{
lean_object* v___x_1926_; 
v___x_1926_ = l_String_Pos_Raw_utf8PrevAux(v_a_1923_, v_a_1924_, v_a_1925_);
return v___x_1926_;
}
}
LEAN_EXPORT lean_object* l_String_utf8PrevAux___boxed(lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_String_utf8PrevAux(v_a_1927_, v_a_1928_, v_a_1929_);
lean_dec(v_a_1929_);
lean_dec(v_a_1927_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_prev___boxed(lean_object* v_a_00___x40___internal___hyg_1933_, lean_object* v_a_00___x40___internal___hyg_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = lean_string_utf8_prev(v_a_00___x40___internal___hyg_1933_, v_a_00___x40___internal___hyg_1934_);
lean_dec(v_a_00___x40___internal___hyg_1934_);
lean_dec_ref(v_a_00___x40___internal___hyg_1933_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l_String_prev___boxed(lean_object* v_a_00___x40___internal___hyg_1938_, lean_object* v_a_00___x40___internal___hyg_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = lean_string_utf8_prev(v_a_00___x40___internal___hyg_1938_, v_a_00___x40___internal___hyg_1939_);
lean_dec(v_a_00___x40___internal___hyg_1939_);
lean_dec_ref(v_a_00___x40___internal___hyg_1938_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_atEnd___boxed(lean_object* v_a_00___x40___internal___hyg_1943_, lean_object* v_a_00___x40___internal___hyg_1944_){
_start:
{
uint8_t v_res_1945_; lean_object* v_r_1946_; 
v_res_1945_ = lean_string_utf8_at_end(v_a_00___x40___internal___hyg_1943_, v_a_00___x40___internal___hyg_1944_);
lean_dec(v_a_00___x40___internal___hyg_1944_);
lean_dec_ref(v_a_00___x40___internal___hyg_1943_);
v_r_1946_ = lean_box(v_res_1945_);
return v_r_1946_;
}
}
LEAN_EXPORT lean_object* l_String_atEnd___boxed(lean_object* v_a_00___x40___internal___hyg_1949_, lean_object* v_a_00___x40___internal___hyg_1950_){
_start:
{
uint8_t v_res_1951_; lean_object* v_r_1952_; 
v_res_1951_ = lean_string_utf8_at_end(v_a_00___x40___internal___hyg_1949_, v_a_00___x40___internal___hyg_1950_);
lean_dec(v_a_00___x40___internal___hyg_1950_);
lean_dec_ref(v_a_00___x40___internal___hyg_1949_);
v_r_1952_ = lean_box(v_res_1951_);
return v_r_1952_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_get_x27___boxed(lean_object* v_s_1956_, lean_object* v_p_1957_, lean_object* v_h_1958_){
_start:
{
uint32_t v_res_1959_; lean_object* v_r_1960_; 
v_res_1959_ = lean_string_utf8_get_fast(v_s_1956_, v_p_1957_);
lean_dec(v_p_1957_);
lean_dec_ref(v_s_1956_);
v_r_1960_ = lean_box_uint32(v_res_1959_);
return v_r_1960_;
}
}
LEAN_EXPORT lean_object* l_String_get_x27___boxed(lean_object* v_s_1964_, lean_object* v_p_1965_, lean_object* v_h_1966_){
_start:
{
uint32_t v_res_1967_; lean_object* v_r_1968_; 
v_res_1967_ = lean_string_utf8_get_fast(v_s_1964_, v_p_1965_);
lean_dec(v_p_1965_);
lean_dec_ref(v_s_1964_);
v_r_1968_ = lean_box_uint32(v_res_1967_);
return v_r_1968_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_next_x27___boxed(lean_object* v_s_1972_, lean_object* v_p_1973_, lean_object* v_h_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = lean_string_utf8_next_fast(v_s_1972_, v_p_1973_);
lean_dec(v_p_1973_);
lean_dec_ref(v_s_1972_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l_String_next_x27___boxed(lean_object* v_s_1979_, lean_object* v_p_1980_, lean_object* v_h_1981_){
_start:
{
lean_object* v_res_1982_; 
v_res_1982_ = lean_string_utf8_next_fast(v_s_1979_, v_p_1980_);
lean_dec(v_p_1980_);
lean_dec_ref(v_s_1979_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_utf8GetAux_match__1_splitter___redArg(lean_object* v_x_1983_, lean_object* v_x_1984_, lean_object* v_x_1985_, lean_object* v_h__1_1986_, lean_object* v_h__2_1987_){
_start:
{
if (lean_obj_tag(v_x_1983_) == 0)
{
lean_object* v___x_1988_; 
lean_dec(v_h__2_1987_);
v___x_1988_ = lean_apply_2(v_h__1_1986_, v_x_1984_, v_x_1985_);
return v___x_1988_;
}
else
{
lean_object* v_head_1989_; lean_object* v_tail_1990_; lean_object* v___x_1991_; 
lean_dec(v_h__1_1986_);
v_head_1989_ = lean_ctor_get(v_x_1983_, 0);
lean_inc(v_head_1989_);
v_tail_1990_ = lean_ctor_get(v_x_1983_, 1);
lean_inc(v_tail_1990_);
lean_dec_ref(v_x_1983_);
v___x_1991_ = lean_apply_4(v_h__2_1987_, v_head_1989_, v_tail_1990_, v_x_1984_, v_x_1985_);
return v___x_1991_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_utf8GetAux_match__1_splitter(lean_object* v_motive_1992_, lean_object* v_x_1993_, lean_object* v_x_1994_, lean_object* v_x_1995_, lean_object* v_h__1_1996_, lean_object* v_h__2_1997_){
_start:
{
if (lean_obj_tag(v_x_1993_) == 0)
{
lean_object* v___x_1998_; 
lean_dec(v_h__2_1997_);
v___x_1998_ = lean_apply_2(v_h__1_1996_, v_x_1994_, v_x_1995_);
return v___x_1998_;
}
else
{
lean_object* v_head_1999_; lean_object* v_tail_2000_; lean_object* v___x_2001_; 
lean_dec(v_h__1_1996_);
v_head_1999_ = lean_ctor_get(v_x_1993_, 0);
lean_inc(v_head_1999_);
v_tail_2000_ = lean_ctor_get(v_x_1993_, 1);
lean_inc(v_tail_2000_);
lean_dec_ref(v_x_1993_);
v___x_2001_ = lean_apply_4(v_h__2_1997_, v_head_1999_, v_tail_2000_, v_x_1994_, v_x_1995_);
return v___x_2001_;
}
}
}
LEAN_EXPORT lean_object* l_String_firstDiffPos_loop(lean_object* v_a_2002_, lean_object* v_b_2003_, lean_object* v_stopPos_2004_, lean_object* v_i_2005_){
_start:
{
uint8_t v___x_2006_; 
v___x_2006_ = lean_nat_dec_lt(v_i_2005_, v_stopPos_2004_);
if (v___x_2006_ == 0)
{
return v_i_2005_;
}
else
{
uint32_t v___x_2007_; uint32_t v___x_2008_; uint8_t v___x_2009_; 
v___x_2007_ = lean_string_utf8_get(v_a_2002_, v_i_2005_);
v___x_2008_ = lean_string_utf8_get(v_b_2003_, v_i_2005_);
v___x_2009_ = lean_uint32_dec_eq(v___x_2007_, v___x_2008_);
if (v___x_2009_ == 0)
{
return v_i_2005_;
}
else
{
lean_object* v___x_2010_; 
v___x_2010_ = lean_string_utf8_next(v_a_2002_, v_i_2005_);
lean_dec(v_i_2005_);
v_i_2005_ = v___x_2010_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_firstDiffPos_loop___boxed(lean_object* v_a_2012_, lean_object* v_b_2013_, lean_object* v_stopPos_2014_, lean_object* v_i_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l_String_firstDiffPos_loop(v_a_2012_, v_b_2013_, v_stopPos_2014_, v_i_2015_);
lean_dec(v_stopPos_2014_);
lean_dec_ref(v_b_2013_);
lean_dec_ref(v_a_2012_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_String_firstDiffPos(lean_object* v_a_2017_, lean_object* v_b_2018_){
_start:
{
lean_object* v___y_2020_; lean_object* v___x_2023_; lean_object* v___x_2024_; uint8_t v___x_2025_; 
v___x_2023_ = lean_string_utf8_byte_size(v_a_2017_);
v___x_2024_ = lean_string_utf8_byte_size(v_b_2018_);
v___x_2025_ = lean_nat_dec_le(v___x_2023_, v___x_2024_);
if (v___x_2025_ == 0)
{
v___y_2020_ = v___x_2024_;
goto v___jp_2019_;
}
else
{
v___y_2020_ = v___x_2023_;
goto v___jp_2019_;
}
v___jp_2019_:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2021_ = lean_unsigned_to_nat(0u);
v___x_2022_ = l_String_firstDiffPos_loop(v_a_2017_, v_b_2018_, v___y_2020_, v___x_2021_);
lean_dec(v___y_2020_);
return v___x_2022_;
}
}
}
LEAN_EXPORT lean_object* l_String_firstDiffPos___boxed(lean_object* v_a_2026_, lean_object* v_b_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_String_firstDiffPos(v_a_2026_, v_b_2027_);
lean_dec_ref(v_b_2027_);
lean_dec_ref(v_a_2026_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2082(lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_){
_start:
{
if (lean_obj_tag(v_a_2029_) == 0)
{
return v_a_2029_;
}
else
{
lean_object* v_head_2032_; lean_object* v_tail_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2046_; 
v_head_2032_ = lean_ctor_get(v_a_2029_, 0);
v_tail_2033_ = lean_ctor_get(v_a_2029_, 1);
v_isSharedCheck_2046_ = !lean_is_exclusive(v_a_2029_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2035_ = v_a_2029_;
v_isShared_2036_ = v_isSharedCheck_2046_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_tail_2033_);
lean_inc(v_head_2032_);
lean_dec(v_a_2029_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2046_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
uint8_t v___x_2037_; 
v___x_2037_ = lean_nat_dec_eq(v_a_2030_, v_a_2031_);
if (v___x_2037_ == 0)
{
uint32_t v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2043_; 
v___x_2038_ = lean_unbox_uint32(v_head_2032_);
v___x_2039_ = l_Char_utf8Size(v___x_2038_);
v___x_2040_ = lean_nat_add(v_a_2030_, v___x_2039_);
lean_dec(v___x_2039_);
v___x_2041_ = l_String_Pos_Raw_extract_go_u2082(v_tail_2033_, v___x_2040_, v_a_2031_);
lean_dec(v___x_2040_);
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 1, v___x_2041_);
v___x_2043_ = v___x_2035_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_head_2032_);
lean_ctor_set(v_reuseFailAlloc_2044_, 1, v___x_2041_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
return v___x_2043_;
}
}
else
{
lean_object* v___x_2045_; 
lean_del_object(v___x_2035_);
lean_dec(v_tail_2033_);
lean_dec(v_head_2032_);
v___x_2045_ = lean_box(0);
return v___x_2045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2082___boxed(lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l_String_Pos_Raw_extract_go_u2082(v_a_2047_, v_a_2048_, v_a_2049_);
lean_dec(v_a_2049_);
lean_dec(v_a_2048_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2081(lean_object* v_a_2051_, lean_object* v_a_2052_, lean_object* v_a_2053_, lean_object* v_a_2054_){
_start:
{
if (lean_obj_tag(v_a_2051_) == 0)
{
lean_dec(v_a_2052_);
return v_a_2051_;
}
else
{
lean_object* v_head_2055_; lean_object* v_tail_2056_; uint8_t v___x_2057_; 
v_head_2055_ = lean_ctor_get(v_a_2051_, 0);
v_tail_2056_ = lean_ctor_get(v_a_2051_, 1);
v___x_2057_ = lean_nat_dec_eq(v_a_2052_, v_a_2053_);
if (v___x_2057_ == 0)
{
uint32_t v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
lean_inc(v_tail_2056_);
lean_inc(v_head_2055_);
lean_dec_ref(v_a_2051_);
v___x_2058_ = lean_unbox_uint32(v_head_2055_);
lean_dec(v_head_2055_);
v___x_2059_ = l_Char_utf8Size(v___x_2058_);
v___x_2060_ = lean_nat_add(v_a_2052_, v___x_2059_);
lean_dec(v___x_2059_);
lean_dec(v_a_2052_);
v_a_2051_ = v_tail_2056_;
v_a_2052_ = v___x_2060_;
goto _start;
}
else
{
lean_object* v___x_2062_; 
v___x_2062_ = l_String_Pos_Raw_extract_go_u2082(v_a_2051_, v_a_2052_, v_a_2054_);
lean_dec(v_a_2052_);
return v___x_2062_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract_go_u2081___boxed(lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_String_Pos_Raw_extract_go_u2081(v_a_2063_, v_a_2064_, v_a_2065_, v_a_2066_);
lean_dec(v_a_2066_);
lean_dec(v_a_2065_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_extract___boxed(lean_object* v_a_00___x40___internal___hyg_2071_, lean_object* v_a_00___x40___internal___hyg_2072_, lean_object* v_a_00___x40___internal___hyg_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = lean_string_utf8_extract(v_a_00___x40___internal___hyg_2071_, v_a_00___x40___internal___hyg_2072_, v_a_00___x40___internal___hyg_2073_);
lean_dec(v_a_00___x40___internal___hyg_2073_);
lean_dec(v_a_00___x40___internal___hyg_2072_);
lean_dec_ref(v_a_00___x40___internal___hyg_2071_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPosAux(lean_object* v_s_2075_, lean_object* v_pos_2076_, lean_object* v_i_2077_, lean_object* v_offset_2078_){
_start:
{
uint8_t v___x_2079_; 
v___x_2079_ = lean_nat_dec_le(v_pos_2076_, v_i_2077_);
if (v___x_2079_ == 0)
{
uint8_t v___x_2080_; 
v___x_2080_ = lean_string_utf8_at_end(v_s_2075_, v_i_2077_);
if (v___x_2080_ == 0)
{
lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___x_2081_ = lean_string_utf8_next(v_s_2075_, v_i_2077_);
lean_dec(v_i_2077_);
v___x_2082_ = lean_unsigned_to_nat(1u);
v___x_2083_ = lean_nat_add(v_offset_2078_, v___x_2082_);
lean_dec(v_offset_2078_);
v_i_2077_ = v___x_2081_;
v_offset_2078_ = v___x_2083_;
goto _start;
}
else
{
lean_dec(v_i_2077_);
return v_offset_2078_;
}
}
else
{
lean_dec(v_i_2077_);
return v_offset_2078_;
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPosAux___boxed(lean_object* v_s_2085_, lean_object* v_pos_2086_, lean_object* v_i_2087_, lean_object* v_offset_2088_){
_start:
{
lean_object* v_res_2089_; 
v_res_2089_ = l_String_Pos_Raw_offsetOfPosAux(v_s_2085_, v_pos_2086_, v_i_2087_, v_offset_2088_);
lean_dec(v_pos_2086_);
lean_dec_ref(v_s_2085_);
return v_res_2089_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPos(lean_object* v_s_2090_, lean_object* v_pos_2091_){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2092_ = lean_unsigned_to_nat(0u);
v___x_2093_ = l_String_Pos_Raw_offsetOfPosAux(v_s_2090_, v_pos_2091_, v___x_2092_, v___x_2092_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_offsetOfPos___boxed(lean_object* v_s_2094_, lean_object* v_pos_2095_){
_start:
{
lean_object* v_res_2096_; 
v_res_2096_ = l_String_Pos_Raw_offsetOfPos(v_s_2094_, v_pos_2095_);
lean_dec(v_pos_2095_);
lean_dec_ref(v_s_2094_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l_String_offsetOfPos(lean_object* v_s_2097_, lean_object* v_pos_2098_){
_start:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2099_ = lean_unsigned_to_nat(0u);
v___x_2100_ = l_String_Pos_Raw_offsetOfPosAux(v_s_2097_, v_pos_2098_, v___x_2099_, v___x_2099_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_String_offsetOfPos___boxed(lean_object* v_s_2101_, lean_object* v_pos_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l_String_offsetOfPos(v_s_2101_, v_pos_2102_);
lean_dec(v_pos_2102_);
lean_dec_ref(v_s_2101_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* lean_string_offsetofpos(lean_object* v_s_2104_, lean_object* v_pos_2105_){
_start:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; 
v___x_2106_ = lean_unsigned_to_nat(0u);
v___x_2107_ = l_String_Pos_Raw_offsetOfPosAux(v_s_2104_, v_pos_2105_, v___x_2106_, v___x_2106_);
lean_dec(v_pos_2105_);
lean_dec_ref(v_s_2104_);
return v___x_2107_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop(lean_object* v_s1_2108_, lean_object* v_s2_2109_, lean_object* v_off1_2110_, lean_object* v_off2_2111_, lean_object* v_stop1_2112_){
_start:
{
uint8_t v___x_2113_; 
v___x_2113_ = lean_nat_dec_lt(v_off1_2110_, v_stop1_2112_);
if (v___x_2113_ == 0)
{
uint8_t v___x_2114_; 
lean_dec(v_off2_2111_);
lean_dec(v_off1_2110_);
v___x_2114_ = 1;
return v___x_2114_;
}
else
{
uint32_t v_c_u2081_2115_; uint32_t v_c_u2082_2116_; uint8_t v___x_2117_; 
v_c_u2081_2115_ = lean_string_utf8_get(v_s1_2108_, v_off1_2110_);
v_c_u2082_2116_ = lean_string_utf8_get(v_s2_2109_, v_off2_2111_);
v___x_2117_ = lean_uint32_dec_eq(v_c_u2081_2115_, v_c_u2082_2116_);
if (v___x_2117_ == 0)
{
lean_dec(v_off2_2111_);
lean_dec(v_off1_2110_);
return v___x_2117_;
}
else
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2118_ = l_Char_utf8Size(v_c_u2081_2115_);
v___x_2119_ = lean_nat_add(v_off1_2110_, v___x_2118_);
lean_dec(v___x_2118_);
lean_dec(v_off1_2110_);
v___x_2120_ = l_Char_utf8Size(v_c_u2082_2116_);
v___x_2121_ = lean_nat_add(v_off2_2111_, v___x_2120_);
lean_dec(v___x_2120_);
lean_dec(v_off2_2111_);
v_off1_2110_ = v___x_2119_;
v_off2_2111_ = v___x_2121_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop___boxed(lean_object* v_s1_2123_, lean_object* v_s2_2124_, lean_object* v_off1_2125_, lean_object* v_off2_2126_, lean_object* v_stop1_2127_){
_start:
{
uint8_t v_res_2128_; lean_object* v_r_2129_; 
v_res_2128_ = l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop(v_s1_2123_, v_s2_2124_, v_off1_2125_, v_off2_2126_, v_stop1_2127_);
lean_dec(v_stop1_2127_);
lean_dec_ref(v_s2_2124_);
lean_dec_ref(v_s1_2123_);
v_r_2129_ = lean_box(v_res_2128_);
return v_r_2129_;
}
}
LEAN_EXPORT uint8_t l_String_Pos_Raw_substrEq(lean_object* v_s1_2130_, lean_object* v_pos1_2131_, lean_object* v_s2_2132_, lean_object* v_pos2_2133_, lean_object* v_sz_2134_){
_start:
{
uint8_t v___y_2136_; lean_object* v___x_2139_; lean_object* v___x_2140_; uint8_t v___x_2141_; 
v___x_2139_ = lean_nat_add(v_pos1_2131_, v_sz_2134_);
v___x_2140_ = lean_string_utf8_byte_size(v_s1_2130_);
v___x_2141_ = lean_nat_dec_le(v___x_2139_, v___x_2140_);
lean_dec(v___x_2139_);
if (v___x_2141_ == 0)
{
v___y_2136_ = v___x_2141_;
goto v___jp_2135_;
}
else
{
lean_object* v___x_2142_; lean_object* v___x_2143_; uint8_t v___x_2144_; 
v___x_2142_ = lean_nat_add(v_pos2_2133_, v_sz_2134_);
v___x_2143_ = lean_string_utf8_byte_size(v_s2_2132_);
v___x_2144_ = lean_nat_dec_le(v___x_2142_, v___x_2143_);
lean_dec(v___x_2142_);
v___y_2136_ = v___x_2144_;
goto v___jp_2135_;
}
v___jp_2135_:
{
if (v___y_2136_ == 0)
{
lean_dec(v_pos2_2133_);
lean_dec(v_pos1_2131_);
return v___y_2136_;
}
else
{
lean_object* v___x_2137_; uint8_t v___x_2138_; 
v___x_2137_ = lean_nat_add(v_pos1_2131_, v_sz_2134_);
v___x_2138_ = l___private_Init_Data_String_Basic_0__String_Pos_Raw_substrEq_loop(v_s1_2130_, v_s2_2132_, v_pos1_2131_, v_pos2_2133_, v___x_2137_);
lean_dec(v___x_2137_);
return v___x_2138_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Pos_Raw_substrEq___boxed(lean_object* v_s1_2145_, lean_object* v_pos1_2146_, lean_object* v_s2_2147_, lean_object* v_pos2_2148_, lean_object* v_sz_2149_){
_start:
{
uint8_t v_res_2150_; lean_object* v_r_2151_; 
v_res_2150_ = l_String_Pos_Raw_substrEq(v_s1_2145_, v_pos1_2146_, v_s2_2147_, v_pos2_2148_, v_sz_2149_);
lean_dec(v_sz_2149_);
lean_dec_ref(v_s2_2147_);
lean_dec_ref(v_s1_2145_);
v_r_2151_ = lean_box(v_res_2150_);
return v_r_2151_;
}
}
LEAN_EXPORT uint8_t l_String_substrEq(lean_object* v_s1_2152_, lean_object* v_pos1_2153_, lean_object* v_s2_2154_, lean_object* v_pos2_2155_, lean_object* v_sz_2156_){
_start:
{
uint8_t v___x_2157_; 
v___x_2157_ = l_String_Pos_Raw_substrEq(v_s1_2152_, v_pos1_2153_, v_s2_2154_, v_pos2_2155_, v_sz_2156_);
return v___x_2157_;
}
}
LEAN_EXPORT lean_object* l_String_substrEq___boxed(lean_object* v_s1_2158_, lean_object* v_pos1_2159_, lean_object* v_s2_2160_, lean_object* v_pos2_2161_, lean_object* v_sz_2162_){
_start:
{
uint8_t v_res_2163_; lean_object* v_r_2164_; 
v_res_2163_ = l_String_substrEq(v_s1_2158_, v_pos1_2159_, v_s2_2160_, v_pos2_2161_, v_sz_2162_);
lean_dec(v_sz_2162_);
lean_dec_ref(v_s2_2160_);
lean_dec_ref(v_s1_2158_);
v_r_2164_ = lean_box(v_res_2163_);
return v_r_2164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__Nat_repeat_match__1_splitter___redArg(lean_object* v_x_2165_, lean_object* v_x_2166_, lean_object* v_h__1_2167_, lean_object* v_h__2_2168_){
_start:
{
lean_object* v_zero_2169_; uint8_t v_isZero_2170_; 
v_zero_2169_ = lean_unsigned_to_nat(0u);
v_isZero_2170_ = lean_nat_dec_eq(v_x_2165_, v_zero_2169_);
if (v_isZero_2170_ == 1)
{
lean_object* v___x_2171_; 
lean_dec(v_h__2_2168_);
v___x_2171_ = lean_apply_1(v_h__1_2167_, v_x_2166_);
return v___x_2171_;
}
else
{
lean_object* v_one_2172_; lean_object* v_n_2173_; lean_object* v___x_2174_; 
lean_dec(v_h__1_2167_);
v_one_2172_ = lean_unsigned_to_nat(1u);
v_n_2173_ = lean_nat_sub(v_x_2165_, v_one_2172_);
v___x_2174_ = lean_apply_2(v_h__2_2168_, v_n_2173_, v_x_2166_);
return v___x_2174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__Nat_repeat_match__1_splitter___redArg___boxed(lean_object* v_x_2175_, lean_object* v_x_2176_, lean_object* v_h__1_2177_, lean_object* v_h__2_2178_){
_start:
{
lean_object* v_res_2179_; 
v_res_2179_ = l___private_Init_Data_String_Basic_0__Nat_repeat_match__1_splitter___redArg(v_x_2175_, v_x_2176_, v_h__1_2177_, v_h__2_2178_);
lean_dec(v_x_2175_);
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__Nat_repeat_match__1_splitter(lean_object* v_00_u03b1_2180_, lean_object* v_motive_2181_, lean_object* v_x_2182_, lean_object* v_x_2183_, lean_object* v_h__1_2184_, lean_object* v_h__2_2185_){
_start:
{
lean_object* v_zero_2186_; uint8_t v_isZero_2187_; 
v_zero_2186_ = lean_unsigned_to_nat(0u);
v_isZero_2187_ = lean_nat_dec_eq(v_x_2182_, v_zero_2186_);
if (v_isZero_2187_ == 1)
{
lean_object* v___x_2188_; 
lean_dec(v_h__2_2185_);
v___x_2188_ = lean_apply_1(v_h__1_2184_, v_x_2183_);
return v___x_2188_;
}
else
{
lean_object* v_one_2189_; lean_object* v_n_2190_; lean_object* v___x_2191_; 
lean_dec(v_h__1_2184_);
v_one_2189_ = lean_unsigned_to_nat(1u);
v_n_2190_ = lean_nat_sub(v_x_2182_, v_one_2189_);
v___x_2191_ = lean_apply_2(v_h__2_2185_, v_n_2190_, v_x_2183_);
return v___x_2191_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__Nat_repeat_match__1_splitter___boxed(lean_object* v_00_u03b1_2192_, lean_object* v_motive_2193_, lean_object* v_x_2194_, lean_object* v_x_2195_, lean_object* v_h__1_2196_, lean_object* v_h__2_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l___private_Init_Data_String_Basic_0__Nat_repeat_match__1_splitter(v_00_u03b1_2192_, v_motive_2193_, v_x_2194_, v_x_2195_, v_h__1_2196_, v_h__2_2197_);
lean_dec(v_x_2194_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_get_x3f_match__1_splitter___redArg(lean_object* v_x_2199_, lean_object* v_x_2200_, lean_object* v_h__1_2201_){
_start:
{
lean_object* v___x_2202_; 
v___x_2202_ = lean_apply_2(v_h__1_2201_, v_x_2199_, v_x_2200_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Basic_0__String_Pos_Raw_get_x3f_match__1_splitter(lean_object* v_motive_2203_, lean_object* v_x_2204_, lean_object* v_x_2205_, lean_object* v_h__1_2206_){
_start:
{
lean_object* v___x_2207_; 
v___x_2207_ = lean_apply_2(v_h__1_2206_, v_x_2204_, v_x_2205_);
return v___x_2207_;
}
}
lean_object* runtime_initialize_Init_Data_String_Decode(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ByteArray_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Char_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Bootstrap(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Nat_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Sublist(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_String_Decode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ByteArray_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Char_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Nat_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Sublist(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_String_instLT = _init_l_String_instLT();
lean_mark_persistent(l_String_instLT);
l_String_instLE = _init_l_String_instLE();
lean_mark_persistent(l_String_instLE);
l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1 = _init_l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1();
lean_mark_persistent(l_panic___at___00String_Slice_Pos_get_x21_spec__0___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_String_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_String_Decode(uint8_t builtin);
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* initialize_Init_Data_ByteArray_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Char_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Bootstrap(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_List_Nat_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_List_Sublist(uint8_t builtin);
lean_object* initialize_Init_Data_List_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_String_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_String_Decode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Nat_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Sublist(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_String_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
