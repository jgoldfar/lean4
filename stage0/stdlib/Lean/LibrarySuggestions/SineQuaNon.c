// Lean compiler output
// Module: Lean.LibrarySuggestions.SineQuaNon
// Imports: import all Lean.LibrarySuggestions.SymbolFrequency public import Lean.LibrarySuggestions.Basic
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
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_LibrarySuggestions_symbolFrequency___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
double log2(double);
double lean_float_mul(double, double);
double lean_float_add(double, double);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_float_decLe(double, double);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_float_decLt(double, double);
uint8_t l_Lean_Name_cmp(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_LibrarySuggestions_localSymbolFrequency(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Expr_relevantConstants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_NameSet_ofList(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
double lean_float_div(double, double);
extern double l_instInhabitedFloat;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_LibrarySuggestions_localSymbolFrequency_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LibrarySuggestions_isDeniedPremise(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_wasOriginallyTheorem(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_find_x3f___redArg(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Std_TreeSet_ofList___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minKey_x3f___redArg(lean_object*);
lean_object* lean_float_to_string(double);
lean_object* l_Lean_MessageData_paren(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MVarId_getRelevantConstants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "sineQuaNon"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(122, 185, 152, 73, 17, 171, 191, 97)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LibrarySuggestions"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(213, 41, 69, 6, 132, 216, 128, 143)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "SineQuaNon"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(254, 236, 141, 171, 37, 237, 130, 23)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(71, 138, 216, 27, 188, 215, 0, 227)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__11_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 163, 215, 161, 139, 219, 70, 207)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__11_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__11_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__12_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__11_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 92, 188, 202, 182, 14, 162, 68)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__12_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__12_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__13_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__12_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(222, 75, 41, 251, 122, 192, 198, 247)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__13_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__13_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__14_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__14_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__14_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__15_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__13_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__14_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 202, 192, 175, 252, 76, 110, 228)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__15_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__15_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__16_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__16_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__16_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__17_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__15_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__16_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 207, 10, 35, 144, 86, 172, 144)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__17_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__17_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__18_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__17_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 78, 188, 222, 71, 65, 95, 208)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__18_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__18_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__19_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__18_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 225, 145, 21, 9, 28, 253, 246)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__19_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__19_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__20_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__19_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 141, 194, 71, 28, 184, 49, 203)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__20_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__20_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__23_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__23_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__24_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__24_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__24_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__25_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__25_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_insert, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "triggerDenyListExt"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(33, 7, 235, 60, 247, 182, 234, 218)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 203, 221, 11, 114, 77, 246, 64)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 163, 76, 234, 183, 187, 142, 99)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__11_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__11_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__11_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__12_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__12_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__12_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__11_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__12_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__12_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__13_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__13_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__13_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__14_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__14_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__14_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__15_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__13_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__15_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__15_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__14_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__15_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__15_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__16_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "GE"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__16_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__16_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__17_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ge"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__17_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__17_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__18_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__16_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(74, 169, 4, 72, 62, 21, 91, 24)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__18_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__18_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__17_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(71, 88, 92, 156, 129, 215, 23, 77)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__18_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__18_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__19_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "GT"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__19_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__19_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__20_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__20_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__20_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__19_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(240, 16, 15, 58, 66, 186, 138, 31)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__20_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(239, 75, 137, 103, 59, 22, 209, 130)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__23_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__23_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__23_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__24_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__24_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__24_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__23_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(208, 215, 171, 150, 192, 180, 249, 22)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__24_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__24_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__25_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__25_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__25_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__25_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 26, 8, 228, 104, 32, 82, 85)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__27_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__27_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__27_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__28_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__28_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__28_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__27_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 191, 239, 225, 113, 224, 109, 182)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__28_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__28_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__29_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "xor"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__29_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__29_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__30_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__30_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__30_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__29_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 35, 146, 118, 24, 65, 174, 144)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__30_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__30_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__31_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__31_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__31_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__32_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__32_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__32_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__31_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__32_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__32_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__33_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__33_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__33_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__34_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__34_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__34_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__33_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__34_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__34_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__35_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__35_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__35_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__36_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__35_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__36_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__36_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__37_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__37_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__37_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__38_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__37_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__38_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__38_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__39_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__39_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__39_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__40_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__39_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__40_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__40_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__41_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Xor"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__41_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__41_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__42_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__41_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(59, 232, 165, 211, 128, 35, 249, 51)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__42_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__42_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__43_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__43_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__43_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__44_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__43_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__44_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__44_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__45_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__45_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__45_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__46_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__45_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__46_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__46_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__47_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__47_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__47_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__48_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__47_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__48_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__48_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__49_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__49_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__49_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__50_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__49_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__50_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__50_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__51_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__51_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__51_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__52_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__49_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__52_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__52_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__51_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__52_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__52_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__53_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SizeOf"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__53_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__53_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__54_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__53_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(65, 190, 244, 45, 165, 196, 61, 198)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__54_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__54_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__55_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sizeOf"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__55_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__55_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__56_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__53_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(65, 190, 244, 45, 165, 196, 61, 198)}};
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__56_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__56_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__55_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(151, 205, 72, 249, 57, 72, 20, 171)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__56_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__56_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__57_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__56_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__57_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__57_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__58_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__54_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__57_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__58_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__58_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__59_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__52_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__58_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__59_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__59_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__60_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__50_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__59_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__60_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__60_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__61_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__48_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__60_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__61_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__61_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__62_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__46_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__61_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__62_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__62_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__63_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__44_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__62_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__63_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__63_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__64_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__42_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__63_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__64_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__64_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__65_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__40_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__64_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__65_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__65_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__66_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__38_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__65_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__66_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__66_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__67_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__36_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__66_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__67_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__67_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__68_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__34_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__67_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__68_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__68_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__69_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__32_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__68_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__69_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__69_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__70_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__30_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__69_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__70_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__70_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__71_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__28_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__70_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__71_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__71_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__72_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__71_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__72_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__72_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__73_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__24_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__72_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__73_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__73_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__74_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__73_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__74_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__74_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__75_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__18_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__74_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__75_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__75_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__76_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__15_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__75_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__76_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__76_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__77_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__12_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__76_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__77_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__77_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__78_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__77_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__78_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__78_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__79_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__78_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__79_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__79_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__80_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__79_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__80_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__80_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__value;
static lean_once_cell_t l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__81_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__81_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__82_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__82_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__83_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__83_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerDenyListExt;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1_spec__2(double, double, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1(double, double, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT double l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__2(lean_object*, size_t, size_t, double);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols(lean_object*, double, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__0 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__0_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__1 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__1_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__2 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__2_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__3_value_aux_0),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__3_value_aux_1),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__3_value_aux_2),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__3 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__3_value;
static const lean_array_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__5 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__5_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__6_value_aux_0),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__6_value_aux_1),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__6_value_aux_2),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__6 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__6_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__7 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__7_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__8 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__8_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__9 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__9_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__10_value_aux_0),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__10_value_aux_1),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__10_value_aux_2),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__9_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__10 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__10_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__11;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__12;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__13 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__13_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__14 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__14_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__15_value_aux_0),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__15_value_aux_1),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__13_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__15_value_aux_2),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__14_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__15 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__15_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__16 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__16_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__17_value_aux_0),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__17_value_aux_1),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__13_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__17_value_aux_2),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__16_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__17 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__17_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__18 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__18_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__19;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__20;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__21 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__21_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__21_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__22 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__22_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__23 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__23_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__24;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__25;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__26;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__27;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__28;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__29;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__30;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__31;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_≤_"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__32 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__32_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__32_value),LEAN_SCALAR_PTR_LITERAL(111, 3, 61, 112, 38, 138, 106, 121)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__33 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__33_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cdot"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__34 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__34_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__35_value_aux_0),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__35_value_aux_1),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__13_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__35_value_aux_2),((lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__34_value),LEAN_SCALAR_PTR_LITERAL(215, 94, 65, 66, 49, 100, 151, 85)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__35 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__35_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "·"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__36 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__36_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__37;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__38;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__39;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__40;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__41;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "≤"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__42 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__42_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__43;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__44;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__45;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__46;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__47;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__48 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__48_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__49;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__50;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__51;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__52;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__53;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__54;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__55;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__56;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__57;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__58;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__59;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___closed__0 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger(lean_object*, lean_object*, lean_object*, double);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__2(double, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers___closed__0 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers(lean_object*, double, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___lam__0(lean_object*, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___closed__0_value;
static const lean_array_object l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__0;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "sine qua non premise selection extension"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "sineQueNon"};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(67, 84, 59, 241, 113, 198, 42, 47)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
static const lean_array_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value),((lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt;
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_228879371____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_228879371____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersRef;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_filterMapTR_go___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean___closed__0 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean___closed__0_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg(lean_object*, double, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore(lean_object*, double, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3___redArg(double, double, double, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__1_value;
static lean_once_cell_t l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__2;
static lean_once_cell_t l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__3;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__4(double, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "acceptedTheorems: "};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__0 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__0_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__1;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\npastTriggers: "};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__2 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__2_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__3;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\ntriggerQueue: "};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__4 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__4_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__5;
static const lean_string_object l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "\nqueuedTheorems: "};
static const lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__6 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__6_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go(lean_object*, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3(double, double, double, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNon(lean_object*, lean_object*, double, double, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_sineQuaNonSelector(double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_sineQuaNonSelector___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = lean_unsigned_to_nat(4180265299u);
v___x_50_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__20_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_));
v___x_51_ = l_Lean_Name_num___override(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__23_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__22_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_));
v___x_54_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__21_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_);
v___x_55_ = l_Lean_Name_str___override(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__25_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__24_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_));
v___x_58_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__23_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__23_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__23_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_);
v___x_59_ = l_Lean_Name_str___override(v___x_58_, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_unsigned_to_nat(2u);
v___x_61_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__25_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__25_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__25_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_);
v___x_62_ = l_Lean_Name_num___override(v___x_61_, v___x_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_64_; uint8_t v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_64_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_));
v___x_65_ = 0;
v___x_66_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2__once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__26_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_);
v___x_67_ = l_Lean_registerTraceClass(v___x_64_, v___x_65_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2____boxed(lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_();
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_(lean_object* v_es_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_array_mk(v_es_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_72_, size_t v_i_73_, size_t v_stop_74_, lean_object* v_b_75_){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = lean_usize_dec_eq(v_i_73_, v_stop_74_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; size_t v___x_79_; size_t v___x_80_; 
v___x_77_ = lean_array_uget_borrowed(v_as_72_, v_i_73_);
lean_inc(v___x_77_);
v___x_78_ = l_Lean_NameSet_insert(v_b_75_, v___x_77_);
v___x_79_ = ((size_t)1ULL);
v___x_80_ = lean_usize_add(v_i_73_, v___x_79_);
v_i_73_ = v___x_80_;
v_b_75_ = v___x_78_;
goto _start;
}
else
{
return v_b_75_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_82_, lean_object* v_i_83_, lean_object* v_stop_84_, lean_object* v_b_85_){
_start:
{
size_t v_i_boxed_86_; size_t v_stop_boxed_87_; lean_object* v_res_88_; 
v_i_boxed_86_ = lean_unbox_usize(v_i_83_);
lean_dec(v_i_83_);
v_stop_boxed_87_ = lean_unbox_usize(v_stop_84_);
lean_dec(v_stop_84_);
v_res_88_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__0(v_as_82_, v_i_boxed_86_, v_stop_boxed_87_, v_b_85_);
lean_dec_ref(v_as_82_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_as_89_, size_t v_i_90_, size_t v_stop_91_, lean_object* v_b_92_){
_start:
{
lean_object* v___y_94_; uint8_t v___x_98_; 
v___x_98_ = lean_usize_dec_eq(v_i_90_, v_stop_91_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_99_ = lean_array_uget_borrowed(v_as_89_, v_i_90_);
v___x_100_ = lean_unsigned_to_nat(0u);
v___x_101_ = lean_array_get_size(v___x_99_);
v___x_102_ = lean_nat_dec_lt(v___x_100_, v___x_101_);
if (v___x_102_ == 0)
{
v___y_94_ = v_b_92_;
goto v___jp_93_;
}
else
{
uint8_t v___x_103_; 
v___x_103_ = lean_nat_dec_le(v___x_101_, v___x_101_);
if (v___x_103_ == 0)
{
if (v___x_102_ == 0)
{
v___y_94_ = v_b_92_;
goto v___jp_93_;
}
else
{
size_t v___x_104_; size_t v___x_105_; lean_object* v___x_106_; 
v___x_104_ = ((size_t)0ULL);
v___x_105_ = lean_usize_of_nat(v___x_101_);
v___x_106_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__0(v___x_99_, v___x_104_, v___x_105_, v_b_92_);
v___y_94_ = v___x_106_;
goto v___jp_93_;
}
}
else
{
size_t v___x_107_; size_t v___x_108_; lean_object* v___x_109_; 
v___x_107_ = ((size_t)0ULL);
v___x_108_ = lean_usize_of_nat(v___x_101_);
v___x_109_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__0(v___x_99_, v___x_107_, v___x_108_, v_b_92_);
v___y_94_ = v___x_109_;
goto v___jp_93_;
}
}
}
else
{
return v_b_92_;
}
v___jp_93_:
{
size_t v___x_95_; size_t v___x_96_; 
v___x_95_ = ((size_t)1ULL);
v___x_96_ = lean_usize_add(v_i_90_, v___x_95_);
v_i_90_ = v___x_96_;
v_b_92_ = v___y_94_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_as_110_, lean_object* v_i_111_, lean_object* v_stop_112_, lean_object* v_b_113_){
_start:
{
size_t v_i_boxed_114_; size_t v_stop_boxed_115_; lean_object* v_res_116_; 
v_i_boxed_114_ = lean_unbox_usize(v_i_111_);
lean_dec(v_i_111_);
v_stop_boxed_115_ = lean_unbox_usize(v_stop_112_);
lean_dec(v_stop_112_);
v_res_116_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__1(v_as_110_, v_i_boxed_114_, v_stop_boxed_115_, v_b_113_);
lean_dec_ref(v_as_110_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0(lean_object* v_initState_117_, lean_object* v_as_118_){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_array_get_size(v_as_118_);
v___x_121_ = lean_nat_dec_lt(v___x_119_, v___x_120_);
if (v___x_121_ == 0)
{
return v_initState_117_;
}
else
{
uint8_t v___x_122_; 
v___x_122_ = lean_nat_dec_le(v___x_120_, v___x_120_);
if (v___x_122_ == 0)
{
if (v___x_121_ == 0)
{
return v_initState_117_;
}
else
{
size_t v___x_123_; size_t v___x_124_; lean_object* v___x_125_; 
v___x_123_ = ((size_t)0ULL);
v___x_124_ = lean_usize_of_nat(v___x_120_);
v___x_125_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__1(v_as_118_, v___x_123_, v___x_124_, v_initState_117_);
return v___x_125_;
}
}
else
{
size_t v___x_126_; size_t v___x_127_; lean_object* v___x_128_; 
v___x_126_ = ((size_t)0ULL);
v___x_127_ = lean_usize_of_nat(v___x_120_);
v___x_128_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0_spec__1(v_as_118_, v___x_126_, v___x_127_, v_initState_117_);
return v___x_128_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0___boxed(lean_object* v_initState_129_, lean_object* v_as_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0(v_initState_129_, v_as_130_);
lean_dec_ref(v_as_130_);
return v_res_131_;
}
}
static lean_object* _init_l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__81_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = ((lean_object*)(l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__80_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_));
v___x_303_ = l_Lean_NameSet_ofList(v___x_302_);
return v___x_303_;
}
}
static lean_object* _init_l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__82_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_obj_once(&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__81_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_, &l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__81_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__once, _init_l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__81_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_);
v___x_305_ = lean_alloc_closure((void*)(l_Lean_mkStateFromImportedEntries___at___00Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__spec__0___boxed), 2, 1);
lean_closure_set(v___x_305_, 0, v___x_304_);
return v___x_305_;
}
}
static lean_object* _init_l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__83_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___f_308_; lean_object* v___x_309_; lean_object* v___f_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_306_ = lean_box(2);
v___x_307_ = lean_box(0);
v___f_308_ = ((lean_object*)(l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_));
v___x_309_ = lean_obj_once(&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__82_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_, &l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__82_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__once, _init_l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__82_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_);
v___f_310_ = ((lean_object*)(l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_));
v___x_311_ = ((lean_object*)(l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_));
v___x_312_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
lean_ctor_set(v___x_312_, 1, v___f_310_);
lean_ctor_set(v___x_312_, 2, v___x_309_);
lean_ctor_set(v___x_312_, 3, v___f_308_);
lean_ctor_set(v___x_312_, 4, v___x_307_);
lean_ctor_set(v___x_312_, 5, v___x_306_);
lean_ctor_set(v___x_312_, 6, v___x_307_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_obj_once(&l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__83_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_, &l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__83_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2__once, _init_l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__83_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_);
v___x_315_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2____boxed(lean_object* v_a_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_();
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1_spec__2(double v___y_318_, double v_maxTolerance_319_, lean_object* v_as_320_, size_t v_i_321_, size_t v_stop_322_, lean_object* v_b_323_){
_start:
{
lean_object* v___y_325_; uint8_t v___x_329_; 
v___x_329_ = lean_usize_dec_eq(v_i_321_, v_stop_322_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; lean_object* v_fst_331_; lean_object* v_snd_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_346_; 
v___x_330_ = lean_array_uget(v_as_320_, v_i_321_);
v_fst_331_ = lean_ctor_get(v___x_330_, 0);
v_snd_332_ = lean_ctor_get(v___x_330_, 1);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_346_ == 0)
{
v___x_334_ = v___x_330_;
v_isShared_335_ = v_isSharedCheck_346_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_snd_332_);
lean_inc(v_fst_331_);
lean_dec(v___x_330_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_346_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
double v___x_336_; double v___x_337_; uint8_t v___x_338_; 
v___x_336_ = lean_float_mul(v___y_318_, v_maxTolerance_319_);
v___x_337_ = lean_unbox_float(v_snd_332_);
v___x_338_ = lean_float_decLe(v___x_337_, v___x_336_);
if (v___x_338_ == 0)
{
lean_del_object(v___x_334_);
lean_dec(v_snd_332_);
lean_dec(v_fst_331_);
v___y_325_ = v_b_323_;
goto v___jp_324_;
}
else
{
double v___x_339_; double v___x_340_; lean_object* v___x_341_; lean_object* v___x_343_; 
v___x_339_ = lean_unbox_float(v_snd_332_);
lean_dec(v_snd_332_);
v___x_340_ = lean_float_div(v___x_339_, v___y_318_);
v___x_341_ = lean_box_float(v___x_340_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 1, v___x_341_);
v___x_343_ = v___x_334_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_fst_331_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v___x_341_);
v___x_343_ = v_reuseFailAlloc_345_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
lean_object* v___x_344_; 
v___x_344_ = lean_array_push(v_b_323_, v___x_343_);
v___y_325_ = v___x_344_;
goto v___jp_324_;
}
}
}
}
else
{
return v_b_323_;
}
v___jp_324_:
{
size_t v___x_326_; size_t v___x_327_; 
v___x_326_ = ((size_t)1ULL);
v___x_327_ = lean_usize_add(v_i_321_, v___x_326_);
v_i_321_ = v___x_327_;
v_b_323_ = v___y_325_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1_spec__2___boxed(lean_object* v___y_347_, lean_object* v_maxTolerance_348_, lean_object* v_as_349_, lean_object* v_i_350_, lean_object* v_stop_351_, lean_object* v_b_352_){
_start:
{
double v___y_2993__boxed_353_; double v_maxTolerance_boxed_354_; size_t v_i_boxed_355_; size_t v_stop_boxed_356_; lean_object* v_res_357_; 
v___y_2993__boxed_353_ = lean_unbox_float(v___y_347_);
lean_dec_ref(v___y_347_);
v_maxTolerance_boxed_354_ = lean_unbox_float(v_maxTolerance_348_);
lean_dec_ref(v_maxTolerance_348_);
v_i_boxed_355_ = lean_unbox_usize(v_i_350_);
lean_dec(v_i_350_);
v_stop_boxed_356_ = lean_unbox_usize(v_stop_351_);
lean_dec(v_stop_351_);
v_res_357_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1_spec__2(v___y_2993__boxed_353_, v_maxTolerance_boxed_354_, v_as_349_, v_i_boxed_355_, v_stop_boxed_356_, v_b_352_);
lean_dec_ref(v_as_349_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1(double v___y_360_, double v_maxTolerance_361_, lean_object* v_as_362_, lean_object* v_start_363_, lean_object* v_stop_364_){
_start:
{
lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_365_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1___closed__0));
v___x_366_ = lean_nat_dec_lt(v_start_363_, v_stop_364_);
if (v___x_366_ == 0)
{
return v___x_365_;
}
else
{
lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_367_ = lean_array_get_size(v_as_362_);
v___x_368_ = lean_nat_dec_le(v_stop_364_, v___x_367_);
if (v___x_368_ == 0)
{
uint8_t v___x_369_; 
v___x_369_ = lean_nat_dec_lt(v_start_363_, v___x_367_);
if (v___x_369_ == 0)
{
return v___x_365_;
}
else
{
size_t v___x_370_; size_t v___x_371_; lean_object* v___x_372_; 
v___x_370_ = lean_usize_of_nat(v_start_363_);
v___x_371_ = lean_usize_of_nat(v___x_367_);
v___x_372_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1_spec__2(v___y_360_, v_maxTolerance_361_, v_as_362_, v___x_370_, v___x_371_, v___x_365_);
return v___x_372_;
}
}
else
{
size_t v___x_373_; size_t v___x_374_; lean_object* v___x_375_; 
v___x_373_ = lean_usize_of_nat(v_start_363_);
v___x_374_ = lean_usize_of_nat(v_stop_364_);
v___x_375_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1_spec__2(v___y_360_, v_maxTolerance_361_, v_as_362_, v___x_373_, v___x_374_, v___x_365_);
return v___x_375_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1___boxed(lean_object* v___y_376_, lean_object* v_maxTolerance_377_, lean_object* v_as_378_, lean_object* v_start_379_, lean_object* v_stop_380_){
_start:
{
double v___y_3046__boxed_381_; double v_maxTolerance_boxed_382_; lean_object* v_res_383_; 
v___y_3046__boxed_381_ = lean_unbox_float(v___y_376_);
lean_dec_ref(v___y_376_);
v_maxTolerance_boxed_382_ = lean_unbox_float(v_maxTolerance_377_);
lean_dec_ref(v_maxTolerance_377_);
v_res_383_ = l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1(v___y_3046__boxed_381_, v_maxTolerance_boxed_382_, v_as_378_, v_start_379_, v_stop_380_);
lean_dec(v_stop_380_);
lean_dec(v_start_379_);
lean_dec_ref(v_as_378_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0_spec__0(lean_object* v___x_384_, lean_object* v_as_385_, size_t v_i_386_, size_t v_stop_387_, lean_object* v_b_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_a_395_; uint8_t v___x_399_; 
v___x_399_ = lean_usize_dec_eq(v_i_386_, v_stop_387_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_400_ = lean_array_uget_borrowed(v_as_385_, v_i_386_);
v___x_401_ = l_Lean_NameSet_contains(v___x_384_, v___x_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; 
v___x_402_ = l_Lean_LibrarySuggestions_symbolFrequency___redArg(v___x_400_, v___y_392_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_404_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref(v___x_402_);
v___x_404_ = l_Lean_LibrarySuggestions_localSymbolFrequency(v___x_400_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v___x_406_; lean_object* v___x_407_; uint8_t v___x_408_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
lean_inc(v_a_405_);
lean_dec_ref(v___x_404_);
v___x_406_ = lean_nat_add(v_a_403_, v_a_405_);
lean_dec(v_a_405_);
lean_dec(v_a_403_);
v___x_407_ = lean_unsigned_to_nat(0u);
v___x_408_ = lean_nat_dec_eq(v___x_406_, v___x_407_);
if (v___x_408_ == 0)
{
double v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_409_ = lean_float_of_nat(v___x_406_);
v___x_410_ = lean_box_float(v___x_409_);
lean_inc(v___x_400_);
v___x_411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_400_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
v___x_412_ = lean_array_push(v_b_388_, v___x_411_);
v_a_395_ = v___x_412_;
goto v___jp_394_;
}
else
{
lean_dec(v___x_406_);
v_a_395_ = v_b_388_;
goto v___jp_394_;
}
}
else
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
lean_dec(v_a_403_);
lean_dec_ref(v_b_388_);
v_a_413_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_404_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_404_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_413_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
}
else
{
lean_object* v_a_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
lean_dec_ref(v_b_388_);
v_a_421_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_428_ == 0)
{
v___x_423_ = v___x_402_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_a_421_);
lean_dec(v___x_402_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_421_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
else
{
v_a_395_ = v_b_388_;
goto v___jp_394_;
}
}
else
{
lean_object* v___x_429_; 
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v_b_388_);
return v___x_429_;
}
v___jp_394_:
{
size_t v___x_396_; size_t v___x_397_; 
v___x_396_ = ((size_t)1ULL);
v___x_397_ = lean_usize_add(v_i_386_, v___x_396_);
v_i_386_ = v___x_397_;
v_b_388_ = v_a_395_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0_spec__0___boxed(lean_object* v___x_430_, lean_object* v_as_431_, lean_object* v_i_432_, lean_object* v_stop_433_, lean_object* v_b_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
size_t v_i_boxed_440_; size_t v_stop_boxed_441_; lean_object* v_res_442_; 
v_i_boxed_440_ = lean_unbox_usize(v_i_432_);
lean_dec(v_i_432_);
v_stop_boxed_441_ = lean_unbox_usize(v_stop_433_);
lean_dec(v_stop_433_);
v_res_442_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0_spec__0(v___x_430_, v_as_431_, v_i_boxed_440_, v_stop_boxed_441_, v_b_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec_ref(v_as_431_);
lean_dec(v___x_430_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0(lean_object* v___x_443_, lean_object* v_as_444_, lean_object* v_start_445_, lean_object* v_stop_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_452_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1___closed__0));
v___x_453_ = lean_nat_dec_lt(v_start_445_, v_stop_446_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
v___x_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_454_, 0, v___x_452_);
return v___x_454_;
}
else
{
lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_455_ = lean_array_get_size(v_as_444_);
v___x_456_ = lean_nat_dec_le(v_stop_446_, v___x_455_);
if (v___x_456_ == 0)
{
uint8_t v___x_457_; 
v___x_457_ = lean_nat_dec_lt(v_start_445_, v___x_455_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
v___x_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_458_, 0, v___x_452_);
return v___x_458_;
}
else
{
size_t v___x_459_; size_t v___x_460_; lean_object* v___x_461_; 
v___x_459_ = lean_usize_of_nat(v_start_445_);
v___x_460_ = lean_usize_of_nat(v___x_455_);
v___x_461_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0_spec__0(v___x_443_, v_as_444_, v___x_459_, v___x_460_, v___x_452_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
return v___x_461_;
}
}
else
{
size_t v___x_462_; size_t v___x_463_; lean_object* v___x_464_; 
v___x_462_ = lean_usize_of_nat(v_start_445_);
v___x_463_ = lean_usize_of_nat(v_stop_446_);
v___x_464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0_spec__0(v___x_443_, v_as_444_, v___x_462_, v___x_463_, v___x_452_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
return v___x_464_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0___boxed(lean_object* v___x_465_, lean_object* v_as_466_, lean_object* v_start_467_, lean_object* v_stop_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0(v___x_465_, v_as_466_, v_start_467_, v_stop_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
lean_dec(v___y_470_);
lean_dec_ref(v___y_469_);
lean_dec(v_stop_468_);
lean_dec(v_start_467_);
lean_dec_ref(v_as_466_);
lean_dec(v___x_465_);
return v_res_474_;
}
}
LEAN_EXPORT double l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__2(lean_object* v_as_475_, size_t v_i_476_, size_t v_stop_477_, double v_b_478_){
_start:
{
double v___y_480_; uint8_t v___x_484_; 
v___x_484_ = lean_usize_dec_eq(v_i_476_, v_stop_477_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; lean_object* v_snd_486_; double v___x_487_; uint8_t v___x_488_; 
v___x_485_ = lean_array_uget_borrowed(v_as_475_, v_i_476_);
v_snd_486_ = lean_ctor_get(v___x_485_, 1);
v___x_487_ = lean_unbox_float(v_snd_486_);
v___x_488_ = lean_float_decLe(v_b_478_, v___x_487_);
if (v___x_488_ == 0)
{
double v___x_489_; 
v___x_489_ = lean_unbox_float(v_snd_486_);
v___y_480_ = v___x_489_;
goto v___jp_479_;
}
else
{
v___y_480_ = v_b_478_;
goto v___jp_479_;
}
}
else
{
return v_b_478_;
}
v___jp_479_:
{
size_t v___x_481_; size_t v___x_482_; 
v___x_481_ = ((size_t)1ULL);
v___x_482_ = lean_usize_add(v_i_476_, v___x_481_);
v_i_476_ = v___x_482_;
v_b_478_ = v___y_480_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__2___boxed(lean_object* v_as_490_, lean_object* v_i_491_, lean_object* v_stop_492_, lean_object* v_b_493_){
_start:
{
size_t v_i_boxed_494_; size_t v_stop_boxed_495_; double v_b_boxed_496_; double v_res_497_; lean_object* v_r_498_; 
v_i_boxed_494_ = lean_unbox_usize(v_i_491_);
lean_dec(v_i_491_);
v_stop_boxed_495_ = lean_unbox_usize(v_stop_492_);
lean_dec(v_stop_492_);
v_b_boxed_496_ = lean_unbox_float(v_b_493_);
lean_dec_ref(v_b_493_);
v_res_497_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__2(v_as_490_, v_i_boxed_494_, v_stop_boxed_495_, v_b_boxed_496_);
lean_dec_ref(v_as_490_);
v_r_498_ = lean_box_float(v_res_497_);
return v_r_498_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0___boxed__const__1(void){
_start:
{
double v___x_499_; lean_object* v___x_500_; 
v___x_499_ = l_instInhabitedFloat;
v___x_500_ = lean_box_float(v___x_499_);
return v___x_500_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_501_ = lean_box(0);
v___x_502_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0___boxed__const__1;
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_501_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols(lean_object* v_ci_504_, double v_maxTolerance_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_511_ = lean_st_ref_get(v_a_509_);
v___x_512_ = l_Lean_ConstantInfo_type(v_ci_504_);
v___x_513_ = l_Lean_Expr_relevantConstants(v___x_512_, v_a_506_, v_a_507_, v_a_508_, v_a_509_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_560_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_560_ == 0)
{
v___x_516_ = v___x_513_;
v_isShared_517_ = v_isSharedCheck_560_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_513_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_560_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v_env_518_; lean_object* v___x_519_; lean_object* v_toEnvExtension_520_; lean_object* v_asyncMode_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v_env_518_ = lean_ctor_get(v___x_511_, 0);
lean_inc_ref(v_env_518_);
lean_dec(v___x_511_);
v___x_519_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerDenyListExt;
v_toEnvExtension_520_ = lean_ctor_get(v___x_519_, 0);
v_asyncMode_521_ = lean_ctor_get(v_toEnvExtension_520_, 2);
v___x_522_ = lean_box(1);
v___x_523_ = lean_box(0);
v___x_524_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_522_, v___x_519_, v_env_518_, v_asyncMode_521_, v___x_523_);
v___x_525_ = lean_unsigned_to_nat(0u);
v___x_526_ = lean_array_get_size(v_a_514_);
v___x_527_ = l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__0(v___x_524_, v_a_514_, v___x_525_, v___x_526_, v_a_506_, v_a_507_, v_a_508_, v_a_509_);
lean_dec(v_a_514_);
lean_dec(v___x_524_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_559_; 
v_a_528_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_559_ == 0)
{
v___x_530_ = v___x_527_;
v_isShared_531_ = v_isSharedCheck_559_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_527_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_559_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_532_; double v___y_534_; uint8_t v___x_539_; 
v___x_532_ = lean_array_get_size(v_a_528_);
v___x_539_ = lean_nat_dec_eq(v___x_532_, v___x_525_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v_snd_542_; uint8_t v___x_543_; 
lean_del_object(v___x_516_);
v___x_540_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0);
v___x_541_ = lean_array_get_borrowed(v___x_540_, v_a_528_, v___x_525_);
v_snd_542_ = lean_ctor_get(v___x_541_, 1);
v___x_543_ = lean_nat_dec_lt(v___x_525_, v___x_532_);
if (v___x_543_ == 0)
{
double v___x_544_; 
v___x_544_ = lean_unbox_float(v_snd_542_);
v___y_534_ = v___x_544_;
goto v___jp_533_;
}
else
{
uint8_t v___x_545_; 
v___x_545_ = lean_nat_dec_le(v___x_532_, v___x_532_);
if (v___x_545_ == 0)
{
if (v___x_543_ == 0)
{
double v___x_546_; 
v___x_546_ = lean_unbox_float(v_snd_542_);
v___y_534_ = v___x_546_;
goto v___jp_533_;
}
else
{
size_t v___x_547_; size_t v___x_548_; double v___x_549_; double v___x_550_; 
v___x_547_ = ((size_t)0ULL);
v___x_548_ = lean_usize_of_nat(v___x_532_);
v___x_549_ = lean_unbox_float(v_snd_542_);
v___x_550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__2(v_a_528_, v___x_547_, v___x_548_, v___x_549_);
v___y_534_ = v___x_550_;
goto v___jp_533_;
}
}
else
{
size_t v___x_551_; size_t v___x_552_; double v___x_553_; double v___x_554_; 
v___x_551_ = ((size_t)0ULL);
v___x_552_ = lean_usize_of_nat(v___x_532_);
v___x_553_ = lean_unbox_float(v_snd_542_);
v___x_554_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__2(v_a_528_, v___x_551_, v___x_552_, v___x_553_);
v___y_534_ = v___x_554_;
goto v___jp_533_;
}
}
}
else
{
lean_object* v___x_555_; lean_object* v___x_557_; 
lean_del_object(v___x_530_);
lean_dec(v_a_528_);
v___x_555_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1___closed__0));
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_555_);
v___x_557_ = v___x_516_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v___x_555_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
v___jp_533_:
{
lean_object* v___x_535_; lean_object* v___x_537_; 
v___x_535_ = l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1(v___y_534_, v_maxTolerance_505_, v_a_528_, v___x_525_, v___x_532_);
lean_dec(v_a_528_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 0, v___x_535_);
v___x_537_ = v___x_530_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___x_535_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
else
{
lean_del_object(v___x_516_);
return v___x_527_;
}
}
}
else
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
lean_dec(v___x_511_);
v_a_561_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v___x_513_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_513_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___boxed(lean_object* v_ci_569_, lean_object* v_maxTolerance_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
double v_maxTolerance_boxed_576_; lean_object* v_res_577_; 
v_maxTolerance_boxed_576_ = lean_unbox_float(v_maxTolerance_570_);
lean_dec_ref(v_maxTolerance_570_);
v_res_577_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols(v_ci_569_, v_maxTolerance_boxed_576_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
lean_dec(v_a_574_);
lean_dec_ref(v_a_573_);
lean_dec(v_a_572_);
lean_dec_ref(v_a_571_);
lean_dec_ref(v_ci_569_);
return v_res_577_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__11(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__9));
v___x_604_ = l_Lean_mkAtom(v___x_603_);
return v___x_604_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__12(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_605_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__11, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__11_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__11);
v___x_606_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4));
v___x_607_ = lean_array_push(v___x_606_, v___x_605_);
return v___x_607_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__19(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__18));
v___x_623_ = l_Lean_mkAtom(v___x_622_);
return v___x_623_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__20(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_624_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__19, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__19_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__19);
v___x_625_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4));
v___x_626_ = lean_array_push(v___x_625_, v___x_624_);
return v___x_626_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__24(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__23));
v___x_632_ = lean_string_utf8_byte_size(v___x_631_);
return v___x_632_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__25(void){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_633_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__24, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__24_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__24);
v___x_634_ = lean_unsigned_to_nat(0u);
v___x_635_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__23));
v___x_636_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
lean_ctor_set(v___x_636_, 1, v___x_634_);
lean_ctor_set(v___x_636_, 2, v___x_633_);
return v___x_636_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__26(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_637_ = lean_box(0);
v___x_638_ = lean_box(0);
v___x_639_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__25, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__25_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__25);
v___x_640_ = lean_box(2);
v___x_641_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
lean_ctor_set(v___x_641_, 1, v___x_639_);
lean_ctor_set(v___x_641_, 2, v___x_638_);
lean_ctor_set(v___x_641_, 3, v___x_637_);
return v___x_641_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__27(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_642_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__26, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__26_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__26);
v___x_643_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4));
v___x_644_ = lean_array_push(v___x_643_, v___x_642_);
return v___x_644_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__28(void){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_645_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__27, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__27_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__27);
v___x_646_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__22));
v___x_647_ = lean_box(2);
v___x_648_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
lean_ctor_set(v___x_648_, 1, v___x_646_);
lean_ctor_set(v___x_648_, 2, v___x_645_);
return v___x_648_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__29(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_649_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__28, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__28_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__28);
v___x_650_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__20, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__20_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__20);
v___x_651_ = lean_array_push(v___x_650_, v___x_649_);
return v___x_651_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__30(void){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_652_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__29, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__29_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__29);
v___x_653_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__17));
v___x_654_ = lean_box(2);
v___x_655_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
lean_ctor_set(v___x_655_, 1, v___x_653_);
lean_ctor_set(v___x_655_, 2, v___x_652_);
return v___x_655_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__31(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_656_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__30, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__30_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__30);
v___x_657_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4));
v___x_658_ = lean_array_push(v___x_657_, v___x_656_);
return v___x_658_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__37(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_669_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__36));
v___x_670_ = l_Lean_mkAtom(v___x_669_);
return v___x_670_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__38(void){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_671_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__37, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__37_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__37);
v___x_672_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4));
v___x_673_ = lean_array_push(v___x_672_, v___x_671_);
return v___x_673_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__39(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_674_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__28, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__28_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__28);
v___x_675_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__38, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__38_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__38);
v___x_676_ = lean_array_push(v___x_675_, v___x_674_);
return v___x_676_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__40(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_677_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__39, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__39_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__39);
v___x_678_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__35));
v___x_679_ = lean_box(2);
v___x_680_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
lean_ctor_set(v___x_680_, 1, v___x_678_);
lean_ctor_set(v___x_680_, 2, v___x_677_);
return v___x_680_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__41(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_681_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__40, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__40_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__40);
v___x_682_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4));
v___x_683_ = lean_array_push(v___x_682_, v___x_681_);
return v___x_683_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__43(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__42));
v___x_686_ = l_Lean_mkAtom(v___x_685_);
return v___x_686_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__44(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_687_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__43, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__43_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__43);
v___x_688_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__41, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__41_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__41);
v___x_689_ = lean_array_push(v___x_688_, v___x_687_);
return v___x_689_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__45(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_690_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__40, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__40_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__40);
v___x_691_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__44, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__44_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__44);
v___x_692_ = lean_array_push(v___x_691_, v___x_690_);
return v___x_692_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__46(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_693_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__45, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__45_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__45);
v___x_694_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__33));
v___x_695_ = lean_box(2);
v___x_696_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
lean_ctor_set(v___x_696_, 1, v___x_694_);
lean_ctor_set(v___x_696_, 2, v___x_693_);
return v___x_696_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__47(void){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_697_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__46, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__46_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__46);
v___x_698_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__31, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__31_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__31);
v___x_699_ = lean_array_push(v___x_698_, v___x_697_);
return v___x_699_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__49(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__48));
v___x_702_ = l_Lean_mkAtom(v___x_701_);
return v___x_702_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__50(void){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_703_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__49, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__49_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__49);
v___x_704_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__47, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__47_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__47);
v___x_705_ = lean_array_push(v___x_704_, v___x_703_);
return v___x_705_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__51(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_706_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__50, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__50_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__50);
v___x_707_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__15));
v___x_708_ = lean_box(2);
v___x_709_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
lean_ctor_set(v___x_709_, 1, v___x_707_);
lean_ctor_set(v___x_709_, 2, v___x_706_);
return v___x_709_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__52(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_710_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__51, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__51_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__51);
v___x_711_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__12, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__12_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__12);
v___x_712_ = lean_array_push(v___x_711_, v___x_710_);
return v___x_712_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__53(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_713_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__52, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__52_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__52);
v___x_714_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__10));
v___x_715_ = lean_box(2);
v___x_716_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
lean_ctor_set(v___x_716_, 1, v___x_714_);
lean_ctor_set(v___x_716_, 2, v___x_713_);
return v___x_716_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__54(void){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_717_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__53, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__53_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__53);
v___x_718_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4));
v___x_719_ = lean_array_push(v___x_718_, v___x_717_);
return v___x_719_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__55(void){
_start:
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_720_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__54, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__54_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__54);
v___x_721_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__8));
v___x_722_ = lean_box(2);
v___x_723_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
lean_ctor_set(v___x_723_, 1, v___x_721_);
lean_ctor_set(v___x_723_, 2, v___x_720_);
return v___x_723_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__56(void){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_724_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__55, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__55_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__55);
v___x_725_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4));
v___x_726_ = lean_array_push(v___x_725_, v___x_724_);
return v___x_726_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__57(void){
_start:
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_727_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__56, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__56_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__56);
v___x_728_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__6));
v___x_729_ = lean_box(2);
v___x_730_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
lean_ctor_set(v___x_730_, 1, v___x_728_);
lean_ctor_set(v___x_730_, 2, v___x_727_);
return v___x_730_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__58(void){
_start:
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_731_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__57, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__57_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__57);
v___x_732_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__4));
v___x_733_ = lean_array_push(v___x_732_, v___x_731_);
return v___x_733_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__59(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_734_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__58, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__58_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__58);
v___x_735_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__3));
v___x_736_ = lean_box(2);
v___x_737_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
lean_ctor_set(v___x_737_, 1, v___x_735_);
lean_ctor_set(v___x_737_, 2, v___x_734_);
return v___x_737_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3(void){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__59, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__59_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3___closed__59);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___redArg(lean_object* v_r_739_, lean_object* v_a_740_, lean_object* v_x_741_){
_start:
{
if (lean_obj_tag(v_x_741_) == 0)
{
lean_object* v___x_742_; 
lean_dec_ref(v_r_739_);
v___x_742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_742_, 0, v_a_740_);
lean_ctor_set(v___x_742_, 1, v_x_741_);
return v___x_742_;
}
else
{
lean_object* v_head_743_; lean_object* v_tail_744_; lean_object* v___x_745_; uint8_t v___x_746_; 
v_head_743_ = lean_ctor_get(v_x_741_, 0);
v_tail_744_ = lean_ctor_get(v_x_741_, 1);
lean_inc_ref(v_r_739_);
lean_inc(v_head_743_);
lean_inc(v_a_740_);
v___x_745_ = lean_apply_2(v_r_739_, v_a_740_, v_head_743_);
v___x_746_ = lean_unbox(v___x_745_);
if (v___x_746_ == 0)
{
lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_754_; 
lean_inc(v_tail_744_);
lean_inc(v_head_743_);
v_isSharedCheck_754_ = !lean_is_exclusive(v_x_741_);
if (v_isSharedCheck_754_ == 0)
{
lean_object* v_unused_755_; lean_object* v_unused_756_; 
v_unused_755_ = lean_ctor_get(v_x_741_, 1);
lean_dec(v_unused_755_);
v_unused_756_ = lean_ctor_get(v_x_741_, 0);
lean_dec(v_unused_756_);
v___x_748_ = v_x_741_;
v_isShared_749_ = v_isSharedCheck_754_;
goto v_resetjp_747_;
}
else
{
lean_dec(v_x_741_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_754_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_750_; lean_object* v___x_752_; 
v___x_750_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___redArg(v_r_739_, v_a_740_, v_tail_744_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 1, v___x_750_);
v___x_752_ = v___x_748_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_head_743_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v___x_750_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
else
{
lean_object* v___x_757_; 
lean_dec_ref(v_r_739_);
v___x_757_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_757_, 0, v_a_740_);
lean_ctor_set(v___x_757_, 1, v_x_741_);
return v___x_757_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert(lean_object* v_00_u03b1_758_, lean_object* v_r_759_, lean_object* v_a_760_, lean_object* v_x_761_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___redArg(v_r_759_, v_a_760_, v_x_761_);
return v___x_762_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___lam__0(lean_object* v_x_763_, lean_object* v_y_764_){
_start:
{
lean_object* v_snd_765_; lean_object* v_snd_766_; double v___x_767_; double v___x_768_; uint8_t v___x_769_; 
v_snd_765_ = lean_ctor_get(v_x_763_, 1);
v_snd_766_ = lean_ctor_get(v_y_764_, 1);
v___x_767_ = lean_unbox_float(v_snd_765_);
v___x_768_ = lean_unbox_float(v_snd_766_);
v___x_769_ = lean_float_decLe(v___x_767_, v___x_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___lam__0___boxed(lean_object* v_x_770_, lean_object* v_y_771_){
_start:
{
uint8_t v_res_772_; lean_object* v_r_773_; 
v_res_772_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___lam__0(v_x_770_, v_y_771_);
lean_dec_ref(v_y_771_);
lean_dec_ref(v_x_770_);
v_r_773_ = lean_box(v_res_772_);
return v_r_773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger(lean_object* v_map_775_, lean_object* v_trigger_776_, lean_object* v_decl_777_, double v_tolerance_778_){
_start:
{
lean_object* v___f_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___f_779_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___closed__0));
v___x_780_ = lean_box_float(v_tolerance_778_);
v___x_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_781_, 0, v_decl_777_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = lean_box(0);
v___x_783_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_LibrarySuggestions_localSymbolFrequency_spec__0___redArg(v_map_775_, v_trigger_776_, v___x_782_);
v___x_784_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___redArg(v___f_779_, v___x_781_, v___x_783_);
v___x_785_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_trigger_776_, v___x_784_, v_map_775_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___boxed(lean_object* v_map_786_, lean_object* v_trigger_787_, lean_object* v_decl_788_, lean_object* v_tolerance_789_){
_start:
{
double v_tolerance_boxed_790_; lean_object* v_res_791_; 
v_tolerance_boxed_790_ = lean_unbox_float(v_tolerance_789_);
lean_dec_ref(v_tolerance_789_);
v_res_791_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger(v_map_786_, v_trigger_787_, v_decl_788_, v_tolerance_boxed_790_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__3(lean_object* v___x_792_, lean_object* v_as_793_, size_t v_i_794_, size_t v_stop_795_, lean_object* v_b_796_){
_start:
{
lean_object* v___y_798_; uint8_t v___x_802_; 
v___x_802_ = lean_usize_dec_eq(v_i_794_, v_stop_795_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_803_ = lean_array_uget_borrowed(v_as_793_, v_i_794_);
lean_inc(v___x_803_);
lean_inc_ref(v___x_792_);
v___x_804_ = l_Lean_LibrarySuggestions_isDeniedPremise(v___x_792_, v___x_803_, v___x_802_);
if (v___x_804_ == 0)
{
uint8_t v___x_805_; 
lean_inc(v___x_803_);
lean_inc_ref(v___x_792_);
v___x_805_ = l_Lean_wasOriginallyTheorem(v___x_792_, v___x_803_);
if (v___x_805_ == 0)
{
v___y_798_ = v_b_796_;
goto v___jp_797_;
}
else
{
lean_object* v___x_806_; 
lean_inc(v___x_803_);
v___x_806_ = lean_array_push(v_b_796_, v___x_803_);
v___y_798_ = v___x_806_;
goto v___jp_797_;
}
}
else
{
v___y_798_ = v_b_796_;
goto v___jp_797_;
}
}
else
{
lean_dec_ref(v___x_792_);
return v_b_796_;
}
v___jp_797_:
{
size_t v___x_799_; size_t v___x_800_; 
v___x_799_ = ((size_t)1ULL);
v___x_800_ = lean_usize_add(v_i_794_, v___x_799_);
v_i_794_ = v___x_800_;
v_b_796_ = v___y_798_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__3___boxed(lean_object* v___x_807_, lean_object* v_as_808_, lean_object* v_i_809_, lean_object* v_stop_810_, lean_object* v_b_811_){
_start:
{
size_t v_i_boxed_812_; size_t v_stop_boxed_813_; lean_object* v_res_814_; 
v_i_boxed_812_ = lean_unbox_usize(v_i_809_);
lean_dec(v_i_809_);
v_stop_boxed_813_ = lean_unbox_usize(v_stop_810_);
lean_dec(v_stop_810_);
v_res_814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__3(v___x_807_, v_as_808_, v_i_boxed_812_, v_stop_boxed_813_, v_b_811_);
lean_dec_ref(v_as_808_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1___redArg(lean_object* v_a_815_, lean_object* v_as_816_, size_t v_sz_817_, size_t v_i_818_, lean_object* v_b_819_){
_start:
{
uint8_t v___x_821_; 
v___x_821_ = lean_usize_dec_lt(v_i_818_, v_sz_817_);
if (v___x_821_ == 0)
{
lean_object* v___x_822_; 
lean_dec(v_a_815_);
v___x_822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_822_, 0, v_b_819_);
return v___x_822_;
}
else
{
lean_object* v_a_823_; lean_object* v_fst_824_; lean_object* v_snd_825_; double v___x_826_; lean_object* v___x_827_; size_t v___x_828_; size_t v___x_829_; 
v_a_823_ = lean_array_uget_borrowed(v_as_816_, v_i_818_);
v_fst_824_ = lean_ctor_get(v_a_823_, 0);
v_snd_825_ = lean_ctor_get(v_a_823_, 1);
v___x_826_ = lean_unbox_float(v_snd_825_);
lean_inc(v_a_815_);
lean_inc(v_fst_824_);
v___x_827_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger(v_b_819_, v_fst_824_, v_a_815_, v___x_826_);
v___x_828_ = ((size_t)1ULL);
v___x_829_ = lean_usize_add(v_i_818_, v___x_828_);
v_i_818_ = v___x_829_;
v_b_819_ = v___x_827_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1___redArg___boxed(lean_object* v_a_831_, lean_object* v_as_832_, lean_object* v_sz_833_, lean_object* v_i_834_, lean_object* v_b_835_, lean_object* v___y_836_){
_start:
{
size_t v_sz_boxed_837_; size_t v_i_boxed_838_; lean_object* v_res_839_; 
v_sz_boxed_837_ = lean_unbox_usize(v_sz_833_);
lean_dec(v_sz_833_);
v_i_boxed_838_ = lean_unbox_usize(v_i_834_);
lean_dec(v_i_834_);
v_res_839_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1___redArg(v_a_831_, v_as_832_, v_sz_boxed_837_, v_i_boxed_838_, v_b_835_);
lean_dec_ref(v_as_832_);
return v_res_839_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_840_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__0);
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
return v___x_842_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_843_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__1);
v___x_844_ = lean_unsigned_to_nat(0u);
v___x_845_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
lean_ctor_set(v___x_845_, 1, v___x_844_);
lean_ctor_set(v___x_845_, 2, v___x_844_);
lean_ctor_set(v___x_845_, 3, v___x_843_);
lean_ctor_set(v___x_845_, 4, v___x_843_);
lean_ctor_set(v___x_845_, 5, v___x_843_);
lean_ctor_set(v___x_845_, 6, v___x_843_);
lean_ctor_set(v___x_845_, 7, v___x_843_);
lean_ctor_set(v___x_845_, 8, v___x_843_);
return v___x_845_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_846_ = lean_unsigned_to_nat(32u);
v___x_847_ = lean_mk_empty_array_with_capacity(v___x_846_);
v___x_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
return v___x_848_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__4(void){
_start:
{
size_t v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_849_ = ((size_t)5ULL);
v___x_850_ = lean_unsigned_to_nat(0u);
v___x_851_ = lean_unsigned_to_nat(32u);
v___x_852_ = lean_mk_empty_array_with_capacity(v___x_851_);
v___x_853_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__3);
v___x_854_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_854_, 0, v___x_853_);
lean_ctor_set(v___x_854_, 1, v___x_852_);
lean_ctor_set(v___x_854_, 2, v___x_850_);
lean_ctor_set(v___x_854_, 3, v___x_850_);
lean_ctor_set_usize(v___x_854_, 4, v___x_849_);
return v___x_854_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_855_ = lean_box(1);
v___x_856_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__4);
v___x_857_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__1);
v___x_858_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_858_, 0, v___x_857_);
lean_ctor_set(v___x_858_, 1, v___x_856_);
lean_ctor_set(v___x_858_, 2, v___x_855_);
return v___x_858_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__7(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__6));
v___x_861_ = l_Lean_stringToMessageData(v___x_860_);
return v___x_861_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__9(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_863_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__8));
v___x_864_ = l_Lean_stringToMessageData(v___x_863_);
return v___x_864_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__11(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__10));
v___x_867_ = l_Lean_stringToMessageData(v___x_866_);
return v___x_867_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__13(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__12));
v___x_870_ = l_Lean_stringToMessageData(v___x_869_);
return v___x_870_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__15(void){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_872_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__14));
v___x_873_ = l_Lean_stringToMessageData(v___x_872_);
return v___x_873_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__17(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__16));
v___x_876_ = l_Lean_stringToMessageData(v___x_875_);
return v___x_876_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__19(void){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__18));
v___x_879_ = l_Lean_stringToMessageData(v___x_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg(lean_object* v_msg_880_, lean_object* v_declHint_881_, lean_object* v___y_882_){
_start:
{
lean_object* v___x_884_; lean_object* v_env_885_; uint8_t v___x_886_; 
v___x_884_ = lean_st_ref_get(v___y_882_);
v_env_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc_ref(v_env_885_);
lean_dec(v___x_884_);
v___x_886_ = l_Lean_Name_isAnonymous(v_declHint_881_);
if (v___x_886_ == 0)
{
uint8_t v_isExporting_887_; 
v_isExporting_887_ = lean_ctor_get_uint8(v_env_885_, sizeof(void*)*8);
if (v_isExporting_887_ == 0)
{
lean_object* v___x_888_; 
lean_dec_ref(v_env_885_);
lean_dec(v_declHint_881_);
v___x_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_888_, 0, v_msg_880_);
return v___x_888_;
}
else
{
lean_object* v___x_889_; uint8_t v___x_890_; 
lean_inc_ref(v_env_885_);
v___x_889_ = l_Lean_Environment_setExporting(v_env_885_, v___x_886_);
lean_inc(v_declHint_881_);
lean_inc_ref(v___x_889_);
v___x_890_ = l_Lean_Environment_contains(v___x_889_, v_declHint_881_, v_isExporting_887_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; 
lean_dec_ref(v___x_889_);
lean_dec_ref(v_env_885_);
lean_dec(v_declHint_881_);
v___x_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_891_, 0, v_msg_880_);
return v___x_891_;
}
else
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v_c_897_; lean_object* v___x_898_; 
v___x_892_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__2);
v___x_893_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__5);
v___x_894_ = l_Lean_Options_empty;
v___x_895_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_895_, 0, v___x_889_);
lean_ctor_set(v___x_895_, 1, v___x_892_);
lean_ctor_set(v___x_895_, 2, v___x_893_);
lean_ctor_set(v___x_895_, 3, v___x_894_);
lean_inc(v_declHint_881_);
v___x_896_ = l_Lean_MessageData_ofConstName(v_declHint_881_, v___x_886_);
v_c_897_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_897_, 0, v___x_895_);
lean_ctor_set(v_c_897_, 1, v___x_896_);
v___x_898_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_885_, v_declHint_881_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
lean_dec_ref(v_env_885_);
lean_dec(v_declHint_881_);
v___x_899_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__7);
v___x_900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
lean_ctor_set(v___x_900_, 1, v_c_897_);
v___x_901_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__9);
v___x_902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_900_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = l_Lean_MessageData_note(v___x_902_);
v___x_904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_904_, 0, v_msg_880_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
return v___x_905_;
}
else
{
lean_object* v_val_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_941_; 
v_val_906_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_941_ == 0)
{
v___x_908_ = v___x_898_;
v_isShared_909_ = v_isSharedCheck_941_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_val_906_);
lean_dec(v___x_898_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_941_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v_mod_913_; uint8_t v___x_914_; 
v___x_910_ = lean_box(0);
v___x_911_ = l_Lean_Environment_header(v_env_885_);
lean_dec_ref(v_env_885_);
v___x_912_ = l_Lean_EnvironmentHeader_moduleNames(v___x_911_);
v_mod_913_ = lean_array_get(v___x_910_, v___x_912_, v_val_906_);
lean_dec(v_val_906_);
lean_dec_ref(v___x_912_);
v___x_914_ = l_Lean_isPrivateName(v_declHint_881_);
lean_dec(v_declHint_881_);
if (v___x_914_ == 0)
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_926_; 
v___x_915_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__11);
v___x_916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
lean_ctor_set(v___x_916_, 1, v_c_897_);
v___x_917_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__13);
v___x_918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = l_Lean_MessageData_ofName(v_mod_913_);
v___x_920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_918_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__15);
v___x_922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_920_);
lean_ctor_set(v___x_922_, 1, v___x_921_);
v___x_923_ = l_Lean_MessageData_note(v___x_922_);
v___x_924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_924_, 0, v_msg_880_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
if (v_isShared_909_ == 0)
{
lean_ctor_set_tag(v___x_908_, 0);
lean_ctor_set(v___x_908_, 0, v___x_924_);
v___x_926_ = v___x_908_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v___x_924_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
else
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_939_; 
v___x_928_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__7);
v___x_929_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_929_, 0, v___x_928_);
lean_ctor_set(v___x_929_, 1, v_c_897_);
v___x_930_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__17);
v___x_931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_931_, 0, v___x_929_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
v___x_932_ = l_Lean_MessageData_ofName(v_mod_913_);
v___x_933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___closed__19);
v___x_935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_933_);
lean_ctor_set(v___x_935_, 1, v___x_934_);
v___x_936_ = l_Lean_MessageData_note(v___x_935_);
v___x_937_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_937_, 0, v_msg_880_);
lean_ctor_set(v___x_937_, 1, v___x_936_);
if (v_isShared_909_ == 0)
{
lean_ctor_set_tag(v___x_908_, 0);
lean_ctor_set(v___x_908_, 0, v___x_937_);
v___x_939_ = v___x_908_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_937_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_942_; 
lean_dec_ref(v_env_885_);
lean_dec(v_declHint_881_);
v___x_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_942_, 0, v_msg_880_);
return v___x_942_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_msg_943_, lean_object* v_declHint_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg(v_msg_943_, v_declHint_944_, v___y_945_);
lean_dec(v___y_945_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6(lean_object* v_msg_948_, lean_object* v_declHint_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
lean_object* v___x_955_; lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_965_; 
v___x_955_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg(v_msg_948_, v_declHint_949_, v___y_953_);
v_a_956_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_965_ == 0)
{
v___x_958_ = v___x_955_;
v_isShared_959_ = v_isSharedCheck_965_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_955_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_965_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_960_ = l_Lean_unknownIdentifierMessageTag;
v___x_961_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
lean_ctor_set(v___x_961_, 1, v_a_956_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 0, v___x_961_);
v___x_963_ = v___x_958_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_961_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6___boxed(lean_object* v_msg_966_, lean_object* v_declHint_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6(v_msg_966_, v_declHint_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9_spec__10(lean_object* v_msgData_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_){
_start:
{
lean_object* v___x_980_; lean_object* v_env_981_; lean_object* v___x_982_; lean_object* v_mctx_983_; lean_object* v_lctx_984_; lean_object* v_options_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_980_ = lean_st_ref_get(v___y_978_);
v_env_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc_ref(v_env_981_);
lean_dec(v___x_980_);
v___x_982_ = lean_st_ref_get(v___y_976_);
v_mctx_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc_ref(v_mctx_983_);
lean_dec(v___x_982_);
v_lctx_984_ = lean_ctor_get(v___y_975_, 2);
v_options_985_ = lean_ctor_get(v___y_977_, 2);
lean_inc_ref(v_options_985_);
lean_inc_ref(v_lctx_984_);
v___x_986_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_986_, 0, v_env_981_);
lean_ctor_set(v___x_986_, 1, v_mctx_983_);
lean_ctor_set(v___x_986_, 2, v_lctx_984_);
lean_ctor_set(v___x_986_, 3, v_options_985_);
v___x_987_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
lean_ctor_set(v___x_987_, 1, v_msgData_974_);
v___x_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9_spec__10___boxed(lean_object* v_msgData_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9_spec__10(v_msgData_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
lean_dec(v___y_993_);
lean_dec_ref(v___y_992_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9___redArg(lean_object* v_msg_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v_ref_1002_; lean_object* v___x_1003_; lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1012_; 
v_ref_1002_ = lean_ctor_get(v___y_999_, 5);
v___x_1003_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9_spec__10(v_msg_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
v_a_1004_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1006_ = v___x_1003_;
v_isShared_1007_ = v_isSharedCheck_1012_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_1003_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1012_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1010_; 
lean_inc(v_ref_1002_);
v___x_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1008_, 0, v_ref_1002_);
lean_ctor_set(v___x_1008_, 1, v_a_1004_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set_tag(v___x_1006_, 1);
lean_ctor_set(v___x_1006_, 0, v___x_1008_);
v___x_1010_ = v___x_1006_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v___x_1008_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9___redArg___boxed(lean_object* v_msg_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9___redArg(v_msg_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
lean_dec(v___y_1017_);
lean_dec_ref(v___y_1016_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7___redArg(lean_object* v_ref_1020_, lean_object* v_msg_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_fileName_1027_; lean_object* v_fileMap_1028_; lean_object* v_options_1029_; lean_object* v_currRecDepth_1030_; lean_object* v_maxRecDepth_1031_; lean_object* v_ref_1032_; lean_object* v_currNamespace_1033_; lean_object* v_openDecls_1034_; lean_object* v_initHeartbeats_1035_; lean_object* v_maxHeartbeats_1036_; lean_object* v_quotContext_1037_; lean_object* v_currMacroScope_1038_; uint8_t v_diag_1039_; lean_object* v_cancelTk_x3f_1040_; uint8_t v_suppressElabErrors_1041_; lean_object* v_inheritedTraceOptions_1042_; lean_object* v_ref_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v_fileName_1027_ = lean_ctor_get(v___y_1024_, 0);
v_fileMap_1028_ = lean_ctor_get(v___y_1024_, 1);
v_options_1029_ = lean_ctor_get(v___y_1024_, 2);
v_currRecDepth_1030_ = lean_ctor_get(v___y_1024_, 3);
v_maxRecDepth_1031_ = lean_ctor_get(v___y_1024_, 4);
v_ref_1032_ = lean_ctor_get(v___y_1024_, 5);
v_currNamespace_1033_ = lean_ctor_get(v___y_1024_, 6);
v_openDecls_1034_ = lean_ctor_get(v___y_1024_, 7);
v_initHeartbeats_1035_ = lean_ctor_get(v___y_1024_, 8);
v_maxHeartbeats_1036_ = lean_ctor_get(v___y_1024_, 9);
v_quotContext_1037_ = lean_ctor_get(v___y_1024_, 10);
v_currMacroScope_1038_ = lean_ctor_get(v___y_1024_, 11);
v_diag_1039_ = lean_ctor_get_uint8(v___y_1024_, sizeof(void*)*14);
v_cancelTk_x3f_1040_ = lean_ctor_get(v___y_1024_, 12);
v_suppressElabErrors_1041_ = lean_ctor_get_uint8(v___y_1024_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1042_ = lean_ctor_get(v___y_1024_, 13);
v_ref_1043_ = l_Lean_replaceRef(v_ref_1020_, v_ref_1032_);
lean_inc_ref(v_inheritedTraceOptions_1042_);
lean_inc(v_cancelTk_x3f_1040_);
lean_inc(v_currMacroScope_1038_);
lean_inc(v_quotContext_1037_);
lean_inc(v_maxHeartbeats_1036_);
lean_inc(v_initHeartbeats_1035_);
lean_inc(v_openDecls_1034_);
lean_inc(v_currNamespace_1033_);
lean_inc(v_maxRecDepth_1031_);
lean_inc(v_currRecDepth_1030_);
lean_inc_ref(v_options_1029_);
lean_inc_ref(v_fileMap_1028_);
lean_inc_ref(v_fileName_1027_);
v___x_1044_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1044_, 0, v_fileName_1027_);
lean_ctor_set(v___x_1044_, 1, v_fileMap_1028_);
lean_ctor_set(v___x_1044_, 2, v_options_1029_);
lean_ctor_set(v___x_1044_, 3, v_currRecDepth_1030_);
lean_ctor_set(v___x_1044_, 4, v_maxRecDepth_1031_);
lean_ctor_set(v___x_1044_, 5, v_ref_1043_);
lean_ctor_set(v___x_1044_, 6, v_currNamespace_1033_);
lean_ctor_set(v___x_1044_, 7, v_openDecls_1034_);
lean_ctor_set(v___x_1044_, 8, v_initHeartbeats_1035_);
lean_ctor_set(v___x_1044_, 9, v_maxHeartbeats_1036_);
lean_ctor_set(v___x_1044_, 10, v_quotContext_1037_);
lean_ctor_set(v___x_1044_, 11, v_currMacroScope_1038_);
lean_ctor_set(v___x_1044_, 12, v_cancelTk_x3f_1040_);
lean_ctor_set(v___x_1044_, 13, v_inheritedTraceOptions_1042_);
lean_ctor_set_uint8(v___x_1044_, sizeof(void*)*14, v_diag_1039_);
lean_ctor_set_uint8(v___x_1044_, sizeof(void*)*14 + 1, v_suppressElabErrors_1041_);
v___x_1045_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9___redArg(v_msg_1021_, v___y_1022_, v___y_1023_, v___x_1044_, v___y_1025_);
lean_dec_ref(v___x_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7___redArg___boxed(lean_object* v_ref_1046_, lean_object* v_msg_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7___redArg(v_ref_1046_, v_msg_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v_ref_1046_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_ref_1054_, lean_object* v_msg_1055_, lean_object* v_declHint_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v___x_1062_; lean_object* v_a_1063_; lean_object* v___x_1064_; 
v___x_1062_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6(v_msg_1055_, v_declHint_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_a_1063_);
lean_dec_ref(v___x_1062_);
v___x_1064_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7___redArg(v_ref_1054_, v_a_1063_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_ref_1065_, lean_object* v_msg_1066_, lean_object* v_declHint_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5___redArg(v_ref_1065_, v_msg_1066_, v_declHint_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
lean_dec(v___y_1069_);
lean_dec_ref(v___y_1068_);
lean_dec(v_ref_1065_);
return v_res_1073_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_1076_ = l_Lean_stringToMessageData(v___x_1075_);
return v___x_1076_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__2));
v___x_1079_ = l_Lean_stringToMessageData(v___x_1078_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1080_, lean_object* v_constName_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v___x_1087_; uint8_t v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1087_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1088_ = 0;
lean_inc(v_constName_1081_);
v___x_1089_ = l_Lean_MessageData_ofConstName(v_constName_1081_, v___x_1088_);
v___x_1090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1087_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_1092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1090_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5___redArg(v_ref_1080_, v___x_1092_, v_constName_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1094_, lean_object* v_constName_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg(v_ref_1094_, v_constName_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
lean_dec(v_ref_1094_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0___redArg(lean_object* v_constName_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
lean_object* v_ref_1108_; lean_object* v___x_1109_; 
v_ref_1108_ = lean_ctor_get(v___y_1105_, 5);
v___x_1109_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg(v_ref_1108_, v_constName_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0___redArg(v_constName_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_);
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
lean_dec(v___y_1112_);
lean_dec_ref(v___y_1111_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0(lean_object* v_constName_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v___x_1123_; lean_object* v_env_1124_; uint8_t v___x_1125_; lean_object* v___x_1126_; 
v___x_1123_ = lean_st_ref_get(v___y_1121_);
v_env_1124_ = lean_ctor_get(v___x_1123_, 0);
lean_inc_ref(v_env_1124_);
lean_dec(v___x_1123_);
v___x_1125_ = 0;
lean_inc(v_constName_1117_);
v___x_1126_ = l_Lean_Environment_find_x3f(v_env_1124_, v_constName_1117_, v___x_1125_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v___x_1127_; 
v___x_1127_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0___redArg(v_constName_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
return v___x_1127_;
}
else
{
lean_object* v_val_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
lean_dec(v_constName_1117_);
v_val_1128_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1126_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_val_1128_);
lean_dec(v___x_1126_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
lean_ctor_set_tag(v___x_1130_, 0);
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_val_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0___boxed(lean_object* v_constName_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0(v_constName_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__2(double v_maxTolerance_1143_, lean_object* v_as_1144_, size_t v_sz_1145_, size_t v_i_1146_, lean_object* v_b_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
uint8_t v___x_1153_; 
v___x_1153_ = lean_usize_dec_lt(v_i_1146_, v_sz_1145_);
if (v___x_1153_ == 0)
{
lean_object* v___x_1154_; 
v___x_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1154_, 0, v_b_1147_);
return v___x_1154_;
}
else
{
lean_object* v_a_1155_; lean_object* v___x_1156_; 
v_a_1155_ = lean_array_uget_borrowed(v_as_1144_, v_i_1146_);
lean_inc(v_a_1155_);
v___x_1156_ = l_Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0(v_a_1155_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v___x_1158_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1157_);
lean_dec_ref(v___x_1156_);
v___x_1158_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols(v_a_1157_, v_maxTolerance_1143_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
lean_dec(v_a_1157_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_object* v_a_1159_; size_t v_sz_1160_; size_t v___x_1161_; lean_object* v___x_1162_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc(v_a_1159_);
lean_dec_ref(v___x_1158_);
v_sz_1160_ = lean_array_size(v_a_1159_);
v___x_1161_ = ((size_t)0ULL);
lean_inc(v_a_1155_);
v___x_1162_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1___redArg(v_a_1155_, v_a_1159_, v_sz_1160_, v___x_1161_, v_b_1147_);
lean_dec(v_a_1159_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_object* v_a_1163_; size_t v___x_1164_; size_t v___x_1165_; 
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
lean_inc(v_a_1163_);
lean_dec_ref(v___x_1162_);
v___x_1164_ = ((size_t)1ULL);
v___x_1165_ = lean_usize_add(v_i_1146_, v___x_1164_);
v_i_1146_ = v___x_1165_;
v_b_1147_ = v_a_1163_;
goto _start;
}
else
{
return v___x_1162_;
}
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
lean_dec(v_b_1147_);
v_a_1167_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1158_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1158_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
else
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
lean_dec(v_b_1147_);
v_a_1175_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1156_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1156_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__2___boxed(lean_object* v_maxTolerance_1183_, lean_object* v_as_1184_, lean_object* v_sz_1185_, lean_object* v_i_1186_, lean_object* v_b_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
double v_maxTolerance_boxed_1193_; size_t v_sz_boxed_1194_; size_t v_i_boxed_1195_; lean_object* v_res_1196_; 
v_maxTolerance_boxed_1193_ = lean_unbox_float(v_maxTolerance_1183_);
lean_dec_ref(v_maxTolerance_1183_);
v_sz_boxed_1194_ = lean_unbox_usize(v_sz_1185_);
lean_dec(v_sz_1185_);
v_i_boxed_1195_ = lean_unbox_usize(v_i_1186_);
lean_dec(v_i_1186_);
v_res_1196_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__2(v_maxTolerance_boxed_1193_, v_as_1184_, v_sz_boxed_1194_, v_i_boxed_1195_, v_b_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec_ref(v_as_1184_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers(lean_object* v_names_1199_, double v_maxTolerance_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_){
_start:
{
lean_object* v___x_1206_; lean_object* v_map_1207_; lean_object* v___y_1209_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; uint8_t v___x_1216_; 
v___x_1206_ = lean_st_ref_get(v_a_1204_);
v_map_1207_ = lean_box(1);
v___x_1213_ = lean_unsigned_to_nat(0u);
v___x_1214_ = lean_array_get_size(v_names_1199_);
v___x_1215_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers___closed__0));
v___x_1216_ = lean_nat_dec_lt(v___x_1213_, v___x_1214_);
if (v___x_1216_ == 0)
{
lean_dec(v___x_1206_);
v___y_1209_ = v___x_1215_;
goto v___jp_1208_;
}
else
{
lean_object* v_env_1217_; uint8_t v___x_1218_; 
v_env_1217_ = lean_ctor_get(v___x_1206_, 0);
lean_inc_ref(v_env_1217_);
lean_dec(v___x_1206_);
v___x_1218_ = lean_nat_dec_le(v___x_1214_, v___x_1214_);
if (v___x_1218_ == 0)
{
if (v___x_1216_ == 0)
{
lean_dec_ref(v_env_1217_);
v___y_1209_ = v___x_1215_;
goto v___jp_1208_;
}
else
{
size_t v___x_1219_; size_t v___x_1220_; lean_object* v___x_1221_; 
v___x_1219_ = ((size_t)0ULL);
v___x_1220_ = lean_usize_of_nat(v___x_1214_);
v___x_1221_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__3(v_env_1217_, v_names_1199_, v___x_1219_, v___x_1220_, v___x_1215_);
v___y_1209_ = v___x_1221_;
goto v___jp_1208_;
}
}
else
{
size_t v___x_1222_; size_t v___x_1223_; lean_object* v___x_1224_; 
v___x_1222_ = ((size_t)0ULL);
v___x_1223_ = lean_usize_of_nat(v___x_1214_);
v___x_1224_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__3(v_env_1217_, v_names_1199_, v___x_1222_, v___x_1223_, v___x_1215_);
v___y_1209_ = v___x_1224_;
goto v___jp_1208_;
}
}
v___jp_1208_:
{
size_t v_sz_1210_; size_t v___x_1211_; lean_object* v___x_1212_; 
v_sz_1210_ = lean_array_size(v___y_1209_);
v___x_1211_ = ((size_t)0ULL);
v___x_1212_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__2(v_maxTolerance_1200_, v___y_1209_, v_sz_1210_, v___x_1211_, v_map_1207_, v_a_1201_, v_a_1202_, v_a_1203_, v_a_1204_);
lean_dec_ref(v___y_1209_);
return v___x_1212_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers___boxed(lean_object* v_names_1225_, lean_object* v_maxTolerance_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_){
_start:
{
double v_maxTolerance_boxed_1232_; lean_object* v_res_1233_; 
v_maxTolerance_boxed_1232_ = lean_unbox_float(v_maxTolerance_1226_);
lean_dec_ref(v_maxTolerance_1226_);
v_res_1233_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers(v_names_1225_, v_maxTolerance_boxed_1232_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_);
lean_dec(v_a_1230_);
lean_dec_ref(v_a_1229_);
lean_dec(v_a_1228_);
lean_dec_ref(v_a_1227_);
lean_dec_ref(v_names_1225_);
return v_res_1233_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1(lean_object* v_a_1234_, lean_object* v_as_1235_, size_t v_sz_1236_, size_t v_i_1237_, lean_object* v_b_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1___redArg(v_a_1234_, v_as_1235_, v_sz_1236_, v_i_1237_, v_b_1238_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1___boxed(lean_object* v_a_1245_, lean_object* v_as_1246_, lean_object* v_sz_1247_, lean_object* v_i_1248_, lean_object* v_b_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
size_t v_sz_boxed_1255_; size_t v_i_boxed_1256_; lean_object* v_res_1257_; 
v_sz_boxed_1255_ = lean_unbox_usize(v_sz_1247_);
lean_dec(v_sz_1247_);
v_i_boxed_1256_ = lean_unbox_usize(v_i_1248_);
lean_dec(v_i_1248_);
v_res_1257_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__1(v_a_1245_, v_as_1246_, v_sz_boxed_1255_, v_i_boxed_1256_, v_b_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
lean_dec_ref(v_as_1246_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0(lean_object* v_00_u03b1_1258_, lean_object* v_constName_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0___redArg(v_constName_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1266_, lean_object* v_constName_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0(v_00_u03b1_1266_, v_constName_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1274_, lean_object* v_ref_1275_, lean_object* v_constName_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___redArg(v_ref_1275_, v_constName_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1283_, lean_object* v_ref_1284_, lean_object* v_constName_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1(v_00_u03b1_1283_, v_ref_1284_, v_constName_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v_ref_1284_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b1_1292_, lean_object* v_ref_1293_, lean_object* v_msg_1294_, lean_object* v_declHint_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
lean_object* v___x_1301_; 
v___x_1301_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5___redArg(v_ref_1293_, v_msg_1294_, v_declHint_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b1_1302_, lean_object* v_ref_1303_, lean_object* v_msg_1304_, lean_object* v_declHint_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5(v_00_u03b1_1302_, v_ref_1303_, v_msg_1304_, v_declHint_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v_ref_1303_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7(lean_object* v_msg_1312_, lean_object* v_declHint_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
lean_object* v___x_1319_; 
v___x_1319_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___redArg(v_msg_1312_, v_declHint_1313_, v___y_1317_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7___boxed(lean_object* v_msg_1320_, lean_object* v_declHint_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__6_spec__7(v_msg_1320_, v_declHint_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
lean_dec(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v___y_1323_);
lean_dec_ref(v___y_1322_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7(lean_object* v_00_u03b1_1328_, lean_object* v_ref_1329_, lean_object* v_msg_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v___x_1336_; 
v___x_1336_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7___redArg(v_ref_1329_, v_msg_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1337_, lean_object* v_ref_1338_, lean_object* v_msg_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7(v_00_u03b1_1337_, v_ref_1338_, v_msg_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
lean_dec(v___y_1343_);
lean_dec_ref(v___y_1342_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v_ref_1338_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9(lean_object* v_00_u03b1_1346_, lean_object* v_msg_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9___redArg(v_msg_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1354_, lean_object* v_msg_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9(v_00_u03b1_1354_, v_msg_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers_spec__0(lean_object* v_x_1362_, lean_object* v_x_1363_){
_start:
{
if (lean_obj_tag(v_x_1363_) == 0)
{
return v_x_1362_;
}
else
{
lean_object* v_head_1364_; lean_object* v_tail_1365_; lean_object* v___f_1366_; lean_object* v___x_1367_; 
v_head_1364_ = lean_ctor_get(v_x_1363_, 0);
lean_inc(v_head_1364_);
v_tail_1365_ = lean_ctor_get(v_x_1363_, 1);
lean_inc(v_tail_1365_);
lean_dec_ref(v_x_1363_);
v___f_1366_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_insertTrigger___closed__0));
v___x_1367_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___redArg(v___f_1366_, v_head_1364_, v_x_1362_);
v_x_1362_ = v___x_1367_;
v_x_1363_ = v_tail_1365_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers_spec__1(lean_object* v_map_u2081_1369_, lean_object* v_init_1370_, lean_object* v_x_1371_){
_start:
{
if (lean_obj_tag(v_x_1371_) == 0)
{
lean_object* v_k_1372_; lean_object* v_v_1373_; lean_object* v_l_1374_; lean_object* v_r_1375_; lean_object* v___x_1376_; lean_object* v_a_1377_; lean_object* v___x_1378_; 
v_k_1372_ = lean_ctor_get(v_x_1371_, 1);
lean_inc(v_k_1372_);
v_v_1373_ = lean_ctor_get(v_x_1371_, 2);
lean_inc(v_v_1373_);
v_l_1374_ = lean_ctor_get(v_x_1371_, 3);
lean_inc(v_l_1374_);
v_r_1375_ = lean_ctor_get(v_x_1371_, 4);
lean_inc(v_r_1375_);
lean_dec_ref(v_x_1371_);
v___x_1376_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers_spec__1(v_map_u2081_1369_, v_init_1370_, v_l_1374_);
v_a_1377_ = lean_ctor_get(v___x_1376_, 0);
lean_inc(v_a_1377_);
lean_dec_ref(v___x_1376_);
v___x_1378_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_u2081_1369_, v_k_1372_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v___x_1379_; 
v___x_1379_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1372_, v_v_1373_, v_a_1377_);
v_init_1370_ = v___x_1379_;
v_x_1371_ = v_r_1375_;
goto _start;
}
else
{
lean_object* v_val_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v_val_1381_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_val_1381_);
lean_dec_ref(v___x_1378_);
v___x_1382_ = l_List_foldl___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers_spec__0(v_val_1381_, v_v_1373_);
v___x_1383_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1372_, v___x_1382_, v_a_1377_);
v_init_1370_ = v___x_1383_;
v_x_1371_ = v_r_1375_;
goto _start;
}
}
else
{
lean_object* v___x_1385_; 
v___x_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1385_, 0, v_init_1370_);
return v___x_1385_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers_spec__1___boxed(lean_object* v_map_u2081_1386_, lean_object* v_init_1387_, lean_object* v_x_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers_spec__1(v_map_u2081_1386_, v_init_1387_, v_x_1388_);
lean_dec(v_map_u2081_1386_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers(lean_object* v_map_u2081_1390_, lean_object* v_map_u2082_1391_){
_start:
{
lean_object* v___x_1392_; lean_object* v_a_1393_; 
lean_inc(v_map_u2081_1390_);
v___x_1392_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers_spec__1(v_map_u2081_1390_, v_map_u2081_1390_, v_map_u2082_1391_);
lean_dec(v_map_u2081_1390_);
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_a_1393_);
lean_dec_ref(v___x_1392_);
return v_a_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___lam__0(lean_object* v___x_1394_, double v___x_1395_, lean_object* v___x_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v___x_1402_; 
v___x_1402_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers(v___x_1394_, v___x_1395_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1412_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1405_ = v___x_1402_;
v_isShared_1406_ = v_isSharedCheck_1412_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___x_1402_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1412_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1410_; 
v___x_1407_ = lean_mk_empty_array_with_capacity(v___x_1396_);
v___x_1408_ = lean_array_push(v___x_1407_, v_a_1403_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v___x_1408_);
v___x_1410_ = v___x_1405_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___x_1408_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
v_a_1413_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1402_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1402_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___lam__0___boxed(lean_object* v___x_1421_, lean_object* v___x_1422_, lean_object* v___x_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
double v___x_854__boxed_1429_; lean_object* v_res_1430_; 
v___x_854__boxed_1429_ = lean_unbox_float(v___x_1422_);
lean_dec_ref(v___x_1422_);
v_res_1430_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___lam__0(v___x_1421_, v___x_854__boxed_1429_, v___x_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
lean_dec(v___y_1427_);
lean_dec_ref(v___y_1426_);
lean_dec(v___y_1425_);
lean_dec_ref(v___y_1424_);
lean_dec(v___x_1423_);
lean_dec_ref(v___x_1421_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__1(size_t v_sz_1431_, size_t v_i_1432_, lean_object* v_bs_1433_){
_start:
{
uint8_t v___x_1434_; 
v___x_1434_ = lean_usize_dec_lt(v_i_1432_, v_sz_1431_);
if (v___x_1434_ == 0)
{
return v_bs_1433_;
}
else
{
lean_object* v_v_1435_; lean_object* v_fst_1436_; lean_object* v___x_1437_; lean_object* v_bs_x27_1438_; size_t v___x_1439_; size_t v___x_1440_; lean_object* v___x_1441_; 
v_v_1435_ = lean_array_uget_borrowed(v_bs_1433_, v_i_1432_);
v_fst_1436_ = lean_ctor_get(v_v_1435_, 0);
lean_inc(v_fst_1436_);
v___x_1437_ = lean_unsigned_to_nat(0u);
v_bs_x27_1438_ = lean_array_uset(v_bs_1433_, v_i_1432_, v___x_1437_);
v___x_1439_ = ((size_t)1ULL);
v___x_1440_ = lean_usize_add(v_i_1432_, v___x_1439_);
v___x_1441_ = lean_array_uset(v_bs_x27_1438_, v_i_1432_, v_fst_1436_);
v_i_1432_ = v___x_1440_;
v_bs_1433_ = v___x_1441_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__1___boxed(lean_object* v_sz_1443_, lean_object* v_i_1444_, lean_object* v_bs_1445_){
_start:
{
size_t v_sz_boxed_1446_; size_t v_i_boxed_1447_; lean_object* v_res_1448_; 
v_sz_boxed_1446_ = lean_unbox_usize(v_sz_1443_);
lean_dec(v_sz_1443_);
v_i_boxed_1447_ = lean_unbox_usize(v_i_1444_);
lean_dec(v_i_1444_);
v_res_1448_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__1(v_sz_boxed_1446_, v_i_boxed_1447_, v_bs_1445_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___redArg___lam__0(lean_object* v_f_1449_, lean_object* v_x1_1450_, lean_object* v_x2_1451_, lean_object* v_x3_1452_){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = lean_apply_3(v_f_1449_, v_x1_1450_, v_x2_1451_, v_x3_1452_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_f_1454_, lean_object* v_keys_1455_, lean_object* v_vals_1456_, lean_object* v_i_1457_, lean_object* v_acc_1458_){
_start:
{
lean_object* v___x_1459_; uint8_t v___x_1460_; 
v___x_1459_ = lean_array_get_size(v_keys_1455_);
v___x_1460_ = lean_nat_dec_lt(v_i_1457_, v___x_1459_);
if (v___x_1460_ == 0)
{
lean_dec(v_i_1457_);
lean_dec(v_f_1454_);
return v_acc_1458_;
}
else
{
lean_object* v_k_1461_; lean_object* v_v_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v_k_1461_ = lean_array_fget_borrowed(v_keys_1455_, v_i_1457_);
v_v_1462_ = lean_array_fget_borrowed(v_vals_1456_, v_i_1457_);
lean_inc(v_f_1454_);
lean_inc(v_v_1462_);
lean_inc(v_k_1461_);
v___x_1463_ = lean_apply_3(v_f_1454_, v_acc_1458_, v_k_1461_, v_v_1462_);
v___x_1464_ = lean_unsigned_to_nat(1u);
v___x_1465_ = lean_nat_add(v_i_1457_, v___x_1464_);
lean_dec(v_i_1457_);
v_i_1457_ = v___x_1465_;
v_acc_1458_ = v___x_1463_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_f_1467_, lean_object* v_keys_1468_, lean_object* v_vals_1469_, lean_object* v_i_1470_, lean_object* v_acc_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_1467_, v_keys_1468_, v_vals_1469_, v_i_1470_, v_acc_1471_);
lean_dec_ref(v_vals_1469_);
lean_dec_ref(v_keys_1468_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_1473_, lean_object* v_x_1474_, lean_object* v_x_1475_){
_start:
{
if (lean_obj_tag(v_x_1474_) == 0)
{
lean_object* v_es_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; uint8_t v___x_1479_; 
v_es_1476_ = lean_ctor_get(v_x_1474_, 0);
v___x_1477_ = lean_unsigned_to_nat(0u);
v___x_1478_ = lean_array_get_size(v_es_1476_);
v___x_1479_ = lean_nat_dec_lt(v___x_1477_, v___x_1478_);
if (v___x_1479_ == 0)
{
lean_dec(v_f_1473_);
return v_x_1475_;
}
else
{
uint8_t v___x_1480_; 
v___x_1480_ = lean_nat_dec_le(v___x_1478_, v___x_1478_);
if (v___x_1480_ == 0)
{
if (v___x_1479_ == 0)
{
lean_dec(v_f_1473_);
return v_x_1475_;
}
else
{
size_t v___x_1481_; size_t v___x_1482_; lean_object* v___x_1483_; 
v___x_1481_ = ((size_t)0ULL);
v___x_1482_ = lean_usize_of_nat(v___x_1478_);
v___x_1483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_f_1473_, v_es_1476_, v___x_1481_, v___x_1482_, v_x_1475_);
return v___x_1483_;
}
}
else
{
size_t v___x_1484_; size_t v___x_1485_; lean_object* v___x_1486_; 
v___x_1484_ = ((size_t)0ULL);
v___x_1485_ = lean_usize_of_nat(v___x_1478_);
v___x_1486_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_f_1473_, v_es_1476_, v___x_1484_, v___x_1485_, v_x_1475_);
return v___x_1486_;
}
}
}
else
{
lean_object* v_ks_1487_; lean_object* v_vs_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v_ks_1487_ = lean_ctor_get(v_x_1474_, 0);
v_vs_1488_ = lean_ctor_get(v_x_1474_, 1);
v___x_1489_ = lean_unsigned_to_nat(0u);
v___x_1490_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_1473_, v_ks_1487_, v_vs_1488_, v___x_1489_, v_x_1475_);
return v___x_1490_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(lean_object* v_f_1491_, lean_object* v_as_1492_, size_t v_i_1493_, size_t v_stop_1494_, lean_object* v_b_1495_){
_start:
{
lean_object* v___y_1497_; uint8_t v___x_1501_; 
v___x_1501_ = lean_usize_dec_eq(v_i_1493_, v_stop_1494_);
if (v___x_1501_ == 0)
{
lean_object* v___x_1502_; 
v___x_1502_ = lean_array_uget_borrowed(v_as_1492_, v_i_1493_);
switch(lean_obj_tag(v___x_1502_))
{
case 0:
{
lean_object* v_key_1503_; lean_object* v_val_1504_; lean_object* v___x_1505_; 
v_key_1503_ = lean_ctor_get(v___x_1502_, 0);
v_val_1504_ = lean_ctor_get(v___x_1502_, 1);
lean_inc(v_f_1491_);
lean_inc(v_val_1504_);
lean_inc(v_key_1503_);
v___x_1505_ = lean_apply_3(v_f_1491_, v_b_1495_, v_key_1503_, v_val_1504_);
v___y_1497_ = v___x_1505_;
goto v___jp_1496_;
}
case 1:
{
lean_object* v_node_1506_; lean_object* v___x_1507_; 
v_node_1506_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_f_1491_);
v___x_1507_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___redArg(v_f_1491_, v_node_1506_, v_b_1495_);
v___y_1497_ = v___x_1507_;
goto v___jp_1496_;
}
default: 
{
v___y_1497_ = v_b_1495_;
goto v___jp_1496_;
}
}
}
else
{
lean_dec(v_f_1491_);
return v_b_1495_;
}
v___jp_1496_:
{
size_t v___x_1498_; size_t v___x_1499_; 
v___x_1498_ = ((size_t)1ULL);
v___x_1499_ = lean_usize_add(v_i_1493_, v___x_1498_);
v_i_1493_ = v___x_1499_;
v_b_1495_ = v___y_1497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_f_1508_, lean_object* v_as_1509_, lean_object* v_i_1510_, lean_object* v_stop_1511_, lean_object* v_b_1512_){
_start:
{
size_t v_i_boxed_1513_; size_t v_stop_boxed_1514_; lean_object* v_res_1515_; 
v_i_boxed_1513_ = lean_unbox_usize(v_i_1510_);
lean_dec(v_i_1510_);
v_stop_boxed_1514_ = lean_unbox_usize(v_stop_1511_);
lean_dec(v_stop_1511_);
v_res_1515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_f_1508_, v_as_1509_, v_i_boxed_1513_, v_stop_boxed_1514_, v_b_1512_);
lean_dec_ref(v_as_1509_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_1516_, lean_object* v_x_1517_, lean_object* v_x_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___redArg(v_f_1516_, v_x_1517_, v_x_1518_);
lean_dec_ref(v_x_1517_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___redArg(lean_object* v_map_1520_, lean_object* v_f_1521_, lean_object* v_init_1522_){
_start:
{
lean_object* v___f_1523_; lean_object* v___x_1524_; 
v___f_1523_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1523_, 0, v_f_1521_);
v___x_1524_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___redArg(v___f_1523_, v_map_1520_, v_init_1522_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___redArg___boxed(lean_object* v_map_1525_, lean_object* v_f_1526_, lean_object* v_init_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___redArg(v_map_1525_, v_f_1526_, v_init_1527_);
lean_dec_ref(v_map_1525_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___lam__0(lean_object* v_ps_1529_, lean_object* v_k_1530_, lean_object* v_v_1531_){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1532_, 0, v_k_1530_);
lean_ctor_set(v___x_1532_, 1, v_v_1531_);
v___x_1533_ = lean_array_push(v_ps_1529_, v___x_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg(lean_object* v_m_1537_){
_start:
{
lean_object* v___f_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___f_1538_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___closed__0));
v___x_1539_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___closed__1));
v___x_1540_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___redArg(v_m_1537_, v___f_1538_, v___x_1539_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg___boxed(lean_object* v_m_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg(v_m_1541_);
lean_dec_ref(v_m_1541_);
return v_res_1542_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__0(void){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Array_instInhabited(lean_box(0));
return v___x_1543_;
}
}
static double _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__1(void){
_start:
{
lean_object* v___x_1544_; uint8_t v___x_1545_; lean_object* v___x_1546_; double v___x_1547_; 
v___x_1544_ = lean_unsigned_to_nat(1u);
v___x_1545_ = 1;
v___x_1546_ = lean_unsigned_to_nat(30u);
v___x_1547_ = l_Float_ofScientific(v___x_1546_, v___x_1545_, v___x_1544_);
return v___x_1547_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___boxed__const__1(void){
_start:
{
double v___x_1548_; lean_object* v___x_1549_; 
v___x_1548_ = lean_float_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__1, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__1_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__1);
v___x_1549_ = lean_box_float(v___x_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3(lean_object* v_env_1550_){
_start:
{
lean_object* v___x_1551_; lean_object* v_map_u2082_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; size_t v_sz_1555_; size_t v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___f_1560_; lean_object* v_ents_1561_; lean_object* v___x_1562_; 
lean_inc_ref(v_env_1550_);
v___x_1551_ = l_Lean_Environment_constants(v_env_1550_);
v_map_u2082_1552_ = lean_ctor_get(v___x_1551_, 1);
lean_inc_ref(v_map_u2082_1552_);
lean_dec_ref(v___x_1551_);
v___x_1553_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__0, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__0_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___closed__0);
v___x_1554_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg(v_map_u2082_1552_);
lean_dec_ref(v_map_u2082_1552_);
v_sz_1555_ = lean_array_size(v___x_1554_);
v___x_1556_ = ((size_t)0ULL);
v___x_1557_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__1(v_sz_1555_, v___x_1556_, v___x_1554_);
v___x_1558_ = lean_unsigned_to_nat(1u);
v___x_1559_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___boxed__const__1;
v___f_1560_ = lean_alloc_closure((void*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1560_, 0, v___x_1557_);
lean_closure_set(v___f_1560_, 1, v___x_1559_);
lean_closure_set(v___f_1560_, 2, v___x_1558_);
v_ents_1561_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg(v___x_1553_, v_env_1550_, v___f_1560_);
lean_inc_n(v_ents_1561_, 2);
v___x_1562_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1562_, 0, v_ents_1561_);
lean_ctor_set(v___x_1562_, 1, v_ents_1561_);
lean_ctor_set(v___x_1562_, 2, v_ents_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0(lean_object* v_00_u03b2_1563_, lean_object* v_m_1564_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___redArg(v_m_1564_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0___boxed(lean_object* v_00_u03b2_1566_, lean_object* v_m_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0(v_00_u03b2_1566_, v_m_1567_);
lean_dec_ref(v_m_1567_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0(lean_object* v_00_u03c3_1569_, lean_object* v_00_u03b2_1570_, lean_object* v_map_1571_, lean_object* v_f_1572_, lean_object* v_init_1573_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___redArg(v_map_1571_, v_f_1572_, v_init_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0___boxed(lean_object* v_00_u03c3_1575_, lean_object* v_00_u03b2_1576_, lean_object* v_map_1577_, lean_object* v_f_1578_, lean_object* v_init_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0(v_00_u03c3_1575_, v_00_u03b2_1576_, v_map_1577_, v_f_1578_, v_init_1579_);
lean_dec_ref(v_map_1577_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1___redArg(lean_object* v_map_1581_, lean_object* v_f_1582_, lean_object* v_init_1583_){
_start:
{
lean_object* v___x_1584_; 
v___x_1584_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___redArg(v_f_1582_, v_map_1581_, v_init_1583_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_map_1585_, lean_object* v_f_1586_, lean_object* v_init_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1___redArg(v_map_1585_, v_f_1586_, v_init_1587_);
lean_dec_ref(v_map_1585_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_1589_, lean_object* v_00_u03b2_1590_, lean_object* v_map_1591_, lean_object* v_f_1592_, lean_object* v_init_1593_){
_start:
{
lean_object* v___x_1594_; 
v___x_1594_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___redArg(v_f_1592_, v_map_1591_, v_init_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_1595_, lean_object* v_00_u03b2_1596_, lean_object* v_map_1597_, lean_object* v_f_1598_, lean_object* v_init_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1(v_00_u03c3_1595_, v_00_u03b2_1596_, v_map_1597_, v_f_1598_, v_init_1599_);
lean_dec_ref(v_map_1597_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03c3_1601_, lean_object* v_00_u03b1_1602_, lean_object* v_00_u03b2_1603_, lean_object* v_f_1604_, lean_object* v_x_1605_, lean_object* v_x_1606_){
_start:
{
lean_object* v___x_1607_; 
v___x_1607_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___redArg(v_f_1604_, v_x_1605_, v_x_1606_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03c3_1608_, lean_object* v_00_u03b1_1609_, lean_object* v_00_u03b2_1610_, lean_object* v_f_1611_, lean_object* v_x_1612_, lean_object* v_x_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3(v_00_u03c3_1608_, v_00_u03b1_1609_, v_00_u03b2_1610_, v_f_1611_, v_x_1612_, v_x_1613_);
lean_dec_ref(v_x_1612_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object* v_00_u03b1_1615_, lean_object* v_00_u03b2_1616_, lean_object* v_00_u03c3_1617_, lean_object* v_f_1618_, lean_object* v_as_1619_, size_t v_i_1620_, size_t v_stop_1621_, lean_object* v_b_1622_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_f_1618_, v_as_1619_, v_i_1620_, v_stop_1621_, v_b_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object* v_00_u03b1_1624_, lean_object* v_00_u03b2_1625_, lean_object* v_00_u03c3_1626_, lean_object* v_f_1627_, lean_object* v_as_1628_, lean_object* v_i_1629_, lean_object* v_stop_1630_, lean_object* v_b_1631_){
_start:
{
size_t v_i_boxed_1632_; size_t v_stop_boxed_1633_; lean_object* v_res_1634_; 
v_i_boxed_1632_ = lean_unbox_usize(v_i_1629_);
lean_dec(v_i_1629_);
v_stop_boxed_1633_ = lean_unbox_usize(v_stop_1630_);
lean_dec(v_stop_1630_);
v_res_1634_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__4(v_00_u03b1_1624_, v_00_u03b2_1625_, v_00_u03c3_1626_, v_f_1627_, v_as_1628_, v_i_boxed_1632_, v_stop_boxed_1633_, v_b_1631_);
lean_dec_ref(v_as_1628_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03c3_1635_, lean_object* v_00_u03b1_1636_, lean_object* v_00_u03b2_1637_, lean_object* v_f_1638_, lean_object* v_keys_1639_, lean_object* v_vals_1640_, lean_object* v_heq_1641_, lean_object* v_i_1642_, lean_object* v_acc_1643_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_1638_, v_keys_1639_, v_vals_1640_, v_i_1642_, v_acc_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03c3_1645_, lean_object* v_00_u03b1_1646_, lean_object* v_00_u03b2_1647_, lean_object* v_f_1648_, lean_object* v_keys_1649_, lean_object* v_vals_1650_, lean_object* v_heq_1651_, lean_object* v_i_1652_, lean_object* v_acc_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3_spec__0_spec__0_spec__1_spec__3_spec__5(v_00_u03c3_1645_, v_00_u03b1_1646_, v_00_u03b2_1647_, v_f_1648_, v_keys_1649_, v_vals_1650_, v_heq_1651_, v_i_1652_, v_acc_1653_);
lean_dec_ref(v_vals_1650_);
lean_dec_ref(v_keys_1649_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object* v_x_1657_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = ((lean_object*)(l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0___closed__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_));
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object* v_x_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(v_x_1659_);
lean_dec_ref(v_x_1659_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object* v_x_1664_){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = ((lean_object*)(l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_));
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object* v_x_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(v_x_1666_);
lean_dec_ref(v_x_1666_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object* v_env_1668_, lean_object* v_x_1669_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3(v_env_1668_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object* v_env_1671_, lean_object* v_x_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(v_env_1671_, v_x_1672_);
lean_dec_ref(v_x_1672_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object* v_a_1674_, uint8_t v_a_1675_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object* v_a_1676_, lean_object* v_a_1677_){
_start:
{
uint8_t v_a_110__boxed_1678_; lean_object* v_res_1679_; 
v_a_110__boxed_1678_ = lean_unbox(v_a_1677_);
v_res_1679_ = l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(v_a_1676_, v_a_110__boxed_1678_);
lean_dec_ref(v_a_1676_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object* v_mapss_1680_, lean_object* v_x_1681_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1683_, 0, v_mapss_1680_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object* v_mapss_1684_, lean_object* v_x_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(v_mapss_1684_, v_x_1685_);
lean_dec_ref(v_x_1685_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(lean_object* v___x_1688_){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1688_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object* v___x_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_LibrarySuggestions_SineQuaNon_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(v___x_1691_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1719_ = ((lean_object*)(l_Lean_LibrarySuggestions_SineQuaNon_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_));
v___x_1720_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2____boxed(lean_object* v_a_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_();
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_228879371____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1724_ = lean_box(0);
v___x_1725_ = lean_st_mk_ref(v___x_1724_);
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_228879371____hygCtx___hyg_2____boxed(lean_object* v_a_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_228879371____hygCtx___hyg_2_();
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__0(lean_object* v_as_1729_, size_t v_i_1730_, size_t v_stop_1731_, lean_object* v_b_1732_){
_start:
{
uint8_t v___x_1733_; 
v___x_1733_ = lean_usize_dec_eq(v_i_1730_, v_stop_1731_);
if (v___x_1733_ == 0)
{
lean_object* v___x_1734_; lean_object* v___x_1735_; size_t v___x_1736_; size_t v___x_1737_; 
v___x_1734_ = lean_array_uget_borrowed(v_as_1729_, v_i_1730_);
lean_inc(v___x_1734_);
v___x_1735_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_combineTriggers(v_b_1732_, v___x_1734_);
v___x_1736_ = ((size_t)1ULL);
v___x_1737_ = lean_usize_add(v_i_1730_, v___x_1736_);
v_i_1730_ = v___x_1737_;
v_b_1732_ = v___x_1735_;
goto _start;
}
else
{
return v_b_1732_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__0___boxed(lean_object* v_as_1739_, lean_object* v_i_1740_, lean_object* v_stop_1741_, lean_object* v_b_1742_){
_start:
{
size_t v_i_boxed_1743_; size_t v_stop_boxed_1744_; lean_object* v_res_1745_; 
v_i_boxed_1743_ = lean_unbox_usize(v_i_1740_);
lean_dec(v_i_1740_);
v_stop_boxed_1744_ = lean_unbox_usize(v_stop_1741_);
lean_dec(v_stop_1741_);
v_res_1745_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__0(v_as_1739_, v_i_boxed_1743_, v_stop_boxed_1744_, v_b_1742_);
lean_dec_ref(v_as_1739_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__1(lean_object* v_as_1746_, size_t v_i_1747_, size_t v_stop_1748_, lean_object* v_b_1749_){
_start:
{
lean_object* v___y_1751_; uint8_t v___x_1755_; 
v___x_1755_ = lean_usize_dec_eq(v_i_1747_, v_stop_1748_);
if (v___x_1755_ == 0)
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1756_ = lean_array_uget_borrowed(v_as_1746_, v_i_1747_);
v___x_1757_ = lean_unsigned_to_nat(0u);
v___x_1758_ = lean_array_get_size(v___x_1756_);
v___x_1759_ = lean_nat_dec_lt(v___x_1757_, v___x_1758_);
if (v___x_1759_ == 0)
{
v___y_1751_ = v_b_1749_;
goto v___jp_1750_;
}
else
{
uint8_t v___x_1760_; 
v___x_1760_ = lean_nat_dec_le(v___x_1758_, v___x_1758_);
if (v___x_1760_ == 0)
{
if (v___x_1759_ == 0)
{
v___y_1751_ = v_b_1749_;
goto v___jp_1750_;
}
else
{
size_t v___x_1761_; size_t v___x_1762_; lean_object* v___x_1763_; 
v___x_1761_ = ((size_t)0ULL);
v___x_1762_ = lean_usize_of_nat(v___x_1758_);
v___x_1763_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__0(v___x_1756_, v___x_1761_, v___x_1762_, v_b_1749_);
v___y_1751_ = v___x_1763_;
goto v___jp_1750_;
}
}
else
{
size_t v___x_1764_; size_t v___x_1765_; lean_object* v___x_1766_; 
v___x_1764_ = ((size_t)0ULL);
v___x_1765_ = lean_usize_of_nat(v___x_1758_);
v___x_1766_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__0(v___x_1756_, v___x_1764_, v___x_1765_, v_b_1749_);
v___y_1751_ = v___x_1766_;
goto v___jp_1750_;
}
}
}
else
{
return v_b_1749_;
}
v___jp_1750_:
{
size_t v___x_1752_; size_t v___x_1753_; 
v___x_1752_ = ((size_t)1ULL);
v___x_1753_ = lean_usize_add(v_i_1747_, v___x_1752_);
v_i_1747_ = v___x_1753_;
v_b_1749_ = v___y_1751_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__1___boxed(lean_object* v_as_1767_, lean_object* v_i_1768_, lean_object* v_stop_1769_, lean_object* v_b_1770_){
_start:
{
size_t v_i_boxed_1771_; size_t v_stop_boxed_1772_; lean_object* v_res_1773_; 
v_i_boxed_1771_ = lean_unbox_usize(v_i_1768_);
lean_dec(v_i_1768_);
v_stop_boxed_1772_ = lean_unbox_usize(v_stop_1769_);
lean_dec(v_stop_1769_);
v_res_1773_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__1(v_as_1767_, v_i_boxed_1771_, v_stop_boxed_1772_, v_b_1770_);
lean_dec_ref(v_as_1767_);
return v_res_1773_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg___closed__0(void){
_start:
{
lean_object* v___x_1774_; 
v___x_1774_ = l_Array_instInhabited(lean_box(0));
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg(lean_object* v_a_1775_){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1777_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersRef;
v___x_1778_ = lean_st_ref_get(v___x_1777_);
if (lean_obj_tag(v___x_1778_) == 0)
{
lean_object* v___x_1779_; lean_object* v___y_1781_; lean_object* v_env_1785_; lean_object* v___x_1786_; lean_object* v_toEnvExtension_1787_; lean_object* v_asyncMode_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; uint8_t v___x_1795_; 
v___x_1779_ = lean_st_ref_get(v_a_1775_);
v_env_1785_ = lean_ctor_get(v___x_1779_, 0);
lean_inc_ref(v_env_1785_);
lean_dec(v___x_1779_);
v___x_1786_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt;
v_toEnvExtension_1787_ = lean_ctor_get(v___x_1786_, 0);
v_asyncMode_1788_ = lean_ctor_get(v_toEnvExtension_1787_, 2);
v___x_1789_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg___closed__0, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg___closed__0_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg___closed__0);
v___x_1790_ = lean_box(0);
v___x_1791_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1789_, v___x_1786_, v_env_1785_, v_asyncMode_1788_, v___x_1790_);
v___x_1792_ = lean_box(1);
v___x_1793_ = lean_unsigned_to_nat(0u);
v___x_1794_ = lean_array_get_size(v___x_1791_);
v___x_1795_ = lean_nat_dec_lt(v___x_1793_, v___x_1794_);
if (v___x_1795_ == 0)
{
lean_dec(v___x_1791_);
v___y_1781_ = v___x_1792_;
goto v___jp_1780_;
}
else
{
uint8_t v___x_1796_; 
v___x_1796_ = lean_nat_dec_le(v___x_1794_, v___x_1794_);
if (v___x_1796_ == 0)
{
if (v___x_1795_ == 0)
{
lean_dec(v___x_1791_);
v___y_1781_ = v___x_1792_;
goto v___jp_1780_;
}
else
{
size_t v___x_1797_; size_t v___x_1798_; lean_object* v___x_1799_; 
v___x_1797_ = ((size_t)0ULL);
v___x_1798_ = lean_usize_of_nat(v___x_1794_);
v___x_1799_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__1(v___x_1791_, v___x_1797_, v___x_1798_, v___x_1792_);
lean_dec(v___x_1791_);
v___y_1781_ = v___x_1799_;
goto v___jp_1780_;
}
}
else
{
size_t v___x_1800_; size_t v___x_1801_; lean_object* v___x_1802_; 
v___x_1800_ = ((size_t)0ULL);
v___x_1801_ = lean_usize_of_nat(v___x_1794_);
v___x_1802_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap_spec__1(v___x_1791_, v___x_1800_, v___x_1801_, v___x_1792_);
lean_dec(v___x_1791_);
v___y_1781_ = v___x_1802_;
goto v___jp_1780_;
}
}
v___jp_1780_:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
lean_inc(v___y_1781_);
v___x_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1782_, 0, v___y_1781_);
v___x_1783_ = lean_st_ref_set(v___x_1777_, v___x_1782_);
v___x_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1784_, 0, v___y_1781_);
return v___x_1784_;
}
}
else
{
lean_object* v_val_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1810_; 
v_val_1803_ = lean_ctor_get(v___x_1778_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1805_ = v___x_1778_;
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_val_1803_);
lean_dec(v___x_1778_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1808_; 
if (v_isShared_1806_ == 0)
{
lean_ctor_set_tag(v___x_1805_, 0);
v___x_1808_ = v___x_1805_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_val_1803_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
return v___x_1808_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg___boxed(lean_object* v_a_1811_, lean_object* v_a_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg(v_a_1811_);
lean_dec(v_a_1811_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap(lean_object* v_a_1814_, lean_object* v_a_1815_){
_start:
{
lean_object* v___x_1817_; 
v___x_1817_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg(v_a_1815_);
return v___x_1817_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___boxed(lean_object* v_a_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap(v_a_1818_, v_a_1819_);
lean_dec(v_a_1819_);
lean_dec_ref(v_a_1818_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems___redArg(lean_object* v_trigger_1822_, lean_object* v_a_1823_){
_start:
{
lean_object* v___x_1825_; lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1835_; 
v___x_1825_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg(v_a_1823_);
v_a_1826_ = lean_ctor_get(v___x_1825_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1825_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1828_ = v___x_1825_;
v_isShared_1829_ = v_isSharedCheck_1835_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v___x_1825_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1835_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1833_; 
v___x_1830_ = lean_box(0);
v___x_1831_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_LibrarySuggestions_localSymbolFrequency_spec__0___redArg(v_a_1826_, v_trigger_1822_, v___x_1830_);
lean_dec(v_a_1826_);
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 0, v___x_1831_);
v___x_1833_ = v___x_1828_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v___x_1831_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems___redArg___boxed(lean_object* v_trigger_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems___redArg(v_trigger_1836_, v_a_1837_);
lean_dec(v_a_1837_);
lean_dec(v_trigger_1836_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems(lean_object* v_trigger_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_){
_start:
{
lean_object* v___x_1844_; 
v___x_1844_ = l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems___redArg(v_trigger_1840_, v_a_1842_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems___boxed(lean_object* v_trigger_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems(v_trigger_1845_, v_a_1846_, v_a_1847_);
lean_dec(v_a_1847_);
lean_dec_ref(v_a_1846_);
lean_dec(v_trigger_1845_);
return v_res_1849_;
}
}
LEAN_EXPORT uint8_t l_List_filterMapTR_go___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__1___lam__0(lean_object* v_decl_1850_, lean_object* v_x_1851_){
_start:
{
lean_object* v_fst_1852_; uint8_t v___x_1853_; 
v_fst_1852_ = lean_ctor_get(v_x_1851_, 0);
v___x_1853_ = lean_name_eq(v_fst_1852_, v_decl_1850_);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__1___lam__0___boxed(lean_object* v_decl_1854_, lean_object* v_x_1855_){
_start:
{
uint8_t v_res_1856_; lean_object* v_r_1857_; 
v_res_1856_ = l_List_filterMapTR_go___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__1___lam__0(v_decl_1854_, v_x_1855_);
lean_dec_ref(v_x_1855_);
lean_dec(v_decl_1854_);
v_r_1857_ = lean_box(v_res_1856_);
return v_r_1857_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__1(lean_object* v_decl_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_){
_start:
{
if (lean_obj_tag(v_a_1859_) == 0)
{
lean_object* v___x_1861_; 
lean_dec(v_decl_1858_);
v___x_1861_ = lean_array_to_list(v_a_1860_);
return v___x_1861_;
}
else
{
lean_object* v_head_1862_; lean_object* v_tail_1863_; lean_object* v_val_1865_; lean_object* v_fst_1868_; lean_object* v_snd_1869_; lean_object* v___f_1870_; lean_object* v___x_1871_; 
v_head_1862_ = lean_ctor_get(v_a_1859_, 0);
lean_inc(v_head_1862_);
v_tail_1863_ = lean_ctor_get(v_a_1859_, 1);
lean_inc(v_tail_1863_);
lean_dec_ref(v_a_1859_);
v_fst_1868_ = lean_ctor_get(v_head_1862_, 0);
lean_inc(v_fst_1868_);
v_snd_1869_ = lean_ctor_get(v_head_1862_, 1);
lean_inc(v_snd_1869_);
lean_dec(v_head_1862_);
lean_inc(v_decl_1858_);
v___f_1870_ = lean_alloc_closure((void*)(l_List_filterMapTR_go___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1870_, 0, v_decl_1858_);
v___x_1871_ = l_List_find_x3f___redArg(v___f_1870_, v_snd_1869_);
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_dec(v_fst_1868_);
if (lean_obj_tag(v___x_1871_) == 0)
{
v_a_1859_ = v_tail_1863_;
goto _start;
}
else
{
lean_object* v_val_1873_; 
v_val_1873_ = lean_ctor_get(v___x_1871_, 0);
lean_inc(v_val_1873_);
lean_dec_ref(v___x_1871_);
v_val_1865_ = v_val_1873_;
goto v___jp_1864_;
}
}
else
{
lean_object* v_val_1874_; lean_object* v_snd_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
v_val_1874_ = lean_ctor_get(v___x_1871_, 0);
lean_inc(v_val_1874_);
lean_dec_ref(v___x_1871_);
v_snd_1875_ = lean_ctor_get(v_val_1874_, 1);
v_isSharedCheck_1882_ = !lean_is_exclusive(v_val_1874_);
if (v_isSharedCheck_1882_ == 0)
{
lean_object* v_unused_1883_; 
v_unused_1883_ = lean_ctor_get(v_val_1874_, 0);
lean_dec(v_unused_1883_);
v___x_1877_ = v_val_1874_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_snd_1875_);
lean_dec(v_val_1874_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
lean_ctor_set(v___x_1877_, 0, v_fst_1868_);
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_fst_1868_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v_snd_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
v_val_1865_ = v___x_1880_;
goto v___jp_1864_;
}
}
}
v___jp_1864_:
{
lean_object* v___x_1866_; 
v___x_1866_ = lean_array_push(v_a_1860_, v_val_1865_);
v_a_1859_ = v_tail_1863_;
v_a_1860_ = v___x_1866_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__0(lean_object* v_init_1884_, lean_object* v_x_1885_){
_start:
{
if (lean_obj_tag(v_x_1885_) == 0)
{
lean_object* v_k_1886_; lean_object* v_v_1887_; lean_object* v_l_1888_; lean_object* v_r_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
v_k_1886_ = lean_ctor_get(v_x_1885_, 1);
v_v_1887_ = lean_ctor_get(v_x_1885_, 2);
v_l_1888_ = lean_ctor_get(v_x_1885_, 3);
v_r_1889_ = lean_ctor_get(v_x_1885_, 4);
v___x_1890_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__0(v_init_1884_, v_r_1889_);
lean_inc(v_v_1887_);
lean_inc(v_k_1886_);
v___x_1891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1891_, 0, v_k_1886_);
lean_ctor_set(v___x_1891_, 1, v_v_1887_);
v___x_1892_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
lean_ctor_set(v___x_1892_, 1, v___x_1890_);
v_init_1884_ = v___x_1892_;
v_x_1885_ = v_l_1888_;
goto _start;
}
else
{
return v_init_1884_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__0___boxed(lean_object* v_init_1894_, lean_object* v_x_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__0(v_init_1894_, v_x_1895_);
lean_dec(v_x_1895_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor___redArg(lean_object* v_decl_1897_, lean_object* v_a_1898_){
_start:
{
lean_object* v___x_1900_; lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1912_; 
v___x_1900_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggerMap___redArg(v_a_1898_);
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1903_ = v___x_1900_;
v_isShared_1904_ = v_isSharedCheck_1912_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1900_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1912_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1910_; 
v___x_1905_ = lean_box(0);
v___x_1906_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__0(v___x_1905_, v_a_1901_);
lean_dec(v_a_1901_);
v___x_1907_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1___closed__0));
v___x_1908_ = l_List_filterMapTR_go___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor_spec__1(v_decl_1897_, v___x_1906_, v___x_1907_);
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 0, v___x_1908_);
v___x_1910_ = v___x_1903_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1908_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor___redArg___boxed(lean_object* v_decl_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor___redArg(v_decl_1913_, v_a_1914_);
lean_dec(v_a_1914_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor(lean_object* v_decl_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_){
_start:
{
lean_object* v___x_1921_; 
v___x_1921_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor___redArg(v_decl_1917_, v_a_1919_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor___boxed(lean_object* v_decl_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersFor(v_decl_1922_, v_a_1923_, v_a_1924_);
lean_dec(v_a_1924_);
lean_dec_ref(v_a_1923_);
return v_res_1926_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean___lam__0(lean_object* v_x_1927_, lean_object* v_y_1928_){
_start:
{
lean_object* v_fst_1929_; lean_object* v_snd_1930_; lean_object* v_fst_1931_; lean_object* v_snd_1932_; double v___x_1933_; double v___x_1934_; uint8_t v___x_1935_; 
v_fst_1929_ = lean_ctor_get(v_x_1927_, 0);
v_snd_1930_ = lean_ctor_get(v_x_1927_, 1);
v_fst_1931_ = lean_ctor_get(v_y_1928_, 0);
v_snd_1932_ = lean_ctor_get(v_y_1928_, 1);
v___x_1933_ = lean_unbox_float(v_fst_1929_);
v___x_1934_ = lean_unbox_float(v_fst_1931_);
v___x_1935_ = lean_float_decLt(v___x_1933_, v___x_1934_);
if (v___x_1935_ == 0)
{
double v___x_1936_; double v___x_1937_; uint8_t v___x_1938_; 
v___x_1936_ = lean_unbox_float(v_fst_1931_);
v___x_1937_ = lean_unbox_float(v_fst_1929_);
v___x_1938_ = lean_float_decLt(v___x_1936_, v___x_1937_);
if (v___x_1938_ == 0)
{
uint8_t v___x_1939_; 
v___x_1939_ = l_Lean_Name_cmp(v_snd_1930_, v_snd_1932_);
return v___x_1939_;
}
else
{
uint8_t v___x_1940_; 
v___x_1940_ = 2;
return v___x_1940_;
}
}
else
{
uint8_t v___x_1941_; 
v___x_1941_ = 0;
return v___x_1941_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean___lam__0___boxed(lean_object* v_x_1942_, lean_object* v_y_1943_){
_start:
{
uint8_t v_res_1944_; lean_object* v_r_1945_; 
v_res_1944_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean___lam__0(v_x_1942_, v_y_1943_);
lean_dec_ref(v_y_1943_);
lean_dec_ref(v_x_1942_);
v_r_1945_ = lean_box(v_res_1944_);
return v_r_1945_;
}
}
static double _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg___closed__0(void){
_start:
{
lean_object* v___x_1948_; uint8_t v___x_1949_; lean_object* v___x_1950_; double v___x_1951_; 
v___x_1948_ = lean_unsigned_to_nat(1u);
v___x_1949_ = 1;
v___x_1950_ = lean_unsigned_to_nat(10u);
v___x_1951_ = l_Float_ofScientific(v___x_1950_, v___x_1949_, v___x_1948_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg(lean_object* v_n_1952_, double v_frequencyWeight_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = l_Lean_LibrarySuggestions_symbolFrequency___redArg(v_n_1952_, v_a_1954_);
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1972_; 
v_a_1957_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1959_ = v___x_1956_;
v_isShared_1960_ = v_isSharedCheck_1972_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1956_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1972_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1961_; double v___x_1962_; lean_object* v___x_1963_; double v___x_1964_; double v___x_1965_; double v___x_1966_; double v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1970_; 
v___x_1961_ = lean_unsigned_to_nat(1u);
v___x_1962_ = lean_float_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg___closed__0, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg___closed__0_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg___closed__0);
v___x_1963_ = lean_nat_add(v_a_1957_, v___x_1961_);
lean_dec(v_a_1957_);
v___x_1964_ = lean_float_of_nat(v___x_1963_);
v___x_1965_ = log2(v___x_1964_);
v___x_1966_ = lean_float_mul(v_frequencyWeight_1953_, v___x_1965_);
v___x_1967_ = lean_float_add(v___x_1962_, v___x_1966_);
v___x_1968_ = lean_box_float(v___x_1967_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_1968_);
v___x_1970_ = v___x_1959_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1968_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
else
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
v_a_1973_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1956_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1956_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1978_; 
if (v_isShared_1976_ == 0)
{
v___x_1978_ = v___x_1975_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1973_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg___boxed(lean_object* v_n_1981_, lean_object* v_frequencyWeight_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_){
_start:
{
double v_frequencyWeight_boxed_1985_; lean_object* v_res_1986_; 
v_frequencyWeight_boxed_1985_ = lean_unbox_float(v_frequencyWeight_1982_);
lean_dec_ref(v_frequencyWeight_1982_);
v_res_1986_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg(v_n_1981_, v_frequencyWeight_boxed_1985_, v_a_1983_);
lean_dec(v_a_1983_);
lean_dec(v_n_1981_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore(lean_object* v_n_1987_, double v_frequencyWeight_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_){
_start:
{
lean_object* v___x_1994_; 
v___x_1994_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg(v_n_1987_, v_frequencyWeight_1988_, v_a_1992_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___boxed(lean_object* v_n_1995_, lean_object* v_frequencyWeight_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_){
_start:
{
double v_frequencyWeight_boxed_2002_; lean_object* v_res_2003_; 
v_frequencyWeight_boxed_2002_ = lean_unbox_float(v_frequencyWeight_1996_);
lean_dec_ref(v_frequencyWeight_1996_);
v_res_2003_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore(v_n_1995_, v_frequencyWeight_boxed_2002_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_);
lean_dec(v_a_2000_);
lean_dec_ref(v_a_1999_);
lean_dec(v_a_1998_);
lean_dec_ref(v_a_1997_);
lean_dec(v_n_1995_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg(lean_object* v_cls_2007_, lean_object* v___y_2008_){
_start:
{
lean_object* v_options_2010_; uint8_t v_hasTrace_2011_; 
v_options_2010_ = lean_ctor_get(v___y_2008_, 2);
v_hasTrace_2011_ = lean_ctor_get_uint8(v_options_2010_, sizeof(void*)*1);
if (v_hasTrace_2011_ == 0)
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
lean_dec(v_cls_2007_);
v___x_2012_ = lean_box(v_hasTrace_2011_);
v___x_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2013_, 0, v___x_2012_);
return v___x_2013_;
}
else
{
lean_object* v_inheritedTraceOptions_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; uint8_t v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
v_inheritedTraceOptions_2014_ = lean_ctor_get(v___y_2008_, 13);
v___x_2015_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg___closed__1));
v___x_2016_ = l_Lean_Name_append(v___x_2015_, v_cls_2007_);
v___x_2017_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2014_, v_options_2010_, v___x_2016_);
lean_dec(v___x_2016_);
v___x_2018_ = lean_box(v___x_2017_);
v___x_2019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2018_);
return v___x_2019_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg___boxed(lean_object* v_cls_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg(v_cls_2020_, v___y_2021_);
lean_dec_ref(v___y_2021_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5(lean_object* v_cls_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_){
_start:
{
lean_object* v___x_2030_; 
v___x_2030_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg(v_cls_2024_, v___y_2027_);
return v___x_2030_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___boxed(lean_object* v_cls_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5(v_cls_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec_ref(v___y_2032_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___redArg(lean_object* v_k_2038_, lean_object* v_t_2039_){
_start:
{
lean_object* v___y_2041_; lean_object* v___y_2042_; lean_object* v___y_2043_; lean_object* v___y_2044_; lean_object* v___y_2045_; lean_object* v___y_2046_; lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v___y_2049_; lean_object* v___y_2050_; 
if (lean_obj_tag(v_t_2039_) == 0)
{
lean_object* v_k_2054_; lean_object* v_v_2055_; lean_object* v_l_2056_; lean_object* v_r_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2700_; 
v_k_2054_ = lean_ctor_get(v_t_2039_, 1);
v_v_2055_ = lean_ctor_get(v_t_2039_, 2);
v_l_2056_ = lean_ctor_get(v_t_2039_, 3);
v_r_2057_ = lean_ctor_get(v_t_2039_, 4);
v_isSharedCheck_2700_ = !lean_is_exclusive(v_t_2039_);
if (v_isSharedCheck_2700_ == 0)
{
lean_object* v_unused_2701_; 
v_unused_2701_ = lean_ctor_get(v_t_2039_, 0);
lean_dec(v_unused_2701_);
v___x_2059_ = v_t_2039_;
v_isShared_2060_ = v_isSharedCheck_2700_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_r_2057_);
lean_inc(v_l_2056_);
lean_inc(v_v_2055_);
lean_inc(v_k_2054_);
lean_dec(v_t_2039_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2700_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___y_2062_; lean_object* v___y_2063_; lean_object* v___y_2064_; lean_object* v___y_2065_; lean_object* v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2068_; lean_object* v___y_2069_; lean_object* v___y_2076_; lean_object* v___y_2077_; lean_object* v___y_2078_; lean_object* v___y_2079_; lean_object* v___y_2080_; lean_object* v___y_2081_; lean_object* v___y_2082_; lean_object* v___y_2083_; lean_object* v___y_2084_; lean_object* v___y_2085_; lean_object* v___y_2086_; lean_object* v___y_2087_; lean_object* v___y_2088_; lean_object* v___y_2228_; lean_object* v___y_2229_; lean_object* v___y_2230_; lean_object* v___y_2231_; lean_object* v___y_2232_; lean_object* v___y_2233_; lean_object* v___y_2234_; lean_object* v___y_2235_; lean_object* v___y_2236_; lean_object* v___y_2237_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v_fst_2378_; lean_object* v_snd_2379_; lean_object* v_fst_2380_; lean_object* v_snd_2381_; double v___x_2382_; double v___x_2383_; uint8_t v___x_2384_; 
v_fst_2378_ = lean_ctor_get(v_k_2038_, 0);
v_snd_2379_ = lean_ctor_get(v_k_2038_, 1);
v_fst_2380_ = lean_ctor_get(v_k_2054_, 0);
v_snd_2381_ = lean_ctor_get(v_k_2054_, 1);
v___x_2382_ = lean_unbox_float(v_fst_2378_);
v___x_2383_ = lean_unbox_float(v_fst_2380_);
v___x_2384_ = lean_float_decLt(v___x_2382_, v___x_2383_);
if (v___x_2384_ == 0)
{
double v___x_2385_; double v___x_2386_; uint8_t v___x_2387_; 
v___x_2385_ = lean_unbox_float(v_fst_2380_);
v___x_2386_ = lean_unbox_float(v_fst_2378_);
v___x_2387_ = lean_float_decLt(v___x_2385_, v___x_2386_);
if (v___x_2387_ == 0)
{
uint8_t v___x_2388_; 
v___x_2388_ = l_Lean_Name_cmp(v_snd_2379_, v_snd_2381_);
switch(v___x_2388_)
{
case 0:
{
lean_del_object(v___x_2059_);
goto v___jp_2246_;
}
case 1:
{
lean_del_object(v___x_2059_);
lean_dec(v_v_2055_);
lean_dec(v_k_2054_);
if (lean_obj_tag(v_l_2056_) == 0)
{
if (lean_obj_tag(v_r_2057_) == 0)
{
lean_object* v_size_2389_; lean_object* v_k_2390_; lean_object* v_v_2391_; lean_object* v_l_2392_; lean_object* v_r_2393_; lean_object* v_size_2394_; lean_object* v_k_2395_; lean_object* v_v_2396_; lean_object* v_l_2397_; lean_object* v_r_2398_; lean_object* v___x_2399_; uint8_t v___x_2400_; 
v_size_2389_ = lean_ctor_get(v_l_2056_, 0);
v_k_2390_ = lean_ctor_get(v_l_2056_, 1);
v_v_2391_ = lean_ctor_get(v_l_2056_, 2);
v_l_2392_ = lean_ctor_get(v_l_2056_, 3);
v_r_2393_ = lean_ctor_get(v_l_2056_, 4);
lean_inc(v_r_2393_);
v_size_2394_ = lean_ctor_get(v_r_2057_, 0);
v_k_2395_ = lean_ctor_get(v_r_2057_, 1);
v_v_2396_ = lean_ctor_get(v_r_2057_, 2);
v_l_2397_ = lean_ctor_get(v_r_2057_, 3);
lean_inc(v_l_2397_);
v_r_2398_ = lean_ctor_get(v_r_2057_, 4);
v___x_2399_ = lean_unsigned_to_nat(1u);
v___x_2400_ = lean_nat_dec_lt(v_size_2389_, v_size_2394_);
if (v___x_2400_ == 0)
{
lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2536_; 
lean_inc(v_l_2392_);
lean_inc(v_v_2391_);
lean_inc(v_k_2390_);
v_isSharedCheck_2536_ = !lean_is_exclusive(v_l_2056_);
if (v_isSharedCheck_2536_ == 0)
{
lean_object* v_unused_2537_; lean_object* v_unused_2538_; lean_object* v_unused_2539_; lean_object* v_unused_2540_; lean_object* v_unused_2541_; 
v_unused_2537_ = lean_ctor_get(v_l_2056_, 4);
lean_dec(v_unused_2537_);
v_unused_2538_ = lean_ctor_get(v_l_2056_, 3);
lean_dec(v_unused_2538_);
v_unused_2539_ = lean_ctor_get(v_l_2056_, 2);
lean_dec(v_unused_2539_);
v_unused_2540_ = lean_ctor_get(v_l_2056_, 1);
lean_dec(v_unused_2540_);
v_unused_2541_ = lean_ctor_get(v_l_2056_, 0);
lean_dec(v_unused_2541_);
v___x_2402_ = v_l_2056_;
v_isShared_2403_ = v_isSharedCheck_2536_;
goto v_resetjp_2401_;
}
else
{
lean_dec(v_l_2056_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2536_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2404_; lean_object* v_tree_2405_; 
v___x_2404_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_2390_, v_v_2391_, v_l_2392_, v_r_2393_);
v_tree_2405_ = lean_ctor_get(v___x_2404_, 2);
lean_inc(v_tree_2405_);
if (lean_obj_tag(v_tree_2405_) == 0)
{
lean_object* v_k_2406_; lean_object* v_v_2407_; lean_object* v_size_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; uint8_t v___x_2411_; 
v_k_2406_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_k_2406_);
v_v_2407_ = lean_ctor_get(v___x_2404_, 1);
lean_inc(v_v_2407_);
lean_dec_ref(v___x_2404_);
v_size_2408_ = lean_ctor_get(v_tree_2405_, 0);
v___x_2409_ = lean_unsigned_to_nat(3u);
v___x_2410_ = lean_nat_mul(v___x_2409_, v_size_2408_);
v___x_2411_ = lean_nat_dec_lt(v___x_2410_, v_size_2394_);
lean_dec(v___x_2410_);
if (v___x_2411_ == 0)
{
lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2415_; 
lean_dec(v_l_2397_);
v___x_2412_ = lean_nat_add(v___x_2399_, v_size_2408_);
v___x_2413_ = lean_nat_add(v___x_2412_, v_size_2394_);
lean_dec(v___x_2412_);
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 4, v_r_2057_);
lean_ctor_set(v___x_2402_, 3, v_tree_2405_);
lean_ctor_set(v___x_2402_, 2, v_v_2407_);
lean_ctor_set(v___x_2402_, 1, v_k_2406_);
lean_ctor_set(v___x_2402_, 0, v___x_2413_);
v___x_2415_ = v___x_2402_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v___x_2413_);
lean_ctor_set(v_reuseFailAlloc_2416_, 1, v_k_2406_);
lean_ctor_set(v_reuseFailAlloc_2416_, 2, v_v_2407_);
lean_ctor_set(v_reuseFailAlloc_2416_, 3, v_tree_2405_);
lean_ctor_set(v_reuseFailAlloc_2416_, 4, v_r_2057_);
v___x_2415_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
return v___x_2415_;
}
}
else
{
lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2471_; 
lean_inc(v_r_2398_);
lean_inc(v_v_2396_);
lean_inc(v_k_2395_);
lean_inc(v_size_2394_);
v_isSharedCheck_2471_ = !lean_is_exclusive(v_r_2057_);
if (v_isSharedCheck_2471_ == 0)
{
lean_object* v_unused_2472_; lean_object* v_unused_2473_; lean_object* v_unused_2474_; lean_object* v_unused_2475_; lean_object* v_unused_2476_; 
v_unused_2472_ = lean_ctor_get(v_r_2057_, 4);
lean_dec(v_unused_2472_);
v_unused_2473_ = lean_ctor_get(v_r_2057_, 3);
lean_dec(v_unused_2473_);
v_unused_2474_ = lean_ctor_get(v_r_2057_, 2);
lean_dec(v_unused_2474_);
v_unused_2475_ = lean_ctor_get(v_r_2057_, 1);
lean_dec(v_unused_2475_);
v_unused_2476_ = lean_ctor_get(v_r_2057_, 0);
lean_dec(v_unused_2476_);
v___x_2418_ = v_r_2057_;
v_isShared_2419_ = v_isSharedCheck_2471_;
goto v_resetjp_2417_;
}
else
{
lean_dec(v_r_2057_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2471_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v_size_2420_; lean_object* v_k_2421_; lean_object* v_v_2422_; lean_object* v_l_2423_; lean_object* v_r_2424_; lean_object* v_size_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; uint8_t v___x_2428_; 
v_size_2420_ = lean_ctor_get(v_l_2397_, 0);
v_k_2421_ = lean_ctor_get(v_l_2397_, 1);
v_v_2422_ = lean_ctor_get(v_l_2397_, 2);
v_l_2423_ = lean_ctor_get(v_l_2397_, 3);
v_r_2424_ = lean_ctor_get(v_l_2397_, 4);
v_size_2425_ = lean_ctor_get(v_r_2398_, 0);
v___x_2426_ = lean_unsigned_to_nat(2u);
v___x_2427_ = lean_nat_mul(v___x_2426_, v_size_2425_);
v___x_2428_ = lean_nat_dec_lt(v_size_2420_, v___x_2427_);
lean_dec(v___x_2427_);
if (v___x_2428_ == 0)
{
lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2456_; 
lean_inc(v_r_2424_);
lean_inc(v_l_2423_);
lean_inc(v_v_2422_);
lean_inc(v_k_2421_);
v_isSharedCheck_2456_ = !lean_is_exclusive(v_l_2397_);
if (v_isSharedCheck_2456_ == 0)
{
lean_object* v_unused_2457_; lean_object* v_unused_2458_; lean_object* v_unused_2459_; lean_object* v_unused_2460_; lean_object* v_unused_2461_; 
v_unused_2457_ = lean_ctor_get(v_l_2397_, 4);
lean_dec(v_unused_2457_);
v_unused_2458_ = lean_ctor_get(v_l_2397_, 3);
lean_dec(v_unused_2458_);
v_unused_2459_ = lean_ctor_get(v_l_2397_, 2);
lean_dec(v_unused_2459_);
v_unused_2460_ = lean_ctor_get(v_l_2397_, 1);
lean_dec(v_unused_2460_);
v_unused_2461_ = lean_ctor_get(v_l_2397_, 0);
lean_dec(v_unused_2461_);
v___x_2430_ = v_l_2397_;
v_isShared_2431_ = v_isSharedCheck_2456_;
goto v_resetjp_2429_;
}
else
{
lean_dec(v_l_2397_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2456_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___y_2435_; lean_object* v___y_2436_; lean_object* v___y_2437_; lean_object* v___y_2446_; 
v___x_2432_ = lean_nat_add(v___x_2399_, v_size_2408_);
v___x_2433_ = lean_nat_add(v___x_2432_, v_size_2394_);
lean_dec(v_size_2394_);
if (lean_obj_tag(v_l_2423_) == 0)
{
lean_object* v_size_2454_; 
v_size_2454_ = lean_ctor_get(v_l_2423_, 0);
lean_inc(v_size_2454_);
v___y_2446_ = v_size_2454_;
goto v___jp_2445_;
}
else
{
lean_object* v___x_2455_; 
v___x_2455_ = lean_unsigned_to_nat(0u);
v___y_2446_ = v___x_2455_;
goto v___jp_2445_;
}
v___jp_2434_:
{
lean_object* v___x_2438_; lean_object* v___x_2440_; 
v___x_2438_ = lean_nat_add(v___y_2435_, v___y_2437_);
lean_dec(v___y_2437_);
lean_dec(v___y_2435_);
if (v_isShared_2431_ == 0)
{
lean_ctor_set(v___x_2430_, 4, v_r_2398_);
lean_ctor_set(v___x_2430_, 3, v_r_2424_);
lean_ctor_set(v___x_2430_, 2, v_v_2396_);
lean_ctor_set(v___x_2430_, 1, v_k_2395_);
lean_ctor_set(v___x_2430_, 0, v___x_2438_);
v___x_2440_ = v___x_2430_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v___x_2438_);
lean_ctor_set(v_reuseFailAlloc_2444_, 1, v_k_2395_);
lean_ctor_set(v_reuseFailAlloc_2444_, 2, v_v_2396_);
lean_ctor_set(v_reuseFailAlloc_2444_, 3, v_r_2424_);
lean_ctor_set(v_reuseFailAlloc_2444_, 4, v_r_2398_);
v___x_2440_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
lean_object* v___x_2442_; 
if (v_isShared_2419_ == 0)
{
lean_ctor_set(v___x_2418_, 4, v___x_2440_);
lean_ctor_set(v___x_2418_, 3, v___y_2436_);
lean_ctor_set(v___x_2418_, 2, v_v_2422_);
lean_ctor_set(v___x_2418_, 1, v_k_2421_);
lean_ctor_set(v___x_2418_, 0, v___x_2433_);
v___x_2442_ = v___x_2418_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v___x_2433_);
lean_ctor_set(v_reuseFailAlloc_2443_, 1, v_k_2421_);
lean_ctor_set(v_reuseFailAlloc_2443_, 2, v_v_2422_);
lean_ctor_set(v_reuseFailAlloc_2443_, 3, v___y_2436_);
lean_ctor_set(v_reuseFailAlloc_2443_, 4, v___x_2440_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
v___jp_2445_:
{
lean_object* v___x_2447_; lean_object* v___x_2449_; 
v___x_2447_ = lean_nat_add(v___x_2432_, v___y_2446_);
lean_dec(v___y_2446_);
lean_dec(v___x_2432_);
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 4, v_l_2423_);
lean_ctor_set(v___x_2402_, 3, v_tree_2405_);
lean_ctor_set(v___x_2402_, 2, v_v_2407_);
lean_ctor_set(v___x_2402_, 1, v_k_2406_);
lean_ctor_set(v___x_2402_, 0, v___x_2447_);
v___x_2449_ = v___x_2402_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v___x_2447_);
lean_ctor_set(v_reuseFailAlloc_2453_, 1, v_k_2406_);
lean_ctor_set(v_reuseFailAlloc_2453_, 2, v_v_2407_);
lean_ctor_set(v_reuseFailAlloc_2453_, 3, v_tree_2405_);
lean_ctor_set(v_reuseFailAlloc_2453_, 4, v_l_2423_);
v___x_2449_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
lean_object* v___x_2450_; 
v___x_2450_ = lean_nat_add(v___x_2399_, v_size_2425_);
if (lean_obj_tag(v_r_2424_) == 0)
{
lean_object* v_size_2451_; 
v_size_2451_ = lean_ctor_get(v_r_2424_, 0);
lean_inc(v_size_2451_);
v___y_2435_ = v___x_2450_;
v___y_2436_ = v___x_2449_;
v___y_2437_ = v_size_2451_;
goto v___jp_2434_;
}
else
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_unsigned_to_nat(0u);
v___y_2435_ = v___x_2450_;
v___y_2436_ = v___x_2449_;
v___y_2437_ = v___x_2452_;
goto v___jp_2434_;
}
}
}
}
}
else
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2466_; 
v___x_2462_ = lean_nat_add(v___x_2399_, v_size_2408_);
v___x_2463_ = lean_nat_add(v___x_2462_, v_size_2394_);
lean_dec(v_size_2394_);
v___x_2464_ = lean_nat_add(v___x_2462_, v_size_2420_);
lean_dec(v___x_2462_);
if (v_isShared_2419_ == 0)
{
lean_ctor_set(v___x_2418_, 4, v_l_2397_);
lean_ctor_set(v___x_2418_, 3, v_tree_2405_);
lean_ctor_set(v___x_2418_, 2, v_v_2407_);
lean_ctor_set(v___x_2418_, 1, v_k_2406_);
lean_ctor_set(v___x_2418_, 0, v___x_2464_);
v___x_2466_ = v___x_2418_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v___x_2464_);
lean_ctor_set(v_reuseFailAlloc_2470_, 1, v_k_2406_);
lean_ctor_set(v_reuseFailAlloc_2470_, 2, v_v_2407_);
lean_ctor_set(v_reuseFailAlloc_2470_, 3, v_tree_2405_);
lean_ctor_set(v_reuseFailAlloc_2470_, 4, v_l_2397_);
v___x_2466_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
lean_object* v___x_2468_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 4, v_r_2398_);
lean_ctor_set(v___x_2402_, 3, v___x_2466_);
lean_ctor_set(v___x_2402_, 2, v_v_2396_);
lean_ctor_set(v___x_2402_, 1, v_k_2395_);
lean_ctor_set(v___x_2402_, 0, v___x_2463_);
v___x_2468_ = v___x_2402_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v___x_2463_);
lean_ctor_set(v_reuseFailAlloc_2469_, 1, v_k_2395_);
lean_ctor_set(v_reuseFailAlloc_2469_, 2, v_v_2396_);
lean_ctor_set(v_reuseFailAlloc_2469_, 3, v___x_2466_);
lean_ctor_set(v_reuseFailAlloc_2469_, 4, v_r_2398_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
return v___x_2468_;
}
}
}
}
}
}
else
{
lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2530_; 
lean_inc(v_r_2398_);
lean_inc(v_v_2396_);
lean_inc(v_k_2395_);
lean_inc(v_size_2394_);
v_isSharedCheck_2530_ = !lean_is_exclusive(v_r_2057_);
if (v_isSharedCheck_2530_ == 0)
{
lean_object* v_unused_2531_; lean_object* v_unused_2532_; lean_object* v_unused_2533_; lean_object* v_unused_2534_; lean_object* v_unused_2535_; 
v_unused_2531_ = lean_ctor_get(v_r_2057_, 4);
lean_dec(v_unused_2531_);
v_unused_2532_ = lean_ctor_get(v_r_2057_, 3);
lean_dec(v_unused_2532_);
v_unused_2533_ = lean_ctor_get(v_r_2057_, 2);
lean_dec(v_unused_2533_);
v_unused_2534_ = lean_ctor_get(v_r_2057_, 1);
lean_dec(v_unused_2534_);
v_unused_2535_ = lean_ctor_get(v_r_2057_, 0);
lean_dec(v_unused_2535_);
v___x_2478_ = v_r_2057_;
v_isShared_2479_ = v_isSharedCheck_2530_;
goto v_resetjp_2477_;
}
else
{
lean_dec(v_r_2057_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2530_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
if (lean_obj_tag(v_l_2397_) == 0)
{
if (lean_obj_tag(v_r_2398_) == 0)
{
lean_object* v_k_2480_; lean_object* v_v_2481_; lean_object* v_size_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2486_; 
v_k_2480_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_k_2480_);
v_v_2481_ = lean_ctor_get(v___x_2404_, 1);
lean_inc(v_v_2481_);
lean_dec_ref(v___x_2404_);
v_size_2482_ = lean_ctor_get(v_l_2397_, 0);
v___x_2483_ = lean_nat_add(v___x_2399_, v_size_2394_);
lean_dec(v_size_2394_);
v___x_2484_ = lean_nat_add(v___x_2399_, v_size_2482_);
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 4, v_l_2397_);
lean_ctor_set(v___x_2478_, 3, v_tree_2405_);
lean_ctor_set(v___x_2478_, 2, v_v_2481_);
lean_ctor_set(v___x_2478_, 1, v_k_2480_);
lean_ctor_set(v___x_2478_, 0, v___x_2484_);
v___x_2486_ = v___x_2478_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v___x_2484_);
lean_ctor_set(v_reuseFailAlloc_2490_, 1, v_k_2480_);
lean_ctor_set(v_reuseFailAlloc_2490_, 2, v_v_2481_);
lean_ctor_set(v_reuseFailAlloc_2490_, 3, v_tree_2405_);
lean_ctor_set(v_reuseFailAlloc_2490_, 4, v_l_2397_);
v___x_2486_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
lean_object* v___x_2488_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 4, v_r_2398_);
lean_ctor_set(v___x_2402_, 3, v___x_2486_);
lean_ctor_set(v___x_2402_, 2, v_v_2396_);
lean_ctor_set(v___x_2402_, 1, v_k_2395_);
lean_ctor_set(v___x_2402_, 0, v___x_2483_);
v___x_2488_ = v___x_2402_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v___x_2483_);
lean_ctor_set(v_reuseFailAlloc_2489_, 1, v_k_2395_);
lean_ctor_set(v_reuseFailAlloc_2489_, 2, v_v_2396_);
lean_ctor_set(v_reuseFailAlloc_2489_, 3, v___x_2486_);
lean_ctor_set(v_reuseFailAlloc_2489_, 4, v_r_2398_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
else
{
lean_object* v_k_2491_; lean_object* v_v_2492_; lean_object* v_k_2493_; lean_object* v_v_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2508_; 
lean_dec(v_size_2394_);
v_k_2491_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_k_2491_);
v_v_2492_ = lean_ctor_get(v___x_2404_, 1);
lean_inc(v_v_2492_);
lean_dec_ref(v___x_2404_);
v_k_2493_ = lean_ctor_get(v_l_2397_, 1);
v_v_2494_ = lean_ctor_get(v_l_2397_, 2);
v_isSharedCheck_2508_ = !lean_is_exclusive(v_l_2397_);
if (v_isSharedCheck_2508_ == 0)
{
lean_object* v_unused_2509_; lean_object* v_unused_2510_; lean_object* v_unused_2511_; 
v_unused_2509_ = lean_ctor_get(v_l_2397_, 4);
lean_dec(v_unused_2509_);
v_unused_2510_ = lean_ctor_get(v_l_2397_, 3);
lean_dec(v_unused_2510_);
v_unused_2511_ = lean_ctor_get(v_l_2397_, 0);
lean_dec(v_unused_2511_);
v___x_2496_ = v_l_2397_;
v_isShared_2497_ = v_isSharedCheck_2508_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_v_2494_);
lean_inc(v_k_2493_);
lean_dec(v_l_2397_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2508_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2498_; lean_object* v___x_2500_; 
v___x_2498_ = lean_unsigned_to_nat(3u);
if (v_isShared_2497_ == 0)
{
lean_ctor_set(v___x_2496_, 4, v_r_2398_);
lean_ctor_set(v___x_2496_, 3, v_r_2398_);
lean_ctor_set(v___x_2496_, 2, v_v_2492_);
lean_ctor_set(v___x_2496_, 1, v_k_2491_);
lean_ctor_set(v___x_2496_, 0, v___x_2399_);
v___x_2500_ = v___x_2496_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v___x_2399_);
lean_ctor_set(v_reuseFailAlloc_2507_, 1, v_k_2491_);
lean_ctor_set(v_reuseFailAlloc_2507_, 2, v_v_2492_);
lean_ctor_set(v_reuseFailAlloc_2507_, 3, v_r_2398_);
lean_ctor_set(v_reuseFailAlloc_2507_, 4, v_r_2398_);
v___x_2500_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
lean_object* v___x_2502_; 
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 3, v_r_2398_);
lean_ctor_set(v___x_2478_, 0, v___x_2399_);
v___x_2502_ = v___x_2478_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v___x_2399_);
lean_ctor_set(v_reuseFailAlloc_2506_, 1, v_k_2395_);
lean_ctor_set(v_reuseFailAlloc_2506_, 2, v_v_2396_);
lean_ctor_set(v_reuseFailAlloc_2506_, 3, v_r_2398_);
lean_ctor_set(v_reuseFailAlloc_2506_, 4, v_r_2398_);
v___x_2502_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
lean_object* v___x_2504_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 4, v___x_2502_);
lean_ctor_set(v___x_2402_, 3, v___x_2500_);
lean_ctor_set(v___x_2402_, 2, v_v_2494_);
lean_ctor_set(v___x_2402_, 1, v_k_2493_);
lean_ctor_set(v___x_2402_, 0, v___x_2498_);
v___x_2504_ = v___x_2402_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v___x_2498_);
lean_ctor_set(v_reuseFailAlloc_2505_, 1, v_k_2493_);
lean_ctor_set(v_reuseFailAlloc_2505_, 2, v_v_2494_);
lean_ctor_set(v_reuseFailAlloc_2505_, 3, v___x_2500_);
lean_ctor_set(v_reuseFailAlloc_2505_, 4, v___x_2502_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2398_) == 0)
{
lean_object* v_k_2512_; lean_object* v_v_2513_; lean_object* v___x_2514_; lean_object* v___x_2516_; 
lean_dec(v_size_2394_);
v_k_2512_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_k_2512_);
v_v_2513_ = lean_ctor_get(v___x_2404_, 1);
lean_inc(v_v_2513_);
lean_dec_ref(v___x_2404_);
v___x_2514_ = lean_unsigned_to_nat(3u);
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 4, v_l_2397_);
lean_ctor_set(v___x_2478_, 2, v_v_2513_);
lean_ctor_set(v___x_2478_, 1, v_k_2512_);
lean_ctor_set(v___x_2478_, 0, v___x_2399_);
v___x_2516_ = v___x_2478_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v___x_2399_);
lean_ctor_set(v_reuseFailAlloc_2520_, 1, v_k_2512_);
lean_ctor_set(v_reuseFailAlloc_2520_, 2, v_v_2513_);
lean_ctor_set(v_reuseFailAlloc_2520_, 3, v_l_2397_);
lean_ctor_set(v_reuseFailAlloc_2520_, 4, v_l_2397_);
v___x_2516_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
lean_object* v___x_2518_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 4, v_r_2398_);
lean_ctor_set(v___x_2402_, 3, v___x_2516_);
lean_ctor_set(v___x_2402_, 2, v_v_2396_);
lean_ctor_set(v___x_2402_, 1, v_k_2395_);
lean_ctor_set(v___x_2402_, 0, v___x_2514_);
v___x_2518_ = v___x_2402_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v___x_2514_);
lean_ctor_set(v_reuseFailAlloc_2519_, 1, v_k_2395_);
lean_ctor_set(v_reuseFailAlloc_2519_, 2, v_v_2396_);
lean_ctor_set(v_reuseFailAlloc_2519_, 3, v___x_2516_);
lean_ctor_set(v_reuseFailAlloc_2519_, 4, v_r_2398_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
}
else
{
lean_object* v_k_2521_; lean_object* v_v_2522_; lean_object* v___x_2524_; 
v_k_2521_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_k_2521_);
v_v_2522_ = lean_ctor_get(v___x_2404_, 1);
lean_inc(v_v_2522_);
lean_dec_ref(v___x_2404_);
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 3, v_r_2398_);
v___x_2524_ = v___x_2478_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_size_2394_);
lean_ctor_set(v_reuseFailAlloc_2529_, 1, v_k_2395_);
lean_ctor_set(v_reuseFailAlloc_2529_, 2, v_v_2396_);
lean_ctor_set(v_reuseFailAlloc_2529_, 3, v_r_2398_);
lean_ctor_set(v_reuseFailAlloc_2529_, 4, v_r_2398_);
v___x_2524_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
lean_object* v___x_2525_; lean_object* v___x_2527_; 
v___x_2525_ = lean_unsigned_to_nat(2u);
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 4, v___x_2524_);
lean_ctor_set(v___x_2402_, 3, v_r_2398_);
lean_ctor_set(v___x_2402_, 2, v_v_2522_);
lean_ctor_set(v___x_2402_, 1, v_k_2521_);
lean_ctor_set(v___x_2402_, 0, v___x_2525_);
v___x_2527_ = v___x_2402_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v___x_2525_);
lean_ctor_set(v_reuseFailAlloc_2528_, 1, v_k_2521_);
lean_ctor_set(v_reuseFailAlloc_2528_, 2, v_v_2522_);
lean_ctor_set(v_reuseFailAlloc_2528_, 3, v_r_2398_);
lean_ctor_set(v_reuseFailAlloc_2528_, 4, v___x_2524_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
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
lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2694_; 
lean_inc(v_r_2398_);
lean_inc(v_v_2396_);
lean_inc(v_k_2395_);
v_isSharedCheck_2694_ = !lean_is_exclusive(v_r_2057_);
if (v_isSharedCheck_2694_ == 0)
{
lean_object* v_unused_2695_; lean_object* v_unused_2696_; lean_object* v_unused_2697_; lean_object* v_unused_2698_; lean_object* v_unused_2699_; 
v_unused_2695_ = lean_ctor_get(v_r_2057_, 4);
lean_dec(v_unused_2695_);
v_unused_2696_ = lean_ctor_get(v_r_2057_, 3);
lean_dec(v_unused_2696_);
v_unused_2697_ = lean_ctor_get(v_r_2057_, 2);
lean_dec(v_unused_2697_);
v_unused_2698_ = lean_ctor_get(v_r_2057_, 1);
lean_dec(v_unused_2698_);
v_unused_2699_ = lean_ctor_get(v_r_2057_, 0);
lean_dec(v_unused_2699_);
v___x_2543_ = v_r_2057_;
v_isShared_2544_ = v_isSharedCheck_2694_;
goto v_resetjp_2542_;
}
else
{
lean_dec(v_r_2057_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2694_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2545_; lean_object* v_tree_2546_; 
v___x_2545_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_2395_, v_v_2396_, v_l_2397_, v_r_2398_);
v_tree_2546_ = lean_ctor_get(v___x_2545_, 2);
lean_inc(v_tree_2546_);
if (lean_obj_tag(v_tree_2546_) == 0)
{
lean_object* v_k_2547_; lean_object* v_v_2548_; lean_object* v_size_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; uint8_t v___x_2552_; 
v_k_2547_ = lean_ctor_get(v___x_2545_, 0);
lean_inc(v_k_2547_);
v_v_2548_ = lean_ctor_get(v___x_2545_, 1);
lean_inc(v_v_2548_);
lean_dec_ref(v___x_2545_);
v_size_2549_ = lean_ctor_get(v_tree_2546_, 0);
v___x_2550_ = lean_unsigned_to_nat(3u);
v___x_2551_ = lean_nat_mul(v___x_2550_, v_size_2549_);
v___x_2552_ = lean_nat_dec_lt(v___x_2551_, v_size_2389_);
lean_dec(v___x_2551_);
if (v___x_2552_ == 0)
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2556_; 
lean_dec(v_r_2393_);
v___x_2553_ = lean_nat_add(v___x_2399_, v_size_2389_);
v___x_2554_ = lean_nat_add(v___x_2553_, v_size_2549_);
lean_dec(v___x_2553_);
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 4, v_tree_2546_);
lean_ctor_set(v___x_2543_, 3, v_l_2056_);
lean_ctor_set(v___x_2543_, 2, v_v_2548_);
lean_ctor_set(v___x_2543_, 1, v_k_2547_);
lean_ctor_set(v___x_2543_, 0, v___x_2554_);
v___x_2556_ = v___x_2543_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v___x_2554_);
lean_ctor_set(v_reuseFailAlloc_2557_, 1, v_k_2547_);
lean_ctor_set(v_reuseFailAlloc_2557_, 2, v_v_2548_);
lean_ctor_set(v_reuseFailAlloc_2557_, 3, v_l_2056_);
lean_ctor_set(v_reuseFailAlloc_2557_, 4, v_tree_2546_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
else
{
lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2623_; 
lean_inc(v_l_2392_);
lean_inc(v_v_2391_);
lean_inc(v_k_2390_);
lean_inc(v_size_2389_);
v_isSharedCheck_2623_ = !lean_is_exclusive(v_l_2056_);
if (v_isSharedCheck_2623_ == 0)
{
lean_object* v_unused_2624_; lean_object* v_unused_2625_; lean_object* v_unused_2626_; lean_object* v_unused_2627_; lean_object* v_unused_2628_; 
v_unused_2624_ = lean_ctor_get(v_l_2056_, 4);
lean_dec(v_unused_2624_);
v_unused_2625_ = lean_ctor_get(v_l_2056_, 3);
lean_dec(v_unused_2625_);
v_unused_2626_ = lean_ctor_get(v_l_2056_, 2);
lean_dec(v_unused_2626_);
v_unused_2627_ = lean_ctor_get(v_l_2056_, 1);
lean_dec(v_unused_2627_);
v_unused_2628_ = lean_ctor_get(v_l_2056_, 0);
lean_dec(v_unused_2628_);
v___x_2559_ = v_l_2056_;
v_isShared_2560_ = v_isSharedCheck_2623_;
goto v_resetjp_2558_;
}
else
{
lean_dec(v_l_2056_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2623_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v_size_2561_; lean_object* v_size_2562_; lean_object* v_k_2563_; lean_object* v_v_2564_; lean_object* v_l_2565_; lean_object* v_r_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; uint8_t v___x_2569_; 
v_size_2561_ = lean_ctor_get(v_l_2392_, 0);
v_size_2562_ = lean_ctor_get(v_r_2393_, 0);
v_k_2563_ = lean_ctor_get(v_r_2393_, 1);
v_v_2564_ = lean_ctor_get(v_r_2393_, 2);
v_l_2565_ = lean_ctor_get(v_r_2393_, 3);
v_r_2566_ = lean_ctor_get(v_r_2393_, 4);
v___x_2567_ = lean_unsigned_to_nat(2u);
v___x_2568_ = lean_nat_mul(v___x_2567_, v_size_2561_);
v___x_2569_ = lean_nat_dec_lt(v_size_2562_, v___x_2568_);
lean_dec(v___x_2568_);
if (v___x_2569_ == 0)
{
lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2607_; 
lean_inc(v_r_2566_);
lean_inc(v_l_2565_);
lean_inc(v_v_2564_);
lean_inc(v_k_2563_);
lean_del_object(v___x_2559_);
v_isSharedCheck_2607_ = !lean_is_exclusive(v_r_2393_);
if (v_isSharedCheck_2607_ == 0)
{
lean_object* v_unused_2608_; lean_object* v_unused_2609_; lean_object* v_unused_2610_; lean_object* v_unused_2611_; lean_object* v_unused_2612_; 
v_unused_2608_ = lean_ctor_get(v_r_2393_, 4);
lean_dec(v_unused_2608_);
v_unused_2609_ = lean_ctor_get(v_r_2393_, 3);
lean_dec(v_unused_2609_);
v_unused_2610_ = lean_ctor_get(v_r_2393_, 2);
lean_dec(v_unused_2610_);
v_unused_2611_ = lean_ctor_get(v_r_2393_, 1);
lean_dec(v_unused_2611_);
v_unused_2612_ = lean_ctor_get(v_r_2393_, 0);
lean_dec(v_unused_2612_);
v___x_2571_ = v_r_2393_;
v_isShared_2572_ = v_isSharedCheck_2607_;
goto v_resetjp_2570_;
}
else
{
lean_dec(v_r_2393_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2607_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___x_2595_; lean_object* v___y_2597_; 
v___x_2573_ = lean_nat_add(v___x_2399_, v_size_2389_);
lean_dec(v_size_2389_);
v___x_2574_ = lean_nat_add(v___x_2573_, v_size_2549_);
lean_dec(v___x_2573_);
v___x_2595_ = lean_nat_add(v___x_2399_, v_size_2561_);
if (lean_obj_tag(v_l_2565_) == 0)
{
lean_object* v_size_2605_; 
v_size_2605_ = lean_ctor_get(v_l_2565_, 0);
lean_inc(v_size_2605_);
v___y_2597_ = v_size_2605_;
goto v___jp_2596_;
}
else
{
lean_object* v___x_2606_; 
v___x_2606_ = lean_unsigned_to_nat(0u);
v___y_2597_ = v___x_2606_;
goto v___jp_2596_;
}
v___jp_2575_:
{
lean_object* v___x_2579_; lean_object* v___x_2581_; 
v___x_2579_ = lean_nat_add(v___y_2577_, v___y_2578_);
lean_dec(v___y_2578_);
lean_dec(v___y_2577_);
lean_inc_ref(v_tree_2546_);
if (v_isShared_2572_ == 0)
{
lean_ctor_set(v___x_2571_, 4, v_tree_2546_);
lean_ctor_set(v___x_2571_, 3, v_r_2566_);
lean_ctor_set(v___x_2571_, 2, v_v_2548_);
lean_ctor_set(v___x_2571_, 1, v_k_2547_);
lean_ctor_set(v___x_2571_, 0, v___x_2579_);
v___x_2581_ = v___x_2571_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v___x_2579_);
lean_ctor_set(v_reuseFailAlloc_2594_, 1, v_k_2547_);
lean_ctor_set(v_reuseFailAlloc_2594_, 2, v_v_2548_);
lean_ctor_set(v_reuseFailAlloc_2594_, 3, v_r_2566_);
lean_ctor_set(v_reuseFailAlloc_2594_, 4, v_tree_2546_);
v___x_2581_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2588_; 
v_isSharedCheck_2588_ = !lean_is_exclusive(v_tree_2546_);
if (v_isSharedCheck_2588_ == 0)
{
lean_object* v_unused_2589_; lean_object* v_unused_2590_; lean_object* v_unused_2591_; lean_object* v_unused_2592_; lean_object* v_unused_2593_; 
v_unused_2589_ = lean_ctor_get(v_tree_2546_, 4);
lean_dec(v_unused_2589_);
v_unused_2590_ = lean_ctor_get(v_tree_2546_, 3);
lean_dec(v_unused_2590_);
v_unused_2591_ = lean_ctor_get(v_tree_2546_, 2);
lean_dec(v_unused_2591_);
v_unused_2592_ = lean_ctor_get(v_tree_2546_, 1);
lean_dec(v_unused_2592_);
v_unused_2593_ = lean_ctor_get(v_tree_2546_, 0);
lean_dec(v_unused_2593_);
v___x_2583_ = v_tree_2546_;
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
else
{
lean_dec(v_tree_2546_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2584_ == 0)
{
lean_ctor_set(v___x_2583_, 4, v___x_2581_);
lean_ctor_set(v___x_2583_, 3, v___y_2576_);
lean_ctor_set(v___x_2583_, 2, v_v_2564_);
lean_ctor_set(v___x_2583_, 1, v_k_2563_);
lean_ctor_set(v___x_2583_, 0, v___x_2574_);
v___x_2586_ = v___x_2583_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v___x_2574_);
lean_ctor_set(v_reuseFailAlloc_2587_, 1, v_k_2563_);
lean_ctor_set(v_reuseFailAlloc_2587_, 2, v_v_2564_);
lean_ctor_set(v_reuseFailAlloc_2587_, 3, v___y_2576_);
lean_ctor_set(v_reuseFailAlloc_2587_, 4, v___x_2581_);
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
v___jp_2596_:
{
lean_object* v___x_2598_; lean_object* v___x_2600_; 
v___x_2598_ = lean_nat_add(v___x_2595_, v___y_2597_);
lean_dec(v___y_2597_);
lean_dec(v___x_2595_);
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 4, v_l_2565_);
lean_ctor_set(v___x_2543_, 3, v_l_2392_);
lean_ctor_set(v___x_2543_, 2, v_v_2391_);
lean_ctor_set(v___x_2543_, 1, v_k_2390_);
lean_ctor_set(v___x_2543_, 0, v___x_2598_);
v___x_2600_ = v___x_2543_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v___x_2598_);
lean_ctor_set(v_reuseFailAlloc_2604_, 1, v_k_2390_);
lean_ctor_set(v_reuseFailAlloc_2604_, 2, v_v_2391_);
lean_ctor_set(v_reuseFailAlloc_2604_, 3, v_l_2392_);
lean_ctor_set(v_reuseFailAlloc_2604_, 4, v_l_2565_);
v___x_2600_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
lean_object* v___x_2601_; 
v___x_2601_ = lean_nat_add(v___x_2399_, v_size_2549_);
if (lean_obj_tag(v_r_2566_) == 0)
{
lean_object* v_size_2602_; 
v_size_2602_ = lean_ctor_get(v_r_2566_, 0);
lean_inc(v_size_2602_);
v___y_2576_ = v___x_2600_;
v___y_2577_ = v___x_2601_;
v___y_2578_ = v_size_2602_;
goto v___jp_2575_;
}
else
{
lean_object* v___x_2603_; 
v___x_2603_ = lean_unsigned_to_nat(0u);
v___y_2576_ = v___x_2600_;
v___y_2577_ = v___x_2601_;
v___y_2578_ = v___x_2603_;
goto v___jp_2575_;
}
}
}
}
}
else
{
lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2618_; 
v___x_2613_ = lean_nat_add(v___x_2399_, v_size_2389_);
lean_dec(v_size_2389_);
v___x_2614_ = lean_nat_add(v___x_2613_, v_size_2549_);
lean_dec(v___x_2613_);
v___x_2615_ = lean_nat_add(v___x_2399_, v_size_2549_);
v___x_2616_ = lean_nat_add(v___x_2615_, v_size_2562_);
lean_dec(v___x_2615_);
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 4, v_tree_2546_);
lean_ctor_set(v___x_2543_, 3, v_r_2393_);
lean_ctor_set(v___x_2543_, 2, v_v_2548_);
lean_ctor_set(v___x_2543_, 1, v_k_2547_);
lean_ctor_set(v___x_2543_, 0, v___x_2616_);
v___x_2618_ = v___x_2543_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2616_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v_k_2547_);
lean_ctor_set(v_reuseFailAlloc_2622_, 2, v_v_2548_);
lean_ctor_set(v_reuseFailAlloc_2622_, 3, v_r_2393_);
lean_ctor_set(v_reuseFailAlloc_2622_, 4, v_tree_2546_);
v___x_2618_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
lean_object* v___x_2620_; 
if (v_isShared_2560_ == 0)
{
lean_ctor_set(v___x_2559_, 4, v___x_2618_);
lean_ctor_set(v___x_2559_, 0, v___x_2614_);
v___x_2620_ = v___x_2559_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v___x_2614_);
lean_ctor_set(v_reuseFailAlloc_2621_, 1, v_k_2390_);
lean_ctor_set(v_reuseFailAlloc_2621_, 2, v_v_2391_);
lean_ctor_set(v_reuseFailAlloc_2621_, 3, v_l_2392_);
lean_ctor_set(v_reuseFailAlloc_2621_, 4, v___x_2618_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_2392_) == 0)
{
lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2652_; 
lean_inc_ref(v_l_2392_);
lean_inc(v_v_2391_);
lean_inc(v_k_2390_);
lean_inc(v_size_2389_);
v_isSharedCheck_2652_ = !lean_is_exclusive(v_l_2056_);
if (v_isSharedCheck_2652_ == 0)
{
lean_object* v_unused_2653_; lean_object* v_unused_2654_; lean_object* v_unused_2655_; lean_object* v_unused_2656_; lean_object* v_unused_2657_; 
v_unused_2653_ = lean_ctor_get(v_l_2056_, 4);
lean_dec(v_unused_2653_);
v_unused_2654_ = lean_ctor_get(v_l_2056_, 3);
lean_dec(v_unused_2654_);
v_unused_2655_ = lean_ctor_get(v_l_2056_, 2);
lean_dec(v_unused_2655_);
v_unused_2656_ = lean_ctor_get(v_l_2056_, 1);
lean_dec(v_unused_2656_);
v_unused_2657_ = lean_ctor_get(v_l_2056_, 0);
lean_dec(v_unused_2657_);
v___x_2630_ = v_l_2056_;
v_isShared_2631_ = v_isSharedCheck_2652_;
goto v_resetjp_2629_;
}
else
{
lean_dec(v_l_2056_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2652_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
if (lean_obj_tag(v_r_2393_) == 0)
{
lean_object* v_k_2632_; lean_object* v_v_2633_; lean_object* v_size_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2638_; 
v_k_2632_ = lean_ctor_get(v___x_2545_, 0);
lean_inc(v_k_2632_);
v_v_2633_ = lean_ctor_get(v___x_2545_, 1);
lean_inc(v_v_2633_);
lean_dec_ref(v___x_2545_);
v_size_2634_ = lean_ctor_get(v_r_2393_, 0);
v___x_2635_ = lean_nat_add(v___x_2399_, v_size_2389_);
lean_dec(v_size_2389_);
v___x_2636_ = lean_nat_add(v___x_2399_, v_size_2634_);
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 4, v_tree_2546_);
lean_ctor_set(v___x_2543_, 3, v_r_2393_);
lean_ctor_set(v___x_2543_, 2, v_v_2633_);
lean_ctor_set(v___x_2543_, 1, v_k_2632_);
lean_ctor_set(v___x_2543_, 0, v___x_2636_);
v___x_2638_ = v___x_2543_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v___x_2636_);
lean_ctor_set(v_reuseFailAlloc_2642_, 1, v_k_2632_);
lean_ctor_set(v_reuseFailAlloc_2642_, 2, v_v_2633_);
lean_ctor_set(v_reuseFailAlloc_2642_, 3, v_r_2393_);
lean_ctor_set(v_reuseFailAlloc_2642_, 4, v_tree_2546_);
v___x_2638_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
lean_object* v___x_2640_; 
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 4, v___x_2638_);
lean_ctor_set(v___x_2630_, 0, v___x_2635_);
v___x_2640_ = v___x_2630_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v___x_2635_);
lean_ctor_set(v_reuseFailAlloc_2641_, 1, v_k_2390_);
lean_ctor_set(v_reuseFailAlloc_2641_, 2, v_v_2391_);
lean_ctor_set(v_reuseFailAlloc_2641_, 3, v_l_2392_);
lean_ctor_set(v_reuseFailAlloc_2641_, 4, v___x_2638_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
return v___x_2640_;
}
}
}
else
{
lean_object* v_k_2643_; lean_object* v_v_2644_; lean_object* v___x_2645_; lean_object* v___x_2647_; 
lean_dec(v_size_2389_);
v_k_2643_ = lean_ctor_get(v___x_2545_, 0);
lean_inc(v_k_2643_);
v_v_2644_ = lean_ctor_get(v___x_2545_, 1);
lean_inc(v_v_2644_);
lean_dec_ref(v___x_2545_);
v___x_2645_ = lean_unsigned_to_nat(3u);
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 4, v_r_2393_);
lean_ctor_set(v___x_2543_, 3, v_r_2393_);
lean_ctor_set(v___x_2543_, 2, v_v_2644_);
lean_ctor_set(v___x_2543_, 1, v_k_2643_);
lean_ctor_set(v___x_2543_, 0, v___x_2399_);
v___x_2647_ = v___x_2543_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v___x_2399_);
lean_ctor_set(v_reuseFailAlloc_2651_, 1, v_k_2643_);
lean_ctor_set(v_reuseFailAlloc_2651_, 2, v_v_2644_);
lean_ctor_set(v_reuseFailAlloc_2651_, 3, v_r_2393_);
lean_ctor_set(v_reuseFailAlloc_2651_, 4, v_r_2393_);
v___x_2647_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
lean_object* v___x_2649_; 
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 4, v___x_2647_);
lean_ctor_set(v___x_2630_, 0, v___x_2645_);
v___x_2649_ = v___x_2630_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v___x_2645_);
lean_ctor_set(v_reuseFailAlloc_2650_, 1, v_k_2390_);
lean_ctor_set(v_reuseFailAlloc_2650_, 2, v_v_2391_);
lean_ctor_set(v_reuseFailAlloc_2650_, 3, v_l_2392_);
lean_ctor_set(v_reuseFailAlloc_2650_, 4, v___x_2647_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2393_) == 0)
{
lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2682_; 
lean_inc(v_l_2392_);
lean_inc(v_v_2391_);
lean_inc(v_k_2390_);
v_isSharedCheck_2682_ = !lean_is_exclusive(v_l_2056_);
if (v_isSharedCheck_2682_ == 0)
{
lean_object* v_unused_2683_; lean_object* v_unused_2684_; lean_object* v_unused_2685_; lean_object* v_unused_2686_; lean_object* v_unused_2687_; 
v_unused_2683_ = lean_ctor_get(v_l_2056_, 4);
lean_dec(v_unused_2683_);
v_unused_2684_ = lean_ctor_get(v_l_2056_, 3);
lean_dec(v_unused_2684_);
v_unused_2685_ = lean_ctor_get(v_l_2056_, 2);
lean_dec(v_unused_2685_);
v_unused_2686_ = lean_ctor_get(v_l_2056_, 1);
lean_dec(v_unused_2686_);
v_unused_2687_ = lean_ctor_get(v_l_2056_, 0);
lean_dec(v_unused_2687_);
v___x_2659_ = v_l_2056_;
v_isShared_2660_ = v_isSharedCheck_2682_;
goto v_resetjp_2658_;
}
else
{
lean_dec(v_l_2056_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2682_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v_k_2661_; lean_object* v_v_2662_; lean_object* v_k_2663_; lean_object* v_v_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2678_; 
v_k_2661_ = lean_ctor_get(v___x_2545_, 0);
lean_inc(v_k_2661_);
v_v_2662_ = lean_ctor_get(v___x_2545_, 1);
lean_inc(v_v_2662_);
lean_dec_ref(v___x_2545_);
v_k_2663_ = lean_ctor_get(v_r_2393_, 1);
v_v_2664_ = lean_ctor_get(v_r_2393_, 2);
v_isSharedCheck_2678_ = !lean_is_exclusive(v_r_2393_);
if (v_isSharedCheck_2678_ == 0)
{
lean_object* v_unused_2679_; lean_object* v_unused_2680_; lean_object* v_unused_2681_; 
v_unused_2679_ = lean_ctor_get(v_r_2393_, 4);
lean_dec(v_unused_2679_);
v_unused_2680_ = lean_ctor_get(v_r_2393_, 3);
lean_dec(v_unused_2680_);
v_unused_2681_ = lean_ctor_get(v_r_2393_, 0);
lean_dec(v_unused_2681_);
v___x_2666_ = v_r_2393_;
v_isShared_2667_ = v_isSharedCheck_2678_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_v_2664_);
lean_inc(v_k_2663_);
lean_dec(v_r_2393_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2678_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2668_; lean_object* v___x_2670_; 
v___x_2668_ = lean_unsigned_to_nat(3u);
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 4, v_l_2392_);
lean_ctor_set(v___x_2666_, 3, v_l_2392_);
lean_ctor_set(v___x_2666_, 2, v_v_2391_);
lean_ctor_set(v___x_2666_, 1, v_k_2390_);
lean_ctor_set(v___x_2666_, 0, v___x_2399_);
v___x_2670_ = v___x_2666_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v___x_2399_);
lean_ctor_set(v_reuseFailAlloc_2677_, 1, v_k_2390_);
lean_ctor_set(v_reuseFailAlloc_2677_, 2, v_v_2391_);
lean_ctor_set(v_reuseFailAlloc_2677_, 3, v_l_2392_);
lean_ctor_set(v_reuseFailAlloc_2677_, 4, v_l_2392_);
v___x_2670_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
lean_object* v___x_2672_; 
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 4, v_l_2392_);
lean_ctor_set(v___x_2543_, 3, v_l_2392_);
lean_ctor_set(v___x_2543_, 2, v_v_2662_);
lean_ctor_set(v___x_2543_, 1, v_k_2661_);
lean_ctor_set(v___x_2543_, 0, v___x_2399_);
v___x_2672_ = v___x_2543_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v___x_2399_);
lean_ctor_set(v_reuseFailAlloc_2676_, 1, v_k_2661_);
lean_ctor_set(v_reuseFailAlloc_2676_, 2, v_v_2662_);
lean_ctor_set(v_reuseFailAlloc_2676_, 3, v_l_2392_);
lean_ctor_set(v_reuseFailAlloc_2676_, 4, v_l_2392_);
v___x_2672_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
lean_object* v___x_2674_; 
if (v_isShared_2660_ == 0)
{
lean_ctor_set(v___x_2659_, 4, v___x_2672_);
lean_ctor_set(v___x_2659_, 3, v___x_2670_);
lean_ctor_set(v___x_2659_, 2, v_v_2664_);
lean_ctor_set(v___x_2659_, 1, v_k_2663_);
lean_ctor_set(v___x_2659_, 0, v___x_2668_);
v___x_2674_ = v___x_2659_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v___x_2668_);
lean_ctor_set(v_reuseFailAlloc_2675_, 1, v_k_2663_);
lean_ctor_set(v_reuseFailAlloc_2675_, 2, v_v_2664_);
lean_ctor_set(v_reuseFailAlloc_2675_, 3, v___x_2670_);
lean_ctor_set(v_reuseFailAlloc_2675_, 4, v___x_2672_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
}
}
}
else
{
lean_object* v_k_2688_; lean_object* v_v_2689_; lean_object* v___x_2690_; lean_object* v___x_2692_; 
v_k_2688_ = lean_ctor_get(v___x_2545_, 0);
lean_inc(v_k_2688_);
v_v_2689_ = lean_ctor_get(v___x_2545_, 1);
lean_inc(v_v_2689_);
lean_dec_ref(v___x_2545_);
v___x_2690_ = lean_unsigned_to_nat(2u);
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 4, v_r_2393_);
lean_ctor_set(v___x_2543_, 3, v_l_2056_);
lean_ctor_set(v___x_2543_, 2, v_v_2689_);
lean_ctor_set(v___x_2543_, 1, v_k_2688_);
lean_ctor_set(v___x_2543_, 0, v___x_2690_);
v___x_2692_ = v___x_2543_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v___x_2690_);
lean_ctor_set(v_reuseFailAlloc_2693_, 1, v_k_2688_);
lean_ctor_set(v_reuseFailAlloc_2693_, 2, v_v_2689_);
lean_ctor_set(v_reuseFailAlloc_2693_, 3, v_l_2056_);
lean_ctor_set(v_reuseFailAlloc_2693_, 4, v_r_2393_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
return v___x_2692_;
}
}
}
}
}
}
}
else
{
return v_l_2056_;
}
}
else
{
return v_r_2057_;
}
}
default: 
{
goto v___jp_2094_;
}
}
}
else
{
goto v___jp_2094_;
}
}
else
{
lean_del_object(v___x_2059_);
goto v___jp_2246_;
}
v___jp_2061_:
{
lean_object* v___x_2070_; lean_object* v___x_2072_; 
v___x_2070_ = lean_nat_add(v___y_2066_, v___y_2069_);
lean_dec(v___y_2069_);
lean_dec(v___y_2066_);
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 4, v___y_2065_);
lean_ctor_set(v___x_2059_, 3, v___y_2062_);
lean_ctor_set(v___x_2059_, 0, v___x_2070_);
v___x_2072_ = v___x_2059_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v___x_2070_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v_k_2054_);
lean_ctor_set(v_reuseFailAlloc_2074_, 2, v_v_2055_);
lean_ctor_set(v_reuseFailAlloc_2074_, 3, v___y_2062_);
lean_ctor_set(v_reuseFailAlloc_2074_, 4, v___y_2065_);
v___x_2072_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
lean_object* v___x_2073_; 
v___x_2073_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2073_, 0, v___y_2063_);
lean_ctor_set(v___x_2073_, 1, v___y_2068_);
lean_ctor_set(v___x_2073_, 2, v___y_2064_);
lean_ctor_set(v___x_2073_, 3, v___y_2067_);
lean_ctor_set(v___x_2073_, 4, v___x_2072_);
return v___x_2073_;
}
}
v___jp_2075_:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2089_ = lean_nat_add(v___y_2076_, v___y_2088_);
lean_dec(v___y_2088_);
lean_dec(v___y_2076_);
v___x_2090_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
lean_ctor_set(v___x_2090_, 1, v___y_2087_);
lean_ctor_set(v___x_2090_, 2, v___y_2082_);
lean_ctor_set(v___x_2090_, 3, v___y_2081_);
lean_ctor_set(v___x_2090_, 4, v___y_2079_);
v___x_2091_ = lean_nat_add(v___y_2084_, v___y_2085_);
lean_dec(v___y_2085_);
if (lean_obj_tag(v___y_2077_) == 0)
{
lean_object* v_size_2092_; 
v_size_2092_ = lean_ctor_get(v___y_2077_, 0);
lean_inc(v_size_2092_);
v___y_2062_ = v___y_2077_;
v___y_2063_ = v___y_2078_;
v___y_2064_ = v___y_2080_;
v___y_2065_ = v___y_2083_;
v___y_2066_ = v___x_2091_;
v___y_2067_ = v___x_2090_;
v___y_2068_ = v___y_2086_;
v___y_2069_ = v_size_2092_;
goto v___jp_2061_;
}
else
{
lean_object* v___x_2093_; 
v___x_2093_ = lean_unsigned_to_nat(0u);
v___y_2062_ = v___y_2077_;
v___y_2063_ = v___y_2078_;
v___y_2064_ = v___y_2080_;
v___y_2065_ = v___y_2083_;
v___y_2066_ = v___x_2091_;
v___y_2067_ = v___x_2090_;
v___y_2068_ = v___y_2086_;
v___y_2069_ = v___x_2093_;
goto v___jp_2061_;
}
}
v___jp_2094_:
{
lean_object* v_impl_2095_; lean_object* v___x_2096_; 
v_impl_2095_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___redArg(v_k_2038_, v_r_2057_);
v___x_2096_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_2095_) == 0)
{
if (lean_obj_tag(v_l_2056_) == 0)
{
lean_object* v_size_2097_; lean_object* v_size_2098_; lean_object* v_k_2099_; lean_object* v_v_2100_; lean_object* v_l_2101_; lean_object* v_r_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; uint8_t v___x_2105_; 
v_size_2097_ = lean_ctor_get(v_impl_2095_, 0);
lean_inc(v_size_2097_);
v_size_2098_ = lean_ctor_get(v_l_2056_, 0);
v_k_2099_ = lean_ctor_get(v_l_2056_, 1);
v_v_2100_ = lean_ctor_get(v_l_2056_, 2);
v_l_2101_ = lean_ctor_get(v_l_2056_, 3);
v_r_2102_ = lean_ctor_get(v_l_2056_, 4);
v___x_2103_ = lean_unsigned_to_nat(3u);
v___x_2104_ = lean_nat_mul(v___x_2103_, v_size_2097_);
v___x_2105_ = lean_nat_dec_lt(v___x_2104_, v_size_2098_);
lean_dec(v___x_2104_);
if (v___x_2105_ == 0)
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; 
lean_del_object(v___x_2059_);
v___x_2106_ = lean_nat_add(v___x_2096_, v_size_2098_);
v___x_2107_ = lean_nat_add(v___x_2106_, v_size_2097_);
lean_dec(v_size_2097_);
lean_dec(v___x_2106_);
v___x_2108_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
lean_ctor_set(v___x_2108_, 1, v_k_2054_);
lean_ctor_set(v___x_2108_, 2, v_v_2055_);
lean_ctor_set(v___x_2108_, 3, v_l_2056_);
lean_ctor_set(v___x_2108_, 4, v_impl_2095_);
return v___x_2108_;
}
else
{
lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2145_; 
lean_inc(v_r_2102_);
lean_inc(v_l_2101_);
lean_inc(v_v_2100_);
lean_inc(v_k_2099_);
lean_inc(v_size_2098_);
v_isSharedCheck_2145_ = !lean_is_exclusive(v_l_2056_);
if (v_isSharedCheck_2145_ == 0)
{
lean_object* v_unused_2146_; lean_object* v_unused_2147_; lean_object* v_unused_2148_; lean_object* v_unused_2149_; lean_object* v_unused_2150_; 
v_unused_2146_ = lean_ctor_get(v_l_2056_, 4);
lean_dec(v_unused_2146_);
v_unused_2147_ = lean_ctor_get(v_l_2056_, 3);
lean_dec(v_unused_2147_);
v_unused_2148_ = lean_ctor_get(v_l_2056_, 2);
lean_dec(v_unused_2148_);
v_unused_2149_ = lean_ctor_get(v_l_2056_, 1);
lean_dec(v_unused_2149_);
v_unused_2150_ = lean_ctor_get(v_l_2056_, 0);
lean_dec(v_unused_2150_);
v___x_2110_ = v_l_2056_;
v_isShared_2111_ = v_isSharedCheck_2145_;
goto v_resetjp_2109_;
}
else
{
lean_dec(v_l_2056_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2145_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v_size_2112_; lean_object* v_size_2113_; lean_object* v_k_2114_; lean_object* v_v_2115_; lean_object* v_l_2116_; lean_object* v_r_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; uint8_t v___x_2120_; 
v_size_2112_ = lean_ctor_get(v_l_2101_, 0);
v_size_2113_ = lean_ctor_get(v_r_2102_, 0);
v_k_2114_ = lean_ctor_get(v_r_2102_, 1);
v_v_2115_ = lean_ctor_get(v_r_2102_, 2);
v_l_2116_ = lean_ctor_get(v_r_2102_, 3);
v_r_2117_ = lean_ctor_get(v_r_2102_, 4);
v___x_2118_ = lean_unsigned_to_nat(2u);
v___x_2119_ = lean_nat_mul(v___x_2118_, v_size_2112_);
v___x_2120_ = lean_nat_dec_lt(v_size_2113_, v___x_2119_);
lean_dec(v___x_2119_);
if (v___x_2120_ == 0)
{
lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; 
lean_inc(v_r_2117_);
lean_inc(v_l_2116_);
lean_inc(v_v_2115_);
lean_inc(v_k_2114_);
lean_del_object(v___x_2110_);
lean_dec(v_r_2102_);
v___x_2121_ = lean_nat_add(v___x_2096_, v_size_2098_);
lean_dec(v_size_2098_);
v___x_2122_ = lean_nat_add(v___x_2121_, v_size_2097_);
lean_dec(v___x_2121_);
v___x_2123_ = lean_nat_add(v___x_2096_, v_size_2112_);
if (lean_obj_tag(v_l_2116_) == 0)
{
lean_object* v_size_2124_; 
v_size_2124_ = lean_ctor_get(v_l_2116_, 0);
lean_inc(v_size_2124_);
v___y_2076_ = v___x_2123_;
v___y_2077_ = v_r_2117_;
v___y_2078_ = v___x_2122_;
v___y_2079_ = v_l_2116_;
v___y_2080_ = v_v_2115_;
v___y_2081_ = v_l_2101_;
v___y_2082_ = v_v_2100_;
v___y_2083_ = v_impl_2095_;
v___y_2084_ = v___x_2096_;
v___y_2085_ = v_size_2097_;
v___y_2086_ = v_k_2114_;
v___y_2087_ = v_k_2099_;
v___y_2088_ = v_size_2124_;
goto v___jp_2075_;
}
else
{
lean_object* v___x_2125_; 
v___x_2125_ = lean_unsigned_to_nat(0u);
v___y_2076_ = v___x_2123_;
v___y_2077_ = v_r_2117_;
v___y_2078_ = v___x_2122_;
v___y_2079_ = v_l_2116_;
v___y_2080_ = v_v_2115_;
v___y_2081_ = v_l_2101_;
v___y_2082_ = v_v_2100_;
v___y_2083_ = v_impl_2095_;
v___y_2084_ = v___x_2096_;
v___y_2085_ = v_size_2097_;
v___y_2086_ = v_k_2114_;
v___y_2087_ = v_k_2099_;
v___y_2088_ = v___x_2125_;
goto v___jp_2075_;
}
}
else
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2131_; 
lean_del_object(v___x_2059_);
v___x_2126_ = lean_nat_add(v___x_2096_, v_size_2098_);
lean_dec(v_size_2098_);
v___x_2127_ = lean_nat_add(v___x_2126_, v_size_2097_);
lean_dec(v___x_2126_);
v___x_2128_ = lean_nat_add(v___x_2096_, v_size_2097_);
lean_dec(v_size_2097_);
v___x_2129_ = lean_nat_add(v___x_2128_, v_size_2113_);
lean_dec(v___x_2128_);
lean_inc_ref(v_impl_2095_);
if (v_isShared_2111_ == 0)
{
lean_ctor_set(v___x_2110_, 4, v_impl_2095_);
lean_ctor_set(v___x_2110_, 3, v_r_2102_);
lean_ctor_set(v___x_2110_, 2, v_v_2055_);
lean_ctor_set(v___x_2110_, 1, v_k_2054_);
lean_ctor_set(v___x_2110_, 0, v___x_2129_);
v___x_2131_ = v___x_2110_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v___x_2129_);
lean_ctor_set(v_reuseFailAlloc_2144_, 1, v_k_2054_);
lean_ctor_set(v_reuseFailAlloc_2144_, 2, v_v_2055_);
lean_ctor_set(v_reuseFailAlloc_2144_, 3, v_r_2102_);
lean_ctor_set(v_reuseFailAlloc_2144_, 4, v_impl_2095_);
v___x_2131_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2138_; 
v_isSharedCheck_2138_ = !lean_is_exclusive(v_impl_2095_);
if (v_isSharedCheck_2138_ == 0)
{
lean_object* v_unused_2139_; lean_object* v_unused_2140_; lean_object* v_unused_2141_; lean_object* v_unused_2142_; lean_object* v_unused_2143_; 
v_unused_2139_ = lean_ctor_get(v_impl_2095_, 4);
lean_dec(v_unused_2139_);
v_unused_2140_ = lean_ctor_get(v_impl_2095_, 3);
lean_dec(v_unused_2140_);
v_unused_2141_ = lean_ctor_get(v_impl_2095_, 2);
lean_dec(v_unused_2141_);
v_unused_2142_ = lean_ctor_get(v_impl_2095_, 1);
lean_dec(v_unused_2142_);
v_unused_2143_ = lean_ctor_get(v_impl_2095_, 0);
lean_dec(v_unused_2143_);
v___x_2133_ = v_impl_2095_;
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
else
{
lean_dec(v_impl_2095_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2136_; 
if (v_isShared_2134_ == 0)
{
lean_ctor_set(v___x_2133_, 4, v___x_2131_);
lean_ctor_set(v___x_2133_, 3, v_l_2101_);
lean_ctor_set(v___x_2133_, 2, v_v_2100_);
lean_ctor_set(v___x_2133_, 1, v_k_2099_);
lean_ctor_set(v___x_2133_, 0, v___x_2127_);
v___x_2136_ = v___x_2133_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2127_);
lean_ctor_set(v_reuseFailAlloc_2137_, 1, v_k_2099_);
lean_ctor_set(v_reuseFailAlloc_2137_, 2, v_v_2100_);
lean_ctor_set(v_reuseFailAlloc_2137_, 3, v_l_2101_);
lean_ctor_set(v_reuseFailAlloc_2137_, 4, v___x_2131_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
lean_del_object(v___x_2059_);
v_size_2151_ = lean_ctor_get(v_impl_2095_, 0);
lean_inc(v_size_2151_);
v___x_2152_ = lean_nat_add(v___x_2096_, v_size_2151_);
lean_dec(v_size_2151_);
v___x_2153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2153_, 0, v___x_2152_);
lean_ctor_set(v___x_2153_, 1, v_k_2054_);
lean_ctor_set(v___x_2153_, 2, v_v_2055_);
lean_ctor_set(v___x_2153_, 3, v_l_2056_);
lean_ctor_set(v___x_2153_, 4, v_impl_2095_);
return v___x_2153_;
}
}
else
{
lean_del_object(v___x_2059_);
if (lean_obj_tag(v_l_2056_) == 0)
{
lean_object* v_l_2154_; 
v_l_2154_ = lean_ctor_get(v_l_2056_, 3);
if (lean_obj_tag(v_l_2154_) == 0)
{
lean_object* v_r_2155_; 
lean_inc_ref(v_l_2154_);
v_r_2155_ = lean_ctor_get(v_l_2056_, 4);
lean_inc(v_r_2155_);
if (lean_obj_tag(v_r_2155_) == 0)
{
lean_object* v_size_2156_; lean_object* v_k_2157_; lean_object* v_v_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2180_; 
v_size_2156_ = lean_ctor_get(v_l_2056_, 0);
v_k_2157_ = lean_ctor_get(v_l_2056_, 1);
v_v_2158_ = lean_ctor_get(v_l_2056_, 2);
v_isSharedCheck_2180_ = !lean_is_exclusive(v_l_2056_);
if (v_isSharedCheck_2180_ == 0)
{
lean_object* v_unused_2181_; lean_object* v_unused_2182_; 
v_unused_2181_ = lean_ctor_get(v_l_2056_, 4);
lean_dec(v_unused_2181_);
v_unused_2182_ = lean_ctor_get(v_l_2056_, 3);
lean_dec(v_unused_2182_);
v___x_2160_ = v_l_2056_;
v_isShared_2161_ = v_isSharedCheck_2180_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_v_2158_);
lean_inc(v_k_2157_);
lean_inc(v_size_2156_);
lean_dec(v_l_2056_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2180_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v_size_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2166_; 
v_size_2162_ = lean_ctor_get(v_r_2155_, 0);
v___x_2163_ = lean_nat_add(v___x_2096_, v_size_2156_);
lean_dec(v_size_2156_);
v___x_2164_ = lean_nat_add(v___x_2096_, v_size_2162_);
lean_inc_ref(v_r_2155_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 4, v_impl_2095_);
lean_ctor_set(v___x_2160_, 3, v_r_2155_);
lean_ctor_set(v___x_2160_, 2, v_v_2055_);
lean_ctor_set(v___x_2160_, 1, v_k_2054_);
lean_ctor_set(v___x_2160_, 0, v___x_2164_);
v___x_2166_ = v___x_2160_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2164_);
lean_ctor_set(v_reuseFailAlloc_2179_, 1, v_k_2054_);
lean_ctor_set(v_reuseFailAlloc_2179_, 2, v_v_2055_);
lean_ctor_set(v_reuseFailAlloc_2179_, 3, v_r_2155_);
lean_ctor_set(v_reuseFailAlloc_2179_, 4, v_impl_2095_);
v___x_2166_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2173_; 
v_isSharedCheck_2173_ = !lean_is_exclusive(v_r_2155_);
if (v_isSharedCheck_2173_ == 0)
{
lean_object* v_unused_2174_; lean_object* v_unused_2175_; lean_object* v_unused_2176_; lean_object* v_unused_2177_; lean_object* v_unused_2178_; 
v_unused_2174_ = lean_ctor_get(v_r_2155_, 4);
lean_dec(v_unused_2174_);
v_unused_2175_ = lean_ctor_get(v_r_2155_, 3);
lean_dec(v_unused_2175_);
v_unused_2176_ = lean_ctor_get(v_r_2155_, 2);
lean_dec(v_unused_2176_);
v_unused_2177_ = lean_ctor_get(v_r_2155_, 1);
lean_dec(v_unused_2177_);
v_unused_2178_ = lean_ctor_get(v_r_2155_, 0);
lean_dec(v_unused_2178_);
v___x_2168_ = v_r_2155_;
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
else
{
lean_dec(v_r_2155_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2171_; 
if (v_isShared_2169_ == 0)
{
lean_ctor_set(v___x_2168_, 4, v___x_2166_);
lean_ctor_set(v___x_2168_, 3, v_l_2154_);
lean_ctor_set(v___x_2168_, 2, v_v_2158_);
lean_ctor_set(v___x_2168_, 1, v_k_2157_);
lean_ctor_set(v___x_2168_, 0, v___x_2163_);
v___x_2171_ = v___x_2168_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2163_);
lean_ctor_set(v_reuseFailAlloc_2172_, 1, v_k_2157_);
lean_ctor_set(v_reuseFailAlloc_2172_, 2, v_v_2158_);
lean_ctor_set(v_reuseFailAlloc_2172_, 3, v_l_2154_);
lean_ctor_set(v_reuseFailAlloc_2172_, 4, v___x_2166_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
}
}
}
}
}
else
{
lean_object* v_k_2183_; lean_object* v_v_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2193_; 
v_k_2183_ = lean_ctor_get(v_l_2056_, 1);
v_v_2184_ = lean_ctor_get(v_l_2056_, 2);
v_isSharedCheck_2193_ = !lean_is_exclusive(v_l_2056_);
if (v_isSharedCheck_2193_ == 0)
{
lean_object* v_unused_2194_; lean_object* v_unused_2195_; lean_object* v_unused_2196_; 
v_unused_2194_ = lean_ctor_get(v_l_2056_, 4);
lean_dec(v_unused_2194_);
v_unused_2195_ = lean_ctor_get(v_l_2056_, 3);
lean_dec(v_unused_2195_);
v_unused_2196_ = lean_ctor_get(v_l_2056_, 0);
lean_dec(v_unused_2196_);
v___x_2186_ = v_l_2056_;
v_isShared_2187_ = v_isSharedCheck_2193_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_v_2184_);
lean_inc(v_k_2183_);
lean_dec(v_l_2056_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2193_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2188_; lean_object* v___x_2190_; 
v___x_2188_ = lean_unsigned_to_nat(3u);
if (v_isShared_2187_ == 0)
{
lean_ctor_set(v___x_2186_, 3, v_r_2155_);
lean_ctor_set(v___x_2186_, 2, v_v_2055_);
lean_ctor_set(v___x_2186_, 1, v_k_2054_);
lean_ctor_set(v___x_2186_, 0, v___x_2096_);
v___x_2190_ = v___x_2186_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2096_);
lean_ctor_set(v_reuseFailAlloc_2192_, 1, v_k_2054_);
lean_ctor_set(v_reuseFailAlloc_2192_, 2, v_v_2055_);
lean_ctor_set(v_reuseFailAlloc_2192_, 3, v_r_2155_);
lean_ctor_set(v_reuseFailAlloc_2192_, 4, v_r_2155_);
v___x_2190_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2191_; 
v___x_2191_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2188_);
lean_ctor_set(v___x_2191_, 1, v_k_2183_);
lean_ctor_set(v___x_2191_, 2, v_v_2184_);
lean_ctor_set(v___x_2191_, 3, v_l_2154_);
lean_ctor_set(v___x_2191_, 4, v___x_2190_);
return v___x_2191_;
}
}
}
}
else
{
lean_object* v_r_2197_; 
v_r_2197_ = lean_ctor_get(v_l_2056_, 4);
lean_inc(v_r_2197_);
if (lean_obj_tag(v_r_2197_) == 0)
{
lean_object* v_k_2198_; lean_object* v_v_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2220_; 
lean_inc(v_l_2154_);
v_k_2198_ = lean_ctor_get(v_l_2056_, 1);
v_v_2199_ = lean_ctor_get(v_l_2056_, 2);
v_isSharedCheck_2220_ = !lean_is_exclusive(v_l_2056_);
if (v_isSharedCheck_2220_ == 0)
{
lean_object* v_unused_2221_; lean_object* v_unused_2222_; lean_object* v_unused_2223_; 
v_unused_2221_ = lean_ctor_get(v_l_2056_, 4);
lean_dec(v_unused_2221_);
v_unused_2222_ = lean_ctor_get(v_l_2056_, 3);
lean_dec(v_unused_2222_);
v_unused_2223_ = lean_ctor_get(v_l_2056_, 0);
lean_dec(v_unused_2223_);
v___x_2201_ = v_l_2056_;
v_isShared_2202_ = v_isSharedCheck_2220_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_v_2199_);
lean_inc(v_k_2198_);
lean_dec(v_l_2056_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2220_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v_k_2203_; lean_object* v_v_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2216_; 
v_k_2203_ = lean_ctor_get(v_r_2197_, 1);
v_v_2204_ = lean_ctor_get(v_r_2197_, 2);
v_isSharedCheck_2216_ = !lean_is_exclusive(v_r_2197_);
if (v_isSharedCheck_2216_ == 0)
{
lean_object* v_unused_2217_; lean_object* v_unused_2218_; lean_object* v_unused_2219_; 
v_unused_2217_ = lean_ctor_get(v_r_2197_, 4);
lean_dec(v_unused_2217_);
v_unused_2218_ = lean_ctor_get(v_r_2197_, 3);
lean_dec(v_unused_2218_);
v_unused_2219_ = lean_ctor_get(v_r_2197_, 0);
lean_dec(v_unused_2219_);
v___x_2206_ = v_r_2197_;
v_isShared_2207_ = v_isSharedCheck_2216_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_v_2204_);
lean_inc(v_k_2203_);
lean_dec(v_r_2197_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2216_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2208_; lean_object* v___x_2210_; 
v___x_2208_ = lean_unsigned_to_nat(3u);
if (v_isShared_2207_ == 0)
{
lean_ctor_set(v___x_2206_, 4, v_l_2154_);
lean_ctor_set(v___x_2206_, 3, v_l_2154_);
lean_ctor_set(v___x_2206_, 2, v_v_2199_);
lean_ctor_set(v___x_2206_, 1, v_k_2198_);
lean_ctor_set(v___x_2206_, 0, v___x_2096_);
v___x_2210_ = v___x_2206_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v___x_2096_);
lean_ctor_set(v_reuseFailAlloc_2215_, 1, v_k_2198_);
lean_ctor_set(v_reuseFailAlloc_2215_, 2, v_v_2199_);
lean_ctor_set(v_reuseFailAlloc_2215_, 3, v_l_2154_);
lean_ctor_set(v_reuseFailAlloc_2215_, 4, v_l_2154_);
v___x_2210_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
lean_object* v___x_2212_; 
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 4, v_l_2154_);
lean_ctor_set(v___x_2201_, 2, v_v_2055_);
lean_ctor_set(v___x_2201_, 1, v_k_2054_);
lean_ctor_set(v___x_2201_, 0, v___x_2096_);
v___x_2212_ = v___x_2201_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v___x_2096_);
lean_ctor_set(v_reuseFailAlloc_2214_, 1, v_k_2054_);
lean_ctor_set(v_reuseFailAlloc_2214_, 2, v_v_2055_);
lean_ctor_set(v_reuseFailAlloc_2214_, 3, v_l_2154_);
lean_ctor_set(v_reuseFailAlloc_2214_, 4, v_l_2154_);
v___x_2212_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
lean_object* v___x_2213_; 
v___x_2213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2208_);
lean_ctor_set(v___x_2213_, 1, v_k_2203_);
lean_ctor_set(v___x_2213_, 2, v_v_2204_);
lean_ctor_set(v___x_2213_, 3, v___x_2210_);
lean_ctor_set(v___x_2213_, 4, v___x_2212_);
return v___x_2213_;
}
}
}
}
}
else
{
lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2224_ = lean_unsigned_to_nat(2u);
v___x_2225_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
lean_ctor_set(v___x_2225_, 1, v_k_2054_);
lean_ctor_set(v___x_2225_, 2, v_v_2055_);
lean_ctor_set(v___x_2225_, 3, v_l_2056_);
lean_ctor_set(v___x_2225_, 4, v_r_2197_);
return v___x_2225_;
}
}
}
else
{
lean_object* v___x_2226_; 
v___x_2226_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2096_);
lean_ctor_set(v___x_2226_, 1, v_k_2054_);
lean_ctor_set(v___x_2226_, 2, v_v_2055_);
lean_ctor_set(v___x_2226_, 3, v_l_2056_);
lean_ctor_set(v___x_2226_, 4, v_l_2056_);
return v___x_2226_;
}
}
}
v___jp_2227_:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2241_ = lean_nat_add(v___y_2234_, v___y_2240_);
lean_dec(v___y_2240_);
lean_dec(v___y_2234_);
v___x_2242_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2241_);
lean_ctor_set(v___x_2242_, 1, v_k_2054_);
lean_ctor_set(v___x_2242_, 2, v_v_2055_);
lean_ctor_set(v___x_2242_, 3, v___y_2239_);
lean_ctor_set(v___x_2242_, 4, v___y_2236_);
v___x_2243_ = lean_nat_add(v___y_2230_, v___y_2238_);
lean_dec(v___y_2238_);
if (lean_obj_tag(v___y_2237_) == 0)
{
lean_object* v_size_2244_; 
v_size_2244_ = lean_ctor_get(v___y_2237_, 0);
lean_inc(v_size_2244_);
v___y_2041_ = v___y_2228_;
v___y_2042_ = v___y_2229_;
v___y_2043_ = v___x_2242_;
v___y_2044_ = v___y_2233_;
v___y_2045_ = v___y_2232_;
v___y_2046_ = v___y_2231_;
v___y_2047_ = v___x_2243_;
v___y_2048_ = v___y_2235_;
v___y_2049_ = v___y_2237_;
v___y_2050_ = v_size_2244_;
goto v___jp_2040_;
}
else
{
lean_object* v___x_2245_; 
v___x_2245_ = lean_unsigned_to_nat(0u);
v___y_2041_ = v___y_2228_;
v___y_2042_ = v___y_2229_;
v___y_2043_ = v___x_2242_;
v___y_2044_ = v___y_2233_;
v___y_2045_ = v___y_2232_;
v___y_2046_ = v___y_2231_;
v___y_2047_ = v___x_2243_;
v___y_2048_ = v___y_2235_;
v___y_2049_ = v___y_2237_;
v___y_2050_ = v___x_2245_;
goto v___jp_2040_;
}
}
v___jp_2246_:
{
lean_object* v_impl_2247_; lean_object* v___x_2248_; 
v_impl_2247_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___redArg(v_k_2038_, v_l_2056_);
v___x_2248_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_2247_) == 0)
{
if (lean_obj_tag(v_r_2057_) == 0)
{
lean_object* v_size_2249_; lean_object* v_size_2250_; lean_object* v_k_2251_; lean_object* v_v_2252_; lean_object* v_l_2253_; lean_object* v_r_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; uint8_t v___x_2257_; 
v_size_2249_ = lean_ctor_get(v_impl_2247_, 0);
lean_inc(v_size_2249_);
v_size_2250_ = lean_ctor_get(v_r_2057_, 0);
v_k_2251_ = lean_ctor_get(v_r_2057_, 1);
v_v_2252_ = lean_ctor_get(v_r_2057_, 2);
v_l_2253_ = lean_ctor_get(v_r_2057_, 3);
v_r_2254_ = lean_ctor_get(v_r_2057_, 4);
v___x_2255_ = lean_unsigned_to_nat(3u);
v___x_2256_ = lean_nat_mul(v___x_2255_, v_size_2249_);
v___x_2257_ = lean_nat_dec_lt(v___x_2256_, v_size_2250_);
lean_dec(v___x_2256_);
if (v___x_2257_ == 0)
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2258_ = lean_nat_add(v___x_2248_, v_size_2249_);
lean_dec(v_size_2249_);
v___x_2259_ = lean_nat_add(v___x_2258_, v_size_2250_);
lean_dec(v___x_2258_);
v___x_2260_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2259_);
lean_ctor_set(v___x_2260_, 1, v_k_2054_);
lean_ctor_set(v___x_2260_, 2, v_v_2055_);
lean_ctor_set(v___x_2260_, 3, v_impl_2247_);
lean_ctor_set(v___x_2260_, 4, v_r_2057_);
return v___x_2260_;
}
else
{
lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2295_; 
lean_inc(v_r_2254_);
lean_inc(v_l_2253_);
lean_inc(v_v_2252_);
lean_inc(v_k_2251_);
lean_inc(v_size_2250_);
v_isSharedCheck_2295_ = !lean_is_exclusive(v_r_2057_);
if (v_isSharedCheck_2295_ == 0)
{
lean_object* v_unused_2296_; lean_object* v_unused_2297_; lean_object* v_unused_2298_; lean_object* v_unused_2299_; lean_object* v_unused_2300_; 
v_unused_2296_ = lean_ctor_get(v_r_2057_, 4);
lean_dec(v_unused_2296_);
v_unused_2297_ = lean_ctor_get(v_r_2057_, 3);
lean_dec(v_unused_2297_);
v_unused_2298_ = lean_ctor_get(v_r_2057_, 2);
lean_dec(v_unused_2298_);
v_unused_2299_ = lean_ctor_get(v_r_2057_, 1);
lean_dec(v_unused_2299_);
v_unused_2300_ = lean_ctor_get(v_r_2057_, 0);
lean_dec(v_unused_2300_);
v___x_2262_ = v_r_2057_;
v_isShared_2263_ = v_isSharedCheck_2295_;
goto v_resetjp_2261_;
}
else
{
lean_dec(v_r_2057_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2295_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v_size_2264_; lean_object* v_k_2265_; lean_object* v_v_2266_; lean_object* v_l_2267_; lean_object* v_r_2268_; lean_object* v_size_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; uint8_t v___x_2272_; 
v_size_2264_ = lean_ctor_get(v_l_2253_, 0);
v_k_2265_ = lean_ctor_get(v_l_2253_, 1);
v_v_2266_ = lean_ctor_get(v_l_2253_, 2);
v_l_2267_ = lean_ctor_get(v_l_2253_, 3);
v_r_2268_ = lean_ctor_get(v_l_2253_, 4);
v_size_2269_ = lean_ctor_get(v_r_2254_, 0);
v___x_2270_ = lean_unsigned_to_nat(2u);
v___x_2271_ = lean_nat_mul(v___x_2270_, v_size_2269_);
v___x_2272_ = lean_nat_dec_lt(v_size_2264_, v___x_2271_);
lean_dec(v___x_2271_);
if (v___x_2272_ == 0)
{
lean_object* v___x_2273_; lean_object* v___x_2274_; 
lean_inc(v_size_2269_);
lean_inc(v_r_2268_);
lean_inc(v_l_2267_);
lean_inc(v_v_2266_);
lean_inc(v_k_2265_);
lean_del_object(v___x_2262_);
lean_dec(v_l_2253_);
v___x_2273_ = lean_nat_add(v___x_2248_, v_size_2249_);
lean_dec(v_size_2249_);
v___x_2274_ = lean_nat_add(v___x_2273_, v_size_2250_);
lean_dec(v_size_2250_);
if (lean_obj_tag(v_l_2267_) == 0)
{
lean_object* v_size_2275_; 
v_size_2275_ = lean_ctor_get(v_l_2267_, 0);
lean_inc(v_size_2275_);
v___y_2228_ = v_v_2266_;
v___y_2229_ = v_k_2251_;
v___y_2230_ = v___x_2248_;
v___y_2231_ = v_v_2252_;
v___y_2232_ = v___x_2274_;
v___y_2233_ = v_k_2265_;
v___y_2234_ = v___x_2273_;
v___y_2235_ = v_r_2254_;
v___y_2236_ = v_l_2267_;
v___y_2237_ = v_r_2268_;
v___y_2238_ = v_size_2269_;
v___y_2239_ = v_impl_2247_;
v___y_2240_ = v_size_2275_;
goto v___jp_2227_;
}
else
{
lean_object* v___x_2276_; 
v___x_2276_ = lean_unsigned_to_nat(0u);
v___y_2228_ = v_v_2266_;
v___y_2229_ = v_k_2251_;
v___y_2230_ = v___x_2248_;
v___y_2231_ = v_v_2252_;
v___y_2232_ = v___x_2274_;
v___y_2233_ = v_k_2265_;
v___y_2234_ = v___x_2273_;
v___y_2235_ = v_r_2254_;
v___y_2236_ = v_l_2267_;
v___y_2237_ = v_r_2268_;
v___y_2238_ = v_size_2269_;
v___y_2239_ = v_impl_2247_;
v___y_2240_ = v___x_2276_;
goto v___jp_2227_;
}
}
else
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2281_; 
v___x_2277_ = lean_nat_add(v___x_2248_, v_size_2249_);
lean_dec(v_size_2249_);
v___x_2278_ = lean_nat_add(v___x_2277_, v_size_2250_);
lean_dec(v_size_2250_);
v___x_2279_ = lean_nat_add(v___x_2277_, v_size_2264_);
lean_dec(v___x_2277_);
lean_inc_ref(v_impl_2247_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 4, v_l_2253_);
lean_ctor_set(v___x_2262_, 3, v_impl_2247_);
lean_ctor_set(v___x_2262_, 2, v_v_2055_);
lean_ctor_set(v___x_2262_, 1, v_k_2054_);
lean_ctor_set(v___x_2262_, 0, v___x_2279_);
v___x_2281_ = v___x_2262_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v___x_2279_);
lean_ctor_set(v_reuseFailAlloc_2294_, 1, v_k_2054_);
lean_ctor_set(v_reuseFailAlloc_2294_, 2, v_v_2055_);
lean_ctor_set(v_reuseFailAlloc_2294_, 3, v_impl_2247_);
lean_ctor_set(v_reuseFailAlloc_2294_, 4, v_l_2253_);
v___x_2281_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2288_; 
v_isSharedCheck_2288_ = !lean_is_exclusive(v_impl_2247_);
if (v_isSharedCheck_2288_ == 0)
{
lean_object* v_unused_2289_; lean_object* v_unused_2290_; lean_object* v_unused_2291_; lean_object* v_unused_2292_; lean_object* v_unused_2293_; 
v_unused_2289_ = lean_ctor_get(v_impl_2247_, 4);
lean_dec(v_unused_2289_);
v_unused_2290_ = lean_ctor_get(v_impl_2247_, 3);
lean_dec(v_unused_2290_);
v_unused_2291_ = lean_ctor_get(v_impl_2247_, 2);
lean_dec(v_unused_2291_);
v_unused_2292_ = lean_ctor_get(v_impl_2247_, 1);
lean_dec(v_unused_2292_);
v_unused_2293_ = lean_ctor_get(v_impl_2247_, 0);
lean_dec(v_unused_2293_);
v___x_2283_ = v_impl_2247_;
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
else
{
lean_dec(v_impl_2247_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 4, v_r_2254_);
lean_ctor_set(v___x_2283_, 3, v___x_2281_);
lean_ctor_set(v___x_2283_, 2, v_v_2252_);
lean_ctor_set(v___x_2283_, 1, v_k_2251_);
lean_ctor_set(v___x_2283_, 0, v___x_2278_);
v___x_2286_ = v___x_2283_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v___x_2278_);
lean_ctor_set(v_reuseFailAlloc_2287_, 1, v_k_2251_);
lean_ctor_set(v_reuseFailAlloc_2287_, 2, v_v_2252_);
lean_ctor_set(v_reuseFailAlloc_2287_, 3, v___x_2281_);
lean_ctor_set(v_reuseFailAlloc_2287_, 4, v_r_2254_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v_size_2301_ = lean_ctor_get(v_impl_2247_, 0);
lean_inc(v_size_2301_);
v___x_2302_ = lean_nat_add(v___x_2248_, v_size_2301_);
lean_dec(v_size_2301_);
v___x_2303_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
lean_ctor_set(v___x_2303_, 1, v_k_2054_);
lean_ctor_set(v___x_2303_, 2, v_v_2055_);
lean_ctor_set(v___x_2303_, 3, v_impl_2247_);
lean_ctor_set(v___x_2303_, 4, v_r_2057_);
return v___x_2303_;
}
}
else
{
if (lean_obj_tag(v_r_2057_) == 0)
{
lean_object* v_l_2304_; 
v_l_2304_ = lean_ctor_get(v_r_2057_, 3);
lean_inc(v_l_2304_);
if (lean_obj_tag(v_l_2304_) == 0)
{
lean_object* v_r_2305_; 
v_r_2305_ = lean_ctor_get(v_r_2057_, 4);
lean_inc(v_r_2305_);
if (lean_obj_tag(v_r_2305_) == 0)
{
lean_object* v_size_2306_; lean_object* v_k_2307_; lean_object* v_v_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2319_; 
v_size_2306_ = lean_ctor_get(v_r_2057_, 0);
v_k_2307_ = lean_ctor_get(v_r_2057_, 1);
v_v_2308_ = lean_ctor_get(v_r_2057_, 2);
v_isSharedCheck_2319_ = !lean_is_exclusive(v_r_2057_);
if (v_isSharedCheck_2319_ == 0)
{
lean_object* v_unused_2320_; lean_object* v_unused_2321_; 
v_unused_2320_ = lean_ctor_get(v_r_2057_, 4);
lean_dec(v_unused_2320_);
v_unused_2321_ = lean_ctor_get(v_r_2057_, 3);
lean_dec(v_unused_2321_);
v___x_2310_ = v_r_2057_;
v_isShared_2311_ = v_isSharedCheck_2319_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_v_2308_);
lean_inc(v_k_2307_);
lean_inc(v_size_2306_);
lean_dec(v_r_2057_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2319_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v_size_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2316_; 
v_size_2312_ = lean_ctor_get(v_l_2304_, 0);
v___x_2313_ = lean_nat_add(v___x_2248_, v_size_2306_);
lean_dec(v_size_2306_);
v___x_2314_ = lean_nat_add(v___x_2248_, v_size_2312_);
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 4, v_l_2304_);
lean_ctor_set(v___x_2310_, 3, v_impl_2247_);
lean_ctor_set(v___x_2310_, 2, v_v_2055_);
lean_ctor_set(v___x_2310_, 1, v_k_2054_);
lean_ctor_set(v___x_2310_, 0, v___x_2314_);
v___x_2316_ = v___x_2310_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v___x_2314_);
lean_ctor_set(v_reuseFailAlloc_2318_, 1, v_k_2054_);
lean_ctor_set(v_reuseFailAlloc_2318_, 2, v_v_2055_);
lean_ctor_set(v_reuseFailAlloc_2318_, 3, v_impl_2247_);
lean_ctor_set(v_reuseFailAlloc_2318_, 4, v_l_2304_);
v___x_2316_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
lean_object* v___x_2317_; 
v___x_2317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2313_);
lean_ctor_set(v___x_2317_, 1, v_k_2307_);
lean_ctor_set(v___x_2317_, 2, v_v_2308_);
lean_ctor_set(v___x_2317_, 3, v___x_2316_);
lean_ctor_set(v___x_2317_, 4, v_r_2305_);
return v___x_2317_;
}
}
}
else
{
lean_object* v_k_2322_; lean_object* v_v_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2344_; 
v_k_2322_ = lean_ctor_get(v_r_2057_, 1);
v_v_2323_ = lean_ctor_get(v_r_2057_, 2);
v_isSharedCheck_2344_ = !lean_is_exclusive(v_r_2057_);
if (v_isSharedCheck_2344_ == 0)
{
lean_object* v_unused_2345_; lean_object* v_unused_2346_; lean_object* v_unused_2347_; 
v_unused_2345_ = lean_ctor_get(v_r_2057_, 4);
lean_dec(v_unused_2345_);
v_unused_2346_ = lean_ctor_get(v_r_2057_, 3);
lean_dec(v_unused_2346_);
v_unused_2347_ = lean_ctor_get(v_r_2057_, 0);
lean_dec(v_unused_2347_);
v___x_2325_ = v_r_2057_;
v_isShared_2326_ = v_isSharedCheck_2344_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_v_2323_);
lean_inc(v_k_2322_);
lean_dec(v_r_2057_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2344_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v_k_2327_; lean_object* v_v_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2340_; 
v_k_2327_ = lean_ctor_get(v_l_2304_, 1);
v_v_2328_ = lean_ctor_get(v_l_2304_, 2);
v_isSharedCheck_2340_ = !lean_is_exclusive(v_l_2304_);
if (v_isSharedCheck_2340_ == 0)
{
lean_object* v_unused_2341_; lean_object* v_unused_2342_; lean_object* v_unused_2343_; 
v_unused_2341_ = lean_ctor_get(v_l_2304_, 4);
lean_dec(v_unused_2341_);
v_unused_2342_ = lean_ctor_get(v_l_2304_, 3);
lean_dec(v_unused_2342_);
v_unused_2343_ = lean_ctor_get(v_l_2304_, 0);
lean_dec(v_unused_2343_);
v___x_2330_ = v_l_2304_;
v_isShared_2331_ = v_isSharedCheck_2340_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_v_2328_);
lean_inc(v_k_2327_);
lean_dec(v_l_2304_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2340_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2332_; lean_object* v___x_2334_; 
v___x_2332_ = lean_unsigned_to_nat(3u);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 4, v_r_2305_);
lean_ctor_set(v___x_2330_, 3, v_r_2305_);
lean_ctor_set(v___x_2330_, 2, v_v_2055_);
lean_ctor_set(v___x_2330_, 1, v_k_2054_);
lean_ctor_set(v___x_2330_, 0, v___x_2248_);
v___x_2334_ = v___x_2330_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v___x_2248_);
lean_ctor_set(v_reuseFailAlloc_2339_, 1, v_k_2054_);
lean_ctor_set(v_reuseFailAlloc_2339_, 2, v_v_2055_);
lean_ctor_set(v_reuseFailAlloc_2339_, 3, v_r_2305_);
lean_ctor_set(v_reuseFailAlloc_2339_, 4, v_r_2305_);
v___x_2334_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
lean_object* v___x_2336_; 
if (v_isShared_2326_ == 0)
{
lean_ctor_set(v___x_2325_, 3, v_r_2305_);
lean_ctor_set(v___x_2325_, 0, v___x_2248_);
v___x_2336_ = v___x_2325_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v___x_2248_);
lean_ctor_set(v_reuseFailAlloc_2338_, 1, v_k_2322_);
lean_ctor_set(v_reuseFailAlloc_2338_, 2, v_v_2323_);
lean_ctor_set(v_reuseFailAlloc_2338_, 3, v_r_2305_);
lean_ctor_set(v_reuseFailAlloc_2338_, 4, v_r_2305_);
v___x_2336_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
lean_object* v___x_2337_; 
v___x_2337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2332_);
lean_ctor_set(v___x_2337_, 1, v_k_2327_);
lean_ctor_set(v___x_2337_, 2, v_v_2328_);
lean_ctor_set(v___x_2337_, 3, v___x_2334_);
lean_ctor_set(v___x_2337_, 4, v___x_2336_);
return v___x_2337_;
}
}
}
}
}
}
else
{
lean_object* v_r_2348_; 
v_r_2348_ = lean_ctor_get(v_r_2057_, 4);
lean_inc(v_r_2348_);
if (lean_obj_tag(v_r_2348_) == 0)
{
lean_object* v_k_2349_; lean_object* v_v_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2359_; 
v_k_2349_ = lean_ctor_get(v_r_2057_, 1);
v_v_2350_ = lean_ctor_get(v_r_2057_, 2);
v_isSharedCheck_2359_ = !lean_is_exclusive(v_r_2057_);
if (v_isSharedCheck_2359_ == 0)
{
lean_object* v_unused_2360_; lean_object* v_unused_2361_; lean_object* v_unused_2362_; 
v_unused_2360_ = lean_ctor_get(v_r_2057_, 4);
lean_dec(v_unused_2360_);
v_unused_2361_ = lean_ctor_get(v_r_2057_, 3);
lean_dec(v_unused_2361_);
v_unused_2362_ = lean_ctor_get(v_r_2057_, 0);
lean_dec(v_unused_2362_);
v___x_2352_ = v_r_2057_;
v_isShared_2353_ = v_isSharedCheck_2359_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_v_2350_);
lean_inc(v_k_2349_);
lean_dec(v_r_2057_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2359_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2354_; lean_object* v___x_2356_; 
v___x_2354_ = lean_unsigned_to_nat(3u);
if (v_isShared_2353_ == 0)
{
lean_ctor_set(v___x_2352_, 4, v_l_2304_);
lean_ctor_set(v___x_2352_, 2, v_v_2055_);
lean_ctor_set(v___x_2352_, 1, v_k_2054_);
lean_ctor_set(v___x_2352_, 0, v___x_2248_);
v___x_2356_ = v___x_2352_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v___x_2248_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v_k_2054_);
lean_ctor_set(v_reuseFailAlloc_2358_, 2, v_v_2055_);
lean_ctor_set(v_reuseFailAlloc_2358_, 3, v_l_2304_);
lean_ctor_set(v_reuseFailAlloc_2358_, 4, v_l_2304_);
v___x_2356_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
lean_object* v___x_2357_; 
v___x_2357_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2357_, 0, v___x_2354_);
lean_ctor_set(v___x_2357_, 1, v_k_2349_);
lean_ctor_set(v___x_2357_, 2, v_v_2350_);
lean_ctor_set(v___x_2357_, 3, v___x_2356_);
lean_ctor_set(v___x_2357_, 4, v_r_2348_);
return v___x_2357_;
}
}
}
else
{
lean_object* v_size_2363_; lean_object* v_k_2364_; lean_object* v_v_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2374_; 
v_size_2363_ = lean_ctor_get(v_r_2057_, 0);
v_k_2364_ = lean_ctor_get(v_r_2057_, 1);
v_v_2365_ = lean_ctor_get(v_r_2057_, 2);
v_isSharedCheck_2374_ = !lean_is_exclusive(v_r_2057_);
if (v_isSharedCheck_2374_ == 0)
{
lean_object* v_unused_2375_; lean_object* v_unused_2376_; 
v_unused_2375_ = lean_ctor_get(v_r_2057_, 4);
lean_dec(v_unused_2375_);
v_unused_2376_ = lean_ctor_get(v_r_2057_, 3);
lean_dec(v_unused_2376_);
v___x_2367_ = v_r_2057_;
v_isShared_2368_ = v_isSharedCheck_2374_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_v_2365_);
lean_inc(v_k_2364_);
lean_inc(v_size_2363_);
lean_dec(v_r_2057_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2374_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 3, v_r_2348_);
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v_size_2363_);
lean_ctor_set(v_reuseFailAlloc_2373_, 1, v_k_2364_);
lean_ctor_set(v_reuseFailAlloc_2373_, 2, v_v_2365_);
lean_ctor_set(v_reuseFailAlloc_2373_, 3, v_r_2348_);
lean_ctor_set(v_reuseFailAlloc_2373_, 4, v_r_2348_);
v___x_2370_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = lean_unsigned_to_nat(2u);
v___x_2372_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2371_);
lean_ctor_set(v___x_2372_, 1, v_k_2054_);
lean_ctor_set(v___x_2372_, 2, v_v_2055_);
lean_ctor_set(v___x_2372_, 3, v_r_2348_);
lean_ctor_set(v___x_2372_, 4, v___x_2370_);
return v___x_2372_;
}
}
}
}
}
else
{
lean_object* v___x_2377_; 
v___x_2377_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2248_);
lean_ctor_set(v___x_2377_, 1, v_k_2054_);
lean_ctor_set(v___x_2377_, 2, v_v_2055_);
lean_ctor_set(v___x_2377_, 3, v_r_2057_);
lean_ctor_set(v___x_2377_, 4, v_r_2057_);
return v___x_2377_;
}
}
}
}
}
else
{
return v_t_2039_;
}
v___jp_2040_:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2051_ = lean_nat_add(v___y_2047_, v___y_2050_);
lean_dec(v___y_2050_);
lean_dec(v___y_2047_);
v___x_2052_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
lean_ctor_set(v___x_2052_, 1, v___y_2042_);
lean_ctor_set(v___x_2052_, 2, v___y_2046_);
lean_ctor_set(v___x_2052_, 3, v___y_2049_);
lean_ctor_set(v___x_2052_, 4, v___y_2048_);
v___x_2053_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2053_, 0, v___y_2045_);
lean_ctor_set(v___x_2053_, 1, v___y_2044_);
lean_ctor_set(v___x_2053_, 2, v___y_2041_);
lean_ctor_set(v___x_2053_, 3, v___y_2043_);
lean_ctor_set(v___x_2053_, 4, v___x_2052_);
return v___x_2053_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___redArg___boxed(lean_object* v_k_2702_, lean_object* v_t_2703_){
_start:
{
lean_object* v_res_2704_; 
v_res_2704_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___redArg(v_k_2702_, v_t_2703_);
lean_dec_ref(v_k_2702_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__1___redArg(lean_object* v_k_2705_, lean_object* v_v_2706_, lean_object* v_t_2707_){
_start:
{
lean_object* v___y_2709_; lean_object* v___y_2710_; lean_object* v___y_2711_; lean_object* v___y_2712_; lean_object* v___y_2713_; lean_object* v___y_2714_; lean_object* v___y_2715_; lean_object* v___y_2716_; lean_object* v___y_2717_; lean_object* v___y_2718_; 
if (lean_obj_tag(v_t_2707_) == 0)
{
lean_object* v_size_2722_; lean_object* v_k_2723_; lean_object* v_v_2724_; lean_object* v_l_2725_; lean_object* v_r_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2991_; 
v_size_2722_ = lean_ctor_get(v_t_2707_, 0);
v_k_2723_ = lean_ctor_get(v_t_2707_, 1);
v_v_2724_ = lean_ctor_get(v_t_2707_, 2);
v_l_2725_ = lean_ctor_get(v_t_2707_, 3);
v_r_2726_ = lean_ctor_get(v_t_2707_, 4);
v_isSharedCheck_2991_ = !lean_is_exclusive(v_t_2707_);
if (v_isSharedCheck_2991_ == 0)
{
v___x_2728_ = v_t_2707_;
v_isShared_2729_ = v_isSharedCheck_2991_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_r_2726_);
lean_inc(v_l_2725_);
lean_inc(v_v_2724_);
lean_inc(v_k_2723_);
lean_inc(v_size_2722_);
lean_dec(v_t_2707_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2991_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2740_; lean_object* v___y_2741_; lean_object* v___y_2742_; lean_object* v___y_2850_; lean_object* v___y_2851_; lean_object* v___y_2852_; lean_object* v___y_2853_; lean_object* v___y_2854_; lean_object* v___y_2855_; lean_object* v___y_2856_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v___y_2866_; lean_object* v___y_2867_; lean_object* v___y_2868_; lean_object* v___y_2869_; lean_object* v___y_2870_; lean_object* v___y_2871_; lean_object* v___y_2872_; lean_object* v_fst_2979_; lean_object* v_snd_2980_; lean_object* v_fst_2981_; lean_object* v_snd_2982_; double v___x_2983_; double v___x_2984_; uint8_t v___x_2985_; 
v_fst_2979_ = lean_ctor_get(v_k_2705_, 0);
v_snd_2980_ = lean_ctor_get(v_k_2705_, 1);
v_fst_2981_ = lean_ctor_get(v_k_2723_, 0);
v_snd_2982_ = lean_ctor_get(v_k_2723_, 1);
v___x_2983_ = lean_unbox_float(v_fst_2979_);
v___x_2984_ = lean_unbox_float(v_fst_2981_);
v___x_2985_ = lean_float_decLt(v___x_2983_, v___x_2984_);
if (v___x_2985_ == 0)
{
double v___x_2986_; double v___x_2987_; uint8_t v___x_2988_; 
v___x_2986_ = lean_unbox_float(v_fst_2981_);
v___x_2987_ = lean_unbox_float(v_fst_2979_);
v___x_2988_ = lean_float_decLt(v___x_2986_, v___x_2987_);
if (v___x_2988_ == 0)
{
uint8_t v___x_2989_; 
v___x_2989_ = l_Lean_Name_cmp(v_snd_2980_, v_snd_2982_);
switch(v___x_2989_)
{
case 0:
{
lean_del_object(v___x_2728_);
lean_dec(v_size_2722_);
goto v___jp_2878_;
}
case 1:
{
lean_object* v___x_2990_; 
lean_del_object(v___x_2728_);
lean_dec(v_v_2724_);
lean_dec(v_k_2723_);
v___x_2990_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2990_, 0, v_size_2722_);
lean_ctor_set(v___x_2990_, 1, v_k_2705_);
lean_ctor_set(v___x_2990_, 2, v_v_2706_);
lean_ctor_set(v___x_2990_, 3, v_l_2725_);
lean_ctor_set(v___x_2990_, 4, v_r_2726_);
return v___x_2990_;
}
default: 
{
lean_dec(v_size_2722_);
goto v___jp_2750_;
}
}
}
else
{
lean_dec(v_size_2722_);
goto v___jp_2750_;
}
}
else
{
lean_del_object(v___x_2728_);
lean_dec(v_size_2722_);
goto v___jp_2878_;
}
v___jp_2730_:
{
lean_object* v___x_2743_; lean_object* v___x_2745_; 
v___x_2743_ = lean_nat_add(v___y_2740_, v___y_2742_);
lean_dec(v___y_2742_);
lean_dec(v___y_2740_);
if (v_isShared_2729_ == 0)
{
lean_ctor_set(v___x_2728_, 4, v___y_2739_);
lean_ctor_set(v___x_2728_, 0, v___x_2743_);
v___x_2745_ = v___x_2728_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v___x_2743_);
lean_ctor_set(v_reuseFailAlloc_2749_, 1, v_k_2723_);
lean_ctor_set(v_reuseFailAlloc_2749_, 2, v_v_2724_);
lean_ctor_set(v_reuseFailAlloc_2749_, 3, v_l_2725_);
lean_ctor_set(v_reuseFailAlloc_2749_, 4, v___y_2739_);
v___x_2745_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
lean_object* v___x_2746_; 
v___x_2746_ = lean_nat_add(v___y_2738_, v___y_2735_);
lean_dec(v___y_2735_);
if (lean_obj_tag(v___y_2733_) == 0)
{
lean_object* v_size_2747_; 
v_size_2747_ = lean_ctor_get(v___y_2733_, 0);
lean_inc(v_size_2747_);
v___y_2709_ = v___y_2731_;
v___y_2710_ = v___y_2732_;
v___y_2711_ = v___x_2746_;
v___y_2712_ = v___x_2745_;
v___y_2713_ = v___y_2733_;
v___y_2714_ = v___y_2734_;
v___y_2715_ = v___y_2736_;
v___y_2716_ = v___y_2737_;
v___y_2717_ = v___y_2741_;
v___y_2718_ = v_size_2747_;
goto v___jp_2708_;
}
else
{
lean_object* v___x_2748_; 
v___x_2748_ = lean_unsigned_to_nat(0u);
v___y_2709_ = v___y_2731_;
v___y_2710_ = v___y_2732_;
v___y_2711_ = v___x_2746_;
v___y_2712_ = v___x_2745_;
v___y_2713_ = v___y_2733_;
v___y_2714_ = v___y_2734_;
v___y_2715_ = v___y_2736_;
v___y_2716_ = v___y_2737_;
v___y_2717_ = v___y_2741_;
v___y_2718_ = v___x_2748_;
goto v___jp_2708_;
}
}
}
v___jp_2750_:
{
lean_object* v_impl_2751_; lean_object* v___x_2752_; 
v_impl_2751_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__1___redArg(v_k_2705_, v_v_2706_, v_r_2726_);
v___x_2752_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_2725_) == 0)
{
lean_object* v_size_2753_; lean_object* v_size_2754_; lean_object* v_k_2755_; lean_object* v_v_2756_; lean_object* v_l_2757_; lean_object* v_r_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; uint8_t v___x_2761_; 
v_size_2753_ = lean_ctor_get(v_l_2725_, 0);
v_size_2754_ = lean_ctor_get(v_impl_2751_, 0);
lean_inc(v_size_2754_);
v_k_2755_ = lean_ctor_get(v_impl_2751_, 1);
lean_inc(v_k_2755_);
v_v_2756_ = lean_ctor_get(v_impl_2751_, 2);
lean_inc(v_v_2756_);
v_l_2757_ = lean_ctor_get(v_impl_2751_, 3);
lean_inc(v_l_2757_);
v_r_2758_ = lean_ctor_get(v_impl_2751_, 4);
lean_inc(v_r_2758_);
v___x_2759_ = lean_unsigned_to_nat(3u);
v___x_2760_ = lean_nat_mul(v___x_2759_, v_size_2753_);
v___x_2761_ = lean_nat_dec_lt(v___x_2760_, v_size_2754_);
lean_dec(v___x_2760_);
if (v___x_2761_ == 0)
{
lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
lean_dec(v_r_2758_);
lean_dec(v_l_2757_);
lean_dec(v_v_2756_);
lean_dec(v_k_2755_);
lean_del_object(v___x_2728_);
v___x_2762_ = lean_nat_add(v___x_2752_, v_size_2753_);
v___x_2763_ = lean_nat_add(v___x_2762_, v_size_2754_);
lean_dec(v_size_2754_);
lean_dec(v___x_2762_);
v___x_2764_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2763_);
lean_ctor_set(v___x_2764_, 1, v_k_2723_);
lean_ctor_set(v___x_2764_, 2, v_v_2724_);
lean_ctor_set(v___x_2764_, 3, v_l_2725_);
lean_ctor_set(v___x_2764_, 4, v_impl_2751_);
return v___x_2764_;
}
else
{
lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2799_; 
v_isSharedCheck_2799_ = !lean_is_exclusive(v_impl_2751_);
if (v_isSharedCheck_2799_ == 0)
{
lean_object* v_unused_2800_; lean_object* v_unused_2801_; lean_object* v_unused_2802_; lean_object* v_unused_2803_; lean_object* v_unused_2804_; 
v_unused_2800_ = lean_ctor_get(v_impl_2751_, 4);
lean_dec(v_unused_2800_);
v_unused_2801_ = lean_ctor_get(v_impl_2751_, 3);
lean_dec(v_unused_2801_);
v_unused_2802_ = lean_ctor_get(v_impl_2751_, 2);
lean_dec(v_unused_2802_);
v_unused_2803_ = lean_ctor_get(v_impl_2751_, 1);
lean_dec(v_unused_2803_);
v_unused_2804_ = lean_ctor_get(v_impl_2751_, 0);
lean_dec(v_unused_2804_);
v___x_2766_ = v_impl_2751_;
v_isShared_2767_ = v_isSharedCheck_2799_;
goto v_resetjp_2765_;
}
else
{
lean_dec(v_impl_2751_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2799_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v_size_2768_; lean_object* v_k_2769_; lean_object* v_v_2770_; lean_object* v_l_2771_; lean_object* v_r_2772_; lean_object* v_size_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; uint8_t v___x_2776_; 
v_size_2768_ = lean_ctor_get(v_l_2757_, 0);
v_k_2769_ = lean_ctor_get(v_l_2757_, 1);
v_v_2770_ = lean_ctor_get(v_l_2757_, 2);
v_l_2771_ = lean_ctor_get(v_l_2757_, 3);
v_r_2772_ = lean_ctor_get(v_l_2757_, 4);
v_size_2773_ = lean_ctor_get(v_r_2758_, 0);
v___x_2774_ = lean_unsigned_to_nat(2u);
v___x_2775_ = lean_nat_mul(v___x_2774_, v_size_2773_);
v___x_2776_ = lean_nat_dec_lt(v_size_2768_, v___x_2775_);
lean_dec(v___x_2775_);
if (v___x_2776_ == 0)
{
lean_object* v___x_2777_; lean_object* v___x_2778_; 
lean_inc(v_size_2773_);
lean_inc(v_r_2772_);
lean_inc(v_l_2771_);
lean_inc(v_v_2770_);
lean_inc(v_k_2769_);
lean_del_object(v___x_2766_);
lean_dec(v_l_2757_);
v___x_2777_ = lean_nat_add(v___x_2752_, v_size_2753_);
v___x_2778_ = lean_nat_add(v___x_2777_, v_size_2754_);
lean_dec(v_size_2754_);
if (lean_obj_tag(v_l_2771_) == 0)
{
lean_object* v_size_2779_; 
v_size_2779_ = lean_ctor_get(v_l_2771_, 0);
lean_inc(v_size_2779_);
v___y_2731_ = v_r_2758_;
v___y_2732_ = v_v_2770_;
v___y_2733_ = v_r_2772_;
v___y_2734_ = v___x_2778_;
v___y_2735_ = v_size_2773_;
v___y_2736_ = v_k_2755_;
v___y_2737_ = v_v_2756_;
v___y_2738_ = v___x_2752_;
v___y_2739_ = v_l_2771_;
v___y_2740_ = v___x_2777_;
v___y_2741_ = v_k_2769_;
v___y_2742_ = v_size_2779_;
goto v___jp_2730_;
}
else
{
lean_object* v___x_2780_; 
v___x_2780_ = lean_unsigned_to_nat(0u);
v___y_2731_ = v_r_2758_;
v___y_2732_ = v_v_2770_;
v___y_2733_ = v_r_2772_;
v___y_2734_ = v___x_2778_;
v___y_2735_ = v_size_2773_;
v___y_2736_ = v_k_2755_;
v___y_2737_ = v_v_2756_;
v___y_2738_ = v___x_2752_;
v___y_2739_ = v_l_2771_;
v___y_2740_ = v___x_2777_;
v___y_2741_ = v_k_2769_;
v___y_2742_ = v___x_2780_;
goto v___jp_2730_;
}
}
else
{
lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2785_; 
lean_del_object(v___x_2728_);
v___x_2781_ = lean_nat_add(v___x_2752_, v_size_2753_);
v___x_2782_ = lean_nat_add(v___x_2781_, v_size_2754_);
lean_dec(v_size_2754_);
v___x_2783_ = lean_nat_add(v___x_2781_, v_size_2768_);
lean_dec(v___x_2781_);
lean_inc_ref(v_l_2725_);
if (v_isShared_2767_ == 0)
{
lean_ctor_set(v___x_2766_, 4, v_l_2757_);
lean_ctor_set(v___x_2766_, 3, v_l_2725_);
lean_ctor_set(v___x_2766_, 2, v_v_2724_);
lean_ctor_set(v___x_2766_, 1, v_k_2723_);
lean_ctor_set(v___x_2766_, 0, v___x_2783_);
v___x_2785_ = v___x_2766_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v___x_2783_);
lean_ctor_set(v_reuseFailAlloc_2798_, 1, v_k_2723_);
lean_ctor_set(v_reuseFailAlloc_2798_, 2, v_v_2724_);
lean_ctor_set(v_reuseFailAlloc_2798_, 3, v_l_2725_);
lean_ctor_set(v_reuseFailAlloc_2798_, 4, v_l_2757_);
v___x_2785_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
v_isSharedCheck_2792_ = !lean_is_exclusive(v_l_2725_);
if (v_isSharedCheck_2792_ == 0)
{
lean_object* v_unused_2793_; lean_object* v_unused_2794_; lean_object* v_unused_2795_; lean_object* v_unused_2796_; lean_object* v_unused_2797_; 
v_unused_2793_ = lean_ctor_get(v_l_2725_, 4);
lean_dec(v_unused_2793_);
v_unused_2794_ = lean_ctor_get(v_l_2725_, 3);
lean_dec(v_unused_2794_);
v_unused_2795_ = lean_ctor_get(v_l_2725_, 2);
lean_dec(v_unused_2795_);
v_unused_2796_ = lean_ctor_get(v_l_2725_, 1);
lean_dec(v_unused_2796_);
v_unused_2797_ = lean_ctor_get(v_l_2725_, 0);
lean_dec(v_unused_2797_);
v___x_2787_ = v_l_2725_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_dec(v_l_2725_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
lean_ctor_set(v___x_2787_, 4, v_r_2758_);
lean_ctor_set(v___x_2787_, 3, v___x_2785_);
lean_ctor_set(v___x_2787_, 2, v_v_2756_);
lean_ctor_set(v___x_2787_, 1, v_k_2755_);
lean_ctor_set(v___x_2787_, 0, v___x_2782_);
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v___x_2782_);
lean_ctor_set(v_reuseFailAlloc_2791_, 1, v_k_2755_);
lean_ctor_set(v_reuseFailAlloc_2791_, 2, v_v_2756_);
lean_ctor_set(v_reuseFailAlloc_2791_, 3, v___x_2785_);
lean_ctor_set(v_reuseFailAlloc_2791_, 4, v_r_2758_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2805_; 
lean_del_object(v___x_2728_);
v_l_2805_ = lean_ctor_get(v_impl_2751_, 3);
lean_inc(v_l_2805_);
if (lean_obj_tag(v_l_2805_) == 0)
{
lean_object* v_r_2806_; lean_object* v_k_2807_; lean_object* v_v_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2829_; 
v_r_2806_ = lean_ctor_get(v_impl_2751_, 4);
v_k_2807_ = lean_ctor_get(v_impl_2751_, 1);
v_v_2808_ = lean_ctor_get(v_impl_2751_, 2);
v_isSharedCheck_2829_ = !lean_is_exclusive(v_impl_2751_);
if (v_isSharedCheck_2829_ == 0)
{
lean_object* v_unused_2830_; lean_object* v_unused_2831_; 
v_unused_2830_ = lean_ctor_get(v_impl_2751_, 3);
lean_dec(v_unused_2830_);
v_unused_2831_ = lean_ctor_get(v_impl_2751_, 0);
lean_dec(v_unused_2831_);
v___x_2810_ = v_impl_2751_;
v_isShared_2811_ = v_isSharedCheck_2829_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_r_2806_);
lean_inc(v_v_2808_);
lean_inc(v_k_2807_);
lean_dec(v_impl_2751_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2829_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v_k_2812_; lean_object* v_v_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2825_; 
v_k_2812_ = lean_ctor_get(v_l_2805_, 1);
v_v_2813_ = lean_ctor_get(v_l_2805_, 2);
v_isSharedCheck_2825_ = !lean_is_exclusive(v_l_2805_);
if (v_isSharedCheck_2825_ == 0)
{
lean_object* v_unused_2826_; lean_object* v_unused_2827_; lean_object* v_unused_2828_; 
v_unused_2826_ = lean_ctor_get(v_l_2805_, 4);
lean_dec(v_unused_2826_);
v_unused_2827_ = lean_ctor_get(v_l_2805_, 3);
lean_dec(v_unused_2827_);
v_unused_2828_ = lean_ctor_get(v_l_2805_, 0);
lean_dec(v_unused_2828_);
v___x_2815_ = v_l_2805_;
v_isShared_2816_ = v_isSharedCheck_2825_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_v_2813_);
lean_inc(v_k_2812_);
lean_dec(v_l_2805_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2825_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2817_; lean_object* v___x_2819_; 
v___x_2817_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2806_, 2);
if (v_isShared_2816_ == 0)
{
lean_ctor_set(v___x_2815_, 4, v_r_2806_);
lean_ctor_set(v___x_2815_, 3, v_r_2806_);
lean_ctor_set(v___x_2815_, 2, v_v_2724_);
lean_ctor_set(v___x_2815_, 1, v_k_2723_);
lean_ctor_set(v___x_2815_, 0, v___x_2752_);
v___x_2819_ = v___x_2815_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v___x_2752_);
lean_ctor_set(v_reuseFailAlloc_2824_, 1, v_k_2723_);
lean_ctor_set(v_reuseFailAlloc_2824_, 2, v_v_2724_);
lean_ctor_set(v_reuseFailAlloc_2824_, 3, v_r_2806_);
lean_ctor_set(v_reuseFailAlloc_2824_, 4, v_r_2806_);
v___x_2819_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
lean_object* v___x_2821_; 
lean_inc(v_r_2806_);
if (v_isShared_2811_ == 0)
{
lean_ctor_set(v___x_2810_, 3, v_r_2806_);
lean_ctor_set(v___x_2810_, 0, v___x_2752_);
v___x_2821_ = v___x_2810_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v___x_2752_);
lean_ctor_set(v_reuseFailAlloc_2823_, 1, v_k_2807_);
lean_ctor_set(v_reuseFailAlloc_2823_, 2, v_v_2808_);
lean_ctor_set(v_reuseFailAlloc_2823_, 3, v_r_2806_);
lean_ctor_set(v_reuseFailAlloc_2823_, 4, v_r_2806_);
v___x_2821_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
lean_object* v___x_2822_; 
v___x_2822_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2817_);
lean_ctor_set(v___x_2822_, 1, v_k_2812_);
lean_ctor_set(v___x_2822_, 2, v_v_2813_);
lean_ctor_set(v___x_2822_, 3, v___x_2819_);
lean_ctor_set(v___x_2822_, 4, v___x_2821_);
return v___x_2822_;
}
}
}
}
}
else
{
lean_object* v_r_2832_; 
v_r_2832_ = lean_ctor_get(v_impl_2751_, 4);
lean_inc(v_r_2832_);
if (lean_obj_tag(v_r_2832_) == 0)
{
lean_object* v_k_2833_; lean_object* v_v_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2843_; 
v_k_2833_ = lean_ctor_get(v_impl_2751_, 1);
v_v_2834_ = lean_ctor_get(v_impl_2751_, 2);
v_isSharedCheck_2843_ = !lean_is_exclusive(v_impl_2751_);
if (v_isSharedCheck_2843_ == 0)
{
lean_object* v_unused_2844_; lean_object* v_unused_2845_; lean_object* v_unused_2846_; 
v_unused_2844_ = lean_ctor_get(v_impl_2751_, 4);
lean_dec(v_unused_2844_);
v_unused_2845_ = lean_ctor_get(v_impl_2751_, 3);
lean_dec(v_unused_2845_);
v_unused_2846_ = lean_ctor_get(v_impl_2751_, 0);
lean_dec(v_unused_2846_);
v___x_2836_ = v_impl_2751_;
v_isShared_2837_ = v_isSharedCheck_2843_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_v_2834_);
lean_inc(v_k_2833_);
lean_dec(v_impl_2751_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2843_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2838_; lean_object* v___x_2840_; 
v___x_2838_ = lean_unsigned_to_nat(3u);
if (v_isShared_2837_ == 0)
{
lean_ctor_set(v___x_2836_, 4, v_l_2805_);
lean_ctor_set(v___x_2836_, 2, v_v_2724_);
lean_ctor_set(v___x_2836_, 1, v_k_2723_);
lean_ctor_set(v___x_2836_, 0, v___x_2752_);
v___x_2840_ = v___x_2836_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v___x_2752_);
lean_ctor_set(v_reuseFailAlloc_2842_, 1, v_k_2723_);
lean_ctor_set(v_reuseFailAlloc_2842_, 2, v_v_2724_);
lean_ctor_set(v_reuseFailAlloc_2842_, 3, v_l_2805_);
lean_ctor_set(v_reuseFailAlloc_2842_, 4, v_l_2805_);
v___x_2840_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
lean_object* v___x_2841_; 
v___x_2841_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2838_);
lean_ctor_set(v___x_2841_, 1, v_k_2833_);
lean_ctor_set(v___x_2841_, 2, v_v_2834_);
lean_ctor_set(v___x_2841_, 3, v___x_2840_);
lean_ctor_set(v___x_2841_, 4, v_r_2832_);
return v___x_2841_;
}
}
}
else
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = lean_unsigned_to_nat(2u);
v___x_2848_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2847_);
lean_ctor_set(v___x_2848_, 1, v_k_2723_);
lean_ctor_set(v___x_2848_, 2, v_v_2724_);
lean_ctor_set(v___x_2848_, 3, v_r_2832_);
lean_ctor_set(v___x_2848_, 4, v_impl_2751_);
return v___x_2848_;
}
}
}
}
v___jp_2849_:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2857_ = lean_nat_add(v___y_2851_, v___y_2856_);
lean_dec(v___y_2856_);
lean_dec(v___y_2851_);
v___x_2858_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
lean_ctor_set(v___x_2858_, 1, v_k_2723_);
lean_ctor_set(v___x_2858_, 2, v_v_2724_);
lean_ctor_set(v___x_2858_, 3, v___y_2852_);
lean_ctor_set(v___x_2858_, 4, v_r_2726_);
v___x_2859_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2859_, 0, v___y_2850_);
lean_ctor_set(v___x_2859_, 1, v___y_2854_);
lean_ctor_set(v___x_2859_, 2, v___y_2855_);
lean_ctor_set(v___x_2859_, 3, v___y_2853_);
lean_ctor_set(v___x_2859_, 4, v___x_2858_);
return v___x_2859_;
}
v___jp_2860_:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2873_ = lean_nat_add(v___y_2870_, v___y_2872_);
lean_dec(v___y_2872_);
lean_dec(v___y_2870_);
v___x_2874_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2873_);
lean_ctor_set(v___x_2874_, 1, v___y_2865_);
lean_ctor_set(v___x_2874_, 2, v___y_2866_);
lean_ctor_set(v___x_2874_, 3, v___y_2863_);
lean_ctor_set(v___x_2874_, 4, v___y_2861_);
v___x_2875_ = lean_nat_add(v___y_2868_, v___y_2871_);
lean_dec(v___y_2871_);
if (lean_obj_tag(v___y_2864_) == 0)
{
lean_object* v_size_2876_; 
v_size_2876_ = lean_ctor_get(v___y_2864_, 0);
lean_inc(v_size_2876_);
v___y_2850_ = v___y_2862_;
v___y_2851_ = v___x_2875_;
v___y_2852_ = v___y_2864_;
v___y_2853_ = v___x_2874_;
v___y_2854_ = v___y_2867_;
v___y_2855_ = v___y_2869_;
v___y_2856_ = v_size_2876_;
goto v___jp_2849_;
}
else
{
lean_object* v___x_2877_; 
v___x_2877_ = lean_unsigned_to_nat(0u);
v___y_2850_ = v___y_2862_;
v___y_2851_ = v___x_2875_;
v___y_2852_ = v___y_2864_;
v___y_2853_ = v___x_2874_;
v___y_2854_ = v___y_2867_;
v___y_2855_ = v___y_2869_;
v___y_2856_ = v___x_2877_;
goto v___jp_2849_;
}
}
v___jp_2878_:
{
lean_object* v_impl_2879_; lean_object* v___x_2880_; 
v_impl_2879_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__1___redArg(v_k_2705_, v_v_2706_, v_l_2725_);
v___x_2880_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_2726_) == 0)
{
lean_object* v_size_2881_; lean_object* v_size_2882_; lean_object* v_k_2883_; lean_object* v_v_2884_; lean_object* v_l_2885_; lean_object* v_r_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; uint8_t v___x_2889_; 
v_size_2881_ = lean_ctor_get(v_r_2726_, 0);
v_size_2882_ = lean_ctor_get(v_impl_2879_, 0);
lean_inc(v_size_2882_);
v_k_2883_ = lean_ctor_get(v_impl_2879_, 1);
lean_inc(v_k_2883_);
v_v_2884_ = lean_ctor_get(v_impl_2879_, 2);
lean_inc(v_v_2884_);
v_l_2885_ = lean_ctor_get(v_impl_2879_, 3);
lean_inc(v_l_2885_);
v_r_2886_ = lean_ctor_get(v_impl_2879_, 4);
lean_inc(v_r_2886_);
v___x_2887_ = lean_unsigned_to_nat(3u);
v___x_2888_ = lean_nat_mul(v___x_2887_, v_size_2881_);
v___x_2889_ = lean_nat_dec_lt(v___x_2888_, v_size_2882_);
lean_dec(v___x_2888_);
if (v___x_2889_ == 0)
{
lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
lean_dec(v_r_2886_);
lean_dec(v_l_2885_);
lean_dec(v_v_2884_);
lean_dec(v_k_2883_);
v___x_2890_ = lean_nat_add(v___x_2880_, v_size_2882_);
lean_dec(v_size_2882_);
v___x_2891_ = lean_nat_add(v___x_2890_, v_size_2881_);
lean_dec(v___x_2890_);
v___x_2892_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2891_);
lean_ctor_set(v___x_2892_, 1, v_k_2723_);
lean_ctor_set(v___x_2892_, 2, v_v_2724_);
lean_ctor_set(v___x_2892_, 3, v_impl_2879_);
lean_ctor_set(v___x_2892_, 4, v_r_2726_);
return v___x_2892_;
}
else
{
lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2929_; 
v_isSharedCheck_2929_ = !lean_is_exclusive(v_impl_2879_);
if (v_isSharedCheck_2929_ == 0)
{
lean_object* v_unused_2930_; lean_object* v_unused_2931_; lean_object* v_unused_2932_; lean_object* v_unused_2933_; lean_object* v_unused_2934_; 
v_unused_2930_ = lean_ctor_get(v_impl_2879_, 4);
lean_dec(v_unused_2930_);
v_unused_2931_ = lean_ctor_get(v_impl_2879_, 3);
lean_dec(v_unused_2931_);
v_unused_2932_ = lean_ctor_get(v_impl_2879_, 2);
lean_dec(v_unused_2932_);
v_unused_2933_ = lean_ctor_get(v_impl_2879_, 1);
lean_dec(v_unused_2933_);
v_unused_2934_ = lean_ctor_get(v_impl_2879_, 0);
lean_dec(v_unused_2934_);
v___x_2894_ = v_impl_2879_;
v_isShared_2895_ = v_isSharedCheck_2929_;
goto v_resetjp_2893_;
}
else
{
lean_dec(v_impl_2879_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2929_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v_size_2896_; lean_object* v_size_2897_; lean_object* v_k_2898_; lean_object* v_v_2899_; lean_object* v_l_2900_; lean_object* v_r_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; uint8_t v___x_2904_; 
v_size_2896_ = lean_ctor_get(v_l_2885_, 0);
v_size_2897_ = lean_ctor_get(v_r_2886_, 0);
v_k_2898_ = lean_ctor_get(v_r_2886_, 1);
v_v_2899_ = lean_ctor_get(v_r_2886_, 2);
v_l_2900_ = lean_ctor_get(v_r_2886_, 3);
v_r_2901_ = lean_ctor_get(v_r_2886_, 4);
v___x_2902_ = lean_unsigned_to_nat(2u);
v___x_2903_ = lean_nat_mul(v___x_2902_, v_size_2896_);
v___x_2904_ = lean_nat_dec_lt(v_size_2897_, v___x_2903_);
lean_dec(v___x_2903_);
if (v___x_2904_ == 0)
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
lean_inc(v_r_2901_);
lean_inc(v_l_2900_);
lean_inc(v_v_2899_);
lean_inc(v_k_2898_);
lean_del_object(v___x_2894_);
lean_dec(v_r_2886_);
v___x_2905_ = lean_nat_add(v___x_2880_, v_size_2882_);
lean_dec(v_size_2882_);
v___x_2906_ = lean_nat_add(v___x_2905_, v_size_2881_);
lean_dec(v___x_2905_);
v___x_2907_ = lean_nat_add(v___x_2880_, v_size_2896_);
if (lean_obj_tag(v_l_2900_) == 0)
{
lean_object* v_size_2908_; 
v_size_2908_ = lean_ctor_get(v_l_2900_, 0);
lean_inc(v_size_2908_);
lean_inc(v_size_2881_);
v___y_2861_ = v_l_2900_;
v___y_2862_ = v___x_2906_;
v___y_2863_ = v_l_2885_;
v___y_2864_ = v_r_2901_;
v___y_2865_ = v_k_2883_;
v___y_2866_ = v_v_2884_;
v___y_2867_ = v_k_2898_;
v___y_2868_ = v___x_2880_;
v___y_2869_ = v_v_2899_;
v___y_2870_ = v___x_2907_;
v___y_2871_ = v_size_2881_;
v___y_2872_ = v_size_2908_;
goto v___jp_2860_;
}
else
{
lean_object* v___x_2909_; 
v___x_2909_ = lean_unsigned_to_nat(0u);
lean_inc(v_size_2881_);
v___y_2861_ = v_l_2900_;
v___y_2862_ = v___x_2906_;
v___y_2863_ = v_l_2885_;
v___y_2864_ = v_r_2901_;
v___y_2865_ = v_k_2883_;
v___y_2866_ = v_v_2884_;
v___y_2867_ = v_k_2898_;
v___y_2868_ = v___x_2880_;
v___y_2869_ = v_v_2899_;
v___y_2870_ = v___x_2907_;
v___y_2871_ = v_size_2881_;
v___y_2872_ = v___x_2909_;
goto v___jp_2860_;
}
}
else
{
lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2915_; 
v___x_2910_ = lean_nat_add(v___x_2880_, v_size_2882_);
lean_dec(v_size_2882_);
v___x_2911_ = lean_nat_add(v___x_2910_, v_size_2881_);
lean_dec(v___x_2910_);
v___x_2912_ = lean_nat_add(v___x_2880_, v_size_2881_);
v___x_2913_ = lean_nat_add(v___x_2912_, v_size_2897_);
lean_dec(v___x_2912_);
lean_inc_ref(v_r_2726_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v_r_2726_);
lean_ctor_set(v___x_2894_, 3, v_r_2886_);
lean_ctor_set(v___x_2894_, 2, v_v_2724_);
lean_ctor_set(v___x_2894_, 1, v_k_2723_);
lean_ctor_set(v___x_2894_, 0, v___x_2913_);
v___x_2915_ = v___x_2894_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v___x_2913_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v_k_2723_);
lean_ctor_set(v_reuseFailAlloc_2928_, 2, v_v_2724_);
lean_ctor_set(v_reuseFailAlloc_2928_, 3, v_r_2886_);
lean_ctor_set(v_reuseFailAlloc_2928_, 4, v_r_2726_);
v___x_2915_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
lean_object* v___x_2917_; uint8_t v_isShared_2918_; uint8_t v_isSharedCheck_2922_; 
v_isSharedCheck_2922_ = !lean_is_exclusive(v_r_2726_);
if (v_isSharedCheck_2922_ == 0)
{
lean_object* v_unused_2923_; lean_object* v_unused_2924_; lean_object* v_unused_2925_; lean_object* v_unused_2926_; lean_object* v_unused_2927_; 
v_unused_2923_ = lean_ctor_get(v_r_2726_, 4);
lean_dec(v_unused_2923_);
v_unused_2924_ = lean_ctor_get(v_r_2726_, 3);
lean_dec(v_unused_2924_);
v_unused_2925_ = lean_ctor_get(v_r_2726_, 2);
lean_dec(v_unused_2925_);
v_unused_2926_ = lean_ctor_get(v_r_2726_, 1);
lean_dec(v_unused_2926_);
v_unused_2927_ = lean_ctor_get(v_r_2726_, 0);
lean_dec(v_unused_2927_);
v___x_2917_ = v_r_2726_;
v_isShared_2918_ = v_isSharedCheck_2922_;
goto v_resetjp_2916_;
}
else
{
lean_dec(v_r_2726_);
v___x_2917_ = lean_box(0);
v_isShared_2918_ = v_isSharedCheck_2922_;
goto v_resetjp_2916_;
}
v_resetjp_2916_:
{
lean_object* v___x_2920_; 
if (v_isShared_2918_ == 0)
{
lean_ctor_set(v___x_2917_, 4, v___x_2915_);
lean_ctor_set(v___x_2917_, 3, v_l_2885_);
lean_ctor_set(v___x_2917_, 2, v_v_2884_);
lean_ctor_set(v___x_2917_, 1, v_k_2883_);
lean_ctor_set(v___x_2917_, 0, v___x_2911_);
v___x_2920_ = v___x_2917_;
goto v_reusejp_2919_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v___x_2911_);
lean_ctor_set(v_reuseFailAlloc_2921_, 1, v_k_2883_);
lean_ctor_set(v_reuseFailAlloc_2921_, 2, v_v_2884_);
lean_ctor_set(v_reuseFailAlloc_2921_, 3, v_l_2885_);
lean_ctor_set(v_reuseFailAlloc_2921_, 4, v___x_2915_);
v___x_2920_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2919_;
}
v_reusejp_2919_:
{
return v___x_2920_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2935_; 
v_l_2935_ = lean_ctor_get(v_impl_2879_, 3);
lean_inc(v_l_2935_);
if (lean_obj_tag(v_l_2935_) == 0)
{
lean_object* v_r_2936_; lean_object* v_k_2937_; lean_object* v_v_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2947_; 
v_r_2936_ = lean_ctor_get(v_impl_2879_, 4);
v_k_2937_ = lean_ctor_get(v_impl_2879_, 1);
v_v_2938_ = lean_ctor_get(v_impl_2879_, 2);
v_isSharedCheck_2947_ = !lean_is_exclusive(v_impl_2879_);
if (v_isSharedCheck_2947_ == 0)
{
lean_object* v_unused_2948_; lean_object* v_unused_2949_; 
v_unused_2948_ = lean_ctor_get(v_impl_2879_, 3);
lean_dec(v_unused_2948_);
v_unused_2949_ = lean_ctor_get(v_impl_2879_, 0);
lean_dec(v_unused_2949_);
v___x_2940_ = v_impl_2879_;
v_isShared_2941_ = v_isSharedCheck_2947_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_r_2936_);
lean_inc(v_v_2938_);
lean_inc(v_k_2937_);
lean_dec(v_impl_2879_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2947_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2942_; lean_object* v___x_2944_; 
v___x_2942_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2936_);
if (v_isShared_2941_ == 0)
{
lean_ctor_set(v___x_2940_, 3, v_r_2936_);
lean_ctor_set(v___x_2940_, 2, v_v_2724_);
lean_ctor_set(v___x_2940_, 1, v_k_2723_);
lean_ctor_set(v___x_2940_, 0, v___x_2880_);
v___x_2944_ = v___x_2940_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v___x_2880_);
lean_ctor_set(v_reuseFailAlloc_2946_, 1, v_k_2723_);
lean_ctor_set(v_reuseFailAlloc_2946_, 2, v_v_2724_);
lean_ctor_set(v_reuseFailAlloc_2946_, 3, v_r_2936_);
lean_ctor_set(v_reuseFailAlloc_2946_, 4, v_r_2936_);
v___x_2944_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
lean_object* v___x_2945_; 
v___x_2945_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2942_);
lean_ctor_set(v___x_2945_, 1, v_k_2937_);
lean_ctor_set(v___x_2945_, 2, v_v_2938_);
lean_ctor_set(v___x_2945_, 3, v_l_2935_);
lean_ctor_set(v___x_2945_, 4, v___x_2944_);
return v___x_2945_;
}
}
}
else
{
lean_object* v_r_2950_; 
v_r_2950_ = lean_ctor_get(v_impl_2879_, 4);
lean_inc(v_r_2950_);
if (lean_obj_tag(v_r_2950_) == 0)
{
lean_object* v_k_2951_; lean_object* v_v_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2973_; 
v_k_2951_ = lean_ctor_get(v_impl_2879_, 1);
v_v_2952_ = lean_ctor_get(v_impl_2879_, 2);
v_isSharedCheck_2973_ = !lean_is_exclusive(v_impl_2879_);
if (v_isSharedCheck_2973_ == 0)
{
lean_object* v_unused_2974_; lean_object* v_unused_2975_; lean_object* v_unused_2976_; 
v_unused_2974_ = lean_ctor_get(v_impl_2879_, 4);
lean_dec(v_unused_2974_);
v_unused_2975_ = lean_ctor_get(v_impl_2879_, 3);
lean_dec(v_unused_2975_);
v_unused_2976_ = lean_ctor_get(v_impl_2879_, 0);
lean_dec(v_unused_2976_);
v___x_2954_ = v_impl_2879_;
v_isShared_2955_ = v_isSharedCheck_2973_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_v_2952_);
lean_inc(v_k_2951_);
lean_dec(v_impl_2879_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2973_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v_k_2956_; lean_object* v_v_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2969_; 
v_k_2956_ = lean_ctor_get(v_r_2950_, 1);
v_v_2957_ = lean_ctor_get(v_r_2950_, 2);
v_isSharedCheck_2969_ = !lean_is_exclusive(v_r_2950_);
if (v_isSharedCheck_2969_ == 0)
{
lean_object* v_unused_2970_; lean_object* v_unused_2971_; lean_object* v_unused_2972_; 
v_unused_2970_ = lean_ctor_get(v_r_2950_, 4);
lean_dec(v_unused_2970_);
v_unused_2971_ = lean_ctor_get(v_r_2950_, 3);
lean_dec(v_unused_2971_);
v_unused_2972_ = lean_ctor_get(v_r_2950_, 0);
lean_dec(v_unused_2972_);
v___x_2959_ = v_r_2950_;
v_isShared_2960_ = v_isSharedCheck_2969_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_v_2957_);
lean_inc(v_k_2956_);
lean_dec(v_r_2950_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2969_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2961_; lean_object* v___x_2963_; 
v___x_2961_ = lean_unsigned_to_nat(3u);
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 4, v_l_2935_);
lean_ctor_set(v___x_2959_, 3, v_l_2935_);
lean_ctor_set(v___x_2959_, 2, v_v_2952_);
lean_ctor_set(v___x_2959_, 1, v_k_2951_);
lean_ctor_set(v___x_2959_, 0, v___x_2880_);
v___x_2963_ = v___x_2959_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v___x_2880_);
lean_ctor_set(v_reuseFailAlloc_2968_, 1, v_k_2951_);
lean_ctor_set(v_reuseFailAlloc_2968_, 2, v_v_2952_);
lean_ctor_set(v_reuseFailAlloc_2968_, 3, v_l_2935_);
lean_ctor_set(v_reuseFailAlloc_2968_, 4, v_l_2935_);
v___x_2963_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
lean_object* v___x_2965_; 
if (v_isShared_2955_ == 0)
{
lean_ctor_set(v___x_2954_, 4, v_l_2935_);
lean_ctor_set(v___x_2954_, 2, v_v_2724_);
lean_ctor_set(v___x_2954_, 1, v_k_2723_);
lean_ctor_set(v___x_2954_, 0, v___x_2880_);
v___x_2965_ = v___x_2954_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v___x_2880_);
lean_ctor_set(v_reuseFailAlloc_2967_, 1, v_k_2723_);
lean_ctor_set(v_reuseFailAlloc_2967_, 2, v_v_2724_);
lean_ctor_set(v_reuseFailAlloc_2967_, 3, v_l_2935_);
lean_ctor_set(v_reuseFailAlloc_2967_, 4, v_l_2935_);
v___x_2965_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
lean_object* v___x_2966_; 
v___x_2966_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2966_, 0, v___x_2961_);
lean_ctor_set(v___x_2966_, 1, v_k_2956_);
lean_ctor_set(v___x_2966_, 2, v_v_2957_);
lean_ctor_set(v___x_2966_, 3, v___x_2963_);
lean_ctor_set(v___x_2966_, 4, v___x_2965_);
return v___x_2966_;
}
}
}
}
}
else
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2977_ = lean_unsigned_to_nat(2u);
v___x_2978_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2977_);
lean_ctor_set(v___x_2978_, 1, v_k_2723_);
lean_ctor_set(v___x_2978_, 2, v_v_2724_);
lean_ctor_set(v___x_2978_, 3, v_impl_2879_);
lean_ctor_set(v___x_2978_, 4, v_r_2950_);
return v___x_2978_;
}
}
}
}
}
}
else
{
lean_object* v___x_2992_; lean_object* v___x_2993_; 
v___x_2992_ = lean_unsigned_to_nat(1u);
v___x_2993_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2993_, 0, v___x_2992_);
lean_ctor_set(v___x_2993_, 1, v_k_2705_);
lean_ctor_set(v___x_2993_, 2, v_v_2706_);
lean_ctor_set(v___x_2993_, 3, v_t_2707_);
lean_ctor_set(v___x_2993_, 4, v_t_2707_);
return v___x_2993_;
}
v___jp_2708_:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2719_ = lean_nat_add(v___y_2711_, v___y_2718_);
lean_dec(v___y_2718_);
lean_dec(v___y_2711_);
v___x_2720_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
lean_ctor_set(v___x_2720_, 1, v___y_2715_);
lean_ctor_set(v___x_2720_, 2, v___y_2716_);
lean_ctor_set(v___x_2720_, 3, v___y_2713_);
lean_ctor_set(v___x_2720_, 4, v___y_2709_);
v___x_2721_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2721_, 0, v___y_2714_);
lean_ctor_set(v___x_2721_, 1, v___y_2717_);
lean_ctor_set(v___x_2721_, 2, v___y_2710_);
lean_ctor_set(v___x_2721_, 3, v___y_2712_);
lean_ctor_set(v___x_2721_, 4, v___x_2720_);
return v___x_2721_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0___redArg(lean_object* v_k_2994_, lean_object* v_t_2995_){
_start:
{
if (lean_obj_tag(v_t_2995_) == 0)
{
lean_object* v_k_2996_; lean_object* v_l_2997_; lean_object* v_r_2998_; lean_object* v_fst_2999_; lean_object* v_snd_3000_; lean_object* v_fst_3001_; lean_object* v_snd_3002_; double v___x_3003_; double v___x_3004_; uint8_t v___x_3005_; 
v_k_2996_ = lean_ctor_get(v_t_2995_, 1);
v_l_2997_ = lean_ctor_get(v_t_2995_, 3);
v_r_2998_ = lean_ctor_get(v_t_2995_, 4);
v_fst_2999_ = lean_ctor_get(v_k_2994_, 0);
v_snd_3000_ = lean_ctor_get(v_k_2994_, 1);
v_fst_3001_ = lean_ctor_get(v_k_2996_, 0);
v_snd_3002_ = lean_ctor_get(v_k_2996_, 1);
v___x_3003_ = lean_unbox_float(v_fst_2999_);
v___x_3004_ = lean_unbox_float(v_fst_3001_);
v___x_3005_ = lean_float_decLt(v___x_3003_, v___x_3004_);
if (v___x_3005_ == 0)
{
double v___x_3006_; double v___x_3007_; uint8_t v___x_3008_; 
v___x_3006_ = lean_unbox_float(v_fst_3001_);
v___x_3007_ = lean_unbox_float(v_fst_2999_);
v___x_3008_ = lean_float_decLt(v___x_3006_, v___x_3007_);
if (v___x_3008_ == 0)
{
uint8_t v___x_3009_; 
v___x_3009_ = l_Lean_Name_cmp(v_snd_3000_, v_snd_3002_);
switch(v___x_3009_)
{
case 0:
{
v_t_2995_ = v_l_2997_;
goto _start;
}
case 1:
{
uint8_t v___x_3011_; 
v___x_3011_ = 1;
return v___x_3011_;
}
default: 
{
v_t_2995_ = v_r_2998_;
goto _start;
}
}
}
else
{
v_t_2995_ = v_r_2998_;
goto _start;
}
}
else
{
v_t_2995_ = v_l_2997_;
goto _start;
}
}
else
{
uint8_t v___x_3015_; 
v___x_3015_ = 0;
return v___x_3015_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0___redArg___boxed(lean_object* v_k_3016_, lean_object* v_t_3017_){
_start:
{
uint8_t v_res_3018_; lean_object* v_r_3019_; 
v_res_3018_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0___redArg(v_k_3016_, v_t_3017_);
lean_dec(v_t_3017_);
lean_dec_ref(v_k_3016_);
v_r_3019_ = lean_box(v_res_3018_);
return v_r_3019_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3___redArg(double v_frequencyWeight_3020_, double v_fst_3021_, double v_depthFactor_3022_, lean_object* v_denyList_3023_, lean_object* v_as_3024_, size_t v_i_3025_, size_t v_stop_3026_, lean_object* v_b_3027_, lean_object* v___y_3028_){
_start:
{
lean_object* v_a_3031_; lean_object* v___y_3036_; lean_object* v___y_3037_; uint8_t v___x_3039_; 
v___x_3039_ = lean_usize_dec_eq(v_i_3025_, v_stop_3026_);
if (v___x_3039_ == 0)
{
lean_object* v_fst_3040_; lean_object* v_snd_3041_; lean_object* v___x_3042_; uint8_t v___y_3044_; uint8_t v___x_3072_; 
v_fst_3040_ = lean_ctor_get(v_b_3027_, 0);
v_snd_3041_ = lean_ctor_get(v_b_3027_, 1);
v___x_3042_ = lean_array_uget_borrowed(v_as_3024_, v_i_3025_);
v___x_3072_ = l_Lean_NameSet_contains(v_fst_3040_, v___x_3042_);
if (v___x_3072_ == 0)
{
uint8_t v___x_3073_; 
v___x_3073_ = l_Lean_NameSet_contains(v_denyList_3023_, v___x_3042_);
v___y_3044_ = v___x_3073_;
goto v___jp_3043_;
}
else
{
v___y_3044_ = v___x_3072_;
goto v___jp_3043_;
}
v___jp_3043_:
{
if (v___y_3044_ == 0)
{
lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3069_; 
lean_inc(v_snd_3041_);
lean_inc(v_fst_3040_);
v_isSharedCheck_3069_ = !lean_is_exclusive(v_b_3027_);
if (v_isSharedCheck_3069_ == 0)
{
lean_object* v_unused_3070_; lean_object* v_unused_3071_; 
v_unused_3070_ = lean_ctor_get(v_b_3027_, 1);
lean_dec(v_unused_3070_);
v_unused_3071_ = lean_ctor_get(v_b_3027_, 0);
lean_dec(v_unused_3071_);
v___x_3046_ = v_b_3027_;
v_isShared_3047_ = v_isSharedCheck_3069_;
goto v_resetjp_3045_;
}
else
{
lean_dec(v_b_3027_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3069_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v___x_3048_; 
v___x_3048_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg(v___x_3042_, v_frequencyWeight_3020_, v___y_3028_);
if (lean_obj_tag(v___x_3048_) == 0)
{
lean_object* v_a_3049_; lean_object* v___x_3050_; double v___x_3051_; double v___x_3052_; double v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3056_; 
v_a_3049_ = lean_ctor_get(v___x_3048_, 0);
lean_inc(v_a_3049_);
lean_dec_ref(v___x_3048_);
lean_inc_n(v___x_3042_, 2);
v___x_3050_ = l_Lean_NameSet_insert(v_fst_3040_, v___x_3042_);
v___x_3051_ = lean_float_mul(v_fst_3021_, v_depthFactor_3022_);
v___x_3052_ = lean_unbox_float(v_a_3049_);
lean_dec(v_a_3049_);
v___x_3053_ = lean_float_mul(v___x_3051_, v___x_3052_);
v___x_3054_ = lean_box_float(v___x_3053_);
if (v_isShared_3047_ == 0)
{
lean_ctor_set(v___x_3046_, 1, v___x_3042_);
lean_ctor_set(v___x_3046_, 0, v___x_3054_);
v___x_3056_ = v___x_3046_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v___x_3054_);
lean_ctor_set(v_reuseFailAlloc_3060_, 1, v___x_3042_);
v___x_3056_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
uint8_t v___x_3057_; 
v___x_3057_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0___redArg(v___x_3056_, v_snd_3041_);
if (v___x_3057_ == 0)
{
lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3058_ = lean_box(0);
v___x_3059_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__1___redArg(v___x_3056_, v___x_3058_, v_snd_3041_);
v___y_3036_ = v___x_3050_;
v___y_3037_ = v___x_3059_;
goto v___jp_3035_;
}
else
{
lean_dec_ref(v___x_3056_);
v___y_3036_ = v___x_3050_;
v___y_3037_ = v_snd_3041_;
goto v___jp_3035_;
}
}
}
else
{
lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3068_; 
lean_del_object(v___x_3046_);
lean_dec(v_snd_3041_);
lean_dec(v_fst_3040_);
v_a_3061_ = lean_ctor_get(v___x_3048_, 0);
v_isSharedCheck_3068_ = !lean_is_exclusive(v___x_3048_);
if (v_isSharedCheck_3068_ == 0)
{
v___x_3063_ = v___x_3048_;
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3048_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3066_; 
if (v_isShared_3064_ == 0)
{
v___x_3066_ = v___x_3063_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_a_3061_);
v___x_3066_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
return v___x_3066_;
}
}
}
}
}
else
{
v_a_3031_ = v_b_3027_;
goto v___jp_3030_;
}
}
}
else
{
lean_object* v___x_3074_; 
v___x_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3074_, 0, v_b_3027_);
return v___x_3074_;
}
v___jp_3030_:
{
size_t v___x_3032_; size_t v___x_3033_; 
v___x_3032_ = ((size_t)1ULL);
v___x_3033_ = lean_usize_add(v_i_3025_, v___x_3032_);
v_i_3025_ = v___x_3033_;
v_b_3027_ = v_a_3031_;
goto _start;
}
v___jp_3035_:
{
lean_object* v___x_3038_; 
v___x_3038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3038_, 0, v___y_3036_);
lean_ctor_set(v___x_3038_, 1, v___y_3037_);
v_a_3031_ = v___x_3038_;
goto v___jp_3030_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3___redArg___boxed(lean_object* v_frequencyWeight_3075_, lean_object* v_fst_3076_, lean_object* v_depthFactor_3077_, lean_object* v_denyList_3078_, lean_object* v_as_3079_, lean_object* v_i_3080_, lean_object* v_stop_3081_, lean_object* v_b_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_){
_start:
{
double v_frequencyWeight_boxed_3085_; double v_fst_10879__boxed_3086_; double v_depthFactor_boxed_3087_; size_t v_i_boxed_3088_; size_t v_stop_boxed_3089_; lean_object* v_res_3090_; 
v_frequencyWeight_boxed_3085_ = lean_unbox_float(v_frequencyWeight_3075_);
lean_dec_ref(v_frequencyWeight_3075_);
v_fst_10879__boxed_3086_ = lean_unbox_float(v_fst_3076_);
lean_dec_ref(v_fst_3076_);
v_depthFactor_boxed_3087_ = lean_unbox_float(v_depthFactor_3077_);
lean_dec_ref(v_depthFactor_3077_);
v_i_boxed_3088_ = lean_unbox_usize(v_i_3080_);
lean_dec(v_i_3080_);
v_stop_boxed_3089_ = lean_unbox_usize(v_stop_3081_);
lean_dec(v_stop_3081_);
v_res_3090_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3___redArg(v_frequencyWeight_boxed_3085_, v_fst_10879__boxed_3086_, v_depthFactor_boxed_3087_, v_denyList_3078_, v_as_3079_, v_i_boxed_3088_, v_stop_boxed_3089_, v_b_3082_, v___y_3083_);
lean_dec(v___y_3083_);
lean_dec_ref(v_as_3079_);
lean_dec(v_denyList_3078_);
return v_res_3090_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__2(void){
_start:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3094_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__1));
v___x_3095_ = l_Lean_MessageData_ofFormat(v___x_3094_);
return v___x_3095_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__3(void){
_start:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; 
v___x_3096_ = lean_box(1);
v___x_3097_ = l_Lean_MessageData_ofFormat(v___x_3096_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6(lean_object* v_a_3098_, lean_object* v_a_3099_){
_start:
{
if (lean_obj_tag(v_a_3098_) == 0)
{
lean_object* v___x_3100_; 
v___x_3100_ = l_List_reverse___redArg(v_a_3099_);
return v___x_3100_;
}
else
{
lean_object* v_head_3101_; lean_object* v_tail_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3129_; 
v_head_3101_ = lean_ctor_get(v_a_3098_, 0);
v_tail_3102_ = lean_ctor_get(v_a_3098_, 1);
v_isSharedCheck_3129_ = !lean_is_exclusive(v_a_3098_);
if (v_isSharedCheck_3129_ == 0)
{
v___x_3104_ = v_a_3098_;
v_isShared_3105_ = v_isSharedCheck_3129_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_tail_3102_);
lean_inc(v_head_3101_);
lean_dec(v_a_3098_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3129_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v_fst_3106_; lean_object* v_snd_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3128_; 
v_fst_3106_ = lean_ctor_get(v_head_3101_, 0);
v_snd_3107_ = lean_ctor_get(v_head_3101_, 1);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_head_3101_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3109_ = v_head_3101_;
v_isShared_3110_ = v_isSharedCheck_3128_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_snd_3107_);
lean_inc(v_fst_3106_);
lean_dec(v_head_3101_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3128_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3114_; 
v___x_3111_ = l_Lean_MessageData_ofName(v_fst_3106_);
v___x_3112_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__2, &l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__2_once, _init_l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__2);
if (v_isShared_3110_ == 0)
{
lean_ctor_set_tag(v___x_3109_, 7);
lean_ctor_set(v___x_3109_, 1, v___x_3112_);
lean_ctor_set(v___x_3109_, 0, v___x_3111_);
v___x_3114_ = v___x_3109_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v___x_3111_);
lean_ctor_set(v_reuseFailAlloc_3127_, 1, v___x_3112_);
v___x_3114_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; double v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3124_; 
v___x_3115_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__3, &l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__3_once, _init_l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__3);
v___x_3116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3114_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = lean_unbox_float(v_snd_3107_);
lean_dec(v_snd_3107_);
v___x_3118_ = lean_float_to_string(v___x_3117_);
v___x_3119_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
v___x_3120_ = l_Lean_MessageData_ofFormat(v___x_3119_);
v___x_3121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3116_);
lean_ctor_set(v___x_3121_, 1, v___x_3120_);
v___x_3122_ = l_Lean_MessageData_paren(v___x_3121_);
if (v_isShared_3105_ == 0)
{
lean_ctor_set(v___x_3104_, 1, v_a_3099_);
lean_ctor_set(v___x_3104_, 0, v___x_3122_);
v___x_3124_ = v___x_3104_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3122_);
lean_ctor_set(v_reuseFailAlloc_3126_, 1, v_a_3099_);
v___x_3124_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
v_a_3098_ = v_tail_3102_;
v_a_3099_ = v___x_3124_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__9(lean_object* v_init_3130_, lean_object* v_x_3131_){
_start:
{
if (lean_obj_tag(v_x_3131_) == 0)
{
lean_object* v_k_3132_; lean_object* v_l_3133_; lean_object* v_r_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v_k_3132_ = lean_ctor_get(v_x_3131_, 1);
v_l_3133_ = lean_ctor_get(v_x_3131_, 3);
v_r_3134_ = lean_ctor_get(v_x_3131_, 4);
v___x_3135_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__9(v_init_3130_, v_r_3134_);
lean_inc(v_k_3132_);
v___x_3136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3136_, 0, v_k_3132_);
lean_ctor_set(v___x_3136_, 1, v___x_3135_);
v_init_3130_ = v___x_3136_;
v_x_3131_ = v_l_3133_;
goto _start;
}
else
{
return v_init_3130_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__9___boxed(lean_object* v_init_3138_, lean_object* v_x_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__9(v_init_3138_, v_x_3139_);
lean_dec(v_x_3139_);
return v_res_3140_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__10(lean_object* v_a_3141_, lean_object* v_a_3142_){
_start:
{
if (lean_obj_tag(v_a_3141_) == 0)
{
lean_object* v___x_3143_; 
v___x_3143_ = l_List_reverse___redArg(v_a_3142_);
return v___x_3143_;
}
else
{
lean_object* v_head_3144_; lean_object* v_tail_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3172_; 
v_head_3144_ = lean_ctor_get(v_a_3141_, 0);
v_tail_3145_ = lean_ctor_get(v_a_3141_, 1);
v_isSharedCheck_3172_ = !lean_is_exclusive(v_a_3141_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3147_ = v_a_3141_;
v_isShared_3148_ = v_isSharedCheck_3172_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_tail_3145_);
lean_inc(v_head_3144_);
lean_dec(v_a_3141_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3172_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v_fst_3149_; lean_object* v_snd_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3171_; 
v_fst_3149_ = lean_ctor_get(v_head_3144_, 0);
v_snd_3150_ = lean_ctor_get(v_head_3144_, 1);
v_isSharedCheck_3171_ = !lean_is_exclusive(v_head_3144_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3152_ = v_head_3144_;
v_isShared_3153_ = v_isSharedCheck_3171_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_snd_3150_);
lean_inc(v_fst_3149_);
lean_dec(v_head_3144_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3171_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
double v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3160_; 
v___x_3154_ = lean_unbox_float(v_fst_3149_);
lean_dec(v_fst_3149_);
v___x_3155_ = lean_float_to_string(v___x_3154_);
v___x_3156_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3156_, 0, v___x_3155_);
v___x_3157_ = l_Lean_MessageData_ofFormat(v___x_3156_);
v___x_3158_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__2, &l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__2_once, _init_l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__2);
if (v_isShared_3153_ == 0)
{
lean_ctor_set_tag(v___x_3152_, 7);
lean_ctor_set(v___x_3152_, 1, v___x_3158_);
lean_ctor_set(v___x_3152_, 0, v___x_3157_);
v___x_3160_ = v___x_3152_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v___x_3157_);
lean_ctor_set(v_reuseFailAlloc_3170_, 1, v___x_3158_);
v___x_3160_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3167_; 
v___x_3161_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__3, &l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__3_once, _init_l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6___closed__3);
v___x_3162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3160_);
lean_ctor_set(v___x_3162_, 1, v___x_3161_);
v___x_3163_ = l_Lean_MessageData_ofName(v_snd_3150_);
v___x_3164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3162_);
lean_ctor_set(v___x_3164_, 1, v___x_3163_);
v___x_3165_ = l_Lean_MessageData_paren(v___x_3164_);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 1, v_a_3142_);
lean_ctor_set(v___x_3147_, 0, v___x_3165_);
v___x_3167_ = v___x_3147_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v___x_3165_);
lean_ctor_set(v_reuseFailAlloc_3169_, 1, v_a_3142_);
v___x_3167_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
v_a_3141_ = v_tail_3145_;
v_a_3142_ = v___x_3167_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(lean_object* v_init_3173_, lean_object* v_x_3174_){
_start:
{
if (lean_obj_tag(v_x_3174_) == 0)
{
lean_object* v_k_3175_; lean_object* v_l_3176_; lean_object* v_r_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; 
v_k_3175_ = lean_ctor_get(v_x_3174_, 1);
v_l_3176_ = lean_ctor_get(v_x_3174_, 3);
v_r_3177_ = lean_ctor_get(v_x_3174_, 4);
v___x_3178_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(v_init_3173_, v_r_3177_);
lean_inc(v_k_3175_);
v___x_3179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3179_, 0, v_k_3175_);
lean_ctor_set(v___x_3179_, 1, v___x_3178_);
v_init_3173_ = v___x_3179_;
v_x_3174_ = v_l_3176_;
goto _start;
}
else
{
return v_init_3173_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7___boxed(lean_object* v_init_3181_, lean_object* v_x_3182_){
_start:
{
lean_object* v_res_3183_; 
v_res_3183_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(v_init_3181_, v_x_3182_);
lean_dec(v_x_3182_);
return v_res_3183_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__0(void){
_start:
{
lean_object* v___x_3184_; double v___x_3185_; 
v___x_3184_ = lean_unsigned_to_nat(0u);
v___x_3185_ = lean_float_of_nat(v___x_3184_);
return v___x_3185_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11(lean_object* v_cls_3189_, lean_object* v_msg_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_){
_start:
{
lean_object* v_ref_3196_; lean_object* v___x_3197_; lean_object* v_a_3198_; lean_object* v___x_3200_; uint8_t v_isShared_3201_; uint8_t v_isSharedCheck_3242_; 
v_ref_3196_ = lean_ctor_get(v___y_3193_, 5);
v___x_3197_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9_spec__10(v_msg_3190_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_);
v_a_3198_ = lean_ctor_get(v___x_3197_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3200_ = v___x_3197_;
v_isShared_3201_ = v_isSharedCheck_3242_;
goto v_resetjp_3199_;
}
else
{
lean_inc(v_a_3198_);
lean_dec(v___x_3197_);
v___x_3200_ = lean_box(0);
v_isShared_3201_ = v_isSharedCheck_3242_;
goto v_resetjp_3199_;
}
v_resetjp_3199_:
{
lean_object* v___x_3202_; lean_object* v_traceState_3203_; lean_object* v_env_3204_; lean_object* v_nextMacroScope_3205_; lean_object* v_ngen_3206_; lean_object* v_auxDeclNGen_3207_; lean_object* v_cache_3208_; lean_object* v_messages_3209_; lean_object* v_infoState_3210_; lean_object* v_snapshotTasks_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3241_; 
v___x_3202_ = lean_st_ref_take(v___y_3194_);
v_traceState_3203_ = lean_ctor_get(v___x_3202_, 4);
v_env_3204_ = lean_ctor_get(v___x_3202_, 0);
v_nextMacroScope_3205_ = lean_ctor_get(v___x_3202_, 1);
v_ngen_3206_ = lean_ctor_get(v___x_3202_, 2);
v_auxDeclNGen_3207_ = lean_ctor_get(v___x_3202_, 3);
v_cache_3208_ = lean_ctor_get(v___x_3202_, 5);
v_messages_3209_ = lean_ctor_get(v___x_3202_, 6);
v_infoState_3210_ = lean_ctor_get(v___x_3202_, 7);
v_snapshotTasks_3211_ = lean_ctor_get(v___x_3202_, 8);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3213_ = v___x_3202_;
v_isShared_3214_ = v_isSharedCheck_3241_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_snapshotTasks_3211_);
lean_inc(v_infoState_3210_);
lean_inc(v_messages_3209_);
lean_inc(v_cache_3208_);
lean_inc(v_traceState_3203_);
lean_inc(v_auxDeclNGen_3207_);
lean_inc(v_ngen_3206_);
lean_inc(v_nextMacroScope_3205_);
lean_inc(v_env_3204_);
lean_dec(v___x_3202_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3241_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
uint64_t v_tid_3215_; lean_object* v_traces_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3240_; 
v_tid_3215_ = lean_ctor_get_uint64(v_traceState_3203_, sizeof(void*)*1);
v_traces_3216_ = lean_ctor_get(v_traceState_3203_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v_traceState_3203_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3218_ = v_traceState_3203_;
v_isShared_3219_ = v_isSharedCheck_3240_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_traces_3216_);
lean_dec(v_traceState_3203_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3240_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3220_; double v___x_3221_; uint8_t v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3230_; 
v___x_3220_ = lean_box(0);
v___x_3221_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__0, &l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__0);
v___x_3222_ = 0;
v___x_3223_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__1));
v___x_3224_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3224_, 0, v_cls_3189_);
lean_ctor_set(v___x_3224_, 1, v___x_3220_);
lean_ctor_set(v___x_3224_, 2, v___x_3223_);
lean_ctor_set_float(v___x_3224_, sizeof(void*)*3, v___x_3221_);
lean_ctor_set_float(v___x_3224_, sizeof(void*)*3 + 8, v___x_3221_);
lean_ctor_set_uint8(v___x_3224_, sizeof(void*)*3 + 16, v___x_3222_);
v___x_3225_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___closed__2));
v___x_3226_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3224_);
lean_ctor_set(v___x_3226_, 1, v_a_3198_);
lean_ctor_set(v___x_3226_, 2, v___x_3225_);
lean_inc(v_ref_3196_);
v___x_3227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3227_, 0, v_ref_3196_);
lean_ctor_set(v___x_3227_, 1, v___x_3226_);
v___x_3228_ = l_Lean_PersistentArray_push___redArg(v_traces_3216_, v___x_3227_);
if (v_isShared_3219_ == 0)
{
lean_ctor_set(v___x_3218_, 0, v___x_3228_);
v___x_3230_ = v___x_3218_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v___x_3228_);
lean_ctor_set_uint64(v_reuseFailAlloc_3239_, sizeof(void*)*1, v_tid_3215_);
v___x_3230_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
lean_object* v___x_3232_; 
if (v_isShared_3214_ == 0)
{
lean_ctor_set(v___x_3213_, 4, v___x_3230_);
v___x_3232_ = v___x_3213_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v_env_3204_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v_nextMacroScope_3205_);
lean_ctor_set(v_reuseFailAlloc_3238_, 2, v_ngen_3206_);
lean_ctor_set(v_reuseFailAlloc_3238_, 3, v_auxDeclNGen_3207_);
lean_ctor_set(v_reuseFailAlloc_3238_, 4, v___x_3230_);
lean_ctor_set(v_reuseFailAlloc_3238_, 5, v_cache_3208_);
lean_ctor_set(v_reuseFailAlloc_3238_, 6, v_messages_3209_);
lean_ctor_set(v_reuseFailAlloc_3238_, 7, v_infoState_3210_);
lean_ctor_set(v_reuseFailAlloc_3238_, 8, v_snapshotTasks_3211_);
v___x_3232_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3236_; 
v___x_3233_ = lean_st_ref_set(v___y_3194_, v___x_3232_);
v___x_3234_ = lean_box(0);
if (v_isShared_3201_ == 0)
{
lean_ctor_set(v___x_3200_, 0, v___x_3234_);
v___x_3236_ = v___x_3200_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v___x_3234_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
return v___x_3236_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11___boxed(lean_object* v_cls_3243_, lean_object* v_msg_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11(v_cls_3243_, v_msg_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_);
lean_dec(v___y_3248_);
lean_dec_ref(v___y_3247_);
lean_dec(v___y_3246_);
lean_dec_ref(v___y_3245_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__8(lean_object* v_a_3251_, lean_object* v_a_3252_){
_start:
{
if (lean_obj_tag(v_a_3251_) == 0)
{
lean_object* v___x_3253_; 
v___x_3253_ = l_List_reverse___redArg(v_a_3252_);
return v___x_3253_;
}
else
{
lean_object* v_head_3254_; lean_object* v_tail_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3264_; 
v_head_3254_ = lean_ctor_get(v_a_3251_, 0);
v_tail_3255_ = lean_ctor_get(v_a_3251_, 1);
v_isSharedCheck_3264_ = !lean_is_exclusive(v_a_3251_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3257_ = v_a_3251_;
v_isShared_3258_ = v_isSharedCheck_3264_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_tail_3255_);
lean_inc(v_head_3254_);
lean_dec(v_a_3251_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3264_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3259_; lean_object* v___x_3261_; 
v___x_3259_ = l_Lean_MessageData_ofName(v_head_3254_);
if (v_isShared_3258_ == 0)
{
lean_ctor_set(v___x_3257_, 1, v_a_3252_);
lean_ctor_set(v___x_3257_, 0, v___x_3259_);
v___x_3261_ = v___x_3257_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3263_; 
v_reuseFailAlloc_3263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3263_, 0, v___x_3259_);
lean_ctor_set(v_reuseFailAlloc_3263_, 1, v_a_3252_);
v___x_3261_ = v_reuseFailAlloc_3263_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
v_a_3251_ = v_tail_3255_;
v_a_3252_ = v___x_3261_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__4(double v_fst_3265_, lean_object* v_x_3266_, lean_object* v_x_3267_){
_start:
{
if (lean_obj_tag(v_x_3267_) == 0)
{
return v_x_3266_;
}
else
{
lean_object* v_head_3268_; lean_object* v_tail_3269_; lean_object* v_fst_3270_; lean_object* v_snd_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3286_; 
v_head_3268_ = lean_ctor_get(v_x_3267_, 0);
lean_inc(v_head_3268_);
v_tail_3269_ = lean_ctor_get(v_x_3267_, 1);
lean_inc(v_tail_3269_);
lean_dec_ref(v_x_3267_);
v_fst_3270_ = lean_ctor_get(v_head_3268_, 0);
v_snd_3271_ = lean_ctor_get(v_head_3268_, 1);
v_isSharedCheck_3286_ = !lean_is_exclusive(v_head_3268_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3273_ = v_head_3268_;
v_isShared_3274_ = v_isSharedCheck_3286_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_snd_3271_);
lean_inc(v_fst_3270_);
lean_dec(v_head_3268_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3286_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
double v___x_3275_; double v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3279_; 
v___x_3275_ = lean_unbox_float(v_snd_3271_);
lean_dec(v_snd_3271_);
v___x_3276_ = lean_float_mul(v___x_3275_, v_fst_3265_);
v___x_3277_ = lean_box_float(v___x_3276_);
if (v_isShared_3274_ == 0)
{
lean_ctor_set(v___x_3273_, 1, v_fst_3270_);
lean_ctor_set(v___x_3273_, 0, v___x_3277_);
v___x_3279_ = v___x_3273_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v___x_3277_);
lean_ctor_set(v_reuseFailAlloc_3285_, 1, v_fst_3270_);
v___x_3279_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
uint8_t v___x_3280_; 
v___x_3280_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0___redArg(v___x_3279_, v_x_3266_);
if (v___x_3280_ == 0)
{
lean_object* v___x_3281_; lean_object* v___x_3282_; 
v___x_3281_ = lean_box(0);
v___x_3282_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__1___redArg(v___x_3279_, v___x_3281_, v_x_3266_);
v_x_3266_ = v___x_3282_;
v_x_3267_ = v_tail_3269_;
goto _start;
}
else
{
lean_dec_ref(v___x_3279_);
v_x_3267_ = v_tail_3269_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__4___boxed(lean_object* v_fst_3287_, lean_object* v_x_3288_, lean_object* v_x_3289_){
_start:
{
double v_fst_11300__boxed_3290_; lean_object* v_res_3291_; 
v_fst_11300__boxed_3290_ = lean_unbox_float(v_fst_3287_);
lean_dec_ref(v_fst_3287_);
v_res_3291_ = l_List_foldl___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__4(v_fst_11300__boxed_3290_, v_x_3288_, v_x_3289_);
return v_res_3291_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__1(void){
_start:
{
lean_object* v___x_3293_; lean_object* v___x_3294_; 
v___x_3293_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__0));
v___x_3294_ = l_Lean_stringToMessageData(v___x_3293_);
return v___x_3294_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__3(void){
_start:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3296_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__2));
v___x_3297_ = l_Lean_stringToMessageData(v___x_3296_);
return v___x_3297_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__5(void){
_start:
{
lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3299_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__4));
v___x_3300_ = l_Lean_stringToMessageData(v___x_3299_);
return v___x_3300_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__7(void){
_start:
{
lean_object* v___x_3302_; lean_object* v___x_3303_; 
v___x_3302_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__6));
v___x_3303_ = l_Lean_stringToMessageData(v___x_3302_);
return v___x_3303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go(lean_object* v_maxSuggestions_3304_, double v_depthFactor_3305_, double v_frequencyWeight_3306_, lean_object* v_denyList_3307_, lean_object* v_pastTriggers_3308_, lean_object* v_triggerQueue_3309_, lean_object* v_acceptedTheorems_3310_, lean_object* v_queuedTheorems_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_, lean_object* v_a_3315_){
_start:
{
double v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; lean_object* v___y_3323_; lean_object* v___y_3324_; lean_object* v_fst_3325_; lean_object* v_snd_3326_; double v___y_3333_; lean_object* v___y_3334_; lean_object* v___y_3335_; lean_object* v___y_3336_; lean_object* v___y_3337_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___y_3353_; lean_object* v___y_3354_; lean_object* v___y_3355_; lean_object* v___y_3356_; lean_object* v___x_3400_; uint8_t v___x_3401_; 
v___x_3400_ = lean_array_get_size(v_acceptedTheorems_3310_);
v___x_3401_ = lean_nat_dec_le(v_maxSuggestions_3304_, v___x_3400_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; 
v___x_3402_ = l_Std_DTreeMap_Internal_Impl_minKey_x3f___redArg(v_triggerQueue_3309_);
if (lean_obj_tag(v___x_3402_) == 0)
{
v___y_3353_ = v_a_3312_;
v___y_3354_ = v_a_3313_;
v___y_3355_ = v_a_3314_;
v___y_3356_ = v_a_3315_;
goto v___jp_3352_;
}
else
{
lean_object* v_val_3403_; lean_object* v_fst_3404_; lean_object* v_snd_3405_; lean_object* v___y_3407_; lean_object* v___y_3408_; lean_object* v___y_3409_; lean_object* v___y_3410_; lean_object* v___x_3471_; 
v_val_3403_ = lean_ctor_get(v___x_3402_, 0);
lean_inc(v_val_3403_);
lean_dec_ref(v___x_3402_);
v_fst_3404_ = lean_ctor_get(v_val_3403_, 0);
lean_inc(v_fst_3404_);
v_snd_3405_ = lean_ctor_get(v_val_3403_, 1);
v___x_3471_ = l_Std_DTreeMap_Internal_Impl_minKey_x3f___redArg(v_queuedTheorems_3311_);
if (lean_obj_tag(v___x_3471_) == 0)
{
goto v___jp_3425_;
}
else
{
lean_object* v_val_3472_; lean_object* v_fst_3473_; double v___x_3474_; double v___x_3475_; uint8_t v___x_3476_; 
v_val_3472_ = lean_ctor_get(v___x_3471_, 0);
lean_inc(v_val_3472_);
lean_dec_ref(v___x_3471_);
v_fst_3473_ = lean_ctor_get(v_val_3472_, 0);
lean_inc(v_fst_3473_);
lean_dec(v_val_3472_);
v___x_3474_ = lean_unbox_float(v_fst_3404_);
v___x_3475_ = lean_unbox_float(v_fst_3473_);
lean_dec(v_fst_3473_);
v___x_3476_ = lean_float_decLt(v___x_3474_, v___x_3475_);
if (v___x_3476_ == 0)
{
lean_dec(v_fst_3404_);
lean_dec(v_val_3403_);
v___y_3353_ = v_a_3312_;
v___y_3354_ = v_a_3313_;
v___y_3355_ = v_a_3314_;
v___y_3356_ = v_a_3315_;
goto v___jp_3352_;
}
else
{
goto v___jp_3425_;
}
}
v___jp_3406_:
{
lean_object* v___x_3411_; 
v___x_3411_ = l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTheorems___redArg(v_snd_3405_, v___y_3410_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v_a_3412_; lean_object* v___x_3413_; double v___x_3414_; lean_object* v___x_3415_; 
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
lean_inc(v_a_3412_);
lean_dec_ref(v___x_3411_);
v___x_3413_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___redArg(v_val_3403_, v_triggerQueue_3309_);
lean_dec(v_val_3403_);
v___x_3414_ = lean_unbox_float(v_fst_3404_);
lean_dec(v_fst_3404_);
v___x_3415_ = l_List_foldl___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__4(v___x_3414_, v_queuedTheorems_3311_, v_a_3412_);
v_triggerQueue_3309_ = v___x_3413_;
v_queuedTheorems_3311_ = v___x_3415_;
v_a_3312_ = v___y_3407_;
v_a_3313_ = v___y_3408_;
v_a_3314_ = v___y_3409_;
v_a_3315_ = v___y_3410_;
goto _start;
}
else
{
lean_object* v_a_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3424_; 
lean_dec(v_fst_3404_);
lean_dec(v_val_3403_);
lean_dec(v_queuedTheorems_3311_);
lean_dec_ref(v_acceptedTheorems_3310_);
lean_dec(v_triggerQueue_3309_);
lean_dec(v_pastTriggers_3308_);
v_a_3417_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3424_ == 0)
{
v___x_3419_ = v___x_3411_;
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_a_3417_);
lean_dec(v___x_3411_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3422_; 
if (v_isShared_3420_ == 0)
{
v___x_3422_ = v___x_3419_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v_a_3417_);
v___x_3422_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
return v___x_3422_;
}
}
}
}
v___jp_3425_:
{
lean_object* v_cls_3426_; lean_object* v___x_3427_; 
v_cls_3426_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_));
v___x_3427_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__5___redArg(v_cls_3426_, v_a_3314_);
if (lean_obj_tag(v___x_3427_) == 0)
{
lean_object* v_a_3428_; uint8_t v___x_3429_; 
v_a_3428_ = lean_ctor_get(v___x_3427_, 0);
lean_inc(v_a_3428_);
lean_dec_ref(v___x_3427_);
v___x_3429_ = lean_unbox(v_a_3428_);
lean_dec(v_a_3428_);
if (v___x_3429_ == 0)
{
v___y_3407_ = v_a_3312_;
v___y_3408_ = v_a_3313_;
v___y_3409_ = v_a_3314_;
v___y_3410_ = v_a_3315_;
goto v___jp_3406_;
}
else
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; 
v___x_3430_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__1, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__1_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__1);
lean_inc_ref(v_acceptedTheorems_3310_);
v___x_3431_ = lean_array_to_list(v_acceptedTheorems_3310_);
v___x_3432_ = lean_box(0);
v___x_3433_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6(v___x_3431_, v___x_3432_);
v___x_3434_ = l_Lean_MessageData_ofList(v___x_3433_);
v___x_3435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3435_, 0, v___x_3430_);
lean_ctor_set(v___x_3435_, 1, v___x_3434_);
v___x_3436_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__3, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__3_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__3);
v___x_3437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3437_, 0, v___x_3435_);
lean_ctor_set(v___x_3437_, 1, v___x_3436_);
v___x_3438_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(v___x_3432_, v_pastTriggers_3308_);
v___x_3439_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__8(v___x_3438_, v___x_3432_);
v___x_3440_ = l_Lean_MessageData_ofList(v___x_3439_);
v___x_3441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3437_);
lean_ctor_set(v___x_3441_, 1, v___x_3440_);
v___x_3442_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__5, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__5_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__5);
v___x_3443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3441_);
lean_ctor_set(v___x_3443_, 1, v___x_3442_);
v___x_3444_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__9(v___x_3432_, v_triggerQueue_3309_);
v___x_3445_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__10(v___x_3444_, v___x_3432_);
v___x_3446_ = l_Lean_MessageData_ofList(v___x_3445_);
v___x_3447_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3443_);
lean_ctor_set(v___x_3447_, 1, v___x_3446_);
v___x_3448_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__7, &l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__7_once, _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___closed__7);
v___x_3449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3449_, 0, v___x_3447_);
lean_ctor_set(v___x_3449_, 1, v___x_3448_);
v___x_3450_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__9(v___x_3432_, v_queuedTheorems_3311_);
v___x_3451_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__10(v___x_3450_, v___x_3432_);
v___x_3452_ = l_Lean_MessageData_ofList(v___x_3451_);
v___x_3453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3449_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
v___x_3454_ = l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__11(v_cls_3426_, v___x_3453_, v_a_3312_, v_a_3313_, v_a_3314_, v_a_3315_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_dec_ref(v___x_3454_);
v___y_3407_ = v_a_3312_;
v___y_3408_ = v_a_3313_;
v___y_3409_ = v_a_3314_;
v___y_3410_ = v_a_3315_;
goto v___jp_3406_;
}
else
{
lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3462_; 
lean_dec(v_fst_3404_);
lean_dec(v_val_3403_);
lean_dec(v_queuedTheorems_3311_);
lean_dec_ref(v_acceptedTheorems_3310_);
lean_dec(v_triggerQueue_3309_);
lean_dec(v_pastTriggers_3308_);
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3454_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3457_ = v___x_3454_;
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3454_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3460_; 
if (v_isShared_3458_ == 0)
{
v___x_3460_ = v___x_3457_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3455_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
return v___x_3460_;
}
}
}
}
}
else
{
lean_object* v_a_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3470_; 
lean_dec(v_fst_3404_);
lean_dec(v_val_3403_);
lean_dec(v_queuedTheorems_3311_);
lean_dec_ref(v_acceptedTheorems_3310_);
lean_dec(v_triggerQueue_3309_);
lean_dec(v_pastTriggers_3308_);
v_a_3463_ = lean_ctor_get(v___x_3427_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3427_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3465_ = v___x_3427_;
v_isShared_3466_ = v_isSharedCheck_3470_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_a_3463_);
lean_dec(v___x_3427_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3470_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
lean_object* v___x_3468_; 
if (v_isShared_3466_ == 0)
{
v___x_3468_ = v___x_3465_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v_a_3463_);
v___x_3468_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
return v___x_3468_;
}
}
}
}
}
}
else
{
lean_object* v___x_3477_; 
lean_dec(v_queuedTheorems_3311_);
lean_dec(v_triggerQueue_3309_);
lean_dec(v_pastTriggers_3308_);
v___x_3477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3477_, 0, v_acceptedTheorems_3310_);
return v___x_3477_;
}
v___jp_3317_:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; 
v___x_3327_ = lean_box_float(v___y_3318_);
v___x_3328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3328_, 0, v___y_3319_);
lean_ctor_set(v___x_3328_, 1, v___x_3327_);
v___x_3329_ = lean_array_push(v_acceptedTheorems_3310_, v___x_3328_);
v___x_3330_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___redArg(v___y_3324_, v_queuedTheorems_3311_);
lean_dec_ref(v___y_3324_);
v_pastTriggers_3308_ = v_fst_3325_;
v_triggerQueue_3309_ = v_snd_3326_;
v_acceptedTheorems_3310_ = v___x_3329_;
v_queuedTheorems_3311_ = v___x_3330_;
v_a_3312_ = v___y_3320_;
v_a_3313_ = v___y_3322_;
v_a_3314_ = v___y_3323_;
v_a_3315_ = v___y_3321_;
goto _start;
}
v___jp_3332_:
{
if (lean_obj_tag(v___y_3340_) == 0)
{
lean_object* v_a_3341_; lean_object* v_fst_3342_; lean_object* v_snd_3343_; 
v_a_3341_ = lean_ctor_get(v___y_3340_, 0);
lean_inc(v_a_3341_);
lean_dec_ref(v___y_3340_);
v_fst_3342_ = lean_ctor_get(v_a_3341_, 0);
lean_inc(v_fst_3342_);
v_snd_3343_ = lean_ctor_get(v_a_3341_, 1);
lean_inc(v_snd_3343_);
lean_dec(v_a_3341_);
v___y_3318_ = v___y_3333_;
v___y_3319_ = v___y_3334_;
v___y_3320_ = v___y_3335_;
v___y_3321_ = v___y_3336_;
v___y_3322_ = v___y_3337_;
v___y_3323_ = v___y_3339_;
v___y_3324_ = v___y_3338_;
v_fst_3325_ = v_fst_3342_;
v_snd_3326_ = v_snd_3343_;
goto v___jp_3317_;
}
else
{
lean_object* v_a_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3351_; 
lean_dec_ref(v___y_3338_);
lean_dec(v___y_3334_);
lean_dec(v_queuedTheorems_3311_);
lean_dec_ref(v_acceptedTheorems_3310_);
v_a_3344_ = lean_ctor_get(v___y_3340_, 0);
v_isSharedCheck_3351_ = !lean_is_exclusive(v___y_3340_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3346_ = v___y_3340_;
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_a_3344_);
lean_dec(v___y_3340_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3349_; 
if (v_isShared_3347_ == 0)
{
v___x_3349_ = v___x_3346_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v_a_3344_);
v___x_3349_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
return v___x_3349_;
}
}
}
}
v___jp_3352_:
{
lean_object* v___x_3357_; 
v___x_3357_ = l_Std_DTreeMap_Internal_Impl_minKey_x3f___redArg(v_queuedTheorems_3311_);
if (lean_obj_tag(v___x_3357_) == 0)
{
lean_object* v___x_3358_; 
lean_dec(v_queuedTheorems_3311_);
lean_dec(v_triggerQueue_3309_);
lean_dec(v_pastTriggers_3308_);
v___x_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3358_, 0, v_acceptedTheorems_3310_);
return v___x_3358_;
}
else
{
lean_object* v_val_3359_; lean_object* v_fst_3360_; lean_object* v_snd_3361_; lean_object* v___x_3362_; 
v_val_3359_ = lean_ctor_get(v___x_3357_, 0);
lean_inc(v_val_3359_);
lean_dec_ref(v___x_3357_);
v_fst_3360_ = lean_ctor_get(v_val_3359_, 0);
v_snd_3361_ = lean_ctor_get(v_val_3359_, 1);
lean_inc_n(v_snd_3361_, 2);
v___x_3362_ = l_Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0(v_snd_3361_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_);
if (lean_obj_tag(v___x_3362_) == 0)
{
lean_object* v_a_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; 
v_a_3363_ = lean_ctor_get(v___x_3362_, 0);
lean_inc(v_a_3363_);
lean_dec_ref(v___x_3362_);
v___x_3364_ = l_Lean_ConstantInfo_type(v_a_3363_);
lean_dec(v_a_3363_);
v___x_3365_ = l_Lean_Expr_relevantConstants(v___x_3364_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_);
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_object* v_a_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; uint8_t v___x_3369_; 
v_a_3366_ = lean_ctor_get(v___x_3365_, 0);
lean_inc(v_a_3366_);
lean_dec_ref(v___x_3365_);
v___x_3367_ = lean_unsigned_to_nat(0u);
v___x_3368_ = lean_array_get_size(v_a_3366_);
v___x_3369_ = lean_nat_dec_lt(v___x_3367_, v___x_3368_);
if (v___x_3369_ == 0)
{
double v___x_3370_; 
lean_dec(v_a_3366_);
v___x_3370_ = lean_unbox_float(v_fst_3360_);
v___y_3318_ = v___x_3370_;
v___y_3319_ = v_snd_3361_;
v___y_3320_ = v___y_3353_;
v___y_3321_ = v___y_3356_;
v___y_3322_ = v___y_3354_;
v___y_3323_ = v___y_3355_;
v___y_3324_ = v_val_3359_;
v_fst_3325_ = v_pastTriggers_3308_;
v_snd_3326_ = v_triggerQueue_3309_;
goto v___jp_3317_;
}
else
{
lean_object* v___x_3371_; uint8_t v___x_3372_; 
lean_inc(v_triggerQueue_3309_);
lean_inc(v_pastTriggers_3308_);
v___x_3371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3371_, 0, v_pastTriggers_3308_);
lean_ctor_set(v___x_3371_, 1, v_triggerQueue_3309_);
v___x_3372_ = lean_nat_dec_le(v___x_3368_, v___x_3368_);
if (v___x_3372_ == 0)
{
if (v___x_3369_ == 0)
{
double v___x_3373_; 
lean_dec_ref(v___x_3371_);
lean_dec(v_a_3366_);
v___x_3373_ = lean_unbox_float(v_fst_3360_);
v___y_3318_ = v___x_3373_;
v___y_3319_ = v_snd_3361_;
v___y_3320_ = v___y_3353_;
v___y_3321_ = v___y_3356_;
v___y_3322_ = v___y_3354_;
v___y_3323_ = v___y_3355_;
v___y_3324_ = v_val_3359_;
v_fst_3325_ = v_pastTriggers_3308_;
v_snd_3326_ = v_triggerQueue_3309_;
goto v___jp_3317_;
}
else
{
size_t v___x_3374_; size_t v___x_3375_; double v___x_3376_; lean_object* v___x_3377_; double v___x_3378_; 
lean_dec(v_triggerQueue_3309_);
lean_dec(v_pastTriggers_3308_);
v___x_3374_ = ((size_t)0ULL);
v___x_3375_ = lean_usize_of_nat(v___x_3368_);
v___x_3376_ = lean_unbox_float(v_fst_3360_);
v___x_3377_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3___redArg(v_frequencyWeight_3306_, v___x_3376_, v_depthFactor_3305_, v_denyList_3307_, v_a_3366_, v___x_3374_, v___x_3375_, v___x_3371_, v___y_3356_);
lean_dec(v_a_3366_);
v___x_3378_ = lean_unbox_float(v_fst_3360_);
v___y_3333_ = v___x_3378_;
v___y_3334_ = v_snd_3361_;
v___y_3335_ = v___y_3353_;
v___y_3336_ = v___y_3356_;
v___y_3337_ = v___y_3354_;
v___y_3338_ = v_val_3359_;
v___y_3339_ = v___y_3355_;
v___y_3340_ = v___x_3377_;
goto v___jp_3332_;
}
}
else
{
size_t v___x_3379_; size_t v___x_3380_; double v___x_3381_; lean_object* v___x_3382_; double v___x_3383_; 
lean_dec(v_triggerQueue_3309_);
lean_dec(v_pastTriggers_3308_);
v___x_3379_ = ((size_t)0ULL);
v___x_3380_ = lean_usize_of_nat(v___x_3368_);
v___x_3381_ = lean_unbox_float(v_fst_3360_);
v___x_3382_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3___redArg(v_frequencyWeight_3306_, v___x_3381_, v_depthFactor_3305_, v_denyList_3307_, v_a_3366_, v___x_3379_, v___x_3380_, v___x_3371_, v___y_3356_);
lean_dec(v_a_3366_);
v___x_3383_ = lean_unbox_float(v_fst_3360_);
v___y_3333_ = v___x_3383_;
v___y_3334_ = v_snd_3361_;
v___y_3335_ = v___y_3353_;
v___y_3336_ = v___y_3356_;
v___y_3337_ = v___y_3354_;
v___y_3338_ = v_val_3359_;
v___y_3339_ = v___y_3355_;
v___y_3340_ = v___x_3382_;
goto v___jp_3332_;
}
}
}
else
{
lean_object* v_a_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3391_; 
lean_dec(v_snd_3361_);
lean_dec(v_val_3359_);
lean_dec(v_queuedTheorems_3311_);
lean_dec_ref(v_acceptedTheorems_3310_);
lean_dec(v_triggerQueue_3309_);
lean_dec(v_pastTriggers_3308_);
v_a_3384_ = lean_ctor_get(v___x_3365_, 0);
v_isSharedCheck_3391_ = !lean_is_exclusive(v___x_3365_);
if (v_isSharedCheck_3391_ == 0)
{
v___x_3386_ = v___x_3365_;
v_isShared_3387_ = v_isSharedCheck_3391_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_a_3384_);
lean_dec(v___x_3365_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3391_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v___x_3389_; 
if (v_isShared_3387_ == 0)
{
v___x_3389_ = v___x_3386_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v_a_3384_);
v___x_3389_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
return v___x_3389_;
}
}
}
}
else
{
lean_object* v_a_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3399_; 
lean_dec(v_snd_3361_);
lean_dec(v_val_3359_);
lean_dec(v_queuedTheorems_3311_);
lean_dec_ref(v_acceptedTheorems_3310_);
lean_dec(v_triggerQueue_3309_);
lean_dec(v_pastTriggers_3308_);
v_a_3392_ = lean_ctor_get(v___x_3362_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v___x_3362_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3394_ = v___x_3362_;
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_a_3392_);
lean_dec(v___x_3362_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___x_3397_; 
if (v_isShared_3395_ == 0)
{
v___x_3397_ = v___x_3394_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v_a_3392_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go___boxed(lean_object* v_maxSuggestions_3478_, lean_object* v_depthFactor_3479_, lean_object* v_frequencyWeight_3480_, lean_object* v_denyList_3481_, lean_object* v_pastTriggers_3482_, lean_object* v_triggerQueue_3483_, lean_object* v_acceptedTheorems_3484_, lean_object* v_queuedTheorems_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_, lean_object* v_a_3488_, lean_object* v_a_3489_, lean_object* v_a_3490_){
_start:
{
double v_depthFactor_boxed_3491_; double v_frequencyWeight_boxed_3492_; lean_object* v_res_3493_; 
v_depthFactor_boxed_3491_ = lean_unbox_float(v_depthFactor_3479_);
lean_dec_ref(v_depthFactor_3479_);
v_frequencyWeight_boxed_3492_ = lean_unbox_float(v_frequencyWeight_3480_);
lean_dec_ref(v_frequencyWeight_3480_);
v_res_3493_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go(v_maxSuggestions_3478_, v_depthFactor_boxed_3491_, v_frequencyWeight_boxed_3492_, v_denyList_3481_, v_pastTriggers_3482_, v_triggerQueue_3483_, v_acceptedTheorems_3484_, v_queuedTheorems_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_);
lean_dec(v_a_3489_);
lean_dec_ref(v_a_3488_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_denyList_3481_);
lean_dec(v_maxSuggestions_3478_);
return v_res_3493_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0(lean_object* v_00_u03b2_3494_, lean_object* v_k_3495_, lean_object* v_t_3496_){
_start:
{
uint8_t v___x_3497_; 
v___x_3497_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0___redArg(v_k_3495_, v_t_3496_);
return v___x_3497_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0___boxed(lean_object* v_00_u03b2_3498_, lean_object* v_k_3499_, lean_object* v_t_3500_){
_start:
{
uint8_t v_res_3501_; lean_object* v_r_3502_; 
v_res_3501_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__0(v_00_u03b2_3498_, v_k_3499_, v_t_3500_);
lean_dec(v_t_3500_);
lean_dec_ref(v_k_3499_);
v_r_3502_ = lean_box(v_res_3501_);
return v_r_3502_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__1(lean_object* v_00_u03b2_3503_, lean_object* v_k_3504_, lean_object* v_v_3505_, lean_object* v_t_3506_, lean_object* v_hl_3507_){
_start:
{
lean_object* v___x_3508_; 
v___x_3508_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__1___redArg(v_k_3504_, v_v_3505_, v_t_3506_);
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2(lean_object* v_00_u03b2_3509_, lean_object* v_k_3510_, lean_object* v_t_3511_, lean_object* v_h_3512_){
_start:
{
lean_object* v___x_3513_; 
v___x_3513_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___redArg(v_k_3510_, v_t_3511_);
return v___x_3513_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2___boxed(lean_object* v_00_u03b2_3514_, lean_object* v_k_3515_, lean_object* v_t_3516_, lean_object* v_h_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__2(v_00_u03b2_3514_, v_k_3515_, v_t_3516_, v_h_3517_);
lean_dec_ref(v_k_3515_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3(double v_frequencyWeight_3519_, double v_fst_3520_, double v_depthFactor_3521_, lean_object* v_denyList_3522_, lean_object* v_as_3523_, size_t v_i_3524_, size_t v_stop_3525_, lean_object* v_b_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_){
_start:
{
lean_object* v___x_3532_; 
v___x_3532_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3___redArg(v_frequencyWeight_3519_, v_fst_3520_, v_depthFactor_3521_, v_denyList_3522_, v_as_3523_, v_i_3524_, v_stop_3525_, v_b_3526_, v___y_3530_);
return v___x_3532_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3___boxed(lean_object* v_frequencyWeight_3533_, lean_object* v_fst_3534_, lean_object* v_depthFactor_3535_, lean_object* v_denyList_3536_, lean_object* v_as_3537_, lean_object* v_i_3538_, lean_object* v_stop_3539_, lean_object* v_b_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_){
_start:
{
double v_frequencyWeight_boxed_3546_; double v_fst_11716__boxed_3547_; double v_depthFactor_boxed_3548_; size_t v_i_boxed_3549_; size_t v_stop_boxed_3550_; lean_object* v_res_3551_; 
v_frequencyWeight_boxed_3546_ = lean_unbox_float(v_frequencyWeight_3533_);
lean_dec_ref(v_frequencyWeight_3533_);
v_fst_11716__boxed_3547_ = lean_unbox_float(v_fst_3534_);
lean_dec_ref(v_fst_3534_);
v_depthFactor_boxed_3548_ = lean_unbox_float(v_depthFactor_3535_);
lean_dec_ref(v_depthFactor_3535_);
v_i_boxed_3549_ = lean_unbox_usize(v_i_3538_);
lean_dec(v_i_3538_);
v_stop_boxed_3550_ = lean_unbox_usize(v_stop_3539_);
lean_dec(v_stop_3539_);
v_res_3551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__3(v_frequencyWeight_boxed_3546_, v_fst_11716__boxed_3547_, v_depthFactor_boxed_3548_, v_denyList_3536_, v_as_3537_, v_i_boxed_3549_, v_stop_boxed_3550_, v_b_3540_, v___y_3541_, v___y_3542_, v___y_3543_, v___y_3544_);
lean_dec(v___y_3544_);
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3542_);
lean_dec_ref(v___y_3541_);
lean_dec_ref(v_as_3537_);
lean_dec(v_denyList_3536_);
return v_res_3551_;
}
}
static double _init_l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_3552_; uint8_t v___x_3553_; lean_object* v___x_3554_; double v___x_3555_; 
v___x_3552_ = lean_unsigned_to_nat(2u);
v___x_3553_ = 1;
v___x_3554_ = lean_unsigned_to_nat(1u);
v___x_3555_ = l_Float_ofScientific(v___x_3554_, v___x_3553_, v___x_3552_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg(lean_object* v_x_3556_, lean_object* v_x_3557_, lean_object* v___y_3558_){
_start:
{
if (lean_obj_tag(v_x_3556_) == 0)
{
lean_object* v___x_3560_; lean_object* v___x_3561_; 
v___x_3560_ = l_List_reverse___redArg(v_x_3557_);
v___x_3561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3561_, 0, v___x_3560_);
return v___x_3561_;
}
else
{
lean_object* v_head_3562_; lean_object* v_tail_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3583_; 
v_head_3562_ = lean_ctor_get(v_x_3556_, 0);
v_tail_3563_ = lean_ctor_get(v_x_3556_, 1);
v_isSharedCheck_3583_ = !lean_is_exclusive(v_x_3556_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3565_ = v_x_3556_;
v_isShared_3566_ = v_isSharedCheck_3583_;
goto v_resetjp_3564_;
}
else
{
lean_inc(v_tail_3563_);
lean_inc(v_head_3562_);
lean_dec(v_x_3556_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3583_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
double v___x_3567_; lean_object* v___x_3568_; 
v___x_3567_ = lean_float_once(&l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg___closed__0, &l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg___closed__0_once, _init_l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg___closed__0);
v___x_3568_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_frequencyScore___redArg(v_head_3562_, v___x_3567_, v___y_3558_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3570_; lean_object* v___x_3572_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
lean_inc(v_a_3569_);
lean_dec_ref(v___x_3568_);
v___x_3570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3570_, 0, v_a_3569_);
lean_ctor_set(v___x_3570_, 1, v_head_3562_);
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 1, v_x_3557_);
lean_ctor_set(v___x_3565_, 0, v___x_3570_);
v___x_3572_ = v___x_3565_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v___x_3570_);
lean_ctor_set(v_reuseFailAlloc_3574_, 1, v_x_3557_);
v___x_3572_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
v_x_3556_ = v_tail_3563_;
v_x_3557_ = v___x_3572_;
goto _start;
}
}
else
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3582_; 
lean_del_object(v___x_3565_);
lean_dec(v_tail_3563_);
lean_dec(v_head_3562_);
lean_dec(v_x_3557_);
v_a_3575_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3577_ = v___x_3568_;
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3568_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3580_; 
if (v_isShared_3578_ == 0)
{
v___x_3580_ = v___x_3577_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3575_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg___boxed(lean_object* v_x_3584_, lean_object* v_x_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_){
_start:
{
lean_object* v_res_3588_; 
v_res_3588_ = l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg(v_x_3584_, v_x_3585_, v___y_3586_);
lean_dec(v___y_3586_);
return v_res_3588_;
}
}
static double _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3___closed__0(void){
_start:
{
lean_object* v___x_3589_; double v___x_3590_; 
v___x_3589_ = lean_unsigned_to_nat(1u);
v___x_3590_ = lean_float_of_nat(v___x_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3(size_t v_sz_3591_, size_t v_i_3592_, lean_object* v_bs_3593_){
_start:
{
uint8_t v___x_3594_; 
v___x_3594_ = lean_usize_dec_lt(v_i_3592_, v_sz_3591_);
if (v___x_3594_ == 0)
{
return v_bs_3593_;
}
else
{
lean_object* v_v_3595_; lean_object* v_fst_3596_; lean_object* v_snd_3597_; lean_object* v___x_3598_; lean_object* v_bs_x27_3599_; double v___x_3600_; double v___x_3601_; double v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; size_t v___x_3605_; size_t v___x_3606_; lean_object* v___x_3607_; 
v_v_3595_ = lean_array_uget_borrowed(v_bs_3593_, v_i_3592_);
v_fst_3596_ = lean_ctor_get(v_v_3595_, 0);
lean_inc(v_fst_3596_);
v_snd_3597_ = lean_ctor_get(v_v_3595_, 1);
lean_inc(v_snd_3597_);
v___x_3598_ = lean_unsigned_to_nat(0u);
v_bs_x27_3599_ = lean_array_uset(v_bs_3593_, v_i_3592_, v___x_3598_);
v___x_3600_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3___closed__0);
v___x_3601_ = lean_unbox_float(v_snd_3597_);
lean_dec(v_snd_3597_);
v___x_3602_ = lean_float_div(v___x_3600_, v___x_3601_);
v___x_3603_ = lean_box(0);
v___x_3604_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_3604_, 0, v_fst_3596_);
lean_ctor_set(v___x_3604_, 1, v___x_3603_);
lean_ctor_set_float(v___x_3604_, sizeof(void*)*2, v___x_3602_);
v___x_3605_ = ((size_t)1ULL);
v___x_3606_ = lean_usize_add(v_i_3592_, v___x_3605_);
v___x_3607_ = lean_array_uset(v_bs_x27_3599_, v_i_3592_, v___x_3604_);
v_i_3592_ = v___x_3606_;
v_bs_3593_ = v___x_3607_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3___boxed(lean_object* v_sz_3609_, lean_object* v_i_3610_, lean_object* v_bs_3611_){
_start:
{
size_t v_sz_boxed_3612_; size_t v_i_boxed_3613_; lean_object* v_res_3614_; 
v_sz_boxed_3612_ = lean_unbox_usize(v_sz_3609_);
lean_dec(v_sz_3609_);
v_i_boxed_3613_ = lean_unbox_usize(v_i_3610_);
lean_dec(v_i_3610_);
v_res_3614_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3(v_sz_boxed_3612_, v_i_boxed_3613_, v_bs_3611_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0___redArg(lean_object* v_k_3615_, lean_object* v_t_3616_){
_start:
{
if (lean_obj_tag(v_t_3616_) == 0)
{
lean_object* v_k_3617_; lean_object* v_v_3618_; lean_object* v_l_3619_; lean_object* v_r_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_4274_; 
v_k_3617_ = lean_ctor_get(v_t_3616_, 1);
v_v_3618_ = lean_ctor_get(v_t_3616_, 2);
v_l_3619_ = lean_ctor_get(v_t_3616_, 3);
v_r_3620_ = lean_ctor_get(v_t_3616_, 4);
v_isSharedCheck_4274_ = !lean_is_exclusive(v_t_3616_);
if (v_isSharedCheck_4274_ == 0)
{
lean_object* v_unused_4275_; 
v_unused_4275_ = lean_ctor_get(v_t_3616_, 0);
lean_dec(v_unused_4275_);
v___x_3622_ = v_t_3616_;
v_isShared_3623_ = v_isSharedCheck_4274_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_r_3620_);
lean_inc(v_l_3619_);
lean_inc(v_v_3618_);
lean_inc(v_k_3617_);
lean_dec(v_t_3616_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_4274_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
uint8_t v___x_3624_; 
v___x_3624_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3615_, v_k_3617_);
switch(v___x_3624_)
{
case 0:
{
lean_object* v_impl_3625_; lean_object* v___x_3626_; 
v_impl_3625_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0___redArg(v_k_3615_, v_l_3619_);
v___x_3626_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3625_) == 0)
{
if (lean_obj_tag(v_r_3620_) == 0)
{
lean_object* v_size_3627_; lean_object* v_size_3628_; lean_object* v_k_3629_; lean_object* v_v_3630_; lean_object* v_l_3631_; lean_object* v_r_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; uint8_t v___x_3635_; 
v_size_3627_ = lean_ctor_get(v_impl_3625_, 0);
lean_inc(v_size_3627_);
v_size_3628_ = lean_ctor_get(v_r_3620_, 0);
v_k_3629_ = lean_ctor_get(v_r_3620_, 1);
v_v_3630_ = lean_ctor_get(v_r_3620_, 2);
v_l_3631_ = lean_ctor_get(v_r_3620_, 3);
lean_inc(v_l_3631_);
v_r_3632_ = lean_ctor_get(v_r_3620_, 4);
v___x_3633_ = lean_unsigned_to_nat(3u);
v___x_3634_ = lean_nat_mul(v___x_3633_, v_size_3627_);
v___x_3635_ = lean_nat_dec_lt(v___x_3634_, v_size_3628_);
lean_dec(v___x_3634_);
if (v___x_3635_ == 0)
{
lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3639_; 
lean_dec(v_l_3631_);
v___x_3636_ = lean_nat_add(v___x_3626_, v_size_3627_);
lean_dec(v_size_3627_);
v___x_3637_ = lean_nat_add(v___x_3636_, v_size_3628_);
lean_dec(v___x_3636_);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 3, v_impl_3625_);
lean_ctor_set(v___x_3622_, 0, v___x_3637_);
v___x_3639_ = v___x_3622_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v___x_3637_);
lean_ctor_set(v_reuseFailAlloc_3640_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_3640_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_3640_, 3, v_impl_3625_);
lean_ctor_set(v_reuseFailAlloc_3640_, 4, v_r_3620_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
else
{
lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3704_; 
lean_inc(v_r_3632_);
lean_inc(v_v_3630_);
lean_inc(v_k_3629_);
lean_inc(v_size_3628_);
v_isSharedCheck_3704_ = !lean_is_exclusive(v_r_3620_);
if (v_isSharedCheck_3704_ == 0)
{
lean_object* v_unused_3705_; lean_object* v_unused_3706_; lean_object* v_unused_3707_; lean_object* v_unused_3708_; lean_object* v_unused_3709_; 
v_unused_3705_ = lean_ctor_get(v_r_3620_, 4);
lean_dec(v_unused_3705_);
v_unused_3706_ = lean_ctor_get(v_r_3620_, 3);
lean_dec(v_unused_3706_);
v_unused_3707_ = lean_ctor_get(v_r_3620_, 2);
lean_dec(v_unused_3707_);
v_unused_3708_ = lean_ctor_get(v_r_3620_, 1);
lean_dec(v_unused_3708_);
v_unused_3709_ = lean_ctor_get(v_r_3620_, 0);
lean_dec(v_unused_3709_);
v___x_3642_ = v_r_3620_;
v_isShared_3643_ = v_isSharedCheck_3704_;
goto v_resetjp_3641_;
}
else
{
lean_dec(v_r_3620_);
v___x_3642_ = lean_box(0);
v_isShared_3643_ = v_isSharedCheck_3704_;
goto v_resetjp_3641_;
}
v_resetjp_3641_:
{
lean_object* v_size_3644_; lean_object* v_k_3645_; lean_object* v_v_3646_; lean_object* v_l_3647_; lean_object* v_r_3648_; lean_object* v_size_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; uint8_t v___x_3652_; 
v_size_3644_ = lean_ctor_get(v_l_3631_, 0);
v_k_3645_ = lean_ctor_get(v_l_3631_, 1);
v_v_3646_ = lean_ctor_get(v_l_3631_, 2);
v_l_3647_ = lean_ctor_get(v_l_3631_, 3);
v_r_3648_ = lean_ctor_get(v_l_3631_, 4);
v_size_3649_ = lean_ctor_get(v_r_3632_, 0);
v___x_3650_ = lean_unsigned_to_nat(2u);
v___x_3651_ = lean_nat_mul(v___x_3650_, v_size_3649_);
v___x_3652_ = lean_nat_dec_lt(v_size_3644_, v___x_3651_);
lean_dec(v___x_3651_);
if (v___x_3652_ == 0)
{
lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3680_; 
lean_inc(v_r_3648_);
lean_inc(v_l_3647_);
lean_inc(v_v_3646_);
lean_inc(v_k_3645_);
v_isSharedCheck_3680_ = !lean_is_exclusive(v_l_3631_);
if (v_isSharedCheck_3680_ == 0)
{
lean_object* v_unused_3681_; lean_object* v_unused_3682_; lean_object* v_unused_3683_; lean_object* v_unused_3684_; lean_object* v_unused_3685_; 
v_unused_3681_ = lean_ctor_get(v_l_3631_, 4);
lean_dec(v_unused_3681_);
v_unused_3682_ = lean_ctor_get(v_l_3631_, 3);
lean_dec(v_unused_3682_);
v_unused_3683_ = lean_ctor_get(v_l_3631_, 2);
lean_dec(v_unused_3683_);
v_unused_3684_ = lean_ctor_get(v_l_3631_, 1);
lean_dec(v_unused_3684_);
v_unused_3685_ = lean_ctor_get(v_l_3631_, 0);
lean_dec(v_unused_3685_);
v___x_3654_ = v_l_3631_;
v_isShared_3655_ = v_isSharedCheck_3680_;
goto v_resetjp_3653_;
}
else
{
lean_dec(v_l_3631_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3680_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___y_3659_; lean_object* v___y_3660_; lean_object* v___y_3661_; lean_object* v___y_3670_; 
v___x_3656_ = lean_nat_add(v___x_3626_, v_size_3627_);
lean_dec(v_size_3627_);
v___x_3657_ = lean_nat_add(v___x_3656_, v_size_3628_);
lean_dec(v_size_3628_);
if (lean_obj_tag(v_l_3647_) == 0)
{
lean_object* v_size_3678_; 
v_size_3678_ = lean_ctor_get(v_l_3647_, 0);
lean_inc(v_size_3678_);
v___y_3670_ = v_size_3678_;
goto v___jp_3669_;
}
else
{
lean_object* v___x_3679_; 
v___x_3679_ = lean_unsigned_to_nat(0u);
v___y_3670_ = v___x_3679_;
goto v___jp_3669_;
}
v___jp_3658_:
{
lean_object* v___x_3662_; lean_object* v___x_3664_; 
v___x_3662_ = lean_nat_add(v___y_3660_, v___y_3661_);
lean_dec(v___y_3661_);
lean_dec(v___y_3660_);
if (v_isShared_3655_ == 0)
{
lean_ctor_set(v___x_3654_, 4, v_r_3632_);
lean_ctor_set(v___x_3654_, 3, v_r_3648_);
lean_ctor_set(v___x_3654_, 2, v_v_3630_);
lean_ctor_set(v___x_3654_, 1, v_k_3629_);
lean_ctor_set(v___x_3654_, 0, v___x_3662_);
v___x_3664_ = v___x_3654_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v___x_3662_);
lean_ctor_set(v_reuseFailAlloc_3668_, 1, v_k_3629_);
lean_ctor_set(v_reuseFailAlloc_3668_, 2, v_v_3630_);
lean_ctor_set(v_reuseFailAlloc_3668_, 3, v_r_3648_);
lean_ctor_set(v_reuseFailAlloc_3668_, 4, v_r_3632_);
v___x_3664_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
lean_object* v___x_3666_; 
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 4, v___x_3664_);
lean_ctor_set(v___x_3642_, 3, v___y_3659_);
lean_ctor_set(v___x_3642_, 2, v_v_3646_);
lean_ctor_set(v___x_3642_, 1, v_k_3645_);
lean_ctor_set(v___x_3642_, 0, v___x_3657_);
v___x_3666_ = v___x_3642_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v___x_3657_);
lean_ctor_set(v_reuseFailAlloc_3667_, 1, v_k_3645_);
lean_ctor_set(v_reuseFailAlloc_3667_, 2, v_v_3646_);
lean_ctor_set(v_reuseFailAlloc_3667_, 3, v___y_3659_);
lean_ctor_set(v_reuseFailAlloc_3667_, 4, v___x_3664_);
v___x_3666_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
return v___x_3666_;
}
}
}
v___jp_3669_:
{
lean_object* v___x_3671_; lean_object* v___x_3673_; 
v___x_3671_ = lean_nat_add(v___x_3656_, v___y_3670_);
lean_dec(v___y_3670_);
lean_dec(v___x_3656_);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v_l_3647_);
lean_ctor_set(v___x_3622_, 3, v_impl_3625_);
lean_ctor_set(v___x_3622_, 0, v___x_3671_);
v___x_3673_ = v___x_3622_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v___x_3671_);
lean_ctor_set(v_reuseFailAlloc_3677_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_3677_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_3677_, 3, v_impl_3625_);
lean_ctor_set(v_reuseFailAlloc_3677_, 4, v_l_3647_);
v___x_3673_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
lean_object* v___x_3674_; 
v___x_3674_ = lean_nat_add(v___x_3626_, v_size_3649_);
if (lean_obj_tag(v_r_3648_) == 0)
{
lean_object* v_size_3675_; 
v_size_3675_ = lean_ctor_get(v_r_3648_, 0);
lean_inc(v_size_3675_);
v___y_3659_ = v___x_3673_;
v___y_3660_ = v___x_3674_;
v___y_3661_ = v_size_3675_;
goto v___jp_3658_;
}
else
{
lean_object* v___x_3676_; 
v___x_3676_ = lean_unsigned_to_nat(0u);
v___y_3659_ = v___x_3673_;
v___y_3660_ = v___x_3674_;
v___y_3661_ = v___x_3676_;
goto v___jp_3658_;
}
}
}
}
}
else
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3690_; 
lean_del_object(v___x_3622_);
v___x_3686_ = lean_nat_add(v___x_3626_, v_size_3627_);
lean_dec(v_size_3627_);
v___x_3687_ = lean_nat_add(v___x_3686_, v_size_3628_);
lean_dec(v_size_3628_);
v___x_3688_ = lean_nat_add(v___x_3686_, v_size_3644_);
lean_dec(v___x_3686_);
lean_inc_ref(v_impl_3625_);
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 4, v_l_3631_);
lean_ctor_set(v___x_3642_, 3, v_impl_3625_);
lean_ctor_set(v___x_3642_, 2, v_v_3618_);
lean_ctor_set(v___x_3642_, 1, v_k_3617_);
lean_ctor_set(v___x_3642_, 0, v___x_3688_);
v___x_3690_ = v___x_3642_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v___x_3688_);
lean_ctor_set(v_reuseFailAlloc_3703_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_3703_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_3703_, 3, v_impl_3625_);
lean_ctor_set(v_reuseFailAlloc_3703_, 4, v_l_3631_);
v___x_3690_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
v_isSharedCheck_3697_ = !lean_is_exclusive(v_impl_3625_);
if (v_isSharedCheck_3697_ == 0)
{
lean_object* v_unused_3698_; lean_object* v_unused_3699_; lean_object* v_unused_3700_; lean_object* v_unused_3701_; lean_object* v_unused_3702_; 
v_unused_3698_ = lean_ctor_get(v_impl_3625_, 4);
lean_dec(v_unused_3698_);
v_unused_3699_ = lean_ctor_get(v_impl_3625_, 3);
lean_dec(v_unused_3699_);
v_unused_3700_ = lean_ctor_get(v_impl_3625_, 2);
lean_dec(v_unused_3700_);
v_unused_3701_ = lean_ctor_get(v_impl_3625_, 1);
lean_dec(v_unused_3701_);
v_unused_3702_ = lean_ctor_get(v_impl_3625_, 0);
lean_dec(v_unused_3702_);
v___x_3692_ = v_impl_3625_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_dec(v_impl_3625_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3695_; 
if (v_isShared_3693_ == 0)
{
lean_ctor_set(v___x_3692_, 4, v_r_3632_);
lean_ctor_set(v___x_3692_, 3, v___x_3690_);
lean_ctor_set(v___x_3692_, 2, v_v_3630_);
lean_ctor_set(v___x_3692_, 1, v_k_3629_);
lean_ctor_set(v___x_3692_, 0, v___x_3687_);
v___x_3695_ = v___x_3692_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v___x_3687_);
lean_ctor_set(v_reuseFailAlloc_3696_, 1, v_k_3629_);
lean_ctor_set(v_reuseFailAlloc_3696_, 2, v_v_3630_);
lean_ctor_set(v_reuseFailAlloc_3696_, 3, v___x_3690_);
lean_ctor_set(v_reuseFailAlloc_3696_, 4, v_r_3632_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3710_; lean_object* v___x_3711_; lean_object* v___x_3713_; 
v_size_3710_ = lean_ctor_get(v_impl_3625_, 0);
lean_inc(v_size_3710_);
v___x_3711_ = lean_nat_add(v___x_3626_, v_size_3710_);
lean_dec(v_size_3710_);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 3, v_impl_3625_);
lean_ctor_set(v___x_3622_, 0, v___x_3711_);
v___x_3713_ = v___x_3622_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v___x_3711_);
lean_ctor_set(v_reuseFailAlloc_3714_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_3714_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_3714_, 3, v_impl_3625_);
lean_ctor_set(v_reuseFailAlloc_3714_, 4, v_r_3620_);
v___x_3713_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
return v___x_3713_;
}
}
}
else
{
if (lean_obj_tag(v_r_3620_) == 0)
{
lean_object* v_l_3715_; 
v_l_3715_ = lean_ctor_get(v_r_3620_, 3);
lean_inc(v_l_3715_);
if (lean_obj_tag(v_l_3715_) == 0)
{
lean_object* v_r_3716_; 
v_r_3716_ = lean_ctor_get(v_r_3620_, 4);
lean_inc(v_r_3716_);
if (lean_obj_tag(v_r_3716_) == 0)
{
lean_object* v_size_3717_; lean_object* v_k_3718_; lean_object* v_v_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3732_; 
v_size_3717_ = lean_ctor_get(v_r_3620_, 0);
v_k_3718_ = lean_ctor_get(v_r_3620_, 1);
v_v_3719_ = lean_ctor_get(v_r_3620_, 2);
v_isSharedCheck_3732_ = !lean_is_exclusive(v_r_3620_);
if (v_isSharedCheck_3732_ == 0)
{
lean_object* v_unused_3733_; lean_object* v_unused_3734_; 
v_unused_3733_ = lean_ctor_get(v_r_3620_, 4);
lean_dec(v_unused_3733_);
v_unused_3734_ = lean_ctor_get(v_r_3620_, 3);
lean_dec(v_unused_3734_);
v___x_3721_ = v_r_3620_;
v_isShared_3722_ = v_isSharedCheck_3732_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_v_3719_);
lean_inc(v_k_3718_);
lean_inc(v_size_3717_);
lean_dec(v_r_3620_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3732_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v_size_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3727_; 
v_size_3723_ = lean_ctor_get(v_l_3715_, 0);
v___x_3724_ = lean_nat_add(v___x_3626_, v_size_3717_);
lean_dec(v_size_3717_);
v___x_3725_ = lean_nat_add(v___x_3626_, v_size_3723_);
if (v_isShared_3722_ == 0)
{
lean_ctor_set(v___x_3721_, 4, v_l_3715_);
lean_ctor_set(v___x_3721_, 3, v_impl_3625_);
lean_ctor_set(v___x_3721_, 2, v_v_3618_);
lean_ctor_set(v___x_3721_, 1, v_k_3617_);
lean_ctor_set(v___x_3721_, 0, v___x_3725_);
v___x_3727_ = v___x_3721_;
goto v_reusejp_3726_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v___x_3725_);
lean_ctor_set(v_reuseFailAlloc_3731_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_3731_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_3731_, 3, v_impl_3625_);
lean_ctor_set(v_reuseFailAlloc_3731_, 4, v_l_3715_);
v___x_3727_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3726_;
}
v_reusejp_3726_:
{
lean_object* v___x_3729_; 
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v_r_3716_);
lean_ctor_set(v___x_3622_, 3, v___x_3727_);
lean_ctor_set(v___x_3622_, 2, v_v_3719_);
lean_ctor_set(v___x_3622_, 1, v_k_3718_);
lean_ctor_set(v___x_3622_, 0, v___x_3724_);
v___x_3729_ = v___x_3622_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3730_; 
v_reuseFailAlloc_3730_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3730_, 0, v___x_3724_);
lean_ctor_set(v_reuseFailAlloc_3730_, 1, v_k_3718_);
lean_ctor_set(v_reuseFailAlloc_3730_, 2, v_v_3719_);
lean_ctor_set(v_reuseFailAlloc_3730_, 3, v___x_3727_);
lean_ctor_set(v_reuseFailAlloc_3730_, 4, v_r_3716_);
v___x_3729_ = v_reuseFailAlloc_3730_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
return v___x_3729_;
}
}
}
}
else
{
lean_object* v_k_3735_; lean_object* v_v_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3759_; 
v_k_3735_ = lean_ctor_get(v_r_3620_, 1);
v_v_3736_ = lean_ctor_get(v_r_3620_, 2);
v_isSharedCheck_3759_ = !lean_is_exclusive(v_r_3620_);
if (v_isSharedCheck_3759_ == 0)
{
lean_object* v_unused_3760_; lean_object* v_unused_3761_; lean_object* v_unused_3762_; 
v_unused_3760_ = lean_ctor_get(v_r_3620_, 4);
lean_dec(v_unused_3760_);
v_unused_3761_ = lean_ctor_get(v_r_3620_, 3);
lean_dec(v_unused_3761_);
v_unused_3762_ = lean_ctor_get(v_r_3620_, 0);
lean_dec(v_unused_3762_);
v___x_3738_ = v_r_3620_;
v_isShared_3739_ = v_isSharedCheck_3759_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_v_3736_);
lean_inc(v_k_3735_);
lean_dec(v_r_3620_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3759_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v_k_3740_; lean_object* v_v_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3755_; 
v_k_3740_ = lean_ctor_get(v_l_3715_, 1);
v_v_3741_ = lean_ctor_get(v_l_3715_, 2);
v_isSharedCheck_3755_ = !lean_is_exclusive(v_l_3715_);
if (v_isSharedCheck_3755_ == 0)
{
lean_object* v_unused_3756_; lean_object* v_unused_3757_; lean_object* v_unused_3758_; 
v_unused_3756_ = lean_ctor_get(v_l_3715_, 4);
lean_dec(v_unused_3756_);
v_unused_3757_ = lean_ctor_get(v_l_3715_, 3);
lean_dec(v_unused_3757_);
v_unused_3758_ = lean_ctor_get(v_l_3715_, 0);
lean_dec(v_unused_3758_);
v___x_3743_ = v_l_3715_;
v_isShared_3744_ = v_isSharedCheck_3755_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_v_3741_);
lean_inc(v_k_3740_);
lean_dec(v_l_3715_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3755_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3745_; lean_object* v___x_3747_; 
v___x_3745_ = lean_unsigned_to_nat(3u);
if (v_isShared_3744_ == 0)
{
lean_ctor_set(v___x_3743_, 4, v_r_3716_);
lean_ctor_set(v___x_3743_, 3, v_r_3716_);
lean_ctor_set(v___x_3743_, 2, v_v_3618_);
lean_ctor_set(v___x_3743_, 1, v_k_3617_);
lean_ctor_set(v___x_3743_, 0, v___x_3626_);
v___x_3747_ = v___x_3743_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v___x_3626_);
lean_ctor_set(v_reuseFailAlloc_3754_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_3754_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_3754_, 3, v_r_3716_);
lean_ctor_set(v_reuseFailAlloc_3754_, 4, v_r_3716_);
v___x_3747_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
lean_object* v___x_3749_; 
if (v_isShared_3739_ == 0)
{
lean_ctor_set(v___x_3738_, 3, v_r_3716_);
lean_ctor_set(v___x_3738_, 0, v___x_3626_);
v___x_3749_ = v___x_3738_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3753_; 
v_reuseFailAlloc_3753_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3753_, 0, v___x_3626_);
lean_ctor_set(v_reuseFailAlloc_3753_, 1, v_k_3735_);
lean_ctor_set(v_reuseFailAlloc_3753_, 2, v_v_3736_);
lean_ctor_set(v_reuseFailAlloc_3753_, 3, v_r_3716_);
lean_ctor_set(v_reuseFailAlloc_3753_, 4, v_r_3716_);
v___x_3749_ = v_reuseFailAlloc_3753_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
lean_object* v___x_3751_; 
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v___x_3749_);
lean_ctor_set(v___x_3622_, 3, v___x_3747_);
lean_ctor_set(v___x_3622_, 2, v_v_3741_);
lean_ctor_set(v___x_3622_, 1, v_k_3740_);
lean_ctor_set(v___x_3622_, 0, v___x_3745_);
v___x_3751_ = v___x_3622_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v___x_3745_);
lean_ctor_set(v_reuseFailAlloc_3752_, 1, v_k_3740_);
lean_ctor_set(v_reuseFailAlloc_3752_, 2, v_v_3741_);
lean_ctor_set(v_reuseFailAlloc_3752_, 3, v___x_3747_);
lean_ctor_set(v_reuseFailAlloc_3752_, 4, v___x_3749_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
return v___x_3751_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_3763_; 
v_r_3763_ = lean_ctor_get(v_r_3620_, 4);
lean_inc(v_r_3763_);
if (lean_obj_tag(v_r_3763_) == 0)
{
lean_object* v_k_3764_; lean_object* v_v_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3776_; 
v_k_3764_ = lean_ctor_get(v_r_3620_, 1);
v_v_3765_ = lean_ctor_get(v_r_3620_, 2);
v_isSharedCheck_3776_ = !lean_is_exclusive(v_r_3620_);
if (v_isSharedCheck_3776_ == 0)
{
lean_object* v_unused_3777_; lean_object* v_unused_3778_; lean_object* v_unused_3779_; 
v_unused_3777_ = lean_ctor_get(v_r_3620_, 4);
lean_dec(v_unused_3777_);
v_unused_3778_ = lean_ctor_get(v_r_3620_, 3);
lean_dec(v_unused_3778_);
v_unused_3779_ = lean_ctor_get(v_r_3620_, 0);
lean_dec(v_unused_3779_);
v___x_3767_ = v_r_3620_;
v_isShared_3768_ = v_isSharedCheck_3776_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_v_3765_);
lean_inc(v_k_3764_);
lean_dec(v_r_3620_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3776_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3769_; lean_object* v___x_3771_; 
v___x_3769_ = lean_unsigned_to_nat(3u);
if (v_isShared_3768_ == 0)
{
lean_ctor_set(v___x_3767_, 4, v_l_3715_);
lean_ctor_set(v___x_3767_, 2, v_v_3618_);
lean_ctor_set(v___x_3767_, 1, v_k_3617_);
lean_ctor_set(v___x_3767_, 0, v___x_3626_);
v___x_3771_ = v___x_3767_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v___x_3626_);
lean_ctor_set(v_reuseFailAlloc_3775_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_3775_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_3775_, 3, v_l_3715_);
lean_ctor_set(v_reuseFailAlloc_3775_, 4, v_l_3715_);
v___x_3771_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
lean_object* v___x_3773_; 
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v_r_3763_);
lean_ctor_set(v___x_3622_, 3, v___x_3771_);
lean_ctor_set(v___x_3622_, 2, v_v_3765_);
lean_ctor_set(v___x_3622_, 1, v_k_3764_);
lean_ctor_set(v___x_3622_, 0, v___x_3769_);
v___x_3773_ = v___x_3622_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v___x_3769_);
lean_ctor_set(v_reuseFailAlloc_3774_, 1, v_k_3764_);
lean_ctor_set(v_reuseFailAlloc_3774_, 2, v_v_3765_);
lean_ctor_set(v_reuseFailAlloc_3774_, 3, v___x_3771_);
lean_ctor_set(v_reuseFailAlloc_3774_, 4, v_r_3763_);
v___x_3773_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
return v___x_3773_;
}
}
}
}
else
{
lean_object* v_size_3780_; lean_object* v_k_3781_; lean_object* v_v_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3793_; 
v_size_3780_ = lean_ctor_get(v_r_3620_, 0);
v_k_3781_ = lean_ctor_get(v_r_3620_, 1);
v_v_3782_ = lean_ctor_get(v_r_3620_, 2);
v_isSharedCheck_3793_ = !lean_is_exclusive(v_r_3620_);
if (v_isSharedCheck_3793_ == 0)
{
lean_object* v_unused_3794_; lean_object* v_unused_3795_; 
v_unused_3794_ = lean_ctor_get(v_r_3620_, 4);
lean_dec(v_unused_3794_);
v_unused_3795_ = lean_ctor_get(v_r_3620_, 3);
lean_dec(v_unused_3795_);
v___x_3784_ = v_r_3620_;
v_isShared_3785_ = v_isSharedCheck_3793_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_v_3782_);
lean_inc(v_k_3781_);
lean_inc(v_size_3780_);
lean_dec(v_r_3620_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3793_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3787_; 
if (v_isShared_3785_ == 0)
{
lean_ctor_set(v___x_3784_, 3, v_r_3763_);
v___x_3787_ = v___x_3784_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_size_3780_);
lean_ctor_set(v_reuseFailAlloc_3792_, 1, v_k_3781_);
lean_ctor_set(v_reuseFailAlloc_3792_, 2, v_v_3782_);
lean_ctor_set(v_reuseFailAlloc_3792_, 3, v_r_3763_);
lean_ctor_set(v_reuseFailAlloc_3792_, 4, v_r_3763_);
v___x_3787_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
lean_object* v___x_3788_; lean_object* v___x_3790_; 
v___x_3788_ = lean_unsigned_to_nat(2u);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v___x_3787_);
lean_ctor_set(v___x_3622_, 3, v_r_3763_);
lean_ctor_set(v___x_3622_, 0, v___x_3788_);
v___x_3790_ = v___x_3622_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v___x_3788_);
lean_ctor_set(v_reuseFailAlloc_3791_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_3791_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_3791_, 3, v_r_3763_);
lean_ctor_set(v_reuseFailAlloc_3791_, 4, v___x_3787_);
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
}
else
{
lean_object* v___x_3797_; 
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 3, v_r_3620_);
lean_ctor_set(v___x_3622_, 0, v___x_3626_);
v___x_3797_ = v___x_3622_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v___x_3626_);
lean_ctor_set(v_reuseFailAlloc_3798_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_3798_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_3798_, 3, v_r_3620_);
lean_ctor_set(v_reuseFailAlloc_3798_, 4, v_r_3620_);
v___x_3797_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
return v___x_3797_;
}
}
}
}
case 1:
{
lean_del_object(v___x_3622_);
lean_dec(v_v_3618_);
lean_dec(v_k_3617_);
if (lean_obj_tag(v_l_3619_) == 0)
{
if (lean_obj_tag(v_r_3620_) == 0)
{
lean_object* v_size_3799_; lean_object* v_k_3800_; lean_object* v_v_3801_; lean_object* v_l_3802_; lean_object* v_r_3803_; lean_object* v_size_3804_; lean_object* v_k_3805_; lean_object* v_v_3806_; lean_object* v_l_3807_; lean_object* v_r_3808_; lean_object* v___x_3809_; uint8_t v___x_3810_; 
v_size_3799_ = lean_ctor_get(v_l_3619_, 0);
v_k_3800_ = lean_ctor_get(v_l_3619_, 1);
v_v_3801_ = lean_ctor_get(v_l_3619_, 2);
v_l_3802_ = lean_ctor_get(v_l_3619_, 3);
v_r_3803_ = lean_ctor_get(v_l_3619_, 4);
lean_inc(v_r_3803_);
v_size_3804_ = lean_ctor_get(v_r_3620_, 0);
v_k_3805_ = lean_ctor_get(v_r_3620_, 1);
v_v_3806_ = lean_ctor_get(v_r_3620_, 2);
v_l_3807_ = lean_ctor_get(v_r_3620_, 3);
lean_inc(v_l_3807_);
v_r_3808_ = lean_ctor_get(v_r_3620_, 4);
v___x_3809_ = lean_unsigned_to_nat(1u);
v___x_3810_ = lean_nat_dec_lt(v_size_3799_, v_size_3804_);
if (v___x_3810_ == 0)
{
lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3946_; 
lean_inc(v_l_3802_);
lean_inc(v_v_3801_);
lean_inc(v_k_3800_);
v_isSharedCheck_3946_ = !lean_is_exclusive(v_l_3619_);
if (v_isSharedCheck_3946_ == 0)
{
lean_object* v_unused_3947_; lean_object* v_unused_3948_; lean_object* v_unused_3949_; lean_object* v_unused_3950_; lean_object* v_unused_3951_; 
v_unused_3947_ = lean_ctor_get(v_l_3619_, 4);
lean_dec(v_unused_3947_);
v_unused_3948_ = lean_ctor_get(v_l_3619_, 3);
lean_dec(v_unused_3948_);
v_unused_3949_ = lean_ctor_get(v_l_3619_, 2);
lean_dec(v_unused_3949_);
v_unused_3950_ = lean_ctor_get(v_l_3619_, 1);
lean_dec(v_unused_3950_);
v_unused_3951_ = lean_ctor_get(v_l_3619_, 0);
lean_dec(v_unused_3951_);
v___x_3812_ = v_l_3619_;
v_isShared_3813_ = v_isSharedCheck_3946_;
goto v_resetjp_3811_;
}
else
{
lean_dec(v_l_3619_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3946_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3814_; lean_object* v_tree_3815_; 
v___x_3814_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_3800_, v_v_3801_, v_l_3802_, v_r_3803_);
v_tree_3815_ = lean_ctor_get(v___x_3814_, 2);
lean_inc(v_tree_3815_);
if (lean_obj_tag(v_tree_3815_) == 0)
{
lean_object* v_k_3816_; lean_object* v_v_3817_; lean_object* v_size_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; uint8_t v___x_3821_; 
v_k_3816_ = lean_ctor_get(v___x_3814_, 0);
lean_inc(v_k_3816_);
v_v_3817_ = lean_ctor_get(v___x_3814_, 1);
lean_inc(v_v_3817_);
lean_dec_ref(v___x_3814_);
v_size_3818_ = lean_ctor_get(v_tree_3815_, 0);
v___x_3819_ = lean_unsigned_to_nat(3u);
v___x_3820_ = lean_nat_mul(v___x_3819_, v_size_3818_);
v___x_3821_ = lean_nat_dec_lt(v___x_3820_, v_size_3804_);
lean_dec(v___x_3820_);
if (v___x_3821_ == 0)
{
lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3825_; 
lean_dec(v_l_3807_);
v___x_3822_ = lean_nat_add(v___x_3809_, v_size_3818_);
v___x_3823_ = lean_nat_add(v___x_3822_, v_size_3804_);
lean_dec(v___x_3822_);
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 4, v_r_3620_);
lean_ctor_set(v___x_3812_, 3, v_tree_3815_);
lean_ctor_set(v___x_3812_, 2, v_v_3817_);
lean_ctor_set(v___x_3812_, 1, v_k_3816_);
lean_ctor_set(v___x_3812_, 0, v___x_3823_);
v___x_3825_ = v___x_3812_;
goto v_reusejp_3824_;
}
else
{
lean_object* v_reuseFailAlloc_3826_; 
v_reuseFailAlloc_3826_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3826_, 0, v___x_3823_);
lean_ctor_set(v_reuseFailAlloc_3826_, 1, v_k_3816_);
lean_ctor_set(v_reuseFailAlloc_3826_, 2, v_v_3817_);
lean_ctor_set(v_reuseFailAlloc_3826_, 3, v_tree_3815_);
lean_ctor_set(v_reuseFailAlloc_3826_, 4, v_r_3620_);
v___x_3825_ = v_reuseFailAlloc_3826_;
goto v_reusejp_3824_;
}
v_reusejp_3824_:
{
return v___x_3825_;
}
}
else
{
lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3881_; 
lean_inc(v_r_3808_);
lean_inc(v_v_3806_);
lean_inc(v_k_3805_);
lean_inc(v_size_3804_);
v_isSharedCheck_3881_ = !lean_is_exclusive(v_r_3620_);
if (v_isSharedCheck_3881_ == 0)
{
lean_object* v_unused_3882_; lean_object* v_unused_3883_; lean_object* v_unused_3884_; lean_object* v_unused_3885_; lean_object* v_unused_3886_; 
v_unused_3882_ = lean_ctor_get(v_r_3620_, 4);
lean_dec(v_unused_3882_);
v_unused_3883_ = lean_ctor_get(v_r_3620_, 3);
lean_dec(v_unused_3883_);
v_unused_3884_ = lean_ctor_get(v_r_3620_, 2);
lean_dec(v_unused_3884_);
v_unused_3885_ = lean_ctor_get(v_r_3620_, 1);
lean_dec(v_unused_3885_);
v_unused_3886_ = lean_ctor_get(v_r_3620_, 0);
lean_dec(v_unused_3886_);
v___x_3828_ = v_r_3620_;
v_isShared_3829_ = v_isSharedCheck_3881_;
goto v_resetjp_3827_;
}
else
{
lean_dec(v_r_3620_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3881_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v_size_3830_; lean_object* v_k_3831_; lean_object* v_v_3832_; lean_object* v_l_3833_; lean_object* v_r_3834_; lean_object* v_size_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; uint8_t v___x_3838_; 
v_size_3830_ = lean_ctor_get(v_l_3807_, 0);
v_k_3831_ = lean_ctor_get(v_l_3807_, 1);
v_v_3832_ = lean_ctor_get(v_l_3807_, 2);
v_l_3833_ = lean_ctor_get(v_l_3807_, 3);
v_r_3834_ = lean_ctor_get(v_l_3807_, 4);
v_size_3835_ = lean_ctor_get(v_r_3808_, 0);
v___x_3836_ = lean_unsigned_to_nat(2u);
v___x_3837_ = lean_nat_mul(v___x_3836_, v_size_3835_);
v___x_3838_ = lean_nat_dec_lt(v_size_3830_, v___x_3837_);
lean_dec(v___x_3837_);
if (v___x_3838_ == 0)
{
lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3866_; 
lean_inc(v_r_3834_);
lean_inc(v_l_3833_);
lean_inc(v_v_3832_);
lean_inc(v_k_3831_);
v_isSharedCheck_3866_ = !lean_is_exclusive(v_l_3807_);
if (v_isSharedCheck_3866_ == 0)
{
lean_object* v_unused_3867_; lean_object* v_unused_3868_; lean_object* v_unused_3869_; lean_object* v_unused_3870_; lean_object* v_unused_3871_; 
v_unused_3867_ = lean_ctor_get(v_l_3807_, 4);
lean_dec(v_unused_3867_);
v_unused_3868_ = lean_ctor_get(v_l_3807_, 3);
lean_dec(v_unused_3868_);
v_unused_3869_ = lean_ctor_get(v_l_3807_, 2);
lean_dec(v_unused_3869_);
v_unused_3870_ = lean_ctor_get(v_l_3807_, 1);
lean_dec(v_unused_3870_);
v_unused_3871_ = lean_ctor_get(v_l_3807_, 0);
lean_dec(v_unused_3871_);
v___x_3840_ = v_l_3807_;
v_isShared_3841_ = v_isSharedCheck_3866_;
goto v_resetjp_3839_;
}
else
{
lean_dec(v_l_3807_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3866_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___y_3845_; lean_object* v___y_3846_; lean_object* v___y_3847_; lean_object* v___y_3856_; 
v___x_3842_ = lean_nat_add(v___x_3809_, v_size_3818_);
v___x_3843_ = lean_nat_add(v___x_3842_, v_size_3804_);
lean_dec(v_size_3804_);
if (lean_obj_tag(v_l_3833_) == 0)
{
lean_object* v_size_3864_; 
v_size_3864_ = lean_ctor_get(v_l_3833_, 0);
lean_inc(v_size_3864_);
v___y_3856_ = v_size_3864_;
goto v___jp_3855_;
}
else
{
lean_object* v___x_3865_; 
v___x_3865_ = lean_unsigned_to_nat(0u);
v___y_3856_ = v___x_3865_;
goto v___jp_3855_;
}
v___jp_3844_:
{
lean_object* v___x_3848_; lean_object* v___x_3850_; 
v___x_3848_ = lean_nat_add(v___y_3846_, v___y_3847_);
lean_dec(v___y_3847_);
lean_dec(v___y_3846_);
if (v_isShared_3841_ == 0)
{
lean_ctor_set(v___x_3840_, 4, v_r_3808_);
lean_ctor_set(v___x_3840_, 3, v_r_3834_);
lean_ctor_set(v___x_3840_, 2, v_v_3806_);
lean_ctor_set(v___x_3840_, 1, v_k_3805_);
lean_ctor_set(v___x_3840_, 0, v___x_3848_);
v___x_3850_ = v___x_3840_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v___x_3848_);
lean_ctor_set(v_reuseFailAlloc_3854_, 1, v_k_3805_);
lean_ctor_set(v_reuseFailAlloc_3854_, 2, v_v_3806_);
lean_ctor_set(v_reuseFailAlloc_3854_, 3, v_r_3834_);
lean_ctor_set(v_reuseFailAlloc_3854_, 4, v_r_3808_);
v___x_3850_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
lean_object* v___x_3852_; 
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 4, v___x_3850_);
lean_ctor_set(v___x_3828_, 3, v___y_3845_);
lean_ctor_set(v___x_3828_, 2, v_v_3832_);
lean_ctor_set(v___x_3828_, 1, v_k_3831_);
lean_ctor_set(v___x_3828_, 0, v___x_3843_);
v___x_3852_ = v___x_3828_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v___x_3843_);
lean_ctor_set(v_reuseFailAlloc_3853_, 1, v_k_3831_);
lean_ctor_set(v_reuseFailAlloc_3853_, 2, v_v_3832_);
lean_ctor_set(v_reuseFailAlloc_3853_, 3, v___y_3845_);
lean_ctor_set(v_reuseFailAlloc_3853_, 4, v___x_3850_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
v___jp_3855_:
{
lean_object* v___x_3857_; lean_object* v___x_3859_; 
v___x_3857_ = lean_nat_add(v___x_3842_, v___y_3856_);
lean_dec(v___y_3856_);
lean_dec(v___x_3842_);
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 4, v_l_3833_);
lean_ctor_set(v___x_3812_, 3, v_tree_3815_);
lean_ctor_set(v___x_3812_, 2, v_v_3817_);
lean_ctor_set(v___x_3812_, 1, v_k_3816_);
lean_ctor_set(v___x_3812_, 0, v___x_3857_);
v___x_3859_ = v___x_3812_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v___x_3857_);
lean_ctor_set(v_reuseFailAlloc_3863_, 1, v_k_3816_);
lean_ctor_set(v_reuseFailAlloc_3863_, 2, v_v_3817_);
lean_ctor_set(v_reuseFailAlloc_3863_, 3, v_tree_3815_);
lean_ctor_set(v_reuseFailAlloc_3863_, 4, v_l_3833_);
v___x_3859_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
lean_object* v___x_3860_; 
v___x_3860_ = lean_nat_add(v___x_3809_, v_size_3835_);
if (lean_obj_tag(v_r_3834_) == 0)
{
lean_object* v_size_3861_; 
v_size_3861_ = lean_ctor_get(v_r_3834_, 0);
lean_inc(v_size_3861_);
v___y_3845_ = v___x_3859_;
v___y_3846_ = v___x_3860_;
v___y_3847_ = v_size_3861_;
goto v___jp_3844_;
}
else
{
lean_object* v___x_3862_; 
v___x_3862_ = lean_unsigned_to_nat(0u);
v___y_3845_ = v___x_3859_;
v___y_3846_ = v___x_3860_;
v___y_3847_ = v___x_3862_;
goto v___jp_3844_;
}
}
}
}
}
else
{
lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3876_; 
v___x_3872_ = lean_nat_add(v___x_3809_, v_size_3818_);
v___x_3873_ = lean_nat_add(v___x_3872_, v_size_3804_);
lean_dec(v_size_3804_);
v___x_3874_ = lean_nat_add(v___x_3872_, v_size_3830_);
lean_dec(v___x_3872_);
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 4, v_l_3807_);
lean_ctor_set(v___x_3828_, 3, v_tree_3815_);
lean_ctor_set(v___x_3828_, 2, v_v_3817_);
lean_ctor_set(v___x_3828_, 1, v_k_3816_);
lean_ctor_set(v___x_3828_, 0, v___x_3874_);
v___x_3876_ = v___x_3828_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v___x_3874_);
lean_ctor_set(v_reuseFailAlloc_3880_, 1, v_k_3816_);
lean_ctor_set(v_reuseFailAlloc_3880_, 2, v_v_3817_);
lean_ctor_set(v_reuseFailAlloc_3880_, 3, v_tree_3815_);
lean_ctor_set(v_reuseFailAlloc_3880_, 4, v_l_3807_);
v___x_3876_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
lean_object* v___x_3878_; 
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 4, v_r_3808_);
lean_ctor_set(v___x_3812_, 3, v___x_3876_);
lean_ctor_set(v___x_3812_, 2, v_v_3806_);
lean_ctor_set(v___x_3812_, 1, v_k_3805_);
lean_ctor_set(v___x_3812_, 0, v___x_3873_);
v___x_3878_ = v___x_3812_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v___x_3873_);
lean_ctor_set(v_reuseFailAlloc_3879_, 1, v_k_3805_);
lean_ctor_set(v_reuseFailAlloc_3879_, 2, v_v_3806_);
lean_ctor_set(v_reuseFailAlloc_3879_, 3, v___x_3876_);
lean_ctor_set(v_reuseFailAlloc_3879_, 4, v_r_3808_);
v___x_3878_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
return v___x_3878_;
}
}
}
}
}
}
else
{
lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3940_; 
lean_inc(v_r_3808_);
lean_inc(v_v_3806_);
lean_inc(v_k_3805_);
lean_inc(v_size_3804_);
v_isSharedCheck_3940_ = !lean_is_exclusive(v_r_3620_);
if (v_isSharedCheck_3940_ == 0)
{
lean_object* v_unused_3941_; lean_object* v_unused_3942_; lean_object* v_unused_3943_; lean_object* v_unused_3944_; lean_object* v_unused_3945_; 
v_unused_3941_ = lean_ctor_get(v_r_3620_, 4);
lean_dec(v_unused_3941_);
v_unused_3942_ = lean_ctor_get(v_r_3620_, 3);
lean_dec(v_unused_3942_);
v_unused_3943_ = lean_ctor_get(v_r_3620_, 2);
lean_dec(v_unused_3943_);
v_unused_3944_ = lean_ctor_get(v_r_3620_, 1);
lean_dec(v_unused_3944_);
v_unused_3945_ = lean_ctor_get(v_r_3620_, 0);
lean_dec(v_unused_3945_);
v___x_3888_ = v_r_3620_;
v_isShared_3889_ = v_isSharedCheck_3940_;
goto v_resetjp_3887_;
}
else
{
lean_dec(v_r_3620_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3940_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
if (lean_obj_tag(v_l_3807_) == 0)
{
if (lean_obj_tag(v_r_3808_) == 0)
{
lean_object* v_k_3890_; lean_object* v_v_3891_; lean_object* v_size_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3896_; 
v_k_3890_ = lean_ctor_get(v___x_3814_, 0);
lean_inc(v_k_3890_);
v_v_3891_ = lean_ctor_get(v___x_3814_, 1);
lean_inc(v_v_3891_);
lean_dec_ref(v___x_3814_);
v_size_3892_ = lean_ctor_get(v_l_3807_, 0);
v___x_3893_ = lean_nat_add(v___x_3809_, v_size_3804_);
lean_dec(v_size_3804_);
v___x_3894_ = lean_nat_add(v___x_3809_, v_size_3892_);
if (v_isShared_3889_ == 0)
{
lean_ctor_set(v___x_3888_, 4, v_l_3807_);
lean_ctor_set(v___x_3888_, 3, v_tree_3815_);
lean_ctor_set(v___x_3888_, 2, v_v_3891_);
lean_ctor_set(v___x_3888_, 1, v_k_3890_);
lean_ctor_set(v___x_3888_, 0, v___x_3894_);
v___x_3896_ = v___x_3888_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v___x_3894_);
lean_ctor_set(v_reuseFailAlloc_3900_, 1, v_k_3890_);
lean_ctor_set(v_reuseFailAlloc_3900_, 2, v_v_3891_);
lean_ctor_set(v_reuseFailAlloc_3900_, 3, v_tree_3815_);
lean_ctor_set(v_reuseFailAlloc_3900_, 4, v_l_3807_);
v___x_3896_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
lean_object* v___x_3898_; 
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 4, v_r_3808_);
lean_ctor_set(v___x_3812_, 3, v___x_3896_);
lean_ctor_set(v___x_3812_, 2, v_v_3806_);
lean_ctor_set(v___x_3812_, 1, v_k_3805_);
lean_ctor_set(v___x_3812_, 0, v___x_3893_);
v___x_3898_ = v___x_3812_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v___x_3893_);
lean_ctor_set(v_reuseFailAlloc_3899_, 1, v_k_3805_);
lean_ctor_set(v_reuseFailAlloc_3899_, 2, v_v_3806_);
lean_ctor_set(v_reuseFailAlloc_3899_, 3, v___x_3896_);
lean_ctor_set(v_reuseFailAlloc_3899_, 4, v_r_3808_);
v___x_3898_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
return v___x_3898_;
}
}
}
else
{
lean_object* v_k_3901_; lean_object* v_v_3902_; lean_object* v_k_3903_; lean_object* v_v_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3918_; 
lean_dec(v_size_3804_);
v_k_3901_ = lean_ctor_get(v___x_3814_, 0);
lean_inc(v_k_3901_);
v_v_3902_ = lean_ctor_get(v___x_3814_, 1);
lean_inc(v_v_3902_);
lean_dec_ref(v___x_3814_);
v_k_3903_ = lean_ctor_get(v_l_3807_, 1);
v_v_3904_ = lean_ctor_get(v_l_3807_, 2);
v_isSharedCheck_3918_ = !lean_is_exclusive(v_l_3807_);
if (v_isSharedCheck_3918_ == 0)
{
lean_object* v_unused_3919_; lean_object* v_unused_3920_; lean_object* v_unused_3921_; 
v_unused_3919_ = lean_ctor_get(v_l_3807_, 4);
lean_dec(v_unused_3919_);
v_unused_3920_ = lean_ctor_get(v_l_3807_, 3);
lean_dec(v_unused_3920_);
v_unused_3921_ = lean_ctor_get(v_l_3807_, 0);
lean_dec(v_unused_3921_);
v___x_3906_ = v_l_3807_;
v_isShared_3907_ = v_isSharedCheck_3918_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_v_3904_);
lean_inc(v_k_3903_);
lean_dec(v_l_3807_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3918_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3908_; lean_object* v___x_3910_; 
v___x_3908_ = lean_unsigned_to_nat(3u);
if (v_isShared_3907_ == 0)
{
lean_ctor_set(v___x_3906_, 4, v_r_3808_);
lean_ctor_set(v___x_3906_, 3, v_r_3808_);
lean_ctor_set(v___x_3906_, 2, v_v_3902_);
lean_ctor_set(v___x_3906_, 1, v_k_3901_);
lean_ctor_set(v___x_3906_, 0, v___x_3809_);
v___x_3910_ = v___x_3906_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v___x_3809_);
lean_ctor_set(v_reuseFailAlloc_3917_, 1, v_k_3901_);
lean_ctor_set(v_reuseFailAlloc_3917_, 2, v_v_3902_);
lean_ctor_set(v_reuseFailAlloc_3917_, 3, v_r_3808_);
lean_ctor_set(v_reuseFailAlloc_3917_, 4, v_r_3808_);
v___x_3910_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
lean_object* v___x_3912_; 
if (v_isShared_3889_ == 0)
{
lean_ctor_set(v___x_3888_, 3, v_r_3808_);
lean_ctor_set(v___x_3888_, 0, v___x_3809_);
v___x_3912_ = v___x_3888_;
goto v_reusejp_3911_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v___x_3809_);
lean_ctor_set(v_reuseFailAlloc_3916_, 1, v_k_3805_);
lean_ctor_set(v_reuseFailAlloc_3916_, 2, v_v_3806_);
lean_ctor_set(v_reuseFailAlloc_3916_, 3, v_r_3808_);
lean_ctor_set(v_reuseFailAlloc_3916_, 4, v_r_3808_);
v___x_3912_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3911_;
}
v_reusejp_3911_:
{
lean_object* v___x_3914_; 
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 4, v___x_3912_);
lean_ctor_set(v___x_3812_, 3, v___x_3910_);
lean_ctor_set(v___x_3812_, 2, v_v_3904_);
lean_ctor_set(v___x_3812_, 1, v_k_3903_);
lean_ctor_set(v___x_3812_, 0, v___x_3908_);
v___x_3914_ = v___x_3812_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v___x_3908_);
lean_ctor_set(v_reuseFailAlloc_3915_, 1, v_k_3903_);
lean_ctor_set(v_reuseFailAlloc_3915_, 2, v_v_3904_);
lean_ctor_set(v_reuseFailAlloc_3915_, 3, v___x_3910_);
lean_ctor_set(v_reuseFailAlloc_3915_, 4, v___x_3912_);
v___x_3914_ = v_reuseFailAlloc_3915_;
goto v_reusejp_3913_;
}
v_reusejp_3913_:
{
return v___x_3914_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_3808_) == 0)
{
lean_object* v_k_3922_; lean_object* v_v_3923_; lean_object* v___x_3924_; lean_object* v___x_3926_; 
lean_dec(v_size_3804_);
v_k_3922_ = lean_ctor_get(v___x_3814_, 0);
lean_inc(v_k_3922_);
v_v_3923_ = lean_ctor_get(v___x_3814_, 1);
lean_inc(v_v_3923_);
lean_dec_ref(v___x_3814_);
v___x_3924_ = lean_unsigned_to_nat(3u);
if (v_isShared_3889_ == 0)
{
lean_ctor_set(v___x_3888_, 4, v_l_3807_);
lean_ctor_set(v___x_3888_, 2, v_v_3923_);
lean_ctor_set(v___x_3888_, 1, v_k_3922_);
lean_ctor_set(v___x_3888_, 0, v___x_3809_);
v___x_3926_ = v___x_3888_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v___x_3809_);
lean_ctor_set(v_reuseFailAlloc_3930_, 1, v_k_3922_);
lean_ctor_set(v_reuseFailAlloc_3930_, 2, v_v_3923_);
lean_ctor_set(v_reuseFailAlloc_3930_, 3, v_l_3807_);
lean_ctor_set(v_reuseFailAlloc_3930_, 4, v_l_3807_);
v___x_3926_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
lean_object* v___x_3928_; 
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 4, v_r_3808_);
lean_ctor_set(v___x_3812_, 3, v___x_3926_);
lean_ctor_set(v___x_3812_, 2, v_v_3806_);
lean_ctor_set(v___x_3812_, 1, v_k_3805_);
lean_ctor_set(v___x_3812_, 0, v___x_3924_);
v___x_3928_ = v___x_3812_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v___x_3924_);
lean_ctor_set(v_reuseFailAlloc_3929_, 1, v_k_3805_);
lean_ctor_set(v_reuseFailAlloc_3929_, 2, v_v_3806_);
lean_ctor_set(v_reuseFailAlloc_3929_, 3, v___x_3926_);
lean_ctor_set(v_reuseFailAlloc_3929_, 4, v_r_3808_);
v___x_3928_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
return v___x_3928_;
}
}
}
else
{
lean_object* v_k_3931_; lean_object* v_v_3932_; lean_object* v___x_3934_; 
v_k_3931_ = lean_ctor_get(v___x_3814_, 0);
lean_inc(v_k_3931_);
v_v_3932_ = lean_ctor_get(v___x_3814_, 1);
lean_inc(v_v_3932_);
lean_dec_ref(v___x_3814_);
if (v_isShared_3889_ == 0)
{
lean_ctor_set(v___x_3888_, 3, v_r_3808_);
v___x_3934_ = v___x_3888_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_size_3804_);
lean_ctor_set(v_reuseFailAlloc_3939_, 1, v_k_3805_);
lean_ctor_set(v_reuseFailAlloc_3939_, 2, v_v_3806_);
lean_ctor_set(v_reuseFailAlloc_3939_, 3, v_r_3808_);
lean_ctor_set(v_reuseFailAlloc_3939_, 4, v_r_3808_);
v___x_3934_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
lean_object* v___x_3935_; lean_object* v___x_3937_; 
v___x_3935_ = lean_unsigned_to_nat(2u);
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 4, v___x_3934_);
lean_ctor_set(v___x_3812_, 3, v_r_3808_);
lean_ctor_set(v___x_3812_, 2, v_v_3932_);
lean_ctor_set(v___x_3812_, 1, v_k_3931_);
lean_ctor_set(v___x_3812_, 0, v___x_3935_);
v___x_3937_ = v___x_3812_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v___x_3935_);
lean_ctor_set(v_reuseFailAlloc_3938_, 1, v_k_3931_);
lean_ctor_set(v_reuseFailAlloc_3938_, 2, v_v_3932_);
lean_ctor_set(v_reuseFailAlloc_3938_, 3, v_r_3808_);
lean_ctor_set(v_reuseFailAlloc_3938_, 4, v___x_3934_);
v___x_3937_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
return v___x_3937_;
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
lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_4104_; 
lean_inc(v_r_3808_);
lean_inc(v_v_3806_);
lean_inc(v_k_3805_);
v_isSharedCheck_4104_ = !lean_is_exclusive(v_r_3620_);
if (v_isSharedCheck_4104_ == 0)
{
lean_object* v_unused_4105_; lean_object* v_unused_4106_; lean_object* v_unused_4107_; lean_object* v_unused_4108_; lean_object* v_unused_4109_; 
v_unused_4105_ = lean_ctor_get(v_r_3620_, 4);
lean_dec(v_unused_4105_);
v_unused_4106_ = lean_ctor_get(v_r_3620_, 3);
lean_dec(v_unused_4106_);
v_unused_4107_ = lean_ctor_get(v_r_3620_, 2);
lean_dec(v_unused_4107_);
v_unused_4108_ = lean_ctor_get(v_r_3620_, 1);
lean_dec(v_unused_4108_);
v_unused_4109_ = lean_ctor_get(v_r_3620_, 0);
lean_dec(v_unused_4109_);
v___x_3953_ = v_r_3620_;
v_isShared_3954_ = v_isSharedCheck_4104_;
goto v_resetjp_3952_;
}
else
{
lean_dec(v_r_3620_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_4104_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3955_; lean_object* v_tree_3956_; 
v___x_3955_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_3805_, v_v_3806_, v_l_3807_, v_r_3808_);
v_tree_3956_ = lean_ctor_get(v___x_3955_, 2);
lean_inc(v_tree_3956_);
if (lean_obj_tag(v_tree_3956_) == 0)
{
lean_object* v_k_3957_; lean_object* v_v_3958_; lean_object* v_size_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; uint8_t v___x_3962_; 
v_k_3957_ = lean_ctor_get(v___x_3955_, 0);
lean_inc(v_k_3957_);
v_v_3958_ = lean_ctor_get(v___x_3955_, 1);
lean_inc(v_v_3958_);
lean_dec_ref(v___x_3955_);
v_size_3959_ = lean_ctor_get(v_tree_3956_, 0);
v___x_3960_ = lean_unsigned_to_nat(3u);
v___x_3961_ = lean_nat_mul(v___x_3960_, v_size_3959_);
v___x_3962_ = lean_nat_dec_lt(v___x_3961_, v_size_3799_);
lean_dec(v___x_3961_);
if (v___x_3962_ == 0)
{
lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3966_; 
lean_dec(v_r_3803_);
v___x_3963_ = lean_nat_add(v___x_3809_, v_size_3799_);
v___x_3964_ = lean_nat_add(v___x_3963_, v_size_3959_);
lean_dec(v___x_3963_);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 4, v_tree_3956_);
lean_ctor_set(v___x_3953_, 3, v_l_3619_);
lean_ctor_set(v___x_3953_, 2, v_v_3958_);
lean_ctor_set(v___x_3953_, 1, v_k_3957_);
lean_ctor_set(v___x_3953_, 0, v___x_3964_);
v___x_3966_ = v___x_3953_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v___x_3964_);
lean_ctor_set(v_reuseFailAlloc_3967_, 1, v_k_3957_);
lean_ctor_set(v_reuseFailAlloc_3967_, 2, v_v_3958_);
lean_ctor_set(v_reuseFailAlloc_3967_, 3, v_l_3619_);
lean_ctor_set(v_reuseFailAlloc_3967_, 4, v_tree_3956_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
else
{
lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_4033_; 
lean_inc(v_l_3802_);
lean_inc(v_v_3801_);
lean_inc(v_k_3800_);
lean_inc(v_size_3799_);
v_isSharedCheck_4033_ = !lean_is_exclusive(v_l_3619_);
if (v_isSharedCheck_4033_ == 0)
{
lean_object* v_unused_4034_; lean_object* v_unused_4035_; lean_object* v_unused_4036_; lean_object* v_unused_4037_; lean_object* v_unused_4038_; 
v_unused_4034_ = lean_ctor_get(v_l_3619_, 4);
lean_dec(v_unused_4034_);
v_unused_4035_ = lean_ctor_get(v_l_3619_, 3);
lean_dec(v_unused_4035_);
v_unused_4036_ = lean_ctor_get(v_l_3619_, 2);
lean_dec(v_unused_4036_);
v_unused_4037_ = lean_ctor_get(v_l_3619_, 1);
lean_dec(v_unused_4037_);
v_unused_4038_ = lean_ctor_get(v_l_3619_, 0);
lean_dec(v_unused_4038_);
v___x_3969_ = v_l_3619_;
v_isShared_3970_ = v_isSharedCheck_4033_;
goto v_resetjp_3968_;
}
else
{
lean_dec(v_l_3619_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_4033_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
lean_object* v_size_3971_; lean_object* v_size_3972_; lean_object* v_k_3973_; lean_object* v_v_3974_; lean_object* v_l_3975_; lean_object* v_r_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; uint8_t v___x_3979_; 
v_size_3971_ = lean_ctor_get(v_l_3802_, 0);
v_size_3972_ = lean_ctor_get(v_r_3803_, 0);
v_k_3973_ = lean_ctor_get(v_r_3803_, 1);
v_v_3974_ = lean_ctor_get(v_r_3803_, 2);
v_l_3975_ = lean_ctor_get(v_r_3803_, 3);
v_r_3976_ = lean_ctor_get(v_r_3803_, 4);
v___x_3977_ = lean_unsigned_to_nat(2u);
v___x_3978_ = lean_nat_mul(v___x_3977_, v_size_3971_);
v___x_3979_ = lean_nat_dec_lt(v_size_3972_, v___x_3978_);
lean_dec(v___x_3978_);
if (v___x_3979_ == 0)
{
lean_object* v___x_3981_; uint8_t v_isShared_3982_; uint8_t v_isSharedCheck_4017_; 
lean_inc(v_r_3976_);
lean_inc(v_l_3975_);
lean_inc(v_v_3974_);
lean_inc(v_k_3973_);
lean_del_object(v___x_3969_);
v_isSharedCheck_4017_ = !lean_is_exclusive(v_r_3803_);
if (v_isSharedCheck_4017_ == 0)
{
lean_object* v_unused_4018_; lean_object* v_unused_4019_; lean_object* v_unused_4020_; lean_object* v_unused_4021_; lean_object* v_unused_4022_; 
v_unused_4018_ = lean_ctor_get(v_r_3803_, 4);
lean_dec(v_unused_4018_);
v_unused_4019_ = lean_ctor_get(v_r_3803_, 3);
lean_dec(v_unused_4019_);
v_unused_4020_ = lean_ctor_get(v_r_3803_, 2);
lean_dec(v_unused_4020_);
v_unused_4021_ = lean_ctor_get(v_r_3803_, 1);
lean_dec(v_unused_4021_);
v_unused_4022_ = lean_ctor_get(v_r_3803_, 0);
lean_dec(v_unused_4022_);
v___x_3981_ = v_r_3803_;
v_isShared_3982_ = v_isSharedCheck_4017_;
goto v_resetjp_3980_;
}
else
{
lean_dec(v_r_3803_);
v___x_3981_ = lean_box(0);
v_isShared_3982_ = v_isSharedCheck_4017_;
goto v_resetjp_3980_;
}
v_resetjp_3980_:
{
lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___y_3986_; lean_object* v___y_3987_; lean_object* v___y_3988_; lean_object* v___x_4005_; lean_object* v___y_4007_; 
v___x_3983_ = lean_nat_add(v___x_3809_, v_size_3799_);
lean_dec(v_size_3799_);
v___x_3984_ = lean_nat_add(v___x_3983_, v_size_3959_);
lean_dec(v___x_3983_);
v___x_4005_ = lean_nat_add(v___x_3809_, v_size_3971_);
if (lean_obj_tag(v_l_3975_) == 0)
{
lean_object* v_size_4015_; 
v_size_4015_ = lean_ctor_get(v_l_3975_, 0);
lean_inc(v_size_4015_);
v___y_4007_ = v_size_4015_;
goto v___jp_4006_;
}
else
{
lean_object* v___x_4016_; 
v___x_4016_ = lean_unsigned_to_nat(0u);
v___y_4007_ = v___x_4016_;
goto v___jp_4006_;
}
v___jp_3985_:
{
lean_object* v___x_3989_; lean_object* v___x_3991_; 
v___x_3989_ = lean_nat_add(v___y_3987_, v___y_3988_);
lean_dec(v___y_3988_);
lean_dec(v___y_3987_);
lean_inc_ref(v_tree_3956_);
if (v_isShared_3982_ == 0)
{
lean_ctor_set(v___x_3981_, 4, v_tree_3956_);
lean_ctor_set(v___x_3981_, 3, v_r_3976_);
lean_ctor_set(v___x_3981_, 2, v_v_3958_);
lean_ctor_set(v___x_3981_, 1, v_k_3957_);
lean_ctor_set(v___x_3981_, 0, v___x_3989_);
v___x_3991_ = v___x_3981_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v___x_3989_);
lean_ctor_set(v_reuseFailAlloc_4004_, 1, v_k_3957_);
lean_ctor_set(v_reuseFailAlloc_4004_, 2, v_v_3958_);
lean_ctor_set(v_reuseFailAlloc_4004_, 3, v_r_3976_);
lean_ctor_set(v_reuseFailAlloc_4004_, 4, v_tree_3956_);
v___x_3991_ = v_reuseFailAlloc_4004_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_3998_; 
v_isSharedCheck_3998_ = !lean_is_exclusive(v_tree_3956_);
if (v_isSharedCheck_3998_ == 0)
{
lean_object* v_unused_3999_; lean_object* v_unused_4000_; lean_object* v_unused_4001_; lean_object* v_unused_4002_; lean_object* v_unused_4003_; 
v_unused_3999_ = lean_ctor_get(v_tree_3956_, 4);
lean_dec(v_unused_3999_);
v_unused_4000_ = lean_ctor_get(v_tree_3956_, 3);
lean_dec(v_unused_4000_);
v_unused_4001_ = lean_ctor_get(v_tree_3956_, 2);
lean_dec(v_unused_4001_);
v_unused_4002_ = lean_ctor_get(v_tree_3956_, 1);
lean_dec(v_unused_4002_);
v_unused_4003_ = lean_ctor_get(v_tree_3956_, 0);
lean_dec(v_unused_4003_);
v___x_3993_ = v_tree_3956_;
v_isShared_3994_ = v_isSharedCheck_3998_;
goto v_resetjp_3992_;
}
else
{
lean_dec(v_tree_3956_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_3998_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v___x_3996_; 
if (v_isShared_3994_ == 0)
{
lean_ctor_set(v___x_3993_, 4, v___x_3991_);
lean_ctor_set(v___x_3993_, 3, v___y_3986_);
lean_ctor_set(v___x_3993_, 2, v_v_3974_);
lean_ctor_set(v___x_3993_, 1, v_k_3973_);
lean_ctor_set(v___x_3993_, 0, v___x_3984_);
v___x_3996_ = v___x_3993_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v___x_3984_);
lean_ctor_set(v_reuseFailAlloc_3997_, 1, v_k_3973_);
lean_ctor_set(v_reuseFailAlloc_3997_, 2, v_v_3974_);
lean_ctor_set(v_reuseFailAlloc_3997_, 3, v___y_3986_);
lean_ctor_set(v_reuseFailAlloc_3997_, 4, v___x_3991_);
v___x_3996_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
return v___x_3996_;
}
}
}
}
v___jp_4006_:
{
lean_object* v___x_4008_; lean_object* v___x_4010_; 
v___x_4008_ = lean_nat_add(v___x_4005_, v___y_4007_);
lean_dec(v___y_4007_);
lean_dec(v___x_4005_);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 4, v_l_3975_);
lean_ctor_set(v___x_3953_, 3, v_l_3802_);
lean_ctor_set(v___x_3953_, 2, v_v_3801_);
lean_ctor_set(v___x_3953_, 1, v_k_3800_);
lean_ctor_set(v___x_3953_, 0, v___x_4008_);
v___x_4010_ = v___x_3953_;
goto v_reusejp_4009_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v___x_4008_);
lean_ctor_set(v_reuseFailAlloc_4014_, 1, v_k_3800_);
lean_ctor_set(v_reuseFailAlloc_4014_, 2, v_v_3801_);
lean_ctor_set(v_reuseFailAlloc_4014_, 3, v_l_3802_);
lean_ctor_set(v_reuseFailAlloc_4014_, 4, v_l_3975_);
v___x_4010_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4009_;
}
v_reusejp_4009_:
{
lean_object* v___x_4011_; 
v___x_4011_ = lean_nat_add(v___x_3809_, v_size_3959_);
if (lean_obj_tag(v_r_3976_) == 0)
{
lean_object* v_size_4012_; 
v_size_4012_ = lean_ctor_get(v_r_3976_, 0);
lean_inc(v_size_4012_);
v___y_3986_ = v___x_4010_;
v___y_3987_ = v___x_4011_;
v___y_3988_ = v_size_4012_;
goto v___jp_3985_;
}
else
{
lean_object* v___x_4013_; 
v___x_4013_ = lean_unsigned_to_nat(0u);
v___y_3986_ = v___x_4010_;
v___y_3987_ = v___x_4011_;
v___y_3988_ = v___x_4013_;
goto v___jp_3985_;
}
}
}
}
}
else
{
lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4028_; 
v___x_4023_ = lean_nat_add(v___x_3809_, v_size_3799_);
lean_dec(v_size_3799_);
v___x_4024_ = lean_nat_add(v___x_4023_, v_size_3959_);
lean_dec(v___x_4023_);
v___x_4025_ = lean_nat_add(v___x_3809_, v_size_3959_);
v___x_4026_ = lean_nat_add(v___x_4025_, v_size_3972_);
lean_dec(v___x_4025_);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 4, v_tree_3956_);
lean_ctor_set(v___x_3953_, 3, v_r_3803_);
lean_ctor_set(v___x_3953_, 2, v_v_3958_);
lean_ctor_set(v___x_3953_, 1, v_k_3957_);
lean_ctor_set(v___x_3953_, 0, v___x_4026_);
v___x_4028_ = v___x_3953_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v___x_4026_);
lean_ctor_set(v_reuseFailAlloc_4032_, 1, v_k_3957_);
lean_ctor_set(v_reuseFailAlloc_4032_, 2, v_v_3958_);
lean_ctor_set(v_reuseFailAlloc_4032_, 3, v_r_3803_);
lean_ctor_set(v_reuseFailAlloc_4032_, 4, v_tree_3956_);
v___x_4028_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
lean_object* v___x_4030_; 
if (v_isShared_3970_ == 0)
{
lean_ctor_set(v___x_3969_, 4, v___x_4028_);
lean_ctor_set(v___x_3969_, 0, v___x_4024_);
v___x_4030_ = v___x_3969_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v___x_4024_);
lean_ctor_set(v_reuseFailAlloc_4031_, 1, v_k_3800_);
lean_ctor_set(v_reuseFailAlloc_4031_, 2, v_v_3801_);
lean_ctor_set(v_reuseFailAlloc_4031_, 3, v_l_3802_);
lean_ctor_set(v_reuseFailAlloc_4031_, 4, v___x_4028_);
v___x_4030_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
return v___x_4030_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_3802_) == 0)
{
lean_object* v___x_4040_; uint8_t v_isShared_4041_; uint8_t v_isSharedCheck_4062_; 
lean_inc_ref(v_l_3802_);
lean_inc(v_v_3801_);
lean_inc(v_k_3800_);
lean_inc(v_size_3799_);
v_isSharedCheck_4062_ = !lean_is_exclusive(v_l_3619_);
if (v_isSharedCheck_4062_ == 0)
{
lean_object* v_unused_4063_; lean_object* v_unused_4064_; lean_object* v_unused_4065_; lean_object* v_unused_4066_; lean_object* v_unused_4067_; 
v_unused_4063_ = lean_ctor_get(v_l_3619_, 4);
lean_dec(v_unused_4063_);
v_unused_4064_ = lean_ctor_get(v_l_3619_, 3);
lean_dec(v_unused_4064_);
v_unused_4065_ = lean_ctor_get(v_l_3619_, 2);
lean_dec(v_unused_4065_);
v_unused_4066_ = lean_ctor_get(v_l_3619_, 1);
lean_dec(v_unused_4066_);
v_unused_4067_ = lean_ctor_get(v_l_3619_, 0);
lean_dec(v_unused_4067_);
v___x_4040_ = v_l_3619_;
v_isShared_4041_ = v_isSharedCheck_4062_;
goto v_resetjp_4039_;
}
else
{
lean_dec(v_l_3619_);
v___x_4040_ = lean_box(0);
v_isShared_4041_ = v_isSharedCheck_4062_;
goto v_resetjp_4039_;
}
v_resetjp_4039_:
{
if (lean_obj_tag(v_r_3803_) == 0)
{
lean_object* v_k_4042_; lean_object* v_v_4043_; lean_object* v_size_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4048_; 
v_k_4042_ = lean_ctor_get(v___x_3955_, 0);
lean_inc(v_k_4042_);
v_v_4043_ = lean_ctor_get(v___x_3955_, 1);
lean_inc(v_v_4043_);
lean_dec_ref(v___x_3955_);
v_size_4044_ = lean_ctor_get(v_r_3803_, 0);
v___x_4045_ = lean_nat_add(v___x_3809_, v_size_3799_);
lean_dec(v_size_3799_);
v___x_4046_ = lean_nat_add(v___x_3809_, v_size_4044_);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 4, v_tree_3956_);
lean_ctor_set(v___x_3953_, 3, v_r_3803_);
lean_ctor_set(v___x_3953_, 2, v_v_4043_);
lean_ctor_set(v___x_3953_, 1, v_k_4042_);
lean_ctor_set(v___x_3953_, 0, v___x_4046_);
v___x_4048_ = v___x_3953_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4052_; 
v_reuseFailAlloc_4052_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4052_, 0, v___x_4046_);
lean_ctor_set(v_reuseFailAlloc_4052_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4052_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4052_, 3, v_r_3803_);
lean_ctor_set(v_reuseFailAlloc_4052_, 4, v_tree_3956_);
v___x_4048_ = v_reuseFailAlloc_4052_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
lean_object* v___x_4050_; 
if (v_isShared_4041_ == 0)
{
lean_ctor_set(v___x_4040_, 4, v___x_4048_);
lean_ctor_set(v___x_4040_, 0, v___x_4045_);
v___x_4050_ = v___x_4040_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v___x_4045_);
lean_ctor_set(v_reuseFailAlloc_4051_, 1, v_k_3800_);
lean_ctor_set(v_reuseFailAlloc_4051_, 2, v_v_3801_);
lean_ctor_set(v_reuseFailAlloc_4051_, 3, v_l_3802_);
lean_ctor_set(v_reuseFailAlloc_4051_, 4, v___x_4048_);
v___x_4050_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
return v___x_4050_;
}
}
}
else
{
lean_object* v_k_4053_; lean_object* v_v_4054_; lean_object* v___x_4055_; lean_object* v___x_4057_; 
lean_dec(v_size_3799_);
v_k_4053_ = lean_ctor_get(v___x_3955_, 0);
lean_inc(v_k_4053_);
v_v_4054_ = lean_ctor_get(v___x_3955_, 1);
lean_inc(v_v_4054_);
lean_dec_ref(v___x_3955_);
v___x_4055_ = lean_unsigned_to_nat(3u);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 4, v_r_3803_);
lean_ctor_set(v___x_3953_, 3, v_r_3803_);
lean_ctor_set(v___x_3953_, 2, v_v_4054_);
lean_ctor_set(v___x_3953_, 1, v_k_4053_);
lean_ctor_set(v___x_3953_, 0, v___x_3809_);
v___x_4057_ = v___x_3953_;
goto v_reusejp_4056_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v___x_3809_);
lean_ctor_set(v_reuseFailAlloc_4061_, 1, v_k_4053_);
lean_ctor_set(v_reuseFailAlloc_4061_, 2, v_v_4054_);
lean_ctor_set(v_reuseFailAlloc_4061_, 3, v_r_3803_);
lean_ctor_set(v_reuseFailAlloc_4061_, 4, v_r_3803_);
v___x_4057_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4056_;
}
v_reusejp_4056_:
{
lean_object* v___x_4059_; 
if (v_isShared_4041_ == 0)
{
lean_ctor_set(v___x_4040_, 4, v___x_4057_);
lean_ctor_set(v___x_4040_, 0, v___x_4055_);
v___x_4059_ = v___x_4040_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v___x_4055_);
lean_ctor_set(v_reuseFailAlloc_4060_, 1, v_k_3800_);
lean_ctor_set(v_reuseFailAlloc_4060_, 2, v_v_3801_);
lean_ctor_set(v_reuseFailAlloc_4060_, 3, v_l_3802_);
lean_ctor_set(v_reuseFailAlloc_4060_, 4, v___x_4057_);
v___x_4059_ = v_reuseFailAlloc_4060_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
return v___x_4059_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_3803_) == 0)
{
lean_object* v___x_4069_; uint8_t v_isShared_4070_; uint8_t v_isSharedCheck_4092_; 
lean_inc(v_l_3802_);
lean_inc(v_v_3801_);
lean_inc(v_k_3800_);
v_isSharedCheck_4092_ = !lean_is_exclusive(v_l_3619_);
if (v_isSharedCheck_4092_ == 0)
{
lean_object* v_unused_4093_; lean_object* v_unused_4094_; lean_object* v_unused_4095_; lean_object* v_unused_4096_; lean_object* v_unused_4097_; 
v_unused_4093_ = lean_ctor_get(v_l_3619_, 4);
lean_dec(v_unused_4093_);
v_unused_4094_ = lean_ctor_get(v_l_3619_, 3);
lean_dec(v_unused_4094_);
v_unused_4095_ = lean_ctor_get(v_l_3619_, 2);
lean_dec(v_unused_4095_);
v_unused_4096_ = lean_ctor_get(v_l_3619_, 1);
lean_dec(v_unused_4096_);
v_unused_4097_ = lean_ctor_get(v_l_3619_, 0);
lean_dec(v_unused_4097_);
v___x_4069_ = v_l_3619_;
v_isShared_4070_ = v_isSharedCheck_4092_;
goto v_resetjp_4068_;
}
else
{
lean_dec(v_l_3619_);
v___x_4069_ = lean_box(0);
v_isShared_4070_ = v_isSharedCheck_4092_;
goto v_resetjp_4068_;
}
v_resetjp_4068_:
{
lean_object* v_k_4071_; lean_object* v_v_4072_; lean_object* v_k_4073_; lean_object* v_v_4074_; lean_object* v___x_4076_; uint8_t v_isShared_4077_; uint8_t v_isSharedCheck_4088_; 
v_k_4071_ = lean_ctor_get(v___x_3955_, 0);
lean_inc(v_k_4071_);
v_v_4072_ = lean_ctor_get(v___x_3955_, 1);
lean_inc(v_v_4072_);
lean_dec_ref(v___x_3955_);
v_k_4073_ = lean_ctor_get(v_r_3803_, 1);
v_v_4074_ = lean_ctor_get(v_r_3803_, 2);
v_isSharedCheck_4088_ = !lean_is_exclusive(v_r_3803_);
if (v_isSharedCheck_4088_ == 0)
{
lean_object* v_unused_4089_; lean_object* v_unused_4090_; lean_object* v_unused_4091_; 
v_unused_4089_ = lean_ctor_get(v_r_3803_, 4);
lean_dec(v_unused_4089_);
v_unused_4090_ = lean_ctor_get(v_r_3803_, 3);
lean_dec(v_unused_4090_);
v_unused_4091_ = lean_ctor_get(v_r_3803_, 0);
lean_dec(v_unused_4091_);
v___x_4076_ = v_r_3803_;
v_isShared_4077_ = v_isSharedCheck_4088_;
goto v_resetjp_4075_;
}
else
{
lean_inc(v_v_4074_);
lean_inc(v_k_4073_);
lean_dec(v_r_3803_);
v___x_4076_ = lean_box(0);
v_isShared_4077_ = v_isSharedCheck_4088_;
goto v_resetjp_4075_;
}
v_resetjp_4075_:
{
lean_object* v___x_4078_; lean_object* v___x_4080_; 
v___x_4078_ = lean_unsigned_to_nat(3u);
if (v_isShared_4077_ == 0)
{
lean_ctor_set(v___x_4076_, 4, v_l_3802_);
lean_ctor_set(v___x_4076_, 3, v_l_3802_);
lean_ctor_set(v___x_4076_, 2, v_v_3801_);
lean_ctor_set(v___x_4076_, 1, v_k_3800_);
lean_ctor_set(v___x_4076_, 0, v___x_3809_);
v___x_4080_ = v___x_4076_;
goto v_reusejp_4079_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v___x_3809_);
lean_ctor_set(v_reuseFailAlloc_4087_, 1, v_k_3800_);
lean_ctor_set(v_reuseFailAlloc_4087_, 2, v_v_3801_);
lean_ctor_set(v_reuseFailAlloc_4087_, 3, v_l_3802_);
lean_ctor_set(v_reuseFailAlloc_4087_, 4, v_l_3802_);
v___x_4080_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4079_;
}
v_reusejp_4079_:
{
lean_object* v___x_4082_; 
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 4, v_l_3802_);
lean_ctor_set(v___x_3953_, 3, v_l_3802_);
lean_ctor_set(v___x_3953_, 2, v_v_4072_);
lean_ctor_set(v___x_3953_, 1, v_k_4071_);
lean_ctor_set(v___x_3953_, 0, v___x_3809_);
v___x_4082_ = v___x_3953_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v___x_3809_);
lean_ctor_set(v_reuseFailAlloc_4086_, 1, v_k_4071_);
lean_ctor_set(v_reuseFailAlloc_4086_, 2, v_v_4072_);
lean_ctor_set(v_reuseFailAlloc_4086_, 3, v_l_3802_);
lean_ctor_set(v_reuseFailAlloc_4086_, 4, v_l_3802_);
v___x_4082_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
lean_object* v___x_4084_; 
if (v_isShared_4070_ == 0)
{
lean_ctor_set(v___x_4069_, 4, v___x_4082_);
lean_ctor_set(v___x_4069_, 3, v___x_4080_);
lean_ctor_set(v___x_4069_, 2, v_v_4074_);
lean_ctor_set(v___x_4069_, 1, v_k_4073_);
lean_ctor_set(v___x_4069_, 0, v___x_4078_);
v___x_4084_ = v___x_4069_;
goto v_reusejp_4083_;
}
else
{
lean_object* v_reuseFailAlloc_4085_; 
v_reuseFailAlloc_4085_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4085_, 0, v___x_4078_);
lean_ctor_set(v_reuseFailAlloc_4085_, 1, v_k_4073_);
lean_ctor_set(v_reuseFailAlloc_4085_, 2, v_v_4074_);
lean_ctor_set(v_reuseFailAlloc_4085_, 3, v___x_4080_);
lean_ctor_set(v_reuseFailAlloc_4085_, 4, v___x_4082_);
v___x_4084_ = v_reuseFailAlloc_4085_;
goto v_reusejp_4083_;
}
v_reusejp_4083_:
{
return v___x_4084_;
}
}
}
}
}
}
else
{
lean_object* v_k_4098_; lean_object* v_v_4099_; lean_object* v___x_4100_; lean_object* v___x_4102_; 
v_k_4098_ = lean_ctor_get(v___x_3955_, 0);
lean_inc(v_k_4098_);
v_v_4099_ = lean_ctor_get(v___x_3955_, 1);
lean_inc(v_v_4099_);
lean_dec_ref(v___x_3955_);
v___x_4100_ = lean_unsigned_to_nat(2u);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 4, v_r_3803_);
lean_ctor_set(v___x_3953_, 3, v_l_3619_);
lean_ctor_set(v___x_3953_, 2, v_v_4099_);
lean_ctor_set(v___x_3953_, 1, v_k_4098_);
lean_ctor_set(v___x_3953_, 0, v___x_4100_);
v___x_4102_ = v___x_3953_;
goto v_reusejp_4101_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v___x_4100_);
lean_ctor_set(v_reuseFailAlloc_4103_, 1, v_k_4098_);
lean_ctor_set(v_reuseFailAlloc_4103_, 2, v_v_4099_);
lean_ctor_set(v_reuseFailAlloc_4103_, 3, v_l_3619_);
lean_ctor_set(v_reuseFailAlloc_4103_, 4, v_r_3803_);
v___x_4102_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4101_;
}
v_reusejp_4101_:
{
return v___x_4102_;
}
}
}
}
}
}
}
else
{
return v_l_3619_;
}
}
else
{
return v_r_3620_;
}
}
default: 
{
lean_object* v_impl_4110_; lean_object* v___x_4111_; 
v_impl_4110_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0___redArg(v_k_3615_, v_r_3620_);
v___x_4111_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_4110_) == 0)
{
if (lean_obj_tag(v_l_3619_) == 0)
{
lean_object* v_size_4112_; lean_object* v_size_4113_; lean_object* v_k_4114_; lean_object* v_v_4115_; lean_object* v_l_4116_; lean_object* v_r_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; uint8_t v___x_4120_; 
v_size_4112_ = lean_ctor_get(v_impl_4110_, 0);
lean_inc(v_size_4112_);
v_size_4113_ = lean_ctor_get(v_l_3619_, 0);
v_k_4114_ = lean_ctor_get(v_l_3619_, 1);
v_v_4115_ = lean_ctor_get(v_l_3619_, 2);
v_l_4116_ = lean_ctor_get(v_l_3619_, 3);
v_r_4117_ = lean_ctor_get(v_l_3619_, 4);
lean_inc(v_r_4117_);
v___x_4118_ = lean_unsigned_to_nat(3u);
v___x_4119_ = lean_nat_mul(v___x_4118_, v_size_4112_);
v___x_4120_ = lean_nat_dec_lt(v___x_4119_, v_size_4113_);
lean_dec(v___x_4119_);
if (v___x_4120_ == 0)
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4124_; 
lean_dec(v_r_4117_);
v___x_4121_ = lean_nat_add(v___x_4111_, v_size_4113_);
v___x_4122_ = lean_nat_add(v___x_4121_, v_size_4112_);
lean_dec(v_size_4112_);
lean_dec(v___x_4121_);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v_impl_4110_);
lean_ctor_set(v___x_3622_, 0, v___x_4122_);
v___x_4124_ = v___x_3622_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4125_; 
v_reuseFailAlloc_4125_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4125_, 0, v___x_4122_);
lean_ctor_set(v_reuseFailAlloc_4125_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_4125_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_4125_, 3, v_l_3619_);
lean_ctor_set(v_reuseFailAlloc_4125_, 4, v_impl_4110_);
v___x_4124_ = v_reuseFailAlloc_4125_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
return v___x_4124_;
}
}
else
{
lean_object* v___x_4127_; uint8_t v_isShared_4128_; uint8_t v_isSharedCheck_4191_; 
lean_inc(v_l_4116_);
lean_inc(v_v_4115_);
lean_inc(v_k_4114_);
lean_inc(v_size_4113_);
v_isSharedCheck_4191_ = !lean_is_exclusive(v_l_3619_);
if (v_isSharedCheck_4191_ == 0)
{
lean_object* v_unused_4192_; lean_object* v_unused_4193_; lean_object* v_unused_4194_; lean_object* v_unused_4195_; lean_object* v_unused_4196_; 
v_unused_4192_ = lean_ctor_get(v_l_3619_, 4);
lean_dec(v_unused_4192_);
v_unused_4193_ = lean_ctor_get(v_l_3619_, 3);
lean_dec(v_unused_4193_);
v_unused_4194_ = lean_ctor_get(v_l_3619_, 2);
lean_dec(v_unused_4194_);
v_unused_4195_ = lean_ctor_get(v_l_3619_, 1);
lean_dec(v_unused_4195_);
v_unused_4196_ = lean_ctor_get(v_l_3619_, 0);
lean_dec(v_unused_4196_);
v___x_4127_ = v_l_3619_;
v_isShared_4128_ = v_isSharedCheck_4191_;
goto v_resetjp_4126_;
}
else
{
lean_dec(v_l_3619_);
v___x_4127_ = lean_box(0);
v_isShared_4128_ = v_isSharedCheck_4191_;
goto v_resetjp_4126_;
}
v_resetjp_4126_:
{
lean_object* v_size_4129_; lean_object* v_size_4130_; lean_object* v_k_4131_; lean_object* v_v_4132_; lean_object* v_l_4133_; lean_object* v_r_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; uint8_t v___x_4137_; 
v_size_4129_ = lean_ctor_get(v_l_4116_, 0);
v_size_4130_ = lean_ctor_get(v_r_4117_, 0);
v_k_4131_ = lean_ctor_get(v_r_4117_, 1);
v_v_4132_ = lean_ctor_get(v_r_4117_, 2);
v_l_4133_ = lean_ctor_get(v_r_4117_, 3);
v_r_4134_ = lean_ctor_get(v_r_4117_, 4);
v___x_4135_ = lean_unsigned_to_nat(2u);
v___x_4136_ = lean_nat_mul(v___x_4135_, v_size_4129_);
v___x_4137_ = lean_nat_dec_lt(v_size_4130_, v___x_4136_);
lean_dec(v___x_4136_);
if (v___x_4137_ == 0)
{
lean_object* v___x_4139_; uint8_t v_isShared_4140_; uint8_t v_isSharedCheck_4166_; 
lean_inc(v_r_4134_);
lean_inc(v_l_4133_);
lean_inc(v_v_4132_);
lean_inc(v_k_4131_);
v_isSharedCheck_4166_ = !lean_is_exclusive(v_r_4117_);
if (v_isSharedCheck_4166_ == 0)
{
lean_object* v_unused_4167_; lean_object* v_unused_4168_; lean_object* v_unused_4169_; lean_object* v_unused_4170_; lean_object* v_unused_4171_; 
v_unused_4167_ = lean_ctor_get(v_r_4117_, 4);
lean_dec(v_unused_4167_);
v_unused_4168_ = lean_ctor_get(v_r_4117_, 3);
lean_dec(v_unused_4168_);
v_unused_4169_ = lean_ctor_get(v_r_4117_, 2);
lean_dec(v_unused_4169_);
v_unused_4170_ = lean_ctor_get(v_r_4117_, 1);
lean_dec(v_unused_4170_);
v_unused_4171_ = lean_ctor_get(v_r_4117_, 0);
lean_dec(v_unused_4171_);
v___x_4139_ = v_r_4117_;
v_isShared_4140_ = v_isSharedCheck_4166_;
goto v_resetjp_4138_;
}
else
{
lean_dec(v_r_4117_);
v___x_4139_ = lean_box(0);
v_isShared_4140_ = v_isSharedCheck_4166_;
goto v_resetjp_4138_;
}
v_resetjp_4138_:
{
lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___y_4144_; lean_object* v___y_4145_; lean_object* v___y_4146_; lean_object* v___x_4154_; lean_object* v___y_4156_; 
v___x_4141_ = lean_nat_add(v___x_4111_, v_size_4113_);
lean_dec(v_size_4113_);
v___x_4142_ = lean_nat_add(v___x_4141_, v_size_4112_);
lean_dec(v___x_4141_);
v___x_4154_ = lean_nat_add(v___x_4111_, v_size_4129_);
if (lean_obj_tag(v_l_4133_) == 0)
{
lean_object* v_size_4164_; 
v_size_4164_ = lean_ctor_get(v_l_4133_, 0);
lean_inc(v_size_4164_);
v___y_4156_ = v_size_4164_;
goto v___jp_4155_;
}
else
{
lean_object* v___x_4165_; 
v___x_4165_ = lean_unsigned_to_nat(0u);
v___y_4156_ = v___x_4165_;
goto v___jp_4155_;
}
v___jp_4143_:
{
lean_object* v___x_4147_; lean_object* v___x_4149_; 
v___x_4147_ = lean_nat_add(v___y_4145_, v___y_4146_);
lean_dec(v___y_4146_);
lean_dec(v___y_4145_);
if (v_isShared_4140_ == 0)
{
lean_ctor_set(v___x_4139_, 4, v_impl_4110_);
lean_ctor_set(v___x_4139_, 3, v_r_4134_);
lean_ctor_set(v___x_4139_, 2, v_v_3618_);
lean_ctor_set(v___x_4139_, 1, v_k_3617_);
lean_ctor_set(v___x_4139_, 0, v___x_4147_);
v___x_4149_ = v___x_4139_;
goto v_reusejp_4148_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v___x_4147_);
lean_ctor_set(v_reuseFailAlloc_4153_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_4153_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_4153_, 3, v_r_4134_);
lean_ctor_set(v_reuseFailAlloc_4153_, 4, v_impl_4110_);
v___x_4149_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4148_;
}
v_reusejp_4148_:
{
lean_object* v___x_4151_; 
if (v_isShared_4128_ == 0)
{
lean_ctor_set(v___x_4127_, 4, v___x_4149_);
lean_ctor_set(v___x_4127_, 3, v___y_4144_);
lean_ctor_set(v___x_4127_, 2, v_v_4132_);
lean_ctor_set(v___x_4127_, 1, v_k_4131_);
lean_ctor_set(v___x_4127_, 0, v___x_4142_);
v___x_4151_ = v___x_4127_;
goto v_reusejp_4150_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v___x_4142_);
lean_ctor_set(v_reuseFailAlloc_4152_, 1, v_k_4131_);
lean_ctor_set(v_reuseFailAlloc_4152_, 2, v_v_4132_);
lean_ctor_set(v_reuseFailAlloc_4152_, 3, v___y_4144_);
lean_ctor_set(v_reuseFailAlloc_4152_, 4, v___x_4149_);
v___x_4151_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4150_;
}
v_reusejp_4150_:
{
return v___x_4151_;
}
}
}
v___jp_4155_:
{
lean_object* v___x_4157_; lean_object* v___x_4159_; 
v___x_4157_ = lean_nat_add(v___x_4154_, v___y_4156_);
lean_dec(v___y_4156_);
lean_dec(v___x_4154_);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v_l_4133_);
lean_ctor_set(v___x_3622_, 3, v_l_4116_);
lean_ctor_set(v___x_3622_, 2, v_v_4115_);
lean_ctor_set(v___x_3622_, 1, v_k_4114_);
lean_ctor_set(v___x_3622_, 0, v___x_4157_);
v___x_4159_ = v___x_3622_;
goto v_reusejp_4158_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v___x_4157_);
lean_ctor_set(v_reuseFailAlloc_4163_, 1, v_k_4114_);
lean_ctor_set(v_reuseFailAlloc_4163_, 2, v_v_4115_);
lean_ctor_set(v_reuseFailAlloc_4163_, 3, v_l_4116_);
lean_ctor_set(v_reuseFailAlloc_4163_, 4, v_l_4133_);
v___x_4159_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4158_;
}
v_reusejp_4158_:
{
lean_object* v___x_4160_; 
v___x_4160_ = lean_nat_add(v___x_4111_, v_size_4112_);
lean_dec(v_size_4112_);
if (lean_obj_tag(v_r_4134_) == 0)
{
lean_object* v_size_4161_; 
v_size_4161_ = lean_ctor_get(v_r_4134_, 0);
lean_inc(v_size_4161_);
v___y_4144_ = v___x_4159_;
v___y_4145_ = v___x_4160_;
v___y_4146_ = v_size_4161_;
goto v___jp_4143_;
}
else
{
lean_object* v___x_4162_; 
v___x_4162_ = lean_unsigned_to_nat(0u);
v___y_4144_ = v___x_4159_;
v___y_4145_ = v___x_4160_;
v___y_4146_ = v___x_4162_;
goto v___jp_4143_;
}
}
}
}
}
else
{
lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4177_; 
lean_del_object(v___x_3622_);
v___x_4172_ = lean_nat_add(v___x_4111_, v_size_4113_);
lean_dec(v_size_4113_);
v___x_4173_ = lean_nat_add(v___x_4172_, v_size_4112_);
lean_dec(v___x_4172_);
v___x_4174_ = lean_nat_add(v___x_4111_, v_size_4112_);
lean_dec(v_size_4112_);
v___x_4175_ = lean_nat_add(v___x_4174_, v_size_4130_);
lean_dec(v___x_4174_);
lean_inc_ref(v_impl_4110_);
if (v_isShared_4128_ == 0)
{
lean_ctor_set(v___x_4127_, 4, v_impl_4110_);
lean_ctor_set(v___x_4127_, 3, v_r_4117_);
lean_ctor_set(v___x_4127_, 2, v_v_3618_);
lean_ctor_set(v___x_4127_, 1, v_k_3617_);
lean_ctor_set(v___x_4127_, 0, v___x_4175_);
v___x_4177_ = v___x_4127_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4190_; 
v_reuseFailAlloc_4190_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4190_, 0, v___x_4175_);
lean_ctor_set(v_reuseFailAlloc_4190_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_4190_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_4190_, 3, v_r_4117_);
lean_ctor_set(v_reuseFailAlloc_4190_, 4, v_impl_4110_);
v___x_4177_ = v_reuseFailAlloc_4190_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4184_; 
v_isSharedCheck_4184_ = !lean_is_exclusive(v_impl_4110_);
if (v_isSharedCheck_4184_ == 0)
{
lean_object* v_unused_4185_; lean_object* v_unused_4186_; lean_object* v_unused_4187_; lean_object* v_unused_4188_; lean_object* v_unused_4189_; 
v_unused_4185_ = lean_ctor_get(v_impl_4110_, 4);
lean_dec(v_unused_4185_);
v_unused_4186_ = lean_ctor_get(v_impl_4110_, 3);
lean_dec(v_unused_4186_);
v_unused_4187_ = lean_ctor_get(v_impl_4110_, 2);
lean_dec(v_unused_4187_);
v_unused_4188_ = lean_ctor_get(v_impl_4110_, 1);
lean_dec(v_unused_4188_);
v_unused_4189_ = lean_ctor_get(v_impl_4110_, 0);
lean_dec(v_unused_4189_);
v___x_4179_ = v_impl_4110_;
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
else
{
lean_dec(v_impl_4110_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v___x_4182_; 
if (v_isShared_4180_ == 0)
{
lean_ctor_set(v___x_4179_, 4, v___x_4177_);
lean_ctor_set(v___x_4179_, 3, v_l_4116_);
lean_ctor_set(v___x_4179_, 2, v_v_4115_);
lean_ctor_set(v___x_4179_, 1, v_k_4114_);
lean_ctor_set(v___x_4179_, 0, v___x_4173_);
v___x_4182_ = v___x_4179_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v___x_4173_);
lean_ctor_set(v_reuseFailAlloc_4183_, 1, v_k_4114_);
lean_ctor_set(v_reuseFailAlloc_4183_, 2, v_v_4115_);
lean_ctor_set(v_reuseFailAlloc_4183_, 3, v_l_4116_);
lean_ctor_set(v_reuseFailAlloc_4183_, 4, v___x_4177_);
v___x_4182_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
return v___x_4182_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_4197_; lean_object* v___x_4198_; lean_object* v___x_4200_; 
v_size_4197_ = lean_ctor_get(v_impl_4110_, 0);
lean_inc(v_size_4197_);
v___x_4198_ = lean_nat_add(v___x_4111_, v_size_4197_);
lean_dec(v_size_4197_);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v_impl_4110_);
lean_ctor_set(v___x_3622_, 0, v___x_4198_);
v___x_4200_ = v___x_3622_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4201_; 
v_reuseFailAlloc_4201_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4201_, 0, v___x_4198_);
lean_ctor_set(v_reuseFailAlloc_4201_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_4201_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_4201_, 3, v_l_3619_);
lean_ctor_set(v_reuseFailAlloc_4201_, 4, v_impl_4110_);
v___x_4200_ = v_reuseFailAlloc_4201_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
return v___x_4200_;
}
}
}
else
{
if (lean_obj_tag(v_l_3619_) == 0)
{
lean_object* v_l_4202_; 
v_l_4202_ = lean_ctor_get(v_l_3619_, 3);
if (lean_obj_tag(v_l_4202_) == 0)
{
lean_object* v_r_4203_; 
lean_inc_ref(v_l_4202_);
v_r_4203_ = lean_ctor_get(v_l_3619_, 4);
lean_inc(v_r_4203_);
if (lean_obj_tag(v_r_4203_) == 0)
{
lean_object* v_size_4204_; lean_object* v_k_4205_; lean_object* v_v_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4219_; 
v_size_4204_ = lean_ctor_get(v_l_3619_, 0);
v_k_4205_ = lean_ctor_get(v_l_3619_, 1);
v_v_4206_ = lean_ctor_get(v_l_3619_, 2);
v_isSharedCheck_4219_ = !lean_is_exclusive(v_l_3619_);
if (v_isSharedCheck_4219_ == 0)
{
lean_object* v_unused_4220_; lean_object* v_unused_4221_; 
v_unused_4220_ = lean_ctor_get(v_l_3619_, 4);
lean_dec(v_unused_4220_);
v_unused_4221_ = lean_ctor_get(v_l_3619_, 3);
lean_dec(v_unused_4221_);
v___x_4208_ = v_l_3619_;
v_isShared_4209_ = v_isSharedCheck_4219_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_v_4206_);
lean_inc(v_k_4205_);
lean_inc(v_size_4204_);
lean_dec(v_l_3619_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4219_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v_size_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4214_; 
v_size_4210_ = lean_ctor_get(v_r_4203_, 0);
v___x_4211_ = lean_nat_add(v___x_4111_, v_size_4204_);
lean_dec(v_size_4204_);
v___x_4212_ = lean_nat_add(v___x_4111_, v_size_4210_);
if (v_isShared_4209_ == 0)
{
lean_ctor_set(v___x_4208_, 4, v_impl_4110_);
lean_ctor_set(v___x_4208_, 3, v_r_4203_);
lean_ctor_set(v___x_4208_, 2, v_v_3618_);
lean_ctor_set(v___x_4208_, 1, v_k_3617_);
lean_ctor_set(v___x_4208_, 0, v___x_4212_);
v___x_4214_ = v___x_4208_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4218_; 
v_reuseFailAlloc_4218_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4218_, 0, v___x_4212_);
lean_ctor_set(v_reuseFailAlloc_4218_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_4218_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_4218_, 3, v_r_4203_);
lean_ctor_set(v_reuseFailAlloc_4218_, 4, v_impl_4110_);
v___x_4214_ = v_reuseFailAlloc_4218_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
lean_object* v___x_4216_; 
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v___x_4214_);
lean_ctor_set(v___x_3622_, 3, v_l_4202_);
lean_ctor_set(v___x_3622_, 2, v_v_4206_);
lean_ctor_set(v___x_3622_, 1, v_k_4205_);
lean_ctor_set(v___x_3622_, 0, v___x_4211_);
v___x_4216_ = v___x_3622_;
goto v_reusejp_4215_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v___x_4211_);
lean_ctor_set(v_reuseFailAlloc_4217_, 1, v_k_4205_);
lean_ctor_set(v_reuseFailAlloc_4217_, 2, v_v_4206_);
lean_ctor_set(v_reuseFailAlloc_4217_, 3, v_l_4202_);
lean_ctor_set(v_reuseFailAlloc_4217_, 4, v___x_4214_);
v___x_4216_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4215_;
}
v_reusejp_4215_:
{
return v___x_4216_;
}
}
}
}
else
{
lean_object* v_k_4222_; lean_object* v_v_4223_; lean_object* v___x_4225_; uint8_t v_isShared_4226_; uint8_t v_isSharedCheck_4234_; 
v_k_4222_ = lean_ctor_get(v_l_3619_, 1);
v_v_4223_ = lean_ctor_get(v_l_3619_, 2);
v_isSharedCheck_4234_ = !lean_is_exclusive(v_l_3619_);
if (v_isSharedCheck_4234_ == 0)
{
lean_object* v_unused_4235_; lean_object* v_unused_4236_; lean_object* v_unused_4237_; 
v_unused_4235_ = lean_ctor_get(v_l_3619_, 4);
lean_dec(v_unused_4235_);
v_unused_4236_ = lean_ctor_get(v_l_3619_, 3);
lean_dec(v_unused_4236_);
v_unused_4237_ = lean_ctor_get(v_l_3619_, 0);
lean_dec(v_unused_4237_);
v___x_4225_ = v_l_3619_;
v_isShared_4226_ = v_isSharedCheck_4234_;
goto v_resetjp_4224_;
}
else
{
lean_inc(v_v_4223_);
lean_inc(v_k_4222_);
lean_dec(v_l_3619_);
v___x_4225_ = lean_box(0);
v_isShared_4226_ = v_isSharedCheck_4234_;
goto v_resetjp_4224_;
}
v_resetjp_4224_:
{
lean_object* v___x_4227_; lean_object* v___x_4229_; 
v___x_4227_ = lean_unsigned_to_nat(3u);
if (v_isShared_4226_ == 0)
{
lean_ctor_set(v___x_4225_, 3, v_r_4203_);
lean_ctor_set(v___x_4225_, 2, v_v_3618_);
lean_ctor_set(v___x_4225_, 1, v_k_3617_);
lean_ctor_set(v___x_4225_, 0, v___x_4111_);
v___x_4229_ = v___x_4225_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v___x_4111_);
lean_ctor_set(v_reuseFailAlloc_4233_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_4233_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_4233_, 3, v_r_4203_);
lean_ctor_set(v_reuseFailAlloc_4233_, 4, v_r_4203_);
v___x_4229_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
lean_object* v___x_4231_; 
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v___x_4229_);
lean_ctor_set(v___x_3622_, 3, v_l_4202_);
lean_ctor_set(v___x_3622_, 2, v_v_4223_);
lean_ctor_set(v___x_3622_, 1, v_k_4222_);
lean_ctor_set(v___x_3622_, 0, v___x_4227_);
v___x_4231_ = v___x_3622_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v___x_4227_);
lean_ctor_set(v_reuseFailAlloc_4232_, 1, v_k_4222_);
lean_ctor_set(v_reuseFailAlloc_4232_, 2, v_v_4223_);
lean_ctor_set(v_reuseFailAlloc_4232_, 3, v_l_4202_);
lean_ctor_set(v_reuseFailAlloc_4232_, 4, v___x_4229_);
v___x_4231_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
return v___x_4231_;
}
}
}
}
}
else
{
lean_object* v_r_4238_; 
v_r_4238_ = lean_ctor_get(v_l_3619_, 4);
lean_inc(v_r_4238_);
if (lean_obj_tag(v_r_4238_) == 0)
{
lean_object* v_k_4239_; lean_object* v_v_4240_; lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4263_; 
lean_inc(v_l_4202_);
v_k_4239_ = lean_ctor_get(v_l_3619_, 1);
v_v_4240_ = lean_ctor_get(v_l_3619_, 2);
v_isSharedCheck_4263_ = !lean_is_exclusive(v_l_3619_);
if (v_isSharedCheck_4263_ == 0)
{
lean_object* v_unused_4264_; lean_object* v_unused_4265_; lean_object* v_unused_4266_; 
v_unused_4264_ = lean_ctor_get(v_l_3619_, 4);
lean_dec(v_unused_4264_);
v_unused_4265_ = lean_ctor_get(v_l_3619_, 3);
lean_dec(v_unused_4265_);
v_unused_4266_ = lean_ctor_get(v_l_3619_, 0);
lean_dec(v_unused_4266_);
v___x_4242_ = v_l_3619_;
v_isShared_4243_ = v_isSharedCheck_4263_;
goto v_resetjp_4241_;
}
else
{
lean_inc(v_v_4240_);
lean_inc(v_k_4239_);
lean_dec(v_l_3619_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4263_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v_k_4244_; lean_object* v_v_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4259_; 
v_k_4244_ = lean_ctor_get(v_r_4238_, 1);
v_v_4245_ = lean_ctor_get(v_r_4238_, 2);
v_isSharedCheck_4259_ = !lean_is_exclusive(v_r_4238_);
if (v_isSharedCheck_4259_ == 0)
{
lean_object* v_unused_4260_; lean_object* v_unused_4261_; lean_object* v_unused_4262_; 
v_unused_4260_ = lean_ctor_get(v_r_4238_, 4);
lean_dec(v_unused_4260_);
v_unused_4261_ = lean_ctor_get(v_r_4238_, 3);
lean_dec(v_unused_4261_);
v_unused_4262_ = lean_ctor_get(v_r_4238_, 0);
lean_dec(v_unused_4262_);
v___x_4247_ = v_r_4238_;
v_isShared_4248_ = v_isSharedCheck_4259_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_v_4245_);
lean_inc(v_k_4244_);
lean_dec(v_r_4238_);
v___x_4247_ = lean_box(0);
v_isShared_4248_ = v_isSharedCheck_4259_;
goto v_resetjp_4246_;
}
v_resetjp_4246_:
{
lean_object* v___x_4249_; lean_object* v___x_4251_; 
v___x_4249_ = lean_unsigned_to_nat(3u);
if (v_isShared_4248_ == 0)
{
lean_ctor_set(v___x_4247_, 4, v_l_4202_);
lean_ctor_set(v___x_4247_, 3, v_l_4202_);
lean_ctor_set(v___x_4247_, 2, v_v_4240_);
lean_ctor_set(v___x_4247_, 1, v_k_4239_);
lean_ctor_set(v___x_4247_, 0, v___x_4111_);
v___x_4251_ = v___x_4247_;
goto v_reusejp_4250_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v___x_4111_);
lean_ctor_set(v_reuseFailAlloc_4258_, 1, v_k_4239_);
lean_ctor_set(v_reuseFailAlloc_4258_, 2, v_v_4240_);
lean_ctor_set(v_reuseFailAlloc_4258_, 3, v_l_4202_);
lean_ctor_set(v_reuseFailAlloc_4258_, 4, v_l_4202_);
v___x_4251_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4250_;
}
v_reusejp_4250_:
{
lean_object* v___x_4253_; 
if (v_isShared_4243_ == 0)
{
lean_ctor_set(v___x_4242_, 4, v_l_4202_);
lean_ctor_set(v___x_4242_, 2, v_v_3618_);
lean_ctor_set(v___x_4242_, 1, v_k_3617_);
lean_ctor_set(v___x_4242_, 0, v___x_4111_);
v___x_4253_ = v___x_4242_;
goto v_reusejp_4252_;
}
else
{
lean_object* v_reuseFailAlloc_4257_; 
v_reuseFailAlloc_4257_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4257_, 0, v___x_4111_);
lean_ctor_set(v_reuseFailAlloc_4257_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_4257_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_4257_, 3, v_l_4202_);
lean_ctor_set(v_reuseFailAlloc_4257_, 4, v_l_4202_);
v___x_4253_ = v_reuseFailAlloc_4257_;
goto v_reusejp_4252_;
}
v_reusejp_4252_:
{
lean_object* v___x_4255_; 
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v___x_4253_);
lean_ctor_set(v___x_3622_, 3, v___x_4251_);
lean_ctor_set(v___x_3622_, 2, v_v_4245_);
lean_ctor_set(v___x_3622_, 1, v_k_4244_);
lean_ctor_set(v___x_3622_, 0, v___x_4249_);
v___x_4255_ = v___x_3622_;
goto v_reusejp_4254_;
}
else
{
lean_object* v_reuseFailAlloc_4256_; 
v_reuseFailAlloc_4256_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4256_, 0, v___x_4249_);
lean_ctor_set(v_reuseFailAlloc_4256_, 1, v_k_4244_);
lean_ctor_set(v_reuseFailAlloc_4256_, 2, v_v_4245_);
lean_ctor_set(v_reuseFailAlloc_4256_, 3, v___x_4251_);
lean_ctor_set(v_reuseFailAlloc_4256_, 4, v___x_4253_);
v___x_4255_ = v_reuseFailAlloc_4256_;
goto v_reusejp_4254_;
}
v_reusejp_4254_:
{
return v___x_4255_;
}
}
}
}
}
}
else
{
lean_object* v___x_4267_; lean_object* v___x_4269_; 
v___x_4267_ = lean_unsigned_to_nat(2u);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v_r_4238_);
lean_ctor_set(v___x_3622_, 0, v___x_4267_);
v___x_4269_ = v___x_3622_;
goto v_reusejp_4268_;
}
else
{
lean_object* v_reuseFailAlloc_4270_; 
v_reuseFailAlloc_4270_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4270_, 0, v___x_4267_);
lean_ctor_set(v_reuseFailAlloc_4270_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_4270_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_4270_, 3, v_l_3619_);
lean_ctor_set(v_reuseFailAlloc_4270_, 4, v_r_4238_);
v___x_4269_ = v_reuseFailAlloc_4270_;
goto v_reusejp_4268_;
}
v_reusejp_4268_:
{
return v___x_4269_;
}
}
}
}
else
{
lean_object* v___x_4272_; 
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v_l_3619_);
lean_ctor_set(v___x_3622_, 0, v___x_4111_);
v___x_4272_ = v___x_3622_;
goto v_reusejp_4271_;
}
else
{
lean_object* v_reuseFailAlloc_4273_; 
v_reuseFailAlloc_4273_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4273_, 0, v___x_4111_);
lean_ctor_set(v_reuseFailAlloc_4273_, 1, v_k_3617_);
lean_ctor_set(v_reuseFailAlloc_4273_, 2, v_v_3618_);
lean_ctor_set(v_reuseFailAlloc_4273_, 3, v_l_3619_);
lean_ctor_set(v_reuseFailAlloc_4273_, 4, v_l_3619_);
v___x_4272_ = v_reuseFailAlloc_4273_;
goto v_reusejp_4271_;
}
v_reusejp_4271_:
{
return v___x_4272_;
}
}
}
}
}
}
}
else
{
return v_t_3616_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0___redArg___boxed(lean_object* v_k_4276_, lean_object* v_t_4277_){
_start:
{
lean_object* v_res_4278_; 
v_res_4278_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0___redArg(v_k_4276_, v_t_4277_);
lean_dec(v_k_4276_);
return v_res_4278_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1_spec__1(lean_object* v_init_4279_, lean_object* v_x_4280_){
_start:
{
if (lean_obj_tag(v_x_4280_) == 0)
{
lean_object* v_k_4281_; lean_object* v_l_4282_; lean_object* v_r_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; 
v_k_4281_ = lean_ctor_get(v_x_4280_, 1);
v_l_4282_ = lean_ctor_get(v_x_4280_, 3);
v_r_4283_ = lean_ctor_get(v_x_4280_, 4);
v___x_4284_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1_spec__1(v_init_4279_, v_l_4282_);
v___x_4285_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0___redArg(v_k_4281_, v___x_4284_);
v_init_4279_ = v___x_4285_;
v_x_4280_ = v_r_4283_;
goto _start;
}
else
{
return v_init_4279_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1_spec__1___boxed(lean_object* v_init_4287_, lean_object* v_x_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1_spec__1(v_init_4287_, v_x_4288_);
lean_dec(v_x_4288_);
return v_res_4289_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNon(lean_object* v_names_4290_, lean_object* v_maxSuggestions_4291_, double v_depthFactor_4292_, double v_frequencyWeight_4293_, lean_object* v_a_4294_, lean_object* v_a_4295_, lean_object* v_a_4296_, lean_object* v_a_4297_){
_start:
{
lean_object* v___x_4299_; lean_object* v_env_4300_; lean_object* v___x_4301_; lean_object* v_toEnvExtension_4302_; lean_object* v_asyncMode_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; 
v___x_4299_ = lean_st_ref_get(v_a_4297_);
v_env_4300_ = lean_ctor_get(v___x_4299_, 0);
lean_inc_ref(v_env_4300_);
lean_dec(v___x_4299_);
v___x_4301_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerDenyListExt;
v_toEnvExtension_4302_ = lean_ctor_get(v___x_4301_, 0);
v_asyncMode_4303_ = lean_ctor_get(v_toEnvExtension_4302_, 2);
v___x_4304_ = lean_box(1);
v___x_4305_ = lean_box(0);
v___x_4306_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4304_, v___x_4301_, v_env_4300_, v_asyncMode_4303_, v___x_4305_);
v___x_4307_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1_spec__1(v_names_4290_, v___x_4306_);
v___x_4308_ = lean_box(0);
v___x_4309_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(v___x_4308_, v___x_4307_);
v___x_4310_ = l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg(v___x_4309_, v___x_4308_, v_a_4297_);
if (lean_obj_tag(v___x_4310_) == 0)
{
lean_object* v_a_4311_; lean_object* v___f_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; 
v_a_4311_ = lean_ctor_get(v___x_4310_, 0);
lean_inc(v_a_4311_);
lean_dec_ref(v___x_4310_);
v___f_4312_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_instOrdProdFloatName__lean___closed__0));
v___x_4313_ = l_Std_TreeSet_ofList___redArg(v_a_4311_, v___f_4312_);
v___x_4314_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols_spec__1___closed__0));
v___x_4315_ = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go(v_maxSuggestions_4291_, v_depthFactor_4292_, v_frequencyWeight_4293_, v___x_4306_, v___x_4307_, v___x_4313_, v___x_4314_, v___x_4304_, v_a_4294_, v_a_4295_, v_a_4296_, v_a_4297_);
lean_dec(v___x_4306_);
if (lean_obj_tag(v___x_4315_) == 0)
{
lean_object* v_a_4316_; lean_object* v___x_4318_; uint8_t v_isShared_4319_; uint8_t v_isSharedCheck_4326_; 
v_a_4316_ = lean_ctor_get(v___x_4315_, 0);
v_isSharedCheck_4326_ = !lean_is_exclusive(v___x_4315_);
if (v_isSharedCheck_4326_ == 0)
{
v___x_4318_ = v___x_4315_;
v_isShared_4319_ = v_isSharedCheck_4326_;
goto v_resetjp_4317_;
}
else
{
lean_inc(v_a_4316_);
lean_dec(v___x_4315_);
v___x_4318_ = lean_box(0);
v_isShared_4319_ = v_isSharedCheck_4326_;
goto v_resetjp_4317_;
}
v_resetjp_4317_:
{
size_t v_sz_4320_; size_t v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4324_; 
v_sz_4320_ = lean_array_size(v_a_4316_);
v___x_4321_ = ((size_t)0ULL);
v___x_4322_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__3(v_sz_4320_, v___x_4321_, v_a_4316_);
if (v_isShared_4319_ == 0)
{
lean_ctor_set(v___x_4318_, 0, v___x_4322_);
v___x_4324_ = v___x_4318_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v___x_4322_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
return v___x_4324_;
}
}
}
else
{
lean_object* v_a_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4334_; 
v_a_4327_ = lean_ctor_get(v___x_4315_, 0);
v_isSharedCheck_4334_ = !lean_is_exclusive(v___x_4315_);
if (v_isSharedCheck_4334_ == 0)
{
v___x_4329_ = v___x_4315_;
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_a_4327_);
lean_dec(v___x_4315_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
lean_object* v___x_4332_; 
if (v_isShared_4330_ == 0)
{
v___x_4332_ = v___x_4329_;
goto v_reusejp_4331_;
}
else
{
lean_object* v_reuseFailAlloc_4333_; 
v_reuseFailAlloc_4333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4333_, 0, v_a_4327_);
v___x_4332_ = v_reuseFailAlloc_4333_;
goto v_reusejp_4331_;
}
v_reusejp_4331_:
{
return v___x_4332_;
}
}
}
}
else
{
lean_object* v_a_4335_; lean_object* v___x_4337_; uint8_t v_isShared_4338_; uint8_t v_isSharedCheck_4342_; 
lean_dec(v___x_4307_);
lean_dec(v___x_4306_);
v_a_4335_ = lean_ctor_get(v___x_4310_, 0);
v_isSharedCheck_4342_ = !lean_is_exclusive(v___x_4310_);
if (v_isSharedCheck_4342_ == 0)
{
v___x_4337_ = v___x_4310_;
v_isShared_4338_ = v_isSharedCheck_4342_;
goto v_resetjp_4336_;
}
else
{
lean_inc(v_a_4335_);
lean_dec(v___x_4310_);
v___x_4337_ = lean_box(0);
v_isShared_4338_ = v_isSharedCheck_4342_;
goto v_resetjp_4336_;
}
v_resetjp_4336_:
{
lean_object* v___x_4340_; 
if (v_isShared_4338_ == 0)
{
v___x_4340_ = v___x_4337_;
goto v_reusejp_4339_;
}
else
{
lean_object* v_reuseFailAlloc_4341_; 
v_reuseFailAlloc_4341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4341_, 0, v_a_4335_);
v___x_4340_ = v_reuseFailAlloc_4341_;
goto v_reusejp_4339_;
}
v_reusejp_4339_:
{
return v___x_4340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNon___boxed(lean_object* v_names_4343_, lean_object* v_maxSuggestions_4344_, lean_object* v_depthFactor_4345_, lean_object* v_frequencyWeight_4346_, lean_object* v_a_4347_, lean_object* v_a_4348_, lean_object* v_a_4349_, lean_object* v_a_4350_, lean_object* v_a_4351_){
_start:
{
double v_depthFactor_boxed_4352_; double v_frequencyWeight_boxed_4353_; lean_object* v_res_4354_; 
v_depthFactor_boxed_4352_ = lean_unbox_float(v_depthFactor_4345_);
lean_dec_ref(v_depthFactor_4345_);
v_frequencyWeight_boxed_4353_ = lean_unbox_float(v_frequencyWeight_4346_);
lean_dec_ref(v_frequencyWeight_4346_);
v_res_4354_ = l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNon(v_names_4343_, v_maxSuggestions_4344_, v_depthFactor_boxed_4352_, v_frequencyWeight_boxed_4353_, v_a_4347_, v_a_4348_, v_a_4349_, v_a_4350_);
lean_dec(v_a_4350_);
lean_dec_ref(v_a_4349_);
lean_dec(v_a_4348_);
lean_dec_ref(v_a_4347_);
lean_dec(v_maxSuggestions_4344_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0(lean_object* v_00_u03b2_4355_, lean_object* v_k_4356_, lean_object* v_t_4357_, lean_object* v_h_4358_){
_start:
{
lean_object* v___x_4359_; 
v___x_4359_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0___redArg(v_k_4356_, v_t_4357_);
return v___x_4359_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0___boxed(lean_object* v_00_u03b2_4360_, lean_object* v_k_4361_, lean_object* v_t_4362_, lean_object* v_h_4363_){
_start:
{
lean_object* v_res_4364_; 
v_res_4364_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__0(v_00_u03b2_4360_, v_k_4361_, v_t_4362_, v_h_4363_);
lean_dec(v_k_4361_);
return v_res_4364_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1(lean_object* v_init_4365_, lean_object* v_t_4366_){
_start:
{
lean_object* v___x_4367_; 
v___x_4367_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1_spec__1(v_init_4365_, v_t_4366_);
return v___x_4367_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1___boxed(lean_object* v_init_4368_, lean_object* v_t_4369_){
_start:
{
lean_object* v_res_4370_; 
v_res_4370_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__1(v_init_4368_, v_t_4369_);
lean_dec(v_t_4369_);
return v_res_4370_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2(lean_object* v_x_4371_, lean_object* v_x_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_){
_start:
{
lean_object* v___x_4378_; 
v___x_4378_ = l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg(v_x_4371_, v_x_4372_, v___y_4376_);
return v___x_4378_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___boxed(lean_object* v_x_4379_, lean_object* v_x_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_){
_start:
{
lean_object* v_res_4386_; 
v_res_4386_ = l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2(v_x_4379_, v_x_4380_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
lean_dec(v___y_4384_);
lean_dec_ref(v___y_4383_);
lean_dec(v___y_4382_);
lean_dec_ref(v___y_4381_);
return v_res_4386_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_sineQuaNonSelector(double v_depthFactor_4387_, lean_object* v_g_4388_, lean_object* v_config_4389_, lean_object* v_a_4390_, lean_object* v_a_4391_, lean_object* v_a_4392_, lean_object* v_a_4393_){
_start:
{
lean_object* v___x_4395_; 
v___x_4395_ = l_Lean_MVarId_getRelevantConstants(v_g_4388_, v_a_4390_, v_a_4391_, v_a_4392_, v_a_4393_);
if (lean_obj_tag(v___x_4395_) == 0)
{
lean_object* v_a_4396_; lean_object* v_maxSuggestions_4397_; double v___x_4398_; lean_object* v___x_4399_; 
v_a_4396_ = lean_ctor_get(v___x_4395_, 0);
lean_inc(v_a_4396_);
lean_dec_ref(v___x_4395_);
v_maxSuggestions_4397_ = lean_ctor_get(v_config_4389_, 0);
lean_inc(v_maxSuggestions_4397_);
lean_dec_ref(v_config_4389_);
v___x_4398_ = lean_float_once(&l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg___closed__0, &l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg___closed__0_once, _init_l_List_mapM_loop___at___00Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_spec__2___redArg___closed__0);
v___x_4399_ = l_Lean_LibrarySuggestions_SineQuaNon_sineQuaNon(v_a_4396_, v_maxSuggestions_4397_, v_depthFactor_4387_, v___x_4398_, v_a_4390_, v_a_4391_, v_a_4392_, v_a_4393_);
if (lean_obj_tag(v___x_4399_) == 0)
{
lean_object* v_a_4400_; lean_object* v___x_4402_; uint8_t v_isShared_4403_; uint8_t v_isSharedCheck_4409_; 
v_a_4400_ = lean_ctor_get(v___x_4399_, 0);
v_isSharedCheck_4409_ = !lean_is_exclusive(v___x_4399_);
if (v_isSharedCheck_4409_ == 0)
{
v___x_4402_ = v___x_4399_;
v_isShared_4403_ = v_isSharedCheck_4409_;
goto v_resetjp_4401_;
}
else
{
lean_inc(v_a_4400_);
lean_dec(v___x_4399_);
v___x_4402_ = lean_box(0);
v_isShared_4403_ = v_isSharedCheck_4409_;
goto v_resetjp_4401_;
}
v_resetjp_4401_:
{
lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4407_; 
v___x_4404_ = lean_unsigned_to_nat(0u);
v___x_4405_ = l_Array_extract___redArg(v_a_4400_, v___x_4404_, v_maxSuggestions_4397_);
lean_dec(v_a_4400_);
if (v_isShared_4403_ == 0)
{
lean_ctor_set(v___x_4402_, 0, v___x_4405_);
v___x_4407_ = v___x_4402_;
goto v_reusejp_4406_;
}
else
{
lean_object* v_reuseFailAlloc_4408_; 
v_reuseFailAlloc_4408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4408_, 0, v___x_4405_);
v___x_4407_ = v_reuseFailAlloc_4408_;
goto v_reusejp_4406_;
}
v_reusejp_4406_:
{
return v___x_4407_;
}
}
}
else
{
lean_dec(v_maxSuggestions_4397_);
return v___x_4399_;
}
}
else
{
lean_object* v_a_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4417_; 
lean_dec_ref(v_config_4389_);
v_a_4410_ = lean_ctor_get(v___x_4395_, 0);
v_isSharedCheck_4417_ = !lean_is_exclusive(v___x_4395_);
if (v_isSharedCheck_4417_ == 0)
{
v___x_4412_ = v___x_4395_;
v_isShared_4413_ = v_isSharedCheck_4417_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_a_4410_);
lean_dec(v___x_4395_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4417_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
lean_object* v___x_4415_; 
if (v_isShared_4413_ == 0)
{
v___x_4415_ = v___x_4412_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4416_; 
v_reuseFailAlloc_4416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4416_, 0, v_a_4410_);
v___x_4415_ = v_reuseFailAlloc_4416_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
return v___x_4415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_sineQuaNonSelector___boxed(lean_object* v_depthFactor_4418_, lean_object* v_g_4419_, lean_object* v_config_4420_, lean_object* v_a_4421_, lean_object* v_a_4422_, lean_object* v_a_4423_, lean_object* v_a_4424_, lean_object* v_a_4425_){
_start:
{
double v_depthFactor_boxed_4426_; lean_object* v_res_4427_; 
v_depthFactor_boxed_4426_ = lean_unbox_float(v_depthFactor_4418_);
lean_dec_ref(v_depthFactor_4418_);
v_res_4427_ = l_Lean_LibrarySuggestions_sineQuaNonSelector(v_depthFactor_boxed_4426_, v_g_4419_, v_config_4420_, v_a_4421_, v_a_4422_, v_a_4423_, v_a_4424_);
lean_dec(v_a_4424_);
lean_dec_ref(v_a_4423_);
lean_dec(v_a_4422_);
lean_dec_ref(v_a_4421_);
return v_res_4427_;
}
}
lean_object* runtime_initialize_Lean_LibrarySuggestions_SymbolFrequency(uint8_t builtin);
lean_object* runtime_initialize_Lean_LibrarySuggestions_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_LibrarySuggestions_SineQuaNon(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_LibrarySuggestions_SymbolFrequency(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_LibrarySuggestions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_4180265299____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_830398421____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerDenyListExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerDenyListExt);
lean_dec_ref(res);
l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0___boxed__const__1 = _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_triggerSymbols___closed__0___boxed__const__1);
l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___boxed__const__1 = _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___boxed__const__1();
lean_mark_persistent(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt_unsafe__3___boxed__const__1);
res = l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_1269941458____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonExt);
lean_dec_ref(res);
res = l_Lean_LibrarySuggestions_SineQuaNon_initFn_00___x40_Lean_LibrarySuggestions_SineQuaNon_228879371____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNonTriggersRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_LibrarySuggestions_SineQuaNon(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3 = _init_l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3();
lean_mark_persistent(l___private_Lean_LibrarySuggestions_SineQuaNon_0__List_orderedInsert___auto__3);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_LibrarySuggestions_SymbolFrequency(uint8_t builtin);
lean_object* initialize_Lean_LibrarySuggestions_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_LibrarySuggestions_SineQuaNon(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_LibrarySuggestions_SymbolFrequency(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_LibrarySuggestions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_LibrarySuggestions_SineQuaNon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_LibrarySuggestions_SineQuaNon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_LibrarySuggestions_SineQuaNon(builtin);
}
#ifdef __cplusplus
}
#endif
