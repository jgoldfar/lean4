// Lean compiler output
// Module: Lean.Meta.InstanceNormalForm
// Imports: public import Lean.Meta.Closure public import Lean.Meta.SynthInstance public import Lean.Meta.CtorRecognizer
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
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
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecls(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_DeclNameGenerator_mkUniqueName(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxDefinition(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxTheorem(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "inferInstanceAs"};
static const lean_object* l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "wrap"};
static const lean_object* l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(6, 203, 50, 196, 213, 242, 67, 10)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(208, 252, 45, 86, 202, 182, 131, 2)}};
static const lean_object* l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 115, .m_capacity = 115, .m_length = 114, .m_data = "normalize instance bodies to constructor-based normal form in `inferInstanceAs` and the default `deriving` handler"};
static const lean_object* l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value)}};
static const lean_object* l_Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(191, 243, 171, 62, 165, 244, 129, 95)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value_aux_3),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(221, 185, 124, 149, 229, 249, 47, 175)}};
static const lean_object* l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_inferInstanceAs_wrap;
static const lean_string_object l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "reuseSubInstances"};
static const lean_object* l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(6, 203, 50, 196, 213, 242, 67, 10)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(208, 252, 45, 86, 202, 182, 131, 2)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(10, 196, 243, 125, 230, 240, 101, 207)}};
static const lean_object* l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 169, .m_capacity = 169, .m_length = 168, .m_data = "when recursing into sub-instances, reuse existing instances for the target type instead of re-wrapping them, which can be important to avoid non-defeq instance diamonds"};
static const lean_object* l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value)}};
static const lean_object* l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(191, 243, 171, 62, 165, 244, 129, 95)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_3),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(221, 185, 124, 149, 229, 249, 47, 175)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value_aux_4),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(155, 247, 150, 241, 101, 127, 32, 183)}};
static const lean_object* l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances;
static const lean_string_object l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instances"};
static const lean_object* l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(6, 203, 50, 196, 213, 242, 67, 10)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(208, 252, 45, 86, 202, 182, 131, 2)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(154, 83, 182, 188, 30, 204, 110, 119)}};
static const lean_object* l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "wrap non-reducible instances in auxiliary definitions to fix their types"};
static const lean_object* l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value)}};
static const lean_object* l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(191, 243, 171, 62, 165, 244, 129, 95)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_3),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(221, 185, 124, 149, 229, 249, 47, 175)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value_aux_4),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(43, 217, 132, 111, 195, 190, 14, 255)}};
static const lean_object* l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
static const lean_string_object l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(6, 203, 50, 196, 213, 242, 67, 10)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(208, 252, 45, 86, 202, 182, 131, 2)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(170, 208, 243, 158, 154, 215, 49, 58)}};
static const lean_object* l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "wrap data fields in auxiliary definitions to fix their types"};
static const lean_object* l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value)}};
static const lean_object* l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(191, 243, 171, 62, 165, 244, 129, 95)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_3),((lean_object*)&l_Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(221, 185, 124, 149, 229, 249, 47, 175)}};
static const lean_ctor_object l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value_aux_4),((lean_object*)&l_Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(59, 4, 237, 30, 122, 190, 35, 247)}};
static const lean_object* l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_inferInstanceAs_wrap_data;
static const lean_string_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "instanceNormalForm"};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(57, 153, 239, 137, 246, 214, 187, 192)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "InstanceNormalForm"};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(38, 21, 166, 237, 247, 44, 227, 163)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(47, 255, 247, 87, 67, 74, 3, 12)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 214, 207, 188, 255, 52, 193, 89)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(150, 136, 85, 96, 245, 162, 112, 180)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(123, 81, 24, 186, 132, 125, 163, 108)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(94, 9, 213, 84, 12, 241, 213, 223)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(167, 43, 106, 20, 97, 65, 200, 162)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(119, 231, 13, 153, 128, 78, 86, 252)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(243, 42, 205, 166, 86, 40, 201, 52)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2034682956) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(10, 120, 80, 90, 150, 102, 44, 19)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(5, 78, 161, 211, 122, 180, 152, 33)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(37, 99, 74, 33, 199, 2, 218, 255)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(168, 75, 222, 33, 198, 141, 86, 83)}};
static const lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_abstractInstImplicitArgs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_abstractInstImplicitArgs___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_abstractInstImplicitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractInstImplicitArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_normalizeInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "type: "};
static const lean_object* l_Lean_Meta_normalizeInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_normalizeInstance___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_normalizeInstance___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_normalizeInstance___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_normalizeInstance_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19_spec__21(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19_spec__21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__21___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__18(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__18___boxed(lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__1;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__2 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__2_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__3;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_aux"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(239, 43, 245, 0, 252, 151, 26, 151)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__1_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "did not reduce to constructor application, returning/wrapping as is: "};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__2_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "using existing instance "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "proof field "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = " does not have expected type "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " but "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__6_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = ", wrapping in auxiliary theorem: "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__8_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "instance normal form: incorrect number of arguments for constructor application `"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__4_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "`: "};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__6 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__6_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "instance normal form: `"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__8 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__8_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` does not unify with the conclusion of `"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__10 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__10_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_normalizeInstance___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_normalizeInstance___closed__0;
static const lean_string_object l_Lean_Meta_normalizeInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "class is "};
static const lean_object* l_Lean_Meta_normalizeInstance___closed__1 = (const lean_object*)&l_Lean_Meta_normalizeInstance___closed__1_value;
static lean_once_cell_t l_Lean_Meta_normalizeInstance___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_normalizeInstance___closed__2;
static lean_once_cell_t l_Lean_Meta_normalizeInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_normalizeInstance___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__15(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14___boxed(lean_object**);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_33_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_isSharedCheck_33_ = !lean_is_exclusive(v_decl_2_);
if (v_isSharedCheck_33_ == 0)
{
v___x_8_ = v_decl_2_;
v_isShared_9_ = v_isSharedCheck_33_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_descr_6_);
lean_inc(v_defValue_5_);
lean_dec(v_decl_2_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_33_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
lean_object* v___x_10_; uint8_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_10_ = lean_alloc_ctor(1, 0, 1);
v___x_11_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_10_, 0, v___x_11_);
lean_inc(v_name_1_);
v___x_12_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_12_, 0, v_name_1_);
lean_ctor_set(v___x_12_, 1, v_ref_3_);
lean_ctor_set(v___x_12_, 2, v___x_10_);
lean_ctor_set(v___x_12_, 3, v_descr_6_);
lean_inc(v_name_1_);
v___x_13_ = lean_register_option(v_name_1_, v___x_12_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_23_; 
v_isSharedCheck_23_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_23_ == 0)
{
lean_object* v_unused_24_; 
v_unused_24_ = lean_ctor_get(v___x_13_, 0);
lean_dec(v_unused_24_);
v___x_15_ = v___x_13_;
v_isShared_16_ = v_isSharedCheck_23_;
goto v_resetjp_14_;
}
else
{
lean_dec(v___x_13_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_23_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_18_; 
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 1, v_defValue_5_);
lean_ctor_set(v___x_8_, 0, v_name_1_);
v___x_18_ = v___x_8_;
goto v_reusejp_17_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v_name_1_);
lean_ctor_set(v_reuseFailAlloc_22_, 1, v_defValue_5_);
v___x_18_ = v_reuseFailAlloc_22_;
goto v_reusejp_17_;
}
v_reusejp_17_:
{
lean_object* v___x_20_; 
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 0, v___x_18_);
v___x_20_ = v___x_15_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v___x_18_);
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
else
{
lean_object* v_a_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_32_; 
lean_del_object(v___x_8_);
lean_dec(v_defValue_5_);
lean_dec(v_name_1_);
v_a_25_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_32_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_32_ == 0)
{
v___x_27_ = v___x_13_;
v_isShared_28_ = v_isSharedCheck_32_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_a_25_);
lean_dec(v___x_13_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_32_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v___x_30_; 
if (v_isShared_28_ == 0)
{
v___x_30_ = v___x_27_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v_a_25_);
v___x_30_ = v_reuseFailAlloc_31_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
return v___x_30_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_34_, lean_object* v_decl_35_, lean_object* v_ref_36_, lean_object* v_a_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__spec__0(v_name_34_, v_decl_35_, v_ref_36_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_60_ = ((lean_object*)(l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_));
v___x_61_ = ((lean_object*)(l_Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_));
v___x_62_ = ((lean_object*)(l_Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_));
v___x_63_ = l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__spec__0(v___x_60_, v___x_61_, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4____boxed(lean_object* v_a_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_();
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_85_ = ((lean_object*)(l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_));
v___x_86_ = ((lean_object*)(l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_));
v___x_87_ = ((lean_object*)(l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_));
v___x_88_ = l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__spec__0(v___x_85_, v___x_86_, v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4____boxed(lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_();
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_110_ = ((lean_object*)(l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_));
v___x_111_ = ((lean_object*)(l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_));
v___x_112_ = ((lean_object*)(l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_));
v___x_113_ = l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__spec__0(v___x_110_, v___x_111_, v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4____boxed(lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_();
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_135_ = ((lean_object*)(l_Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_));
v___x_136_ = ((lean_object*)(l_Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_));
v___x_137_ = ((lean_object*)(l_Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_));
v___x_138_ = l_Lean_Option_register___at___00Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4__spec__0(v___x_135_, v___x_136_, v___x_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4____boxed(lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_();
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_200_; uint8_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_200_ = ((lean_object*)(l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_));
v___x_201_ = 0;
v___x_202_ = ((lean_object*)(l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_));
v___x_203_ = l_Lean_registerTraceClass(v___x_200_, v___x_201_, v___x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2____boxed(lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_();
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___redArg(lean_object* v_e_206_, lean_object* v___y_207_){
_start:
{
uint8_t v___x_209_; 
v___x_209_ = l_Lean_Expr_hasMVar(v_e_206_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; 
v___x_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_210_, 0, v_e_206_);
return v___x_210_;
}
else
{
lean_object* v___x_211_; lean_object* v_mctx_212_; lean_object* v___x_213_; lean_object* v_fst_214_; lean_object* v_snd_215_; lean_object* v___x_216_; lean_object* v_cache_217_; lean_object* v_zetaDeltaFVarIds_218_; lean_object* v_postponed_219_; lean_object* v_diag_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_229_; 
v___x_211_ = lean_st_ref_get(v___y_207_);
v_mctx_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc_ref(v_mctx_212_);
lean_dec(v___x_211_);
v___x_213_ = l_Lean_instantiateMVarsCore(v_mctx_212_, v_e_206_);
v_fst_214_ = lean_ctor_get(v___x_213_, 0);
lean_inc(v_fst_214_);
v_snd_215_ = lean_ctor_get(v___x_213_, 1);
lean_inc(v_snd_215_);
lean_dec_ref(v___x_213_);
v___x_216_ = lean_st_ref_take(v___y_207_);
v_cache_217_ = lean_ctor_get(v___x_216_, 1);
v_zetaDeltaFVarIds_218_ = lean_ctor_get(v___x_216_, 2);
v_postponed_219_ = lean_ctor_get(v___x_216_, 3);
v_diag_220_ = lean_ctor_get(v___x_216_, 4);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_229_ == 0)
{
lean_object* v_unused_230_; 
v_unused_230_ = lean_ctor_get(v___x_216_, 0);
lean_dec(v_unused_230_);
v___x_222_ = v___x_216_;
v_isShared_223_ = v_isSharedCheck_229_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_diag_220_);
lean_inc(v_postponed_219_);
lean_inc(v_zetaDeltaFVarIds_218_);
lean_inc(v_cache_217_);
lean_dec(v___x_216_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_229_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v_snd_215_);
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_snd_215_);
lean_ctor_set(v_reuseFailAlloc_228_, 1, v_cache_217_);
lean_ctor_set(v_reuseFailAlloc_228_, 2, v_zetaDeltaFVarIds_218_);
lean_ctor_set(v_reuseFailAlloc_228_, 3, v_postponed_219_);
lean_ctor_set(v_reuseFailAlloc_228_, 4, v_diag_220_);
v___x_225_ = v_reuseFailAlloc_228_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_st_ref_set(v___y_207_, v___x_225_);
v___x_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_227_, 0, v_fst_214_);
return v___x_227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___redArg___boxed(lean_object* v_e_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___redArg(v_e_231_, v___y_232_);
lean_dec(v___y_232_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2(lean_object* v_e_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___redArg(v_e_235_, v___y_237_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___boxed(lean_object* v_e_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2(v_e_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
lean_dec(v___y_246_);
lean_dec_ref(v___y_245_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object* v_x_249_, lean_object* v_x_250_, lean_object* v_x_251_, lean_object* v_x_252_){
_start:
{
lean_object* v_ks_253_; lean_object* v_vs_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_278_; 
v_ks_253_ = lean_ctor_get(v_x_249_, 0);
v_vs_254_ = lean_ctor_get(v_x_249_, 1);
v_isSharedCheck_278_ = !lean_is_exclusive(v_x_249_);
if (v_isSharedCheck_278_ == 0)
{
v___x_256_ = v_x_249_;
v_isShared_257_ = v_isSharedCheck_278_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_vs_254_);
lean_inc(v_ks_253_);
lean_dec(v_x_249_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_278_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_258_ = lean_array_get_size(v_ks_253_);
v___x_259_ = lean_nat_dec_lt(v_x_250_, v___x_258_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_263_; 
lean_dec(v_x_250_);
v___x_260_ = lean_array_push(v_ks_253_, v_x_251_);
v___x_261_ = lean_array_push(v_vs_254_, v_x_252_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 1, v___x_261_);
lean_ctor_set(v___x_256_, 0, v___x_260_);
v___x_263_ = v___x_256_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_260_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v___x_261_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
else
{
lean_object* v_k_x27_265_; uint8_t v___x_266_; 
v_k_x27_265_ = lean_array_fget_borrowed(v_ks_253_, v_x_250_);
v___x_266_ = l_Lean_instBEqMVarId_beq(v_x_251_, v_k_x27_265_);
if (v___x_266_ == 0)
{
lean_object* v___x_268_; 
if (v_isShared_257_ == 0)
{
v___x_268_ = v___x_256_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_ks_253_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_vs_254_);
v___x_268_ = v_reuseFailAlloc_272_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_unsigned_to_nat(1u);
v___x_270_ = lean_nat_add(v_x_250_, v___x_269_);
lean_dec(v_x_250_);
v_x_249_ = v___x_268_;
v_x_250_ = v___x_270_;
goto _start;
}
}
else
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_276_; 
v___x_273_ = lean_array_fset(v_ks_253_, v_x_250_, v_x_251_);
v___x_274_ = lean_array_fset(v_vs_254_, v_x_250_, v_x_252_);
lean_dec(v_x_250_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 1, v___x_274_);
lean_ctor_set(v___x_256_, 0, v___x_273_);
v___x_276_ = v___x_256_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___x_274_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_n_279_, lean_object* v_k_280_, lean_object* v_v_281_){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = lean_unsigned_to_nat(0u);
v___x_283_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_n_279_, v___x_282_, v_k_280_, v_v_281_);
return v___x_283_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_284_; size_t v___x_285_; size_t v___x_286_; 
v___x_284_ = ((size_t)5ULL);
v___x_285_ = ((size_t)1ULL);
v___x_286_ = lean_usize_shift_left(v___x_285_, v___x_284_);
return v___x_286_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_287_; size_t v___x_288_; size_t v___x_289_; 
v___x_287_ = ((size_t)1ULL);
v___x_288_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_289_ = lean_usize_sub(v___x_288_, v___x_287_);
return v___x_289_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg(lean_object* v_x_291_, size_t v_x_292_, size_t v_x_293_, lean_object* v_x_294_, lean_object* v_x_295_){
_start:
{
if (lean_obj_tag(v_x_291_) == 0)
{
lean_object* v_es_296_; size_t v___x_297_; size_t v___x_298_; size_t v___x_299_; size_t v___x_300_; lean_object* v_j_301_; lean_object* v___x_302_; uint8_t v___x_303_; 
v_es_296_ = lean_ctor_get(v_x_291_, 0);
v___x_297_ = ((size_t)5ULL);
v___x_298_ = ((size_t)1ULL);
v___x_299_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_300_ = lean_usize_land(v_x_292_, v___x_299_);
v_j_301_ = lean_usize_to_nat(v___x_300_);
v___x_302_ = lean_array_get_size(v_es_296_);
v___x_303_ = lean_nat_dec_lt(v_j_301_, v___x_302_);
if (v___x_303_ == 0)
{
lean_dec(v_j_301_);
lean_dec(v_x_295_);
lean_dec(v_x_294_);
return v_x_291_;
}
else
{
lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_340_; 
lean_inc_ref(v_es_296_);
v_isSharedCheck_340_ = !lean_is_exclusive(v_x_291_);
if (v_isSharedCheck_340_ == 0)
{
lean_object* v_unused_341_; 
v_unused_341_ = lean_ctor_get(v_x_291_, 0);
lean_dec(v_unused_341_);
v___x_305_ = v_x_291_;
v_isShared_306_ = v_isSharedCheck_340_;
goto v_resetjp_304_;
}
else
{
lean_dec(v_x_291_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_340_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v_v_307_; lean_object* v___x_308_; lean_object* v_xs_x27_309_; lean_object* v___y_311_; 
v_v_307_ = lean_array_fget(v_es_296_, v_j_301_);
v___x_308_ = lean_box(0);
v_xs_x27_309_ = lean_array_fset(v_es_296_, v_j_301_, v___x_308_);
switch(lean_obj_tag(v_v_307_))
{
case 0:
{
lean_object* v_key_316_; lean_object* v_val_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_327_; 
v_key_316_ = lean_ctor_get(v_v_307_, 0);
v_val_317_ = lean_ctor_get(v_v_307_, 1);
v_isSharedCheck_327_ = !lean_is_exclusive(v_v_307_);
if (v_isSharedCheck_327_ == 0)
{
v___x_319_ = v_v_307_;
v_isShared_320_ = v_isSharedCheck_327_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_val_317_);
lean_inc(v_key_316_);
lean_dec(v_v_307_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_327_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
uint8_t v___x_321_; 
v___x_321_ = l_Lean_instBEqMVarId_beq(v_x_294_, v_key_316_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; lean_object* v___x_323_; 
lean_del_object(v___x_319_);
v___x_322_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_316_, v_val_317_, v_x_294_, v_x_295_);
v___x_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
v___y_311_ = v___x_323_;
goto v___jp_310_;
}
else
{
lean_object* v___x_325_; 
lean_dec(v_val_317_);
lean_dec(v_key_316_);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 1, v_x_295_);
lean_ctor_set(v___x_319_, 0, v_x_294_);
v___x_325_ = v___x_319_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_x_294_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v_x_295_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
v___y_311_ = v___x_325_;
goto v___jp_310_;
}
}
}
}
case 1:
{
lean_object* v_node_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_338_; 
v_node_328_ = lean_ctor_get(v_v_307_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v_v_307_);
if (v_isSharedCheck_338_ == 0)
{
v___x_330_ = v_v_307_;
v_isShared_331_ = v_isSharedCheck_338_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_node_328_);
lean_dec(v_v_307_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_338_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
size_t v___x_332_; size_t v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_332_ = lean_usize_shift_right(v_x_292_, v___x_297_);
v___x_333_ = lean_usize_add(v_x_293_, v___x_298_);
v___x_334_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg(v_node_328_, v___x_332_, v___x_333_, v_x_294_, v_x_295_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 0, v___x_334_);
v___x_336_ = v___x_330_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
v___y_311_ = v___x_336_;
goto v___jp_310_;
}
}
}
default: 
{
lean_object* v___x_339_; 
v___x_339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_339_, 0, v_x_294_);
lean_ctor_set(v___x_339_, 1, v_x_295_);
v___y_311_ = v___x_339_;
goto v___jp_310_;
}
}
v___jp_310_:
{
lean_object* v___x_312_; lean_object* v___x_314_; 
v___x_312_ = lean_array_fset(v_xs_x27_309_, v_j_301_, v___y_311_);
lean_dec(v_j_301_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_312_);
v___x_314_ = v___x_305_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v___x_312_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
else
{
lean_object* v_ks_342_; lean_object* v_vs_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_363_; 
v_ks_342_ = lean_ctor_get(v_x_291_, 0);
v_vs_343_ = lean_ctor_get(v_x_291_, 1);
v_isSharedCheck_363_ = !lean_is_exclusive(v_x_291_);
if (v_isSharedCheck_363_ == 0)
{
v___x_345_ = v_x_291_;
v_isShared_346_ = v_isSharedCheck_363_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_vs_343_);
lean_inc(v_ks_342_);
lean_dec(v_x_291_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_363_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_ks_342_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v_vs_343_);
v___x_348_ = v_reuseFailAlloc_362_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
lean_object* v_newNode_349_; uint8_t v___y_351_; size_t v___x_357_; uint8_t v___x_358_; 
v_newNode_349_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4___redArg(v___x_348_, v_x_294_, v_x_295_);
v___x_357_ = ((size_t)7ULL);
v___x_358_ = lean_usize_dec_le(v___x_357_, v_x_293_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
v___x_359_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_349_);
v___x_360_ = lean_unsigned_to_nat(4u);
v___x_361_ = lean_nat_dec_lt(v___x_359_, v___x_360_);
lean_dec(v___x_359_);
v___y_351_ = v___x_361_;
goto v___jp_350_;
}
else
{
v___y_351_ = v___x_358_;
goto v___jp_350_;
}
v___jp_350_:
{
if (v___y_351_ == 0)
{
lean_object* v_ks_352_; lean_object* v_vs_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v_ks_352_ = lean_ctor_get(v_newNode_349_, 0);
lean_inc_ref(v_ks_352_);
v_vs_353_ = lean_ctor_get(v_newNode_349_, 1);
lean_inc_ref(v_vs_353_);
lean_dec_ref(v_newNode_349_);
v___x_354_ = lean_unsigned_to_nat(0u);
v___x_355_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___closed__2);
v___x_356_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5___redArg(v_x_293_, v_ks_352_, v_vs_353_, v___x_354_, v___x_355_);
lean_dec_ref(v_vs_353_);
lean_dec_ref(v_ks_352_);
return v___x_356_;
}
else
{
return v_newNode_349_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5___redArg(size_t v_depth_364_, lean_object* v_keys_365_, lean_object* v_vals_366_, lean_object* v_i_367_, lean_object* v_entries_368_){
_start:
{
lean_object* v___x_369_; uint8_t v___x_370_; 
v___x_369_ = lean_array_get_size(v_keys_365_);
v___x_370_ = lean_nat_dec_lt(v_i_367_, v___x_369_);
if (v___x_370_ == 0)
{
lean_dec(v_i_367_);
return v_entries_368_;
}
else
{
lean_object* v_k_371_; lean_object* v_v_372_; uint64_t v___x_373_; size_t v_h_374_; size_t v___x_375_; lean_object* v___x_376_; size_t v___x_377_; size_t v___x_378_; size_t v___x_379_; size_t v_h_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_k_371_ = lean_array_fget_borrowed(v_keys_365_, v_i_367_);
v_v_372_ = lean_array_fget_borrowed(v_vals_366_, v_i_367_);
v___x_373_ = l_Lean_instHashableMVarId_hash(v_k_371_);
v_h_374_ = lean_uint64_to_usize(v___x_373_);
v___x_375_ = ((size_t)5ULL);
v___x_376_ = lean_unsigned_to_nat(1u);
v___x_377_ = ((size_t)1ULL);
v___x_378_ = lean_usize_sub(v_depth_364_, v___x_377_);
v___x_379_ = lean_usize_mul(v___x_375_, v___x_378_);
v_h_380_ = lean_usize_shift_right(v_h_374_, v___x_379_);
v___x_381_ = lean_nat_add(v_i_367_, v___x_376_);
lean_dec(v_i_367_);
lean_inc(v_v_372_);
lean_inc(v_k_371_);
v___x_382_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg(v_entries_368_, v_h_380_, v_depth_364_, v_k_371_, v_v_372_);
v_i_367_ = v___x_381_;
v_entries_368_ = v___x_382_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_depth_384_, lean_object* v_keys_385_, lean_object* v_vals_386_, lean_object* v_i_387_, lean_object* v_entries_388_){
_start:
{
size_t v_depth_boxed_389_; lean_object* v_res_390_; 
v_depth_boxed_389_ = lean_unbox_usize(v_depth_384_);
lean_dec(v_depth_384_);
v_res_390_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_boxed_389_, v_keys_385_, v_vals_386_, v_i_387_, v_entries_388_);
lean_dec_ref(v_vals_386_);
lean_dec_ref(v_keys_385_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_391_, lean_object* v_x_392_, lean_object* v_x_393_, lean_object* v_x_394_, lean_object* v_x_395_){
_start:
{
size_t v_x_2193__boxed_396_; size_t v_x_2194__boxed_397_; lean_object* v_res_398_; 
v_x_2193__boxed_396_ = lean_unbox_usize(v_x_392_);
lean_dec(v_x_392_);
v_x_2194__boxed_397_ = lean_unbox_usize(v_x_393_);
lean_dec(v_x_393_);
v_res_398_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg(v_x_391_, v_x_2193__boxed_396_, v_x_2194__boxed_397_, v_x_394_, v_x_395_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0___redArg(lean_object* v_x_399_, lean_object* v_x_400_, lean_object* v_x_401_){
_start:
{
uint64_t v___x_402_; size_t v___x_403_; size_t v___x_404_; lean_object* v___x_405_; 
v___x_402_ = l_Lean_instHashableMVarId_hash(v_x_400_);
v___x_403_ = lean_uint64_to_usize(v___x_402_);
v___x_404_ = ((size_t)1ULL);
v___x_405_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg(v_x_399_, v___x_403_, v___x_404_, v_x_400_, v_x_401_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(lean_object* v_mvarId_406_, lean_object* v_val_407_, lean_object* v___y_408_){
_start:
{
lean_object* v___x_410_; lean_object* v_mctx_411_; lean_object* v_cache_412_; lean_object* v_zetaDeltaFVarIds_413_; lean_object* v_postponed_414_; lean_object* v_diag_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_442_; 
v___x_410_ = lean_st_ref_take(v___y_408_);
v_mctx_411_ = lean_ctor_get(v___x_410_, 0);
v_cache_412_ = lean_ctor_get(v___x_410_, 1);
v_zetaDeltaFVarIds_413_ = lean_ctor_get(v___x_410_, 2);
v_postponed_414_ = lean_ctor_get(v___x_410_, 3);
v_diag_415_ = lean_ctor_get(v___x_410_, 4);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_442_ == 0)
{
v___x_417_ = v___x_410_;
v_isShared_418_ = v_isSharedCheck_442_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_diag_415_);
lean_inc(v_postponed_414_);
lean_inc(v_zetaDeltaFVarIds_413_);
lean_inc(v_cache_412_);
lean_inc(v_mctx_411_);
lean_dec(v___x_410_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_442_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v_depth_419_; lean_object* v_levelAssignDepth_420_; lean_object* v_mvarCounter_421_; lean_object* v_lDepth_422_; lean_object* v_decls_423_; lean_object* v_userNames_424_; lean_object* v_lAssignment_425_; lean_object* v_eAssignment_426_; lean_object* v_dAssignment_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_441_; 
v_depth_419_ = lean_ctor_get(v_mctx_411_, 0);
v_levelAssignDepth_420_ = lean_ctor_get(v_mctx_411_, 1);
v_mvarCounter_421_ = lean_ctor_get(v_mctx_411_, 2);
v_lDepth_422_ = lean_ctor_get(v_mctx_411_, 3);
v_decls_423_ = lean_ctor_get(v_mctx_411_, 4);
v_userNames_424_ = lean_ctor_get(v_mctx_411_, 5);
v_lAssignment_425_ = lean_ctor_get(v_mctx_411_, 6);
v_eAssignment_426_ = lean_ctor_get(v_mctx_411_, 7);
v_dAssignment_427_ = lean_ctor_get(v_mctx_411_, 8);
v_isSharedCheck_441_ = !lean_is_exclusive(v_mctx_411_);
if (v_isSharedCheck_441_ == 0)
{
v___x_429_ = v_mctx_411_;
v_isShared_430_ = v_isSharedCheck_441_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_dAssignment_427_);
lean_inc(v_eAssignment_426_);
lean_inc(v_lAssignment_425_);
lean_inc(v_userNames_424_);
lean_inc(v_decls_423_);
lean_inc(v_lDepth_422_);
lean_inc(v_mvarCounter_421_);
lean_inc(v_levelAssignDepth_420_);
lean_inc(v_depth_419_);
lean_dec(v_mctx_411_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_441_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_431_; lean_object* v___x_433_; 
v___x_431_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0___redArg(v_eAssignment_426_, v_mvarId_406_, v_val_407_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 7, v___x_431_);
v___x_433_ = v___x_429_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_depth_419_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v_levelAssignDepth_420_);
lean_ctor_set(v_reuseFailAlloc_440_, 2, v_mvarCounter_421_);
lean_ctor_set(v_reuseFailAlloc_440_, 3, v_lDepth_422_);
lean_ctor_set(v_reuseFailAlloc_440_, 4, v_decls_423_);
lean_ctor_set(v_reuseFailAlloc_440_, 5, v_userNames_424_);
lean_ctor_set(v_reuseFailAlloc_440_, 6, v_lAssignment_425_);
lean_ctor_set(v_reuseFailAlloc_440_, 7, v___x_431_);
lean_ctor_set(v_reuseFailAlloc_440_, 8, v_dAssignment_427_);
v___x_433_ = v_reuseFailAlloc_440_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_435_; 
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v___x_433_);
v___x_435_ = v___x_417_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v_cache_412_);
lean_ctor_set(v_reuseFailAlloc_439_, 2, v_zetaDeltaFVarIds_413_);
lean_ctor_set(v_reuseFailAlloc_439_, 3, v_postponed_414_);
lean_ctor_set(v_reuseFailAlloc_439_, 4, v_diag_415_);
v___x_435_ = v_reuseFailAlloc_439_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_436_ = lean_st_ref_set(v___y_408_, v___x_435_);
v___x_437_ = lean_box(0);
v___x_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_438_, 0, v___x_437_);
return v___x_438_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg___boxed(lean_object* v_mvarId_443_, lean_object* v_val_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v_mvarId_443_, v_val_444_, v___y_445_);
lean_dec(v___y_445_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1___redArg(lean_object* v_fst_448_, lean_object* v_fst_449_, lean_object* v_args_450_, lean_object* v_range_451_, lean_object* v_b_452_, lean_object* v_i_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v_stop_459_; lean_object* v_step_460_; uint8_t v___x_461_; 
v_stop_459_ = lean_ctor_get(v_range_451_, 1);
v_step_460_ = lean_ctor_get(v_range_451_, 2);
v___x_461_ = lean_nat_dec_lt(v_i_453_, v_stop_459_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; 
lean_dec(v_i_453_);
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v_b_452_);
return v___x_462_;
}
else
{
uint8_t v___x_463_; lean_object* v___x_464_; lean_object* v___x_468_; lean_object* v___x_469_; uint8_t v___x_470_; uint8_t v___x_471_; 
v___x_463_ = 0;
v___x_464_ = lean_box(0);
v___x_468_ = lean_box(v___x_463_);
v___x_469_ = lean_array_get_borrowed(v___x_468_, v_fst_448_, v_i_453_);
v___x_470_ = lean_unbox(v___x_469_);
v___x_471_ = l_Lean_BinderInfo_isInstImplicit(v___x_470_);
if (v___x_471_ == 0)
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_472_ = l_Lean_instInhabitedExpr;
v___x_473_ = lean_array_get_borrowed(v___x_472_, v_fst_449_, v_i_453_);
v___x_474_ = l_Lean_Expr_mvarId_x21(v___x_473_);
v___x_475_ = lean_array_get_borrowed(v___x_472_, v_args_450_, v_i_453_);
lean_inc(v___x_475_);
v___x_476_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_474_, v___x_475_, v___y_455_);
lean_dec_ref(v___x_476_);
goto v___jp_465_;
}
else
{
goto v___jp_465_;
}
v___jp_465_:
{
lean_object* v___x_466_; 
v___x_466_ = lean_nat_add(v_i_453_, v_step_460_);
lean_dec(v_i_453_);
v_b_452_ = v___x_464_;
v_i_453_ = v___x_466_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1___redArg___boxed(lean_object* v_fst_477_, lean_object* v_fst_478_, lean_object* v_args_479_, lean_object* v_range_480_, lean_object* v_b_481_, lean_object* v_i_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1___redArg(v_fst_477_, v_fst_478_, v_args_479_, v_range_480_, v_b_481_, v_i_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec_ref(v_range_480_);
lean_dec_ref(v_args_479_);
lean_dec_ref(v_fst_478_);
lean_dec_ref(v_fst_477_);
return v_res_488_;
}
}
static lean_object* _init_l_Lean_Meta_abstractInstImplicitArgs___closed__0(void){
_start:
{
lean_object* v___x_489_; lean_object* v_dummy_490_; 
v___x_489_ = lean_box(0);
v_dummy_490_ = l_Lean_Expr_sort___override(v___x_489_);
return v_dummy_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractInstImplicitArgs(lean_object* v_type_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_fn_497_; lean_object* v___x_498_; 
v_fn_497_ = l_Lean_Expr_getAppFn(v_type_491_);
lean_inc(v_a_495_);
lean_inc_ref(v_a_494_);
lean_inc(v_a_493_);
lean_inc_ref(v_a_492_);
lean_inc_ref(v_fn_497_);
v___x_498_ = lean_infer_type(v_fn_497_, v_a_492_, v_a_493_, v_a_494_, v_a_495_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; uint8_t v___x_500_; lean_object* v___x_501_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
lean_inc(v_a_499_);
lean_dec_ref(v___x_498_);
v___x_500_ = 0;
lean_inc(v_a_495_);
lean_inc_ref(v_a_494_);
lean_inc(v_a_493_);
lean_inc_ref(v_a_492_);
v___x_501_ = l_Lean_Meta_forallMetaTelescope(v_a_499_, v___x_500_, v_a_492_, v_a_493_, v_a_494_, v_a_495_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v_snd_503_; lean_object* v_fst_504_; lean_object* v_fst_505_; lean_object* v_nargs_506_; lean_object* v_dummy_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v_args_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref(v___x_501_);
v_snd_503_ = lean_ctor_get(v_a_502_, 1);
lean_inc(v_snd_503_);
v_fst_504_ = lean_ctor_get(v_a_502_, 0);
lean_inc(v_fst_504_);
lean_dec(v_a_502_);
v_fst_505_ = lean_ctor_get(v_snd_503_, 0);
lean_inc(v_fst_505_);
lean_dec(v_snd_503_);
v_nargs_506_ = l_Lean_Expr_getAppNumArgs(v_type_491_);
v_dummy_507_ = lean_obj_once(&l_Lean_Meta_abstractInstImplicitArgs___closed__0, &l_Lean_Meta_abstractInstImplicitArgs___closed__0_once, _init_l_Lean_Meta_abstractInstImplicitArgs___closed__0);
lean_inc(v_nargs_506_);
v___x_508_ = lean_mk_array(v_nargs_506_, v_dummy_507_);
v___x_509_ = lean_unsigned_to_nat(1u);
v___x_510_ = lean_nat_sub(v_nargs_506_, v___x_509_);
lean_dec(v_nargs_506_);
v_args_511_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_type_491_, v___x_508_, v___x_510_);
v___x_512_ = lean_unsigned_to_nat(0u);
v___x_513_ = lean_array_get_size(v_fst_504_);
v___x_514_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
lean_ctor_set(v___x_514_, 2, v___x_509_);
v___x_515_ = lean_box(0);
v___x_516_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1___redArg(v_fst_505_, v_fst_504_, v_args_511_, v___x_514_, v___x_515_, v___x_512_, v_a_492_, v_a_493_, v_a_494_, v_a_495_);
lean_dec(v_a_495_);
lean_dec_ref(v_a_494_);
lean_dec_ref(v_a_492_);
lean_dec_ref(v___x_514_);
lean_dec(v_fst_505_);
lean_dec_ref(v___x_516_);
v___x_517_ = lean_array_get_size(v_args_511_);
v___x_518_ = l_Array_extract___redArg(v_args_511_, v___x_513_, v___x_517_);
lean_dec_ref(v_args_511_);
v___x_519_ = l_Array_append___redArg(v_fst_504_, v___x_518_);
lean_dec_ref(v___x_518_);
v___x_520_ = l_Lean_mkAppN(v_fn_497_, v___x_519_);
lean_dec_ref(v___x_519_);
v___x_521_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___redArg(v___x_520_, v_a_493_);
lean_dec(v_a_493_);
return v___x_521_;
}
else
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_529_; 
lean_dec_ref(v_fn_497_);
lean_dec(v_a_495_);
lean_dec_ref(v_a_494_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
lean_dec_ref(v_type_491_);
v_a_522_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_529_ == 0)
{
v___x_524_ = v___x_501_;
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_501_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_a_522_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
else
{
lean_dec_ref(v_fn_497_);
lean_dec(v_a_495_);
lean_dec_ref(v_a_494_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
lean_dec_ref(v_type_491_);
return v___x_498_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractInstImplicitArgs___boxed(lean_object* v_type_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Lean_Meta_abstractInstImplicitArgs(v_type_530_, v_a_531_, v_a_532_, v_a_533_, v_a_534_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0(lean_object* v_mvarId_537_, lean_object* v_val_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v_mvarId_537_, v_val_538_, v___y_540_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___boxed(lean_object* v_mvarId_545_, lean_object* v_val_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0(v_mvarId_545_, v_val_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1(lean_object* v_fst_553_, lean_object* v_fst_554_, lean_object* v_args_555_, lean_object* v_range_556_, lean_object* v_b_557_, lean_object* v_i_558_, lean_object* v_hs_559_, lean_object* v_hl_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1___redArg(v_fst_553_, v_fst_554_, v_args_555_, v_range_556_, v_b_557_, v_i_558_, v___y_561_, v___y_562_, v___y_563_, v___y_564_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1___boxed(lean_object* v_fst_567_, lean_object* v_fst_568_, lean_object* v_args_569_, lean_object* v_range_570_, lean_object* v_b_571_, lean_object* v_i_572_, lean_object* v_hs_573_, lean_object* v_hl_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_abstractInstImplicitArgs_spec__1(v_fst_567_, v_fst_568_, v_args_569_, v_range_570_, v_b_571_, v_i_572_, v_hs_573_, v_hl_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
lean_dec_ref(v_range_570_);
lean_dec_ref(v_args_569_);
lean_dec_ref(v_fst_568_);
lean_dec_ref(v_fst_567_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0(lean_object* v_00_u03b2_581_, lean_object* v_x_582_, lean_object* v_x_583_, lean_object* v_x_584_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0___redArg(v_x_582_, v_x_583_, v_x_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_586_, lean_object* v_x_587_, size_t v_x_588_, size_t v_x_589_, lean_object* v_x_590_, lean_object* v_x_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___redArg(v_x_587_, v_x_588_, v_x_589_, v_x_590_, v_x_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_593_, lean_object* v_x_594_, lean_object* v_x_595_, lean_object* v_x_596_, lean_object* v_x_597_, lean_object* v_x_598_){
_start:
{
size_t v_x_2596__boxed_599_; size_t v_x_2597__boxed_600_; lean_object* v_res_601_; 
v_x_2596__boxed_599_ = lean_unbox_usize(v_x_595_);
lean_dec(v_x_595_);
v_x_2597__boxed_600_ = lean_unbox_usize(v_x_596_);
lean_dec(v_x_596_);
v_res_601_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2(v_00_u03b2_593_, v_x_594_, v_x_2596__boxed_599_, v_x_2597__boxed_600_, v_x_597_, v_x_598_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_602_, lean_object* v_n_603_, lean_object* v_k_604_, lean_object* v_v_605_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4___redArg(v_n_603_, v_k_604_, v_v_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_607_, size_t v_depth_608_, lean_object* v_keys_609_, lean_object* v_vals_610_, lean_object* v_heq_611_, lean_object* v_i_612_, lean_object* v_entries_613_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_608_, v_keys_609_, v_vals_610_, v_i_612_, v_entries_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_615_, lean_object* v_depth_616_, lean_object* v_keys_617_, lean_object* v_vals_618_, lean_object* v_heq_619_, lean_object* v_i_620_, lean_object* v_entries_621_){
_start:
{
size_t v_depth_boxed_622_; lean_object* v_res_623_; 
v_depth_boxed_622_ = lean_unbox_usize(v_depth_616_);
lean_dec(v_depth_616_);
v_res_623_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_615_, v_depth_boxed_622_, v_keys_617_, v_vals_618_, v_heq_619_, v_i_620_, v_entries_621_);
lean_dec_ref(v_vals_618_);
lean_dec_ref(v_keys_617_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_624_, lean_object* v_x_625_, lean_object* v_x_626_, lean_object* v_x_627_, lean_object* v_x_628_){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_x_625_, v_x_626_, v_x_627_, v_x_628_);
return v___x_629_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(lean_object* v_opts_630_, lean_object* v_opt_631_){
_start:
{
lean_object* v_name_632_; lean_object* v_defValue_633_; lean_object* v_map_634_; lean_object* v___x_635_; 
v_name_632_ = lean_ctor_get(v_opt_631_, 0);
v_defValue_633_ = lean_ctor_get(v_opt_631_, 1);
v_map_634_ = lean_ctor_get(v_opts_630_, 0);
v___x_635_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_634_, v_name_632_);
if (lean_obj_tag(v___x_635_) == 0)
{
uint8_t v___x_636_; 
v___x_636_ = lean_unbox(v_defValue_633_);
return v___x_636_;
}
else
{
lean_object* v_val_637_; 
v_val_637_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_val_637_);
lean_dec_ref(v___x_635_);
if (lean_obj_tag(v_val_637_) == 1)
{
uint8_t v_v_638_; 
v_v_638_ = lean_ctor_get_uint8(v_val_637_, 0);
lean_dec_ref(v_val_637_);
return v_v_638_;
}
else
{
uint8_t v___x_639_; 
lean_dec(v_val_637_);
v___x_639_ = lean_unbox(v_defValue_633_);
return v___x_639_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0___boxed(lean_object* v_opts_640_, lean_object* v_opt_641_){
_start:
{
uint8_t v_res_642_; lean_object* v_r_643_; 
v_res_642_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_opts_640_, v_opt_641_);
lean_dec_ref(v_opt_641_);
lean_dec_ref(v_opts_640_);
v_r_643_ = lean_box(v_res_642_);
return v_r_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg(lean_object* v_kind_644_, lean_object* v___y_645_){
_start:
{
lean_object* v___x_647_; lean_object* v_auxDeclNGen_648_; lean_object* v___x_649_; lean_object* v_env_650_; lean_object* v___x_651_; lean_object* v_fst_652_; lean_object* v_snd_653_; lean_object* v___x_654_; lean_object* v_env_655_; lean_object* v_nextMacroScope_656_; lean_object* v_ngen_657_; lean_object* v_traceState_658_; lean_object* v_cache_659_; lean_object* v_messages_660_; lean_object* v_infoState_661_; lean_object* v_snapshotTasks_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_671_; 
v___x_647_ = lean_st_ref_get(v___y_645_);
v_auxDeclNGen_648_ = lean_ctor_get(v___x_647_, 3);
lean_inc_ref(v_auxDeclNGen_648_);
lean_dec(v___x_647_);
v___x_649_ = lean_st_ref_get(v___y_645_);
v_env_650_ = lean_ctor_get(v___x_649_, 0);
lean_inc_ref(v_env_650_);
lean_dec(v___x_649_);
v___x_651_ = l_Lean_DeclNameGenerator_mkUniqueName(v_env_650_, v_auxDeclNGen_648_, v_kind_644_);
v_fst_652_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_fst_652_);
v_snd_653_ = lean_ctor_get(v___x_651_, 1);
lean_inc(v_snd_653_);
lean_dec_ref(v___x_651_);
v___x_654_ = lean_st_ref_take(v___y_645_);
v_env_655_ = lean_ctor_get(v___x_654_, 0);
v_nextMacroScope_656_ = lean_ctor_get(v___x_654_, 1);
v_ngen_657_ = lean_ctor_get(v___x_654_, 2);
v_traceState_658_ = lean_ctor_get(v___x_654_, 4);
v_cache_659_ = lean_ctor_get(v___x_654_, 5);
v_messages_660_ = lean_ctor_get(v___x_654_, 6);
v_infoState_661_ = lean_ctor_get(v___x_654_, 7);
v_snapshotTasks_662_ = lean_ctor_get(v___x_654_, 8);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_671_ == 0)
{
lean_object* v_unused_672_; 
v_unused_672_ = lean_ctor_get(v___x_654_, 3);
lean_dec(v_unused_672_);
v___x_664_ = v___x_654_;
v_isShared_665_ = v_isSharedCheck_671_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_snapshotTasks_662_);
lean_inc(v_infoState_661_);
lean_inc(v_messages_660_);
lean_inc(v_cache_659_);
lean_inc(v_traceState_658_);
lean_inc(v_ngen_657_);
lean_inc(v_nextMacroScope_656_);
lean_inc(v_env_655_);
lean_dec(v___x_654_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_671_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 3, v_snd_653_);
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_env_655_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v_nextMacroScope_656_);
lean_ctor_set(v_reuseFailAlloc_670_, 2, v_ngen_657_);
lean_ctor_set(v_reuseFailAlloc_670_, 3, v_snd_653_);
lean_ctor_set(v_reuseFailAlloc_670_, 4, v_traceState_658_);
lean_ctor_set(v_reuseFailAlloc_670_, 5, v_cache_659_);
lean_ctor_set(v_reuseFailAlloc_670_, 6, v_messages_660_);
lean_ctor_set(v_reuseFailAlloc_670_, 7, v_infoState_661_);
lean_ctor_set(v_reuseFailAlloc_670_, 8, v_snapshotTasks_662_);
v___x_667_ = v_reuseFailAlloc_670_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_st_ref_set(v___y_645_, v___x_667_);
v___x_669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_669_, 0, v_fst_652_);
return v___x_669_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg___boxed(lean_object* v_kind_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg(v_kind_673_, v___y_674_);
lean_dec(v___y_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1(lean_object* v_kind_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg(v_kind_677_, v___y_681_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___boxed(lean_object* v_kind_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1(v_kind_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
return v_res_690_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_691_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_692_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__0);
v___x_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
return v___x_693_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__1);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
return v___x_695_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__1);
v___x_697_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
lean_ctor_set(v___x_697_, 2, v___x_696_);
lean_ctor_set(v___x_697_, 3, v___x_696_);
lean_ctor_set(v___x_697_, 4, v___x_696_);
lean_ctor_set(v___x_697_, 5, v___x_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg(lean_object* v_declName_698_, uint8_t v_s_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v___x_703_; lean_object* v_env_704_; lean_object* v_nextMacroScope_705_; lean_object* v_ngen_706_; lean_object* v_auxDeclNGen_707_; lean_object* v_traceState_708_; lean_object* v_messages_709_; lean_object* v_infoState_710_; lean_object* v_snapshotTasks_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_740_; 
v___x_703_ = lean_st_ref_take(v___y_701_);
v_env_704_ = lean_ctor_get(v___x_703_, 0);
v_nextMacroScope_705_ = lean_ctor_get(v___x_703_, 1);
v_ngen_706_ = lean_ctor_get(v___x_703_, 2);
v_auxDeclNGen_707_ = lean_ctor_get(v___x_703_, 3);
v_traceState_708_ = lean_ctor_get(v___x_703_, 4);
v_messages_709_ = lean_ctor_get(v___x_703_, 6);
v_infoState_710_ = lean_ctor_get(v___x_703_, 7);
v_snapshotTasks_711_ = lean_ctor_get(v___x_703_, 8);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_740_ == 0)
{
lean_object* v_unused_741_; 
v_unused_741_ = lean_ctor_get(v___x_703_, 5);
lean_dec(v_unused_741_);
v___x_713_ = v___x_703_;
v_isShared_714_ = v_isSharedCheck_740_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_snapshotTasks_711_);
lean_inc(v_infoState_710_);
lean_inc(v_messages_709_);
lean_inc(v_traceState_708_);
lean_inc(v_auxDeclNGen_707_);
lean_inc(v_ngen_706_);
lean_inc(v_nextMacroScope_705_);
lean_inc(v_env_704_);
lean_dec(v___x_703_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_740_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
uint8_t v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_720_; 
v___x_715_ = 0;
v___x_716_ = lean_box(0);
v___x_717_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_704_, v_declName_698_, v_s_699_, v___x_715_, v___x_716_);
v___x_718_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 5, v___x_718_);
lean_ctor_set(v___x_713_, 0, v___x_717_);
v___x_720_ = v___x_713_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v___x_717_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v_nextMacroScope_705_);
lean_ctor_set(v_reuseFailAlloc_739_, 2, v_ngen_706_);
lean_ctor_set(v_reuseFailAlloc_739_, 3, v_auxDeclNGen_707_);
lean_ctor_set(v_reuseFailAlloc_739_, 4, v_traceState_708_);
lean_ctor_set(v_reuseFailAlloc_739_, 5, v___x_718_);
lean_ctor_set(v_reuseFailAlloc_739_, 6, v_messages_709_);
lean_ctor_set(v_reuseFailAlloc_739_, 7, v_infoState_710_);
lean_ctor_set(v_reuseFailAlloc_739_, 8, v_snapshotTasks_711_);
v___x_720_ = v_reuseFailAlloc_739_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v_mctx_723_; lean_object* v_zetaDeltaFVarIds_724_; lean_object* v_postponed_725_; lean_object* v_diag_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_737_; 
v___x_721_ = lean_st_ref_set(v___y_701_, v___x_720_);
v___x_722_ = lean_st_ref_take(v___y_700_);
v_mctx_723_ = lean_ctor_get(v___x_722_, 0);
v_zetaDeltaFVarIds_724_ = lean_ctor_get(v___x_722_, 2);
v_postponed_725_ = lean_ctor_get(v___x_722_, 3);
v_diag_726_ = lean_ctor_get(v___x_722_, 4);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_737_ == 0)
{
lean_object* v_unused_738_; 
v_unused_738_ = lean_ctor_get(v___x_722_, 1);
lean_dec(v_unused_738_);
v___x_728_ = v___x_722_;
v_isShared_729_ = v_isSharedCheck_737_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_diag_726_);
lean_inc(v_postponed_725_);
lean_inc(v_zetaDeltaFVarIds_724_);
lean_inc(v_mctx_723_);
lean_dec(v___x_722_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_737_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_730_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 1, v___x_730_);
v___x_732_ = v___x_728_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_mctx_723_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_736_, 2, v_zetaDeltaFVarIds_724_);
lean_ctor_set(v_reuseFailAlloc_736_, 3, v_postponed_725_);
lean_ctor_set(v_reuseFailAlloc_736_, 4, v_diag_726_);
v___x_732_ = v_reuseFailAlloc_736_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_733_ = lean_st_ref_set(v___y_700_, v___x_732_);
v___x_734_ = lean_box(0);
v___x_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
return v___x_735_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___boxed(lean_object* v_declName_742_, lean_object* v_s_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_){
_start:
{
uint8_t v_s_boxed_747_; lean_object* v_res_748_; 
v_s_boxed_747_ = lean_unbox(v_s_743_);
v_res_748_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg(v_declName_742_, v_s_boxed_747_, v___y_744_, v___y_745_);
lean_dec(v___y_745_);
lean_dec(v___y_744_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2(lean_object* v_declName_749_, uint8_t v_s_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg(v_declName_749_, v_s_750_, v___y_752_, v___y_754_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___boxed(lean_object* v_declName_757_, lean_object* v_s_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_){
_start:
{
uint8_t v_s_boxed_764_; lean_object* v_res_765_; 
v_s_boxed_764_ = lean_unbox(v_s_758_);
v_res_765_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2(v_declName_757_, v_s_boxed_764_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
lean_dec(v___y_760_);
lean_dec_ref(v___y_759_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(lean_object* v_cls_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_options_772_; uint8_t v_hasTrace_773_; 
v_options_772_ = lean_ctor_get(v___y_770_, 2);
v_hasTrace_773_ = lean_ctor_get_uint8(v_options_772_, sizeof(void*)*1);
if (v_hasTrace_773_ == 0)
{
lean_object* v___x_774_; lean_object* v___x_775_; 
lean_dec(v_cls_769_);
v___x_774_ = lean_box(v_hasTrace_773_);
v___x_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
return v___x_775_;
}
else
{
lean_object* v_inheritedTraceOptions_776_; lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v_inheritedTraceOptions_776_ = lean_ctor_get(v___y_770_, 13);
v___x_777_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg___closed__1));
v___x_778_ = l_Lean_Name_append(v___x_777_, v_cls_769_);
v___x_779_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_776_, v_options_772_, v___x_778_);
lean_dec(v___x_778_);
v___x_780_ = lean_box(v___x_779_);
v___x_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
return v___x_781_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg___boxed(lean_object* v_cls_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_782_, v___y_783_);
lean_dec_ref(v___y_783_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3(lean_object* v_cls_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_786_, v___y_789_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___boxed(lean_object* v_cls_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3(v_cls_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
return v_res_799_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_800_ = lean_unsigned_to_nat(32u);
v___x_801_ = lean_mk_empty_array_with_capacity(v___x_800_);
v___x_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
return v___x_802_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__1(void){
_start:
{
size_t v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_803_ = ((size_t)5ULL);
v___x_804_ = lean_unsigned_to_nat(0u);
v___x_805_ = lean_unsigned_to_nat(32u);
v___x_806_ = lean_mk_empty_array_with_capacity(v___x_805_);
v___x_807_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__0);
v___x_808_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_808_, 0, v___x_807_);
lean_ctor_set(v___x_808_, 1, v___x_806_);
lean_ctor_set(v___x_808_, 2, v___x_804_);
lean_ctor_set(v___x_808_, 3, v___x_804_);
lean_ctor_set_usize(v___x_808_, 4, v___x_803_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg(lean_object* v___y_809_){
_start:
{
lean_object* v___x_811_; lean_object* v_traceState_812_; lean_object* v_traces_813_; lean_object* v___x_814_; lean_object* v_traceState_815_; lean_object* v_env_816_; lean_object* v_nextMacroScope_817_; lean_object* v_ngen_818_; lean_object* v_auxDeclNGen_819_; lean_object* v_cache_820_; lean_object* v_messages_821_; lean_object* v_infoState_822_; lean_object* v_snapshotTasks_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_842_; 
v___x_811_ = lean_st_ref_get(v___y_809_);
v_traceState_812_ = lean_ctor_get(v___x_811_, 4);
lean_inc_ref(v_traceState_812_);
lean_dec(v___x_811_);
v_traces_813_ = lean_ctor_get(v_traceState_812_, 0);
lean_inc_ref(v_traces_813_);
lean_dec_ref(v_traceState_812_);
v___x_814_ = lean_st_ref_take(v___y_809_);
v_traceState_815_ = lean_ctor_get(v___x_814_, 4);
v_env_816_ = lean_ctor_get(v___x_814_, 0);
v_nextMacroScope_817_ = lean_ctor_get(v___x_814_, 1);
v_ngen_818_ = lean_ctor_get(v___x_814_, 2);
v_auxDeclNGen_819_ = lean_ctor_get(v___x_814_, 3);
v_cache_820_ = lean_ctor_get(v___x_814_, 5);
v_messages_821_ = lean_ctor_get(v___x_814_, 6);
v_infoState_822_ = lean_ctor_get(v___x_814_, 7);
v_snapshotTasks_823_ = lean_ctor_get(v___x_814_, 8);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_842_ == 0)
{
v___x_825_ = v___x_814_;
v_isShared_826_ = v_isSharedCheck_842_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_snapshotTasks_823_);
lean_inc(v_infoState_822_);
lean_inc(v_messages_821_);
lean_inc(v_cache_820_);
lean_inc(v_traceState_815_);
lean_inc(v_auxDeclNGen_819_);
lean_inc(v_ngen_818_);
lean_inc(v_nextMacroScope_817_);
lean_inc(v_env_816_);
lean_dec(v___x_814_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_842_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
uint64_t v_tid_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_840_; 
v_tid_827_ = lean_ctor_get_uint64(v_traceState_815_, sizeof(void*)*1);
v_isSharedCheck_840_ = !lean_is_exclusive(v_traceState_815_);
if (v_isSharedCheck_840_ == 0)
{
lean_object* v_unused_841_; 
v_unused_841_ = lean_ctor_get(v_traceState_815_, 0);
lean_dec(v_unused_841_);
v___x_829_ = v_traceState_815_;
v_isShared_830_ = v_isSharedCheck_840_;
goto v_resetjp_828_;
}
else
{
lean_dec(v_traceState_815_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_840_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_831_; lean_object* v___x_833_; 
v___x_831_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___closed__1);
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 0, v___x_831_);
v___x_833_ = v___x_829_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_831_);
lean_ctor_set_uint64(v_reuseFailAlloc_839_, sizeof(void*)*1, v_tid_827_);
v___x_833_ = v_reuseFailAlloc_839_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
lean_object* v___x_835_; 
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 4, v___x_833_);
v___x_835_ = v___x_825_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_env_816_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v_nextMacroScope_817_);
lean_ctor_set(v_reuseFailAlloc_838_, 2, v_ngen_818_);
lean_ctor_set(v_reuseFailAlloc_838_, 3, v_auxDeclNGen_819_);
lean_ctor_set(v_reuseFailAlloc_838_, 4, v___x_833_);
lean_ctor_set(v_reuseFailAlloc_838_, 5, v_cache_820_);
lean_ctor_set(v_reuseFailAlloc_838_, 6, v_messages_821_);
lean_ctor_set(v_reuseFailAlloc_838_, 7, v_infoState_822_);
lean_ctor_set(v_reuseFailAlloc_838_, 8, v_snapshotTasks_823_);
v___x_835_ = v_reuseFailAlloc_838_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_st_ref_set(v___y_809_, v___x_835_);
v___x_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_837_, 0, v_traces_813_);
return v___x_837_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg___boxed(lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg(v___y_843_);
lean_dec(v___y_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11(lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg(v___y_849_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___boxed(lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11(v___y_852_, v___y_853_, v___y_854_, v___y_855_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
return v_res_857_;
}
}
static lean_object* _init_l_Lean_Meta_normalizeInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = ((lean_object*)(l_Lean_Meta_normalizeInstance___lam__0___closed__0));
v___x_860_ = l_Lean_stringToMessageData(v___x_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__0(lean_object* v_expectedType_861_, lean_object* v_x_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_868_ = lean_obj_once(&l_Lean_Meta_normalizeInstance___lam__0___closed__1, &l_Lean_Meta_normalizeInstance___lam__0___closed__1_once, _init_l_Lean_Meta_normalizeInstance___lam__0___closed__1);
v___x_869_ = l_Lean_MessageData_ofExpr(v_expectedType_861_);
v___x_870_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_870_, 0, v___x_868_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
v___x_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__0___boxed(lean_object* v_expectedType_872_, lean_object* v_x_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lean_Meta_normalizeInstance___lam__0(v_expectedType_872_, v_x_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec(v___y_875_);
lean_dec_ref(v___y_874_);
lean_dec_ref(v_x_873_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4_spec__4(lean_object* v_msgData_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
lean_object* v___x_886_; lean_object* v_env_887_; lean_object* v___x_888_; lean_object* v_mctx_889_; lean_object* v_lctx_890_; lean_object* v_options_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_886_ = lean_st_ref_get(v___y_884_);
v_env_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc_ref(v_env_887_);
lean_dec(v___x_886_);
v___x_888_ = lean_st_ref_get(v___y_882_);
v_mctx_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc_ref(v_mctx_889_);
lean_dec(v___x_888_);
v_lctx_890_ = lean_ctor_get(v___y_881_, 2);
v_options_891_ = lean_ctor_get(v___y_883_, 2);
lean_inc_ref(v_options_891_);
lean_inc_ref(v_lctx_890_);
v___x_892_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_892_, 0, v_env_887_);
lean_ctor_set(v___x_892_, 1, v_mctx_889_);
lean_ctor_set(v___x_892_, 2, v_lctx_890_);
lean_ctor_set(v___x_892_, 3, v_options_891_);
v___x_893_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_893_, 0, v___x_892_);
lean_ctor_set(v___x_893_, 1, v_msgData_880_);
v___x_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_894_, 0, v___x_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4_spec__4___boxed(lean_object* v_msgData_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4_spec__4(v_msgData_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg(lean_object* v_msg_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
lean_object* v_ref_908_; lean_object* v___x_909_; lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_918_; 
v_ref_908_ = lean_ctor_get(v___y_905_, 5);
v___x_909_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4_spec__4(v_msg_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
v_a_910_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_918_ == 0)
{
v___x_912_ = v___x_909_;
v_isShared_913_ = v_isSharedCheck_918_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_909_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_918_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_914_; lean_object* v___x_916_; 
lean_inc(v_ref_908_);
v___x_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_914_, 0, v_ref_908_);
lean_ctor_set(v___x_914_, 1, v_a_910_);
if (v_isShared_913_ == 0)
{
lean_ctor_set_tag(v___x_912_, 1);
lean_ctor_set(v___x_912_, 0, v___x_914_);
v___x_916_ = v___x_912_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_914_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg___boxed(lean_object* v_msg_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg(v_msg_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6___redArg(size_t v_sz_926_, size_t v_i_927_, lean_object* v_bs_928_, lean_object* v___y_929_){
_start:
{
uint8_t v___x_931_; 
v___x_931_ = lean_usize_dec_lt(v_i_927_, v_sz_926_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; 
v___x_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_932_, 0, v_bs_928_);
return v___x_932_;
}
else
{
lean_object* v_v_933_; lean_object* v___x_934_; 
v_v_933_ = lean_array_uget_borrowed(v_bs_928_, v_i_927_);
lean_inc(v_v_933_);
v___x_934_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___redArg(v_v_933_, v___y_929_);
if (lean_obj_tag(v___x_934_) == 0)
{
lean_object* v_a_935_; lean_object* v___x_936_; lean_object* v_bs_x27_937_; size_t v___x_938_; size_t v___x_939_; lean_object* v___x_940_; 
v_a_935_ = lean_ctor_get(v___x_934_, 0);
lean_inc(v_a_935_);
lean_dec_ref(v___x_934_);
v___x_936_ = lean_unsigned_to_nat(0u);
v_bs_x27_937_ = lean_array_uset(v_bs_928_, v_i_927_, v___x_936_);
v___x_938_ = ((size_t)1ULL);
v___x_939_ = lean_usize_add(v_i_927_, v___x_938_);
v___x_940_ = lean_array_uset(v_bs_x27_937_, v_i_927_, v_a_935_);
v_i_927_ = v___x_939_;
v_bs_928_ = v___x_940_;
goto _start;
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
lean_dec_ref(v_bs_928_);
v_a_942_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_934_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_934_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6___redArg___boxed(lean_object* v_sz_950_, lean_object* v_i_951_, lean_object* v_bs_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
size_t v_sz_boxed_955_; size_t v_i_boxed_956_; lean_object* v_res_957_; 
v_sz_boxed_955_ = lean_unbox_usize(v_sz_950_);
lean_dec(v_sz_950_);
v_i_boxed_956_ = lean_unbox_usize(v_i_951_);
lean_dec(v_i_951_);
v_res_957_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6___redArg(v_sz_boxed_955_, v_i_boxed_956_, v_bs_952_, v___y_953_);
lean_dec(v___y_953_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25___redArg(lean_object* v_ref_958_, lean_object* v_msg_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_fileName_965_; lean_object* v_fileMap_966_; lean_object* v_options_967_; lean_object* v_currRecDepth_968_; lean_object* v_maxRecDepth_969_; lean_object* v_ref_970_; lean_object* v_currNamespace_971_; lean_object* v_openDecls_972_; lean_object* v_initHeartbeats_973_; lean_object* v_maxHeartbeats_974_; lean_object* v_quotContext_975_; lean_object* v_currMacroScope_976_; uint8_t v_diag_977_; lean_object* v_cancelTk_x3f_978_; uint8_t v_suppressElabErrors_979_; lean_object* v_inheritedTraceOptions_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_989_; 
v_fileName_965_ = lean_ctor_get(v___y_962_, 0);
v_fileMap_966_ = lean_ctor_get(v___y_962_, 1);
v_options_967_ = lean_ctor_get(v___y_962_, 2);
v_currRecDepth_968_ = lean_ctor_get(v___y_962_, 3);
v_maxRecDepth_969_ = lean_ctor_get(v___y_962_, 4);
v_ref_970_ = lean_ctor_get(v___y_962_, 5);
v_currNamespace_971_ = lean_ctor_get(v___y_962_, 6);
v_openDecls_972_ = lean_ctor_get(v___y_962_, 7);
v_initHeartbeats_973_ = lean_ctor_get(v___y_962_, 8);
v_maxHeartbeats_974_ = lean_ctor_get(v___y_962_, 9);
v_quotContext_975_ = lean_ctor_get(v___y_962_, 10);
v_currMacroScope_976_ = lean_ctor_get(v___y_962_, 11);
v_diag_977_ = lean_ctor_get_uint8(v___y_962_, sizeof(void*)*14);
v_cancelTk_x3f_978_ = lean_ctor_get(v___y_962_, 12);
v_suppressElabErrors_979_ = lean_ctor_get_uint8(v___y_962_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_980_ = lean_ctor_get(v___y_962_, 13);
v_isSharedCheck_989_ = !lean_is_exclusive(v___y_962_);
if (v_isSharedCheck_989_ == 0)
{
v___x_982_ = v___y_962_;
v_isShared_983_ = v_isSharedCheck_989_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_inheritedTraceOptions_980_);
lean_inc(v_cancelTk_x3f_978_);
lean_inc(v_currMacroScope_976_);
lean_inc(v_quotContext_975_);
lean_inc(v_maxHeartbeats_974_);
lean_inc(v_initHeartbeats_973_);
lean_inc(v_openDecls_972_);
lean_inc(v_currNamespace_971_);
lean_inc(v_ref_970_);
lean_inc(v_maxRecDepth_969_);
lean_inc(v_currRecDepth_968_);
lean_inc(v_options_967_);
lean_inc(v_fileMap_966_);
lean_inc(v_fileName_965_);
lean_dec(v___y_962_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_989_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v_ref_984_; lean_object* v___x_986_; 
v_ref_984_ = l_Lean_replaceRef(v_ref_958_, v_ref_970_);
lean_dec(v_ref_970_);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 5, v_ref_984_);
v___x_986_ = v___x_982_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_fileName_965_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v_fileMap_966_);
lean_ctor_set(v_reuseFailAlloc_988_, 2, v_options_967_);
lean_ctor_set(v_reuseFailAlloc_988_, 3, v_currRecDepth_968_);
lean_ctor_set(v_reuseFailAlloc_988_, 4, v_maxRecDepth_969_);
lean_ctor_set(v_reuseFailAlloc_988_, 5, v_ref_984_);
lean_ctor_set(v_reuseFailAlloc_988_, 6, v_currNamespace_971_);
lean_ctor_set(v_reuseFailAlloc_988_, 7, v_openDecls_972_);
lean_ctor_set(v_reuseFailAlloc_988_, 8, v_initHeartbeats_973_);
lean_ctor_set(v_reuseFailAlloc_988_, 9, v_maxHeartbeats_974_);
lean_ctor_set(v_reuseFailAlloc_988_, 10, v_quotContext_975_);
lean_ctor_set(v_reuseFailAlloc_988_, 11, v_currMacroScope_976_);
lean_ctor_set(v_reuseFailAlloc_988_, 12, v_cancelTk_x3f_978_);
lean_ctor_set(v_reuseFailAlloc_988_, 13, v_inheritedTraceOptions_980_);
lean_ctor_set_uint8(v_reuseFailAlloc_988_, sizeof(void*)*14, v_diag_977_);
lean_ctor_set_uint8(v_reuseFailAlloc_988_, sizeof(void*)*14 + 1, v_suppressElabErrors_979_);
v___x_986_ = v_reuseFailAlloc_988_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
lean_object* v___x_987_; 
v___x_987_ = l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg(v_msg_959_, v___y_960_, v___y_961_, v___x_986_, v___y_963_);
lean_dec_ref(v___x_986_);
return v___x_987_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25___redArg___boxed(lean_object* v_ref_990_, lean_object* v_msg_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25___redArg(v_ref_990_, v_msg_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
lean_dec(v___y_995_);
lean_dec(v___y_993_);
lean_dec_ref(v___y_992_);
lean_dec(v_ref_990_);
return v_res_997_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__0(void){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_998_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__1(void){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__0);
v___x_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
return v___x_1000_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__2(void){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1001_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__1);
v___x_1002_ = lean_unsigned_to_nat(0u);
v___x_1003_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1002_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
lean_ctor_set(v___x_1003_, 2, v___x_1002_);
lean_ctor_set(v___x_1003_, 3, v___x_1001_);
lean_ctor_set(v___x_1003_, 4, v___x_1001_);
lean_ctor_set(v___x_1003_, 5, v___x_1001_);
lean_ctor_set(v___x_1003_, 6, v___x_1001_);
lean_ctor_set(v___x_1003_, 7, v___x_1001_);
lean_ctor_set(v___x_1003_, 8, v___x_1001_);
return v___x_1003_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__3(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1004_ = lean_unsigned_to_nat(32u);
v___x_1005_ = lean_mk_empty_array_with_capacity(v___x_1004_);
v___x_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
return v___x_1006_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__4(void){
_start:
{
size_t v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1007_ = ((size_t)5ULL);
v___x_1008_ = lean_unsigned_to_nat(0u);
v___x_1009_ = lean_unsigned_to_nat(32u);
v___x_1010_ = lean_mk_empty_array_with_capacity(v___x_1009_);
v___x_1011_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__3);
v___x_1012_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
lean_ctor_set(v___x_1012_, 1, v___x_1010_);
lean_ctor_set(v___x_1012_, 2, v___x_1008_);
lean_ctor_set(v___x_1012_, 3, v___x_1008_);
lean_ctor_set_usize(v___x_1012_, 4, v___x_1007_);
return v___x_1012_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__5(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1013_ = lean_box(1);
v___x_1014_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__4);
v___x_1015_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__1);
v___x_1016_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
lean_ctor_set(v___x_1016_, 1, v___x_1014_);
lean_ctor_set(v___x_1016_, 2, v___x_1013_);
return v___x_1016_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__7(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__6));
v___x_1019_ = l_Lean_stringToMessageData(v___x_1018_);
return v___x_1019_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__9(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__8));
v___x_1022_ = l_Lean_stringToMessageData(v___x_1021_);
return v___x_1022_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__11(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__10));
v___x_1025_ = l_Lean_stringToMessageData(v___x_1024_);
return v___x_1025_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__13(void){
_start:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1027_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__12));
v___x_1028_ = l_Lean_stringToMessageData(v___x_1027_);
return v___x_1028_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__15(void){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__14));
v___x_1031_ = l_Lean_stringToMessageData(v___x_1030_);
return v___x_1031_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__17(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__16));
v___x_1034_ = l_Lean_stringToMessageData(v___x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__19(void){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__18));
v___x_1037_ = l_Lean_stringToMessageData(v___x_1036_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg(lean_object* v_msg_1038_, lean_object* v_declHint_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v___x_1042_; lean_object* v_env_1043_; uint8_t v___x_1044_; 
v___x_1042_ = lean_st_ref_get(v___y_1040_);
v_env_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc_ref(v_env_1043_);
lean_dec(v___x_1042_);
v___x_1044_ = l_Lean_Name_isAnonymous(v_declHint_1039_);
if (v___x_1044_ == 0)
{
uint8_t v_isExporting_1045_; 
v_isExporting_1045_ = lean_ctor_get_uint8(v_env_1043_, sizeof(void*)*8);
if (v_isExporting_1045_ == 0)
{
lean_object* v___x_1046_; 
lean_dec_ref(v_env_1043_);
lean_dec(v_declHint_1039_);
v___x_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1046_, 0, v_msg_1038_);
return v___x_1046_;
}
else
{
lean_object* v___x_1047_; uint8_t v___x_1048_; 
lean_inc_ref(v_env_1043_);
v___x_1047_ = l_Lean_Environment_setExporting(v_env_1043_, v___x_1044_);
lean_inc(v_declHint_1039_);
lean_inc_ref(v___x_1047_);
v___x_1048_ = l_Lean_Environment_contains(v___x_1047_, v_declHint_1039_, v_isExporting_1045_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; 
lean_dec_ref(v___x_1047_);
lean_dec_ref(v_env_1043_);
lean_dec(v_declHint_1039_);
v___x_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1049_, 0, v_msg_1038_);
return v___x_1049_;
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v_c_1055_; lean_object* v___x_1056_; 
v___x_1050_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__2);
v___x_1051_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__5);
v___x_1052_ = l_Lean_Options_empty;
v___x_1053_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1047_);
lean_ctor_set(v___x_1053_, 1, v___x_1050_);
lean_ctor_set(v___x_1053_, 2, v___x_1051_);
lean_ctor_set(v___x_1053_, 3, v___x_1052_);
lean_inc(v_declHint_1039_);
v___x_1054_ = l_Lean_MessageData_ofConstName(v_declHint_1039_, v___x_1044_);
v_c_1055_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1055_, 0, v___x_1053_);
lean_ctor_set(v_c_1055_, 1, v___x_1054_);
v___x_1056_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1043_, v_declHint_1039_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
lean_dec_ref(v_env_1043_);
lean_dec(v_declHint_1039_);
v___x_1057_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__7);
v___x_1058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
lean_ctor_set(v___x_1058_, 1, v_c_1055_);
v___x_1059_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__9);
v___x_1060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1058_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = l_Lean_MessageData_note(v___x_1060_);
v___x_1062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1062_, 0, v_msg_1038_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
v___x_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
return v___x_1063_;
}
else
{
lean_object* v_val_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1099_; 
v_val_1064_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1066_ = v___x_1056_;
v_isShared_1067_ = v_isSharedCheck_1099_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_val_1064_);
lean_dec(v___x_1056_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1099_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v_mod_1071_; uint8_t v___x_1072_; 
v___x_1068_ = lean_box(0);
v___x_1069_ = l_Lean_Environment_header(v_env_1043_);
lean_dec_ref(v_env_1043_);
v___x_1070_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1069_);
v_mod_1071_ = lean_array_get(v___x_1068_, v___x_1070_, v_val_1064_);
lean_dec(v_val_1064_);
lean_dec_ref(v___x_1070_);
v___x_1072_ = l_Lean_isPrivateName(v_declHint_1039_);
lean_dec(v_declHint_1039_);
if (v___x_1072_ == 0)
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1084_; 
v___x_1073_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__11);
v___x_1074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
lean_ctor_set(v___x_1074_, 1, v_c_1055_);
v___x_1075_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__13);
v___x_1076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1074_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
v___x_1077_ = l_Lean_MessageData_ofName(v_mod_1071_);
v___x_1078_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1076_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__15);
v___x_1080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1078_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = l_Lean_MessageData_note(v___x_1080_);
v___x_1082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1082_, 0, v_msg_1038_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
if (v_isShared_1067_ == 0)
{
lean_ctor_set_tag(v___x_1066_, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1082_);
v___x_1084_ = v___x_1066_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1082_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
else
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___x_1086_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__7);
v___x_1087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
lean_ctor_set(v___x_1087_, 1, v_c_1055_);
v___x_1088_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__17);
v___x_1089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1087_);
lean_ctor_set(v___x_1089_, 1, v___x_1088_);
v___x_1090_ = l_Lean_MessageData_ofName(v_mod_1071_);
v___x_1091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___closed__19);
v___x_1093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = l_Lean_MessageData_note(v___x_1093_);
v___x_1095_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1095_, 0, v_msg_1038_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
if (v_isShared_1067_ == 0)
{
lean_ctor_set_tag(v___x_1066_, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1095_);
v___x_1097_ = v___x_1066_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1100_; 
lean_dec_ref(v_env_1043_);
lean_dec(v_declHint_1039_);
v___x_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1100_, 0, v_msg_1038_);
return v___x_1100_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg___boxed(lean_object* v_msg_1101_, lean_object* v_declHint_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg(v_msg_1101_, v_declHint_1102_, v___y_1103_);
lean_dec(v___y_1103_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24(lean_object* v_msg_1106_, lean_object* v_declHint_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v___x_1113_; lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1123_; 
v___x_1113_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg(v_msg_1106_, v_declHint_1107_, v___y_1111_);
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1116_ = v___x_1113_;
v_isShared_1117_ = v_isSharedCheck_1123_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1113_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1123_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1121_; 
v___x_1118_ = l_Lean_unknownIdentifierMessageTag;
v___x_1119_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1118_);
lean_ctor_set(v___x_1119_, 1, v_a_1114_);
if (v_isShared_1117_ == 0)
{
lean_ctor_set(v___x_1116_, 0, v___x_1119_);
v___x_1121_ = v___x_1116_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1119_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24___boxed(lean_object* v_msg_1124_, lean_object* v_declHint_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24(v_msg_1124_, v_declHint_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22___redArg(lean_object* v_ref_1132_, lean_object* v_msg_1133_, lean_object* v_declHint_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v___x_1140_; lean_object* v_a_1141_; lean_object* v___x_1142_; 
v___x_1140_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24(v_msg_1133_, v_declHint_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1141_);
lean_dec_ref(v___x_1140_);
v___x_1142_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25___redArg(v_ref_1132_, v_a_1141_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22___redArg___boxed(lean_object* v_ref_1143_, lean_object* v_msg_1144_, lean_object* v_declHint_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22___redArg(v_ref_1143_, v_msg_1144_, v_declHint_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
lean_dec(v___y_1149_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
lean_dec(v_ref_1143_);
return v_res_1151_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__0));
v___x_1154_ = l_Lean_stringToMessageData(v___x_1153_);
return v___x_1154_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__2));
v___x_1157_ = l_Lean_stringToMessageData(v___x_1156_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg(lean_object* v_ref_1158_, lean_object* v_constName_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v___x_1165_; uint8_t v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1165_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__1);
v___x_1166_ = 0;
lean_inc(v_constName_1159_);
v___x_1167_ = l_Lean_MessageData_ofConstName(v_constName_1159_, v___x_1166_);
v___x_1168_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1165_);
lean_ctor_set(v___x_1168_, 1, v___x_1167_);
v___x_1169_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3);
v___x_1170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1168_);
lean_ctor_set(v___x_1170_, 1, v___x_1169_);
v___x_1171_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22___redArg(v_ref_1158_, v___x_1170_, v_constName_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___boxed(lean_object* v_ref_1172_, lean_object* v_constName_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg(v_ref_1172_, v_constName_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
lean_dec(v___y_1177_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v_ref_1172_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6___redArg(lean_object* v_constName_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_ref_1186_; lean_object* v___x_1187_; 
v_ref_1186_ = lean_ctor_get(v___y_1183_, 5);
lean_inc(v_ref_1186_);
v___x_1187_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg(v_ref_1186_, v_constName_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_);
lean_dec(v_ref_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6___redArg___boxed(lean_object* v_constName_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6___redArg(v_constName_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
lean_dec(v___y_1192_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5(lean_object* v_constName_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___x_1201_; lean_object* v_env_1202_; uint8_t v___x_1203_; lean_object* v___x_1204_; 
v___x_1201_ = lean_st_ref_get(v___y_1199_);
v_env_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc_ref(v_env_1202_);
lean_dec(v___x_1201_);
v___x_1203_ = 0;
lean_inc(v_constName_1195_);
v___x_1204_ = l_Lean_Environment_find_x3f(v_env_1202_, v_constName_1195_, v___x_1203_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v___x_1205_; 
v___x_1205_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6___redArg(v_constName_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
return v___x_1205_;
}
else
{
lean_object* v_val_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_dec_ref(v___y_1198_);
lean_dec(v_constName_1195_);
v_val_1206_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___x_1204_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_val_1206_);
lean_dec(v___x_1204_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
lean_ctor_set_tag(v___x_1208_, 0);
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_val_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5___boxed(lean_object* v_constName_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5(v_constName_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_);
lean_dec(v___y_1218_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__2(lean_object* v___x_1221_, lean_object* v_a_1222_, lean_object* v_____r_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v___x_1229_; 
v___x_1229_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_1221_, v_a_1222_, v___y_1225_);
if (lean_obj_tag(v___x_1229_) == 0)
{
lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1237_; 
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1229_);
if (v_isSharedCheck_1237_ == 0)
{
lean_object* v_unused_1238_; 
v_unused_1238_ = lean_ctor_get(v___x_1229_, 0);
lean_dec(v_unused_1238_);
v___x_1231_ = v___x_1229_;
v_isShared_1232_ = v_isSharedCheck_1237_;
goto v_resetjp_1230_;
}
else
{
lean_dec(v___x_1229_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1237_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1233_; lean_object* v___x_1235_; 
v___x_1233_ = lean_box(0);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 0, v___x_1233_);
v___x_1235_ = v___x_1231_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1233_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
else
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1246_; 
v_a_1239_ = lean_ctor_get(v___x_1229_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1229_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1241_ = v___x_1229_;
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1229_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1244_; 
if (v_isShared_1242_ == 0)
{
v___x_1244_ = v___x_1241_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_a_1239_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__2___boxed(lean_object* v___x_1247_, lean_object* v_a_1248_, lean_object* v_____r_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v_res_1255_; 
v_res_1255_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__2(v___x_1247_, v_a_1248_, v_____r_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__0(lean_object* v_a_1256_, lean_object* v___x_1257_, uint8_t v_compile_1258_, uint8_t v_logCompileErrors_1259_, lean_object* v_____r_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
if (v_compile_1258_ == 0)
{
goto v___jp_1266_;
}
else
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1285_ = lean_unsigned_to_nat(1u);
v___x_1286_ = lean_mk_empty_array_with_capacity(v___x_1285_);
lean_inc(v_a_1256_);
v___x_1287_ = lean_array_push(v___x_1286_, v_a_1256_);
lean_inc(v___y_1264_);
lean_inc_ref(v___y_1263_);
v___x_1288_ = l_Lean_compileDecls(v___x_1287_, v_logCompileErrors_1259_, v___y_1263_, v___y_1264_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_dec_ref(v___x_1288_);
goto v___jp_1266_;
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec(v_a_1256_);
v_a_1289_ = lean_ctor_get(v___x_1288_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1288_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1288_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1288_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
v___jp_1266_:
{
lean_object* v___x_1267_; 
v___x_1267_ = l_Lean_enableRealizationsForConst(v_a_1256_, v___y_1263_, v___y_1264_);
lean_dec(v___y_1264_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1275_; 
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1275_ == 0)
{
lean_object* v_unused_1276_; 
v_unused_1276_ = lean_ctor_get(v___x_1267_, 0);
lean_dec(v_unused_1276_);
v___x_1269_ = v___x_1267_;
v_isShared_1270_ = v_isSharedCheck_1275_;
goto v_resetjp_1268_;
}
else
{
lean_dec(v___x_1267_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1275_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1271_; lean_object* v___x_1273_; 
v___x_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1257_);
if (v_isShared_1270_ == 0)
{
lean_ctor_set(v___x_1269_, 0, v___x_1271_);
v___x_1273_ = v___x_1269_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v___x_1271_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
else
{
lean_object* v_a_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1284_; 
v_a_1277_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1279_ = v___x_1267_;
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_a_1277_);
lean_dec(v___x_1267_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_a_1277_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__0___boxed(lean_object* v_a_1297_, lean_object* v___x_1298_, lean_object* v_compile_1299_, lean_object* v_logCompileErrors_1300_, lean_object* v_____r_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
uint8_t v_compile_boxed_1307_; uint8_t v_logCompileErrors_boxed_1308_; lean_object* v_res_1309_; 
v_compile_boxed_1307_ = lean_unbox(v_compile_1299_);
v_logCompileErrors_boxed_1308_ = lean_unbox(v_logCompileErrors_1300_);
v_res_1309_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__0(v_a_1297_, v___x_1298_, v_compile_boxed_1307_, v_logCompileErrors_boxed_1308_, v_____r_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
return v_res_1309_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1310_; double v___x_1311_; 
v___x_1310_ = lean_unsigned_to_nat(0u);
v___x_1311_ = lean_float_of_nat(v___x_1310_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(lean_object* v_cls_1315_, lean_object* v_msg_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v_ref_1322_; lean_object* v___x_1323_; lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1368_; 
v_ref_1322_ = lean_ctor_get(v___y_1319_, 5);
v___x_1323_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4_spec__4(v_msg_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_);
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1326_ = v___x_1323_;
v_isShared_1327_ = v_isSharedCheck_1368_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1323_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1368_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1328_; lean_object* v_traceState_1329_; lean_object* v_env_1330_; lean_object* v_nextMacroScope_1331_; lean_object* v_ngen_1332_; lean_object* v_auxDeclNGen_1333_; lean_object* v_cache_1334_; lean_object* v_messages_1335_; lean_object* v_infoState_1336_; lean_object* v_snapshotTasks_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1367_; 
v___x_1328_ = lean_st_ref_take(v___y_1320_);
v_traceState_1329_ = lean_ctor_get(v___x_1328_, 4);
v_env_1330_ = lean_ctor_get(v___x_1328_, 0);
v_nextMacroScope_1331_ = lean_ctor_get(v___x_1328_, 1);
v_ngen_1332_ = lean_ctor_get(v___x_1328_, 2);
v_auxDeclNGen_1333_ = lean_ctor_get(v___x_1328_, 3);
v_cache_1334_ = lean_ctor_get(v___x_1328_, 5);
v_messages_1335_ = lean_ctor_get(v___x_1328_, 6);
v_infoState_1336_ = lean_ctor_get(v___x_1328_, 7);
v_snapshotTasks_1337_ = lean_ctor_get(v___x_1328_, 8);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1339_ = v___x_1328_;
v_isShared_1340_ = v_isSharedCheck_1367_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_snapshotTasks_1337_);
lean_inc(v_infoState_1336_);
lean_inc(v_messages_1335_);
lean_inc(v_cache_1334_);
lean_inc(v_traceState_1329_);
lean_inc(v_auxDeclNGen_1333_);
lean_inc(v_ngen_1332_);
lean_inc(v_nextMacroScope_1331_);
lean_inc(v_env_1330_);
lean_dec(v___x_1328_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1367_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
uint64_t v_tid_1341_; lean_object* v_traces_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1366_; 
v_tid_1341_ = lean_ctor_get_uint64(v_traceState_1329_, sizeof(void*)*1);
v_traces_1342_ = lean_ctor_get(v_traceState_1329_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v_traceState_1329_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1344_ = v_traceState_1329_;
v_isShared_1345_ = v_isSharedCheck_1366_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_traces_1342_);
lean_dec(v_traceState_1329_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1366_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1346_; double v___x_1347_; uint8_t v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1356_; 
v___x_1346_ = lean_box(0);
v___x_1347_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__0, &l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__0);
v___x_1348_ = 0;
v___x_1349_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__1));
v___x_1350_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1350_, 0, v_cls_1315_);
lean_ctor_set(v___x_1350_, 1, v___x_1346_);
lean_ctor_set(v___x_1350_, 2, v___x_1349_);
lean_ctor_set_float(v___x_1350_, sizeof(void*)*3, v___x_1347_);
lean_ctor_set_float(v___x_1350_, sizeof(void*)*3 + 8, v___x_1347_);
lean_ctor_set_uint8(v___x_1350_, sizeof(void*)*3 + 16, v___x_1348_);
v___x_1351_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__2));
v___x_1352_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1350_);
lean_ctor_set(v___x_1352_, 1, v_a_1324_);
lean_ctor_set(v___x_1352_, 2, v___x_1351_);
lean_inc(v_ref_1322_);
v___x_1353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1353_, 0, v_ref_1322_);
lean_ctor_set(v___x_1353_, 1, v___x_1352_);
v___x_1354_ = l_Lean_PersistentArray_push___redArg(v_traces_1342_, v___x_1353_);
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 0, v___x_1354_);
v___x_1356_ = v___x_1344_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v___x_1354_);
lean_ctor_set_uint64(v_reuseFailAlloc_1365_, sizeof(void*)*1, v_tid_1341_);
v___x_1356_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
lean_object* v___x_1358_; 
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 4, v___x_1356_);
v___x_1358_ = v___x_1339_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_env_1330_);
lean_ctor_set(v_reuseFailAlloc_1364_, 1, v_nextMacroScope_1331_);
lean_ctor_set(v_reuseFailAlloc_1364_, 2, v_ngen_1332_);
lean_ctor_set(v_reuseFailAlloc_1364_, 3, v_auxDeclNGen_1333_);
lean_ctor_set(v_reuseFailAlloc_1364_, 4, v___x_1356_);
lean_ctor_set(v_reuseFailAlloc_1364_, 5, v_cache_1334_);
lean_ctor_set(v_reuseFailAlloc_1364_, 6, v_messages_1335_);
lean_ctor_set(v_reuseFailAlloc_1364_, 7, v_infoState_1336_);
lean_ctor_set(v_reuseFailAlloc_1364_, 8, v_snapshotTasks_1337_);
v___x_1358_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1362_; 
v___x_1359_ = lean_st_ref_set(v___y_1320_, v___x_1358_);
v___x_1360_ = lean_box(0);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 0, v___x_1360_);
v___x_1362_ = v___x_1326_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___boxed(lean_object* v_cls_1369_, lean_object* v_msg_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_1369_, v_msg_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__3(lean_object* v_a_1377_, lean_object* v___x_1378_, uint8_t v___x_1379_, lean_object* v___x_1380_, lean_object* v___x_1381_, lean_object* v_____r_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lean_box(0);
lean_inc(v___y_1384_);
v___x_1389_ = l_Lean_Meta_mkAuxTheorem(v_a_1377_, v___x_1378_, v___x_1379_, v___x_1388_, v___x_1379_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v_a_1390_; lean_object* v___x_1391_; 
v_a_1390_ = lean_ctor_get(v___x_1389_, 0);
lean_inc(v_a_1390_);
lean_dec_ref(v___x_1389_);
v___x_1391_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_1380_, v_a_1390_, v___y_1384_);
lean_dec(v___y_1384_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1399_; 
v_isSharedCheck_1399_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1399_ == 0)
{
lean_object* v_unused_1400_; 
v_unused_1400_ = lean_ctor_get(v___x_1391_, 0);
lean_dec(v_unused_1400_);
v___x_1393_ = v___x_1391_;
v_isShared_1394_ = v_isSharedCheck_1399_;
goto v_resetjp_1392_;
}
else
{
lean_dec(v___x_1391_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1399_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1395_; lean_object* v___x_1397_; 
v___x_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1381_);
if (v_isShared_1394_ == 0)
{
lean_ctor_set(v___x_1393_, 0, v___x_1395_);
v___x_1397_ = v___x_1393_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v___x_1395_);
v___x_1397_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
return v___x_1397_;
}
}
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
v_a_1401_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1391_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1391_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
v___x_1406_ = v___x_1403_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
}
else
{
lean_object* v_a_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
lean_dec(v___y_1384_);
lean_dec(v___x_1380_);
v_a_1409_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1411_ = v___x_1389_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_a_1409_);
lean_dec(v___x_1389_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_a_1409_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__3___boxed(lean_object* v_a_1417_, lean_object* v___x_1418_, lean_object* v___x_1419_, lean_object* v___x_1420_, lean_object* v___x_1421_, lean_object* v_____r_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
uint8_t v___x_109386__boxed_1428_; lean_object* v_res_1429_; 
v___x_109386__boxed_1428_ = lean_unbox(v___x_1419_);
v_res_1429_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__3(v_a_1417_, v___x_1418_, v___x_109386__boxed_1428_, v___x_1420_, v___x_1421_, v_____r_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_normalizeInstance_spec__9(lean_object* v_a_1430_, lean_object* v_a_1431_){
_start:
{
if (lean_obj_tag(v_a_1430_) == 0)
{
lean_object* v___x_1432_; 
v___x_1432_ = l_List_reverse___redArg(v_a_1431_);
return v___x_1432_;
}
else
{
lean_object* v_head_1433_; lean_object* v_tail_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1443_; 
v_head_1433_ = lean_ctor_get(v_a_1430_, 0);
v_tail_1434_ = lean_ctor_get(v_a_1430_, 1);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_a_1430_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1436_ = v_a_1430_;
v_isShared_1437_ = v_isSharedCheck_1443_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_tail_1434_);
lean_inc(v_head_1433_);
lean_dec(v_a_1430_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1443_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1438_; lean_object* v___x_1440_; 
v___x_1438_ = l_Lean_MessageData_ofExpr(v_head_1433_);
if (v_isShared_1437_ == 0)
{
lean_ctor_set(v___x_1436_, 1, v_a_1431_);
lean_ctor_set(v___x_1436_, 0, v___x_1438_);
v___x_1440_ = v___x_1436_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1438_);
lean_ctor_set(v_reuseFailAlloc_1442_, 1, v_a_1431_);
v___x_1440_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
v_a_1430_ = v_tail_1434_;
v_a_1431_ = v___x_1440_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19_spec__21(size_t v_sz_1444_, size_t v_i_1445_, lean_object* v_bs_1446_){
_start:
{
uint8_t v___x_1447_; 
v___x_1447_ = lean_usize_dec_lt(v_i_1445_, v_sz_1444_);
if (v___x_1447_ == 0)
{
return v_bs_1446_;
}
else
{
lean_object* v_v_1448_; lean_object* v_msg_1449_; lean_object* v___x_1450_; lean_object* v_bs_x27_1451_; size_t v___x_1452_; size_t v___x_1453_; lean_object* v___x_1454_; 
v_v_1448_ = lean_array_uget_borrowed(v_bs_1446_, v_i_1445_);
v_msg_1449_ = lean_ctor_get(v_v_1448_, 1);
lean_inc_ref(v_msg_1449_);
v___x_1450_ = lean_unsigned_to_nat(0u);
v_bs_x27_1451_ = lean_array_uset(v_bs_1446_, v_i_1445_, v___x_1450_);
v___x_1452_ = ((size_t)1ULL);
v___x_1453_ = lean_usize_add(v_i_1445_, v___x_1452_);
v___x_1454_ = lean_array_uset(v_bs_x27_1451_, v_i_1445_, v_msg_1449_);
v_i_1445_ = v___x_1453_;
v_bs_1446_ = v___x_1454_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19_spec__21___boxed(lean_object* v_sz_1456_, lean_object* v_i_1457_, lean_object* v_bs_1458_){
_start:
{
size_t v_sz_boxed_1459_; size_t v_i_boxed_1460_; lean_object* v_res_1461_; 
v_sz_boxed_1459_ = lean_unbox_usize(v_sz_1456_);
lean_dec(v_sz_1456_);
v_i_boxed_1460_ = lean_unbox_usize(v_i_1457_);
lean_dec(v_i_1457_);
v_res_1461_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19_spec__21(v_sz_boxed_1459_, v_i_boxed_1460_, v_bs_1458_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19(lean_object* v_oldTraces_1462_, lean_object* v_data_1463_, lean_object* v_ref_1464_, lean_object* v_msg_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
lean_object* v_fileName_1471_; lean_object* v_fileMap_1472_; lean_object* v_options_1473_; lean_object* v_currRecDepth_1474_; lean_object* v_maxRecDepth_1475_; lean_object* v_ref_1476_; lean_object* v_currNamespace_1477_; lean_object* v_openDecls_1478_; lean_object* v_initHeartbeats_1479_; lean_object* v_maxHeartbeats_1480_; lean_object* v_quotContext_1481_; lean_object* v_currMacroScope_1482_; uint8_t v_diag_1483_; lean_object* v_cancelTk_x3f_1484_; uint8_t v_suppressElabErrors_1485_; lean_object* v_inheritedTraceOptions_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1541_; 
v_fileName_1471_ = lean_ctor_get(v___y_1468_, 0);
v_fileMap_1472_ = lean_ctor_get(v___y_1468_, 1);
v_options_1473_ = lean_ctor_get(v___y_1468_, 2);
v_currRecDepth_1474_ = lean_ctor_get(v___y_1468_, 3);
v_maxRecDepth_1475_ = lean_ctor_get(v___y_1468_, 4);
v_ref_1476_ = lean_ctor_get(v___y_1468_, 5);
v_currNamespace_1477_ = lean_ctor_get(v___y_1468_, 6);
v_openDecls_1478_ = lean_ctor_get(v___y_1468_, 7);
v_initHeartbeats_1479_ = lean_ctor_get(v___y_1468_, 8);
v_maxHeartbeats_1480_ = lean_ctor_get(v___y_1468_, 9);
v_quotContext_1481_ = lean_ctor_get(v___y_1468_, 10);
v_currMacroScope_1482_ = lean_ctor_get(v___y_1468_, 11);
v_diag_1483_ = lean_ctor_get_uint8(v___y_1468_, sizeof(void*)*14);
v_cancelTk_x3f_1484_ = lean_ctor_get(v___y_1468_, 12);
v_suppressElabErrors_1485_ = lean_ctor_get_uint8(v___y_1468_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1486_ = lean_ctor_get(v___y_1468_, 13);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___y_1468_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1488_ = v___y_1468_;
v_isShared_1489_ = v_isSharedCheck_1541_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_inheritedTraceOptions_1486_);
lean_inc(v_cancelTk_x3f_1484_);
lean_inc(v_currMacroScope_1482_);
lean_inc(v_quotContext_1481_);
lean_inc(v_maxHeartbeats_1480_);
lean_inc(v_initHeartbeats_1479_);
lean_inc(v_openDecls_1478_);
lean_inc(v_currNamespace_1477_);
lean_inc(v_ref_1476_);
lean_inc(v_maxRecDepth_1475_);
lean_inc(v_currRecDepth_1474_);
lean_inc(v_options_1473_);
lean_inc(v_fileMap_1472_);
lean_inc(v_fileName_1471_);
lean_dec(v___y_1468_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1541_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1490_; lean_object* v_traceState_1491_; lean_object* v_traces_1492_; lean_object* v_ref_1493_; lean_object* v___x_1495_; 
v___x_1490_ = lean_st_ref_get(v___y_1469_);
v_traceState_1491_ = lean_ctor_get(v___x_1490_, 4);
lean_inc_ref(v_traceState_1491_);
lean_dec(v___x_1490_);
v_traces_1492_ = lean_ctor_get(v_traceState_1491_, 0);
lean_inc_ref(v_traces_1492_);
lean_dec_ref(v_traceState_1491_);
v_ref_1493_ = l_Lean_replaceRef(v_ref_1464_, v_ref_1476_);
lean_dec(v_ref_1476_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 5, v_ref_1493_);
v___x_1495_ = v___x_1488_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_fileName_1471_);
lean_ctor_set(v_reuseFailAlloc_1540_, 1, v_fileMap_1472_);
lean_ctor_set(v_reuseFailAlloc_1540_, 2, v_options_1473_);
lean_ctor_set(v_reuseFailAlloc_1540_, 3, v_currRecDepth_1474_);
lean_ctor_set(v_reuseFailAlloc_1540_, 4, v_maxRecDepth_1475_);
lean_ctor_set(v_reuseFailAlloc_1540_, 5, v_ref_1493_);
lean_ctor_set(v_reuseFailAlloc_1540_, 6, v_currNamespace_1477_);
lean_ctor_set(v_reuseFailAlloc_1540_, 7, v_openDecls_1478_);
lean_ctor_set(v_reuseFailAlloc_1540_, 8, v_initHeartbeats_1479_);
lean_ctor_set(v_reuseFailAlloc_1540_, 9, v_maxHeartbeats_1480_);
lean_ctor_set(v_reuseFailAlloc_1540_, 10, v_quotContext_1481_);
lean_ctor_set(v_reuseFailAlloc_1540_, 11, v_currMacroScope_1482_);
lean_ctor_set(v_reuseFailAlloc_1540_, 12, v_cancelTk_x3f_1484_);
lean_ctor_set(v_reuseFailAlloc_1540_, 13, v_inheritedTraceOptions_1486_);
lean_ctor_set_uint8(v_reuseFailAlloc_1540_, sizeof(void*)*14, v_diag_1483_);
lean_ctor_set_uint8(v_reuseFailAlloc_1540_, sizeof(void*)*14 + 1, v_suppressElabErrors_1485_);
v___x_1495_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
lean_object* v___x_1496_; size_t v_sz_1497_; size_t v___x_1498_; lean_object* v___x_1499_; lean_object* v_msg_1500_; lean_object* v___x_1501_; lean_object* v_a_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1539_; 
v___x_1496_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1492_);
lean_dec_ref(v_traces_1492_);
v_sz_1497_ = lean_array_size(v___x_1496_);
v___x_1498_ = ((size_t)0ULL);
v___x_1499_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19_spec__21(v_sz_1497_, v___x_1498_, v___x_1496_);
v_msg_1500_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1500_, 0, v_data_1463_);
lean_ctor_set(v_msg_1500_, 1, v_msg_1465_);
lean_ctor_set(v_msg_1500_, 2, v___x_1499_);
v___x_1501_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4_spec__4(v_msg_1500_, v___y_1466_, v___y_1467_, v___x_1495_, v___y_1469_);
lean_dec_ref(v___x_1495_);
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1504_ = v___x_1501_;
v_isShared_1505_ = v_isSharedCheck_1539_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_a_1502_);
lean_dec(v___x_1501_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1539_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1506_; lean_object* v_traceState_1507_; lean_object* v_env_1508_; lean_object* v_nextMacroScope_1509_; lean_object* v_ngen_1510_; lean_object* v_auxDeclNGen_1511_; lean_object* v_cache_1512_; lean_object* v_messages_1513_; lean_object* v_infoState_1514_; lean_object* v_snapshotTasks_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1538_; 
v___x_1506_ = lean_st_ref_take(v___y_1469_);
v_traceState_1507_ = lean_ctor_get(v___x_1506_, 4);
v_env_1508_ = lean_ctor_get(v___x_1506_, 0);
v_nextMacroScope_1509_ = lean_ctor_get(v___x_1506_, 1);
v_ngen_1510_ = lean_ctor_get(v___x_1506_, 2);
v_auxDeclNGen_1511_ = lean_ctor_get(v___x_1506_, 3);
v_cache_1512_ = lean_ctor_get(v___x_1506_, 5);
v_messages_1513_ = lean_ctor_get(v___x_1506_, 6);
v_infoState_1514_ = lean_ctor_get(v___x_1506_, 7);
v_snapshotTasks_1515_ = lean_ctor_get(v___x_1506_, 8);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1517_ = v___x_1506_;
v_isShared_1518_ = v_isSharedCheck_1538_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_snapshotTasks_1515_);
lean_inc(v_infoState_1514_);
lean_inc(v_messages_1513_);
lean_inc(v_cache_1512_);
lean_inc(v_traceState_1507_);
lean_inc(v_auxDeclNGen_1511_);
lean_inc(v_ngen_1510_);
lean_inc(v_nextMacroScope_1509_);
lean_inc(v_env_1508_);
lean_dec(v___x_1506_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1538_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
uint64_t v_tid_1519_; lean_object* v___x_1521_; uint8_t v_isShared_1522_; uint8_t v_isSharedCheck_1536_; 
v_tid_1519_ = lean_ctor_get_uint64(v_traceState_1507_, sizeof(void*)*1);
v_isSharedCheck_1536_ = !lean_is_exclusive(v_traceState_1507_);
if (v_isSharedCheck_1536_ == 0)
{
lean_object* v_unused_1537_; 
v_unused_1537_ = lean_ctor_get(v_traceState_1507_, 0);
lean_dec(v_unused_1537_);
v___x_1521_ = v_traceState_1507_;
v_isShared_1522_ = v_isSharedCheck_1536_;
goto v_resetjp_1520_;
}
else
{
lean_dec(v_traceState_1507_);
v___x_1521_ = lean_box(0);
v_isShared_1522_ = v_isSharedCheck_1536_;
goto v_resetjp_1520_;
}
v_resetjp_1520_:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1526_; 
v___x_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1523_, 0, v_ref_1464_);
lean_ctor_set(v___x_1523_, 1, v_a_1502_);
v___x_1524_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1462_, v___x_1523_);
if (v_isShared_1522_ == 0)
{
lean_ctor_set(v___x_1521_, 0, v___x_1524_);
v___x_1526_ = v___x_1521_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1524_);
lean_ctor_set_uint64(v_reuseFailAlloc_1535_, sizeof(void*)*1, v_tid_1519_);
v___x_1526_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
lean_object* v___x_1528_; 
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 4, v___x_1526_);
v___x_1528_ = v___x_1517_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_env_1508_);
lean_ctor_set(v_reuseFailAlloc_1534_, 1, v_nextMacroScope_1509_);
lean_ctor_set(v_reuseFailAlloc_1534_, 2, v_ngen_1510_);
lean_ctor_set(v_reuseFailAlloc_1534_, 3, v_auxDeclNGen_1511_);
lean_ctor_set(v_reuseFailAlloc_1534_, 4, v___x_1526_);
lean_ctor_set(v_reuseFailAlloc_1534_, 5, v_cache_1512_);
lean_ctor_set(v_reuseFailAlloc_1534_, 6, v_messages_1513_);
lean_ctor_set(v_reuseFailAlloc_1534_, 7, v_infoState_1514_);
lean_ctor_set(v_reuseFailAlloc_1534_, 8, v_snapshotTasks_1515_);
v___x_1528_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1529_ = lean_st_ref_set(v___y_1469_, v___x_1528_);
v___x_1530_ = lean_box(0);
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 0, v___x_1530_);
v___x_1532_ = v___x_1504_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___x_1530_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
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
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19___boxed(lean_object* v_oldTraces_1542_, lean_object* v_data_1543_, lean_object* v_ref_1544_, lean_object* v_msg_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19(v_oldTraces_1542_, v_data_1543_, v_ref_1544_, v_msg_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_);
lean_dec(v___y_1549_);
lean_dec(v___y_1547_);
lean_dec_ref(v___y_1546_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20___redArg(lean_object* v_x_1552_){
_start:
{
if (lean_obj_tag(v_x_1552_) == 0)
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
v_a_1554_ = lean_ctor_get(v_x_1552_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v_x_1552_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v_x_1552_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v_x_1552_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
lean_ctor_set_tag(v___x_1556_, 1);
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
v_a_1562_ = lean_ctor_get(v_x_1552_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v_x_1552_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1564_ = v_x_1552_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v_x_1552_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
lean_ctor_set_tag(v___x_1564_, 0);
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1562_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20___redArg___boxed(lean_object* v_x_1570_, lean_object* v___y_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20___redArg(v_x_1570_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__21(lean_object* v_opts_1573_, lean_object* v_opt_1574_){
_start:
{
lean_object* v_name_1575_; lean_object* v_defValue_1576_; lean_object* v_map_1577_; lean_object* v___x_1578_; 
v_name_1575_ = lean_ctor_get(v_opt_1574_, 0);
v_defValue_1576_ = lean_ctor_get(v_opt_1574_, 1);
v_map_1577_ = lean_ctor_get(v_opts_1573_, 0);
v___x_1578_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1577_, v_name_1575_);
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_inc(v_defValue_1576_);
return v_defValue_1576_;
}
else
{
lean_object* v_val_1579_; 
v_val_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_val_1579_);
lean_dec_ref(v___x_1578_);
if (lean_obj_tag(v_val_1579_) == 3)
{
lean_object* v_v_1580_; 
v_v_1580_ = lean_ctor_get(v_val_1579_, 0);
lean_inc(v_v_1580_);
lean_dec_ref(v_val_1579_);
return v_v_1580_;
}
else
{
lean_dec(v_val_1579_);
lean_inc(v_defValue_1576_);
return v_defValue_1576_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__21___boxed(lean_object* v_opts_1581_, lean_object* v_opt_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__21(v_opts_1581_, v_opt_1582_);
lean_dec_ref(v_opt_1582_);
lean_dec_ref(v_opts_1581_);
return v_res_1583_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__18(lean_object* v_e_1584_){
_start:
{
if (lean_obj_tag(v_e_1584_) == 0)
{
uint8_t v___x_1585_; 
v___x_1585_ = 2;
return v___x_1585_;
}
else
{
uint8_t v___x_1586_; 
v___x_1586_ = 0;
return v___x_1586_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__18___boxed(lean_object* v_e_1587_){
_start:
{
uint8_t v_res_1588_; lean_object* v_r_1589_; 
v_res_1588_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__18(v_e_1587_);
lean_dec_ref(v_e_1587_);
v_r_1589_ = lean_box(v_res_1588_);
return v_r_1589_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__1(void){
_start:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1591_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__0));
v___x_1592_ = l_Lean_stringToMessageData(v___x_1591_);
return v___x_1592_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__3(void){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1594_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__2));
v___x_1595_ = l_Lean_stringToMessageData(v___x_1594_);
return v___x_1595_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__4(void){
_start:
{
lean_object* v___x_1596_; double v___x_1597_; 
v___x_1596_ = lean_unsigned_to_nat(1000u);
v___x_1597_ = lean_float_of_nat(v___x_1596_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16(lean_object* v_cls_1598_, uint8_t v_collapsed_1599_, lean_object* v_tag_1600_, lean_object* v_opts_1601_, uint8_t v_clsEnabled_1602_, lean_object* v_oldTraces_1603_, lean_object* v_msg_1604_, lean_object* v_resStartStop_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
lean_object* v_fst_1611_; lean_object* v_snd_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1710_; 
v_fst_1611_ = lean_ctor_get(v_resStartStop_1605_, 0);
v_snd_1612_ = lean_ctor_get(v_resStartStop_1605_, 1);
v_isSharedCheck_1710_ = !lean_is_exclusive(v_resStartStop_1605_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1614_ = v_resStartStop_1605_;
v_isShared_1615_ = v_isSharedCheck_1710_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_snd_1612_);
lean_inc(v_fst_1611_);
lean_dec(v_resStartStop_1605_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1710_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___y_1617_; lean_object* v___y_1618_; lean_object* v_data_1619_; lean_object* v_fst_1630_; lean_object* v_snd_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1709_; 
v_fst_1630_ = lean_ctor_get(v_snd_1612_, 0);
v_snd_1631_ = lean_ctor_get(v_snd_1612_, 1);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_snd_1612_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1633_ = v_snd_1612_;
v_isShared_1634_ = v_isSharedCheck_1709_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_snd_1631_);
lean_inc(v_fst_1630_);
lean_dec(v_snd_1612_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1709_;
goto v_resetjp_1632_;
}
v___jp_1616_:
{
lean_object* v___x_1620_; 
v___x_1620_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__19(v_oldTraces_1603_, v_data_1619_, v___y_1618_, v___y_1617_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_);
lean_dec(v___y_1609_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v___x_1621_; 
lean_dec_ref(v___x_1620_);
v___x_1621_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20___redArg(v_fst_1611_);
return v___x_1621_;
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1629_; 
lean_dec(v_fst_1611_);
v_a_1622_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1624_ = v___x_1620_;
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1620_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1627_; 
if (v_isShared_1625_ == 0)
{
v___x_1627_ = v___x_1624_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_a_1622_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
v_resetjp_1632_:
{
lean_object* v___x_1635_; uint8_t v___x_1636_; lean_object* v___y_1638_; lean_object* v_a_1639_; uint8_t v___y_1663_; double v___y_1694_; 
v___x_1635_ = l_Lean_trace_profiler;
v___x_1636_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_opts_1601_, v___x_1635_);
if (v___x_1636_ == 0)
{
v___y_1663_ = v___x_1636_;
goto v___jp_1662_;
}
else
{
lean_object* v___x_1699_; uint8_t v___x_1700_; 
v___x_1699_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1700_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_opts_1601_, v___x_1699_);
if (v___x_1700_ == 0)
{
lean_object* v___x_1701_; lean_object* v___x_1702_; double v___x_1703_; double v___x_1704_; double v___x_1705_; 
v___x_1701_ = l_Lean_trace_profiler_threshold;
v___x_1702_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__21(v_opts_1601_, v___x_1701_);
v___x_1703_ = lean_float_of_nat(v___x_1702_);
v___x_1704_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__4, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__4_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__4);
v___x_1705_ = lean_float_div(v___x_1703_, v___x_1704_);
v___y_1694_ = v___x_1705_;
goto v___jp_1693_;
}
else
{
lean_object* v___x_1706_; lean_object* v___x_1707_; double v___x_1708_; 
v___x_1706_ = l_Lean_trace_profiler_threshold;
v___x_1707_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__21(v_opts_1601_, v___x_1706_);
v___x_1708_ = lean_float_of_nat(v___x_1707_);
v___y_1694_ = v___x_1708_;
goto v___jp_1693_;
}
}
v___jp_1637_:
{
uint8_t v_result_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1645_; 
v_result_1640_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__18(v_fst_1611_);
v___x_1641_ = l_Lean_TraceResult_toEmoji(v_result_1640_);
v___x_1642_ = l_Lean_stringToMessageData(v___x_1641_);
v___x_1643_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__1);
if (v_isShared_1634_ == 0)
{
lean_ctor_set_tag(v___x_1633_, 7);
lean_ctor_set(v___x_1633_, 1, v___x_1643_);
lean_ctor_set(v___x_1633_, 0, v___x_1642_);
v___x_1645_ = v___x_1633_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v___x_1642_);
lean_ctor_set(v_reuseFailAlloc_1656_, 1, v___x_1643_);
v___x_1645_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
lean_object* v_m_1647_; 
if (v_isShared_1615_ == 0)
{
lean_ctor_set_tag(v___x_1614_, 7);
lean_ctor_set(v___x_1614_, 1, v_a_1639_);
lean_ctor_set(v___x_1614_, 0, v___x_1645_);
v_m_1647_ = v___x_1614_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v___x_1645_);
lean_ctor_set(v_reuseFailAlloc_1655_, 1, v_a_1639_);
v_m_1647_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; double v___x_1650_; lean_object* v_data_1651_; 
v___x_1648_ = lean_box(v_result_1640_);
v___x_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1648_);
v___x_1650_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__0, &l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__0);
lean_inc_ref(v_tag_1600_);
lean_inc_ref(v___x_1649_);
lean_inc(v_cls_1598_);
v_data_1651_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1651_, 0, v_cls_1598_);
lean_ctor_set(v_data_1651_, 1, v___x_1649_);
lean_ctor_set(v_data_1651_, 2, v_tag_1600_);
lean_ctor_set_float(v_data_1651_, sizeof(void*)*3, v___x_1650_);
lean_ctor_set_float(v_data_1651_, sizeof(void*)*3 + 8, v___x_1650_);
lean_ctor_set_uint8(v_data_1651_, sizeof(void*)*3 + 16, v_collapsed_1599_);
if (v___x_1636_ == 0)
{
lean_dec_ref(v___x_1649_);
lean_dec(v_snd_1631_);
lean_dec(v_fst_1630_);
lean_dec_ref(v_tag_1600_);
lean_dec(v_cls_1598_);
v___y_1617_ = v_m_1647_;
v___y_1618_ = v___y_1638_;
v_data_1619_ = v_data_1651_;
goto v___jp_1616_;
}
else
{
lean_object* v_data_1652_; double v___x_1653_; double v___x_1654_; 
lean_dec_ref(v_data_1651_);
v_data_1652_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1652_, 0, v_cls_1598_);
lean_ctor_set(v_data_1652_, 1, v___x_1649_);
lean_ctor_set(v_data_1652_, 2, v_tag_1600_);
v___x_1653_ = lean_unbox_float(v_fst_1630_);
lean_dec(v_fst_1630_);
lean_ctor_set_float(v_data_1652_, sizeof(void*)*3, v___x_1653_);
v___x_1654_ = lean_unbox_float(v_snd_1631_);
lean_dec(v_snd_1631_);
lean_ctor_set_float(v_data_1652_, sizeof(void*)*3 + 8, v___x_1654_);
lean_ctor_set_uint8(v_data_1652_, sizeof(void*)*3 + 16, v_collapsed_1599_);
v___y_1617_ = v_m_1647_;
v___y_1618_ = v___y_1638_;
v_data_1619_ = v_data_1652_;
goto v___jp_1616_;
}
}
}
}
v___jp_1657_:
{
lean_object* v_ref_1658_; lean_object* v___x_1659_; 
v_ref_1658_ = lean_ctor_get(v___y_1608_, 5);
lean_inc(v___y_1609_);
lean_inc_ref(v___y_1608_);
lean_inc(v___y_1607_);
lean_inc_ref(v___y_1606_);
lean_inc(v_fst_1611_);
v___x_1659_ = lean_apply_6(v_msg_1604_, v_fst_1611_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, lean_box(0));
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; 
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
lean_inc(v_a_1660_);
lean_dec_ref(v___x_1659_);
lean_inc(v_ref_1658_);
v___y_1638_ = v_ref_1658_;
v_a_1639_ = v_a_1660_;
goto v___jp_1637_;
}
else
{
lean_object* v___x_1661_; 
lean_dec_ref(v___x_1659_);
v___x_1661_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___closed__3);
lean_inc(v_ref_1658_);
v___y_1638_ = v_ref_1658_;
v_a_1639_ = v___x_1661_;
goto v___jp_1637_;
}
}
v___jp_1662_:
{
if (v_clsEnabled_1602_ == 0)
{
if (v___y_1663_ == 0)
{
lean_object* v___x_1664_; lean_object* v_traceState_1665_; lean_object* v_env_1666_; lean_object* v_nextMacroScope_1667_; lean_object* v_ngen_1668_; lean_object* v_auxDeclNGen_1669_; lean_object* v_cache_1670_; lean_object* v_messages_1671_; lean_object* v_infoState_1672_; lean_object* v_snapshotTasks_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1692_; 
lean_del_object(v___x_1633_);
lean_dec(v_snd_1631_);
lean_dec(v_fst_1630_);
lean_del_object(v___x_1614_);
lean_dec_ref(v___y_1608_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec_ref(v_msg_1604_);
lean_dec_ref(v_tag_1600_);
lean_dec(v_cls_1598_);
v___x_1664_ = lean_st_ref_take(v___y_1609_);
v_traceState_1665_ = lean_ctor_get(v___x_1664_, 4);
v_env_1666_ = lean_ctor_get(v___x_1664_, 0);
v_nextMacroScope_1667_ = lean_ctor_get(v___x_1664_, 1);
v_ngen_1668_ = lean_ctor_get(v___x_1664_, 2);
v_auxDeclNGen_1669_ = lean_ctor_get(v___x_1664_, 3);
v_cache_1670_ = lean_ctor_get(v___x_1664_, 5);
v_messages_1671_ = lean_ctor_get(v___x_1664_, 6);
v_infoState_1672_ = lean_ctor_get(v___x_1664_, 7);
v_snapshotTasks_1673_ = lean_ctor_get(v___x_1664_, 8);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1675_ = v___x_1664_;
v_isShared_1676_ = v_isSharedCheck_1692_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_snapshotTasks_1673_);
lean_inc(v_infoState_1672_);
lean_inc(v_messages_1671_);
lean_inc(v_cache_1670_);
lean_inc(v_traceState_1665_);
lean_inc(v_auxDeclNGen_1669_);
lean_inc(v_ngen_1668_);
lean_inc(v_nextMacroScope_1667_);
lean_inc(v_env_1666_);
lean_dec(v___x_1664_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1692_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
uint64_t v_tid_1677_; lean_object* v_traces_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1691_; 
v_tid_1677_ = lean_ctor_get_uint64(v_traceState_1665_, sizeof(void*)*1);
v_traces_1678_ = lean_ctor_get(v_traceState_1665_, 0);
v_isSharedCheck_1691_ = !lean_is_exclusive(v_traceState_1665_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1680_ = v_traceState_1665_;
v_isShared_1681_ = v_isSharedCheck_1691_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_traces_1678_);
lean_dec(v_traceState_1665_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1691_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1682_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1603_, v_traces_1678_);
lean_dec_ref(v_traces_1678_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 0, v___x_1682_);
v___x_1684_ = v___x_1680_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v___x_1682_);
lean_ctor_set_uint64(v_reuseFailAlloc_1690_, sizeof(void*)*1, v_tid_1677_);
v___x_1684_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
lean_object* v___x_1686_; 
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 4, v___x_1684_);
v___x_1686_ = v___x_1675_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_env_1666_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v_nextMacroScope_1667_);
lean_ctor_set(v_reuseFailAlloc_1689_, 2, v_ngen_1668_);
lean_ctor_set(v_reuseFailAlloc_1689_, 3, v_auxDeclNGen_1669_);
lean_ctor_set(v_reuseFailAlloc_1689_, 4, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1689_, 5, v_cache_1670_);
lean_ctor_set(v_reuseFailAlloc_1689_, 6, v_messages_1671_);
lean_ctor_set(v_reuseFailAlloc_1689_, 7, v_infoState_1672_);
lean_ctor_set(v_reuseFailAlloc_1689_, 8, v_snapshotTasks_1673_);
v___x_1686_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = lean_st_ref_set(v___y_1609_, v___x_1686_);
lean_dec(v___y_1609_);
v___x_1688_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20___redArg(v_fst_1611_);
return v___x_1688_;
}
}
}
}
}
else
{
goto v___jp_1657_;
}
}
else
{
goto v___jp_1657_;
}
}
v___jp_1693_:
{
double v___x_1695_; double v___x_1696_; double v___x_1697_; uint8_t v___x_1698_; 
v___x_1695_ = lean_unbox_float(v_snd_1631_);
v___x_1696_ = lean_unbox_float(v_fst_1630_);
v___x_1697_ = lean_float_sub(v___x_1695_, v___x_1696_);
v___x_1698_ = lean_float_decLt(v___y_1694_, v___x_1697_);
v___y_1663_ = v___x_1698_;
goto v___jp_1662_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16___boxed(lean_object* v_cls_1711_, lean_object* v_collapsed_1712_, lean_object* v_tag_1713_, lean_object* v_opts_1714_, lean_object* v_clsEnabled_1715_, lean_object* v_oldTraces_1716_, lean_object* v_msg_1717_, lean_object* v_resStartStop_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
uint8_t v_collapsed_boxed_1724_; uint8_t v_clsEnabled_boxed_1725_; lean_object* v_res_1726_; 
v_collapsed_boxed_1724_ = lean_unbox(v_collapsed_1712_);
v_clsEnabled_boxed_1725_ = lean_unbox(v_clsEnabled_1715_);
v_res_1726_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16(v_cls_1711_, v_collapsed_boxed_1724_, v_tag_1713_, v_opts_1714_, v_clsEnabled_boxed_1725_, v_oldTraces_1716_, v_msg_1717_, v_resStartStop_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
lean_dec_ref(v_opts_1714_);
return v_res_1726_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3(void){
_start:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1731_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__2));
v___x_1732_ = l_Lean_stringToMessageData(v___x_1731_);
return v___x_1732_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__0));
v___x_1735_ = l_Lean_stringToMessageData(v___x_1734_);
return v___x_1735_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1737_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__2));
v___x_1738_ = l_Lean_stringToMessageData(v___x_1737_);
return v___x_1738_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__4));
v___x_1741_ = l_Lean_stringToMessageData(v___x_1740_);
return v___x_1741_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7(void){
_start:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__6));
v___x_1744_ = l_Lean_stringToMessageData(v___x_1743_);
return v___x_1744_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9(void){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1746_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__8));
v___x_1747_ = l_Lean_stringToMessageData(v___x_1746_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg(lean_object* v_upperBound_1748_, lean_object* v_fst_1749_, lean_object* v_args_1750_, uint8_t v_compile_1751_, uint8_t v_logCompileErrors_1752_, uint8_t v_isMeta_1753_, uint8_t v___x_1754_, lean_object* v_a_1755_, lean_object* v_b_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v_a_1763_; lean_object* v___y_1768_; uint8_t v___x_1787_; 
v___x_1787_ = lean_nat_dec_lt(v_a_1755_, v_upperBound_1748_);
if (v___x_1787_ == 0)
{
lean_object* v___x_1788_; 
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v___x_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1788_, 0, v_b_1756_);
return v___x_1788_;
}
else
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1789_ = lean_array_fget_borrowed(v_fst_1749_, v_a_1755_);
v___x_1790_ = l_Lean_Expr_mvarId_x21(v___x_1789_);
lean_inc(v___x_1790_);
v___x_1791_ = l_Lean_MVarId_getDecl(v___x_1790_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; lean_object* v_type_1793_; lean_object* v___x_1794_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
lean_inc(v_a_1792_);
lean_dec_ref(v___x_1791_);
v_type_1793_ = lean_ctor_get(v_a_1792_, 2);
lean_inc_ref(v_type_1793_);
lean_dec(v_a_1792_);
v___x_1794_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___redArg(v_type_1793_, v___y_1758_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1796_; 
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
lean_inc(v_a_1795_);
lean_dec_ref(v___x_1794_);
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v_a_1795_);
v___x_1796_ = l_Lean_Meta_isProp(v_a_1795_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v_a_1797_; lean_object* v___x_1798_; lean_object* v_cls_1799_; lean_object* v___x_1800_; uint8_t v___x_1801_; 
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_a_1797_);
lean_dec_ref(v___x_1796_);
v___x_1798_ = lean_box(0);
v_cls_1799_ = ((lean_object*)(l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_));
v___x_1800_ = lean_array_fget_borrowed(v_args_1750_, v_a_1755_);
v___x_1801_ = lean_unbox(v_a_1797_);
lean_dec(v_a_1797_);
if (v___x_1801_ == 0)
{
lean_object* v___x_1802_; 
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v_a_1795_);
v___x_1802_ = l_Lean_Meta_isClass_x3f(v_a_1795_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1802_) == 0)
{
lean_object* v_a_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1933_; 
v_a_1803_ = lean_ctor_get(v___x_1802_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1805_ = v___x_1802_;
v_isShared_1806_ = v_isSharedCheck_1933_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_a_1803_);
lean_dec(v___x_1802_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1933_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
if (lean_obj_tag(v_a_1803_) == 0)
{
lean_object* v_options_1807_; lean_object* v___x_1808_; uint8_t v___x_1809_; 
lean_del_object(v___x_1805_);
v_options_1807_ = lean_ctor_get(v___y_1759_, 2);
v___x_1808_ = l_Lean_Meta_backward_inferInstanceAs_wrap_data;
v___x_1809_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_1807_, v___x_1808_);
if (v___x_1809_ == 0)
{
lean_object* v___x_1810_; 
lean_dec(v_a_1795_);
lean_inc(v___x_1800_);
v___x_1810_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_1790_, v___x_1800_, v___y_1758_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_dec_ref(v___x_1810_);
v_a_1763_ = v___x_1798_;
goto v___jp_1762_;
}
else
{
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
return v___x_1810_;
}
}
else
{
lean_object* v___x_1811_; 
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v___x_1800_);
v___x_1811_ = lean_infer_type(v___x_1800_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v_a_1812_; lean_object* v___x_1813_; 
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
lean_inc(v_a_1812_);
lean_dec_ref(v___x_1811_);
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v_a_1795_);
v___x_1813_ = l_Lean_Meta_isExprDefEq(v_a_1795_, v_a_1812_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v_a_1814_; uint8_t v___x_1815_; 
v_a_1814_ = lean_ctor_get(v___x_1813_, 0);
lean_inc(v_a_1814_);
lean_dec_ref(v___x_1813_);
v___x_1815_ = lean_unbox(v_a_1814_);
lean_dec(v_a_1814_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1816_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__1));
v___x_1817_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg(v___x_1816_, v___y_1760_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; lean_object* v___x_1819_; 
v_a_1818_ = lean_ctor_get(v___x_1817_, 0);
lean_inc(v_a_1818_);
lean_dec_ref(v___x_1817_);
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v___x_1800_);
lean_inc(v_a_1818_);
v___x_1819_ = l_Lean_Meta_mkAuxDefinition(v_a_1818_, v_a_1795_, v___x_1800_, v___x_1754_, v___x_1754_, v___x_1787_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1819_) == 0)
{
lean_object* v_a_1820_; lean_object* v___x_1821_; 
v_a_1820_ = lean_ctor_get(v___x_1819_, 0);
lean_inc(v_a_1820_);
lean_dec_ref(v___x_1819_);
v___x_1821_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_1790_, v_a_1820_, v___y_1758_);
if (lean_obj_tag(v___x_1821_) == 0)
{
uint8_t v___x_1822_; lean_object* v___x_1823_; 
lean_dec_ref(v___x_1821_);
v___x_1822_ = 0;
lean_inc(v_a_1818_);
v___x_1823_ = l_Lean_Meta_setInlineAttribute(v_a_1818_, v___x_1822_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_dec_ref(v___x_1823_);
if (v_isMeta_1753_ == 0)
{
lean_object* v___x_1824_; 
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
v___x_1824_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__0(v_a_1818_, v___x_1798_, v_compile_1751_, v_logCompileErrors_1752_, v___x_1798_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
v___y_1768_ = v___x_1824_;
goto v___jp_1767_;
}
else
{
lean_object* v___x_1825_; lean_object* v_env_1826_; lean_object* v_nextMacroScope_1827_; lean_object* v_ngen_1828_; lean_object* v_auxDeclNGen_1829_; lean_object* v_traceState_1830_; lean_object* v_messages_1831_; lean_object* v_infoState_1832_; lean_object* v_snapshotTasks_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1859_; 
v___x_1825_ = lean_st_ref_take(v___y_1760_);
v_env_1826_ = lean_ctor_get(v___x_1825_, 0);
v_nextMacroScope_1827_ = lean_ctor_get(v___x_1825_, 1);
v_ngen_1828_ = lean_ctor_get(v___x_1825_, 2);
v_auxDeclNGen_1829_ = lean_ctor_get(v___x_1825_, 3);
v_traceState_1830_ = lean_ctor_get(v___x_1825_, 4);
v_messages_1831_ = lean_ctor_get(v___x_1825_, 6);
v_infoState_1832_ = lean_ctor_get(v___x_1825_, 7);
v_snapshotTasks_1833_ = lean_ctor_get(v___x_1825_, 8);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1825_);
if (v_isSharedCheck_1859_ == 0)
{
lean_object* v_unused_1860_; 
v_unused_1860_ = lean_ctor_get(v___x_1825_, 5);
lean_dec(v_unused_1860_);
v___x_1835_ = v___x_1825_;
v_isShared_1836_ = v_isSharedCheck_1859_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_snapshotTasks_1833_);
lean_inc(v_infoState_1832_);
lean_inc(v_messages_1831_);
lean_inc(v_traceState_1830_);
lean_inc(v_auxDeclNGen_1829_);
lean_inc(v_ngen_1828_);
lean_inc(v_nextMacroScope_1827_);
lean_inc(v_env_1826_);
lean_dec(v___x_1825_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1859_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1840_; 
lean_inc(v_a_1818_);
v___x_1837_ = l_Lean_markMeta(v_env_1826_, v_a_1818_);
v___x_1838_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2);
if (v_isShared_1836_ == 0)
{
lean_ctor_set(v___x_1835_, 5, v___x_1838_);
lean_ctor_set(v___x_1835_, 0, v___x_1837_);
v___x_1840_ = v___x_1835_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v___x_1837_);
lean_ctor_set(v_reuseFailAlloc_1858_, 1, v_nextMacroScope_1827_);
lean_ctor_set(v_reuseFailAlloc_1858_, 2, v_ngen_1828_);
lean_ctor_set(v_reuseFailAlloc_1858_, 3, v_auxDeclNGen_1829_);
lean_ctor_set(v_reuseFailAlloc_1858_, 4, v_traceState_1830_);
lean_ctor_set(v_reuseFailAlloc_1858_, 5, v___x_1838_);
lean_ctor_set(v_reuseFailAlloc_1858_, 6, v_messages_1831_);
lean_ctor_set(v_reuseFailAlloc_1858_, 7, v_infoState_1832_);
lean_ctor_set(v_reuseFailAlloc_1858_, 8, v_snapshotTasks_1833_);
v___x_1840_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v_mctx_1843_; lean_object* v_zetaDeltaFVarIds_1844_; lean_object* v_postponed_1845_; lean_object* v_diag_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1856_; 
v___x_1841_ = lean_st_ref_set(v___y_1760_, v___x_1840_);
v___x_1842_ = lean_st_ref_take(v___y_1758_);
v_mctx_1843_ = lean_ctor_get(v___x_1842_, 0);
v_zetaDeltaFVarIds_1844_ = lean_ctor_get(v___x_1842_, 2);
v_postponed_1845_ = lean_ctor_get(v___x_1842_, 3);
v_diag_1846_ = lean_ctor_get(v___x_1842_, 4);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1856_ == 0)
{
lean_object* v_unused_1857_; 
v_unused_1857_ = lean_ctor_get(v___x_1842_, 1);
lean_dec(v_unused_1857_);
v___x_1848_ = v___x_1842_;
v_isShared_1849_ = v_isSharedCheck_1856_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_diag_1846_);
lean_inc(v_postponed_1845_);
lean_inc(v_zetaDeltaFVarIds_1844_);
lean_inc(v_mctx_1843_);
lean_dec(v___x_1842_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1856_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1850_; lean_object* v___x_1852_; 
v___x_1850_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3);
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 1, v___x_1850_);
v___x_1852_ = v___x_1848_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_mctx_1843_);
lean_ctor_set(v_reuseFailAlloc_1855_, 1, v___x_1850_);
lean_ctor_set(v_reuseFailAlloc_1855_, 2, v_zetaDeltaFVarIds_1844_);
lean_ctor_set(v_reuseFailAlloc_1855_, 3, v_postponed_1845_);
lean_ctor_set(v_reuseFailAlloc_1855_, 4, v_diag_1846_);
v___x_1852_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1853_ = lean_st_ref_set(v___y_1758_, v___x_1852_);
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
v___x_1854_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__0(v_a_1818_, v___x_1798_, v_compile_1751_, v_logCompileErrors_1752_, v___x_1798_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
v___y_1768_ = v___x_1854_;
goto v___jp_1767_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1818_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
return v___x_1823_;
}
}
else
{
lean_dec(v_a_1818_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
return v___x_1821_;
}
}
else
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1868_; 
lean_dec(v_a_1818_);
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_1861_ = lean_ctor_get(v___x_1819_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1863_ = v___x_1819_;
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1819_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
lean_object* v___x_1866_; 
if (v_isShared_1864_ == 0)
{
v___x_1866_ = v___x_1863_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_a_1861_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
}
else
{
lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1876_; 
lean_dec(v_a_1795_);
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_1869_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1871_ = v___x_1817_;
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v___x_1817_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1874_; 
if (v_isShared_1872_ == 0)
{
v___x_1874_ = v___x_1871_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_a_1869_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
else
{
lean_object* v___x_1877_; 
lean_dec(v_a_1795_);
lean_inc(v___x_1800_);
v___x_1877_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_1790_, v___x_1800_, v___y_1758_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_dec_ref(v___x_1877_);
v_a_1763_ = v___x_1798_;
goto v___jp_1762_;
}
else
{
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
return v___x_1877_;
}
}
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1885_; 
lean_dec(v_a_1795_);
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_1878_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1880_ = v___x_1813_;
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1813_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1883_; 
if (v_isShared_1881_ == 0)
{
v___x_1883_ = v___x_1880_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v_a_1878_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
}
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec(v_a_1795_);
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_1886_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1811_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1811_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
}
else
{
lean_object* v_options_1894_; lean_object* v_a_1896_; lean_object* v___y_1899_; uint8_t v___y_1900_; lean_object* v_a_1905_; lean_object* v___y_1909_; lean_object* v___x_1913_; uint8_t v___x_1914_; 
lean_dec_ref(v_a_1803_);
v_options_1894_ = lean_ctor_get(v___y_1759_, 2);
v___x_1913_ = l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances;
v___x_1914_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_1894_, v___x_1913_);
if (v___x_1914_ == 0)
{
lean_object* v___x_1915_; 
lean_del_object(v___x_1805_);
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v___x_1800_);
v___x_1915_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__1(v___x_1800_, v_a_1795_, v_compile_1751_, v_logCompileErrors_1752_, v_isMeta_1753_, v___x_1790_, v___x_1798_, v___x_1798_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
v___y_1768_ = v___x_1915_;
goto v___jp_1767_;
}
else
{
lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1916_ = lean_box(0);
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v_a_1795_);
v___x_1917_ = l_Lean_Meta_trySynthInstance(v_a_1795_, v___x_1916_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
lean_dec_ref(v___x_1917_);
if (lean_obj_tag(v_a_1918_) == 1)
{
lean_object* v_a_1919_; lean_object* v___x_1920_; 
v_a_1919_ = lean_ctor_get(v_a_1918_, 0);
lean_inc(v_a_1919_);
lean_dec_ref(v_a_1918_);
v___x_1920_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_1799_, v___y_1759_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; uint8_t v___x_1922_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1921_);
lean_dec_ref(v___x_1920_);
v___x_1922_ = lean_unbox(v_a_1921_);
lean_dec(v_a_1921_);
if (v___x_1922_ == 0)
{
lean_object* v___x_1923_; 
lean_inc(v___x_1790_);
v___x_1923_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__2(v___x_1790_, v_a_1919_, v___x_1798_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
v___y_1909_ = v___x_1923_;
goto v___jp_1908_;
}
else
{
lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1924_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1);
lean_inc(v_a_1919_);
v___x_1925_ = l_Lean_MessageData_ofExpr(v_a_1919_);
v___x_1926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1924_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_1799_, v___x_1926_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v___x_1929_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
lean_inc(v_a_1928_);
lean_dec_ref(v___x_1927_);
lean_inc(v___x_1790_);
v___x_1929_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__2(v___x_1790_, v_a_1919_, v_a_1928_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
v___y_1909_ = v___x_1929_;
goto v___jp_1908_;
}
else
{
lean_object* v_a_1930_; 
lean_dec(v_a_1919_);
v_a_1930_ = lean_ctor_get(v___x_1927_, 0);
lean_inc(v_a_1930_);
lean_dec_ref(v___x_1927_);
v_a_1905_ = v_a_1930_;
goto v___jp_1904_;
}
}
}
else
{
lean_object* v_a_1931_; 
lean_dec(v_a_1919_);
v_a_1931_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1931_);
lean_dec_ref(v___x_1920_);
v_a_1905_ = v_a_1931_;
goto v___jp_1904_;
}
}
else
{
lean_dec(v_a_1918_);
lean_del_object(v___x_1805_);
v_a_1896_ = v___x_1798_;
goto v___jp_1895_;
}
}
else
{
lean_object* v_a_1932_; 
v_a_1932_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1932_);
lean_dec_ref(v___x_1917_);
v_a_1905_ = v_a_1932_;
goto v___jp_1904_;
}
}
v___jp_1895_:
{
lean_object* v___x_1897_; 
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v___x_1800_);
v___x_1897_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__1(v___x_1800_, v_a_1795_, v_compile_1751_, v_logCompileErrors_1752_, v_isMeta_1753_, v___x_1790_, v___x_1798_, v_a_1896_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
v___y_1768_ = v___x_1897_;
goto v___jp_1767_;
}
v___jp_1898_:
{
if (v___y_1900_ == 0)
{
lean_dec_ref(v___y_1899_);
lean_del_object(v___x_1805_);
v_a_1896_ = v___x_1798_;
goto v___jp_1895_;
}
else
{
lean_object* v___x_1902_; 
lean_dec(v_a_1795_);
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
if (v_isShared_1806_ == 0)
{
lean_ctor_set_tag(v___x_1805_, 1);
lean_ctor_set(v___x_1805_, 0, v___y_1899_);
v___x_1902_ = v___x_1805_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___y_1899_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
v___jp_1904_:
{
uint8_t v___x_1906_; 
v___x_1906_ = l_Lean_Exception_isInterrupt(v_a_1905_);
if (v___x_1906_ == 0)
{
uint8_t v___x_1907_; 
lean_inc_ref(v_a_1905_);
v___x_1907_ = l_Lean_Exception_isRuntime(v_a_1905_);
v___y_1899_ = v_a_1905_;
v___y_1900_ = v___x_1907_;
goto v___jp_1898_;
}
else
{
v___y_1899_ = v_a_1905_;
v___y_1900_ = v___x_1906_;
goto v___jp_1898_;
}
}
v___jp_1908_:
{
if (lean_obj_tag(v___y_1909_) == 0)
{
lean_object* v_a_1910_; 
lean_del_object(v___x_1805_);
v_a_1910_ = lean_ctor_get(v___y_1909_, 0);
lean_inc(v_a_1910_);
lean_dec_ref(v___y_1909_);
if (lean_obj_tag(v_a_1910_) == 0)
{
lean_dec(v_a_1795_);
lean_dec(v___x_1790_);
v_a_1763_ = v___x_1798_;
goto v___jp_1762_;
}
else
{
lean_object* v_a_1911_; 
v_a_1911_ = lean_ctor_get(v_a_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref(v_a_1910_);
v_a_1896_ = v_a_1911_;
goto v___jp_1895_;
}
}
else
{
lean_object* v_a_1912_; 
v_a_1912_ = lean_ctor_get(v___y_1909_, 0);
lean_inc(v_a_1912_);
lean_dec_ref(v___y_1909_);
v_a_1905_ = v_a_1912_;
goto v___jp_1904_;
}
}
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
lean_dec(v_a_1795_);
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_1934_ = lean_ctor_get(v___x_1802_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___x_1802_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1802_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
else
{
lean_object* v___x_1942_; 
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v___x_1800_);
v___x_1942_ = lean_infer_type(v___x_1800_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v_a_1943_; lean_object* v___x_1944_; 
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
lean_inc(v_a_1943_);
lean_dec_ref(v___x_1942_);
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v_a_1943_);
lean_inc(v_a_1795_);
v___x_1944_ = l_Lean_Meta_isExprDefEq(v_a_1795_, v_a_1943_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v_a_1945_; uint8_t v___x_1946_; 
v_a_1945_ = lean_ctor_get(v___x_1944_, 0);
lean_inc(v_a_1945_);
lean_dec_ref(v___x_1944_);
v___x_1946_ = lean_unbox(v_a_1945_);
lean_dec(v_a_1945_);
if (v___x_1946_ == 0)
{
lean_object* v___x_1947_; 
v___x_1947_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_1799_, v___y_1759_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; uint8_t v___x_1949_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1948_);
lean_dec_ref(v___x_1947_);
v___x_1949_ = lean_unbox(v_a_1948_);
lean_dec(v_a_1948_);
if (v___x_1949_ == 0)
{
lean_object* v___x_1950_; 
lean_dec(v_a_1943_);
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v___x_1800_);
v___x_1950_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__3(v_a_1795_, v___x_1800_, v___x_1787_, v___x_1790_, v___x_1798_, v___x_1798_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
v___y_1768_ = v___x_1950_;
goto v___jp_1767_;
}
else
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1951_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3);
lean_inc(v_a_1755_);
v___x_1952_ = l_Nat_reprFast(v_a_1755_);
v___x_1953_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1953_, 0, v___x_1952_);
v___x_1954_ = l_Lean_MessageData_ofFormat(v___x_1953_);
v___x_1955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1951_);
lean_ctor_set(v___x_1955_, 1, v___x_1954_);
v___x_1956_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5);
v___x_1957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1955_);
lean_ctor_set(v___x_1957_, 1, v___x_1956_);
lean_inc(v_a_1795_);
v___x_1958_ = l_Lean_MessageData_ofExpr(v_a_1795_);
v___x_1959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1957_);
lean_ctor_set(v___x_1959_, 1, v___x_1958_);
v___x_1960_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7);
v___x_1961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1959_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
v___x_1962_ = l_Lean_MessageData_ofExpr(v_a_1943_);
v___x_1963_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1961_);
lean_ctor_set(v___x_1963_, 1, v___x_1962_);
v___x_1964_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9);
v___x_1965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1963_);
lean_ctor_set(v___x_1965_, 1, v___x_1964_);
lean_inc(v___x_1800_);
v___x_1966_ = l_Lean_MessageData_ofExpr(v___x_1800_);
v___x_1967_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1965_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
v___x_1968_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_1799_, v___x_1967_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v___x_1970_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1969_);
lean_dec_ref(v___x_1968_);
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v___x_1800_);
v___x_1970_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__3(v_a_1795_, v___x_1800_, v___x_1787_, v___x_1790_, v___x_1798_, v_a_1969_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
v___y_1768_ = v___x_1970_;
goto v___jp_1767_;
}
else
{
lean_dec(v_a_1795_);
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
return v___x_1968_;
}
}
}
else
{
lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1978_; 
lean_dec(v_a_1943_);
lean_dec(v_a_1795_);
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_1971_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1978_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1978_ == 0)
{
v___x_1973_ = v___x_1947_;
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1947_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1976_; 
if (v_isShared_1974_ == 0)
{
v___x_1976_ = v___x_1973_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_a_1971_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
}
}
else
{
lean_object* v___x_1979_; 
lean_dec(v_a_1943_);
lean_dec(v_a_1795_);
lean_inc(v___x_1800_);
v___x_1979_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_1790_, v___x_1800_, v___y_1758_);
if (lean_obj_tag(v___x_1979_) == 0)
{
lean_dec_ref(v___x_1979_);
v_a_1763_ = v___x_1798_;
goto v___jp_1762_;
}
else
{
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
return v___x_1979_;
}
}
}
else
{
lean_object* v_a_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_1987_; 
lean_dec(v_a_1943_);
lean_dec(v_a_1795_);
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_1980_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1987_ == 0)
{
v___x_1982_ = v___x_1944_;
v_isShared_1983_ = v_isSharedCheck_1987_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_a_1980_);
lean_dec(v___x_1944_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_1987_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v___x_1985_; 
if (v_isShared_1983_ == 0)
{
v___x_1985_ = v___x_1982_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1986_; 
v_reuseFailAlloc_1986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1986_, 0, v_a_1980_);
v___x_1985_ = v_reuseFailAlloc_1986_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
return v___x_1985_;
}
}
}
}
else
{
lean_object* v_a_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_1995_; 
lean_dec(v_a_1795_);
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_1988_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1995_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1990_ = v___x_1942_;
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_a_1988_);
lean_dec(v___x_1942_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v___x_1993_; 
if (v_isShared_1991_ == 0)
{
v___x_1993_ = v___x_1990_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_a_1988_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
}
}
}
else
{
lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2003_; 
lean_dec(v_a_1795_);
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_1996_ = lean_ctor_get(v___x_1796_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1796_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1998_ = v___x_1796_;
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_dec(v___x_1796_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2001_; 
if (v_isShared_1999_ == 0)
{
v___x_2001_ = v___x_1998_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_a_1996_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
}
else
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2011_; 
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_2004_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2006_ = v___x_1794_;
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_1794_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2009_; 
if (v_isShared_2007_ == 0)
{
v___x_2009_ = v___x_2006_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_a_2004_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
else
{
lean_object* v_a_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2019_; 
lean_dec(v___x_1790_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_2012_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2014_ = v___x_1791_;
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_a_2012_);
lean_dec(v___x_1791_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2012_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
v___jp_1762_:
{
lean_object* v___x_1764_; lean_object* v___x_1765_; 
v___x_1764_ = lean_unsigned_to_nat(1u);
v___x_1765_ = lean_nat_add(v_a_1755_, v___x_1764_);
lean_dec(v_a_1755_);
v_a_1755_ = v___x_1765_;
v_b_1756_ = v_a_1763_;
goto _start;
}
v___jp_1767_:
{
if (lean_obj_tag(v___y_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1778_; 
v_a_1769_ = lean_ctor_get(v___y_1768_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___y_1768_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1771_ = v___y_1768_;
v_isShared_1772_ = v_isSharedCheck_1778_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___y_1768_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1778_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
if (lean_obj_tag(v_a_1769_) == 0)
{
lean_object* v_a_1773_; lean_object* v___x_1775_; 
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_1773_ = lean_ctor_get(v_a_1769_, 0);
lean_inc(v_a_1773_);
lean_dec_ref(v_a_1769_);
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 0, v_a_1773_);
v___x_1775_ = v___x_1771_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_a_1773_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
else
{
lean_object* v_a_1777_; 
lean_del_object(v___x_1771_);
v_a_1777_ = lean_ctor_get(v_a_1769_, 0);
lean_inc(v_a_1777_);
lean_dec_ref(v_a_1769_);
v_a_1763_ = v_a_1777_;
goto v___jp_1762_;
}
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v_a_1755_);
v_a_1779_ = lean_ctor_get(v___y_1768_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___y_1768_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___y_1768_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___y_1768_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5(void){
_start:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2021_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__4));
v___x_2022_ = l_Lean_stringToMessageData(v___x_2021_);
return v___x_2022_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7(void){
_start:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2024_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__6));
v___x_2025_ = l_Lean_stringToMessageData(v___x_2024_);
return v___x_2025_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9(void){
_start:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__8));
v___x_2028_ = l_Lean_stringToMessageData(v___x_2027_);
return v___x_2028_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11(void){
_start:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__10));
v___x_2031_ = l_Lean_stringToMessageData(v___x_2030_);
return v___x_2031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__10(lean_object* v_a_2032_, lean_object* v_expectedType_2033_, uint8_t v___x_2034_, uint8_t v_compile_2035_, uint8_t v_logCompileErrors_2036_, uint8_t v_isMeta_2037_, lean_object* v_x_2038_, lean_object* v_x_2039_, lean_object* v_x_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_){
_start:
{
lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v___y_2049_; lean_object* v___y_2050_; lean_object* v___y_2069_; lean_object* v___y_2070_; lean_object* v___y_2071_; lean_object* v___y_2072_; 
if (lean_obj_tag(v_x_2038_) == 5)
{
lean_object* v_fn_2085_; lean_object* v_arg_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
v_fn_2085_ = lean_ctor_get(v_x_2038_, 0);
lean_inc_ref(v_fn_2085_);
v_arg_2086_ = lean_ctor_get(v_x_2038_, 1);
lean_inc_ref(v_arg_2086_);
lean_dec_ref(v_x_2038_);
v___x_2087_ = lean_array_set(v_x_2039_, v_x_2040_, v_arg_2086_);
v___x_2088_ = lean_unsigned_to_nat(1u);
v___x_2089_ = lean_nat_sub(v_x_2040_, v___x_2088_);
lean_dec(v_x_2040_);
v_x_2038_ = v_fn_2085_;
v_x_2039_ = v___x_2087_;
v_x_2040_ = v___x_2089_;
goto _start;
}
else
{
uint8_t v___x_2091_; lean_object* v___y_2093_; lean_object* v___y_2094_; lean_object* v___y_2095_; lean_object* v___y_2096_; lean_object* v_cls_2163_; lean_object* v___y_2165_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; lean_object* v___x_2184_; 
lean_dec(v_x_2040_);
v___x_2091_ = 1;
v_cls_2163_ = ((lean_object*)(l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_));
v___x_2184_ = l_Lean_Expr_constName_x3f(v_x_2038_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_dec_ref(v_x_2039_);
lean_dec_ref(v_x_2038_);
v___y_2165_ = v___y_2041_;
v___y_2166_ = v___y_2042_;
v___y_2167_ = v___y_2043_;
v___y_2168_ = v___y_2044_;
goto v___jp_2164_;
}
else
{
lean_object* v_val_2185_; lean_object* v___x_2186_; 
v_val_2185_ = lean_ctor_get(v___x_2184_, 0);
lean_inc(v_val_2185_);
lean_dec_ref(v___x_2184_);
lean_inc_ref(v___y_2043_);
v___x_2186_ = l_Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5(v_val_2185_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v_a_2187_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
lean_inc(v_a_2187_);
lean_dec_ref(v___x_2186_);
if (lean_obj_tag(v_a_2187_) == 6)
{
lean_object* v_val_2188_; lean_object* v___x_2189_; 
lean_dec_ref(v_a_2032_);
v_val_2188_ = lean_ctor_get(v_a_2187_, 0);
lean_inc_ref(v_val_2188_);
lean_dec_ref(v_a_2187_);
lean_inc(v___y_2044_);
lean_inc_ref(v___y_2043_);
lean_inc(v___y_2042_);
lean_inc_ref(v___y_2041_);
lean_inc_ref(v_x_2038_);
v___x_2189_ = lean_infer_type(v_x_2038_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
if (lean_obj_tag(v___x_2189_) == 0)
{
lean_object* v_a_2190_; uint8_t v___x_2191_; lean_object* v___x_2192_; 
v_a_2190_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_a_2190_);
lean_dec_ref(v___x_2189_);
v___x_2191_ = 0;
lean_inc(v___y_2044_);
lean_inc_ref(v___y_2043_);
lean_inc(v___y_2042_);
lean_inc_ref(v___y_2041_);
v___x_2192_ = l_Lean_Meta_forallMetaTelescope(v_a_2190_, v___x_2191_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v_a_2193_; lean_object* v_snd_2194_; lean_object* v_fst_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2294_; 
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_a_2193_);
lean_dec_ref(v___x_2192_);
v_snd_2194_ = lean_ctor_get(v_a_2193_, 1);
v_fst_2195_ = lean_ctor_get(v_a_2193_, 0);
v_isSharedCheck_2294_ = !lean_is_exclusive(v_a_2193_);
if (v_isSharedCheck_2294_ == 0)
{
v___x_2197_ = v_a_2193_;
v_isShared_2198_ = v_isSharedCheck_2294_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_snd_2194_);
lean_inc(v_fst_2195_);
lean_dec(v_a_2193_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2294_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v_snd_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2292_; 
v_snd_2199_ = lean_ctor_get(v_snd_2194_, 1);
v_isSharedCheck_2292_ = !lean_is_exclusive(v_snd_2194_);
if (v_isSharedCheck_2292_ == 0)
{
lean_object* v_unused_2293_; 
v_unused_2293_ = lean_ctor_get(v_snd_2194_, 0);
lean_dec(v_unused_2293_);
v___x_2201_ = v_snd_2194_;
v_isShared_2202_ = v_isSharedCheck_2292_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_snd_2199_);
lean_dec(v_snd_2194_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2292_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v___x_2203_; lean_object* v___y_2205_; lean_object* v___y_2206_; lean_object* v___y_2207_; lean_object* v___y_2208_; lean_object* v___x_2240_; uint8_t v___x_2241_; 
v___x_2203_ = lean_array_get_size(v_x_2039_);
v___x_2240_ = lean_array_get_size(v_fst_2195_);
v___x_2241_ = lean_nat_dec_eq(v___x_2203_, v___x_2240_);
if (v___x_2241_ == 0)
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2245_; 
lean_dec(v_snd_2199_);
lean_dec(v_fst_2195_);
lean_dec_ref(v_val_2188_);
lean_dec_ref(v_expectedType_2033_);
v___x_2242_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5);
v___x_2243_ = l_Lean_MessageData_ofExpr(v_x_2038_);
if (v_isShared_2202_ == 0)
{
lean_ctor_set_tag(v___x_2201_, 7);
lean_ctor_set(v___x_2201_, 1, v___x_2243_);
lean_ctor_set(v___x_2201_, 0, v___x_2242_);
v___x_2245_ = v___x_2201_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v___x_2242_);
lean_ctor_set(v_reuseFailAlloc_2256_, 1, v___x_2243_);
v___x_2245_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
lean_object* v___x_2246_; lean_object* v___x_2248_; 
v___x_2246_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7);
if (v_isShared_2198_ == 0)
{
lean_ctor_set_tag(v___x_2197_, 7);
lean_ctor_set(v___x_2197_, 1, v___x_2246_);
lean_ctor_set(v___x_2197_, 0, v___x_2245_);
v___x_2248_ = v___x_2197_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v___x_2245_);
lean_ctor_set(v_reuseFailAlloc_2255_, 1, v___x_2246_);
v___x_2248_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2249_ = lean_array_to_list(v_x_2039_);
v___x_2250_ = lean_box(0);
v___x_2251_ = l_List_mapTR_loop___at___00Lean_Meta_normalizeInstance_spec__9(v___x_2249_, v___x_2250_);
v___x_2252_ = l_Lean_MessageData_ofList(v___x_2251_);
v___x_2253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2253_, 0, v___x_2248_);
lean_ctor_set(v___x_2253_, 1, v___x_2252_);
v___x_2254_ = l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg(v___x_2253_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
return v___x_2254_;
}
}
}
else
{
lean_object* v___x_2257_; 
lean_inc(v___y_2044_);
lean_inc_ref(v___y_2043_);
lean_inc(v___y_2042_);
lean_inc_ref(v___y_2041_);
lean_inc_ref(v_expectedType_2033_);
v___x_2257_ = l_Lean_Meta_isExprDefEq(v_expectedType_2033_, v_snd_2199_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
if (lean_obj_tag(v___x_2257_) == 0)
{
lean_object* v_a_2258_; uint8_t v___x_2259_; 
v_a_2258_ = lean_ctor_get(v___x_2257_, 0);
lean_inc(v_a_2258_);
lean_dec_ref(v___x_2257_);
v___x_2259_ = lean_unbox(v_a_2258_);
lean_dec(v_a_2258_);
if (v___x_2259_ == 0)
{
lean_object* v_toConstantVal_2260_; lean_object* v_name_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2265_; 
lean_dec(v_fst_2195_);
lean_dec_ref(v_x_2039_);
lean_dec_ref(v_x_2038_);
v_toConstantVal_2260_ = lean_ctor_get(v_val_2188_, 0);
lean_inc_ref(v_toConstantVal_2260_);
lean_dec_ref(v_val_2188_);
v_name_2261_ = lean_ctor_get(v_toConstantVal_2260_, 0);
lean_inc(v_name_2261_);
lean_dec_ref(v_toConstantVal_2260_);
v___x_2262_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9);
v___x_2263_ = l_Lean_MessageData_ofExpr(v_expectedType_2033_);
if (v_isShared_2202_ == 0)
{
lean_ctor_set_tag(v___x_2201_, 7);
lean_ctor_set(v___x_2201_, 1, v___x_2263_);
lean_ctor_set(v___x_2201_, 0, v___x_2262_);
v___x_2265_ = v___x_2201_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v___x_2262_);
lean_ctor_set(v_reuseFailAlloc_2283_, 1, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
lean_object* v___x_2266_; lean_object* v___x_2268_; 
v___x_2266_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11);
if (v_isShared_2198_ == 0)
{
lean_ctor_set_tag(v___x_2197_, 7);
lean_ctor_set(v___x_2197_, 1, v___x_2266_);
lean_ctor_set(v___x_2197_, 0, v___x_2265_);
v___x_2268_ = v___x_2197_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v___x_2265_);
lean_ctor_set(v_reuseFailAlloc_2282_, 1, v___x_2266_);
v___x_2268_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2281_; 
v___x_2269_ = l_Lean_MessageData_ofConstName(v_name_2261_, v___x_2034_);
v___x_2270_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2268_);
lean_ctor_set(v___x_2270_, 1, v___x_2269_);
v___x_2271_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3);
v___x_2272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2270_);
lean_ctor_set(v___x_2272_, 1, v___x_2271_);
v___x_2273_ = l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg(v___x_2272_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2276_ = v___x_2273_;
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2273_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2279_; 
if (v_isShared_2277_ == 0)
{
v___x_2279_ = v___x_2276_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2274_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
}
}
else
{
lean_del_object(v___x_2201_);
lean_del_object(v___x_2197_);
lean_dec_ref(v_expectedType_2033_);
v___y_2205_ = v___y_2041_;
v___y_2206_ = v___y_2042_;
v___y_2207_ = v___y_2043_;
v___y_2208_ = v___y_2044_;
goto v___jp_2204_;
}
}
else
{
lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2291_; 
lean_del_object(v___x_2201_);
lean_del_object(v___x_2197_);
lean_dec(v_fst_2195_);
lean_dec_ref(v_val_2188_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
lean_dec_ref(v_x_2039_);
lean_dec_ref(v_x_2038_);
lean_dec_ref(v_expectedType_2033_);
v_a_2284_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2286_ = v___x_2257_;
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v___x_2257_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2289_; 
if (v_isShared_2287_ == 0)
{
v___x_2289_ = v___x_2286_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v_a_2284_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
}
v___jp_2204_:
{
lean_object* v_numParams_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v_numParams_2209_ = lean_ctor_get(v_val_2188_, 3);
lean_inc(v_numParams_2209_);
lean_dec_ref(v_val_2188_);
v___x_2210_ = lean_box(0);
lean_inc(v___y_2206_);
v___x_2211_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg(v___x_2203_, v_fst_2195_, v_x_2039_, v_compile_2035_, v_logCompileErrors_2036_, v_isMeta_2037_, v___x_2034_, v_numParams_2209_, v___x_2210_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
lean_dec_ref(v_x_2039_);
if (lean_obj_tag(v___x_2211_) == 0)
{
size_t v_sz_2212_; size_t v___x_2213_; lean_object* v___x_2214_; 
lean_dec_ref(v___x_2211_);
v_sz_2212_ = lean_array_size(v_fst_2195_);
v___x_2213_ = ((size_t)0ULL);
v___x_2214_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6___redArg(v_sz_2212_, v___x_2213_, v_fst_2195_, v___y_2206_);
lean_dec(v___y_2206_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2223_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2217_ = v___x_2214_;
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2214_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2219_; lean_object* v___x_2221_; 
v___x_2219_ = l_Lean_mkAppN(v_x_2038_, v_a_2215_);
lean_dec(v_a_2215_);
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 0, v___x_2219_);
v___x_2221_ = v___x_2217_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2219_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
else
{
lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2231_; 
lean_dec_ref(v_x_2038_);
v_a_2224_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2226_ = v___x_2214_;
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_dec(v___x_2214_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_a_2224_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
}
else
{
lean_object* v_a_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2239_; 
lean_dec(v___y_2206_);
lean_dec(v_fst_2195_);
lean_dec_ref(v_x_2038_);
v_a_2232_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2234_ = v___x_2211_;
v_isShared_2235_ = v_isSharedCheck_2239_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_a_2232_);
lean_dec(v___x_2211_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2239_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2237_; 
if (v_isShared_2235_ == 0)
{
v___x_2237_ = v___x_2234_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v_a_2232_);
v___x_2237_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
return v___x_2237_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2302_; 
lean_dec_ref(v_val_2188_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
lean_dec_ref(v_x_2039_);
lean_dec_ref(v_x_2038_);
lean_dec_ref(v_expectedType_2033_);
v_a_2295_ = lean_ctor_get(v___x_2192_, 0);
v_isSharedCheck_2302_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2297_ = v___x_2192_;
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_a_2295_);
lean_dec(v___x_2192_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2300_; 
if (v_isShared_2298_ == 0)
{
v___x_2300_ = v___x_2297_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_a_2295_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
}
else
{
lean_dec_ref(v_val_2188_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
lean_dec_ref(v_x_2039_);
lean_dec_ref(v_x_2038_);
lean_dec_ref(v_expectedType_2033_);
return v___x_2189_;
}
}
else
{
lean_dec(v_a_2187_);
lean_dec_ref(v_x_2039_);
lean_dec_ref(v_x_2038_);
v___y_2165_ = v___y_2041_;
v___y_2166_ = v___y_2042_;
v___y_2167_ = v___y_2043_;
v___y_2168_ = v___y_2044_;
goto v___jp_2164_;
}
}
else
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
lean_dec_ref(v_x_2039_);
lean_dec_ref(v_x_2038_);
lean_dec_ref(v_expectedType_2033_);
lean_dec_ref(v_a_2032_);
v_a_2303_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2305_ = v___x_2186_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___x_2186_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2303_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
v___jp_2092_:
{
lean_object* v_options_2097_; lean_object* v___x_2098_; uint8_t v___x_2099_; 
v_options_2097_ = lean_ctor_get(v___y_2095_, 2);
v___x_2098_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_2099_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_2097_, v___x_2098_);
if (v___x_2099_ == 0)
{
lean_object* v___x_2100_; 
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
lean_dec_ref(v_expectedType_2033_);
v___x_2100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2100_, 0, v_a_2032_);
return v___x_2100_;
}
else
{
lean_object* v___x_2101_; 
lean_inc(v___y_2096_);
lean_inc_ref(v___y_2095_);
lean_inc(v___y_2094_);
lean_inc_ref(v___y_2093_);
lean_inc_ref(v_a_2032_);
v___x_2101_ = lean_infer_type(v_a_2032_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2103_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
lean_inc(v_a_2102_);
lean_dec_ref(v___x_2101_);
lean_inc(v___y_2096_);
lean_inc_ref(v___y_2095_);
lean_inc(v___y_2094_);
lean_inc_ref(v___y_2093_);
lean_inc_ref(v_expectedType_2033_);
v___x_2103_ = l_Lean_Meta_isExprDefEq(v_expectedType_2033_, v_a_2102_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2154_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2106_ = v___x_2103_;
v_isShared_2107_ = v_isSharedCheck_2154_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_a_2104_);
lean_dec(v___x_2103_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2154_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
uint8_t v___x_2108_; 
v___x_2108_ = lean_unbox(v_a_2104_);
lean_dec(v_a_2104_);
if (v___x_2108_ == 0)
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v_a_2111_; lean_object* v___x_2112_; 
lean_del_object(v___x_2106_);
v___x_2109_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__1));
v___x_2110_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg(v___x_2109_, v___y_2096_);
v_a_2111_ = lean_ctor_get(v___x_2110_, 0);
lean_inc(v_a_2111_);
lean_dec_ref(v___x_2110_);
lean_inc(v___y_2096_);
lean_inc_ref(v___y_2095_);
lean_inc(v___y_2094_);
lean_inc(v_a_2111_);
v___x_2112_ = l_Lean_Meta_mkAuxDefinition(v_a_2111_, v_expectedType_2033_, v_a_2032_, v___x_2034_, v___x_2034_, v___x_2091_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; uint8_t v___x_2114_; lean_object* v___x_2115_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref(v___x_2112_);
v___x_2114_ = 3;
lean_inc(v_a_2111_);
v___x_2115_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg(v_a_2111_, v___x_2114_, v___y_2094_, v___y_2096_);
lean_dec_ref(v___x_2115_);
if (v_isMeta_2037_ == 0)
{
lean_dec(v___y_2094_);
v___y_2069_ = v_a_2111_;
v___y_2070_ = v_a_2113_;
v___y_2071_ = v___y_2095_;
v___y_2072_ = v___y_2096_;
goto v___jp_2068_;
}
else
{
lean_object* v___x_2116_; lean_object* v_env_2117_; lean_object* v_nextMacroScope_2118_; lean_object* v_ngen_2119_; lean_object* v_auxDeclNGen_2120_; lean_object* v_traceState_2121_; lean_object* v_messages_2122_; lean_object* v_infoState_2123_; lean_object* v_snapshotTasks_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2149_; 
v___x_2116_ = lean_st_ref_take(v___y_2096_);
v_env_2117_ = lean_ctor_get(v___x_2116_, 0);
v_nextMacroScope_2118_ = lean_ctor_get(v___x_2116_, 1);
v_ngen_2119_ = lean_ctor_get(v___x_2116_, 2);
v_auxDeclNGen_2120_ = lean_ctor_get(v___x_2116_, 3);
v_traceState_2121_ = lean_ctor_get(v___x_2116_, 4);
v_messages_2122_ = lean_ctor_get(v___x_2116_, 6);
v_infoState_2123_ = lean_ctor_get(v___x_2116_, 7);
v_snapshotTasks_2124_ = lean_ctor_get(v___x_2116_, 8);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2149_ == 0)
{
lean_object* v_unused_2150_; 
v_unused_2150_ = lean_ctor_get(v___x_2116_, 5);
lean_dec(v_unused_2150_);
v___x_2126_ = v___x_2116_;
v_isShared_2127_ = v_isSharedCheck_2149_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_snapshotTasks_2124_);
lean_inc(v_infoState_2123_);
lean_inc(v_messages_2122_);
lean_inc(v_traceState_2121_);
lean_inc(v_auxDeclNGen_2120_);
lean_inc(v_ngen_2119_);
lean_inc(v_nextMacroScope_2118_);
lean_inc(v_env_2117_);
lean_dec(v___x_2116_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2149_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2131_; 
lean_inc(v_a_2111_);
v___x_2128_ = l_Lean_markMeta(v_env_2117_, v_a_2111_);
v___x_2129_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 5, v___x_2129_);
lean_ctor_set(v___x_2126_, 0, v___x_2128_);
v___x_2131_ = v___x_2126_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v___x_2128_);
lean_ctor_set(v_reuseFailAlloc_2148_, 1, v_nextMacroScope_2118_);
lean_ctor_set(v_reuseFailAlloc_2148_, 2, v_ngen_2119_);
lean_ctor_set(v_reuseFailAlloc_2148_, 3, v_auxDeclNGen_2120_);
lean_ctor_set(v_reuseFailAlloc_2148_, 4, v_traceState_2121_);
lean_ctor_set(v_reuseFailAlloc_2148_, 5, v___x_2129_);
lean_ctor_set(v_reuseFailAlloc_2148_, 6, v_messages_2122_);
lean_ctor_set(v_reuseFailAlloc_2148_, 7, v_infoState_2123_);
lean_ctor_set(v_reuseFailAlloc_2148_, 8, v_snapshotTasks_2124_);
v___x_2131_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v_mctx_2134_; lean_object* v_zetaDeltaFVarIds_2135_; lean_object* v_postponed_2136_; lean_object* v_diag_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2146_; 
v___x_2132_ = lean_st_ref_set(v___y_2096_, v___x_2131_);
v___x_2133_ = lean_st_ref_take(v___y_2094_);
v_mctx_2134_ = lean_ctor_get(v___x_2133_, 0);
v_zetaDeltaFVarIds_2135_ = lean_ctor_get(v___x_2133_, 2);
v_postponed_2136_ = lean_ctor_get(v___x_2133_, 3);
v_diag_2137_ = lean_ctor_get(v___x_2133_, 4);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2146_ == 0)
{
lean_object* v_unused_2147_; 
v_unused_2147_ = lean_ctor_get(v___x_2133_, 1);
lean_dec(v_unused_2147_);
v___x_2139_ = v___x_2133_;
v_isShared_2140_ = v_isSharedCheck_2146_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_diag_2137_);
lean_inc(v_postponed_2136_);
lean_inc(v_zetaDeltaFVarIds_2135_);
lean_inc(v_mctx_2134_);
lean_dec(v___x_2133_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2146_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2141_; lean_object* v___x_2143_; 
v___x_2141_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3);
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 1, v___x_2141_);
v___x_2143_ = v___x_2139_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_mctx_2134_);
lean_ctor_set(v_reuseFailAlloc_2145_, 1, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2145_, 2, v_zetaDeltaFVarIds_2135_);
lean_ctor_set(v_reuseFailAlloc_2145_, 3, v_postponed_2136_);
lean_ctor_set(v_reuseFailAlloc_2145_, 4, v_diag_2137_);
v___x_2143_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2144_; 
v___x_2144_ = lean_st_ref_set(v___y_2094_, v___x_2143_);
lean_dec(v___y_2094_);
v___y_2069_ = v_a_2111_;
v___y_2070_ = v_a_2113_;
v___y_2071_ = v___y_2095_;
v___y_2072_ = v___y_2096_;
goto v___jp_2068_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2111_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
return v___x_2112_;
}
}
else
{
lean_object* v___x_2152_; 
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
lean_dec_ref(v_expectedType_2033_);
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 0, v_a_2032_);
v___x_2152_ = v___x_2106_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2032_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
else
{
lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2162_; 
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
lean_dec_ref(v_expectedType_2033_);
lean_dec_ref(v_a_2032_);
v_a_2155_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2162_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2157_ = v___x_2103_;
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_dec(v___x_2103_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2160_; 
if (v_isShared_2158_ == 0)
{
v___x_2160_ = v___x_2157_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_a_2155_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
return v___x_2160_;
}
}
}
}
else
{
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
lean_dec_ref(v_expectedType_2033_);
lean_dec_ref(v_a_2032_);
return v___x_2101_;
}
}
}
v___jp_2164_:
{
lean_object* v___x_2169_; lean_object* v_a_2170_; uint8_t v___x_2171_; 
v___x_2169_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_2163_, v___y_2167_);
v_a_2170_ = lean_ctor_get(v___x_2169_, 0);
lean_inc(v_a_2170_);
lean_dec_ref(v___x_2169_);
v___x_2171_ = lean_unbox(v_a_2170_);
lean_dec(v_a_2170_);
if (v___x_2171_ == 0)
{
v___y_2093_ = v___y_2165_;
v___y_2094_ = v___y_2166_;
v___y_2095_ = v___y_2167_;
v___y_2096_ = v___y_2168_;
goto v___jp_2092_;
}
else
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2172_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3);
lean_inc_ref(v_a_2032_);
v___x_2173_ = l_Lean_MessageData_ofExpr(v_a_2032_);
v___x_2174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2172_);
lean_ctor_set(v___x_2174_, 1, v___x_2173_);
v___x_2175_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_2163_, v___x_2174_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_dec_ref(v___x_2175_);
v___y_2093_ = v___y_2165_;
v___y_2094_ = v___y_2166_;
v___y_2095_ = v___y_2167_;
v___y_2096_ = v___y_2168_;
goto v___jp_2092_;
}
else
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v_expectedType_2033_);
lean_dec_ref(v_a_2032_);
v_a_2176_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2175_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2175_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
}
}
v___jp_2046_:
{
lean_object* v___x_2051_; 
v___x_2051_ = l_Lean_enableRealizationsForConst(v___y_2047_, v___y_2049_, v___y_2050_);
lean_dec(v___y_2050_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2058_ == 0)
{
lean_object* v_unused_2059_; 
v_unused_2059_ = lean_ctor_get(v___x_2051_, 0);
lean_dec(v_unused_2059_);
v___x_2053_ = v___x_2051_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_dec(v___x_2051_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v___y_2048_);
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v___y_2048_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
lean_dec_ref(v___y_2048_);
v_a_2060_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_2051_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2051_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
v___jp_2068_:
{
if (v_compile_2035_ == 0)
{
v___y_2047_ = v___y_2069_;
v___y_2048_ = v___y_2070_;
v___y_2049_ = v___y_2071_;
v___y_2050_ = v___y_2072_;
goto v___jp_2046_;
}
else
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; 
v___x_2073_ = lean_unsigned_to_nat(1u);
v___x_2074_ = lean_mk_empty_array_with_capacity(v___x_2073_);
lean_inc(v___y_2069_);
v___x_2075_ = lean_array_push(v___x_2074_, v___y_2069_);
lean_inc(v___y_2072_);
lean_inc_ref(v___y_2071_);
v___x_2076_ = l_Lean_compileDecls(v___x_2075_, v_logCompileErrors_2036_, v___y_2071_, v___y_2072_);
if (lean_obj_tag(v___x_2076_) == 0)
{
lean_dec_ref(v___x_2076_);
v___y_2047_ = v___y_2069_;
v___y_2048_ = v___y_2070_;
v___y_2049_ = v___y_2071_;
v___y_2050_ = v___y_2072_;
goto v___jp_2046_;
}
else
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2084_; 
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec_ref(v___y_2070_);
lean_dec(v___y_2069_);
v_a_2077_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2079_ = v___x_2076_;
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2076_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_a_2077_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
}
}
}
}
static uint64_t _init_l_Lean_Meta_normalizeInstance___closed__0(void){
_start:
{
uint8_t v___x_2311_; uint64_t v___x_2312_; 
v___x_2311_ = 3;
v___x_2312_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_2311_);
return v___x_2312_;
}
}
static lean_object* _init_l_Lean_Meta_normalizeInstance___closed__2(void){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2314_ = ((lean_object*)(l_Lean_Meta_normalizeInstance___closed__1));
v___x_2315_ = l_Lean_stringToMessageData(v___x_2314_);
return v___x_2315_;
}
}
static double _init_l_Lean_Meta_normalizeInstance___closed__3(void){
_start:
{
lean_object* v___x_2316_; double v___x_2317_; 
v___x_2316_ = lean_unsigned_to_nat(1000000000u);
v___x_2317_ = lean_float_of_nat(v___x_2316_);
return v___x_2317_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12___redArg(lean_object* v_upperBound_2318_, lean_object* v_fst_2319_, lean_object* v_args_2320_, uint8_t v___x_2321_, uint8_t v_compile_2322_, uint8_t v_logCompileErrors_2323_, uint8_t v_isMeta_2324_, uint8_t v___x_2325_, lean_object* v_a_2326_, lean_object* v_b_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v_a_2334_; lean_object* v___y_2339_; uint8_t v___x_2358_; 
v___x_2358_ = lean_nat_dec_lt(v_a_2326_, v_upperBound_2318_);
if (v___x_2358_ == 0)
{
lean_object* v___x_2359_; 
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v___x_2359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2359_, 0, v_b_2327_);
return v___x_2359_;
}
else
{
lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2360_ = lean_array_fget_borrowed(v_fst_2319_, v_a_2326_);
v___x_2361_ = l_Lean_Expr_mvarId_x21(v___x_2360_);
lean_inc(v___x_2361_);
v___x_2362_ = l_Lean_MVarId_getDecl(v___x_2361_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2362_) == 0)
{
lean_object* v_a_2363_; lean_object* v_type_2364_; lean_object* v___x_2365_; 
v_a_2363_ = lean_ctor_get(v___x_2362_, 0);
lean_inc(v_a_2363_);
lean_dec_ref(v___x_2362_);
v_type_2364_ = lean_ctor_get(v_a_2363_, 2);
lean_inc_ref(v_type_2364_);
lean_dec(v_a_2363_);
v___x_2365_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___redArg(v_type_2364_, v___y_2329_);
if (lean_obj_tag(v___x_2365_) == 0)
{
lean_object* v_a_2366_; lean_object* v___x_2367_; 
v_a_2366_ = lean_ctor_get(v___x_2365_, 0);
lean_inc(v_a_2366_);
lean_dec_ref(v___x_2365_);
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v_a_2366_);
v___x_2367_ = l_Lean_Meta_isProp(v_a_2366_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v_a_2368_; lean_object* v___x_2369_; lean_object* v_cls_2370_; lean_object* v___x_2371_; uint8_t v___x_2372_; 
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2368_);
lean_dec_ref(v___x_2367_);
v___x_2369_ = lean_box(0);
v_cls_2370_ = ((lean_object*)(l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_));
v___x_2371_ = lean_array_fget_borrowed(v_args_2320_, v_a_2326_);
v___x_2372_ = lean_unbox(v_a_2368_);
lean_dec(v_a_2368_);
if (v___x_2372_ == 0)
{
lean_object* v___x_2373_; 
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v_a_2366_);
v___x_2373_ = l_Lean_Meta_isClass_x3f(v_a_2366_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2505_; 
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2376_ = v___x_2373_;
v_isShared_2377_ = v_isSharedCheck_2505_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2373_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2505_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v_a_2379_; lean_object* v___y_2382_; uint8_t v___y_2383_; lean_object* v_a_2388_; lean_object* v___y_2392_; 
if (lean_obj_tag(v_a_2374_) == 0)
{
if (v___x_2325_ == 0)
{
lean_object* v_options_2418_; lean_object* v___x_2419_; uint8_t v___x_2420_; 
lean_del_object(v___x_2376_);
v_options_2418_ = lean_ctor_get(v___y_2330_, 2);
v___x_2419_ = l_Lean_Meta_backward_inferInstanceAs_wrap_data;
v___x_2420_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_2418_, v___x_2419_);
if (v___x_2420_ == 0)
{
lean_object* v___x_2421_; 
lean_dec(v_a_2366_);
lean_inc(v___x_2371_);
v___x_2421_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_2361_, v___x_2371_, v___y_2329_);
if (lean_obj_tag(v___x_2421_) == 0)
{
lean_dec_ref(v___x_2421_);
v_a_2334_ = v___x_2369_;
goto v___jp_2333_;
}
else
{
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
return v___x_2421_;
}
}
else
{
lean_object* v___x_2422_; 
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v___x_2371_);
v___x_2422_ = lean_infer_type(v___x_2371_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v_a_2423_; lean_object* v___x_2424_; 
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2423_);
lean_dec_ref(v___x_2422_);
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v_a_2366_);
v___x_2424_ = l_Lean_Meta_isExprDefEq(v_a_2366_, v_a_2423_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2424_) == 0)
{
lean_object* v_a_2425_; uint8_t v___x_2426_; 
v_a_2425_ = lean_ctor_get(v___x_2424_, 0);
lean_inc(v_a_2425_);
lean_dec_ref(v___x_2424_);
v___x_2426_ = lean_unbox(v_a_2425_);
lean_dec(v_a_2425_);
if (v___x_2426_ == 0)
{
lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2427_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__1));
v___x_2428_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg(v___x_2427_, v___y_2331_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2430_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc(v_a_2429_);
lean_dec_ref(v___x_2428_);
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v___x_2371_);
lean_inc(v_a_2429_);
v___x_2430_ = l_Lean_Meta_mkAuxDefinition(v_a_2429_, v_a_2366_, v___x_2371_, v___x_2325_, v___x_2325_, v___x_2321_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2432_; 
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
lean_inc(v_a_2431_);
lean_dec_ref(v___x_2430_);
v___x_2432_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_2361_, v_a_2431_, v___y_2329_);
if (lean_obj_tag(v___x_2432_) == 0)
{
uint8_t v___x_2433_; lean_object* v___x_2434_; 
lean_dec_ref(v___x_2432_);
v___x_2433_ = 0;
lean_inc(v_a_2429_);
v___x_2434_ = l_Lean_Meta_setInlineAttribute(v_a_2429_, v___x_2433_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_dec_ref(v___x_2434_);
if (v_isMeta_2324_ == 0)
{
lean_object* v___x_2435_; 
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
v___x_2435_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__0(v_a_2429_, v___x_2369_, v_compile_2322_, v_logCompileErrors_2323_, v___x_2369_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
v___y_2339_ = v___x_2435_;
goto v___jp_2338_;
}
else
{
lean_object* v___x_2436_; lean_object* v_env_2437_; lean_object* v_nextMacroScope_2438_; lean_object* v_ngen_2439_; lean_object* v_auxDeclNGen_2440_; lean_object* v_traceState_2441_; lean_object* v_messages_2442_; lean_object* v_infoState_2443_; lean_object* v_snapshotTasks_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2470_; 
v___x_2436_ = lean_st_ref_take(v___y_2331_);
v_env_2437_ = lean_ctor_get(v___x_2436_, 0);
v_nextMacroScope_2438_ = lean_ctor_get(v___x_2436_, 1);
v_ngen_2439_ = lean_ctor_get(v___x_2436_, 2);
v_auxDeclNGen_2440_ = lean_ctor_get(v___x_2436_, 3);
v_traceState_2441_ = lean_ctor_get(v___x_2436_, 4);
v_messages_2442_ = lean_ctor_get(v___x_2436_, 6);
v_infoState_2443_ = lean_ctor_get(v___x_2436_, 7);
v_snapshotTasks_2444_ = lean_ctor_get(v___x_2436_, 8);
v_isSharedCheck_2470_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2470_ == 0)
{
lean_object* v_unused_2471_; 
v_unused_2471_ = lean_ctor_get(v___x_2436_, 5);
lean_dec(v_unused_2471_);
v___x_2446_ = v___x_2436_;
v_isShared_2447_ = v_isSharedCheck_2470_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_snapshotTasks_2444_);
lean_inc(v_infoState_2443_);
lean_inc(v_messages_2442_);
lean_inc(v_traceState_2441_);
lean_inc(v_auxDeclNGen_2440_);
lean_inc(v_ngen_2439_);
lean_inc(v_nextMacroScope_2438_);
lean_inc(v_env_2437_);
lean_dec(v___x_2436_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2470_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2451_; 
lean_inc(v_a_2429_);
v___x_2448_ = l_Lean_markMeta(v_env_2437_, v_a_2429_);
v___x_2449_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 5, v___x_2449_);
lean_ctor_set(v___x_2446_, 0, v___x_2448_);
v___x_2451_ = v___x_2446_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v___x_2448_);
lean_ctor_set(v_reuseFailAlloc_2469_, 1, v_nextMacroScope_2438_);
lean_ctor_set(v_reuseFailAlloc_2469_, 2, v_ngen_2439_);
lean_ctor_set(v_reuseFailAlloc_2469_, 3, v_auxDeclNGen_2440_);
lean_ctor_set(v_reuseFailAlloc_2469_, 4, v_traceState_2441_);
lean_ctor_set(v_reuseFailAlloc_2469_, 5, v___x_2449_);
lean_ctor_set(v_reuseFailAlloc_2469_, 6, v_messages_2442_);
lean_ctor_set(v_reuseFailAlloc_2469_, 7, v_infoState_2443_);
lean_ctor_set(v_reuseFailAlloc_2469_, 8, v_snapshotTasks_2444_);
v___x_2451_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v_mctx_2454_; lean_object* v_zetaDeltaFVarIds_2455_; lean_object* v_postponed_2456_; lean_object* v_diag_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2467_; 
v___x_2452_ = lean_st_ref_set(v___y_2331_, v___x_2451_);
v___x_2453_ = lean_st_ref_take(v___y_2329_);
v_mctx_2454_ = lean_ctor_get(v___x_2453_, 0);
v_zetaDeltaFVarIds_2455_ = lean_ctor_get(v___x_2453_, 2);
v_postponed_2456_ = lean_ctor_get(v___x_2453_, 3);
v_diag_2457_ = lean_ctor_get(v___x_2453_, 4);
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2467_ == 0)
{
lean_object* v_unused_2468_; 
v_unused_2468_ = lean_ctor_get(v___x_2453_, 1);
lean_dec(v_unused_2468_);
v___x_2459_ = v___x_2453_;
v_isShared_2460_ = v_isSharedCheck_2467_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_diag_2457_);
lean_inc(v_postponed_2456_);
lean_inc(v_zetaDeltaFVarIds_2455_);
lean_inc(v_mctx_2454_);
lean_dec(v___x_2453_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2467_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v___x_2461_; lean_object* v___x_2463_; 
v___x_2461_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3);
if (v_isShared_2460_ == 0)
{
lean_ctor_set(v___x_2459_, 1, v___x_2461_);
v___x_2463_ = v___x_2459_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_mctx_2454_);
lean_ctor_set(v_reuseFailAlloc_2466_, 1, v___x_2461_);
lean_ctor_set(v_reuseFailAlloc_2466_, 2, v_zetaDeltaFVarIds_2455_);
lean_ctor_set(v_reuseFailAlloc_2466_, 3, v_postponed_2456_);
lean_ctor_set(v_reuseFailAlloc_2466_, 4, v_diag_2457_);
v___x_2463_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2464_ = lean_st_ref_set(v___y_2329_, v___x_2463_);
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
v___x_2465_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__0(v_a_2429_, v___x_2369_, v_compile_2322_, v_logCompileErrors_2323_, v___x_2369_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
v___y_2339_ = v___x_2465_;
goto v___jp_2338_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2429_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
return v___x_2434_;
}
}
else
{
lean_dec(v_a_2429_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
return v___x_2432_;
}
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
lean_dec(v_a_2429_);
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2472_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2430_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2430_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec(v_a_2366_);
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2480_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___x_2428_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___x_2428_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
else
{
lean_object* v___x_2488_; 
lean_dec(v_a_2366_);
lean_inc(v___x_2371_);
v___x_2488_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_2361_, v___x_2371_, v___y_2329_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_dec_ref(v___x_2488_);
v_a_2334_ = v___x_2369_;
goto v___jp_2333_;
}
else
{
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
return v___x_2488_;
}
}
}
else
{
lean_object* v_a_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2496_; 
lean_dec(v_a_2366_);
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2489_ = lean_ctor_get(v___x_2424_, 0);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2496_ == 0)
{
v___x_2491_ = v___x_2424_;
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
else
{
lean_inc(v_a_2489_);
lean_dec(v___x_2424_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2494_; 
if (v_isShared_2492_ == 0)
{
v___x_2494_ = v___x_2491_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_a_2489_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
return v___x_2494_;
}
}
}
}
else
{
lean_object* v_a_2497_; lean_object* v___x_2499_; uint8_t v_isShared_2500_; uint8_t v_isSharedCheck_2504_; 
lean_dec(v_a_2366_);
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2497_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2504_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2499_ = v___x_2422_;
v_isShared_2500_ = v_isSharedCheck_2504_;
goto v_resetjp_2498_;
}
else
{
lean_inc(v_a_2497_);
lean_dec(v___x_2422_);
v___x_2499_ = lean_box(0);
v_isShared_2500_ = v_isSharedCheck_2504_;
goto v_resetjp_2498_;
}
v_resetjp_2498_:
{
lean_object* v___x_2502_; 
if (v_isShared_2500_ == 0)
{
v___x_2502_ = v___x_2499_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v_a_2497_);
v___x_2502_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
return v___x_2502_;
}
}
}
}
}
else
{
goto v___jp_2396_;
}
}
else
{
lean_dec_ref(v_a_2374_);
goto v___jp_2396_;
}
v___jp_2378_:
{
lean_object* v___x_2380_; 
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v___x_2371_);
v___x_2380_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__1(v___x_2371_, v_a_2366_, v_compile_2322_, v_logCompileErrors_2323_, v_isMeta_2324_, v___x_2361_, v___x_2369_, v_a_2379_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
v___y_2339_ = v___x_2380_;
goto v___jp_2338_;
}
v___jp_2381_:
{
if (v___y_2383_ == 0)
{
lean_dec_ref(v___y_2382_);
lean_del_object(v___x_2376_);
v_a_2379_ = v___x_2369_;
goto v___jp_2378_;
}
else
{
lean_object* v___x_2385_; 
lean_dec(v_a_2366_);
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
if (v_isShared_2377_ == 0)
{
lean_ctor_set_tag(v___x_2376_, 1);
lean_ctor_set(v___x_2376_, 0, v___y_2382_);
v___x_2385_ = v___x_2376_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v___y_2382_);
v___x_2385_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
return v___x_2385_;
}
}
}
v___jp_2387_:
{
uint8_t v___x_2389_; 
v___x_2389_ = l_Lean_Exception_isInterrupt(v_a_2388_);
if (v___x_2389_ == 0)
{
uint8_t v___x_2390_; 
lean_inc_ref(v_a_2388_);
v___x_2390_ = l_Lean_Exception_isRuntime(v_a_2388_);
v___y_2382_ = v_a_2388_;
v___y_2383_ = v___x_2390_;
goto v___jp_2381_;
}
else
{
v___y_2382_ = v_a_2388_;
v___y_2383_ = v___x_2389_;
goto v___jp_2381_;
}
}
v___jp_2391_:
{
if (lean_obj_tag(v___y_2392_) == 0)
{
lean_object* v_a_2393_; 
lean_del_object(v___x_2376_);
v_a_2393_ = lean_ctor_get(v___y_2392_, 0);
lean_inc(v_a_2393_);
lean_dec_ref(v___y_2392_);
if (lean_obj_tag(v_a_2393_) == 0)
{
lean_dec(v_a_2366_);
lean_dec(v___x_2361_);
v_a_2334_ = v___x_2369_;
goto v___jp_2333_;
}
else
{
lean_object* v_a_2394_; 
v_a_2394_ = lean_ctor_get(v_a_2393_, 0);
lean_inc(v_a_2394_);
lean_dec_ref(v_a_2393_);
v_a_2379_ = v_a_2394_;
goto v___jp_2378_;
}
}
else
{
lean_object* v_a_2395_; 
v_a_2395_ = lean_ctor_get(v___y_2392_, 0);
lean_inc(v_a_2395_);
lean_dec_ref(v___y_2392_);
v_a_2388_ = v_a_2395_;
goto v___jp_2387_;
}
}
v___jp_2396_:
{
lean_object* v_options_2397_; lean_object* v___x_2398_; uint8_t v___x_2399_; 
v_options_2397_ = lean_ctor_get(v___y_2330_, 2);
v___x_2398_ = l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances;
v___x_2399_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_2397_, v___x_2398_);
if (v___x_2399_ == 0)
{
lean_object* v___x_2400_; 
lean_del_object(v___x_2376_);
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v___x_2371_);
v___x_2400_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__1(v___x_2371_, v_a_2366_, v_compile_2322_, v_logCompileErrors_2323_, v_isMeta_2324_, v___x_2361_, v___x_2369_, v___x_2369_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
v___y_2339_ = v___x_2400_;
goto v___jp_2338_;
}
else
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2401_ = lean_box(0);
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v_a_2366_);
v___x_2402_ = l_Lean_Meta_trySynthInstance(v_a_2366_, v___x_2401_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; 
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_a_2403_);
lean_dec_ref(v___x_2402_);
if (lean_obj_tag(v_a_2403_) == 1)
{
lean_object* v_a_2404_; lean_object* v___x_2405_; 
v_a_2404_ = lean_ctor_get(v_a_2403_, 0);
lean_inc(v_a_2404_);
lean_dec_ref(v_a_2403_);
v___x_2405_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_2370_, v___y_2330_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_a_2406_; uint8_t v___x_2407_; 
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
lean_inc(v_a_2406_);
lean_dec_ref(v___x_2405_);
v___x_2407_ = lean_unbox(v_a_2406_);
lean_dec(v_a_2406_);
if (v___x_2407_ == 0)
{
lean_object* v___x_2408_; 
lean_inc(v___x_2361_);
v___x_2408_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__2(v___x_2361_, v_a_2404_, v___x_2369_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
v___y_2392_ = v___x_2408_;
goto v___jp_2391_;
}
else
{
lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2409_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1);
lean_inc(v_a_2404_);
v___x_2410_ = l_Lean_MessageData_ofExpr(v_a_2404_);
v___x_2411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2409_);
lean_ctor_set(v___x_2411_, 1, v___x_2410_);
v___x_2412_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_2370_, v___x_2411_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; lean_object* v___x_2414_; 
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
lean_inc(v_a_2413_);
lean_dec_ref(v___x_2412_);
lean_inc(v___x_2361_);
v___x_2414_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__2(v___x_2361_, v_a_2404_, v_a_2413_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
v___y_2392_ = v___x_2414_;
goto v___jp_2391_;
}
else
{
lean_object* v_a_2415_; 
lean_dec(v_a_2404_);
v_a_2415_ = lean_ctor_get(v___x_2412_, 0);
lean_inc(v_a_2415_);
lean_dec_ref(v___x_2412_);
v_a_2388_ = v_a_2415_;
goto v___jp_2387_;
}
}
}
else
{
lean_object* v_a_2416_; 
lean_dec(v_a_2404_);
v_a_2416_ = lean_ctor_get(v___x_2405_, 0);
lean_inc(v_a_2416_);
lean_dec_ref(v___x_2405_);
v_a_2388_ = v_a_2416_;
goto v___jp_2387_;
}
}
else
{
lean_dec(v_a_2403_);
lean_del_object(v___x_2376_);
v_a_2379_ = v___x_2369_;
goto v___jp_2378_;
}
}
else
{
lean_object* v_a_2417_; 
v_a_2417_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_a_2417_);
lean_dec_ref(v___x_2402_);
v_a_2388_ = v_a_2417_;
goto v___jp_2387_;
}
}
}
}
}
else
{
lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2513_; 
lean_dec(v_a_2366_);
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2506_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2508_ = v___x_2373_;
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2373_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v___x_2511_; 
if (v_isShared_2509_ == 0)
{
v___x_2511_ = v___x_2508_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_a_2506_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
}
}
else
{
lean_object* v___x_2514_; 
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v___x_2371_);
v___x_2514_ = lean_infer_type(v___x_2371_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; lean_object* v___x_2516_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2515_);
lean_dec_ref(v___x_2514_);
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v_a_2515_);
lean_inc(v_a_2366_);
v___x_2516_ = l_Lean_Meta_isExprDefEq(v_a_2366_, v_a_2515_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2516_) == 0)
{
lean_object* v_a_2517_; uint8_t v___x_2518_; 
v_a_2517_ = lean_ctor_get(v___x_2516_, 0);
lean_inc(v_a_2517_);
lean_dec_ref(v___x_2516_);
v___x_2518_ = lean_unbox(v_a_2517_);
lean_dec(v_a_2517_);
if (v___x_2518_ == 0)
{
lean_object* v___x_2519_; 
v___x_2519_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_2370_, v___y_2330_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v_a_2520_; uint8_t v___x_2521_; 
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
lean_inc(v_a_2520_);
lean_dec_ref(v___x_2519_);
v___x_2521_ = lean_unbox(v_a_2520_);
lean_dec(v_a_2520_);
if (v___x_2521_ == 0)
{
lean_object* v___x_2522_; 
lean_dec(v_a_2515_);
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v___x_2371_);
v___x_2522_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__3(v_a_2366_, v___x_2371_, v___x_2321_, v___x_2361_, v___x_2369_, v___x_2369_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
v___y_2339_ = v___x_2522_;
goto v___jp_2338_;
}
else
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2523_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3);
lean_inc(v_a_2326_);
v___x_2524_ = l_Nat_reprFast(v_a_2326_);
v___x_2525_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2524_);
v___x_2526_ = l_Lean_MessageData_ofFormat(v___x_2525_);
v___x_2527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2523_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5);
v___x_2529_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2527_);
lean_ctor_set(v___x_2529_, 1, v___x_2528_);
lean_inc(v_a_2366_);
v___x_2530_ = l_Lean_MessageData_ofExpr(v_a_2366_);
v___x_2531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2529_);
lean_ctor_set(v___x_2531_, 1, v___x_2530_);
v___x_2532_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7);
v___x_2533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2531_);
lean_ctor_set(v___x_2533_, 1, v___x_2532_);
v___x_2534_ = l_Lean_MessageData_ofExpr(v_a_2515_);
v___x_2535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2535_, 0, v___x_2533_);
lean_ctor_set(v___x_2535_, 1, v___x_2534_);
v___x_2536_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9);
v___x_2537_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2537_, 0, v___x_2535_);
lean_ctor_set(v___x_2537_, 1, v___x_2536_);
lean_inc(v___x_2371_);
v___x_2538_ = l_Lean_MessageData_ofExpr(v___x_2371_);
v___x_2539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2537_);
lean_ctor_set(v___x_2539_, 1, v___x_2538_);
v___x_2540_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_2370_, v___x_2539_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; lean_object* v___x_2542_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_a_2541_);
lean_dec_ref(v___x_2540_);
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
lean_inc(v___y_2329_);
lean_inc_ref(v___y_2328_);
lean_inc(v___x_2371_);
v___x_2542_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__3(v_a_2366_, v___x_2371_, v___x_2321_, v___x_2361_, v___x_2369_, v_a_2541_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
v___y_2339_ = v___x_2542_;
goto v___jp_2338_;
}
else
{
lean_dec(v_a_2366_);
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
return v___x_2540_;
}
}
}
else
{
lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2550_; 
lean_dec(v_a_2515_);
lean_dec(v_a_2366_);
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2543_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2545_ = v___x_2519_;
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_dec(v___x_2519_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2548_; 
if (v_isShared_2546_ == 0)
{
v___x_2548_ = v___x_2545_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2543_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
else
{
lean_object* v___x_2551_; 
lean_dec(v_a_2515_);
lean_dec(v_a_2366_);
lean_inc(v___x_2371_);
v___x_2551_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_2361_, v___x_2371_, v___y_2329_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_dec_ref(v___x_2551_);
v_a_2334_ = v___x_2369_;
goto v___jp_2333_;
}
else
{
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
return v___x_2551_;
}
}
}
else
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2559_; 
lean_dec(v_a_2515_);
lean_dec(v_a_2366_);
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2552_ = lean_ctor_get(v___x_2516_, 0);
v_isSharedCheck_2559_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2554_ = v___x_2516_;
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v___x_2516_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2557_; 
if (v_isShared_2555_ == 0)
{
v___x_2557_ = v___x_2554_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2552_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
}
else
{
lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2567_; 
lean_dec(v_a_2366_);
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2560_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2567_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2562_ = v___x_2514_;
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v___x_2514_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2565_; 
if (v_isShared_2563_ == 0)
{
v___x_2565_ = v___x_2562_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_a_2560_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
}
}
}
else
{
lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2575_; 
lean_dec(v_a_2366_);
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2568_ = lean_ctor_get(v___x_2367_, 0);
v_isSharedCheck_2575_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2570_ = v___x_2367_;
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_dec(v___x_2367_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2573_; 
if (v_isShared_2571_ == 0)
{
v___x_2573_ = v___x_2570_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v_a_2568_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
}
else
{
lean_object* v_a_2576_; lean_object* v___x_2578_; uint8_t v_isShared_2579_; uint8_t v_isSharedCheck_2583_; 
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2576_ = lean_ctor_get(v___x_2365_, 0);
v_isSharedCheck_2583_ = !lean_is_exclusive(v___x_2365_);
if (v_isSharedCheck_2583_ == 0)
{
v___x_2578_ = v___x_2365_;
v_isShared_2579_ = v_isSharedCheck_2583_;
goto v_resetjp_2577_;
}
else
{
lean_inc(v_a_2576_);
lean_dec(v___x_2365_);
v___x_2578_ = lean_box(0);
v_isShared_2579_ = v_isSharedCheck_2583_;
goto v_resetjp_2577_;
}
v_resetjp_2577_:
{
lean_object* v___x_2581_; 
if (v_isShared_2579_ == 0)
{
v___x_2581_ = v___x_2578_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v_a_2576_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
return v___x_2581_;
}
}
}
}
else
{
lean_object* v_a_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2591_; 
lean_dec(v___x_2361_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2584_ = lean_ctor_get(v___x_2362_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2586_ = v___x_2362_;
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_a_2584_);
lean_dec(v___x_2362_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2589_; 
if (v_isShared_2587_ == 0)
{
v___x_2589_ = v___x_2586_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_a_2584_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
}
v___jp_2333_:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2335_ = lean_unsigned_to_nat(1u);
v___x_2336_ = lean_nat_add(v_a_2326_, v___x_2335_);
lean_dec(v_a_2326_);
v_a_2326_ = v___x_2336_;
v_b_2327_ = v_a_2334_;
goto _start;
}
v___jp_2338_:
{
if (lean_obj_tag(v___y_2339_) == 0)
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2349_; 
v_a_2340_ = lean_ctor_get(v___y_2339_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___y_2339_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2342_ = v___y_2339_;
v_isShared_2343_ = v_isSharedCheck_2349_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___y_2339_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2349_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
if (lean_obj_tag(v_a_2340_) == 0)
{
lean_object* v_a_2344_; lean_object* v___x_2346_; 
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2344_ = lean_ctor_get(v_a_2340_, 0);
lean_inc(v_a_2344_);
lean_dec_ref(v_a_2340_);
if (v_isShared_2343_ == 0)
{
lean_ctor_set(v___x_2342_, 0, v_a_2344_);
v___x_2346_ = v___x_2342_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_a_2344_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
else
{
lean_object* v_a_2348_; 
lean_del_object(v___x_2342_);
v_a_2348_ = lean_ctor_get(v_a_2340_, 0);
lean_inc(v_a_2348_);
lean_dec_ref(v_a_2340_);
v_a_2334_ = v_a_2348_;
goto v___jp_2333_;
}
}
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_a_2326_);
v_a_2350_ = lean_ctor_get(v___y_2339_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___y_2339_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___y_2339_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___y_2339_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13(lean_object* v_a_2592_, lean_object* v_expectedType_2593_, uint8_t v___x_2594_, uint8_t v___x_2595_, uint8_t v_compile_2596_, uint8_t v_logCompileErrors_2597_, uint8_t v_isMeta_2598_, lean_object* v_x_2599_, lean_object* v_x_2600_, lean_object* v_x_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_){
_start:
{
lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v___y_2633_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2650_; 
if (lean_obj_tag(v_x_2599_) == 5)
{
lean_object* v_fn_2717_; lean_object* v_arg_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; 
v_fn_2717_ = lean_ctor_get(v_x_2599_, 0);
lean_inc_ref(v_fn_2717_);
v_arg_2718_ = lean_ctor_get(v_x_2599_, 1);
lean_inc_ref(v_arg_2718_);
lean_dec_ref(v_x_2599_);
v___x_2719_ = lean_array_set(v_x_2600_, v_x_2601_, v_arg_2718_);
v___x_2720_ = lean_unsigned_to_nat(1u);
v___x_2721_ = lean_nat_sub(v_x_2601_, v___x_2720_);
lean_dec(v_x_2601_);
v_x_2599_ = v_fn_2717_;
v_x_2600_ = v___x_2719_;
v_x_2601_ = v___x_2721_;
goto _start;
}
else
{
lean_object* v_cls_2723_; lean_object* v___y_2725_; lean_object* v___y_2726_; lean_object* v___y_2727_; lean_object* v___y_2728_; lean_object* v___x_2744_; 
lean_dec(v_x_2601_);
v_cls_2723_ = ((lean_object*)(l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_));
v___x_2744_ = l_Lean_Expr_constName_x3f(v_x_2599_);
if (lean_obj_tag(v___x_2744_) == 0)
{
lean_dec_ref(v_x_2600_);
lean_dec_ref(v_x_2599_);
v___y_2725_ = v___y_2602_;
v___y_2726_ = v___y_2603_;
v___y_2727_ = v___y_2604_;
v___y_2728_ = v___y_2605_;
goto v___jp_2724_;
}
else
{
lean_object* v_val_2745_; lean_object* v___x_2746_; 
v_val_2745_ = lean_ctor_get(v___x_2744_, 0);
lean_inc(v_val_2745_);
lean_dec_ref(v___x_2744_);
lean_inc_ref(v___y_2604_);
v___x_2746_ = l_Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5(v_val_2745_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc(v_a_2747_);
lean_dec_ref(v___x_2746_);
if (lean_obj_tag(v_a_2747_) == 6)
{
lean_object* v_val_2748_; lean_object* v___x_2749_; 
lean_dec_ref(v_a_2592_);
v_val_2748_ = lean_ctor_get(v_a_2747_, 0);
lean_inc_ref(v_val_2748_);
lean_dec_ref(v_a_2747_);
lean_inc(v___y_2605_);
lean_inc_ref(v___y_2604_);
lean_inc(v___y_2603_);
lean_inc_ref(v___y_2602_);
lean_inc_ref(v_x_2599_);
v___x_2749_ = lean_infer_type(v_x_2599_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; uint8_t v___x_2751_; lean_object* v___x_2752_; 
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
lean_inc(v_a_2750_);
lean_dec_ref(v___x_2749_);
v___x_2751_ = 0;
lean_inc(v___y_2605_);
lean_inc_ref(v___y_2604_);
lean_inc(v___y_2603_);
lean_inc_ref(v___y_2602_);
v___x_2752_ = l_Lean_Meta_forallMetaTelescope(v_a_2750_, v___x_2751_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2752_) == 0)
{
lean_object* v_a_2753_; lean_object* v_snd_2754_; lean_object* v_fst_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2854_; 
v_a_2753_ = lean_ctor_get(v___x_2752_, 0);
lean_inc(v_a_2753_);
lean_dec_ref(v___x_2752_);
v_snd_2754_ = lean_ctor_get(v_a_2753_, 1);
v_fst_2755_ = lean_ctor_get(v_a_2753_, 0);
v_isSharedCheck_2854_ = !lean_is_exclusive(v_a_2753_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2757_ = v_a_2753_;
v_isShared_2758_ = v_isSharedCheck_2854_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_snd_2754_);
lean_inc(v_fst_2755_);
lean_dec(v_a_2753_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2854_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v_snd_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2852_; 
v_snd_2759_ = lean_ctor_get(v_snd_2754_, 1);
v_isSharedCheck_2852_ = !lean_is_exclusive(v_snd_2754_);
if (v_isSharedCheck_2852_ == 0)
{
lean_object* v_unused_2853_; 
v_unused_2853_ = lean_ctor_get(v_snd_2754_, 0);
lean_dec(v_unused_2853_);
v___x_2761_ = v_snd_2754_;
v_isShared_2762_ = v_isSharedCheck_2852_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_snd_2759_);
lean_dec(v_snd_2754_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2852_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v___x_2763_; lean_object* v___y_2765_; lean_object* v___y_2766_; lean_object* v___y_2767_; lean_object* v___y_2768_; lean_object* v___x_2800_; uint8_t v___x_2801_; 
v___x_2763_ = lean_array_get_size(v_x_2600_);
v___x_2800_ = lean_array_get_size(v_fst_2755_);
v___x_2801_ = lean_nat_dec_eq(v___x_2763_, v___x_2800_);
if (v___x_2801_ == 0)
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2805_; 
lean_dec(v_snd_2759_);
lean_dec(v_fst_2755_);
lean_dec_ref(v_val_2748_);
lean_dec_ref(v_expectedType_2593_);
v___x_2802_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5);
v___x_2803_ = l_Lean_MessageData_ofExpr(v_x_2599_);
if (v_isShared_2762_ == 0)
{
lean_ctor_set_tag(v___x_2761_, 7);
lean_ctor_set(v___x_2761_, 1, v___x_2803_);
lean_ctor_set(v___x_2761_, 0, v___x_2802_);
v___x_2805_ = v___x_2761_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v___x_2802_);
lean_ctor_set(v_reuseFailAlloc_2816_, 1, v___x_2803_);
v___x_2805_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
lean_object* v___x_2806_; lean_object* v___x_2808_; 
v___x_2806_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7);
if (v_isShared_2758_ == 0)
{
lean_ctor_set_tag(v___x_2757_, 7);
lean_ctor_set(v___x_2757_, 1, v___x_2806_);
lean_ctor_set(v___x_2757_, 0, v___x_2805_);
v___x_2808_ = v___x_2757_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2805_);
lean_ctor_set(v_reuseFailAlloc_2815_, 1, v___x_2806_);
v___x_2808_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2809_ = lean_array_to_list(v_x_2600_);
v___x_2810_ = lean_box(0);
v___x_2811_ = l_List_mapTR_loop___at___00Lean_Meta_normalizeInstance_spec__9(v___x_2809_, v___x_2810_);
v___x_2812_ = l_Lean_MessageData_ofList(v___x_2811_);
v___x_2813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2813_, 0, v___x_2808_);
lean_ctor_set(v___x_2813_, 1, v___x_2812_);
v___x_2814_ = l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg(v___x_2813_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
return v___x_2814_;
}
}
}
else
{
lean_object* v___x_2817_; 
lean_inc(v___y_2605_);
lean_inc_ref(v___y_2604_);
lean_inc(v___y_2603_);
lean_inc_ref(v___y_2602_);
lean_inc_ref(v_expectedType_2593_);
v___x_2817_ = l_Lean_Meta_isExprDefEq(v_expectedType_2593_, v_snd_2759_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v_a_2818_; uint8_t v___x_2819_; 
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
lean_inc(v_a_2818_);
lean_dec_ref(v___x_2817_);
v___x_2819_ = lean_unbox(v_a_2818_);
lean_dec(v_a_2818_);
if (v___x_2819_ == 0)
{
lean_object* v_toConstantVal_2820_; lean_object* v_name_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2825_; 
lean_dec(v_fst_2755_);
lean_dec_ref(v_x_2600_);
lean_dec_ref(v_x_2599_);
v_toConstantVal_2820_ = lean_ctor_get(v_val_2748_, 0);
lean_inc_ref(v_toConstantVal_2820_);
lean_dec_ref(v_val_2748_);
v_name_2821_ = lean_ctor_get(v_toConstantVal_2820_, 0);
lean_inc(v_name_2821_);
lean_dec_ref(v_toConstantVal_2820_);
v___x_2822_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9);
v___x_2823_ = l_Lean_MessageData_ofExpr(v_expectedType_2593_);
if (v_isShared_2762_ == 0)
{
lean_ctor_set_tag(v___x_2761_, 7);
lean_ctor_set(v___x_2761_, 1, v___x_2823_);
lean_ctor_set(v___x_2761_, 0, v___x_2822_);
v___x_2825_ = v___x_2761_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v___x_2822_);
lean_ctor_set(v_reuseFailAlloc_2843_, 1, v___x_2823_);
v___x_2825_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
lean_object* v___x_2826_; lean_object* v___x_2828_; 
v___x_2826_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11);
if (v_isShared_2758_ == 0)
{
lean_ctor_set_tag(v___x_2757_, 7);
lean_ctor_set(v___x_2757_, 1, v___x_2826_);
lean_ctor_set(v___x_2757_, 0, v___x_2825_);
v___x_2828_ = v___x_2757_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v___x_2825_);
lean_ctor_set(v_reuseFailAlloc_2842_, 1, v___x_2826_);
v___x_2828_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
v___x_2829_ = l_Lean_MessageData_ofConstName(v_name_2821_, v___x_2594_);
v___x_2830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2828_);
lean_ctor_set(v___x_2830_, 1, v___x_2829_);
v___x_2831_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3);
v___x_2832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2830_);
lean_ctor_set(v___x_2832_, 1, v___x_2831_);
v___x_2833_ = l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg(v___x_2832_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2833_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2833_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
}
}
else
{
lean_del_object(v___x_2761_);
lean_del_object(v___x_2757_);
lean_dec_ref(v_expectedType_2593_);
v___y_2765_ = v___y_2602_;
v___y_2766_ = v___y_2603_;
v___y_2767_ = v___y_2604_;
v___y_2768_ = v___y_2605_;
goto v___jp_2764_;
}
}
else
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
lean_del_object(v___x_2761_);
lean_del_object(v___x_2757_);
lean_dec(v_fst_2755_);
lean_dec_ref(v_val_2748_);
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec_ref(v_x_2600_);
lean_dec_ref(v_x_2599_);
lean_dec_ref(v_expectedType_2593_);
v_a_2844_ = lean_ctor_get(v___x_2817_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v___x_2817_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___x_2817_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2844_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
}
v___jp_2764_:
{
lean_object* v_numParams_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v_numParams_2769_ = lean_ctor_get(v_val_2748_, 3);
lean_inc(v_numParams_2769_);
lean_dec_ref(v_val_2748_);
v___x_2770_ = lean_box(0);
lean_inc(v___y_2766_);
v___x_2771_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12___redArg(v___x_2763_, v_fst_2755_, v_x_2600_, v___x_2595_, v_compile_2596_, v_logCompileErrors_2597_, v_isMeta_2598_, v___x_2594_, v_numParams_2769_, v___x_2770_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_);
lean_dec_ref(v_x_2600_);
if (lean_obj_tag(v___x_2771_) == 0)
{
size_t v_sz_2772_; size_t v___x_2773_; lean_object* v___x_2774_; 
lean_dec_ref(v___x_2771_);
v_sz_2772_ = lean_array_size(v_fst_2755_);
v___x_2773_ = ((size_t)0ULL);
v___x_2774_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6___redArg(v_sz_2772_, v___x_2773_, v_fst_2755_, v___y_2766_);
lean_dec(v___y_2766_);
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_object* v_a_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2783_; 
v_a_2775_ = lean_ctor_get(v___x_2774_, 0);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2774_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2777_ = v___x_2774_;
v_isShared_2778_ = v_isSharedCheck_2783_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_a_2775_);
lean_dec(v___x_2774_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2783_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2779_; lean_object* v___x_2781_; 
v___x_2779_ = l_Lean_mkAppN(v_x_2599_, v_a_2775_);
lean_dec(v_a_2775_);
if (v_isShared_2778_ == 0)
{
lean_ctor_set(v___x_2777_, 0, v___x_2779_);
v___x_2781_ = v___x_2777_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v___x_2779_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
}
else
{
lean_object* v_a_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2791_; 
lean_dec_ref(v_x_2599_);
v_a_2784_ = lean_ctor_get(v___x_2774_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___x_2774_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2786_ = v___x_2774_;
v_isShared_2787_ = v_isSharedCheck_2791_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_a_2784_);
lean_dec(v___x_2774_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2791_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v___x_2789_; 
if (v_isShared_2787_ == 0)
{
v___x_2789_ = v___x_2786_;
goto v_reusejp_2788_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v_a_2784_);
v___x_2789_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2788_;
}
v_reusejp_2788_:
{
return v___x_2789_;
}
}
}
}
else
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2799_; 
lean_dec(v___y_2766_);
lean_dec(v_fst_2755_);
lean_dec_ref(v_x_2599_);
v_a_2792_ = lean_ctor_get(v___x_2771_, 0);
v_isSharedCheck_2799_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2799_ == 0)
{
v___x_2794_ = v___x_2771_;
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v___x_2771_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2797_; 
if (v_isShared_2795_ == 0)
{
v___x_2797_ = v___x_2794_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_a_2792_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2862_; 
lean_dec_ref(v_val_2748_);
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec_ref(v_x_2600_);
lean_dec_ref(v_x_2599_);
lean_dec_ref(v_expectedType_2593_);
v_a_2855_ = lean_ctor_get(v___x_2752_, 0);
v_isSharedCheck_2862_ = !lean_is_exclusive(v___x_2752_);
if (v_isSharedCheck_2862_ == 0)
{
v___x_2857_ = v___x_2752_;
v_isShared_2858_ = v_isSharedCheck_2862_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_a_2855_);
lean_dec(v___x_2752_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2862_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2860_; 
if (v_isShared_2858_ == 0)
{
v___x_2860_ = v___x_2857_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v_a_2855_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
}
else
{
lean_dec_ref(v_val_2748_);
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec_ref(v_x_2600_);
lean_dec_ref(v_x_2599_);
lean_dec_ref(v_expectedType_2593_);
return v___x_2749_;
}
}
else
{
lean_dec(v_a_2747_);
lean_dec_ref(v_x_2600_);
lean_dec_ref(v_x_2599_);
v___y_2725_ = v___y_2602_;
v___y_2726_ = v___y_2603_;
v___y_2727_ = v___y_2604_;
v___y_2728_ = v___y_2605_;
goto v___jp_2724_;
}
}
else
{
lean_object* v_a_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2870_; 
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec_ref(v_x_2600_);
lean_dec_ref(v_x_2599_);
lean_dec_ref(v_expectedType_2593_);
lean_dec_ref(v_a_2592_);
v_a_2863_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2870_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2870_ == 0)
{
v___x_2865_ = v___x_2746_;
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_a_2863_);
lean_dec(v___x_2746_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2868_; 
if (v_isShared_2866_ == 0)
{
v___x_2868_ = v___x_2865_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v_a_2863_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
}
v___jp_2724_:
{
lean_object* v___x_2729_; lean_object* v_a_2730_; uint8_t v___x_2731_; 
v___x_2729_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_2723_, v___y_2727_);
v_a_2730_ = lean_ctor_get(v___x_2729_, 0);
lean_inc(v_a_2730_);
lean_dec_ref(v___x_2729_);
v___x_2731_ = lean_unbox(v_a_2730_);
lean_dec(v_a_2730_);
if (v___x_2731_ == 0)
{
v___y_2647_ = v___y_2725_;
v___y_2648_ = v___y_2726_;
v___y_2649_ = v___y_2727_;
v___y_2650_ = v___y_2728_;
goto v___jp_2646_;
}
else
{
lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2732_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3);
lean_inc_ref(v_a_2592_);
v___x_2733_ = l_Lean_MessageData_ofExpr(v_a_2592_);
v___x_2734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2732_);
lean_ctor_set(v___x_2734_, 1, v___x_2733_);
v___x_2735_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_2723_, v___x_2734_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_);
if (lean_obj_tag(v___x_2735_) == 0)
{
lean_dec_ref(v___x_2735_);
v___y_2647_ = v___y_2725_;
v___y_2648_ = v___y_2726_;
v___y_2649_ = v___y_2727_;
v___y_2650_ = v___y_2728_;
goto v___jp_2646_;
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2743_; 
lean_dec(v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec_ref(v_expectedType_2593_);
lean_dec_ref(v_a_2592_);
v_a_2736_ = lean_ctor_get(v___x_2735_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2735_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2738_ = v___x_2735_;
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2735_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
if (v_isShared_2739_ == 0)
{
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
}
}
v___jp_2607_:
{
lean_object* v___x_2612_; 
v___x_2612_ = l_Lean_enableRealizationsForConst(v___y_2609_, v___y_2610_, v___y_2611_);
lean_dec(v___y_2611_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2619_; 
v_isSharedCheck_2619_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2619_ == 0)
{
lean_object* v_unused_2620_; 
v_unused_2620_ = lean_ctor_get(v___x_2612_, 0);
lean_dec(v_unused_2620_);
v___x_2614_ = v___x_2612_;
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
else
{
lean_dec(v___x_2612_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2617_; 
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 0, v___y_2608_);
v___x_2617_ = v___x_2614_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v___y_2608_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
}
else
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2628_; 
lean_dec_ref(v___y_2608_);
v_a_2621_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2628_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2628_ == 0)
{
v___x_2623_ = v___x_2612_;
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2612_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2626_; 
if (v_isShared_2624_ == 0)
{
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
return v___x_2626_;
}
}
}
}
v___jp_2629_:
{
if (v_compile_2596_ == 0)
{
v___y_2608_ = v___y_2630_;
v___y_2609_ = v___y_2631_;
v___y_2610_ = v___y_2632_;
v___y_2611_ = v___y_2633_;
goto v___jp_2607_;
}
else
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2634_ = lean_unsigned_to_nat(1u);
v___x_2635_ = lean_mk_empty_array_with_capacity(v___x_2634_);
lean_inc(v___y_2631_);
v___x_2636_ = lean_array_push(v___x_2635_, v___y_2631_);
lean_inc(v___y_2633_);
lean_inc_ref(v___y_2632_);
v___x_2637_ = l_Lean_compileDecls(v___x_2636_, v_logCompileErrors_2597_, v___y_2632_, v___y_2633_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_dec_ref(v___x_2637_);
v___y_2608_ = v___y_2630_;
v___y_2609_ = v___y_2631_;
v___y_2610_ = v___y_2632_;
v___y_2611_ = v___y_2633_;
goto v___jp_2607_;
}
else
{
lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
lean_dec(v___y_2633_);
lean_dec_ref(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2640_ = v___x_2637_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v___x_2637_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2641_ == 0)
{
v___x_2643_ = v___x_2640_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2638_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
}
}
v___jp_2646_:
{
lean_object* v_options_2651_; lean_object* v___x_2652_; uint8_t v___x_2653_; 
v_options_2651_ = lean_ctor_get(v___y_2649_, 2);
v___x_2652_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_2653_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_2651_, v___x_2652_);
if (v___x_2653_ == 0)
{
lean_object* v___x_2654_; 
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_expectedType_2593_);
v___x_2654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2654_, 0, v_a_2592_);
return v___x_2654_;
}
else
{
lean_object* v___x_2655_; 
lean_inc(v___y_2650_);
lean_inc_ref(v___y_2649_);
lean_inc(v___y_2648_);
lean_inc_ref(v___y_2647_);
lean_inc_ref(v_a_2592_);
v___x_2655_ = lean_infer_type(v_a_2592_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_a_2656_; lean_object* v___x_2657_; 
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_a_2656_);
lean_dec_ref(v___x_2655_);
lean_inc(v___y_2650_);
lean_inc_ref(v___y_2649_);
lean_inc(v___y_2648_);
lean_inc_ref(v___y_2647_);
lean_inc_ref(v_expectedType_2593_);
v___x_2657_ = l_Lean_Meta_isExprDefEq(v_expectedType_2593_, v_a_2656_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_);
if (lean_obj_tag(v___x_2657_) == 0)
{
lean_object* v_a_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2708_; 
v_a_2658_ = lean_ctor_get(v___x_2657_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2657_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2660_ = v___x_2657_;
v_isShared_2661_ = v_isSharedCheck_2708_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_a_2658_);
lean_dec(v___x_2657_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2708_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
uint8_t v___x_2662_; 
v___x_2662_ = lean_unbox(v_a_2658_);
lean_dec(v_a_2658_);
if (v___x_2662_ == 0)
{
lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v_a_2665_; lean_object* v___x_2666_; 
lean_del_object(v___x_2660_);
v___x_2663_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__1));
v___x_2664_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg(v___x_2663_, v___y_2650_);
v_a_2665_ = lean_ctor_get(v___x_2664_, 0);
lean_inc(v_a_2665_);
lean_dec_ref(v___x_2664_);
lean_inc(v___y_2650_);
lean_inc_ref(v___y_2649_);
lean_inc(v___y_2648_);
lean_inc(v_a_2665_);
v___x_2666_ = l_Lean_Meta_mkAuxDefinition(v_a_2665_, v_expectedType_2593_, v_a_2592_, v___x_2594_, v___x_2594_, v___x_2595_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_);
if (lean_obj_tag(v___x_2666_) == 0)
{
lean_object* v_a_2667_; uint8_t v___x_2668_; lean_object* v___x_2669_; 
v_a_2667_ = lean_ctor_get(v___x_2666_, 0);
lean_inc(v_a_2667_);
lean_dec_ref(v___x_2666_);
v___x_2668_ = 3;
lean_inc(v_a_2665_);
v___x_2669_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg(v_a_2665_, v___x_2668_, v___y_2648_, v___y_2650_);
lean_dec_ref(v___x_2669_);
if (v_isMeta_2598_ == 0)
{
lean_dec(v___y_2648_);
v___y_2630_ = v_a_2667_;
v___y_2631_ = v_a_2665_;
v___y_2632_ = v___y_2649_;
v___y_2633_ = v___y_2650_;
goto v___jp_2629_;
}
else
{
lean_object* v___x_2670_; lean_object* v_env_2671_; lean_object* v_nextMacroScope_2672_; lean_object* v_ngen_2673_; lean_object* v_auxDeclNGen_2674_; lean_object* v_traceState_2675_; lean_object* v_messages_2676_; lean_object* v_infoState_2677_; lean_object* v_snapshotTasks_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2703_; 
v___x_2670_ = lean_st_ref_take(v___y_2650_);
v_env_2671_ = lean_ctor_get(v___x_2670_, 0);
v_nextMacroScope_2672_ = lean_ctor_get(v___x_2670_, 1);
v_ngen_2673_ = lean_ctor_get(v___x_2670_, 2);
v_auxDeclNGen_2674_ = lean_ctor_get(v___x_2670_, 3);
v_traceState_2675_ = lean_ctor_get(v___x_2670_, 4);
v_messages_2676_ = lean_ctor_get(v___x_2670_, 6);
v_infoState_2677_ = lean_ctor_get(v___x_2670_, 7);
v_snapshotTasks_2678_ = lean_ctor_get(v___x_2670_, 8);
v_isSharedCheck_2703_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2703_ == 0)
{
lean_object* v_unused_2704_; 
v_unused_2704_ = lean_ctor_get(v___x_2670_, 5);
lean_dec(v_unused_2704_);
v___x_2680_ = v___x_2670_;
v_isShared_2681_ = v_isSharedCheck_2703_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_snapshotTasks_2678_);
lean_inc(v_infoState_2677_);
lean_inc(v_messages_2676_);
lean_inc(v_traceState_2675_);
lean_inc(v_auxDeclNGen_2674_);
lean_inc(v_ngen_2673_);
lean_inc(v_nextMacroScope_2672_);
lean_inc(v_env_2671_);
lean_dec(v___x_2670_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2703_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2685_; 
lean_inc(v_a_2665_);
v___x_2682_ = l_Lean_markMeta(v_env_2671_, v_a_2665_);
v___x_2683_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2);
if (v_isShared_2681_ == 0)
{
lean_ctor_set(v___x_2680_, 5, v___x_2683_);
lean_ctor_set(v___x_2680_, 0, v___x_2682_);
v___x_2685_ = v___x_2680_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v___x_2682_);
lean_ctor_set(v_reuseFailAlloc_2702_, 1, v_nextMacroScope_2672_);
lean_ctor_set(v_reuseFailAlloc_2702_, 2, v_ngen_2673_);
lean_ctor_set(v_reuseFailAlloc_2702_, 3, v_auxDeclNGen_2674_);
lean_ctor_set(v_reuseFailAlloc_2702_, 4, v_traceState_2675_);
lean_ctor_set(v_reuseFailAlloc_2702_, 5, v___x_2683_);
lean_ctor_set(v_reuseFailAlloc_2702_, 6, v_messages_2676_);
lean_ctor_set(v_reuseFailAlloc_2702_, 7, v_infoState_2677_);
lean_ctor_set(v_reuseFailAlloc_2702_, 8, v_snapshotTasks_2678_);
v___x_2685_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v_mctx_2688_; lean_object* v_zetaDeltaFVarIds_2689_; lean_object* v_postponed_2690_; lean_object* v_diag_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2700_; 
v___x_2686_ = lean_st_ref_set(v___y_2650_, v___x_2685_);
v___x_2687_ = lean_st_ref_take(v___y_2648_);
v_mctx_2688_ = lean_ctor_get(v___x_2687_, 0);
v_zetaDeltaFVarIds_2689_ = lean_ctor_get(v___x_2687_, 2);
v_postponed_2690_ = lean_ctor_get(v___x_2687_, 3);
v_diag_2691_ = lean_ctor_get(v___x_2687_, 4);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2687_);
if (v_isSharedCheck_2700_ == 0)
{
lean_object* v_unused_2701_; 
v_unused_2701_ = lean_ctor_get(v___x_2687_, 1);
lean_dec(v_unused_2701_);
v___x_2693_ = v___x_2687_;
v_isShared_2694_ = v_isSharedCheck_2700_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_diag_2691_);
lean_inc(v_postponed_2690_);
lean_inc(v_zetaDeltaFVarIds_2689_);
lean_inc(v_mctx_2688_);
lean_dec(v___x_2687_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2700_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2695_; lean_object* v___x_2697_; 
v___x_2695_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3);
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 1, v___x_2695_);
v___x_2697_ = v___x_2693_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v_mctx_2688_);
lean_ctor_set(v_reuseFailAlloc_2699_, 1, v___x_2695_);
lean_ctor_set(v_reuseFailAlloc_2699_, 2, v_zetaDeltaFVarIds_2689_);
lean_ctor_set(v_reuseFailAlloc_2699_, 3, v_postponed_2690_);
lean_ctor_set(v_reuseFailAlloc_2699_, 4, v_diag_2691_);
v___x_2697_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
lean_object* v___x_2698_; 
v___x_2698_ = lean_st_ref_set(v___y_2648_, v___x_2697_);
lean_dec(v___y_2648_);
v___y_2630_ = v_a_2667_;
v___y_2631_ = v_a_2665_;
v___y_2632_ = v___y_2649_;
v___y_2633_ = v___y_2650_;
goto v___jp_2629_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2665_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
return v___x_2666_;
}
}
else
{
lean_object* v___x_2706_; 
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_expectedType_2593_);
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 0, v_a_2592_);
v___x_2706_ = v___x_2660_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v_a_2592_);
v___x_2706_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
return v___x_2706_;
}
}
}
}
else
{
lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2716_; 
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_expectedType_2593_);
lean_dec_ref(v_a_2592_);
v_a_2709_ = lean_ctor_get(v___x_2657_, 0);
v_isSharedCheck_2716_ = !lean_is_exclusive(v___x_2657_);
if (v_isSharedCheck_2716_ == 0)
{
v___x_2711_ = v___x_2657_;
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2657_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2714_; 
if (v_isShared_2712_ == 0)
{
v___x_2714_ = v___x_2711_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_a_2709_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
return v___x_2714_;
}
}
}
}
else
{
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_expectedType_2593_);
lean_dec_ref(v_a_2592_);
return v___x_2655_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__1(lean_object* v_expectedType_2871_, lean_object* v_inst_2872_, uint8_t v___x_2873_, uint8_t v_hasTrace_2874_, uint8_t v_compile_2875_, uint8_t v_logCompileErrors_2876_, uint8_t v_isMeta_2877_, lean_object* v_____r_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_){
_start:
{
lean_object* v___x_2884_; 
lean_inc(v___y_2882_);
lean_inc_ref(v___y_2881_);
lean_inc(v___y_2880_);
lean_inc_ref(v___y_2879_);
lean_inc_ref(v_expectedType_2871_);
v___x_2884_ = l_Lean_Meta_isProp(v_expectedType_2871_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2906_; 
v_a_2885_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2887_ = v___x_2884_;
v_isShared_2888_ = v_isSharedCheck_2906_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2884_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2906_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
uint8_t v___x_2889_; 
v___x_2889_ = lean_unbox(v_a_2885_);
lean_dec(v_a_2885_);
if (v___x_2889_ == 0)
{
lean_object* v___x_2890_; 
lean_del_object(v___x_2887_);
lean_inc(v___y_2882_);
lean_inc_ref(v___y_2881_);
lean_inc(v___y_2880_);
lean_inc_ref(v___y_2879_);
v___x_2890_ = lean_whnf(v_inst_2872_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_object* v_a_2891_; lean_object* v_dummy_2892_; lean_object* v_nargs_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_a_2891_);
lean_dec_ref(v___x_2890_);
v_dummy_2892_ = lean_obj_once(&l_Lean_Meta_abstractInstImplicitArgs___closed__0, &l_Lean_Meta_abstractInstImplicitArgs___closed__0_once, _init_l_Lean_Meta_abstractInstImplicitArgs___closed__0);
v_nargs_2893_ = l_Lean_Expr_getAppNumArgs(v_a_2891_);
lean_inc(v_nargs_2893_);
v___x_2894_ = lean_mk_array(v_nargs_2893_, v_dummy_2892_);
v___x_2895_ = lean_unsigned_to_nat(1u);
v___x_2896_ = lean_nat_sub(v_nargs_2893_, v___x_2895_);
lean_dec(v_nargs_2893_);
lean_inc(v_a_2891_);
v___x_2897_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13(v_a_2891_, v_expectedType_2871_, v___x_2873_, v_hasTrace_2874_, v_compile_2875_, v_logCompileErrors_2876_, v_isMeta_2877_, v_a_2891_, v___x_2894_, v___x_2896_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_);
return v___x_2897_;
}
else
{
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec_ref(v_expectedType_2871_);
return v___x_2890_;
}
}
else
{
lean_object* v_options_2898_; lean_object* v___x_2899_; uint8_t v___x_2900_; 
v_options_2898_ = lean_ctor_get(v___y_2881_, 2);
v___x_2899_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_2900_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_2898_, v___x_2899_);
if (v___x_2900_ == 0)
{
lean_object* v___x_2902_; 
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec_ref(v_expectedType_2871_);
if (v_isShared_2888_ == 0)
{
lean_ctor_set(v___x_2887_, 0, v_inst_2872_);
v___x_2902_ = v___x_2887_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_inst_2872_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
else
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
lean_del_object(v___x_2887_);
v___x_2904_ = lean_box(0);
v___x_2905_ = l_Lean_Meta_mkAuxTheorem(v_expectedType_2871_, v_inst_2872_, v_hasTrace_2874_, v___x_2904_, v_hasTrace_2874_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_);
return v___x_2905_;
}
}
}
}
else
{
lean_object* v_a_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2914_; 
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec_ref(v_inst_2872_);
lean_dec_ref(v_expectedType_2871_);
v_a_2907_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2909_ = v___x_2884_;
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_a_2907_);
lean_dec(v___x_2884_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2912_; 
if (v_isShared_2910_ == 0)
{
v___x_2912_ = v___x_2909_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_a_2907_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
return v___x_2912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14___redArg(lean_object* v_upperBound_2915_, lean_object* v_fst_2916_, lean_object* v_args_2917_, uint8_t v___x_2918_, uint8_t v_compile_2919_, uint8_t v_logCompileErrors_2920_, uint8_t v_isMeta_2921_, lean_object* v_a_2922_, lean_object* v_b_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v_a_2930_; lean_object* v___y_2935_; uint8_t v___x_2954_; 
v___x_2954_ = lean_nat_dec_lt(v_a_2922_, v_upperBound_2915_);
if (v___x_2954_ == 0)
{
lean_object* v___x_2955_; 
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v___x_2955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2955_, 0, v_b_2923_);
return v___x_2955_;
}
else
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2956_ = lean_array_fget_borrowed(v_fst_2916_, v_a_2922_);
v___x_2957_ = l_Lean_Expr_mvarId_x21(v___x_2956_);
lean_inc(v___x_2957_);
v___x_2958_ = l_Lean_MVarId_getDecl(v___x_2957_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2958_) == 0)
{
lean_object* v_a_2959_; lean_object* v_type_2960_; lean_object* v___x_2961_; 
v_a_2959_ = lean_ctor_get(v___x_2958_, 0);
lean_inc(v_a_2959_);
lean_dec_ref(v___x_2958_);
v_type_2960_ = lean_ctor_get(v_a_2959_, 2);
lean_inc_ref(v_type_2960_);
lean_dec(v_a_2959_);
v___x_2961_ = l_Lean_instantiateMVars___at___00Lean_Meta_abstractInstImplicitArgs_spec__2___redArg(v_type_2960_, v___y_2925_);
if (lean_obj_tag(v___x_2961_) == 0)
{
lean_object* v_a_2962_; lean_object* v___x_2963_; 
v_a_2962_ = lean_ctor_get(v___x_2961_, 0);
lean_inc(v_a_2962_);
lean_dec_ref(v___x_2961_);
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v_a_2962_);
v___x_2963_ = l_Lean_Meta_isProp(v_a_2962_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_object* v_a_2964_; lean_object* v___x_2965_; lean_object* v_cls_2966_; lean_object* v___x_2967_; uint8_t v___x_2968_; 
v_a_2964_ = lean_ctor_get(v___x_2963_, 0);
lean_inc(v_a_2964_);
lean_dec_ref(v___x_2963_);
v___x_2965_ = lean_box(0);
v_cls_2966_ = ((lean_object*)(l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_));
v___x_2967_ = lean_array_fget_borrowed(v_args_2917_, v_a_2922_);
v___x_2968_ = lean_unbox(v_a_2964_);
lean_dec(v_a_2964_);
if (v___x_2968_ == 0)
{
lean_object* v___x_2969_; 
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v_a_2962_);
v___x_2969_ = l_Lean_Meta_isClass_x3f(v_a_2962_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2969_) == 0)
{
lean_object* v_a_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_3103_; 
v_a_2970_ = lean_ctor_get(v___x_2969_, 0);
v_isSharedCheck_3103_ = !lean_is_exclusive(v___x_2969_);
if (v_isSharedCheck_3103_ == 0)
{
v___x_2972_ = v___x_2969_;
v_isShared_2973_ = v_isSharedCheck_3103_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_a_2970_);
lean_dec(v___x_2969_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_3103_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
if (lean_obj_tag(v_a_2970_) == 0)
{
lean_del_object(v___x_2972_);
goto v___jp_2974_;
}
else
{
lean_dec_ref(v_a_2970_);
if (v___x_2918_ == 0)
{
lean_del_object(v___x_2972_);
goto v___jp_2974_;
}
else
{
lean_object* v_options_3064_; lean_object* v_a_3066_; lean_object* v___y_3069_; uint8_t v___y_3070_; lean_object* v_a_3075_; lean_object* v___y_3079_; lean_object* v___x_3083_; uint8_t v___x_3084_; 
v_options_3064_ = lean_ctor_get(v___y_2926_, 2);
v___x_3083_ = l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances;
v___x_3084_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_3064_, v___x_3083_);
if (v___x_3084_ == 0)
{
lean_object* v___x_3085_; 
lean_del_object(v___x_2972_);
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v___x_2967_);
v___x_3085_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__1(v___x_2967_, v_a_2962_, v_compile_2919_, v_logCompileErrors_2920_, v_isMeta_2921_, v___x_2957_, v___x_2965_, v___x_2965_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
v___y_2935_ = v___x_3085_;
goto v___jp_2934_;
}
else
{
lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___x_3086_ = lean_box(0);
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v_a_2962_);
v___x_3087_ = l_Lean_Meta_trySynthInstance(v_a_2962_, v___x_3086_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_object* v_a_3088_; 
v_a_3088_ = lean_ctor_get(v___x_3087_, 0);
lean_inc(v_a_3088_);
lean_dec_ref(v___x_3087_);
if (lean_obj_tag(v_a_3088_) == 1)
{
lean_object* v_a_3089_; lean_object* v___x_3090_; 
v_a_3089_ = lean_ctor_get(v_a_3088_, 0);
lean_inc(v_a_3089_);
lean_dec_ref(v_a_3088_);
v___x_3090_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_2966_, v___y_2926_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_object* v_a_3091_; uint8_t v___x_3092_; 
v_a_3091_ = lean_ctor_get(v___x_3090_, 0);
lean_inc(v_a_3091_);
lean_dec_ref(v___x_3090_);
v___x_3092_ = lean_unbox(v_a_3091_);
lean_dec(v_a_3091_);
if (v___x_3092_ == 0)
{
lean_object* v___x_3093_; 
lean_inc(v___x_2957_);
v___x_3093_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__2(v___x_2957_, v_a_3089_, v___x_2965_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
v___y_3079_ = v___x_3093_;
goto v___jp_3078_;
}
else
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v___x_3094_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__1);
lean_inc(v_a_3089_);
v___x_3095_ = l_Lean_MessageData_ofExpr(v_a_3089_);
v___x_3096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3094_);
lean_ctor_set(v___x_3096_, 1, v___x_3095_);
v___x_3097_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_2966_, v___x_3096_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_3097_) == 0)
{
lean_object* v_a_3098_; lean_object* v___x_3099_; 
v_a_3098_ = lean_ctor_get(v___x_3097_, 0);
lean_inc(v_a_3098_);
lean_dec_ref(v___x_3097_);
lean_inc(v___x_2957_);
v___x_3099_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__2(v___x_2957_, v_a_3089_, v_a_3098_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
v___y_3079_ = v___x_3099_;
goto v___jp_3078_;
}
else
{
lean_object* v_a_3100_; 
lean_dec(v_a_3089_);
v_a_3100_ = lean_ctor_get(v___x_3097_, 0);
lean_inc(v_a_3100_);
lean_dec_ref(v___x_3097_);
v_a_3075_ = v_a_3100_;
goto v___jp_3074_;
}
}
}
else
{
lean_object* v_a_3101_; 
lean_dec(v_a_3089_);
v_a_3101_ = lean_ctor_get(v___x_3090_, 0);
lean_inc(v_a_3101_);
lean_dec_ref(v___x_3090_);
v_a_3075_ = v_a_3101_;
goto v___jp_3074_;
}
}
else
{
lean_dec(v_a_3088_);
lean_del_object(v___x_2972_);
v_a_3066_ = v___x_2965_;
goto v___jp_3065_;
}
}
else
{
lean_object* v_a_3102_; 
v_a_3102_ = lean_ctor_get(v___x_3087_, 0);
lean_inc(v_a_3102_);
lean_dec_ref(v___x_3087_);
v_a_3075_ = v_a_3102_;
goto v___jp_3074_;
}
}
v___jp_3065_:
{
lean_object* v___x_3067_; 
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v___x_2967_);
v___x_3067_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__1(v___x_2967_, v_a_2962_, v_compile_2919_, v_logCompileErrors_2920_, v_isMeta_2921_, v___x_2957_, v___x_2965_, v_a_3066_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
v___y_2935_ = v___x_3067_;
goto v___jp_2934_;
}
v___jp_3068_:
{
if (v___y_3070_ == 0)
{
lean_dec_ref(v___y_3069_);
lean_del_object(v___x_2972_);
v_a_3066_ = v___x_2965_;
goto v___jp_3065_;
}
else
{
lean_object* v___x_3072_; 
lean_dec(v_a_2962_);
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
if (v_isShared_2973_ == 0)
{
lean_ctor_set_tag(v___x_2972_, 1);
lean_ctor_set(v___x_2972_, 0, v___y_3069_);
v___x_3072_ = v___x_2972_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v___y_3069_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
v___jp_3074_:
{
uint8_t v___x_3076_; 
v___x_3076_ = l_Lean_Exception_isInterrupt(v_a_3075_);
if (v___x_3076_ == 0)
{
uint8_t v___x_3077_; 
lean_inc_ref(v_a_3075_);
v___x_3077_ = l_Lean_Exception_isRuntime(v_a_3075_);
v___y_3069_ = v_a_3075_;
v___y_3070_ = v___x_3077_;
goto v___jp_3068_;
}
else
{
v___y_3069_ = v_a_3075_;
v___y_3070_ = v___x_3076_;
goto v___jp_3068_;
}
}
v___jp_3078_:
{
if (lean_obj_tag(v___y_3079_) == 0)
{
lean_object* v_a_3080_; 
lean_del_object(v___x_2972_);
v_a_3080_ = lean_ctor_get(v___y_3079_, 0);
lean_inc(v_a_3080_);
lean_dec_ref(v___y_3079_);
if (lean_obj_tag(v_a_3080_) == 0)
{
lean_dec(v_a_2962_);
lean_dec(v___x_2957_);
v_a_2930_ = v___x_2965_;
goto v___jp_2929_;
}
else
{
lean_object* v_a_3081_; 
v_a_3081_ = lean_ctor_get(v_a_3080_, 0);
lean_inc(v_a_3081_);
lean_dec_ref(v_a_3080_);
v_a_3066_ = v_a_3081_;
goto v___jp_3065_;
}
}
else
{
lean_object* v_a_3082_; 
v_a_3082_ = lean_ctor_get(v___y_3079_, 0);
lean_inc(v_a_3082_);
lean_dec_ref(v___y_3079_);
v_a_3075_ = v_a_3082_;
goto v___jp_3074_;
}
}
}
}
v___jp_2974_:
{
lean_object* v_options_2975_; lean_object* v___x_2976_; uint8_t v___x_2977_; 
v_options_2975_ = lean_ctor_get(v___y_2926_, 2);
v___x_2976_ = l_Lean_Meta_backward_inferInstanceAs_wrap_data;
v___x_2977_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_2975_, v___x_2976_);
if (v___x_2977_ == 0)
{
lean_object* v___x_2978_; 
lean_dec(v_a_2962_);
lean_inc(v___x_2967_);
v___x_2978_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_2957_, v___x_2967_, v___y_2925_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_dec_ref(v___x_2978_);
v_a_2930_ = v___x_2965_;
goto v___jp_2929_;
}
else
{
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
return v___x_2978_;
}
}
else
{
lean_object* v___x_2979_; 
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v___x_2967_);
v___x_2979_ = lean_infer_type(v___x_2967_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2979_) == 0)
{
lean_object* v_a_2980_; lean_object* v___x_2981_; 
v_a_2980_ = lean_ctor_get(v___x_2979_, 0);
lean_inc(v_a_2980_);
lean_dec_ref(v___x_2979_);
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v_a_2962_);
v___x_2981_ = l_Lean_Meta_isExprDefEq(v_a_2962_, v_a_2980_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2981_) == 0)
{
lean_object* v_a_2982_; uint8_t v___x_2983_; 
v_a_2982_ = lean_ctor_get(v___x_2981_, 0);
lean_inc(v_a_2982_);
lean_dec_ref(v___x_2981_);
v___x_2983_ = lean_unbox(v_a_2982_);
if (v___x_2983_ == 0)
{
lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2984_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__1));
v___x_2985_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg(v___x_2984_, v___y_2927_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_object* v_a_2986_; uint8_t v___x_2987_; uint8_t v___x_2988_; lean_object* v___x_2989_; 
v_a_2986_ = lean_ctor_get(v___x_2985_, 0);
lean_inc(v_a_2986_);
lean_dec_ref(v___x_2985_);
v___x_2987_ = lean_unbox(v_a_2982_);
v___x_2988_ = lean_unbox(v_a_2982_);
lean_dec(v_a_2982_);
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v___x_2967_);
lean_inc(v_a_2986_);
v___x_2989_ = l_Lean_Meta_mkAuxDefinition(v_a_2986_, v_a_2962_, v___x_2967_, v___x_2987_, v___x_2988_, v___x_2918_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2989_) == 0)
{
lean_object* v_a_2990_; lean_object* v___x_2991_; 
v_a_2990_ = lean_ctor_get(v___x_2989_, 0);
lean_inc(v_a_2990_);
lean_dec_ref(v___x_2989_);
v___x_2991_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_2957_, v_a_2990_, v___y_2925_);
if (lean_obj_tag(v___x_2991_) == 0)
{
uint8_t v___x_2992_; lean_object* v___x_2993_; 
lean_dec_ref(v___x_2991_);
v___x_2992_ = 0;
lean_inc(v_a_2986_);
v___x_2993_ = l_Lean_Meta_setInlineAttribute(v_a_2986_, v___x_2992_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_dec_ref(v___x_2993_);
if (v_isMeta_2921_ == 0)
{
lean_object* v___x_2994_; 
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
v___x_2994_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__0(v_a_2986_, v___x_2965_, v_compile_2919_, v_logCompileErrors_2920_, v___x_2965_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
v___y_2935_ = v___x_2994_;
goto v___jp_2934_;
}
else
{
lean_object* v___x_2995_; lean_object* v_env_2996_; lean_object* v_nextMacroScope_2997_; lean_object* v_ngen_2998_; lean_object* v_auxDeclNGen_2999_; lean_object* v_traceState_3000_; lean_object* v_messages_3001_; lean_object* v_infoState_3002_; lean_object* v_snapshotTasks_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3029_; 
v___x_2995_ = lean_st_ref_take(v___y_2927_);
v_env_2996_ = lean_ctor_get(v___x_2995_, 0);
v_nextMacroScope_2997_ = lean_ctor_get(v___x_2995_, 1);
v_ngen_2998_ = lean_ctor_get(v___x_2995_, 2);
v_auxDeclNGen_2999_ = lean_ctor_get(v___x_2995_, 3);
v_traceState_3000_ = lean_ctor_get(v___x_2995_, 4);
v_messages_3001_ = lean_ctor_get(v___x_2995_, 6);
v_infoState_3002_ = lean_ctor_get(v___x_2995_, 7);
v_snapshotTasks_3003_ = lean_ctor_get(v___x_2995_, 8);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3029_ == 0)
{
lean_object* v_unused_3030_; 
v_unused_3030_ = lean_ctor_get(v___x_2995_, 5);
lean_dec(v_unused_3030_);
v___x_3005_ = v___x_2995_;
v_isShared_3006_ = v_isSharedCheck_3029_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_snapshotTasks_3003_);
lean_inc(v_infoState_3002_);
lean_inc(v_messages_3001_);
lean_inc(v_traceState_3000_);
lean_inc(v_auxDeclNGen_2999_);
lean_inc(v_ngen_2998_);
lean_inc(v_nextMacroScope_2997_);
lean_inc(v_env_2996_);
lean_dec(v___x_2995_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3029_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3010_; 
lean_inc(v_a_2986_);
v___x_3007_ = l_Lean_markMeta(v_env_2996_, v_a_2986_);
v___x_3008_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2);
if (v_isShared_3006_ == 0)
{
lean_ctor_set(v___x_3005_, 5, v___x_3008_);
lean_ctor_set(v___x_3005_, 0, v___x_3007_);
v___x_3010_ = v___x_3005_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v___x_3007_);
lean_ctor_set(v_reuseFailAlloc_3028_, 1, v_nextMacroScope_2997_);
lean_ctor_set(v_reuseFailAlloc_3028_, 2, v_ngen_2998_);
lean_ctor_set(v_reuseFailAlloc_3028_, 3, v_auxDeclNGen_2999_);
lean_ctor_set(v_reuseFailAlloc_3028_, 4, v_traceState_3000_);
lean_ctor_set(v_reuseFailAlloc_3028_, 5, v___x_3008_);
lean_ctor_set(v_reuseFailAlloc_3028_, 6, v_messages_3001_);
lean_ctor_set(v_reuseFailAlloc_3028_, 7, v_infoState_3002_);
lean_ctor_set(v_reuseFailAlloc_3028_, 8, v_snapshotTasks_3003_);
v___x_3010_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v_mctx_3013_; lean_object* v_zetaDeltaFVarIds_3014_; lean_object* v_postponed_3015_; lean_object* v_diag_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3026_; 
v___x_3011_ = lean_st_ref_set(v___y_2927_, v___x_3010_);
v___x_3012_ = lean_st_ref_take(v___y_2925_);
v_mctx_3013_ = lean_ctor_get(v___x_3012_, 0);
v_zetaDeltaFVarIds_3014_ = lean_ctor_get(v___x_3012_, 2);
v_postponed_3015_ = lean_ctor_get(v___x_3012_, 3);
v_diag_3016_ = lean_ctor_get(v___x_3012_, 4);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3026_ == 0)
{
lean_object* v_unused_3027_; 
v_unused_3027_ = lean_ctor_get(v___x_3012_, 1);
lean_dec(v_unused_3027_);
v___x_3018_ = v___x_3012_;
v_isShared_3019_ = v_isSharedCheck_3026_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_diag_3016_);
lean_inc(v_postponed_3015_);
lean_inc(v_zetaDeltaFVarIds_3014_);
lean_inc(v_mctx_3013_);
lean_dec(v___x_3012_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3026_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3020_; lean_object* v___x_3022_; 
v___x_3020_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3);
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 1, v___x_3020_);
v___x_3022_ = v___x_3018_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_mctx_3013_);
lean_ctor_set(v_reuseFailAlloc_3025_, 1, v___x_3020_);
lean_ctor_set(v_reuseFailAlloc_3025_, 2, v_zetaDeltaFVarIds_3014_);
lean_ctor_set(v_reuseFailAlloc_3025_, 3, v_postponed_3015_);
lean_ctor_set(v_reuseFailAlloc_3025_, 4, v_diag_3016_);
v___x_3022_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3023_ = lean_st_ref_set(v___y_2925_, v___x_3022_);
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
v___x_3024_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__0(v_a_2986_, v___x_2965_, v_compile_2919_, v_logCompileErrors_2920_, v___x_2965_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
v___y_2935_ = v___x_3024_;
goto v___jp_2934_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2986_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
return v___x_2993_;
}
}
else
{
lean_dec(v_a_2986_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
return v___x_2991_;
}
}
else
{
lean_object* v_a_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3038_; 
lean_dec(v_a_2986_);
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_3031_ = lean_ctor_get(v___x_2989_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_2989_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3033_ = v___x_2989_;
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_a_3031_);
lean_dec(v___x_2989_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_a_3031_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
}
else
{
lean_object* v_a_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3046_; 
lean_dec(v_a_2982_);
lean_dec(v_a_2962_);
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_3039_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3041_ = v___x_2985_;
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_a_3039_);
lean_dec(v___x_2985_);
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
v_reuseFailAlloc_3045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_a_3039_);
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
else
{
lean_object* v___x_3047_; 
lean_dec(v_a_2982_);
lean_dec(v_a_2962_);
lean_inc(v___x_2967_);
v___x_3047_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_2957_, v___x_2967_, v___y_2925_);
if (lean_obj_tag(v___x_3047_) == 0)
{
lean_dec_ref(v___x_3047_);
v_a_2930_ = v___x_2965_;
goto v___jp_2929_;
}
else
{
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
return v___x_3047_;
}
}
}
else
{
lean_object* v_a_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3055_; 
lean_dec(v_a_2962_);
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_3048_ = lean_ctor_get(v___x_2981_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_2981_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3050_ = v___x_2981_;
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_a_3048_);
lean_dec(v___x_2981_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v___x_3053_; 
if (v_isShared_3051_ == 0)
{
v___x_3053_ = v___x_3050_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_a_3048_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
return v___x_3053_;
}
}
}
}
else
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3063_; 
lean_dec(v_a_2962_);
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_3056_ = lean_ctor_get(v___x_2979_, 0);
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_2979_);
if (v_isSharedCheck_3063_ == 0)
{
v___x_3058_ = v___x_2979_;
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v___x_2979_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3061_; 
if (v_isShared_3059_ == 0)
{
v___x_3061_ = v___x_3058_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v_a_3056_);
v___x_3061_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
return v___x_3061_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3111_; 
lean_dec(v_a_2962_);
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_3104_ = lean_ctor_get(v___x_2969_, 0);
v_isSharedCheck_3111_ = !lean_is_exclusive(v___x_2969_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3106_ = v___x_2969_;
v_isShared_3107_ = v_isSharedCheck_3111_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_a_3104_);
lean_dec(v___x_2969_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3111_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
lean_object* v___x_3109_; 
if (v_isShared_3107_ == 0)
{
v___x_3109_ = v___x_3106_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_a_3104_);
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
else
{
lean_object* v___x_3112_; 
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v___x_2967_);
v___x_3112_ = lean_infer_type(v___x_2967_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v_a_3113_; lean_object* v___x_3114_; 
v_a_3113_ = lean_ctor_get(v___x_3112_, 0);
lean_inc(v_a_3113_);
lean_dec_ref(v___x_3112_);
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v_a_3113_);
lean_inc(v_a_2962_);
v___x_3114_ = l_Lean_Meta_isExprDefEq(v_a_2962_, v_a_3113_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_3114_) == 0)
{
lean_object* v_a_3115_; uint8_t v___x_3116_; 
v_a_3115_ = lean_ctor_get(v___x_3114_, 0);
lean_inc(v_a_3115_);
lean_dec_ref(v___x_3114_);
v___x_3116_ = lean_unbox(v_a_3115_);
lean_dec(v_a_3115_);
if (v___x_3116_ == 0)
{
lean_object* v___x_3117_; 
v___x_3117_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_2966_, v___y_2926_);
if (lean_obj_tag(v___x_3117_) == 0)
{
lean_object* v_a_3118_; uint8_t v___x_3119_; 
v_a_3118_ = lean_ctor_get(v___x_3117_, 0);
lean_inc(v_a_3118_);
lean_dec_ref(v___x_3117_);
v___x_3119_ = lean_unbox(v_a_3118_);
lean_dec(v_a_3118_);
if (v___x_3119_ == 0)
{
lean_object* v___x_3120_; 
lean_dec(v_a_3113_);
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v___x_2967_);
v___x_3120_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__3(v_a_2962_, v___x_2967_, v___x_2918_, v___x_2957_, v___x_2965_, v___x_2965_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
v___y_2935_ = v___x_3120_;
goto v___jp_2934_;
}
else
{
lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3121_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__3);
lean_inc(v_a_2922_);
v___x_3122_ = l_Nat_reprFast(v_a_2922_);
v___x_3123_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3122_);
v___x_3124_ = l_Lean_MessageData_ofFormat(v___x_3123_);
v___x_3125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3121_);
lean_ctor_set(v___x_3125_, 1, v___x_3124_);
v___x_3126_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__5);
v___x_3127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3125_);
lean_ctor_set(v___x_3127_, 1, v___x_3126_);
lean_inc(v_a_2962_);
v___x_3128_ = l_Lean_MessageData_ofExpr(v_a_2962_);
v___x_3129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3127_);
lean_ctor_set(v___x_3129_, 1, v___x_3128_);
v___x_3130_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__7);
v___x_3131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3129_);
lean_ctor_set(v___x_3131_, 1, v___x_3130_);
v___x_3132_ = l_Lean_MessageData_ofExpr(v_a_3113_);
v___x_3133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3131_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
v___x_3134_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___closed__9);
v___x_3135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3133_);
lean_ctor_set(v___x_3135_, 1, v___x_3134_);
lean_inc(v___x_2967_);
v___x_3136_ = l_Lean_MessageData_ofExpr(v___x_2967_);
v___x_3137_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3135_);
lean_ctor_set(v___x_3137_, 1, v___x_3136_);
v___x_3138_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_2966_, v___x_3137_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_3138_) == 0)
{
lean_object* v_a_3139_; lean_object* v___x_3140_; 
v_a_3139_ = lean_ctor_get(v___x_3138_, 0);
lean_inc(v_a_3139_);
lean_dec_ref(v___x_3138_);
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
lean_inc(v___y_2925_);
lean_inc_ref(v___y_2924_);
lean_inc(v___x_2967_);
v___x_3140_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__3(v_a_2962_, v___x_2967_, v___x_2918_, v___x_2957_, v___x_2965_, v_a_3139_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
v___y_2935_ = v___x_3140_;
goto v___jp_2934_;
}
else
{
lean_dec(v_a_2962_);
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
return v___x_3138_;
}
}
}
else
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3148_; 
lean_dec(v_a_3113_);
lean_dec(v_a_2962_);
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_3141_ = lean_ctor_get(v___x_3117_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3117_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3143_ = v___x_3117_;
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_3117_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3146_; 
if (v_isShared_3144_ == 0)
{
v___x_3146_ = v___x_3143_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_a_3141_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
return v___x_3146_;
}
}
}
}
else
{
lean_object* v___x_3149_; 
lean_dec(v_a_3113_);
lean_dec(v_a_2962_);
lean_inc(v___x_2967_);
v___x_3149_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_2957_, v___x_2967_, v___y_2925_);
if (lean_obj_tag(v___x_3149_) == 0)
{
lean_dec_ref(v___x_3149_);
v_a_2930_ = v___x_2965_;
goto v___jp_2929_;
}
else
{
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
return v___x_3149_;
}
}
}
else
{
lean_object* v_a_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3157_; 
lean_dec(v_a_3113_);
lean_dec(v_a_2962_);
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_3150_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3152_ = v___x_3114_;
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_a_3150_);
lean_dec(v___x_3114_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3155_; 
if (v_isShared_3153_ == 0)
{
v___x_3155_ = v___x_3152_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v_a_3150_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
}
else
{
lean_object* v_a_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3165_; 
lean_dec(v_a_2962_);
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_3158_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3160_ = v___x_3112_;
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_a_3158_);
lean_dec(v___x_3112_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3163_; 
if (v_isShared_3161_ == 0)
{
v___x_3163_ = v___x_3160_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_a_3158_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
}
}
else
{
lean_object* v_a_3166_; lean_object* v___x_3168_; uint8_t v_isShared_3169_; uint8_t v_isSharedCheck_3173_; 
lean_dec(v_a_2962_);
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_3166_ = lean_ctor_get(v___x_2963_, 0);
v_isSharedCheck_3173_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3168_ = v___x_2963_;
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
else
{
lean_inc(v_a_3166_);
lean_dec(v___x_2963_);
v___x_3168_ = lean_box(0);
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
v_resetjp_3167_:
{
lean_object* v___x_3171_; 
if (v_isShared_3169_ == 0)
{
v___x_3171_ = v___x_3168_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_a_3166_);
v___x_3171_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
return v___x_3171_;
}
}
}
}
else
{
lean_object* v_a_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3181_; 
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_3174_ = lean_ctor_get(v___x_2961_, 0);
v_isSharedCheck_3181_ = !lean_is_exclusive(v___x_2961_);
if (v_isSharedCheck_3181_ == 0)
{
v___x_3176_ = v___x_2961_;
v_isShared_3177_ = v_isSharedCheck_3181_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_a_3174_);
lean_dec(v___x_2961_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3181_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3179_; 
if (v_isShared_3177_ == 0)
{
v___x_3179_ = v___x_3176_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v_a_3174_);
v___x_3179_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
return v___x_3179_;
}
}
}
}
else
{
lean_object* v_a_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3189_; 
lean_dec(v___x_2957_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_3182_ = lean_ctor_get(v___x_2958_, 0);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_3189_ == 0)
{
v___x_3184_ = v___x_2958_;
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_a_3182_);
lean_dec(v___x_2958_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3187_; 
if (v_isShared_3185_ == 0)
{
v___x_3187_ = v___x_3184_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_a_3182_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
}
}
}
}
v___jp_2929_:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = lean_unsigned_to_nat(1u);
v___x_2932_ = lean_nat_add(v_a_2922_, v___x_2931_);
lean_dec(v_a_2922_);
v_a_2922_ = v___x_2932_;
v_b_2923_ = v_a_2930_;
goto _start;
}
v___jp_2934_:
{
if (lean_obj_tag(v___y_2935_) == 0)
{
lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2945_; 
v_a_2936_ = lean_ctor_get(v___y_2935_, 0);
v_isSharedCheck_2945_ = !lean_is_exclusive(v___y_2935_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2938_ = v___y_2935_;
v_isShared_2939_ = v_isSharedCheck_2945_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v___y_2935_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2945_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
if (lean_obj_tag(v_a_2936_) == 0)
{
lean_object* v_a_2940_; lean_object* v___x_2942_; 
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_2940_ = lean_ctor_get(v_a_2936_, 0);
lean_inc(v_a_2940_);
lean_dec_ref(v_a_2936_);
if (v_isShared_2939_ == 0)
{
lean_ctor_set(v___x_2938_, 0, v_a_2940_);
v___x_2942_ = v___x_2938_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_a_2940_);
v___x_2942_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
return v___x_2942_;
}
}
else
{
lean_object* v_a_2944_; 
lean_del_object(v___x_2938_);
v_a_2944_ = lean_ctor_get(v_a_2936_, 0);
lean_inc(v_a_2944_);
lean_dec_ref(v_a_2936_);
v_a_2930_ = v_a_2944_;
goto v___jp_2929_;
}
}
}
else
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2953_; 
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_a_2922_);
v_a_2946_ = lean_ctor_get(v___y_2935_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___y_2935_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2948_ = v___y_2935_;
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v___y_2935_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_a_2946_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
return v___x_2951_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__15(lean_object* v_a_3190_, lean_object* v_expectedType_3191_, uint8_t v___x_3192_, uint8_t v_compile_3193_, uint8_t v_logCompileErrors_3194_, uint8_t v_isMeta_3195_, lean_object* v_x_3196_, lean_object* v_x_3197_, lean_object* v_x_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_){
_start:
{
lean_object* v___y_3205_; lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v___y_3208_; lean_object* v___y_3227_; lean_object* v___y_3228_; lean_object* v___y_3229_; lean_object* v___y_3230_; lean_object* v___y_3244_; lean_object* v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3247_; 
if (lean_obj_tag(v_x_3196_) == 5)
{
lean_object* v_fn_3316_; lean_object* v_arg_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; 
v_fn_3316_ = lean_ctor_get(v_x_3196_, 0);
lean_inc_ref(v_fn_3316_);
v_arg_3317_ = lean_ctor_get(v_x_3196_, 1);
lean_inc_ref(v_arg_3317_);
lean_dec_ref(v_x_3196_);
v___x_3318_ = lean_array_set(v_x_3197_, v_x_3198_, v_arg_3317_);
v___x_3319_ = lean_unsigned_to_nat(1u);
v___x_3320_ = lean_nat_sub(v_x_3198_, v___x_3319_);
lean_dec(v_x_3198_);
v_x_3196_ = v_fn_3316_;
v_x_3197_ = v___x_3318_;
v_x_3198_ = v___x_3320_;
goto _start;
}
else
{
lean_object* v_cls_3322_; lean_object* v___y_3324_; lean_object* v___y_3325_; lean_object* v___y_3326_; lean_object* v___y_3327_; lean_object* v___x_3343_; 
lean_dec(v_x_3198_);
v_cls_3322_ = ((lean_object*)(l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_));
v___x_3343_ = l_Lean_Expr_constName_x3f(v_x_3196_);
if (lean_obj_tag(v___x_3343_) == 0)
{
lean_dec_ref(v_x_3197_);
lean_dec_ref(v_x_3196_);
v___y_3324_ = v___y_3199_;
v___y_3325_ = v___y_3200_;
v___y_3326_ = v___y_3201_;
v___y_3327_ = v___y_3202_;
goto v___jp_3323_;
}
else
{
lean_object* v_val_3344_; lean_object* v___x_3345_; 
v_val_3344_ = lean_ctor_get(v___x_3343_, 0);
lean_inc(v_val_3344_);
lean_dec_ref(v___x_3343_);
lean_inc_ref(v___y_3201_);
v___x_3345_ = l_Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5(v_val_3344_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
if (lean_obj_tag(v___x_3345_) == 0)
{
lean_object* v_a_3346_; 
v_a_3346_ = lean_ctor_get(v___x_3345_, 0);
lean_inc(v_a_3346_);
lean_dec_ref(v___x_3345_);
if (lean_obj_tag(v_a_3346_) == 6)
{
lean_object* v_val_3347_; lean_object* v___x_3348_; 
lean_dec_ref(v_a_3190_);
v_val_3347_ = lean_ctor_get(v_a_3346_, 0);
lean_inc_ref(v_val_3347_);
lean_dec_ref(v_a_3346_);
lean_inc(v___y_3202_);
lean_inc_ref(v___y_3201_);
lean_inc(v___y_3200_);
lean_inc_ref(v___y_3199_);
lean_inc_ref(v_x_3196_);
v___x_3348_ = lean_infer_type(v_x_3196_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v_a_3349_; uint8_t v___x_3350_; lean_object* v___x_3351_; 
v_a_3349_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_a_3349_);
lean_dec_ref(v___x_3348_);
v___x_3350_ = 0;
lean_inc(v___y_3202_);
lean_inc_ref(v___y_3201_);
lean_inc(v___y_3200_);
lean_inc_ref(v___y_3199_);
v___x_3351_ = l_Lean_Meta_forallMetaTelescope(v_a_3349_, v___x_3350_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v_a_3352_; lean_object* v_snd_3353_; lean_object* v_fst_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3454_; 
v_a_3352_ = lean_ctor_get(v___x_3351_, 0);
lean_inc(v_a_3352_);
lean_dec_ref(v___x_3351_);
v_snd_3353_ = lean_ctor_get(v_a_3352_, 1);
v_fst_3354_ = lean_ctor_get(v_a_3352_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v_a_3352_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3356_ = v_a_3352_;
v_isShared_3357_ = v_isSharedCheck_3454_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_snd_3353_);
lean_inc(v_fst_3354_);
lean_dec(v_a_3352_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3454_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v_snd_3358_; lean_object* v___x_3360_; uint8_t v_isShared_3361_; uint8_t v_isSharedCheck_3452_; 
v_snd_3358_ = lean_ctor_get(v_snd_3353_, 1);
v_isSharedCheck_3452_ = !lean_is_exclusive(v_snd_3353_);
if (v_isSharedCheck_3452_ == 0)
{
lean_object* v_unused_3453_; 
v_unused_3453_ = lean_ctor_get(v_snd_3353_, 0);
lean_dec(v_unused_3453_);
v___x_3360_ = v_snd_3353_;
v_isShared_3361_ = v_isSharedCheck_3452_;
goto v_resetjp_3359_;
}
else
{
lean_inc(v_snd_3358_);
lean_dec(v_snd_3353_);
v___x_3360_ = lean_box(0);
v_isShared_3361_ = v_isSharedCheck_3452_;
goto v_resetjp_3359_;
}
v_resetjp_3359_:
{
lean_object* v___x_3362_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___x_3399_; uint8_t v___x_3400_; 
v___x_3362_ = lean_array_get_size(v_x_3197_);
v___x_3399_ = lean_array_get_size(v_fst_3354_);
v___x_3400_ = lean_nat_dec_eq(v___x_3362_, v___x_3399_);
if (v___x_3400_ == 0)
{
lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3404_; 
lean_dec(v_snd_3358_);
lean_dec(v_fst_3354_);
lean_dec_ref(v_val_3347_);
lean_dec_ref(v_expectedType_3191_);
v___x_3401_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__5);
v___x_3402_ = l_Lean_MessageData_ofExpr(v_x_3196_);
if (v_isShared_3361_ == 0)
{
lean_ctor_set_tag(v___x_3360_, 7);
lean_ctor_set(v___x_3360_, 1, v___x_3402_);
lean_ctor_set(v___x_3360_, 0, v___x_3401_);
v___x_3404_ = v___x_3360_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___x_3401_);
lean_ctor_set(v_reuseFailAlloc_3415_, 1, v___x_3402_);
v___x_3404_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
lean_object* v___x_3405_; lean_object* v___x_3407_; 
v___x_3405_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__7);
if (v_isShared_3357_ == 0)
{
lean_ctor_set_tag(v___x_3356_, 7);
lean_ctor_set(v___x_3356_, 1, v___x_3405_);
lean_ctor_set(v___x_3356_, 0, v___x_3404_);
v___x_3407_ = v___x_3356_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v___x_3404_);
lean_ctor_set(v_reuseFailAlloc_3414_, 1, v___x_3405_);
v___x_3407_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; 
v___x_3408_ = lean_array_to_list(v_x_3197_);
v___x_3409_ = lean_box(0);
v___x_3410_ = l_List_mapTR_loop___at___00Lean_Meta_normalizeInstance_spec__9(v___x_3408_, v___x_3409_);
v___x_3411_ = l_Lean_MessageData_ofList(v___x_3410_);
v___x_3412_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3407_);
lean_ctor_set(v___x_3412_, 1, v___x_3411_);
v___x_3413_ = l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg(v___x_3412_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
return v___x_3413_;
}
}
}
else
{
lean_object* v___x_3416_; 
lean_inc(v___y_3202_);
lean_inc_ref(v___y_3201_);
lean_inc(v___y_3200_);
lean_inc_ref(v___y_3199_);
lean_inc_ref(v_expectedType_3191_);
v___x_3416_ = l_Lean_Meta_isExprDefEq(v_expectedType_3191_, v_snd_3358_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; uint8_t v___x_3418_; 
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3417_);
lean_dec_ref(v___x_3416_);
v___x_3418_ = lean_unbox(v_a_3417_);
if (v___x_3418_ == 0)
{
lean_object* v_toConstantVal_3419_; lean_object* v_name_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3424_; 
lean_dec(v_fst_3354_);
lean_dec_ref(v_x_3197_);
lean_dec_ref(v_x_3196_);
v_toConstantVal_3419_ = lean_ctor_get(v_val_3347_, 0);
lean_inc_ref(v_toConstantVal_3419_);
lean_dec_ref(v_val_3347_);
v_name_3420_ = lean_ctor_get(v_toConstantVal_3419_, 0);
lean_inc(v_name_3420_);
lean_dec_ref(v_toConstantVal_3419_);
v___x_3421_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__9);
v___x_3422_ = l_Lean_MessageData_ofExpr(v_expectedType_3191_);
if (v_isShared_3361_ == 0)
{
lean_ctor_set_tag(v___x_3360_, 7);
lean_ctor_set(v___x_3360_, 1, v___x_3422_);
lean_ctor_set(v___x_3360_, 0, v___x_3421_);
v___x_3424_ = v___x_3360_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v___x_3421_);
lean_ctor_set(v_reuseFailAlloc_3443_, 1, v___x_3422_);
v___x_3424_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
lean_object* v___x_3425_; lean_object* v___x_3427_; 
v___x_3425_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__11);
if (v_isShared_3357_ == 0)
{
lean_ctor_set_tag(v___x_3356_, 7);
lean_ctor_set(v___x_3356_, 1, v___x_3425_);
lean_ctor_set(v___x_3356_, 0, v___x_3424_);
v___x_3427_ = v___x_3356_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v___x_3424_);
lean_ctor_set(v_reuseFailAlloc_3442_, 1, v___x_3425_);
v___x_3427_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
uint8_t v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v_a_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3441_; 
v___x_3428_ = lean_unbox(v_a_3417_);
lean_dec(v_a_3417_);
v___x_3429_ = l_Lean_MessageData_ofConstName(v_name_3420_, v___x_3428_);
v___x_3430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3427_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
v___x_3431_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg___closed__3);
v___x_3432_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3432_, 0, v___x_3430_);
lean_ctor_set(v___x_3432_, 1, v___x_3431_);
v___x_3433_ = l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg(v___x_3432_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
v_a_3434_ = lean_ctor_get(v___x_3433_, 0);
v_isSharedCheck_3441_ = !lean_is_exclusive(v___x_3433_);
if (v_isSharedCheck_3441_ == 0)
{
v___x_3436_ = v___x_3433_;
v_isShared_3437_ = v_isSharedCheck_3441_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_a_3434_);
lean_dec(v___x_3433_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3441_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___x_3439_; 
if (v_isShared_3437_ == 0)
{
v___x_3439_ = v___x_3436_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3440_; 
v_reuseFailAlloc_3440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3440_, 0, v_a_3434_);
v___x_3439_ = v_reuseFailAlloc_3440_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
return v___x_3439_;
}
}
}
}
}
else
{
lean_dec(v_a_3417_);
lean_del_object(v___x_3360_);
lean_del_object(v___x_3356_);
lean_dec_ref(v_expectedType_3191_);
v___y_3364_ = v___y_3199_;
v___y_3365_ = v___y_3200_;
v___y_3366_ = v___y_3201_;
v___y_3367_ = v___y_3202_;
goto v___jp_3363_;
}
}
else
{
lean_object* v_a_3444_; lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3451_; 
lean_del_object(v___x_3360_);
lean_del_object(v___x_3356_);
lean_dec(v_fst_3354_);
lean_dec_ref(v_val_3347_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec_ref(v_x_3197_);
lean_dec_ref(v_x_3196_);
lean_dec_ref(v_expectedType_3191_);
v_a_3444_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3451_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3451_ == 0)
{
v___x_3446_ = v___x_3416_;
v_isShared_3447_ = v_isSharedCheck_3451_;
goto v_resetjp_3445_;
}
else
{
lean_inc(v_a_3444_);
lean_dec(v___x_3416_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3451_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v___x_3449_; 
if (v_isShared_3447_ == 0)
{
v___x_3449_ = v___x_3446_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v_a_3444_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
}
}
v___jp_3363_:
{
lean_object* v_numParams_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v_numParams_3368_ = lean_ctor_get(v_val_3347_, 3);
lean_inc(v_numParams_3368_);
lean_dec_ref(v_val_3347_);
v___x_3369_ = lean_box(0);
lean_inc(v___y_3365_);
v___x_3370_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14___redArg(v___x_3362_, v_fst_3354_, v_x_3197_, v___x_3192_, v_compile_3193_, v_logCompileErrors_3194_, v_isMeta_3195_, v_numParams_3368_, v___x_3369_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_);
lean_dec_ref(v_x_3197_);
if (lean_obj_tag(v___x_3370_) == 0)
{
size_t v_sz_3371_; size_t v___x_3372_; lean_object* v___x_3373_; 
lean_dec_ref(v___x_3370_);
v_sz_3371_ = lean_array_size(v_fst_3354_);
v___x_3372_ = ((size_t)0ULL);
v___x_3373_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6___redArg(v_sz_3371_, v___x_3372_, v_fst_3354_, v___y_3365_);
lean_dec(v___y_3365_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v_a_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3382_; 
v_a_3374_ = lean_ctor_get(v___x_3373_, 0);
v_isSharedCheck_3382_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3376_ = v___x_3373_;
v_isShared_3377_ = v_isSharedCheck_3382_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_a_3374_);
lean_dec(v___x_3373_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3382_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3378_; lean_object* v___x_3380_; 
v___x_3378_ = l_Lean_mkAppN(v_x_3196_, v_a_3374_);
lean_dec(v_a_3374_);
if (v_isShared_3377_ == 0)
{
lean_ctor_set(v___x_3376_, 0, v___x_3378_);
v___x_3380_ = v___x_3376_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v___x_3378_);
v___x_3380_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
return v___x_3380_;
}
}
}
else
{
lean_object* v_a_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3390_; 
lean_dec_ref(v_x_3196_);
v_a_3383_ = lean_ctor_get(v___x_3373_, 0);
v_isSharedCheck_3390_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3390_ == 0)
{
v___x_3385_ = v___x_3373_;
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_a_3383_);
lean_dec(v___x_3373_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3388_; 
if (v_isShared_3386_ == 0)
{
v___x_3388_ = v___x_3385_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v_a_3383_);
v___x_3388_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
return v___x_3388_;
}
}
}
}
else
{
lean_object* v_a_3391_; lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3398_; 
lean_dec(v___y_3365_);
lean_dec(v_fst_3354_);
lean_dec_ref(v_x_3196_);
v_a_3391_ = lean_ctor_get(v___x_3370_, 0);
v_isSharedCheck_3398_ = !lean_is_exclusive(v___x_3370_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3393_ = v___x_3370_;
v_isShared_3394_ = v_isSharedCheck_3398_;
goto v_resetjp_3392_;
}
else
{
lean_inc(v_a_3391_);
lean_dec(v___x_3370_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3398_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
lean_object* v___x_3396_; 
if (v_isShared_3394_ == 0)
{
v___x_3396_ = v___x_3393_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v_a_3391_);
v___x_3396_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
return v___x_3396_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3462_; 
lean_dec_ref(v_val_3347_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec_ref(v_x_3197_);
lean_dec_ref(v_x_3196_);
lean_dec_ref(v_expectedType_3191_);
v_a_3455_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3457_ = v___x_3351_;
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3351_);
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
else
{
lean_dec_ref(v_val_3347_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec_ref(v_x_3197_);
lean_dec_ref(v_x_3196_);
lean_dec_ref(v_expectedType_3191_);
return v___x_3348_;
}
}
else
{
lean_dec(v_a_3346_);
lean_dec_ref(v_x_3197_);
lean_dec_ref(v_x_3196_);
v___y_3324_ = v___y_3199_;
v___y_3325_ = v___y_3200_;
v___y_3326_ = v___y_3201_;
v___y_3327_ = v___y_3202_;
goto v___jp_3323_;
}
}
else
{
lean_object* v_a_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3470_; 
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec_ref(v_x_3197_);
lean_dec_ref(v_x_3196_);
lean_dec_ref(v_expectedType_3191_);
lean_dec_ref(v_a_3190_);
v_a_3463_ = lean_ctor_get(v___x_3345_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3345_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3465_ = v___x_3345_;
v_isShared_3466_ = v_isSharedCheck_3470_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_a_3463_);
lean_dec(v___x_3345_);
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
v___jp_3323_:
{
lean_object* v___x_3328_; lean_object* v_a_3329_; uint8_t v___x_3330_; 
v___x_3328_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_3322_, v___y_3326_);
v_a_3329_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_a_3329_);
lean_dec_ref(v___x_3328_);
v___x_3330_ = lean_unbox(v_a_3329_);
lean_dec(v_a_3329_);
if (v___x_3330_ == 0)
{
v___y_3244_ = v___y_3324_;
v___y_3245_ = v___y_3325_;
v___y_3246_ = v___y_3326_;
v___y_3247_ = v___y_3327_;
goto v___jp_3243_;
}
else
{
lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; 
v___x_3331_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__3);
lean_inc_ref(v_a_3190_);
v___x_3332_ = l_Lean_MessageData_ofExpr(v_a_3190_);
v___x_3333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3331_);
lean_ctor_set(v___x_3333_, 1, v___x_3332_);
v___x_3334_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_3322_, v___x_3333_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
if (lean_obj_tag(v___x_3334_) == 0)
{
lean_dec_ref(v___x_3334_);
v___y_3244_ = v___y_3324_;
v___y_3245_ = v___y_3325_;
v___y_3246_ = v___y_3326_;
v___y_3247_ = v___y_3327_;
goto v___jp_3243_;
}
else
{
lean_object* v_a_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3342_; 
lean_dec(v___y_3327_);
lean_dec_ref(v___y_3326_);
lean_dec(v___y_3325_);
lean_dec_ref(v___y_3324_);
lean_dec_ref(v_expectedType_3191_);
lean_dec_ref(v_a_3190_);
v_a_3335_ = lean_ctor_get(v___x_3334_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v___x_3334_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3337_ = v___x_3334_;
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_a_3335_);
lean_dec(v___x_3334_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3340_; 
if (v_isShared_3338_ == 0)
{
v___x_3340_ = v___x_3337_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_a_3335_);
v___x_3340_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
return v___x_3340_;
}
}
}
}
}
}
v___jp_3204_:
{
lean_object* v___x_3209_; 
v___x_3209_ = l_Lean_enableRealizationsForConst(v___y_3206_, v___y_3207_, v___y_3208_);
lean_dec(v___y_3208_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3216_; 
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3216_ == 0)
{
lean_object* v_unused_3217_; 
v_unused_3217_ = lean_ctor_get(v___x_3209_, 0);
lean_dec(v_unused_3217_);
v___x_3211_ = v___x_3209_;
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
else
{
lean_dec(v___x_3209_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3214_; 
if (v_isShared_3212_ == 0)
{
lean_ctor_set(v___x_3211_, 0, v___y_3205_);
v___x_3214_ = v___x_3211_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v___y_3205_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
else
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3225_; 
lean_dec_ref(v___y_3205_);
v_a_3218_ = lean_ctor_get(v___x_3209_, 0);
v_isSharedCheck_3225_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3225_ == 0)
{
v___x_3220_ = v___x_3209_;
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___x_3209_);
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
v___jp_3226_:
{
if (v_compile_3193_ == 0)
{
v___y_3205_ = v___y_3228_;
v___y_3206_ = v___y_3227_;
v___y_3207_ = v___y_3229_;
v___y_3208_ = v___y_3230_;
goto v___jp_3204_;
}
else
{
lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; 
v___x_3231_ = lean_unsigned_to_nat(1u);
v___x_3232_ = lean_mk_empty_array_with_capacity(v___x_3231_);
lean_inc(v___y_3227_);
v___x_3233_ = lean_array_push(v___x_3232_, v___y_3227_);
lean_inc(v___y_3230_);
lean_inc_ref(v___y_3229_);
v___x_3234_ = l_Lean_compileDecls(v___x_3233_, v_logCompileErrors_3194_, v___y_3229_, v___y_3230_);
if (lean_obj_tag(v___x_3234_) == 0)
{
lean_dec_ref(v___x_3234_);
v___y_3205_ = v___y_3228_;
v___y_3206_ = v___y_3227_;
v___y_3207_ = v___y_3229_;
v___y_3208_ = v___y_3230_;
goto v___jp_3204_;
}
else
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3242_; 
lean_dec(v___y_3230_);
lean_dec_ref(v___y_3229_);
lean_dec_ref(v___y_3228_);
lean_dec(v___y_3227_);
v_a_3235_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3237_ = v___x_3234_;
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3234_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
}
}
v___jp_3243_:
{
lean_object* v_options_3248_; lean_object* v___x_3249_; uint8_t v___x_3250_; 
v_options_3248_ = lean_ctor_get(v___y_3246_, 2);
v___x_3249_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_3250_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_3248_, v___x_3249_);
if (v___x_3250_ == 0)
{
lean_object* v___x_3251_; 
lean_dec(v___y_3247_);
lean_dec_ref(v___y_3246_);
lean_dec(v___y_3245_);
lean_dec_ref(v___y_3244_);
lean_dec_ref(v_expectedType_3191_);
v___x_3251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3251_, 0, v_a_3190_);
return v___x_3251_;
}
else
{
lean_object* v___x_3252_; 
lean_inc(v___y_3247_);
lean_inc_ref(v___y_3246_);
lean_inc(v___y_3245_);
lean_inc_ref(v___y_3244_);
lean_inc_ref(v_a_3190_);
v___x_3252_ = lean_infer_type(v_a_3190_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_);
if (lean_obj_tag(v___x_3252_) == 0)
{
lean_object* v_a_3253_; lean_object* v___x_3254_; 
v_a_3253_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_a_3253_);
lean_dec_ref(v___x_3252_);
lean_inc(v___y_3247_);
lean_inc_ref(v___y_3246_);
lean_inc(v___y_3245_);
lean_inc_ref(v___y_3244_);
lean_inc_ref(v_expectedType_3191_);
v___x_3254_ = l_Lean_Meta_isExprDefEq(v_expectedType_3191_, v_a_3253_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_);
if (lean_obj_tag(v___x_3254_) == 0)
{
lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3307_; 
v_a_3255_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3257_ = v___x_3254_;
v_isShared_3258_ = v_isSharedCheck_3307_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v___x_3254_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3307_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
uint8_t v___x_3259_; 
v___x_3259_ = lean_unbox(v_a_3255_);
if (v___x_3259_ == 0)
{
lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v_a_3262_; uint8_t v___x_3263_; uint8_t v___x_3264_; lean_object* v___x_3265_; 
lean_del_object(v___x_3257_);
v___x_3260_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___closed__1));
v___x_3261_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_normalizeInstance_spec__1___redArg(v___x_3260_, v___y_3247_);
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3262_);
lean_dec_ref(v___x_3261_);
v___x_3263_ = lean_unbox(v_a_3255_);
v___x_3264_ = lean_unbox(v_a_3255_);
lean_dec(v_a_3255_);
lean_inc(v___y_3247_);
lean_inc_ref(v___y_3246_);
lean_inc(v___y_3245_);
lean_inc(v_a_3262_);
v___x_3265_ = l_Lean_Meta_mkAuxDefinition(v_a_3262_, v_expectedType_3191_, v_a_3190_, v___x_3263_, v___x_3264_, v___x_3192_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_);
if (lean_obj_tag(v___x_3265_) == 0)
{
lean_object* v_a_3266_; uint8_t v___x_3267_; lean_object* v___x_3268_; 
v_a_3266_ = lean_ctor_get(v___x_3265_, 0);
lean_inc(v_a_3266_);
lean_dec_ref(v___x_3265_);
v___x_3267_ = 3;
lean_inc(v_a_3262_);
v___x_3268_ = l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg(v_a_3262_, v___x_3267_, v___y_3245_, v___y_3247_);
lean_dec_ref(v___x_3268_);
if (v_isMeta_3195_ == 0)
{
lean_dec(v___y_3245_);
v___y_3227_ = v_a_3262_;
v___y_3228_ = v_a_3266_;
v___y_3229_ = v___y_3246_;
v___y_3230_ = v___y_3247_;
goto v___jp_3226_;
}
else
{
lean_object* v___x_3269_; lean_object* v_env_3270_; lean_object* v_nextMacroScope_3271_; lean_object* v_ngen_3272_; lean_object* v_auxDeclNGen_3273_; lean_object* v_traceState_3274_; lean_object* v_messages_3275_; lean_object* v_infoState_3276_; lean_object* v_snapshotTasks_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3302_; 
v___x_3269_ = lean_st_ref_take(v___y_3247_);
v_env_3270_ = lean_ctor_get(v___x_3269_, 0);
v_nextMacroScope_3271_ = lean_ctor_get(v___x_3269_, 1);
v_ngen_3272_ = lean_ctor_get(v___x_3269_, 2);
v_auxDeclNGen_3273_ = lean_ctor_get(v___x_3269_, 3);
v_traceState_3274_ = lean_ctor_get(v___x_3269_, 4);
v_messages_3275_ = lean_ctor_get(v___x_3269_, 6);
v_infoState_3276_ = lean_ctor_get(v___x_3269_, 7);
v_snapshotTasks_3277_ = lean_ctor_get(v___x_3269_, 8);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___x_3269_);
if (v_isSharedCheck_3302_ == 0)
{
lean_object* v_unused_3303_; 
v_unused_3303_ = lean_ctor_get(v___x_3269_, 5);
lean_dec(v_unused_3303_);
v___x_3279_ = v___x_3269_;
v_isShared_3280_ = v_isSharedCheck_3302_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_snapshotTasks_3277_);
lean_inc(v_infoState_3276_);
lean_inc(v_messages_3275_);
lean_inc(v_traceState_3274_);
lean_inc(v_auxDeclNGen_3273_);
lean_inc(v_ngen_3272_);
lean_inc(v_nextMacroScope_3271_);
lean_inc(v_env_3270_);
lean_dec(v___x_3269_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3302_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3284_; 
lean_inc(v_a_3262_);
v___x_3281_ = l_Lean_markMeta(v_env_3270_, v_a_3262_);
v___x_3282_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__2);
if (v_isShared_3280_ == 0)
{
lean_ctor_set(v___x_3279_, 5, v___x_3282_);
lean_ctor_set(v___x_3279_, 0, v___x_3281_);
v___x_3284_ = v___x_3279_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3301_; 
v_reuseFailAlloc_3301_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3301_, 0, v___x_3281_);
lean_ctor_set(v_reuseFailAlloc_3301_, 1, v_nextMacroScope_3271_);
lean_ctor_set(v_reuseFailAlloc_3301_, 2, v_ngen_3272_);
lean_ctor_set(v_reuseFailAlloc_3301_, 3, v_auxDeclNGen_3273_);
lean_ctor_set(v_reuseFailAlloc_3301_, 4, v_traceState_3274_);
lean_ctor_set(v_reuseFailAlloc_3301_, 5, v___x_3282_);
lean_ctor_set(v_reuseFailAlloc_3301_, 6, v_messages_3275_);
lean_ctor_set(v_reuseFailAlloc_3301_, 7, v_infoState_3276_);
lean_ctor_set(v_reuseFailAlloc_3301_, 8, v_snapshotTasks_3277_);
v___x_3284_ = v_reuseFailAlloc_3301_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v_mctx_3287_; lean_object* v_zetaDeltaFVarIds_3288_; lean_object* v_postponed_3289_; lean_object* v_diag_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3299_; 
v___x_3285_ = lean_st_ref_set(v___y_3247_, v___x_3284_);
v___x_3286_ = lean_st_ref_take(v___y_3245_);
v_mctx_3287_ = lean_ctor_get(v___x_3286_, 0);
v_zetaDeltaFVarIds_3288_ = lean_ctor_get(v___x_3286_, 2);
v_postponed_3289_ = lean_ctor_get(v___x_3286_, 3);
v_diag_3290_ = lean_ctor_get(v___x_3286_, 4);
v_isSharedCheck_3299_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3299_ == 0)
{
lean_object* v_unused_3300_; 
v_unused_3300_ = lean_ctor_get(v___x_3286_, 1);
lean_dec(v_unused_3300_);
v___x_3292_ = v___x_3286_;
v_isShared_3293_ = v_isSharedCheck_3299_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_diag_3290_);
lean_inc(v_postponed_3289_);
lean_inc(v_zetaDeltaFVarIds_3288_);
lean_inc(v_mctx_3287_);
lean_dec(v___x_3286_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3299_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3294_; lean_object* v___x_3296_; 
v___x_3294_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_Meta_normalizeInstance_spec__2___redArg___closed__3);
if (v_isShared_3293_ == 0)
{
lean_ctor_set(v___x_3292_, 1, v___x_3294_);
v___x_3296_ = v___x_3292_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3298_; 
v_reuseFailAlloc_3298_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3298_, 0, v_mctx_3287_);
lean_ctor_set(v_reuseFailAlloc_3298_, 1, v___x_3294_);
lean_ctor_set(v_reuseFailAlloc_3298_, 2, v_zetaDeltaFVarIds_3288_);
lean_ctor_set(v_reuseFailAlloc_3298_, 3, v_postponed_3289_);
lean_ctor_set(v_reuseFailAlloc_3298_, 4, v_diag_3290_);
v___x_3296_ = v_reuseFailAlloc_3298_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
lean_object* v___x_3297_; 
v___x_3297_ = lean_st_ref_set(v___y_3245_, v___x_3296_);
lean_dec(v___y_3245_);
v___y_3227_ = v_a_3262_;
v___y_3228_ = v_a_3266_;
v___y_3229_ = v___y_3246_;
v___y_3230_ = v___y_3247_;
goto v___jp_3226_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3262_);
lean_dec(v___y_3247_);
lean_dec_ref(v___y_3246_);
lean_dec(v___y_3245_);
return v___x_3265_;
}
}
else
{
lean_object* v___x_3305_; 
lean_dec(v_a_3255_);
lean_dec(v___y_3247_);
lean_dec_ref(v___y_3246_);
lean_dec(v___y_3245_);
lean_dec_ref(v___y_3244_);
lean_dec_ref(v_expectedType_3191_);
if (v_isShared_3258_ == 0)
{
lean_ctor_set(v___x_3257_, 0, v_a_3190_);
v___x_3305_ = v___x_3257_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_a_3190_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
}
}
else
{
lean_object* v_a_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3315_; 
lean_dec(v___y_3247_);
lean_dec_ref(v___y_3246_);
lean_dec(v___y_3245_);
lean_dec_ref(v___y_3244_);
lean_dec_ref(v_expectedType_3191_);
lean_dec_ref(v_a_3190_);
v_a_3308_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3315_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3315_ == 0)
{
v___x_3310_ = v___x_3254_;
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_a_3308_);
lean_dec(v___x_3254_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v___x_3313_; 
if (v_isShared_3311_ == 0)
{
v___x_3313_ = v___x_3310_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v_a_3308_);
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
else
{
lean_dec(v___y_3247_);
lean_dec_ref(v___y_3246_);
lean_dec(v___y_3245_);
lean_dec_ref(v___y_3244_);
lean_dec_ref(v_expectedType_3191_);
lean_dec_ref(v_a_3190_);
return v___x_3252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__2(lean_object* v_expectedType_3471_, lean_object* v_inst_3472_, uint8_t v___x_3473_, uint8_t v_compile_3474_, uint8_t v_logCompileErrors_3475_, uint8_t v_isMeta_3476_, lean_object* v_____r_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_){
_start:
{
lean_object* v___x_3483_; 
lean_inc(v___y_3481_);
lean_inc_ref(v___y_3480_);
lean_inc(v___y_3479_);
lean_inc_ref(v___y_3478_);
lean_inc_ref(v_expectedType_3471_);
v___x_3483_ = l_Lean_Meta_isProp(v_expectedType_3471_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_);
if (lean_obj_tag(v___x_3483_) == 0)
{
lean_object* v_a_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3505_; 
v_a_3484_ = lean_ctor_get(v___x_3483_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3483_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3486_ = v___x_3483_;
v_isShared_3487_ = v_isSharedCheck_3505_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_a_3484_);
lean_dec(v___x_3483_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3505_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
uint8_t v___x_3488_; 
v___x_3488_ = lean_unbox(v_a_3484_);
lean_dec(v_a_3484_);
if (v___x_3488_ == 0)
{
lean_object* v___x_3489_; 
lean_del_object(v___x_3486_);
lean_inc(v___y_3481_);
lean_inc_ref(v___y_3480_);
lean_inc(v___y_3479_);
lean_inc_ref(v___y_3478_);
v___x_3489_ = lean_whnf(v_inst_3472_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; lean_object* v_dummy_3491_; lean_object* v_nargs_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref(v___x_3489_);
v_dummy_3491_ = lean_obj_once(&l_Lean_Meta_abstractInstImplicitArgs___closed__0, &l_Lean_Meta_abstractInstImplicitArgs___closed__0_once, _init_l_Lean_Meta_abstractInstImplicitArgs___closed__0);
v_nargs_3492_ = l_Lean_Expr_getAppNumArgs(v_a_3490_);
lean_inc(v_nargs_3492_);
v___x_3493_ = lean_mk_array(v_nargs_3492_, v_dummy_3491_);
v___x_3494_ = lean_unsigned_to_nat(1u);
v___x_3495_ = lean_nat_sub(v_nargs_3492_, v___x_3494_);
lean_dec(v_nargs_3492_);
lean_inc(v_a_3490_);
v___x_3496_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__15(v_a_3490_, v_expectedType_3471_, v___x_3473_, v_compile_3474_, v_logCompileErrors_3475_, v_isMeta_3476_, v_a_3490_, v___x_3493_, v___x_3495_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_);
return v___x_3496_;
}
else
{
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
lean_dec_ref(v_expectedType_3471_);
return v___x_3489_;
}
}
else
{
lean_object* v_options_3497_; lean_object* v___x_3498_; uint8_t v___x_3499_; 
v_options_3497_ = lean_ctor_get(v___y_3480_, 2);
v___x_3498_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_3499_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_3497_, v___x_3498_);
if (v___x_3499_ == 0)
{
lean_object* v___x_3501_; 
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
lean_dec_ref(v_expectedType_3471_);
if (v_isShared_3487_ == 0)
{
lean_ctor_set(v___x_3486_, 0, v_inst_3472_);
v___x_3501_ = v___x_3486_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v_inst_3472_);
v___x_3501_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
return v___x_3501_;
}
}
else
{
lean_object* v___x_3503_; lean_object* v___x_3504_; 
lean_del_object(v___x_3486_);
v___x_3503_ = lean_box(0);
v___x_3504_ = l_Lean_Meta_mkAuxTheorem(v_expectedType_3471_, v_inst_3472_, v___x_3473_, v___x_3503_, v___x_3473_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_);
return v___x_3504_;
}
}
}
}
else
{
lean_object* v_a_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
lean_dec_ref(v_inst_3472_);
lean_dec_ref(v_expectedType_3471_);
v_a_3506_ = lean_ctor_get(v___x_3483_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3483_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3508_ = v___x_3483_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_a_3506_);
lean_dec(v___x_3483_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3506_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance(lean_object* v_inst_3514_, lean_object* v_expectedType_3515_, uint8_t v_compile_3516_, uint8_t v_logCompileErrors_3517_, uint8_t v_isMeta_3518_, lean_object* v_a_3519_, lean_object* v_a_3520_, lean_object* v_a_3521_, lean_object* v_a_3522_){
_start:
{
lean_object* v___x_3524_; lean_object* v_options_3525_; uint8_t v_foApprox_3526_; uint8_t v_ctxApprox_3527_; uint8_t v_quasiPatternApprox_3528_; uint8_t v_constApprox_3529_; uint8_t v_isDefEqStuckEx_3530_; uint8_t v_unificationHints_3531_; uint8_t v_proofIrrelevance_3532_; uint8_t v_assignSyntheticOpaque_3533_; uint8_t v_offsetCnstrs_3534_; uint8_t v_etaStruct_3535_; uint8_t v_univApprox_3536_; uint8_t v_iota_3537_; uint8_t v_beta_3538_; uint8_t v_proj_3539_; uint8_t v_zeta_3540_; uint8_t v_zetaDelta_3541_; uint8_t v_zetaUnused_3542_; uint8_t v_zetaHave_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3863_; 
v___x_3524_ = l_Lean_Meta_Context_config(v_a_3519_);
v_options_3525_ = lean_ctor_get(v_a_3521_, 2);
v_foApprox_3526_ = lean_ctor_get_uint8(v___x_3524_, 0);
v_ctxApprox_3527_ = lean_ctor_get_uint8(v___x_3524_, 1);
v_quasiPatternApprox_3528_ = lean_ctor_get_uint8(v___x_3524_, 2);
v_constApprox_3529_ = lean_ctor_get_uint8(v___x_3524_, 3);
v_isDefEqStuckEx_3530_ = lean_ctor_get_uint8(v___x_3524_, 4);
v_unificationHints_3531_ = lean_ctor_get_uint8(v___x_3524_, 5);
v_proofIrrelevance_3532_ = lean_ctor_get_uint8(v___x_3524_, 6);
v_assignSyntheticOpaque_3533_ = lean_ctor_get_uint8(v___x_3524_, 7);
v_offsetCnstrs_3534_ = lean_ctor_get_uint8(v___x_3524_, 8);
v_etaStruct_3535_ = lean_ctor_get_uint8(v___x_3524_, 10);
v_univApprox_3536_ = lean_ctor_get_uint8(v___x_3524_, 11);
v_iota_3537_ = lean_ctor_get_uint8(v___x_3524_, 12);
v_beta_3538_ = lean_ctor_get_uint8(v___x_3524_, 13);
v_proj_3539_ = lean_ctor_get_uint8(v___x_3524_, 14);
v_zeta_3540_ = lean_ctor_get_uint8(v___x_3524_, 15);
v_zetaDelta_3541_ = lean_ctor_get_uint8(v___x_3524_, 16);
v_zetaUnused_3542_ = lean_ctor_get_uint8(v___x_3524_, 17);
v_zetaHave_3543_ = lean_ctor_get_uint8(v___x_3524_, 18);
v_isSharedCheck_3863_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3863_ == 0)
{
v___x_3545_ = v___x_3524_;
v_isShared_3546_ = v_isSharedCheck_3863_;
goto v_resetjp_3544_;
}
else
{
lean_dec(v___x_3524_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3863_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
uint8_t v_trackZetaDelta_3547_; lean_object* v_zetaDeltaSet_3548_; lean_object* v_lctx_3549_; lean_object* v_localInstances_3550_; lean_object* v_defEqCtx_x3f_3551_; lean_object* v_synthPendingDepth_3552_; lean_object* v_canUnfold_x3f_3553_; uint8_t v_univApprox_3554_; uint8_t v_inTypeClassResolution_3555_; uint8_t v_cacheInferType_3556_; uint8_t v_hasTrace_3557_; lean_object* v___y_3559_; lean_object* v___y_3560_; lean_object* v___y_3561_; lean_object* v___y_3562_; uint8_t v___x_3594_; lean_object* v_config_3596_; 
v_trackZetaDelta_3547_ = lean_ctor_get_uint8(v_a_3519_, sizeof(void*)*7);
v_zetaDeltaSet_3548_ = lean_ctor_get(v_a_3519_, 1);
lean_inc(v_zetaDeltaSet_3548_);
v_lctx_3549_ = lean_ctor_get(v_a_3519_, 2);
lean_inc_ref(v_lctx_3549_);
v_localInstances_3550_ = lean_ctor_get(v_a_3519_, 3);
lean_inc_ref(v_localInstances_3550_);
v_defEqCtx_x3f_3551_ = lean_ctor_get(v_a_3519_, 4);
lean_inc(v_defEqCtx_x3f_3551_);
v_synthPendingDepth_3552_ = lean_ctor_get(v_a_3519_, 5);
lean_inc(v_synthPendingDepth_3552_);
v_canUnfold_x3f_3553_ = lean_ctor_get(v_a_3519_, 6);
lean_inc(v_canUnfold_x3f_3553_);
v_univApprox_3554_ = lean_ctor_get_uint8(v_a_3519_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3555_ = lean_ctor_get_uint8(v_a_3519_, sizeof(void*)*7 + 2);
v_cacheInferType_3556_ = lean_ctor_get_uint8(v_a_3519_, sizeof(void*)*7 + 3);
v_hasTrace_3557_ = lean_ctor_get_uint8(v_options_3525_, sizeof(void*)*1);
v___x_3594_ = 3;
if (v_isShared_3546_ == 0)
{
v_config_3596_ = v___x_3545_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 0, v_foApprox_3526_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 1, v_ctxApprox_3527_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 2, v_quasiPatternApprox_3528_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 3, v_constApprox_3529_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 4, v_isDefEqStuckEx_3530_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 5, v_unificationHints_3531_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 6, v_proofIrrelevance_3532_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 7, v_assignSyntheticOpaque_3533_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 8, v_offsetCnstrs_3534_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 10, v_etaStruct_3535_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 11, v_univApprox_3536_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 12, v_iota_3537_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 13, v_beta_3538_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 14, v_proj_3539_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 15, v_zeta_3540_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 16, v_zetaDelta_3541_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 17, v_zetaUnused_3542_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, 18, v_zetaHave_3543_);
v_config_3596_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3595_;
}
v___jp_3558_:
{
lean_object* v___x_3563_; 
lean_inc(v___y_3562_);
lean_inc_ref(v___y_3561_);
lean_inc(v___y_3560_);
lean_inc_ref(v___y_3559_);
lean_inc_ref(v_expectedType_3515_);
v___x_3563_ = l_Lean_Meta_isProp(v_expectedType_3515_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v_a_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3585_; 
v_a_3564_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3566_ = v___x_3563_;
v_isShared_3567_ = v_isSharedCheck_3585_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_a_3564_);
lean_dec(v___x_3563_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3585_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
uint8_t v___x_3568_; 
v___x_3568_ = lean_unbox(v_a_3564_);
lean_dec(v_a_3564_);
if (v___x_3568_ == 0)
{
lean_object* v___x_3569_; 
lean_del_object(v___x_3566_);
lean_inc(v___y_3562_);
lean_inc_ref(v___y_3561_);
lean_inc(v___y_3560_);
lean_inc_ref(v___y_3559_);
v___x_3569_ = lean_whnf(v_inst_3514_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_);
if (lean_obj_tag(v___x_3569_) == 0)
{
lean_object* v_a_3570_; lean_object* v_dummy_3571_; lean_object* v_nargs_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; 
v_a_3570_ = lean_ctor_get(v___x_3569_, 0);
lean_inc(v_a_3570_);
lean_dec_ref(v___x_3569_);
v_dummy_3571_ = lean_obj_once(&l_Lean_Meta_abstractInstImplicitArgs___closed__0, &l_Lean_Meta_abstractInstImplicitArgs___closed__0_once, _init_l_Lean_Meta_abstractInstImplicitArgs___closed__0);
v_nargs_3572_ = l_Lean_Expr_getAppNumArgs(v_a_3570_);
lean_inc(v_nargs_3572_);
v___x_3573_ = lean_mk_array(v_nargs_3572_, v_dummy_3571_);
v___x_3574_ = lean_unsigned_to_nat(1u);
v___x_3575_ = lean_nat_sub(v_nargs_3572_, v___x_3574_);
lean_dec(v_nargs_3572_);
lean_inc(v_a_3570_);
v___x_3576_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__10(v_a_3570_, v_expectedType_3515_, v_hasTrace_3557_, v_compile_3516_, v_logCompileErrors_3517_, v_isMeta_3518_, v_a_3570_, v___x_3573_, v___x_3575_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_);
return v___x_3576_;
}
else
{
lean_dec(v___y_3562_);
lean_dec_ref(v___y_3561_);
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3559_);
lean_dec_ref(v_expectedType_3515_);
return v___x_3569_;
}
}
else
{
lean_object* v_options_3577_; lean_object* v___x_3578_; uint8_t v___x_3579_; 
v_options_3577_ = lean_ctor_get(v___y_3561_, 2);
v___x_3578_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_3579_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_3577_, v___x_3578_);
if (v___x_3579_ == 0)
{
lean_object* v___x_3581_; 
lean_dec(v___y_3562_);
lean_dec_ref(v___y_3561_);
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3559_);
lean_dec_ref(v_expectedType_3515_);
if (v_isShared_3567_ == 0)
{
lean_ctor_set(v___x_3566_, 0, v_inst_3514_);
v___x_3581_ = v___x_3566_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v_inst_3514_);
v___x_3581_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
return v___x_3581_;
}
}
else
{
lean_object* v___x_3583_; lean_object* v___x_3584_; 
lean_del_object(v___x_3566_);
v___x_3583_ = lean_box(0);
v___x_3584_ = l_Lean_Meta_mkAuxTheorem(v_expectedType_3515_, v_inst_3514_, v___x_3579_, v___x_3583_, v___x_3579_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_);
return v___x_3584_;
}
}
}
}
else
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3593_; 
lean_dec(v___y_3562_);
lean_dec_ref(v___y_3561_);
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3559_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3586_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3593_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3593_ == 0)
{
v___x_3588_ = v___x_3563_;
v_isShared_3589_ = v_isSharedCheck_3593_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v___x_3563_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3593_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
lean_object* v___x_3591_; 
if (v_isShared_3589_ == 0)
{
v___x_3591_ = v___x_3588_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v_a_3586_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
}
}
v_reusejp_3595_:
{
uint64_t v___x_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3854_; 
lean_ctor_set_uint8(v_config_3596_, 9, v___x_3594_);
v___x_3597_ = l_Lean_Meta_Context_configKey(v_a_3519_);
v_isSharedCheck_3854_ = !lean_is_exclusive(v_a_3519_);
if (v_isSharedCheck_3854_ == 0)
{
lean_object* v_unused_3855_; lean_object* v_unused_3856_; lean_object* v_unused_3857_; lean_object* v_unused_3858_; lean_object* v_unused_3859_; lean_object* v_unused_3860_; lean_object* v_unused_3861_; 
v_unused_3855_ = lean_ctor_get(v_a_3519_, 6);
lean_dec(v_unused_3855_);
v_unused_3856_ = lean_ctor_get(v_a_3519_, 5);
lean_dec(v_unused_3856_);
v_unused_3857_ = lean_ctor_get(v_a_3519_, 4);
lean_dec(v_unused_3857_);
v_unused_3858_ = lean_ctor_get(v_a_3519_, 3);
lean_dec(v_unused_3858_);
v_unused_3859_ = lean_ctor_get(v_a_3519_, 2);
lean_dec(v_unused_3859_);
v_unused_3860_ = lean_ctor_get(v_a_3519_, 1);
lean_dec(v_unused_3860_);
v_unused_3861_ = lean_ctor_get(v_a_3519_, 0);
lean_dec(v_unused_3861_);
v___x_3599_ = v_a_3519_;
v_isShared_3600_ = v_isSharedCheck_3854_;
goto v_resetjp_3598_;
}
else
{
lean_dec(v_a_3519_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3854_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
uint64_t v___x_3601_; uint64_t v___x_3602_; lean_object* v_cls_3603_; uint64_t v___x_3604_; uint64_t v___x_3605_; uint64_t v_key_3606_; lean_object* v___x_3607_; lean_object* v___x_3609_; 
v___x_3601_ = 2ULL;
v___x_3602_ = lean_uint64_shift_right(v___x_3597_, v___x_3601_);
v_cls_3603_ = ((lean_object*)(l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_));
v___x_3604_ = lean_uint64_shift_left(v___x_3602_, v___x_3601_);
v___x_3605_ = lean_uint64_once(&l_Lean_Meta_normalizeInstance___closed__0, &l_Lean_Meta_normalizeInstance___closed__0_once, _init_l_Lean_Meta_normalizeInstance___closed__0);
v_key_3606_ = lean_uint64_lor(v___x_3604_, v___x_3605_);
v___x_3607_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3607_, 0, v_config_3596_);
lean_ctor_set_uint64(v___x_3607_, sizeof(void*)*1, v_key_3606_);
if (v_isShared_3600_ == 0)
{
lean_ctor_set(v___x_3599_, 0, v___x_3607_);
v___x_3609_ = v___x_3599_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v___x_3607_);
lean_ctor_set(v_reuseFailAlloc_3853_, 1, v_zetaDeltaSet_3548_);
lean_ctor_set(v_reuseFailAlloc_3853_, 2, v_lctx_3549_);
lean_ctor_set(v_reuseFailAlloc_3853_, 3, v_localInstances_3550_);
lean_ctor_set(v_reuseFailAlloc_3853_, 4, v_defEqCtx_x3f_3551_);
lean_ctor_set(v_reuseFailAlloc_3853_, 5, v_synthPendingDepth_3552_);
lean_ctor_set(v_reuseFailAlloc_3853_, 6, v_canUnfold_x3f_3553_);
lean_ctor_set_uint8(v_reuseFailAlloc_3853_, sizeof(void*)*7, v_trackZetaDelta_3547_);
lean_ctor_set_uint8(v_reuseFailAlloc_3853_, sizeof(void*)*7 + 1, v_univApprox_3554_);
lean_ctor_set_uint8(v_reuseFailAlloc_3853_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3555_);
lean_ctor_set_uint8(v_reuseFailAlloc_3853_, sizeof(void*)*7 + 3, v_cacheInferType_3556_);
v___x_3609_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
if (v_hasTrace_3557_ == 0)
{
lean_object* v___x_3610_; 
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v___x_3609_);
lean_inc_ref(v_expectedType_3515_);
v___x_3610_ = l_Lean_Meta_isClass_x3f(v_expectedType_3515_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
if (lean_obj_tag(v___x_3610_) == 0)
{
lean_object* v_a_3611_; lean_object* v___x_3613_; uint8_t v_isShared_3614_; uint8_t v_isSharedCheck_3642_; 
v_a_3611_ = lean_ctor_get(v___x_3610_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3613_ = v___x_3610_;
v_isShared_3614_ = v_isSharedCheck_3642_;
goto v_resetjp_3612_;
}
else
{
lean_inc(v_a_3611_);
lean_dec(v___x_3610_);
v___x_3613_ = lean_box(0);
v_isShared_3614_ = v_isSharedCheck_3642_;
goto v_resetjp_3612_;
}
v_resetjp_3612_:
{
if (lean_obj_tag(v_a_3611_) == 1)
{
lean_object* v_val_3615_; lean_object* v___x_3616_; 
lean_del_object(v___x_3613_);
v_val_3615_ = lean_ctor_get(v_a_3611_, 0);
lean_inc(v_val_3615_);
lean_dec_ref(v_a_3611_);
v___x_3616_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_3603_, v_a_3521_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v_a_3617_; uint8_t v___x_3618_; 
v_a_3617_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_a_3617_);
lean_dec_ref(v___x_3616_);
v___x_3618_ = lean_unbox(v_a_3617_);
lean_dec(v_a_3617_);
if (v___x_3618_ == 0)
{
lean_dec(v_val_3615_);
v___y_3559_ = v___x_3609_;
v___y_3560_ = v_a_3520_;
v___y_3561_ = v_a_3521_;
v___y_3562_ = v_a_3522_;
goto v___jp_3558_;
}
else
{
lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___x_3619_ = lean_obj_once(&l_Lean_Meta_normalizeInstance___closed__2, &l_Lean_Meta_normalizeInstance___closed__2_once, _init_l_Lean_Meta_normalizeInstance___closed__2);
v___x_3620_ = l_Lean_MessageData_ofName(v_val_3615_);
v___x_3621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3619_);
lean_ctor_set(v___x_3621_, 1, v___x_3620_);
v___x_3622_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_3603_, v___x_3621_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
if (lean_obj_tag(v___x_3622_) == 0)
{
lean_dec_ref(v___x_3622_);
v___y_3559_ = v___x_3609_;
v___y_3560_ = v_a_3520_;
v___y_3561_ = v_a_3521_;
v___y_3562_ = v_a_3522_;
goto v___jp_3558_;
}
else
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3630_; 
lean_dec_ref(v___x_3609_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3623_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3630_ == 0)
{
v___x_3625_ = v___x_3622_;
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3622_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3628_; 
if (v_isShared_3626_ == 0)
{
v___x_3628_ = v___x_3625_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v_a_3623_);
v___x_3628_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
return v___x_3628_;
}
}
}
}
}
else
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3638_; 
lean_dec(v_val_3615_);
lean_dec_ref(v___x_3609_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3631_ = lean_ctor_get(v___x_3616_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3633_ = v___x_3616_;
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3616_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3636_; 
if (v_isShared_3634_ == 0)
{
v___x_3636_ = v___x_3633_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v_a_3631_);
v___x_3636_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
return v___x_3636_;
}
}
}
}
else
{
lean_object* v___x_3640_; 
lean_dec(v_a_3611_);
lean_dec_ref(v___x_3609_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_expectedType_3515_);
if (v_isShared_3614_ == 0)
{
lean_ctor_set(v___x_3613_, 0, v_inst_3514_);
v___x_3640_ = v___x_3613_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_inst_3514_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
}
else
{
lean_object* v_a_3643_; lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3650_; 
lean_dec_ref(v___x_3609_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3643_ = lean_ctor_get(v___x_3610_, 0);
v_isSharedCheck_3650_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3645_ = v___x_3610_;
v_isShared_3646_ = v_isSharedCheck_3650_;
goto v_resetjp_3644_;
}
else
{
lean_inc(v_a_3643_);
lean_dec(v___x_3610_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3650_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
lean_object* v___x_3648_; 
if (v_isShared_3646_ == 0)
{
v___x_3648_ = v___x_3645_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_a_3643_);
v___x_3648_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
return v___x_3648_;
}
}
}
}
else
{
lean_object* v___x_3651_; 
v___x_3651_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_3603_, v_a_3521_);
if (lean_obj_tag(v___x_3651_) == 0)
{
lean_object* v_a_3652_; lean_object* v___f_3653_; lean_object* v___x_3654_; lean_object* v___y_3656_; lean_object* v___y_3657_; lean_object* v_a_3658_; lean_object* v___y_3669_; lean_object* v___y_3670_; lean_object* v_a_3671_; lean_object* v___y_3674_; lean_object* v___y_3675_; lean_object* v_a_3676_; lean_object* v___y_3679_; lean_object* v___y_3680_; lean_object* v___y_3681_; lean_object* v___y_3685_; lean_object* v___y_3686_; lean_object* v_a_3687_; lean_object* v___y_3701_; lean_object* v___y_3702_; lean_object* v_a_3703_; lean_object* v___y_3706_; lean_object* v___y_3707_; lean_object* v_a_3708_; lean_object* v___y_3711_; lean_object* v___y_3712_; lean_object* v___y_3713_; uint8_t v___x_3765_; 
v_a_3652_ = lean_ctor_get(v___x_3651_, 0);
lean_inc(v_a_3652_);
lean_dec_ref(v___x_3651_);
lean_inc_ref(v_expectedType_3515_);
v___f_3653_ = lean_alloc_closure((void*)(l_Lean_Meta_normalizeInstance___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3653_, 0, v_expectedType_3515_);
v___x_3654_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4___closed__1));
v___x_3765_ = lean_unbox(v_a_3652_);
if (v___x_3765_ == 0)
{
lean_object* v___x_3766_; uint8_t v___x_3767_; lean_object* v___y_3769_; lean_object* v___y_3770_; lean_object* v___y_3771_; lean_object* v___y_3772_; 
v___x_3766_ = l_Lean_trace_profiler;
v___x_3767_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_3525_, v___x_3766_);
if (v___x_3767_ == 0)
{
lean_object* v___x_3804_; 
lean_dec_ref(v___f_3653_);
lean_dec(v_a_3652_);
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v___x_3609_);
lean_inc_ref(v_expectedType_3515_);
v___x_3804_ = l_Lean_Meta_isClass_x3f(v_expectedType_3515_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
if (lean_obj_tag(v___x_3804_) == 0)
{
lean_object* v_a_3805_; lean_object* v___x_3807_; uint8_t v_isShared_3808_; uint8_t v_isSharedCheck_3836_; 
v_a_3805_ = lean_ctor_get(v___x_3804_, 0);
v_isSharedCheck_3836_ = !lean_is_exclusive(v___x_3804_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3807_ = v___x_3804_;
v_isShared_3808_ = v_isSharedCheck_3836_;
goto v_resetjp_3806_;
}
else
{
lean_inc(v_a_3805_);
lean_dec(v___x_3804_);
v___x_3807_ = lean_box(0);
v_isShared_3808_ = v_isSharedCheck_3836_;
goto v_resetjp_3806_;
}
v_resetjp_3806_:
{
if (lean_obj_tag(v_a_3805_) == 1)
{
lean_object* v_val_3809_; lean_object* v___x_3810_; 
lean_del_object(v___x_3807_);
v_val_3809_ = lean_ctor_get(v_a_3805_, 0);
lean_inc(v_val_3809_);
lean_dec_ref(v_a_3805_);
v___x_3810_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_3603_, v_a_3521_);
if (lean_obj_tag(v___x_3810_) == 0)
{
lean_object* v_a_3811_; uint8_t v___x_3812_; 
v_a_3811_ = lean_ctor_get(v___x_3810_, 0);
lean_inc(v_a_3811_);
lean_dec_ref(v___x_3810_);
v___x_3812_ = lean_unbox(v_a_3811_);
lean_dec(v_a_3811_);
if (v___x_3812_ == 0)
{
lean_dec(v_val_3809_);
v___y_3769_ = v___x_3609_;
v___y_3770_ = v_a_3520_;
v___y_3771_ = v_a_3521_;
v___y_3772_ = v_a_3522_;
goto v___jp_3768_;
}
else
{
lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; 
v___x_3813_ = lean_obj_once(&l_Lean_Meta_normalizeInstance___closed__2, &l_Lean_Meta_normalizeInstance___closed__2_once, _init_l_Lean_Meta_normalizeInstance___closed__2);
v___x_3814_ = l_Lean_MessageData_ofName(v_val_3809_);
v___x_3815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3815_, 0, v___x_3813_);
lean_ctor_set(v___x_3815_, 1, v___x_3814_);
v___x_3816_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_3603_, v___x_3815_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
if (lean_obj_tag(v___x_3816_) == 0)
{
lean_dec_ref(v___x_3816_);
v___y_3769_ = v___x_3609_;
v___y_3770_ = v_a_3520_;
v___y_3771_ = v_a_3521_;
v___y_3772_ = v_a_3522_;
goto v___jp_3768_;
}
else
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
lean_dec_ref(v___x_3609_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3817_ = lean_ctor_get(v___x_3816_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3816_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3819_ = v___x_3816_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v___x_3816_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3817_);
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
}
else
{
lean_object* v_a_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3832_; 
lean_dec(v_val_3809_);
lean_dec_ref(v___x_3609_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3825_ = lean_ctor_get(v___x_3810_, 0);
v_isSharedCheck_3832_ = !lean_is_exclusive(v___x_3810_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3827_ = v___x_3810_;
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_a_3825_);
lean_dec(v___x_3810_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3830_; 
if (v_isShared_3828_ == 0)
{
v___x_3830_ = v___x_3827_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_a_3825_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
return v___x_3830_;
}
}
}
}
else
{
lean_object* v___x_3834_; 
lean_dec(v_a_3805_);
lean_dec_ref(v___x_3609_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_expectedType_3515_);
if (v_isShared_3808_ == 0)
{
lean_ctor_set(v___x_3807_, 0, v_inst_3514_);
v___x_3834_ = v___x_3807_;
goto v_reusejp_3833_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v_inst_3514_);
v___x_3834_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3833_;
}
v_reusejp_3833_:
{
return v___x_3834_;
}
}
}
}
else
{
lean_object* v_a_3837_; lean_object* v___x_3839_; uint8_t v_isShared_3840_; uint8_t v_isSharedCheck_3844_; 
lean_dec_ref(v___x_3609_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3837_ = lean_ctor_get(v___x_3804_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v___x_3804_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3839_ = v___x_3804_;
v_isShared_3840_ = v_isSharedCheck_3844_;
goto v_resetjp_3838_;
}
else
{
lean_inc(v_a_3837_);
lean_dec(v___x_3804_);
v___x_3839_ = lean_box(0);
v_isShared_3840_ = v_isSharedCheck_3844_;
goto v_resetjp_3838_;
}
v_resetjp_3838_:
{
lean_object* v___x_3842_; 
if (v_isShared_3840_ == 0)
{
v___x_3842_ = v___x_3839_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v_a_3837_);
v___x_3842_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
return v___x_3842_;
}
}
}
}
else
{
lean_inc_ref(v_options_3525_);
goto v___jp_3716_;
}
v___jp_3768_:
{
lean_object* v___x_3773_; 
lean_inc(v___y_3772_);
lean_inc_ref(v___y_3771_);
lean_inc(v___y_3770_);
lean_inc_ref(v___y_3769_);
lean_inc_ref(v_expectedType_3515_);
v___x_3773_ = l_Lean_Meta_isProp(v_expectedType_3515_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
if (lean_obj_tag(v___x_3773_) == 0)
{
lean_object* v_a_3774_; lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3795_; 
v_a_3774_ = lean_ctor_get(v___x_3773_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3773_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3776_ = v___x_3773_;
v_isShared_3777_ = v_isSharedCheck_3795_;
goto v_resetjp_3775_;
}
else
{
lean_inc(v_a_3774_);
lean_dec(v___x_3773_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3795_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
uint8_t v___x_3778_; 
v___x_3778_ = lean_unbox(v_a_3774_);
lean_dec(v_a_3774_);
if (v___x_3778_ == 0)
{
lean_object* v___x_3779_; 
lean_del_object(v___x_3776_);
lean_inc(v___y_3772_);
lean_inc_ref(v___y_3771_);
lean_inc(v___y_3770_);
lean_inc_ref(v___y_3769_);
v___x_3779_ = lean_whnf(v_inst_3514_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
if (lean_obj_tag(v___x_3779_) == 0)
{
lean_object* v_a_3780_; lean_object* v_dummy_3781_; lean_object* v_nargs_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; 
v_a_3780_ = lean_ctor_get(v___x_3779_, 0);
lean_inc(v_a_3780_);
lean_dec_ref(v___x_3779_);
v_dummy_3781_ = lean_obj_once(&l_Lean_Meta_abstractInstImplicitArgs___closed__0, &l_Lean_Meta_abstractInstImplicitArgs___closed__0_once, _init_l_Lean_Meta_abstractInstImplicitArgs___closed__0);
v_nargs_3782_ = l_Lean_Expr_getAppNumArgs(v_a_3780_);
lean_inc(v_nargs_3782_);
v___x_3783_ = lean_mk_array(v_nargs_3782_, v_dummy_3781_);
v___x_3784_ = lean_unsigned_to_nat(1u);
v___x_3785_ = lean_nat_sub(v_nargs_3782_, v___x_3784_);
lean_dec(v_nargs_3782_);
lean_inc(v_a_3780_);
v___x_3786_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13(v_a_3780_, v_expectedType_3515_, v___x_3767_, v_hasTrace_3557_, v_compile_3516_, v_logCompileErrors_3517_, v_isMeta_3518_, v_a_3780_, v___x_3783_, v___x_3785_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
return v___x_3786_;
}
else
{
lean_dec(v___y_3772_);
lean_dec_ref(v___y_3771_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
lean_dec_ref(v_expectedType_3515_);
return v___x_3779_;
}
}
else
{
lean_object* v_options_3787_; lean_object* v___x_3788_; uint8_t v___x_3789_; 
v_options_3787_ = lean_ctor_get(v___y_3771_, 2);
v___x_3788_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_3789_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_3787_, v___x_3788_);
if (v___x_3789_ == 0)
{
lean_object* v___x_3791_; 
lean_dec(v___y_3772_);
lean_dec_ref(v___y_3771_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
lean_dec_ref(v_expectedType_3515_);
if (v_isShared_3777_ == 0)
{
lean_ctor_set(v___x_3776_, 0, v_inst_3514_);
v___x_3791_ = v___x_3776_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_inst_3514_);
v___x_3791_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
return v___x_3791_;
}
}
else
{
lean_object* v___x_3793_; lean_object* v___x_3794_; 
lean_del_object(v___x_3776_);
v___x_3793_ = lean_box(0);
v___x_3794_ = l_Lean_Meta_mkAuxTheorem(v_expectedType_3515_, v_inst_3514_, v_hasTrace_3557_, v___x_3793_, v_hasTrace_3557_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
return v___x_3794_;
}
}
}
}
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
lean_dec(v___y_3772_);
lean_dec_ref(v___y_3771_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3796_ = lean_ctor_get(v___x_3773_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3773_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v___x_3773_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3773_);
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
else
{
lean_inc_ref(v_options_3525_);
goto v___jp_3716_;
}
v___jp_3655_:
{
lean_object* v___x_3659_; double v___x_3660_; double v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; uint8_t v___x_3666_; lean_object* v___x_3667_; 
v___x_3659_ = lean_io_get_num_heartbeats();
v___x_3660_ = lean_float_of_nat(v___y_3657_);
v___x_3661_ = lean_float_of_nat(v___x_3659_);
v___x_3662_ = lean_box_float(v___x_3660_);
v___x_3663_ = lean_box_float(v___x_3661_);
v___x_3664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3664_, 0, v___x_3662_);
lean_ctor_set(v___x_3664_, 1, v___x_3663_);
v___x_3665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3665_, 0, v_a_3658_);
lean_ctor_set(v___x_3665_, 1, v___x_3664_);
v___x_3666_ = lean_unbox(v_a_3652_);
lean_dec(v_a_3652_);
v___x_3667_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16(v_cls_3603_, v_hasTrace_3557_, v___x_3654_, v_options_3525_, v___x_3666_, v___y_3656_, v___f_3653_, v___x_3665_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
lean_dec_ref(v_options_3525_);
return v___x_3667_;
}
v___jp_3668_:
{
lean_object* v___x_3672_; 
v___x_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3672_, 0, v_a_3671_);
v___y_3656_ = v___y_3669_;
v___y_3657_ = v___y_3670_;
v_a_3658_ = v___x_3672_;
goto v___jp_3655_;
}
v___jp_3673_:
{
lean_object* v___x_3677_; 
v___x_3677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3677_, 0, v_a_3676_);
v___y_3656_ = v___y_3674_;
v___y_3657_ = v___y_3675_;
v_a_3658_ = v___x_3677_;
goto v___jp_3655_;
}
v___jp_3678_:
{
if (lean_obj_tag(v___y_3681_) == 0)
{
lean_object* v_a_3682_; 
v_a_3682_ = lean_ctor_get(v___y_3681_, 0);
lean_inc(v_a_3682_);
lean_dec_ref(v___y_3681_);
v___y_3669_ = v___y_3679_;
v___y_3670_ = v___y_3680_;
v_a_3671_ = v_a_3682_;
goto v___jp_3668_;
}
else
{
lean_object* v_a_3683_; 
v_a_3683_ = lean_ctor_get(v___y_3681_, 0);
lean_inc(v_a_3683_);
lean_dec_ref(v___y_3681_);
v___y_3674_ = v___y_3679_;
v___y_3675_ = v___y_3680_;
v_a_3676_ = v_a_3683_;
goto v___jp_3673_;
}
}
v___jp_3684_:
{
lean_object* v___x_3688_; double v___x_3689_; double v___x_3690_; double v___x_3691_; double v___x_3692_; double v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; uint8_t v___x_3698_; lean_object* v___x_3699_; 
v___x_3688_ = lean_io_mono_nanos_now();
v___x_3689_ = lean_float_of_nat(v___y_3685_);
v___x_3690_ = lean_float_once(&l_Lean_Meta_normalizeInstance___closed__3, &l_Lean_Meta_normalizeInstance___closed__3_once, _init_l_Lean_Meta_normalizeInstance___closed__3);
v___x_3691_ = lean_float_div(v___x_3689_, v___x_3690_);
v___x_3692_ = lean_float_of_nat(v___x_3688_);
v___x_3693_ = lean_float_div(v___x_3692_, v___x_3690_);
v___x_3694_ = lean_box_float(v___x_3691_);
v___x_3695_ = lean_box_float(v___x_3693_);
v___x_3696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3696_, 0, v___x_3694_);
lean_ctor_set(v___x_3696_, 1, v___x_3695_);
v___x_3697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3697_, 0, v_a_3687_);
lean_ctor_set(v___x_3697_, 1, v___x_3696_);
v___x_3698_ = lean_unbox(v_a_3652_);
lean_dec(v_a_3652_);
v___x_3699_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16(v_cls_3603_, v_hasTrace_3557_, v___x_3654_, v_options_3525_, v___x_3698_, v___y_3686_, v___f_3653_, v___x_3697_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
lean_dec_ref(v_options_3525_);
return v___x_3699_;
}
v___jp_3700_:
{
lean_object* v___x_3704_; 
v___x_3704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3704_, 0, v_a_3703_);
v___y_3685_ = v___y_3701_;
v___y_3686_ = v___y_3702_;
v_a_3687_ = v___x_3704_;
goto v___jp_3684_;
}
v___jp_3705_:
{
lean_object* v___x_3709_; 
v___x_3709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3709_, 0, v_a_3708_);
v___y_3685_ = v___y_3706_;
v___y_3686_ = v___y_3707_;
v_a_3687_ = v___x_3709_;
goto v___jp_3684_;
}
v___jp_3710_:
{
if (lean_obj_tag(v___y_3713_) == 0)
{
lean_object* v_a_3714_; 
v_a_3714_ = lean_ctor_get(v___y_3713_, 0);
lean_inc(v_a_3714_);
lean_dec_ref(v___y_3713_);
v___y_3701_ = v___y_3711_;
v___y_3702_ = v___y_3712_;
v_a_3703_ = v_a_3714_;
goto v___jp_3700_;
}
else
{
lean_object* v_a_3715_; 
v_a_3715_ = lean_ctor_get(v___y_3713_, 0);
lean_inc(v_a_3715_);
lean_dec_ref(v___y_3713_);
v___y_3706_ = v___y_3711_;
v___y_3707_ = v___y_3712_;
v_a_3708_ = v_a_3715_;
goto v___jp_3705_;
}
}
v___jp_3716_:
{
lean_object* v___x_3717_; 
v___x_3717_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_normalizeInstance_spec__11___redArg(v_a_3522_);
if (lean_obj_tag(v___x_3717_) == 0)
{
lean_object* v_a_3718_; lean_object* v___x_3719_; uint8_t v___x_3720_; 
v_a_3718_ = lean_ctor_get(v___x_3717_, 0);
lean_inc(v_a_3718_);
lean_dec_ref(v___x_3717_);
v___x_3719_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3720_ = l_Lean_Option_get___at___00Lean_Meta_normalizeInstance_spec__0(v_options_3525_, v___x_3719_);
if (v___x_3720_ == 0)
{
lean_object* v___x_3721_; lean_object* v___x_3722_; 
v___x_3721_ = lean_io_mono_nanos_now();
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v___x_3609_);
lean_inc_ref(v_expectedType_3515_);
v___x_3722_ = l_Lean_Meta_isClass_x3f(v_expectedType_3515_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
if (lean_obj_tag(v___x_3722_) == 0)
{
lean_object* v_a_3723_; 
v_a_3723_ = lean_ctor_get(v___x_3722_, 0);
lean_inc(v_a_3723_);
lean_dec_ref(v___x_3722_);
if (lean_obj_tag(v_a_3723_) == 1)
{
lean_object* v_val_3724_; lean_object* v___x_3725_; 
v_val_3724_ = lean_ctor_get(v_a_3723_, 0);
lean_inc(v_val_3724_);
lean_dec_ref(v_a_3723_);
v___x_3725_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_3603_, v_a_3521_);
if (lean_obj_tag(v___x_3725_) == 0)
{
lean_object* v_a_3726_; uint8_t v___x_3727_; 
v_a_3726_ = lean_ctor_get(v___x_3725_, 0);
lean_inc(v_a_3726_);
lean_dec_ref(v___x_3725_);
v___x_3727_ = lean_unbox(v_a_3726_);
lean_dec(v_a_3726_);
if (v___x_3727_ == 0)
{
lean_object* v___x_3728_; lean_object* v___x_3729_; 
lean_dec(v_val_3724_);
v___x_3728_ = lean_box(0);
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v___x_3609_);
v___x_3729_ = l_Lean_Meta_normalizeInstance___lam__1(v_expectedType_3515_, v_inst_3514_, v___x_3720_, v_hasTrace_3557_, v_compile_3516_, v_logCompileErrors_3517_, v_isMeta_3518_, v___x_3728_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
v___y_3711_ = v___x_3721_;
v___y_3712_ = v_a_3718_;
v___y_3713_ = v___x_3729_;
goto v___jp_3710_;
}
else
{
lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v___x_3730_ = lean_obj_once(&l_Lean_Meta_normalizeInstance___closed__2, &l_Lean_Meta_normalizeInstance___closed__2_once, _init_l_Lean_Meta_normalizeInstance___closed__2);
v___x_3731_ = l_Lean_MessageData_ofName(v_val_3724_);
v___x_3732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3730_);
lean_ctor_set(v___x_3732_, 1, v___x_3731_);
v___x_3733_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_3603_, v___x_3732_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_object* v_a_3734_; lean_object* v___x_3735_; 
v_a_3734_ = lean_ctor_get(v___x_3733_, 0);
lean_inc(v_a_3734_);
lean_dec_ref(v___x_3733_);
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v___x_3609_);
v___x_3735_ = l_Lean_Meta_normalizeInstance___lam__1(v_expectedType_3515_, v_inst_3514_, v___x_3720_, v_hasTrace_3557_, v_compile_3516_, v_logCompileErrors_3517_, v_isMeta_3518_, v_a_3734_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
v___y_3711_ = v___x_3721_;
v___y_3712_ = v_a_3718_;
v___y_3713_ = v___x_3735_;
goto v___jp_3710_;
}
else
{
lean_object* v_a_3736_; 
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3736_ = lean_ctor_get(v___x_3733_, 0);
lean_inc(v_a_3736_);
lean_dec_ref(v___x_3733_);
v___y_3706_ = v___x_3721_;
v___y_3707_ = v_a_3718_;
v_a_3708_ = v_a_3736_;
goto v___jp_3705_;
}
}
}
else
{
lean_object* v_a_3737_; 
lean_dec(v_val_3724_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3737_ = lean_ctor_get(v___x_3725_, 0);
lean_inc(v_a_3737_);
lean_dec_ref(v___x_3725_);
v___y_3706_ = v___x_3721_;
v___y_3707_ = v_a_3718_;
v_a_3708_ = v_a_3737_;
goto v___jp_3705_;
}
}
else
{
lean_dec(v_a_3723_);
lean_dec_ref(v_expectedType_3515_);
v___y_3701_ = v___x_3721_;
v___y_3702_ = v_a_3718_;
v_a_3703_ = v_inst_3514_;
goto v___jp_3700_;
}
}
else
{
lean_object* v_a_3738_; 
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3738_ = lean_ctor_get(v___x_3722_, 0);
lean_inc(v_a_3738_);
lean_dec_ref(v___x_3722_);
v___y_3706_ = v___x_3721_;
v___y_3707_ = v_a_3718_;
v_a_3708_ = v_a_3738_;
goto v___jp_3705_;
}
}
else
{
lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3739_ = lean_io_get_num_heartbeats();
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v___x_3609_);
lean_inc_ref(v_expectedType_3515_);
v___x_3740_ = l_Lean_Meta_isClass_x3f(v_expectedType_3515_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
if (lean_obj_tag(v___x_3740_) == 0)
{
lean_object* v_a_3741_; 
v_a_3741_ = lean_ctor_get(v___x_3740_, 0);
lean_inc(v_a_3741_);
lean_dec_ref(v___x_3740_);
if (lean_obj_tag(v_a_3741_) == 1)
{
lean_object* v_val_3742_; lean_object* v___x_3743_; 
v_val_3742_ = lean_ctor_get(v_a_3741_, 0);
lean_inc(v_val_3742_);
lean_dec_ref(v_a_3741_);
v___x_3743_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_normalizeInstance_spec__3___redArg(v_cls_3603_, v_a_3521_);
if (lean_obj_tag(v___x_3743_) == 0)
{
lean_object* v_a_3744_; uint8_t v___x_3745_; 
v_a_3744_ = lean_ctor_get(v___x_3743_, 0);
lean_inc(v_a_3744_);
lean_dec_ref(v___x_3743_);
v___x_3745_ = lean_unbox(v_a_3744_);
lean_dec(v_a_3744_);
if (v___x_3745_ == 0)
{
lean_object* v___x_3746_; lean_object* v___x_3747_; 
lean_dec(v_val_3742_);
v___x_3746_ = lean_box(0);
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v___x_3609_);
v___x_3747_ = l_Lean_Meta_normalizeInstance___lam__2(v_expectedType_3515_, v_inst_3514_, v___x_3720_, v_compile_3516_, v_logCompileErrors_3517_, v_isMeta_3518_, v___x_3746_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
v___y_3679_ = v_a_3718_;
v___y_3680_ = v___x_3739_;
v___y_3681_ = v___x_3747_;
goto v___jp_3678_;
}
else
{
lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; 
v___x_3748_ = lean_obj_once(&l_Lean_Meta_normalizeInstance___closed__2, &l_Lean_Meta_normalizeInstance___closed__2_once, _init_l_Lean_Meta_normalizeInstance___closed__2);
v___x_3749_ = l_Lean_MessageData_ofName(v_val_3742_);
v___x_3750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3750_, 0, v___x_3748_);
lean_ctor_set(v___x_3750_, 1, v___x_3749_);
v___x_3751_ = l_Lean_addTrace___at___00Lean_Meta_normalizeInstance_spec__4(v_cls_3603_, v___x_3750_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
if (lean_obj_tag(v___x_3751_) == 0)
{
lean_object* v_a_3752_; lean_object* v___x_3753_; 
v_a_3752_ = lean_ctor_get(v___x_3751_, 0);
lean_inc(v_a_3752_);
lean_dec_ref(v___x_3751_);
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v___x_3609_);
v___x_3753_ = l_Lean_Meta_normalizeInstance___lam__2(v_expectedType_3515_, v_inst_3514_, v___x_3720_, v_compile_3516_, v_logCompileErrors_3517_, v_isMeta_3518_, v_a_3752_, v___x_3609_, v_a_3520_, v_a_3521_, v_a_3522_);
v___y_3679_ = v_a_3718_;
v___y_3680_ = v___x_3739_;
v___y_3681_ = v___x_3753_;
goto v___jp_3678_;
}
else
{
lean_object* v_a_3754_; 
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3754_ = lean_ctor_get(v___x_3751_, 0);
lean_inc(v_a_3754_);
lean_dec_ref(v___x_3751_);
v___y_3674_ = v_a_3718_;
v___y_3675_ = v___x_3739_;
v_a_3676_ = v_a_3754_;
goto v___jp_3673_;
}
}
}
else
{
lean_object* v_a_3755_; 
lean_dec(v_val_3742_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3755_ = lean_ctor_get(v___x_3743_, 0);
lean_inc(v_a_3755_);
lean_dec_ref(v___x_3743_);
v___y_3674_ = v_a_3718_;
v___y_3675_ = v___x_3739_;
v_a_3676_ = v_a_3755_;
goto v___jp_3673_;
}
}
else
{
lean_dec(v_a_3741_);
lean_dec_ref(v_expectedType_3515_);
v___y_3669_ = v_a_3718_;
v___y_3670_ = v___x_3739_;
v_a_3671_ = v_inst_3514_;
goto v___jp_3668_;
}
}
else
{
lean_object* v_a_3756_; 
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3756_ = lean_ctor_get(v___x_3740_, 0);
lean_inc(v_a_3756_);
lean_dec_ref(v___x_3740_);
v___y_3674_ = v_a_3718_;
v___y_3675_ = v___x_3739_;
v_a_3676_ = v_a_3756_;
goto v___jp_3673_;
}
}
}
else
{
lean_object* v_a_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3764_; 
lean_dec_ref(v___f_3653_);
lean_dec(v_a_3652_);
lean_dec_ref(v___x_3609_);
lean_dec_ref(v_options_3525_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3757_ = lean_ctor_get(v___x_3717_, 0);
v_isSharedCheck_3764_ = !lean_is_exclusive(v___x_3717_);
if (v_isSharedCheck_3764_ == 0)
{
v___x_3759_ = v___x_3717_;
v_isShared_3760_ = v_isSharedCheck_3764_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_a_3757_);
lean_dec(v___x_3717_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3764_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v___x_3762_; 
if (v_isShared_3760_ == 0)
{
v___x_3762_ = v___x_3759_;
goto v_reusejp_3761_;
}
else
{
lean_object* v_reuseFailAlloc_3763_; 
v_reuseFailAlloc_3763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3763_, 0, v_a_3757_);
v___x_3762_ = v_reuseFailAlloc_3763_;
goto v_reusejp_3761_;
}
v_reusejp_3761_:
{
return v___x_3762_;
}
}
}
}
}
else
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3852_; 
lean_dec_ref(v___x_3609_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_expectedType_3515_);
lean_dec_ref(v_inst_3514_);
v_a_3845_ = lean_ctor_get(v___x_3651_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v___x_3651_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3847_ = v___x_3651_;
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3651_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3850_; 
if (v_isShared_3848_ == 0)
{
v___x_3850_ = v___x_3847_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_a_3845_);
v___x_3850_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
return v___x_3850_;
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__1(lean_object* v___x_3864_, lean_object* v_a_3865_, uint8_t v_compile_3866_, uint8_t v_logCompileErrors_3867_, uint8_t v_isMeta_3868_, lean_object* v___x_3869_, lean_object* v___x_3870_, lean_object* v_____r_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_){
_start:
{
lean_object* v___x_3877_; 
lean_inc(v___y_3873_);
v___x_3877_ = l_Lean_Meta_normalizeInstance(v___x_3864_, v_a_3865_, v_compile_3866_, v_logCompileErrors_3867_, v_isMeta_3868_, v___y_3872_, v___y_3873_, v___y_3874_, v___y_3875_);
if (lean_obj_tag(v___x_3877_) == 0)
{
lean_object* v_a_3878_; lean_object* v___x_3879_; 
v_a_3878_ = lean_ctor_get(v___x_3877_, 0);
lean_inc(v_a_3878_);
lean_dec_ref(v___x_3877_);
v___x_3879_ = l_Lean_MVarId_assign___at___00Lean_Meta_abstractInstImplicitArgs_spec__0___redArg(v___x_3869_, v_a_3878_, v___y_3873_);
lean_dec(v___y_3873_);
if (lean_obj_tag(v___x_3879_) == 0)
{
lean_object* v___x_3881_; uint8_t v_isShared_3882_; uint8_t v_isSharedCheck_3887_; 
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3879_);
if (v_isSharedCheck_3887_ == 0)
{
lean_object* v_unused_3888_; 
v_unused_3888_ = lean_ctor_get(v___x_3879_, 0);
lean_dec(v_unused_3888_);
v___x_3881_ = v___x_3879_;
v_isShared_3882_ = v_isSharedCheck_3887_;
goto v_resetjp_3880_;
}
else
{
lean_dec(v___x_3879_);
v___x_3881_ = lean_box(0);
v_isShared_3882_ = v_isSharedCheck_3887_;
goto v_resetjp_3880_;
}
v_resetjp_3880_:
{
lean_object* v___x_3883_; lean_object* v___x_3885_; 
v___x_3883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3870_);
if (v_isShared_3882_ == 0)
{
lean_ctor_set(v___x_3881_, 0, v___x_3883_);
v___x_3885_ = v___x_3881_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v___x_3883_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
return v___x_3885_;
}
}
}
else
{
lean_object* v_a_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3896_; 
v_a_3889_ = lean_ctor_get(v___x_3879_, 0);
v_isSharedCheck_3896_ = !lean_is_exclusive(v___x_3879_);
if (v_isSharedCheck_3896_ == 0)
{
v___x_3891_ = v___x_3879_;
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_a_3889_);
lean_dec(v___x_3879_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
lean_object* v___x_3894_; 
if (v_isShared_3892_ == 0)
{
v___x_3894_ = v___x_3891_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v_a_3889_);
v___x_3894_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
return v___x_3894_;
}
}
}
}
else
{
lean_object* v_a_3897_; lean_object* v___x_3899_; uint8_t v_isShared_3900_; uint8_t v_isSharedCheck_3904_; 
lean_dec(v___y_3873_);
lean_dec(v___x_3869_);
v_a_3897_ = lean_ctor_get(v___x_3877_, 0);
v_isSharedCheck_3904_ = !lean_is_exclusive(v___x_3877_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3899_ = v___x_3877_;
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
else
{
lean_inc(v_a_3897_);
lean_dec(v___x_3877_);
v___x_3899_ = lean_box(0);
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
v_resetjp_3898_:
{
lean_object* v___x_3902_; 
if (v_isShared_3900_ == 0)
{
v___x_3902_ = v___x_3899_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v_a_3897_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__1___boxed(lean_object* v___x_3905_, lean_object* v_a_3906_, lean_object* v_compile_3907_, lean_object* v_logCompileErrors_3908_, lean_object* v_isMeta_3909_, lean_object* v___x_3910_, lean_object* v___x_3911_, lean_object* v_____r_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_){
_start:
{
uint8_t v_compile_boxed_3918_; uint8_t v_logCompileErrors_boxed_3919_; uint8_t v_isMeta_boxed_3920_; lean_object* v_res_3921_; 
v_compile_boxed_3918_ = lean_unbox(v_compile_3907_);
v_logCompileErrors_boxed_3919_ = lean_unbox(v_logCompileErrors_3908_);
v_isMeta_boxed_3920_ = lean_unbox(v_isMeta_3909_);
v_res_3921_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___lam__1(v___x_3905_, v_a_3906_, v_compile_boxed_3918_, v_logCompileErrors_boxed_3919_, v_isMeta_boxed_3920_, v___x_3910_, v___x_3911_, v_____r_3912_, v___y_3913_, v___y_3914_, v___y_3915_, v___y_3916_);
return v_res_3921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__1___boxed(lean_object* v_expectedType_3922_, lean_object* v_inst_3923_, lean_object* v___x_3924_, lean_object* v_hasTrace_3925_, lean_object* v_compile_3926_, lean_object* v_logCompileErrors_3927_, lean_object* v_isMeta_3928_, lean_object* v_____r_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_){
_start:
{
uint8_t v___x_110142__boxed_3935_; uint8_t v_hasTrace_boxed_3936_; uint8_t v_compile_boxed_3937_; uint8_t v_logCompileErrors_boxed_3938_; uint8_t v_isMeta_boxed_3939_; lean_object* v_res_3940_; 
v___x_110142__boxed_3935_ = lean_unbox(v___x_3924_);
v_hasTrace_boxed_3936_ = lean_unbox(v_hasTrace_3925_);
v_compile_boxed_3937_ = lean_unbox(v_compile_3926_);
v_logCompileErrors_boxed_3938_ = lean_unbox(v_logCompileErrors_3927_);
v_isMeta_boxed_3939_ = lean_unbox(v_isMeta_3928_);
v_res_3940_ = l_Lean_Meta_normalizeInstance___lam__1(v_expectedType_3922_, v_inst_3923_, v___x_110142__boxed_3935_, v_hasTrace_boxed_3936_, v_compile_boxed_3937_, v_logCompileErrors_boxed_3938_, v_isMeta_boxed_3939_, v_____r_3929_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_);
return v_res_3940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___lam__2___boxed(lean_object* v_expectedType_3941_, lean_object* v_inst_3942_, lean_object* v___x_3943_, lean_object* v_compile_3944_, lean_object* v_logCompileErrors_3945_, lean_object* v_isMeta_3946_, lean_object* v_____r_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_){
_start:
{
uint8_t v___x_110166__boxed_3953_; uint8_t v_compile_boxed_3954_; uint8_t v_logCompileErrors_boxed_3955_; uint8_t v_isMeta_boxed_3956_; lean_object* v_res_3957_; 
v___x_110166__boxed_3953_ = lean_unbox(v___x_3943_);
v_compile_boxed_3954_ = lean_unbox(v_compile_3944_);
v_logCompileErrors_boxed_3955_ = lean_unbox(v_logCompileErrors_3945_);
v_isMeta_boxed_3956_ = lean_unbox(v_isMeta_3946_);
v_res_3957_ = l_Lean_Meta_normalizeInstance___lam__2(v_expectedType_3941_, v_inst_3942_, v___x_110166__boxed_3953_, v_compile_boxed_3954_, v_logCompileErrors_boxed_3955_, v_isMeta_boxed_3956_, v_____r_3947_, v___y_3948_, v___y_3949_, v___y_3950_, v___y_3951_);
return v_res_3957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13___boxed(lean_object* v_a_3958_, lean_object* v_expectedType_3959_, lean_object* v___x_3960_, lean_object* v___x_3961_, lean_object* v_compile_3962_, lean_object* v_logCompileErrors_3963_, lean_object* v_isMeta_3964_, lean_object* v_x_3965_, lean_object* v_x_3966_, lean_object* v_x_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_){
_start:
{
uint8_t v___x_110209__boxed_3973_; uint8_t v___x_110210__boxed_3974_; uint8_t v_compile_boxed_3975_; uint8_t v_logCompileErrors_boxed_3976_; uint8_t v_isMeta_boxed_3977_; lean_object* v_res_3978_; 
v___x_110209__boxed_3973_ = lean_unbox(v___x_3960_);
v___x_110210__boxed_3974_ = lean_unbox(v___x_3961_);
v_compile_boxed_3975_ = lean_unbox(v_compile_3962_);
v_logCompileErrors_boxed_3976_ = lean_unbox(v_logCompileErrors_3963_);
v_isMeta_boxed_3977_ = lean_unbox(v_isMeta_3964_);
v_res_3978_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__13(v_a_3958_, v_expectedType_3959_, v___x_110209__boxed_3973_, v___x_110210__boxed_3974_, v_compile_boxed_3975_, v_logCompileErrors_boxed_3976_, v_isMeta_boxed_3977_, v_x_3965_, v_x_3966_, v_x_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_);
return v_res_3978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__15___boxed(lean_object* v_a_3979_, lean_object* v_expectedType_3980_, lean_object* v___x_3981_, lean_object* v_compile_3982_, lean_object* v_logCompileErrors_3983_, lean_object* v_isMeta_3984_, lean_object* v_x_3985_, lean_object* v_x_3986_, lean_object* v_x_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_){
_start:
{
uint8_t v___x_110366__boxed_3993_; uint8_t v_compile_boxed_3994_; uint8_t v_logCompileErrors_boxed_3995_; uint8_t v_isMeta_boxed_3996_; lean_object* v_res_3997_; 
v___x_110366__boxed_3993_ = lean_unbox(v___x_3981_);
v_compile_boxed_3994_ = lean_unbox(v_compile_3982_);
v_logCompileErrors_boxed_3995_ = lean_unbox(v_logCompileErrors_3983_);
v_isMeta_boxed_3996_ = lean_unbox(v_isMeta_3984_);
v_res_3997_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__15(v_a_3979_, v_expectedType_3980_, v___x_110366__boxed_3993_, v_compile_boxed_3994_, v_logCompileErrors_boxed_3995_, v_isMeta_boxed_3996_, v_x_3985_, v_x_3986_, v_x_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_);
return v_res_3997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__10___boxed(lean_object* v_a_3998_, lean_object* v_expectedType_3999_, lean_object* v___x_4000_, lean_object* v_compile_4001_, lean_object* v_logCompileErrors_4002_, lean_object* v_isMeta_4003_, lean_object* v_x_4004_, lean_object* v_x_4005_, lean_object* v_x_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_){
_start:
{
uint8_t v___x_110533__boxed_4012_; uint8_t v_compile_boxed_4013_; uint8_t v_logCompileErrors_boxed_4014_; uint8_t v_isMeta_boxed_4015_; lean_object* v_res_4016_; 
v___x_110533__boxed_4012_ = lean_unbox(v___x_4000_);
v_compile_boxed_4013_ = lean_unbox(v_compile_4001_);
v_logCompileErrors_boxed_4014_ = lean_unbox(v_logCompileErrors_4002_);
v_isMeta_boxed_4015_ = lean_unbox(v_isMeta_4003_);
v_res_4016_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_normalizeInstance_spec__10(v_a_3998_, v_expectedType_3999_, v___x_110533__boxed_4012_, v_compile_boxed_4013_, v_logCompileErrors_boxed_4014_, v_isMeta_boxed_4015_, v_x_4004_, v_x_4005_, v_x_4006_, v___y_4007_, v___y_4008_, v___y_4009_, v___y_4010_);
return v_res_4016_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg___boxed(lean_object* v_upperBound_4017_, lean_object* v_fst_4018_, lean_object* v_args_4019_, lean_object* v_compile_4020_, lean_object* v_logCompileErrors_4021_, lean_object* v_isMeta_4022_, lean_object* v___x_4023_, lean_object* v_a_4024_, lean_object* v_b_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_){
_start:
{
uint8_t v_compile_boxed_4031_; uint8_t v_logCompileErrors_boxed_4032_; uint8_t v_isMeta_boxed_4033_; uint8_t v___x_110717__boxed_4034_; lean_object* v_res_4035_; 
v_compile_boxed_4031_ = lean_unbox(v_compile_4020_);
v_logCompileErrors_boxed_4032_ = lean_unbox(v_logCompileErrors_4021_);
v_isMeta_boxed_4033_ = lean_unbox(v_isMeta_4022_);
v___x_110717__boxed_4034_ = lean_unbox(v___x_4023_);
v_res_4035_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg(v_upperBound_4017_, v_fst_4018_, v_args_4019_, v_compile_boxed_4031_, v_logCompileErrors_boxed_4032_, v_isMeta_boxed_4033_, v___x_110717__boxed_4034_, v_a_4024_, v_b_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
lean_dec_ref(v_args_4019_);
lean_dec_ref(v_fst_4018_);
lean_dec(v_upperBound_4017_);
return v_res_4035_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12___redArg___boxed(lean_object* v_upperBound_4036_, lean_object* v_fst_4037_, lean_object* v_args_4038_, lean_object* v___x_4039_, lean_object* v_compile_4040_, lean_object* v_logCompileErrors_4041_, lean_object* v_isMeta_4042_, lean_object* v___x_4043_, lean_object* v_a_4044_, lean_object* v_b_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
uint8_t v___x_110873__boxed_4051_; uint8_t v_compile_boxed_4052_; uint8_t v_logCompileErrors_boxed_4053_; uint8_t v_isMeta_boxed_4054_; uint8_t v___x_110874__boxed_4055_; lean_object* v_res_4056_; 
v___x_110873__boxed_4051_ = lean_unbox(v___x_4039_);
v_compile_boxed_4052_ = lean_unbox(v_compile_4040_);
v_logCompileErrors_boxed_4053_ = lean_unbox(v_logCompileErrors_4041_);
v_isMeta_boxed_4054_ = lean_unbox(v_isMeta_4042_);
v___x_110874__boxed_4055_ = lean_unbox(v___x_4043_);
v_res_4056_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12___redArg(v_upperBound_4036_, v_fst_4037_, v_args_4038_, v___x_110873__boxed_4051_, v_compile_boxed_4052_, v_logCompileErrors_boxed_4053_, v_isMeta_boxed_4054_, v___x_110874__boxed_4055_, v_a_4044_, v_b_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_);
lean_dec_ref(v_args_4038_);
lean_dec_ref(v_fst_4037_);
lean_dec(v_upperBound_4036_);
return v_res_4056_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14___redArg___boxed(lean_object* v_upperBound_4057_, lean_object* v_fst_4058_, lean_object* v_args_4059_, lean_object* v___x_4060_, lean_object* v_compile_4061_, lean_object* v_logCompileErrors_4062_, lean_object* v_isMeta_4063_, lean_object* v_a_4064_, lean_object* v_b_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
uint8_t v___x_111042__boxed_4071_; uint8_t v_compile_boxed_4072_; uint8_t v_logCompileErrors_boxed_4073_; uint8_t v_isMeta_boxed_4074_; lean_object* v_res_4075_; 
v___x_111042__boxed_4071_ = lean_unbox(v___x_4060_);
v_compile_boxed_4072_ = lean_unbox(v_compile_4061_);
v_logCompileErrors_boxed_4073_ = lean_unbox(v_logCompileErrors_4062_);
v_isMeta_boxed_4074_ = lean_unbox(v_isMeta_4063_);
v_res_4075_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14___redArg(v_upperBound_4057_, v_fst_4058_, v_args_4059_, v___x_111042__boxed_4071_, v_compile_boxed_4072_, v_logCompileErrors_boxed_4073_, v_isMeta_boxed_4074_, v_a_4064_, v_b_4065_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_);
lean_dec_ref(v_args_4059_);
lean_dec_ref(v_fst_4058_);
lean_dec(v_upperBound_4057_);
return v_res_4075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeInstance___boxed(lean_object* v_inst_4076_, lean_object* v_expectedType_4077_, lean_object* v_compile_4078_, lean_object* v_logCompileErrors_4079_, lean_object* v_isMeta_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_, lean_object* v_a_4083_, lean_object* v_a_4084_, lean_object* v_a_4085_){
_start:
{
uint8_t v_compile_boxed_4086_; uint8_t v_logCompileErrors_boxed_4087_; uint8_t v_isMeta_boxed_4088_; lean_object* v_res_4089_; 
v_compile_boxed_4086_ = lean_unbox(v_compile_4078_);
v_logCompileErrors_boxed_4087_ = lean_unbox(v_logCompileErrors_4079_);
v_isMeta_boxed_4088_ = lean_unbox(v_isMeta_4080_);
v_res_4089_ = l_Lean_Meta_normalizeInstance(v_inst_4076_, v_expectedType_4077_, v_compile_boxed_4086_, v_logCompileErrors_boxed_4087_, v_isMeta_boxed_4088_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_);
return v_res_4089_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6(size_t v_sz_4090_, size_t v_i_4091_, lean_object* v_bs_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_){
_start:
{
lean_object* v___x_4098_; 
v___x_4098_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6___redArg(v_sz_4090_, v_i_4091_, v_bs_4092_, v___y_4094_);
return v___x_4098_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6___boxed(lean_object* v_sz_4099_, lean_object* v_i_4100_, lean_object* v_bs_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_){
_start:
{
size_t v_sz_boxed_4107_; size_t v_i_boxed_4108_; lean_object* v_res_4109_; 
v_sz_boxed_4107_ = lean_unbox_usize(v_sz_4099_);
lean_dec(v_sz_4099_);
v_i_boxed_4108_ = lean_unbox_usize(v_i_4100_);
lean_dec(v_i_4100_);
v_res_4109_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_normalizeInstance_spec__6(v_sz_boxed_4107_, v_i_boxed_4108_, v_bs_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_);
lean_dec(v___y_4105_);
lean_dec_ref(v___y_4104_);
lean_dec(v___y_4103_);
lean_dec_ref(v___y_4102_);
return v_res_4109_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7(lean_object* v_upperBound_4110_, lean_object* v_fst_4111_, lean_object* v_args_4112_, uint8_t v_compile_4113_, uint8_t v_logCompileErrors_4114_, uint8_t v_isMeta_4115_, uint8_t v___x_4116_, lean_object* v_inst_4117_, lean_object* v_R_4118_, lean_object* v_a_4119_, lean_object* v_b_4120_, lean_object* v_c_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_){
_start:
{
lean_object* v___x_4127_; 
v___x_4127_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___redArg(v_upperBound_4110_, v_fst_4111_, v_args_4112_, v_compile_4113_, v_logCompileErrors_4114_, v_isMeta_4115_, v___x_4116_, v_a_4119_, v_b_4120_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_);
return v___x_4127_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7___boxed(lean_object** _args){
lean_object* v_upperBound_4128_ = _args[0];
lean_object* v_fst_4129_ = _args[1];
lean_object* v_args_4130_ = _args[2];
lean_object* v_compile_4131_ = _args[3];
lean_object* v_logCompileErrors_4132_ = _args[4];
lean_object* v_isMeta_4133_ = _args[5];
lean_object* v___x_4134_ = _args[6];
lean_object* v_inst_4135_ = _args[7];
lean_object* v_R_4136_ = _args[8];
lean_object* v_a_4137_ = _args[9];
lean_object* v_b_4138_ = _args[10];
lean_object* v_c_4139_ = _args[11];
lean_object* v___y_4140_ = _args[12];
lean_object* v___y_4141_ = _args[13];
lean_object* v___y_4142_ = _args[14];
lean_object* v___y_4143_ = _args[15];
lean_object* v___y_4144_ = _args[16];
_start:
{
uint8_t v_compile_boxed_4145_; uint8_t v_logCompileErrors_boxed_4146_; uint8_t v_isMeta_boxed_4147_; uint8_t v___x_114310__boxed_4148_; lean_object* v_res_4149_; 
v_compile_boxed_4145_ = lean_unbox(v_compile_4131_);
v_logCompileErrors_boxed_4146_ = lean_unbox(v_logCompileErrors_4132_);
v_isMeta_boxed_4147_ = lean_unbox(v_isMeta_4133_);
v___x_114310__boxed_4148_ = lean_unbox(v___x_4134_);
v_res_4149_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__7(v_upperBound_4128_, v_fst_4129_, v_args_4130_, v_compile_boxed_4145_, v_logCompileErrors_boxed_4146_, v_isMeta_boxed_4147_, v___x_114310__boxed_4148_, v_inst_4135_, v_R_4136_, v_a_4137_, v_b_4138_, v_c_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_);
lean_dec_ref(v_args_4130_);
lean_dec_ref(v_fst_4129_);
lean_dec(v_upperBound_4128_);
return v_res_4149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8(lean_object* v_00_u03b1_4150_, lean_object* v_msg_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_){
_start:
{
lean_object* v___x_4157_; 
v___x_4157_ = l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___redArg(v_msg_4151_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_);
return v___x_4157_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8___boxed(lean_object* v_00_u03b1_4158_, lean_object* v_msg_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_){
_start:
{
lean_object* v_res_4165_; 
v_res_4165_ = l_Lean_throwError___at___00Lean_Meta_normalizeInstance_spec__8(v_00_u03b1_4158_, v_msg_4159_, v___y_4160_, v___y_4161_, v___y_4162_, v___y_4163_);
lean_dec(v___y_4163_);
lean_dec_ref(v___y_4162_);
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4160_);
return v_res_4165_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12(lean_object* v_upperBound_4166_, lean_object* v_fst_4167_, lean_object* v_args_4168_, uint8_t v___x_4169_, uint8_t v_compile_4170_, uint8_t v_logCompileErrors_4171_, uint8_t v_isMeta_4172_, uint8_t v___x_4173_, lean_object* v_inst_4174_, lean_object* v_R_4175_, lean_object* v_a_4176_, lean_object* v_b_4177_, lean_object* v_c_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_){
_start:
{
lean_object* v___x_4184_; 
v___x_4184_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12___redArg(v_upperBound_4166_, v_fst_4167_, v_args_4168_, v___x_4169_, v_compile_4170_, v_logCompileErrors_4171_, v_isMeta_4172_, v___x_4173_, v_a_4176_, v_b_4177_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_);
return v___x_4184_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12___boxed(lean_object** _args){
lean_object* v_upperBound_4185_ = _args[0];
lean_object* v_fst_4186_ = _args[1];
lean_object* v_args_4187_ = _args[2];
lean_object* v___x_4188_ = _args[3];
lean_object* v_compile_4189_ = _args[4];
lean_object* v_logCompileErrors_4190_ = _args[5];
lean_object* v_isMeta_4191_ = _args[6];
lean_object* v___x_4192_ = _args[7];
lean_object* v_inst_4193_ = _args[8];
lean_object* v_R_4194_ = _args[9];
lean_object* v_a_4195_ = _args[10];
lean_object* v_b_4196_ = _args[11];
lean_object* v_c_4197_ = _args[12];
lean_object* v___y_4198_ = _args[13];
lean_object* v___y_4199_ = _args[14];
lean_object* v___y_4200_ = _args[15];
lean_object* v___y_4201_ = _args[16];
lean_object* v___y_4202_ = _args[17];
_start:
{
uint8_t v___x_114356__boxed_4203_; uint8_t v_compile_boxed_4204_; uint8_t v_logCompileErrors_boxed_4205_; uint8_t v_isMeta_boxed_4206_; uint8_t v___x_114357__boxed_4207_; lean_object* v_res_4208_; 
v___x_114356__boxed_4203_ = lean_unbox(v___x_4188_);
v_compile_boxed_4204_ = lean_unbox(v_compile_4189_);
v_logCompileErrors_boxed_4205_ = lean_unbox(v_logCompileErrors_4190_);
v_isMeta_boxed_4206_ = lean_unbox(v_isMeta_4191_);
v___x_114357__boxed_4207_ = lean_unbox(v___x_4192_);
v_res_4208_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__12(v_upperBound_4185_, v_fst_4186_, v_args_4187_, v___x_114356__boxed_4203_, v_compile_boxed_4204_, v_logCompileErrors_boxed_4205_, v_isMeta_boxed_4206_, v___x_114357__boxed_4207_, v_inst_4193_, v_R_4194_, v_a_4195_, v_b_4196_, v_c_4197_, v___y_4198_, v___y_4199_, v___y_4200_, v___y_4201_);
lean_dec_ref(v_args_4187_);
lean_dec_ref(v_fst_4186_);
lean_dec(v_upperBound_4185_);
return v_res_4208_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14(lean_object* v_upperBound_4209_, lean_object* v_fst_4210_, lean_object* v_args_4211_, uint8_t v___x_4212_, uint8_t v_compile_4213_, uint8_t v_logCompileErrors_4214_, uint8_t v_isMeta_4215_, lean_object* v_inst_4216_, lean_object* v_R_4217_, lean_object* v_a_4218_, lean_object* v_b_4219_, lean_object* v_c_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_){
_start:
{
lean_object* v___x_4226_; 
v___x_4226_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14___redArg(v_upperBound_4209_, v_fst_4210_, v_args_4211_, v___x_4212_, v_compile_4213_, v_logCompileErrors_4214_, v_isMeta_4215_, v_a_4218_, v_b_4219_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_);
return v___x_4226_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14___boxed(lean_object** _args){
lean_object* v_upperBound_4227_ = _args[0];
lean_object* v_fst_4228_ = _args[1];
lean_object* v_args_4229_ = _args[2];
lean_object* v___x_4230_ = _args[3];
lean_object* v_compile_4231_ = _args[4];
lean_object* v_logCompileErrors_4232_ = _args[5];
lean_object* v_isMeta_4233_ = _args[6];
lean_object* v_inst_4234_ = _args[7];
lean_object* v_R_4235_ = _args[8];
lean_object* v_a_4236_ = _args[9];
lean_object* v_b_4237_ = _args[10];
lean_object* v_c_4238_ = _args[11];
lean_object* v___y_4239_ = _args[12];
lean_object* v___y_4240_ = _args[13];
lean_object* v___y_4241_ = _args[14];
lean_object* v___y_4242_ = _args[15];
lean_object* v___y_4243_ = _args[16];
_start:
{
uint8_t v___x_114388__boxed_4244_; uint8_t v_compile_boxed_4245_; uint8_t v_logCompileErrors_boxed_4246_; uint8_t v_isMeta_boxed_4247_; lean_object* v_res_4248_; 
v___x_114388__boxed_4244_ = lean_unbox(v___x_4230_);
v_compile_boxed_4245_ = lean_unbox(v_compile_4231_);
v_logCompileErrors_boxed_4246_ = lean_unbox(v_logCompileErrors_4232_);
v_isMeta_boxed_4247_ = lean_unbox(v_isMeta_4233_);
v_res_4248_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_normalizeInstance_spec__14(v_upperBound_4227_, v_fst_4228_, v_args_4229_, v___x_114388__boxed_4244_, v_compile_boxed_4245_, v_logCompileErrors_boxed_4246_, v_isMeta_boxed_4247_, v_inst_4234_, v_R_4235_, v_a_4236_, v_b_4237_, v_c_4238_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_);
lean_dec_ref(v_args_4229_);
lean_dec_ref(v_fst_4228_);
lean_dec(v_upperBound_4227_);
return v_res_4248_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20(lean_object* v_00_u03b1_4249_, lean_object* v_x_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_){
_start:
{
lean_object* v___x_4256_; 
v___x_4256_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20___redArg(v_x_4250_);
return v___x_4256_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20___boxed(lean_object* v_00_u03b1_4257_, lean_object* v_x_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_){
_start:
{
lean_object* v_res_4264_; 
v_res_4264_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_normalizeInstance_spec__16_spec__20(v_00_u03b1_4257_, v_x_4258_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_);
lean_dec(v___y_4262_);
lean_dec_ref(v___y_4261_);
lean_dec(v___y_4260_);
lean_dec_ref(v___y_4259_);
return v_res_4264_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6(lean_object* v_00_u03b1_4265_, lean_object* v_constName_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_){
_start:
{
lean_object* v___x_4272_; 
v___x_4272_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6___redArg(v_constName_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_);
return v___x_4272_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6___boxed(lean_object* v_00_u03b1_4273_, lean_object* v_constName_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_){
_start:
{
lean_object* v_res_4280_; 
v_res_4280_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6(v_00_u03b1_4273_, v_constName_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_);
lean_dec(v___y_4278_);
lean_dec(v___y_4276_);
lean_dec_ref(v___y_4275_);
return v_res_4280_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8(lean_object* v_00_u03b1_4281_, lean_object* v_ref_4282_, lean_object* v_constName_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_){
_start:
{
lean_object* v___x_4289_; 
v___x_4289_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___redArg(v_ref_4282_, v_constName_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_);
return v___x_4289_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8___boxed(lean_object* v_00_u03b1_4290_, lean_object* v_ref_4291_, lean_object* v_constName_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_){
_start:
{
lean_object* v_res_4298_; 
v_res_4298_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8(v_00_u03b1_4290_, v_ref_4291_, v_constName_4292_, v___y_4293_, v___y_4294_, v___y_4295_, v___y_4296_);
lean_dec(v___y_4296_);
lean_dec(v___y_4294_);
lean_dec_ref(v___y_4293_);
lean_dec(v_ref_4291_);
return v_res_4298_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22(lean_object* v_00_u03b1_4299_, lean_object* v_ref_4300_, lean_object* v_msg_4301_, lean_object* v_declHint_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_){
_start:
{
lean_object* v___x_4308_; 
v___x_4308_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22___redArg(v_ref_4300_, v_msg_4301_, v_declHint_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_);
return v___x_4308_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22___boxed(lean_object* v_00_u03b1_4309_, lean_object* v_ref_4310_, lean_object* v_msg_4311_, lean_object* v_declHint_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_){
_start:
{
lean_object* v_res_4318_; 
v_res_4318_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22(v_00_u03b1_4309_, v_ref_4310_, v_msg_4311_, v_declHint_4312_, v___y_4313_, v___y_4314_, v___y_4315_, v___y_4316_);
lean_dec(v___y_4316_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
lean_dec(v_ref_4310_);
return v_res_4318_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26(lean_object* v_msg_4319_, lean_object* v_declHint_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_){
_start:
{
lean_object* v___x_4326_; 
v___x_4326_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___redArg(v_msg_4319_, v_declHint_4320_, v___y_4324_);
return v___x_4326_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26___boxed(lean_object* v_msg_4327_, lean_object* v_declHint_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_){
_start:
{
lean_object* v_res_4334_; 
v_res_4334_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__24_spec__26(v_msg_4327_, v_declHint_4328_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_);
lean_dec(v___y_4332_);
lean_dec_ref(v___y_4331_);
lean_dec(v___y_4330_);
lean_dec_ref(v___y_4329_);
return v_res_4334_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25(lean_object* v_00_u03b1_4335_, lean_object* v_ref_4336_, lean_object* v_msg_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_){
_start:
{
lean_object* v___x_4343_; 
v___x_4343_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25___redArg(v_ref_4336_, v_msg_4337_, v___y_4338_, v___y_4339_, v___y_4340_, v___y_4341_);
return v___x_4343_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25___boxed(lean_object* v_00_u03b1_4344_, lean_object* v_ref_4345_, lean_object* v_msg_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_){
_start:
{
lean_object* v_res_4352_; 
v_res_4352_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_normalizeInstance_spec__5_spec__6_spec__8_spec__22_spec__25(v_00_u03b1_4344_, v_ref_4345_, v_msg_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_);
lean_dec(v___y_4350_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
lean_dec(v_ref_4345_);
return v_res_4352_;
}
}
lean_object* runtime_initialize_Lean_Meta_Closure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_InstanceNormalForm(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2056448259____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_inferInstanceAs_wrap = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_inferInstanceAs_wrap);
lean_dec_ref(res);
res = l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_74059213____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances);
lean_dec_ref(res);
res = l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_504867867____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_inferInstanceAs_wrap_instances = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_inferInstanceAs_wrap_instances);
lean_dec_ref(res);
res = l_Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2755641687____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_inferInstanceAs_wrap_data = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_inferInstanceAs_wrap_data);
lean_dec_ref(res);
res = l___private_Lean_Meta_InstanceNormalForm_0__Lean_Meta_initFn_00___x40_Lean_Meta_InstanceNormalForm_2034682956____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_InstanceNormalForm(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Closure(uint8_t builtin);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_InstanceNormalForm(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_InstanceNormalForm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_InstanceNormalForm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_InstanceNormalForm(builtin);
}
#ifdef __cplusplus
}
#endif
