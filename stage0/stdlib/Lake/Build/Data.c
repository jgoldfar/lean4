// Lean compiler output
// Module: Lake.Build.Data
// Imports: public import Lake.Build.Key public import Lake.Util.Family public import Lake.Config.Dynlib public import Lake.Config.Kinds public meta import Lake.Config.Kinds public meta import Lake.Util.Name import all Lake.Config.Kinds import Lake.Util.Name
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lake_Name_quoteFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Macro_resolveNamespace(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lake_Config_Kinds_0__Lake_facetKindForNamespace(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
extern lean_object* l_Lake_Module_keyword;
extern lean_object* l_Lake_Package_keyword;
LEAN_EXPORT lean_object* l_Lake_OptDataKind_anonymous(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instInhabited(lean_object*);
LEAN_EXPORT uint8_t l_Lake_OptDataKind_isAnonymous___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_isAnonymous___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_OptDataKind_isAnonymous(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_isAnonymous___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_OptDataKind_instCoeOutName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_OptDataKind_instCoeOutName___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_OptDataKind_instCoeOutName___closed__0 = (const lean_object*)&l_Lake_OptDataKind_instCoeOutName___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString___lam__0(lean_object*);
static const lean_closure_object l_Lake_OptDataKind_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_OptDataKind_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_OptDataKind_instToString___closed__0 = (const lean_object*)&l_Lake_OptDataKind_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString(lean_object*);
static const lean_string_object l_Lake_dataTypeDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_dataTypeDecl___closed__0 = (const lean_object*)&l_Lake_dataTypeDecl___closed__0_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dataTypeDecl"};
static const lean_object* l_Lake_dataTypeDecl___closed__1 = (const lean_object*)&l_Lake_dataTypeDecl___closed__1_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_dataTypeDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__2_value_aux_0),((lean_object*)&l_Lake_dataTypeDecl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 208, 230, 96, 184, 13, 30, 26)}};
static const lean_object* l_Lake_dataTypeDecl___closed__2 = (const lean_object*)&l_Lake_dataTypeDecl___closed__2_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lake_dataTypeDecl___closed__3 = (const lean_object*)&l_Lake_dataTypeDecl___closed__3_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lake_dataTypeDecl___closed__4 = (const lean_object*)&l_Lake_dataTypeDecl___closed__4_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lake_dataTypeDecl___closed__5 = (const lean_object*)&l_Lake_dataTypeDecl___closed__5_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__5_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lake_dataTypeDecl___closed__6 = (const lean_object*)&l_Lake_dataTypeDecl___closed__6_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lake_dataTypeDecl___closed__7 = (const lean_object*)&l_Lake_dataTypeDecl___closed__7_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__7_value),LEAN_SCALAR_PTR_LITERAL(229, 56, 215, 222, 243, 187, 251, 54)}};
static const lean_object* l_Lake_dataTypeDecl___closed__8 = (const lean_object*)&l_Lake_dataTypeDecl___closed__8_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__8_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__9 = (const lean_object*)&l_Lake_dataTypeDecl___closed__9_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__9_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__10 = (const lean_object*)&l_Lake_dataTypeDecl___closed__10_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "data_type "};
static const lean_object* l_Lake_dataTypeDecl___closed__11 = (const lean_object*)&l_Lake_dataTypeDecl___closed__11_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__11_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__12 = (const lean_object*)&l_Lake_dataTypeDecl___closed__12_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_dataTypeDecl___closed__12_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__13 = (const lean_object*)&l_Lake_dataTypeDecl___closed__13_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lake_dataTypeDecl___closed__14 = (const lean_object*)&l_Lake_dataTypeDecl___closed__14_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__14_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lake_dataTypeDecl___closed__15 = (const lean_object*)&l_Lake_dataTypeDecl___closed__15_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__15_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__16 = (const lean_object*)&l_Lake_dataTypeDecl___closed__16_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__13_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__17 = (const lean_object*)&l_Lake_dataTypeDecl___closed__17_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lake_dataTypeDecl___closed__18 = (const lean_object*)&l_Lake_dataTypeDecl___closed__18_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__18_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__19 = (const lean_object*)&l_Lake_dataTypeDecl___closed__19_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__17_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__20 = (const lean_object*)&l_Lake_dataTypeDecl___closed__20_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lake_dataTypeDecl___closed__21 = (const lean_object*)&l_Lake_dataTypeDecl___closed__21_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__21_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lake_dataTypeDecl___closed__22 = (const lean_object*)&l_Lake_dataTypeDecl___closed__22_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_dataTypeDecl___closed__23 = (const lean_object*)&l_Lake_dataTypeDecl___closed__23_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__20_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__24 = (const lean_object*)&l_Lake_dataTypeDecl___closed__24_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__2_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__24_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__25 = (const lean_object*)&l_Lake_dataTypeDecl___closed__25_value;
LEAN_EXPORT const lean_object* l_Lake_dataTypeDecl = (const lean_object*)&l_Lake_dataTypeDecl___closed__25_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "family_def"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__6 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__6_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__8_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(99, 134, 241, 204, 211, 206, 124, 144)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(37, 156, 84, 218, 244, 57, 142, 153)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__15 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__15_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__17 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__17_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__19 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__19_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__21 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__21_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "DataKind"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(85, 248, 95, 223, 234, 189, 212, 227)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__25 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__25_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(57, 137, 77, 253, 49, 4, 64, 32)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__27 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__27_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__28 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__28_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__29 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__29_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__27_value),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__29_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__30 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__30_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__31 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__31_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__31_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__33 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__33_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__35 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__35_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__37 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__37_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__37_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__39 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__39_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__41 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__41_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__43 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__43_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__43_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__45 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__45_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__45_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__47 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__47_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__47_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__49 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__49_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__50 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__50_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(38, 215, 101, 250, 181, 108, 118, 102)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Name.isAnonymous_iff_eq_anonymous"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__52 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__52_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Name"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__54 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__54_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "isAnonymous_iff_eq_anonymous"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__55 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__55_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(154, 178, 141, 167, 199, 52, 205, 105)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__55_value),LEAN_SCALAR_PTR_LITERAL(10, 45, 172, 138, 28, 252, 34, 255)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(94, 175, 90, 84, 80, 182, 246, 68)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__55_value),LEAN_SCALAR_PTR_LITERAL(158, 41, 113, 154, 180, 181, 171, 218)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__58 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__58_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__58_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__59 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__59_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__60 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__60_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__61 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__61_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__62 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__62_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__63 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__63_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__62_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__63_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "DataType"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__65 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__65_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(33, 68, 121, 193, 122, 109, 136, 152)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__67 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__67_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__67_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "familyDef"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__69 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__69_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__69_value),LEAN_SCALAR_PTR_LITERAL(59, 240, 138, 11, 51, 35, 78, 153)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71;
static const lean_array_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instDataKindUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Lake_instDataKindUnit___closed__0 = (const lean_object*)&l_Lake_instDataKindUnit___closed__0_value;
static const lean_ctor_object l_Lake_instDataKindUnit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instDataKindUnit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 16, 7, 142, 223, 189, 92, 152)}};
static const lean_object* l_Lake_instDataKindUnit___closed__1 = (const lean_object*)&l_Lake_instDataKindUnit___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instDataKindUnit = (const lean_object*)&l_Lake_instDataKindUnit___closed__1_value;
static const lean_string_object l_Lake_instDataKindBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bool"};
static const lean_object* l_Lake_instDataKindBool___closed__0 = (const lean_object*)&l_Lake_instDataKindBool___closed__0_value;
static const lean_ctor_object l_Lake_instDataKindBool___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instDataKindBool___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 123, 29, 106, 21, 111, 175, 162)}};
static const lean_object* l_Lake_instDataKindBool___closed__1 = (const lean_object*)&l_Lake_instDataKindBool___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instDataKindBool = (const lean_object*)&l_Lake_instDataKindBool___closed__1_value;
static const lean_string_object l_Lake_instDataKindFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "filepath"};
static const lean_object* l_Lake_instDataKindFilePath___closed__0 = (const lean_object*)&l_Lake_instDataKindFilePath___closed__0_value;
static const lean_ctor_object l_Lake_instDataKindFilePath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instDataKindFilePath___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 79, 67, 231, 21, 24, 25, 253)}};
static const lean_object* l_Lake_instDataKindFilePath___closed__1 = (const lean_object*)&l_Lake_instDataKindFilePath___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instDataKindFilePath = (const lean_object*)&l_Lake_instDataKindFilePath___closed__1_value;
static const lean_string_object l_Lake_instDataKindDynlib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "dynlib"};
static const lean_object* l_Lake_instDataKindDynlib___closed__0 = (const lean_object*)&l_Lake_instDataKindDynlib___closed__0_value;
static const lean_ctor_object l_Lake_instDataKindDynlib___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instDataKindDynlib___closed__0_value),LEAN_SCALAR_PTR_LITERAL(96, 146, 131, 63, 203, 243, 150, 200)}};
static const lean_object* l_Lake_instDataKindDynlib___closed__1 = (const lean_object*)&l_Lake_instDataKindDynlib___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instDataKindDynlib = (const lean_object*)&l_Lake_instDataKindDynlib___closed__1_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "builtinFacetCommand"};
static const lean_object* l_Lake_builtinFacetCommand___closed__0 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__0_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__1_value_aux_0),((lean_object*)&l_Lake_builtinFacetCommand___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 118, 124, 184, 192, 242, 254, 60)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__1 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__1_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "builtin_facet "};
static const lean_object* l_Lake_builtinFacetCommand___closed__2 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__2_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__2_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__3 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__3_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__3_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__4 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__4_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "atomic"};
static const lean_object* l_Lake_builtinFacetCommand___closed__5 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__5_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_builtinFacetCommand___closed__5_value),LEAN_SCALAR_PTR_LITERAL(56, 145, 113, 208, 127, 167, 216, 55)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__6 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__6_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lake_builtinFacetCommand___closed__7 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__7_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_builtinFacetCommand___closed__7_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__8 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__8_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " @ "};
static const lean_object* l_Lake_builtinFacetCommand___closed__9 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__9_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__9_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__10 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__10_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__10_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__11 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__11_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__8_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__11_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__12 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__12_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__6_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__12_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__13 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__13_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__6_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__13_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__14 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__14_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__14_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__15 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__15_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__15_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__16 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__16_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__16_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__17 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__17_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__17_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__18 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__18_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* l_Lake_builtinFacetCommand___closed__19 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__19_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__19_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__20 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__20_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__18_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__20_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__21 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__21_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__21_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__22 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__22_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_builtinFacetCommand___closed__22_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__23 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__23_value;
LEAN_EXPORT const lean_object* l_Lake_builtinFacetCommand = (const lean_object*)&l_Lake_builtinFacetCommand___closed__23_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__0_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__1_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__2_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__4_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__5_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(29, 67, 225, 118, 155, 2, 197, 97)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__7_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "expose"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__8_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(170, 113, 233, 77, 243, 78, 243, 129)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__10 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__10_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__11 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__11_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__12_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__13_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__14 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__14_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "FamilyDef"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(149, 240, 255, 22, 138, 196, 41, 195)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__17 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__17_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__18 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__18_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__19 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__19_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__21 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__21_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__21_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__23 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__23_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_++_"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__25 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__25_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__25_value),LEAN_SCALAR_PTR_LITERAL(90, 69, 86, 178, 149, 48, 216, 23)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__26 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__26_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "++"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__27 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__27_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "inferInstanceAs"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "cannot generate facet declaration name from facet name"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__30 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__30_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Facet"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__31 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__31_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___boxed(lean_object**);
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "FacetOut"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 147, 236, 126, 195, 124, 217, 255)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unknown target namespace `"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__2_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "unknown or ambiguous target namespace `"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_facetDataDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "facetDataDecl"};
static const lean_object* l_Lake_facetDataDecl___closed__0 = (const lean_object*)&l_Lake_facetDataDecl___closed__0_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_facetDataDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_facetDataDecl___closed__1_value_aux_0),((lean_object*)&l_Lake_facetDataDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(122, 4, 106, 30, 217, 73, 248, 83)}};
static const lean_object* l_Lake_facetDataDecl___closed__1 = (const lean_object*)&l_Lake_facetDataDecl___closed__1_value;
static const lean_string_object l_Lake_facetDataDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "facet_data "};
static const lean_object* l_Lake_facetDataDecl___closed__2 = (const lean_object*)&l_Lake_facetDataDecl___closed__2_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_facetDataDecl___closed__2_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__3 = (const lean_object*)&l_Lake_facetDataDecl___closed__3_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_facetDataDecl___closed__3_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__4 = (const lean_object*)&l_Lake_facetDataDecl___closed__4_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_facetDataDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__5 = (const lean_object*)&l_Lake_facetDataDecl___closed__5_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_facetDataDecl___closed__5_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__6 = (const lean_object*)&l_Lake_facetDataDecl___closed__6_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_facetDataDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__7 = (const lean_object*)&l_Lake_facetDataDecl___closed__7_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_facetDataDecl___closed__7_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__8 = (const lean_object*)&l_Lake_facetDataDecl___closed__8_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_facetDataDecl___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_facetDataDecl___closed__8_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__9 = (const lean_object*)&l_Lake_facetDataDecl___closed__9_value;
LEAN_EXPORT const lean_object* l_Lake_facetDataDecl = (const lean_object*)&l_Lake_facetDataDecl___closed__9_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(249, 224, 215, 22, 102, 9, 211, 189)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__1_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__2_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__3_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__1_value),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__3_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__4_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__19_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__7_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__7_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__8_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__9 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__9_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__9_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__10 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__10_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__11 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__11_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__8_value),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__11_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__12_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29_value),LEAN_SCALAR_PTR_LITERAL(136, 71, 28, 207, 18, 40, 68, 73)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_packageDataDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "packageDataDecl"};
static const lean_object* l_Lake_packageDataDecl___closed__0 = (const lean_object*)&l_Lake_packageDataDecl___closed__0_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_packageDataDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_packageDataDecl___closed__1_value_aux_0),((lean_object*)&l_Lake_packageDataDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 160, 98, 6, 154, 122, 231, 28)}};
static const lean_object* l_Lake_packageDataDecl___closed__1 = (const lean_object*)&l_Lake_packageDataDecl___closed__1_value;
static const lean_string_object l_Lake_packageDataDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "package_data "};
static const lean_object* l_Lake_packageDataDecl___closed__2 = (const lean_object*)&l_Lake_packageDataDecl___closed__2_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_packageDataDecl___closed__2_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__3 = (const lean_object*)&l_Lake_packageDataDecl___closed__3_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_packageDataDecl___closed__3_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__4 = (const lean_object*)&l_Lake_packageDataDecl___closed__4_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_packageDataDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__5 = (const lean_object*)&l_Lake_packageDataDecl___closed__5_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_packageDataDecl___closed__5_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__6 = (const lean_object*)&l_Lake_packageDataDecl___closed__6_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_packageDataDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__7 = (const lean_object*)&l_Lake_packageDataDecl___closed__7_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_packageDataDecl___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_packageDataDecl___closed__7_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__8 = (const lean_object*)&l_Lake_packageDataDecl___closed__8_value;
LEAN_EXPORT const lean_object* l_Lake_packageDataDecl = (const lean_object*)&l_Lake_packageDataDecl___closed__8_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "facet_data"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_moduleDataDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "moduleDataDecl"};
static const lean_object* l_Lake_moduleDataDecl___closed__0 = (const lean_object*)&l_Lake_moduleDataDecl___closed__0_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_moduleDataDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_moduleDataDecl___closed__1_value_aux_0),((lean_object*)&l_Lake_moduleDataDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 236, 99, 131, 4, 228, 74, 185)}};
static const lean_object* l_Lake_moduleDataDecl___closed__1 = (const lean_object*)&l_Lake_moduleDataDecl___closed__1_value;
static const lean_string_object l_Lake_moduleDataDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "module_data "};
static const lean_object* l_Lake_moduleDataDecl___closed__2 = (const lean_object*)&l_Lake_moduleDataDecl___closed__2_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_moduleDataDecl___closed__2_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__3 = (const lean_object*)&l_Lake_moduleDataDecl___closed__3_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_moduleDataDecl___closed__3_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__4 = (const lean_object*)&l_Lake_moduleDataDecl___closed__4_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_moduleDataDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__5 = (const lean_object*)&l_Lake_moduleDataDecl___closed__5_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_moduleDataDecl___closed__5_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__6 = (const lean_object*)&l_Lake_moduleDataDecl___closed__6_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_moduleDataDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__7 = (const lean_object*)&l_Lake_moduleDataDecl___closed__7_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_moduleDataDecl___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_moduleDataDecl___closed__7_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__8 = (const lean_object*)&l_Lake_moduleDataDecl___closed__8_value;
LEAN_EXPORT const lean_object* l_Lake_moduleDataDecl = (const lean_object*)&l_Lake_moduleDataDecl___closed__8_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__moduleDataDecl__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__moduleDataDecl__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_libraryDataDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "libraryDataDecl"};
static const lean_object* l_Lake_libraryDataDecl___closed__0 = (const lean_object*)&l_Lake_libraryDataDecl___closed__0_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_libraryDataDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_libraryDataDecl___closed__1_value_aux_0),((lean_object*)&l_Lake_libraryDataDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 126, 44, 46, 121, 159, 210, 189)}};
static const lean_object* l_Lake_libraryDataDecl___closed__1 = (const lean_object*)&l_Lake_libraryDataDecl___closed__1_value;
static const lean_string_object l_Lake_libraryDataDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "library_data "};
static const lean_object* l_Lake_libraryDataDecl___closed__2 = (const lean_object*)&l_Lake_libraryDataDecl___closed__2_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_libraryDataDecl___closed__2_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__3 = (const lean_object*)&l_Lake_libraryDataDecl___closed__3_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_libraryDataDecl___closed__3_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__4 = (const lean_object*)&l_Lake_libraryDataDecl___closed__4_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_libraryDataDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__5 = (const lean_object*)&l_Lake_libraryDataDecl___closed__5_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_libraryDataDecl___closed__5_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__6 = (const lean_object*)&l_Lake_libraryDataDecl___closed__6_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_libraryDataDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__7 = (const lean_object*)&l_Lake_libraryDataDecl___closed__7_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_libraryDataDecl___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_libraryDataDecl___closed__7_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__8 = (const lean_object*)&l_Lake_libraryDataDecl___closed__8_value;
LEAN_EXPORT const lean_object* l_Lake_libraryDataDecl = (const lean_object*)&l_Lake_libraryDataDecl___closed__8_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__0_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_customDataDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "customDataDecl"};
static const lean_object* l_Lake_customDataDecl___closed__0 = (const lean_object*)&l_Lake_customDataDecl___closed__0_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_customDataDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_customDataDecl___closed__1_value_aux_0),((lean_object*)&l_Lake_customDataDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 51, 251, 114, 214, 40, 109, 65)}};
static const lean_object* l_Lake_customDataDecl___closed__1 = (const lean_object*)&l_Lake_customDataDecl___closed__1_value;
static const lean_string_object l_Lake_customDataDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "custom_data "};
static const lean_object* l_Lake_customDataDecl___closed__2 = (const lean_object*)&l_Lake_customDataDecl___closed__2_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_customDataDecl___closed__2_value)}};
static const lean_object* l_Lake_customDataDecl___closed__3 = (const lean_object*)&l_Lake_customDataDecl___closed__3_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_customDataDecl___closed__3_value)}};
static const lean_object* l_Lake_customDataDecl___closed__4 = (const lean_object*)&l_Lake_customDataDecl___closed__4_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_customDataDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_customDataDecl___closed__5 = (const lean_object*)&l_Lake_customDataDecl___closed__5_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_customDataDecl___closed__5_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_customDataDecl___closed__6 = (const lean_object*)&l_Lake_customDataDecl___closed__6_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_customDataDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_customDataDecl___closed__7 = (const lean_object*)&l_Lake_customDataDecl___closed__7_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_customDataDecl___closed__7_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_customDataDecl___closed__8 = (const lean_object*)&l_Lake_customDataDecl___closed__8_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_customDataDecl___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_customDataDecl___closed__8_value)}};
static const lean_object* l_Lake_customDataDecl___closed__9 = (const lean_object*)&l_Lake_customDataDecl___closed__9_value;
LEAN_EXPORT const lean_object* l_Lake_customDataDecl = (const lean_object*)&l_Lake_customDataDecl___closed__9_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__0_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__2_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__8_value),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__2_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "CustomOut"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__4_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(104, 189, 225, 248, 232, 79, 182, 148)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_anonymous(lean_object* v_00_u03b1_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_box(0);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instInhabited(lean_object* v_00_u03b1_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_box(0);
return v___x_4_;
}
}
LEAN_EXPORT uint8_t l_Lake_OptDataKind_isAnonymous___redArg(lean_object* v_self_5_){
_start:
{
uint8_t v___x_6_; 
v___x_6_ = l_Lean_Name_isAnonymous(v_self_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_isAnonymous___redArg___boxed(lean_object* v_self_7_){
_start:
{
uint8_t v_res_8_; lean_object* v_r_9_; 
v_res_8_ = l_Lake_OptDataKind_isAnonymous___redArg(v_self_7_);
lean_dec(v_self_7_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
LEAN_EXPORT uint8_t l_Lake_OptDataKind_isAnonymous(lean_object* v_00_u03b1_10_, lean_object* v_self_11_){
_start:
{
uint8_t v___x_12_; 
v___x_12_ = l_Lean_Name_isAnonymous(v_self_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_isAnonymous___boxed(lean_object* v_00_u03b1_13_, lean_object* v_self_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lake_OptDataKind_isAnonymous(v_00_u03b1_13_, v_self_14_);
lean_dec(v_self_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___redArg(lean_object* v_inst_17_){
_start:
{
lean_inc(v_inst_17_);
return v_inst_17_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___redArg___boxed(lean_object* v_inst_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = l_Lake_OptDataKind_instOfDataKind___redArg(v_inst_18_);
lean_dec(v_inst_18_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind(lean_object* v_00_u03b1_20_, lean_object* v_inst_21_){
_start:
{
lean_inc(v_inst_21_);
return v_inst_21_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___boxed(lean_object* v_00_u03b1_22_, lean_object* v_inst_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lake_OptDataKind_instOfDataKind(v_00_u03b1_22_, v_inst_23_);
lean_dec(v_inst_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___lam__0(lean_object* v_x_25_){
_start:
{
lean_inc(v_x_25_);
return v_x_25_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___lam__0___boxed(lean_object* v_x_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lake_OptDataKind_instCoeOutName___lam__0(v_x_26_);
lean_dec(v_x_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName(lean_object* v_00_u03b1_29_){
_start:
{
lean_object* v___f_30_; 
v___f_30_ = ((lean_object*)(l_Lake_OptDataKind_instCoeOutName___closed__0));
return v___f_30_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString___lam__0(lean_object* v_x_31_){
_start:
{
uint8_t v___x_32_; lean_object* v___x_33_; 
v___x_32_ = 1;
v___x_33_ = l_Lean_Name_toString(v_x_31_, v___x_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString(lean_object* v_00_u03b1_35_){
_start:
{
lean_object* v___f_36_; 
v___f_36_ = ((lean_object*)(l_Lake_OptDataKind_instToString___closed__0));
return v___f_36_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23));
v___x_151_ = l_String_toRawSubstring_x27(v___x_150_);
return v___x_151_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__52));
v___x_223_ = l_String_toRawSubstring_x27(v___x_222_);
return v___x_223_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71(void){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = l_Array_mkArray0(lean_box(0));
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1(lean_object* v_x_262_, lean_object* v_a_263_, lean_object* v_a_264_){
_start:
{
lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_265_ = ((lean_object*)(l_Lake_dataTypeDecl___closed__2));
lean_inc(v_x_262_);
v___x_266_ = l_Lean_Syntax_isOfKind(v_x_262_, v___x_265_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; 
lean_dec_ref(v_a_263_);
lean_dec(v_x_262_);
v___x_267_ = lean_box(1);
v___x_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v_a_264_);
return v___x_268_;
}
else
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v_kind_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___y_276_; lean_object* v___y_277_; lean_object* v___y_278_; lean_object* v___y_279_; lean_object* v___y_280_; lean_object* v___y_281_; lean_object* v___y_282_; lean_object* v___y_283_; lean_object* v___y_284_; lean_object* v___y_366_; lean_object* v___x_382_; 
v___x_269_ = lean_unsigned_to_nat(0u);
v___x_270_ = l_Lean_Syntax_getArg(v_x_262_, v___x_269_);
v___x_271_ = lean_unsigned_to_nat(2u);
v_kind_272_ = l_Lean_Syntax_getArg(v_x_262_, v___x_271_);
v___x_273_ = lean_unsigned_to_nat(4u);
v___x_274_ = l_Lean_Syntax_getArg(v_x_262_, v___x_273_);
lean_dec(v_x_262_);
v___x_382_ = l_Lean_Syntax_getOptional_x3f(v___x_270_);
lean_dec(v___x_270_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v___x_383_; 
v___x_383_ = lean_box(0);
v___y_366_ = v___x_383_;
goto v___jp_365_;
}
else
{
lean_object* v_val_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
v_val_384_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_382_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_val_384_);
lean_dec(v___x_382_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_val_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
v___y_366_ = v___x_389_;
goto v___jp_365_;
}
}
}
v___jp_275_:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
lean_inc_ref(v___y_283_);
v___x_285_ = l_Array_append___redArg(v___y_283_, v___y_284_);
lean_dec_ref(v___y_284_);
lean_inc(v___y_278_);
lean_inc(v___y_276_);
v___x_286_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_286_, 0, v___y_276_);
lean_ctor_set(v___x_286_, 1, v___y_278_);
lean_ctor_set(v___x_286_, 2, v___x_285_);
v___x_287_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0));
lean_inc(v___y_276_);
v___x_288_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_288_, 0, v___y_276_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
lean_inc(v___y_276_);
v___x_290_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_290_, 0, v___y_276_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2));
lean_inc(v___y_276_);
v___x_292_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_292_, 0, v___y_276_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
lean_inc(v___x_274_);
lean_inc_ref(v___x_292_);
lean_inc(v___y_279_);
lean_inc_ref(v___x_290_);
lean_inc(v___y_276_);
v___x_293_ = l_Lean_Syntax_node8(v___y_276_, v___y_277_, v___x_286_, v___x_288_, v_kind_272_, v___x_290_, v___y_282_, v___y_279_, v___x_292_, v___x_274_);
v___x_294_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7));
v___x_295_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9));
lean_inc(v___y_278_);
lean_inc(v___y_276_);
v___x_296_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_296_, 0, v___y_276_);
lean_ctor_set(v___x_296_, 1, v___y_278_);
lean_ctor_set(v___x_296_, 2, v___y_283_);
v___x_297_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10));
v___x_298_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11));
lean_inc(v___y_276_);
v___x_299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_299_, 0, v___y_276_);
lean_ctor_set(v___x_299_, 1, v___x_297_);
lean_inc(v___y_276_);
v___x_300_ = l_Lean_Syntax_node1(v___y_276_, v___x_298_, v___x_299_);
lean_inc(v___y_278_);
lean_inc(v___y_276_);
v___x_301_ = l_Lean_Syntax_node1(v___y_276_, v___y_278_, v___x_300_);
lean_inc_ref_n(v___x_296_, 6);
lean_inc(v___y_276_);
v___x_302_ = l_Lean_Syntax_node7(v___y_276_, v___x_295_, v___x_296_, v___x_296_, v___x_301_, v___x_296_, v___x_296_, v___x_296_, v___x_296_);
v___x_303_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12));
v___x_304_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13));
v___x_305_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16));
lean_inc_ref(v___x_296_);
lean_inc(v___y_276_);
v___x_306_ = l_Lean_Syntax_node1(v___y_276_, v___x_305_, v___x_296_);
lean_inc(v___y_276_);
v___x_307_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_307_, 0, v___y_276_);
lean_ctor_set(v___x_307_, 1, v___x_303_);
v___x_308_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18));
v___x_309_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20));
v___x_310_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22));
v___x_311_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24);
v___x_312_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__25));
lean_inc(v___y_280_);
lean_inc(v___y_281_);
v___x_313_ = l_Lean_addMacroScope(v___y_281_, v___x_312_, v___y_280_);
v___x_314_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__30));
lean_inc(v___y_276_);
v___x_315_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_315_, 0, v___y_276_);
lean_ctor_set(v___x_315_, 1, v___x_311_);
lean_ctor_set(v___x_315_, 2, v___x_313_);
lean_ctor_set(v___x_315_, 3, v___x_314_);
lean_inc(v___y_278_);
lean_inc(v___y_276_);
v___x_316_ = l_Lean_Syntax_node1(v___y_276_, v___y_278_, v___x_274_);
lean_inc(v___y_276_);
v___x_317_ = l_Lean_Syntax_node2(v___y_276_, v___x_310_, v___x_315_, v___x_316_);
lean_inc(v___y_276_);
v___x_318_ = l_Lean_Syntax_node2(v___y_276_, v___x_309_, v___x_290_, v___x_317_);
lean_inc_ref(v___x_296_);
lean_inc(v___y_276_);
v___x_319_ = l_Lean_Syntax_node2(v___y_276_, v___x_308_, v___x_296_, v___x_318_);
v___x_320_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32));
v___x_321_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34));
v___x_322_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__35));
lean_inc(v___y_276_);
v___x_323_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_323_, 0, v___y_276_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36));
lean_inc(v___y_276_);
v___x_325_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_325_, 0, v___y_276_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
v___x_326_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38));
v___x_327_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__39));
lean_inc(v___y_276_);
v___x_328_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_328_, 0, v___y_276_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
v___x_329_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42));
v___x_330_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44));
v___x_331_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__45));
v___x_332_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46));
lean_inc(v___y_276_);
v___x_333_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_333_, 0, v___y_276_);
lean_ctor_set(v___x_333_, 1, v___x_331_);
v___x_334_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48));
lean_inc_ref(v___x_296_);
lean_inc(v___y_276_);
v___x_335_ = l_Lean_Syntax_node1(v___y_276_, v___x_334_, v___x_296_);
v___x_336_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__49));
lean_inc(v___y_276_);
v___x_337_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_337_, 0, v___y_276_);
lean_ctor_set(v___x_337_, 1, v___x_336_);
v___x_338_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51));
v___x_339_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53);
v___x_340_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56));
v___x_341_ = l_Lean_addMacroScope(v___y_281_, v___x_340_, v___y_280_);
v___x_342_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__59));
lean_inc(v___y_276_);
v___x_343_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_343_, 0, v___y_276_);
lean_ctor_set(v___x_343_, 1, v___x_339_);
lean_ctor_set(v___x_343_, 2, v___x_341_);
lean_ctor_set(v___x_343_, 3, v___x_342_);
lean_inc_ref_n(v___x_296_, 2);
lean_inc(v___y_276_);
v___x_344_ = l_Lean_Syntax_node3(v___y_276_, v___x_338_, v___x_296_, v___x_296_, v___x_343_);
lean_inc(v___y_278_);
lean_inc(v___y_276_);
v___x_345_ = l_Lean_Syntax_node1(v___y_276_, v___y_278_, v___x_344_);
v___x_346_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__60));
lean_inc(v___y_276_);
v___x_347_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_347_, 0, v___y_276_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
lean_inc(v___y_278_);
lean_inc(v___y_276_);
v___x_348_ = l_Lean_Syntax_node3(v___y_276_, v___y_278_, v___x_337_, v___x_345_, v___x_347_);
lean_inc_ref_n(v___x_296_, 3);
lean_inc(v___y_276_);
v___x_349_ = l_Lean_Syntax_node6(v___y_276_, v___x_332_, v___x_333_, v___x_335_, v___x_296_, v___x_296_, v___x_348_, v___x_296_);
lean_inc(v___y_278_);
lean_inc(v___y_276_);
v___x_350_ = l_Lean_Syntax_node1(v___y_276_, v___y_278_, v___x_349_);
lean_inc(v___y_276_);
v___x_351_ = l_Lean_Syntax_node1(v___y_276_, v___x_330_, v___x_350_);
lean_inc(v___y_276_);
v___x_352_ = l_Lean_Syntax_node1(v___y_276_, v___x_329_, v___x_351_);
lean_inc(v___y_276_);
v___x_353_ = l_Lean_Syntax_node2(v___y_276_, v___x_326_, v___x_328_, v___x_352_);
lean_inc(v___y_278_);
lean_inc(v___y_276_);
v___x_354_ = l_Lean_Syntax_node3(v___y_276_, v___y_278_, v___y_279_, v___x_325_, v___x_353_);
v___x_355_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__61));
lean_inc(v___y_276_);
v___x_356_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_356_, 0, v___y_276_);
lean_ctor_set(v___x_356_, 1, v___x_355_);
lean_inc(v___y_276_);
v___x_357_ = l_Lean_Syntax_node3(v___y_276_, v___x_321_, v___x_323_, v___x_354_, v___x_356_);
v___x_358_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64));
lean_inc_ref_n(v___x_296_, 2);
lean_inc(v___y_276_);
v___x_359_ = l_Lean_Syntax_node2(v___y_276_, v___x_358_, v___x_296_, v___x_296_);
lean_inc_ref(v___x_296_);
lean_inc(v___y_276_);
v___x_360_ = l_Lean_Syntax_node4(v___y_276_, v___x_320_, v___x_292_, v___x_357_, v___x_359_, v___x_296_);
lean_inc_ref(v___x_296_);
lean_inc(v___y_276_);
v___x_361_ = l_Lean_Syntax_node6(v___y_276_, v___x_304_, v___x_306_, v___x_307_, v___x_296_, v___x_296_, v___x_319_, v___x_360_);
lean_inc(v___y_276_);
v___x_362_ = l_Lean_Syntax_node2(v___y_276_, v___x_294_, v___x_302_, v___x_361_);
v___x_363_ = l_Lean_Syntax_node2(v___y_276_, v___y_278_, v___x_293_, v___x_362_);
v___x_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
lean_ctor_set(v___x_364_, 1, v_a_264_);
return v___x_364_;
}
v___jp_365_:
{
lean_object* v_quotContext_367_; lean_object* v_currMacroScope_368_; lean_object* v_ref_369_; lean_object* v___x_370_; uint8_t v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_quotContext_367_ = lean_ctor_get(v_a_263_, 1);
lean_inc(v_quotContext_367_);
v_currMacroScope_368_ = lean_ctor_get(v_a_263_, 2);
lean_inc(v_currMacroScope_368_);
v_ref_369_ = lean_ctor_get(v_a_263_, 5);
lean_inc(v_ref_369_);
lean_dec_ref(v_a_263_);
v___x_370_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66));
v___x_371_ = 0;
v___x_372_ = l_Lean_mkCIdentFrom(v_ref_369_, v___x_370_, v___x_371_);
v___x_373_ = l_Lean_TSyntax_getId(v_kind_272_);
lean_inc(v_kind_272_);
v___x_374_ = l_Lake_Name_quoteFrom(v_kind_272_, v___x_373_, v___x_371_);
v___x_375_ = l_Lean_SourceInfo_fromRef(v_ref_369_, v___x_371_);
lean_dec(v_ref_369_);
v___x_376_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_377_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70));
v___x_378_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_366_) == 1)
{
lean_object* v_val_379_; lean_object* v___x_380_; 
v_val_379_ = lean_ctor_get(v___y_366_, 0);
lean_inc(v_val_379_);
lean_dec_ref(v___y_366_);
v___x_380_ = l_Array_mkArray1___redArg(v_val_379_);
v___y_276_ = v___x_375_;
v___y_277_ = v___x_377_;
v___y_278_ = v___x_376_;
v___y_279_ = v___x_374_;
v___y_280_ = v_currMacroScope_368_;
v___y_281_ = v_quotContext_367_;
v___y_282_ = v___x_372_;
v___y_283_ = v___x_378_;
v___y_284_ = v___x_380_;
goto v___jp_275_;
}
else
{
lean_object* v___x_381_; 
lean_dec(v___y_366_);
v___x_381_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_276_ = v___x_375_;
v___y_277_ = v___x_377_;
v___y_278_ = v___x_376_;
v___y_279_ = v___x_374_;
v___y_280_ = v_currMacroScope_368_;
v___y_281_ = v_quotContext_367_;
v___y_282_ = v___x_372_;
v___y_283_ = v___x_378_;
v___y_284_ = v___x_381_;
goto v___jp_275_;
}
}
}
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__5));
v___x_480_ = l_String_toRawSubstring_x27(v___x_479_);
return v___x_480_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__8));
v___x_485_ = l_String_toRawSubstring_x27(v___x_484_);
return v___x_485_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15));
v___x_494_ = l_String_toRawSubstring_x27(v___x_493_);
return v___x_494_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__23));
v___x_505_ = l_String_toRawSubstring_x27(v___x_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0(lean_object* v___x_514_, lean_object* v___x_515_, lean_object* v___x_516_, lean_object* v_fam_517_, lean_object* v___x_518_, lean_object* v___x_519_, lean_object* v___x_520_, uint8_t v___x_521_, lean_object* v___y_522_, lean_object* v_name_523_, lean_object* v_ns_524_, lean_object* v___x_525_, uint8_t v___x_526_, lean_object* v_tk_527_, lean_object* v___y_528_, lean_object* v___x_529_, lean_object* v_____r_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___y_534_; lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v___y_542_; lean_object* v___y_543_; lean_object* v___y_544_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v___y_547_; lean_object* v___y_548_; lean_object* v___y_549_; lean_object* v___y_550_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v_id_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___x_726_; uint8_t v___y_728_; 
v___x_726_ = l_Lean_TSyntax_getId(v_name_523_);
if (lean_obj_tag(v___y_528_) == 0)
{
v___y_728_ = v___x_521_;
goto v___jp_727_;
}
else
{
v___y_728_ = v___x_526_;
goto v___jp_727_;
}
v___jp_533_:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
lean_inc_ref(v___y_547_);
v___x_551_ = l_Array_append___redArg(v___y_547_, v___y_550_);
lean_dec_ref(v___y_550_);
lean_inc(v___y_538_);
lean_inc(v___y_537_);
v___x_552_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_552_, 0, v___y_537_);
lean_ctor_set(v___x_552_, 1, v___y_538_);
lean_ctor_set(v___x_552_, 2, v___x_551_);
v___x_553_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14));
v___x_554_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__0));
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_555_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___x_553_, v___x_554_);
v___x_556_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__1));
lean_inc(v___y_537_);
v___x_557_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_557_, 0, v___y_537_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
v___x_558_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__2));
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_559_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___x_553_, v___x_558_);
v___x_560_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__15));
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_561_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___x_553_, v___x_560_);
lean_inc(v___y_538_);
lean_inc(v___y_537_);
v___x_562_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_562_, 0, v___y_537_);
lean_ctor_set(v___x_562_, 1, v___y_538_);
lean_ctor_set(v___x_562_, 2, v___y_547_);
lean_inc_ref(v___x_562_);
lean_inc(v___y_537_);
v___x_563_ = l_Lean_Syntax_node1(v___y_537_, v___x_561_, v___x_562_);
v___x_564_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__3));
v___x_565_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__4));
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_566_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___x_564_, v___x_565_);
v___x_567_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6);
v___x_568_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__7));
lean_inc(v___y_541_);
lean_inc(v___y_546_);
v___x_569_ = l_Lean_addMacroScope(v___y_546_, v___x_568_, v___y_541_);
v___x_570_ = lean_box(0);
lean_inc(v___y_537_);
v___x_571_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_571_, 0, v___y_537_);
lean_ctor_set(v___x_571_, 1, v___x_567_);
lean_ctor_set(v___x_571_, 2, v___x_569_);
lean_ctor_set(v___x_571_, 3, v___x_570_);
lean_inc_ref(v___x_562_);
lean_inc(v___x_566_);
lean_inc(v___y_537_);
v___x_572_ = l_Lean_Syntax_node2(v___y_537_, v___x_566_, v___x_571_, v___x_562_);
lean_inc(v___x_563_);
lean_inc(v___x_559_);
lean_inc(v___y_537_);
v___x_573_ = l_Lean_Syntax_node2(v___y_537_, v___x_559_, v___x_563_, v___x_572_);
v___x_574_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36));
lean_inc(v___y_537_);
v___x_575_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_575_, 0, v___y_537_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9);
v___x_577_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__10));
lean_inc(v___y_541_);
lean_inc(v___y_546_);
v___x_578_ = l_Lean_addMacroScope(v___y_546_, v___x_577_, v___y_541_);
lean_inc(v___y_537_);
v___x_579_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_579_, 0, v___y_537_);
lean_ctor_set(v___x_579_, 1, v___x_576_);
lean_ctor_set(v___x_579_, 2, v___x_578_);
lean_ctor_set(v___x_579_, 3, v___x_570_);
lean_inc_ref(v___x_562_);
lean_inc(v___y_537_);
v___x_580_ = l_Lean_Syntax_node2(v___y_537_, v___x_566_, v___x_579_, v___x_562_);
lean_inc(v___x_563_);
lean_inc(v___y_537_);
v___x_581_ = l_Lean_Syntax_node2(v___y_537_, v___x_559_, v___x_563_, v___x_580_);
lean_inc(v___y_538_);
lean_inc(v___y_537_);
v___x_582_ = l_Lean_Syntax_node3(v___y_537_, v___y_538_, v___x_573_, v___x_575_, v___x_581_);
v___x_583_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__60));
lean_inc(v___y_537_);
v___x_584_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_584_, 0, v___y_537_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
lean_inc(v___y_537_);
v___x_585_ = l_Lean_Syntax_node3(v___y_537_, v___x_555_, v___x_557_, v___x_582_, v___x_584_);
lean_inc(v___y_538_);
lean_inc(v___y_537_);
v___x_586_ = l_Lean_Syntax_node1(v___y_537_, v___y_538_, v___x_585_);
v___x_587_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10));
lean_inc_ref(v___y_540_);
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_588_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___y_540_, v___x_587_);
lean_inc(v___y_537_);
v___x_589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_589_, 0, v___y_537_);
lean_ctor_set(v___x_589_, 1, v___x_587_);
lean_inc(v___y_537_);
v___x_590_ = l_Lean_Syntax_node1(v___y_537_, v___x_588_, v___x_589_);
lean_inc(v___y_538_);
lean_inc(v___y_537_);
v___x_591_ = l_Lean_Syntax_node1(v___y_537_, v___y_538_, v___x_590_);
lean_inc_ref_n(v___x_562_, 4);
lean_inc(v___x_591_);
lean_inc(v___y_535_);
lean_inc(v___y_537_);
v___x_592_ = l_Lean_Syntax_node7(v___y_537_, v___y_535_, v___x_552_, v___x_586_, v___x_591_, v___x_562_, v___x_562_, v___x_562_, v___x_562_);
v___x_593_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__11));
lean_inc_ref(v___y_540_);
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_594_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___y_540_, v___x_593_);
v___x_595_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__12));
lean_inc(v___y_537_);
v___x_596_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_596_, 0, v___y_537_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__13));
lean_inc_ref(v___y_540_);
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_598_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___y_540_, v___x_597_);
v___x_599_ = lean_mk_empty_array_with_capacity(v___x_514_);
v___x_600_ = lean_box(2);
lean_inc(v___y_538_);
v___x_601_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
lean_ctor_set(v___x_601_, 1, v___y_538_);
lean_ctor_set(v___x_601_, 2, v___x_599_);
v___x_602_ = lean_mk_empty_array_with_capacity(v___x_515_);
v___x_603_ = lean_array_push(v___x_602_, v___y_543_);
v___x_604_ = lean_array_push(v___x_603_, v___x_601_);
v___x_605_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_605_, 0, v___x_600_);
lean_ctor_set(v___x_605_, 1, v___x_598_);
lean_ctor_set(v___x_605_, 2, v___x_604_);
v___x_606_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__14));
lean_inc_ref(v___y_540_);
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_607_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___y_540_, v___x_606_);
lean_inc_ref_n(v___x_562_, 2);
lean_inc(v___y_537_);
v___x_608_ = l_Lean_Syntax_node2(v___y_537_, v___x_607_, v___x_562_, v___x_562_);
v___x_609_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__31));
lean_inc_ref(v___y_540_);
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_610_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___y_540_, v___x_609_);
v___x_611_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2));
lean_inc(v___y_537_);
v___x_612_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_612_, 0, v___y_537_);
lean_ctor_set(v___x_612_, 1, v___x_611_);
v___x_613_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__62));
v___x_614_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__63));
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_615_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___x_613_, v___x_614_);
lean_inc_ref_n(v___x_562_, 2);
lean_inc(v___y_537_);
v___x_616_ = l_Lean_Syntax_node2(v___y_537_, v___x_615_, v___x_562_, v___x_562_);
lean_inc_ref(v___x_562_);
lean_inc(v___x_616_);
lean_inc(v___y_544_);
lean_inc_ref(v___x_612_);
lean_inc(v___x_610_);
lean_inc(v___y_537_);
v___x_617_ = l_Lean_Syntax_node4(v___y_537_, v___x_610_, v___x_612_, v___y_544_, v___x_616_, v___x_562_);
lean_inc_ref(v___x_562_);
lean_inc(v___y_537_);
v___x_618_ = l_Lean_Syntax_node5(v___y_537_, v___x_594_, v___x_596_, v___x_605_, v___x_608_, v___x_617_, v___x_562_);
lean_inc(v___y_545_);
lean_inc(v___y_537_);
v___x_619_ = l_Lean_Syntax_node2(v___y_537_, v___y_545_, v___x_592_, v___x_618_);
v___x_620_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__69));
lean_inc_ref(v___x_516_);
v___x_621_ = l_Lean_Name_mkStr2(v___x_516_, v___x_620_);
v___x_622_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0));
lean_inc(v___y_537_);
v___x_623_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_623_, 0, v___y_537_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
v___x_624_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
lean_inc(v___y_537_);
v___x_625_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_625_, 0, v___y_537_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
lean_inc(v___x_518_);
lean_inc_ref(v___x_612_);
lean_inc(v___y_544_);
lean_inc_ref(v___x_625_);
lean_inc_ref(v___x_562_);
lean_inc(v___y_537_);
v___x_626_ = l_Lean_Syntax_node8(v___y_537_, v___x_621_, v___x_562_, v___x_623_, v___y_534_, v___x_625_, v_fam_517_, v___y_544_, v___x_612_, v___x_518_);
lean_inc_ref_n(v___x_562_, 6);
lean_inc(v___y_537_);
v___x_627_ = l_Lean_Syntax_node7(v___y_537_, v___y_535_, v___x_562_, v___x_562_, v___x_591_, v___x_562_, v___x_562_, v___x_562_, v___x_562_);
v___x_628_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12));
lean_inc_ref(v___y_540_);
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_629_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___y_540_, v___x_628_);
lean_inc(v___y_537_);
v___x_630_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_630_, 0, v___y_537_);
lean_ctor_set(v___x_630_, 1, v___x_628_);
v___x_631_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__17));
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_632_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___y_540_, v___x_631_);
v___x_633_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__19));
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_634_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___x_553_, v___x_633_);
v___x_635_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__21));
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_636_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___x_553_, v___x_635_);
v___x_637_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15));
v___x_638_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16);
v___x_639_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__17));
lean_inc(v___y_541_);
lean_inc(v___y_546_);
v___x_640_ = l_Lean_addMacroScope(v___y_546_, v___x_639_, v___y_541_);
lean_inc_ref(v___x_516_);
v___x_641_ = l_Lean_Name_mkStr2(v___x_516_, v___x_637_);
lean_inc(v___x_641_);
v___x_642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
lean_ctor_set(v___x_642_, 1, v___x_570_);
v___x_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_643_, 0, v___x_641_);
v___x_644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
lean_ctor_set(v___x_644_, 1, v___x_570_);
v___x_645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_642_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
lean_inc(v___y_537_);
v___x_646_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_646_, 0, v___y_537_);
lean_ctor_set(v___x_646_, 1, v___x_638_);
lean_ctor_set(v___x_646_, 2, v___x_640_);
lean_ctor_set(v___x_646_, 3, v___x_645_);
lean_inc_ref(v___x_519_);
v___x_647_ = l_String_toRawSubstring_x27(v___x_519_);
v___x_648_ = l_Lean_Name_mkStr1(v___x_519_);
lean_inc(v___y_541_);
lean_inc(v___y_546_);
v___x_649_ = l_Lean_addMacroScope(v___y_546_, v___x_648_, v___y_541_);
v___x_650_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_520_);
lean_ctor_set(v___x_650_, 1, v___x_570_);
v___x_651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
lean_ctor_set(v___x_651_, 1, v___x_570_);
lean_inc(v___y_537_);
v___x_652_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_652_, 0, v___y_537_);
lean_ctor_set(v___x_652_, 1, v___x_647_);
lean_ctor_set(v___x_652_, 2, v___x_649_);
lean_ctor_set(v___x_652_, 3, v___x_651_);
v___x_653_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__18));
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_654_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___x_553_, v___x_653_);
v___x_655_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__19));
lean_inc_ref(v___y_542_);
lean_inc_ref(v___y_539_);
v___x_656_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___x_553_, v___x_655_);
v___x_657_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20));
lean_inc(v___y_537_);
v___x_658_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_658_, 0, v___y_537_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
v___x_659_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22));
v___x_660_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24);
v___x_661_ = lean_box(0);
v___x_662_ = l_Lean_addMacroScope(v___y_546_, v___x_661_, v___y_541_);
v___x_663_ = l_Lean_Name_mkStr1(v___x_516_);
v___x_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
lean_inc_ref(v___y_539_);
v___x_665_ = l_Lean_Name_mkStr1(v___y_539_);
v___x_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
v___x_667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
lean_ctor_set(v___x_667_, 1, v___x_570_);
v___x_668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_664_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
lean_inc(v___y_537_);
v___x_669_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_669_, 0, v___y_537_);
lean_ctor_set(v___x_669_, 1, v___x_660_);
lean_ctor_set(v___x_669_, 2, v___x_662_);
lean_ctor_set(v___x_669_, 3, v___x_668_);
lean_inc(v___y_537_);
v___x_670_ = l_Lean_Syntax_node1(v___y_537_, v___x_659_, v___x_669_);
lean_inc(v___y_537_);
v___x_671_ = l_Lean_Syntax_node2(v___y_537_, v___x_656_, v___x_658_, v___x_670_);
v___x_672_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__26));
v___x_673_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__27));
lean_inc(v___y_537_);
v___x_674_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_674_, 0, v___y_537_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
lean_inc(v___y_537_);
v___x_675_ = l_Lean_Syntax_node3(v___y_537_, v___x_672_, v___y_536_, v___x_674_, v___y_549_);
v___x_676_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28));
lean_inc(v___y_537_);
v___x_677_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_677_, 0, v___y_537_);
lean_ctor_set(v___x_677_, 1, v___x_676_);
lean_inc_ref(v___x_677_);
lean_inc(v___x_671_);
lean_inc(v___x_654_);
lean_inc(v___y_537_);
v___x_678_ = l_Lean_Syntax_node3(v___y_537_, v___x_654_, v___x_671_, v___x_675_, v___x_677_);
lean_inc(v___x_518_);
lean_inc_ref(v___x_652_);
lean_inc(v___y_538_);
lean_inc(v___y_537_);
v___x_679_ = l_Lean_Syntax_node3(v___y_537_, v___y_538_, v___x_652_, v___x_678_, v___x_518_);
lean_inc_ref(v___x_646_);
lean_inc(v___x_636_);
lean_inc(v___y_537_);
v___x_680_ = l_Lean_Syntax_node2(v___y_537_, v___x_636_, v___x_646_, v___x_679_);
lean_inc(v___y_537_);
v___x_681_ = l_Lean_Syntax_node2(v___y_537_, v___x_634_, v___x_625_, v___x_680_);
lean_inc_ref(v___x_562_);
lean_inc(v___y_537_);
v___x_682_ = l_Lean_Syntax_node2(v___y_537_, v___x_632_, v___x_562_, v___x_681_);
v___x_683_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29));
v___x_684_ = l_Lean_Name_mkStr4(v___y_539_, v___y_542_, v___x_553_, v___x_683_);
lean_inc(v___y_537_);
v___x_685_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_685_, 0, v___y_537_);
lean_ctor_set(v___x_685_, 1, v___x_683_);
lean_inc(v___y_538_);
lean_inc(v___y_537_);
v___x_686_ = l_Lean_Syntax_node3(v___y_537_, v___y_538_, v___x_652_, v___y_544_, v___x_518_);
lean_inc(v___y_537_);
v___x_687_ = l_Lean_Syntax_node2(v___y_537_, v___x_636_, v___x_646_, v___x_686_);
lean_inc(v___y_537_);
v___x_688_ = l_Lean_Syntax_node3(v___y_537_, v___x_654_, v___x_671_, v___x_687_, v___x_677_);
lean_inc(v___y_537_);
v___x_689_ = l_Lean_Syntax_node2(v___y_537_, v___x_684_, v___x_685_, v___x_688_);
lean_inc_ref(v___x_562_);
lean_inc(v___y_537_);
v___x_690_ = l_Lean_Syntax_node4(v___y_537_, v___x_610_, v___x_612_, v___x_689_, v___x_616_, v___x_562_);
lean_inc_ref(v___x_562_);
lean_inc(v___y_537_);
v___x_691_ = l_Lean_Syntax_node6(v___y_537_, v___x_629_, v___x_563_, v___x_630_, v___x_562_, v___x_562_, v___x_682_, v___x_690_);
lean_inc(v___y_537_);
v___x_692_ = l_Lean_Syntax_node2(v___y_537_, v___y_545_, v___x_627_, v___x_691_);
v___x_693_ = l_Lean_Syntax_node3(v___y_537_, v___y_538_, v___x_619_, v___x_626_, v___x_692_);
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
lean_ctor_set(v___x_694_, 1, v___y_548_);
return v___x_694_;
}
v___jp_695_:
{
lean_object* v_quotContext_703_; lean_object* v_currMacroScope_704_; lean_object* v_ref_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v_quotContext_703_ = lean_ctor_get(v___y_701_, 1);
lean_inc(v_quotContext_703_);
v_currMacroScope_704_ = lean_ctor_get(v___y_701_, 2);
lean_inc(v_currMacroScope_704_);
v_ref_705_ = lean_ctor_get(v___y_701_, 5);
lean_inc(v_ref_705_);
lean_dec_ref(v___y_701_);
v___x_706_ = l_Lean_SourceInfo_fromRef(v_ref_705_, v___x_521_);
lean_dec(v_ref_705_);
v___x_707_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_708_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3));
v___x_709_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4));
v___x_710_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5));
v___x_711_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7));
v___x_712_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9));
v___x_713_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_522_) == 1)
{
lean_object* v_val_714_; lean_object* v___x_715_; 
v_val_714_ = lean_ctor_get(v___y_522_, 0);
lean_inc(v_val_714_);
lean_dec_ref(v___y_522_);
v___x_715_ = l_Array_mkArray1___redArg(v_val_714_);
v___y_534_ = v___y_697_;
v___y_535_ = v___x_712_;
v___y_536_ = v___y_699_;
v___y_537_ = v___x_706_;
v___y_538_ = v___x_707_;
v___y_539_ = v___x_708_;
v___y_540_ = v___x_710_;
v___y_541_ = v_currMacroScope_704_;
v___y_542_ = v___x_709_;
v___y_543_ = v_id_700_;
v___y_544_ = v___y_696_;
v___y_545_ = v___x_711_;
v___y_546_ = v_quotContext_703_;
v___y_547_ = v___x_713_;
v___y_548_ = v___y_702_;
v___y_549_ = v___y_698_;
v___y_550_ = v___x_715_;
goto v___jp_533_;
}
else
{
lean_object* v___x_716_; 
lean_dec(v___y_522_);
v___x_716_ = lean_mk_empty_array_with_capacity(v___x_514_);
v___y_534_ = v___y_697_;
v___y_535_ = v___x_712_;
v___y_536_ = v___y_699_;
v___y_537_ = v___x_706_;
v___y_538_ = v___x_707_;
v___y_539_ = v___x_708_;
v___y_540_ = v___x_710_;
v___y_541_ = v_currMacroScope_704_;
v___y_542_ = v___x_709_;
v___y_543_ = v_id_700_;
v___y_544_ = v___y_696_;
v___y_545_ = v___x_711_;
v___y_546_ = v_quotContext_703_;
v___y_547_ = v___x_713_;
v___y_548_ = v___y_702_;
v___y_549_ = v___y_698_;
v___y_550_ = v___x_716_;
goto v___jp_533_;
}
}
v___jp_717_:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__30));
lean_inc_ref(v___y_531_);
v___x_723_ = l_Lean_Macro_throwErrorAt___redArg(v_name_523_, v___x_722_, v___y_531_, v___y_532_);
lean_dec(v_name_523_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v_a_725_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
v_a_725_ = lean_ctor_get(v___x_723_, 1);
lean_inc(v_a_725_);
lean_dec_ref(v___x_723_);
v___y_696_ = v___y_718_;
v___y_697_ = v___y_719_;
v___y_698_ = v___y_720_;
v___y_699_ = v___y_721_;
v_id_700_ = v_a_724_;
v___y_701_ = v___y_531_;
v___y_702_ = v_a_725_;
goto v___jp_695_;
}
else
{
lean_dec(v___y_721_);
lean_dec(v___y_720_);
lean_dec(v___y_719_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_531_);
lean_dec(v___y_522_);
lean_dec(v___x_520_);
lean_dec_ref(v___x_519_);
lean_dec(v___x_518_);
lean_dec(v_fam_517_);
lean_dec_ref(v___x_516_);
return v___x_723_;
}
}
v___jp_727_:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
lean_inc(v___x_726_);
lean_inc(v_name_523_);
v___x_729_ = l_Lake_Name_quoteFrom(v_name_523_, v___x_726_, v___y_728_);
lean_inc(v___x_525_);
v___x_730_ = l_Lake_Name_quoteFrom(v_ns_524_, v___x_525_, v___x_526_);
lean_inc(v___x_726_);
v___x_731_ = l_Lean_Name_append(v___x_525_, v___x_726_);
lean_inc(v___x_731_);
v___x_732_ = l_Lean_mkIdentFrom(v_tk_527_, v___x_731_, v___x_526_);
v___x_733_ = l_Lake_Name_quoteFrom(v_tk_527_, v___x_731_, v___x_521_);
if (lean_obj_tag(v___y_528_) == 1)
{
lean_object* v_val_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
lean_dec(v___x_726_);
lean_dec(v_name_523_);
v_val_734_ = lean_ctor_get(v___y_528_, 0);
v___x_735_ = l_Lean_Syntax_getArg(v_val_734_, v___x_514_);
v___x_736_ = l_Lean_Syntax_getId(v___x_735_);
v___x_737_ = l_Lean_Name_append(v___x_529_, v___x_736_);
v___x_738_ = l_Lean_mkIdentFrom(v___x_735_, v___x_737_, v___x_526_);
lean_dec(v___x_735_);
v___y_696_ = v___x_733_;
v___y_697_ = v___x_732_;
v___y_698_ = v___x_729_;
v___y_699_ = v___x_730_;
v_id_700_ = v___x_738_;
v___y_701_ = v___y_531_;
v___y_702_ = v___y_532_;
goto v___jp_695_;
}
else
{
if (lean_obj_tag(v___x_726_) == 1)
{
lean_object* v_pre_739_; 
v_pre_739_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_pre_739_);
if (lean_obj_tag(v_pre_739_) == 0)
{
lean_object* v_str_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v_str_740_ = lean_ctor_get(v___x_726_, 1);
lean_inc_ref(v_str_740_);
lean_dec_ref(v___x_726_);
v___x_741_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__31));
v___x_742_ = lean_string_append(v_str_740_, v___x_741_);
v___x_743_ = l_Lean_Name_str___override(v___x_529_, v___x_742_);
v___x_744_ = l_Lean_mkIdentFrom(v_name_523_, v___x_743_, v___x_526_);
lean_dec(v_name_523_);
v___y_696_ = v___x_733_;
v___y_697_ = v___x_732_;
v___y_698_ = v___x_729_;
v___y_699_ = v___x_730_;
v_id_700_ = v___x_744_;
v___y_701_ = v___y_531_;
v___y_702_ = v___y_532_;
goto v___jp_695_;
}
else
{
lean_dec_ref(v___x_726_);
lean_dec(v_pre_739_);
lean_dec(v___x_529_);
v___y_718_ = v___x_733_;
v___y_719_ = v___x_732_;
v___y_720_ = v___x_729_;
v___y_721_ = v___x_730_;
goto v___jp_717_;
}
}
else
{
lean_dec(v___x_726_);
lean_dec(v___x_529_);
v___y_718_ = v___x_733_;
v___y_719_ = v___x_732_;
v___y_720_ = v___x_729_;
v___y_721_ = v___x_730_;
goto v___jp_717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___boxed(lean_object** _args){
lean_object* v___x_745_ = _args[0];
lean_object* v___x_746_ = _args[1];
lean_object* v___x_747_ = _args[2];
lean_object* v_fam_748_ = _args[3];
lean_object* v___x_749_ = _args[4];
lean_object* v___x_750_ = _args[5];
lean_object* v___x_751_ = _args[6];
lean_object* v___x_752_ = _args[7];
lean_object* v___y_753_ = _args[8];
lean_object* v_name_754_ = _args[9];
lean_object* v_ns_755_ = _args[10];
lean_object* v___x_756_ = _args[11];
lean_object* v___x_757_ = _args[12];
lean_object* v_tk_758_ = _args[13];
lean_object* v___y_759_ = _args[14];
lean_object* v___x_760_ = _args[15];
lean_object* v_____r_761_ = _args[16];
lean_object* v___y_762_ = _args[17];
lean_object* v___y_763_ = _args[18];
_start:
{
uint8_t v___x_12982__boxed_764_; uint8_t v___x_12985__boxed_765_; lean_object* v_res_766_; 
v___x_12982__boxed_764_ = lean_unbox(v___x_752_);
v___x_12985__boxed_765_ = lean_unbox(v___x_757_);
v_res_766_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0(v___x_745_, v___x_746_, v___x_747_, v_fam_748_, v___x_749_, v___x_750_, v___x_751_, v___x_12982__boxed_764_, v___y_753_, v_name_754_, v_ns_755_, v___x_756_, v___x_12985__boxed_765_, v_tk_758_, v___y_759_, v___x_760_, v_____r_761_, v___y_762_, v___y_763_);
lean_dec(v___y_759_);
lean_dec(v___x_746_);
lean_dec(v___x_745_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1(lean_object* v_x_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
lean_object* v___y_778_; lean_object* v___x_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v___x_797_ = ((lean_object*)(l_Lake_dataTypeDecl___closed__0));
v___x_798_ = ((lean_object*)(l_Lake_builtinFacetCommand___closed__1));
lean_inc(v_x_774_);
v___x_799_ = l_Lean_Syntax_isOfKind(v_x_774_, v___x_798_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; lean_object* v___x_801_; 
lean_dec_ref(v_a_775_);
lean_dec(v_x_774_);
v___x_800_ = lean_box(1);
v___x_801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
lean_ctor_set(v___x_801_, 1, v_a_776_);
return v___x_801_;
}
else
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v_tk_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v_name_809_; lean_object* v___x_810_; lean_object* v_ns_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_879_; lean_object* v___x_890_; 
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = l_Lean_Syntax_getArg(v_x_774_, v___x_802_);
v___x_804_ = lean_unsigned_to_nat(1u);
v_tk_805_ = l_Lean_Syntax_getArg(v_x_774_, v___x_804_);
v___x_806_ = lean_unsigned_to_nat(2u);
v___x_807_ = l_Lean_Syntax_getArg(v_x_774_, v___x_806_);
v___x_808_ = lean_unsigned_to_nat(3u);
v_name_809_ = l_Lean_Syntax_getArg(v_x_774_, v___x_808_);
v___x_810_ = lean_unsigned_to_nat(5u);
v_ns_811_ = l_Lean_Syntax_getArg(v_x_774_, v___x_810_);
v___x_812_ = lean_unsigned_to_nat(7u);
v___x_813_ = l_Lean_Syntax_getArg(v_x_774_, v___x_812_);
lean_dec(v_x_774_);
v___x_890_ = l_Lean_Syntax_getOptional_x3f(v___x_807_);
lean_dec(v___x_807_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v___x_891_; 
v___x_891_ = lean_box(0);
v___y_879_ = v___x_891_;
goto v___jp_878_;
}
else
{
lean_object* v_val_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
v_val_892_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_890_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_val_892_);
lean_dec(v___x_890_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_val_892_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
v___y_879_ = v___x_897_;
goto v___jp_878_;
}
}
}
v___jp_814_:
{
lean_object* v_methods_817_; lean_object* v_quotContext_818_; lean_object* v_currMacroScope_819_; lean_object* v_currRecDepth_820_; lean_object* v_maxRecDepth_821_; lean_object* v_ref_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_877_; 
v_methods_817_ = lean_ctor_get(v_a_775_, 0);
v_quotContext_818_ = lean_ctor_get(v_a_775_, 1);
v_currMacroScope_819_ = lean_ctor_get(v_a_775_, 2);
v_currRecDepth_820_ = lean_ctor_get(v_a_775_, 3);
v_maxRecDepth_821_ = lean_ctor_get(v_a_775_, 4);
v_ref_822_ = lean_ctor_get(v_a_775_, 5);
v_isSharedCheck_877_ = !lean_is_exclusive(v_a_775_);
if (v_isSharedCheck_877_ == 0)
{
v___x_824_ = v_a_775_;
v_isShared_825_ = v_isSharedCheck_877_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_ref_822_);
lean_inc(v_maxRecDepth_821_);
lean_inc(v_currRecDepth_820_);
lean_inc(v_currMacroScope_819_);
lean_inc(v_quotContext_818_);
lean_inc(v_methods_817_);
lean_dec(v_a_775_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_877_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_826_; lean_object* v_ref_827_; lean_object* v___x_829_; 
v___x_826_ = l_Lean_TSyntax_getId(v_ns_811_);
v_ref_827_ = l_Lean_replaceRef(v_tk_805_, v_ref_822_);
lean_dec(v_ref_822_);
if (v_isShared_825_ == 0)
{
lean_ctor_set(v___x_824_, 5, v_ref_827_);
v___x_829_ = v___x_824_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_methods_817_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v_quotContext_818_);
lean_ctor_set(v_reuseFailAlloc_876_, 2, v_currMacroScope_819_);
lean_ctor_set(v_reuseFailAlloc_876_, 3, v_currRecDepth_820_);
lean_ctor_set(v_reuseFailAlloc_876_, 4, v_maxRecDepth_821_);
lean_ctor_set(v_reuseFailAlloc_876_, 5, v_ref_827_);
v___x_829_ = v_reuseFailAlloc_876_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_object* v___x_830_; 
lean_inc_ref(v___x_829_);
lean_inc(v___x_826_);
v___x_830_ = l_Lean_Macro_resolveNamespace(v___x_826_, v___x_829_, v_a_776_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v_a_831_; 
v_a_831_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_a_831_);
if (lean_obj_tag(v_a_831_) == 1)
{
lean_object* v_a_832_; lean_object* v_head_833_; lean_object* v___x_834_; lean_object* v___x_835_; uint8_t v___x_836_; lean_object* v_fam_837_; lean_object* v___x_838_; uint8_t v___x_839_; 
v_a_832_ = lean_ctor_get(v___x_830_, 1);
lean_inc(v_a_832_);
lean_dec_ref(v___x_830_);
v_head_833_ = lean_ctor_get(v_a_831_, 0);
lean_inc(v_head_833_);
lean_dec_ref(v_a_831_);
v___x_834_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0));
v___x_835_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1));
v___x_836_ = 0;
v_fam_837_ = l_Lean_mkCIdentFrom(v_tk_805_, v___x_835_, v___x_836_);
v___x_838_ = l___private_Lake_Config_Kinds_0__Lake_facetKindForNamespace(v_head_833_);
lean_dec(v_head_833_);
v___x_839_ = l_Lean_Name_isAnonymous(v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lean_box(0);
v___x_841_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0(v___x_802_, v___x_806_, v___x_797_, v_fam_837_, v___x_813_, v___x_834_, v___x_835_, v___x_836_, v___y_816_, v_name_809_, v_ns_811_, v___x_838_, v___x_799_, v_tk_805_, v___y_815_, v___x_826_, v___x_840_, v___x_829_, v_a_832_);
lean_dec(v___y_815_);
v___y_778_ = v___x_841_;
goto v___jp_777_;
}
else
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_842_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__2));
lean_inc(v___x_826_);
v___x_843_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_826_, v___x_839_);
v___x_844_ = lean_string_append(v___x_842_, v___x_843_);
lean_dec_ref(v___x_843_);
v___x_845_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__3));
v___x_846_ = lean_string_append(v___x_844_, v___x_845_);
lean_inc_ref(v___x_829_);
v___x_847_ = l_Lean_Macro_throwErrorAt___redArg(v_ns_811_, v___x_846_, v___x_829_, v_a_832_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v_a_849_; lean_object* v___x_850_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_848_);
v_a_849_ = lean_ctor_get(v___x_847_, 1);
lean_inc(v_a_849_);
lean_dec_ref(v___x_847_);
v___x_850_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0(v___x_802_, v___x_806_, v___x_797_, v_fam_837_, v___x_813_, v___x_834_, v___x_835_, v___x_836_, v___y_816_, v_name_809_, v_ns_811_, v___x_838_, v___x_799_, v_tk_805_, v___y_815_, v___x_826_, v_a_848_, v___x_829_, v_a_849_);
lean_dec(v___y_815_);
v___y_778_ = v___x_850_;
goto v___jp_777_;
}
else
{
lean_object* v_a_851_; lean_object* v_a_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_859_; 
lean_dec(v___x_838_);
lean_dec(v_fam_837_);
lean_dec_ref(v___x_829_);
lean_dec(v___x_826_);
lean_dec(v___y_816_);
lean_dec(v___y_815_);
lean_dec(v___x_813_);
lean_dec(v_ns_811_);
lean_dec(v_name_809_);
lean_dec(v_tk_805_);
v_a_851_ = lean_ctor_get(v___x_847_, 0);
v_a_852_ = lean_ctor_get(v___x_847_, 1);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_859_ == 0)
{
v___x_854_ = v___x_847_;
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_a_852_);
lean_inc(v_a_851_);
lean_dec(v___x_847_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_857_; 
if (v_isShared_855_ == 0)
{
v___x_857_ = v___x_854_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_a_851_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v_a_852_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
}
else
{
lean_object* v_a_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
lean_dec(v_a_831_);
lean_dec(v___y_816_);
lean_dec(v___y_815_);
lean_dec(v___x_813_);
lean_dec(v_name_809_);
lean_dec(v_tk_805_);
v_a_860_ = lean_ctor_get(v___x_830_, 1);
lean_inc(v_a_860_);
lean_dec_ref(v___x_830_);
v___x_861_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__4));
v___x_862_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_826_, v___x_799_);
v___x_863_ = lean_string_append(v___x_861_, v___x_862_);
lean_dec_ref(v___x_862_);
v___x_864_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__3));
v___x_865_ = lean_string_append(v___x_863_, v___x_864_);
v___x_866_ = l_Lean_Macro_throwErrorAt___redArg(v_ns_811_, v___x_865_, v___x_829_, v_a_860_);
lean_dec(v_ns_811_);
v___y_778_ = v___x_866_;
goto v___jp_777_;
}
}
else
{
lean_object* v_a_867_; lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
lean_dec_ref(v___x_829_);
lean_dec(v___x_826_);
lean_dec(v___y_816_);
lean_dec(v___y_815_);
lean_dec(v___x_813_);
lean_dec(v_ns_811_);
lean_dec(v_name_809_);
lean_dec(v_tk_805_);
v_a_867_ = lean_ctor_get(v___x_830_, 0);
v_a_868_ = lean_ctor_get(v___x_830_, 1);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v___x_830_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_inc(v_a_867_);
lean_dec(v___x_830_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_a_867_);
lean_ctor_set(v_reuseFailAlloc_874_, 1, v_a_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
}
}
}
v___jp_878_:
{
lean_object* v___x_880_; 
v___x_880_ = l_Lean_Syntax_getOptional_x3f(v___x_803_);
lean_dec(v___x_803_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v___x_881_; 
v___x_881_ = lean_box(0);
v___y_815_ = v___y_879_;
v___y_816_ = v___x_881_;
goto v___jp_814_;
}
else
{
lean_object* v_val_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
v_val_882_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_880_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_val_882_);
lean_dec(v___x_880_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_val_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
v___y_815_ = v___y_879_;
v___y_816_ = v___x_887_;
goto v___jp_814_;
}
}
}
}
}
v___jp_777_:
{
if (lean_obj_tag(v___y_778_) == 0)
{
lean_object* v_a_779_; lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
v_a_779_ = lean_ctor_get(v___y_778_, 0);
v_a_780_ = lean_ctor_get(v___y_778_, 1);
v_isSharedCheck_787_ = !lean_is_exclusive(v___y_778_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___y_778_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_inc(v_a_779_);
lean_dec(v___y_778_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_779_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
else
{
lean_object* v_a_788_; lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
v_a_788_ = lean_ctor_get(v___y_778_, 0);
v_a_789_ = lean_ctor_get(v___y_778_, 1);
v_isSharedCheck_796_ = !lean_is_exclusive(v___y_778_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___y_778_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_inc(v_a_788_);
lean_dec(v___y_778_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_788_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1(lean_object* v_x_975_, lean_object* v_a_976_, lean_object* v_a_977_){
_start:
{
lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_978_ = ((lean_object*)(l_Lake_facetDataDecl___closed__1));
lean_inc(v_x_975_);
v___x_979_ = l_Lean_Syntax_isOfKind(v_x_975_, v___x_978_);
if (v___x_979_ == 0)
{
lean_object* v___x_980_; lean_object* v___x_981_; 
lean_dec_ref(v_a_976_);
lean_dec(v_x_975_);
v___x_980_ = lean_box(1);
v___x_981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
lean_ctor_set(v___x_981_, 1, v_a_977_);
return v___x_981_;
}
else
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v_tk_985_; lean_object* v___x_986_; lean_object* v_kind_987_; lean_object* v___x_988_; lean_object* v_name_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___y_993_; lean_object* v___y_994_; lean_object* v___y_995_; lean_object* v___y_996_; lean_object* v___y_997_; lean_object* v___y_998_; lean_object* v___y_999_; lean_object* v___y_1000_; lean_object* v___y_1001_; lean_object* v___y_1002_; lean_object* v___y_1003_; lean_object* v___y_1004_; lean_object* v___y_1005_; lean_object* v___y_1006_; lean_object* v___y_1084_; lean_object* v___x_1107_; 
v___x_982_ = lean_unsigned_to_nat(0u);
v___x_983_ = l_Lean_Syntax_getArg(v_x_975_, v___x_982_);
v___x_984_ = lean_unsigned_to_nat(1u);
v_tk_985_ = l_Lean_Syntax_getArg(v_x_975_, v___x_984_);
v___x_986_ = lean_unsigned_to_nat(2u);
v_kind_987_ = l_Lean_Syntax_getArg(v_x_975_, v___x_986_);
v___x_988_ = lean_unsigned_to_nat(3u);
v_name_989_ = l_Lean_Syntax_getArg(v_x_975_, v___x_988_);
v___x_990_ = lean_unsigned_to_nat(5u);
v___x_991_ = l_Lean_Syntax_getArg(v_x_975_, v___x_990_);
lean_dec(v_x_975_);
v___x_1107_ = l_Lean_Syntax_getOptional_x3f(v___x_983_);
lean_dec(v___x_983_);
if (lean_obj_tag(v___x_1107_) == 0)
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_box(0);
v___y_1084_ = v___x_1108_;
goto v___jp_1083_;
}
else
{
lean_object* v_val_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1116_; 
v_val_1109_ = lean_ctor_get(v___x_1107_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1111_ = v___x_1107_;
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_val_1109_);
lean_dec(v___x_1107_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
if (v_isShared_1112_ == 0)
{
v___x_1114_ = v___x_1111_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_val_1109_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
v___y_1084_ = v___x_1114_;
goto v___jp_1083_;
}
}
}
v___jp_992_:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
lean_inc_ref(v___y_994_);
v___x_1007_ = l_Array_append___redArg(v___y_994_, v___y_1006_);
lean_dec_ref(v___y_1006_);
lean_inc(v___y_997_);
lean_inc(v___y_1000_);
v___x_1008_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1008_, 0, v___y_1000_);
lean_ctor_set(v___x_1008_, 1, v___y_997_);
lean_ctor_set(v___x_1008_, 2, v___x_1007_);
v___x_1009_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0));
lean_inc(v___y_1000_);
v___x_1010_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___y_1000_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
lean_inc(v___y_1000_);
v___x_1012_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___y_1000_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
v___x_1013_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2));
lean_inc(v___y_1000_);
v___x_1014_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___y_1000_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
lean_inc(v___x_991_);
lean_inc_ref(v___x_1014_);
lean_inc(v___y_1004_);
lean_inc_ref(v___x_1012_);
lean_inc(v___y_1000_);
v___x_1015_ = l_Lean_Syntax_node8(v___y_1000_, v___y_1001_, v___x_1008_, v___x_1010_, v___y_998_, v___x_1012_, v___y_993_, v___y_1004_, v___x_1014_, v___x_991_);
v___x_1016_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7));
v___x_1017_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9));
lean_inc(v___y_997_);
lean_inc(v___y_1000_);
v___x_1018_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1018_, 0, v___y_1000_);
lean_ctor_set(v___x_1018_, 1, v___y_997_);
lean_ctor_set(v___x_1018_, 2, v___y_994_);
v___x_1019_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10));
v___x_1020_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11));
lean_inc(v___y_1000_);
v___x_1021_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___y_1000_);
lean_ctor_set(v___x_1021_, 1, v___x_1019_);
lean_inc(v___y_1000_);
v___x_1022_ = l_Lean_Syntax_node1(v___y_1000_, v___x_1020_, v___x_1021_);
lean_inc(v___y_997_);
lean_inc(v___y_1000_);
v___x_1023_ = l_Lean_Syntax_node1(v___y_1000_, v___y_997_, v___x_1022_);
lean_inc_ref_n(v___x_1018_, 6);
lean_inc(v___y_1000_);
v___x_1024_ = l_Lean_Syntax_node7(v___y_1000_, v___x_1017_, v___x_1018_, v___x_1018_, v___x_1023_, v___x_1018_, v___x_1018_, v___x_1018_, v___x_1018_);
v___x_1025_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12));
v___x_1026_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13));
v___x_1027_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16));
lean_inc_ref(v___x_1018_);
lean_inc(v___y_1000_);
v___x_1028_ = l_Lean_Syntax_node1(v___y_1000_, v___x_1027_, v___x_1018_);
lean_inc(v___y_1000_);
v___x_1029_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___y_1000_);
lean_ctor_set(v___x_1029_, 1, v___x_1025_);
v___x_1030_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18));
v___x_1031_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20));
v___x_1032_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22));
v___x_1033_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16);
v___x_1034_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__17));
lean_inc(v___y_1005_);
lean_inc(v___y_999_);
v___x_1035_ = l_Lean_addMacroScope(v___y_999_, v___x_1034_, v___y_1005_);
v___x_1036_ = lean_box(0);
v___x_1037_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__4));
lean_inc(v___y_1000_);
v___x_1038_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1038_, 0, v___y_1000_);
lean_ctor_set(v___x_1038_, 1, v___x_1033_);
lean_ctor_set(v___x_1038_, 2, v___x_1035_);
lean_ctor_set(v___x_1038_, 3, v___x_1037_);
lean_inc_ref(v___y_1002_);
v___x_1039_ = l_String_toRawSubstring_x27(v___y_1002_);
v___x_1040_ = l_Lean_Name_mkStr1(v___y_1002_);
lean_inc(v___y_1005_);
lean_inc(v___y_999_);
v___x_1041_ = l_Lean_addMacroScope(v___y_999_, v___x_1040_, v___y_1005_);
v___x_1042_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___y_995_);
lean_ctor_set(v___x_1042_, 1, v___x_1036_);
v___x_1043_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
lean_ctor_set(v___x_1043_, 1, v___x_1036_);
lean_inc(v___y_1000_);
v___x_1044_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1044_, 0, v___y_1000_);
lean_ctor_set(v___x_1044_, 1, v___x_1039_);
lean_ctor_set(v___x_1044_, 2, v___x_1041_);
lean_ctor_set(v___x_1044_, 3, v___x_1043_);
v___x_1045_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5));
v___x_1046_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6));
v___x_1047_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20));
lean_inc(v___y_1000_);
v___x_1048_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___y_1000_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22));
v___x_1050_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24);
v___x_1051_ = lean_box(0);
v___x_1052_ = l_Lean_addMacroScope(v___y_999_, v___x_1051_, v___y_1005_);
v___x_1053_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__12));
lean_inc(v___y_1000_);
v___x_1054_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1054_, 0, v___y_1000_);
lean_ctor_set(v___x_1054_, 1, v___x_1050_);
lean_ctor_set(v___x_1054_, 2, v___x_1052_);
lean_ctor_set(v___x_1054_, 3, v___x_1053_);
lean_inc(v___y_1000_);
v___x_1055_ = l_Lean_Syntax_node1(v___y_1000_, v___x_1049_, v___x_1054_);
lean_inc(v___y_1000_);
v___x_1056_ = l_Lean_Syntax_node2(v___y_1000_, v___x_1046_, v___x_1048_, v___x_1055_);
v___x_1057_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__26));
v___x_1058_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__27));
lean_inc(v___y_1000_);
v___x_1059_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___y_1000_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
lean_inc(v___y_1000_);
v___x_1060_ = l_Lean_Syntax_node3(v___y_1000_, v___x_1057_, v___y_1003_, v___x_1059_, v___y_996_);
v___x_1061_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28));
lean_inc(v___y_1000_);
v___x_1062_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___y_1000_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
lean_inc_ref(v___x_1062_);
lean_inc(v___x_1056_);
lean_inc(v___y_1000_);
v___x_1063_ = l_Lean_Syntax_node3(v___y_1000_, v___x_1045_, v___x_1056_, v___x_1060_, v___x_1062_);
lean_inc(v___x_991_);
lean_inc_ref(v___x_1044_);
lean_inc(v___y_997_);
lean_inc(v___y_1000_);
v___x_1064_ = l_Lean_Syntax_node3(v___y_1000_, v___y_997_, v___x_1044_, v___x_1063_, v___x_991_);
lean_inc_ref(v___x_1038_);
lean_inc(v___y_1000_);
v___x_1065_ = l_Lean_Syntax_node2(v___y_1000_, v___x_1032_, v___x_1038_, v___x_1064_);
lean_inc(v___y_1000_);
v___x_1066_ = l_Lean_Syntax_node2(v___y_1000_, v___x_1031_, v___x_1012_, v___x_1065_);
lean_inc_ref(v___x_1018_);
lean_inc(v___y_1000_);
v___x_1067_ = l_Lean_Syntax_node2(v___y_1000_, v___x_1030_, v___x_1018_, v___x_1066_);
v___x_1068_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32));
v___x_1069_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29));
v___x_1070_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13));
lean_inc(v___y_1000_);
v___x_1071_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___y_1000_);
lean_ctor_set(v___x_1071_, 1, v___x_1069_);
lean_inc(v___y_997_);
lean_inc(v___y_1000_);
v___x_1072_ = l_Lean_Syntax_node3(v___y_1000_, v___y_997_, v___x_1044_, v___y_1004_, v___x_991_);
lean_inc(v___y_1000_);
v___x_1073_ = l_Lean_Syntax_node2(v___y_1000_, v___x_1032_, v___x_1038_, v___x_1072_);
lean_inc(v___y_1000_);
v___x_1074_ = l_Lean_Syntax_node3(v___y_1000_, v___x_1045_, v___x_1056_, v___x_1073_, v___x_1062_);
lean_inc(v___y_1000_);
v___x_1075_ = l_Lean_Syntax_node2(v___y_1000_, v___x_1070_, v___x_1071_, v___x_1074_);
v___x_1076_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64));
lean_inc_ref_n(v___x_1018_, 2);
lean_inc(v___y_1000_);
v___x_1077_ = l_Lean_Syntax_node2(v___y_1000_, v___x_1076_, v___x_1018_, v___x_1018_);
lean_inc_ref(v___x_1018_);
lean_inc(v___y_1000_);
v___x_1078_ = l_Lean_Syntax_node4(v___y_1000_, v___x_1068_, v___x_1014_, v___x_1075_, v___x_1077_, v___x_1018_);
lean_inc_ref(v___x_1018_);
lean_inc(v___y_1000_);
v___x_1079_ = l_Lean_Syntax_node6(v___y_1000_, v___x_1026_, v___x_1028_, v___x_1029_, v___x_1018_, v___x_1018_, v___x_1067_, v___x_1078_);
lean_inc(v___y_1000_);
v___x_1080_ = l_Lean_Syntax_node2(v___y_1000_, v___x_1016_, v___x_1024_, v___x_1079_);
v___x_1081_ = l_Lean_Syntax_node2(v___y_1000_, v___y_997_, v___x_1015_, v___x_1080_);
v___x_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1081_);
lean_ctor_set(v___x_1082_, 1, v_a_977_);
return v___x_1082_;
}
v___jp_1083_:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; lean_object* v_fam_1088_; lean_object* v___x_1089_; lean_object* v_kindLit_1090_; lean_object* v___x_1091_; lean_object* v_nameLit_1092_; lean_object* v_quotContext_1093_; lean_object* v_currMacroScope_1094_; lean_object* v_ref_1095_; lean_object* v_facet_1096_; lean_object* v_facetLit_1097_; lean_object* v_id_1098_; lean_object* v_ref_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1085_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0));
v___x_1086_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1));
v___x_1087_ = 0;
v_fam_1088_ = l_Lean_mkCIdentFrom(v_tk_985_, v___x_1086_, v___x_1087_);
v___x_1089_ = l_Lean_TSyntax_getId(v_kind_987_);
lean_inc(v___x_1089_);
v_kindLit_1090_ = l_Lake_Name_quoteFrom(v_kind_987_, v___x_1089_, v___x_1087_);
v___x_1091_ = l_Lean_TSyntax_getId(v_name_989_);
lean_inc(v___x_1091_);
v_nameLit_1092_ = l_Lake_Name_quoteFrom(v_name_989_, v___x_1091_, v___x_1087_);
v_quotContext_1093_ = lean_ctor_get(v_a_976_, 1);
lean_inc(v_quotContext_1093_);
v_currMacroScope_1094_ = lean_ctor_get(v_a_976_, 2);
lean_inc(v_currMacroScope_1094_);
v_ref_1095_ = lean_ctor_get(v_a_976_, 5);
lean_inc(v_ref_1095_);
lean_dec_ref(v_a_976_);
v_facet_1096_ = l_Lean_Name_append(v___x_1089_, v___x_1091_);
lean_inc(v_facet_1096_);
lean_inc(v_tk_985_);
v_facetLit_1097_ = l_Lake_Name_quoteFrom(v_tk_985_, v_facet_1096_, v___x_1087_);
v_id_1098_ = l_Lean_mkIdentFrom(v_tk_985_, v_facet_1096_, v___x_979_);
v_ref_1099_ = l_Lean_replaceRef(v_tk_985_, v_ref_1095_);
lean_dec(v_ref_1095_);
lean_dec(v_tk_985_);
v___x_1100_ = l_Lean_SourceInfo_fromRef(v_ref_1099_, v___x_1087_);
lean_dec(v_ref_1099_);
v___x_1101_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_1102_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70));
v___x_1103_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_1084_) == 1)
{
lean_object* v_val_1104_; lean_object* v___x_1105_; 
v_val_1104_ = lean_ctor_get(v___y_1084_, 0);
lean_inc(v_val_1104_);
lean_dec_ref(v___y_1084_);
v___x_1105_ = l_Array_mkArray1___redArg(v_val_1104_);
v___y_993_ = v_fam_1088_;
v___y_994_ = v___x_1103_;
v___y_995_ = v___x_1086_;
v___y_996_ = v_nameLit_1092_;
v___y_997_ = v___x_1101_;
v___y_998_ = v_id_1098_;
v___y_999_ = v_quotContext_1093_;
v___y_1000_ = v___x_1100_;
v___y_1001_ = v___x_1102_;
v___y_1002_ = v___x_1085_;
v___y_1003_ = v_kindLit_1090_;
v___y_1004_ = v_facetLit_1097_;
v___y_1005_ = v_currMacroScope_1094_;
v___y_1006_ = v___x_1105_;
goto v___jp_992_;
}
else
{
lean_object* v___x_1106_; 
lean_dec(v___y_1084_);
v___x_1106_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_993_ = v_fam_1088_;
v___y_994_ = v___x_1103_;
v___y_995_ = v___x_1086_;
v___y_996_ = v_nameLit_1092_;
v___y_997_ = v___x_1101_;
v___y_998_ = v_id_1098_;
v___y_999_ = v_quotContext_1093_;
v___y_1000_ = v___x_1100_;
v___y_1001_ = v___x_1102_;
v___y_1002_ = v___x_1085_;
v___y_1003_ = v_kindLit_1090_;
v___y_1004_ = v_facetLit_1097_;
v___y_1005_ = v_currMacroScope_1094_;
v___y_1006_ = v___x_1106_;
goto v___jp_992_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1(lean_object* v_x_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_){
_start:
{
lean_object* v___x_1149_; uint8_t v___x_1150_; 
v___x_1149_ = ((lean_object*)(l_Lake_packageDataDecl___closed__1));
lean_inc(v_x_1146_);
v___x_1150_ = l_Lean_Syntax_isOfKind(v_x_1146_, v___x_1149_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1152_; 
lean_dec(v_x_1146_);
v___x_1151_ = lean_box(1);
v___x_1152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1151_);
lean_ctor_set(v___x_1152_, 1, v_a_1148_);
return v___x_1152_;
}
else
{
lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v_tk_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___y_1162_; lean_object* v___y_1163_; uint8_t v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1180_; lean_object* v___x_1190_; 
v___x_1153_ = lean_unsigned_to_nat(0u);
v___x_1154_ = l_Lean_Syntax_getArg(v_x_1146_, v___x_1153_);
v___x_1155_ = lean_unsigned_to_nat(1u);
v_tk_1156_ = l_Lean_Syntax_getArg(v_x_1146_, v___x_1155_);
v___x_1157_ = lean_unsigned_to_nat(2u);
v___x_1158_ = l_Lean_Syntax_getArg(v_x_1146_, v___x_1157_);
v___x_1159_ = lean_unsigned_to_nat(4u);
v___x_1160_ = l_Lean_Syntax_getArg(v_x_1146_, v___x_1159_);
lean_dec(v_x_1146_);
v___x_1190_ = l_Lean_Syntax_getOptional_x3f(v___x_1154_);
lean_dec(v___x_1154_);
if (lean_obj_tag(v___x_1190_) == 0)
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_box(0);
v___y_1180_ = v___x_1191_;
goto v___jp_1179_;
}
else
{
lean_object* v_val_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
v_val_1192_ = lean_ctor_get(v___x_1190_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1190_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_val_1192_);
lean_dec(v___x_1190_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_val_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
v___y_1180_ = v___x_1197_;
goto v___jp_1179_;
}
}
}
v___jp_1161_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1168_ = l_Array_append___redArg(v___y_1163_, v___y_1167_);
lean_dec_ref(v___y_1167_);
lean_inc(v___y_1166_);
v___x_1169_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1169_, 0, v___y_1166_);
lean_ctor_set(v___x_1169_, 1, v___y_1165_);
lean_ctor_set(v___x_1169_, 2, v___x_1168_);
v___x_1170_ = l_Lean_SourceInfo_fromRef(v_tk_1156_, v___x_1150_);
v___x_1171_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0));
v___x_1172_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1170_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = l_Lake_Package_keyword;
v___x_1174_ = l_Lean_mkIdentFrom(v_tk_1156_, v___x_1173_, v___y_1164_);
lean_dec(v_tk_1156_);
v___x_1175_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
lean_inc(v___y_1166_);
v___x_1176_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___y_1166_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
v___x_1177_ = l_Lean_Syntax_node6(v___y_1166_, v___y_1162_, v___x_1169_, v___x_1172_, v___x_1174_, v___x_1158_, v___x_1176_, v___x_1160_);
v___x_1178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
lean_ctor_set(v___x_1178_, 1, v_a_1148_);
return v___x_1178_;
}
v___jp_1179_:
{
lean_object* v_ref_1181_; uint8_t v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v_ref_1181_ = lean_ctor_get(v_a_1147_, 5);
v___x_1182_ = 0;
v___x_1183_ = l_Lean_SourceInfo_fromRef(v_ref_1181_, v___x_1182_);
v___x_1184_ = ((lean_object*)(l_Lake_facetDataDecl___closed__1));
v___x_1185_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_1186_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_1180_) == 1)
{
lean_object* v_val_1187_; lean_object* v___x_1188_; 
v_val_1187_ = lean_ctor_get(v___y_1180_, 0);
lean_inc(v_val_1187_);
lean_dec_ref(v___y_1180_);
v___x_1188_ = l_Array_mkArray1___redArg(v_val_1187_);
v___y_1162_ = v___x_1184_;
v___y_1163_ = v___x_1186_;
v___y_1164_ = v___x_1182_;
v___y_1165_ = v___x_1185_;
v___y_1166_ = v___x_1183_;
v___y_1167_ = v___x_1188_;
goto v___jp_1161_;
}
else
{
lean_object* v___x_1189_; 
lean_dec(v___y_1180_);
v___x_1189_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_1162_ = v___x_1184_;
v___y_1163_ = v___x_1186_;
v___y_1164_ = v___x_1182_;
v___y_1165_ = v___x_1185_;
v___y_1166_ = v___x_1183_;
v___y_1167_ = v___x_1189_;
goto v___jp_1161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___boxed(lean_object* v_x_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1(v_x_1200_, v_a_1201_, v_a_1202_);
lean_dec_ref(v_a_1201_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__moduleDataDecl__1(lean_object* v_x_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1235_ = ((lean_object*)(l_Lake_moduleDataDecl___closed__1));
lean_inc(v_x_1232_);
v___x_1236_ = l_Lean_Syntax_isOfKind(v_x_1232_, v___x_1235_);
if (v___x_1236_ == 0)
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
lean_dec(v_x_1232_);
v___x_1237_ = lean_box(1);
v___x_1238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
lean_ctor_set(v___x_1238_, 1, v_a_1234_);
return v___x_1238_;
}
else
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v_tk_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___y_1248_; lean_object* v___y_1249_; lean_object* v___y_1250_; lean_object* v___y_1251_; uint8_t v___y_1252_; lean_object* v___y_1253_; lean_object* v___y_1266_; lean_object* v___x_1276_; 
v___x_1239_ = lean_unsigned_to_nat(0u);
v___x_1240_ = l_Lean_Syntax_getArg(v_x_1232_, v___x_1239_);
v___x_1241_ = lean_unsigned_to_nat(1u);
v_tk_1242_ = l_Lean_Syntax_getArg(v_x_1232_, v___x_1241_);
v___x_1243_ = lean_unsigned_to_nat(2u);
v___x_1244_ = l_Lean_Syntax_getArg(v_x_1232_, v___x_1243_);
v___x_1245_ = lean_unsigned_to_nat(4u);
v___x_1246_ = l_Lean_Syntax_getArg(v_x_1232_, v___x_1245_);
lean_dec(v_x_1232_);
v___x_1276_ = l_Lean_Syntax_getOptional_x3f(v___x_1240_);
lean_dec(v___x_1240_);
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_box(0);
v___y_1266_ = v___x_1277_;
goto v___jp_1265_;
}
else
{
lean_object* v_val_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
v_val_1278_ = lean_ctor_get(v___x_1276_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1276_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_val_1278_);
lean_dec(v___x_1276_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_val_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
v___y_1266_ = v___x_1283_;
goto v___jp_1265_;
}
}
}
v___jp_1247_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1254_ = l_Array_append___redArg(v___y_1250_, v___y_1253_);
lean_dec_ref(v___y_1253_);
lean_inc(v___y_1251_);
v___x_1255_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1255_, 0, v___y_1251_);
lean_ctor_set(v___x_1255_, 1, v___y_1248_);
lean_ctor_set(v___x_1255_, 2, v___x_1254_);
v___x_1256_ = l_Lean_SourceInfo_fromRef(v_tk_1242_, v___x_1236_);
v___x_1257_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0));
v___x_1258_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1256_);
lean_ctor_set(v___x_1258_, 1, v___x_1257_);
v___x_1259_ = l_Lake_Module_keyword;
v___x_1260_ = l_Lean_mkIdentFrom(v_tk_1242_, v___x_1259_, v___y_1252_);
lean_dec(v_tk_1242_);
v___x_1261_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
lean_inc(v___y_1251_);
v___x_1262_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___y_1251_);
lean_ctor_set(v___x_1262_, 1, v___x_1261_);
v___x_1263_ = l_Lean_Syntax_node6(v___y_1251_, v___y_1249_, v___x_1255_, v___x_1258_, v___x_1260_, v___x_1244_, v___x_1262_, v___x_1246_);
v___x_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1263_);
lean_ctor_set(v___x_1264_, 1, v_a_1234_);
return v___x_1264_;
}
v___jp_1265_:
{
lean_object* v_ref_1267_; uint8_t v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v_ref_1267_ = lean_ctor_get(v_a_1233_, 5);
v___x_1268_ = 0;
v___x_1269_ = l_Lean_SourceInfo_fromRef(v_ref_1267_, v___x_1268_);
v___x_1270_ = ((lean_object*)(l_Lake_facetDataDecl___closed__1));
v___x_1271_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_1272_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_1266_) == 1)
{
lean_object* v_val_1273_; lean_object* v___x_1274_; 
v_val_1273_ = lean_ctor_get(v___y_1266_, 0);
lean_inc(v_val_1273_);
lean_dec_ref(v___y_1266_);
v___x_1274_ = l_Array_mkArray1___redArg(v_val_1273_);
v___y_1248_ = v___x_1271_;
v___y_1249_ = v___x_1270_;
v___y_1250_ = v___x_1272_;
v___y_1251_ = v___x_1269_;
v___y_1252_ = v___x_1268_;
v___y_1253_ = v___x_1274_;
goto v___jp_1247_;
}
else
{
lean_object* v___x_1275_; 
lean_dec(v___y_1266_);
v___x_1275_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_1248_ = v___x_1271_;
v___y_1249_ = v___x_1270_;
v___y_1250_ = v___x_1272_;
v___y_1251_ = v___x_1269_;
v___y_1252_ = v___x_1268_;
v___y_1253_ = v___x_1275_;
goto v___jp_1247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__moduleDataDecl__1___boxed(lean_object* v_x_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__moduleDataDecl__1(v_x_1286_, v_a_1287_, v_a_1288_);
lean_dec_ref(v_a_1287_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1(lean_object* v_x_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_){
_start:
{
lean_object* v___x_1324_; uint8_t v___x_1325_; 
v___x_1324_ = ((lean_object*)(l_Lake_libraryDataDecl___closed__1));
lean_inc(v_x_1321_);
v___x_1325_ = l_Lean_Syntax_isOfKind(v_x_1321_, v___x_1324_);
if (v___x_1325_ == 0)
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
lean_dec(v_x_1321_);
v___x_1326_ = lean_box(1);
v___x_1327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
lean_ctor_set(v___x_1327_, 1, v_a_1323_);
return v___x_1327_;
}
else
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v_tk_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___y_1340_; uint8_t v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1355_; lean_object* v___x_1365_; 
v___x_1328_ = lean_unsigned_to_nat(0u);
v___x_1329_ = l_Lean_Syntax_getArg(v_x_1321_, v___x_1328_);
v___x_1330_ = lean_unsigned_to_nat(1u);
v_tk_1331_ = l_Lean_Syntax_getArg(v_x_1321_, v___x_1330_);
v___x_1332_ = lean_unsigned_to_nat(2u);
v___x_1333_ = l_Lean_Syntax_getArg(v_x_1321_, v___x_1332_);
v___x_1334_ = lean_unsigned_to_nat(4u);
v___x_1335_ = l_Lean_Syntax_getArg(v_x_1321_, v___x_1334_);
lean_dec(v_x_1321_);
v___x_1365_ = l_Lean_Syntax_getOptional_x3f(v___x_1329_);
lean_dec(v___x_1329_);
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_box(0);
v___y_1355_ = v___x_1366_;
goto v___jp_1354_;
}
else
{
lean_object* v_val_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
v_val_1367_ = lean_ctor_get(v___x_1365_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1365_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1365_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_val_1367_);
lean_dec(v___x_1365_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_val_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
v___y_1355_ = v___x_1372_;
goto v___jp_1354_;
}
}
}
v___jp_1336_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1343_ = l_Array_append___redArg(v___y_1337_, v___y_1342_);
lean_dec_ref(v___y_1342_);
lean_inc(v___y_1338_);
v___x_1344_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1344_, 0, v___y_1338_);
lean_ctor_set(v___x_1344_, 1, v___y_1340_);
lean_ctor_set(v___x_1344_, 2, v___x_1343_);
v___x_1345_ = l_Lean_SourceInfo_fromRef(v_tk_1331_, v___x_1325_);
v___x_1346_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0));
v___x_1347_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1345_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
v___x_1348_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__1));
v___x_1349_ = l_Lean_mkIdentFrom(v_tk_1331_, v___x_1348_, v___y_1341_);
lean_dec(v_tk_1331_);
v___x_1350_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
lean_inc(v___y_1338_);
v___x_1351_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___y_1338_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
v___x_1352_ = l_Lean_Syntax_node6(v___y_1338_, v___y_1339_, v___x_1344_, v___x_1347_, v___x_1349_, v___x_1333_, v___x_1351_, v___x_1335_);
v___x_1353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
lean_ctor_set(v___x_1353_, 1, v_a_1323_);
return v___x_1353_;
}
v___jp_1354_:
{
lean_object* v_ref_1356_; uint8_t v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v_ref_1356_ = lean_ctor_get(v_a_1322_, 5);
v___x_1357_ = 0;
v___x_1358_ = l_Lean_SourceInfo_fromRef(v_ref_1356_, v___x_1357_);
v___x_1359_ = ((lean_object*)(l_Lake_facetDataDecl___closed__1));
v___x_1360_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_1361_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_1355_) == 1)
{
lean_object* v_val_1362_; lean_object* v___x_1363_; 
v_val_1362_ = lean_ctor_get(v___y_1355_, 0);
lean_inc(v_val_1362_);
lean_dec_ref(v___y_1355_);
v___x_1363_ = l_Array_mkArray1___redArg(v_val_1362_);
v___y_1337_ = v___x_1361_;
v___y_1338_ = v___x_1358_;
v___y_1339_ = v___x_1359_;
v___y_1340_ = v___x_1360_;
v___y_1341_ = v___x_1357_;
v___y_1342_ = v___x_1363_;
goto v___jp_1336_;
}
else
{
lean_object* v___x_1364_; 
lean_dec(v___y_1355_);
v___x_1364_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_1337_ = v___x_1361_;
v___y_1338_ = v___x_1358_;
v___y_1339_ = v___x_1359_;
v___y_1340_ = v___x_1360_;
v___y_1341_ = v___x_1357_;
v___y_1342_ = v___x_1364_;
goto v___jp_1336_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___boxed(lean_object* v_x_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1(v_x_1375_, v_a_1376_, v_a_1377_);
lean_dec_ref(v_a_1376_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1(lean_object* v_x_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_){
_start:
{
lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1430_ = ((lean_object*)(l_Lake_customDataDecl___closed__1));
lean_inc(v_x_1427_);
v___x_1431_ = l_Lean_Syntax_isOfKind(v_x_1427_, v___x_1430_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
lean_dec_ref(v_a_1428_);
lean_dec(v_x_1427_);
v___x_1432_ = lean_box(1);
v___x_1433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
lean_ctor_set(v___x_1433_, 1, v_a_1429_);
return v___x_1433_;
}
else
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v_tk_1437_; lean_object* v___x_1438_; lean_object* v_pkg_1439_; lean_object* v___x_1440_; lean_object* v_tgt_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; lean_object* v___y_1448_; lean_object* v___y_1449_; lean_object* v___y_1450_; lean_object* v___y_1451_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v___y_1486_; lean_object* v___x_1507_; 
v___x_1434_ = lean_unsigned_to_nat(0u);
v___x_1435_ = l_Lean_Syntax_getArg(v_x_1427_, v___x_1434_);
v___x_1436_ = lean_unsigned_to_nat(1u);
v_tk_1437_ = l_Lean_Syntax_getArg(v_x_1427_, v___x_1436_);
v___x_1438_ = lean_unsigned_to_nat(2u);
v_pkg_1439_ = l_Lean_Syntax_getArg(v_x_1427_, v___x_1438_);
v___x_1440_ = lean_unsigned_to_nat(3u);
v_tgt_1441_ = l_Lean_Syntax_getArg(v_x_1427_, v___x_1440_);
v___x_1442_ = lean_unsigned_to_nat(5u);
v___x_1443_ = l_Lean_Syntax_getArg(v_x_1427_, v___x_1442_);
lean_dec(v_x_1427_);
v___x_1507_ = l_Lean_Syntax_getOptional_x3f(v___x_1435_);
lean_dec(v___x_1435_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v___x_1508_; 
v___x_1508_ = lean_box(0);
v___y_1486_ = v___x_1508_;
goto v___jp_1485_;
}
else
{
lean_object* v_val_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1516_; 
v_val_1509_ = lean_ctor_get(v___x_1507_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1511_ = v___x_1507_;
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_val_1509_);
lean_dec(v___x_1507_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v___x_1514_; 
if (v_isShared_1512_ == 0)
{
v___x_1514_ = v___x_1511_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v_val_1509_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
v___y_1486_ = v___x_1514_;
goto v___jp_1485_;
}
}
}
v___jp_1444_:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1456_ = l_Array_append___redArg(v___y_1450_, v___y_1455_);
lean_dec_ref(v___y_1455_);
lean_inc(v___y_1453_);
lean_inc(v___y_1448_);
v___x_1457_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1457_, 0, v___y_1448_);
lean_ctor_set(v___x_1457_, 1, v___y_1453_);
lean_ctor_set(v___x_1457_, 2, v___x_1456_);
v___x_1458_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0));
lean_inc(v___y_1448_);
v___x_1459_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___y_1448_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
v___x_1460_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
lean_inc(v___y_1448_);
v___x_1461_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___y_1448_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
v___x_1462_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1));
v___x_1463_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6));
v___x_1464_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20));
lean_inc(v___y_1448_);
v___x_1465_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___y_1448_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
v___x_1466_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22));
v___x_1467_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24);
v___x_1468_ = lean_box(0);
v___x_1469_ = l_Lean_addMacroScope(v___y_1454_, v___x_1468_, v___y_1452_);
v___x_1470_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__3));
lean_inc(v___y_1448_);
v___x_1471_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1471_, 0, v___y_1448_);
lean_ctor_set(v___x_1471_, 1, v___x_1467_);
lean_ctor_set(v___x_1471_, 2, v___x_1469_);
lean_ctor_set(v___x_1471_, 3, v___x_1470_);
lean_inc(v___y_1448_);
v___x_1472_ = l_Lean_Syntax_node1(v___y_1448_, v___x_1466_, v___x_1471_);
lean_inc(v___y_1448_);
v___x_1473_ = l_Lean_Syntax_node2(v___y_1448_, v___x_1463_, v___x_1465_, v___x_1472_);
v___x_1474_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36));
lean_inc(v___y_1448_);
v___x_1475_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1475_, 0, v___y_1448_);
lean_ctor_set(v___x_1475_, 1, v___x_1474_);
lean_inc(v___y_1453_);
lean_inc(v___y_1448_);
v___x_1476_ = l_Lean_Syntax_node1(v___y_1448_, v___y_1453_, v___y_1447_);
lean_inc(v___y_1448_);
v___x_1477_ = l_Lean_Syntax_node3(v___y_1448_, v___y_1453_, v___y_1446_, v___x_1475_, v___x_1476_);
v___x_1478_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28));
lean_inc(v___y_1448_);
v___x_1479_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1479_, 0, v___y_1448_);
lean_ctor_set(v___x_1479_, 1, v___x_1478_);
lean_inc(v___y_1448_);
v___x_1480_ = l_Lean_Syntax_node3(v___y_1448_, v___x_1462_, v___x_1473_, v___x_1477_, v___x_1479_);
v___x_1481_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2));
lean_inc(v___y_1448_);
v___x_1482_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1482_, 0, v___y_1448_);
lean_ctor_set(v___x_1482_, 1, v___x_1481_);
v___x_1483_ = l_Lean_Syntax_node8(v___y_1448_, v___y_1449_, v___x_1457_, v___x_1459_, v___y_1445_, v___x_1461_, v___y_1451_, v___x_1480_, v___x_1482_, v___x_1443_);
v___x_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
lean_ctor_set(v___x_1484_, 1, v_a_1429_);
return v___x_1484_;
}
v___jp_1485_:
{
lean_object* v_quotContext_1487_; lean_object* v_currMacroScope_1488_; lean_object* v_ref_1489_; lean_object* v_ref_1490_; lean_object* v___x_1491_; uint8_t v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v_quotContext_1487_ = lean_ctor_get(v_a_1428_, 1);
lean_inc(v_quotContext_1487_);
v_currMacroScope_1488_ = lean_ctor_get(v_a_1428_, 2);
lean_inc(v_currMacroScope_1488_);
v_ref_1489_ = lean_ctor_get(v_a_1428_, 5);
lean_inc(v_ref_1489_);
lean_dec_ref(v_a_1428_);
v_ref_1490_ = l_Lean_replaceRef(v_tk_1437_, v_ref_1489_);
lean_dec(v_ref_1489_);
lean_dec(v_tk_1437_);
v___x_1491_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5));
v___x_1492_ = 0;
v___x_1493_ = l_Lean_mkCIdentFrom(v_ref_1490_, v___x_1491_, v___x_1492_);
v___x_1494_ = l_Lean_TSyntax_getId(v_pkg_1439_);
v___x_1495_ = l_Lean_TSyntax_getId(v_tgt_1441_);
lean_inc(v___x_1495_);
lean_inc(v___x_1494_);
v___x_1496_ = l_Lean_Name_append(v___x_1494_, v___x_1495_);
v___x_1497_ = l_Lean_mkIdentFrom(v_tgt_1441_, v___x_1496_, v___x_1492_);
lean_dec(v_tgt_1441_);
v___x_1498_ = l_Lake_Name_quoteFrom(v_pkg_1439_, v___x_1494_, v___x_1492_);
lean_inc(v___x_1498_);
v___x_1499_ = l_Lake_Name_quoteFrom(v___x_1498_, v___x_1495_, v___x_1492_);
v___x_1500_ = l_Lean_SourceInfo_fromRef(v_ref_1490_, v___x_1492_);
lean_dec(v_ref_1490_);
v___x_1501_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70));
v___x_1502_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_1503_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_1486_) == 1)
{
lean_object* v_val_1504_; lean_object* v___x_1505_; 
v_val_1504_ = lean_ctor_get(v___y_1486_, 0);
lean_inc(v_val_1504_);
lean_dec_ref(v___y_1486_);
v___x_1505_ = l_Array_mkArray1___redArg(v_val_1504_);
v___y_1445_ = v___x_1497_;
v___y_1446_ = v___x_1498_;
v___y_1447_ = v___x_1499_;
v___y_1448_ = v___x_1500_;
v___y_1449_ = v___x_1501_;
v___y_1450_ = v___x_1503_;
v___y_1451_ = v___x_1493_;
v___y_1452_ = v_currMacroScope_1488_;
v___y_1453_ = v___x_1502_;
v___y_1454_ = v_quotContext_1487_;
v___y_1455_ = v___x_1505_;
goto v___jp_1444_;
}
else
{
lean_object* v___x_1506_; 
lean_dec(v___y_1486_);
v___x_1506_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_1445_ = v___x_1497_;
v___y_1446_ = v___x_1498_;
v___y_1447_ = v___x_1499_;
v___y_1448_ = v___x_1500_;
v___y_1449_ = v___x_1501_;
v___y_1450_ = v___x_1503_;
v___y_1451_ = v___x_1493_;
v___y_1452_ = v_currMacroScope_1488_;
v___y_1453_ = v___x_1502_;
v___y_1454_ = v_quotContext_1487_;
v___y_1455_ = v___x_1506_;
goto v___jp_1444_;
}
}
}
}
}
lean_object* runtime_initialize_Lake_Build_Key(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Family(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Dynlib(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Data(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Family(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Dynlib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Data(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Key(uint8_t builtin);
lean_object* initialize_Lake_Util_Family(uint8_t builtin);
lean_object* initialize_Lake_Config_Dynlib(uint8_t builtin);
lean_object* initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
lean_object* initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Data(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Family(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Dynlib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Data(builtin);
}
#ifdef __cplusplus
}
#endif
