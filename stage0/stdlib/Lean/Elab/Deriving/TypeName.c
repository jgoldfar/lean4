// Lean compiler output
// Module: Lean.Elab.Deriving.TypeName
// Imports: public import Lean.Elab.Deriving.Basic
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
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_withFreshMacroScope___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_withScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Elab_registerDerivingHandler(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "classDefReducibility"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 250, 156, 61, 219, 107, 141, 135)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(242, 199, 74, 147, 156, 95, 99, 180)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implemented_by"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__9;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(221, 249, 143, 128, 101, 138, 146, 72)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "inst"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__13_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__14;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(170, 188, 240, 205, 110, 63, 170, 91)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__17_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__18_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__22_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__23_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__24_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__24_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__24_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__24_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__25_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__26_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__26_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__26_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__26_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__27;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__28_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__29_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__29_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__29_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(79, 160, 60, 55, 136, 115, 80, 144)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__29_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__30_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__31_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__31_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__31_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(248, 187, 217, 228, 39, 184, 218, 135)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__31_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__32_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__33 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__33_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__34_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__34_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__34_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__34_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instImpl"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__35 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__35_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__36;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(232, 28, 47, 102, 93, 94, 89, 5)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__37 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__37_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__38 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__38_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__39_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__39_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__39_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__38_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__39 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__39_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__40 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__40_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__41 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__41_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__42_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__42_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__42_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__42_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__42_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__42 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__42_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__43 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__43_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__44 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__44_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__45_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__45_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__45_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__44_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__45 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__45_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "TypeName"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__46 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__46_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__47;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__46_value),LEAN_SCALAR_PTR_LITERAL(175, 11, 174, 247, 162, 85, 247, 7)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__48 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__48_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__49 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__49_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__48_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__50 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__50_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__50_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__51 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__51_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__49_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__51_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__52 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__52_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__53 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__53_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__54_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__54_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__54_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__53_value),LEAN_SCALAR_PTR_LITERAL(141, 201, 75, 195, 250, 223, 114, 184)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__54 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__54_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__55 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__55_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__56 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__56_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__57_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__57_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__57_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__57_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__57_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__57_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__56_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__57 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__57_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__58 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__58_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dotIdent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__59 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__59_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__60_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__60_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__60_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__59_value),LEAN_SCALAR_PTR_LITERAL(173, 139, 76, 218, 89, 59, 213, 196)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__60 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__60_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__61 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__61_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__62 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__62_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__63;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__62_value),LEAN_SCALAR_PTR_LITERAL(223, 214, 247, 82, 130, 198, 123, 173)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__64 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__64_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__65 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__65_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__66_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__66_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__66_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__66 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__66_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__67 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__67_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__68 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__68_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__69_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__69_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__69_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__69_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__69_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__69_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__68_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__69 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__69_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__70 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__70_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = " has universe level parameters"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Deriving_TypeName_4279947348____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Deriving_TypeName_4279947348____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Deriving_TypeName_4279947348____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Elab_initFn_00___x40_Lean_Elab_Deriving_TypeName_4279947348____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Elab_initFn_00___x40_Lean_Elab_Deriving_TypeName_4279947348____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0(lean_object* v_o_4_, lean_object* v_k_5_, uint8_t v_v_6_){
_start:
{
lean_object* v_map_7_; uint8_t v_hasTrace_8_; lean_object* v___x_10_; uint8_t v_isShared_11_; uint8_t v_isSharedCheck_22_; 
v_map_7_ = lean_ctor_get(v_o_4_, 0);
v_hasTrace_8_ = lean_ctor_get_uint8(v_o_4_, sizeof(void*)*1);
v_isSharedCheck_22_ = !lean_is_exclusive(v_o_4_);
if (v_isSharedCheck_22_ == 0)
{
v___x_10_ = v_o_4_;
v_isShared_11_ = v_isSharedCheck_22_;
goto v_resetjp_9_;
}
else
{
lean_inc(v_map_7_);
lean_dec(v_o_4_);
v___x_10_ = lean_box(0);
v_isShared_11_ = v_isSharedCheck_22_;
goto v_resetjp_9_;
}
v_resetjp_9_:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_12_, 0, v_v_6_);
lean_inc(v_k_5_);
v___x_13_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_5_, v___x_12_, v_map_7_);
if (v_hasTrace_8_ == 0)
{
lean_object* v___x_14_; uint8_t v___x_15_; lean_object* v___x_17_; 
v___x_14_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0___closed__1));
v___x_15_ = l_Lean_Name_isPrefixOf(v___x_14_, v_k_5_);
lean_dec(v_k_5_);
if (v_isShared_11_ == 0)
{
lean_ctor_set(v___x_10_, 0, v___x_13_);
v___x_17_ = v___x_10_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_13_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
lean_ctor_set_uint8(v___x_17_, sizeof(void*)*1, v___x_15_);
return v___x_17_;
}
}
else
{
lean_object* v___x_20_; 
lean_dec(v_k_5_);
if (v_isShared_11_ == 0)
{
lean_ctor_set(v___x_10_, 0, v___x_13_);
v___x_20_ = v___x_10_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v___x_13_);
lean_ctor_set_uint8(v_reuseFailAlloc_21_, sizeof(void*)*1, v_hasTrace_8_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0___boxed(lean_object* v_o_23_, lean_object* v_k_24_, lean_object* v_v_25_){
_start:
{
uint8_t v_v_boxed_26_; lean_object* v_res_27_; 
v_v_boxed_26_ = lean_unbox(v_v_25_);
v_res_27_ = l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0(v_o_23_, v_k_24_, v_v_boxed_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1___redArg(lean_object* v___y_28_){
_start:
{
lean_object* v___x_30_; lean_object* v_env_31_; lean_object* v___x_32_; lean_object* v_mainModule_33_; lean_object* v___x_34_; 
v___x_30_ = lean_st_ref_get(v___y_28_);
v_env_31_ = lean_ctor_get(v___x_30_, 0);
lean_inc_ref(v_env_31_);
lean_dec(v___x_30_);
v___x_32_ = l_Lean_Environment_header(v_env_31_);
lean_dec_ref(v_env_31_);
v_mainModule_33_ = lean_ctor_get(v___x_32_, 0);
lean_inc(v_mainModule_33_);
lean_dec_ref(v___x_32_);
v___x_34_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_34_, 0, v_mainModule_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1___redArg___boxed(lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1___redArg(v___y_35_);
lean_dec(v___y_35_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1(lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1___redArg(v___y_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1___boxed(lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1(v___y_42_, v___y_43_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0(lean_object* v_scope_51_){
_start:
{
lean_object* v_header_52_; lean_object* v_opts_53_; lean_object* v_currNamespace_54_; lean_object* v_openDecls_55_; lean_object* v_levelNames_56_; lean_object* v_varDecls_57_; lean_object* v_varUIds_58_; lean_object* v_includedVars_59_; lean_object* v_omittedVars_60_; uint8_t v_isNoncomputable_61_; uint8_t v_isPublic_62_; uint8_t v_isMeta_63_; lean_object* v_attrs_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_74_; 
v_header_52_ = lean_ctor_get(v_scope_51_, 0);
v_opts_53_ = lean_ctor_get(v_scope_51_, 1);
v_currNamespace_54_ = lean_ctor_get(v_scope_51_, 2);
v_openDecls_55_ = lean_ctor_get(v_scope_51_, 3);
v_levelNames_56_ = lean_ctor_get(v_scope_51_, 4);
v_varDecls_57_ = lean_ctor_get(v_scope_51_, 5);
v_varUIds_58_ = lean_ctor_get(v_scope_51_, 6);
v_includedVars_59_ = lean_ctor_get(v_scope_51_, 7);
v_omittedVars_60_ = lean_ctor_get(v_scope_51_, 8);
v_isNoncomputable_61_ = lean_ctor_get_uint8(v_scope_51_, sizeof(void*)*10);
v_isPublic_62_ = lean_ctor_get_uint8(v_scope_51_, sizeof(void*)*10 + 1);
v_isMeta_63_ = lean_ctor_get_uint8(v_scope_51_, sizeof(void*)*10 + 2);
v_attrs_64_ = lean_ctor_get(v_scope_51_, 9);
v_isSharedCheck_74_ = !lean_is_exclusive(v_scope_51_);
if (v_isSharedCheck_74_ == 0)
{
v___x_66_ = v_scope_51_;
v_isShared_67_ = v_isSharedCheck_74_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_attrs_64_);
lean_inc(v_omittedVars_60_);
lean_inc(v_includedVars_59_);
lean_inc(v_varUIds_58_);
lean_inc(v_varDecls_57_);
lean_inc(v_levelNames_56_);
lean_inc(v_openDecls_55_);
lean_inc(v_currNamespace_54_);
lean_inc(v_opts_53_);
lean_inc(v_header_52_);
lean_dec(v_scope_51_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_74_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_72_; 
v___x_68_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__0___closed__2));
v___x_69_ = 0;
v___x_70_ = l_Lean_Options_set___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__0(v_opts_53_, v___x_68_, v___x_69_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 1, v___x_70_);
v___x_72_ = v___x_66_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_header_52_);
lean_ctor_set(v_reuseFailAlloc_73_, 1, v___x_70_);
lean_ctor_set(v_reuseFailAlloc_73_, 2, v_currNamespace_54_);
lean_ctor_set(v_reuseFailAlloc_73_, 3, v_openDecls_55_);
lean_ctor_set(v_reuseFailAlloc_73_, 4, v_levelNames_56_);
lean_ctor_set(v_reuseFailAlloc_73_, 5, v_varDecls_57_);
lean_ctor_set(v_reuseFailAlloc_73_, 6, v_varUIds_58_);
lean_ctor_set(v_reuseFailAlloc_73_, 7, v_includedVars_59_);
lean_ctor_set(v_reuseFailAlloc_73_, 8, v_omittedVars_60_);
lean_ctor_set(v_reuseFailAlloc_73_, 9, v_attrs_64_);
lean_ctor_set_uint8(v_reuseFailAlloc_73_, sizeof(void*)*10, v_isNoncomputable_61_);
lean_ctor_set_uint8(v_reuseFailAlloc_73_, sizeof(void*)*10 + 1, v_isPublic_62_);
lean_ctor_set_uint8(v_reuseFailAlloc_73_, sizeof(void*)*10 + 2, v_isMeta_63_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__2(lean_object* v___f_75_, lean_object* v___y_76_, lean_object* v___y_77_){
_start:
{
lean_object* v___x_79_; 
lean_inc(v___y_77_);
lean_inc_ref(v___y_76_);
v___x_79_ = l_Lean_Elab_Command_withFreshMacroScope___redArg(v___f_75_, v___y_76_, v___y_77_);
if (lean_obj_tag(v___x_79_) == 0)
{
lean_object* v_a_80_; lean_object* v___x_81_; 
v_a_80_ = lean_ctor_get(v___x_79_, 0);
lean_inc(v_a_80_);
lean_dec_ref(v___x_79_);
v___x_81_ = l_Lean_Elab_Command_elabCommand(v_a_80_, v___y_76_, v___y_77_);
return v___x_81_;
}
else
{
lean_object* v_a_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_89_; 
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
v_a_82_ = lean_ctor_get(v___x_79_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v___x_79_);
if (v_isSharedCheck_89_ == 0)
{
v___x_84_ = v___x_79_;
v_isShared_85_ = v_isSharedCheck_89_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_a_82_);
lean_dec(v___x_79_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_89_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_87_; 
if (v_isShared_85_ == 0)
{
v___x_87_ = v___x_84_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_a_82_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__2___boxed(lean_object* v___f_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__2(v___f_90_, v___y_91_, v___y_92_);
return v_res_94_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__9(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__8));
v___x_105_ = l_String_toRawSubstring_x27(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__14(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__13));
v___x_112_ = l_String_toRawSubstring_x27(v___x_111_);
return v___x_112_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__27(void){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Array_mkArray0(lean_box(0));
return v___x_135_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__36(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__35));
v___x_157_ = l_String_toRawSubstring_x27(v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__47(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__46));
v___x_182_ = l_String_toRawSubstring_x27(v___x_181_);
return v___x_182_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__63(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__62));
v___x_219_ = l_String_toRawSubstring_x27(v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1(lean_object* v_a_236_, lean_object* v___y_237_, lean_object* v___y_238_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l_Lean_Elab_Command_getRef___redArg(v___y_237_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v_a_241_; lean_object* v___x_242_; 
v_a_241_ = lean_ctor_get(v___x_240_, 0);
lean_inc(v_a_241_);
lean_dec_ref(v___x_240_);
v___x_242_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_237_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_419_; 
v_a_243_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_419_ == 0)
{
v___x_245_ = v___x_242_;
v_isShared_246_ = v_isSharedCheck_419_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_242_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_419_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v_quotContext_x3f_247_; uint8_t v___x_248_; lean_object* v___x_249_; lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_253_; lean_object* v___y_254_; lean_object* v___y_255_; lean_object* v___y_256_; lean_object* v___y_257_; lean_object* v___y_258_; lean_object* v___y_259_; lean_object* v___y_260_; lean_object* v___y_261_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; lean_object* v___y_266_; lean_object* v___y_267_; lean_object* v___y_268_; lean_object* v___y_269_; lean_object* v___y_270_; lean_object* v___y_271_; lean_object* v___y_272_; lean_object* v___y_273_; lean_object* v___y_274_; lean_object* v_a_334_; 
v_quotContext_x3f_247_ = lean_ctor_get(v___y_237_, 5);
lean_inc(v_quotContext_x3f_247_);
lean_dec_ref(v___y_237_);
v___x_248_ = 0;
v___x_249_ = l_Lean_SourceInfo_fromRef(v_a_241_, v___x_248_);
lean_dec(v_a_241_);
if (lean_obj_tag(v_quotContext_x3f_247_) == 0)
{
lean_object* v___x_408_; 
v___x_408_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__1___redArg(v___y_238_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v_a_409_; 
v_a_409_ = lean_ctor_get(v___x_408_, 0);
lean_inc(v_a_409_);
lean_dec_ref(v___x_408_);
v_a_334_ = v_a_409_;
goto v___jp_333_;
}
else
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
lean_dec(v___x_249_);
lean_del_object(v___x_245_);
lean_dec(v_a_243_);
lean_dec(v_a_236_);
v_a_410_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_408_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_408_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_410_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
}
else
{
lean_object* v_val_418_; 
v_val_418_ = lean_ctor_get(v_quotContext_x3f_247_, 0);
lean_inc(v_val_418_);
lean_dec_ref(v_quotContext_x3f_247_);
v_a_334_ = v_val_418_;
goto v___jp_333_;
}
v___jp_250_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_331_; 
lean_inc(v___y_273_);
lean_inc(v___x_249_);
v___x_275_ = l_Lean_Syntax_node2(v___x_249_, v___y_273_, v___y_271_, v___y_274_);
lean_inc(v___x_249_);
v___x_276_ = l_Lean_Syntax_node2(v___x_249_, v___y_266_, v___y_259_, v___x_275_);
v___x_277_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__0));
v___x_278_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__1));
lean_inc_ref(v___y_267_);
lean_inc_ref(v___y_252_);
v___x_279_ = l_Lean_Name_mkStr4(v___y_252_, v___y_267_, v___x_277_, v___x_278_);
lean_inc_n(v___y_264_, 2);
lean_inc(v___x_249_);
v___x_280_ = l_Lean_Syntax_node2(v___x_249_, v___x_279_, v___y_264_, v___y_264_);
lean_inc(v___y_264_);
lean_inc(v___x_280_);
lean_inc(v___y_258_);
lean_inc(v___y_255_);
lean_inc(v___x_249_);
v___x_281_ = l_Lean_Syntax_node4(v___x_249_, v___y_255_, v___y_258_, v___x_276_, v___x_280_, v___y_264_);
lean_inc(v___y_264_);
lean_inc(v___x_249_);
v___x_282_ = l_Lean_Syntax_node5(v___x_249_, v___y_256_, v___y_272_, v___y_261_, v___y_257_, v___x_281_, v___y_264_);
lean_inc(v___y_270_);
lean_inc(v___x_249_);
v___x_283_ = l_Lean_Syntax_node2(v___x_249_, v___y_270_, v___y_254_, v___x_282_);
v___x_284_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__2));
lean_inc_ref(v___y_263_);
lean_inc_ref(v___y_267_);
lean_inc_ref(v___y_252_);
v___x_285_ = l_Lean_Name_mkStr4(v___y_252_, v___y_267_, v___y_263_, v___x_284_);
v___x_286_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__3));
lean_inc(v___x_249_);
v___x_287_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_249_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__4));
lean_inc_ref(v___y_263_);
lean_inc_ref(v___y_267_);
lean_inc_ref(v___y_252_);
v___x_289_ = l_Lean_Name_mkStr4(v___y_252_, v___y_267_, v___y_263_, v___x_288_);
v___x_290_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__5));
lean_inc_ref(v___y_267_);
lean_inc_ref(v___y_252_);
v___x_291_ = l_Lean_Name_mkStr4(v___y_252_, v___y_267_, v___y_263_, v___x_290_);
lean_inc(v___y_264_);
lean_inc(v___x_249_);
v___x_292_ = l_Lean_Syntax_node1(v___x_249_, v___x_291_, v___y_264_);
v___x_293_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__6));
v___x_294_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__7));
lean_inc_ref(v___y_267_);
lean_inc_ref(v___y_252_);
v___x_295_ = l_Lean_Name_mkStr4(v___y_252_, v___y_267_, v___x_293_, v___x_294_);
v___x_296_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__9);
v___x_297_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__10));
lean_inc(v_a_243_);
lean_inc(v___y_265_);
v___x_298_ = l_Lean_addMacroScope(v___y_265_, v___x_297_, v_a_243_);
lean_inc(v___y_253_);
lean_inc(v___x_249_);
v___x_299_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_299_, 0, v___x_249_);
lean_ctor_set(v___x_299_, 1, v___x_296_);
lean_ctor_set(v___x_299_, 2, v___x_298_);
lean_ctor_set(v___x_299_, 3, v___y_253_);
lean_inc(v___y_273_);
lean_inc(v___x_249_);
v___x_300_ = l_Lean_Syntax_node1(v___x_249_, v___y_273_, v___y_269_);
lean_inc(v___x_249_);
v___x_301_ = l_Lean_Syntax_node2(v___x_249_, v___x_295_, v___x_299_, v___x_300_);
lean_inc(v___x_292_);
lean_inc(v___x_249_);
v___x_302_ = l_Lean_Syntax_node2(v___x_249_, v___x_289_, v___x_292_, v___x_301_);
lean_inc(v___y_273_);
lean_inc(v___x_249_);
v___x_303_ = l_Lean_Syntax_node1(v___x_249_, v___y_273_, v___x_302_);
v___x_304_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__11));
lean_inc(v___x_249_);
v___x_305_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_249_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
lean_inc(v___x_249_);
v___x_306_ = l_Lean_Syntax_node3(v___x_249_, v___x_285_, v___x_287_, v___x_303_, v___x_305_);
lean_inc(v___y_273_);
lean_inc(v___x_249_);
v___x_307_ = l_Lean_Syntax_node1(v___x_249_, v___y_273_, v___x_306_);
lean_inc_n(v___y_264_, 6);
lean_inc(v___y_251_);
lean_inc(v___x_249_);
v___x_308_ = l_Lean_Syntax_node7(v___x_249_, v___y_251_, v___y_264_, v___x_307_, v___y_264_, v___y_264_, v___y_264_, v___y_264_, v___y_264_);
v___x_309_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__12));
lean_inc_ref(v___y_268_);
lean_inc_ref(v___y_267_);
lean_inc_ref(v___y_252_);
v___x_310_ = l_Lean_Name_mkStr4(v___y_252_, v___y_267_, v___y_268_, v___x_309_);
lean_inc(v___x_249_);
v___x_311_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_249_);
lean_ctor_set(v___x_311_, 1, v___x_309_);
v___x_312_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__14);
v___x_313_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__15));
v___x_314_ = l_Lean_addMacroScope(v___y_265_, v___x_313_, v_a_243_);
lean_inc(v___x_249_);
v___x_315_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_315_, 0, v___x_249_);
lean_ctor_set(v___x_315_, 1, v___x_312_);
lean_ctor_set(v___x_315_, 2, v___x_314_);
lean_ctor_set(v___x_315_, 3, v___y_253_);
lean_inc(v___y_264_);
lean_inc_ref(v___x_315_);
lean_inc(v___x_249_);
v___x_316_ = l_Lean_Syntax_node2(v___x_249_, v___y_262_, v___x_315_, v___y_264_);
v___x_317_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__16));
lean_inc_ref(v___y_268_);
lean_inc_ref(v___y_267_);
lean_inc_ref(v___y_252_);
v___x_318_ = l_Lean_Name_mkStr4(v___y_252_, v___y_267_, v___y_268_, v___x_317_);
lean_inc(v___y_264_);
lean_inc(v___x_249_);
v___x_319_ = l_Lean_Syntax_node2(v___x_249_, v___x_318_, v___y_264_, v___y_260_);
lean_inc(v___y_264_);
lean_inc(v___x_319_);
lean_inc(v___x_249_);
v___x_320_ = l_Lean_Syntax_node4(v___x_249_, v___x_310_, v___x_311_, v___x_316_, v___x_319_, v___y_264_);
lean_inc(v___y_270_);
lean_inc(v___x_249_);
v___x_321_ = l_Lean_Syntax_node2(v___x_249_, v___y_270_, v___x_308_, v___x_320_);
lean_inc_n(v___y_264_, 7);
lean_inc(v___x_249_);
v___x_322_ = l_Lean_Syntax_node7(v___x_249_, v___y_251_, v___y_264_, v___y_264_, v___y_264_, v___y_264_, v___y_264_, v___y_264_, v___y_264_);
v___x_323_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__17));
v___x_324_ = l_Lean_Name_mkStr4(v___y_252_, v___y_267_, v___y_268_, v___x_323_);
lean_inc(v___x_249_);
v___x_325_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_249_);
lean_ctor_set(v___x_325_, 1, v___x_323_);
lean_inc(v___y_264_);
lean_inc(v___x_249_);
v___x_326_ = l_Lean_Syntax_node4(v___x_249_, v___y_255_, v___y_258_, v___x_315_, v___x_280_, v___y_264_);
lean_inc(v___y_264_);
lean_inc(v___x_249_);
v___x_327_ = l_Lean_Syntax_node6(v___x_249_, v___x_324_, v___x_292_, v___x_325_, v___y_264_, v___y_264_, v___x_319_, v___x_326_);
lean_inc(v___x_249_);
v___x_328_ = l_Lean_Syntax_node2(v___x_249_, v___y_270_, v___x_322_, v___x_327_);
v___x_329_ = l_Lean_Syntax_node3(v___x_249_, v___y_273_, v___x_283_, v___x_321_, v___x_328_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 0, v___x_329_);
v___x_331_ = v___x_245_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_329_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
v___jp_333_:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__19));
v___x_336_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__20));
v___x_337_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__21));
v___x_338_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__22));
v___x_339_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__24));
v___x_340_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__26));
v___x_341_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__27, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__27_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__27);
lean_inc(v___x_249_);
v___x_342_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_342_, 0, v___x_249_);
lean_ctor_set(v___x_342_, 1, v___x_335_);
lean_ctor_set(v___x_342_, 2, v___x_341_);
v___x_343_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__28));
v___x_344_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__29));
lean_inc(v___x_249_);
v___x_345_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_249_);
lean_ctor_set(v___x_345_, 1, v___x_343_);
lean_inc(v___x_249_);
v___x_346_ = l_Lean_Syntax_node1(v___x_249_, v___x_344_, v___x_345_);
lean_inc(v___x_249_);
v___x_347_ = l_Lean_Syntax_node1(v___x_249_, v___x_335_, v___x_346_);
lean_inc_ref_n(v___x_342_, 6);
lean_inc(v___x_249_);
v___x_348_ = l_Lean_Syntax_node7(v___x_249_, v___x_340_, v___x_342_, v___x_342_, v___x_342_, v___x_342_, v___x_342_, v___x_347_, v___x_342_);
v___x_349_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__31));
v___x_350_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__32));
lean_inc(v___x_249_);
v___x_351_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_249_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__34));
v___x_353_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__36, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__36_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__36);
v___x_354_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__37));
lean_inc(v_a_243_);
lean_inc(v_a_334_);
v___x_355_ = l_Lean_addMacroScope(v_a_334_, v___x_354_, v_a_243_);
v___x_356_ = lean_box(0);
lean_inc(v___x_249_);
v___x_357_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_357_, 0, v___x_249_);
lean_ctor_set(v___x_357_, 1, v___x_353_);
lean_ctor_set(v___x_357_, 2, v___x_355_);
lean_ctor_set(v___x_357_, 3, v___x_356_);
lean_inc_ref(v___x_342_);
lean_inc_ref(v___x_357_);
lean_inc(v___x_249_);
v___x_358_ = l_Lean_Syntax_node2(v___x_249_, v___x_352_, v___x_357_, v___x_342_);
v___x_359_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__39));
v___x_360_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__40));
v___x_361_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__42));
v___x_362_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__43));
lean_inc(v___x_249_);
v___x_363_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_249_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
v___x_364_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__45));
v___x_365_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__47, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__47_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__47);
v___x_366_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__48));
lean_inc(v_a_243_);
lean_inc(v_a_334_);
v___x_367_ = l_Lean_addMacroScope(v_a_334_, v___x_366_, v_a_243_);
v___x_368_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__52));
lean_inc(v___x_249_);
v___x_369_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_369_, 0, v___x_249_);
lean_ctor_set(v___x_369_, 1, v___x_365_);
lean_ctor_set(v___x_369_, 2, v___x_367_);
lean_ctor_set(v___x_369_, 3, v___x_368_);
v___x_370_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__54));
v___x_371_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__55));
lean_inc(v___x_249_);
v___x_372_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_249_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
lean_inc(v_a_236_);
v___x_373_ = l_Lean_mkCIdent(v_a_236_);
lean_inc(v___x_249_);
v___x_374_ = l_Lean_Syntax_node2(v___x_249_, v___x_370_, v___x_372_, v___x_373_);
lean_inc(v___x_249_);
v___x_375_ = l_Lean_Syntax_node1(v___x_249_, v___x_335_, v___x_374_);
lean_inc(v___x_249_);
v___x_376_ = l_Lean_Syntax_node2(v___x_249_, v___x_364_, v___x_369_, v___x_375_);
lean_inc(v___x_249_);
v___x_377_ = l_Lean_Syntax_node2(v___x_249_, v___x_361_, v___x_363_, v___x_376_);
lean_inc(v___x_377_);
lean_inc(v___x_249_);
v___x_378_ = l_Lean_Syntax_node1(v___x_249_, v___x_335_, v___x_377_);
lean_inc_ref(v___x_342_);
lean_inc(v___x_249_);
v___x_379_ = l_Lean_Syntax_node2(v___x_249_, v___x_359_, v___x_342_, v___x_378_);
v___x_380_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__57));
v___x_381_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__58));
lean_inc(v___x_249_);
v___x_382_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_249_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
v___x_383_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__60));
v___x_384_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__61));
lean_inc(v___x_249_);
v___x_385_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_249_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
v___x_386_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__63, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__63_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__63);
v___x_387_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__64));
lean_inc(v_a_243_);
lean_inc(v_a_334_);
v___x_388_ = l_Lean_addMacroScope(v_a_334_, v___x_387_, v_a_243_);
lean_inc(v___x_249_);
v___x_389_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_389_, 0, v___x_249_);
lean_ctor_set(v___x_389_, 1, v___x_386_);
lean_ctor_set(v___x_389_, 2, v___x_388_);
lean_ctor_set(v___x_389_, 3, v___x_356_);
lean_inc(v___x_249_);
v___x_390_ = l_Lean_Syntax_node2(v___x_249_, v___x_383_, v___x_385_, v___x_389_);
v___x_391_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__66));
v___x_392_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__67));
lean_inc(v___x_249_);
v___x_393_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_249_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
lean_inc(v___x_249_);
v___x_394_ = l_Lean_Syntax_node1(v___x_249_, v___x_391_, v___x_393_);
lean_inc(v_a_236_);
v___x_395_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_356_, v_a_236_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_quoteNameMk(v_a_236_);
v___y_251_ = v___x_340_;
v___y_252_ = v___x_336_;
v___y_253_ = v___x_356_;
v___y_254_ = v___x_348_;
v___y_255_ = v___x_380_;
v___y_256_ = v___x_349_;
v___y_257_ = v___x_379_;
v___y_258_ = v___x_382_;
v___y_259_ = v___x_390_;
v___y_260_ = v___x_377_;
v___y_261_ = v___x_358_;
v___y_262_ = v___x_352_;
v___y_263_ = v___x_360_;
v___y_264_ = v___x_342_;
v___y_265_ = v_a_334_;
v___y_266_ = v___x_364_;
v___y_267_ = v___x_337_;
v___y_268_ = v___x_338_;
v___y_269_ = v___x_357_;
v___y_270_ = v___x_339_;
v___y_271_ = v___x_394_;
v___y_272_ = v___x_351_;
v___y_273_ = v___x_335_;
v___y_274_ = v___x_396_;
goto v___jp_250_;
}
else
{
lean_object* v_val_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec(v_a_236_);
v_val_397_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_val_397_);
lean_dec_ref(v___x_395_);
v___x_398_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__69));
v___x_399_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__70));
v___x_400_ = lean_string_intercalate(v___x_384_, v_val_397_);
v___x_401_ = lean_string_append(v___x_399_, v___x_400_);
lean_dec_ref(v___x_400_);
v___x_402_ = lean_box(2);
v___x_403_ = l_Lean_Syntax_mkNameLit(v___x_401_, v___x_402_);
v___x_404_ = lean_unsigned_to_nat(1u);
v___x_405_ = lean_mk_empty_array_with_capacity(v___x_404_);
v___x_406_ = lean_array_push(v___x_405_, v___x_403_);
v___x_407_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_407_, 0, v___x_402_);
lean_ctor_set(v___x_407_, 1, v___x_398_);
lean_ctor_set(v___x_407_, 2, v___x_406_);
v___y_251_ = v___x_340_;
v___y_252_ = v___x_336_;
v___y_253_ = v___x_356_;
v___y_254_ = v___x_348_;
v___y_255_ = v___x_380_;
v___y_256_ = v___x_349_;
v___y_257_ = v___x_379_;
v___y_258_ = v___x_382_;
v___y_259_ = v___x_390_;
v___y_260_ = v___x_377_;
v___y_261_ = v___x_358_;
v___y_262_ = v___x_352_;
v___y_263_ = v___x_360_;
v___y_264_ = v___x_342_;
v___y_265_ = v_a_334_;
v___y_266_ = v___x_364_;
v___y_267_ = v___x_337_;
v___y_268_ = v___x_338_;
v___y_269_ = v___x_357_;
v___y_270_ = v___x_339_;
v___y_271_ = v___x_394_;
v___y_272_ = v___x_351_;
v___y_273_ = v___x_335_;
v___y_274_ = v___x_407_;
goto v___jp_250_;
}
}
}
}
else
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_427_; 
lean_dec(v_a_241_);
lean_dec_ref(v___y_237_);
lean_dec(v_a_236_);
v_a_420_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_427_ == 0)
{
v___x_422_ = v___x_242_;
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_242_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_425_; 
if (v_isShared_423_ == 0)
{
v___x_425_ = v___x_422_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_a_420_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
else
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
lean_dec_ref(v___y_237_);
lean_dec(v_a_236_);
v_a_428_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_435_ == 0)
{
v___x_430_ = v___x_240_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_240_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_428_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___boxed(lean_object* v_a_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1(v_a_436_, v___y_437_, v___y_438_);
lean_dec(v___y_438_);
return v_res_440_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_441_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__0);
v___x_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
return v___x_443_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_444_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__1);
v___x_445_ = lean_unsigned_to_nat(0u);
v___x_446_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_446_, 0, v___x_445_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
lean_ctor_set(v___x_446_, 2, v___x_445_);
lean_ctor_set(v___x_446_, 3, v___x_444_);
lean_ctor_set(v___x_446_, 4, v___x_444_);
lean_ctor_set(v___x_446_, 5, v___x_444_);
lean_ctor_set(v___x_446_, 6, v___x_444_);
lean_ctor_set(v___x_446_, 7, v___x_444_);
lean_ctor_set(v___x_446_, 8, v___x_444_);
return v___x_446_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_447_ = lean_unsigned_to_nat(32u);
v___x_448_ = lean_mk_empty_array_with_capacity(v___x_447_);
v___x_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
return v___x_449_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__4(void){
_start:
{
size_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_450_ = ((size_t)5ULL);
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = lean_unsigned_to_nat(32u);
v___x_453_ = lean_mk_empty_array_with_capacity(v___x_452_);
v___x_454_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__3);
v___x_455_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_453_);
lean_ctor_set(v___x_455_, 2, v___x_451_);
lean_ctor_set(v___x_455_, 3, v___x_451_);
lean_ctor_set_usize(v___x_455_, 4, v___x_450_);
return v___x_455_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_456_ = lean_box(1);
v___x_457_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__4);
v___x_458_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__1);
v___x_459_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
lean_ctor_set(v___x_459_, 1, v___x_457_);
lean_ctor_set(v___x_459_, 2, v___x_456_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg(lean_object* v_msgData_460_, lean_object* v___y_461_){
_start:
{
lean_object* v___x_463_; lean_object* v_env_464_; lean_object* v___x_465_; lean_object* v_scopes_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v_opts_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_463_ = lean_st_ref_get(v___y_461_);
v_env_464_ = lean_ctor_get(v___x_463_, 0);
lean_inc_ref(v_env_464_);
lean_dec(v___x_463_);
v___x_465_ = lean_st_ref_get(v___y_461_);
v_scopes_466_ = lean_ctor_get(v___x_465_, 2);
lean_inc(v_scopes_466_);
lean_dec(v___x_465_);
v___x_467_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_468_ = l_List_head_x21___redArg(v___x_467_, v_scopes_466_);
lean_dec(v_scopes_466_);
v_opts_469_ = lean_ctor_get(v___x_468_, 1);
lean_inc_ref(v_opts_469_);
lean_dec(v___x_468_);
v___x_470_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__2);
v___x_471_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__5);
v___x_472_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_472_, 0, v_env_464_);
lean_ctor_set(v___x_472_, 1, v___x_470_);
lean_ctor_set(v___x_472_, 2, v___x_471_);
lean_ctor_set(v___x_472_, 3, v_opts_469_);
v___x_473_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
lean_ctor_set(v___x_473_, 1, v_msgData_460_);
v___x_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___boxed(lean_object* v_msgData_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg(v_msgData_475_, v___y_476_);
lean_dec(v___y_476_);
return v_res_478_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__7(lean_object* v_opts_479_, lean_object* v_opt_480_){
_start:
{
lean_object* v_name_481_; lean_object* v_defValue_482_; lean_object* v_map_483_; lean_object* v___x_484_; 
v_name_481_ = lean_ctor_get(v_opt_480_, 0);
v_defValue_482_ = lean_ctor_get(v_opt_480_, 1);
v_map_483_ = lean_ctor_get(v_opts_479_, 0);
v___x_484_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_483_, v_name_481_);
if (lean_obj_tag(v___x_484_) == 0)
{
uint8_t v___x_485_; 
v___x_485_ = lean_unbox(v_defValue_482_);
return v___x_485_;
}
else
{
lean_object* v_val_486_; 
v_val_486_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_val_486_);
lean_dec_ref(v___x_484_);
if (lean_obj_tag(v_val_486_) == 1)
{
uint8_t v_v_487_; 
v_v_487_ = lean_ctor_get_uint8(v_val_486_, 0);
lean_dec_ref(v_val_486_);
return v_v_487_;
}
else
{
uint8_t v___x_488_; 
lean_dec(v_val_486_);
v___x_488_ = lean_unbox(v_defValue_482_);
return v___x_488_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__7___boxed(lean_object* v_opts_489_, lean_object* v_opt_490_){
_start:
{
uint8_t v_res_491_; lean_object* v_r_492_; 
v_res_491_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__7(v_opts_489_, v_opt_490_);
lean_dec_ref(v_opt_490_);
lean_dec_ref(v_opts_489_);
v_r_492_ = lean_box(v_res_491_);
return v_r_492_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__0(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = lean_box(1);
v___x_494_ = l_Lean_MessageData_ofFormat(v___x_493_);
return v___x_494_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__3(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__2));
v___x_499_ = l_Lean_MessageData_ofFormat(v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8(lean_object* v_x_500_, lean_object* v_x_501_){
_start:
{
if (lean_obj_tag(v_x_501_) == 0)
{
return v_x_500_;
}
else
{
lean_object* v_head_502_; lean_object* v_tail_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_525_; 
v_head_502_ = lean_ctor_get(v_x_501_, 0);
v_tail_503_ = lean_ctor_get(v_x_501_, 1);
v_isSharedCheck_525_ = !lean_is_exclusive(v_x_501_);
if (v_isSharedCheck_525_ == 0)
{
v___x_505_ = v_x_501_;
v_isShared_506_ = v_isSharedCheck_525_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_tail_503_);
lean_inc(v_head_502_);
lean_dec(v_x_501_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_525_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v_before_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_523_; 
v_before_507_ = lean_ctor_get(v_head_502_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v_head_502_);
if (v_isSharedCheck_523_ == 0)
{
lean_object* v_unused_524_; 
v_unused_524_ = lean_ctor_get(v_head_502_, 1);
lean_dec(v_unused_524_);
v___x_509_ = v_head_502_;
v_isShared_510_ = v_isSharedCheck_523_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_before_507_);
lean_dec(v_head_502_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_523_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_511_; lean_object* v___x_513_; 
v___x_511_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__0);
if (v_isShared_510_ == 0)
{
lean_ctor_set_tag(v___x_509_, 7);
lean_ctor_set(v___x_509_, 1, v___x_511_);
lean_ctor_set(v___x_509_, 0, v_x_500_);
v___x_513_ = v___x_509_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_x_500_);
lean_ctor_set(v_reuseFailAlloc_522_, 1, v___x_511_);
v___x_513_ = v_reuseFailAlloc_522_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
lean_object* v___x_514_; lean_object* v___x_516_; 
v___x_514_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__3);
if (v_isShared_506_ == 0)
{
lean_ctor_set_tag(v___x_505_, 7);
lean_ctor_set(v___x_505_, 1, v___x_514_);
lean_ctor_set(v___x_505_, 0, v___x_513_);
v___x_516_ = v___x_505_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_513_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v___x_514_);
v___x_516_ = v_reuseFailAlloc_521_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_517_ = l_Lean_MessageData_ofSyntax(v_before_507_);
v___x_518_ = l_Lean_indentD(v___x_517_);
v___x_519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_516_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v_x_500_ = v___x_519_;
v_x_501_ = v_tail_503_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__1));
v___x_530_ = l_Lean_MessageData_ofFormat(v___x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg(lean_object* v_msgData_531_, lean_object* v_macroStack_532_, lean_object* v___y_533_){
_start:
{
lean_object* v___x_535_; lean_object* v_scopes_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v_opts_539_; lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_535_ = lean_st_ref_get(v___y_533_);
v_scopes_536_ = lean_ctor_get(v___x_535_, 2);
lean_inc(v_scopes_536_);
lean_dec(v___x_535_);
v___x_537_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_538_ = l_List_head_x21___redArg(v___x_537_, v_scopes_536_);
lean_dec(v_scopes_536_);
v_opts_539_ = lean_ctor_get(v___x_538_, 1);
lean_inc_ref(v_opts_539_);
lean_dec(v___x_538_);
v___x_540_ = l_Lean_Elab_pp_macroStack;
v___x_541_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__7(v_opts_539_, v___x_540_);
lean_dec_ref(v_opts_539_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; 
lean_dec(v_macroStack_532_);
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v_msgData_531_);
return v___x_542_;
}
else
{
if (lean_obj_tag(v_macroStack_532_) == 0)
{
lean_object* v___x_543_; 
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v_msgData_531_);
return v___x_543_;
}
else
{
lean_object* v_head_544_; lean_object* v_after_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_560_; 
v_head_544_ = lean_ctor_get(v_macroStack_532_, 0);
lean_inc(v_head_544_);
v_after_545_ = lean_ctor_get(v_head_544_, 1);
v_isSharedCheck_560_ = !lean_is_exclusive(v_head_544_);
if (v_isSharedCheck_560_ == 0)
{
lean_object* v_unused_561_; 
v_unused_561_ = lean_ctor_get(v_head_544_, 0);
lean_dec(v_unused_561_);
v___x_547_ = v_head_544_;
v_isShared_548_ = v_isSharedCheck_560_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_after_545_);
lean_dec(v_head_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_560_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_549_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8___closed__0);
if (v_isShared_548_ == 0)
{
lean_ctor_set_tag(v___x_547_, 7);
lean_ctor_set(v___x_547_, 1, v___x_549_);
lean_ctor_set(v___x_547_, 0, v_msgData_531_);
v___x_551_ = v___x_547_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_msgData_531_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v___x_549_);
v___x_551_ = v_reuseFailAlloc_559_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v_msgData_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_552_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___closed__2);
v___x_553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_551_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
v___x_554_ = l_Lean_MessageData_ofSyntax(v_after_545_);
v___x_555_ = l_Lean_indentD(v___x_554_);
v_msgData_556_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_556_, 0, v___x_553_);
lean_ctor_set(v_msgData_556_, 1, v___x_555_);
v___x_557_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5_spec__8(v_msgData_556_, v_macroStack_532_);
v___x_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
return v___x_558_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg___boxed(lean_object* v_msgData_562_, lean_object* v_macroStack_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg(v_msgData_562_, v_macroStack_563_, v___y_564_);
lean_dec(v___y_564_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3___redArg(lean_object* v_msg_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = l_Lean_Elab_Command_getRef___redArg(v___y_568_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v_a_572_; lean_object* v_macroStack_573_; lean_object* v___x_574_; lean_object* v_a_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_586_; 
v_a_572_ = lean_ctor_get(v___x_571_, 0);
lean_inc(v_a_572_);
lean_dec_ref(v___x_571_);
v_macroStack_573_ = lean_ctor_get(v___y_568_, 4);
lean_inc(v_macroStack_573_);
lean_dec_ref(v___y_568_);
v___x_574_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg(v_msg_567_, v___y_569_);
v_a_575_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_a_575_);
lean_dec_ref(v___x_574_);
lean_inc(v_macroStack_573_);
v___x_576_ = l_Lean_Elab_getBetterRef(v_a_572_, v_macroStack_573_);
lean_dec(v_a_572_);
v___x_577_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg(v_a_575_, v_macroStack_573_, v___y_569_);
v_a_578_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_586_ == 0)
{
v___x_580_ = v___x_577_;
v_isShared_581_ = v_isSharedCheck_586_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_577_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_586_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_582_; lean_object* v___x_584_; 
v___x_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_576_);
lean_ctor_set(v___x_582_, 1, v_a_578_);
if (v_isShared_581_ == 0)
{
lean_ctor_set_tag(v___x_580_, 1);
lean_ctor_set(v___x_580_, 0, v___x_582_);
v___x_584_ = v___x_580_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
else
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
lean_dec_ref(v___y_568_);
lean_dec_ref(v_msg_567_);
v_a_587_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_571_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_571_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3___redArg___boxed(lean_object* v_msg_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3___redArg(v_msg_595_, v___y_596_, v___y_597_);
lean_dec(v___y_597_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11___redArg(lean_object* v_ref_600_, lean_object* v_msg_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lean_Elab_Command_getRef___redArg(v___y_602_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v_a_606_; lean_object* v_fileName_607_; lean_object* v_fileMap_608_; lean_object* v_currRecDepth_609_; lean_object* v_cmdPos_610_; lean_object* v_macroStack_611_; lean_object* v_quotContext_x3f_612_; lean_object* v_currMacroScope_613_; lean_object* v_snap_x3f_614_; lean_object* v_cancelTk_x3f_615_; uint8_t v_suppressElabErrors_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_625_; 
v_a_606_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_a_606_);
lean_dec_ref(v___x_605_);
v_fileName_607_ = lean_ctor_get(v___y_602_, 0);
v_fileMap_608_ = lean_ctor_get(v___y_602_, 1);
v_currRecDepth_609_ = lean_ctor_get(v___y_602_, 2);
v_cmdPos_610_ = lean_ctor_get(v___y_602_, 3);
v_macroStack_611_ = lean_ctor_get(v___y_602_, 4);
v_quotContext_x3f_612_ = lean_ctor_get(v___y_602_, 5);
v_currMacroScope_613_ = lean_ctor_get(v___y_602_, 6);
v_snap_x3f_614_ = lean_ctor_get(v___y_602_, 8);
v_cancelTk_x3f_615_ = lean_ctor_get(v___y_602_, 9);
v_suppressElabErrors_616_ = lean_ctor_get_uint8(v___y_602_, sizeof(void*)*10);
v_isSharedCheck_625_ = !lean_is_exclusive(v___y_602_);
if (v_isSharedCheck_625_ == 0)
{
lean_object* v_unused_626_; 
v_unused_626_ = lean_ctor_get(v___y_602_, 7);
lean_dec(v_unused_626_);
v___x_618_ = v___y_602_;
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_cancelTk_x3f_615_);
lean_inc(v_snap_x3f_614_);
lean_inc(v_currMacroScope_613_);
lean_inc(v_quotContext_x3f_612_);
lean_inc(v_macroStack_611_);
lean_inc(v_cmdPos_610_);
lean_inc(v_currRecDepth_609_);
lean_inc(v_fileMap_608_);
lean_inc(v_fileName_607_);
lean_dec(v___y_602_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v_ref_620_; lean_object* v___x_622_; 
v_ref_620_ = l_Lean_replaceRef(v_ref_600_, v_a_606_);
lean_dec(v_a_606_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 7, v_ref_620_);
v___x_622_ = v___x_618_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_fileName_607_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_fileMap_608_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_currRecDepth_609_);
lean_ctor_set(v_reuseFailAlloc_624_, 3, v_cmdPos_610_);
lean_ctor_set(v_reuseFailAlloc_624_, 4, v_macroStack_611_);
lean_ctor_set(v_reuseFailAlloc_624_, 5, v_quotContext_x3f_612_);
lean_ctor_set(v_reuseFailAlloc_624_, 6, v_currMacroScope_613_);
lean_ctor_set(v_reuseFailAlloc_624_, 7, v_ref_620_);
lean_ctor_set(v_reuseFailAlloc_624_, 8, v_snap_x3f_614_);
lean_ctor_set(v_reuseFailAlloc_624_, 9, v_cancelTk_x3f_615_);
lean_ctor_set_uint8(v_reuseFailAlloc_624_, sizeof(void*)*10, v_suppressElabErrors_616_);
v___x_622_ = v_reuseFailAlloc_624_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_623_; 
v___x_623_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3___redArg(v_msg_601_, v___x_622_, v___y_603_);
return v___x_623_;
}
}
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_dec_ref(v___y_602_);
lean_dec_ref(v_msg_601_);
v_a_627_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_605_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_605_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11___redArg___boxed(lean_object* v_ref_635_, lean_object* v_msg_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11___redArg(v_ref_635_, v_msg_636_, v___y_637_, v___y_638_);
lean_dec(v___y_638_);
lean_dec(v_ref_635_);
return v_res_640_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__0));
v___x_643_ = l_Lean_stringToMessageData(v___x_642_);
return v___x_643_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__3(void){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__2));
v___x_646_ = l_Lean_stringToMessageData(v___x_645_);
return v___x_646_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__5(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__4));
v___x_649_ = l_Lean_stringToMessageData(v___x_648_);
return v___x_649_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__7(void){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__6));
v___x_652_ = l_Lean_stringToMessageData(v___x_651_);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__9(void){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__8));
v___x_655_ = l_Lean_stringToMessageData(v___x_654_);
return v___x_655_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__11(void){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__10));
v___x_658_ = l_Lean_stringToMessageData(v___x_657_);
return v___x_658_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__13(void){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__12));
v___x_661_ = l_Lean_stringToMessageData(v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg(lean_object* v_msg_662_, lean_object* v_declHint_663_, lean_object* v___y_664_){
_start:
{
lean_object* v___x_666_; lean_object* v_env_667_; uint8_t v___x_668_; 
v___x_666_ = lean_st_ref_get(v___y_664_);
v_env_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc_ref(v_env_667_);
lean_dec(v___x_666_);
v___x_668_ = l_Lean_Name_isAnonymous(v_declHint_663_);
if (v___x_668_ == 0)
{
uint8_t v_isExporting_669_; 
v_isExporting_669_ = lean_ctor_get_uint8(v_env_667_, sizeof(void*)*8);
if (v_isExporting_669_ == 0)
{
lean_object* v___x_670_; 
lean_dec_ref(v_env_667_);
lean_dec(v_declHint_663_);
v___x_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_670_, 0, v_msg_662_);
return v___x_670_;
}
else
{
lean_object* v___x_671_; uint8_t v___x_672_; 
lean_inc_ref(v_env_667_);
v___x_671_ = l_Lean_Environment_setExporting(v_env_667_, v___x_668_);
lean_inc(v_declHint_663_);
lean_inc_ref(v___x_671_);
v___x_672_ = l_Lean_Environment_contains(v___x_671_, v_declHint_663_, v_isExporting_669_);
if (v___x_672_ == 0)
{
lean_object* v___x_673_; 
lean_dec_ref(v___x_671_);
lean_dec_ref(v_env_667_);
lean_dec(v_declHint_663_);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v_msg_662_);
return v___x_673_;
}
else
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v_c_679_; lean_object* v___x_680_; 
v___x_674_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__2);
v___x_675_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg___closed__5);
v___x_676_ = l_Lean_Options_empty;
v___x_677_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_677_, 0, v___x_671_);
lean_ctor_set(v___x_677_, 1, v___x_674_);
lean_ctor_set(v___x_677_, 2, v___x_675_);
lean_ctor_set(v___x_677_, 3, v___x_676_);
lean_inc(v_declHint_663_);
v___x_678_ = l_Lean_MessageData_ofConstName(v_declHint_663_, v___x_668_);
v_c_679_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_679_, 0, v___x_677_);
lean_ctor_set(v_c_679_, 1, v___x_678_);
v___x_680_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_667_, v_declHint_663_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
lean_dec_ref(v_env_667_);
lean_dec(v_declHint_663_);
v___x_681_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__1);
v___x_682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
lean_ctor_set(v___x_682_, 1, v_c_679_);
v___x_683_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__3);
v___x_684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_682_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v___x_685_ = l_Lean_MessageData_note(v___x_684_);
v___x_686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_686_, 0, v_msg_662_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
return v___x_687_;
}
else
{
lean_object* v_val_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_723_; 
v_val_688_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_723_ == 0)
{
v___x_690_ = v___x_680_;
v_isShared_691_ = v_isSharedCheck_723_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_val_688_);
lean_dec(v___x_680_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_723_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v_mod_695_; uint8_t v___x_696_; 
v___x_692_ = lean_box(0);
v___x_693_ = l_Lean_Environment_header(v_env_667_);
lean_dec_ref(v_env_667_);
v___x_694_ = l_Lean_EnvironmentHeader_moduleNames(v___x_693_);
v_mod_695_ = lean_array_get(v___x_692_, v___x_694_, v_val_688_);
lean_dec(v_val_688_);
lean_dec_ref(v___x_694_);
v___x_696_ = l_Lean_isPrivateName(v_declHint_663_);
lean_dec(v_declHint_663_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_708_; 
v___x_697_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__5);
v___x_698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
lean_ctor_set(v___x_698_, 1, v_c_679_);
v___x_699_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__7);
v___x_700_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_698_);
lean_ctor_set(v___x_700_, 1, v___x_699_);
v___x_701_ = l_Lean_MessageData_ofName(v_mod_695_);
v___x_702_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_700_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
v___x_703_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__9);
v___x_704_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_704_, 0, v___x_702_);
lean_ctor_set(v___x_704_, 1, v___x_703_);
v___x_705_ = l_Lean_MessageData_note(v___x_704_);
v___x_706_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_706_, 0, v_msg_662_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
if (v_isShared_691_ == 0)
{
lean_ctor_set_tag(v___x_690_, 0);
lean_ctor_set(v___x_690_, 0, v___x_706_);
v___x_708_ = v___x_690_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v___x_706_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
else
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_721_; 
v___x_710_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__1);
v___x_711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_710_);
lean_ctor_set(v___x_711_, 1, v_c_679_);
v___x_712_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__11);
v___x_713_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_711_);
lean_ctor_set(v___x_713_, 1, v___x_712_);
v___x_714_ = l_Lean_MessageData_ofName(v_mod_695_);
v___x_715_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_715_, 0, v___x_713_);
lean_ctor_set(v___x_715_, 1, v___x_714_);
v___x_716_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___closed__13);
v___x_717_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_715_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
v___x_718_ = l_Lean_MessageData_note(v___x_717_);
v___x_719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_719_, 0, v_msg_662_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
if (v_isShared_691_ == 0)
{
lean_ctor_set_tag(v___x_690_, 0);
lean_ctor_set(v___x_690_, 0, v___x_719_);
v___x_721_ = v___x_690_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_719_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_724_; 
lean_dec_ref(v_env_667_);
lean_dec(v_declHint_663_);
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v_msg_662_);
return v___x_724_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg___boxed(lean_object* v_msg_725_, lean_object* v_declHint_726_, lean_object* v___y_727_, lean_object* v___y_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg(v_msg_725_, v_declHint_726_, v___y_727_);
lean_dec(v___y_727_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10(lean_object* v_msg_730_, lean_object* v_declHint_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
lean_object* v___x_735_; lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_745_; 
v___x_735_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg(v_msg_730_, v_declHint_731_, v___y_733_);
v_a_736_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_745_ == 0)
{
v___x_738_ = v___x_735_;
v_isShared_739_ = v_isSharedCheck_745_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v___x_735_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_745_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_743_; 
v___x_740_ = l_Lean_unknownIdentifierMessageTag;
v___x_741_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
lean_ctor_set(v___x_741_, 1, v_a_736_);
if (v_isShared_739_ == 0)
{
lean_ctor_set(v___x_738_, 0, v___x_741_);
v___x_743_ = v___x_738_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10___boxed(lean_object* v_msg_746_, lean_object* v_declHint_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10(v_msg_746_, v_declHint_747_, v___y_748_, v___y_749_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7___redArg(lean_object* v_ref_752_, lean_object* v_msg_753_, lean_object* v_declHint_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v___x_758_; lean_object* v_a_759_; lean_object* v___x_760_; 
v___x_758_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10(v_msg_753_, v_declHint_754_, v___y_755_, v___y_756_);
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref(v___x_758_);
v___x_760_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11___redArg(v_ref_752_, v_a_759_, v___y_755_, v___y_756_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7___redArg___boxed(lean_object* v_ref_761_, lean_object* v_msg_762_, lean_object* v_declHint_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7___redArg(v_ref_761_, v_msg_762_, v_declHint_763_, v___y_764_, v___y_765_);
lean_dec(v___y_765_);
lean_dec(v_ref_761_);
return v_res_767_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__0));
v___x_770_ = l_Lean_stringToMessageData(v___x_769_);
return v___x_770_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__70));
v___x_772_ = l_Lean_stringToMessageData(v___x_771_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg(lean_object* v_ref_773_, lean_object* v_constName_774_, lean_object* v___y_775_, lean_object* v___y_776_){
_start:
{
lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_778_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__1);
v___x_779_ = 0;
lean_inc(v_constName_774_);
v___x_780_ = l_Lean_MessageData_ofConstName(v_constName_774_, v___x_779_);
v___x_781_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_778_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__2, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__2_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___closed__2);
v___x_783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_781_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7___redArg(v_ref_773_, v___x_783_, v_constName_774_, v___y_775_, v___y_776_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v_ref_785_, lean_object* v_constName_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg(v_ref_785_, v_constName_786_, v___y_787_, v___y_788_);
lean_dec(v___y_788_);
lean_dec(v_ref_785_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2___redArg(lean_object* v_constName_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
lean_object* v___x_795_; 
v___x_795_ = l_Lean_Elab_Command_getRef___redArg(v___y_792_);
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v_a_796_; lean_object* v___x_797_; 
v_a_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_796_);
lean_dec_ref(v___x_795_);
v___x_797_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg(v_a_796_, v_constName_791_, v___y_792_, v___y_793_);
lean_dec(v_a_796_);
return v___x_797_;
}
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec_ref(v___y_792_);
lean_dec(v_constName_791_);
v_a_798_ = lean_ctor_get(v___x_795_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_795_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_795_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2___redArg___boxed(lean_object* v_constName_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2___redArg(v_constName_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2(lean_object* v_constName_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v___x_815_; lean_object* v_env_816_; uint8_t v___x_817_; lean_object* v___x_818_; 
v___x_815_ = lean_st_ref_get(v___y_813_);
v_env_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc_ref(v_env_816_);
lean_dec(v___x_815_);
v___x_817_ = 0;
lean_inc(v_constName_811_);
v___x_818_ = l_Lean_Environment_find_x3f(v_env_816_, v_constName_811_, v___x_817_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v___x_819_; 
v___x_819_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2___redArg(v_constName_811_, v___y_812_, v___y_813_);
return v___x_819_;
}
else
{
lean_object* v_val_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
lean_dec_ref(v___y_812_);
lean_dec(v_constName_811_);
v_val_820_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___x_818_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_val_820_);
lean_dec(v___x_818_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_823_ == 0)
{
lean_ctor_set_tag(v___x_822_, 0);
v___x_825_ = v___x_822_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_val_820_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2___boxed(lean_object* v_constName_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2(v_constName_828_, v___y_829_, v___y_830_);
lean_dec(v___y_830_);
return v_res_832_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__2(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__1));
v___x_836_ = l_Lean_stringToMessageData(v___x_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4(lean_object* v_as_837_, size_t v_sz_838_, size_t v_i_839_, lean_object* v_b_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
uint8_t v___x_844_; 
v___x_844_ = lean_usize_dec_lt(v_i_839_, v_sz_838_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; 
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
v___x_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_845_, 0, v_b_840_);
return v___x_845_;
}
else
{
lean_object* v_a_846_; lean_object* v___x_847_; 
v_a_846_ = lean_array_uget_borrowed(v_as_837_, v_i_839_);
lean_inc_ref(v___y_841_);
lean_inc(v_a_846_);
v___x_847_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2(v_a_846_, v___y_841_, v___y_842_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v___f_849_; lean_object* v___x_850_; lean_object* v___f_851_; lean_object* v___f_852_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___x_860_; uint8_t v___x_861_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_848_);
lean_dec_ref(v___x_847_);
v___f_849_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__0));
v___x_850_ = lean_box(0);
lean_inc(v_a_846_);
v___f_851_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___boxed), 4, 1);
lean_closure_set(v___f_851_, 0, v_a_846_);
v___f_852_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__2___boxed), 4, 1);
lean_closure_set(v___f_852_, 0, v___f_851_);
v___x_860_ = l_Lean_ConstantInfo_levelParams(v_a_848_);
lean_dec(v_a_848_);
v___x_861_ = l_List_isEmpty___redArg(v___x_860_);
lean_dec(v___x_860_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
lean_inc(v_a_846_);
v___x_862_ = l_Lean_MessageData_ofConstName(v_a_846_, v___x_861_);
v___x_863_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___closed__2);
v___x_864_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_864_, 0, v___x_862_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
lean_inc_ref(v___y_841_);
v___x_865_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3___redArg(v___x_864_, v___y_841_, v___y_842_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_dec_ref(v___x_865_);
lean_inc(v___y_842_);
lean_inc_ref(v___y_841_);
v___y_854_ = v___y_841_;
v___y_855_ = v___y_842_;
goto v___jp_853_;
}
else
{
lean_dec_ref(v___f_852_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
return v___x_865_;
}
}
else
{
lean_inc(v___y_842_);
lean_inc_ref(v___y_841_);
v___y_854_ = v___y_841_;
v___y_855_ = v___y_842_;
goto v___jp_853_;
}
v___jp_853_:
{
lean_object* v___x_856_; 
v___x_856_ = l_Lean_Elab_Command_withScope___redArg(v___f_849_, v___f_852_, v___y_854_, v___y_855_);
if (lean_obj_tag(v___x_856_) == 0)
{
size_t v___x_857_; size_t v___x_858_; 
lean_dec_ref(v___x_856_);
v___x_857_ = ((size_t)1ULL);
v___x_858_ = lean_usize_add(v_i_839_, v___x_857_);
v_i_839_ = v___x_858_;
v_b_840_ = v___x_850_;
goto _start;
}
else
{
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
return v___x_856_;
}
}
}
else
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_873_; 
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
v_a_866_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_873_ == 0)
{
v___x_868_ = v___x_847_;
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_847_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_a_866_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___boxed(lean_object* v_as_874_, lean_object* v_sz_875_, lean_object* v_i_876_, lean_object* v_b_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
size_t v_sz_boxed_881_; size_t v_i_boxed_882_; lean_object* v_res_883_; 
v_sz_boxed_881_ = lean_unbox_usize(v_sz_875_);
lean_dec(v_sz_875_);
v_i_boxed_882_ = lean_unbox_usize(v_i_876_);
lean_dec(v_i_876_);
v_res_883_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4(v_as_874_, v_sz_boxed_881_, v_i_boxed_882_, v_b_877_, v___y_878_, v___y_879_);
lean_dec_ref(v_as_874_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance(lean_object* v_declNames_884_, lean_object* v_a_885_, lean_object* v_a_886_){
_start:
{
lean_object* v___x_888_; size_t v_sz_889_; size_t v___x_890_; lean_object* v___x_891_; 
v___x_888_ = lean_box(0);
v_sz_889_ = lean_array_size(v_declNames_884_);
v___x_890_ = ((size_t)0ULL);
v___x_891_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4(v_declNames_884_, v_sz_889_, v___x_890_, v___x_888_, v_a_885_, v_a_886_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_900_; 
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_900_ == 0)
{
lean_object* v_unused_901_; 
v_unused_901_ = lean_ctor_get(v___x_891_, 0);
lean_dec(v_unused_901_);
v___x_893_ = v___x_891_;
v_isShared_894_ = v_isSharedCheck_900_;
goto v_resetjp_892_;
}
else
{
lean_dec(v___x_891_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_900_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
uint8_t v___x_895_; lean_object* v___x_896_; lean_object* v___x_898_; 
v___x_895_ = 1;
v___x_896_ = lean_box(v___x_895_);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v___x_896_);
v___x_898_ = v___x_893_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_896_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
v_a_902_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_891_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_891_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance___boxed(lean_object* v_declNames_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l___private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance(v_declNames_910_, v_a_911_, v_a_912_);
lean_dec_ref(v_declNames_910_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4(lean_object* v_msgData_915_, lean_object* v___y_916_, lean_object* v___y_917_){
_start:
{
lean_object* v___x_919_; 
v___x_919_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___redArg(v_msgData_915_, v___y_917_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4___boxed(lean_object* v_msgData_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__4(v_msgData_920_, v___y_921_, v___y_922_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3(lean_object* v_00_u03b1_925_, lean_object* v_msg_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3___redArg(v_msg_926_, v___y_927_, v___y_928_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3___boxed(lean_object* v_00_u03b1_931_, lean_object* v_msg_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3(v_00_u03b1_931_, v_msg_932_, v___y_933_, v___y_934_);
lean_dec(v___y_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2(lean_object* v_00_u03b1_937_, lean_object* v_constName_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2___redArg(v_constName_938_, v___y_939_, v___y_940_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2___boxed(lean_object* v_00_u03b1_943_, lean_object* v_constName_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2(v_00_u03b1_943_, v_constName_944_, v___y_945_, v___y_946_);
lean_dec(v___y_946_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5(lean_object* v_msgData_949_, lean_object* v_macroStack_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
lean_object* v___x_954_; 
v___x_954_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___redArg(v_msgData_949_, v_macroStack_950_, v___y_952_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5___boxed(lean_object* v_msgData_955_, lean_object* v_macroStack_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__3_spec__5(v_msgData_955_, v_macroStack_956_, v___y_957_, v___y_958_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3(lean_object* v_00_u03b1_961_, lean_object* v_ref_962_, lean_object* v_constName_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v___x_967_; 
v___x_967_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___redArg(v_ref_962_, v_constName_963_, v___y_964_, v___y_965_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3___boxed(lean_object* v_00_u03b1_968_, lean_object* v_ref_969_, lean_object* v_constName_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3(v_00_u03b1_968_, v_ref_969_, v_constName_970_, v___y_971_, v___y_972_);
lean_dec(v___y_972_);
lean_dec(v_ref_969_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7(lean_object* v_00_u03b1_975_, lean_object* v_ref_976_, lean_object* v_msg_977_, lean_object* v_declHint_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7___redArg(v_ref_976_, v_msg_977_, v_declHint_978_, v___y_979_, v___y_980_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7___boxed(lean_object* v_00_u03b1_983_, lean_object* v_ref_984_, lean_object* v_msg_985_, lean_object* v_declHint_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7(v_00_u03b1_983_, v_ref_984_, v_msg_985_, v_declHint_986_, v___y_987_, v___y_988_);
lean_dec(v___y_988_);
lean_dec(v_ref_984_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12(lean_object* v_msg_991_, lean_object* v_declHint_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
lean_object* v___x_996_; 
v___x_996_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___redArg(v_msg_991_, v_declHint_992_, v___y_994_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12___boxed(lean_object* v_msg_997_, lean_object* v_declHint_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__10_spec__12(v_msg_997_, v_declHint_998_, v___y_999_, v___y_1000_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11(lean_object* v_00_u03b1_1003_, lean_object* v_ref_1004_, lean_object* v_msg_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11___redArg(v_ref_1004_, v_msg_1005_, v___y_1006_, v___y_1007_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11___boxed(lean_object* v_00_u03b1_1010_, lean_object* v_ref_1011_, lean_object* v_msg_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__2_spec__2_spec__3_spec__7_spec__11(v_00_u03b1_1010_, v_ref_1011_, v_msg_1012_, v___y_1013_, v___y_1014_);
lean_dec(v___y_1014_);
lean_dec(v_ref_1011_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_initFn_00___x40_Lean_Elab_Deriving_TypeName_4279947348____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1019_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_TypeName_0__Lean_Elab_deriveTypeNameInstance_spec__4___lam__1___closed__48));
v___x_1020_ = ((lean_object*)(l_Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Deriving_TypeName_4279947348____hygCtx___hyg_2_));
v___x_1021_ = l_Lean_Elab_registerDerivingHandler(v___x_1019_, v___x_1020_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_initFn_00___x40_Lean_Elab_Deriving_TypeName_4279947348____hygCtx___hyg_2____boxed(lean_object* v_a_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l_Lean_Elab_initFn_00___x40_Lean_Elab_Deriving_TypeName_4279947348____hygCtx___hyg_2_();
return v_res_1023_;
}
}
lean_object* runtime_initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Deriving_TypeName(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_initFn_00___x40_Lean_Elab_Deriving_TypeName_4279947348____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Deriving_TypeName(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Deriving_TypeName(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_TypeName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Deriving_TypeName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Deriving_TypeName(builtin);
}
#ifdef __cplusplus
}
#endif
