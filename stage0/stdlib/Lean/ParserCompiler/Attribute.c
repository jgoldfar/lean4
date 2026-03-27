// Lean compiler output
// Module: Lean.ParserCompiler.Attribute
// Imports: public import Lean.Compiler.InitAttr import Lean.ExtraModUses
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_instInhabitedEnvExtension_default(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Lean_MessageData_ofName(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object*);
lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Attribute_Builtin_getIdent(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
extern lean_object* l_Lean_instInhabitedAttributeImpl_default;
static const lean_string_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0_value)}};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value)}};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0_value;
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1_value;
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2_value;
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3_value;
static lean_once_cell_t l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4;
static lean_once_cell_t l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5;
static lean_once_cell_t l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value;
static const lean_array_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__1(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__1;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqExtraModUse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0_value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableExtraModUse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0_value;
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1_value;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__2;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__3 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0_value;
static const lean_closure_object l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_registerCombinatorAttribute___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1_value;
static const lean_closure_object l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "no declaration of attribute ["};
static const lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0_value;
static lean_once_cell_t l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1;
static const lean_string_object l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "] found for `"};
static const lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2_value;
static lean_once_cell_t l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3;
static const lean_string_object l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4 = (const lean_object*)&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4_value;
static lean_once_cell_t l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0(lean_object* v_x_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1));
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___boxed(lean_object* v_x_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0(v_x_9_, v___y_10_);
lean_dec_ref(v___y_10_);
lean_dec_ref(v_x_9_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1(lean_object* v_s_13_, lean_object* v_x_14_){
_start:
{
lean_inc_ref(v_s_13_);
return v_s_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1___boxed(lean_object* v_s_15_, lean_object* v_x_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1(v_s_15_, v_x_16_);
lean_dec_ref(v_x_16_);
lean_dec_ref(v_s_15_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1));
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___boxed(lean_object* v_x_25_, lean_object* v_x_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2(v_x_25_, v_x_26_);
lean_dec_ref(v_x_26_);
lean_dec_ref(v_x_25_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3(lean_object* v_x_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_box(0);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3___boxed(lean_object* v_x_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3(v_x_30_);
lean_dec_ref(v_x_30_);
return v_res_31_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instInhabitedEnvExtension_default(lean_box(0));
return v___x_36_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5(void){
_start:
{
lean_object* v___f_37_; lean_object* v___f_38_; lean_object* v___f_39_; lean_object* v___f_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___f_37_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3));
v___f_38_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2));
v___f_39_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1));
v___f_40_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0));
v___x_41_ = lean_box(0);
v___x_42_ = lean_obj_once(&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4, &l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4_once, _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4);
v___x_43_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
lean_ctor_set(v___x_43_, 1, v___x_41_);
lean_ctor_set(v___x_43_, 2, v___f_40_);
lean_ctor_set(v___x_43_, 3, v___f_39_);
lean_ctor_set(v___x_43_, 4, v___f_38_);
lean_ctor_set(v___x_43_, 5, v___f_37_);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_obj_once(&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5, &l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5_once, _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5);
v___x_45_ = l_Lean_instInhabitedAttributeImpl_default;
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_obj_once(&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6, &l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6_once, _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default;
return v___x_48_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10));
v___x_76_ = l_Lean_mkAtom(v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12);
v___x_78_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_79_ = lean_array_push(v___x_78_, v___x_77_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17));
v___x_89_ = l_Lean_mkAtom(v___x_88_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18);
v___x_91_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_92_ = lean_array_push(v___x_91_, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_93_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19);
v___x_94_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16));
v___x_95_ = lean_box(2);
v___x_96_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___x_94_);
lean_ctor_set(v___x_96_, 2, v___x_93_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20);
v___x_98_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13);
v___x_99_ = lean_array_push(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_100_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21);
v___x_101_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11));
v___x_102_ = lean_box(2);
v___x_103_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_101_);
lean_ctor_set(v___x_103_, 2, v___x_100_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22);
v___x_105_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_106_ = lean_array_push(v___x_105_, v___x_104_);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_107_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23);
v___x_108_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9));
v___x_109_ = lean_box(2);
v___x_110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v___x_108_);
lean_ctor_set(v___x_110_, 2, v___x_107_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24);
v___x_112_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_113_ = lean_array_push(v___x_112_, v___x_111_);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_114_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25);
v___x_115_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7));
v___x_116_ = lean_box(2);
v___x_117_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_115_);
lean_ctor_set(v___x_117_, 2, v___x_114_);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_118_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26);
v___x_119_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_120_ = lean_array_push(v___x_119_, v___x_118_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_121_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27);
v___x_122_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4));
v___x_123_ = lean_box(2);
v___x_124_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v___x_122_);
lean_ctor_set(v___x_124_, 2, v___x_121_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_126_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0);
v___x_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(lean_object* v_env_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; lean_object* v_nextMacroScope_135_; lean_object* v_ngen_136_; lean_object* v_auxDeclNGen_137_; lean_object* v_traceState_138_; lean_object* v_messages_139_; lean_object* v_infoState_140_; lean_object* v_snapshotTasks_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_152_; 
v___x_134_ = lean_st_ref_take(v___y_132_);
v_nextMacroScope_135_ = lean_ctor_get(v___x_134_, 1);
v_ngen_136_ = lean_ctor_get(v___x_134_, 2);
v_auxDeclNGen_137_ = lean_ctor_get(v___x_134_, 3);
v_traceState_138_ = lean_ctor_get(v___x_134_, 4);
v_messages_139_ = lean_ctor_get(v___x_134_, 6);
v_infoState_140_ = lean_ctor_get(v___x_134_, 7);
v_snapshotTasks_141_ = lean_ctor_get(v___x_134_, 8);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_152_ == 0)
{
lean_object* v_unused_153_; lean_object* v_unused_154_; 
v_unused_153_ = lean_ctor_get(v___x_134_, 5);
lean_dec(v_unused_153_);
v_unused_154_ = lean_ctor_get(v___x_134_, 0);
lean_dec(v_unused_154_);
v___x_143_ = v___x_134_;
v_isShared_144_ = v_isSharedCheck_152_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_snapshotTasks_141_);
lean_inc(v_infoState_140_);
lean_inc(v_messages_139_);
lean_inc(v_traceState_138_);
lean_inc(v_auxDeclNGen_137_);
lean_inc(v_ngen_136_);
lean_inc(v_nextMacroScope_135_);
lean_dec(v___x_134_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_152_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_145_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 5, v___x_145_);
lean_ctor_set(v___x_143_, 0, v_env_131_);
v___x_147_ = v___x_143_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_env_131_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v_nextMacroScope_135_);
lean_ctor_set(v_reuseFailAlloc_151_, 2, v_ngen_136_);
lean_ctor_set(v_reuseFailAlloc_151_, 3, v_auxDeclNGen_137_);
lean_ctor_set(v_reuseFailAlloc_151_, 4, v_traceState_138_);
lean_ctor_set(v_reuseFailAlloc_151_, 5, v___x_145_);
lean_ctor_set(v_reuseFailAlloc_151_, 6, v_messages_139_);
lean_ctor_set(v_reuseFailAlloc_151_, 7, v_infoState_140_);
lean_ctor_set(v_reuseFailAlloc_151_, 8, v_snapshotTasks_141_);
v___x_147_ = v_reuseFailAlloc_151_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_st_ref_set(v___y_132_, v___x_147_);
v___x_149_ = lean_box(0);
v___x_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
return v___x_150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___boxed(lean_object* v_env_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(v_env_155_, v___y_156_);
lean_dec(v___y_156_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3(lean_object* v_env_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(v_env_159_, v___y_161_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___boxed(lean_object* v_env_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3(v_env_164_, v___y_165_, v___y_166_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0(lean_object* v_es_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_array_mk(v_es_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__1(lean_object* v_s_171_, lean_object* v_p_172_){
_start:
{
lean_object* v_fst_173_; lean_object* v_snd_174_; lean_object* v___x_175_; 
v_fst_173_ = lean_ctor_get(v_p_172_, 0);
lean_inc(v_fst_173_);
v_snd_174_ = lean_ctor_get(v_p_172_, 1);
lean_inc(v_snd_174_);
lean_dec_ref(v_p_172_);
v___x_175_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_173_, v_snd_174_, v_s_171_);
return v___x_175_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_176_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0);
v___x_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
return v___x_178_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_179_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1);
v___x_180_ = lean_unsigned_to_nat(0u);
v___x_181_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
lean_ctor_set(v___x_181_, 2, v___x_180_);
lean_ctor_set(v___x_181_, 3, v___x_179_);
lean_ctor_set(v___x_181_, 4, v___x_179_);
lean_ctor_set(v___x_181_, 5, v___x_179_);
lean_ctor_set(v___x_181_, 6, v___x_179_);
lean_ctor_set(v___x_181_, 7, v___x_179_);
lean_ctor_set(v___x_181_, 8, v___x_179_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = lean_unsigned_to_nat(32u);
v___x_183_ = lean_mk_empty_array_with_capacity(v___x_182_);
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_185_ = ((size_t)5ULL);
v___x_186_ = lean_unsigned_to_nat(0u);
v___x_187_ = lean_unsigned_to_nat(32u);
v___x_188_ = lean_mk_empty_array_with_capacity(v___x_187_);
v___x_189_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3);
v___x_190_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_190_, 0, v___x_189_);
lean_ctor_set(v___x_190_, 1, v___x_188_);
lean_ctor_set(v___x_190_, 2, v___x_186_);
lean_ctor_set(v___x_190_, 3, v___x_186_);
lean_ctor_set_usize(v___x_190_, 4, v___x_185_);
return v___x_190_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_191_ = lean_box(1);
v___x_192_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4);
v___x_193_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1);
v___x_194_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
lean_ctor_set(v___x_194_, 1, v___x_192_);
lean_ctor_set(v___x_194_, 2, v___x_191_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(lean_object* v_msgData_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v___x_199_; lean_object* v_env_200_; lean_object* v_options_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_199_ = lean_st_ref_get(v___y_197_);
v_env_200_ = lean_ctor_get(v___x_199_, 0);
lean_inc_ref(v_env_200_);
lean_dec(v___x_199_);
v_options_201_ = lean_ctor_get(v___y_196_, 2);
v___x_202_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2);
v___x_203_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_201_);
v___x_204_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_204_, 0, v_env_200_);
lean_ctor_set(v___x_204_, 1, v___x_202_);
lean_ctor_set(v___x_204_, 2, v___x_203_);
lean_ctor_set(v___x_204_, 3, v_options_201_);
v___x_205_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
lean_ctor_set(v___x_205_, 1, v_msgData_195_);
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___boxed(lean_object* v_msgData_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(v_msgData_207_, v___y_208_, v___y_209_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(lean_object* v_msg_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
lean_object* v_ref_216_; lean_object* v___x_217_; lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_226_; 
v_ref_216_ = lean_ctor_get(v___y_213_, 5);
v___x_217_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(v_msg_212_, v___y_213_, v___y_214_);
v_a_218_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_226_ == 0)
{
v___x_220_ = v___x_217_;
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_222_; lean_object* v___x_224_; 
lean_inc(v_ref_216_);
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v_ref_216_);
lean_ctor_set(v___x_222_, 1, v_a_218_);
if (v_isShared_221_ == 0)
{
lean_ctor_set_tag(v___x_220_, 1);
lean_ctor_set(v___x_220_, 0, v___x_222_);
v___x_224_ = v___x_220_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg___boxed(lean_object* v_msg_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v_msg_227_, v___y_228_, v___y_229_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
return v_res_231_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__1(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__0));
v___x_234_ = l_Lean_stringToMessageData(v___x_233_);
return v___x_234_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__3(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__2));
v___x_237_ = l_Lean_stringToMessageData(v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2(lean_object* v_name_238_, lean_object* v_decl_239_, lean_object* v___y_240_, lean_object* v___y_241_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_243_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__1, &l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__1_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__1);
v___x_244_ = l_Lean_MessageData_ofName(v_name_238_);
v___x_245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_243_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__3, &l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__3_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___closed__3);
v___x_247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v___x_247_, v___y_240_, v___y_241_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___boxed(lean_object* v_name_249_, lean_object* v_decl_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2(v_name_249_, v_decl_250_, v___y_251_, v___y_252_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
lean_dec(v_decl_250_);
return v_res_254_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12___redArg(lean_object* v_keys_255_, lean_object* v_i_256_, lean_object* v_k_257_){
_start:
{
lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_258_ = lean_array_get_size(v_keys_255_);
v___x_259_ = lean_nat_dec_lt(v_i_256_, v___x_258_);
if (v___x_259_ == 0)
{
lean_dec(v_i_256_);
return v___x_259_;
}
else
{
lean_object* v_k_x27_260_; uint8_t v___x_261_; 
v_k_x27_260_ = lean_array_fget_borrowed(v_keys_255_, v_i_256_);
v___x_261_ = l_Lean_instBEqExtraModUse_beq(v_k_257_, v_k_x27_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_unsigned_to_nat(1u);
v___x_263_ = lean_nat_add(v_i_256_, v___x_262_);
lean_dec(v_i_256_);
v_i_256_ = v___x_263_;
goto _start;
}
else
{
lean_dec(v_i_256_);
return v___x_261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12___redArg___boxed(lean_object* v_keys_265_, lean_object* v_i_266_, lean_object* v_k_267_){
_start:
{
uint8_t v_res_268_; lean_object* v_r_269_; 
v_res_268_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12___redArg(v_keys_265_, v_i_266_, v_k_267_);
lean_dec_ref(v_k_267_);
lean_dec_ref(v_keys_265_);
v_r_269_ = lean_box(v_res_268_);
return v_r_269_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__0(void){
_start:
{
size_t v___x_270_; size_t v___x_271_; size_t v___x_272_; 
v___x_270_ = ((size_t)5ULL);
v___x_271_ = ((size_t)1ULL);
v___x_272_ = lean_usize_shift_left(v___x_271_, v___x_270_);
return v___x_272_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__1(void){
_start:
{
size_t v___x_273_; size_t v___x_274_; size_t v___x_275_; 
v___x_273_ = ((size_t)1ULL);
v___x_274_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__0);
v___x_275_ = lean_usize_sub(v___x_274_, v___x_273_);
return v___x_275_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(lean_object* v_x_276_, size_t v_x_277_, lean_object* v_x_278_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
lean_object* v_es_279_; lean_object* v___x_280_; size_t v___x_281_; size_t v___x_282_; size_t v___x_283_; lean_object* v_j_284_; lean_object* v___x_285_; 
v_es_279_ = lean_ctor_get(v_x_276_, 0);
lean_inc_ref(v_es_279_);
lean_dec_ref(v_x_276_);
v___x_280_ = lean_box(2);
v___x_281_ = ((size_t)5ULL);
v___x_282_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___closed__1);
v___x_283_ = lean_usize_land(v_x_277_, v___x_282_);
v_j_284_ = lean_usize_to_nat(v___x_283_);
v___x_285_ = lean_array_get(v___x_280_, v_es_279_, v_j_284_);
lean_dec(v_j_284_);
lean_dec_ref(v_es_279_);
switch(lean_obj_tag(v___x_285_))
{
case 0:
{
lean_object* v_key_286_; uint8_t v___x_287_; 
v_key_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_key_286_);
lean_dec_ref(v___x_285_);
v___x_287_ = l_Lean_instBEqExtraModUse_beq(v_x_278_, v_key_286_);
lean_dec(v_key_286_);
return v___x_287_;
}
case 1:
{
lean_object* v_node_288_; size_t v___x_289_; 
v_node_288_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_node_288_);
lean_dec_ref(v___x_285_);
v___x_289_ = lean_usize_shift_right(v_x_277_, v___x_281_);
v_x_276_ = v_node_288_;
v_x_277_ = v___x_289_;
goto _start;
}
default: 
{
uint8_t v___x_291_; 
v___x_291_ = 0;
return v___x_291_;
}
}
}
else
{
lean_object* v_ks_292_; lean_object* v___x_293_; uint8_t v___x_294_; 
v_ks_292_ = lean_ctor_get(v_x_276_, 0);
lean_inc_ref(v_ks_292_);
lean_dec_ref(v_x_276_);
v___x_293_ = lean_unsigned_to_nat(0u);
v___x_294_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12___redArg(v_ks_292_, v___x_293_, v_x_278_);
lean_dec_ref(v_ks_292_);
return v___x_294_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___boxed(lean_object* v_x_295_, lean_object* v_x_296_, lean_object* v_x_297_){
_start:
{
size_t v_x_5043__boxed_298_; uint8_t v_res_299_; lean_object* v_r_300_; 
v_x_5043__boxed_298_ = lean_unbox_usize(v_x_296_);
lean_dec(v_x_296_);
v_res_299_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(v_x_295_, v_x_5043__boxed_298_, v_x_297_);
lean_dec_ref(v_x_297_);
v_r_300_ = lean_box(v_res_299_);
return v_r_300_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
uint64_t v___x_303_; size_t v___x_304_; uint8_t v___x_305_; 
v___x_303_ = l_Lean_instHashableExtraModUse_hash(v_x_302_);
v___x_304_ = lean_uint64_to_usize(v___x_303_);
v___x_305_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(v_x_301_, v___x_304_, v_x_302_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg___boxed(lean_object* v_x_306_, lean_object* v_x_307_){
_start:
{
uint8_t v_res_308_; lean_object* v_r_309_; 
v_res_308_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(v_x_306_, v_x_307_);
lean_dec_ref(v_x_307_);
v_r_309_ = lean_box(v_res_308_);
return v_r_309_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0(void){
_start:
{
lean_object* v___x_310_; double v___x_311_; 
v___x_310_ = lean_unsigned_to_nat(0u);
v___x_311_ = lean_float_of_nat(v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9(lean_object* v_cls_315_, lean_object* v_msg_316_, lean_object* v___y_317_, lean_object* v___y_318_){
_start:
{
lean_object* v_ref_320_; lean_object* v___x_321_; lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_366_; 
v_ref_320_ = lean_ctor_get(v___y_317_, 5);
v___x_321_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(v_msg_316_, v___y_317_, v___y_318_);
v_a_322_ = lean_ctor_get(v___x_321_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_366_ == 0)
{
v___x_324_ = v___x_321_;
v_isShared_325_ = v_isSharedCheck_366_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_dec(v___x_321_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_366_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_326_; lean_object* v_traceState_327_; lean_object* v_env_328_; lean_object* v_nextMacroScope_329_; lean_object* v_ngen_330_; lean_object* v_auxDeclNGen_331_; lean_object* v_cache_332_; lean_object* v_messages_333_; lean_object* v_infoState_334_; lean_object* v_snapshotTasks_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_365_; 
v___x_326_ = lean_st_ref_take(v___y_318_);
v_traceState_327_ = lean_ctor_get(v___x_326_, 4);
v_env_328_ = lean_ctor_get(v___x_326_, 0);
v_nextMacroScope_329_ = lean_ctor_get(v___x_326_, 1);
v_ngen_330_ = lean_ctor_get(v___x_326_, 2);
v_auxDeclNGen_331_ = lean_ctor_get(v___x_326_, 3);
v_cache_332_ = lean_ctor_get(v___x_326_, 5);
v_messages_333_ = lean_ctor_get(v___x_326_, 6);
v_infoState_334_ = lean_ctor_get(v___x_326_, 7);
v_snapshotTasks_335_ = lean_ctor_get(v___x_326_, 8);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_365_ == 0)
{
v___x_337_ = v___x_326_;
v_isShared_338_ = v_isSharedCheck_365_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_snapshotTasks_335_);
lean_inc(v_infoState_334_);
lean_inc(v_messages_333_);
lean_inc(v_cache_332_);
lean_inc(v_traceState_327_);
lean_inc(v_auxDeclNGen_331_);
lean_inc(v_ngen_330_);
lean_inc(v_nextMacroScope_329_);
lean_inc(v_env_328_);
lean_dec(v___x_326_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_365_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
uint64_t v_tid_339_; lean_object* v_traces_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_364_; 
v_tid_339_ = lean_ctor_get_uint64(v_traceState_327_, sizeof(void*)*1);
v_traces_340_ = lean_ctor_get(v_traceState_327_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v_traceState_327_);
if (v_isSharedCheck_364_ == 0)
{
v___x_342_ = v_traceState_327_;
v_isShared_343_ = v_isSharedCheck_364_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_traces_340_);
lean_dec(v_traceState_327_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_364_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_344_; double v___x_345_; uint8_t v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_354_; 
v___x_344_ = lean_box(0);
v___x_345_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0);
v___x_346_ = 0;
v___x_347_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__1));
v___x_348_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_348_, 0, v_cls_315_);
lean_ctor_set(v___x_348_, 1, v___x_344_);
lean_ctor_set(v___x_348_, 2, v___x_347_);
lean_ctor_set_float(v___x_348_, sizeof(void*)*3, v___x_345_);
lean_ctor_set_float(v___x_348_, sizeof(void*)*3 + 8, v___x_345_);
lean_ctor_set_uint8(v___x_348_, sizeof(void*)*3 + 16, v___x_346_);
v___x_349_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__2));
v___x_350_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_350_, 0, v___x_348_);
lean_ctor_set(v___x_350_, 1, v_a_322_);
lean_ctor_set(v___x_350_, 2, v___x_349_);
lean_inc(v_ref_320_);
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v_ref_320_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = l_Lean_PersistentArray_push___redArg(v_traces_340_, v___x_351_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 0, v___x_352_);
v___x_354_ = v___x_342_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_352_);
lean_ctor_set_uint64(v_reuseFailAlloc_363_, sizeof(void*)*1, v_tid_339_);
v___x_354_ = v_reuseFailAlloc_363_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
lean_object* v___x_356_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 4, v___x_354_);
v___x_356_ = v___x_337_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_env_328_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v_nextMacroScope_329_);
lean_ctor_set(v_reuseFailAlloc_362_, 2, v_ngen_330_);
lean_ctor_set(v_reuseFailAlloc_362_, 3, v_auxDeclNGen_331_);
lean_ctor_set(v_reuseFailAlloc_362_, 4, v___x_354_);
lean_ctor_set(v_reuseFailAlloc_362_, 5, v_cache_332_);
lean_ctor_set(v_reuseFailAlloc_362_, 6, v_messages_333_);
lean_ctor_set(v_reuseFailAlloc_362_, 7, v_infoState_334_);
lean_ctor_set(v_reuseFailAlloc_362_, 8, v_snapshotTasks_335_);
v___x_356_ = v_reuseFailAlloc_362_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_360_; 
v___x_357_ = lean_st_ref_set(v___y_318_, v___x_356_);
v___x_358_ = lean_box(0);
if (v_isShared_325_ == 0)
{
lean_ctor_set(v___x_324_, 0, v___x_358_);
v___x_360_ = v___x_324_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v___x_358_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___boxed(lean_object* v_cls_367_, lean_object* v_msg_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9(v_cls_367_, v_msg_368_, v___y_369_, v___y_370_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg(lean_object* v_cls_376_, lean_object* v___y_377_){
_start:
{
lean_object* v_options_379_; uint8_t v_hasTrace_380_; 
v_options_379_ = lean_ctor_get(v___y_377_, 2);
v_hasTrace_380_ = lean_ctor_get_uint8(v_options_379_, sizeof(void*)*1);
if (v_hasTrace_380_ == 0)
{
lean_object* v___x_381_; lean_object* v___x_382_; 
lean_dec(v_cls_376_);
v___x_381_ = lean_box(v_hasTrace_380_);
v___x_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
return v___x_382_;
}
else
{
lean_object* v_inheritedTraceOptions_383_; lean_object* v___x_384_; lean_object* v___x_385_; uint8_t v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v_inheritedTraceOptions_383_ = lean_ctor_get(v___y_377_, 13);
v___x_384_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg___closed__1));
v___x_385_ = l_Lean_Name_append(v___x_384_, v_cls_376_);
v___x_386_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_383_, v_options_379_, v___x_385_);
lean_dec(v___x_385_);
v___x_387_ = lean_box(v___x_386_);
v___x_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
return v___x_388_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_cls_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg(v_cls_389_, v___y_390_);
lean_dec_ref(v___y_390_);
return v_res_392_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_395_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1));
v___x_396_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0));
v___x_397_ = l_Lean_PersistentHashMap_empty(lean_box(0), lean_box(0), v___x_396_, v___x_395_);
return v___x_397_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5));
v___x_403_ = l_Lean_stringToMessageData(v___x_402_);
return v___x_403_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7));
v___x_406_ = l_Lean_stringToMessageData(v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__1));
v___x_408_ = l_Lean_stringToMessageData(v___x_407_);
return v___x_408_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10));
v___x_411_ = l_Lean_stringToMessageData(v___x_410_);
return v___x_411_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12));
v___x_414_ = l_Lean_stringToMessageData(v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(lean_object* v_mod_419_, uint8_t v_isMeta_420_, lean_object* v_hint_421_, lean_object* v___y_422_, lean_object* v___y_423_){
_start:
{
lean_object* v___x_425_; lean_object* v_env_426_; uint8_t v_isExporting_427_; lean_object* v___x_428_; lean_object* v_env_429_; lean_object* v___x_430_; lean_object* v_entry_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___y_436_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_425_ = lean_st_ref_get(v___y_423_);
v_env_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc_ref(v_env_426_);
lean_dec(v___x_425_);
v_isExporting_427_ = lean_ctor_get_uint8(v_env_426_, sizeof(void*)*8);
lean_dec_ref(v_env_426_);
v___x_428_ = lean_st_ref_get(v___y_423_);
v_env_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc_ref(v_env_429_);
lean_dec(v___x_428_);
v___x_430_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2);
lean_inc(v_mod_419_);
v_entry_431_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_431_, 0, v_mod_419_);
lean_ctor_set_uint8(v_entry_431_, sizeof(void*)*1, v_isExporting_427_);
lean_ctor_set_uint8(v_entry_431_, sizeof(void*)*1 + 1, v_isMeta_420_);
v___x_432_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_433_ = lean_box(1);
v___x_434_ = lean_box(0);
v___x_461_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_430_, v___x_432_, v_env_429_, v___x_433_, v___x_434_);
v___x_462_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(v___x_461_, v_entry_431_);
if (v___x_462_ == 0)
{
lean_object* v_cls_463_; lean_object* v___x_464_; lean_object* v_a_465_; lean_object* v___y_467_; lean_object* v___y_468_; lean_object* v___y_472_; lean_object* v___y_473_; uint8_t v___x_485_; 
v_cls_463_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4));
v___x_464_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg(v_cls_463_, v___y_422_);
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_a_465_);
lean_dec_ref(v___x_464_);
v___x_485_ = lean_unbox(v_a_465_);
lean_dec(v_a_465_);
if (v___x_485_ == 0)
{
lean_dec(v_hint_421_);
lean_dec(v_mod_419_);
v___y_436_ = v___y_423_;
goto v___jp_435_;
}
else
{
lean_object* v___x_486_; lean_object* v___y_488_; 
v___x_486_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11);
if (v_isExporting_427_ == 0)
{
lean_object* v___x_495_; 
v___x_495_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16));
v___y_488_ = v___x_495_;
goto v___jp_487_;
}
else
{
lean_object* v___x_496_; 
v___x_496_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17));
v___y_488_ = v___x_496_;
goto v___jp_487_;
}
v___jp_487_:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
lean_inc_ref(v___y_488_);
v___x_489_ = l_Lean_stringToMessageData(v___y_488_);
v___x_490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_486_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
v___x_491_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13);
v___x_492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_490_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
if (v_isMeta_420_ == 0)
{
lean_object* v___x_493_; 
v___x_493_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14));
v___y_472_ = v___x_492_;
v___y_473_ = v___x_493_;
goto v___jp_471_;
}
else
{
lean_object* v___x_494_; 
v___x_494_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15));
v___y_472_ = v___x_492_;
v___y_473_ = v___x_494_;
goto v___jp_471_;
}
}
}
v___jp_466_:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_469_, 0, v___y_467_);
lean_ctor_set(v___x_469_, 1, v___y_468_);
v___x_470_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9(v_cls_463_, v___x_469_, v___y_422_, v___y_423_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_dec_ref(v___x_470_);
v___y_436_ = v___y_423_;
goto v___jp_435_;
}
else
{
lean_dec_ref(v_entry_431_);
return v___x_470_;
}
}
v___jp_471_:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
lean_inc_ref(v___y_473_);
v___x_474_ = l_Lean_stringToMessageData(v___y_473_);
v___x_475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_475_, 0, v___y_472_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
v___x_476_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6);
v___x_477_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_475_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = l_Lean_MessageData_ofName(v_mod_419_);
v___x_479_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_477_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = l_Lean_Name_isAnonymous(v_hint_421_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8);
v___x_482_ = l_Lean_MessageData_ofName(v_hint_421_);
v___x_483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_481_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
v___y_467_ = v___x_479_;
v___y_468_ = v___x_483_;
goto v___jp_466_;
}
else
{
lean_object* v___x_484_; 
lean_dec(v_hint_421_);
v___x_484_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9);
v___y_467_ = v___x_479_;
v___y_468_ = v___x_484_;
goto v___jp_466_;
}
}
}
else
{
lean_object* v___x_497_; lean_object* v___x_498_; 
lean_dec_ref(v_entry_431_);
lean_dec(v_hint_421_);
lean_dec(v_mod_419_);
v___x_497_ = lean_box(0);
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
v___jp_435_:
{
lean_object* v___x_437_; lean_object* v_toEnvExtension_438_; lean_object* v_env_439_; lean_object* v_nextMacroScope_440_; lean_object* v_ngen_441_; lean_object* v_auxDeclNGen_442_; lean_object* v_traceState_443_; lean_object* v_messages_444_; lean_object* v_infoState_445_; lean_object* v_snapshotTasks_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_459_; 
v___x_437_ = lean_st_ref_take(v___y_436_);
v_toEnvExtension_438_ = lean_ctor_get(v___x_432_, 0);
v_env_439_ = lean_ctor_get(v___x_437_, 0);
v_nextMacroScope_440_ = lean_ctor_get(v___x_437_, 1);
v_ngen_441_ = lean_ctor_get(v___x_437_, 2);
v_auxDeclNGen_442_ = lean_ctor_get(v___x_437_, 3);
v_traceState_443_ = lean_ctor_get(v___x_437_, 4);
v_messages_444_ = lean_ctor_get(v___x_437_, 6);
v_infoState_445_ = lean_ctor_get(v___x_437_, 7);
v_snapshotTasks_446_ = lean_ctor_get(v___x_437_, 8);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_459_ == 0)
{
lean_object* v_unused_460_; 
v_unused_460_ = lean_ctor_get(v___x_437_, 5);
lean_dec(v_unused_460_);
v___x_448_ = v___x_437_;
v_isShared_449_ = v_isSharedCheck_459_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_snapshotTasks_446_);
lean_inc(v_infoState_445_);
lean_inc(v_messages_444_);
lean_inc(v_traceState_443_);
lean_inc(v_auxDeclNGen_442_);
lean_inc(v_ngen_441_);
lean_inc(v_nextMacroScope_440_);
lean_inc(v_env_439_);
lean_dec(v___x_437_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_459_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v_asyncMode_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_454_; 
v_asyncMode_450_ = lean_ctor_get(v_toEnvExtension_438_, 2);
v___x_451_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_432_, v_env_439_, v_entry_431_, v_asyncMode_450_, v___x_434_);
v___x_452_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 5, v___x_452_);
lean_ctor_set(v___x_448_, 0, v___x_451_);
v___x_454_ = v___x_448_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_451_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_nextMacroScope_440_);
lean_ctor_set(v_reuseFailAlloc_458_, 2, v_ngen_441_);
lean_ctor_set(v_reuseFailAlloc_458_, 3, v_auxDeclNGen_442_);
lean_ctor_set(v_reuseFailAlloc_458_, 4, v_traceState_443_);
lean_ctor_set(v_reuseFailAlloc_458_, 5, v___x_452_);
lean_ctor_set(v_reuseFailAlloc_458_, 6, v_messages_444_);
lean_ctor_set(v_reuseFailAlloc_458_, 7, v_infoState_445_);
lean_ctor_set(v_reuseFailAlloc_458_, 8, v_snapshotTasks_446_);
v___x_454_ = v_reuseFailAlloc_458_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_455_ = lean_st_ref_set(v___y_436_, v___x_454_);
v___x_456_ = lean_box(0);
v___x_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___boxed(lean_object* v_mod_499_, lean_object* v_isMeta_500_, lean_object* v_hint_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
uint8_t v_isMeta_boxed_505_; lean_object* v_res_506_; 
v_isMeta_boxed_505_ = lean_unbox(v_isMeta_500_);
v_res_506_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(v_mod_499_, v_isMeta_boxed_505_, v_hint_501_, v___y_502_, v___y_503_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(lean_object* v___x_507_, lean_object* v_declName_508_, lean_object* v_as_509_, size_t v_sz_510_, size_t v_i_511_, lean_object* v_b_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
uint8_t v___x_516_; 
v___x_516_ = lean_usize_dec_lt(v_i_511_, v_sz_510_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; 
lean_dec(v_declName_508_);
v___x_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_517_, 0, v_b_512_);
return v___x_517_;
}
else
{
lean_object* v___x_518_; lean_object* v_modules_519_; lean_object* v___x_520_; lean_object* v_a_521_; lean_object* v___x_522_; lean_object* v_toImport_523_; lean_object* v_module_524_; uint8_t v___x_525_; lean_object* v___x_526_; 
v___x_518_ = l_Lean_Environment_header(v___x_507_);
v_modules_519_ = lean_ctor_get(v___x_518_, 3);
lean_inc_ref(v_modules_519_);
lean_dec_ref(v___x_518_);
v___x_520_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_521_ = lean_array_uget_borrowed(v_as_509_, v_i_511_);
v___x_522_ = lean_array_get(v___x_520_, v_modules_519_, v_a_521_);
lean_dec_ref(v_modules_519_);
v_toImport_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc_ref(v_toImport_523_);
lean_dec(v___x_522_);
v_module_524_ = lean_ctor_get(v_toImport_523_, 0);
lean_inc(v_module_524_);
lean_dec_ref(v_toImport_523_);
v___x_525_ = 0;
lean_inc(v_declName_508_);
v___x_526_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(v_module_524_, v___x_525_, v_declName_508_, v___y_513_, v___y_514_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v___x_527_; size_t v___x_528_; size_t v___x_529_; 
lean_dec_ref(v___x_526_);
v___x_527_ = lean_box(0);
v___x_528_ = ((size_t)1ULL);
v___x_529_ = lean_usize_add(v_i_511_, v___x_528_);
v_i_511_ = v___x_529_;
v_b_512_ = v___x_527_;
goto _start;
}
else
{
lean_dec(v_declName_508_);
return v___x_526_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6___boxed(lean_object* v___x_531_, lean_object* v_declName_532_, lean_object* v_as_533_, lean_object* v_sz_534_, lean_object* v_i_535_, lean_object* v_b_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
size_t v_sz_boxed_540_; size_t v_i_boxed_541_; lean_object* v_res_542_; 
v_sz_boxed_540_ = lean_unbox_usize(v_sz_534_);
lean_dec(v_sz_534_);
v_i_boxed_541_ = lean_unbox_usize(v_i_535_);
lean_dec(v_i_535_);
v_res_542_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(v___x_531_, v_declName_532_, v_as_533_, v_sz_boxed_540_, v_i_boxed_541_, v_b_536_, v___y_537_, v___y_538_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec_ref(v_as_533_);
lean_dec_ref(v___x_531_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg(lean_object* v_a_543_, lean_object* v_x_544_){
_start:
{
if (lean_obj_tag(v_x_544_) == 0)
{
lean_object* v___x_545_; 
v___x_545_ = lean_box(0);
return v___x_545_;
}
else
{
lean_object* v_key_546_; lean_object* v_value_547_; lean_object* v_tail_548_; uint8_t v___x_549_; 
v_key_546_ = lean_ctor_get(v_x_544_, 0);
v_value_547_ = lean_ctor_get(v_x_544_, 1);
v_tail_548_ = lean_ctor_get(v_x_544_, 2);
v___x_549_ = lean_name_eq(v_key_546_, v_a_543_);
if (v___x_549_ == 0)
{
v_x_544_ = v_tail_548_;
goto _start;
}
else
{
lean_object* v___x_551_; 
lean_inc(v_value_547_);
v___x_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_551_, 0, v_value_547_);
return v___x_551_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg___boxed(lean_object* v_a_552_, lean_object* v_x_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg(v_a_552_, v_x_553_);
lean_dec(v_x_553_);
lean_dec(v_a_552_);
return v_res_554_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_555_; uint64_t v___x_556_; 
v___x_555_ = lean_unsigned_to_nat(1723u);
v___x_556_ = lean_uint64_of_nat(v___x_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(lean_object* v_m_557_, lean_object* v_a_558_){
_start:
{
lean_object* v_buckets_559_; lean_object* v___x_560_; uint64_t v___y_562_; 
v_buckets_559_ = lean_ctor_get(v_m_557_, 1);
v___x_560_ = lean_array_get_size(v_buckets_559_);
if (lean_obj_tag(v_a_558_) == 0)
{
uint64_t v___x_576_; 
v___x_576_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___closed__0);
v___y_562_ = v___x_576_;
goto v___jp_561_;
}
else
{
uint64_t v_hash_577_; 
v_hash_577_ = lean_ctor_get_uint64(v_a_558_, sizeof(void*)*2);
v___y_562_ = v_hash_577_;
goto v___jp_561_;
}
v___jp_561_:
{
uint64_t v___x_563_; uint64_t v___x_564_; uint64_t v_fold_565_; uint64_t v___x_566_; uint64_t v___x_567_; uint64_t v___x_568_; size_t v___x_569_; size_t v___x_570_; size_t v___x_571_; size_t v___x_572_; size_t v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_563_ = 32ULL;
v___x_564_ = lean_uint64_shift_right(v___y_562_, v___x_563_);
v_fold_565_ = lean_uint64_xor(v___y_562_, v___x_564_);
v___x_566_ = 16ULL;
v___x_567_ = lean_uint64_shift_right(v_fold_565_, v___x_566_);
v___x_568_ = lean_uint64_xor(v_fold_565_, v___x_567_);
v___x_569_ = lean_uint64_to_usize(v___x_568_);
v___x_570_ = lean_usize_of_nat(v___x_560_);
v___x_571_ = ((size_t)1ULL);
v___x_572_ = lean_usize_sub(v___x_570_, v___x_571_);
v___x_573_ = lean_usize_land(v___x_569_, v___x_572_);
v___x_574_ = lean_array_uget_borrowed(v_buckets_559_, v___x_573_);
v___x_575_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg(v_a_558_, v___x_574_);
return v___x_575_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___boxed(lean_object* v_m_578_, lean_object* v_a_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(v_m_578_, v_a_579_);
lean_dec(v_a_579_);
lean_dec_ref(v_m_578_);
return v_res_580_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__2(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_583_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1));
v___x_584_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0));
v___x_585_ = l_Std_HashMap_instInhabited(lean_box(0), lean_box(0), v___x_584_, v___x_583_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(lean_object* v_declName_588_, uint8_t v_isMeta_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v___x_593_; lean_object* v_env_597_; lean_object* v___y_599_; lean_object* v___x_612_; 
v___x_593_ = lean_st_ref_get(v___y_591_);
v_env_597_ = lean_ctor_get(v___x_593_, 0);
lean_inc_ref(v_env_597_);
lean_dec(v___x_593_);
v___x_612_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_597_, v_declName_588_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_dec_ref(v_env_597_);
lean_dec(v_declName_588_);
goto v___jp_594_;
}
else
{
lean_object* v_val_613_; lean_object* v___x_614_; lean_object* v_modules_615_; lean_object* v___x_616_; uint8_t v___x_617_; 
v_val_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_val_613_);
lean_dec_ref(v___x_612_);
v___x_614_ = l_Lean_Environment_header(v_env_597_);
v_modules_615_ = lean_ctor_get(v___x_614_, 3);
lean_inc_ref(v_modules_615_);
lean_dec_ref(v___x_614_);
v___x_616_ = lean_array_get_size(v_modules_615_);
v___x_617_ = lean_nat_dec_lt(v_val_613_, v___x_616_);
if (v___x_617_ == 0)
{
lean_dec_ref(v_modules_615_);
lean_dec(v_val_613_);
lean_dec_ref(v_env_597_);
lean_dec(v_declName_588_);
goto v___jp_594_;
}
else
{
lean_object* v___x_618_; lean_object* v_env_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___y_623_; 
v___x_618_ = lean_st_ref_get(v___y_591_);
v_env_619_ = lean_ctor_get(v___x_618_, 0);
lean_inc_ref(v_env_619_);
lean_dec(v___x_618_);
v___x_620_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__2, &l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__2_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__2);
v___x_621_ = lean_array_fget(v_modules_615_, v_val_613_);
lean_dec(v_val_613_);
lean_dec_ref(v_modules_615_);
if (v_isMeta_589_ == 0)
{
lean_dec_ref(v_env_619_);
v___y_623_ = v_isMeta_589_;
goto v___jp_622_;
}
else
{
uint8_t v___x_634_; 
lean_inc(v_declName_588_);
v___x_634_ = l_Lean_isMarkedMeta(v_env_619_, v_declName_588_);
if (v___x_634_ == 0)
{
v___y_623_ = v_isMeta_589_;
goto v___jp_622_;
}
else
{
uint8_t v___x_635_; 
v___x_635_ = 0;
v___y_623_ = v___x_635_;
goto v___jp_622_;
}
}
v___jp_622_:
{
lean_object* v_toImport_624_; lean_object* v_module_625_; lean_object* v___x_626_; 
v_toImport_624_ = lean_ctor_get(v___x_621_, 0);
lean_inc_ref(v_toImport_624_);
lean_dec(v___x_621_);
v_module_625_ = lean_ctor_get(v_toImport_624_, 0);
lean_inc(v_module_625_);
lean_dec_ref(v_toImport_624_);
lean_inc(v_declName_588_);
v___x_626_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(v_module_625_, v___y_623_, v_declName_588_, v___y_590_, v___y_591_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
lean_dec_ref(v___x_626_);
v___x_627_ = l_Lean_indirectModUseExt;
v___x_628_ = lean_box(1);
v___x_629_ = lean_box(0);
lean_inc_ref(v_env_597_);
v___x_630_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_620_, v___x_627_, v_env_597_, v___x_628_, v___x_629_);
v___x_631_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(v___x_630_, v_declName_588_);
lean_dec(v___x_630_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v___x_632_; 
v___x_632_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__3));
v___y_599_ = v___x_632_;
goto v___jp_598_;
}
else
{
lean_object* v_val_633_; 
v_val_633_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_val_633_);
lean_dec_ref(v___x_631_);
v___y_599_ = v_val_633_;
goto v___jp_598_;
}
}
else
{
lean_dec_ref(v_env_597_);
lean_dec(v_declName_588_);
return v___x_626_;
}
}
}
}
v___jp_594_:
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = lean_box(0);
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
return v___x_596_;
}
v___jp_598_:
{
lean_object* v___x_600_; size_t v_sz_601_; size_t v___x_602_; lean_object* v___x_603_; 
v___x_600_ = lean_box(0);
v_sz_601_ = lean_array_size(v___y_599_);
v___x_602_ = ((size_t)0ULL);
v___x_603_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(v_env_597_, v_declName_588_, v___y_599_, v_sz_601_, v___x_602_, v___x_600_, v___y_590_, v___y_591_);
lean_dec_ref(v___y_599_);
lean_dec_ref(v_env_597_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_610_ == 0)
{
lean_object* v_unused_611_; 
v_unused_611_ = lean_ctor_get(v___x_603_, 0);
lean_dec(v_unused_611_);
v___x_605_ = v___x_603_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_dec(v___x_603_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 0, v___x_600_);
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_600_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
else
{
return v___x_603_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___boxed(lean_object* v_declName_636_, lean_object* v_isMeta_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
uint8_t v_isMeta_boxed_641_; lean_object* v_res_642_; 
v_isMeta_boxed_641_ = lean_unbox(v_isMeta_637_);
v_res_642_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(v_declName_636_, v_isMeta_boxed_641_, v___y_638_, v___y_639_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3(lean_object* v_a_643_, lean_object* v_decl_644_, lean_object* v_stx_645_, uint8_t v_x_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_st_ref_get(v___y_648_);
v___x_651_ = l_Lean_Attribute_Builtin_getIdent(v_stx_645_, v___y_647_, v___y_648_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_a_652_);
lean_dec_ref(v___x_651_);
v___x_653_ = lean_box(0);
v___x_654_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_a_652_, v___x_653_, v___y_647_, v___y_648_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v_a_655_; uint8_t v___x_656_; lean_object* v___x_657_; 
v_a_655_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_a_655_);
lean_dec_ref(v___x_654_);
v___x_656_ = 0;
lean_inc(v_a_655_);
v___x_657_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(v_a_655_, v___x_656_, v___y_647_, v___y_648_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_toEnvExtension_658_; lean_object* v_env_659_; lean_object* v_asyncMode_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
lean_dec_ref(v___x_657_);
v_toEnvExtension_658_ = lean_ctor_get(v_a_643_, 0);
v_env_659_ = lean_ctor_get(v___x_650_, 0);
lean_inc_ref(v_env_659_);
lean_dec(v___x_650_);
v_asyncMode_660_ = lean_ctor_get(v_toEnvExtension_658_, 2);
lean_inc(v_asyncMode_660_);
v___x_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_661_, 0, v_a_655_);
lean_ctor_set(v___x_661_, 1, v_decl_644_);
v___x_662_ = lean_box(0);
v___x_663_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_a_643_, v_env_659_, v___x_661_, v_asyncMode_660_, v___x_662_);
lean_dec(v_asyncMode_660_);
v___x_664_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(v___x_663_, v___y_648_);
return v___x_664_;
}
else
{
lean_dec(v_a_655_);
lean_dec(v___x_650_);
lean_dec(v_decl_644_);
lean_dec_ref(v_a_643_);
return v___x_657_;
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_672_; 
lean_dec(v___x_650_);
lean_dec(v_decl_644_);
lean_dec_ref(v_a_643_);
v_a_665_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_672_ == 0)
{
v___x_667_ = v___x_654_;
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_654_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_a_665_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
else
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
lean_dec(v___x_650_);
lean_dec(v_decl_644_);
lean_dec_ref(v_a_643_);
v_a_673_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_680_ == 0)
{
v___x_675_ = v___x_651_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_651_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_673_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3___boxed(lean_object* v_a_681_, lean_object* v_decl_682_, lean_object* v_stx_683_, lean_object* v_x_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
uint8_t v_x_5645__boxed_688_; lean_object* v_res_689_; 
v_x_5645__boxed_688_ = lean_unbox(v_x_684_);
v_res_689_ = l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3(v_a_681_, v_decl_682_, v_stx_683_, v_x_5645__boxed_688_, v___y_685_, v___y_686_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(lean_object* v_as_690_, size_t v_i_691_, size_t v_stop_692_, lean_object* v_b_693_){
_start:
{
uint8_t v___x_694_; 
v___x_694_ = lean_usize_dec_eq(v_i_691_, v_stop_692_);
if (v___x_694_ == 0)
{
lean_object* v___x_695_; lean_object* v_fst_696_; lean_object* v_snd_697_; lean_object* v___x_698_; size_t v___x_699_; size_t v___x_700_; 
v___x_695_ = lean_array_uget_borrowed(v_as_690_, v_i_691_);
v_fst_696_ = lean_ctor_get(v___x_695_, 0);
v_snd_697_ = lean_ctor_get(v___x_695_, 1);
lean_inc(v_snd_697_);
lean_inc(v_fst_696_);
v___x_698_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_696_, v_snd_697_, v_b_693_);
v___x_699_ = ((size_t)1ULL);
v___x_700_ = lean_usize_add(v_i_691_, v___x_699_);
v_i_691_ = v___x_700_;
v_b_693_ = v___x_698_;
goto _start;
}
else
{
return v_b_693_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2___boxed(lean_object* v_as_702_, lean_object* v_i_703_, lean_object* v_stop_704_, lean_object* v_b_705_){
_start:
{
size_t v_i_boxed_706_; size_t v_stop_boxed_707_; lean_object* v_res_708_; 
v_i_boxed_706_ = lean_unbox_usize(v_i_703_);
lean_dec(v_i_703_);
v_stop_boxed_707_ = lean_unbox_usize(v_stop_704_);
lean_dec(v_stop_704_);
v_res_708_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(v_as_702_, v_i_boxed_706_, v_stop_boxed_707_, v_b_705_);
lean_dec_ref(v_as_702_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(lean_object* v_as_709_, size_t v_i_710_, size_t v_stop_711_, lean_object* v_b_712_){
_start:
{
lean_object* v___y_714_; uint8_t v___x_718_; 
v___x_718_ = lean_usize_dec_eq(v_i_710_, v_stop_711_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_719_ = lean_array_uget_borrowed(v_as_709_, v_i_710_);
v___x_720_ = lean_unsigned_to_nat(0u);
v___x_721_ = lean_array_get_size(v___x_719_);
v___x_722_ = lean_nat_dec_lt(v___x_720_, v___x_721_);
if (v___x_722_ == 0)
{
v___y_714_ = v_b_712_;
goto v___jp_713_;
}
else
{
uint8_t v___x_723_; 
v___x_723_ = lean_nat_dec_le(v___x_721_, v___x_721_);
if (v___x_723_ == 0)
{
if (v___x_722_ == 0)
{
v___y_714_ = v_b_712_;
goto v___jp_713_;
}
else
{
size_t v___x_724_; size_t v___x_725_; lean_object* v___x_726_; 
v___x_724_ = ((size_t)0ULL);
v___x_725_ = lean_usize_of_nat(v___x_721_);
v___x_726_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(v___x_719_, v___x_724_, v___x_725_, v_b_712_);
v___y_714_ = v___x_726_;
goto v___jp_713_;
}
}
else
{
size_t v___x_727_; size_t v___x_728_; lean_object* v___x_729_; 
v___x_727_ = ((size_t)0ULL);
v___x_728_ = lean_usize_of_nat(v___x_721_);
v___x_729_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(v___x_719_, v___x_727_, v___x_728_, v_b_712_);
v___y_714_ = v___x_729_;
goto v___jp_713_;
}
}
}
else
{
return v_b_712_;
}
v___jp_713_:
{
size_t v___x_715_; size_t v___x_716_; 
v___x_715_ = ((size_t)1ULL);
v___x_716_ = lean_usize_add(v_i_710_, v___x_715_);
v_i_710_ = v___x_716_;
v_b_712_ = v___y_714_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3___boxed(lean_object* v_as_730_, lean_object* v_i_731_, lean_object* v_stop_732_, lean_object* v_b_733_){
_start:
{
size_t v_i_boxed_734_; size_t v_stop_boxed_735_; lean_object* v_res_736_; 
v_i_boxed_734_ = lean_unbox_usize(v_i_731_);
lean_dec(v_i_731_);
v_stop_boxed_735_ = lean_unbox_usize(v_stop_732_);
lean_dec(v_stop_732_);
v_res_736_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(v_as_730_, v_i_boxed_734_, v_stop_boxed_735_, v_b_733_);
lean_dec_ref(v_as_730_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1(lean_object* v_initState_737_, lean_object* v_as_738_){
_start:
{
lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_739_ = lean_unsigned_to_nat(0u);
v___x_740_ = lean_array_get_size(v_as_738_);
v___x_741_ = lean_nat_dec_lt(v___x_739_, v___x_740_);
if (v___x_741_ == 0)
{
return v_initState_737_;
}
else
{
uint8_t v___x_742_; 
v___x_742_ = lean_nat_dec_le(v___x_740_, v___x_740_);
if (v___x_742_ == 0)
{
if (v___x_741_ == 0)
{
return v_initState_737_;
}
else
{
size_t v___x_743_; size_t v___x_744_; lean_object* v___x_745_; 
v___x_743_ = ((size_t)0ULL);
v___x_744_ = lean_usize_of_nat(v___x_740_);
v___x_745_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(v_as_738_, v___x_743_, v___x_744_, v_initState_737_);
return v___x_745_;
}
}
else
{
size_t v___x_746_; size_t v___x_747_; lean_object* v___x_748_; 
v___x_746_ = ((size_t)0ULL);
v___x_747_ = lean_usize_of_nat(v___x_740_);
v___x_748_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(v_as_738_, v___x_746_, v___x_747_, v_initState_737_);
return v___x_748_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1___boxed(lean_object* v_initState_749_, lean_object* v_as_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1(v_initState_749_, v_as_750_);
lean_dec_ref(v_as_750_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute(lean_object* v_name_756_, lean_object* v_descr_757_, lean_object* v_ref_758_){
_start:
{
lean_object* v___f_760_; lean_object* v___f_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___f_760_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0));
v___f_761_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1));
v___x_762_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2));
v___x_763_ = lean_box(0);
v___x_764_ = lean_box(2);
lean_inc(v_ref_758_);
v___x_765_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_765_, 0, v_ref_758_);
lean_ctor_set(v___x_765_, 1, v___f_761_);
lean_ctor_set(v___x_765_, 2, v___x_762_);
lean_ctor_set(v___x_765_, 3, v___f_760_);
lean_ctor_set(v___x_765_, 4, v___x_763_);
lean_ctor_set(v___x_765_, 5, v___x_764_);
lean_ctor_set(v___x_765_, 6, v___x_763_);
v___x_766_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_765_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___f_768_; lean_object* v___f_769_; uint8_t v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref(v___x_766_);
lean_inc(v_name_756_);
v___f_768_ = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2___boxed), 5, 1);
lean_closure_set(v___f_768_, 0, v_name_756_);
lean_inc(v_a_767_);
v___f_769_ = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3___boxed), 7, 1);
lean_closure_set(v___f_769_, 0, v_a_767_);
v___x_770_ = 0;
v___x_771_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_771_, 0, v_ref_758_);
lean_ctor_set(v___x_771_, 1, v_name_756_);
lean_ctor_set(v___x_771_, 2, v_descr_757_);
lean_ctor_set_uint8(v___x_771_, sizeof(void*)*3, v___x_770_);
v___x_772_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
lean_ctor_set(v___x_772_, 1, v___f_769_);
lean_ctor_set(v___x_772_, 2, v___f_768_);
lean_inc_ref(v___x_772_);
v___x_773_ = l_Lean_registerBuiltinAttribute(v___x_772_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_781_; 
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_781_ == 0)
{
lean_object* v_unused_782_; 
v_unused_782_ = lean_ctor_get(v___x_773_, 0);
lean_dec(v_unused_782_);
v___x_775_ = v___x_773_;
v_isShared_776_ = v_isSharedCheck_781_;
goto v_resetjp_774_;
}
else
{
lean_dec(v___x_773_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_781_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_777_; lean_object* v___x_779_; 
v___x_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_772_);
lean_ctor_set(v___x_777_, 1, v_a_767_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v___x_777_);
v___x_779_ = v___x_775_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_777_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
lean_dec_ref(v___x_772_);
lean_dec(v_a_767_);
v_a_783_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_773_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_773_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec(v_ref_758_);
lean_dec_ref(v_descr_757_);
lean_dec(v_name_756_);
v_a_791_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_766_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_766_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___boxed(lean_object* v_name_799_, lean_object* v_descr_800_, lean_object* v_ref_801_, lean_object* v_a_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lean_ParserCompiler_registerCombinatorAttribute(v_name_799_, v_descr_800_, v_ref_801_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0(lean_object* v_00_u03b1_804_, lean_object* v_msg_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v_msg_805_, v___y_806_, v___y_807_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___boxed(lean_object* v_00_u03b1_810_, lean_object* v_msg_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0(v_00_u03b1_810_, v_msg_811_, v___y_812_, v___y_813_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8(lean_object* v_cls_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg(v_cls_816_, v___y_817_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___boxed(lean_object* v_cls_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8(v_cls_821_, v___y_822_, v___y_823_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7(lean_object* v_00_u03b2_826_, lean_object* v_m_827_, lean_object* v_a_828_){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(v_m_827_, v_a_828_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___boxed(lean_object* v_00_u03b2_830_, lean_object* v_m_831_, lean_object* v_a_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7(v_00_u03b2_830_, v_m_831_, v_a_832_);
lean_dec(v_a_832_);
lean_dec_ref(v_m_831_);
return v_res_833_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7(lean_object* v_00_u03b2_834_, lean_object* v_x_835_, lean_object* v_x_836_){
_start:
{
uint8_t v___x_837_; 
v___x_837_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(v_x_835_, v_x_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___boxed(lean_object* v_00_u03b2_838_, lean_object* v_x_839_, lean_object* v_x_840_){
_start:
{
uint8_t v_res_841_; lean_object* v_r_842_; 
v_res_841_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7(v_00_u03b2_838_, v_x_839_, v_x_840_);
lean_dec_ref(v_x_840_);
v_r_842_ = lean_box(v_res_841_);
return v_r_842_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12(lean_object* v_00_u03b2_843_, lean_object* v_a_844_, lean_object* v_x_845_){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg(v_a_844_, v_x_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___boxed(lean_object* v_00_u03b2_847_, lean_object* v_a_848_, lean_object* v_x_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12(v_00_u03b2_847_, v_a_848_, v_x_849_);
lean_dec(v_x_849_);
lean_dec(v_a_848_);
return v_res_850_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8(lean_object* v_00_u03b2_851_, lean_object* v_x_852_, size_t v_x_853_, lean_object* v_x_854_){
_start:
{
uint8_t v___x_855_; 
v___x_855_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(v_x_852_, v_x_853_, v_x_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___boxed(lean_object* v_00_u03b2_856_, lean_object* v_x_857_, lean_object* v_x_858_, lean_object* v_x_859_){
_start:
{
size_t v_x_5914__boxed_860_; uint8_t v_res_861_; lean_object* v_r_862_; 
v_x_5914__boxed_860_ = lean_unbox_usize(v_x_858_);
lean_dec(v_x_858_);
v_res_861_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8(v_00_u03b2_856_, v_x_857_, v_x_5914__boxed_860_, v_x_859_);
lean_dec_ref(v_x_859_);
v_r_862_ = lean_box(v_res_861_);
return v_r_862_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12(lean_object* v_00_u03b2_863_, lean_object* v_keys_864_, lean_object* v_vals_865_, lean_object* v_heq_866_, lean_object* v_i_867_, lean_object* v_k_868_){
_start:
{
uint8_t v___x_869_; 
v___x_869_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12___redArg(v_keys_864_, v_i_867_, v_k_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12___boxed(lean_object* v_00_u03b2_870_, lean_object* v_keys_871_, lean_object* v_vals_872_, lean_object* v_heq_873_, lean_object* v_i_874_, lean_object* v_k_875_){
_start:
{
uint8_t v_res_876_; lean_object* v_r_877_; 
v_res_876_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__12(v_00_u03b2_870_, v_keys_871_, v_vals_872_, v_heq_873_, v_i_874_, v_k_875_);
lean_dec_ref(v_k_875_);
lean_dec_ref(v_vals_872_);
lean_dec_ref(v_keys_871_);
v_r_877_ = lean_box(v_res_876_);
return v_r_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(lean_object* v_attr_878_, lean_object* v_env_879_, lean_object* v_parserDecl_880_){
_start:
{
lean_object* v_ext_881_; lean_object* v_toEnvExtension_882_; lean_object* v_asyncMode_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v_ext_881_ = lean_ctor_get(v_attr_878_, 1);
v_toEnvExtension_882_ = lean_ctor_get(v_ext_881_, 0);
v_asyncMode_883_ = lean_ctor_get(v_toEnvExtension_882_, 2);
v___x_884_ = lean_box(1);
v___x_885_ = lean_box(0);
v___x_886_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_884_, v_ext_881_, v_env_879_, v_asyncMode_883_, v___x_885_);
v___x_887_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_886_, v_parserDecl_880_);
lean_dec(v___x_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f___boxed(lean_object* v_attr_888_, lean_object* v_env_889_, lean_object* v_parserDecl_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(v_attr_888_, v_env_889_, v_parserDecl_890_);
lean_dec(v_parserDecl_890_);
lean_dec_ref(v_attr_888_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(lean_object* v_attr_892_, lean_object* v_env_893_, lean_object* v_parserDecl_894_, lean_object* v_decl_895_){
_start:
{
lean_object* v_ext_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_907_; 
v_ext_896_ = lean_ctor_get(v_attr_892_, 1);
v_isSharedCheck_907_ = !lean_is_exclusive(v_attr_892_);
if (v_isSharedCheck_907_ == 0)
{
lean_object* v_unused_908_; 
v_unused_908_ = lean_ctor_get(v_attr_892_, 0);
lean_dec(v_unused_908_);
v___x_898_ = v_attr_892_;
v_isShared_899_ = v_isSharedCheck_907_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_ext_896_);
lean_dec(v_attr_892_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_907_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v_toEnvExtension_900_; lean_object* v_asyncMode_901_; lean_object* v___x_903_; 
v_toEnvExtension_900_ = lean_ctor_get(v_ext_896_, 0);
v_asyncMode_901_ = lean_ctor_get(v_toEnvExtension_900_, 2);
lean_inc(v_asyncMode_901_);
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 1, v_decl_895_);
lean_ctor_set(v___x_898_, 0, v_parserDecl_894_);
v___x_903_ = v___x_898_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_parserDecl_894_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_decl_895_);
v___x_903_ = v_reuseFailAlloc_906_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = lean_box(0);
v___x_905_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_896_, v_env_893_, v___x_903_, v_asyncMode_901_, v___x_904_);
lean_dec(v_asyncMode_901_);
return v___x_905_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(lean_object* v_x_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
if (lean_obj_tag(v_x_909_) == 0)
{
lean_object* v_a_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v_a_913_ = lean_ctor_get(v_x_909_, 0);
lean_inc(v_a_913_);
lean_dec_ref(v_x_909_);
v___x_914_ = l_Lean_stringToMessageData(v_a_913_);
v___x_915_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v___x_914_, v___y_910_, v___y_911_);
return v___x_915_;
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
v_a_916_ = lean_ctor_get(v_x_909_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v_x_909_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v_x_909_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v_x_909_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
lean_ctor_set_tag(v___x_918_, 0);
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg___boxed(lean_object* v_x_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v_x_924_, v___y_925_, v___y_926_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
return v_res_928_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_929_ = lean_box(0);
v___x_930_ = l_Lean_Elab_abortCommandExceptionId;
v___x_931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
lean_ctor_set(v___x_931_, 1, v___x_929_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_933_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0);
v___x_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___boxed(lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(lean_object* v_constName_937_, uint8_t v_checkMeta_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v___x_942_; lean_object* v_env_943_; uint8_t v___x_944_; 
v___x_942_ = lean_st_ref_get(v___y_940_);
v_env_943_ = lean_ctor_get(v___x_942_, 0);
lean_inc_ref(v_env_943_);
lean_dec(v___x_942_);
lean_inc(v_constName_937_);
v___x_944_ = lean_has_compile_error(v_env_943_, v_constName_937_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; lean_object* v_env_946_; lean_object* v_options_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_945_ = lean_st_ref_get(v___y_940_);
v_env_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc_ref(v_env_946_);
lean_dec(v___x_945_);
v_options_947_ = lean_ctor_get(v___y_939_, 2);
v___x_948_ = l_Lean_Environment_evalConst___redArg(v_env_946_, v_options_947_, v_constName_937_, v_checkMeta_938_);
lean_dec(v_constName_937_);
lean_dec_ref(v_env_946_);
v___x_949_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v___x_948_, v___y_939_, v___y_940_);
return v___x_949_;
}
else
{
lean_object* v___x_950_; 
v___x_950_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v___x_951_; lean_object* v_env_952_; lean_object* v_options_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
lean_dec_ref(v___x_950_);
v___x_951_ = lean_st_ref_get(v___y_940_);
v_env_952_ = lean_ctor_get(v___x_951_, 0);
lean_inc_ref(v_env_952_);
lean_dec(v___x_951_);
v_options_953_ = lean_ctor_get(v___y_939_, 2);
v___x_954_ = l_Lean_Environment_evalConst___redArg(v_env_952_, v_options_953_, v_constName_937_, v_checkMeta_938_);
lean_dec(v_constName_937_);
lean_dec_ref(v_env_952_);
v___x_955_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v___x_954_, v___y_939_, v___y_940_);
return v___x_955_;
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_dec(v_constName_937_);
v_a_956_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_950_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_950_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg___boxed(lean_object* v_constName_964_, lean_object* v_checkMeta_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
uint8_t v_checkMeta_boxed_969_; lean_object* v_res_970_; 
v_checkMeta_boxed_969_ = lean_unbox(v_checkMeta_965_);
v_res_970_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(v_constName_964_, v_checkMeta_boxed_969_, v___y_966_, v___y_967_);
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
return v_res_970_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = ((lean_object*)(l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0));
v___x_973_ = l_Lean_stringToMessageData(v___x_972_);
return v___x_973_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = ((lean_object*)(l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2));
v___x_976_ = l_Lean_stringToMessageData(v___x_975_);
return v___x_976_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5(void){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = ((lean_object*)(l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4));
v___x_979_ = l_Lean_stringToMessageData(v___x_978_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(lean_object* v_attr_980_, lean_object* v_parserDecl_981_, lean_object* v_a_982_, lean_object* v_a_983_){
_start:
{
lean_object* v___x_985_; lean_object* v_env_986_; lean_object* v___x_987_; 
v___x_985_ = lean_st_ref_get(v_a_983_);
v_env_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc_ref(v_env_986_);
lean_dec(v___x_985_);
v___x_987_ = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(v_attr_980_, v_env_986_, v_parserDecl_981_);
if (lean_obj_tag(v___x_987_) == 1)
{
lean_object* v_val_988_; uint8_t v___x_989_; lean_object* v___x_990_; 
lean_dec(v_parserDecl_981_);
lean_dec_ref(v_attr_980_);
v_val_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_val_988_);
lean_dec_ref(v___x_987_);
v___x_989_ = 1;
v___x_990_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(v_val_988_, v___x_989_, v_a_982_, v_a_983_);
return v___x_990_;
}
else
{
lean_object* v_impl_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1009_; 
lean_dec(v___x_987_);
v_impl_991_ = lean_ctor_get(v_attr_980_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v_attr_980_);
if (v_isSharedCheck_1009_ == 0)
{
lean_object* v_unused_1010_; 
v_unused_1010_ = lean_ctor_get(v_attr_980_, 1);
lean_dec(v_unused_1010_);
v___x_993_ = v_attr_980_;
v_isShared_994_ = v_isSharedCheck_1009_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_impl_991_);
lean_dec(v_attr_980_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1009_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v_toAttributeImplCore_995_; lean_object* v_name_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_1000_; 
v_toAttributeImplCore_995_ = lean_ctor_get(v_impl_991_, 0);
lean_inc_ref(v_toAttributeImplCore_995_);
lean_dec_ref(v_impl_991_);
v_name_996_ = lean_ctor_get(v_toAttributeImplCore_995_, 1);
lean_inc(v_name_996_);
lean_dec_ref(v_toAttributeImplCore_995_);
v___x_997_ = lean_obj_once(&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1, &l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1_once, _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1);
v___x_998_ = l_Lean_MessageData_ofName(v_name_996_);
if (v_isShared_994_ == 0)
{
lean_ctor_set_tag(v___x_993_, 7);
lean_ctor_set(v___x_993_, 1, v___x_998_);
lean_ctor_set(v___x_993_, 0, v___x_997_);
v___x_1000_ = v___x_993_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_997_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v___x_998_);
v___x_1000_ = v_reuseFailAlloc_1008_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1001_ = lean_obj_once(&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3, &l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3_once, _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3);
v___x_1002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1000_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___x_1003_ = l_Lean_MessageData_ofName(v_parserDecl_981_);
v___x_1004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1002_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
v___x_1005_ = lean_obj_once(&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5, &l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5_once, _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5);
v___x_1006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v___x_1006_, v_a_982_, v_a_983_);
return v___x_1007_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___boxed(lean_object* v_attr_1011_, lean_object* v_parserDecl_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(v_attr_1011_, v_parserDecl_1012_, v_a_1013_, v_a_1014_);
lean_dec(v_a_1014_);
lean_dec_ref(v_a_1013_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor(lean_object* v_00_u03b1_1017_, lean_object* v_attr_1018_, lean_object* v_parserDecl_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(v_attr_1018_, v_parserDecl_1019_, v_a_1020_, v_a_1021_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___boxed(lean_object* v_00_u03b1_1024_, lean_object* v_attr_1025_, lean_object* v_parserDecl_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor(v_00_u03b1_1024_, v_attr_1025_, v_parserDecl_1026_, v_a_1027_, v_a_1028_);
lean_dec(v_a_1028_);
lean_dec_ref(v_a_1027_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1(lean_object* v_00_u03b1_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v___x_1035_; 
v___x_1035_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1(v_00_u03b1_1036_, v___y_1037_, v___y_1038_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0(lean_object* v_00_u03b1_1041_, lean_object* v_constName_1042_, uint8_t v_checkMeta_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(v_constName_1042_, v_checkMeta_1043_, v___y_1044_, v___y_1045_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___boxed(lean_object* v_00_u03b1_1048_, lean_object* v_constName_1049_, lean_object* v_checkMeta_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
uint8_t v_checkMeta_boxed_1054_; lean_object* v_res_1055_; 
v_checkMeta_boxed_1054_ = lean_unbox(v_checkMeta_1050_);
v_res_1055_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0(v_00_u03b1_1048_, v_constName_1049_, v_checkMeta_boxed_1054_, v___y_1051_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0(lean_object* v_00_u03b1_1056_, lean_object* v_x_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v_x_1057_, v___y_1058_, v___y_1059_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1062_, lean_object* v_x_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0(v_00_u03b1_1062_, v_x_1063_, v___y_1064_, v___y_1065_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
return v_res_1067_;
}
}
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ParserCompiler_Attribute(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default = _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default();
lean_mark_persistent(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default);
l_Lean_ParserCompiler_instInhabitedCombinatorAttribute = _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute();
lean_mark_persistent(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ParserCompiler_Attribute(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1 = _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1();
lean_mark_persistent(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ParserCompiler_Attribute(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ParserCompiler_Attribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ParserCompiler_Attribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ParserCompiler_Attribute(builtin);
}
#ifdef __cplusplus
}
#endif
